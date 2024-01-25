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
    void *_env8687 = arg_buffer[1];
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

    void *kont8685 = prim_car(lst);
    void *lst8688 = prim_cdr(lst);
    void *x8686 = apply_prim__u43(lst8688);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8685);
    arg_buffer[2] = x8686;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8685))[0]);
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
    void *_env8691 = arg_buffer[1];
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

    void *kont8689 = prim_car(lst);
    void *lst8692 = prim_cdr(lst);
    void *x8690 = apply_prim__u45(lst8692);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8689);
    arg_buffer[2] = x8690;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8689))[0]);
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
    void *_env8695 = arg_buffer[1];
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

    void *kont8693 = prim_car(lst);
    void *lst8696 = prim_cdr(lst);
    void *x8694 = apply_prim__u42(lst8696);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8693);
    arg_buffer[2] = x8694;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8693))[0]);
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
    void *_env8699 = arg_buffer[1];
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

    void *kont8697 = prim_car(lst);
    void *lst8700 = prim_cdr(lst);
    void *x8698 = apply_prim__u47(lst8700);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8697);
    arg_buffer[2] = x8698;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8697))[0]);
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
    void *_env8703 = arg_buffer[1];
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

    void *kont8701 = prim_car(lst);
    void *lst8704 = prim_cdr(lst);
    void *x8702 = apply_prim__u61(lst8704);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8701);
    arg_buffer[2] = x8702;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8701))[0]);
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
    void *_env8707 = arg_buffer[1];
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

    void *kont8705 = prim_car(lst);
    void *lst8708 = prim_cdr(lst);
    void *x8706 = apply_prim__u62(lst8708);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8705);
    arg_buffer[2] = x8706;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8705))[0]);
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
    void *_env8711 = arg_buffer[1];
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

    void *kont8709 = prim_car(lst);
    void *lst8712 = prim_cdr(lst);
    void *x8710 = apply_prim__u60(lst8712);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8709);
    arg_buffer[2] = x8710;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8709))[0]);
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
    void *_env8715 = arg_buffer[1];
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

    void *kont8713 = prim_car(lst);
    void *lst8716 = prim_cdr(lst);
    void *x8714 = apply_prim__u60_u61(lst8716);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8713);
    arg_buffer[2] = x8714;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8713))[0]);
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
    void *_env8719 = arg_buffer[1];
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

    void *kont8717 = prim_car(lst);
    void *lst8720 = prim_cdr(lst);
    void *x8718 = apply_prim__u62_u61(lst8720);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8717);
    arg_buffer[2] = x8718;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8717))[0]);
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
    void *_8526 = arg_buffer[1];
    // reading env and args
    void *kont8434 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8343 = prim_modulo(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8434);
    arg_buffer[2] = xy8343;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8434))[0]);
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
    void *_8527 = arg_buffer[1];
    // reading env and args
    void *kont8435 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    void *xy8344 = prim_null_u63(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8435);
    arg_buffer[2] = xy8344;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8435))[0]);
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
    void *_8528 = arg_buffer[1];
    // reading env and args
    void *kont8436 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8345 = prim_equal_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8436);
    arg_buffer[2] = xy8345;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8436))[0]);
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
    void *_8529 = arg_buffer[1];
    // reading env and args
    void *kont8437 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *y = arg_buffer[4];
    // Dummy comment
    void *xy8346 = prim_eq_u63(x, y);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8437);
    arg_buffer[2] = xy8346;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8437))[0]);
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
    void *_8530 = arg_buffer[1];
    // reading env and args
    void *kont8438 = arg_buffer[2];
    void *a = arg_buffer[3];
    void *b = arg_buffer[4];
    // Dummy comment
    void *xy8347 = prim_cons(a, b);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8438);
    arg_buffer[2] = xy8347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8438))[0]);
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
    void *_8531 = arg_buffer[1];
    // reading env and args
    void *kont8439 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8348 = prim_car(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8439);
    arg_buffer[2] = xy8348;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8439))[0]);
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
    void *_8532 = arg_buffer[1];
    // reading env and args
    void *kont8440 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8349 = prim_cdr(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8440);
    arg_buffer[2] = xy8349;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8440))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void *lam8533_fptr() // lam8533
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8534 = arg_buffer[1];
    // reading env and args
    void *a8352 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8534))[3];
    // not do dummy comment
    void *kont8441 = (decode_clo(env8534))[2];
    // not do dummy comment
    void *a8350 = (decode_clo(env8534))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8441;
    arg_buffer[3] = a8350;
    arg_buffer[4] = a8352;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8533 = encode_clo(alloc_clo(lam8533_fptr, 0));

void *even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8537 = arg_buffer[1];
    // reading env and args
    void *kont8441 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8721 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8721, "0", 10);
    void *a8350 = encode_mpz(mpzvar8721);
    mpz_t *mpzvar8722 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8722, "2", 10);
    void *a8351 = encode_mpz(mpzvar8722);

    // creating new closure instance
    void **clo8724 = alloc_clo(lam8533_fptr, 3);

    // setting env list
    clo8724[1] = a8350;
    clo8724[2] = kont8441;
    clo8724[3] = equal_u63;
    void *f8442 = encode_clo(clo8724);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8442;
    arg_buffer[3] = x;
    arg_buffer[4] = a8351;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void *lam8538_fptr() // lam8538
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8539 = arg_buffer[1];
    // reading env and args
    void *a8355 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8353 = (decode_clo(env8539))[3];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8539))[2];
    // not do dummy comment
    void *kont8443 = (decode_clo(env8539))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8443;
    arg_buffer[3] = a8353;
    arg_buffer[4] = a8355;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8538 = encode_clo(alloc_clo(lam8538_fptr, 0));

void *odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8542 = arg_buffer[1];
    // reading env and args
    void *kont8443 = arg_buffer[2];
    void *x = arg_buffer[3];
    // Dummy comment
    mpz_t *mpzvar8725 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8725, "1", 10);
    void *a8353 = encode_mpz(mpzvar8725);
    mpz_t *mpzvar8726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8726, "2", 10);
    void *a8354 = encode_mpz(mpzvar8726);

    // creating new closure instance
    void **clo8728 = alloc_clo(lam8538_fptr, 3);

    // setting env list
    clo8728[1] = kont8443;
    clo8728[2] = equal_u63;
    clo8728[3] = a8353;
    void *f8444 = encode_clo(clo8728);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8444;
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
    void *_8543 = arg_buffer[1];
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

    void *kont8445 = prim_car(x);
    void *x8525 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8445);
    arg_buffer[2] = x8525;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8445))[0]);
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
    void *_8544 = arg_buffer[1];
    // reading env and args
    void *kont8446 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8356 = prim_inexact_u45_u62exact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8446);
    arg_buffer[2] = xy8356;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8446))[0]);
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
    void *_8545 = arg_buffer[1];
    // reading env and args
    void *kont8447 = arg_buffer[2];
    void *val = arg_buffer[3];
    // Dummy comment
    void *xy8357 = prim_exact_u45_u62inexact(val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8447);
    arg_buffer[2] = xy8357;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8447))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void *lam8548_fptr() // lam8548
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8549 = arg_buffer[1];
    // reading env and args
    void *a8363 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8448 = (decode_clo(env8549))[3];
    // not do dummy comment
    void *x = (decode_clo(env8549))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8549))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8448;
    arg_buffer[3] = x;
    arg_buffer[4] = a8363;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8548 = encode_clo(alloc_clo(lam8548_fptr, 0));

