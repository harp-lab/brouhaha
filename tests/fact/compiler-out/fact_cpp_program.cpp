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
    void *_env8727 = arg_buffer[1];
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

    void *kont8725 = prim_car(lst);
    void *lst8728 = prim_cdr(lst);
    void *x8726 = apply_prim__u43(lst8728);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8725);
    arg_buffer[2] = x8726;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8725))[0]);
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
    void *_env8731 = arg_buffer[1];
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

    void *kont8729 = prim_car(lst);
    void *lst8732 = prim_cdr(lst);
    void *x8730 = apply_prim__u45(lst8732);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8729);
    arg_buffer[2] = x8730;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8729))[0]);
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
    void *_8555 = arg_buffer[1];
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

    void *kont8443 = prim_car(lst);
    void *lst8545 = prim_cdr(lst);
    void *xy8345 = apply_prim__u42(lst8545);

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

void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void *modulo_fptr() // modulo
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8556 = arg_buffer[1];
    // reading env and args
    void *kont8444 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8346 = prim_modulo(a, b);

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

void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void *_u47_fptr() // /
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8557 = arg_buffer[1];
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

    void *kont8445 = prim_car(lst);
    void *lst8546 = prim_cdr(lst);
    void *xy8347 = apply_prim__u47(lst8546);

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

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void *_u61_fptr() // =
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8558 = arg_buffer[1];
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

    void *kont8446 = prim_car(lst);
    void *lst8547 = prim_cdr(lst);
    void *xy8348 = apply_prim__u61(lst8547);

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

void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void *_u62_fptr() // >
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8559 = arg_buffer[1];
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

    void *kont8447 = prim_car(lst);
    void *lst8548 = prim_cdr(lst);
    void *xy8349 = apply_prim__u62(lst8548);

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

void *_u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void *_u60_fptr() // <
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8560 = arg_buffer[1];
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

    void *kont8448 = prim_car(lst);
    void *lst8549 = prim_cdr(lst);
    void *xy8350 = apply_prim__u60(lst8549);

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

void *_u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void *_u60_u61_fptr() // <=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8561 = arg_buffer[1];
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

    void *kont8449 = prim_car(lst);
    void *lst8550 = prim_cdr(lst);
    void *xy8351 = apply_prim__u60_u61(lst8550);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8449);
    arg_buffer[2] = xy8351;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
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
    void *_8562 = arg_buffer[1];
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

    void *kont8450 = prim_car(lst);
    void *lst8551 = prim_cdr(lst);
    void *xy8352 = apply_prim__u62_u61(lst8551);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8450);
    arg_buffer[2] = xy8352;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8450))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void *null_u63_fptr() // null?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8563 = arg_buffer[1];
    // reading env and args
    void *kont8451 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    void *xy8353 = prim_null_u63(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8451);
    arg_buffer[2] = xy8353;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
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
    void *_8564 = arg_buffer[1];
    // reading env and args
    void *kont8452 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8354 = prim_equal_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8452);
    arg_buffer[2] = xy8354;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
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
    void *_8565 = arg_buffer[1];
    // reading env and args
    void *kont8453 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8355 = prim_eq_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8453);
    arg_buffer[2] = xy8355;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
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
    void *_8566 = arg_buffer[1];
    // reading env and args
    void *kont8454 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8356 = prim_cons(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8454);
    arg_buffer[2] = xy8356;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
    void *_8567 = arg_buffer[1];
    // reading env and args
    void *kont8455 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8357 = prim_car(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8455);
    arg_buffer[2] = xy8357;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
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
    void *_8568 = arg_buffer[1];
    // reading env and args
    void *kont8456 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8358 = prim_cdr(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8456);
    arg_buffer[2] = xy8358;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void *lam8569_fptr() // lam8569
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8570 = arg_buffer[1];
    // reading env and args
    void *a8361 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8570))[3];
    // not do dummy comment
    void *a8359 = (decode_clo(env8570))[2];
    // not do dummy comment
    void *kont8457 = (decode_clo(env8570))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8457;
    arg_buffer[3] = a8359;
    arg_buffer[4] = a8361;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8569 = encode_clo(alloc_clo(lam8569_fptr, 0));

void *even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8573 = arg_buffer[1];
    // reading env and args
    void *kont8457 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8733 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8733, "0", 10);
    void *a8359 = encode_mpz(mpzvar8733);
    mpz_t *mpzvar8734 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8734, "2", 10);
    void *a8360 = encode_mpz(mpzvar8734);

    // creating new closure instance
    void **clo8736 = alloc_clo(lam8569_fptr, 3);

    // setting env list
    clo8736[1] = kont8457;
    clo8736[2] = a8359;
    clo8736[3] = equal_u63;
    void *f8458 = encode_clo(clo8736);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8458;
    arg_buffer[3] = x;
    arg_buffer[4] = a8360;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void *lam8574_fptr() // lam8574
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8575 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8575))[3];
    // not do dummy comment
    void *a8362 = (decode_clo(env8575))[2];
    // not do dummy comment
    void *kont8459 = (decode_clo(env8575))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8459;
    arg_buffer[3] = a8362;
    arg_buffer[4] = a8364;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8574 = encode_clo(alloc_clo(lam8574_fptr, 0));

void *odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8578 = arg_buffer[1];
    // reading env and args
    void *kont8459 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8737 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8737, "1", 10);
    void *a8362 = encode_mpz(mpzvar8737);
    mpz_t *mpzvar8738 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8738, "2", 10);
    void *a8363 = encode_mpz(mpzvar8738);

    // creating new closure instance
    void **clo8740 = alloc_clo(lam8574_fptr, 3);

    // setting env list
    clo8740[1] = kont8459;
    clo8740[2] = a8362;
    clo8740[3] = equal_u63;
    void *f8460 = encode_clo(clo8740);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8460;
    arg_buffer[3] = x;
    arg_buffer[4] = a8363;
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
    void *_8579 = arg_buffer[1];
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

    void *kont8461 = prim_car(x);
    void *x8552 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8461);
    arg_buffer[2] = x8552;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8461))[0]);
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
    void *_8580 = arg_buffer[1];
    // reading env and args
    void *kont8462 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8365 = prim_inexact_u45_u62exact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8462);
    arg_buffer[2] = xy8365;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8462))[0]);
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
    void *_8581 = arg_buffer[1];
    // reading env and args
    void *kont8463 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8366 = prim_exact_u45_u62inexact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8463);
    arg_buffer[2] = xy8366;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8463))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void *lam8584_fptr() // lam8584
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8585 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8464 = (decode_clo(env8585))[3];
    // not do dummy comment
    void *x = (decode_clo(env8585))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8585))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8464;
    arg_buffer[3] = x;
    arg_buffer[4] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void *lam8586_fptr() // lam8586
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8587 = arg_buffer[1];
    // reading env and args
    void *a8370 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8587))[5];
    // not do dummy comment
    void *x = (decode_clo(env8587))[4];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8587))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8587))[2];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8587))[1];

    // if-clause
    bool if_guard8741 = is_true(a8370);
    if (if_guard8741)
    {
        void *xy8371 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8464);
        arg_buffer[2] = xy8371;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8743 = alloc_clo(lam8584_fptr, 3);

        // setting env list
        clo8743[1] = member_u63;
        clo8743[2] = x;
        clo8743[3] = kont8464;
        void *f8465 = encode_clo(clo8743);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8465;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8586 = encode_clo(alloc_clo(lam8586_fptr, 0));

