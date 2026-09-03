# TwoPuncturesX Bug Report

## Confirmed Bugs

### 1. Stale loop variable `i3D` in debug output — `TwoPunctures.cc:103` and `:144` (bug)

Lines 103 and 144 pass `s_x[i3D]` to `rx3_To_xyz`, but `i3D` is set only in the first loop (lines 47–65) and is never updated in this second loop. The correct variable is `indx` (computed on line 71 and 87 respectively). This makes the debug x-coordinate wrong.

```cpp
// Line 103 — should be s_x[indx], not s_x[i3D]
rx3_To_xyz(nvar, s_x[i3D], r, phi, &(s_y[indx]), &(s_z[indx]), U);

// Line 144 — same bug
rx3_To_xyz(nvar, s_x[i3D], r, phi, &(s_y[indx]), &(s_z[indx]), U);
```

Only affects the debug output path (`do_initial_debug_output`), not the solver.

---

### 2. Wrong mass in antisymmetric lapse denominator — `TwoPunctures.cc:592` (physics bug)

In the `if (r_minus < TP_Extend_Radius)` block for the antisymmetric/averaged lapse, the denominator uses `EXTEND(*mp, r_minus)` (mass of the **+** puncture) but it should use `EXTEND(*mm, r_minus)` (mass of the **−** puncture), to match the numerator:

```cpp
// Lines 591–593
if (r_minus < TP_Extend_Radius) {
  alp[ind] = ((1.0 - 0.5 * EXTEND(*mm, r_minus) - 0.5 * *mp / r_plus) /
              (1.0 + 0.5 * EXTEND(*mp, r_minus) + 0.5 * *mp / r_plus));
              //           ^^^ should be *mm
}
```

The numerator is correct; the denominator is not. This produces a wrong lapse near the minus puncture when using the extended smooth lapse.

---

### 3. Syntax errors in `param.ccl` — lines 101, 106, 111, 116

Four parameter range declarations are missing the opening parenthesis:

```
# line 101 (par_m_plus), 106 (par_m_minus), 111 (target_M_plus), 116 (target_M_minus)
  0.0:*) :: ""   # WRONG — missing leading '('
  (0.0:*) :: ""  # CORRECT
```

This is a CCL syntax error that would cause Cactus to reject the thorn at startup.

---

### 4. Off-by-one in Newton convergence check — `Newton.cc:425`

The `bicgstab` iteration loop runs `for (ii = 0; ii < itmax; ii++)`. After the loop, `ii` equals at most `itmax`. But the "iteration failed" check is:

```cpp
if (ii > itmax)   // always false — ii can never exceed itmax
    return -1;
```

This should be `if (ii >= itmax)`. As written, convergence failure (all iterations exhausted without meeting tolerance) is silently ignored and the function returns success with `ii + 1`.

---

### 5. `BY_KKofxyz` missing epsilon regularization — `Equations.cc:32–37`

`BY_Aijofxyz` applies the epsilon/Tiny smoothing to avoid singularities at the puncture (lines 90–95), but the companion function `BY_KKofxyz` — used in `NonLinEquations` inside the Newton solver — does **not** apply any regularization:

```cpp
// BY_KKofxyz (no smoothing):
r2_plus = (x - par_b)*(x-par_b) + y*y + z*z;
r_plus = sqrt(r2_plus);   // exact — singular at puncture
r3_plus = r_plus * r2_plus;
```

So at the exact puncture location, `BY_KKofxyz` produces a NaN/infinity while `BY_Aijofxyz` (used for the final grid fill) is regularized. This discrepancy means the nonlinear equation and its Jacobian can blow up during solving if any collocation point lands at the puncture.

---

### 6. `use_sources + rescale_sources` hits an intentional `assert(0)` — `TwoPunctures.cc:613`

```cpp
if (use_sources && rescale_sources) {
    assert(0); // TODO: Implement via critical region
```

Anyone enabling both will get an abort. The `param.ccl` default for `rescale_sources` is `"yes"`, so this trap fires automatically when `use_sources = "yes"` without an explicit override. A `CCTK_ERROR` with a descriptive message would be more appropriate.

---

## Summary Table

| # | File | Line(s) | Severity | Description |
|---|------|---------|----------|-------------|
| 1 | `TwoPunctures.cc` | 103, 144 | Low | Stale `i3D` in debug path; should be `indx` |
| 2 | `TwoPunctures.cc` | 592 | **High** | Wrong mass `*mp` in `EXTEND` for minus-puncture lapse denominator |
| 3 | `param.ccl` | 101, 106, 111, 116 | **Critical** | Missing `(` in four parameter ranges — thorn won't load |
| 4 | `Newton.cc` | 425 | Medium | `ii > itmax` is always false; convergence failure undetected |
| 5 | `Equations.cc` | 32–37 | Medium | `BY_KKofxyz` lacks epsilon regularization unlike `BY_Aijofxyz` |
| 6 | `TwoPunctures.cc` | 613 | Medium | `assert(0)` hit whenever `use_sources=yes` (default `rescale_sources=yes`) |
