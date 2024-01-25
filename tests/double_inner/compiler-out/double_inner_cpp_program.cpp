#include <stdio.h>
#include <string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void *_u43_fptr() // +
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8701 = arg_buffer[1];
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

    void *kont8699 = prim_car(lst);
    void *lst8702 = prim_cdr(lst);
    void *x8700 = apply_prim__u43(lst8702);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8699);
    arg_buffer[2] = x8700;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8699))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void *_u45_fptr() // -
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8705 = arg_buffer[1];
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

    void *kont8703 = prim_car(lst);
    void *lst8706 = prim_cdr(lst);
    void *x8704 = apply_prim__u45(lst8706);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8703);
    arg_buffer[2] = x8704;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8703))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void *_u42_fptr() // *
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8709 = arg_buffer[1];
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

    void *kont8707 = prim_car(lst);
    void *lst8710 = prim_cdr(lst);
    void *x8708 = apply_prim__u42(lst8710);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8707);
    arg_buffer[2] = x8708;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8707))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void *_u47_fptr() // /
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8713 = arg_buffer[1];
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

    void *kont8711 = prim_car(lst);
    void *lst8714 = prim_cdr(lst);
    void *x8712 = apply_prim__u47(lst8714);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8711);
    arg_buffer[2] = x8712;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8711))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void *_u61_fptr() // =
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8717 = arg_buffer[1];
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

    void *kont8715 = prim_car(lst);
    void *lst8718 = prim_cdr(lst);
    void *x8716 = apply_prim__u61(lst8718);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8715);
    arg_buffer[2] = x8716;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8715))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void *_u62_fptr() // >
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8721 = arg_buffer[1];
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

    void *kont8719 = prim_car(lst);
    void *lst8722 = prim_cdr(lst);
    void *x8720 = apply_prim__u62(lst8722);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8719);
    arg_buffer[2] = x8720;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8719))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void *_u60_fptr() // <
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8725 = arg_buffer[1];
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

    void *kont8723 = prim_car(lst);
    void *lst8726 = prim_cdr(lst);
    void *x8724 = apply_prim__u60(lst8726);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8723);
    arg_buffer[2] = x8724;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8723))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void *_u60_u61_fptr() // <=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8729 = arg_buffer[1];
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

    void *kont8727 = prim_car(lst);
    void *lst8730 = prim_cdr(lst);
    void *x8728 = apply_prim__u60_u61(lst8730);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8727);
    arg_buffer[2] = x8728;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8727))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void *_u62_u61_fptr() // >=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8733 = arg_buffer[1];
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

    void *kont8731 = prim_car(lst);
    void *lst8734 = prim_cdr(lst);
    void *x8732 = apply_prim__u62_u61(lst8734);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8731);
    arg_buffer[2] = x8732;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8731))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void *modulo_fptr() // modulo
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8533 = arg_buffer[1];
    // reading env and args
    void *kont8437 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8343 = prim_modulo(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8437);
    arg_buffer[2] = xy8343;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void *null_u63_fptr() // null?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8534 = arg_buffer[1];
    // reading env and args
    void *kont8438 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    void *xy8344 = prim_null_u63(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8438);
    arg_buffer[2] = xy8344;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8438))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void *equal_u63_fptr() // equal?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8535 = arg_buffer[1];
    // reading env and args
    void *kont8439 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8345 = prim_equal_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8439);
    arg_buffer[2] = xy8345;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void *eq_u63_fptr() // eq?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8536 = arg_buffer[1];
    // reading env and args
    void *kont8440 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8346 = prim_eq_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8440);
    arg_buffer[2] = xy8346;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void *cons_fptr() // cons
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8537 = arg_buffer[1];
    // reading env and args
    void *kont8441 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8347 = prim_cons(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8441);
    arg_buffer[2] = xy8347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8441))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cons = encode_clo(alloc_clo(cons_fptr, 0));

void *car_fptr() // car
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8538 = arg_buffer[1];
    // reading env and args
    void *kont8442 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8348 = prim_car(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8442);
    arg_buffer[2] = xy8348;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *car = encode_clo(alloc_clo(car_fptr, 0));

void *cdr_fptr() // cdr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8539 = arg_buffer[1];
    // reading env and args
    void *kont8443 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8349 = prim_cdr(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8443);
    arg_buffer[2] = xy8349;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void *lam8540_fptr() // lam8540
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8541 = arg_buffer[1];
    // reading env and args
    void *a8352 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8541))[3];
    // not do dummy comment
    void *kont8444 = (decode_clo(env8541))[2];
    // not do dummy comment
    void *a8350 = (decode_clo(env8541))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8444;
    arg_buffer[3] = a8350;
    arg_buffer[4] = a8352;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8540 = encode_clo(alloc_clo(lam8540_fptr, 0));

void *even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8544 = arg_buffer[1];
    // reading env and args
    void *kont8444 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8735 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8735, "0", 10);
    void *a8350 = encode_mpz(mpzvar8735);
    mpz_t *mpzvar8736 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8736, "2", 10);
    void *a8351 = encode_mpz(mpzvar8736);

    // creating new closure instance
    void **clo8738 = alloc_clo(lam8540_fptr, 3);

    // setting env list
    clo8738[1] = a8350;
    clo8738[2] = kont8444;
    clo8738[3] = equal_u63;
    void *f8445 = encode_clo(clo8738);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8445;
    arg_buffer[3] = x;
    arg_buffer[4] = a8351;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void *lam8545_fptr() // lam8545
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8546 = arg_buffer[1];
    // reading env and args
    void *a8355 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8353 = (decode_clo(env8546))[3];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8546))[2];
    // not do dummy comment
    void *kont8446 = (decode_clo(env8546))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8446;
    arg_buffer[3] = a8353;
    arg_buffer[4] = a8355;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void *odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8549 = arg_buffer[1];
    // reading env and args
    void *kont8446 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8739 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8739, "1", 10);
    void *a8353 = encode_mpz(mpzvar8739);
    mpz_t *mpzvar8740 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8740, "2", 10);
    void *a8354 = encode_mpz(mpzvar8740);

    // creating new closure instance
    void **clo8742 = alloc_clo(lam8545_fptr, 3);

    // setting env list
    clo8742[1] = kont8446;
    clo8742[2] = equal_u63;
    clo8742[3] = a8353;
    void *f8447 = encode_clo(clo8742);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8447;
    arg_buffer[3] = x;
    arg_buffer[4] = a8354;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void *list_fptr() // list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8550 = arg_buffer[1];
    void *x;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        x = arg_buffer[2];
    }
    else
    {
        // building cons cell
        x = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            x = prim_cons(arg_buffer[i], x);
        }
    }

    void *kont8448 = prim_car(x);
    void *x8532 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8448);
    arg_buffer[2] = x8532;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *list = encode_clo(alloc_clo(list_fptr, 0));

