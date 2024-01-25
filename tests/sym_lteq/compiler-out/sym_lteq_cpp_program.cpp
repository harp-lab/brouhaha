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
    void *_env8692 = arg_buffer[1];
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

    void *kont8690 = prim_car(lst);
    void *lst8693 = prim_cdr(lst);
    void *x8691 = apply_prim__u43(lst8693);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8690);
    arg_buffer[2] = x8691;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8690))[0]);
    // assign buffer size to numArgs
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
    void *_env8696 = arg_buffer[1];
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

    void *kont8694 = prim_car(lst);
    void *lst8697 = prim_cdr(lst);
    void *x8695 = apply_prim__u45(lst8697);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8694);
    arg_buffer[2] = x8695;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8694))[0]);
    // assign buffer size to numArgs
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
    void *_env8700 = arg_buffer[1];
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

    void *kont8698 = prim_car(lst);
    void *lst8701 = prim_cdr(lst);
    void *x8699 = apply_prim__u42(lst8701);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8698);
    arg_buffer[2] = x8699;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8698))[0]);
    // assign buffer size to numArgs
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
    void *_env8704 = arg_buffer[1];
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

    void *kont8702 = prim_car(lst);
    void *lst8705 = prim_cdr(lst);
    void *x8703 = apply_prim__u47(lst8705);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8702);
    arg_buffer[2] = x8703;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8702))[0]);
    // assign buffer size to numArgs
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
    void *_env8708 = arg_buffer[1];
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

    void *kont8706 = prim_car(lst);
    void *lst8709 = prim_cdr(lst);
    void *x8707 = apply_prim__u61(lst8709);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8706);
    arg_buffer[2] = x8707;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8706))[0]);
    // assign buffer size to numArgs
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
    void *_env8712 = arg_buffer[1];
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

    void *kont8710 = prim_car(lst);
    void *lst8713 = prim_cdr(lst);
    void *x8711 = apply_prim__u62(lst8713);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8710);
    arg_buffer[2] = x8711;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
    // assign buffer size to numArgs
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
    void *_env8716 = arg_buffer[1];
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

    void *kont8714 = prim_car(lst);
    void *lst8717 = prim_cdr(lst);
    void *x8715 = apply_prim__u60(lst8717);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8714);
    arg_buffer[2] = x8715;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
    // assign buffer size to numArgs
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
    void *_env8720 = arg_buffer[1];
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

    void *kont8718 = prim_car(lst);
    void *lst8721 = prim_cdr(lst);
    void *x8719 = apply_prim__u60_u61(lst8721);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8718);
    arg_buffer[2] = x8719;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8718))[0]);
    // assign buffer size to numArgs
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
    void *_env8724 = arg_buffer[1];
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

    void *kont8722 = prim_car(lst);
    void *lst8725 = prim_cdr(lst);
    void *x8723 = apply_prim__u62_u61(lst8725);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8722);
    arg_buffer[2] = x8723;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8722))[0]);
    // assign buffer size to numArgs
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
    void *_8531 = arg_buffer[1];
    // reading env and args
    void *kont8435 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8344 = prim_modulo(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8435);
    arg_buffer[2] = xy8344;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
    // assign buffer size to numArgs
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
    void *_8532 = arg_buffer[1];
    // reading env and args
    void *kont8436 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    void *xy8345 = prim_null_u63(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8436);
    arg_buffer[2] = xy8345;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8436))[0]);
    // assign buffer size to numArgs
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
    void *_8533 = arg_buffer[1];
    // reading env and args
    void *kont8437 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8346 = prim_equal_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8437);
    arg_buffer[2] = xy8346;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
    // assign buffer size to numArgs
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
    void *_8534 = arg_buffer[1];
    // reading env and args
    void *kont8438 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8347 = prim_eq_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8438);
    arg_buffer[2] = xy8347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8438))[0]);
    // assign buffer size to numArgs
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
    void *_8535 = arg_buffer[1];
    // reading env and args
    void *kont8439 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8348 = prim_cons(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8439);
    arg_buffer[2] = xy8348;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
    // assign buffer size to numArgs
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
    void *_8536 = arg_buffer[1];
    // reading env and args
    void *kont8440 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8349 = prim_car(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8440);
    arg_buffer[2] = xy8349;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
    // assign buffer size to numArgs
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
    void *_8537 = arg_buffer[1];
    // reading env and args
    void *kont8441 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8350 = prim_cdr(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8441);
    arg_buffer[2] = xy8350;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8441))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void *lam8538_fptr() // lam8538
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8539 = arg_buffer[1];
    // reading env and args
    void *a8353 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8442 = (decode_clo(env8539))[3];
    // not do dummy comment
    void *a8351 = (decode_clo(env8539))[2];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8539))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8442;
    arg_buffer[3] = a8351;
    arg_buffer[4] = a8353;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void *even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8542 = arg_buffer[1];
    // reading env and args
    void *kont8442 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8726, "0", 10);
    void *a8351 = encode_mpz(mpzvar8726);
    mpz_t *mpzvar8727 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8727, "2", 10);
    void *a8352 = encode_mpz(mpzvar8727);

    // creating new closure instance
    void **clo8729 = alloc_clo(lam8538_fptr, 3);

    // setting env list
    clo8729[1] = equal_u63;
    clo8729[2] = a8351;
    clo8729[3] = kont8442;
    void *f8443 = encode_clo(clo8729);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8443;
    arg_buffer[3] = x;
    arg_buffer[4] = a8352;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void *lam8543_fptr() // lam8543
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8544 = arg_buffer[1];
    // reading env and args
    void *a8356 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8444 = (decode_clo(env8544))[3];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8544))[2];
    // not do dummy comment
    void *a8354 = (decode_clo(env8544))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8444;
    arg_buffer[3] = a8354;
    arg_buffer[4] = a8356;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8543 = encode_clo(alloc_clo(lam8543_fptr, 0));