void *lam8588_fptr() // lam8588
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8589 = arg_buffer[1];
    // reading env and args
    void *a8369 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8589))[6];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8589))[5];
    // not do dummy comment
    void *x = (decode_clo(env8589))[4];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8589))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8589))[2];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8589))[1];

    // creating new closure instance
    void **clo8745 = alloc_clo(lam8586_fptr, 5);

    // setting env list
    clo8745[1] = kont8464;
    clo8745[2] = lst;
    clo8745[3] = member_u63;
    clo8745[4] = x;
    clo8745[5] = cdr;
    void *f8466 = encode_clo(clo8745);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8466;
    arg_buffer[3] = a8369;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8588 = encode_clo(alloc_clo(lam8588_fptr, 0));

void *lam8590_fptr() // lam8590
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8591 = arg_buffer[1];
    // reading env and args
    void *a8367 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8591))[7];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8591))[6];
    // not do dummy comment
    void *x = (decode_clo(env8591))[5];
    // not do dummy comment
    void *car = (decode_clo(env8591))[4];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8591))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8591))[2];
    // not do dummy comment
    void *kont8464 = (decode_clo(env8591))[1];

    // if-clause
    bool if_guard8746 = is_true(a8367);
    if (if_guard8746)
    {
        void *xy8368 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8464);
        arg_buffer[2] = xy8368;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8748 = alloc_clo(lam8588_fptr, 6);

        // setting env list
        clo8748[1] = kont8464;
        clo8748[2] = lst;
        clo8748[3] = member_u63;
        clo8748[4] = x;
        clo8748[5] = equal_u63;
        clo8748[6] = cdr;
        void *f8467 = encode_clo(clo8748);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8467;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void *member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8592 = arg_buffer[1];
    // reading env and args
    void *kont8464 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8750 = alloc_clo(lam8590_fptr, 7);

    // setting env list
    clo8750[1] = kont8464;
    clo8750[2] = lst;
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8750[3] = member_u63;
    clo8750[4] = car;
    clo8750[5] = x;
    clo8750[6] = equal_u63;
    clo8750[7] = cdr;
    void *f8468 = encode_clo(clo8750);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8468;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void *lam8593_fptr() // lam8593
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8594 = arg_buffer[1];
    // reading env and args
    void *a8376 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8469 = (decode_clo(env8594))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8594))[3];
    // not do dummy comment
    void *a8375 = (decode_clo(env8594))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8594))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8469;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8375;
    arg_buffer[5] = a8376;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void *lam8595_fptr() // lam8595
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8596 = arg_buffer[1];
    // reading env and args
    void *a8375 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8596))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8596))[4];
    // not do dummy comment
    void *kont8469 = (decode_clo(env8596))[3];
    // not do dummy comment
    void *fun = (decode_clo(env8596))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8596))[1];

    // creating new closure instance
    void **clo8752 = alloc_clo(lam8593_fptr, 4);

    // setting env list
    clo8752[1] = foldl;
    clo8752[2] = a8375;
    clo8752[3] = fun;
    clo8752[4] = kont8469;
    void *f8470 = encode_clo(clo8752);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8470;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8595 = encode_clo(alloc_clo(lam8595_fptr, 0));

void *lam8597_fptr() // lam8597
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8598 = arg_buffer[1];
    // reading env and args
    void *a8374 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8598))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8598))[5];
    // not do dummy comment
    void *kont8469 = (decode_clo(env8598))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8598))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8598))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8598))[1];

    // creating new closure instance
    void **clo8754 = alloc_clo(lam8595_fptr, 5);

    // setting env list
    clo8754[1] = foldl;
    clo8754[2] = fun;
    clo8754[3] = kont8469;
    clo8754[4] = lst;
    clo8754[5] = cdr;
    void *f8471 = encode_clo(clo8754);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8471;
    arg_buffer[3] = a8374;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8597 = encode_clo(alloc_clo(lam8597_fptr, 0));

void *lam8599_fptr() // lam8599
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8600 = arg_buffer[1];
    // reading env and args
    void *a8373 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8600))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8600))[6];
    // not do dummy comment
    void *kont8469 = (decode_clo(env8600))[5];
    // not do dummy comment
    void *fun = (decode_clo(env8600))[4];
    // not do dummy comment
    void *acc = (decode_clo(env8600))[3];
    // not do dummy comment
    void *car = (decode_clo(env8600))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8600))[1];

    // if-clause
    bool if_guard8755 = is_true(a8373);
    if (if_guard8755)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8469);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8469))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8757 = alloc_clo(lam8597_fptr, 6);

        // setting env list
        clo8757[1] = foldl;
        clo8757[2] = acc;
        clo8757[3] = fun;
        clo8757[4] = kont8469;
        clo8757[5] = lst;
        clo8757[6] = cdr;
        void *f8472 = encode_clo(clo8757);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8472;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void *foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8601 = arg_buffer[1];
    // reading env and args
    void *kont8469 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8759 = alloc_clo(lam8599_fptr, 7);

    // setting env list
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8759[1] = foldl;
    clo8759[2] = car;
    clo8759[3] = acc;
    clo8759[4] = fun;
    clo8759[5] = kont8469;
    clo8759[6] = lst;
    clo8759[7] = cdr;
    void *f8473 = encode_clo(clo8759);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8473;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void *lam8602_fptr() // lam8602
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8603 = arg_buffer[1];
    // reading env and args
    void *a8380 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8603))[3];
    // not do dummy comment
    void *a8378 = (decode_clo(env8603))[2];
    // not do dummy comment
    void *kont8474 = (decode_clo(env8603))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8474;
    arg_buffer[3] = a8378;
    arg_buffer[4] = a8380;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
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
    void *a8379 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8605))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8605))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8605))[3];
    // not do dummy comment
    void *a8378 = (decode_clo(env8605))[2];
    // not do dummy comment
    void *kont8474 = (decode_clo(env8605))[1];

    // creating new closure instance
    void **clo8761 = alloc_clo(lam8602_fptr, 3);

    // setting env list
    clo8761[1] = kont8474;
    clo8761[2] = a8378;
    clo8761[3] = reverse_u45helper;
    void *f8475 = encode_clo(clo8761);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8475;
    arg_buffer[3] = a8379;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
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
    void *a8378 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8607))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8607))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8607))[4];
    // not do dummy comment
    void *car = (decode_clo(env8607))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8607))[2];
    // not do dummy comment
    void *kont8474 = (decode_clo(env8607))[1];

    // creating new closure instance
    void **clo8763 = alloc_clo(lam8604_fptr, 5);

    // setting env list
    clo8763[1] = kont8474;
    clo8763[2] = a8378;
    clo8763[3] = cons;
    clo8763[4] = lst2;
    clo8763[5] = reverse_u45helper;
    void *f8476 = encode_clo(clo8763);

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

