#include <stdio.h>
#include <string.h>
#include "../../header.h"
using namespace std;

void *_u43() // +
{
    // reading number of args
    int numArgs = reinterpret_cast<int>(arg_buffer[0]);
    // reading dummy variable
    void *_4923 = arg_buffer[1];
    // building cons cell

    void *lst = encode_null();
    for (int i = arg_num - 1; i >= 1; --i)
    {
        lst = prim_cons(arg_buffer[i], lst);
    }

    void *kont4918 = prim_car(lst);
    void *lst = prim_cdr(lst);
    void *x4914 = apply_prim__u43(lst);

    // clo-app
    arg_buffer[1] = kont4918;
    arg_buffer[2] = x4914;
    arg_buffer[0] = 2;
    auto function_ptr = reinterpret_cast<void (*)()>(((void **)kont4918)[0]);
    // assign buffer size to arg_num
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *call_fptr() // call
{
    // reading number of args
    int numArgs = reinterpret_cast<int>(arg_buffer[0]);
    // reading env
    void *_4926 = arg_buffer[1];
    // reading env and args
    void *kont4920 = arg_buffer[2];
    void *a4915 = reinterpret_cast<void *>(encode_int((s32)10));
    void *a4916 = reinterpret_cast<void *>(encode_int((s32)12));

    // clo-app
    arg_buffer[1] = _u43;
    arg_buffer[2] = kont4920;
    arg_buffer[3] = a4915;
    arg_buffer[4] = a4916;
    arg_buffer[0] = 4;
    auto function_ptr = reinterpret_cast<void (*)()>(((void **)_u43)[0]);
    // assign buffer size to arg_num
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void *lam4927_fptr() // lam4927
{
    // reading number of args
    int numArgs = reinterpret_cast<int>(arg_buffer[0]);
    // reading env
    void *env4928 = arg_buffer[1];
    // reading env and args
    void *x4917 = arg_buffer[2];
    void *kont4921 = env4928[1];

    // clo-app
    arg_buffer[1] = kont4921;
    arg_buffer[2] = x4917;
    arg_buffer[0] = 2;
    auto function_ptr = reinterpret_cast<void (*)()>(((void **)kont4921)[0]);
    // assign buffer size to arg_num
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam4927 = encode_clo(alloc_clo(lam4927_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    int numArgs = reinterpret_cast<int>(arg_buffer[0]);
    // reading env
    void *_4929 = arg_buffer[1];
    // reading env and args
    void *kont4921 = arg_buffer[2];

    // creating new closure instance
    auto ptr5434 = reinterpret_cast<void (*)()>(&lam4927_fptr);
    void **clo5435 = alloc_clo(lam4927, 1);

    // setting env list
    clo5435[1] = kont4921;
    void *f4922 = encode_clo(clo5435);

    // clo-app
    arg_buffer[1] = call;
    arg_buffer[2] = f4922;
    arg_buffer[0] = 2;
    auto function_ptr = reinterpret_cast<void (*)()>(((void **)call)[0]);
    // assign buffer size to arg_num
    //  call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
    void **clo5438 = alloc_clo(&fhalt, 0);
    void *ptr5436 = encode_clo(clo5438);
    // making a call to the brouhaha main function to kick off our c++ emission.
    auto function_ptr = reinterpret_cast<void (*)()>(brouhaha_main);
    arg_buffer[0] = 0;
    function_ptr();
    return 0;
}