void *odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8547 = arg_buffer[1];
    // reading env and args
    void *kont8444 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8730 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8730, "1", 10);
    void *a8354 = encode_mpz(mpzvar8730);
    mpz_t *mpzvar8731 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8731, "2", 10);
    void *a8355 = encode_mpz(mpzvar8731);

    // creating new closure instance
    void **clo8733 = alloc_clo(lam8543_fptr, 3);

    // setting env list
    clo8733[1] = a8354;
    clo8733[2] = equal_u63;
    clo8733[3] = kont8444;
    void *f8445 = encode_clo(clo8733);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8445;
    arg_buffer[3] = x;
    arg_buffer[4] = a8355;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // assign buffer size to numArgs
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
    void *_8548 = arg_buffer[1];
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

    void *kont8446 = prim_car(x);
    void *x8528 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8446);
    arg_buffer[2] = x8528;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
    // assign buffer size to numArgs
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
    void *_8549 = arg_buffer[1];
    // reading env and args
    void *kont8447 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8357 = prim_inexact_u45_u62exact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8447);
    arg_buffer[2] = xy8357;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
    // assign buffer size to numArgs
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
    void *_8550 = arg_buffer[1];
    // reading env and args
    void *kont8448 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8358 = prim_exact_u45_u62inexact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8448);
    arg_buffer[2] = xy8358;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void *lam8553_fptr() // lam8553
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8554 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8449 = (decode_clo(env8554))[3];
    // not do dummy comment
    void *x = (decode_clo(env8554))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8554))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8449;
    arg_buffer[3] = x;
    arg_buffer[4] = a8364;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8553 = encode_clo(alloc_clo(lam8553_fptr, 0));

void *lam8555_fptr() // lam8555
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8556 = arg_buffer[1];
    // reading env and args
    void *a8362 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8556))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8556))[4];
    // not do dummy comment
    void *kont8449 = (decode_clo(env8556))[3];
    // not do dummy comment
    void *x = (decode_clo(env8556))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8556))[1];

    // if-clause
    bool if_guard8734 = is_true(a8362);
    if (if_guard8734)
    {
        void *xy8363 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8449);
        arg_buffer[2] = xy8363;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8736 = alloc_clo(lam8553_fptr, 3);

        // setting env list
        clo8736[1] = member_u63;
        clo8736[2] = x;
        clo8736[3] = kont8449;
        void *f8450 = encode_clo(clo8736);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8450;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
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
    void *cdr = (decode_clo(env8558))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8558))[5];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8558))[4];
    // not do dummy comment
    void *kont8449 = (decode_clo(env8558))[3];
    // not do dummy comment
    void *x = (decode_clo(env8558))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8558))[1];

    // creating new closure instance
    void **clo8738 = alloc_clo(lam8555_fptr, 5);

    // setting env list
    clo8738[1] = member_u63;
    clo8738[2] = x;
    clo8738[3] = kont8449;
    clo8738[4] = lst;
    clo8738[5] = cdr;
    void *f8451 = encode_clo(clo8738);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8451;
    arg_buffer[3] = a8361;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8557 = encode_clo(alloc_clo(lam8557_fptr, 0));

void *lam8559_fptr() // lam8559
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8560 = arg_buffer[1];
    // reading env and args
    void *a8359 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8560))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8560))[6];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8560))[5];
    // not do dummy comment
    void *kont8449 = (decode_clo(env8560))[4];
    // not do dummy comment
    void *x = (decode_clo(env8560))[3];
    // not do dummy comment
    void *car = (decode_clo(env8560))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8560))[1];

    // if-clause
    bool if_guard8739 = is_true(a8359);
    if (if_guard8739)
    {
        void *xy8360 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8449);
        arg_buffer[2] = xy8360;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8741 = alloc_clo(lam8557_fptr, 6);

        // setting env list
        clo8741[1] = member_u63;
        clo8741[2] = x;
        clo8741[3] = kont8449;
        clo8741[4] = equal_u63;
        clo8741[5] = lst;
        clo8741[6] = cdr;
        void *f8452 = encode_clo(clo8741);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8452;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8559 = encode_clo(alloc_clo(lam8559_fptr, 0));

void *member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8561 = arg_buffer[1];
    // reading env and args
    void *kont8449 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8743 = alloc_clo(lam8559_fptr, 7);

    // setting env list
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8743[1] = member_u63;
    clo8743[2] = car;
    clo8743[3] = x;
    clo8743[4] = kont8449;
    clo8743[5] = equal_u63;
    clo8743[6] = lst;
    clo8743[7] = cdr;
    void *f8453 = encode_clo(clo8743);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8453;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void *lam8562_fptr() // lam8562
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8563 = arg_buffer[1];
    // reading env and args
    void *a8368 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8367 = (decode_clo(env8563))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8563))[3];
    // not do dummy comment
    void *kont8454 = (decode_clo(env8563))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8563))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8454;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8367;
    arg_buffer[5] = a8368;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

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
    void *cdr = (decode_clo(env8565))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8565))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8565))[3];
    // not do dummy comment
    void *kont8454 = (decode_clo(env8565))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8565))[1];

    // creating new closure instance
    void **clo8745 = alloc_clo(lam8562_fptr, 4);

    // setting env list
    clo8745[1] = foldl;
    clo8745[2] = kont8454;
    clo8745[3] = fun;
    clo8745[4] = a8367;
    void *f8455 = encode_clo(clo8745);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8455;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
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
    void *cdr = (decode_clo(env8567))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8567))[5];
    // not do dummy comment
    void *fun = (decode_clo(env8567))[4];
    // not do dummy comment
    void *acc = (decode_clo(env8567))[3];
    // not do dummy comment
    void *kont8454 = (decode_clo(env8567))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8567))[1];

    // creating new closure instance
    void **clo8747 = alloc_clo(lam8564_fptr, 5);

    // setting env list
    clo8747[1] = foldl;
    clo8747[2] = kont8454;
    clo8747[3] = fun;
    clo8747[4] = lst;
    clo8747[5] = cdr;
    void *f8456 = encode_clo(clo8747);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8456;
    arg_buffer[3] = a8366;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // assign buffer size to numArgs
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
    void *cdr = (decode_clo(env8569))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8569))[6];
    // not do dummy comment
    void *fun = (decode_clo(env8569))[5];
    // not do dummy comment
    void *acc = (decode_clo(env8569))[4];
    // not do dummy comment
    void *car = (decode_clo(env8569))[3];
    // not do dummy comment
    void *kont8454 = (decode_clo(env8569))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8569))[1];

    // if-clause
    bool if_guard8748 = is_true(a8365);
    if (if_guard8748)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8454);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8750 = alloc_clo(lam8566_fptr, 6);

        // setting env list
        clo8750[1] = foldl;
        clo8750[2] = kont8454;
        clo8750[3] = acc;
        clo8750[4] = fun;
        clo8750[5] = lst;
        clo8750[6] = cdr;
        void *f8457 = encode_clo(clo8750);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8457;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8568 = encode_clo(alloc_clo(lam8568_fptr, 0));

