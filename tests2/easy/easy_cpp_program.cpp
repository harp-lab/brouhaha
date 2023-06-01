#include <stdio.h>
#include <string.h>
#include "../../header.h"
using namespace std;

void *_u43() // +
{
    // reading env
    void *_4923 = arg_buffer[0];
    // building cons cell

    void *lst = encode_null();
    for (int i = arg_num - 1; i >= 1; --i)
    {
        lst = prim_cons(arg_buffer[i], lst);
    }

    void *kont4918 = prim_car(lst);
    void *lst2 = prim_cdr(lst);
    void *x4914 = apply_prim__u43(lst2);

    // clo-app
    arg_buffer.clear();
    arg_buffer.push_back(reinterpret_cast<void *>(_4923));
    arg_buffer.push_back(reinterpret_cast<void *>(x4914));
    auto function_ptr = reinterpret_cast<void (*)()>(get_closure_ptr(kont4918));
    // assign buffer size to arg_num
    arg_num = arg_buffer.size();
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *call() // call
{
    // reading env
    void *_4926 = arg_buffer[0];
    // reading other params
    void *kont4920 = arg_buffer[1];
    void *a4915 = reinterpret_cast<void *>(encode_int((s32)1));
    void *a4916 = reinterpret_cast<void *>(encode_int((s32)2));

    // clo-app
    arg_buffer.clear();
    arg_buffer.push_back(reinterpret_cast<void *>(_4926));
    arg_buffer.push_back(reinterpret_cast<void *>(kont4920));
    arg_buffer.push_back(reinterpret_cast<void *>(a4915));
    arg_buffer.push_back(reinterpret_cast<void *>(a4916));
    auto function_ptr = reinterpret_cast<void (*)()>(_u43);
    // assign buffer size to arg_num
    arg_num = arg_buffer.size();
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam4927() // lam4927
{
    // reading env
    void *env4928 = arg_buffer[0];
    // reading other params
    void *x4917 = arg_buffer[1];
    void *kont4921 = get_env_value(env4928, encode_int((s32)1));

    // clo-app
    arg_buffer.clear();
    arg_buffer.push_back(reinterpret_cast<void *>(env4928));
    arg_buffer.push_back(reinterpret_cast<void *>(x4917));
    auto function_ptr = reinterpret_cast<void (*)()>(get_closure_ptr(kont4921));
    // assign buffer size to arg_num
    arg_num = arg_buffer.size();
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *brouhaha_main() // brouhaha_main
{
    // reading env
    void *_4929 = arg_buffer[0];
    // reading other params
    void *kont4921 = arg_buffer[1];

    // creating new closure instance
    auto ptr5434 = reinterpret_cast<void (*)()>(&lam4927);
    _4929 = allocate_env_space(encode_int((s32)1));
    void *f4922 = make_closure(reinterpret_cast<void *>(ptr5434), _4929);

    // setting env list
    set_env(_4929, encode_int((s32)1), kont4921);

    // clo-app
    arg_buffer.clear();
    arg_buffer.push_back(reinterpret_cast<void *>(_4929));
    arg_buffer.push_back(reinterpret_cast<void *>(f4922));
    auto function_ptr = reinterpret_cast<void (*)()>(call);
    // assign buffer size to arg_num
    arg_num = arg_buffer.size();
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

int main(int argc, char **argv)
{
    auto ptr5435 = reinterpret_cast<void (*)()>(&fhalt);
    void *_5436 = allocate_env_space(encode_int((s32)0));
    void *clo5437 = make_closure(reinterpret_cast<void *>(ptr5435), _5436);
    arg_buffer.push_back(reinterpret_cast<void *>(0));
    arg_buffer.push_back(reinterpret_cast<void *>(clo5437));
    // making a call to the brouhaha main function to kick off our c++ emission.
    auto function_ptr = reinterpret_cast<void (*)()>(brouhaha_main);
    arg_num = arg_buffer.size();
    function_ptr();
    arg_buffer.clear();
    return 0;
}
