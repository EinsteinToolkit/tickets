#include <cctk.h>
#include <cctk_Parameters.h>

#include <carpet.hh>

#include "boundary.hh"
#include "property.hh"

// Consistency properties for the grid structure



namespace CarpetRegrid2 {
  
  using namespace Carpet;
  
  
  
  // Each property consists of a test, which returns true or false
  // depending on whether the property is satisfied, and an action
  // that enforces the property.
  
  bool property::
  test (gh const& hh, dh const& dd,
        level_boundary const& bnd,
        vector<ibset> const& regions, int const rl)
  {
    assert (rl>=0 and rl<int(regions.size()));
    return test_impl (hh, dd, bnd, regions, rl);
  }
  
  void property::
  enforce (gh const& hh, dh const& dd,
           level_boundary const& bnd,
           vector<ibset>& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    if (test(hh, dd, bnd, regions, rl)) return;
    enforce_impl (hh, dd, bnd, regions, rl);
    assert (test(hh, dd, bnd, regions, rl));
  }
  
  
  
  //////////////////////////////////////////////////////////////////////////////
  // Ensure that this grid contains the next finer grid
  //////////////////////////////////////////////////////////////////////////////
  
  ibset proper_nesting::
  enlarged_fine_grid (gh const& hh, dh const& dd,
                      level_boundary const& bnd,
                      vector<ibset> const& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    rvect physical_lower, physical_upper;
    rvect spacing;
    get_physical_boundary (physical_lower, physical_upper, spacing);
    
    // Adapt spacing for convergence level
    spacing *= ipow ((CCTK_REAL) mgfact, basemglevel);
    
    rvect exterior_lower, exterior_upper;
    calculate_exterior_boundary (physical_lower, physical_upper,
                                 exterior_lower, exterior_upper,
                                 spacing);
    
    rvect const origin (exterior_lower);
    rvect const scale (rvect (hh.baseextent(0,0).stride()) / spacing);
    
    // This is the location of the outermost grid points. For cell
    // centring, these are 1/2 grid spacing inside of the location of
    // the boundary.
    ivect const level_physical_ilower =
      rpos2ipos (physical_lower, origin, scale, hh, rl);
    ivect const level_physical_iupper =
      rpos2ipos1 (physical_upper, origin, scale, hh, rl);
    
    // The minimum amount of space required between the boundaries of
    // this and the next finer grid. We need a certain amount of space
    // on the coarse and a certain amount on the fine grid.
    i2vect const fdistance = dd.ghost_widths.at(rl);
    i2vect const cdistance =
      i2vect(min_distance + dd.prolongation_stencil_size(rl));
    
    ibset enlarged;
    
    // Loop over all bboxes that make up the next finer level
    for (ibset::const_iterator ibb = regions.at(rl+1).begin();
         ibb != regions.at(rl+1).end();
         ++ ibb)
    {
      ibbox const& fbb = *ibb;
      
      // Find out which faces are on a boundary
      bvect const lower_is_outer = fbb.lower() <= level_physical_ilower;
      bvect const upper_is_outer = fbb.upper() >= level_physical_iupper;
      b2vect const ob (lower_is_outer, upper_is_outer);
      
      ibbox const domext = hh.baseextent(0,rl);
      
      // Enlarge the bbox, first on the fine grid, then transfer it to
      // the coarse grid, then enlarge it again
      ibbox const ebb = fbb.expand (i2vect(not ob) * fdistance);
      ibbox const cbb = ebb.expanded_for (domext);
      ibbox const ecbb = cbb.expand (i2vect(not ob) * cdistance);
      
      // Add it
      enlarged |= snap_ibbox(ecbb, hh, rl);
    }
    
    return enlarged;
  }
  
  bool proper_nesting::
  test_impl (gh const& hh, const dh& dd,
             level_boundary const& bnd,
             vector<ibset> const& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    if (not ensure_proper_nesting) return true;
    if (rl == int(regions.size()) - 1) return true;
    
    ibset const enlarged = enlarged_fine_grid (hh, dd, bnd, regions, rl);
    
    // Test whether the enlarged fine level is contained in this level
    return enlarged <= regions.AT(rl);
  }
  
