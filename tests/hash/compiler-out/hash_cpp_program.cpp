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
    void *x8707 = apply_prim__u43(lst8709);

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

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void *_u45_fptr() // -
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
    void *x8711 = apply_prim__u45(lst8713);

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

void *_u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void *_u42_fptr() // *
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
    void *x8715 = apply_prim__u42(lst8717);

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

void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void *_u47_fptr() // /
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
    void *x8719 = apply_prim__u47(lst8721);

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

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void *_u61_fptr() // =
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
    void *x8723 = apply_prim__u61(lst8725);

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

void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void *_u62_fptr() // >
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env8728 = arg_buffer[1];
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

    void *kont8726 = prim_car(lst);
    void *lst8729 = prim_cdr(lst);
    void *x8727 = apply_prim__u62(lst8729);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8726);
    arg_buffer[2] = x8727;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8726))[0]);
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
    void *_env8732 = arg_buffer[1];
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

    void *kont8730 = prim_car(lst);
    void *lst8733 = prim_cdr(lst);
    void *x8731 = apply_prim__u60(lst8733);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8730);
    arg_buffer[2] = x8731;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8730))[0]);
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
    void *_env8736 = arg_buffer[1];
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

    void *kont8734 = prim_car(lst);
    void *lst8737 = prim_cdr(lst);
    void *x8735 = apply_prim__u60_u61(lst8737);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8734);
    arg_buffer[2] = x8735;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8734))[0]);
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
    void *_env8740 = arg_buffer[1];
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

    void *kont8738 = prim_car(lst);
    void *lst8741 = prim_cdr(lst);
    void *x8739 = apply_prim__u62_u61(lst8741);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8738);
    arg_buffer[2] = x8739;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8738))[0]);
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
    void *_8538 = arg_buffer[1];
    // reading env and args
    void *kont8442 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8344 = prim_modulo(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8442);
    arg_buffer[2] = xy8344;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8442))[0]);
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
    void *_8539 = arg_buffer[1];
    // reading env and args
    void *kont8443 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    void *xy8345 = prim_null_u63(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8443);
    arg_buffer[2] = xy8345;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8443))[0]);
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
    void *_8540 = arg_buffer[1];
    // reading env and args
    void *kont8444 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8346 = prim_equal_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8444);
    arg_buffer[2] = xy8346;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8444))[0]);
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
    void *_8541 = arg_buffer[1];
    // reading env and args
    void *kont8445 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8347 = prim_eq_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8445);
    arg_buffer[2] = xy8347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
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
    void *_8542 = arg_buffer[1];
    // reading env and args
    void *kont8446 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8348 = prim_cons(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8446);
    arg_buffer[2] = xy8348;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
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
    void *_8543 = arg_buffer[1];
    // reading env and args
    void *kont8447 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8349 = prim_car(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8447);
    arg_buffer[2] = xy8349;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
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
    void *_8544 = arg_buffer[1];
    // reading env and args
    void *kont8448 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8350 = prim_cdr(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8448);
    arg_buffer[2] = xy8350;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void *lam8545_fptr() // lam8545
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8546 = arg_buffer[1];
    // reading env and args
    void *a8353 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8351 = (decode_clo(env8546))[3];
    // not do dummy comment
    void *kont8449 = (decode_clo(env8546))[2];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8546))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8449;
    arg_buffer[3] = a8351;
    arg_buffer[4] = a8353;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8545 = encode_clo(alloc_clo(lam8545_fptr, 0));

void *even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8549 = arg_buffer[1];
    // reading env and args
    void *kont8449 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8742 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8742, "0", 10);
    void *a8351 = encode_mpz(mpzvar8742);
    mpz_t *mpzvar8743 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8743, "2", 10);
    void *a8352 = encode_mpz(mpzvar8743);

    // creating new closure instance
    void **clo8745 = alloc_clo(lam8545_fptr, 3);

    // setting env list
    clo8745[1] = equal_u63;
    clo8745[2] = kont8449;
    clo8745[3] = a8351;
    void *f8450 = encode_clo(clo8745);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8450;
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

void *lam8550_fptr() // lam8550
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8551 = arg_buffer[1];
    // reading env and args
    void *a8356 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8551))[3];
    // not do dummy comment
    void *a8354 = (decode_clo(env8551))[2];
    // not do dummy comment
    void *kont8451 = (decode_clo(env8551))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8451;
    arg_buffer[3] = a8354;
    arg_buffer[4] = a8356;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void *odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8554 = arg_buffer[1];
    // reading env and args
    void *kont8451 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8746 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8746, "1", 10);
    void *a8354 = encode_mpz(mpzvar8746);
    mpz_t *mpzvar8747 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8747, "2", 10);
    void *a8355 = encode_mpz(mpzvar8747);

    // creating new closure instance
    void **clo8749 = alloc_clo(lam8550_fptr, 3);

    // setting env list
    clo8749[1] = kont8451;
    clo8749[2] = a8354;
    clo8749[3] = equal_u63;
    void *f8452 = encode_clo(clo8749);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8452;
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
    void *_8555 = arg_buffer[1];
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

    void *kont8453 = prim_car(x);
    void *x8536 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8453);
    arg_buffer[2] = x8536;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
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
    void *_8556 = arg_buffer[1];
    // reading env and args
    void *kont8454 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8357 = prim_inexact_u45_u62exact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8454);
    arg_buffer[2] = xy8357;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
    void *_8557 = arg_buffer[1];
    // reading env and args
    void *kont8455 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8358 = prim_exact_u45_u62inexact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8455);
    arg_buffer[2] = xy8358;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void *lam8560_fptr() // lam8560
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8561 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *x = (decode_clo(env8561))[3];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8561))[2];
    // not do dummy comment
    void *kont8456 = (decode_clo(env8561))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8456;
    arg_buffer[3] = x;
    arg_buffer[4] = a8364;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8560 = encode_clo(alloc_clo(lam8560_fptr, 0));

void *lam8562_fptr() // lam8562
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8563 = arg_buffer[1];
    // reading env and args
    void *a8362 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8563))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8563))[4];
    // not do dummy comment
    void *x = (decode_clo(env8563))[3];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8563))[2];
    // not do dummy comment
    void *kont8456 = (decode_clo(env8563))[1];

    // if-clause
    bool if_guard8750 = is_true(a8362);
    if (if_guard8750)
    {
        void *xy8363 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8456);
        arg_buffer[2] = xy8363;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8752 = alloc_clo(lam8560_fptr, 3);

        // setting env list
        clo8752[1] = kont8456;
        clo8752[2] = member_u63;
        clo8752[3] = x;
        void *f8457 = encode_clo(clo8752);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8457;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8562 = encode_clo(alloc_clo(lam8562_fptr, 0));

