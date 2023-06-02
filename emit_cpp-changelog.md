## Changes made after June 1st Call
- Assignment to arg_buffer[0] to be casted to void* from int.
- Made argnum use long instead to avoid the loss of precision when casting it from void*.
- changed line 133, assinging function pointers to arg_buffer[1] to be using void* reinterpret cast for converting void*() to void*.
- changed header.h alloc_clo signature from taking in a `void* fptr` to `void*(*fptr)()` and then casted it to `void*` inside its body
- Commented out make_closure in header.h and couple other functions like get_env
- Calling the function closures, we are just casting it to void** now, we need to `decode_clo` it, changed that in emit-cpp.rkt.
    * There seems to be a difference between, functions from prelude and function from the easy, we are not closing over the functions for prelude, only doing it for the functions from user file.
    * `[Didn't do it]` Changing it check the tag to see if it a closure, then decode it, if not just call it directly instead of `decode_clo`.
    * Changed the emit-cpp.rkt for the fully variadic functions to create a closure over the funciton just as we are doing for the fixed-arity functions.
- For the env-ref case in let, we are directly indexing into the array to get the variable, changed it to cast the environment to be a `void**`, so the indexing works.
- At the `creating new closure instance`, we are making a closure and we are passing a closure that we made for a function, shouldn't a closure contain a functionptr instead of another closure pointer, not sure how to take this, changing the o/p file to see what resolves and then check for other issues if any while running the file.
    * Naah, just above that line we made a function ptr for that function, I think instead of using that we are usign the cloptr, switching it to ptr created in the line above.
    * Also changed the ptrName we create to use `void *(*)()` instead of `void (*)()`.
- Changed the cons cell creation loop to take only the arguments from the arg_buffer and put them into a list.

- the env-ref idx seems to start from 1 instead of 0, so changed to idx-1 in the env-ref let form.
- `[Ddin't do it]`Have to change the prim_cons function in the header file to be able to take either two elements or first one element and the second one a cons cell, right know it looks like it only setup to ty.
    * changed the decode of int
- Have to see if the get_tag function is neccessary in the header file.