#include <stdio.h>
#include <string.h>
#include "../../header.h"
using namespace std;

void *_u43(void *_4921, void *lst) // +
{
    void *kont4916 = prim_car(lst);
    void *lst = prim_cdr(lst);
    void *x4912 = apply_prim__u43(lst);

    // clo-app
    void *cloPtr5432 = get_closure_ptr(kont4916);
    void *procEnv5433 = get_env(kont4916);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5432);
    function_ptr(procEnv5433, x4912);
}

void *call(void *_4924, void *kont4918) // call
{
    void *a4913 = reinterpret_cast<void *>(encode_int((s32)1));
    void *a4914 = reinterpret_cast<void *>(encode_int((s32)2));

    // clo-app
    void *cloPtr5434 = get_closure_ptr(_u43);
    void *procEnv5435 = get_env(_u43);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *, void *, void *)>(cloPtr5434);
    function_ptr(procEnv5435, kont4918, a4913, a4914);
}

void *lam4925(void *env4926, void *x4915) // lam4925
{
    void *kont4919 = get_env_value(env4926, encode_int((s32)1));

    // clo-app
    void *cloPtr5436 = get_closure_ptr(kont4919);
    void *procEnv5437 = get_env(kont4919);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5436);
    function_ptr(procEnv5437, x4915);
}

void *brouhaha_main(void *_4927, void *kont4919) // brouhaha_main
{

    // creating new closure instance
    auto ptr5438 = reinterpret_cast<void (*)(void *, void *)>(&lam4925);
    _4927 = allocate_env_space(encode_int((s32)1));
    void *f4920 = make_closure(reinterpret_cast<void *>(ptr5438), _4927);

    // setting env list
    set_env(_4927, encode_int((s32)1), kont4919);

    // clo-app
    void *cloPtr5439 = get_closure_ptr(call);
    void *procEnv5440 = get_env(call);

    // calling next proc using a function pointer
    auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(cloPtr5439);
    function_ptr(procEnv5440, f4920);
}

int main(int argc, char **argv)
{
    // making a call to the brouhaha main function to kick off our c++ emission.
    brouhaha_main(0, 0);
}