void *lam8564_fptr() // lam8564
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8565 = arg_buffer[1];
    // reading env and args
    void *a8361 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8565))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8565))[5];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8565))[4];
    // not do dummy comment
    void *x = (decode_clo(env8565))[3];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8565))[2];
    // not do dummy comment
    void *kont8456 = (decode_clo(env8565))[1];

    // creating new closure instance
    void **clo8754 = alloc_clo(lam8562_fptr, 5);

    // setting env list
    clo8754[1] = kont8456;
    clo8754[2] = member_u63;
    clo8754[3] = x;
    clo8754[4] = lst;
    clo8754[5] = cdr;
    void *f8458 = encode_clo(clo8754);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8458;
    arg_buffer[3] = a8361;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
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
    void *a8359 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8567))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8567))[6];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8567))[5];
    // not do dummy comment
    void *x = (decode_clo(env8567))[4];
    // not do dummy comment
    void *car = (decode_clo(env8567))[3];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8567))[2];
    // not do dummy comment
    void *kont8456 = (decode_clo(env8567))[1];

    // if-clause
    bool if_guard8755 = is_true(a8359);
    if (if_guard8755)
    {
        void *xy8360 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8456);
        arg_buffer[2] = xy8360;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8757 = alloc_clo(lam8564_fptr, 6);

        // setting env list
        clo8757[1] = kont8456;
        clo8757[2] = member_u63;
        clo8757[3] = x;
        clo8757[4] = equal_u63;
        clo8757[5] = lst;
        clo8757[6] = cdr;
        void *f8459 = encode_clo(clo8757);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8459;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8566 = encode_clo(alloc_clo(lam8566_fptr, 0));

void *member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8568 = arg_buffer[1];
    // reading env and args
    void *kont8456 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8759 = alloc_clo(lam8566_fptr, 7);

    // setting env list
    clo8759[1] = kont8456;
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8759[2] = member_u63;
    clo8759[3] = car;
    clo8759[4] = x;
    clo8759[5] = equal_u63;
    clo8759[6] = lst;
    clo8759[7] = cdr;
    void *f8460 = encode_clo(clo8759);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8460;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void *lam8569_fptr() // lam8569
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8570 = arg_buffer[1];
    // reading env and args
    void *a8368 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8461 = (decode_clo(env8570))[4];
    // not do dummy comment
    void *a8367 = (decode_clo(env8570))[3];
    // not do dummy comment
    void *fun = (decode_clo(env8570))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8570))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8461;
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

void *lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void *lam8571_fptr() // lam8571
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8572 = arg_buffer[1];
    // reading env and args
    void *a8367 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8572))[5];
    // not do dummy comment
    void *fun = (decode_clo(env8572))[4];
    // not do dummy comment
    void *foldl = (decode_clo(env8572))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8572))[2];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8572))[1];

    // creating new closure instance
    void **clo8761 = alloc_clo(lam8569_fptr, 4);

    // setting env list
    clo8761[1] = foldl;
    clo8761[2] = fun;
    clo8761[3] = a8367;
    clo8761[4] = kont8461;
    void *f8462 = encode_clo(clo8761);

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

void *lam8571 = encode_clo(alloc_clo(lam8571_fptr, 0));

void *lam8573_fptr() // lam8573
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8574 = arg_buffer[1];
    // reading env and args
    void *a8366 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8574))[6];
    // not do dummy comment
    void *fun = (decode_clo(env8574))[5];
    // not do dummy comment
    void *acc = (decode_clo(env8574))[4];
    // not do dummy comment
    void *foldl = (decode_clo(env8574))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8574))[2];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8574))[1];

    // creating new closure instance
    void **clo8763 = alloc_clo(lam8571_fptr, 5);

    // setting env list
    clo8763[1] = kont8461;
    clo8763[2] = lst;
    clo8763[3] = foldl;
    clo8763[4] = fun;
    clo8763[5] = cdr;
    void *f8463 = encode_clo(clo8763);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8463;
    arg_buffer[3] = a8366;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
    void *a8365 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8576))[7];
    // not do dummy comment
    void *fun = (decode_clo(env8576))[6];
    // not do dummy comment
    void *acc = (decode_clo(env8576))[5];
    // not do dummy comment
    void *car = (decode_clo(env8576))[4];
    // not do dummy comment
    void *foldl = (decode_clo(env8576))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8576))[2];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8576))[1];

    // if-clause
    bool if_guard8764 = is_true(a8365);
    if (if_guard8764)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8461);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8461))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8766 = alloc_clo(lam8573_fptr, 6);

        // setting env list
        clo8766[1] = kont8461;
        clo8766[2] = lst;
        clo8766[3] = foldl;
        clo8766[4] = acc;
        clo8766[5] = fun;
        clo8766[6] = cdr;
        void *f8464 = encode_clo(clo8766);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8464;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void *foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8577 = arg_buffer[1];
    // reading env and args
    void *kont8461 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8768 = alloc_clo(lam8575_fptr, 7);

    // setting env list
    clo8768[1] = kont8461;
    clo8768[2] = lst;
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8768[3] = foldl;
    clo8768[4] = car;
    clo8768[5] = acc;
    clo8768[6] = fun;
    clo8768[7] = cdr;
    void *f8465 = encode_clo(clo8768);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8465;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void *lam8578_fptr() // lam8578
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8579 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8579))[3];
    // not do dummy comment
    void *a8370 = (decode_clo(env8579))[2];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8579))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8466;
    arg_buffer[3] = a8370;
    arg_buffer[4] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8578 = encode_clo(alloc_clo(lam8578_fptr, 0));

void *lam8580_fptr() // lam8580
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8581 = arg_buffer[1];
    // reading env and args
    void *a8371 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8581))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8581))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8581))[3];
    // not do dummy comment
    void *a8370 = (decode_clo(env8581))[2];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8581))[1];

    // creating new closure instance
    void **clo8770 = alloc_clo(lam8578_fptr, 3);

    // setting env list
    clo8770[1] = kont8466;
    clo8770[2] = a8370;
    clo8770[3] = reverse_u45helper;
    void *f8467 = encode_clo(clo8770);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8467;
    arg_buffer[3] = a8371;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8580 = encode_clo(alloc_clo(lam8580_fptr, 0));