  void proper_nesting::
  enforce_impl (gh const& hh, dh const& dd,
                level_boundary const& bnd,
                vector<ibset>& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    assert (ensure_proper_nesting);
    
    if (veryverbose) {
      cout << "Refinement level " << rl << ": ensuring proper nesting...\n";
    }
    
    ibset const enlarged = enlarged_fine_grid (hh, dd, bnd, regions, rl);
    
    // Enlarge the level
    regions.AT(rl) = enlarged;
    
    if (veryverbose) {
      cout << "   New regions are " << regions.at(rl) << "\n";
    }
  }
  
  
  
  //////////////////////////////////////////////////////////////////////////////
  // Add buffer zones (do this only once)
  //////////////////////////////////////////////////////////////////////////////
  
  bool add_buffers::
  test_impl (gh const& hh, dh const& dd,
             level_boundary const& bnd,
             vector<ibset> const& regions, int const rl)
  {
    // This should not be tested because it has to be applied
    // unconditionally and only once
    return true;
  }
  
  void add_buffers::
  enforce_impl (gh const& hh, dh const& dd,
                level_boundary const& bnd,
                vector<ibset>& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    if (veryverbose) {
      cout << "Refinement level " << rl << ": adding buffer zones...\n";
    }
    
    ibset buffered;
    for (ibset::const_iterator
           ibb = regions.at(rl).begin(); ibb != regions.at(rl).end(); ++ ibb)
    {
      ibbox const& bb = *ibb;
      ibbox const bbb = bb.expand (dd.buffer_widths.at(rl));
      buffered |= bbb;
    }
    regions.at(rl) = buffered;
    
    if (veryverbose) {
      cout << "   New regions are " << regions.at(rl) << "\n";
    }
  }
  
  
  
  //////////////////////////////////////////////////////////////////////////////
  // Combine all regions into a single region, if this is worthwhile
  //////////////////////////////////////////////////////////////////////////////
  
  ibbox combine_regions::
  combined_regions (gh const& hh, dh const& dd,
                    level_boundary const& bnd,
                    vector<ibset> const& regions, int const rl)
  {
    ibbox single;
    for (ibset::const_iterator
           ibb = regions.at(rl).begin(); ibb != regions.at(rl).end(); ++ ibb)
    {
      ibbox const& bb = *ibb;
      single = single.expanded_containing (bb);
    }
    return single;
  }
  
  bool combine_regions::
  test_impl (gh const& hh, dh const& dd,
             level_boundary const& bnd,
             vector<ibset> const& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    ibbox const single = combined_regions (hh, dd, bnd, regions, rl);
    
    CCTK_REAL const regions_size =
      static_cast <CCTK_REAL> (regions.at(rl).size());
    CCTK_REAL const single_size =
      static_cast <CCTK_REAL> (single.size());
    
    // Would a single bbox too inefficient?
    // TODO: Check this also for pairs of regions
    return regions_size < min_fraction * single_size;
  }
  
  void combine_regions::
  enforce_impl (gh const& hh, dh const& dd,
                level_boundary const& bnd,
                vector<ibset>& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    if (veryverbose) {
      cout << "Refinement level " << rl << ": combining regions...\n";
    }
    
    regions.at(rl) = combined_regions (hh, dd, bnd, regions, rl);
    
    if (veryverbose) {
      cout << "   New regions are " << regions.at(rl) << "\n";
    }
  }
  
  
  
  //////////////////////////////////////////////////////////////////////////////
  // Make the boxes rotating-90 symmetric
  //////////////////////////////////////////////////////////////////////////////
  