void *float_u45_u62int_fptr() // float->int
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8551 = arg_buffer[1];
    // reading env and args
    void *kont8449 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8356 = prim_inexact_u45_u62exact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8449);
    arg_buffer[2] = xy8356;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void *int_u45_u62float_fptr() // int->float
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8552 = arg_buffer[1];
    // reading env and args
    void *kont8450 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8357 = prim_exact_u45_u62inexact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8450);
    arg_buffer[2] = xy8357;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8450))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void *lam8555_fptr() // lam8555
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8556 = arg_buffer[1];
    // reading env and args
    void *a8363 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8451 = (decode_clo(env8556))[3];
    // not do dummy comment
    void *x = (decode_clo(env8556))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8556))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8451;
    arg_buffer[3] = x;
    arg_buffer[4] = a8363;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8555 = encode_clo(alloc_clo(lam8555_fptr, 0));

void *lam8557_fptr() // lam8557
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8558 = arg_buffer[1];
    // reading env and args
    void *a8361 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8558))[5];
    // not do dummy comment
    void *x = (decode_clo(env8558))[4];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8558))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8558))[2];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8558))[1];

    // if-clause
    bool if_guard8743 = is_true(a8361);
    if (if_guard8743)
    {
        void *xy8362 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8451);
        arg_buffer[2] = xy8362;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8745 = alloc_clo(lam8555_fptr, 3);

        // setting env list
        clo8745[1] = member_u63;
        clo8745[2] = x;
        clo8745[3] = kont8451;
        void *f8452 = encode_clo(clo8745);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8452;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void *lam8559_fptr() // lam8559
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8560 = arg_buffer[1];
    // reading env and args
    void *a8360 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8560))[6];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8560))[5];
    // not do dummy comment
    void *x = (decode_clo(env8560))[4];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8560))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8560))[2];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8560))[1];

    // creating new closure instance
    void **clo8747 = alloc_clo(lam8557_fptr, 5);

    // setting env list
    clo8747[1] = kont8451;
    clo8747[2] = lst;
    clo8747[3] = member_u63;
    clo8747[4] = x;
    clo8747[5] = cdr;
    void *f8453 = encode_clo(clo8747);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8453;
    arg_buffer[3] = a8360;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void *lam8561_fptr() // lam8561
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8562 = arg_buffer[1];
    // reading env and args
    void *a8358 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8562))[7];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8562))[6];
    // not do dummy comment
    void *x = (decode_clo(env8562))[5];
    // not do dummy comment
    void *car = (decode_clo(env8562))[4];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8562))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8562))[2];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8562))[1];

    // if-clause
    bool if_guard8748 = is_true(a8358);
    if (if_guard8748)
    {
        void *xy8359 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8451);
        arg_buffer[2] = xy8359;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8750 = alloc_clo(lam8559_fptr, 6);

        // setting env list
        clo8750[1] = kont8451;
        clo8750[2] = lst;
        clo8750[3] = member_u63;
        clo8750[4] = x;
        clo8750[5] = equal_u63;
        clo8750[6] = cdr;
        void *f8454 = encode_clo(clo8750);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8454;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void *member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8563 = arg_buffer[1];
    // reading env and args
    void *kont8451 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8752 = alloc_clo(lam8561_fptr, 7);

    // setting env list
    clo8752[1] = kont8451;
    clo8752[2] = lst;
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8752[3] = member_u63;
    clo8752[4] = car;
    clo8752[5] = x;
    clo8752[6] = equal_u63;
    clo8752[7] = cdr;
    void *f8455 = encode_clo(clo8752);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8455;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void *lam8564_fptr() // lam8564
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8565 = arg_buffer[1];
    // reading env and args
    void *a8367 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8456 = (decode_clo(env8565))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8565))[3];
    // not do dummy comment
    void *foldl = (decode_clo(env8565))[2];
    // not do dummy comment
    void *a8366 = (decode_clo(env8565))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8456;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8366;
    arg_buffer[5] = a8367;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8564 = encode_clo(alloc_clo(lam8564_fptr, 0));

void *lam8566_fptr() // lam8566
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8567 = arg_buffer[1];
    // reading env and args
    void *a8366 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8567))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8567))[4];
    // not do dummy comment
    void *kont8456 = (decode_clo(env8567))[3];
    // not do dummy comment
    void *fun = (decode_clo(env8567))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8567))[1];

    // creating new closure instance
    void **clo8754 = alloc_clo(lam8564_fptr, 4);

    // setting env list
    clo8754[1] = a8366;
    clo8754[2] = foldl;
    clo8754[3] = fun;
    clo8754[4] = kont8456;
    void *f8457 = encode_clo(clo8754);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8457;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void *lam8568_fptr() // lam8568
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8569 = arg_buffer[1];
    // reading env and args
    void *a8365 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8569))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8569))[5];
    // not do dummy comment
    void *kont8456 = (decode_clo(env8569))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8569))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8569))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8569))[1];

    // creating new closure instance
    void **clo8756 = alloc_clo(lam8566_fptr, 5);

    // setting env list
    clo8756[1] = foldl;
    clo8756[2] = fun;
    clo8756[3] = kont8456;
    clo8756[4] = lst;
    clo8756[5] = cdr;
    void *f8458 = encode_clo(clo8756);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8458;
    arg_buffer[3] = a8365;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void *lam8570_fptr() // lam8570
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8571 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8571))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8571))[6];
    // not do dummy comment
    void *kont8456 = (decode_clo(env8571))[5];
    // not do dummy comment
    void *fun = (decode_clo(env8571))[4];
    // not do dummy comment
    void *acc = (decode_clo(env8571))[3];
    // not do dummy comment
    void *car = (decode_clo(env8571))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8571))[1];

    // if-clause
    bool if_guard8757 = is_true(a8364);
    if (if_guard8757)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8456);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8759 = alloc_clo(lam8568_fptr, 6);

        // setting env list
        clo8759[1] = foldl;
        clo8759[2] = acc;
        clo8759[3] = fun;
        clo8759[4] = kont8456;
        clo8759[5] = lst;
        clo8759[6] = cdr;
        void *f8459 = encode_clo(clo8759);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8459;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void *foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8572 = arg_buffer[1];
    // reading env and args
    void *kont8456 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8761 = alloc_clo(lam8570_fptr, 7);

    // setting env list
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8761[1] = foldl;
    clo8761[2] = car;
    clo8761[3] = acc;
    clo8761[4] = fun;
    clo8761[5] = kont8456;
    clo8761[6] = lst;
    clo8761[7] = cdr;
    void *f8460 = encode_clo(clo8761);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8460;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void *lam8573_fptr() // lam8573
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8574 = arg_buffer[1];
    // reading env and args
    void *a8371 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8369 = (decode_clo(env8574))[3];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8574))[2];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8574))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8461;
    arg_buffer[3] = a8369;
    arg_buffer[4] = a8371;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8573 = encode_clo(alloc_clo(lam8573_fptr, 0));

