## TODO
- Track your todo's here

### Sowmith
- [ ] Add hash-keys function for bottom level linked lists in hamt
- [X] Add ability to hash ~~sets~~, ~~lists~~ and ~~hashes~~.
  * [ ] think about having to hash cons with booleans.. 
- [X] Printing for ~~sets~~ and hashes.
  * [ ] Normalize the order of printing to DFS.
- [ ] Think about stress testing hamt to make sure new hash functionality is sound on all levels of hamt.
- [ ] add more tests for untouched branches of the compiler.
- [X] Transitive Closure
- [ ] Think about a naming convention for symbols in prelude.hpp/emit-cpp to eliminate the possibility of any naming conflict.
- [ ]  No arguments cases for prims (+), (-), (hash)
- [ ]  Normalize the use comparing the actual values and comparing the hashes for equality check across types and make choices.

#### Sowmith Misc
- [ ] Implement an iterator for HAMT.


### Compiler
- Look at the CPS convert functions [2:00] and consider inlining T-ae cases into the below match.

### Testing
- Add tests that have partial variadic functions, that have a couple mandatory arguments and the . notation.


### Plugging Analysis
- Compiler should run slog after the desugar and do some magic based on the results of that analysis.
- Compiler should canonicalize the order of defines or something and then we should hash it and attach(cache) the slog analysis to that hash.
- So that we don't run slog analysis, everytime we run the compile.rkt.