void *lam8582_fptr() // lam8582
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8583 = arg_buffer[1];
    // reading env and args
    void *a8370 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8583))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8583))[5];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8583))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8583))[3];
    // not do dummy comment
    void *car = (decode_clo(env8583))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8583))[1];

    // creating new closure instance
    void **clo8772 = alloc_clo(lam8580_fptr, 5);

    // setting env list
    clo8772[1] = kont8466;
    clo8772[2] = a8370;
    clo8772[3] = cons;
    clo8772[4] = lst2;
    clo8772[5] = reverse_u45helper;
    void *f8468 = encode_clo(clo8772);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8468;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8582 = encode_clo(alloc_clo(lam8582_fptr, 0));

void *lam8584_fptr() // lam8584
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8585 = arg_buffer[1];
    // reading env and args
    void *a8369 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8585))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8585))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8585))[5];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8585))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8585))[3];
    // not do dummy comment
    void *car = (decode_clo(env8585))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8585))[1];

    // if-clause
    bool if_guard8773 = is_true(a8369);
    if (if_guard8773)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8466);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8466))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8775 = alloc_clo(lam8582_fptr, 6);

        // setting env list
        clo8775[1] = cons;
        clo8775[2] = car;
        clo8775[3] = lst2;
        clo8775[4] = kont8466;
        clo8775[5] = reverse_u45helper;
        clo8775[6] = lst;
        void *f8469 = encode_clo(clo8775);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8469;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void *reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8586 = arg_buffer[1];
    // reading env and args
    void *kont8466 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8777 = alloc_clo(lam8584_fptr, 7);

    // setting env list
    clo8777[1] = cons;
    clo8777[2] = car;
    clo8777[3] = lst2;
    clo8777[4] = kont8466;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8777[5] = reverse_u45helper;
    clo8777[6] = lst;
    clo8777[7] = cdr;
    void *f8470 = encode_clo(clo8777);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8470;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void *lam8587_fptr() // lam8587
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8588 = arg_buffer[1];
    // reading env and args
    void *a8373 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8588))[3];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8588))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8588))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8471;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8373;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8587 = encode_clo(alloc_clo(lam8587_fptr, 0));

void *reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8589 = arg_buffer[1];
    // reading env and args
    void *kont8471 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8779 = alloc_clo(lam8587_fptr, 3);

    // setting env list
    clo8779[1] = kont8471;
    clo8779[2] = reverse_u45helper;
    clo8779[3] = lst;
    void *f8472 = encode_clo(clo8779);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8472;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void *lam8590_fptr() // lam8590
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8591 = arg_buffer[1];
    // reading env and args
    void *xy8376 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8473 = (decode_clo(env8591))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8473);
    arg_buffer[2] = xy8376;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8473))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void *lam8592_fptr() // lam8592
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8593 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8379 = (decode_clo(env8593))[4];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8593))[3];
    // not do dummy comment
    void *a8377 = (decode_clo(env8593))[2];
    // not do dummy comment
    void *kont8473 = (decode_clo(env8593))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8473;
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

void *lam8592 = encode_clo(alloc_clo(lam8592_fptr, 0));

void *lam8594_fptr() // lam8594
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8595 = arg_buffer[1];
    // reading env and args
    void *a8380 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8379 = (decode_clo(env8595))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8595))[5];
    // not do dummy comment
    void *a8377 = (decode_clo(env8595))[4];
    // not do dummy comment
    void *kont8473 = (decode_clo(env8595))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8595))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8595))[1];

    // creating new closure instance
    void **clo8781 = alloc_clo(lam8592_fptr, 4);

    // setting env list
    clo8781[1] = kont8473;
    clo8781[2] = a8377;
    clo8781[3] = take_u45helper;
    clo8781[4] = a8379;
    void *f8475 = encode_clo(clo8781);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8475;
    arg_buffer[3] = a8380;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
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
    void *a8379 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8597))[7];
    // not do dummy comment
    void *car = (decode_clo(env8597))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8597))[5];
    // not do dummy comment
    void *a8377 = (decode_clo(env8597))[4];
    // not do dummy comment
    void *kont8473 = (decode_clo(env8597))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8597))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8597))[1];

    // creating new closure instance
    void **clo8783 = alloc_clo(lam8594_fptr, 6);

    // setting env list
    clo8783[1] = lst2;
    clo8783[2] = take_u45helper;
    clo8783[3] = kont8473;
    clo8783[4] = a8377;
    clo8783[5] = cons;
    clo8783[6] = a8379;
    void *f8476 = encode_clo(clo8783);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8476;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8596 = encode_clo(alloc_clo(lam8596_fptr, 0));

void *lam8599_fptr() // lam8599
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8600 = arg_buffer[1];
    // reading env and args
    void *a8377 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8473 = (decode_clo(env8600))[8];
    // not do dummy comment
    void *lst = (decode_clo(env8600))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8600))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8600))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8600))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8600))[3];
    // not do dummy comment
    void *n = (decode_clo(env8600))[2];
    // not do dummy comment
    void *car = (decode_clo(env8600))[1];
    mpz_t *mpzvar8784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8784, "1", 10);
    void *a8378 = encode_mpz(mpzvar8784);

    // creating new closure instance
    void **clo8786 = alloc_clo(lam8596_fptr, 7);

    // setting env list
    clo8786[1] = lst2;
    clo8786[2] = take_u45helper;
    clo8786[3] = kont8473;
    clo8786[4] = a8377;
    clo8786[5] = cons;
    clo8786[6] = car;
    clo8786[7] = lst;
    void *f8477 = encode_clo(clo8786);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8378);
    arg_buffer[1] = reinterpret_cast<void *>(f8477);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8477))[0]);
    function_ptr();
    return nullptr;
}

