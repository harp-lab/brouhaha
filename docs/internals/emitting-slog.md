# Emitting Slog
- This file talks about how `./emit-slog.rkt` works.
- Alphatized brouhaha is taken from the compiler and is converted to facts for analysis in `slog`.
- The conversion from `brouhaha` to facts for slog is done by this module.

### `write-program-for-slog`
- Holds all the functions required for the conversion to facts.
- Gets called by the compiler with the program to convert as a string.
- How: High Level View
  - emit-top-level-env function is called to create the top level env, containing all the top level functions.
  - Then this top level is used as a base, and write-def is called on every function in the file.
  - All of this is appended and written as base-facts.
- returns the big string created above.

### `emit-top-level-env`
- Creates the `top-level-env` fact, which holds a bunch of env-set's with functions in each.
- two types of functions are compiled to facts, normal user `defines` and prelude only `define-prim`

### `write-def`
- Takes three types of functions, creates the store facts for them, the types are
  - `define` with fixed-param
  - `define` with var-param
  - `define-prim`
- `write-exp` is called each of the functions body's

### `write-exp`
- A bunch of forms get converted into their respective forms. 

#### Nav
- [internals](./internals.md)
- [main-page](../docs.md)