void *lam8575_fptr() // lam8575
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8576 = arg_buffer[1];
    // reading env and args
    void *a8370 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8369 = (decode_clo(env8576))[5];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8576))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8576))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8576))[2];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8576))[1];

    // creating new closure instance
    void **clo8763 = alloc_clo(lam8573_fptr, 3);

    // setting env list
    clo8763[1] = kont8461;
    clo8763[2] = reverse_u45helper;
    clo8763[3] = a8369;
    void *f8462 = encode_clo(clo8763);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8462;
    arg_buffer[3] = a8370;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void *lam8577_fptr() // lam8577
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8578 = arg_buffer[1];
    // reading env and args
    void *a8369 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8578))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8578))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8578))[4];
    // not do dummy comment
    void *car = (decode_clo(env8578))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8578))[2];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8578))[1];

    // creating new closure instance
    void **clo8765 = alloc_clo(lam8575_fptr, 5);

    // setting env list
    clo8765[1] = kont8461;
    clo8765[2] = cons;
    clo8765[3] = lst2;
    clo8765[4] = reverse_u45helper;
    clo8765[5] = a8369;
    void *f8463 = encode_clo(clo8765);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8463;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void *lam8579_fptr() // lam8579
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8580 = arg_buffer[1];
    // reading env and args
    void *a8368 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8580))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8580))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8580))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8580))[4];
    // not do dummy comment
    void *car = (decode_clo(env8580))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8580))[2];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8580))[1];

    // if-clause
    bool if_guard8766 = is_true(a8368);
    if (if_guard8766)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8461);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8461))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8768 = alloc_clo(lam8577_fptr, 6);

        // setting env list
        clo8768[1] = kont8461;
        clo8768[2] = cons;
        clo8768[3] = car;
        clo8768[4] = lst2;
        clo8768[5] = reverse_u45helper;
        clo8768[6] = lst;
        void *f8464 = encode_clo(clo8768);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8464;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8579 = encode_clo(alloc_clo(lam8579_fptr, 0));

void *reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8581 = arg_buffer[1];
    // reading env and args
    void *kont8461 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8770 = alloc_clo(lam8579_fptr, 7);

    // setting env list
    clo8770[1] = kont8461;
    clo8770[2] = cons;
    clo8770[3] = car;
    clo8770[4] = lst2;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8770[5] = reverse_u45helper;
    clo8770[6] = lst;
    clo8770[7] = cdr;
    void *f8465 = encode_clo(clo8770);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8465;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void *lam8582_fptr() // lam8582
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8583 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8466 = (decode_clo(env8583))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8583))[2];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8583))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8466;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void *reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8584 = arg_buffer[1];
    // reading env and args
    void *kont8466 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8772 = alloc_clo(lam8582_fptr, 3);

    // setting env list
    clo8772[1] = reverse_u45helper;
    clo8772[2] = lst;
    clo8772[3] = kont8466;
    void *f8467 = encode_clo(clo8772);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8467;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void *lam8585_fptr() // lam8585
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8586 = arg_buffer[1];
    // reading env and args
    void *xy8375 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8468 = (decode_clo(env8586))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8468);
    arg_buffer[2] = xy8375;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8468))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8585 = encode_clo(alloc_clo(lam8585_fptr, 0));

void *lam8587_fptr() // lam8587
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8588 = arg_buffer[1];
    // reading env and args
    void *a8380 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8468 = (decode_clo(env8588))[4];
    // not do dummy comment
    void *a8376 = (decode_clo(env8588))[3];
    // not do dummy comment
    void *a8378 = (decode_clo(env8588))[2];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8588))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8468;
    arg_buffer[3] = a8376;
    arg_buffer[4] = a8378;
    arg_buffer[5] = a8380;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8587 = encode_clo(alloc_clo(lam8587_fptr, 0));

void *lam8589_fptr() // lam8589
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8590 = arg_buffer[1];
    // reading env and args
    void *a8379 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8468 = (decode_clo(env8590))[6];
    // not do dummy comment
    void *a8376 = (decode_clo(env8590))[5];
    // not do dummy comment
    void *a8378 = (decode_clo(env8590))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8590))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8590))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8590))[1];

    // creating new closure instance
    void **clo8774 = alloc_clo(lam8587_fptr, 4);

    // setting env list
    clo8774[1] = take_u45helper;
    clo8774[2] = a8378;
    clo8774[3] = a8376;
    clo8774[4] = kont8468;
    void *f8470 = encode_clo(clo8774);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8470;
    arg_buffer[3] = a8379;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void *lam8591_fptr() // lam8591
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8592 = arg_buffer[1];
    // reading env and args
    void *a8378 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8592))[7];
    // not do dummy comment
    void *kont8468 = (decode_clo(env8592))[6];
    // not do dummy comment
    void *a8376 = (decode_clo(env8592))[5];
    // not do dummy comment
    void *car = (decode_clo(env8592))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8592))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8592))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8592))[1];

    // creating new closure instance
    void **clo8776 = alloc_clo(lam8589_fptr, 6);

    // setting env list
    clo8776[1] = lst2;
    clo8776[2] = take_u45helper;
    clo8776[3] = cons;
    clo8776[4] = a8378;
    clo8776[5] = a8376;
    clo8776[6] = kont8468;
    void *f8471 = encode_clo(clo8776);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8471;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8591 = encode_clo(alloc_clo(lam8591_fptr, 0));

void *lam8594_fptr() // lam8594
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8595 = arg_buffer[1];
    // reading env and args
    void *a8376 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8595))[8];
    // not do dummy comment
    void *kont8468 = (decode_clo(env8595))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8595))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8595))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8595))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8595))[3];
    // not do dummy comment
    void *n = (decode_clo(env8595))[2];
    // not do dummy comment
    void *car = (decode_clo(env8595))[1];
    mpz_t *mpzvar8777 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8777, "1", 10);
    void *a8377 = encode_mpz(mpzvar8777);

    // creating new closure instance
    void **clo8779 = alloc_clo(lam8591_fptr, 7);

    // setting env list
    clo8779[1] = lst2;
    clo8779[2] = take_u45helper;
    clo8779[3] = cons;
    clo8779[4] = car;
    clo8779[5] = a8376;
    clo8779[6] = kont8468;
    clo8779[7] = lst;
    void *f8472 = encode_clo(clo8779);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8377);
    arg_buffer[1] = reinterpret_cast<void *>(f8472);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
    function_ptr();
    return nullptr;
}