void *lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void *lam8601_fptr() // lam8601
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8602 = arg_buffer[1];
    // reading env and args
    void *a8375 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8602))[10];
    // not do dummy comment
    void *reverse = (decode_clo(env8602))[9];
    // not do dummy comment
    void *cons = (decode_clo(env8602))[8];
    // not do dummy comment
    void *_u45 = (decode_clo(env8602))[7];
    // not do dummy comment
    void *kont8473 = (decode_clo(env8602))[6];
    // not do dummy comment
    void *cdr = (decode_clo(env8602))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8602))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8602))[3];
    // not do dummy comment
    void *n = (decode_clo(env8602))[2];
    // not do dummy comment
    void *car = (decode_clo(env8602))[1];

    // if-clause
    bool if_guard8787 = is_true(a8375);
    if (if_guard8787)
    {

        // creating new closure instance
        void **clo8789 = alloc_clo(lam8590_fptr, 1);

        // setting env list
        clo8789[1] = kont8473;
        void *f8474 = encode_clo(clo8789);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8474;
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
        void **clo8791 = alloc_clo(lam8599_fptr, 8);

        // setting env list
        clo8791[1] = car;
        clo8791[2] = n;
        clo8791[3] = lst2;
        clo8791[4] = take_u45helper;
        clo8791[5] = _u45;
        clo8791[6] = cons;
        clo8791[7] = lst;
        clo8791[8] = kont8473;
        void *f8478 = encode_clo(clo8791);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8478;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8601 = encode_clo(alloc_clo(lam8601_fptr, 0));

void *take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8604 = arg_buffer[1];
    // reading env and args
    void *kont8473 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // Dummy comment
    mpz_t *mpzvar8792 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8792, "0", 10);
    void *a8374 = encode_mpz(mpzvar8792);

    // creating new closure instance
    void **clo8794 = alloc_clo(lam8601_fptr, 10);

    // setting env list
    clo8794[1] = car;
    clo8794[2] = n;
    clo8794[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo8794[4] = take_u45helper;
    clo8794[5] = cdr;
    clo8794[6] = kont8473;
    clo8794[7] = _u45;
    clo8794[8] = cons;
    clo8794[9] = reverse;
    clo8794[10] = lst;
    void *f8479 = encode_clo(clo8794);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8374);
    arg_buffer[1] = reinterpret_cast<void *>(f8479);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8479))[0]);
    function_ptr();
    return nullptr;
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void *lam8605_fptr() // lam8605
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8606 = arg_buffer[1];
    // reading env and args
    void *a8382 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8606))[4];
    // not do dummy comment
    void *kont8480 = (decode_clo(env8606))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8606))[2];
    // not do dummy comment
    void *n = (decode_clo(env8606))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8480;
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

void *lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void *take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8607 = arg_buffer[1];
    // reading env and args
    void *kont8480 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8796 = alloc_clo(lam8605_fptr, 4);

    // setting env list
    clo8796[1] = n;
    clo8796[2] = take_u45helper;
    clo8796[3] = kont8480;
    clo8796[4] = lst;
    void *f8481 = encode_clo(clo8796);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8481;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void *lam8609_fptr() // lam8609
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8610 = arg_buffer[1];
    // reading env and args
    void *a8387 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8385 = (decode_clo(env8610))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8610))[2];
    // not do dummy comment
    void *kont8482 = (decode_clo(env8610))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8385, a8387);
    arg_buffer[1] = reinterpret_cast<void *>(kont8482);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8482))[0]);
    function_ptr();
    return nullptr;
}

void *lam8609 = encode_clo(alloc_clo(lam8609_fptr, 0));

void *lam8611_fptr() // lam8611
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8612 = arg_buffer[1];
    // reading env and args
    void *a8386 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *length = (decode_clo(env8612))[4];
    // not do dummy comment
    void *a8385 = (decode_clo(env8612))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8612))[2];
    // not do dummy comment
    void *kont8482 = (decode_clo(env8612))[1];

    // creating new closure instance
    void **clo8798 = alloc_clo(lam8609_fptr, 3);

    // setting env list
    clo8798[1] = kont8482;
    clo8798[2] = _u43;
    clo8798[3] = a8385;
    void *f8483 = encode_clo(clo8798);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8483;
    arg_buffer[3] = a8386;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void *lam8614_fptr() // lam8614
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8615 = arg_buffer[1];
    // reading env and args
    void *a8383 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8615))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8615))[4];
    // not do dummy comment
    void *length = (decode_clo(env8615))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8615))[2];
    // not do dummy comment
    void *kont8482 = (decode_clo(env8615))[1];

    // if-clause
    bool if_guard8799 = is_true(a8383);
    if (if_guard8799)
    {
        mpz_t *mpzvar8800 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8800, "0", 10);
        void *xy8384 = encode_mpz(mpzvar8800);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8482);
        arg_buffer[2] = xy8384;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8482))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {
        mpz_t *mpzvar8801 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8801, "1", 10);
        void *a8385 = encode_mpz(mpzvar8801);

        // creating new closure instance
        void **clo8803 = alloc_clo(lam8611_fptr, 4);

        // setting env list
        clo8803[1] = kont8482;
        clo8803[2] = _u43;
        clo8803[3] = a8385;
        clo8803[4] = length;
        void *f8484 = encode_clo(clo8803);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8484;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8614 = encode_clo(alloc_clo(lam8614_fptr, 0));

void *length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8616 = arg_buffer[1];
    // reading env and args
    void *kont8482 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8805 = alloc_clo(lam8614_fptr, 5);

    // setting env list
    clo8805[1] = kont8482;
    clo8805[2] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8805[3] = length;
    clo8805[4] = lst;
    clo8805[5] = cdr;
    void *f8485 = encode_clo(clo8805);

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

void *length = encode_clo(alloc_clo(length_fptr, 0));

void *lam8617_fptr() // lam8617
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8618 = arg_buffer[1];
    // reading env and args
    void *xy8389 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8486 = (decode_clo(env8618))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8486);
    arg_buffer[2] = xy8389;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8486))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8617 = encode_clo(alloc_clo(lam8617_fptr, 0));

void *lam8619_fptr() // lam8619
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8620 = arg_buffer[1];
    // reading env and args
    void *a8393 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8486 = (decode_clo(env8620))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8620))[2];
    // not do dummy comment
    void *a8391 = (decode_clo(env8620))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8486;
    arg_buffer[3] = a8391;
    arg_buffer[4] = a8393;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8619 = encode_clo(alloc_clo(lam8619_fptr, 0));

void *lam8621_fptr() // lam8621
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8622 = arg_buffer[1];
    // reading env and args
    void *a8392 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *map = (decode_clo(env8622))[5];
    // not do dummy comment
    void *proc = (decode_clo(env8622))[4];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8622))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8622))[2];
    // not do dummy comment
    void *a8391 = (decode_clo(env8622))[1];

    // creating new closure instance
    void **clo8807 = alloc_clo(lam8619_fptr, 3);

    // setting env list
    clo8807[1] = a8391;
    clo8807[2] = cons;
    clo8807[3] = kont8486;
    void *f8488 = encode_clo(clo8807);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8488;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8392;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8621 = encode_clo(alloc_clo(lam8621_fptr, 0));

void *lam8623_fptr() // lam8623
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8624 = arg_buffer[1];
    // reading env and args
    void *a8391 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8624))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8624))[5];
    // not do dummy comment
    void *map = (decode_clo(env8624))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8624))[3];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8624))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8624))[1];

    // creating new closure instance
    void **clo8809 = alloc_clo(lam8621_fptr, 5);

    // setting env list
    clo8809[1] = a8391;
    clo8809[2] = cons;
    clo8809[3] = kont8486;
    clo8809[4] = proc;
    clo8809[5] = map;
    void *f8489 = encode_clo(clo8809);

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

