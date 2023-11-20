#include <stdio.h>
#include <string.h>
#include "gmp_func.h"
#include "../prelude.hpp"
void *_u43_fptr() // +
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    if(numArgs == 3)
    {
        return *_u43_fptr_spec(arg_buffer[4], arg_buffer[3], arg_buffer[2]);
    }
    void *_18388 = arg_buffer[1];
    void *lst;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        lst = arg_buffer[2];
    }
    else
    {
        // building cons cell
        lst = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            lst = prim_cons(arg_buffer[i], lst);
        }
    }

    void *kont18272 = prim_car(lst);
    void *lst18376 = prim_cdr(lst);
    void *xy18166 = apply_prim__u43(lst18376);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont18272);
    arg_buffer[2] = xy18166;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont18272))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void *_u43_fptr_spec(void* x, void* y, void* z)
{
    // call the run time function for the operation with x, y, z.
}