void *lam8606 = encode_clo(alloc_clo(lam8606_fptr, 0));

void *lam8608_fptr() // lam8608
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8609 = arg_buffer[1];
    // reading env and args
    void *a8377 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8609))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8609))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8609))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8609))[4];
    // not do dummy comment
    void *car = (decode_clo(env8609))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8609))[2];
    // not do dummy comment
    void *kont8474 = (decode_clo(env8609))[1];

    // if-clause
    bool if_guard8764 = is_true(a8377);
    if (if_guard8764)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8474);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8766 = alloc_clo(lam8606_fptr, 6);

        // setting env list
        clo8766[1] = kont8474;
        clo8766[2] = cons;
        clo8766[3] = car;
        clo8766[4] = lst2;
        clo8766[5] = reverse_u45helper;
        clo8766[6] = lst;
        void *f8477 = encode_clo(clo8766);

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

void *lam8608 = encode_clo(alloc_clo(lam8608_fptr, 0));

void *reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8610 = arg_buffer[1];
    // reading env and args
    void *kont8474 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8768 = alloc_clo(lam8608_fptr, 7);

    // setting env list
    clo8768[1] = kont8474;
    clo8768[2] = cons;
    clo8768[3] = car;
    clo8768[4] = lst2;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8768[5] = reverse_u45helper;
    clo8768[6] = lst;
    clo8768[7] = cdr;
    void *f8478 = encode_clo(clo8768);

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

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void *lam8611_fptr() // lam8611
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8612 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8479 = (decode_clo(env8612))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8612))[2];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8612))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8479;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8381;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void *reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8613 = arg_buffer[1];
    // reading env and args
    void *kont8479 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8770 = alloc_clo(lam8611_fptr, 3);

    // setting env list
    clo8770[1] = reverse_u45helper;
    clo8770[2] = lst;
    clo8770[3] = kont8479;
    void *f8480 = encode_clo(clo8770);

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

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void *lam8614_fptr() // lam8614
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8615 = arg_buffer[1];
    // reading env and args
    void *xy8384 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8481 = (decode_clo(env8615))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8481);
    arg_buffer[2] = xy8384;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8481))[0]);
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
    void *a8389 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8387 = (decode_clo(env8617))[4];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8617))[3];
    // not do dummy comment
    void *a8385 = (decode_clo(env8617))[2];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8617))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8481;
    arg_buffer[3] = a8385;
    arg_buffer[4] = a8387;
    arg_buffer[5] = a8389;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
    void *a8388 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8387 = (decode_clo(env8619))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8619))[5];
    // not do dummy comment
    void *a8385 = (decode_clo(env8619))[4];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8619))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8619))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8619))[1];

    // creating new closure instance
    void **clo8772 = alloc_clo(lam8616_fptr, 4);

    // setting env list
    clo8772[1] = kont8481;
    clo8772[2] = a8385;
    clo8772[3] = take_u45helper;
    clo8772[4] = a8387;
    void *f8483 = encode_clo(clo8772);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8483;
    arg_buffer[3] = a8388;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
    void *a8387 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8621))[7];
    // not do dummy comment
    void *car = (decode_clo(env8621))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8621))[5];
    // not do dummy comment
    void *a8385 = (decode_clo(env8621))[4];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8621))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8621))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8621))[1];

    // creating new closure instance
    void **clo8774 = alloc_clo(lam8618_fptr, 6);

    // setting env list
    clo8774[1] = lst2;
    clo8774[2] = take_u45helper;
    clo8774[3] = kont8481;
    clo8774[4] = a8385;
    clo8774[5] = cons;
    clo8774[6] = a8387;
    void *f8484 = encode_clo(clo8774);

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

void *lam8620 = encode_clo(alloc_clo(lam8620_fptr, 0));