  ibset rotsym90::
  symmetrised_regions (gh const& hh, dh const& dd, level_boundary const& bnd,
                       vector<ibset> const& regions, int const rl)
  {
    ibset symmetrised;
    for (ibset::const_iterator
           ibb = regions.at(rl).begin(); ibb != regions.at(rl).end(); ++ ibb)
    {
      ibbox const& bb = *ibb;
      
      bvect const lower_is_outside_lower =
        bb.lower() - bnd.min_bnd_dist_away[0] * bb.stride() <=
        bnd.level_physical_ilower;
      
      // Treat both x and y directions
      for (int dir=0; dir<=1; ++dir) {
        if (lower_is_outside_lower[dir]) {
          ivect const ilo = bb.lower();
          ivect const iup = bb.upper();
          ivect const istr = bb.stride();
          
          // Origin
          rvect const axis (bnd.physical_lower[0],
                            bnd.physical_lower[1],
                            bnd.physical_lower[2]); // z component is unused
          ivect const iaxis0 = rpos2ipos (axis, bnd.origin, bnd.scale, hh, rl);
          assert (all (iaxis0 % istr == 0));
          ivect const iaxis1 = rpos2ipos1 (axis, bnd.origin, bnd.scale, hh, rl);
          assert (all (iaxis1 % istr == 0));
          ivect const offset = iaxis1 - iaxis0;
          assert (all (offset % istr == 0));
          assert (all (offset >= 0 and offset < 2*istr));
          assert (all ((iaxis0 + iaxis1 - offset) % (2*istr) == 0));
          ivect const iaxis = (iaxis0 + iaxis1 - offset) / 2;
          // negated (reflected) domain boundaries
          ivect const neg_ilo = (2*iaxis+offset) - ilo;
          ivect const neg_iup = (2*iaxis+offset) - iup;
          // offset to add when permuting directions
          ivect const permute01 (-iaxis[0]+iaxis[1], -iaxis[1]+iaxis[0], 0);
          
          // Rotate 90 degrees about z axis
          ivect new_ilo, new_iup;
          if (dir==0) {
            // rotate clockwise
            new_ilo = ivect (ilo[1], neg_iup[0], ilo[2]) + permute01;
            new_iup = ivect (iup[1], neg_ilo[0], iup[2]) + permute01;
          }
          if (dir==1) {
            // rotate counterclockwise
            new_ilo = ivect (neg_iup[1], ilo[0],  ilo[2]) + permute01;
            new_iup = ivect (neg_ilo[1],  iup[0],  iup[2]) + permute01;
          }
          ivect const new_istr (istr);
          
          ibbox const new_bb (new_ilo, new_iup, new_istr);
          // Will be clipped later
          // assert (new_bb.is_contained_in (baseextent));
          
          symmetrised |= new_bb;
        }
      }
    }
    
    return symmetrised;
  }
  
  bool rotsym90::
  test_impl (gh const& hh, dh const& dd,
             level_boundary const& bnd,
             vector<ibset> const& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    if (not symmetry_rotating90) return true;
    
    ibset const symmetrised = symmetrised_regions (hh, dd, bnd, regions, rl);
    return regions.AT(rl) == symmetrised;
  }
  
  void rotsym90::
  enforce_impl (gh const& hh, dh const& dd,
                level_boundary const& bnd,
                vector<ibset>& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    assert (symmetry_rotating90);
    
    if (veryverbose) {
      cout << "Refinement level " << rl << ": making regions rotating-90 symmetric...\n";
    }
    
    regions.AT(rl) = symmetrised_regions (hh, dd, bnd, regions, rl);
    
    if (veryverbose) {
      cout << "   New regions are " << regions.at(rl) << "\n";
    }
  }
  
  
  
  //////////////////////////////////////////////////////////////////////////////
  // Make the boxes rotating-180 symmetric
  //////////////////////////////////////////////////////////////////////////////
  
  ibset rotsym180::
  symmetrised_regions (gh const& hh, dh const& dd,
                       level_boundary const& bnd,
                       vector<ibset> const& regions, int const rl)
  {
    ibbox const& baseextent = hh.baseextent(0,rl);
    
    ibset symmetrised;
    for (ibset::const_iterator
           ibb = regions.at(rl).begin(); ibb != regions.at(rl).end(); ++ ibb)
    {
      ibbox const& bb = *ibb;
      
      bvect const lower_is_outside_lower =
        bb.lower() - bnd.min_bnd_dist_away[0] * bb.stride() <=
        bnd.level_physical_ilower;
      
      // Treat x direction
      int const dir = 0;
      if (lower_is_outside_lower[dir]) {
        ivect const ilo = bb.lower();
        ivect const iup = bb.upper();
        ivect const istr = bb.stride();
        assert (istr[0] == istr[1]);
        
        // Origin
        assert (hh.refcent == vertex_centered or all (istr % 2 == 0));
        rvect const axis (bnd.physical_lower[0],
                          (bnd.physical_lower[1] + bnd.physical_upper[1]) / 2,
                          bnd.physical_lower[2]); // z component is unused
        ivect const iaxis0 = rpos2ipos (axis, bnd.origin, bnd.scale, hh, rl);
        assert (all ((iaxis0 - baseextent.lower()) % istr == 0));
        ivect const iaxis1 = rpos2ipos1 (axis, bnd.origin, bnd.scale, hh, rl);
        assert (all ((iaxis1 - baseextent.lower()) % istr == 0));
        ivect const offset = iaxis1 - iaxis0;
        assert (all (offset % istr == 0));
        if (hh.refcent == vertex_centered) {
          assert (all (offset >= 0 and offset < 2*istr));
          assert (all ((iaxis0 + iaxis1 - offset) % (2*istr) == 0));
        } else {
          // The offset may be negative because both boundaries are
          // shifted inwards by 1/2 grid spacing, and therefore iaxis0
          // < iaxis1 + istr
          assert (all (offset >= -istr and offset < istr));
          assert (all ((iaxis0 + iaxis1 - offset) % (2*istr) == istr));
          assert (all (istr % 2 == 0));
        }
        ivect const iaxis = (iaxis0 + iaxis1 - offset) / 2;
        ivect const neg_ilo = (2*iaxis+offset) - ilo;
        ivect const neg_iup = (2*iaxis+offset) - iup;
        
        // Rotate 180 degrees about z axis
        ivect const new_ilo (neg_iup[0], neg_iup[1], ilo[2]);
        ivect const new_iup (neg_ilo[0], neg_ilo[1], iup[2]);
        ivect const new_istr (istr);
        
        ibbox const new_bb (new_ilo, new_iup, new_istr);
        // Will be clipped later
        // assert (new_bb.is_contained_in (baseextent));
        
        symmetrised |= new_bb;
      }
    }
    
    return symmetrised;
  }
  
