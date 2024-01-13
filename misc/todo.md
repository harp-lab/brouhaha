## TODO
- Track your todo's here

### Run Time -> Sowmith
- [ ] Add hash-keys function for bottom level linked lists in hamt
- [X] Add ability to hash ~~sets~~, ~~lists~~ and ~~hashes~~.
  * [ ] think about having to hash cons with booleans.. 
- [X] Printing for ~~sets~~ and ~~hashes~~.
  * [ ] Normalize the order of printing to DFS.
- [ ] Think about stress testing hamt to make sure new hash functionality is sound on all levels of hamt.
- [ ] add more tests for untouched branches of the compiler.
- [X] Transitive Closure
- [ ] Think about a naming convention for symbols in prelude.hpp/emit-cpp to eliminate the possibility of any naming conflict.
- [ ]  No arguments cases for prims (+), (-), (hash)
- [ ]  Normalize the use comparing the actual values and comparing the hashes for equality check across types and make choices.

### Slog-Facts Search -> Sowmith
- [x] Search Works
- [x] Test the search
- [ ] Write doc strings above all the functions
- [ ] Bench the search against naive sorted list search implementation
#### Sowmith Misc
- [ ] Implement an iterator for HAMT.
