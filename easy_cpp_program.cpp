#include <stdio.h>
// #include <string.h>
#include "prelude.h"
#include "gmp_func.h"
using namespace std;

void *_u43_fptr() // +
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_4931 = arg_buffer[1];
    // building cons cell

    void *lst = encode_null();
    for (int i = numArgs; i >= 2; i--)
    {
        lst = prim_cons(arg_buffer[i], lst);
    }

    void *kont49194924 = prim_car(lst);
    void *lst4925 = prim_cdr(lst);
    void *x49154926 = apply_prim__u43(lst4925);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont49194924);
    arg_buffer[2] = x49154926;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49194924))[0]);
    // assign buffer size to numArgs
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void *call_fptr() // call
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_4934 = arg_buffer[1];
    // reading env and args
    void *kont4921 = arg_buffer[2];
    // Dummy comment
    mpz_t* temp1 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*temp1, "12", 10);
    mpz_t* temp2 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*(reinterpret_cast<mpz_t *>(temp2)), "12", 10);

    void *a49164927 = reinterpret_cast<void *>(encode_mpz(temp1));
    // void *a49164927 = 0;
    void *a49174928 = reinterpret_cast<void *>(encode_mpz(temp2));
    // void *a49174928 = 0;

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u43);
    arg_buffer[2] = kont4921;
    arg_buffer[3] = a49164927;
    arg_buffer[4] = a49174928;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
    // assign buffer size to numArgs
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void *lam4935_fptr() // lam4935
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env4936 = arg_buffer[1];
    // reading env and args
    void *x49184930 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont4922 = (decode_clo(env4936))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont4922);
    arg_buffer[2] = x49184930;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4922))[0]);
    // assign buffer size to numArgs
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam4935 = encode_clo(alloc_clo(lam4935_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_4937 = arg_buffer[1];
    // reading env and args
    void *kont4922 = arg_buffer[2];
    // Dummy comment

    // creating new closure instance
    void **clo5443 = alloc_clo(lam4935_fptr, 1);

    // setting env list
    clo5443[1] = kont4922;
    void *f49234929 = encode_clo(clo5443);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call);
    arg_buffer[2] = f49234929;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
    // assign buffer size to numArgs
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
    mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);
    // making a call to the brouhaha main function to kick off our c++ emission.
    void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
    arg_buffer[0] = 0;
    arg_buffer[2] = fhalt_clo;
    function_ptr();
    return 0;
}
