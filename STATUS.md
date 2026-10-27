# AH-1G - status

Where the pack is, what is settled, and what is next. Updated after every task.

Started 2026-10-27 on HeliSim Core 1.4.2.0. Built from the OH-6A pack
(`BradMicks-HeliSim-OH6A`, `c5ca377`), following Core's `docs/AIRCRAFT_GUIDE.md`. Local git
repo; not yet on GitHub.

## Where it is

| # | Work | State |
|---|---|---|
| 1 | Pack scaffold from the OH-6A, renamed, OH-6A values as `TODO(AH1G)` placeholders | **Done** - `hemtt check` clean |

## The airframe in game

From the config viewer (`vn_b_air_ah1g_02`, 2026-10-27):

- Mod: S.O.G. Prairie Fire (CDLC), author Savage Game Design.
- Parents: `vn_air_ah1g_02_base` > `vn_air_ah1g_01_base` > `vn_helicopter_base` > `Helicopter_Base_H`.
- `bmkhsBaseClass = "vn_air_ah1g_01_base"` - the AH-1G variants inherit from it.
- Seen on `vn_b_air_ah1g_02`: `backRotorForceCoef` 1.2, `bodyFrictionCoef` 0.431. Not yet checked
  which class declares them.

## Scaffold notes (task 1)

- Not copied from the OH-6A: `fm.p3d`, the image planes, `tools/oh6a_ratings.txt`, STATUS.
- Every flight file in `config/bmkhs_config/` is the OH-6A's, marked `TODO(AH1G)` at the top; the
  comments inside still name their OH-6A sources.
- One engine, no systems, boost only - as the OH-6A. Check against the AH-1G.

## Placeholders still to replace

| File | Still a placeholder |
|---|---|
| `config.cpp` | `requiredAddons` - `loadorder_f_vietnam` until the SOG addon is read with `configSourceAddonList` |
| `cfgVehicles.hpp` | whether a class below `vn_air_ah1g_01_base` sets the force coefficients again |
| `fm.p3d` | none - build the AH-1G's, then regenerate `helisim_fuselage.hpp` and `helisim_wings.hpp` |
| `helisim_engine.hpp` | the OH-6A's T63-A-5A - the AH-1G has one T53-L-13 |
| `helisim_simpleRotor.hpp` | the OH-6A's rotors and tables - the AH-1G has a 2-blade teetering main rotor and a 2-blade tail rotor |
| `helisim_mass.hpp` | every mass, arm, CG limit and seat; loadout for the AH-1G's stations and turret |
| `helisim_fuel.hpp` | tank, capacity and arm |
| `helisim_flightControls.hpp` | boost only, as the OH-6A - confirm what the AH-1G has (SCAS?) |