void *lam8550_fptr() // lam8550
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8551 = arg_buffer[1];
    // reading env and args
    void *a8361 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8551))[5];
    // not do dummy comment
    void *kont8448 = (decode_clo(env8551))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8551))[3];
    // not do dummy comment
    void *x = (decode_clo(env8551))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8551))[1];

    // if-clause
    bool if_guard8729 = is_true(a8361);
    if (if_guard8729)
    {
        void *xy8362 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8448);
        arg_buffer[2] = xy8362;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8731 = alloc_clo(lam8548_fptr, 3);

        // setting env list
        clo8731[1] = member_u63;
        clo8731[2] = x;
        clo8731[3] = kont8448;
        void *f8449 = encode_clo(clo8731);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8449;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8550 = encode_clo(alloc_clo(lam8550_fptr, 0));

void *lam8552_fptr() // lam8552
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8553 = arg_buffer[1];
    // reading env and args
    void *a8360 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8553))[6];
    // not do dummy comment
    void *kont8448 = (decode_clo(env8553))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8553))[4];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8553))[3];
    // not do dummy comment
    void *x = (decode_clo(env8553))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8553))[1];

    // creating new closure instance
    void **clo8733 = alloc_clo(lam8550_fptr, 5);

    // setting env list
    clo8733[1] = member_u63;
    clo8733[2] = x;
    clo8733[3] = lst;
    clo8733[4] = kont8448;
    clo8733[5] = cdr;
    void *f8450 = encode_clo(clo8733);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8450;
    arg_buffer[3] = a8360;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8552 = encode_clo(alloc_clo(lam8552_fptr, 0));

void *lam8554_fptr() // lam8554
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8555 = arg_buffer[1];
    // reading env and args
    void *a8358 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8555))[7];
    // not do dummy comment
    void *kont8448 = (decode_clo(env8555))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8555))[5];
    // not do dummy comment
    void *equal_u63 = (decode_clo(env8555))[4];
    // not do dummy comment
    void *x = (decode_clo(env8555))[3];
    // not do dummy comment
    void *car = (decode_clo(env8555))[2];
    // not do dummy comment
    void *member_u63 = (decode_clo(env8555))[1];

    // if-clause
    bool if_guard8734 = is_true(a8358);
    if (if_guard8734)
    {
        void *xy8359 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8448);
        arg_buffer[2] = xy8359;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8448))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8736 = alloc_clo(lam8552_fptr, 6);

        // setting env list
        clo8736[1] = member_u63;
        clo8736[2] = x;
        clo8736[3] = equal_u63;
        clo8736[4] = lst;
        clo8736[5] = kont8448;
        clo8736[6] = cdr;
        void *f8451 = encode_clo(clo8736);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8451;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8554 = encode_clo(alloc_clo(lam8554_fptr, 0));

void *member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8556 = arg_buffer[1];
    // reading env and args
    void *kont8448 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8738 = alloc_clo(lam8554_fptr, 7);

    // setting env list
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo8738[1] = member_u63;
    clo8738[2] = car;
    clo8738[3] = x;
    clo8738[4] = equal_u63;
    clo8738[5] = lst;
    clo8738[6] = kont8448;
    clo8738[7] = cdr;
    void *f8452 = encode_clo(clo8738);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8452;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void *lam8557_fptr() // lam8557
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8558 = arg_buffer[1];
    // reading env and args
    void *a8367 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8453 = (decode_clo(env8558))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8558))[3];
    // not do dummy comment
    void *foldl = (decode_clo(env8558))[2];
    // not do dummy comment
    void *a8366 = (decode_clo(env8558))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8453;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8366;
    arg_buffer[5] = a8367;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
    void *a8366 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8560))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8560))[4];
    // not do dummy comment
    void *kont8453 = (decode_clo(env8560))[3];
    // not do dummy comment
    void *fun = (decode_clo(env8560))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8560))[1];

    // creating new closure instance
    void **clo8740 = alloc_clo(lam8557_fptr, 4);

    // setting env list
    clo8740[1] = a8366;
    clo8740[2] = foldl;
    clo8740[3] = fun;
    clo8740[4] = kont8453;
    void *f8454 = encode_clo(clo8740);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8454;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
    void *a8365 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8562))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8562))[5];
    // not do dummy comment
    void *kont8453 = (decode_clo(env8562))[4];
    // not do dummy comment
    void *fun = (decode_clo(env8562))[3];
    // not do dummy comment
    void *acc = (decode_clo(env8562))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8562))[1];

    // creating new closure instance
    void **clo8742 = alloc_clo(lam8559_fptr, 5);

    // setting env list
    clo8742[1] = foldl;
    clo8742[2] = fun;
    clo8742[3] = kont8453;
    clo8742[4] = lst;
    clo8742[5] = cdr;
    void *f8455 = encode_clo(clo8742);

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8365, acc);
    arg_buffer[1] = reinterpret_cast<void *>(f8455);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8455))[0]);
    function_ptr();
    return nullptr;
}

void *lam8561 = encode_clo(alloc_clo(lam8561_fptr, 0));

void *lam8563_fptr() // lam8563
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8564 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8564))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8564))[6];
    // not do dummy comment
    void *kont8453 = (decode_clo(env8564))[5];
    // not do dummy comment
    void *fun = (decode_clo(env8564))[4];
    // not do dummy comment
    void *acc = (decode_clo(env8564))[3];
    // not do dummy comment
    void *car = (decode_clo(env8564))[2];
    // not do dummy comment
    void *foldl = (decode_clo(env8564))[1];

    // if-clause
    bool if_guard8743 = is_true(a8364);
    if (if_guard8743)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8453);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8453))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8745 = alloc_clo(lam8561_fptr, 6);

        // setting env list
        clo8745[1] = foldl;
        clo8745[2] = acc;
        clo8745[3] = fun;
        clo8745[4] = kont8453;
        clo8745[5] = lst;
        clo8745[6] = cdr;
        void *f8456 = encode_clo(clo8745);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8456;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8563 = encode_clo(alloc_clo(lam8563_fptr, 0));

