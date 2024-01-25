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
    void *_env8730 = arg_buffer[1];
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

    void *kont8728 = prim_car(lst);
    void *lst8731 = prim_cdr(lst);
    void *x8729 = apply_prim__u43(lst8731);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8728);
    arg_buffer[2] = x8729;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8728))[0]);
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
    void *_env8734 = arg_buffer[1];
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

    void *kont8732 = prim_car(lst);
    void *lst8735 = prim_cdr(lst);
    void *x8733 = apply_prim__u45(lst8735);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8732);
    arg_buffer[2] = x8733;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8732))[0]);
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
    void *_env8738 = arg_buffer[1];
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

    void *kont8736 = prim_car(lst);
    void *lst8739 = prim_cdr(lst);
    void *x8737 = apply_prim__u42(lst8739);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8736);
    arg_buffer[2] = x8737;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8736))[0]);
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
    void *_8556 = arg_buffer[1];
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
    void *xy8344 = apply_prim__u47(lst8547);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8446);
    arg_buffer[2] = xy8344;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void *modulo_fptr() // modulo
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8557 = arg_buffer[1];
    // reading env and args
    void *kont8447 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8345 = prim_modulo(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8447);
    arg_buffer[2] = xy8345;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

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

    void *kont8448 = prim_car(lst);
    void *lst8548 = prim_cdr(lst);
    void *xy8346 = apply_prim__u61(lst8548);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8448);
    arg_buffer[2] = xy8346;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
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

    void *kont8449 = prim_car(lst);
    void *lst8549 = prim_cdr(lst);
    void *xy8347 = apply_prim__u62(lst8549);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8449);
    arg_buffer[2] = xy8347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8449))[0]);
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

    void *kont8450 = prim_car(lst);
    void *lst8550 = prim_cdr(lst);
    void *xy8348 = apply_prim__u60(lst8550);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8450);
    arg_buffer[2] = xy8348;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8450))[0]);
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

    void *kont8451 = prim_car(lst);
    void *lst8551 = prim_cdr(lst);
    void *xy8349 = apply_prim__u60_u61(lst8551);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8451);
    arg_buffer[2] = xy8349;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8451))[0]);
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

    void *kont8452 = prim_car(lst);
    void *lst8552 = prim_cdr(lst);
    void *xy8350 = apply_prim__u62_u61(lst8552);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8452);
    arg_buffer[2] = xy8350;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8452))[0]);
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
    void *kont8453 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    void *xy8351 = prim_null_u63(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8453);
    arg_buffer[2] = xy8351;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
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
    void *kont8454 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8352 = prim_equal_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8454);
    arg_buffer[2] = xy8352;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8454))[0]);
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
    void *kont8455 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8353 = prim_eq_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8455);
    arg_buffer[2] = xy8353;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8455))[0]);
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
    void *kont8456 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8354 = prim_cons(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8456);
    arg_buffer[2] = xy8354;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8456))[0]);
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
    void *kont8457 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8355 = prim_car(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8457);
    arg_buffer[2] = xy8355;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8457))[0]);
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
    void *kont8458 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8356 = prim_cdr(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8458);
    arg_buffer[2] = xy8356;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
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
    void *a8359 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8459 = (decode_clo(env8570))[3];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8570))[2];
    // not do dummy comment
    void *a8357 = (decode_clo(env8570))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8459;
    arg_buffer[3] = a8357;
    arg_buffer[4] = a8359;
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
    void *kont8459 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8740 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8740, "0", 10);
    void *a8357 = encode_mpz(mpzvar8740);
    mpz_t *mpzvar8741 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8741, "2", 10);
    void *a8358 = encode_mpz(mpzvar8741);

    // creating new closure instance
    void **clo8743 = alloc_clo(lam8569_fptr, 3);

    // setting env list
    clo8743[1] = a8357;
    clo8743[2] = equal_u63;
    clo8743[3] = kont8459;
    void *f8460 = encode_clo(clo8743);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8460;
    arg_buffer[3] = x;
    arg_buffer[4] = a8358;
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
    void *a8362 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8360 = (decode_clo(env8575))[3];
    // not do dummy comment
    void *kont8461 = (decode_clo(env8575))[2];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8575))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8461;
    arg_buffer[3] = a8360;
    arg_buffer[4] = a8362;
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
    void *kont8461 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8744, "1", 10);
    void *a8360 = encode_mpz(mpzvar8744);
    mpz_t *mpzvar8745 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8745, "2", 10);
    void *a8361 = encode_mpz(mpzvar8745);

    // creating new closure instance
    void **clo8747 = alloc_clo(lam8574_fptr, 3);

    // setting env list
    clo8747[1] = equal_u63;
    clo8747[2] = kont8461;
    clo8747[3] = a8360;
    void *f8462 = encode_clo(clo8747);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8462;
    arg_buffer[3] = x;
    arg_buffer[4] = a8361;
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

    void *kont8463 = prim_car(x);
    void *x8553 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8463);
    arg_buffer[2] = x8553;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8463))[0]);
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
    void *kont8464 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8363 = prim_inexact_u45_u62exact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8464);
    arg_buffer[2] = xy8363;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8464))[0]);
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
    void *kont8465 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8364 = prim_exact_u45_u62inexact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8465);
    arg_buffer[2] = xy8364;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
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
    void *a8370 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8466 = (decode_clo(env8585))[3];
    // not do dummy comment
    void *x = (decode_clo(env8585))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8585))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8466;
    arg_buffer[3] = x;
    arg_buffer[4] = a8370;
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
    void *a8368 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8587))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8587))[4];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8587))[3];
    // not do dummy comment
    void *x = (decode_clo(env8587))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8587))[1];

    // if-clause
    bool if_guard8748 = is_true(a8368);
    if (if_guard8748)
    {
        void *xy8369 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8466);
        arg_buffer[2] = xy8369;
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
        void **clo8750 = alloc_clo(lam8584_fptr, 3);

        // setting env list
        clo8750[1] = member_u63;
        clo8750[2] = x;
        clo8750[3] = kont8466;
        void *f8467 = encode_clo(clo8750);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8467;
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
    void *a8367 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8589))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8589))[5];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8589))[4];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8589))[3];
    // not do dummy comment
    void *x = (decode_clo(env8589))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8589))[1];

    // creating new closure instance
    void **clo8752 = alloc_clo(lam8586_fptr, 5);

    // setting env list
    clo8752[1] = member_u63;
    clo8752[2] = x;
    clo8752[3] = kont8466;
    clo8752[4] = lst;
    clo8752[5] = cdr;
    void *f8468 = encode_clo(clo8752);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8468;
    arg_buffer[3] = a8367;
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
    void *a8365 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8591))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8591))[6];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8591))[5];
    // not do dummy comment
    void *kont8466 = (decode_clo(env8591))[4];
    // not do dummy comment
    void *x = (decode_clo(env8591))[3];
    // not do dummy comment
    void *car = (decode_clo(env8591))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8591))[1];

    // if-clause
    bool if_guard8753 = is_true(a8365);
    if (if_guard8753)
    {
        void *xy8366 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8466);
        arg_buffer[2] = xy8366;
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
        void **clo8755 = alloc_clo(lam8588_fptr, 6);

        // setting env list
        clo8755[1] = member_u63;
        clo8755[2] = x;
        clo8755[3] = kont8466;
        clo8755[4] = equal_u63;
        clo8755[5] = lst;
        clo8755[6] = cdr;
        void *f8469 = encode_clo(clo8755);

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
}