void *lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void *lam8596_fptr() // lam8596
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8597 = arg_buffer[1];
    // reading env and args
    void *a8374 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8597))[10];
    // not do dummy comment
    void *lst = (decode_clo(env8597))[9];
    // not do dummy comment
    void *kont8468 = (decode_clo(env8597))[8];
    // not do dummy comment
    void *reverse = (decode_clo(env8597))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8597))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8597))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8597))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8597))[3];
    // not do dummy comment
    void *n = (decode_clo(env8597))[2];
    // not do dummy comment
    void *car = (decode_clo(env8597))[1];

    // if-clause
    bool if_guard8780 = is_true(a8374);
    if (if_guard8780)
    {

        // creating new closure instance
        void **clo8782 = alloc_clo(lam8585_fptr, 1);

        // setting env list
        clo8782[1] = kont8468;
        void *f8469 = encode_clo(clo8782);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8469;
        arg_buffer[3] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8784 = alloc_clo(lam8594_fptr, 8);

        // setting env list
        clo8784[1] = car;
        clo8784[2] = n;
        clo8784[3] = lst2;
        clo8784[4] = take_u45helper;
        clo8784[5] = _u45;
        clo8784[6] = cons;
        clo8784[7] = kont8468;
        clo8784[8] = lst;
        void *f8473 = encode_clo(clo8784);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8473;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void *take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8599 = arg_buffer[1];
    // reading env and args
    void *kont8468 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // Dummy comment
    mpz_t *mpzvar8785 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8785, "0", 10);
    void *a8373 = encode_mpz(mpzvar8785);

    // creating new closure instance
    void **clo8787 = alloc_clo(lam8596_fptr, 10);

    // setting env list
    clo8787[1] = car;
    clo8787[2] = n;
    clo8787[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo8787[4] = take_u45helper;
    clo8787[5] = _u45;
    clo8787[6] = cons;
    clo8787[7] = reverse;
    clo8787[8] = kont8468;
    clo8787[9] = lst;
    clo8787[10] = cdr;
    void *f8474 = encode_clo(clo8787);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8373);
    arg_buffer[1] = reinterpret_cast<void *>(f8474);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8474))[0]);
    function_ptr();
    return nullptr;
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void *lam8600_fptr() // lam8600
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8601 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8601))[4];
    // not do dummy comment
    void *n = (decode_clo(env8601))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8601))[2];
    // not do dummy comment
    void *kont8475 = (decode_clo(env8601))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8475;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8381;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8600 = encode_clo(alloc_clo(lam8600_fptr, 0));

void *take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8602 = arg_buffer[1];
    // reading env and args
    void *kont8475 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8789 = alloc_clo(lam8600_fptr, 4);

    // setting env list
    clo8789[1] = kont8475;
    clo8789[2] = take_u45helper;
    clo8789[3] = n;
    clo8789[4] = lst;
    void *f8476 = encode_clo(clo8789);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8476;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void *lam8604_fptr() // lam8604
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8605 = arg_buffer[1];
    // reading env and args
    void *a8386 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8384 = (decode_clo(env8605))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8605))[2];
    // not do dummy comment
    void *kont8477 = (decode_clo(env8605))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8384, a8386);
    arg_buffer[1] = reinterpret_cast<void *>(kont8477);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
    function_ptr();
    return nullptr;
}

void *lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void *lam8606_fptr() // lam8606
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8607 = arg_buffer[1];
    // reading env and args
    void *a8385 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8384 = (decode_clo(env8607))[4];
    // not do dummy comment
    void *length = (decode_clo(env8607))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8607))[2];
    // not do dummy comment
    void *kont8477 = (decode_clo(env8607))[1];

    // creating new closure instance
    void **clo8791 = alloc_clo(lam8604_fptr, 3);

    // setting env list
    clo8791[1] = kont8477;
    clo8791[2] = _u43;
    clo8791[3] = a8384;
    void *f8478 = encode_clo(clo8791);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8478;
    arg_buffer[3] = a8385;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void *lam8609_fptr() // lam8609
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8610 = arg_buffer[1];
    // reading env and args
    void *a8382 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8610))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8610))[4];
    // not do dummy comment
    void *length = (decode_clo(env8610))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8610))[2];
    // not do dummy comment
    void *kont8477 = (decode_clo(env8610))[1];

    // if-clause
    bool if_guard8792 = is_true(a8382);
    if (if_guard8792)
    {
        mpz_t *mpzvar8793 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8793, "0", 10);
        void *xy8383 = encode_mpz(mpzvar8793);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8477);
        arg_buffer[2] = xy8383;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8477))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {
        mpz_t *mpzvar8794 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8794, "1", 10);
        void *a8384 = encode_mpz(mpzvar8794);

        // creating new closure instance
        void **clo8796 = alloc_clo(lam8606_fptr, 4);

        // setting env list
        clo8796[1] = kont8477;
        clo8796[2] = _u43;
        clo8796[3] = length;
        clo8796[4] = a8384;
        void *f8479 = encode_clo(clo8796);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8479;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void *length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8611 = arg_buffer[1];
    // reading env and args
    void *kont8477 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8798 = alloc_clo(lam8609_fptr, 5);

    // setting env list
    clo8798[1] = kont8477;
    clo8798[2] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8798[3] = length;
    clo8798[4] = lst;
    clo8798[5] = cdr;
    void *f8480 = encode_clo(clo8798);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8480;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void *lam8612_fptr() // lam8612
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8613 = arg_buffer[1];
    // reading env and args
    void *xy8388 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8481 = (decode_clo(env8613))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8481);
    arg_buffer[2] = xy8388;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8481))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8612 = encode_clo(alloc_clo(lam8612_fptr, 0));

void *lam8614_fptr() // lam8614
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8615 = arg_buffer[1];
    // reading env and args
    void *a8392 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8481 = (decode_clo(env8615))[3];
    // not do dummy comment
    void *a8390 = (decode_clo(env8615))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8615))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8481;
    arg_buffer[3] = a8390;
    arg_buffer[4] = a8392;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void *lam8616_fptr() // lam8616
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8617 = arg_buffer[1];
    // reading env and args
    void *a8391 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8481 = (decode_clo(env8617))[5];
    // not do dummy comment
    void *map = (decode_clo(env8617))[4];
    // not do dummy comment
    void *a8390 = (decode_clo(env8617))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8617))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8617))[1];

    // creating new closure instance
    void **clo8800 = alloc_clo(lam8614_fptr, 3);

    // setting env list
    clo8800[1] = cons;
    clo8800[2] = a8390;
    clo8800[3] = kont8481;
    void *f8483 = encode_clo(clo8800);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8483;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8391;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8616 = encode_clo(alloc_clo(lam8616_fptr, 0));

void *lam8618_fptr() // lam8618
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8619 = arg_buffer[1];
    // reading env and args
    void *a8390 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8619))[6];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8619))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8619))[4];
    // not do dummy comment
    void *map = (decode_clo(env8619))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8619))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8619))[1];

    // creating new closure instance
    void **clo8802 = alloc_clo(lam8616_fptr, 5);

    // setting env list
    clo8802[1] = cons;
    clo8802[2] = proc;
    clo8802[3] = a8390;
    clo8802[4] = map;
    clo8802[5] = kont8481;
    void *f8484 = encode_clo(clo8802);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8484;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8618 = encode_clo(alloc_clo(lam8618_fptr, 0));