void *lam8623 = encode_clo(alloc_clo(lam8623_fptr, 0));

void *lam8625_fptr() // lam8625
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8626 = arg_buffer[1];
    // reading env and args
    void *a8390 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8626))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8626))[5];
    // not do dummy comment
    void *map = (decode_clo(env8626))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8626))[3];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8626))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8626))[1];

    // creating new closure instance
    void **clo8811 = alloc_clo(lam8623_fptr, 6);

    // setting env list
    clo8811[1] = cons;
    clo8811[2] = kont8486;
    clo8811[3] = proc;
    clo8811[4] = map;
    clo8811[5] = lst;
    clo8811[6] = cdr;
    void *f8490 = encode_clo(clo8811);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8490;
    arg_buffer[3] = a8390;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
    void *a8388 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8628))[8];
    // not do dummy comment
    void *map = (decode_clo(env8628))[7];
    // not do dummy comment
    void *proc = (decode_clo(env8628))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8628))[5];
    // not do dummy comment
    void *list = (decode_clo(env8628))[4];
    // not do dummy comment
    void *cdr = (decode_clo(env8628))[3];
    // not do dummy comment
    void *kont8486 = (decode_clo(env8628))[2];
    // not do dummy comment
    void *car = (decode_clo(env8628))[1];

    // if-clause
    bool if_guard8812 = is_true(a8388);
    if (if_guard8812)
    {

        // creating new closure instance
        void **clo8814 = alloc_clo(lam8617_fptr, 1);

        // setting env list
        clo8814[1] = kont8486;
        void *f8487 = encode_clo(clo8814);

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
        void **clo8816 = alloc_clo(lam8625_fptr, 6);

        // setting env list
        clo8816[1] = cons;
        clo8816[2] = kont8486;
        clo8816[3] = proc;
        clo8816[4] = map;
        clo8816[5] = lst;
        clo8816[6] = cdr;
        void *f8491 = encode_clo(clo8816);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8491;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8627 = encode_clo(alloc_clo(lam8627_fptr, 0));

void *map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8629 = arg_buffer[1];
    // reading env and args
    void *kont8486 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8818 = alloc_clo(lam8627_fptr, 8);

    // setting env list
    clo8818[1] = car;
    clo8818[2] = kont8486;
    clo8818[3] = cdr;
    clo8818[4] = list;
    clo8818[5] = cons;
    clo8818[6] = proc;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8818[7] = map;
    clo8818[8] = lst;
    void *f8492 = encode_clo(clo8818);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8492;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void *lam8630_fptr() // lam8630
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8631 = arg_buffer[1];
    // reading env and args
    void *xy8395 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8493 = (decode_clo(env8631))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8493);
    arg_buffer[2] = xy8395;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8493))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8630 = encode_clo(alloc_clo(lam8630_fptr, 0));

void *lam8632_fptr() // lam8632
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8633 = arg_buffer[1];
    // reading env and args
    void *a8400 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8493 = (decode_clo(env8633))[3];
    // not do dummy comment
    void *a8398 = (decode_clo(env8633))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8633))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8493;
    arg_buffer[3] = a8398;
    arg_buffer[4] = a8400;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void *lam8634_fptr() // lam8634
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8635 = arg_buffer[1];
    // reading env and args
    void *a8399 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8493 = (decode_clo(env8635))[5];
    // not do dummy comment
    void *a8398 = (decode_clo(env8635))[4];
    // not do dummy comment
    void *op = (decode_clo(env8635))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8635))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8635))[1];

    // creating new closure instance
    void **clo8820 = alloc_clo(lam8632_fptr, 3);

    // setting env list
    clo8820[1] = cons;
    clo8820[2] = a8398;
    clo8820[3] = kont8493;
    void *f8495 = encode_clo(clo8820);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8495;
    arg_buffer[3] = op;
    arg_buffer[4] = a8399;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8634 = encode_clo(alloc_clo(lam8634_fptr, 0));

void *lam8636_fptr() // lam8636
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8637 = arg_buffer[1];
    // reading env and args
    void *a8398 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8637))[6];
    // not do dummy comment
    void *op = (decode_clo(env8637))[5];
    // not do dummy comment
    void *filter = (decode_clo(env8637))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8637))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8637))[2];
    // not do dummy comment
    void *kont8493 = (decode_clo(env8637))[1];

    // creating new closure instance
    void **clo8822 = alloc_clo(lam8634_fptr, 5);

    // setting env list
    clo8822[1] = cons;
    clo8822[2] = filter;
    clo8822[3] = op;
    clo8822[4] = a8398;
    clo8822[5] = kont8493;
    void *f8496 = encode_clo(clo8822);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8496;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8636 = encode_clo(alloc_clo(lam8636_fptr, 0));

void *lam8638_fptr() // lam8638
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8639 = arg_buffer[1];
    // reading env and args
    void *a8401 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8493 = (decode_clo(env8639))[3];
    // not do dummy comment
    void *op = (decode_clo(env8639))[2];
    // not do dummy comment
    void *filter = (decode_clo(env8639))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8493;
    arg_buffer[3] = op;
    arg_buffer[4] = a8401;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void *lam8640_fptr() // lam8640
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8641 = arg_buffer[1];
    // reading env and args
    void *a8397 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8641))[7];
    // not do dummy comment
    void *op = (decode_clo(env8641))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8641))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8641))[4];
    // not do dummy comment
    void *kont8493 = (decode_clo(env8641))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8641))[2];
    // not do dummy comment
    void *car = (decode_clo(env8641))[1];

    // if-clause
    bool if_guard8823 = is_true(a8397);
    if (if_guard8823)
    {

        // creating new closure instance
        void **clo8825 = alloc_clo(lam8636_fptr, 6);

        // setting env list
        clo8825[1] = kont8493;
        clo8825[2] = lst;
        clo8825[3] = cons;
        clo8825[4] = filter;
        clo8825[5] = op;
        clo8825[6] = cdr;
        void *f8497 = encode_clo(clo8825);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8497;
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
        void **clo8827 = alloc_clo(lam8638_fptr, 3);

        // setting env list
        clo8827[1] = filter;
        clo8827[2] = op;
        clo8827[3] = kont8493;
        void *f8498 = encode_clo(clo8827);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8498;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8640 = encode_clo(alloc_clo(lam8640_fptr, 0));

void *lam8642_fptr() // lam8642
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8643 = arg_buffer[1];
    // reading env and args
    void *a8396 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8643))[7];
    // not do dummy comment
    void *op = (decode_clo(env8643))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8643))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8643))[4];
    // not do dummy comment
    void *kont8493 = (decode_clo(env8643))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8643))[2];
    // not do dummy comment
    void *car = (decode_clo(env8643))[1];

    // creating new closure instance
    void **clo8829 = alloc_clo(lam8640_fptr, 7);

    // setting env list
    clo8829[1] = car;
    clo8829[2] = filter;
    clo8829[3] = kont8493;
    clo8829[4] = lst;
    clo8829[5] = cons;
    clo8829[6] = op;
    clo8829[7] = cdr;
    void *f8499 = encode_clo(clo8829);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8499;
    arg_buffer[3] = a8396;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8642 = encode_clo(alloc_clo(lam8642_fptr, 0));