void *lam8590 = encode_clo(alloc_clo(lam8590_fptr, 0));

void *member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8592 = arg_buffer[1];
    // reading env and args
    void *kont8466 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8757 = alloc_clo(lam8590_fptr, 7);

    // setting env list
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8757[1] = member_u63;
    clo8757[2] = car;
    clo8757[3] = x;
    clo8757[4] = kont8466;
    clo8757[5] = equal_u63;
    clo8757[6] = lst;
    clo8757[7] = cdr;
    void *f8470 = encode_clo(clo8757);

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

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void *lam8593_fptr() // lam8593
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8594 = arg_buffer[1];
    // reading env and args
    void *a8374 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *fun = (decode_clo(env8594))[4];
    // not do dummy comment
    void *a8373 = (decode_clo(env8594))[3];
    // not do dummy comment
    void *foldl = (decode_clo(env8594))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8594))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8471;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8373;
    arg_buffer[5] = a8374;
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
    void *a8373 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8596))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8596))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8596))[3];
    // not do dummy comment
    void *foldl = (decode_clo(env8596))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8596))[1];

    // creating new closure instance
    void **clo8759 = alloc_clo(lam8593_fptr, 4);

    // setting env list
    clo8759[1] = kont8471;
    clo8759[2] = foldl;
    clo8759[3] = a8373;
    clo8759[4] = fun;
    void *f8472 = encode_clo(clo8759);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8472;
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
    void *a8372 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8598))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8598))[5];
    // not do dummy comment
    void *fun = (decode_clo(env8598))[4];
    // not do dummy comment
    void *acc = (decode_clo(env8598))[3];
    // not do dummy comment
    void *foldl = (decode_clo(env8598))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8598))[1];

    // creating new closure instance
    void **clo8761 = alloc_clo(lam8595_fptr, 5);

    // setting env list
    clo8761[1] = kont8471;
    clo8761[2] = foldl;
    clo8761[3] = fun;
    clo8761[4] = lst;
    clo8761[5] = cdr;
    void *f8473 = encode_clo(clo8761);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8473;
    arg_buffer[3] = a8372;
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
    void *a8371 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8600))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8600))[6];
    // not do dummy comment
    void *fun = (decode_clo(env8600))[5];
    // not do dummy comment
    void *acc = (decode_clo(env8600))[4];
    // not do dummy comment
    void *car = (decode_clo(env8600))[3];
    // not do dummy comment
    void *foldl = (decode_clo(env8600))[2];
    // not do dummy comment
    void *kont8471 = (decode_clo(env8600))[1];

    // if-clause
    bool if_guard8762 = is_true(a8371);
    if (if_guard8762)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8471);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8471))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8764 = alloc_clo(lam8597_fptr, 6);

        // setting env list
        clo8764[1] = kont8471;
        clo8764[2] = foldl;
        clo8764[3] = acc;
        clo8764[4] = fun;
        clo8764[5] = lst;
        clo8764[6] = cdr;
        void *f8474 = encode_clo(clo8764);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8474;
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
    void *kont8471 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8766 = alloc_clo(lam8599_fptr, 7);

    // setting env list
    clo8766[1] = kont8471;
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8766[2] = foldl;
    clo8766[3] = car;
    clo8766[4] = acc;
    clo8766[5] = fun;
    clo8766[6] = lst;
    clo8766[7] = cdr;
    void *f8475 = encode_clo(clo8766);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8475;
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
    void *a8378 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8376 = (decode_clo(env8603))[3];
    // not do dummy comment
    void *kont8476 = (decode_clo(env8603))[2];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8603))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8476;
    arg_buffer[3] = a8376;
    arg_buffer[4] = a8378;
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
    void *a8377 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8376 = (decode_clo(env8605))[5];
    // not do dummy comment
    void *kont8476 = (decode_clo(env8605))[4];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8605))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8605))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8605))[1];

    // creating new closure instance
    void **clo8768 = alloc_clo(lam8602_fptr, 3);

    // setting env list
    clo8768[1] = reverse_u45helper;
    clo8768[2] = kont8476;
    clo8768[3] = a8376;
    void *f8477 = encode_clo(clo8768);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8477;
    arg_buffer[3] = a8377;
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
    void *a8376 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8607))[6];
    // not do dummy comment
    void *lst2 = (decode_clo(env8607))[5];
    // not do dummy comment
    void *car = (decode_clo(env8607))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8607))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8607))[2];
    // not do dummy comment
    void *kont8476 = (decode_clo(env8607))[1];

    // creating new closure instance
    void **clo8770 = alloc_clo(lam8604_fptr, 5);

    // setting env list
    clo8770[1] = cons;
    clo8770[2] = lst2;
    clo8770[3] = reverse_u45helper;
    clo8770[4] = kont8476;
    clo8770[5] = a8376;
    void *f8478 = encode_clo(clo8770);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8478;
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
    void *a8375 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8609))[7];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8609))[6];
    // not do dummy comment
    void *lst2 = (decode_clo(env8609))[5];
    // not do dummy comment
    void *car = (decode_clo(env8609))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8609))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8609))[2];
    // not do dummy comment
    void *kont8476 = (decode_clo(env8609))[1];

    // if-clause
    bool if_guard8771 = is_true(a8375);
    if (if_guard8771)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8476);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8476))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8773 = alloc_clo(lam8606_fptr, 6);

        // setting env list
        clo8773[1] = kont8476;
        clo8773[2] = lst;
        clo8773[3] = cons;
        clo8773[4] = car;
        clo8773[5] = lst2;
        clo8773[6] = reverse_u45helper;
        void *f8479 = encode_clo(clo8773);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8479;
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
    void *kont8476 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8775 = alloc_clo(lam8608_fptr, 7);

    // setting env list
    clo8775[1] = kont8476;
    clo8775[2] = lst;
    clo8775[3] = cons;
    clo8775[4] = car;
    clo8775[5] = lst2;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8775[6] = reverse_u45helper;
    clo8775[7] = cdr;
    void *f8480 = encode_clo(clo8775);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8480;
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
    void *a8379 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8612))[3];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8612))[2];
    // not do dummy comment
    void *kont8481 = (decode_clo(env8612))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8481;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8379;
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
    void *kont8481 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8777 = alloc_clo(lam8611_fptr, 3);

    // setting env list
    clo8777[1] = kont8481;
    clo8777[2] = reverse_u45helper;
    clo8777[3] = lst;
    void *f8482 = encode_clo(clo8777);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8482;
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
    void *xy8382 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8483 = (decode_clo(env8615))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8483);
    arg_buffer[2] = xy8382;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8483))[0]);
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
    void *a8387 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8383 = (decode_clo(env8617))[4];
    // not do dummy comment
    void *a8385 = (decode_clo(env8617))[3];
    // not do dummy comment
    void *kont8483 = (decode_clo(env8617))[2];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8617))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8483;
    arg_buffer[3] = a8383;
    arg_buffer[4] = a8385;
    arg_buffer[5] = a8387;
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
    void *a8386 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8383 = (decode_clo(env8619))[6];
    // not do dummy comment
    void *a8385 = (decode_clo(env8619))[5];
    // not do dummy comment
    void *kont8483 = (decode_clo(env8619))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8619))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8619))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8619))[1];

    // creating new closure instance
    void **clo8779 = alloc_clo(lam8616_fptr, 4);

    // setting env list
    clo8779[1] = take_u45helper;
    clo8779[2] = kont8483;
    clo8779[3] = a8385;
    clo8779[4] = a8383;
    void *f8485 = encode_clo(clo8779);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8485;
    arg_buffer[3] = a8386;
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
    void *a8385 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8621))[7];
    // not do dummy comment
    void *a8383 = (decode_clo(env8621))[6];
    // not do dummy comment
    void *kont8483 = (decode_clo(env8621))[5];
    // not do dummy comment
    void *car = (decode_clo(env8621))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8621))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8621))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8621))[1];

    // creating new closure instance
    void **clo8781 = alloc_clo(lam8618_fptr, 6);

    // setting env list
    clo8781[1] = lst2;
    clo8781[2] = take_u45helper;
    clo8781[3] = cons;
    clo8781[4] = kont8483;
    clo8781[5] = a8385;
    clo8781[6] = a8383;
    void *f8486 = encode_clo(clo8781);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8486;
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
    void *a8383 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8624))[8];
    // not do dummy comment
    void *kont8483 = (decode_clo(env8624))[7];
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
    mpz_t *mpzvar8782 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8782, "1", 10);
    void *a8384 = encode_mpz(mpzvar8782);

    // creating new closure instance
    void **clo8784 = alloc_clo(lam8620_fptr, 7);

    // setting env list
    clo8784[1] = lst2;
    clo8784[2] = take_u45helper;
    clo8784[3] = cons;
    clo8784[4] = car;
    clo8784[5] = kont8483;
    clo8784[6] = a8383;
    clo8784[7] = lst;
    void *f8487 = encode_clo(clo8784);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8384);
    arg_buffer[1] = reinterpret_cast<void *>(f8487);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8487))[0]);
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
    void *a8381 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8626))[10];
    // not do dummy comment
    void *lst = (decode_clo(env8626))[9];
    // not do dummy comment
    void *reverse = (decode_clo(env8626))[8];
    // not do dummy comment
    void *kont8483 = (decode_clo(env8626))[7];
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
    bool if_guard8785 = is_true(a8381);
    if (if_guard8785)
    {

        // creating new closure instance
        void **clo8787 = alloc_clo(lam8614_fptr, 1);

        // setting env list
        clo8787[1] = kont8483;
        void *f8484 = encode_clo(clo8787);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8484;
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
        void **clo8789 = alloc_clo(lam8623_fptr, 8);

        // setting env list
        clo8789[1] = car;
        clo8789[2] = n;
        clo8789[3] = lst2;
        clo8789[4] = take_u45helper;
        clo8789[5] = _u45;
        clo8789[6] = cons;
        clo8789[7] = kont8483;
        clo8789[8] = lst;
        void *f8488 = encode_clo(clo8789);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8488;
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
    void *kont8483 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // Dummy comment
    mpz_t *mpzvar8790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8790, "0", 10);
    void *a8380 = encode_mpz(mpzvar8790);

    // creating new closure instance
    void **clo8792 = alloc_clo(lam8625_fptr, 10);

    // setting env list
    clo8792[1] = car;
    clo8792[2] = n;
    clo8792[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo8792[4] = take_u45helper;
    clo8792[5] = _u45;
    clo8792[6] = cons;
    clo8792[7] = kont8483;
    clo8792[8] = reverse;
    clo8792[9] = lst;
    clo8792[10] = cdr;
    void *f8489 = encode_clo(clo8792);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8489;
    arg_buffer[3] = n;
    arg_buffer[4] = a8380;
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
    void *a8388 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8490 = (decode_clo(env8630))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8630))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8630))[2];
    // not do dummy comment
    void *n = (decode_clo(env8630))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8490;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8388;
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
    void *kont8490 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8794 = alloc_clo(lam8629_fptr, 4);

    // setting env list
    clo8794[1] = n;
    clo8794[2] = take_u45helper;
    clo8794[3] = lst;
    clo8794[4] = kont8490;
    void *f8491 = encode_clo(clo8794);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8491;
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
    void *a8393 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8492 = (decode_clo(env8634))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8634))[2];
    // not do dummy comment
    void *a8391 = (decode_clo(env8634))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8391, a8393);
    arg_buffer[1] = reinterpret_cast<void *>(kont8492);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
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
    void *a8392 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8492 = (decode_clo(env8636))[4];
    // not do dummy comment
    void *length = (decode_clo(env8636))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8636))[2];
    // not do dummy comment
    void *a8391 = (decode_clo(env8636))[1];

    // creating new closure instance
    void **clo8796 = alloc_clo(lam8633_fptr, 3);

    // setting env list
    clo8796[1] = a8391;
    clo8796[2] = _u43;
    clo8796[3] = kont8492;
    void *f8493 = encode_clo(clo8796);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8493;
    arg_buffer[3] = a8392;
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
    void *a8389 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8639))[5];
    // not do dummy comment
    void *length = (decode_clo(env8639))[4];
    // not do dummy comment
    void *_u43 = (decode_clo(env8639))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8639))[2];
    // not do dummy comment
    void *kont8492 = (decode_clo(env8639))[1];

    // if-clause
    bool if_guard8797 = is_true(a8389);
    if (if_guard8797)
    {
        mpz_t *mpzvar8798 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8798, "0", 10);
        void *xy8390 = encode_mpz(mpzvar8798);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8492);
        arg_buffer[2] = xy8390;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8492))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {
        mpz_t *mpzvar8799 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8799, "1", 10);
        void *a8391 = encode_mpz(mpzvar8799);

        // creating new closure instance
        void **clo8801 = alloc_clo(lam8635_fptr, 4);

        // setting env list
        clo8801[1] = a8391;
        clo8801[2] = _u43;
        clo8801[3] = length;
        clo8801[4] = kont8492;
        void *f8494 = encode_clo(clo8801);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8494;
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
    void *kont8492 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8803 = alloc_clo(lam8638_fptr, 5);

    // setting env list
    clo8803[1] = kont8492;
    clo8803[2] = lst;
    clo8803[3] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8803[4] = length;
    clo8803[5] = cdr;
    void *f8495 = encode_clo(clo8803);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8495;
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
    void *xy8395 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8496 = (decode_clo(env8642))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8496);
    arg_buffer[2] = xy8395;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8496))[0]);
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
    void *a8399 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8397 = (decode_clo(env8644))[3];
    // not do dummy comment
    void *kont8496 = (decode_clo(env8644))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8644))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8496;
    arg_buffer[3] = a8397;
    arg_buffer[4] = a8399;
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
    void *a8398 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8496 = (decode_clo(env8646))[5];
    // not do dummy comment
    void *proc = (decode_clo(env8646))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8646))[3];
    // not do dummy comment
    void *map = (decode_clo(env8646))[2];
    // not do dummy comment
    void *a8397 = (decode_clo(env8646))[1];

    // creating new closure instance
    void **clo8805 = alloc_clo(lam8643_fptr, 3);

    // setting env list
    clo8805[1] = cons;
    clo8805[2] = kont8496;
    clo8805[3] = a8397;
    void *f8498 = encode_clo(clo8805);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8498;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8398;
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
    void *a8397 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8648))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8648))[5];
    // not do dummy comment
    void *map = (decode_clo(env8648))[4];
    // not do dummy comment
    void *kont8496 = (decode_clo(env8648))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8648))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8648))[1];

    // creating new closure instance
    void **clo8807 = alloc_clo(lam8645_fptr, 5);

    // setting env list
    clo8807[1] = a8397;
    clo8807[2] = map;
    clo8807[3] = cons;
    clo8807[4] = proc;
    clo8807[5] = kont8496;
    void *f8499 = encode_clo(clo8807);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8499;
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
    void *a8396 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8650))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8650))[5];
    // not do dummy comment
    void *map = (decode_clo(env8650))[4];
    // not do dummy comment
    void *kont8496 = (decode_clo(env8650))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8650))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8650))[1];

    // creating new closure instance
    void **clo8809 = alloc_clo(lam8647_fptr, 6);

    // setting env list
    clo8809[1] = cons;
    clo8809[2] = proc;
    clo8809[3] = kont8496;
    clo8809[4] = map;
    clo8809[5] = lst;
    clo8809[6] = cdr;
    void *f8500 = encode_clo(clo8809);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8500;
    arg_buffer[3] = a8396;
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
    void *a8394 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8652))[8];
    // not do dummy comment
    void *map = (decode_clo(env8652))[7];
    // not do dummy comment
    void *kont8496 = (decode_clo(env8652))[6];
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
    bool if_guard8810 = is_true(a8394);
    if (if_guard8810)
    {

        // creating new closure instance
        void **clo8812 = alloc_clo(lam8641_fptr, 1);

        // setting env list
        clo8812[1] = kont8496;
        void *f8497 = encode_clo(clo8812);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8497;
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
        void **clo8814 = alloc_clo(lam8649_fptr, 6);

        // setting env list
        clo8814[1] = cons;
        clo8814[2] = proc;
        clo8814[3] = kont8496;
        clo8814[4] = map;
        clo8814[5] = lst;
        clo8814[6] = cdr;
        void *f8501 = encode_clo(clo8814);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8501;
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
    void *kont8496 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8816 = alloc_clo(lam8651_fptr, 8);

    // setting env list
    clo8816[1] = cdr;
    clo8816[2] = list;
    clo8816[3] = cons;
    clo8816[4] = car;
    clo8816[5] = proc;
    clo8816[6] = kont8496;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8816[7] = map;
    clo8816[8] = lst;
    void *f8502 = encode_clo(clo8816);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8502;
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
    void *xy8401 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8503 = (decode_clo(env8655))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8503);
    arg_buffer[2] = xy8401;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
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
    void *a8406 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8404 = (decode_clo(env8657))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8657))[2];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8657))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8503;
    arg_buffer[3] = a8404;
    arg_buffer[4] = a8406;
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
    void *a8405 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *op = (decode_clo(env8659))[5];
    // not do dummy comment
    void *a8404 = (decode_clo(env8659))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8659))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8659))[2];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8659))[1];

    // creating new closure instance
    void **clo8818 = alloc_clo(lam8656_fptr, 3);

    // setting env list
    clo8818[1] = kont8503;
    clo8818[2] = cons;
    clo8818[3] = a8404;
    void *f8505 = encode_clo(clo8818);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8505;
    arg_buffer[3] = op;
    arg_buffer[4] = a8405;
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
    void *a8404 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8661))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8661))[5];
    // not do dummy comment
    void *op = (decode_clo(env8661))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8661))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8661))[2];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8661))[1];

    // creating new closure instance
    void **clo8820 = alloc_clo(lam8658_fptr, 5);

    // setting env list
    clo8820[1] = kont8503;
    clo8820[2] = cons;
    clo8820[3] = filter;
    clo8820[4] = a8404;
    clo8820[5] = op;
    void *f8506 = encode_clo(clo8820);

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
    void *op = (decode_clo(env8663))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8663))[2];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8663))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8503;
    arg_buffer[3] = op;
    arg_buffer[4] = a8407;
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
    void *a8403 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8665))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8665))[6];
    // not do dummy comment
    void *op = (decode_clo(env8665))[5];
    // not do dummy comment
    void *cons = (decode_clo(env8665))[4];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8665))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8665))[2];
    // not do dummy comment
    void *car = (decode_clo(env8665))[1];

    // if-clause
    bool if_guard8821 = is_true(a8403);
    if (if_guard8821)
    {

        // creating new closure instance
        void **clo8823 = alloc_clo(lam8660_fptr, 6);

        // setting env list
        clo8823[1] = kont8503;
        clo8823[2] = cons;
        clo8823[3] = filter;
        clo8823[4] = op;
        clo8823[5] = lst;
        clo8823[6] = cdr;
        void *f8507 = encode_clo(clo8823);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8507;
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
        void **clo8825 = alloc_clo(lam8662_fptr, 3);

        // setting env list
        clo8825[1] = kont8503;
        clo8825[2] = filter;
        clo8825[3] = op;
        void *f8508 = encode_clo(clo8825);

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
}