void *lam8620_fptr() // lam8620
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8621 = arg_buffer[1];
    // reading env and args
    void *a8389 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8621))[6];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8621))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8621))[4];
    // not do dummy comment
    void *map = (decode_clo(env8621))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8621))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8621))[1];

    // creating new closure instance
    void **clo8804 = alloc_clo(lam8618_fptr, 6);

    // setting env list
    clo8804[1] = cons;
    clo8804[2] = proc;
    clo8804[3] = map;
    clo8804[4] = lst;
    clo8804[5] = kont8481;
    clo8804[6] = cdr;
    void *f8485 = encode_clo(clo8804);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8485;
    arg_buffer[3] = a8389;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void *lam8622_fptr() // lam8622
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8623 = arg_buffer[1];
    // reading env and args
    void *a8387 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8481 = (decode_clo(env8623))[8];
    // not do dummy comment
    void *lst = (decode_clo(env8623))[7];
    // not do dummy comment
    void *map = (decode_clo(env8623))[6];
    // not do dummy comment
    void *proc = (decode_clo(env8623))[5];
    // not do dummy comment
    void *car = (decode_clo(env8623))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8623))[3];
    // not do dummy comment
    void *list = (decode_clo(env8623))[2];
    // not do dummy comment
    void *cdr = (decode_clo(env8623))[1];

    // if-clause
    bool if_guard8805 = is_true(a8387);
    if (if_guard8805)
    {

        // creating new closure instance
        void **clo8807 = alloc_clo(lam8612_fptr, 1);

        // setting env list
        clo8807[1] = kont8481;
        void *f8482 = encode_clo(clo8807);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8482;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8809 = alloc_clo(lam8620_fptr, 6);

        // setting env list
        clo8809[1] = cons;
        clo8809[2] = proc;
        clo8809[3] = map;
        clo8809[4] = lst;
        clo8809[5] = kont8481;
        clo8809[6] = cdr;
        void *f8486 = encode_clo(clo8809);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8486;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void *map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8624 = arg_buffer[1];
    // reading env and args
    void *kont8481 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8811 = alloc_clo(lam8622_fptr, 8);

    // setting env list
    clo8811[1] = cdr;
    clo8811[2] = list;
    clo8811[3] = cons;
    clo8811[4] = car;
    clo8811[5] = proc;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8811[6] = map;
    clo8811[7] = lst;
    clo8811[8] = kont8481;
    void *f8487 = encode_clo(clo8811);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8487;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void *lam8625_fptr() // lam8625
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8626 = arg_buffer[1];
    // reading env and args
    void *xy8394 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8488 = (decode_clo(env8626))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8488);
    arg_buffer[2] = xy8394;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8488))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void *lam8627_fptr() // lam8627
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8628 = arg_buffer[1];
    // reading env and args
    void *a8399 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8488 = (decode_clo(env8628))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8628))[2];
    // not do dummy comment
    void *a8397 = (decode_clo(env8628))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8488;
    arg_buffer[3] = a8397;
    arg_buffer[4] = a8399;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void *lam8629_fptr() // lam8629
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8630 = arg_buffer[1];
    // reading env and args
    void *a8398 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8630))[5];
    // not do dummy comment
    void *kont8488 = (decode_clo(env8630))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8630))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8630))[2];
    // not do dummy comment
    void *a8397 = (decode_clo(env8630))[1];

    // creating new closure instance
    void **clo8813 = alloc_clo(lam8627_fptr, 3);

    // setting env list
    clo8813[1] = a8397;
    clo8813[2] = cons;
    clo8813[3] = kont8488;
    void *f8490 = encode_clo(clo8813);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8490;
    arg_buffer[3] = op;
    arg_buffer[4] = a8398;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void *lam8631_fptr() // lam8631
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8632 = arg_buffer[1];
    // reading env and args
    void *a8397 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8632))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8632))[5];
    // not do dummy comment
    void *op = (decode_clo(env8632))[4];
    // not do dummy comment
    void *kont8488 = (decode_clo(env8632))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8632))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8632))[1];

    // creating new closure instance
    void **clo8815 = alloc_clo(lam8629_fptr, 5);

    // setting env list
    clo8815[1] = a8397;
    clo8815[2] = cons;
    clo8815[3] = filter;
    clo8815[4] = kont8488;
    clo8815[5] = op;
    void *f8491 = encode_clo(clo8815);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8491;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8631 = encode_clo(alloc_clo(lam8631_fptr, 0));

void *lam8633_fptr() // lam8633
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8634 = arg_buffer[1];
    // reading env and args
    void *a8400 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8634))[3];
    // not do dummy comment
    void *kont8488 = (decode_clo(env8634))[2];
    // not do dummy comment
    void *filter = (decode_clo(env8634))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8488;
    arg_buffer[3] = op;
    arg_buffer[4] = a8400;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8633 = encode_clo(alloc_clo(lam8633_fptr, 0));

void *lam8635_fptr() // lam8635
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8636 = arg_buffer[1];
    // reading env and args
    void *a8396 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8636))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8636))[6];
    // not do dummy comment
    void *op = (decode_clo(env8636))[5];
    // not do dummy comment
    void *kont8488 = (decode_clo(env8636))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8636))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8636))[2];
    // not do dummy comment
    void *car = (decode_clo(env8636))[1];

    // if-clause
    bool if_guard8816 = is_true(a8396);
    if (if_guard8816)
    {

        // creating new closure instance
        void **clo8818 = alloc_clo(lam8631_fptr, 6);

        // setting env list
        clo8818[1] = cons;
        clo8818[2] = filter;
        clo8818[3] = kont8488;
        clo8818[4] = op;
        clo8818[5] = lst;
        clo8818[6] = cdr;
        void *f8492 = encode_clo(clo8818);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8492;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8820 = alloc_clo(lam8633_fptr, 3);

        // setting env list
        clo8820[1] = filter;
        clo8820[2] = kont8488;
        clo8820[3] = op;
        void *f8493 = encode_clo(clo8820);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8493;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void *lam8637_fptr() // lam8637
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8638 = arg_buffer[1];
    // reading env and args
    void *a8395 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8638))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8638))[6];
    // not do dummy comment
    void *op = (decode_clo(env8638))[5];
    // not do dummy comment
    void *kont8488 = (decode_clo(env8638))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8638))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8638))[2];
    // not do dummy comment
    void *car = (decode_clo(env8638))[1];

    // creating new closure instance
    void **clo8822 = alloc_clo(lam8635_fptr, 7);

    // setting env list
    clo8822[1] = car;
    clo8822[2] = filter;
    clo8822[3] = cons;
    clo8822[4] = kont8488;
    clo8822[5] = op;
    clo8822[6] = lst;
    clo8822[7] = cdr;
    void *f8494 = encode_clo(clo8822);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8494;
    arg_buffer[3] = a8395;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8637 = encode_clo(alloc_clo(lam8637_fptr, 0));