void *foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8565 = arg_buffer[1];
    // reading env and args
    void *kont8453 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8747 = alloc_clo(lam8563_fptr, 7);

    // setting env list
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo8747[1] = foldl;
    clo8747[2] = car;
    clo8747[3] = acc;
    clo8747[4] = fun;
    clo8747[5] = kont8453;
    clo8747[6] = lst;
    clo8747[7] = cdr;
    void *f8457 = encode_clo(clo8747);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8457;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void *lam8566_fptr() // lam8566
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8567 = arg_buffer[1];
    // reading env and args
    void *a8371 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8369 = (decode_clo(env8567))[3];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8567))[2];
    // not do dummy comment
    void *kont8458 = (decode_clo(env8567))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8458;
    arg_buffer[3] = a8369;
    arg_buffer[4] = a8371;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
    void *a8370 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8369 = (decode_clo(env8569))[5];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8569))[4];
    // not do dummy comment
    void *kont8458 = (decode_clo(env8569))[3];
    // not do dummy comment
    void *lst2 = (decode_clo(env8569))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8569))[1];

    // creating new closure instance
    void **clo8749 = alloc_clo(lam8566_fptr, 3);

    // setting env list
    clo8749[1] = kont8458;
    clo8749[2] = reverse_u45helper;
    clo8749[3] = a8369;
    void *f8459 = encode_clo(clo8749);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8459;
    arg_buffer[3] = a8370;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
    void *a8369 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8571))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8571))[5];
    // not do dummy comment
    void *kont8458 = (decode_clo(env8571))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8571))[3];
    // not do dummy comment
    void *car = (decode_clo(env8571))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8571))[1];

    // creating new closure instance
    void **clo8751 = alloc_clo(lam8568_fptr, 5);

    // setting env list
    clo8751[1] = cons;
    clo8751[2] = lst2;
    clo8751[3] = kont8458;
    clo8751[4] = reverse_u45helper;
    clo8751[5] = a8369;
    void *f8460 = encode_clo(clo8751);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8460;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8570 = encode_clo(alloc_clo(lam8570_fptr, 0));

void *lam8572_fptr() // lam8572
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8573 = arg_buffer[1];
    // reading env and args
    void *a8368 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8573))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8573))[6];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8573))[5];
    // not do dummy comment
    void *kont8458 = (decode_clo(env8573))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8573))[3];
    // not do dummy comment
    void *car = (decode_clo(env8573))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8573))[1];

    // if-clause
    bool if_guard8752 = is_true(a8368);
    if (if_guard8752)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8458);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8458))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8754 = alloc_clo(lam8570_fptr, 6);

        // setting env list
        clo8754[1] = cons;
        clo8754[2] = car;
        clo8754[3] = lst2;
        clo8754[4] = kont8458;
        clo8754[5] = reverse_u45helper;
        clo8754[6] = lst;
        void *f8461 = encode_clo(clo8754);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8461;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8572 = encode_clo(alloc_clo(lam8572_fptr, 0));

void *reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8574 = arg_buffer[1];
    // reading env and args
    void *kont8458 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8756 = alloc_clo(lam8572_fptr, 7);

    // setting env list
    clo8756[1] = cons;
    clo8756[2] = car;
    clo8756[3] = lst2;
    clo8756[4] = kont8458;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo8756[5] = reverse_u45helper;
    clo8756[6] = lst;
    clo8756[7] = cdr;
    void *f8462 = encode_clo(clo8756);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8462;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void *lam8575_fptr() // lam8575
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8576 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8463 = (decode_clo(env8576))[3];
    // not do dummy comment
    void *lst = (decode_clo(env8576))[2];
    // not do dummy comment
    void *reverse_u45helper = (decode_clo(env8576))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8463;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8575 = encode_clo(alloc_clo(lam8575_fptr, 0));

void *reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8577 = arg_buffer[1];
    // reading env and args
    void *kont8463 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8758 = alloc_clo(lam8575_fptr, 3);

    // setting env list
    clo8758[1] = reverse_u45helper;
    clo8758[2] = lst;
    clo8758[3] = kont8463;
    void *f8464 = encode_clo(clo8758);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8464;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void *lam8578_fptr() // lam8578
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8579 = arg_buffer[1];
    // reading env and args
    void *xy8375 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8465 = (decode_clo(env8579))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8465);
    arg_buffer[2] = xy8375;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8465))[0]);
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
    void *a8380 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8465 = (decode_clo(env8581))[4];
    // not do dummy comment
    void *a8376 = (decode_clo(env8581))[3];
    // not do dummy comment
    void *a8378 = (decode_clo(env8581))[2];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8581))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8465;
    arg_buffer[3] = a8376;
    arg_buffer[4] = a8378;
    arg_buffer[5] = a8380;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
    void *a8379 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8465 = (decode_clo(env8583))[6];
    // not do dummy comment
    void *a8376 = (decode_clo(env8583))[5];
    // not do dummy comment
    void *a8378 = (decode_clo(env8583))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8583))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8583))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8583))[1];

    // creating new closure instance
    void **clo8760 = alloc_clo(lam8580_fptr, 4);

    // setting env list
    clo8760[1] = take_u45helper;
    clo8760[2] = a8378;
    clo8760[3] = a8376;
    clo8760[4] = kont8465;
    void *f8467 = encode_clo(clo8760);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8467;
    arg_buffer[3] = a8379;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
    void *a8378 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8465 = (decode_clo(env8585))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8585))[6];
    // not do dummy comment
    void *a8376 = (decode_clo(env8585))[5];
    // not do dummy comment
    void *car = (decode_clo(env8585))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8585))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8585))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8585))[1];

    // creating new closure instance
    void **clo8762 = alloc_clo(lam8582_fptr, 6);

    // setting env list
    clo8762[1] = lst2;
    clo8762[2] = take_u45helper;
    clo8762[3] = cons;
    clo8762[4] = a8378;
    clo8762[5] = a8376;
    clo8762[6] = kont8465;
    void *f8468 = encode_clo(clo8762);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8468;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8584 = encode_clo(alloc_clo(lam8584_fptr, 0));