  bool rotsym180::
  test_impl (gh const& hh, dh const& dd,
             level_boundary const& bnd,
             vector<ibset> const& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    if (not symmetry_rotating180) return true;
    
    ibset const symmetrised = symmetrised_regions (hh, dd, bnd, regions, rl);
    return regions.AT(rl) == symmetrised;
  }
  
  void rotsym180::
  enforce_impl (gh const& hh, dh const& dd,
                level_boundary const& bnd,
                vector<ibset>& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    assert (symmetry_rotating180);
    
    if (veryverbose) {
      cout << "Refinement level " << rl << ": making regions rotating-180 symmetric...\n";
    }
    
    regions.AT(rl) = symmetrised_regions (hh, dd, bnd, regions, rl);
    
    if (veryverbose) {
      cout << "   New regions are " << regions.at(rl) << "\n";
    }
  }
  
  
  
  //////////////////////////////////////////////////////////////////////////////
  // Clip at the outer boundary
  //////////////////////////////////////////////////////////////////////////////
  
  ibset boundary_clip::
  clipped_regions (gh const& hh, dh const& dd,
                   level_boundary const& bnd,
                   vector<ibset> const& regions, int const rl)
  {
    ibbox const& baseextent = hh.baseextent(0,rl);
    
    ibset clipped;
    for (ibset::const_iterator
           ibb = regions.at(rl).begin(); ibb != regions.at(rl).end(); ++ ibb)
    {
      ibbox const& bb = *ibb;
      
      // Clip boxes that extend outside the boundary. Enlarge boxes
      // that are inside but too close to the outer boundary.
      bvect const lower_is_outside_lower =
        bb.lower() - bnd.min_bnd_dist_away[0] * bb.stride() <=
        bnd.level_physical_ilower;
      // Remove bboxes that are completely outside.
      bvect const upper_is_outside_lower =
        bb.upper() < bnd.level_physical_ilower;
      // Enlarge bboxes that extend not far enough inwards.
      bvect const upper_is_almost_outside_lower =
        bb.upper() <
        bnd.level_physical_ilower + bnd.min_bnd_dist_incl[0] * bb.stride();
      
      // Ditto for the upper boundary.
      bvect const upper_is_outside_upper =
        bb.upper() + bnd.min_bnd_dist_away[1] * bb.stride() >=
        bnd.level_physical_iupper;
      bvect const lower_is_outside_upper =
        bb.lower() > bnd.level_physical_iupper;
      bvect const lower_is_almost_outside_upper =
        bb.lower() >
        bnd.level_physical_iupper - bnd.min_bnd_dist_incl[1] * bb.stride();
      
      assert (not any (lower_is_almost_outside_upper and
                       lower_is_outside_lower));
      assert (not any (upper_is_almost_outside_lower and
                       upper_is_outside_upper));
      
      if (any (upper_is_outside_lower or lower_is_outside_upper)) {
        // The box is completely outside. Ignore it.
        continue;
      }
          
      if (any ((lower_is_outside_lower and
                bnd.boundary_staggering_mismatch[0]) or
               (upper_is_outside_upper and
                bnd.boundary_staggering_mismatch[1])))
      {
        ostringstream msg;
        msg << "Level " << rl << " of the refinement hierarchy has inconsistent bountary staggering."
            << "  The refined region extends up to the boundary, but the staggering of the boundary is different from the staggering of the mesh refinement."
            << "  lower_is_outside_lower=" << lower_is_outside_lower
            << "  upper_is_outside_upper=" << upper_is_outside_upper
            << "  boundary_staggering_mismatch=" << bnd.boundary_staggering_mismatch
            << "  level_physical_ilower=" << bnd.level_physical_ilower
            << "  level_physical_iupper=" << bnd.level_physical_iupper
            << "  baseextent=" << baseextent;
        CCTK_WARN (CCTK_WARN_ABORT, msg.str().c_str());
      }
      
      ibbox const clipped_bb
        (either (lower_is_outside_lower,
                 bnd.level_exterior_ilower,
                 either (lower_is_almost_outside_upper,
                         (bnd.level_physical_iupper -
                          bnd.min_bnd_dist_incl[1] * bb.stride()),
                         bb.lower())),
         either (upper_is_outside_upper,
                 bnd.level_exterior_iupper,
                 either (upper_is_almost_outside_lower,
                         (bnd.level_physical_ilower +
                          bnd.min_bnd_dist_incl[0] * bb.stride()),
                         bb.upper())),
         bb.stride());
      if (not clipped_bb.is_contained_in (baseextent)) {
        ostringstream msg;
        msg << "Level " << rl << " of the refinement hierarchy is not contained in the simulation domain."
            << "  (There may be too many ghost or buffer zones.)"
            << "  One bbox is " << clipped_bb << "."
            << "  lower_is_outside_lower=" << lower_is_outside_lower
            << "  upper_is_outside_upper=" << upper_is_outside_upper
            << "  lower_is_almost_outside_upper=" << lower_is_almost_outside_upper
            << "  upper_is_almost_outside_lower=" << upper_is_almost_outside_lower
            << "  level_exterior_ilower=" << bnd.level_exterior_ilower
            << "  level_exterior_iupper=" << bnd.level_exterior_iupper
            << "  level_physical_ilower=" << bnd.level_physical_ilower
            << "  level_physical_iupper=" << bnd.level_physical_iupper
            << "  baseextent=" << baseextent;
        CCTK_WARN (CCTK_WARN_ABORT, msg.str().c_str());
      }
      assert (clipped_bb.is_contained_in (baseextent));
      
      clipped |= clipped_bb;
    }
    
    return clipped;
  }
  