void *lam8639_fptr() // lam8639
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8640 = arg_buffer[1];
    // reading env and args
    void *a8393 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8640))[8];
    // not do dummy comment
    void *op = (decode_clo(env8640))[7];
    // not do dummy comment
    void *kont8488 = (decode_clo(env8640))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8640))[5];
    // not do dummy comment
    void *list = (decode_clo(env8640))[4];
    // not do dummy comment
    void *cdr = (decode_clo(env8640))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8640))[2];
    // not do dummy comment
    void *car = (decode_clo(env8640))[1];

    // if-clause
    bool if_guard8823 = is_true(a8393);
    if (if_guard8823)
    {

        // creating new closure instance
        void **clo8825 = alloc_clo(lam8625_fptr, 1);

        // setting env list
        clo8825[1] = kont8488;
        void *f8489 = encode_clo(clo8825);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8489;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8827 = alloc_clo(lam8637_fptr, 7);

        // setting env list
        clo8827[1] = car;
        clo8827[2] = filter;
        clo8827[3] = cons;
        clo8827[4] = kont8488;
        clo8827[5] = op;
        clo8827[6] = lst;
        clo8827[7] = cdr;
        void *f8495 = encode_clo(clo8827);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8495;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8639 = encode_clo(alloc_clo(lam8639_fptr, 0));

void *filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8641 = arg_buffer[1];
    // reading env and args
    void *kont8488 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8829 = alloc_clo(lam8639_fptr, 8);

    // setting env list
    clo8829[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8829[2] = filter;
    clo8829[3] = cdr;
    clo8829[4] = list;
    clo8829[5] = cons;
    clo8829[6] = kont8488;
    clo8829[7] = op;
    clo8829[8] = lst;
    void *f8496 = encode_clo(clo8829);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8496;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void *lam8642_fptr() // lam8642
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8643 = arg_buffer[1];
    // reading env and args
    void *a8405 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8497 = (decode_clo(env8643))[3];
    // not do dummy comment
    void *a8403 = (decode_clo(env8643))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8643))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8497;
    arg_buffer[3] = a8403;
    arg_buffer[4] = a8405;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8642 = encode_clo(alloc_clo(lam8642_fptr, 0));

void *lam8645_fptr() // lam8645
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8646 = arg_buffer[1];
    // reading env and args
    void *a8403 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8497 = (decode_clo(env8646))[4];
    // not do dummy comment
    void *drop = (decode_clo(env8646))[3];
    // not do dummy comment
    void *n = (decode_clo(env8646))[2];
    // not do dummy comment
    void *_u45 = (decode_clo(env8646))[1];
    mpz_t *mpzvar8830 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8830, "1", 10);
    void *a8404 = encode_mpz(mpzvar8830);

    // creating new closure instance
    void **clo8832 = alloc_clo(lam8642_fptr, 3);

    // setting env list
    clo8832[1] = drop;
    clo8832[2] = a8403;
    clo8832[3] = kont8497;
    void *f8498 = encode_clo(clo8832);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8404);
    arg_buffer[1] = reinterpret_cast<void *>(f8498);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8498))[0]);
    function_ptr();
    return nullptr;
}

void *lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void *lam8647_fptr() // lam8647
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8648 = arg_buffer[1];
    // reading env and args
    void *a8402 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8648))[6];
    // not do dummy comment
    void *kont8497 = (decode_clo(env8648))[5];
    // not do dummy comment
    void *n = (decode_clo(env8648))[4];
    // not do dummy comment
    void *_u45 = (decode_clo(env8648))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8648))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8648))[1];

    // if-clause
    bool if_guard8833 = is_true(a8402);
    if (if_guard8833)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8497);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8497))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8835 = alloc_clo(lam8645_fptr, 4);

        // setting env list
        clo8835[1] = _u45;
        clo8835[2] = n;
        clo8835[3] = drop;
        clo8835[4] = kont8497;
        void *f8499 = encode_clo(clo8835);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8499;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void *drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8650 = arg_buffer[1];
    // reading env and args
    void *kont8497 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8836, "0", 10);
    void *a8401 = encode_mpz(mpzvar8836);

    // creating new closure instance
    void **clo8838 = alloc_clo(lam8647_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8838[1] = drop;
    clo8838[2] = lst;
    clo8838[3] = _u45;
    clo8838[4] = n;
    clo8838[5] = kont8497;
    clo8838[6] = cdr;
    void *f8500 = encode_clo(clo8838);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8401);
    arg_buffer[1] = reinterpret_cast<void *>(f8500);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8500))[0]);
    function_ptr();
    return nullptr;
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void *lam8651_fptr() // lam8651
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8652 = arg_buffer[1];
    // reading env and args
    void *a8409 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8501 = (decode_clo(env8652))[3];
    // not do dummy comment
    void *a8407 = (decode_clo(env8652))[2];
    // not do dummy comment
    void *proc = (decode_clo(env8652))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = kont8501;
    arg_buffer[3] = a8407;
    arg_buffer[4] = a8409;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8651 = encode_clo(alloc_clo(lam8651_fptr, 0));

void *lam8653_fptr() // lam8653
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8654 = arg_buffer[1];
    // reading env and args
    void *a8408 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *foldr = (decode_clo(env8654))[5];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8654))[4];
    // not do dummy comment
    void *a8407 = (decode_clo(env8654))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8654))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8654))[1];

    // creating new closure instance
    void **clo8840 = alloc_clo(lam8651_fptr, 3);

    // setting env list
    clo8840[1] = proc;
    clo8840[2] = a8407;
    clo8840[3] = kont8501;
    void *f8502 = encode_clo(clo8840);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8502;
    arg_buffer[3] = proc;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8408;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8653 = encode_clo(alloc_clo(lam8653_fptr, 0));

void *lam8655_fptr() // lam8655
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8656 = arg_buffer[1];
    // reading env and args
    void *a8407 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8656))[6];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8656))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8656))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8656))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8656))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8656))[1];

    // creating new closure instance
    void **clo8842 = alloc_clo(lam8653_fptr, 5);

    // setting env list
    clo8842[1] = acc;
    clo8842[2] = proc;
    clo8842[3] = a8407;
    clo8842[4] = kont8501;
    clo8842[5] = foldr;
    void *f8503 = encode_clo(clo8842);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8503;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8655 = encode_clo(alloc_clo(lam8655_fptr, 0));

void *lam8657_fptr() // lam8657
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8658 = arg_buffer[1];
    // reading env and args
    void *a8406 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8658))[7];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8658))[6];
    // not do dummy comment
    void *car = (decode_clo(env8658))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8658))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8658))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8658))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8658))[1];

    // if-clause
    bool if_guard8843 = is_true(a8406);
    if (if_guard8843)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8501);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8845 = alloc_clo(lam8655_fptr, 6);

        // setting env list
        clo8845[1] = acc;
        clo8845[2] = proc;
        clo8845[3] = lst;
        clo8845[4] = foldr;
        clo8845[5] = kont8501;
        clo8845[6] = cdr;
        void *f8504 = encode_clo(clo8845);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8504;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8657 = encode_clo(alloc_clo(lam8657_fptr, 0));