void *foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8570 = arg_buffer[1];
    // reading env and args
    void *kont8454 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8752 = alloc_clo(lam8568_fptr, 7);

    // setting env list
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8752[1] = foldl;
    clo8752[2] = kont8454;
    clo8752[3] = car;
    clo8752[4] = acc;
    clo8752[5] = fun;
    clo8752[6] = lst;
    clo8752[7] = cdr;
    void *f8458 = encode_clo(clo8752);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8458;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void *lam8571_fptr() // lam8571
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8572 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8459 = (decode_clo(env8572))[3];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8572))[2];
    // not do dummy comment
    void *a8370 = (decode_clo(env8572))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8459;
    arg_buffer[3] = a8370;
    arg_buffer[4] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

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
    void *kont8459 = (decode_clo(env8574))[5];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8574))[4];
    // not do dummy comment
    void *a8370 = (decode_clo(env8574))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8574))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8574))[1];

    // creating new closure instance
    void **clo8754 = alloc_clo(lam8571_fptr, 3);

    // setting env list
    clo8754[1] = a8370;
    clo8754[2] = reverse_u45helper;
    clo8754[3] = kont8459;
    void *f8460 = encode_clo(clo8754);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8460;
    arg_buffer[3] = a8371;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
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
    void *kont8459 = (decode_clo(env8576))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8576))[5];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8576))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8576))[3];
    // not do dummy comment
    void *car = (decode_clo(env8576))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8576))[1];

    // creating new closure instance
    void **clo8756 = alloc_clo(lam8573_fptr, 5);

    // setting env list
    clo8756[1] = cons;
    clo8756[2] = lst2;
    clo8756[3] = a8370;
    clo8756[4] = reverse_u45helper;
    clo8756[5] = kont8459;
    void *f8461 = encode_clo(clo8756);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8461;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // assign buffer size to numArgs
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
    void *cdr = (decode_clo(env8578))[7];
    // not do dummy comment
    void *kont8459 = (decode_clo(env8578))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8578))[5];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8578))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8578))[3];
    // not do dummy comment
    void *car = (decode_clo(env8578))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8578))[1];

    // if-clause
    bool if_guard8757 = is_true(a8369);
    if (if_guard8757)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8459);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8459))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8759 = alloc_clo(lam8575_fptr, 6);

        // setting env list
        clo8759[1] = cons;
        clo8759[2] = car;
        clo8759[3] = lst2;
        clo8759[4] = reverse_u45helper;
        clo8759[5] = lst;
        clo8759[6] = kont8459;
        void *f8462 = encode_clo(clo8759);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8462;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8577 = encode_clo(alloc_clo(lam8577_fptr, 0));

void *reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8579 = arg_buffer[1];
    // reading env and args
    void *kont8459 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8761 = alloc_clo(lam8577_fptr, 7);

    // setting env list
    clo8761[1] = cons;
    clo8761[2] = car;
    clo8761[3] = lst2;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8761[4] = reverse_u45helper;
    clo8761[5] = lst;
    clo8761[6] = kont8459;
    clo8761[7] = cdr;
    void *f8463 = encode_clo(clo8761);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8463;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void *lam8580_fptr() // lam8580
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8581 = arg_buffer[1];
    // reading env and args
    void *a8373 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8581))[3];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8581))[2];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8581))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8464;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8373;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void *reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8582 = arg_buffer[1];
    // reading env and args
    void *kont8464 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8763 = alloc_clo(lam8580_fptr, 3);

    // setting env list
    clo8763[1] = kont8464;
    clo8763[2] = reverse_u45helper;
    clo8763[3] = lst;
    void *f8465 = encode_clo(clo8763);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8465;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void *lam8583_fptr() // lam8583
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8584 = arg_buffer[1];
    // reading env and args
    void *xy8376 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8466 = (decode_clo(env8584))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8466);
    arg_buffer[2] = xy8376;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8466))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8583 = encode_clo(alloc_clo(lam8583_fptr, 0));