void *lam8644_fptr() // lam8644
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8645 = arg_buffer[1];
    // reading env and args
    void *a8394 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8645))[8];
    // not do dummy comment
    void *cons = (decode_clo(env8645))[7];
    // not do dummy comment
    void *list = (decode_clo(env8645))[6];
    // not do dummy comment
    void *cdr = (decode_clo(env8645))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8645))[4];
    // not do dummy comment
    void *kont8493 = (decode_clo(env8645))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8645))[2];
    // not do dummy comment
    void *car = (decode_clo(env8645))[1];

    // if-clause
    bool if_guard8830 = is_true(a8394);
    if (if_guard8830)
    {

        // creating new closure instance
        void **clo8832 = alloc_clo(lam8630_fptr, 1);

        // setting env list
        clo8832[1] = kont8493;
        void *f8494 = encode_clo(clo8832);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8494;
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
        void **clo8834 = alloc_clo(lam8642_fptr, 7);

        // setting env list
        clo8834[1] = car;
        clo8834[2] = filter;
        clo8834[3] = kont8493;
        clo8834[4] = lst;
        clo8834[5] = cons;
        clo8834[6] = op;
        clo8834[7] = cdr;
        void *f8500 = encode_clo(clo8834);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8500;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8644 = encode_clo(alloc_clo(lam8644_fptr, 0));

void *filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8646 = arg_buffer[1];
    // reading env and args
    void *kont8493 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8836 = alloc_clo(lam8644_fptr, 8);

    // setting env list
    clo8836[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8836[2] = filter;
    clo8836[3] = kont8493;
    clo8836[4] = lst;
    clo8836[5] = cdr;
    clo8836[6] = list;
    clo8836[7] = cons;
    clo8836[8] = op;
    void *f8501 = encode_clo(clo8836);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8501;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void *lam8647_fptr() // lam8647
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8648 = arg_buffer[1];
    // reading env and args
    void *a8406 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *drop = (decode_clo(env8648))[3];
    // not do dummy comment
    void *a8404 = (decode_clo(env8648))[2];
    // not do dummy comment
    void *kont8502 = (decode_clo(env8648))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8502;
    arg_buffer[3] = a8404;
    arg_buffer[4] = a8406;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void *lam8650_fptr() // lam8650
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8651 = arg_buffer[1];
    // reading env and args
    void *a8404 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *drop = (decode_clo(env8651))[4];
    // not do dummy comment
    void *_u45 = (decode_clo(env8651))[3];
    // not do dummy comment
    void *n = (decode_clo(env8651))[2];
    // not do dummy comment
    void *kont8502 = (decode_clo(env8651))[1];
    mpz_t *mpzvar8837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8837, "1", 10);
    void *a8405 = encode_mpz(mpzvar8837);

    // creating new closure instance
    void **clo8839 = alloc_clo(lam8647_fptr, 3);

    // setting env list
    clo8839[1] = kont8502;
    clo8839[2] = a8404;
    clo8839[3] = drop;
    void *f8503 = encode_clo(clo8839);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8405);
    arg_buffer[1] = reinterpret_cast<void *>(f8503);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8503))[0]);
    function_ptr();
    return nullptr;
}

void *lam8650 = encode_clo(alloc_clo(lam8650_fptr, 0));

void *lam8652_fptr() // lam8652
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8653 = arg_buffer[1];
    // reading env and args
    void *a8403 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8653))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8653))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8653))[4];
    // not do dummy comment
    void *drop = (decode_clo(env8653))[3];
    // not do dummy comment
    void *n = (decode_clo(env8653))[2];
    // not do dummy comment
    void *kont8502 = (decode_clo(env8653))[1];

    // if-clause
    bool if_guard8840 = is_true(a8403);
    if (if_guard8840)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8502);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8502))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8842 = alloc_clo(lam8650_fptr, 4);

        // setting env list
        clo8842[1] = kont8502;
        clo8842[2] = n;
        clo8842[3] = _u45;
        clo8842[4] = drop;
        void *f8504 = encode_clo(clo8842);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8504;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8652 = encode_clo(alloc_clo(lam8652_fptr, 0));

void *drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8655 = arg_buffer[1];
    // reading env and args
    void *kont8502 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8843 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8843, "0", 10);
    void *a8402 = encode_mpz(mpzvar8843);

    // creating new closure instance
    void **clo8845 = alloc_clo(lam8652_fptr, 6);

    // setting env list
    clo8845[1] = kont8502;
    clo8845[2] = n;
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8845[3] = drop;
    clo8845[4] = lst;
    clo8845[5] = _u45;
    clo8845[6] = cdr;
    void *f8505 = encode_clo(clo8845);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8402);
    arg_buffer[1] = reinterpret_cast<void *>(f8505);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8505))[0]);
    function_ptr();
    return nullptr;
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void *lam8656_fptr() // lam8656
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8657 = arg_buffer[1];
    // reading env and args
    void *a8410 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8506 = (decode_clo(env8657))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8657))[2];
    // not do dummy comment
    void *a8408 = (decode_clo(env8657))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = kont8506;
    arg_buffer[3] = a8408;
    arg_buffer[4] = a8410;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8656 = encode_clo(alloc_clo(lam8656_fptr, 0));

void *lam8658_fptr() // lam8658
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8659 = arg_buffer[1];
    // reading env and args
    void *a8409 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8506 = (decode_clo(env8659))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8659))[4];
    // not do dummy comment
    void *a8408 = (decode_clo(env8659))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8659))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8659))[1];

    // creating new closure instance
    void **clo8847 = alloc_clo(lam8656_fptr, 3);

    // setting env list
    clo8847[1] = a8408;
    clo8847[2] = proc;
    clo8847[3] = kont8506;
    void *f8507 = encode_clo(clo8847);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8507;
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