void *lam8664 = encode_clo(alloc_clo(lam8664_fptr, 0));

void *lam8666_fptr() // lam8666
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8667 = arg_buffer[1];
    // reading env and args
    void *a8402 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8667))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8667))[6];
    // not do dummy comment
    void *op = (decode_clo(env8667))[5];
    // not do dummy comment
    void *cons = (decode_clo(env8667))[4];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8667))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8667))[2];
    // not do dummy comment
    void *car = (decode_clo(env8667))[1];

    // creating new closure instance
    void **clo8827 = alloc_clo(lam8664_fptr, 7);

    // setting env list
    clo8827[1] = car;
    clo8827[2] = filter;
    clo8827[3] = kont8503;
    clo8827[4] = cons;
    clo8827[5] = op;
    clo8827[6] = lst;
    clo8827[7] = cdr;
    void *f8509 = encode_clo(clo8827);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8509;
    arg_buffer[3] = a8402;
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
    void *a8400 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8669))[8];
    // not do dummy comment
    void *op = (decode_clo(env8669))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8669))[6];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8669))[5];
    // not do dummy comment
    void *list = (decode_clo(env8669))[4];
    // not do dummy comment
    void *cdr = (decode_clo(env8669))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8669))[2];
    // not do dummy comment
    void *car = (decode_clo(env8669))[1];

    // if-clause
    bool if_guard8828 = is_true(a8400);
    if (if_guard8828)
    {

        // creating new closure instance
        void **clo8830 = alloc_clo(lam8654_fptr, 1);

        // setting env list
        clo8830[1] = kont8503;
        void *f8504 = encode_clo(clo8830);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8504;
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
        void **clo8832 = alloc_clo(lam8666_fptr, 7);

        // setting env list
        clo8832[1] = car;
        clo8832[2] = filter;
        clo8832[3] = kont8503;
        clo8832[4] = cons;
        clo8832[5] = op;
        clo8832[6] = lst;
        clo8832[7] = cdr;
        void *f8510 = encode_clo(clo8832);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8510;
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
    void *kont8503 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8834 = alloc_clo(lam8668_fptr, 8);

    // setting env list
    clo8834[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8834[2] = filter;
    clo8834[3] = cdr;
    clo8834[4] = list;
    clo8834[5] = kont8503;
    clo8834[6] = cons;
    clo8834[7] = op;
    clo8834[8] = lst;
    void *f8511 = encode_clo(clo8834);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8511;
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
    void *a8412 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8410 = (decode_clo(env8672))[3];
    // not do dummy comment
    void *drop = (decode_clo(env8672))[2];
    // not do dummy comment
    void *kont8512 = (decode_clo(env8672))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8512;
    arg_buffer[3] = a8410;
    arg_buffer[4] = a8412;
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
    void *a8410 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *drop = (decode_clo(env8675))[4];
    // not do dummy comment
    void *kont8512 = (decode_clo(env8675))[3];
    // not do dummy comment
    void *n = (decode_clo(env8675))[2];
    // not do dummy comment
    void *_u45 = (decode_clo(env8675))[1];
    mpz_t *mpzvar8835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8835, "1", 10);
    void *a8411 = encode_mpz(mpzvar8835);

    // creating new closure instance
    void **clo8837 = alloc_clo(lam8671_fptr, 3);

    // setting env list
    clo8837[1] = kont8512;
    clo8837[2] = drop;
    clo8837[3] = a8410;
    void *f8513 = encode_clo(clo8837);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8411);
    arg_buffer[1] = reinterpret_cast<void *>(f8513);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8513))[0]);
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
    void *a8409 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8677))[6];
    // not do dummy comment
    void *kont8512 = (decode_clo(env8677))[5];
    // not do dummy comment
    void *n = (decode_clo(env8677))[4];
    // not do dummy comment
    void *_u45 = (decode_clo(env8677))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8677))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8677))[1];

    // if-clause
    bool if_guard8838 = is_true(a8409);
    if (if_guard8838)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8512);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8512))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8840 = alloc_clo(lam8674_fptr, 4);

        // setting env list
        clo8840[1] = _u45;
        clo8840[2] = n;
        clo8840[3] = kont8512;
        clo8840[4] = drop;
        void *f8514 = encode_clo(clo8840);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8514;
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
    void *kont8512 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8841 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8841, "0", 10);
    void *a8408 = encode_mpz(mpzvar8841);

    // creating new closure instance
    void **clo8843 = alloc_clo(lam8676_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8843[1] = drop;
    clo8843[2] = lst;
    clo8843[3] = _u45;
    clo8843[4] = n;
    clo8843[5] = kont8512;
    clo8843[6] = cdr;
    void *f8515 = encode_clo(clo8843);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8515;
    arg_buffer[3] = n;
    arg_buffer[4] = a8408;
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
    void *a8416 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8414 = (decode_clo(env8681))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8681))[2];
    // not do dummy comment
    void *kont8516 = (decode_clo(env8681))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = kont8516;
    arg_buffer[3] = a8414;
    arg_buffer[4] = a8416;
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
    void *a8415 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *foldr = (decode_clo(env8683))[5];
    // not do dummy comment
    void *a8414 = (decode_clo(env8683))[4];
    // not do dummy comment
    void *kont8516 = (decode_clo(env8683))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8683))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8683))[1];

    // creating new closure instance
    void **clo8845 = alloc_clo(lam8680_fptr, 3);

    // setting env list
    clo8845[1] = kont8516;
    clo8845[2] = proc;
    clo8845[3] = a8414;
    void *f8517 = encode_clo(clo8845);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8517;
    arg_buffer[3] = proc;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8415;
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
    void *a8414 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8685))[6];
    // not do dummy comment
    void *kont8516 = (decode_clo(env8685))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8685))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8685))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8685))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8685))[1];

    // creating new closure instance
    void **clo8847 = alloc_clo(lam8682_fptr, 5);

    // setting env list
    clo8847[1] = acc;
    clo8847[2] = proc;
    clo8847[3] = kont8516;
    clo8847[4] = a8414;
    clo8847[5] = foldr;
    void *f8518 = encode_clo(clo8847);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8518;
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
    void *a8413 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8687))[7];
    // not do dummy comment
    void *kont8516 = (decode_clo(env8687))[6];
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
    bool if_guard8848 = is_true(a8413);
    if (if_guard8848)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8516);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8516))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8850 = alloc_clo(lam8684_fptr, 6);

        // setting env list
        clo8850[1] = acc;
        clo8850[2] = proc;
        clo8850[3] = lst;
        clo8850[4] = foldr;
        clo8850[5] = kont8516;
        clo8850[6] = cdr;
        void *f8519 = encode_clo(clo8850);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8519;
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
    void *kont8516 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8852 = alloc_clo(lam8686_fptr, 7);

    // setting env list
    clo8852[1] = acc;
    clo8852[2] = proc;
    clo8852[3] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8852[4] = foldr;
    clo8852[5] = car;
    clo8852[6] = kont8516;
    clo8852[7] = cdr;
    void *f8520 = encode_clo(clo8852);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8520;
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
    void *a8420 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8521 = (decode_clo(env8690))[3];
    // not do dummy comment
    void *a8418 = (decode_clo(env8690))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8690))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8521;
    arg_buffer[3] = a8418;
    arg_buffer[4] = a8420;
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
    void *a8419 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8521 = (decode_clo(env8692))[5];
    // not do dummy comment
    void *append = (decode_clo(env8692))[4];
    // not do dummy comment
    void *a8418 = (decode_clo(env8692))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8692))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8692))[1];

    // creating new closure instance
    void **clo8854 = alloc_clo(lam8689_fptr, 3);

    // setting env list
    clo8854[1] = cons;
    clo8854[2] = a8418;
    clo8854[3] = kont8521;
    void *f8522 = encode_clo(clo8854);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = f8522;
    arg_buffer[3] = a8419;
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
    void *a8418 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8694))[6];
    // not do dummy comment
    void *kont8521 = (decode_clo(env8694))[5];
    // not do dummy comment
    void *append = (decode_clo(env8694))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8694))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8694))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8694))[1];

    // creating new closure instance
    void **clo8856 = alloc_clo(lam8691_fptr, 5);

    // setting env list
    clo8856[1] = cons;
    clo8856[2] = lst2;
    clo8856[3] = a8418;
    clo8856[4] = append;
    clo8856[5] = kont8521;
    void *f8523 = encode_clo(clo8856);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8523;
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
    void *a8417 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8696))[7];
    // not do dummy comment
    void *kont8521 = (decode_clo(env8696))[6];
    // not do dummy comment
    void *append = (decode_clo(env8696))[5];
    // not do dummy comment
    void *lst2 = (decode_clo(env8696))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8696))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8696))[2];
    // not do dummy comment
    void *car = (decode_clo(env8696))[1];

    // if-clause
    bool if_guard8857 = is_true(a8417);
    if (if_guard8857)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8521);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521))[0]);
        // assign buffer size to numArgs
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8859 = alloc_clo(lam8693_fptr, 6);

        // setting env list
        clo8859[1] = cons;
        clo8859[2] = lst1;
        clo8859[3] = lst2;
        clo8859[4] = append;
        clo8859[5] = kont8521;
        clo8859[6] = cdr;
        void *f8524 = encode_clo(clo8859);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8524;
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
    void *kont8521 = arg_buffer[2];
    void *lst1 = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8861 = alloc_clo(lam8695_fptr, 7);

    // setting env list
    clo8861[1] = car;
    clo8861[2] = lst1;
    clo8861[3] = cons;
    clo8861[4] = lst2;
    void *append = encode_clo(alloc_clo(append_fptr, 0));

    clo8861[5] = append;
    clo8861[6] = kont8521;
    clo8861[7] = cdr;
    void *f8525 = encode_clo(clo8861);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8525;
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

    void *kont8526 = prim_car(lst);
    void *lst8554 = prim_cdr(lst);
    void *xy8421 = apply_prim_hash(lst8554);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8526);
    arg_buffer[2] = xy8421;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8526))[0]);
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
    void *kont8527 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8422 = prim_hash_u45ref(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8527);
    arg_buffer[2] = xy8422;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8527))[0]);
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
    void *kont8528 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    void *v = arg_buffer[5];
    // Dummy comment
    void *xy8423 = prim_hash_u45set(h, k, v);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8528);
    arg_buffer[2] = xy8423;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8528))[0]);
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
    void *kont8529 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8424 = prim_hash_u45keys(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8529);
    arg_buffer[2] = xy8424;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8529))[0]);
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
    void *kont8530 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8425 = prim_hash_u45has_u45key_u63(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8530);
    arg_buffer[2] = xy8425;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8530))[0]);
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
    void *kont8531 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8426 = prim_hash_u45count(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8531);
    arg_buffer[2] = xy8426;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8531))[0]);
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

    void *kont8532 = prim_car(lst);
    void *lst8555 = prim_cdr(lst);
    void *xy8427 = apply_prim_set(lst8555);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8532);
    arg_buffer[2] = xy8427;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8532))[0]);
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
    void *kont8533 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8428 = prim_set_u45_u62list(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8533);
    arg_buffer[2] = xy8428;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8533))[0]);
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
    void *kont8534 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8429 = prim_list_u45_u62set(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8534);
    arg_buffer[2] = xy8429;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8534))[0]);
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
    void *kont8535 = arg_buffer[2];
    void *s = arg_buffer[3];
    void *val = arg_buffer[4];
    // Dummy comment
    void *xy8430 = prim_set_u45add(s, val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8535);
    arg_buffer[2] = xy8430;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8535))[0]);
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
    void *kont8536 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8431 = prim_string_u63(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8536);
    arg_buffer[2] = xy8431;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8536))[0]);
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
    void *kont8537 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8432 = prim_string_u45length(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8537);
    arg_buffer[2] = xy8432;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8537))[0]);
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
    void *kont8538 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *pos = arg_buffer[4];
    // Dummy comment
    void *xy8433 = prim_string_u45ref(str, pos);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8538);
    arg_buffer[2] = xy8433;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8538))[0]);
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
    void *kont8539 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *start = arg_buffer[4];
    void *end = arg_buffer[5];
    // Dummy comment
    void *xy8434 = prim_substring(str, start, end);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8539);
    arg_buffer[2] = xy8434;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8539))[0]);
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
    void *kont8540 = arg_buffer[2];
    void *s1 = arg_buffer[3];
    void *s2 = arg_buffer[4];
    // Dummy comment
    void *xy8435 = prim_string_u45append(s1, s2);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8540);
    arg_buffer[2] = xy8435;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8540))[0]);
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
    void *kont8541 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8436 = prim_string_u45_u62list(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8541);
    arg_buffer[2] = xy8436;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8541))[0]);
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
    void *a8444 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8442 = (decode_clo(env8715))[5];
    // not do dummy comment
    void *kont8542 = (decode_clo(env8715))[4];
    // not do dummy comment
    void *_u42 = (decode_clo(env8715))[3];
    // not do dummy comment
    void *a8437 = (decode_clo(env8715))[2];
    // not do dummy comment
    void *a8438 = (decode_clo(env8715))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u42);
    arg_buffer[2] = kont8542;
    arg_buffer[3] = a8437;
    arg_buffer[4] = a8438;
    arg_buffer[5] = a8442;
    arg_buffer[6] = a8444;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8714 = encode_clo(alloc_clo(lam8714_fptr, 0));