void *lam8585_fptr() // lam8585
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8586 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8377 = (decode_clo(env8586))[4];
    // not do dummy comment
    void *a8379 = (decode_clo(env8586))[3];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8586))[2];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8586))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8466;
    arg_buffer[3] = a8377;
    arg_buffer[4] = a8379;
    arg_buffer[5] = a8381;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // assign buffer size to numArgs
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
    void *a8377 = (decode_clo(env8588))[6];
    // not do dummy comment
    void *a8379 = (decode_clo(env8588))[5];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8588))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8588))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8588))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8588))[1];

    // creating new closure instance
    void **clo8765 = alloc_clo(lam8585_fptr, 4);

    // setting env list
    clo8765[1] = take_u45helper;
    clo8765[2] = kont8466;
    clo8765[3] = a8379;
    clo8765[4] = a8377;
    void *f8468 = encode_clo(clo8765);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8468;
    arg_buffer[3] = a8380;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
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
    void *a8377 = (decode_clo(env8590))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8590))[6];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8590))[5];
    // not do dummy comment
    void *car = (decode_clo(env8590))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8590))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8590))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8590))[1];

    // creating new closure instance
    void **clo8767 = alloc_clo(lam8587_fptr, 6);

    // setting env list
    clo8767[1] = lst2;
    clo8767[2] = take_u45helper;
    clo8767[3] = cons;
    clo8767[4] = kont8466;
    clo8767[5] = a8379;
    clo8767[6] = a8377;
    void *f8469 = encode_clo(clo8767);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8469;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void *lam8592_fptr() // lam8592
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8593 = arg_buffer[1];
    // reading env and args
    void *a8377 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8593))[8];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8593))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8593))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8593))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8593))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8593))[3];
    // not do dummy comment
    void *n = (decode_clo(env8593))[2];
    // not do dummy comment
    void *car = (decode_clo(env8593))[1];
    mpz_t *mpzvar8768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8768, "1", 10);
    void *a8378 = encode_mpz(mpzvar8768);

    // creating new closure instance
    void **clo8770 = alloc_clo(lam8589_fptr, 7);

    // setting env list
    clo8770[1] = lst2;
    clo8770[2] = take_u45helper;
    clo8770[3] = cons;
    clo8770[4] = car;
    clo8770[5] = kont8466;
    clo8770[6] = lst;
    clo8770[7] = a8377;
    void *f8470 = encode_clo(clo8770);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8378);
    arg_buffer[1] = reinterpret_cast<void *>(f8470);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8470))[0]);
    function_ptr();
    return nullptr;
}

void *lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void *lam8594_fptr() // lam8594
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8595 = arg_buffer[1];
    // reading env and args
    void *a8375 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8595))[10];
    // not do dummy comment
    void *lst = (decode_clo(env8595))[9];
    // not do dummy comment
    void *reverse = (decode_clo(env8595))[8];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8595))[7];
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

    // if-clause
    bool if_guard8771 = is_true(a8375);
    if (if_guard8771)
    {

        // creating new closure instance
        void **clo8773 = alloc_clo(lam8583_fptr, 1);

        // setting env list
        clo8773[1] = kont8466;
        void *f8467 = encode_clo(clo8773);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8467;
        arg_buffer[3] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8775 = alloc_clo(lam8592_fptr, 8);

        // setting env list
        clo8775[1] = car;
        clo8775[2] = n;
        clo8775[3] = lst2;
        clo8775[4] = take_u45helper;
        clo8775[5] = _u45;
        clo8775[6] = cons;
        clo8775[7] = kont8466;
        clo8775[8] = lst;
        void *f8471 = encode_clo(clo8775);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8471;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8594 = encode_clo(alloc_clo(lam8594_fptr, 0));

void *take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8597 = arg_buffer[1];
    // reading env and args
    void *kont8466 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // Dummy comment
    mpz_t *mpzvar8776 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8776, "0", 10);
    void *a8374 = encode_mpz(mpzvar8776);

    // creating new closure instance
    void **clo8778 = alloc_clo(lam8594_fptr, 10);

    // setting env list
    clo8778[1] = car;
    clo8778[2] = n;
    clo8778[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo8778[4] = take_u45helper;
    clo8778[5] = _u45;
    clo8778[6] = cons;
    clo8778[7] = kont8466;
    clo8778[8] = reverse;
    clo8778[9] = lst;
    clo8778[10] = cdr;
    void *f8472 = encode_clo(clo8778);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8374);
    arg_buffer[1] = reinterpret_cast<void *>(f8472);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8472))[0]);
    function_ptr();
    return nullptr;
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void *lam8598_fptr() // lam8598
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8599 = arg_buffer[1];
    // reading env and args
    void *a8382 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8473 = (decode_clo(env8599))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8599))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8599))[2];
    // not do dummy comment
    void *n = (decode_clo(env8599))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8473;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8382;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8598 = encode_clo(alloc_clo(lam8598_fptr, 0));

void *take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8600 = arg_buffer[1];
    // reading env and args
    void *kont8473 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8780 = alloc_clo(lam8598_fptr, 4);

    // setting env list
    clo8780[1] = n;
    clo8780[2] = take_u45helper;
    clo8780[3] = lst;
    clo8780[4] = kont8473;
    void *f8474 = encode_clo(clo8780);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8474;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void *lam8602_fptr() // lam8602
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8603 = arg_buffer[1];
    // reading env and args
    void *a8387 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8475 = (decode_clo(env8603))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8603))[2];
    // not do dummy comment
    void *a8385 = (decode_clo(env8603))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8385, a8387);
    arg_buffer[1] = reinterpret_cast<void *>(kont8475);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
    function_ptr();
    return nullptr;
}

void *lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

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
    void *kont8475 = (decode_clo(env8605))[4];
    // not do dummy comment
    void *length = (decode_clo(env8605))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8605))[2];
    // not do dummy comment
    void *a8385 = (decode_clo(env8605))[1];

    // creating new closure instance
    void **clo8782 = alloc_clo(lam8602_fptr, 3);

    // setting env list
    clo8782[1] = a8385;
    clo8782[2] = _u43;
    clo8782[3] = kont8475;
    void *f8476 = encode_clo(clo8782);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8476;
    arg_buffer[3] = a8386;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8604 = encode_clo(alloc_clo(lam8604_fptr, 0));