void *lam8623_fptr() // lam8623
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8624 = arg_buffer[1];
    // reading env and args
    void *a8385 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8624))[8];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8624))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8624))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8624))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8624))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8624))[3];
    // not do dummy comment
    void *n = (decode_clo(env8624))[2];
    // not do dummy comment
    void *car = (decode_clo(env8624))[1];
    mpz_t *mpzvar8775 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8775, "1", 10);
    void *a8386 = encode_mpz(mpzvar8775);

    // creating new closure instance
    void **clo8777 = alloc_clo(lam8620_fptr, 7);

    // setting env list
    clo8777[1] = lst2;
    clo8777[2] = take_u45helper;
    clo8777[3] = kont8481;
    clo8777[4] = a8385;
    clo8777[5] = cons;
    clo8777[6] = car;
    clo8777[7] = lst;
    void *f8485 = encode_clo(clo8777);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8386);
    arg_buffer[1] = reinterpret_cast<void *>(f8485);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8485))[0]);
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
    void *a8383 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8626))[10];
    // not do dummy comment
    void *lst = (decode_clo(env8626))[9];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8626))[8];
    // not do dummy comment
    void *reverse = (decode_clo(env8626))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8626))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8626))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8626))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8626))[3];
    // not do dummy comment
    void *n = (decode_clo(env8626))[2];
    // not do dummy comment
    void *car = (decode_clo(env8626))[1];

    // if-clause
    bool if_guard8778 = is_true(a8383);
    if (if_guard8778)
    {

        // creating new closure instance
        void **clo8780 = alloc_clo(lam8614_fptr, 1);

        // setting env list
        clo8780[1] = kont8481;
        void *f8482 = encode_clo(clo8780);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8482;
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
        void **clo8782 = alloc_clo(lam8623_fptr, 8);

        // setting env list
        clo8782[1] = car;
        clo8782[2] = n;
        clo8782[3] = lst2;
        clo8782[4] = take_u45helper;
        clo8782[5] = _u45;
        clo8782[6] = cons;
        clo8782[7] = kont8481;
        clo8782[8] = lst;
        void *f8486 = encode_clo(clo8782);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8486;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8625 = encode_clo(alloc_clo(lam8625_fptr, 0));

void *take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8628 = arg_buffer[1];
    // reading env and args
    void *kont8481 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // Dummy comment
    mpz_t *mpzvar8783 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8783, "0", 10);
    void *a8382 = encode_mpz(mpzvar8783);

    // creating new closure instance
    void **clo8785 = alloc_clo(lam8625_fptr, 10);

    // setting env list
    clo8785[1] = car;
    clo8785[2] = n;
    clo8785[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo8785[4] = take_u45helper;
    clo8785[5] = _u45;
    clo8785[6] = cons;
    clo8785[7] = reverse;
    clo8785[8] = kont8481;
    clo8785[9] = lst;
    clo8785[10] = cdr;
    void *f8487 = encode_clo(clo8785);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8487;
    arg_buffer[3] = n;
    arg_buffer[4] = a8382;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void *lam8629_fptr() // lam8629
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8630 = arg_buffer[1];
    // reading env and args
    void *a8390 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8630))[4];
    // not do dummy comment
    void *n = (decode_clo(env8630))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8630))[2];
    // not do dummy comment
    void *kont8488 = (decode_clo(env8630))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8488;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8390;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8629 = encode_clo(alloc_clo(lam8629_fptr, 0));

void *take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8631 = arg_buffer[1];
    // reading env and args
    void *kont8488 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8787 = alloc_clo(lam8629_fptr, 4);

    // setting env list
    clo8787[1] = kont8488;
    clo8787[2] = take_u45helper;
    clo8787[3] = n;
    clo8787[4] = lst;
    void *f8489 = encode_clo(clo8787);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8489;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void *lam8633_fptr() // lam8633
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8634 = arg_buffer[1];
    // reading env and args
    void *a8395 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *_u43 = (decode_clo(env8634))[3];
    // not do dummy comment
    void *a8393 = (decode_clo(env8634))[2];
    // not do dummy comment
    void *kont8490 = (decode_clo(env8634))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8393, a8395);
    arg_buffer[1] = reinterpret_cast<void *>(kont8490);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
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
    void *a8394 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *length = (decode_clo(env8636))[4];
    // not do dummy comment
    void *_u43 = (decode_clo(env8636))[3];
    // not do dummy comment
    void *a8393 = (decode_clo(env8636))[2];
    // not do dummy comment
    void *kont8490 = (decode_clo(env8636))[1];

    // creating new closure instance
    void **clo8789 = alloc_clo(lam8633_fptr, 3);

    // setting env list
    clo8789[1] = kont8490;
    clo8789[2] = a8393;
    clo8789[3] = _u43;
    void *f8491 = encode_clo(clo8789);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8491;
    arg_buffer[3] = a8394;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8635 = encode_clo(alloc_clo(lam8635_fptr, 0));

void *lam8638_fptr() // lam8638
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8639 = arg_buffer[1];
    // reading env and args
    void *a8391 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8639))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8639))[4];
    // not do dummy comment
    void *length = (decode_clo(env8639))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8639))[2];
    // not do dummy comment
    void *kont8490 = (decode_clo(env8639))[1];

    // if-clause
    bool if_guard8790 = is_true(a8391);
    if (if_guard8790)
    {
        mpz_t *mpzvar8791 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8791, "0", 10);
        void *xy8392 = encode_mpz(mpzvar8791);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8490);
        arg_buffer[2] = xy8392;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8490))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {
        mpz_t *mpzvar8792 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8792, "1", 10);
        void *a8393 = encode_mpz(mpzvar8792);

        // creating new closure instance
        void **clo8794 = alloc_clo(lam8635_fptr, 4);

        // setting env list
        clo8794[1] = kont8490;
        clo8794[2] = a8393;
        clo8794[3] = _u43;
        clo8794[4] = length;
        void *f8492 = encode_clo(clo8794);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8492;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8638 = encode_clo(alloc_clo(lam8638_fptr, 0));

void *length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8640 = arg_buffer[1];
    // reading env and args
    void *kont8490 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8796 = alloc_clo(lam8638_fptr, 5);

    // setting env list
    clo8796[1] = kont8490;
    clo8796[2] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8796[3] = length;
    clo8796[4] = lst;
    clo8796[5] = cdr;
    void *f8493 = encode_clo(clo8796);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8493;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void *lam8641_fptr() // lam8641
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8642 = arg_buffer[1];
    // reading env and args
    void *xy8397 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8494 = (decode_clo(env8642))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8494);
    arg_buffer[2] = xy8397;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8641 = encode_clo(alloc_clo(lam8641_fptr, 0));

void *lam8643_fptr() // lam8643
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8644 = arg_buffer[1];
    // reading env and args
    void *a8401 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8494 = (decode_clo(env8644))[3];
    // not do dummy comment
    void *a8399 = (decode_clo(env8644))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8644))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8494;
    arg_buffer[3] = a8399;
    arg_buffer[4] = a8401;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
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
    void *a8400 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8494 = (decode_clo(env8646))[5];
    // not do dummy comment
    void *a8399 = (decode_clo(env8646))[4];
    // not do dummy comment
    void *map = (decode_clo(env8646))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8646))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8646))[1];

    // creating new closure instance
    void **clo8798 = alloc_clo(lam8643_fptr, 3);

    // setting env list
    clo8798[1] = cons;
    clo8798[2] = a8399;
    clo8798[3] = kont8494;
    void *f8496 = encode_clo(clo8798);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8496;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8400;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
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
    void *a8399 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8648))[6];
    // not do dummy comment
    void *kont8494 = (decode_clo(env8648))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8648))[4];
    // not do dummy comment
    void *map = (decode_clo(env8648))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8648))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8648))[1];

    // creating new closure instance
    void **clo8800 = alloc_clo(lam8645_fptr, 5);

    // setting env list
    clo8800[1] = cons;
    clo8800[2] = proc;
    clo8800[3] = map;
    clo8800[4] = a8399;
    clo8800[5] = kont8494;
    void *f8497 = encode_clo(clo8800);

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