void *lam8587_fptr() // lam8587
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8588 = arg_buffer[1];
    // reading env and args
    void *a8376 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8465 = (decode_clo(env8588))[8];
    // not do dummy comment
    void *lst = (decode_clo(env8588))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8588))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8588))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8588))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8588))[3];
    // not do dummy comment
    void *n = (decode_clo(env8588))[2];
    // not do dummy comment
    void *car = (decode_clo(env8588))[1];
    mpz_t *mpzvar8763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8763, "1", 10);
    void *a8377 = encode_mpz(mpzvar8763);

    // creating new closure instance
    void **clo8765 = alloc_clo(lam8584_fptr, 7);

    // setting env list
    clo8765[1] = lst2;
    clo8765[2] = take_u45helper;
    clo8765[3] = cons;
    clo8765[4] = car;
    clo8765[5] = a8376;
    clo8765[6] = lst;
    clo8765[7] = kont8465;
    void *f8469 = encode_clo(clo8765);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8377);
    arg_buffer[1] = reinterpret_cast<void *>(f8469);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8469))[0]);
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
    void *a8374 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8590))[10];
    // not do dummy comment
    void *kont8465 = (decode_clo(env8590))[9];
    // not do dummy comment
    void *lst = (decode_clo(env8590))[8];
    // not do dummy comment
    void *reverse = (decode_clo(env8590))[7];
    // not do dummy comment
    void *cons = (decode_clo(env8590))[6];
    // not do dummy comment
    void *_u45 = (decode_clo(env8590))[5];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8590))[4];
    // not do dummy comment
    void *lst2 = (decode_clo(env8590))[3];
    // not do dummy comment
    void *n = (decode_clo(env8590))[2];
    // not do dummy comment
    void *car = (decode_clo(env8590))[1];

    // if-clause
    bool if_guard8766 = is_true(a8374);
    if (if_guard8766)
    {

        // creating new closure instance
        void **clo8768 = alloc_clo(lam8578_fptr, 1);

        // setting env list
        clo8768[1] = kont8465;
        void *f8466 = encode_clo(clo8768);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8466;
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
        void **clo8770 = alloc_clo(lam8587_fptr, 8);

        // setting env list
        clo8770[1] = car;
        clo8770[2] = n;
        clo8770[3] = lst2;
        clo8770[4] = take_u45helper;
        clo8770[5] = _u45;
        clo8770[6] = cons;
        clo8770[7] = lst;
        clo8770[8] = kont8465;
        void *f8470 = encode_clo(clo8770);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8470;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8589 = encode_clo(alloc_clo(lam8589_fptr, 0));

void *take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8592 = arg_buffer[1];
    // reading env and args
    void *kont8465 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // Dummy comment
    mpz_t *mpzvar8771 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8771, "0", 10);
    void *a8373 = encode_mpz(mpzvar8771);

    // creating new closure instance
    void **clo8773 = alloc_clo(lam8589_fptr, 10);

    // setting env list
    clo8773[1] = car;
    clo8773[2] = n;
    clo8773[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo8773[4] = take_u45helper;
    clo8773[5] = _u45;
    clo8773[6] = cons;
    clo8773[7] = reverse;
    clo8773[8] = lst;
    clo8773[9] = kont8465;
    clo8773[10] = cdr;
    void *f8471 = encode_clo(clo8773);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8373);
    arg_buffer[1] = reinterpret_cast<void *>(f8471);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8471))[0]);
    function_ptr();
    return nullptr;
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void *lam8593_fptr() // lam8593
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8594 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8594))[4];
    // not do dummy comment
    void *kont8472 = (decode_clo(env8594))[3];
    // not do dummy comment
    void *take_u45helper = (decode_clo(env8594))[2];
    // not do dummy comment
    void *n = (decode_clo(env8594))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8472;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8381;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8593 = encode_clo(alloc_clo(lam8593_fptr, 0));

void *take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8595 = arg_buffer[1];
    // reading env and args
    void *kont8472 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8775 = alloc_clo(lam8593_fptr, 4);

    // setting env list
    clo8775[1] = n;
    clo8775[2] = take_u45helper;
    clo8775[3] = kont8472;
    clo8775[4] = lst;
    void *f8473 = encode_clo(clo8775);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8473;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void *lam8597_fptr() // lam8597
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8598 = arg_buffer[1];
    // reading env and args
    void *a8386 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8384 = (decode_clo(env8598))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8598))[2];
    // not do dummy comment
    void *kont8474 = (decode_clo(env8598))[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8384, a8386);
    arg_buffer[1] = reinterpret_cast<void *>(kont8474);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
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
    void *a8385 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8384 = (decode_clo(env8600))[4];
    // not do dummy comment
    void *length = (decode_clo(env8600))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8600))[2];
    // not do dummy comment
    void *kont8474 = (decode_clo(env8600))[1];

    // creating new closure instance
    void **clo8777 = alloc_clo(lam8597_fptr, 3);

    // setting env list
    clo8777[1] = kont8474;
    clo8777[2] = _u43;
    clo8777[3] = a8384;
    void *f8475 = encode_clo(clo8777);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8475;
    arg_buffer[3] = a8385;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8599 = encode_clo(alloc_clo(lam8599_fptr, 0));

void *lam8602_fptr() // lam8602
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8603 = arg_buffer[1];
    // reading env and args
    void *a8382 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8603))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8603))[4];
    // not do dummy comment
    void *length = (decode_clo(env8603))[3];
    // not do dummy comment
    void *_u43 = (decode_clo(env8603))[2];
    // not do dummy comment
    void *kont8474 = (decode_clo(env8603))[1];

    // if-clause
    bool if_guard8778 = is_true(a8382);
    if (if_guard8778)
    {
        mpz_t *mpzvar8779 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8779, "0", 10);
        void *xy8383 = encode_mpz(mpzvar8779);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8474);
        arg_buffer[2] = xy8383;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8474))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {
        mpz_t *mpzvar8780 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar8780, "1", 10);
        void *a8384 = encode_mpz(mpzvar8780);

        // creating new closure instance
        void **clo8782 = alloc_clo(lam8599_fptr, 4);

        // setting env list
        clo8782[1] = kont8474;
        clo8782[2] = _u43;
        clo8782[3] = length;
        clo8782[4] = a8384;
        void *f8476 = encode_clo(clo8782);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8476;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8602 = encode_clo(alloc_clo(lam8602_fptr, 0));

void *length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8604 = arg_buffer[1];
    // reading env and args
    void *kont8474 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment

    // creating new closure instance
    void **clo8784 = alloc_clo(lam8602_fptr, 5);

    // setting env list
    clo8784[1] = kont8474;
    clo8784[2] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo8784[3] = length;
    clo8784[4] = lst;
    clo8784[5] = cdr;
    void *f8477 = encode_clo(clo8784);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8477;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void *lam8605_fptr() // lam8605
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8606 = arg_buffer[1];
    // reading env and args
    void *xy8388 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8478 = (decode_clo(env8606))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8478);
    arg_buffer[2] = xy8388;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8478))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8605 = encode_clo(alloc_clo(lam8605_fptr, 0));

void *lam8607_fptr() // lam8607
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8608 = arg_buffer[1];
    // reading env and args
    void *a8392 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *a8390 = (decode_clo(env8608))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8608))[2];
    // not do dummy comment
    void *kont8478 = (decode_clo(env8608))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8478;
    arg_buffer[3] = a8390;
    arg_buffer[4] = a8392;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8607 = encode_clo(alloc_clo(lam8607_fptr, 0));