void *lam8607_fptr() // lam8607
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8608 = arg_buffer[1];
    // reading env and args
    void *a8383 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8608))[5];
    // not do dummy comment
    void *kont8475 = (decode_clo(env8608))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8608))[3];
    // not do dummy comment
    void *length = (decode_clo(env8608))[2];
    // not do dummy comment
    void *_u43 = (decode_clo(env8608))[1];

    // if-clause
    bool if_guard8783 = is_true(a8383);
    if (if_guard8783)
    {
        mpz_t *mpzvar8784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8784, "0", 10);
        void *xy8384 = encode_mpz(mpzvar8784);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8475);
        arg_buffer[2] = xy8384;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8475))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {
        mpz_t *mpzvar8785 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8785, "1", 10);
        void *a8385 = encode_mpz(mpzvar8785);

        // creating new closure instance
        void **clo8787 = alloc_clo(lam8604_fptr, 4);

        // setting env list
        clo8787[1] = a8385;
        clo8787[2] = _u43;
        clo8787[3] = length;
        clo8787[4] = kont8475;
        void *f8477 = encode_clo(clo8787);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8477;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void *length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8609 = arg_buffer[1];
    // reading env and args
    void *kont8475 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8789 = alloc_clo(lam8607_fptr, 5);

    // setting env list
    clo8789[1] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8789[2] = length;
    clo8789[3] = lst;
    clo8789[4] = kont8475;
    clo8789[5] = cdr;
    void *f8478 = encode_clo(clo8789);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8478;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void *lam8610_fptr() // lam8610
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8611 = arg_buffer[1];
    // reading env and args
    void *xy8389 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8479 = (decode_clo(env8611))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8479);
    arg_buffer[2] = xy8389;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8479))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8610 = encode_clo(alloc_clo(lam8610_fptr, 0));