void *foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8659 = arg_buffer[1];
    // reading env and args
    void *kont8501 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8847 = alloc_clo(lam8657_fptr, 7);

    // setting env list
    clo8847[1] = acc;
    clo8847[2] = proc;
    clo8847[3] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8847[4] = foldr;
    clo8847[5] = car;
    clo8847[6] = kont8501;
    clo8847[7] = cdr;
    void *f8505 = encode_clo(clo8847);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8505;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void *lam8660_fptr() // lam8660
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8661 = arg_buffer[1];
    // reading env and args
    void *a8413 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8506 = (decode_clo(env8661))[3];
    // not do dummy comment
    void *a8411 = (decode_clo(env8661))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8661))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8506;
    arg_buffer[3] = a8411;
    arg_buffer[4] = a8413;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8660 = encode_clo(alloc_clo(lam8660_fptr, 0));

void *lam8662_fptr() // lam8662
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8663 = arg_buffer[1];
    // reading env and args
    void *a8412 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *append = (decode_clo(env8663))[5];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8663))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8663))[3];
    // not do dummy comment
    void *a8411 = (decode_clo(env8663))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8663))[1];

    // creating new closure instance
    void **clo8849 = alloc_clo(lam8660_fptr, 3);

    // setting env list
    clo8849[1] = cons;
    clo8849[2] = a8411;
    clo8849[3] = kont8506;
    void *f8507 = encode_clo(clo8849);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = f8507;
    arg_buffer[3] = a8412;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8662 = encode_clo(alloc_clo(lam8662_fptr, 0));

void *lam8664_fptr() // lam8664
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8665 = arg_buffer[1];
    // reading env and args
    void *a8411 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8665))[6];
    // not do dummy comment
    void *append = (decode_clo(env8665))[5];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8665))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8665))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8665))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8665))[1];

    // creating new closure instance
    void **clo8851 = alloc_clo(lam8662_fptr, 5);

    // setting env list
    clo8851[1] = lst2;
    clo8851[2] = a8411;
    clo8851[3] = cons;
    clo8851[4] = kont8506;
    clo8851[5] = append;
    void *f8508 = encode_clo(clo8851);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8508;
    arg_buffer[3] = lst1;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8664 = encode_clo(alloc_clo(lam8664_fptr, 0));

void *lam8666_fptr() // lam8666
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8667 = arg_buffer[1];
    // reading env and args
    void *a8410 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8667))[7];
    // not do dummy comment
    void *append = (decode_clo(env8667))[6];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8667))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8667))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8667))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8667))[2];
    // not do dummy comment
    void *car = (decode_clo(env8667))[1];

    // if-clause
    bool if_guard8852 = is_true(a8410);
    if (if_guard8852)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8506);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8506))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8854 = alloc_clo(lam8664_fptr, 6);

        // setting env list
        clo8854[1] = cons;
        clo8854[2] = lst1;
        clo8854[3] = lst2;
        clo8854[4] = kont8506;
        clo8854[5] = append;
        clo8854[6] = cdr;
        void *f8509 = encode_clo(clo8854);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8509;
        arg_buffer[3] = lst1;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8666 = encode_clo(alloc_clo(lam8666_fptr, 0));

void *append_fptr() // append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8668 = arg_buffer[1];
    // reading env and args
    void *kont8506 = arg_buffer[2];
    void *lst1 = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8856 = alloc_clo(lam8666_fptr, 7);

    // setting env list
    clo8856[1] = car;
    clo8856[2] = lst1;
    clo8856[3] = cons;
    clo8856[4] = lst2;
    clo8856[5] = kont8506;
    void *append = encode_clo(alloc_clo(append_fptr, 0));

    clo8856[6] = append;
    clo8856[7] = cdr;
    void *f8510 = encode_clo(clo8856);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8510;
    arg_buffer[3] = lst1;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *append = encode_clo(alloc_clo(append_fptr, 0));

void *hash_fptr() // hash
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8859 = arg_buffer[1];
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

    void *kont8857 = prim_car(lst);
    void *lst8860 = prim_cdr(lst);
    void *x8858 = apply_prim_hash(lst8860);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8857);
    arg_buffer[2] = x8858;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8857))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash = encode_clo(alloc_clo(hash_fptr, 0));

void *hash_u45ref_fptr() // hash-ref
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8669 = arg_buffer[1];
    // reading env and args
    void *kont8511 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8414 = prim_hash_u45ref(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8511);
    arg_buffer[2] = xy8414;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void *hash_u45set_fptr() // hash-set
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8670 = arg_buffer[1];
    // reading env and args
    void *kont8512 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    void *v = arg_buffer[5];
    // Dummy comment
    void *xy8415 = prim_hash_u45set(h, k, v);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8512);
    arg_buffer[2] = xy8415;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8512))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void *hash_u45keys_fptr() // hash-keys
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8671 = arg_buffer[1];
    // reading env and args
    void *kont8513 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8416 = prim_hash_u45keys(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8513);
    arg_buffer[2] = xy8416;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8513))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void *hash_u45has_u45key_u63_fptr() // hash-has-key?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8672 = arg_buffer[1];
    // reading env and args
    void *kont8514 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8417 = prim_hash_u45has_u45key_u63(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8514);
    arg_buffer[2] = xy8417;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8514))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void *hash_u45count_fptr() // hash-count
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8673 = arg_buffer[1];
    // reading env and args
    void *kont8515 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8418 = prim_hash_u45count(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8515);
    arg_buffer[2] = xy8418;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8515))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void *set_fptr() // set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8863 = arg_buffer[1];
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

    void *kont8861 = prim_car(lst);
    void *lst8864 = prim_cdr(lst);
    void *x8862 = apply_prim_set(lst8864);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8861);
    arg_buffer[2] = x8862;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8861))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *set = encode_clo(alloc_clo(set_fptr, 0));

void *set_u45_u62list_fptr() // set->list
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8674 = arg_buffer[1];
    // reading env and args
    void *kont8516 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8419 = prim_set_u45_u62list(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8516);
    arg_buffer[2] = xy8419;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8516))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void *list_u45_u62set_fptr() // list->set
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8675 = arg_buffer[1];
    // reading env and args
    void *kont8517 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8420 = prim_list_u45_u62set(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8517);
    arg_buffer[2] = xy8420;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8517))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void *set_u45add_fptr() // set-add
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8676 = arg_buffer[1];
    // reading env and args
    void *kont8518 = arg_buffer[2];
    void *s = arg_buffer[3];
    void *val = arg_buffer[4];
    // Dummy comment
    void *xy8421 = prim_set_u45add(s, val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8518);
    arg_buffer[2] = xy8421;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8518))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void *string_u63_fptr() // string?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8677 = arg_buffer[1];
    // reading env and args
    void *kont8519 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8422 = prim_string_u63(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8519);
    arg_buffer[2] = xy8422;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8519))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void *string_u45length_fptr() // string-length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8678 = arg_buffer[1];
    // reading env and args
    void *kont8520 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8423 = prim_string_u45length(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8520);
    arg_buffer[2] = xy8423;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8520))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void *string_u45ref_fptr() // string-ref
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8679 = arg_buffer[1];
    // reading env and args
    void *kont8521 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *pos = arg_buffer[4];
    // Dummy comment
    void *xy8424 = prim_string_u45ref(str, pos);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8521);
    arg_buffer[2] = xy8424;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void *substring_fptr() // substring
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8680 = arg_buffer[1];
    // reading env and args
    void *kont8522 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *start = arg_buffer[4];
    void *end = arg_buffer[5];
    // Dummy comment
    void *xy8425 = prim_substring(str, start, end);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8522);
    arg_buffer[2] = xy8425;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8522))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *substring = encode_clo(alloc_clo(substring_fptr, 0));