void *lam8609_fptr() // lam8609
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8610 = arg_buffer[1];
    // reading env and args
    void *a8391 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *map = (decode_clo(env8610))[5];
    // not do dummy comment
    void *a8390 = (decode_clo(env8610))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8610))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8610))[2];
    // not do dummy comment
    void *kont8478 = (decode_clo(env8610))[1];

    // creating new closure instance
    void **clo8786 = alloc_clo(lam8607_fptr, 3);

    // setting env list
    clo8786[1] = kont8478;
    clo8786[2] = cons;
    clo8786[3] = a8390;
    void *f8480 = encode_clo(clo8786);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8480;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8391;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // call next proc using a function pointer
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
    void *a8390 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8612))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8612))[5];
    // not do dummy comment
    void *map = (decode_clo(env8612))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8612))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8612))[2];
    // not do dummy comment
    void *kont8478 = (decode_clo(env8612))[1];

    // creating new closure instance
    void **clo8788 = alloc_clo(lam8609_fptr, 5);

    // setting env list
    clo8788[1] = kont8478;
    clo8788[2] = cons;
    clo8788[3] = proc;
    clo8788[4] = a8390;
    clo8788[5] = map;
    void *f8481 = encode_clo(clo8788);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8481;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8611 = encode_clo(alloc_clo(lam8611_fptr, 0));

void *lam8613_fptr() // lam8613
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8614 = arg_buffer[1];
    // reading env and args
    void *a8389 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8614))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8614))[5];
    // not do dummy comment
    void *map = (decode_clo(env8614))[4];
    // not do dummy comment
    void *proc = (decode_clo(env8614))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8614))[2];
    // not do dummy comment
    void *kont8478 = (decode_clo(env8614))[1];

    // creating new closure instance
    void **clo8790 = alloc_clo(lam8611_fptr, 6);

    // setting env list
    clo8790[1] = kont8478;
    clo8790[2] = cons;
    clo8790[3] = proc;
    clo8790[4] = map;
    clo8790[5] = lst;
    clo8790[6] = cdr;
    void *f8482 = encode_clo(clo8790);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8482;
    arg_buffer[3] = a8389;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8613 = encode_clo(alloc_clo(lam8613_fptr, 0));

void *lam8615_fptr() // lam8615
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8616 = arg_buffer[1];
    // reading env and args
    void *a8387 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8616))[8];
    // not do dummy comment
    void *map = (decode_clo(env8616))[7];
    // not do dummy comment
    void *proc = (decode_clo(env8616))[6];
    // not do dummy comment
    void *car = (decode_clo(env8616))[5];
    // not do dummy comment
    void *cons = (decode_clo(env8616))[4];
    // not do dummy comment
    void *kont8478 = (decode_clo(env8616))[3];
    // not do dummy comment
    void *list = (decode_clo(env8616))[2];
    // not do dummy comment
    void *cdr = (decode_clo(env8616))[1];

    // if-clause
    bool if_guard8791 = is_true(a8387);
    if (if_guard8791)
    {

        // creating new closure instance
        void **clo8793 = alloc_clo(lam8605_fptr, 1);

        // setting env list
        clo8793[1] = kont8478;
        void *f8479 = encode_clo(clo8793);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8479;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8795 = alloc_clo(lam8613_fptr, 6);

        // setting env list
        clo8795[1] = kont8478;
        clo8795[2] = cons;
        clo8795[3] = proc;
        clo8795[4] = map;
        clo8795[5] = lst;
        clo8795[6] = cdr;
        void *f8483 = encode_clo(clo8795);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8483;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8615 = encode_clo(alloc_clo(lam8615_fptr, 0));

void *map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8617 = arg_buffer[1];
    // reading env and args
    void *kont8478 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8797 = alloc_clo(lam8615_fptr, 8);

    // setting env list
    clo8797[1] = cdr;
    clo8797[2] = list;
    clo8797[3] = kont8478;
    clo8797[4] = cons;
    clo8797[5] = car;
    clo8797[6] = proc;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo8797[7] = map;
    clo8797[8] = lst;
    void *f8484 = encode_clo(clo8797);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8484;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void *lam8618_fptr() // lam8618
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8619 = arg_buffer[1];
    // reading env and args
    void *xy8394 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8485 = (decode_clo(env8619))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8485);
    arg_buffer[2] = xy8394;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8485))[0]);
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
    void *a8399 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8485 = (decode_clo(env8621))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8621))[2];
    // not do dummy comment
    void *a8397 = (decode_clo(env8621))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8485;
    arg_buffer[3] = a8397;
    arg_buffer[4] = a8399;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
    void *a8398 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8485 = (decode_clo(env8623))[5];
    // not do dummy comment
    void *op = (decode_clo(env8623))[4];
    // not do dummy comment
    void *filter = (decode_clo(env8623))[3];
    // not do dummy comment
    void *cons = (decode_clo(env8623))[2];
    // not do dummy comment
    void *a8397 = (decode_clo(env8623))[1];

    // creating new closure instance
    void **clo8799 = alloc_clo(lam8620_fptr, 3);

    // setting env list
    clo8799[1] = a8397;
    clo8799[2] = cons;
    clo8799[3] = kont8485;
    void *f8487 = encode_clo(clo8799);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8487;
    arg_buffer[3] = op;
    arg_buffer[4] = a8398;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8622 = encode_clo(alloc_clo(lam8622_fptr, 0));

void *lam8624_fptr() // lam8624
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8625 = arg_buffer[1];
    // reading env and args
    void *a8397 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8625))[6];
    // not do dummy comment
    void *lst = (decode_clo(env8625))[5];
    // not do dummy comment
    void *kont8485 = (decode_clo(env8625))[4];
    // not do dummy comment
    void *op = (decode_clo(env8625))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8625))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8625))[1];

    // creating new closure instance
    void **clo8801 = alloc_clo(lam8622_fptr, 5);

    // setting env list
    clo8801[1] = a8397;
    clo8801[2] = cons;
    clo8801[3] = filter;
    clo8801[4] = op;
    clo8801[5] = kont8485;
    void *f8488 = encode_clo(clo8801);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8488;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8624 = encode_clo(alloc_clo(lam8624_fptr, 0));

void *lam8626_fptr() // lam8626
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8627 = arg_buffer[1];
    // reading env and args
    void *a8400 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8485 = (decode_clo(env8627))[3];
    // not do dummy comment
    void *op = (decode_clo(env8627))[2];
    // not do dummy comment
    void *filter = (decode_clo(env8627))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8485;
    arg_buffer[3] = op;
    arg_buffer[4] = a8400;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8626 = encode_clo(alloc_clo(lam8626_fptr, 0));