void *lam8612_fptr() // lam8612
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8613 = arg_buffer[1];
    // reading env and args
    void *a8393 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8479 = (decode_clo(env8613))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8613))[2];
    // not do dummy comment
    void *a8391 = (decode_clo(env8613))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8479;
    arg_buffer[3] = a8391;
    arg_buffer[4] = a8393;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
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
    void *map = (decode_clo(env8615))[5];
    // not do dummy comment
    void *kont8479 = (decode_clo(env8615))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8615))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8615))[2];
    // not do dummy comment
    void *a8391 = (decode_clo(env8615))[1];

    // creating new closure instance
    void **clo8791 = alloc_clo(lam8612_fptr, 3);

    // setting env list
    clo8791[1] = a8391;
    clo8791[2] = cons;
    clo8791[3] = kont8479;
    void *f8481 = encode_clo(clo8791);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8481;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8392;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // assign buffer size to numArgs
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
    void *cdr = (decode_clo(env8617))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8617))[5];
    // not do dummy comment
    void *map = (decode_clo(env8617))[4];
    // not do dummy comment
    void *kont8479 = (decode_clo(env8617))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8617))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8617))[1];

    // creating new closure instance
    void **clo8793 = alloc_clo(lam8614_fptr, 5);

    // setting env list
    clo8793[1] = a8391;
    clo8793[2] = cons;
    clo8793[3] = proc;
    clo8793[4] = kont8479;
    clo8793[5] = map;
    void *f8482 = encode_clo(clo8793);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8482;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
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
    void *lst = (decode_clo(env8619))[5];
    // not do dummy comment
    void *map = (decode_clo(env8619))[4];
    // not do dummy comment
    void *kont8479 = (decode_clo(env8619))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8619))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8619))[1];

    // creating new closure instance
    void **clo8795 = alloc_clo(lam8616_fptr, 6);

    // setting env list
    clo8795[1] = cons;
    clo8795[2] = proc;
    clo8795[3] = kont8479;
    clo8795[4] = map;
    clo8795[5] = lst;
    clo8795[6] = cdr;
    void *f8483 = encode_clo(clo8795);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8483;
    arg_buffer[3] = a8390;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // assign buffer size to numArgs
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
    void *a8388 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8621))[8];
    // not do dummy comment
    void *map = (decode_clo(env8621))[7];
    // not do dummy comment
    void *kont8479 = (decode_clo(env8621))[6];
    // not do dummy comment
    void *proc = (decode_clo(env8621))[5];
    // not do dummy comment
    void *car = (decode_clo(env8621))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8621))[3];
    // not do dummy comment
    void *list = (decode_clo(env8621))[2];
    // not do dummy comment
    void *cdr = (decode_clo(env8621))[1];

    // if-clause
    bool if_guard8796 = is_true(a8388);
    if (if_guard8796)
    {

        // creating new closure instance
        void **clo8798 = alloc_clo(lam8610_fptr, 1);

        // setting env list
        clo8798[1] = kont8479;
        void *f8480 = encode_clo(clo8798);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8480;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8800 = alloc_clo(lam8618_fptr, 6);

        // setting env list
        clo8800[1] = cons;
        clo8800[2] = proc;
        clo8800[3] = kont8479;
        clo8800[4] = map;
        clo8800[5] = lst;
        clo8800[6] = cdr;
        void *f8484 = encode_clo(clo8800);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8484;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void *map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8622 = arg_buffer[1];
    // reading env and args
    void *kont8479 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8802 = alloc_clo(lam8620_fptr, 8);

    // setting env list
    clo8802[1] = cdr;
    clo8802[2] = list;
    clo8802[3] = cons;
    clo8802[4] = car;
    clo8802[5] = proc;
    clo8802[6] = kont8479;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8802[7] = map;
    clo8802[8] = lst;
    void *f8485 = encode_clo(clo8802);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8485;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void *lam8623_fptr() // lam8623
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8624 = arg_buffer[1];
    // reading env and args
    void *xy8395 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8486 = (decode_clo(env8624))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8486);
    arg_buffer[2] = xy8395;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8486))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void *lam8625_fptr() // lam8625
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8626 = arg_buffer[1];
    // reading env and args
    void *a8400 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8398 = (decode_clo(env8626))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8626))[2];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8626))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8486;
    arg_buffer[3] = a8398;
    arg_buffer[4] = a8400;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
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
    void *a8398 = (decode_clo(env8628))[5];
    // not do dummy comment
    void *op = (decode_clo(env8628))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8628))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8628))[2];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8628))[1];

    // creating new closure instance
    void **clo8804 = alloc_clo(lam8625_fptr, 3);

    // setting env list
    clo8804[1] = kont8486;
    clo8804[2] = cons;
    clo8804[3] = a8398;
    void *f8488 = encode_clo(clo8804);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8488;
    arg_buffer[3] = op;
    arg_buffer[4] = a8399;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // assign buffer size to numArgs
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
    void *cdr = (decode_clo(env8630))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8630))[5];
    // not do dummy comment
    void *op = (decode_clo(env8630))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8630))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8630))[2];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8630))[1];

    // creating new closure instance
    void **clo8806 = alloc_clo(lam8627_fptr, 5);

    // setting env list
    clo8806[1] = kont8486;
    clo8806[2] = cons;
    clo8806[3] = filter;
    clo8806[4] = op;
    clo8806[5] = a8398;
    void *f8489 = encode_clo(clo8806);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8489;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
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
    void *a8401 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8632))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8632))[2];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8632))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8486;
    arg_buffer[3] = op;
    arg_buffer[4] = a8401;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // assign buffer size to numArgs
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
    void *a8397 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8634))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8634))[6];
    // not do dummy comment
    void *op = (decode_clo(env8634))[5];
    // not do dummy comment
    void *filter = (decode_clo(env8634))[4];
    // not do dummy comment
    void *car = (decode_clo(env8634))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8634))[2];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8634))[1];

    // if-clause
    bool if_guard8807 = is_true(a8397);
    if (if_guard8807)
    {

        // creating new closure instance
        void **clo8809 = alloc_clo(lam8629_fptr, 6);

        // setting env list
        clo8809[1] = kont8486;
        clo8809[2] = cons;
        clo8809[3] = filter;
        clo8809[4] = op;
        clo8809[5] = lst;
        clo8809[6] = cdr;
        void *f8490 = encode_clo(clo8809);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8490;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8811 = alloc_clo(lam8631_fptr, 3);

        // setting env list
        clo8811[1] = kont8486;
        clo8811[2] = filter;
        clo8811[3] = op;
        void *f8491 = encode_clo(clo8811);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8491;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
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
    void *filter = (decode_clo(env8636))[4];
    // not do dummy comment
    void *car = (decode_clo(env8636))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8636))[2];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8636))[1];

    // creating new closure instance
    void **clo8813 = alloc_clo(lam8633_fptr, 7);

    // setting env list
    clo8813[1] = kont8486;
    clo8813[2] = cons;
    clo8813[3] = car;
    clo8813[4] = filter;
    clo8813[5] = op;
    clo8813[6] = lst;
    clo8813[7] = cdr;
    void *f8492 = encode_clo(clo8813);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8492;
    arg_buffer[3] = a8396;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void *lam8637_fptr() // lam8637
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8638 = arg_buffer[1];
    // reading env and args
    void *a8394 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8638))[8];
    // not do dummy comment
    void *op = (decode_clo(env8638))[7];
    // not do dummy comment
    void *list = (decode_clo(env8638))[6];
    // not do dummy comment
    void *cdr = (decode_clo(env8638))[5];
    // not do dummy comment
    void *filter = (decode_clo(env8638))[4];
    // not do dummy comment
    void *car = (decode_clo(env8638))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8638))[2];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8638))[1];

    // if-clause
    bool if_guard8814 = is_true(a8394);
    if (if_guard8814)
    {

        // creating new closure instance
        void **clo8816 = alloc_clo(lam8623_fptr, 1);

        // setting env list
        clo8816[1] = kont8486;
        void *f8487 = encode_clo(clo8816);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8487;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8818 = alloc_clo(lam8635_fptr, 7);

        // setting env list
        clo8818[1] = kont8486;
        clo8818[2] = cons;
        clo8818[3] = car;
        clo8818[4] = filter;
        clo8818[5] = op;
        clo8818[6] = lst;
        clo8818[7] = cdr;
        void *f8493 = encode_clo(clo8818);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8493;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8637 = encode_clo(alloc_clo(lam8637_fptr, 0));

void *filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8639 = arg_buffer[1];
    // reading env and args
    void *kont8486 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8820 = alloc_clo(lam8637_fptr, 8);

    // setting env list
    clo8820[1] = kont8486;
    clo8820[2] = cons;
    clo8820[3] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8820[4] = filter;
    clo8820[5] = cdr;
    clo8820[6] = list;
    clo8820[7] = op;
    clo8820[8] = lst;
    void *f8494 = encode_clo(clo8820);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8494;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void *lam8640_fptr() // lam8640
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8641 = arg_buffer[1];
    // reading env and args
    void *a8406 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *drop = (decode_clo(env8641))[3];
    // not do dummy comment
    void *kont8495 = (decode_clo(env8641))[2];
    // not do dummy comment
    void *a8404 = (decode_clo(env8641))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8495;
    arg_buffer[3] = a8404;
    arg_buffer[4] = a8406;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8640 = encode_clo(alloc_clo(lam8640_fptr, 0));

void *lam8643_fptr() // lam8643
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8644 = arg_buffer[1];
    // reading env and args
    void *a8404 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *drop = (decode_clo(env8644))[4];
    // not do dummy comment
    void *kont8495 = (decode_clo(env8644))[3];
    // not do dummy comment
    void *n = (decode_clo(env8644))[2];
    // not do dummy comment
    void *_u45 = (decode_clo(env8644))[1];
    mpz_t *mpzvar8821 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8821, "1", 10);
    void *a8405 = encode_mpz(mpzvar8821);

    // creating new closure instance
    void **clo8823 = alloc_clo(lam8640_fptr, 3);

    // setting env list
    clo8823[1] = a8404;
    clo8823[2] = kont8495;
    clo8823[3] = drop;
    void *f8496 = encode_clo(clo8823);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8405);
    arg_buffer[1] = reinterpret_cast<void *>(f8496);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8496))[0]);
    function_ptr();
    return nullptr;
}

void *lam8643 = encode_clo(alloc_clo(lam8643_fptr, 0));

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
    void *cdr = (decode_clo(env8646))[6];
    // not do dummy comment
    void *kont8495 = (decode_clo(env8646))[5];
    // not do dummy comment
    void *n = (decode_clo(env8646))[4];
    // not do dummy comment
    void *_u45 = (decode_clo(env8646))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8646))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8646))[1];

    // if-clause
    bool if_guard8824 = is_true(a8403);
    if (if_guard8824)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8495);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8495))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8826 = alloc_clo(lam8643_fptr, 4);

        // setting env list
        clo8826[1] = _u45;
        clo8826[2] = n;
        clo8826[3] = kont8495;
        clo8826[4] = drop;
        void *f8497 = encode_clo(clo8826);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8497;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8645 = encode_clo(alloc_clo(lam8645_fptr, 0));