void *lam8647 = encode_clo(alloc_clo(lam8647_fptr, 0));

void *lam8649_fptr() // lam8649
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8650 = arg_buffer[1];
    // reading env and args
    void *a8398 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8650))[6];
    // not do dummy comment
    void *kont8494 = (decode_clo(env8650))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8650))[4];
    // not do dummy comment
    void *map = (decode_clo(env8650))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8650))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8650))[1];

    // creating new closure instance
    void **clo8802 = alloc_clo(lam8647_fptr, 6);

    // setting env list
    clo8802[1] = cons;
    clo8802[2] = proc;
    clo8802[3] = map;
    clo8802[4] = lst;
    clo8802[5] = kont8494;
    clo8802[6] = cdr;
    void *f8498 = encode_clo(clo8802);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8498;
    arg_buffer[3] = a8398;
    arg_buffer[0] = reinterpret_cast<void *>(3);
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
    void *a8396 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8494 = (decode_clo(env8652))[8];
    // not do dummy comment
    void *lst = (decode_clo(env8652))[7];
    // not do dummy comment
    void *map = (decode_clo(env8652))[6];
    // not do dummy comment
    void *proc = (decode_clo(env8652))[5];
    // not do dummy comment
    void *car = (decode_clo(env8652))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8652))[3];
    // not do dummy comment
    void *list = (decode_clo(env8652))[2];
    // not do dummy comment
    void *cdr = (decode_clo(env8652))[1];

    // if-clause
    bool if_guard8803 = is_true(a8396);
    if (if_guard8803)
    {

        // creating new closure instance
        void **clo8805 = alloc_clo(lam8641_fptr, 1);

        // setting env list
        clo8805[1] = kont8494;
        void *f8495 = encode_clo(clo8805);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8495;
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
        void **clo8807 = alloc_clo(lam8649_fptr, 6);

        // setting env list
        clo8807[1] = cons;
        clo8807[2] = proc;
        clo8807[3] = map;
        clo8807[4] = lst;
        clo8807[5] = kont8494;
        clo8807[6] = cdr;
        void *f8499 = encode_clo(clo8807);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8499;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8651 = encode_clo(alloc_clo(lam8651_fptr, 0));

void *map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8653 = arg_buffer[1];
    // reading env and args
    void *kont8494 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8809 = alloc_clo(lam8651_fptr, 8);

    // setting env list
    clo8809[1] = cdr;
    clo8809[2] = list;
    clo8809[3] = cons;
    clo8809[4] = car;
    clo8809[5] = proc;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8809[6] = map;
    clo8809[7] = lst;
    clo8809[8] = kont8494;
    void *f8500 = encode_clo(clo8809);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8500;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void *lam8654_fptr() // lam8654
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8655 = arg_buffer[1];
    // reading env and args
    void *xy8403 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8501 = (decode_clo(env8655))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8501);
    arg_buffer[2] = xy8403;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8501))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8654 = encode_clo(alloc_clo(lam8654_fptr, 0));

void *lam8656_fptr() // lam8656
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8657 = arg_buffer[1];
    // reading env and args
    void *a8408 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8501 = (decode_clo(env8657))[3];
    // not do dummy comment
    void *a8406 = (decode_clo(env8657))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8657))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8501;
    arg_buffer[3] = a8406;
    arg_buffer[4] = a8408;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
    void *a8407 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8659))[5];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8659))[4];
    // not do dummy comment
    void *a8406 = (decode_clo(env8659))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8659))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8659))[1];

    // creating new closure instance
    void **clo8811 = alloc_clo(lam8656_fptr, 3);

    // setting env list
    clo8811[1] = cons;
    clo8811[2] = a8406;
    clo8811[3] = kont8501;
    void *f8503 = encode_clo(clo8811);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8503;
    arg_buffer[3] = op;
    arg_buffer[4] = a8407;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
    void *a8406 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8661))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8661))[5];
    // not do dummy comment
    void *op = (decode_clo(env8661))[4];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8661))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8661))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8661))[1];

    // creating new closure instance
    void **clo8813 = alloc_clo(lam8658_fptr, 5);

    // setting env list
    clo8813[1] = cons;
    clo8813[2] = filter;
    clo8813[3] = a8406;
    clo8813[4] = kont8501;
    clo8813[5] = op;
    void *f8504 = encode_clo(clo8813);

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

void *lam8660 = encode_clo(alloc_clo(lam8660_fptr, 0));

void *lam8662_fptr() // lam8662
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8663 = arg_buffer[1];
    // reading env and args
    void *a8409 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8663))[3];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8663))[2];
    // not do dummy comment
    void *filter = (decode_clo(env8663))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8501;
    arg_buffer[3] = op;
    arg_buffer[4] = a8409;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
    void *a8405 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8665))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8665))[6];
    // not do dummy comment
    void *op = (decode_clo(env8665))[5];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8665))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8665))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8665))[2];
    // not do dummy comment
    void *car = (decode_clo(env8665))[1];

    // if-clause
    bool if_guard8814 = is_true(a8405);
    if (if_guard8814)
    {

        // creating new closure instance
        void **clo8816 = alloc_clo(lam8660_fptr, 6);

        // setting env list
        clo8816[1] = cons;
        clo8816[2] = filter;
        clo8816[3] = kont8501;
        clo8816[4] = op;
        clo8816[5] = lst;
        clo8816[6] = cdr;
        void *f8505 = encode_clo(clo8816);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8505;
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
        void **clo8818 = alloc_clo(lam8662_fptr, 3);

        // setting env list
        clo8818[1] = filter;
        clo8818[2] = kont8501;
        clo8818[3] = op;
        void *f8506 = encode_clo(clo8818);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8506;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8664 = encode_clo(alloc_clo(lam8664_fptr, 0));

void *lam8666_fptr() // lam8666
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8667 = arg_buffer[1];
    // reading env and args
    void *a8404 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8667))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8667))[6];
    // not do dummy comment
    void *op = (decode_clo(env8667))[5];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8667))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8667))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8667))[2];
    // not do dummy comment
    void *car = (decode_clo(env8667))[1];

    // creating new closure instance
    void **clo8820 = alloc_clo(lam8664_fptr, 7);

    // setting env list
    clo8820[1] = car;
    clo8820[2] = filter;
    clo8820[3] = cons;
    clo8820[4] = kont8501;
    clo8820[5] = op;
    clo8820[6] = lst;
    clo8820[7] = cdr;
    void *f8507 = encode_clo(clo8820);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8507;
    arg_buffer[3] = a8404;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8666 = encode_clo(alloc_clo(lam8666_fptr, 0));