void *lam8628_fptr() // lam8628
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8629 = arg_buffer[1];
    // reading env and args
    void *a8396 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8629))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8629))[6];
    // not do dummy comment
    void *kont8485 = (decode_clo(env8629))[5];
    // not do dummy comment
    void *op = (decode_clo(env8629))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8629))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8629))[2];
    // not do dummy comment
    void *car = (decode_clo(env8629))[1];

    // if-clause
    bool if_guard8802 = is_true(a8396);
    if (if_guard8802)
    {

        // creating new closure instance
        void **clo8804 = alloc_clo(lam8624_fptr, 6);

        // setting env list
        clo8804[1] = cons;
        clo8804[2] = filter;
        clo8804[3] = op;
        clo8804[4] = kont8485;
        clo8804[5] = lst;
        clo8804[6] = cdr;
        void *f8489 = encode_clo(clo8804);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8489;
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
        void **clo8806 = alloc_clo(lam8626_fptr, 3);

        // setting env list
        clo8806[1] = filter;
        clo8806[2] = op;
        clo8806[3] = kont8485;
        void *f8490 = encode_clo(clo8806);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8490;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8628 = encode_clo(alloc_clo(lam8628_fptr, 0));

void *lam8630_fptr() // lam8630
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8631 = arg_buffer[1];
    // reading env and args
    void *a8395 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8631))[7];
    // not do dummy comment
    void *lst = (decode_clo(env8631))[6];
    // not do dummy comment
    void *kont8485 = (decode_clo(env8631))[5];
    // not do dummy comment
    void *op = (decode_clo(env8631))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8631))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8631))[2];
    // not do dummy comment
    void *car = (decode_clo(env8631))[1];

    // creating new closure instance
    void **clo8808 = alloc_clo(lam8628_fptr, 7);

    // setting env list
    clo8808[1] = car;
    clo8808[2] = filter;
    clo8808[3] = cons;
    clo8808[4] = op;
    clo8808[5] = kont8485;
    clo8808[6] = lst;
    clo8808[7] = cdr;
    void *f8491 = encode_clo(clo8808);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8491;
    arg_buffer[3] = a8395;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
    void *a8393 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *lst = (decode_clo(env8633))[8];
    // not do dummy comment
    void *kont8485 = (decode_clo(env8633))[7];
    // not do dummy comment
    void *op = (decode_clo(env8633))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8633))[5];
    // not do dummy comment
    void *list = (decode_clo(env8633))[4];
    // not do dummy comment
    void *cdr = (decode_clo(env8633))[3];
    // not do dummy comment
    void *filter = (decode_clo(env8633))[2];
    // not do dummy comment
    void *car = (decode_clo(env8633))[1];

    // if-clause
    bool if_guard8809 = is_true(a8393);
    if (if_guard8809)
    {

        // creating new closure instance
        void **clo8811 = alloc_clo(lam8618_fptr, 1);

        // setting env list
        clo8811[1] = kont8485;
        void *f8486 = encode_clo(clo8811);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8486;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8813 = alloc_clo(lam8630_fptr, 7);

        // setting env list
        clo8813[1] = car;
        clo8813[2] = filter;
        clo8813[3] = cons;
        clo8813[4] = op;
        clo8813[5] = kont8485;
        clo8813[6] = lst;
        clo8813[7] = cdr;
        void *f8492 = encode_clo(clo8813);

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
}

void *lam8632 = encode_clo(alloc_clo(lam8632_fptr, 0));

void *filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8634 = arg_buffer[1];
    // reading env and args
    void *kont8485 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8815 = alloc_clo(lam8632_fptr, 8);

    // setting env list
    clo8815[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo8815[2] = filter;
    clo8815[3] = cdr;
    clo8815[4] = list;
    clo8815[5] = cons;
    clo8815[6] = op;
    clo8815[7] = kont8485;
    clo8815[8] = lst;
    void *f8493 = encode_clo(clo8815);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8493;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void *lam8635_fptr() // lam8635
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8636 = arg_buffer[1];
    // reading env and args
    void *a8405 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8494 = (decode_clo(env8636))[3];
    // not do dummy comment
    void *a8403 = (decode_clo(env8636))[2];
    // not do dummy comment
    void *drop = (decode_clo(env8636))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8494;
    arg_buffer[3] = a8403;
    arg_buffer[4] = a8405;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
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
    void *a8403 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *drop = (decode_clo(env8639))[4];
    // not do dummy comment
    void *n = (decode_clo(env8639))[3];
    // not do dummy comment
    void *_u45 = (decode_clo(env8639))[2];
    // not do dummy comment
    void *kont8494 = (decode_clo(env8639))[1];
    mpz_t *mpzvar8816 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8816, "1", 10);
    void *a8404 = encode_mpz(mpzvar8816);

    // creating new closure instance
    void **clo8818 = alloc_clo(lam8635_fptr, 3);

    // setting env list
    clo8818[1] = drop;
    clo8818[2] = a8403;
    clo8818[3] = kont8494;
    void *f8495 = encode_clo(clo8818);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8404);
    arg_buffer[1] = reinterpret_cast<void *>(f8495);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8495))[0]);
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
    void *a8402 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8641))[6];
    // not do dummy comment
    void *n = (decode_clo(env8641))[5];
    // not do dummy comment
    void *lst = (decode_clo(env8641))[4];
    // not do dummy comment
    void *drop = (decode_clo(env8641))[3];
    // not do dummy comment
    void *_u45 = (decode_clo(env8641))[2];
    // not do dummy comment
    void *kont8494 = (decode_clo(env8641))[1];

    // if-clause
    bool if_guard8819 = is_true(a8402);
    if (if_guard8819)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8494);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8494))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8821 = alloc_clo(lam8638_fptr, 4);

        // setting env list
        clo8821[1] = kont8494;
        clo8821[2] = _u45;
        clo8821[3] = n;
        clo8821[4] = drop;
        void *f8496 = encode_clo(clo8821);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8496;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8640 = encode_clo(alloc_clo(lam8640_fptr, 0));

void *drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8643 = arg_buffer[1];
    // reading env and args
    void *kont8494 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8822, "0", 10);
    void *a8401 = encode_mpz(mpzvar8822);

    // creating new closure instance
    void **clo8824 = alloc_clo(lam8640_fptr, 6);

    // setting env list
    clo8824[1] = kont8494;
    clo8824[2] = _u45;
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo8824[3] = drop;
    clo8824[4] = lst;
    clo8824[5] = n;
    clo8824[6] = cdr;
    void *f8497 = encode_clo(clo8824);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8401);
    arg_buffer[1] = reinterpret_cast<void *>(f8497);
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8497))[0]);
    function_ptr();
    return nullptr;
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void *lam8644_fptr() // lam8644
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8645 = arg_buffer[1];
    // reading env and args
    void *a8409 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8498 = (decode_clo(env8645))[3];
    // not do dummy comment
    void *a8407 = (decode_clo(env8645))[2];
    // not do dummy comment
    void *proc = (decode_clo(env8645))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = kont8498;
    arg_buffer[3] = a8407;
    arg_buffer[4] = a8409;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8644 = encode_clo(alloc_clo(lam8644_fptr, 0));