void *drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8648 = arg_buffer[1];
    // reading env and args
    void *kont8495 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8827, "0", 10);
    void *a8402 = encode_mpz(mpzvar8827);

    // creating new closure instance
    void **clo8829 = alloc_clo(lam8645_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8829[1] = drop;
    clo8829[2] = lst;
    clo8829[3] = _u45;
    clo8829[4] = n;
    clo8829[5] = kont8495;
    clo8829[6] = cdr;
    void *f8498 = encode_clo(clo8829);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8402);
    arg_buffer[1] = reinterpret_cast<void *>(f8498);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8498))[0]);
    function_ptr();
    return nullptr;
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void *lam8649_fptr() // lam8649
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8650 = arg_buffer[1];
    // reading env and args
    void *a8410 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8408 = (decode_clo(env8650))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8650))[2];
    // not do dummy comment
    void *kont8499 = (decode_clo(env8650))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = kont8499;
    arg_buffer[3] = a8408;
    arg_buffer[4] = a8410;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8649 = encode_clo(alloc_clo(lam8649_fptr, 0));

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
    void *a8408 = (decode_clo(env8652))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8652))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8652))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8652))[2];
    // not do dummy comment
    void *kont8499 = (decode_clo(env8652))[1];

    // creating new closure instance
    void **clo8831 = alloc_clo(lam8649_fptr, 3);

    // setting env list
    clo8831[1] = kont8499;
    clo8831[2] = proc;
    clo8831[3] = a8408;
    void *f8500 = encode_clo(clo8831);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8500;
    arg_buffer[3] = proc;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8409;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // assign buffer size to numArgs
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
    void *cdr = (decode_clo(env8654))[6];
    // not do dummy comment
    void *foldr = (decode_clo(env8654))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8654))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8654))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8654))[2];
    // not do dummy comment
    void *kont8499 = (decode_clo(env8654))[1];

    // creating new closure instance
    void **clo8833 = alloc_clo(lam8651_fptr, 5);

    // setting env list
    clo8833[1] = kont8499;
    clo8833[2] = acc;
    clo8833[3] = proc;
    clo8833[4] = foldr;
    clo8833[5] = a8408;
    void *f8501 = encode_clo(clo8833);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8501;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
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
    void *cdr = (decode_clo(env8656))[7];
    // not do dummy comment
    void *car = (decode_clo(env8656))[6];
    // not do dummy comment
    void *foldr = (decode_clo(env8656))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8656))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8656))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8656))[2];
    // not do dummy comment
    void *kont8499 = (decode_clo(env8656))[1];

    // if-clause
    bool if_guard8834 = is_true(a8407);
    if (if_guard8834)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8499);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8499))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8836 = alloc_clo(lam8653_fptr, 6);

        // setting env list
        clo8836[1] = kont8499;
        clo8836[2] = acc;
        clo8836[3] = proc;
        clo8836[4] = lst;
        clo8836[5] = foldr;
        clo8836[6] = cdr;
        void *f8502 = encode_clo(clo8836);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8502;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8655 = encode_clo(alloc_clo(lam8655_fptr, 0));

void *foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8657 = arg_buffer[1];
    // reading env and args
    void *kont8499 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8838 = alloc_clo(lam8655_fptr, 7);

    // setting env list
    clo8838[1] = kont8499;
    clo8838[2] = acc;
    clo8838[3] = proc;
    clo8838[4] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8838[5] = foldr;
    clo8838[6] = car;
    clo8838[7] = cdr;
    void *f8503 = encode_clo(clo8838);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8503;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void *lam8658_fptr() // lam8658
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8659 = arg_buffer[1];
    // reading env and args
    void *a8414 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8504 = (decode_clo(env8659))[3];
    // not do dummy comment
    void *a8412 = (decode_clo(env8659))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8659))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8504;
    arg_buffer[3] = a8412;
    arg_buffer[4] = a8414;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8658 = encode_clo(alloc_clo(lam8658_fptr, 0));

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
    void *kont8504 = (decode_clo(env8661))[5];
    // not do dummy comment
    void *a8412 = (decode_clo(env8661))[4];
    // not do dummy comment
    void *append = (decode_clo(env8661))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8661))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8661))[1];

    // creating new closure instance
    void **clo8840 = alloc_clo(lam8658_fptr, 3);

    // setting env list
    clo8840[1] = cons;
    clo8840[2] = a8412;
    clo8840[3] = kont8504;
    void *f8505 = encode_clo(clo8840);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = f8505;
    arg_buffer[3] = a8413;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
    // assign buffer size to numArgs
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
    void *append = (decode_clo(env8663))[6];
    // not do dummy comment
    void *lst2 = (decode_clo(env8663))[5];
    // not do dummy comment
    void *lst1 = (decode_clo(env8663))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8663))[3];
    // not do dummy comment
    void *cdr = (decode_clo(env8663))[2];
    // not do dummy comment
    void *kont8504 = (decode_clo(env8663))[1];

    // creating new closure instance
    void **clo8842 = alloc_clo(lam8660_fptr, 5);

    // setting env list
    clo8842[1] = cons;
    clo8842[2] = lst2;
    clo8842[3] = append;
    clo8842[4] = a8412;
    clo8842[5] = kont8504;
    void *f8506 = encode_clo(clo8842);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8506;
    arg_buffer[3] = lst1;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
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
    void *append = (decode_clo(env8665))[7];
    // not do dummy comment
    void *lst2 = (decode_clo(env8665))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8665))[5];
    // not do dummy comment
    void *cdr = (decode_clo(env8665))[4];
    // not do dummy comment
    void *kont8504 = (decode_clo(env8665))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8665))[2];
    // not do dummy comment
    void *car = (decode_clo(env8665))[1];

    // if-clause
    bool if_guard8843 = is_true(a8411);
    if (if_guard8843)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8504);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8504))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8845 = alloc_clo(lam8662_fptr, 6);

        // setting env list
        clo8845[1] = kont8504;
        clo8845[2] = cdr;
        clo8845[3] = cons;
        clo8845[4] = lst1;
        clo8845[5] = lst2;
        clo8845[6] = append;
        void *f8507 = encode_clo(clo8845);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8507;
        arg_buffer[3] = lst1;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8664 = encode_clo(alloc_clo(lam8664_fptr, 0));