void *lam8668_fptr() // lam8668
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8669 = arg_buffer[1];
    // reading env and args
    void *a8402 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8669))[8];
    // not do dummy comment
    void *op = (decode_clo(env8669))[7];
    // not do dummy comment
    void *kont8501 = (decode_clo(env8669))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8669))[5];
    // not do dummy comment
    void *list = (decode_clo(env8669))[4];
    // not do dummy comment
    void *cdr = (decode_clo(env8669))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8669))[2];
    // not do dummy comment
    void *car = (decode_clo(env8669))[1];

    // if-clause
    bool if_guard8821 = is_true(a8402);
    if (if_guard8821)
    {

        // creating new closure instance
        void **clo8823 = alloc_clo(lam8654_fptr, 1);

        // setting env list
        clo8823[1] = kont8501;
        void *f8502 = encode_clo(clo8823);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8502;
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
        void **clo8825 = alloc_clo(lam8666_fptr, 7);

        // setting env list
        clo8825[1] = car;
        clo8825[2] = filter;
        clo8825[3] = cons;
        clo8825[4] = kont8501;
        clo8825[5] = op;
        clo8825[6] = lst;
        clo8825[7] = cdr;
        void *f8508 = encode_clo(clo8825);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8508;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8668 = encode_clo(alloc_clo(lam8668_fptr, 0));

void *filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8670 = arg_buffer[1];
    // reading env and args
    void *kont8501 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8827 = alloc_clo(lam8668_fptr, 8);

    // setting env list
    clo8827[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8827[2] = filter;
    clo8827[3] = cdr;
    clo8827[4] = list;
    clo8827[5] = cons;
    clo8827[6] = kont8501;
    clo8827[7] = op;
    clo8827[8] = lst;
    void *f8509 = encode_clo(clo8827);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8509;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void *lam8671_fptr() // lam8671
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8672 = arg_buffer[1];
    // reading env and args
    void *a8414 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8412 = (decode_clo(env8672))[3];
    // not do dummy comment
    void *kont8510 = (decode_clo(env8672))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8672))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8510;
    arg_buffer[3] = a8412;
    arg_buffer[4] = a8414;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8671 = encode_clo(alloc_clo(lam8671_fptr, 0));

void *lam8674_fptr() // lam8674
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8675 = arg_buffer[1];
    // reading env and args
    void *a8412 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8510 = (decode_clo(env8675))[4];
    // not do dummy comment
    void *drop = (decode_clo(env8675))[3];
    // not do dummy comment
    void *n = (decode_clo(env8675))[2];
    // not do dummy comment
    void *_u45 = (decode_clo(env8675))[1];
    mpz_t *mpzvar8828 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8828, "1", 10);
    void *a8413 = encode_mpz(mpzvar8828);

    // creating new closure instance
    void **clo8830 = alloc_clo(lam8671_fptr, 3);

    // setting env list
    clo8830[1] = drop;
    clo8830[2] = kont8510;
    clo8830[3] = a8412;
    void *f8511 = encode_clo(clo8830);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8413);
    arg_buffer[1] = reinterpret_cast<void *>(f8511);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8511))[0]);
    function_ptr();
    return nullptr;
}

void *lam8674 = encode_clo(alloc_clo(lam8674_fptr, 0));

void *lam8676_fptr() // lam8676
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8677 = arg_buffer[1];
    // reading env and args
    void *a8411 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8677))[6];
    // not do dummy comment
    void *kont8510 = (decode_clo(env8677))[5];
    // not do dummy comment
    void *n = (decode_clo(env8677))[4];
    // not do dummy comment
    void *_u45 = (decode_clo(env8677))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8677))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8677))[1];

    // if-clause
    bool if_guard8831 = is_true(a8411);
    if (if_guard8831)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8510);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8510))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8833 = alloc_clo(lam8674_fptr, 4);

        // setting env list
        clo8833[1] = _u45;
        clo8833[2] = n;
        clo8833[3] = drop;
        clo8833[4] = kont8510;
        void *f8512 = encode_clo(clo8833);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8512;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8676 = encode_clo(alloc_clo(lam8676_fptr, 0));

void *drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8679 = arg_buffer[1];
    // reading env and args
    void *kont8510 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8834, "0", 10);
    void *a8410 = encode_mpz(mpzvar8834);

    // creating new closure instance
    void **clo8836 = alloc_clo(lam8676_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8836[1] = drop;
    clo8836[2] = lst;
    clo8836[3] = _u45;
    clo8836[4] = n;
    clo8836[5] = kont8510;
    clo8836[6] = cdr;
    void *f8513 = encode_clo(clo8836);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8513;
    arg_buffer[3] = n;
    arg_buffer[4] = a8410;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void *lam8680_fptr() // lam8680
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8681 = arg_buffer[1];
    // reading env and args
    void *a8418 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8416 = (decode_clo(env8681))[3];
    // not do dummy comment
    void *kont8514 = (decode_clo(env8681))[2];
    // not do dummy comment
    void *proc = (decode_clo(env8681))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = kont8514;
    arg_buffer[3] = a8416;
    arg_buffer[4] = a8418;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8680 = encode_clo(alloc_clo(lam8680_fptr, 0));

void *lam8682_fptr() // lam8682
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8683 = arg_buffer[1];
    // reading env and args
    void *a8417 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8514 = (decode_clo(env8683))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8683))[4];
    // not do dummy comment
    void *a8416 = (decode_clo(env8683))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8683))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8683))[1];

    // creating new closure instance
    void **clo8838 = alloc_clo(lam8680_fptr, 3);

    // setting env list
    clo8838[1] = proc;
    clo8838[2] = kont8514;
    clo8838[3] = a8416;
    void *f8515 = encode_clo(clo8838);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8515;
    arg_buffer[3] = proc;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8417;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8682 = encode_clo(alloc_clo(lam8682_fptr, 0));

void *lam8684_fptr() // lam8684
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8685 = arg_buffer[1];
    // reading env and args
    void *a8416 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8685))[6];
    // not do dummy comment
    void *kont8514 = (decode_clo(env8685))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8685))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8685))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8685))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8685))[1];

    // creating new closure instance
    void **clo8840 = alloc_clo(lam8682_fptr, 5);

    // setting env list
    clo8840[1] = acc;
    clo8840[2] = proc;
    clo8840[3] = a8416;
    clo8840[4] = foldr;
    clo8840[5] = kont8514;
    void *f8516 = encode_clo(clo8840);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8516;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8684 = encode_clo(alloc_clo(lam8684_fptr, 0));