void *lam8646_fptr() // lam8646
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8647 = arg_buffer[1];
    // reading env and args
    void *a8408 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8498 = (decode_clo(env8647))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8647))[4];
    // not do dummy comment
    void *a8407 = (decode_clo(env8647))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8647))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8647))[1];

    // creating new closure instance
    void **clo8826 = alloc_clo(lam8644_fptr, 3);

    // setting env list
    clo8826[1] = proc;
    clo8826[2] = a8407;
    clo8826[3] = kont8498;
    void *f8499 = encode_clo(clo8826);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8499;
    arg_buffer[3] = proc;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8408;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8646 = encode_clo(alloc_clo(lam8646_fptr, 0));

void *lam8648_fptr() // lam8648
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8649 = arg_buffer[1];
    // reading env and args
    void *a8407 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8649))[6];
    // not do dummy comment
    void *kont8498 = (decode_clo(env8649))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8649))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8649))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8649))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8649))[1];

    // creating new closure instance
    void **clo8828 = alloc_clo(lam8646_fptr, 5);

    // setting env list
    clo8828[1] = acc;
    clo8828[2] = proc;
    clo8828[3] = a8407;
    clo8828[4] = foldr;
    clo8828[5] = kont8498;
    void *f8500 = encode_clo(clo8828);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8500;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8648 = encode_clo(alloc_clo(lam8648_fptr, 0));

void *lam8650_fptr() // lam8650
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8651 = arg_buffer[1];
    // reading env and args
    void *a8406 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8651))[7];
    // not do dummy comment
    void *kont8498 = (decode_clo(env8651))[6];
    // not do dummy comment
    void *car = (decode_clo(env8651))[5];
    // not do dummy comment
    void *foldr = (decode_clo(env8651))[4];
    // not do dummy comment
    void *lst = (decode_clo(env8651))[3];
    // not do dummy comment
    void *proc = (decode_clo(env8651))[2];
    // not do dummy comment
    void *acc = (decode_clo(env8651))[1];

    // if-clause
    bool if_guard8829 = is_true(a8406);
    if (if_guard8829)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8498);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8498))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8831 = alloc_clo(lam8648_fptr, 6);

        // setting env list
        clo8831[1] = acc;
        clo8831[2] = proc;
        clo8831[3] = lst;
        clo8831[4] = foldr;
        clo8831[5] = kont8498;
        clo8831[6] = cdr;
        void *f8501 = encode_clo(clo8831);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8501;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8650 = encode_clo(alloc_clo(lam8650_fptr, 0));

void *foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8652 = arg_buffer[1];
    // reading env and args
    void *kont8498 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // Dummy comment

    // creating new closure instance
    void **clo8833 = alloc_clo(lam8650_fptr, 7);

    // setting env list
    clo8833[1] = acc;
    clo8833[2] = proc;
    clo8833[3] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo8833[4] = foldr;
    clo8833[5] = car;
    clo8833[6] = kont8498;
    clo8833[7] = cdr;
    void *f8502 = encode_clo(clo8833);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8502;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void *lam8653_fptr() // lam8653
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8654 = arg_buffer[1];
    // reading env and args
    void *a8413 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8503 = (decode_clo(env8654))[3];
    // not do dummy comment
    void *a8411 = (decode_clo(env8654))[2];
    // not do dummy comment
    void *cons = (decode_clo(env8654))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8503;
    arg_buffer[3] = a8411;
    arg_buffer[4] = a8413;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
    void *a8412 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cons = (decode_clo(env8656))[5];
    // not do dummy comment
    void *append = (decode_clo(env8656))[4];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8656))[3];
    // not do dummy comment
    void *a8411 = (decode_clo(env8656))[2];
    // not do dummy comment
    void *lst2 = (decode_clo(env8656))[1];

    // creating new closure instance
    void **clo8835 = alloc_clo(lam8653_fptr, 3);

    // setting env list
    clo8835[1] = cons;
    clo8835[2] = a8411;
    clo8835[3] = kont8503;
    void *f8504 = encode_clo(clo8835);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = f8504;
    arg_buffer[3] = a8412;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
    void *a8411 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8658))[6];
    // not do dummy comment
    void *lst2 = (decode_clo(env8658))[5];
    // not do dummy comment
    void *lst1 = (decode_clo(env8658))[4];
    // not do dummy comment
    void *cons = (decode_clo(env8658))[3];
    // not do dummy comment
    void *append = (decode_clo(env8658))[2];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8658))[1];

    // creating new closure instance
    void **clo8837 = alloc_clo(lam8655_fptr, 5);

    // setting env list
    clo8837[1] = lst2;
    clo8837[2] = a8411;
    clo8837[3] = kont8503;
    clo8837[4] = append;
    clo8837[5] = cons;
    void *f8505 = encode_clo(clo8837);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8505;
    arg_buffer[3] = lst1;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8657 = encode_clo(alloc_clo(lam8657_fptr, 0));

void *lam8659_fptr() // lam8659
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8660 = arg_buffer[1];
    // reading env and args
    void *a8410 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *cdr = (decode_clo(env8660))[7];
    // not do dummy comment
    void *lst2 = (decode_clo(env8660))[6];
    // not do dummy comment
    void *cons = (decode_clo(env8660))[5];
    // not do dummy comment
    void *append = (decode_clo(env8660))[4];
    // not do dummy comment
    void *kont8503 = (decode_clo(env8660))[3];
    // not do dummy comment
    void *lst1 = (decode_clo(env8660))[2];
    // not do dummy comment
    void *car = (decode_clo(env8660))[1];

    // if-clause
    bool if_guard8838 = is_true(a8410);
    if (if_guard8838)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8503);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8503))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
    else
    {

        // creating new closure instance
        void **clo8840 = alloc_clo(lam8657_fptr, 6);

        // setting env list
        clo8840[1] = kont8503;
        clo8840[2] = append;
        clo8840[3] = cons;
        clo8840[4] = lst1;
        clo8840[5] = lst2;
        clo8840[6] = cdr;
        void *f8506 = encode_clo(clo8840);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8506;
        arg_buffer[3] = lst1;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // call next proc using a function pointer
        function_ptr();
        return nullptr;
    }
}

void *lam8659 = encode_clo(alloc_clo(lam8659_fptr, 0));