void *lam8717_fptr() // lam8717
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8718 = arg_buffer[1];
    // reading env and args
    void *a8442 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8542 = (decode_clo(env8718))[4];
    // not do dummy comment
    void *_u42 = (decode_clo(env8718))[3];
    // not do dummy comment
    void *a8437 = (decode_clo(env8718))[2];
    // not do dummy comment
    void *a8438 = (decode_clo(env8718))[1];
    mpf_t *mpfvar8862 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init_set_str(*mpfvar8862, "10.0", 10);
    void *a8443 = encode_mpf(mpfvar8862);

    // creating new closure instance
    void **clo8864 = alloc_clo(lam8714_fptr, 5);

    // setting env list
    clo8864[1] = a8438;
    clo8864[2] = a8437;
    clo8864[3] = _u42;
    clo8864[4] = kont8542;
    clo8864[5] = a8442;
    void *f8543 = encode_clo(clo8864);

    // clo-app
    arg_buffer[2] = apply_prim__u42_1(a8443);
    arg_buffer[1] = reinterpret_cast<void *>(f8543);
    arg_buffer[0] = reinterpret_cast<void *>(1);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8543))[0]);
    function_ptr();
    return nullptr;
}

void *lam8717 = encode_clo(alloc_clo(lam8717_fptr, 0));