void *lam8686_fptr() // lam8686
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8687 = arg_buffer[1];
    // reading env and args
    void *a8415 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8687))[7];
    // not do dummy comment
    void *kont8514 = (decode_clo(env8687))[6];
    // not do dummy comment
    void *car = (decode_clo(env8687))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8687))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8687))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8687))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8687))[1];

    // if-clause
    bool if_guard8841 = is_true(a8415);
    if (if_guard8841)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8514);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8514))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8843 = alloc_clo(lam8684_fptr, 6);

        // setting env list
        clo8843[1] = acc;
        clo8843[2] = proc;
        clo8843[3] = lst;
        clo8843[4] = foldr;
        clo8843[5] = kont8514;
        clo8843[6] = cdr;
        void *f8517 = encode_clo(clo8843);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8517;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8686 = encode_clo(alloc_clo(lam8686_fptr, 0));

void *foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8688 = arg_buffer[1];
    // reading env and args
    void *kont8514 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8845 = alloc_clo(lam8686_fptr, 7);

    // setting env list
    clo8845[1] = acc;
    clo8845[2] = proc;
    clo8845[3] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8845[4] = foldr;
    clo8845[5] = car;
    clo8845[6] = kont8514;
    clo8845[7] = cdr;
    void *f8518 = encode_clo(clo8845);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8518;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void *lam8689_fptr() // lam8689
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8690 = arg_buffer[1];
    // reading env and args
    void *a8422 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8420 = (decode_clo(env8690))[3];
    // not do dummy comment
    void *kont8519 = (decode_clo(env8690))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8690))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8519;
    arg_buffer[3] = a8420;
    arg_buffer[4] = a8422;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8689 = encode_clo(alloc_clo(lam8689_fptr, 0));

void *lam8691_fptr() // lam8691
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8692 = arg_buffer[1];
    // reading env and args
    void *a8421 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8519 = (decode_clo(env8692))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8692))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8692))[3];
    // not do dummy comment
    void *append = (decode_clo(env8692))[2];
    // not do dummy comment
    void *a8420 = (decode_clo(env8692))[1];

    // creating new closure instance
    void **clo8847 = alloc_clo(lam8689_fptr, 3);

    // setting env list
    clo8847[1] = cons;
    clo8847[2] = kont8519;
    clo8847[3] = a8420;
    void *f8520 = encode_clo(clo8847);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = f8520;
    arg_buffer[3] = a8421;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8691 = encode_clo(alloc_clo(lam8691_fptr, 0));

void *lam8693_fptr() // lam8693
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8694 = arg_buffer[1];
    // reading env and args
    void *a8420 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8694))[6];
    // not do dummy comment
    void *append = (decode_clo(env8694))[5];
    // not do dummy comment
    void *kont8519 = (decode_clo(env8694))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8694))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8694))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8694))[1];

    // creating new closure instance
    void **clo8849 = alloc_clo(lam8691_fptr, 5);

    // setting env list
    clo8849[1] = a8420;
    clo8849[2] = append;
    clo8849[3] = cons;
    clo8849[4] = lst2;
    clo8849[5] = kont8519;
    void *f8521 = encode_clo(clo8849);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8521;
    arg_buffer[3] = lst1;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8693 = encode_clo(alloc_clo(lam8693_fptr, 0));

void *lam8695_fptr() // lam8695
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8696 = arg_buffer[1];
    // reading env and args
    void *a8419 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8696))[7];
    // not do dummy comment
    void *append = (decode_clo(env8696))[6];
    // not do dummy comment
    void *kont8519 = (decode_clo(env8696))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8696))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8696))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8696))[2];
    // not do dummy comment
    void *car = (decode_clo(env8696))[1];

    // if-clause
    bool if_guard8850 = is_true(a8419);
    if (if_guard8850)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8519);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8519))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8852 = alloc_clo(lam8693_fptr, 6);

        // setting env list
        clo8852[1] = cons;
        clo8852[2] = lst1;
        clo8852[3] = lst2;
        clo8852[4] = kont8519;
        clo8852[5] = append;
        clo8852[6] = cdr;
        void *f8522 = encode_clo(clo8852);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8522;
        arg_buffer[3] = lst1;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8695 = encode_clo(alloc_clo(lam8695_fptr, 0));

void *append_fptr() // append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8697 = arg_buffer[1];
    // reading env and args
    void *kont8519 = arg_buffer[2];
    void *lst1 = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8854 = alloc_clo(lam8695_fptr, 7);

    // setting env list
    clo8854[1] = car;
    clo8854[2] = lst1;
    clo8854[3] = cons;
    clo8854[4] = lst2;
    clo8854[5] = kont8519;
    void *append = encode_clo(alloc_clo(append_fptr, 0));

    clo8854[6] = append;
    clo8854[7] = cdr;
    void *f8523 = encode_clo(clo8854);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8523;
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
    void *_8698 = arg_buffer[1];
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

    void *kont8524 = prim_car(lst);
    void *lst8553 = prim_cdr(lst);
    void *xy8423 = apply_prim_hash(lst8553);

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

void *hash = encode_clo(alloc_clo(hash_fptr, 0));

void *hash_u45ref_fptr() // hash-ref
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8699 = arg_buffer[1];
    // reading env and args
    void *kont8525 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8424 = prim_hash_u45ref(h, k);

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

void *hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void *hash_u45set_fptr() // hash-set
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8700 = arg_buffer[1];
    // reading env and args
    void *kont8526 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    void *v = arg_buffer[5];
    // Dummy comment
    void *xy8425 = prim_hash_u45set(h, k, v);

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

void *hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void *hash_u45keys_fptr() // hash-keys
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8701 = arg_buffer[1];
    // reading env and args
    void *kont8527 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8426 = prim_hash_u45keys(h);

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

void *hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void *hash_u45has_u45key_u63_fptr() // hash-has-key?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8702 = arg_buffer[1];
    // reading env and args
    void *kont8528 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8427 = prim_hash_u45has_u45key_u63(h, k);

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

void *hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void *hash_u45count_fptr() // hash-count
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8703 = arg_buffer[1];
    // reading env and args
    void *kont8529 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8428 = prim_hash_u45count(h);

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