void *append_fptr() // append
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8661 = arg_buffer[1];
    // reading env and args
    void *kont8503 = arg_buffer[2];
    void *lst1 = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // Dummy comment

    // creating new closure instance
    void **clo8842 = alloc_clo(lam8659_fptr, 7);

    // setting env list
    clo8842[1] = car;
    clo8842[2] = lst1;
    clo8842[3] = kont8503;
    void *append = encode_clo(alloc_clo(append_fptr, 0));

    clo8842[4] = append;
    clo8842[5] = cons;
    clo8842[6] = lst2;
    clo8842[7] = cdr;
    void *f8507 = encode_clo(clo8842);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8507;
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
    void *_env8845 = arg_buffer[1];
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

    void *kont8843 = prim_car(lst);
    void *lst8846 = prim_cdr(lst);
    void *x8844 = apply_prim_hash(lst8846);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8843);
    arg_buffer[2] = x8844;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8843))[0]);
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
    void *_8662 = arg_buffer[1];
    // reading env and args
    void *kont8508 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8414 = prim_hash_u45ref(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8508);
    arg_buffer[2] = xy8414;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8508))[0]);
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
    void *_8663 = arg_buffer[1];
    // reading env and args
    void *kont8509 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    void *v = arg_buffer[5];
    // Dummy comment
    void *xy8415 = prim_hash_u45set(h, k, v);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8509);
    arg_buffer[2] = xy8415;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8509))[0]);
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
    void *_8664 = arg_buffer[1];
    // reading env and args
    void *kont8510 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8416 = prim_hash_u45keys(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8510);
    arg_buffer[2] = xy8416;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8510))[0]);
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
    void *_8665 = arg_buffer[1];
    // reading env and args
    void *kont8511 = arg_buffer[2];
    void *h = arg_buffer[3];
    void *k = arg_buffer[4];
    // Dummy comment
    void *xy8417 = prim_hash_u45has_u45key_u63(h, k);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8511);
    arg_buffer[2] = xy8417;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8511))[0]);
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
    void *_8666 = arg_buffer[1];
    // reading env and args
    void *kont8512 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8418 = prim_hash_u45count(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8512);
    arg_buffer[2] = xy8418;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8512))[0]);
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
    void *_env8849 = arg_buffer[1];
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

    void *kont8847 = prim_car(lst);
    void *lst8850 = prim_cdr(lst);
    void *x8848 = apply_prim_set(lst8850);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8847);
    arg_buffer[2] = x8848;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8847))[0]);
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
    void *_8667 = arg_buffer[1];
    // reading env and args
    void *kont8513 = arg_buffer[2];
    void *h = arg_buffer[3];
    // Dummy comment
    void *xy8419 = prim_set_u45_u62list(h);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8513);
    arg_buffer[2] = xy8419;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8513))[0]);
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
    void *_8668 = arg_buffer[1];
    // reading env and args
    void *kont8514 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // Dummy comment
    void *xy8420 = prim_list_u45_u62set(lst);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8514);
    arg_buffer[2] = xy8420;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8514))[0]);
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
    void *_8669 = arg_buffer[1];
    // reading env and args
    void *kont8515 = arg_buffer[2];
    void *s = arg_buffer[3];
    void *val = arg_buffer[4];
    // Dummy comment
    void *xy8421 = prim_set_u45add(s, val);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8515);
    arg_buffer[2] = xy8421;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8515))[0]);
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
    void *_8670 = arg_buffer[1];
    // reading env and args
    void *kont8516 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8422 = prim_string_u63(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8516);
    arg_buffer[2] = xy8422;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8516))[0]);
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
    void *_8671 = arg_buffer[1];
    // reading env and args
    void *kont8517 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8423 = prim_string_u45length(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8517);
    arg_buffer[2] = xy8423;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8517))[0]);
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
    void *_8672 = arg_buffer[1];
    // reading env and args
    void *kont8518 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *pos = arg_buffer[4];
    // Dummy comment
    void *xy8424 = prim_string_u45ref(str, pos);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8518);
    arg_buffer[2] = xy8424;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8518))[0]);
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
    void *_8673 = arg_buffer[1];
    // reading env and args
    void *kont8519 = arg_buffer[2];
    void *str = arg_buffer[3];
    void *start = arg_buffer[4];
    void *end = arg_buffer[5];
    // Dummy comment
    void *xy8425 = prim_substring(str, start, end);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8519);
    arg_buffer[2] = xy8425;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8519))[0]);
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
    void *_8674 = arg_buffer[1];
    // reading env and args
    void *kont8520 = arg_buffer[2];
    void *s1 = arg_buffer[3];
    void *s2 = arg_buffer[4];
    // Dummy comment
    void *xy8426 = prim_string_u45append(s1, s2);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8520);
    arg_buffer[2] = xy8426;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8520))[0]);
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
    void *_8675 = arg_buffer[1];
    // reading env and args
    void *kont8521 = arg_buffer[2];
    void *str = arg_buffer[3];
    // Dummy comment
    void *xy8427 = prim_string_u45_u62list(str);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8521);
    arg_buffer[2] = xy8427;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void *call_u45foldl_fptr() // call-foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8677 = arg_buffer[1];
    // reading env and args
    void *kont8522 = arg_buffer[2];
    void *f = arg_buffer[3];
    void *lst = arg_buffer[4];
    // Dummy comment
    mpz_t *mpzvar8851 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8851, "0", 10);
    void *a8428 = encode_mpz(mpzvar8851);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8522;
    arg_buffer[3] = f;
    arg_buffer[4] = a8428;
    arg_buffer[5] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // call next proc using a function pointer
    function_ptr();

    return nullptr;
}

void *call_u45foldl = encode_clo(alloc_clo(call_u45foldl_fptr, 0));

void *lam8678_fptr() // lam8678
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8679 = arg_buffer[1];
    // reading env and args
    void *a8433 = arg_buffer[2];
    // Dummy comment
    // not do dummy comment
    void *kont8523 = (decode_clo(env8679))[3];
    // not do dummy comment
    void *call_u45foldl = (decode_clo(env8679))[2];
    // not do dummy comment
    void *_u43 = (decode_clo(env8679))[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(call_u45foldl);
    arg_buffer[2] = kont8523;
    arg_buffer[3] = _u43;
    arg_buffer[4] = a8433;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45foldl))[0]);
    // call next proc using a function pointer
    function_ptr();
    return nullptr;
}

void *lam8678 = encode_clo(alloc_clo(lam8678_fptr, 0));

void *brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8684 = arg_buffer[1];
    // reading env and args
    void *kont8523 = arg_buffer[2];
    // Dummy comment
    mpz_t *mpzvar8852 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8852, "1", 10);
    void *a8429 = encode_mpz(mpzvar8852);
    mpz_t *mpzvar8853 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8853, "2", 10);
    void *a8430 = encode_mpz(mpzvar8853);
    mpz_t *mpzvar8854 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8854, "3", 10);
    void *a8431 = encode_mpz(mpzvar8854);
    mpz_t *mpzvar8855 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar8855, "4", 10);
    void *a8432 = encode_mpz(mpzvar8855);

    // creating new closure instance
    void **clo8857 = alloc_clo(lam8678_fptr, 3);

    // setting env list
    clo8857[1] = _u43;
    clo8857[2] = call_u45foldl;
    clo8857[3] = kont8523;
    void *f8524 = encode_clo(clo8857);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8524;
    arg_buffer[3] = a8429;
    arg_buffer[4] = a8430;
    arg_buffer[5] = a8431;
    arg_buffer[6] = a8432;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