void *append_fptr() // append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8666 = arg_buffer[1];
    // reading env and args
    void *kont8504 = arg_buffer[2];
    void *lst1 = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8847 = alloc_clo(lam8664_fptr, 7);

    // setting env list
    clo8847[1] = car;
    clo8847[2] = lst1;
    clo8847[3] = kont8504;
    clo8847[4] = cdr;
    clo8847[5] = cons;
    clo8847[6] = lst2;
    void *append = encode_clo(alloc_clo(append_fptr, 0));

    clo8847[7] = append;
    void *f8508 = encode_clo(clo8847);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8508;
    arg_buffer[3] = lst1;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
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
    void *_8667 = arg_buffer[1];
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

    void *kont8509 = prim_car(lst);
    void *lst8529 = prim_cdr(lst);
    void *xy8415 = apply_prim_hash(lst8529);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8509);
    arg_buffer[2] = xy8415;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8509))[0]);
    // assign buffer size to numArgs
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
    void *_8668 = arg_buffer[1];
    // reading env and args
    void *kont8510 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8416 = prim_hash_u45ref(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8510);
    arg_buffer[2] = xy8416;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8510))[0]);
    // assign buffer size to numArgs
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
    void *_8669 = arg_buffer[1];
    // reading env and args
    void *kont8511 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    void *v = arg_buffer[5];
    // Dummy comment
    void *xy8417 = prim_hash_u45set(h, k, v);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8511);
    arg_buffer[2] = xy8417;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
    // assign buffer size to numArgs
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
    void *_8670 = arg_buffer[1];
    // reading env and args
    void *kont8512 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8418 = prim_hash_u45keys(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8512);
    arg_buffer[2] = xy8418;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8512))[0]);
    // assign buffer size to numArgs
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
    void *_8671 = arg_buffer[1];
    // reading env and args
    void *kont8513 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8419 = prim_hash_u45has_u45key_u63(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8513);
    arg_buffer[2] = xy8419;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8513))[0]);
    // assign buffer size to numArgs
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
    void *_8672 = arg_buffer[1];
    // reading env and args
    void *kont8514 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8420 = prim_hash_u45count(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8514);
    arg_buffer[2] = xy8420;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8514))[0]);
    // assign buffer size to numArgs
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
    void *_8673 = arg_buffer[1];
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

    void *kont8515 = prim_car(lst);
    void *lst8530 = prim_cdr(lst);
    void *xy8421 = apply_prim_set(lst8530);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8515);
    arg_buffer[2] = xy8421;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8515))[0]);
    // assign buffer size to numArgs
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
    void *xy8422 = prim_set_u45_u62list(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8516);
    arg_buffer[2] = xy8422;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8516))[0]);
    // assign buffer size to numArgs
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
    void *xy8423 = prim_list_u45_u62set(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8517);
    arg_buffer[2] = xy8423;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8517))[0]);
    // assign buffer size to numArgs
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
    void *xy8424 = prim_set_u45add(s, val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8518);
    arg_buffer[2] = xy8424;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8518))[0]);
    // assign buffer size to numArgs
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
    void *xy8425 = prim_string_u63(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8519);
    arg_buffer[2] = xy8425;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8519))[0]);
    // assign buffer size to numArgs
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
    void *xy8426 = prim_string_u45length(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8520);
    arg_buffer[2] = xy8426;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8520))[0]);
    // assign buffer size to numArgs
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
    void *xy8427 = prim_string_u45ref(str, pos);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8521);
    arg_buffer[2] = xy8427;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521))[0]);
    // assign buffer size to numArgs
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
    void *xy8428 = prim_substring(str, start, end);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8522);
    arg_buffer[2] = xy8428;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8522))[0]);
    // assign buffer size to numArgs
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
    void *xy8429 = prim_string_u45append(s1, s2);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8523);
    arg_buffer[2] = xy8429;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8523))[0]);
    // assign buffer size to numArgs
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
    void *xy8430 = prim_string_u45_u62list(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8524);
    arg_buffer[2] = xy8430;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8524))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void *call_fptr() // call
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8686 = arg_buffer[1];
    // reading env and args
    void *kont8525 = arg_buffer[2];
    // Dummy comment
    mpz_t *mpzvar8848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8848, "1", 10);
    void *a8431 = encode_mpz(mpzvar8848);
    mpz_t *mpzvar8849 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8849, "1", 10);
    void *a8432 = encode_mpz(mpzvar8849);
    mpz_t *mpzvar8850 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8850, "0", 10);
    void *a8433 = encode_mpz(mpzvar8850);

    // clo-app
    // arg_buffer[2] = apply_prim__u60_u61_1(a8431);
    arg_buffer[2] = apply_prim__u60_u61_3(a8431, a8432, a8433);
    arg_buffer[1] = reinterpret_cast<void *>(kont8525);
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8525))[0]);
    function_ptr();
    return nullptr;
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void *lam8687_fptr() // lam8687
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8688 = arg_buffer[1];
    // reading env and args
    void *xy8434 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8526 = (decode_clo(env8688))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8526);
    arg_buffer[2] = xy8434;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8526))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8687 = encode_clo(alloc_clo(lam8687_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8689 = arg_buffer[1];
    // reading env and args
    void *kont8526 = arg_buffer[2];
    // Dummy comment

    // creating new closure instance
    void **clo8852 = alloc_clo(lam8687_fptr, 1);

    // setting env list
    clo8852[1] = kont8526;
    void *f8527 = encode_clo(clo8852);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call);
    arg_buffer[2] = f8527;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
    // assign buffer size to numArgs
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