void *lam8658 = encode_clo(alloc_clo(lam8658_fptr, 0));

void *lam8660_fptr() // lam8660
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8661 = arg_buffer[1];
    // reading env and args
    void *a8408 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8661))[6];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8661))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8661))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8661))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8661))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8661))[1];

    // creating new closure instance
    void **clo8849 = alloc_clo(lam8658_fptr, 5);

    // setting env list
    clo8849[1] = acc;
    clo8849[2] = proc;
    clo8849[3] = a8408;
    clo8849[4] = foldr;
    clo8849[5] = kont8506;
    void *f8508 = encode_clo(clo8849);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8508;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
    void *a8407 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8663))[7];
    // not do dummy comment
    void *kont8506 = (decode_clo(env8663))[6];
    // not do dummy comment
    void *car = (decode_clo(env8663))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8663))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8663))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8663))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8663))[1];

    // if-clause
    bool if_guard8850 = is_true(a8407);
    if (if_guard8850)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8506);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8506))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8852 = alloc_clo(lam8660_fptr, 6);

        // setting env list
        clo8852[1] = acc;
        clo8852[2] = proc;
        clo8852[3] = lst;
        clo8852[4] = foldr;
        clo8852[5] = kont8506;
        clo8852[6] = cdr;
        void *f8509 = encode_clo(clo8852);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8509;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8662 = encode_clo(alloc_clo(lam8662_fptr, 0));

void *foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8664 = arg_buffer[1];
    // reading env and args
    void *kont8506 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8854 = alloc_clo(lam8662_fptr, 7);

    // setting env list
    clo8854[1] = acc;
    clo8854[2] = proc;
    clo8854[3] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8854[4] = foldr;
    clo8854[5] = car;
    clo8854[6] = kont8506;
    clo8854[7] = cdr;
    void *f8510 = encode_clo(clo8854);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8510;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void *lam8665_fptr() // lam8665
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8666 = arg_buffer[1];
    // reading env and args
    void *a8414 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8412 = (decode_clo(env8666))[3];
    // not do dummy comment
    void *kont8511 = (decode_clo(env8666))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8666))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8511;
    arg_buffer[3] = a8412;
    arg_buffer[4] = a8414;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8665 = encode_clo(alloc_clo(lam8665_fptr, 0));

void *lam8667_fptr() // lam8667
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8668 = arg_buffer[1];
    // reading env and args
    void *a8413 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8412 = (decode_clo(env8668))[5];
    // not do dummy comment
    void *kont8511 = (decode_clo(env8668))[4];
    // not do dummy comment
    void *append = (decode_clo(env8668))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8668))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8668))[1];

    // creating new closure instance
    void **clo8856 = alloc_clo(lam8665_fptr, 3);

    // setting env list
    clo8856[1] = cons;
    clo8856[2] = kont8511;
    clo8856[3] = a8412;
    void *f8512 = encode_clo(clo8856);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = f8512;
    arg_buffer[3] = a8413;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8667 = encode_clo(alloc_clo(lam8667_fptr, 0));

void *lam8669_fptr() // lam8669
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8670 = arg_buffer[1];
    // reading env and args
    void *a8412 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8670))[6];
    // not do dummy comment
    void *kont8511 = (decode_clo(env8670))[5];
    // not do dummy comment
    void *append = (decode_clo(env8670))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8670))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8670))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8670))[1];

    // creating new closure instance
    void **clo8858 = alloc_clo(lam8667_fptr, 5);

    // setting env list
    clo8858[1] = cons;
    clo8858[2] = lst2;
    clo8858[3] = append;
    clo8858[4] = kont8511;
    clo8858[5] = a8412;
    void *f8513 = encode_clo(clo8858);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8513;
    arg_buffer[3] = lst1;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8669 = encode_clo(alloc_clo(lam8669_fptr, 0));

void *lam8671_fptr() // lam8671
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8672 = arg_buffer[1];
    // reading env and args
    void *a8411 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8672))[7];
    // not do dummy comment
    void *kont8511 = (decode_clo(env8672))[6];
    // not do dummy comment
    void *append = (decode_clo(env8672))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8672))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8672))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8672))[2];
    // not do dummy comment
    void *car = (decode_clo(env8672))[1];

    // if-clause
    bool if_guard8859 = is_true(a8411);
    if (if_guard8859)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8511);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8861 = alloc_clo(lam8669_fptr, 6);

        // setting env list
        clo8861[1] = cons;
        clo8861[2] = lst1;
        clo8861[3] = lst2;
        clo8861[4] = append;
        clo8861[5] = kont8511;
        clo8861[6] = cdr;
        void *f8514 = encode_clo(clo8861);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8514;
        arg_buffer[3] = lst1;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8671 = encode_clo(alloc_clo(lam8671_fptr, 0));

