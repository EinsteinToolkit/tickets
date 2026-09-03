import h5py
import numpy

N_ang_ghost_pts = 4
for fn in ["stereo_p", "stereo_q", "stereo_pp"]:
    proc1 = h5py.File("1proc/regression_test/"+fn+".h5")
    
    coords_1proc = proc1["/NULLGRID::"+fn+" timelevel 0 at iteration 0"][:]
    
    coords_2proc = numpy.zeros(coords_1proc.shape)
    
    proc2 = h5py.File("2proc/regression_test/"+fn+"_2d/"+fn+".file_0.h5")
    data = proc2["/NULLGRID::"+fn+" timelevel 0 at iteration 0/chunk0"]
    origin = data.attrs["chunk_origin"]
    
    coords_2proc[origin[1]:(origin[1]+data.shape[0]),origin[0]:(origin[0]+data.shape[1])] = data[:]
    
    proc2 = h5py.File("2proc/regression_test/"+fn+"_2d/"+fn+".file_1.h5")
    data = proc2["/NULLGRID::"+fn+" timelevel 0 at iteration 0/chunk0"]
    origin = data.attrs["chunk_origin"]
    
    coords_2proc[origin[1]:(origin[1]+data.shape[0]),origin[0]:(origin[0]+data.shape[1])] = data[:]
    
    coords_diff = coords_1proc - coords_2proc
    
    numpy.savetxt("coords_diff_"+fn+".asc", coords_diff)
    
    if numpy.any(coords_diff != 0.):
        print "Coordinates differ"