void *string_u45append_fptr() // string-append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8681 = arg_buffer[1];
    // reading env and args
    void *kont8523 = arg_buffer[2];
    void *s1 = arg_buffer[3];
    void *s2 = arg_buffer[4];
    // Dummy comment
    void *xy8426 = prim_string_u45append(s1, s2);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8523);
    arg_buffer[2] = xy8426;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8523))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void *string_u45_u62list_fptr() // string->list
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8682 = arg_buffer[1];
    // reading env and args
    void *kont8524 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8427 = prim_string_u45_u62list(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8524);
    arg_buffer[2] = xy8427;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8524))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void *lam8683_fptr() // lam8683
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8684 = arg_buffer[1];
    // reading env and args
    void *a8432 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *f = (decode_clo(env8684))[4];
    // not do dummy comment
    void *a8430 = (decode_clo(env8684))[3];
    // not do dummy comment
    void *a8429 = (decode_clo(env8684))[2];
    // not do dummy comment
    void *kont8525 = (decode_clo(env8684))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_3(a8429, a8430, a8432);
    arg_buffer[1] = reinterpret_cast<void *>(kont8525);
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8525))[0]);
    function_ptr();
    return nullptr;
}

void *lam8683 = encode_clo(alloc_clo(lam8683_fptr, 0));

void *lam8686_fptr() // lam8686
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8687 = arg_buffer[1];
    // reading env and args
    void *a8430 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *f = (decode_clo(env8687))[6];
    // not do dummy comment
    void *z = (decode_clo(env8687))[5];
    // not do dummy comment
    void *y = (decode_clo(env8687))[4];
    // not do dummy comment
    void *x = (decode_clo(env8687))[3];
    // not do dummy comment
    void *a8429 = (decode_clo(env8687))[2];
    // not do dummy comment
    void *kont8525 = (decode_clo(env8687))[1];
    mpz_t *mpzvar8865 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8865, "10", 10);
    void *a8431 = encode_mpz(mpzvar8865);

    // creating new closure instance
    void **clo8867 = alloc_clo(lam8683_fptr, 4);

    // setting env list
    clo8867[1] = kont8525;
    clo8867[2] = a8429;
    clo8867[3] = a8430;
    clo8867[4] = f;
    void *f8526 = encode_clo(clo8867);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u43);
    arg_buffer[2] = f8526;
    arg_buffer[3] = a8431;
    arg_buffer[4] = x;
    arg_buffer[5] = y;
    arg_buffer[6] = z;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    _u43_fptr();
    return nullptr;
}

void *lam8686 = encode_clo(alloc_clo(lam8686_fptr, 0));

void *lam8688_fptr() // lam8688
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8689 = arg_buffer[1];
    // reading env and args
    void *a8429 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *f = (decode_clo(env8689))[5];
    // not do dummy comment
    void *z = (decode_clo(env8689))[4];
    // not do dummy comment
    void *y = (decode_clo(env8689))[3];
    // not do dummy comment
    void *x = (decode_clo(env8689))[2];
    // not do dummy comment
    void *kont8525 = (decode_clo(env8689))[1];

    // creating new closure instance
    void **clo8869 = alloc_clo(lam8686_fptr, 6);

    // setting env list
    clo8869[1] = kont8525;
    clo8869[2] = a8429;
    clo8869[3] = x;
    clo8869[4] = y;
    clo8869[5] = z;
    clo8869[6] = f;
    void *f8527 = encode_clo(clo8869);

    // clo-app
    arg_buffer[2] = apply_prim__u43_3(x, y, z);
    arg_buffer[1] = reinterpret_cast<void *>(f8527);
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8527))[0]);
    function_ptr();
    return nullptr;
}

void *lam8688 = encode_clo(alloc_clo(lam8688_fptr, 0));

void *call_u45f_fptr() // call-f
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8691 = arg_buffer[1];
    // reading env and args
    void *kont8525 = arg_buffer[2];
    void *f = arg_buffer[3];
    void *x = arg_buffer[4];
    void *y = arg_buffer[5];
    void *z = arg_buffer[6];
    // Dummy comment
    mpz_t *mpzvar8870 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8870, "10", 10);
    void *a8428 = encode_mpz(mpzvar8870);

    // creating new closure instance
    void **clo8872 = alloc_clo(lam8688_fptr, 5);

    // setting env list
    clo8872[1] = kont8525;
    clo8872[2] = x;
    clo8872[3] = y;
    clo8872[4] = z;
    clo8872[5] = f;
    void *f8528 = encode_clo(clo8872);

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8428, x);
    arg_buffer[1] = reinterpret_cast<void *>(f8528);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8528))[0]);
    function_ptr();
    return nullptr;
}

void *call_u45f = encode_clo(alloc_clo(call_u45f_fptr, 0));

void *lam8692_fptr() // lam8692
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8693 = arg_buffer[1];
    // reading env and args
    void *xy8433 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8529 = (decode_clo(env8693))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8529);
    arg_buffer[2] = xy8433;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8529))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8692 = encode_clo(alloc_clo(lam8692_fptr, 0));

void *intermediate_fptr() // intermediate
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8694 = arg_buffer[1];
    // reading env and args
    void *kont8529 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    void *z = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8874 = alloc_clo(lam8692_fptr, 1);

    // setting env list
    clo8874[1] = kont8529;
    void *f8530 = encode_clo(clo8874);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call_u45f);
    arg_buffer[2] = f8530;
    arg_buffer[3] = _u43;
    arg_buffer[4] = x;
    arg_buffer[5] = y;
    arg_buffer[6] = z;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45f))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *intermediate = encode_clo(alloc_clo(intermediate_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8698 = arg_buffer[1];
    // reading env and args
    void *kont8531 = arg_buffer[2];
    // Dummy comment
    mpz_t *mpzvar8875 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8875, "1", 10);
    void *a8434 = encode_mpz(mpzvar8875);
    mpz_t *mpzvar8876 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8876, "2", 10);
    void *a8435 = encode_mpz(mpzvar8876);
    mpz_t *mpzvar8877 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8877, "3", 10);
    void *a8436 = encode_mpz(mpzvar8877);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(intermediate);
    arg_buffer[2] = kont8531;
    arg_buffer[3] = a8434;
    arg_buffer[4] = a8435;
    arg_buffer[5] = a8436;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(intermediate))[0]);
    // call next proc using a function pointer
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