void *hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void *set_fptr() // set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8704 = arg_buffer[1];
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

    void *kont8530 = prim_car(lst);
    void *lst8554 = prim_cdr(lst);
    void *xy8429 = apply_prim_set(lst8554);

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

void *set = encode_clo(alloc_clo(set_fptr, 0));

void *set_u45_u62list_fptr() // set->list
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8705 = arg_buffer[1];
    // reading env and args
    void *kont8531 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8430 = prim_set_u45_u62list(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8531);
    arg_buffer[2] = xy8430;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8531))[0]);
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
    void *_8706 = arg_buffer[1];
    // reading env and args
    void *kont8532 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8431 = prim_list_u45_u62set(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8532);
    arg_buffer[2] = xy8431;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8532))[0]);
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
    void *_8707 = arg_buffer[1];
    // reading env and args
    void *kont8533 = arg_buffer[2];
    void *s = arg_buffer[3];
    void *val = arg_buffer[4];
    // Dummy comment
    void *xy8432 = prim_set_u45add(s, val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8533);
    arg_buffer[2] = xy8432;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8533))[0]);
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
    void *_8708 = arg_buffer[1];
    // reading env and args
    void *kont8534 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8433 = prim_string_u63(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8534);
    arg_buffer[2] = xy8433;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8534))[0]);
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
    void *_8709 = arg_buffer[1];
    // reading env and args
    void *kont8535 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8434 = prim_string_u45length(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8535);
    arg_buffer[2] = xy8434;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8535))[0]);
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
    void *_8710 = arg_buffer[1];
    // reading env and args
    void *kont8536 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *pos = arg_buffer[4];
    // Dummy comment
    void *xy8435 = prim_string_u45ref(str, pos);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8536);
    arg_buffer[2] = xy8435;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8536))[0]);
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
    void *_8711 = arg_buffer[1];
    // reading env and args
    void *kont8537 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *start = arg_buffer[4];
    void *end = arg_buffer[5];
    // Dummy comment
    void *xy8436 = prim_substring(str, start, end);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8537);
    arg_buffer[2] = xy8436;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8537))[0]);
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
    void *_8712 = arg_buffer[1];
    // reading env and args
    void *kont8538 = arg_buffer[2];
    void *s1 = arg_buffer[3];
    void *s2 = arg_buffer[4];
    // Dummy comment
    void *xy8437 = prim_string_u45append(s1, s2);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8538);
    arg_buffer[2] = xy8437;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8538))[0]);
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
    void *_8713 = arg_buffer[1];
    // reading env and args
    void *kont8539 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8438 = prim_string_u45_u62list(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8539);
    arg_buffer[2] = xy8438;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8539))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void *lam8714_fptr() // lam8714
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8715 = arg_buffer[1];
    // reading env and args
    void *a8441 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8540 = (decode_clo(env8715))[3];
    // not do dummy comment
    void *_u42 = (decode_clo(env8715))[2];
    // not do dummy comment
    void *n = (decode_clo(env8715))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u42);
    arg_buffer[2] = kont8540;
    arg_buffer[3] = n;
    arg_buffer[4] = a8441;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8714 = encode_clo(alloc_clo(lam8714_fptr, 0));

void *lam8716_fptr() // lam8716
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8717 = arg_buffer[1];
    // reading env and args
    void *a8440 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8540 = (decode_clo(env8717))[4];
    // not do dummy comment
    void *_u42 = (decode_clo(env8717))[3];
    // not do dummy comment
    void *fact = (decode_clo(env8717))[2];
    // not do dummy comment
    void *n = (decode_clo(env8717))[1];

    // creating new closure instance
    void **clo8856 = alloc_clo(lam8714_fptr, 3);

    // setting env list
    clo8856[1] = n;
    clo8856[2] = _u42;
    clo8856[3] = kont8540;
    void *f8541 = encode_clo(clo8856);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fact);
    arg_buffer[2] = f8541;
    arg_buffer[3] = a8440;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8716 = encode_clo(alloc_clo(lam8716_fptr, 0));

void *lam8718_fptr() // lam8718
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8719 = arg_buffer[1];
    // reading env and args
    void *a8439 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8540 = (decode_clo(env8719))[6];
    // not do dummy comment
    void *one = (decode_clo(env8719))[5];
    // not do dummy comment
    void *_u42 = (decode_clo(env8719))[4];
    // not do dummy comment
    void *fact = (decode_clo(env8719))[3];
    // not do dummy comment
    void *n = (decode_clo(env8719))[2];
    // not do dummy comment
    void *_u45 = (decode_clo(env8719))[1];

    // if-clause
    bool if_guard8857 = is_true(a8439);
    if (if_guard8857)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8540);
        arg_buffer[2] = one;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8540))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8859 = alloc_clo(lam8716_fptr, 4);

        // setting env list
        clo8859[1] = n;
        clo8859[2] = fact;
        clo8859[3] = _u42;
        clo8859[4] = kont8540;
        void *f8542 = encode_clo(clo8859);

        // clo-app
        arg_buffer[2] = apply_prim__u45_2(n, one);
        arg_buffer[1] = reinterpret_cast<void *>(f8542);
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8542))[0]);
        function_ptr();
        return nullptr;
    }
}

void *lam8718 = encode_clo(alloc_clo(lam8718_fptr, 0));

void *fact_fptr() // fact
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8722 = arg_buffer[1];
    // reading env and args
    void *kont8540 = arg_buffer[2];
    void *n = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8860 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8860, "0", 10);
    void *zero = encode_mpz(mpzvar8860);
    mpz_t *mpzvar8861 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8861, "1", 10);
    void *one = encode_mpz(mpzvar8861);

    // creating new closure instance
    void **clo8863 = alloc_clo(lam8718_fptr, 6);

    // setting env list
    clo8863[1] = _u45;
    clo8863[2] = n;
    void *fact = encode_clo(alloc_clo(fact_fptr, 0));

    clo8863[3] = fact;
    clo8863[4] = _u42;
    clo8863[5] = one;
    clo8863[6] = kont8540;
    void *f8543 = encode_clo(clo8863);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8543;
    arg_buffer[3] = zero;
    arg_buffer[4] = n;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *fact = encode_clo(alloc_clo(fact_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8724 = arg_buffer[1];
    // reading env and args
    void *kont8544 = arg_buffer[2];
    // Dummy comment
    mpz_t *mpzvar8864 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8864, "5", 10);
    void *a8442 = encode_mpz(mpzvar8864);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fact);
    arg_buffer[2] = kont8544;
    arg_buffer[3] = a8442;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
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