  bool boundary_clip::
  test_impl (gh const& hh, dh const& dd,
             level_boundary const& bnd,
             vector<ibset> const& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    ibset const clipped = clipped_regions (hh, dd, bnd, regions, rl);
    return regions.AT(rl) == clipped;
  }

  void boundary_clip::
  enforce_impl (gh const& hh, dh const& dd,
                level_boundary const& bnd,
                vector<ibset>& regions, int const rl)
  {
    DECLARE_CCTK_PARAMETERS;
    
    if (veryverbose) {
      cout << "Refinement level " << rl << ": clipping at outer boundary...\n";
    }
    
    regions.AT(rl) = clipped_regions (hh, dd, bnd, regions, rl);
    
    if (veryverbose) {
      cout << "   New regions are " << regions.at(rl) << "\n";
    }
  }
  
  
  
  //////////////////////////////////////////////////////////////////////////////
  // Ensure that this grid is contained in the domain
  //////////////////////////////////////////////////////////////////////////////
  
  bool in_domain::
  test_impl (gh const& hh, dh const& dd,
             level_boundary const& bnd,
             vector<ibset> const& regions, int const rl)
  {
    return regions.at(rl) <= hh.baseextent(0,rl);
  }
  
  void in_domain::
  enforce_impl (gh const& hh, dh const& dd,
                level_boundary const& bnd,
                vector<ibset>& regions, int const rl)
  {
    // There is nothing we can do here, since we can't enlarge the
    // domain
    CCTK_WARN (CCTK_WARN_ABORT, "internal error");
  }
  
  
  
} // namespace CarpetRegrid2