void *call_fptr() // call
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8724 = arg_buffer[1];
    // reading env and args
    void *kont8542 = arg_buffer[2];
    // Dummy comment
    mpz_t *mpzvar8865 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8865, "1", 10);
    void *a8437 = encode_mpz(mpzvar8865);
    mpz_t *mpzvar8866 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8866, "2", 10);
    void *a8438 = encode_mpz(mpzvar8866);
    mpz_t *mpzvar8867 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8867, "3", 10);
    void *a8439 = encode_mpz(mpzvar8867);
    mpz_t *mpzvar8868 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8868, "4", 10);
    void *a8440 = encode_mpz(mpzvar8868);
    mpz_t *mpzvar8869 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8869, "5", 10);
    void *a8441 = encode_mpz(mpzvar8869);

    // creating new closure instance
    void **clo8871 = alloc_clo(lam8717_fptr, 4);

    // setting env list
    clo8871[1] = a8438;
    clo8871[2] = a8437;
    clo8871[3] = _u42;
    clo8871[4] = kont8542;
    void *f8544 = encode_clo(clo8871);

    // clo-app
    arg_buffer[2] = apply_prim__u42_3(a8439, a8440, a8441);
    arg_buffer[1] = reinterpret_cast<void *>(f8544);
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8544))[0]);
    function_ptr();
    return nullptr;
}

void *call = encode_clo(alloc_clo(call_fptr, 0));

void *lam8725_fptr() // lam8725
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8726 = arg_buffer[1];
    // reading env and args
    void *xy8445 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8545 = (decode_clo(env8726))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8545);
    arg_buffer[2] = xy8445;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8545))[0]);
    // assign buffer size to numArgs
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8725 = encode_clo(alloc_clo(lam8725_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8727 = arg_buffer[1];
    // reading env and args
    void *kont8545 = arg_buffer[2];
    // Dummy comment

    // creating new closure instance
    void **clo8873 = alloc_clo(lam8725_fptr, 1);

    // setting env list
    clo8873[1] = kont8545;
    void *f8546 = encode_clo(clo8873);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call);
    arg_buffer[2] = f8546;
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