void *append_fptr() // append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8673 = arg_buffer[1];
    // reading env and args
    void *kont8511 = arg_buffer[2];
    void *lst1 = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8863 = alloc_clo(lam8671_fptr, 7);

    // setting env list
    clo8863[1] = car;
    clo8863[2] = lst1;
    clo8863[3] = cons;
    clo8863[4] = lst2;
    void *append = encode_clo(alloc_clo(append_fptr, 0));

    clo8863[5] = append;
    clo8863[6] = kont8511;
    clo8863[7] = cdr;
    void *f8515 = encode_clo(clo8863);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8515;
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
    void *_env8866 = arg_buffer[1];
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

    void *kont8864 = prim_car(lst);
    void *lst8867 = prim_cdr(lst);
    void *x8865 = apply_prim_hash(lst8867);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8864);
    arg_buffer[2] = x8865;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);
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
    void *_8674 = arg_buffer[1];
    // reading env and args
    void *kont8516 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8415 = prim_hash_u45ref(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8516);
    arg_buffer[2] = xy8415;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8516))[0]);
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
    void *_8675 = arg_buffer[1];
    // reading env and args
    void *kont8517 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    void *v = arg_buffer[5];
    // Dummy comment
    void *xy8416 = prim_hash_u45set(h, k, v);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8517);
    arg_buffer[2] = xy8416;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8517))[0]);
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
    void *_8676 = arg_buffer[1];
    // reading env and args
    void *kont8518 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8417 = prim_hash_u45keys(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8518);
    arg_buffer[2] = xy8417;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8518))[0]);
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
    void *_8677 = arg_buffer[1];
    // reading env and args
    void *kont8519 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8418 = prim_hash_u45has_u45key_u63(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8519);
    arg_buffer[2] = xy8418;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8519))[0]);
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
    void *_8678 = arg_buffer[1];
    // reading env and args
    void *kont8520 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8419 = prim_hash_u45count(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8520);
    arg_buffer[2] = xy8419;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8520))[0]);
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
    void *_8679 = arg_buffer[1];
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

    void *kont8521 = prim_car(lst);
    void *lst8537 = prim_cdr(lst);
    void *xy8420 = apply_prim_set(lst8537);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8521);
    arg_buffer[2] = xy8420;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521))[0]);
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
    void *_8680 = arg_buffer[1];
    // reading env and args
    void *kont8522 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8421 = prim_set_u45_u62list(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8522);
    arg_buffer[2] = xy8421;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8522))[0]);
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
    void *_8681 = arg_buffer[1];
    // reading env and args
    void *kont8523 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8422 = prim_list_u45_u62set(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8523);
    arg_buffer[2] = xy8422;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8523))[0]);
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
    void *_8682 = arg_buffer[1];
    // reading env and args
    void *kont8524 = arg_buffer[2];
    void *s = arg_buffer[3];
    void *val = arg_buffer[4];
    // Dummy comment
    void *xy8423 = prim_set_u45add(s, val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8524);
    arg_buffer[2] = xy8423;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8524))[0]);
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
    void *_8683 = arg_buffer[1];
    // reading env and args
    void *kont8525 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8424 = prim_string_u63(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8525);
    arg_buffer[2] = xy8424;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8525))[0]);
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
    void *_8684 = arg_buffer[1];
    // reading env and args
    void *kont8526 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8425 = prim_string_u45length(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8526);
    arg_buffer[2] = xy8425;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8526))[0]);
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
    void *_8685 = arg_buffer[1];
    // reading env and args
    void *kont8527 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *pos = arg_buffer[4];
    // Dummy comment
    void *xy8426 = prim_string_u45ref(str, pos);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8527);
    arg_buffer[2] = xy8426;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8527))[0]);
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
    void *_8686 = arg_buffer[1];
    // reading env and args
    void *kont8528 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *start = arg_buffer[4];
    void *end = arg_buffer[5];
    // Dummy comment
    void *xy8427 = prim_substring(str, start, end);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8528);
    arg_buffer[2] = xy8427;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8528))[0]);
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
    void *_8687 = arg_buffer[1];
    // reading env and args
    void *kont8529 = arg_buffer[2];
    void *s1 = arg_buffer[3];
    void *s2 = arg_buffer[4];
    // Dummy comment
    void *xy8428 = prim_string_u45append(s1, s2);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8529);
    arg_buffer[2] = xy8428;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8529))[0]);
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
    void *_8688 = arg_buffer[1];
    // reading env and args
    void *kont8530 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8429 = prim_string_u45_u62list(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8530);
    arg_buffer[2] = xy8429;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8530))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void *lam8690_fptr() // lam8690
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8691 = arg_buffer[1];
    // reading env and args
    void *a8439 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *hash = (decode_clo(env8691))[4];
    // not do dummy comment
    void *a8433 = (decode_clo(env8691))[3];
    // not do dummy comment
    void *a8434 = (decode_clo(env8691))[2];
    // not do dummy comment
    void *kont8531 = (decode_clo(env8691))[1];
    mpz_t *mpzvar8868 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8868, "2", 10);
    void *a8440 = encode_mpz(mpzvar8868);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(hash);
    arg_buffer[2] = kont8531;
    arg_buffer[3] = a8433;
    arg_buffer[4] = a8434;
    arg_buffer[5] = a8439;
    arg_buffer[6] = a8440;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8690 = encode_clo(alloc_clo(lam8690_fptr, 0));

void *lam8697_fptr() // lam8697
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8698 = arg_buffer[1];
    // reading env and args
    void *a8433 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *list = (decode_clo(env8698))[3];
    // not do dummy comment
    void *hash = (decode_clo(env8698))[2];
    // not do dummy comment
    void *kont8531 = (decode_clo(env8698))[1];
    mpz_t *mpzvar8869 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8869, "80", 10);
    void *a8434 = encode_mpz(mpzvar8869);
    mpz_t *mpzvar8870 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8870, "1", 10);
    void *a8435 = encode_mpz(mpzvar8870);
    mpz_t *mpzvar8871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8871, "2", 10);
    void *a8436 = encode_mpz(mpzvar8871);
    mpz_t *mpzvar8872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8872, "3", 10);
    void *a8437 = encode_mpz(mpzvar8872);
    mpz_t *mpzvar8873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8873, "4", 10);
    void *a8438 = encode_mpz(mpzvar8873);

    // creating new closure instance
    void **clo8875 = alloc_clo(lam8690_fptr, 4);

    // setting env list
    clo8875[1] = kont8531;
    clo8875[2] = a8434;
    clo8875[3] = a8433;
    clo8875[4] = hash;
    void *f8532 = encode_clo(clo8875);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8532;
    arg_buffer[3] = a8435;
    arg_buffer[4] = a8436;
    arg_buffer[5] = a8437;
    arg_buffer[6] = a8438;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8697 = encode_clo(alloc_clo(lam8697_fptr, 0));

void *call_fptr() // call
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8702 = arg_buffer[1];
    // reading env and args
    void *kont8531 = arg_buffer[2];
    // Dummy comment
    mpz_t *mpzvar8876 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8876, "1", 10);
    void *a8430 = encode_mpz(mpzvar8876);
    mpz_t *mpzvar8877 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8877, "2", 10);
    void *a8431 = encode_mpz(mpzvar8877);
    mpz_t *mpzvar8878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8878, "3", 10);
    void *a8432 = encode_mpz(mpzvar8878);

    // creating new closure instance
    void **clo8880 = alloc_clo(lam8697_fptr, 3);

    // setting env list
    clo8880[1] = kont8531;
    clo8880[2] = hash;
    clo8880[3] = list;
    void *f8533 = encode_clo(clo8880);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8533;
    arg_buffer[3] = a8430;
    arg_buffer[4] = a8431;
    arg_buffer[5] = a8432;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void *lam8703_fptr() // lam8703
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8704 = arg_buffer[1];
    // reading env and args
    void *xy8441 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8534 = (decode_clo(env8704))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8534);
    arg_buffer[2] = xy8441;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8534))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8703 = encode_clo(alloc_clo(lam8703_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8705 = arg_buffer[1];
    // reading env and args
    void *kont8534 = arg_buffer[2];
    // Dummy comment

    // creating new closure instance
    void **clo8882 = alloc_clo(lam8703_fptr, 1);

    // setting env list
    clo8882[1] = kont8534;
    void *f8535 = encode_clo(clo8882);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call);
    arg_buffer[2] = f8535;
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
