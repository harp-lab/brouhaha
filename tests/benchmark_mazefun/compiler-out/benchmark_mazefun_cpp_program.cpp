#include <stdio.h>
#include <string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void _u43_fptr() // +
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9348 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9346 = prim_car(lst);
    void *lst9349 = prim_cdr(lst);
    void *x9347 = apply_prim__u43(lst9349);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9346);
    arg_buffer[2] = x9347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9346))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr() // -
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9352 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9350 = prim_car(lst);
    void *lst9353 = prim_cdr(lst);
    void *x9351 = apply_prim__u45(lst9353);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9350);
    arg_buffer[2] = x9351;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9350))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr() // *
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9356 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9354 = prim_car(lst);
    void *lst9357 = prim_cdr(lst);
    void *x9355 = apply_prim__u42(lst9357);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9354);
    arg_buffer[2] = x9355;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9354))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr() // /
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9360 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9358 = prim_car(lst);
    void *lst9361 = prim_cdr(lst);
    void *x9359 = apply_prim__u47(lst9361);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9358);
    arg_buffer[2] = x9359;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9358))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr() // =
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9364 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9362 = prim_car(lst);
    void *lst9365 = prim_cdr(lst);
    void *x9363 = apply_prim__u61(lst9365);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9362);
    arg_buffer[2] = x9363;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9362))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr() // >
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9368 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9366 = prim_car(lst);
    void *lst9369 = prim_cdr(lst);
    void *x9367 = apply_prim__u62(lst9369);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9366);
    arg_buffer[2] = x9367;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9366))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr() // <
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9372 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9370 = prim_car(lst);
    void *lst9373 = prim_cdr(lst);
    void *x9371 = apply_prim__u60(lst9373);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9370);
    arg_buffer[2] = x9371;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9370))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr() // <=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9376 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9374 = prim_car(lst);
    void *lst9377 = prim_cdr(lst);
    void *x9375 = apply_prim__u60_u61(lst9377);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9374);
    arg_buffer[2] = x9375;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9374))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr() // >=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9380 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9378 = prim_car(lst);
    void *lst9381 = prim_cdr(lst);
    void *x9379 = apply_prim__u62_u61(lst9381);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9378);
    arg_buffer[2] = x9379;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9378))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *_u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr() // modulo
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9384 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9382 = prim_car(lst);
    void *lst9385 = prim_cdr(lst);
    void *x9383 = apply_prim_modulo(lst9385);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9382);
    arg_buffer[2] = x9383;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9382))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr() // null?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9388 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9386 = prim_car(lst);
    void *lst9389 = prim_cdr(lst);
    void *x9387 = apply_prim_null_u63(lst9389);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9386);
    arg_buffer[2] = x9387;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9386))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr() // equal?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9392 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9390 = prim_car(lst);
    void *lst9393 = prim_cdr(lst);
    void *x9391 = apply_prim_equal_u63(lst9393);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9390);
    arg_buffer[2] = x9391;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9390))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr() // eq?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9396 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9394 = prim_car(lst);
    void *lst9397 = prim_cdr(lst);
    void *x9395 = apply_prim_eq_u63(lst9397);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9394);
    arg_buffer[2] = x9395;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9394))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr() // cons
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9400 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9398 = prim_car(lst);
    void *lst9401 = prim_cdr(lst);
    void *x9399 = apply_prim_cons(lst9401);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9398);
    arg_buffer[2] = x9399;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9398))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr() // car
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9404 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9402 = prim_car(lst);
    void *lst9405 = prim_cdr(lst);
    void *x9403 = apply_prim_car(lst9405);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9402);
    arg_buffer[2] = x9403;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9402))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr() // cdr
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9408 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9406 = prim_car(lst);
    void *lst9409 = prim_cdr(lst);
    void *x9407 = apply_prim_cdr(lst9409);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9406);
    arg_buffer[2] = x9407;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9406))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr() // float->int
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9412 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9410 = prim_car(lst);
    void *lst9413 = prim_cdr(lst);
    void *x9411 = apply_prim_float_u45_u62int(lst9413);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9410);
    arg_buffer[2] = x9411;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9410))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr() // int->float
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9416 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9414 = prim_car(lst);
    void *lst9417 = prim_cdr(lst);
    void *x9415 = apply_prim_int_u45_u62float(lst9417);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9414);
    arg_buffer[2] = x9415;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9414))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr() // hash
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9420 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9418 = prim_car(lst);
    void *lst9421 = prim_cdr(lst);
    void *x9419 = apply_prim_hash(lst9421);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9418);
    arg_buffer[2] = x9419;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9418))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr() // hash-ref
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9424 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9422 = prim_car(lst);
    void *lst9425 = prim_cdr(lst);
    void *x9423 = apply_prim_hash_u45ref(lst9425);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9422);
    arg_buffer[2] = x9423;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9422))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr() // hash-set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9428 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9426 = prim_car(lst);
    void *lst9429 = prim_cdr(lst);
    void *x9427 = apply_prim_hash_u45set(lst9429);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9426);
    arg_buffer[2] = x9427;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9426))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr() // hash-keys
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9432 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9430 = prim_car(lst);
    void *lst9433 = prim_cdr(lst);
    void *x9431 = apply_prim_hash_u45keys(lst9433);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9430);
    arg_buffer[2] = x9431;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9430))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9436 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9434 = prim_car(lst);
    void *lst9437 = prim_cdr(lst);
    void *x9435 = apply_prim_hash_u45has_u45key_u63(lst9437);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9434);
    arg_buffer[2] = x9435;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9434))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr() // hash-count
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9440 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9438 = prim_car(lst);
    void *lst9441 = prim_cdr(lst);
    void *x9439 = apply_prim_hash_u45count(lst9441);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9438);
    arg_buffer[2] = x9439;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9438))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr() // set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9444 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9442 = prim_car(lst);
    void *lst9445 = prim_cdr(lst);
    void *x9443 = apply_prim_set(lst9445);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9442);
    arg_buffer[2] = x9443;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9442))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr() // set->list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9448 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9446 = prim_car(lst);
    void *lst9449 = prim_cdr(lst);
    void *x9447 = apply_prim_set_u45_u62list(lst9449);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9446);
    arg_buffer[2] = x9447;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9446))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr() // list->set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9452 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9450 = prim_car(lst);
    void *lst9453 = prim_cdr(lst);
    void *x9451 = apply_prim_list_u45_u62set(lst9453);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9450);
    arg_buffer[2] = x9451;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9450))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr() // set-add
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9456 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9454 = prim_car(lst);
    void *lst9457 = prim_cdr(lst);
    void *x9455 = apply_prim_set_u45add(lst9457);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9454);
    arg_buffer[2] = x9455;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9454))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr() // set-member?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9460 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9458 = prim_car(lst);
    void *lst9461 = prim_cdr(lst);
    void *x9459 = apply_prim_set_u45member_u63(lst9461);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9458);
    arg_buffer[2] = x9459;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9458))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr() // set-remove
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9464 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9462 = prim_car(lst);
    void *lst9465 = prim_cdr(lst);
    void *x9463 = apply_prim_set_u45remove(lst9465);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9462);
    arg_buffer[2] = x9463;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9462))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr() // set-count
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9468 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9466 = prim_car(lst);
    void *lst9469 = prim_cdr(lst);
    void *x9467 = apply_prim_set_u45count(lst9469);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9466);
    arg_buffer[2] = x9467;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9466))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr() // string?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9472 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9470 = prim_car(lst);
    void *lst9473 = prim_cdr(lst);
    void *x9471 = apply_prim_string_u63(lst9473);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9470);
    arg_buffer[2] = x9471;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9470))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr() // string-length
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9476 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9474 = prim_car(lst);
    void *lst9477 = prim_cdr(lst);
    void *x9475 = apply_prim_string_u45length(lst9477);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9474);
    arg_buffer[2] = x9475;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9474))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr() // string-ref
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9480 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9478 = prim_car(lst);
    void *lst9481 = prim_cdr(lst);
    void *x9479 = apply_prim_string_u45ref(lst9481);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9478);
    arg_buffer[2] = x9479;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9478))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr() // substring
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9484 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9482 = prim_car(lst);
    void *lst9485 = prim_cdr(lst);
    void *x9483 = apply_prim_substring(lst9485);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9482);
    arg_buffer[2] = x9483;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9482))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr() // string-append
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9488 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9486 = prim_car(lst);
    void *lst9489 = prim_cdr(lst);
    void *x9487 = apply_prim_string_u45append(lst9489);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9486);
    arg_buffer[2] = x9487;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9486))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr() // string->list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9492 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9490 = prim_car(lst);
    void *lst9493 = prim_cdr(lst);
    void *x9491 = apply_prim_string_u45_u62list(lst9493);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9490);
    arg_buffer[2] = x9491;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9490))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr() // exact-floor
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9496 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9494 = prim_car(lst);
    void *lst9497 = prim_cdr(lst);
    void *x9495 = apply_prim_exact_u45floor(lst9497);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9494);
    arg_buffer[2] = x9495;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9494))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr() // exact-ceiling
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9500 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9498 = prim_car(lst);
    void *lst9501 = prim_cdr(lst);
    void *x9499 = apply_prim_exact_u45ceiling(lst9501);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9498);
    arg_buffer[2] = x9499;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9498))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr() // exact-round
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9504 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9502 = prim_car(lst);
    void *lst9505 = prim_cdr(lst);
    void *x9503 = apply_prim_exact_u45round(lst9505);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9502);
    arg_buffer[2] = x9503;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9502))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr() // abs
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9508 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9506 = prim_car(lst);
    void *lst9509 = prim_cdr(lst);
    void *x9507 = apply_prim_abs(lst9509);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9506);
    arg_buffer[2] = x9507;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9506))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr() // max
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9512 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9510 = prim_car(lst);
    void *lst9513 = prim_cdr(lst);
    void *x9511 = apply_prim_max(lst9513);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9510);
    arg_buffer[2] = x9511;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9510))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr() // min
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9516 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9514 = prim_car(lst);
    void *lst9517 = prim_cdr(lst);
    void *x9515 = apply_prim_min(lst9517);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9514);
    arg_buffer[2] = x9515;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9514))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr() // expt
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9520 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9518 = prim_car(lst);
    void *lst9521 = prim_cdr(lst);
    void *x9519 = apply_prim_expt(lst9521);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9518);
    arg_buffer[2] = x9519;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9518))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr() // sqrt
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9524 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9522 = prim_car(lst);
    void *lst9525 = prim_cdr(lst);
    void *x9523 = apply_prim_sqrt(lst9525);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9522);
    arg_buffer[2] = x9523;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9522))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr() // remainder
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9528 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9526 = prim_car(lst);
    void *lst9529 = prim_cdr(lst);
    void *x9527 = apply_prim_remainder(lst9529);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9526);
    arg_buffer[2] = x9527;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9526))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr() // quotient
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9532 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9530 = prim_car(lst);
    void *lst9533 = prim_cdr(lst);
    void *x9531 = apply_prim_quotient(lst9533);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9530);
    arg_buffer[2] = x9531;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9530))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr() // random
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9536 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9534 = prim_car(lst);
    void *lst9537 = prim_cdr(lst);
    void *x9535 = apply_prim_random(lst9537);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9534);
    arg_buffer[2] = x9535;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9534))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr() // symbol?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9540 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9538 = prim_car(lst);
    void *lst9541 = prim_cdr(lst);
    void *x9539 = apply_prim_symbol_u63(lst9541);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9538);
    arg_buffer[2] = x9539;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9538))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr() // pair?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9544 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9542 = prim_car(lst);
    void *lst9545 = prim_cdr(lst);
    void *x9543 = apply_prim_pair_u63(lst9545);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9542);
    arg_buffer[2] = x9543;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9542))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr() // positive?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9548 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9546 = prim_car(lst);
    void *lst9549 = prim_cdr(lst);
    void *x9547 = apply_prim_positive_u63(lst9549);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9546);
    arg_buffer[2] = x9547;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9546))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr() // negative?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9552 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *lst = nullptr;
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

    void *kont9550 = prim_car(lst);
    void *lst9553 = prim_cdr(lst);
    void *x9551 = apply_prim_negative_u63(lst9553);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont9550);
    arg_buffer[2] = x9551;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9550))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr() // list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8820 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *x = nullptr;
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

    void *kont8560 = prim_car(x);
    void *x8818 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8560);
    arg_buffer[2] = x8818;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8560))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list = encode_clo(alloc_clo(list_fptr, 0));

void lam8821_fptr() // lam8821
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8822 = arg_buffer[1];
    // reading env and args
    void *a8317 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8822);
    void *a8315 = decode_clo_array[3];
    void *kont8561 = decode_clo_array[2];
    void *equal_u63 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8561;
    arg_buffer[3] = a8315;
    arg_buffer[4] = a8317;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8821 = encode_clo(alloc_clo(lam8821_fptr, 0));

void even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8825 = arg_buffer[1];
    // reading env and args
    void *kont8561 = arg_buffer[2];
    void *x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9554 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9554, "0", 10);
    void *a8315 = encode_mpz(mpzvar9554);
    mpz_t *mpzvar9555 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9555, "2", 10);
    void *a8316 = encode_mpz(mpzvar9555);

    // creating new closure instance
    void **clo9556 = alloc_clo(lam8821_fptr, 3);

    // setting env list
    clo9556[1] = equal_u63;
    clo9556[2] = kont8561;
    clo9556[3] = a8315;
    void *f8562 = encode_clo(clo9556);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8562;
    arg_buffer[3] = x;
    arg_buffer[4] = a8316;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8826_fptr() // lam8826
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8827 = arg_buffer[1];
    // reading env and args
    void *a8320 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8827);
    void *a8318 = decode_clo_array[3];
    void *equal_u63 = decode_clo_array[2];
    void *kont8563 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = kont8563;
    arg_buffer[3] = a8318;
    arg_buffer[4] = a8320;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8826 = encode_clo(alloc_clo(lam8826_fptr, 0));

void odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8830 = arg_buffer[1];
    // reading env and args
    void *kont8563 = arg_buffer[2];
    void *x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9557 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9557, "1", 10);
    void *a8318 = encode_mpz(mpzvar9557);
    mpz_t *mpzvar9558 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9558, "2", 10);
    void *a8319 = encode_mpz(mpzvar9558);

    // creating new closure instance
    void **clo9559 = alloc_clo(lam8826_fptr, 3);

    // setting env list
    clo9559[1] = kont8563;
    clo9559[2] = equal_u63;
    clo9559[3] = a8318;
    void *f8564 = encode_clo(clo9559);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(modulo);
    arg_buffer[2] = f8564;
    arg_buffer[3] = x;
    arg_buffer[4] = a8319;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam8831_fptr() // lam8831
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8832 = arg_buffer[1];
    // reading env and args
    void *xy8323 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8832);
    void *kont8565 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8565);
    arg_buffer[2] = xy8323;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8565))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8831 = encode_clo(alloc_clo(lam8831_fptr, 0));

void lam8833_fptr() // lam8833
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8834 = arg_buffer[1];
    // reading env and args
    void *a8326 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8834);
    void *a8324 = decode_clo_array[3];
    void *kont8565 = decode_clo_array[2];
    void *list_u45ref = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45ref);
    arg_buffer[2] = kont8565;
    arg_buffer[3] = a8324;
    arg_buffer[4] = a8326;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8833 = encode_clo(alloc_clo(lam8833_fptr, 0));

void lam8836_fptr() // lam8836
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8837 = arg_buffer[1];
    // reading env and args
    void *a8324 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8837);
    void *n = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *kont8565 = decode_clo_array[2];
    void *list_u45ref = decode_clo_array[1];
    mpz_t *mpzvar9560 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9560, "1", 10);
    void *a8325 = encode_mpz(mpzvar9560);

    // creating new closure instance
    void **clo9561 = alloc_clo(lam8833_fptr, 3);

    // setting env list
    clo9561[1] = list_u45ref;
    clo9561[2] = kont8565;
    clo9561[3] = a8324;
    void *f8567 = encode_clo(clo9561);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8567;
    arg_buffer[3] = n;
    arg_buffer[4] = a8325;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8836 = encode_clo(alloc_clo(lam8836_fptr, 0));

void lam8838_fptr() // lam8838
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8839 = arg_buffer[1];
    // reading env and args
    void *a8322 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8839);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *_u45 = decode_clo_array[5];
    void *kont8565 = decode_clo_array[4];
    void *list_u45ref = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9562 = is_true(a8322);
    if (if_guard9562)
    {

        // creating new closure instance
        void **clo9563 = alloc_clo(lam8831_fptr, 1);

        // setting env list
        clo9563[1] = kont8565;
        void *f8566 = encode_clo(clo9563);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8566;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9564 = alloc_clo(lam8836_fptr, 4);

        // setting env list
        clo9564[1] = list_u45ref;
        clo9564[2] = kont8565;
        clo9564[3] = _u45;
        clo9564[4] = n;
        void *f8568 = encode_clo(clo9564);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8568;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8838 = encode_clo(alloc_clo(lam8838_fptr, 0));

void list_u45ref_fptr() // list-ref
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8841 = arg_buffer[1];
    // reading env and args
    void *kont8565 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9565 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9565, "0", 10);
    void *a8321 = encode_mpz(mpzvar9565);

    // creating new closure instance
    void **clo9566 = alloc_clo(lam8838_fptr, 7);

    // setting env list
    clo9566[1] = car;
    clo9566[2] = n;
    void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

    clo9566[3] = list_u45ref;
    clo9566[4] = kont8565;
    clo9566[5] = _u45;
    clo9566[6] = lst;
    clo9566[7] = cdr;
    void *f8569 = encode_clo(clo9566);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8569;
    arg_buffer[3] = a8321;
    arg_buffer[4] = n;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8842_fptr() // lam8842
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8843 = arg_buffer[1];
    // reading env and args
    void *xy8328 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8843);
    void *f8574 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8574);
    arg_buffer[2] = xy8328;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8574))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8842 = encode_clo(alloc_clo(lam8842_fptr, 0));

void lam8844_fptr() // lam8844
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8845 = arg_buffer[1];
    // reading env and args
    void *xy8329 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8845);
    void *f8574 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8574);
    arg_buffer[2] = xy8329;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8574))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8844 = encode_clo(alloc_clo(lam8844_fptr, 0));

void lam8847_fptr() // lam8847
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8848 = arg_buffer[1];
    // reading env and args
    void *a8334 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8848);
    void *kont8570 = decode_clo_array[3];
    void *member = decode_clo_array[2];
    void *item = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member);
    arg_buffer[2] = kont8570;
    arg_buffer[3] = item;
    arg_buffer[4] = a8334;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8847 = encode_clo(alloc_clo(lam8847_fptr, 0));

void lam8849_fptr() // lam8849
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8850 = arg_buffer[1];
    // reading env and args
    void *a8333 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8850);
    void *member = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *item = decode_clo_array[3];
    void *kont8570 = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // if-clause
    bool if_guard9567 = is_true(a8333);
    if (if_guard9567)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8570);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8570))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9568 = alloc_clo(lam8847_fptr, 3);

        // setting env list
        clo9568[1] = item;
        clo9568[2] = member;
        clo9568[3] = kont8570;
        void *f8571 = encode_clo(clo9568);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8571;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8849 = encode_clo(alloc_clo(lam8849_fptr, 0));

void lam8851_fptr() // lam8851
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8852 = arg_buffer[1];
    // reading env and args
    void *a8332 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8852);
    void *member = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *item = decode_clo_array[4];
    void *equal_u63 = decode_clo_array[3];
    void *kont8570 = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9569 = alloc_clo(lam8849_fptr, 5);

    // setting env list
    clo9569[1] = cdr;
    clo9569[2] = kont8570;
    clo9569[3] = item;
    clo9569[4] = lst;
    clo9569[5] = member;
    void *f8572 = encode_clo(clo9569);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8572;
    arg_buffer[3] = item;
    arg_buffer[4] = a8332;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8851 = encode_clo(alloc_clo(lam8851_fptr, 0));

void lam8853_fptr() // lam8853
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8854 = arg_buffer[1];
    // reading env and args
    void *a8330 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8854);
    void *member = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *item = decode_clo_array[5];
    void *equal_u63 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *kont8570 = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // if-clause
    bool if_guard9570 = is_true(a8330);
    if (if_guard9570)
    {
        void *xy8331 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8570);
        arg_buffer[2] = xy8331;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8570))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9571 = alloc_clo(lam8851_fptr, 6);

        // setting env list
        clo9571[1] = cdr;
        clo9571[2] = kont8570;
        clo9571[3] = equal_u63;
        clo9571[4] = item;
        clo9571[5] = lst;
        clo9571[6] = member;
        void *f8573 = encode_clo(clo9571);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8573;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8853 = encode_clo(alloc_clo(lam8853_fptr, 0));

void lam8855_fptr() // lam8855
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8856 = arg_buffer[1];
    // reading env and args
    void *a8327 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8856);
    void *member = decode_clo_array[8];
    void *lst = decode_clo_array[7];
    void *null_u63 = decode_clo_array[6];
    void *item = decode_clo_array[5];
    void *equal_u63 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *kont8570 = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9572 = alloc_clo(lam8853_fptr, 7);

    // setting env list
    clo9572[1] = cdr;
    clo9572[2] = kont8570;
    clo9572[3] = car;
    clo9572[4] = equal_u63;
    clo9572[5] = item;
    clo9572[6] = lst;
    clo9572[7] = member;
    void *f8574 = encode_clo(clo9572);

    // if-clause
    bool if_guard9573 = is_true(a8327);
    if (if_guard9573)
    {

        // creating new closure instance
        void **clo9574 = alloc_clo(lam8842_fptr, 1);

        // setting env list
        clo9574[1] = f8574;
        void *f8575 = encode_clo(clo9574);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(null_u63);
        arg_buffer[2] = f8575;
        arg_buffer[3] = item;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9575 = alloc_clo(lam8844_fptr, 1);

        // setting env list
        clo9575[1] = f8574;
        void *f8576 = encode_clo(clo9575);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(null_u63);
        arg_buffer[2] = f8576;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8855 = encode_clo(alloc_clo(lam8855_fptr, 0));

void member_fptr() // member
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8857 = arg_buffer[1];
    // reading env and args
    void *kont8570 = arg_buffer[2];
    void *item = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9576 = alloc_clo(lam8855_fptr, 8);

    // setting env list
    clo9576[1] = cdr;
    clo9576[2] = kont8570;
    clo9576[3] = car;
    clo9576[4] = equal_u63;
    clo9576[5] = item;
    clo9576[6] = null_u63;
    clo9576[7] = lst;
    void *member = encode_clo(alloc_clo(member_fptr, 0));

    clo9576[8] = member;
    void *f8577 = encode_clo(clo9576);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8577;
    arg_buffer[3] = item;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *member = encode_clo(alloc_clo(member_fptr, 0));

void lam8860_fptr() // lam8860
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8861 = arg_buffer[1];
    // reading env and args
    void *a8340 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8861);
    void *kont8578 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *member_u63 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member_u63);
    arg_buffer[2] = kont8578;
    arg_buffer[3] = x;
    arg_buffer[4] = a8340;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8860 = encode_clo(alloc_clo(lam8860_fptr, 0));

void lam8862_fptr() // lam8862
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8863 = arg_buffer[1];
    // reading env and args
    void *a8338 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8863);
    void *cdr = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *kont8578 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *member_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9577 = is_true(a8338);
    if (if_guard9577)
    {
        void *xy8339 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8578);
        arg_buffer[2] = xy8339;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8578))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9578 = alloc_clo(lam8860_fptr, 3);

        // setting env list
        clo9578[1] = member_u63;
        clo9578[2] = x;
        clo9578[3] = kont8578;
        void *f8579 = encode_clo(clo9578);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8579;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8862 = encode_clo(alloc_clo(lam8862_fptr, 0));

void lam8864_fptr() // lam8864
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8865 = arg_buffer[1];
    // reading env and args
    void *a8337 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8865);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *x = decode_clo_array[4];
    void *member_u63 = decode_clo_array[3];
    void *kont8578 = decode_clo_array[2];
    void *equal_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9579 = alloc_clo(lam8862_fptr, 5);

    // setting env list
    clo9579[1] = member_u63;
    clo9579[2] = x;
    clo9579[3] = kont8578;
    clo9579[4] = lst;
    clo9579[5] = cdr;
    void *f8580 = encode_clo(clo9579);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8580;
    arg_buffer[3] = a8337;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8864 = encode_clo(alloc_clo(lam8864_fptr, 0));

void lam8866_fptr() // lam8866
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8867 = arg_buffer[1];
    // reading env and args
    void *a8335 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8867);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *x = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *member_u63 = decode_clo_array[3];
    void *kont8578 = decode_clo_array[2];
    void *equal_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9580 = is_true(a8335);
    if (if_guard9580)
    {
        void *xy8336 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8578);
        arg_buffer[2] = xy8336;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8578))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9581 = alloc_clo(lam8864_fptr, 6);

        // setting env list
        clo9581[1] = equal_u63;
        clo9581[2] = kont8578;
        clo9581[3] = member_u63;
        clo9581[4] = x;
        clo9581[5] = lst;
        clo9581[6] = cdr;
        void *f8581 = encode_clo(clo9581);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8581;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8866 = encode_clo(alloc_clo(lam8866_fptr, 0));

void member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8868 = arg_buffer[1];
    // reading env and args
    void *kont8578 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9582 = alloc_clo(lam8866_fptr, 7);

    // setting env list
    clo9582[1] = equal_u63;
    clo9582[2] = kont8578;
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo9582[3] = member_u63;
    clo9582[4] = car;
    clo9582[5] = x;
    clo9582[6] = lst;
    clo9582[7] = cdr;
    void *f8582 = encode_clo(clo9582);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8582;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8870_fptr() // lam8870
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8871 = arg_buffer[1];
    // reading env and args
    void *a8345 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8871);
    void *_u43 = decode_clo_array[3];
    void *kont8583 = decode_clo_array[2];
    void *a8343 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u43);
    arg_buffer[2] = kont8583;
    arg_buffer[3] = a8343;
    arg_buffer[4] = a8345;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8870 = encode_clo(alloc_clo(lam8870_fptr, 0));

void lam8872_fptr() // lam8872
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8873 = arg_buffer[1];
    // reading env and args
    void *a8344 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8873);
    void *length = decode_clo_array[4];
    void *_u43 = decode_clo_array[3];
    void *kont8583 = decode_clo_array[2];
    void *a8343 = decode_clo_array[1];

    // creating new closure instance
    void **clo9583 = alloc_clo(lam8870_fptr, 3);

    // setting env list
    clo9583[1] = a8343;
    clo9583[2] = kont8583;
    clo9583[3] = _u43;
    void *f8584 = encode_clo(clo9583);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8584;
    arg_buffer[3] = a8344;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8872 = encode_clo(alloc_clo(lam8872_fptr, 0));

void lam8875_fptr() // lam8875
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8876 = arg_buffer[1];
    // reading env and args
    void *a8341 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8876);
    void *cdr = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *length = decode_clo_array[3];
    void *_u43 = decode_clo_array[2];
    void *kont8583 = decode_clo_array[1];

    // if-clause
    bool if_guard9584 = is_true(a8341);
    if (if_guard9584)
    {
        mpz_t *mpzvar9585 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9585, "0", 10);
        void *xy8342 = encode_mpz(mpzvar9585);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8583);
        arg_buffer[2] = xy8342;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8583))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        mpz_t *mpzvar9586 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9586, "1", 10);
        void *a8343 = encode_mpz(mpzvar9586);

        // creating new closure instance
        void **clo9587 = alloc_clo(lam8872_fptr, 4);

        // setting env list
        clo9587[1] = a8343;
        clo9587[2] = kont8583;
        clo9587[3] = _u43;
        clo9587[4] = length;
        void *f8585 = encode_clo(clo9587);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8585;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8875 = encode_clo(alloc_clo(lam8875_fptr, 0));

void length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8877 = arg_buffer[1];
    // reading env and args
    void *kont8583 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9588 = alloc_clo(lam8875_fptr, 5);

    // setting env list
    clo9588[1] = kont8583;
    clo9588[2] = _u43;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo9588[3] = length;
    clo9588[4] = lst;
    clo9588[5] = cdr;
    void *f8586 = encode_clo(clo9588);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8586;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam8878_fptr() // lam8878
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8879 = arg_buffer[1];
    // reading env and args
    void *xy8347 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8879);
    void *kont8587 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8587);
    arg_buffer[2] = xy8347;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8587))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8878 = encode_clo(alloc_clo(lam8878_fptr, 0));

void lam8880_fptr() // lam8880
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8881 = arg_buffer[1];
    // reading env and args
    void *a8351 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8881);
    void *kont8587 = decode_clo_array[3];
    void *a8349 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8587;
    arg_buffer[3] = a8349;
    arg_buffer[4] = a8351;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8880 = encode_clo(alloc_clo(lam8880_fptr, 0));

void lam8882_fptr() // lam8882
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8883 = arg_buffer[1];
    // reading env and args
    void *a8350 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8883);
    void *kont8587 = decode_clo_array[5];
    void *a8349 = decode_clo_array[4];
    void *map = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9589 = alloc_clo(lam8880_fptr, 3);

    // setting env list
    clo9589[1] = cons;
    clo9589[2] = a8349;
    clo9589[3] = kont8587;
    void *f8589 = encode_clo(clo9589);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8589;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8350;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8882 = encode_clo(alloc_clo(lam8882_fptr, 0));

void lam8884_fptr() // lam8884
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8885 = arg_buffer[1];
    // reading env and args
    void *a8349 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8885);
    void *cdr = decode_clo_array[6];
    void *kont8587 = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *map = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9590 = alloc_clo(lam8882_fptr, 5);

    // setting env list
    clo9590[1] = cons;
    clo9590[2] = proc;
    clo9590[3] = map;
    clo9590[4] = a8349;
    clo9590[5] = kont8587;
    void *f8590 = encode_clo(clo9590);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8590;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8884 = encode_clo(alloc_clo(lam8884_fptr, 0));

void lam8886_fptr() // lam8886
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8887 = arg_buffer[1];
    // reading env and args
    void *a8348 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8887);
    void *cdr = decode_clo_array[6];
    void *kont8587 = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *map = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9591 = alloc_clo(lam8884_fptr, 6);

    // setting env list
    clo9591[1] = cons;
    clo9591[2] = proc;
    clo9591[3] = map;
    clo9591[4] = lst;
    clo9591[5] = kont8587;
    clo9591[6] = cdr;
    void *f8591 = encode_clo(clo9591);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(proc);
    arg_buffer[2] = f8591;
    arg_buffer[3] = a8348;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8886 = encode_clo(alloc_clo(lam8886_fptr, 0));

void lam8888_fptr() // lam8888
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8889 = arg_buffer[1];
    // reading env and args
    void *a8346 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8889);
    void *kont8587 = decode_clo_array[8];
    void *lst = decode_clo_array[7];
    void *map = decode_clo_array[6];
    void *proc = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // if-clause
    bool if_guard9592 = is_true(a8346);
    if (if_guard9592)
    {

        // creating new closure instance
        void **clo9593 = alloc_clo(lam8878_fptr, 1);

        // setting env list
        clo9593[1] = kont8587;
        void *f8588 = encode_clo(clo9593);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8588;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9594 = alloc_clo(lam8886_fptr, 6);

        // setting env list
        clo9594[1] = cons;
        clo9594[2] = proc;
        clo9594[3] = map;
        clo9594[4] = lst;
        clo9594[5] = kont8587;
        clo9594[6] = cdr;
        void *f8592 = encode_clo(clo9594);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8592;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8888 = encode_clo(alloc_clo(lam8888_fptr, 0));

void map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8890 = arg_buffer[1];
    // reading env and args
    void *kont8587 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9595 = alloc_clo(lam8888_fptr, 8);

    // setting env list
    clo9595[1] = cdr;
    clo9595[2] = list;
    clo9595[3] = cons;
    clo9595[4] = car;
    clo9595[5] = proc;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo9595[6] = map;
    clo9595[7] = lst;
    clo9595[8] = kont8587;
    void *f8593 = encode_clo(clo9595);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8593;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam8891_fptr() // lam8891
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8892 = arg_buffer[1];
    // reading env and args
    void *xy8353 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8892);
    void *kont8594 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8594);
    arg_buffer[2] = xy8353;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8594))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8891 = encode_clo(alloc_clo(lam8891_fptr, 0));

void lam8893_fptr() // lam8893
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8894 = arg_buffer[1];
    // reading env and args
    void *a8358 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8894);
    void *kont8594 = decode_clo_array[3];
    void *a8356 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8594;
    arg_buffer[3] = a8356;
    arg_buffer[4] = a8358;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8893 = encode_clo(alloc_clo(lam8893_fptr, 0));

void lam8895_fptr() // lam8895
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8896 = arg_buffer[1];
    // reading env and args
    void *a8357 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8896);
    void *op = decode_clo_array[5];
    void *kont8594 = decode_clo_array[4];
    void *a8356 = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9596 = alloc_clo(lam8893_fptr, 3);

    // setting env list
    clo9596[1] = cons;
    clo9596[2] = a8356;
    clo9596[3] = kont8594;
    void *f8596 = encode_clo(clo9596);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = f8596;
    arg_buffer[3] = op;
    arg_buffer[4] = a8357;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8895 = encode_clo(alloc_clo(lam8895_fptr, 0));

void lam8897_fptr() // lam8897
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8898 = arg_buffer[1];
    // reading env and args
    void *a8356 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8898);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *op = decode_clo_array[4];
    void *kont8594 = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9597 = alloc_clo(lam8895_fptr, 5);

    // setting env list
    clo9597[1] = cons;
    clo9597[2] = filter;
    clo9597[3] = a8356;
    clo9597[4] = kont8594;
    clo9597[5] = op;
    void *f8597 = encode_clo(clo9597);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8597;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8897 = encode_clo(alloc_clo(lam8897_fptr, 0));

void lam8899_fptr() // lam8899
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8900 = arg_buffer[1];
    // reading env and args
    void *a8359 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8900);
    void *op = decode_clo_array[3];
    void *kont8594 = decode_clo_array[2];
    void *filter = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(filter);
    arg_buffer[2] = kont8594;
    arg_buffer[3] = op;
    arg_buffer[4] = a8359;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8899 = encode_clo(alloc_clo(lam8899_fptr, 0));

void lam8901_fptr() // lam8901
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8902 = arg_buffer[1];
    // reading env and args
    void *a8355 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8902);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *op = decode_clo_array[5];
    void *kont8594 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9598 = is_true(a8355);
    if (if_guard9598)
    {

        // creating new closure instance
        void **clo9599 = alloc_clo(lam8897_fptr, 6);

        // setting env list
        clo9599[1] = cons;
        clo9599[2] = filter;
        clo9599[3] = kont8594;
        clo9599[4] = op;
        clo9599[5] = lst;
        clo9599[6] = cdr;
        void *f8598 = encode_clo(clo9599);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8598;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9600 = alloc_clo(lam8899_fptr, 3);

        // setting env list
        clo9600[1] = filter;
        clo9600[2] = kont8594;
        clo9600[3] = op;
        void *f8599 = encode_clo(clo9600);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8599;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8901 = encode_clo(alloc_clo(lam8901_fptr, 0));

void lam8903_fptr() // lam8903
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8904 = arg_buffer[1];
    // reading env and args
    void *a8354 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8904);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *op = decode_clo_array[5];
    void *kont8594 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo9601 = alloc_clo(lam8901_fptr, 7);

    // setting env list
    clo9601[1] = car;
    clo9601[2] = filter;
    clo9601[3] = cons;
    clo9601[4] = kont8594;
    clo9601[5] = op;
    clo9601[6] = lst;
    clo9601[7] = cdr;
    void *f8600 = encode_clo(clo9601);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(op);
    arg_buffer[2] = f8600;
    arg_buffer[3] = a8354;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8903 = encode_clo(alloc_clo(lam8903_fptr, 0));

void lam8905_fptr() // lam8905
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8906 = arg_buffer[1];
    // reading env and args
    void *a8352 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8906);
    void *lst = decode_clo_array[8];
    void *op = decode_clo_array[7];
    void *kont8594 = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9602 = is_true(a8352);
    if (if_guard9602)
    {

        // creating new closure instance
        void **clo9603 = alloc_clo(lam8891_fptr, 1);

        // setting env list
        clo9603[1] = kont8594;
        void *f8595 = encode_clo(clo9603);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8595;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9604 = alloc_clo(lam8903_fptr, 7);

        // setting env list
        clo9604[1] = car;
        clo9604[2] = filter;
        clo9604[3] = cons;
        clo9604[4] = kont8594;
        clo9604[5] = op;
        clo9604[6] = lst;
        clo9604[7] = cdr;
        void *f8601 = encode_clo(clo9604);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8601;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8905 = encode_clo(alloc_clo(lam8905_fptr, 0));

void filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8907 = arg_buffer[1];
    // reading env and args
    void *kont8594 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9605 = alloc_clo(lam8905_fptr, 8);

    // setting env list
    clo9605[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo9605[2] = filter;
    clo9605[3] = cdr;
    clo9605[4] = list;
    clo9605[5] = cons;
    clo9605[6] = kont8594;
    clo9605[7] = op;
    clo9605[8] = lst;
    void *f8602 = encode_clo(clo9605);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8602;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam8908_fptr() // lam8908
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8909 = arg_buffer[1];
    // reading env and args
    void *a8364 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8909);
    void *a8362 = decode_clo_array[3];
    void *kont8603 = decode_clo_array[2];
    void *drop = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(drop);
    arg_buffer[2] = kont8603;
    arg_buffer[3] = a8362;
    arg_buffer[4] = a8364;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8908 = encode_clo(alloc_clo(lam8908_fptr, 0));

void lam8911_fptr() // lam8911
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8912 = arg_buffer[1];
    // reading env and args
    void *a8362 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8912);
    void *kont8603 = decode_clo_array[4];
    void *drop = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];
    mpz_t *mpzvar9606 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9606, "1", 10);
    void *a8363 = encode_mpz(mpzvar9606);

    // creating new closure instance
    void **clo9607 = alloc_clo(lam8908_fptr, 3);

    // setting env list
    clo9607[1] = drop;
    clo9607[2] = kont8603;
    clo9607[3] = a8362;
    void *f8604 = encode_clo(clo9607);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8604;
    arg_buffer[3] = n;
    arg_buffer[4] = a8363;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8911 = encode_clo(alloc_clo(lam8911_fptr, 0));

void lam8913_fptr() // lam8913
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8914 = arg_buffer[1];
    // reading env and args
    void *a8361 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8914);
    void *cdr = decode_clo_array[6];
    void *kont8603 = decode_clo_array[5];
    void *n = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *drop = decode_clo_array[1];

    // if-clause
    bool if_guard9608 = is_true(a8361);
    if (if_guard9608)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8603);
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8603))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9609 = alloc_clo(lam8911_fptr, 4);

        // setting env list
        clo9609[1] = _u45;
        clo9609[2] = n;
        clo9609[3] = drop;
        clo9609[4] = kont8603;
        void *f8605 = encode_clo(clo9609);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8605;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8913 = encode_clo(alloc_clo(lam8913_fptr, 0));

void drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8916 = arg_buffer[1];
    // reading env and args
    void *kont8603 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9610 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9610, "0", 10);
    void *a8360 = encode_mpz(mpzvar9610);

    // creating new closure instance
    void **clo9611 = alloc_clo(lam8913_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo9611[1] = drop;
    clo9611[2] = lst;
    clo9611[3] = _u45;
    clo9611[4] = n;
    clo9611[5] = kont8603;
    clo9611[6] = cdr;
    void *f8606 = encode_clo(clo9611);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8606;
    arg_buffer[3] = n;
    arg_buffer[4] = a8360;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8917_fptr() // lam8917
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8918 = arg_buffer[1];
    // reading env and args
    void *a8368 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8918);
    void *fun = decode_clo_array[4];
    void *foldl = decode_clo_array[3];
    void *kont8607 = decode_clo_array[2];
    void *a8367 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldl);
    arg_buffer[2] = kont8607;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8367;
    arg_buffer[5] = a8368;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8917 = encode_clo(alloc_clo(lam8917_fptr, 0));

void lam8919_fptr() // lam8919
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8920 = arg_buffer[1];
    // reading env and args
    void *a8367 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8920);
    void *cdr = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *kont8607 = decode_clo_array[3];
    void *fun = decode_clo_array[2];
    void *foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9612 = alloc_clo(lam8917_fptr, 4);

    // setting env list
    clo9612[1] = a8367;
    clo9612[2] = kont8607;
    clo9612[3] = foldl;
    clo9612[4] = fun;
    void *f8608 = encode_clo(clo9612);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8608;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8919 = encode_clo(alloc_clo(lam8919_fptr, 0));

void lam8921_fptr() // lam8921
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8922 = arg_buffer[1];
    // reading env and args
    void *a8366 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8922);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *kont8607 = decode_clo_array[4];
    void *fun = decode_clo_array[3];
    void *acc = decode_clo_array[2];
    void *foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9613 = alloc_clo(lam8919_fptr, 5);

    // setting env list
    clo9613[1] = foldl;
    clo9613[2] = fun;
    clo9613[3] = kont8607;
    clo9613[4] = lst;
    clo9613[5] = cdr;
    void *f8609 = encode_clo(clo9613);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = f8609;
    arg_buffer[3] = a8366;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8921 = encode_clo(alloc_clo(lam8921_fptr, 0));

void lam8923_fptr() // lam8923
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8924 = arg_buffer[1];
    // reading env and args
    void *a8365 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8924);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *kont8607 = decode_clo_array[5];
    void *fun = decode_clo_array[4];
    void *acc = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *foldl = decode_clo_array[1];

    // if-clause
    bool if_guard9614 = is_true(a8365);
    if (if_guard9614)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8607);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8607))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9615 = alloc_clo(lam8921_fptr, 6);

        // setting env list
        clo9615[1] = foldl;
        clo9615[2] = acc;
        clo9615[3] = fun;
        clo9615[4] = kont8607;
        clo9615[5] = lst;
        clo9615[6] = cdr;
        void *f8610 = encode_clo(clo9615);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8610;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8923 = encode_clo(alloc_clo(lam8923_fptr, 0));

void foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8925 = arg_buffer[1];
    // reading env and args
    void *kont8607 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9616 = alloc_clo(lam8923_fptr, 7);

    // setting env list
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo9616[1] = foldl;
    clo9616[2] = car;
    clo9616[3] = acc;
    clo9616[4] = fun;
    clo9616[5] = kont8607;
    clo9616[6] = lst;
    clo9616[7] = cdr;
    void *f8611 = encode_clo(clo9616);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8611;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8926_fptr() // lam8926
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8927 = arg_buffer[1];
    // reading env and args
    void *a8372 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8927);
    void *a8370 = decode_clo_array[3];
    void *kont8612 = decode_clo_array[2];
    void *fun = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(fun);
    arg_buffer[2] = kont8612;
    arg_buffer[3] = a8370;
    arg_buffer[4] = a8372;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void lam8928_fptr() // lam8928
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8929 = arg_buffer[1];
    // reading env and args
    void *a8371 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8929);
    void *foldr = decode_clo_array[5];
    void *a8370 = decode_clo_array[4];
    void *acc = decode_clo_array[3];
    void *kont8612 = decode_clo_array[2];
    void *fun = decode_clo_array[1];

    // creating new closure instance
    void **clo9617 = alloc_clo(lam8926_fptr, 3);

    // setting env list
    clo9617[1] = fun;
    clo9617[2] = kont8612;
    clo9617[3] = a8370;
    void *f8613 = encode_clo(clo9617);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = f8613;
    arg_buffer[3] = fun;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8371;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8928 = encode_clo(alloc_clo(lam8928_fptr, 0));

void lam8930_fptr() // lam8930
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8931 = arg_buffer[1];
    // reading env and args
    void *a8370 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8931);
    void *cdr = decode_clo_array[6];
    void *acc = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *kont8612 = decode_clo_array[2];
    void *fun = decode_clo_array[1];

    // creating new closure instance
    void **clo9618 = alloc_clo(lam8928_fptr, 5);

    // setting env list
    clo9618[1] = fun;
    clo9618[2] = kont8612;
    clo9618[3] = acc;
    clo9618[4] = a8370;
    clo9618[5] = foldr;
    void *f8614 = encode_clo(clo9618);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8614;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8930 = encode_clo(alloc_clo(lam8930_fptr, 0));

void lam8932_fptr() // lam8932
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8933 = arg_buffer[1];
    // reading env and args
    void *a8369 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8933);
    void *cdr = decode_clo_array[7];
    void *acc = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *kont8612 = decode_clo_array[2];
    void *fun = decode_clo_array[1];

    // if-clause
    bool if_guard9619 = is_true(a8369);
    if (if_guard9619)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8612);
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8612))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9620 = alloc_clo(lam8930_fptr, 6);

        // setting env list
        clo9620[1] = fun;
        clo9620[2] = kont8612;
        clo9620[3] = lst;
        clo9620[4] = foldr;
        clo9620[5] = acc;
        clo9620[6] = cdr;
        void *f8615 = encode_clo(clo9620);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8615;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8932 = encode_clo(alloc_clo(lam8932_fptr, 0));

void foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8934 = arg_buffer[1];
    // reading env and args
    void *kont8612 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9621 = alloc_clo(lam8932_fptr, 7);

    // setting env list
    clo9621[1] = fun;
    clo9621[2] = kont8612;
    clo9621[3] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo9621[4] = foldr;
    clo9621[5] = car;
    clo9621[6] = acc;
    clo9621[7] = cdr;
    void *f8616 = encode_clo(clo9621);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8616;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam8935_fptr() // lam8935
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8936 = arg_buffer[1];
    // reading env and args
    void *a8376 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8936);
    void *reverse_u45helper = decode_clo_array[3];
    void *a8374 = decode_clo_array[2];
    void *kont8617 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8617;
    arg_buffer[3] = a8374;
    arg_buffer[4] = a8376;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void lam8937_fptr() // lam8937
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8938 = arg_buffer[1];
    // reading env and args
    void *a8375 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8938);
    void *reverse_u45helper = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *kont8617 = decode_clo_array[3];
    void *a8374 = decode_clo_array[2];
    void *lst2 = decode_clo_array[1];

    // creating new closure instance
    void **clo9622 = alloc_clo(lam8935_fptr, 3);

    // setting env list
    clo9622[1] = kont8617;
    clo9622[2] = a8374;
    clo9622[3] = reverse_u45helper;
    void *f8618 = encode_clo(clo9622);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8618;
    arg_buffer[3] = a8375;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8937 = encode_clo(alloc_clo(lam8937_fptr, 0));

void lam8939_fptr() // lam8939
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8940 = arg_buffer[1];
    // reading env and args
    void *a8374 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8940);
    void *lst = decode_clo_array[6];
    void *reverse_u45helper = decode_clo_array[5];
    void *lst2 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *kont8617 = decode_clo_array[1];

    // creating new closure instance
    void **clo9623 = alloc_clo(lam8937_fptr, 5);

    // setting env list
    clo9623[1] = lst2;
    clo9623[2] = a8374;
    clo9623[3] = kont8617;
    clo9623[4] = cons;
    clo9623[5] = reverse_u45helper;
    void *f8619 = encode_clo(clo9623);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8619;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8939 = encode_clo(alloc_clo(lam8939_fptr, 0));

void lam8941_fptr() // lam8941
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8942 = arg_buffer[1];
    // reading env and args
    void *a8373 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8942);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *reverse_u45helper = decode_clo_array[5];
    void *lst2 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *kont8617 = decode_clo_array[1];

    // if-clause
    bool if_guard9624 = is_true(a8373);
    if (if_guard9624)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8617);
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8617))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9625 = alloc_clo(lam8939_fptr, 6);

        // setting env list
        clo9625[1] = kont8617;
        clo9625[2] = cons;
        clo9625[3] = car;
        clo9625[4] = lst2;
        clo9625[5] = reverse_u45helper;
        clo9625[6] = lst;
        void *f8620 = encode_clo(clo9625);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8620;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8941 = encode_clo(alloc_clo(lam8941_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8943 = arg_buffer[1];
    // reading env and args
    void *kont8617 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9626 = alloc_clo(lam8941_fptr, 7);

    // setting env list
    clo9626[1] = kont8617;
    clo9626[2] = cons;
    clo9626[3] = car;
    clo9626[4] = lst2;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo9626[5] = reverse_u45helper;
    clo9626[6] = lst;
    clo9626[7] = cdr;
    void *f8621 = encode_clo(clo9626);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8621;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam8944_fptr() // lam8944
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8945 = arg_buffer[1];
    // reading env and args
    void *a8377 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8945);
    void *reverse_u45helper = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *kont8622 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(reverse_u45helper);
    arg_buffer[2] = kont8622;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8377;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8944 = encode_clo(alloc_clo(lam8944_fptr, 0));

void reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8946 = arg_buffer[1];
    // reading env and args
    void *kont8622 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9627 = alloc_clo(lam8944_fptr, 3);

    // setting env list
    clo9627[1] = kont8622;
    clo9627[2] = lst;
    clo9627[3] = reverse_u45helper;
    void *f8623 = encode_clo(clo9627);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8623;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8947_fptr() // lam8947
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8948 = arg_buffer[1];
    // reading env and args
    void *a8381 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8948);
    void *a8379 = decode_clo_array[3];
    void *kont8624 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8624;
    arg_buffer[3] = a8379;
    arg_buffer[4] = a8381;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8947 = encode_clo(alloc_clo(lam8947_fptr, 0));

void lam8949_fptr() // lam8949
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8950 = arg_buffer[1];
    // reading env and args
    void *a8380 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8950);
    void *a8379 = decode_clo_array[5];
    void *kont8624 = decode_clo_array[4];
    void *append1 = decode_clo_array[3];
    void *rhs = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9628 = alloc_clo(lam8947_fptr, 3);

    // setting env list
    clo9628[1] = cons;
    clo9628[2] = kont8624;
    clo9628[3] = a8379;
    void *f8625 = encode_clo(clo9628);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append1);
    arg_buffer[2] = f8625;
    arg_buffer[3] = a8380;
    arg_buffer[4] = rhs;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8949 = encode_clo(alloc_clo(lam8949_fptr, 0));

void lam8951_fptr() // lam8951
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8952 = arg_buffer[1];
    // reading env and args
    void *a8379 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8952);
    void *cdr = decode_clo_array[6];
    void *lhs = decode_clo_array[5];
    void *kont8624 = decode_clo_array[4];
    void *append1 = decode_clo_array[3];
    void *rhs = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9629 = alloc_clo(lam8949_fptr, 5);

    // setting env list
    clo9629[1] = cons;
    clo9629[2] = rhs;
    clo9629[3] = append1;
    clo9629[4] = kont8624;
    clo9629[5] = a8379;
    void *f8626 = encode_clo(clo9629);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8626;
    arg_buffer[3] = lhs;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8951 = encode_clo(alloc_clo(lam8951_fptr, 0));

void lam8953_fptr() // lam8953
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8954 = arg_buffer[1];
    // reading env and args
    void *a8378 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8954);
    void *cdr = decode_clo_array[7];
    void *lhs = decode_clo_array[6];
    void *kont8624 = decode_clo_array[5];
    void *append1 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *rhs = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9630 = is_true(a8378);
    if (if_guard9630)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8624);
        arg_buffer[2] = rhs;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8624))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9631 = alloc_clo(lam8951_fptr, 6);

        // setting env list
        clo9631[1] = cons;
        clo9631[2] = rhs;
        clo9631[3] = append1;
        clo9631[4] = kont8624;
        clo9631[5] = lhs;
        clo9631[6] = cdr;
        void *f8627 = encode_clo(clo9631);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8627;
        arg_buffer[3] = lhs;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8953 = encode_clo(alloc_clo(lam8953_fptr, 0));

void append1_fptr() // append1
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8955 = arg_buffer[1];
    // reading env and args
    void *kont8624 = arg_buffer[2];
    void *lhs = arg_buffer[3];
    void *rhs = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9632 = alloc_clo(lam8953_fptr, 7);

    // setting env list
    clo9632[1] = car;
    clo9632[2] = rhs;
    clo9632[3] = cons;
    void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

    clo9632[4] = append1;
    clo9632[5] = kont8624;
    clo9632[6] = lhs;
    clo9632[7] = cdr;
    void *f8628 = encode_clo(clo9632);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8628;
    arg_buffer[3] = lhs;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8956_fptr() // lam8956
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8957 = arg_buffer[1];
    // reading env and args
    void *a8384 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8957);
    void *foldr = decode_clo_array[4];
    void *a8382 = decode_clo_array[3];
    void *kont8629 = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(foldr);
    arg_buffer[2] = kont8629;
    arg_buffer[3] = append1;
    arg_buffer[4] = a8382;
    arg_buffer[5] = a8384;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8956 = encode_clo(alloc_clo(lam8956_fptr, 0));

void lam8958_fptr() // lam8958
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8959 = arg_buffer[1];
    // reading env and args
    void *a8383 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8959);
    void *foldr = decode_clo_array[5];
    void *a8382 = decode_clo_array[4];
    void *x = decode_clo_array[3];
    void *kont8629 = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9633 = alloc_clo(lam8956_fptr, 4);

    // setting env list
    clo9633[1] = append1;
    clo9633[2] = kont8629;
    clo9633[3] = a8382;
    clo9633[4] = foldr;
    void *f8630 = encode_clo(clo9633);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append1);
    arg_buffer[2] = f8630;
    arg_buffer[3] = a8383;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8958 = encode_clo(alloc_clo(lam8958_fptr, 0));

void lam8960_fptr() // lam8960
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8961 = arg_buffer[1];
    // reading env and args
    void *a8382 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8961);
    void *list = decode_clo_array[6];
    void *foldr = decode_clo_array[5];
    void *xs = decode_clo_array[4];
    void *x = decode_clo_array[3];
    void *kont8629 = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9634 = alloc_clo(lam8958_fptr, 5);

    // setting env list
    clo9634[1] = append1;
    clo9634[2] = kont8629;
    clo9634[3] = x;
    clo9634[4] = a8382;
    clo9634[5] = foldr;
    void *f8631 = encode_clo(clo9634);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8631;
    arg_buffer[3] = xs;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8960 = encode_clo(alloc_clo(lam8960_fptr, 0));

void lam8962_fptr() // lam8962
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8963 = arg_buffer[1];
    // reading env and args
    void *x = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8963);
    void *list = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *xs = decode_clo_array[3];
    void *kont8629 = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9635 = alloc_clo(lam8960_fptr, 6);

    // setting env list
    clo9635[1] = append1;
    clo9635[2] = kont8629;
    clo9635[3] = x;
    clo9635[4] = xs;
    clo9635[5] = foldr;
    clo9635[6] = list;
    void *f8632 = encode_clo(clo9635);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8632;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8962 = encode_clo(alloc_clo(lam8962_fptr, 0));

void lam8964_fptr() // lam8964
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8965 = arg_buffer[1];
    // reading env and args
    void *vargs8314 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8965);
    void *list = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *xs = decode_clo_array[3];
    void *kont8629 = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9636 = alloc_clo(lam8962_fptr, 5);

    // setting env list
    clo9636[1] = append1;
    clo9636[2] = kont8629;
    clo9636[3] = xs;
    clo9636[4] = foldr;
    clo9636[5] = list;
    void *f8633 = encode_clo(clo9636);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8633);
    arg_buffer[2] = vargs8314;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8633))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void lam8966_fptr() // lam8966
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8967 = arg_buffer[1];
    // reading env and args
    void *xs = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8967);
    void *foldr = decode_clo_array[6];
    void *vargs8819 = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *kont8629 = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9637 = alloc_clo(lam8964_fptr, 5);

    // setting env list
    clo9637[1] = append1;
    clo9637[2] = kont8629;
    clo9637[3] = xs;
    clo9637[4] = foldr;
    clo9637[5] = list;
    void *f8634 = encode_clo(clo9637);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8634;
    arg_buffer[3] = vargs8819;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8966 = encode_clo(alloc_clo(lam8966_fptr, 0));

void append_fptr() // append
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8968 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *vargs = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        vargs = arg_buffer[2];
    }
    else
    {
        // building cons cell
        vargs = encode_null();
        for (int i = numArgs; i >= 2; i--)
        {
            vargs = prim_cons(arg_buffer[i], vargs);
        }
    }

    void *kont8629 = prim_car(vargs);
    void *vargs8819 = prim_cdr(vargs);

    // creating new closure instance
    void **clo9638 = alloc_clo(lam8966_fptr, 6);

    // setting env list
    clo9638[1] = append1;
    clo9638[2] = kont8629;
    clo9638[3] = cdr;
    clo9638[4] = list;
    clo9638[5] = vargs8819;
    clo9638[6] = foldr;
    void *f8635 = encode_clo(clo9638);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8635;
    arg_buffer[3] = vargs8819;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam8969_fptr() // lam8969
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8970 = arg_buffer[1];
    // reading env and args
    void *xy8387 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8970);
    void *kont8636 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8636);
    arg_buffer[2] = xy8387;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8636))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8969 = encode_clo(alloc_clo(lam8969_fptr, 0));

void lam8971_fptr() // lam8971
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8972 = arg_buffer[1];
    // reading env and args
    void *a8392 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8972);
    void *kont8636 = decode_clo_array[4];
    void *a8388 = decode_clo_array[3];
    void *take_u45helper = decode_clo_array[2];
    void *a8390 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8636;
    arg_buffer[3] = a8388;
    arg_buffer[4] = a8390;
    arg_buffer[5] = a8392;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void lam8973_fptr() // lam8973
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8974 = arg_buffer[1];
    // reading env and args
    void *a8391 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8974);
    void *kont8636 = decode_clo_array[6];
    void *a8388 = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *take_u45helper = decode_clo_array[3];
    void *a8390 = decode_clo_array[2];
    void *lst2 = decode_clo_array[1];

    // creating new closure instance
    void **clo9639 = alloc_clo(lam8971_fptr, 4);

    // setting env list
    clo9639[1] = a8390;
    clo9639[2] = take_u45helper;
    clo9639[3] = a8388;
    clo9639[4] = kont8636;
    void *f8638 = encode_clo(clo9639);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8638;
    arg_buffer[3] = a8391;
    arg_buffer[4] = lst2;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8973 = encode_clo(alloc_clo(lam8973_fptr, 0));

void lam8975_fptr() // lam8975
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8976 = arg_buffer[1];
    // reading env and args
    void *a8390 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8976);
    void *kont8636 = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *a8388 = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *take_u45helper = decode_clo_array[2];
    void *lst2 = decode_clo_array[1];

    // creating new closure instance
    void **clo9640 = alloc_clo(lam8973_fptr, 6);

    // setting env list
    clo9640[1] = lst2;
    clo9640[2] = a8390;
    clo9640[3] = take_u45helper;
    clo9640[4] = cons;
    clo9640[5] = a8388;
    clo9640[6] = kont8636;
    void *f8639 = encode_clo(clo9640);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8639;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8975 = encode_clo(alloc_clo(lam8975_fptr, 0));

void lam8978_fptr() // lam8978
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8979 = arg_buffer[1];
    // reading env and args
    void *a8388 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8979);
    void *kont8636 = decode_clo_array[8];
    void *lst = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *_u45 = decode_clo_array[5];
    void *take_u45helper = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];
    mpz_t *mpzvar9641 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9641, "1", 10);
    void *a8389 = encode_mpz(mpzvar9641);

    // creating new closure instance
    void **clo9642 = alloc_clo(lam8975_fptr, 7);

    // setting env list
    clo9642[1] = lst2;
    clo9642[2] = take_u45helper;
    clo9642[3] = cons;
    clo9642[4] = car;
    clo9642[5] = a8388;
    clo9642[6] = lst;
    clo9642[7] = kont8636;
    void *f8640 = encode_clo(clo9642);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8640;
    arg_buffer[3] = n;
    arg_buffer[4] = a8389;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8978 = encode_clo(alloc_clo(lam8978_fptr, 0));

void lam8980_fptr() // lam8980
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8981 = arg_buffer[1];
    // reading env and args
    void *a8386 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8981);
    void *cdr = decode_clo_array[10];
    void *kont8636 = decode_clo_array[9];
    void *lst = decode_clo_array[8];
    void *reverse = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *_u45 = decode_clo_array[5];
    void *take_u45helper = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9643 = is_true(a8386);
    if (if_guard9643)
    {

        // creating new closure instance
        void **clo9644 = alloc_clo(lam8969_fptr, 1);

        // setting env list
        clo9644[1] = kont8636;
        void *f8637 = encode_clo(clo9644);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(reverse);
        arg_buffer[2] = f8637;
        arg_buffer[3] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9645 = alloc_clo(lam8978_fptr, 8);

        // setting env list
        clo9645[1] = car;
        clo9645[2] = n;
        clo9645[3] = lst2;
        clo9645[4] = take_u45helper;
        clo9645[5] = _u45;
        clo9645[6] = cons;
        clo9645[7] = lst;
        clo9645[8] = kont8636;
        void *f8641 = encode_clo(clo9645);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8641;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8983 = arg_buffer[1];
    // reading env and args
    void *kont8636 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9646 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9646, "0", 10);
    void *a8385 = encode_mpz(mpzvar9646);

    // creating new closure instance
    void **clo9647 = alloc_clo(lam8980_fptr, 10);

    // setting env list
    clo9647[1] = car;
    clo9647[2] = n;
    clo9647[3] = lst2;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo9647[4] = take_u45helper;
    clo9647[5] = _u45;
    clo9647[6] = cons;
    clo9647[7] = reverse;
    clo9647[8] = lst;
    clo9647[9] = kont8636;
    clo9647[10] = cdr;
    void *f8642 = encode_clo(clo9647);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8642;
    arg_buffer[3] = n;
    arg_buffer[4] = a8385;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam8984_fptr() // lam8984
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8985 = arg_buffer[1];
    // reading env and args
    void *a8393 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8985);
    void *lst = decode_clo_array[4];
    void *kont8643 = decode_clo_array[3];
    void *take_u45helper = decode_clo_array[2];
    void *n = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(take_u45helper);
    arg_buffer[2] = kont8643;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8393;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8984 = encode_clo(alloc_clo(lam8984_fptr, 0));

void take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8986 = arg_buffer[1];
    // reading env and args
    void *kont8643 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9648 = alloc_clo(lam8984_fptr, 4);

    // setting env list
    clo9648[1] = n;
    clo9648[2] = take_u45helper;
    clo9648[3] = kont8643;
    clo9648[4] = lst;
    void *f8644 = encode_clo(clo9648);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8644;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam8987_fptr() // lam8987
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8988 = arg_buffer[1];
    // reading env and args
    void *a8397 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8988);
    void *a8395 = decode_clo_array[3];
    void *f = decode_clo_array[2];
    void *kont8645 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f);
    arg_buffer[2] = kont8645;
    arg_buffer[3] = a8395;
    arg_buffer[4] = a8397;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8987 = encode_clo(alloc_clo(lam8987_fptr, 0));

void lam8989_fptr() // lam8989
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8990 = arg_buffer[1];
    // reading env and args
    void *a8396 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8990);
    void *base = decode_clo_array[5];
    void *a8395 = decode_clo_array[4];
    void *f = decode_clo_array[3];
    void *my_u45foldr_u45aux = decode_clo_array[2];
    void *kont8645 = decode_clo_array[1];

    // creating new closure instance
    void **clo9649 = alloc_clo(lam8987_fptr, 3);

    // setting env list
    clo9649[1] = kont8645;
    clo9649[2] = f;
    clo9649[3] = a8395;
    void *f8646 = encode_clo(clo9649);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45foldr_u45aux);
    arg_buffer[2] = f8646;
    arg_buffer[3] = a8396;
    arg_buffer[4] = f;
    arg_buffer[5] = base;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45foldr_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8989 = encode_clo(alloc_clo(lam8989_fptr, 0));

void lam8991_fptr() // lam8991
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8992 = arg_buffer[1];
    // reading env and args
    void *a8395 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8992);
    void *lst = decode_clo_array[6];
    void *f = decode_clo_array[5];
    void *my_u45foldr_u45aux = decode_clo_array[4];
    void *kont8645 = decode_clo_array[3];
    void *base = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9650 = alloc_clo(lam8989_fptr, 5);

    // setting env list
    clo9650[1] = kont8645;
    clo9650[2] = my_u45foldr_u45aux;
    clo9650[3] = f;
    clo9650[4] = a8395;
    clo9650[5] = base;
    void *f8647 = encode_clo(clo9650);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8647;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8991 = encode_clo(alloc_clo(lam8991_fptr, 0));

void lam8993_fptr() // lam8993
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8994 = arg_buffer[1];
    // reading env and args
    void *a8394 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8994);
    void *lst = decode_clo_array[7];
    void *f = decode_clo_array[6];
    void *my_u45foldr_u45aux = decode_clo_array[5];
    void *kont8645 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *base = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // if-clause
    bool if_guard9651 = is_true(a8394);
    if (if_guard9651)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8645);
        arg_buffer[2] = base;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8645))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9652 = alloc_clo(lam8991_fptr, 6);

        // setting env list
        clo9652[1] = cdr;
        clo9652[2] = base;
        clo9652[3] = kont8645;
        clo9652[4] = my_u45foldr_u45aux;
        clo9652[5] = f;
        clo9652[6] = lst;
        void *f8648 = encode_clo(clo9652);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8648;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam8993 = encode_clo(alloc_clo(lam8993_fptr, 0));

void my_u45foldr_u45aux_fptr() // my-foldr-aux
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8995 = arg_buffer[1];
    // reading env and args
    void *kont8645 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *f = arg_buffer[4];
    void *base = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9653 = alloc_clo(lam8993_fptr, 7);

    // setting env list
    clo9653[1] = cdr;
    clo9653[2] = base;
    clo9653[3] = car;
    clo9653[4] = kont8645;
    void *my_u45foldr_u45aux = encode_clo(alloc_clo(my_u45foldr_u45aux_fptr, 0));

    clo9653[5] = my_u45foldr_u45aux;
    clo9653[6] = f;
    clo9653[7] = lst;
    void *f8649 = encode_clo(clo9653);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8649;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *my_u45foldr_u45aux = encode_clo(alloc_clo(my_u45foldr_u45aux_fptr, 0));

void lam8996_fptr() // lam8996
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8997 = arg_buffer[1];
    // reading env and args
    void *xy8398 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8997);
    void *kont8650 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8650);
    arg_buffer[2] = xy8398;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8650))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8996 = encode_clo(alloc_clo(lam8996_fptr, 0));

void my_u45foldr_fptr() // my-foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8998 = arg_buffer[1];
    // reading env and args
    void *kont8650 = arg_buffer[2];
    void *f = arg_buffer[3];
    void *base = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9654 = alloc_clo(lam8996_fptr, 1);

    // setting env list
    clo9654[1] = kont8650;
    void *f8651 = encode_clo(clo9654);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45foldr_u45aux);
    arg_buffer[2] = f8651;
    arg_buffer[3] = lst;
    arg_buffer[4] = f;
    arg_buffer[5] = base;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45foldr_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *my_u45foldr = encode_clo(alloc_clo(my_u45foldr_fptr, 0));

void lam8999_fptr() // lam8999
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9000 = arg_buffer[1];
    // reading env and args
    void *a8402 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9000);
    void *kont8652 = decode_clo_array[4];
    void *f = decode_clo_array[3];
    void *a8401 = decode_clo_array[2];
    void *my_u45foldl_u45aux = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45foldl_u45aux);
    arg_buffer[2] = kont8652;
    arg_buffer[3] = f;
    arg_buffer[4] = a8401;
    arg_buffer[5] = a8402;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45foldl_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam8999 = encode_clo(alloc_clo(lam8999_fptr, 0));

void lam9001_fptr() // lam9001
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9002 = arg_buffer[1];
    // reading env and args
    void *a8401 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9002);
    void *cdr = decode_clo_array[5];
    void *kont8652 = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *f = decode_clo_array[2];
    void *my_u45foldl_u45aux = decode_clo_array[1];

    // creating new closure instance
    void **clo9655 = alloc_clo(lam8999_fptr, 4);

    // setting env list
    clo9655[1] = my_u45foldl_u45aux;
    clo9655[2] = a8401;
    clo9655[3] = f;
    clo9655[4] = kont8652;
    void *f8653 = encode_clo(clo9655);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8653;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9001 = encode_clo(alloc_clo(lam9001_fptr, 0));

void lam9003_fptr() // lam9003
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9004 = arg_buffer[1];
    // reading env and args
    void *a8400 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9004);
    void *kont8652 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *f = decode_clo_array[4];
    void *my_u45foldl_u45aux = decode_clo_array[3];
    void *base = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9656 = alloc_clo(lam9001_fptr, 5);

    // setting env list
    clo9656[1] = my_u45foldl_u45aux;
    clo9656[2] = f;
    clo9656[3] = lst;
    clo9656[4] = kont8652;
    clo9656[5] = cdr;
    void *f8654 = encode_clo(clo9656);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f);
    arg_buffer[2] = f8654;
    arg_buffer[3] = base;
    arg_buffer[4] = a8400;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9003 = encode_clo(alloc_clo(lam9003_fptr, 0));

void lam9005_fptr() // lam9005
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9006 = arg_buffer[1];
    // reading env and args
    void *a8399 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9006);
    void *kont8652 = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *f = decode_clo_array[5];
    void *my_u45foldl_u45aux = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *base = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // if-clause
    bool if_guard9657 = is_true(a8399);
    if (if_guard9657)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8652);
        arg_buffer[2] = base;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8652))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9658 = alloc_clo(lam9003_fptr, 6);

        // setting env list
        clo9658[1] = cdr;
        clo9658[2] = base;
        clo9658[3] = my_u45foldl_u45aux;
        clo9658[4] = f;
        clo9658[5] = lst;
        clo9658[6] = kont8652;
        void *f8655 = encode_clo(clo9658);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8655;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9005 = encode_clo(alloc_clo(lam9005_fptr, 0));

void my_u45foldl_u45aux_fptr() // my-foldl-aux
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9007 = arg_buffer[1];
    // reading env and args
    void *kont8652 = arg_buffer[2];
    void *f = arg_buffer[3];
    void *base = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9659 = alloc_clo(lam9005_fptr, 7);

    // setting env list
    clo9659[1] = cdr;
    clo9659[2] = base;
    clo9659[3] = car;
    void *my_u45foldl_u45aux = encode_clo(alloc_clo(my_u45foldl_u45aux_fptr, 0));

    clo9659[4] = my_u45foldl_u45aux;
    clo9659[5] = f;
    clo9659[6] = lst;
    clo9659[7] = kont8652;
    void *f8656 = encode_clo(clo9659);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8656;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *my_u45foldl_u45aux = encode_clo(alloc_clo(my_u45foldl_u45aux_fptr, 0));

void lam9008_fptr() // lam9008
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9009 = arg_buffer[1];
    // reading env and args
    void *xy8403 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9009);
    void *kont8657 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8657);
    arg_buffer[2] = xy8403;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8657))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9008 = encode_clo(alloc_clo(lam9008_fptr, 0));

void my_u45foldl_fptr() // my-foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9010 = arg_buffer[1];
    // reading env and args
    void *kont8657 = arg_buffer[2];
    void *f = arg_buffer[3];
    void *base = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9660 = alloc_clo(lam9008_fptr, 1);

    // setting env list
    clo9660[1] = kont8657;
    void *f8658 = encode_clo(clo9660);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45foldl_u45aux);
    arg_buffer[2] = f8658;
    arg_buffer[3] = f;
    arg_buffer[4] = base;
    arg_buffer[5] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45foldl_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *my_u45foldl = encode_clo(alloc_clo(my_u45foldl_fptr, 0));

void lam9011_fptr() // lam9011
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9012 = arg_buffer[1];
    // reading env and args
    void *a8408 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9012);
    void *kont8659 = decode_clo_array[3];
    void *a8405 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8659;
    arg_buffer[3] = a8405;
    arg_buffer[4] = a8408;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9011 = encode_clo(alloc_clo(lam9011_fptr, 0));

void lam9013_fptr() // lam9013
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9014 = arg_buffer[1];
    // reading env and args
    void *a8407 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9014);
    void *f = decode_clo_array[6];
    void *kont8659 = decode_clo_array[5];
    void *hi = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *my_u45for_u45aux = decode_clo_array[2];
    void *a8405 = decode_clo_array[1];

    // creating new closure instance
    void **clo9661 = alloc_clo(lam9011_fptr, 3);

    // setting env list
    clo9661[1] = cons;
    clo9661[2] = a8405;
    clo9661[3] = kont8659;
    void *f8660 = encode_clo(clo9661);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45for_u45aux);
    arg_buffer[2] = f8660;
    arg_buffer[3] = a8407;
    arg_buffer[4] = hi;
    arg_buffer[5] = f;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45for_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9013 = encode_clo(alloc_clo(lam9013_fptr, 0));

void lam9016_fptr() // lam9016
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9017 = arg_buffer[1];
    // reading env and args
    void *a8405 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9017);
    void *f = decode_clo_array[7];
    void *lo = decode_clo_array[6];
    void *my_u45for_u45aux = decode_clo_array[5];
    void *hi = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *_u43 = decode_clo_array[2];
    void *kont8659 = decode_clo_array[1];
    mpz_t *mpzvar9662 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9662, "1", 10);
    void *a8406 = encode_mpz(mpzvar9662);

    // creating new closure instance
    void **clo9663 = alloc_clo(lam9013_fptr, 6);

    // setting env list
    clo9663[1] = a8405;
    clo9663[2] = my_u45for_u45aux;
    clo9663[3] = cons;
    clo9663[4] = hi;
    clo9663[5] = kont8659;
    clo9663[6] = f;
    void *f8661 = encode_clo(clo9663);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u43);
    arg_buffer[2] = f8661;
    arg_buffer[3] = lo;
    arg_buffer[4] = a8406;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9016 = encode_clo(alloc_clo(lam9016_fptr, 0));

void lam9018_fptr() // lam9018
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9019 = arg_buffer[1];
    // reading env and args
    void *xy8409 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9019);
    void *kont8659 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8659);
    arg_buffer[2] = xy8409;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8659))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9018 = encode_clo(alloc_clo(lam9018_fptr, 0));

void lam9020_fptr() // lam9020
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9021 = arg_buffer[1];
    // reading env and args
    void *a8404 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9021);
    void *list = decode_clo_array[8];
    void *f = decode_clo_array[7];
    void *lo = decode_clo_array[6];
    void *my_u45for_u45aux = decode_clo_array[5];
    void *hi = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *_u43 = decode_clo_array[2];
    void *kont8659 = decode_clo_array[1];

    // if-clause
    bool if_guard9664 = is_true(a8404);
    if (if_guard9664)
    {

        // creating new closure instance
        void **clo9665 = alloc_clo(lam9016_fptr, 7);

        // setting env list
        clo9665[1] = kont8659;
        clo9665[2] = _u43;
        clo9665[3] = cons;
        clo9665[4] = hi;
        clo9665[5] = my_u45for_u45aux;
        clo9665[6] = lo;
        clo9665[7] = f;
        void *f8662 = encode_clo(clo9665);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f);
        arg_buffer[2] = f8662;
        arg_buffer[3] = lo;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9666 = alloc_clo(lam9018_fptr, 1);

        // setting env list
        clo9666[1] = kont8659;
        void *f8663 = encode_clo(clo9666);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8663;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9020 = encode_clo(alloc_clo(lam9020_fptr, 0));

void my_u45for_u45aux_fptr() // my-for-aux
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9022 = arg_buffer[1];
    // reading env and args
    void *kont8659 = arg_buffer[2];
    void *lo = arg_buffer[3];
    void *hi = arg_buffer[4];
    void *f = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9667 = alloc_clo(lam9020_fptr, 8);

    // setting env list
    clo9667[1] = kont8659;
    clo9667[2] = _u43;
    clo9667[3] = cons;
    clo9667[4] = hi;
    void *my_u45for_u45aux = encode_clo(alloc_clo(my_u45for_u45aux_fptr, 0));

    clo9667[5] = my_u45for_u45aux;
    clo9667[6] = lo;
    clo9667[7] = f;
    clo9667[8] = list;
    void *f8664 = encode_clo(clo9667);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u60);
    arg_buffer[2] = f8664;
    arg_buffer[3] = lo;
    arg_buffer[4] = hi;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *my_u45for_u45aux = encode_clo(alloc_clo(my_u45for_u45aux_fptr, 0));

void lam9023_fptr() // lam9023
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9024 = arg_buffer[1];
    // reading env and args
    void *xy8410 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9024);
    void *kont8665 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8665);
    arg_buffer[2] = xy8410;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8665))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9023 = encode_clo(alloc_clo(lam9023_fptr, 0));

void my_u45for_fptr() // my-for
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9025 = arg_buffer[1];
    // reading env and args
    void *kont8665 = arg_buffer[2];
    void *lo = arg_buffer[3];
    void *hi = arg_buffer[4];
    void *f = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9668 = alloc_clo(lam9023_fptr, 1);

    // setting env list
    clo9668[1] = kont8665;
    void *f8666 = encode_clo(clo9668);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45for_u45aux);
    arg_buffer[2] = f8666;
    arg_buffer[3] = lo;
    arg_buffer[4] = hi;
    arg_buffer[5] = f;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45for_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *my_u45for = encode_clo(alloc_clo(my_u45for_fptr, 0));

void lam9026_fptr() // lam9026
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9027 = arg_buffer[1];
    // reading env and args
    void *a8411 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9027);
    void *kont8667 = decode_clo_array[4];
    void *lists = decode_clo_array[3];
    void *append = decode_clo_array[2];
    void *my_u45foldr = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45foldr);
    arg_buffer[2] = kont8667;
    arg_buffer[3] = append;
    arg_buffer[4] = a8411;
    arg_buffer[5] = lists;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45foldr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9026 = encode_clo(alloc_clo(lam9026_fptr, 0));

void concat_fptr() // concat
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9028 = arg_buffer[1];
    // reading env and args
    void *kont8667 = arg_buffer[2];
    void *lists = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9669 = alloc_clo(lam9026_fptr, 4);

    // setting env list
    clo9669[1] = my_u45foldr;
    clo9669[2] = append;
    clo9669[3] = lists;
    clo9669[4] = kont8667;
    void *f8668 = encode_clo(clo9669);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8668;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *concat = encode_clo(alloc_clo(concat_fptr, 0));

void lam9029_fptr() // lam9029
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9030 = arg_buffer[1];
    // reading env and args
    void *xy8414 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9030);
    void *kont8669 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8669);
    arg_buffer[2] = xy8414;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8669))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9029 = encode_clo(alloc_clo(lam9029_fptr, 0));

void lam9031_fptr() // lam9031
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9032 = arg_buffer[1];
    // reading env and args
    void *a8417 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9032);
    void *kont8669 = decode_clo_array[3];
    void *a8415 = decode_clo_array[2];
    void *list_u45read = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45read);
    arg_buffer[2] = kont8669;
    arg_buffer[3] = a8415;
    arg_buffer[4] = a8417;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9031 = encode_clo(alloc_clo(lam9031_fptr, 0));

void lam9034_fptr() // lam9034
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9035 = arg_buffer[1];
    // reading env and args
    void *a8415 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9035);
    void *kont8669 = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *list_u45read = decode_clo_array[1];
    mpz_t *mpzvar9670 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9670, "1", 10);
    void *a8416 = encode_mpz(mpzvar9670);

    // creating new closure instance
    void **clo9671 = alloc_clo(lam9031_fptr, 3);

    // setting env list
    clo9671[1] = list_u45read;
    clo9671[2] = a8415;
    clo9671[3] = kont8669;
    void *f8671 = encode_clo(clo9671);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8671;
    arg_buffer[3] = i;
    arg_buffer[4] = a8416;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9034 = encode_clo(alloc_clo(lam9034_fptr, 0));

void lam9036_fptr() // lam9036
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9037 = arg_buffer[1];
    // reading env and args
    void *a8413 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9037);
    void *cdr = decode_clo_array[7];
    void *kont8669 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *list_u45read = decode_clo_array[1];

    // if-clause
    bool if_guard9672 = is_true(a8413);
    if (if_guard9672)
    {

        // creating new closure instance
        void **clo9673 = alloc_clo(lam9029_fptr, 1);

        // setting env list
        clo9673[1] = kont8669;
        void *f8670 = encode_clo(clo9673);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8670;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9674 = alloc_clo(lam9034_fptr, 4);

        // setting env list
        clo9674[1] = list_u45read;
        clo9674[2] = i;
        clo9674[3] = _u45;
        clo9674[4] = kont8669;
        void *f8672 = encode_clo(clo9674);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8672;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9036 = encode_clo(alloc_clo(lam9036_fptr, 0));

void list_u45read_fptr() // list-read
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9039 = arg_buffer[1];
    // reading env and args
    void *kont8669 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *i = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9675 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9675, "0", 10);
    void *a8412 = encode_mpz(mpzvar9675);

    // creating new closure instance
    void **clo9676 = alloc_clo(lam9036_fptr, 7);

    // setting env list
    void *list_u45read = encode_clo(alloc_clo(list_u45read_fptr, 0));

    clo9676[1] = list_u45read;
    clo9676[2] = i;
    clo9676[3] = _u45;
    clo9676[4] = car;
    clo9676[5] = lst;
    clo9676[6] = kont8669;
    clo9676[7] = cdr;
    void *f8673 = encode_clo(clo9676);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8673;
    arg_buffer[3] = i;
    arg_buffer[4] = a8412;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list_u45read = encode_clo(alloc_clo(list_u45read_fptr, 0));

void lam9040_fptr() // lam9040
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9041 = arg_buffer[1];
    // reading env and args
    void *a8420 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9041);
    void *val = decode_clo_array[3];
    void *kont8674 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8674;
    arg_buffer[3] = val;
    arg_buffer[4] = a8420;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9040 = encode_clo(alloc_clo(lam9040_fptr, 0));

void lam9042_fptr() // lam9042
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9043 = arg_buffer[1];
    // reading env and args
    void *a8425 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9043);
    void *kont8674 = decode_clo_array[3];
    void *a8421 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8674;
    arg_buffer[3] = a8421;
    arg_buffer[4] = a8425;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9042 = encode_clo(alloc_clo(lam9042_fptr, 0));

void lam9044_fptr() // lam9044
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9045 = arg_buffer[1];
    // reading env and args
    void *a8424 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9045);
    void *val = decode_clo_array[6];
    void *kont8674 = decode_clo_array[5];
    void *a8421 = decode_clo_array[4];
    void *a8422 = decode_clo_array[3];
    void *list_u45write = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9677 = alloc_clo(lam9042_fptr, 3);

    // setting env list
    clo9677[1] = cons;
    clo9677[2] = a8421;
    clo9677[3] = kont8674;
    void *f8676 = encode_clo(clo9677);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45write);
    arg_buffer[2] = f8676;
    arg_buffer[3] = a8422;
    arg_buffer[4] = a8424;
    arg_buffer[5] = val;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45write))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9044 = encode_clo(alloc_clo(lam9044_fptr, 0));

void lam9047_fptr() // lam9047
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9048 = arg_buffer[1];
    // reading env and args
    void *a8422 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9048);
    void *val = decode_clo_array[7];
    void *kont8674 = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *a8421 = decode_clo_array[4];
    void *list_u45write = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];
    mpz_t *mpzvar9678 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9678, "1", 10);
    void *a8423 = encode_mpz(mpzvar9678);

    // creating new closure instance
    void **clo9679 = alloc_clo(lam9044_fptr, 6);

    // setting env list
    clo9679[1] = cons;
    clo9679[2] = list_u45write;
    clo9679[3] = a8422;
    clo9679[4] = a8421;
    clo9679[5] = kont8674;
    clo9679[6] = val;
    void *f8677 = encode_clo(clo9679);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8677;
    arg_buffer[3] = i;
    arg_buffer[4] = a8423;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9047 = encode_clo(alloc_clo(lam9047_fptr, 0));

void lam9049_fptr() // lam9049
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9050 = arg_buffer[1];
    // reading env and args
    void *a8421 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9050);
    void *cdr = decode_clo_array[8];
    void *val = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *kont8674 = decode_clo_array[5];
    void *i = decode_clo_array[4];
    void *list_u45write = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];

    // creating new closure instance
    void **clo9680 = alloc_clo(lam9047_fptr, 7);

    // setting env list
    clo9680[1] = _u45;
    clo9680[2] = cons;
    clo9680[3] = list_u45write;
    clo9680[4] = a8421;
    clo9680[5] = i;
    clo9680[6] = kont8674;
    clo9680[7] = val;
    void *f8678 = encode_clo(clo9680);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8678;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9049 = encode_clo(alloc_clo(lam9049_fptr, 0));

void lam9051_fptr() // lam9051
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9052 = arg_buffer[1];
    // reading env and args
    void *a8419 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9052);
    void *cdr = decode_clo_array[9];
    void *val = decode_clo_array[8];
    void *lst = decode_clo_array[7];
    void *kont8674 = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *list_u45write = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9681 = is_true(a8419);
    if (if_guard9681)
    {

        // creating new closure instance
        void **clo9682 = alloc_clo(lam9040_fptr, 3);

        // setting env list
        clo9682[1] = cons;
        clo9682[2] = kont8674;
        clo9682[3] = val;
        void *f8675 = encode_clo(clo9682);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8675;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9683 = alloc_clo(lam9049_fptr, 8);

        // setting env list
        clo9683[1] = _u45;
        clo9683[2] = cons;
        clo9683[3] = list_u45write;
        clo9683[4] = i;
        clo9683[5] = kont8674;
        clo9683[6] = lst;
        clo9683[7] = val;
        clo9683[8] = cdr;
        void *f8679 = encode_clo(clo9683);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8679;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9051 = encode_clo(alloc_clo(lam9051_fptr, 0));

void list_u45write_fptr() // list-write
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9054 = arg_buffer[1];
    // reading env and args
    void *kont8674 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *i = arg_buffer[4];
    void *val = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9684 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9684, "0", 10);
    void *a8418 = encode_mpz(mpzvar9684);

    // creating new closure instance
    void **clo9685 = alloc_clo(lam9051_fptr, 9);

    // setting env list
    clo9685[1] = car;
    void *list_u45write = encode_clo(alloc_clo(list_u45write_fptr, 0));

    clo9685[2] = list_u45write;
    clo9685[3] = _u45;
    clo9685[4] = cons;
    clo9685[5] = i;
    clo9685[6] = kont8674;
    clo9685[7] = lst;
    clo9685[8] = val;
    clo9685[9] = cdr;
    void *f8680 = encode_clo(clo9685);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8680;
    arg_buffer[3] = i;
    arg_buffer[4] = a8418;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list_u45write = encode_clo(alloc_clo(list_u45write_fptr, 0));

void lam9055_fptr() // lam9055
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9056 = arg_buffer[1];
    // reading env and args
    void *xy8428 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9056);
    void *kont8681 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8681);
    arg_buffer[2] = xy8428;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8681))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9055 = encode_clo(alloc_clo(lam9055_fptr, 0));

void lam9057_fptr() // lam9057
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9058 = arg_buffer[1];
    // reading env and args
    void *a8433 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9058);
    void *a8429 = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *kont8681 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8681;
    arg_buffer[3] = a8429;
    arg_buffer[4] = a8433;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9057 = encode_clo(alloc_clo(lam9057_fptr, 0));

void lam9059_fptr() // lam9059
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9060 = arg_buffer[1];
    // reading env and args
    void *a8432 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9060);
    void *a8429 = decode_clo_array[5];
    void *a8430 = decode_clo_array[4];
    void *list_u45remove_u45pos = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *kont8681 = decode_clo_array[1];

    // creating new closure instance
    void **clo9686 = alloc_clo(lam9057_fptr, 3);

    // setting env list
    clo9686[1] = kont8681;
    clo9686[2] = cons;
    clo9686[3] = a8429;
    void *f8683 = encode_clo(clo9686);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45remove_u45pos);
    arg_buffer[2] = f8683;
    arg_buffer[3] = a8430;
    arg_buffer[4] = a8432;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45remove_u45pos))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9059 = encode_clo(alloc_clo(lam9059_fptr, 0));

void lam9062_fptr() // lam9062
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9063 = arg_buffer[1];
    // reading env and args
    void *a8430 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9063);
    void *a8429 = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *list_u45remove_u45pos = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *kont8681 = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];
    mpz_t *mpzvar9687 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9687, "1", 10);
    void *a8431 = encode_mpz(mpzvar9687);

    // creating new closure instance
    void **clo9688 = alloc_clo(lam9059_fptr, 5);

    // setting env list
    clo9688[1] = kont8681;
    clo9688[2] = cons;
    clo9688[3] = list_u45remove_u45pos;
    clo9688[4] = a8430;
    clo9688[5] = a8429;
    void *f8684 = encode_clo(clo9688);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8684;
    arg_buffer[3] = i;
    arg_buffer[4] = a8431;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9062 = encode_clo(alloc_clo(lam9062_fptr, 0));

void lam9064_fptr() // lam9064
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9065 = arg_buffer[1];
    // reading env and args
    void *a8429 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9065);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *list_u45remove_u45pos = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *kont8681 = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];

    // creating new closure instance
    void **clo9689 = alloc_clo(lam9062_fptr, 6);

    // setting env list
    clo9689[1] = _u45;
    clo9689[2] = kont8681;
    clo9689[3] = cons;
    clo9689[4] = list_u45remove_u45pos;
    clo9689[5] = i;
    clo9689[6] = a8429;
    void *f8685 = encode_clo(clo9689);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8685;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9064 = encode_clo(alloc_clo(lam9064_fptr, 0));

void lam9066_fptr() // lam9066
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9067 = arg_buffer[1];
    // reading env and args
    void *a8427 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9067);
    void *cdr = decode_clo_array[8];
    void *lst = decode_clo_array[7];
    void *i = decode_clo_array[6];
    void *list_u45remove_u45pos = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *kont8681 = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];

    // if-clause
    bool if_guard9690 = is_true(a8427);
    if (if_guard9690)
    {

        // creating new closure instance
        void **clo9691 = alloc_clo(lam9055_fptr, 1);

        // setting env list
        clo9691[1] = kont8681;
        void *f8682 = encode_clo(clo9691);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8682;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9692 = alloc_clo(lam9064_fptr, 7);

        // setting env list
        clo9692[1] = _u45;
        clo9692[2] = kont8681;
        clo9692[3] = cons;
        clo9692[4] = list_u45remove_u45pos;
        clo9692[5] = i;
        clo9692[6] = lst;
        clo9692[7] = cdr;
        void *f8686 = encode_clo(clo9692);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8686;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9066 = encode_clo(alloc_clo(lam9066_fptr, 0));

void list_u45remove_u45pos_fptr() // list-remove-pos
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9069 = arg_buffer[1];
    // reading env and args
    void *kont8681 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *i = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9693 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9693, "0", 10);
    void *a8426 = encode_mpz(mpzvar9693);

    // creating new closure instance
    void **clo9694 = alloc_clo(lam9066_fptr, 8);

    // setting env list
    clo9694[1] = _u45;
    clo9694[2] = kont8681;
    clo9694[3] = cons;
    clo9694[4] = car;
    void *list_u45remove_u45pos = encode_clo(alloc_clo(list_u45remove_u45pos_fptr, 0));

    clo9694[5] = list_u45remove_u45pos;
    clo9694[6] = i;
    clo9694[7] = lst;
    clo9694[8] = cdr;
    void *f8687 = encode_clo(clo9694);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u61);
    arg_buffer[2] = f8687;
    arg_buffer[3] = i;
    arg_buffer[4] = a8426;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *list_u45remove_u45pos = encode_clo(alloc_clo(list_u45remove_u45pos_fptr, 0));

void lam9071_fptr() // lam9071
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9072 = arg_buffer[1];
    // reading env and args
    void *a8440 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9072);
    void *member = decode_clo_array[3];
    void *kont8688 = decode_clo_array[2];
    void *a8439 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member);
    arg_buffer[2] = kont8688;
    arg_buffer[3] = a8439;
    arg_buffer[4] = a8440;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9071 = encode_clo(alloc_clo(lam9071_fptr, 0));

void lam9073_fptr() // lam9073
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9074 = arg_buffer[1];
    // reading env and args
    void *a8439 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9074);
    void *cdr = decode_clo_array[4];
    void *member = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *kont8688 = decode_clo_array[1];

    // creating new closure instance
    void **clo9695 = alloc_clo(lam9071_fptr, 3);

    // setting env list
    clo9695[1] = a8439;
    clo9695[2] = kont8688;
    clo9695[3] = member;
    void *f8689 = encode_clo(clo9695);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8689;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9073 = encode_clo(alloc_clo(lam9073_fptr, 0));

void lam9075_fptr() // lam9075
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9076 = arg_buffer[1];
    // reading env and args
    void *a8441 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9076);
    void *kont8688 = decode_clo_array[2];
    void *duplicates_u63 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(duplicates_u63);
    arg_buffer[2] = kont8688;
    arg_buffer[3] = a8441;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(duplicates_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9075 = encode_clo(alloc_clo(lam9075_fptr, 0));

void lam9077_fptr() // lam9077
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9078 = arg_buffer[1];
    // reading env and args
    void *a8438 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9078);
    void *cdr = decode_clo_array[6];
    void *member = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *kont8688 = decode_clo_array[3];
    void *duplicates_u63 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9696 = is_true(a8438);
    if (if_guard9696)
    {

        // creating new closure instance
        void **clo9697 = alloc_clo(lam9073_fptr, 4);

        // setting env list
        clo9697[1] = kont8688;
        clo9697[2] = lst;
        clo9697[3] = member;
        clo9697[4] = cdr;
        void *f8690 = encode_clo(clo9697);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8690;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9698 = alloc_clo(lam9075_fptr, 2);

        // setting env list
        clo9698[1] = duplicates_u63;
        clo9698[2] = kont8688;
        void *f8691 = encode_clo(clo9698);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cdr);
        arg_buffer[2] = f8691;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9077 = encode_clo(alloc_clo(lam9077_fptr, 0));

void lam9079_fptr() // lam9079
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9080 = arg_buffer[1];
    // reading env and args
    void *a8437 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9080);
    void *cdr = decode_clo_array[7];
    void *member = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *kont8688 = decode_clo_array[4];
    void *a8436 = decode_clo_array[3];
    void *duplicates_u63 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo9699 = alloc_clo(lam9077_fptr, 6);

    // setting env list
    clo9699[1] = car;
    clo9699[2] = duplicates_u63;
    clo9699[3] = kont8688;
    clo9699[4] = lst;
    clo9699[5] = member;
    clo9699[6] = cdr;
    void *f8692 = encode_clo(clo9699);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(member);
    arg_buffer[2] = f8692;
    arg_buffer[3] = a8436;
    arg_buffer[4] = a8437;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9079 = encode_clo(alloc_clo(lam9079_fptr, 0));

void lam9081_fptr() // lam9081
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9082 = arg_buffer[1];
    // reading env and args
    void *a8436 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9082);
    void *cdr = decode_clo_array[6];
    void *member = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *kont8688 = decode_clo_array[3];
    void *duplicates_u63 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo9700 = alloc_clo(lam9079_fptr, 7);

    // setting env list
    clo9700[1] = car;
    clo9700[2] = duplicates_u63;
    clo9700[3] = a8436;
    clo9700[4] = kont8688;
    clo9700[5] = lst;
    clo9700[6] = member;
    clo9700[7] = cdr;
    void *f8693 = encode_clo(clo9700);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8693;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9081 = encode_clo(alloc_clo(lam9081_fptr, 0));

void lam9083_fptr() // lam9083
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9084 = arg_buffer[1];
    // reading env and args
    void *a8434 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9084);
    void *cdr = decode_clo_array[6];
    void *member = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *kont8688 = decode_clo_array[3];
    void *duplicates_u63 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9701 = is_true(a8434);
    if (if_guard9701)
    {
        void *xy8435 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8688);
        arg_buffer[2] = xy8435;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8688))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9702 = alloc_clo(lam9081_fptr, 6);

        // setting env list
        clo9702[1] = car;
        clo9702[2] = duplicates_u63;
        clo9702[3] = kont8688;
        clo9702[4] = lst;
        clo9702[5] = member;
        clo9702[6] = cdr;
        void *f8694 = encode_clo(clo9702);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8694;
        arg_buffer[3] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9083 = encode_clo(alloc_clo(lam9083_fptr, 0));

void duplicates_u63_fptr() // duplicates?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9085 = arg_buffer[1];
    // reading env and args
    void *kont8688 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9703 = alloc_clo(lam9083_fptr, 6);

    // setting env list
    clo9703[1] = car;
    void *duplicates_u63 = encode_clo(alloc_clo(duplicates_u63_fptr, 0));

    clo9703[2] = duplicates_u63;
    clo9703[3] = kont8688;
    clo9703[4] = lst;
    clo9703[5] = member;
    clo9703[6] = cdr;
    void *f8695 = encode_clo(clo9703);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8695;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *duplicates_u63 = encode_clo(alloc_clo(duplicates_u63_fptr, 0));

void lam9086_fptr() // lam9086
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9087 = arg_buffer[1];
    // reading env and args
    void *cont8698 = arg_buffer[2];
    void *j = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9087);
    void *init = decode_clo_array[2];
    void *i = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(init);
    arg_buffer[2] = cont8698;
    arg_buffer[3] = i;
    arg_buffer[4] = j;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(init))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9086 = encode_clo(alloc_clo(lam9086_fptr, 0));

void lam9089_fptr() // lam9089
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9090 = arg_buffer[1];
    // reading env and args
    void *cont8697 = arg_buffer[2];
    void *i = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9090);
    void *init = decode_clo_array[3];
    void *my_u45for = decode_clo_array[2];
    void *m = decode_clo_array[1];
    mpz_t *mpzvar9704 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9704, "0", 10);
    void *a8443 = encode_mpz(mpzvar9704);

    // creating new closure instance
    void **clo9705 = alloc_clo(lam9086_fptr, 2);

    // setting env list
    clo9705[1] = i;
    clo9705[2] = init;
    void *a8444 = encode_clo(clo9705);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45for);
    arg_buffer[2] = cont8697;
    arg_buffer[3] = a8443;
    arg_buffer[4] = m;
    arg_buffer[5] = a8444;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45for))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9089 = encode_clo(alloc_clo(lam9089_fptr, 0));

void make_u45matrix_fptr() // make-matrix
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9092 = arg_buffer[1];
    // reading env and args
    void *kont8696 = arg_buffer[2];
    void *n = arg_buffer[3];
    void *m = arg_buffer[4];
    void *init = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9706 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9706, "0", 10);
    void *a8442 = encode_mpz(mpzvar9706);

    // creating new closure instance
    void **clo9707 = alloc_clo(lam9089_fptr, 3);

    // setting env list
    clo9707[1] = m;
    clo9707[2] = my_u45for;
    clo9707[3] = init;
    void *a8445 = encode_clo(clo9707);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45for);
    arg_buffer[2] = kont8696;
    arg_buffer[3] = a8442;
    arg_buffer[4] = n;
    arg_buffer[5] = a8445;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45for))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *make_u45matrix = encode_clo(alloc_clo(make_u45matrix_fptr, 0));

void lam9093_fptr() // lam9093
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9094 = arg_buffer[1];
    // reading env and args
    void *a8446 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9094);
    void *kont8699 = decode_clo_array[3];
    void *j = decode_clo_array[2];
    void *list_u45read = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45read);
    arg_buffer[2] = kont8699;
    arg_buffer[3] = a8446;
    arg_buffer[4] = j;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9093 = encode_clo(alloc_clo(lam9093_fptr, 0));

void matrix_u45read_fptr() // matrix-read
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9095 = arg_buffer[1];
    // reading env and args
    void *kont8699 = arg_buffer[2];
    void *mat = arg_buffer[3];
    void *i = arg_buffer[4];
    void *j = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9708 = alloc_clo(lam9093_fptr, 3);

    // setting env list
    clo9708[1] = list_u45read;
    clo9708[2] = j;
    clo9708[3] = kont8699;
    void *f8700 = encode_clo(clo9708);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45read);
    arg_buffer[2] = f8700;
    arg_buffer[3] = mat;
    arg_buffer[4] = i;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *matrix_u45read = encode_clo(alloc_clo(matrix_u45read_fptr, 0));

void lam9096_fptr() // lam9096
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9097 = arg_buffer[1];
    // reading env and args
    void *a8448 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9097);
    void *mat = decode_clo_array[4];
    void *kont8701 = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *list_u45write = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45write);
    arg_buffer[2] = kont8701;
    arg_buffer[3] = mat;
    arg_buffer[4] = i;
    arg_buffer[5] = a8448;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45write))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9096 = encode_clo(alloc_clo(lam9096_fptr, 0));

void lam9098_fptr() // lam9098
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9099 = arg_buffer[1];
    // reading env and args
    void *a8447 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9099);
    void *mat = decode_clo_array[6];
    void *val = decode_clo_array[5];
    void *kont8701 = decode_clo_array[4];
    void *j = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *list_u45write = decode_clo_array[1];

    // creating new closure instance
    void **clo9709 = alloc_clo(lam9096_fptr, 4);

    // setting env list
    clo9709[1] = list_u45write;
    clo9709[2] = i;
    clo9709[3] = kont8701;
    clo9709[4] = mat;
    void *f8702 = encode_clo(clo9709);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45write);
    arg_buffer[2] = f8702;
    arg_buffer[3] = a8447;
    arg_buffer[4] = j;
    arg_buffer[5] = val;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45write))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9098 = encode_clo(alloc_clo(lam9098_fptr, 0));

void matrix_u45write_fptr() // matrix-write
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9100 = arg_buffer[1];
    // reading env and args
    void *kont8701 = arg_buffer[2];
    void *mat = arg_buffer[3];
    void *i = arg_buffer[4];
    void *j = arg_buffer[5];
    void *val = arg_buffer[6];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9710 = alloc_clo(lam9098_fptr, 6);

    // setting env list
    clo9710[1] = list_u45write;
    clo9710[2] = i;
    clo9710[3] = j;
    clo9710[4] = kont8701;
    clo9710[5] = val;
    clo9710[6] = mat;
    void *f8703 = encode_clo(clo9710);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45read);
    arg_buffer[2] = f8703;
    arg_buffer[3] = mat;
    arg_buffer[4] = i;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *matrix_u45write = encode_clo(alloc_clo(matrix_u45write_fptr, 0));

void lam9101_fptr() // lam9101
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9102 = arg_buffer[1];
    // reading env and args
    void *a8451 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9102);
    void *kont8704 = decode_clo_array[3];
    void *a8449 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8704;
    arg_buffer[3] = a8449;
    arg_buffer[4] = a8451;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9101 = encode_clo(alloc_clo(lam9101_fptr, 0));

void lam9103_fptr() // lam9103
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9104 = arg_buffer[1];
    // reading env and args
    void *a8450 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9104);
    void *length = decode_clo_array[4];
    void *kont8704 = decode_clo_array[3];
    void *a8449 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9711 = alloc_clo(lam9101_fptr, 3);

    // setting env list
    clo9711[1] = cons;
    clo9711[2] = a8449;
    clo9711[3] = kont8704;
    void *f8705 = encode_clo(clo9711);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8705;
    arg_buffer[3] = a8450;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9103 = encode_clo(alloc_clo(lam9103_fptr, 0));

void lam9105_fptr() // lam9105
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9106 = arg_buffer[1];
    // reading env and args
    void *a8449 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9106);
    void *mat = decode_clo_array[5];
    void *length = decode_clo_array[4];
    void *kont8704 = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9712 = alloc_clo(lam9103_fptr, 4);

    // setting env list
    clo9712[1] = cons;
    clo9712[2] = a8449;
    clo9712[3] = kont8704;
    clo9712[4] = length;
    void *f8706 = encode_clo(clo9712);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8706;
    arg_buffer[3] = mat;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9105 = encode_clo(alloc_clo(lam9105_fptr, 0));

void matrix_u45size_fptr() // matrix-size
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9107 = arg_buffer[1];
    // reading env and args
    void *kont8704 = arg_buffer[2];
    void *mat = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9713 = alloc_clo(lam9105_fptr, 5);

    // setting env list
    clo9713[1] = cons;
    clo9713[2] = car;
    clo9713[3] = kont8704;
    clo9713[4] = length;
    clo9713[5] = mat;
    void *f8707 = encode_clo(clo9713);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8707;
    arg_buffer[3] = mat;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *matrix_u45size = encode_clo(alloc_clo(matrix_u45size_fptr, 0));

void lam9108_fptr() // lam9108
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9109 = arg_buffer[1];
    // reading env and args
    void *cont8709 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9109);
    void *map = decode_clo_array[2];
    void *f = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = cont8709;
    arg_buffer[3] = f;
    arg_buffer[4] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9108 = encode_clo(alloc_clo(lam9108_fptr, 0));

void matrix_u45map_fptr() // matrix-map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9110 = arg_buffer[1];
    // reading env and args
    void *kont8708 = arg_buffer[2];
    void *f = arg_buffer[3];
    void *mat = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9714 = alloc_clo(lam9108_fptr, 2);

    // setting env list
    clo9714[1] = f;
    clo9714[2] = map;
    void *a8452 = encode_clo(clo9714);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = kont8708;
    arg_buffer[3] = a8452;
    arg_buffer[4] = mat;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *matrix_u45map = encode_clo(alloc_clo(matrix_u45map_fptr, 0));

void initial_u45random_fptr() // initial-random
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9112 = arg_buffer[1];
    // reading env and args
    void *kont8710 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9715 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9715, "0", 10);
    void *xy8453 = encode_mpz(mpzvar9715);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8710);
    arg_buffer[2] = xy8453;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8710))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *initial_u45random = encode_clo(alloc_clo(initial_u45random_fptr, 0));

void lam9114_fptr() // lam9114
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9115 = arg_buffer[1];
    // reading env and args
    void *a8457 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9115);
    void *remainder = decode_clo_array[2];
    void *kont8711 = decode_clo_array[1];
    mpz_t *mpzvar9716 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9716, "131072", 10);
    void *a8458 = encode_mpz(mpzvar9716);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(remainder);
    arg_buffer[2] = kont8711;
    arg_buffer[3] = a8457;
    arg_buffer[4] = a8458;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(remainder))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9114 = encode_clo(alloc_clo(lam9114_fptr, 0));

void lam9117_fptr() // lam9117
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9118 = arg_buffer[1];
    // reading env and args
    void *a8455 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9118);
    void *remainder = decode_clo_array[3];
    void *_u43 = decode_clo_array[2];
    void *kont8711 = decode_clo_array[1];
    mpz_t *mpzvar9717 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9717, "12751", 10);
    void *a8456 = encode_mpz(mpzvar9717);

    // creating new closure instance
    void **clo9718 = alloc_clo(lam9114_fptr, 2);

    // setting env list
    clo9718[1] = kont8711;
    clo9718[2] = remainder_brouhaha;
    void *f8712 = encode_clo(clo9718);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u43);
    arg_buffer[2] = f8712;
    arg_buffer[3] = a8455;
    arg_buffer[4] = a8456;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9117 = encode_clo(alloc_clo(lam9117_fptr, 0));

void next_u45random_fptr() // next-random
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9120 = arg_buffer[1];
    // reading env and args
    void *kont8711 = arg_buffer[2];
    void *current_u45random = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9719 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9719, "3581", 10);
    void *a8454 = encode_mpz(mpzvar9719);

    // creating new closure instance
    void **clo9720 = alloc_clo(lam9117_fptr, 3);

    // setting env list
    clo9720[1] = kont8711;
    clo9720[2] = _u43;
    clo9720[3] = remainder_brouhaha;
    void *f8713 = encode_clo(clo9720);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u42);
    arg_buffer[2] = f8713;
    arg_buffer[3] = current_u45random;
    arg_buffer[4] = a8454;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *next_u45random = encode_clo(alloc_clo(next_u45random_fptr, 0));

void lam9121_fptr() // lam9121
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9122 = arg_buffer[1];
    // reading env and args
    void *xy8460 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9122);
    void *kont8714 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(kont8714);
    arg_buffer[2] = xy8460;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8714))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9121 = encode_clo(alloc_clo(lam9121_fptr, 0));

void lam9123_fptr() // lam9123
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9124 = arg_buffer[1];
    // reading env and args
    void *a8461 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9124);
    void *remainder = decode_clo_array[3];
    void *f8719 = decode_clo_array[2];
    void *new_u45random = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(remainder);
    arg_buffer[2] = f8719;
    arg_buffer[3] = new_u45random;
    arg_buffer[4] = a8461;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(remainder))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9123 = encode_clo(alloc_clo(lam9123_fptr, 0));

void lam9125_fptr() // lam9125
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9126 = arg_buffer[1];
    // reading env and args
    void *a8464 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9126);
    void *kont8714 = decode_clo_array[3];
    void *a8462 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = kont8714;
    arg_buffer[3] = a8462;
    arg_buffer[4] = a8464;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9125 = encode_clo(alloc_clo(lam9125_fptr, 0));

void lam9127_fptr() // lam9127
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9128 = arg_buffer[1];
    // reading env and args
    void *a8463 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9128);
    void *kont8714 = decode_clo_array[5];
    void *a8462 = decode_clo_array[4];
    void *shuffle_u45aux = decode_clo_array[3];
    void *new_u45random = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9721 = alloc_clo(lam9125_fptr, 3);

    // setting env list
    clo9721[1] = cons;
    clo9721[2] = a8462;
    clo9721[3] = kont8714;
    void *f8716 = encode_clo(clo9721);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(shuffle_u45aux);
    arg_buffer[2] = f8716;
    arg_buffer[3] = a8463;
    arg_buffer[4] = new_u45random;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(shuffle_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9127 = encode_clo(alloc_clo(lam9127_fptr, 0));

void lam9129_fptr() // lam9129
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9130 = arg_buffer[1];
    // reading env and args
    void *a8462 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9130);
    void *kont8714 = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *shuffle_u45aux = decode_clo_array[5];
    void *i = decode_clo_array[4];
    void *new_u45random = decode_clo_array[3];
    void *list_u45remove_u45pos = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9722 = alloc_clo(lam9127_fptr, 5);

    // setting env list
    clo9722[1] = cons;
    clo9722[2] = new_u45random;
    clo9722[3] = shuffle_u45aux;
    clo9722[4] = a8462;
    clo9722[5] = kont8714;
    void *f8717 = encode_clo(clo9722);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45remove_u45pos);
    arg_buffer[2] = f8717;
    arg_buffer[3] = lst;
    arg_buffer[4] = i;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45remove_u45pos))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9129 = encode_clo(alloc_clo(lam9129_fptr, 0));

void lam9131_fptr() // lam9131
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9132 = arg_buffer[1];
    // reading env and args
    void *i = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9132);
    void *kont8714 = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *shuffle_u45aux = decode_clo_array[5];
    void *list_u45read = decode_clo_array[4];
    void *new_u45random = decode_clo_array[3];
    void *list_u45remove_u45pos = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9723 = alloc_clo(lam9129_fptr, 7);

    // setting env list
    clo9723[1] = cons;
    clo9723[2] = list_u45remove_u45pos;
    clo9723[3] = new_u45random;
    clo9723[4] = i;
    clo9723[5] = shuffle_u45aux;
    clo9723[6] = lst;
    clo9723[7] = kont8714;
    void *f8718 = encode_clo(clo9723);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list_u45read);
    arg_buffer[2] = f8718;
    arg_buffer[3] = lst;
    arg_buffer[4] = i;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9131 = encode_clo(alloc_clo(lam9131_fptr, 0));

void lam9133_fptr() // lam9133
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9134 = arg_buffer[1];
    // reading env and args
    void *new_u45random = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9134);
    void *kont8714 = decode_clo_array[8];
    void *remainder = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *length = decode_clo_array[5];
    void *shuffle_u45aux = decode_clo_array[4];
    void *list_u45read = decode_clo_array[3];
    void *list_u45remove_u45pos = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9724 = alloc_clo(lam9131_fptr, 7);

    // setting env list
    clo9724[1] = cons;
    clo9724[2] = list_u45remove_u45pos;
    clo9724[3] = new_u45random;
    clo9724[4] = list_u45read;
    clo9724[5] = shuffle_u45aux;
    clo9724[6] = lst;
    clo9724[7] = kont8714;
    void *f8719 = encode_clo(clo9724);

    // creating new closure instance
    void **clo9725 = alloc_clo(lam9123_fptr, 3);

    // setting env list
    clo9725[1] = new_u45random;
    clo9725[2] = f8719;
    clo9725[3] = remainder_brouhaha;
    void *f8720 = encode_clo(clo9725);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(length);
    arg_buffer[2] = f8720;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9133 = encode_clo(alloc_clo(lam9133_fptr, 0));

void lam9135_fptr() // lam9135
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9136 = arg_buffer[1];
    // reading env and args
    void *a8459 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9136);
    void *remainder = decode_clo_array[11];
    void *lst = decode_clo_array[10];
    void *length = decode_clo_array[9];
    void *next_u45random = decode_clo_array[8];
    void *shuffle_u45aux = decode_clo_array[7];
    void *list_u45read = decode_clo_array[6];
    void *list_u45remove_u45pos = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *kont8714 = decode_clo_array[3];
    void *current_u45random = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // if-clause
    bool if_guard9726 = is_true(a8459);
    if (if_guard9726)
    {

        // creating new closure instance
        void **clo9727 = alloc_clo(lam9121_fptr, 1);

        // setting env list
        clo9727[1] = kont8714;
        void *f8715 = encode_clo(clo9727);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8715;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9728 = alloc_clo(lam9133_fptr, 8);

        // setting env list
        clo9728[1] = cons;
        clo9728[2] = list_u45remove_u45pos;
        clo9728[3] = list_u45read;
        clo9728[4] = shuffle_u45aux;
        clo9728[5] = length;
        clo9728[6] = lst;
        clo9728[7] = remainder_brouhaha;
        clo9728[8] = kont8714;
        void *f8721 = encode_clo(clo9728);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(next_u45random);
        arg_buffer[2] = f8721;
        arg_buffer[3] = current_u45random;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(next_u45random))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9135 = encode_clo(alloc_clo(lam9135_fptr, 0));

void shuffle_u45aux_fptr() // shuffle-aux
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9137 = arg_buffer[1];
    // reading env and args
    void *kont8714 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *current_u45random = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9729 = alloc_clo(lam9135_fptr, 11);

    // setting env list
    clo9729[1] = cons;
    clo9729[2] = current_u45random;
    clo9729[3] = kont8714;
    clo9729[4] = list;
    clo9729[5] = list_u45remove_u45pos;
    clo9729[6] = list_u45read;
    void *shuffle_u45aux = encode_clo(alloc_clo(shuffle_u45aux_fptr, 0));

    clo9729[7] = shuffle_u45aux;
    clo9729[8] = next_u45random;
    clo9729[9] = length;
    clo9729[10] = lst;
    clo9729[11] = remainder_brouhaha;
    void *f8722 = encode_clo(clo9729);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8722;
    arg_buffer[3] = lst;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *shuffle_u45aux = encode_clo(alloc_clo(shuffle_u45aux_fptr, 0));

void lam9138_fptr() // lam9138
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9139 = arg_buffer[1];
    // reading env and args
    void *a8465 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9139);
    void *lst = decode_clo_array[3];
    void *shuffle_u45aux = decode_clo_array[2];
    void *kont8723 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(shuffle_u45aux);
    arg_buffer[2] = kont8723;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8465;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(shuffle_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9138 = encode_clo(alloc_clo(lam9138_fptr, 0));

void shuffle_fptr() // shuffle
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9140 = arg_buffer[1];
    // reading env and args
    void *kont8723 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9730 = alloc_clo(lam9138_fptr, 3);

    // setting env list
    clo9730[1] = kont8723;
    clo9730[2] = shuffle_u45aux;
    clo9730[3] = lst;
    void *f8724 = encode_clo(clo9730);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(initial_u45random);
    arg_buffer[2] = f8724;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(initial_u45random))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *shuffle = encode_clo(alloc_clo(shuffle_fptr, 0));

void lam9143_fptr() // lam9143
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9144 = arg_buffer[1];
    // reading env and args
    void *cont8726 = arg_buffer[2];
    void *x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9144);

    // if-clause
    bool if_guard9731 = is_true(x);
    if (if_guard9731)
    {
        void *xy8466 = encode_str(new (GC) std::string("_"));

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cont8726);
        arg_buffer[2] = xy8466;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont8726))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8467 = encode_str(new (GC) std::string("*"));

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cont8726);
        arg_buffer[2] = xy8467;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont8726))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9143 = encode_clo(alloc_clo(lam9143_fptr, 0));

void cave_u45to_u45maze_fptr() // cave-to-maze
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9145 = arg_buffer[1];
    // reading env and args
    void *kont8725 = arg_buffer[2];
    void *cave = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9732 = alloc_clo(lam9143_fptr, 0);
    void *a8468 = encode_clo(clo9732);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45map);
    arg_buffer[2] = kont8725;
    arg_buffer[3] = a8468;
    arg_buffer[4] = cave;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45map))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *cave_u45to_u45maze = encode_clo(alloc_clo(cave_u45to_u45maze_fptr, 0));

void lam9146_fptr() // lam9146
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9147 = arg_buffer[1];
    // reading env and args
    void *a8472 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9147);
    void *matrix_u45read = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *j = decode_clo_array[2];
    void *f8755 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45read);
    arg_buffer[2] = f8755;
    arg_buffer[3] = cave;
    arg_buffer[4] = a8472;
    arg_buffer[5] = j;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9146 = encode_clo(alloc_clo(lam9146_fptr, 0));

void lam9150_fptr() // lam9150
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9151 = arg_buffer[1];
    // reading env and args
    void *a8477 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9151);
    void *list = decode_clo_array[2];
    void *f8751 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8751;
    arg_buffer[3] = a8477;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9150 = encode_clo(alloc_clo(lam9150_fptr, 0));

void lam9152_fptr() // lam9152
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9153 = arg_buffer[1];
    // reading env and args
    void *a8476 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9153);
    void *list = decode_clo_array[4];
    void *f8751 = decode_clo_array[3];
    void *j = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9733 = alloc_clo(lam9150_fptr, 2);

    // setting env list
    clo9733[1] = f8751;
    clo9733[2] = list;
    void *f8752 = encode_clo(clo9733);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8752;
    arg_buffer[3] = a8476;
    arg_buffer[4] = j;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9152 = encode_clo(alloc_clo(lam9152_fptr, 0));

void lam9155_fptr() // lam9155
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9156 = arg_buffer[1];
    // reading env and args
    void *xy8478 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9156);
    void *f8751 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8751);
    arg_buffer[2] = xy8478;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8751))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9155 = encode_clo(alloc_clo(lam9155_fptr, 0));

void lam9157_fptr() // lam9157
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9158 = arg_buffer[1];
    // reading env and args
    void *a8484 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9158);
    void *f8747 = decode_clo_array[4];
    void *j = decode_clo_array[3];
    void *matrix_u45read = decode_clo_array[2];
    void *cave = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45read);
    arg_buffer[2] = f8747;
    arg_buffer[3] = cave;
    arg_buffer[4] = a8484;
    arg_buffer[5] = j;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9157 = encode_clo(alloc_clo(lam9157_fptr, 0));

void lam9161_fptr() // lam9161
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9162 = arg_buffer[1];
    // reading env and args
    void *a8489 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9162);
    void *list = decode_clo_array[2];
    void *f8743 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8743;
    arg_buffer[3] = a8489;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9161 = encode_clo(alloc_clo(lam9161_fptr, 0));

void lam9163_fptr() // lam9163
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9164 = arg_buffer[1];
    // reading env and args
    void *a8488 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9164);
    void *list = decode_clo_array[4];
    void *j = decode_clo_array[3];
    void *f8743 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9734 = alloc_clo(lam9161_fptr, 2);

    // setting env list
    clo9734[1] = f8743;
    clo9734[2] = list;
    void *f8744 = encode_clo(clo9734);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8744;
    arg_buffer[3] = a8488;
    arg_buffer[4] = j;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9163 = encode_clo(alloc_clo(lam9163_fptr, 0));

void lam9166_fptr() // lam9166
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9167 = arg_buffer[1];
    // reading env and args
    void *xy8490 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9167);
    void *f8743 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8743);
    arg_buffer[2] = xy8490;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8743))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9166 = encode_clo(alloc_clo(lam9166_fptr, 0));

void lam9168_fptr() // lam9168
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9169 = arg_buffer[1];
    // reading env and args
    void *a8495 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9169);
    void *cave = decode_clo_array[4];
    void *f8740 = decode_clo_array[3];
    void *matrix_u45read = decode_clo_array[2];
    void *i = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45read);
    arg_buffer[2] = f8740;
    arg_buffer[3] = cave;
    arg_buffer[4] = i;
    arg_buffer[5] = a8495;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9168 = encode_clo(alloc_clo(lam9168_fptr, 0));

void lam9172_fptr() // lam9172
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9173 = arg_buffer[1];
    // reading env and args
    void *a8500 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9173);
    void *list = decode_clo_array[2];
    void *f8736 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8736;
    arg_buffer[3] = a8500;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9172 = encode_clo(alloc_clo(lam9172_fptr, 0));

void lam9174_fptr() // lam9174
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9175 = arg_buffer[1];
    // reading env and args
    void *a8499 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9175);
    void *list = decode_clo_array[4];
    void *f8736 = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9735 = alloc_clo(lam9172_fptr, 2);

    // setting env list
    clo9735[1] = f8736;
    clo9735[2] = list;
    void *f8737 = encode_clo(clo9735);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8737;
    arg_buffer[3] = i;
    arg_buffer[4] = a8499;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9174 = encode_clo(alloc_clo(lam9174_fptr, 0));

void lam9177_fptr() // lam9177
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9178 = arg_buffer[1];
    // reading env and args
    void *xy8501 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9178);
    void *f8736 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8736);
    arg_buffer[2] = xy8501;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8736))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9177 = encode_clo(alloc_clo(lam9177_fptr, 0));

void lam9179_fptr() // lam9179
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9180 = arg_buffer[1];
    // reading env and args
    void *a8507 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9180);
    void *f8732 = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *matrix_u45read = decode_clo_array[2];
    void *i = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45read);
    arg_buffer[2] = f8732;
    arg_buffer[3] = cave;
    arg_buffer[4] = i;
    arg_buffer[5] = a8507;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9179 = encode_clo(alloc_clo(lam9179_fptr, 0));

void lam9183_fptr() // lam9183
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9184 = arg_buffer[1];
    // reading env and args
    void *a8512 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9184);
    void *list = decode_clo_array[2];
    void *f8728 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = f8728;
    arg_buffer[3] = a8512;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9183 = encode_clo(alloc_clo(lam9183_fptr, 0));

void lam9185_fptr() // lam9185
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9186 = arg_buffer[1];
    // reading env and args
    void *a8511 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9186);
    void *list = decode_clo_array[4];
    void *i = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *f8728 = decode_clo_array[1];

    // creating new closure instance
    void **clo9736 = alloc_clo(lam9183_fptr, 2);

    // setting env list
    clo9736[1] = f8728;
    clo9736[2] = list;
    void *f8729 = encode_clo(clo9736);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cons);
    arg_buffer[2] = f8729;
    arg_buffer[3] = i;
    arg_buffer[4] = a8511;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9185 = encode_clo(alloc_clo(lam9185_fptr, 0));

void lam9188_fptr() // lam9188
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9189 = arg_buffer[1];
    // reading env and args
    void *xy8513 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9189);
    void *f8728 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8728);
    arg_buffer[2] = xy8513;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8728))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9188 = encode_clo(alloc_clo(lam9188_fptr, 0));

void lam9190_fptr() // lam9190
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9191 = arg_buffer[1];
    // reading env and args
    void *a8514 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9191);
    void *a8491 = decode_clo_array[5];
    void *a8479 = decode_clo_array[4];
    void *append = decode_clo_array[3];
    void *a8502 = decode_clo_array[2];
    void *kont8727 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(append);
    arg_buffer[2] = kont8727;
    arg_buffer[3] = a8479;
    arg_buffer[4] = a8491;
    arg_buffer[5] = a8502;
    arg_buffer[6] = a8514;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9190 = encode_clo(alloc_clo(lam9190_fptr, 0));

void lam9192_fptr() // lam9192
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9193 = arg_buffer[1];
    // reading env and args
    void *a8509 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9193);
    void *list = decode_clo_array[10];
    void *a8491 = decode_clo_array[9];
    void *a8479 = decode_clo_array[8];
    void *append = decode_clo_array[7];
    void *i = decode_clo_array[6];
    void *a8502 = decode_clo_array[5];
    void *kont8727 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *j = decode_clo_array[2];
    void *_u43 = decode_clo_array[1];

    // creating new closure instance
    void **clo9737 = alloc_clo(lam9190_fptr, 5);

    // setting env list
    clo9737[1] = kont8727;
    clo9737[2] = a8502;
    clo9737[3] = append;
    clo9737[4] = a8479;
    clo9737[5] = a8491;
    void *f8728 = encode_clo(clo9737);

    // if-clause
    bool if_guard9738 = is_true(a8509);
    if (if_guard9738)
    {
        mpz_t *mpzvar9739 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9739, "1", 10);
        void *a8510 = encode_mpz(mpzvar9739);

        // creating new closure instance
        void **clo9740 = alloc_clo(lam9185_fptr, 4);

        // setting env list
        clo9740[1] = f8728;
        clo9740[2] = cons;
        clo9740[3] = i;
        clo9740[4] = list;
        void *f8730 = encode_clo(clo9740);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u43);
        arg_buffer[2] = f8730;
        arg_buffer[3] = j;
        arg_buffer[4] = a8510;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9741 = alloc_clo(lam9188_fptr, 1);

        // setting env list
        clo9741[1] = f8728;
        void *f8731 = encode_clo(clo9741);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8731;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9192 = encode_clo(alloc_clo(lam9192_fptr, 0));

void lam9194_fptr() // lam9194
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9195 = arg_buffer[1];
    // reading env and args
    void *a8505 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9195);
    void *list = decode_clo_array[12];
    void *a8491 = decode_clo_array[11];
    void *a8479 = decode_clo_array[10];
    void *append = decode_clo_array[9];
    void *a8502 = decode_clo_array[8];
    void *kont8727 = decode_clo_array[7];
    void *j = decode_clo_array[6];
    void *_u43 = decode_clo_array[5];
    void *matrix_u45read = decode_clo_array[4];
    void *i = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *cave = decode_clo_array[1];

    // creating new closure instance
    void **clo9742 = alloc_clo(lam9192_fptr, 10);

    // setting env list
    clo9742[1] = _u43;
    clo9742[2] = j;
    clo9742[3] = cons;
    clo9742[4] = kont8727;
    clo9742[5] = a8502;
    clo9742[6] = i;
    clo9742[7] = append;
    clo9742[8] = a8479;
    clo9742[9] = a8491;
    clo9742[10] = list;
    void *f8732 = encode_clo(clo9742);

    // if-clause
    bool if_guard9743 = is_true(a8505);
    if (if_guard9743)
    {
        mpz_t *mpzvar9744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9744, "1", 10);
        void *a8506 = encode_mpz(mpzvar9744);

        // creating new closure instance
        void **clo9745 = alloc_clo(lam9179_fptr, 4);

        // setting env list
        clo9745[1] = i;
        clo9745[2] = matrix_u45read;
        clo9745[3] = cave;
        clo9745[4] = f8732;
        void *f8733 = encode_clo(clo9745);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u43);
        arg_buffer[2] = f8733;
        arg_buffer[3] = j;
        arg_buffer[4] = a8506;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8508 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8732);
        arg_buffer[2] = xy8508;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8732))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9194 = encode_clo(alloc_clo(lam9194_fptr, 0));

void lam9196_fptr() // lam9196
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9197 = arg_buffer[1];
    // reading env and args
    void *a8504 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9197);
    void *list = decode_clo_array[13];
    void *a8491 = decode_clo_array[12];
    void *a8479 = decode_clo_array[11];
    void *append = decode_clo_array[10];
    void *a8502 = decode_clo_array[9];
    void *kont8727 = decode_clo_array[8];
    void *j = decode_clo_array[7];
    void *_u43 = decode_clo_array[6];
    void *matrix_u45read = decode_clo_array[5];
    void *i = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *_u60 = decode_clo_array[1];

    // creating new closure instance
    void **clo9746 = alloc_clo(lam9194_fptr, 12);

    // setting env list
    clo9746[1] = cave;
    clo9746[2] = cons;
    clo9746[3] = i;
    clo9746[4] = matrix_u45read;
    clo9746[5] = _u43;
    clo9746[6] = j;
    clo9746[7] = kont8727;
    clo9746[8] = a8502;
    clo9746[9] = append;
    clo9746[10] = a8479;
    clo9746[11] = a8491;
    clo9746[12] = list;
    void *f8734 = encode_clo(clo9746);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u60);
    arg_buffer[2] = f8734;
    arg_buffer[3] = j;
    arg_buffer[4] = a8504;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9196 = encode_clo(alloc_clo(lam9196_fptr, 0));

void lam9199_fptr() // lam9199
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9200 = arg_buffer[1];
    // reading env and args
    void *a8502 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9200);
    void *list = decode_clo_array[14];
    void *a8491 = decode_clo_array[13];
    void *a8479 = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *kont8727 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *j = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];
    mpz_t *mpzvar9747 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9747, "1", 10);
    void *a8503 = encode_mpz(mpzvar9747);

    // creating new closure instance
    void **clo9748 = alloc_clo(lam9196_fptr, 13);

    // setting env list
    clo9748[1] = _u60;
    clo9748[2] = cave;
    clo9748[3] = cons;
    clo9748[4] = i;
    clo9748[5] = matrix_u45read;
    clo9748[6] = _u43;
    clo9748[7] = j;
    clo9748[8] = kont8727;
    clo9748[9] = a8502;
    clo9748[10] = append;
    clo9748[11] = a8479;
    clo9748[12] = a8491;
    clo9748[13] = list;
    void *f8735 = encode_clo(clo9748);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8735;
    arg_buffer[3] = m;
    arg_buffer[4] = a8503;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9199 = encode_clo(alloc_clo(lam9199_fptr, 0));

void lam9201_fptr() // lam9201
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9202 = arg_buffer[1];
    // reading env and args
    void *a8497 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9202);
    void *list = decode_clo_array[14];
    void *a8491 = decode_clo_array[13];
    void *a8479 = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *kont8727 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *j = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9749 = alloc_clo(lam9199_fptr, 14);

    // setting env list
    clo9749[1] = m;
    clo9749[2] = _u60;
    clo9749[3] = cave;
    clo9749[4] = cons;
    clo9749[5] = i;
    clo9749[6] = matrix_u45read;
    clo9749[7] = _u43;
    clo9749[8] = j;
    clo9749[9] = _u45;
    clo9749[10] = kont8727;
    clo9749[11] = append;
    clo9749[12] = a8479;
    clo9749[13] = a8491;
    clo9749[14] = list;
    void *f8736 = encode_clo(clo9749);

    // if-clause
    bool if_guard9750 = is_true(a8497);
    if (if_guard9750)
    {
        mpz_t *mpzvar9751 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9751, "1", 10);
        void *a8498 = encode_mpz(mpzvar9751);

        // creating new closure instance
        void **clo9752 = alloc_clo(lam9174_fptr, 4);

        // setting env list
        clo9752[1] = cons;
        clo9752[2] = i;
        clo9752[3] = f8736;
        clo9752[4] = list;
        void *f8738 = encode_clo(clo9752);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u45);
        arg_buffer[2] = f8738;
        arg_buffer[3] = j;
        arg_buffer[4] = a8498;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9753 = alloc_clo(lam9177_fptr, 1);

        // setting env list
        clo9753[1] = f8736;
        void *f8739 = encode_clo(clo9753);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8739;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9201 = encode_clo(alloc_clo(lam9201_fptr, 0));

void lam9203_fptr() // lam9203
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9204 = arg_buffer[1];
    // reading env and args
    void *a8493 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9204);
    void *list = decode_clo_array[14];
    void *a8491 = decode_clo_array[13];
    void *a8479 = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *kont8727 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *j = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9754 = alloc_clo(lam9201_fptr, 14);

    // setting env list
    clo9754[1] = m;
    clo9754[2] = _u60;
    clo9754[3] = cave;
    clo9754[4] = cons;
    clo9754[5] = i;
    clo9754[6] = matrix_u45read;
    clo9754[7] = _u43;
    clo9754[8] = j;
    clo9754[9] = _u45;
    clo9754[10] = kont8727;
    clo9754[11] = append;
    clo9754[12] = a8479;
    clo9754[13] = a8491;
    clo9754[14] = list;
    void *f8740 = encode_clo(clo9754);

    // if-clause
    bool if_guard9755 = is_true(a8493);
    if (if_guard9755)
    {
        mpz_t *mpzvar9756 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9756, "1", 10);
        void *a8494 = encode_mpz(mpzvar9756);

        // creating new closure instance
        void **clo9757 = alloc_clo(lam9168_fptr, 4);

        // setting env list
        clo9757[1] = i;
        clo9757[2] = matrix_u45read;
        clo9757[3] = f8740;
        clo9757[4] = cave;
        void *f8741 = encode_clo(clo9757);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u45);
        arg_buffer[2] = f8741;
        arg_buffer[3] = j;
        arg_buffer[4] = a8494;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8496 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8740);
        arg_buffer[2] = xy8496;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8740))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9203 = encode_clo(alloc_clo(lam9203_fptr, 0));

void lam9206_fptr() // lam9206
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9207 = arg_buffer[1];
    // reading env and args
    void *a8491 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9207);
    void *list = decode_clo_array[14];
    void *a8479 = decode_clo_array[13];
    void *append = decode_clo_array[12];
    void *_u62 = decode_clo_array[11];
    void *kont8727 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *j = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];
    mpz_t *mpzvar9758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9758, "0", 10);
    void *a8492 = encode_mpz(mpzvar9758);

    // creating new closure instance
    void **clo9759 = alloc_clo(lam9203_fptr, 14);

    // setting env list
    clo9759[1] = m;
    clo9759[2] = _u60;
    clo9759[3] = cave;
    clo9759[4] = cons;
    clo9759[5] = i;
    clo9759[6] = matrix_u45read;
    clo9759[7] = _u43;
    clo9759[8] = j;
    clo9759[9] = _u45;
    clo9759[10] = kont8727;
    clo9759[11] = append;
    clo9759[12] = a8479;
    clo9759[13] = a8491;
    clo9759[14] = list;
    void *f8742 = encode_clo(clo9759);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u62);
    arg_buffer[2] = f8742;
    arg_buffer[3] = j;
    arg_buffer[4] = a8492;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9206 = encode_clo(alloc_clo(lam9206_fptr, 0));

void lam9208_fptr() // lam9208
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9209 = arg_buffer[1];
    // reading env and args
    void *a8486 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9209);
    void *list = decode_clo_array[14];
    void *a8479 = decode_clo_array[13];
    void *append = decode_clo_array[12];
    void *_u62 = decode_clo_array[11];
    void *kont8727 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *j = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9760 = alloc_clo(lam9206_fptr, 14);

    // setting env list
    clo9760[1] = m;
    clo9760[2] = _u60;
    clo9760[3] = cave;
    clo9760[4] = cons;
    clo9760[5] = i;
    clo9760[6] = matrix_u45read;
    clo9760[7] = _u43;
    clo9760[8] = j;
    clo9760[9] = _u45;
    clo9760[10] = kont8727;
    clo9760[11] = _u62;
    clo9760[12] = append;
    clo9760[13] = a8479;
    clo9760[14] = list;
    void *f8743 = encode_clo(clo9760);

    // if-clause
    bool if_guard9761 = is_true(a8486);
    if (if_guard9761)
    {
        mpz_t *mpzvar9762 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9762, "1", 10);
        void *a8487 = encode_mpz(mpzvar9762);

        // creating new closure instance
        void **clo9763 = alloc_clo(lam9163_fptr, 4);

        // setting env list
        clo9763[1] = cons;
        clo9763[2] = f8743;
        clo9763[3] = j;
        clo9763[4] = list;
        void *f8745 = encode_clo(clo9763);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u43);
        arg_buffer[2] = f8745;
        arg_buffer[3] = i;
        arg_buffer[4] = a8487;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9764 = alloc_clo(lam9166_fptr, 1);

        // setting env list
        clo9764[1] = f8743;
        void *f8746 = encode_clo(clo9764);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8746;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9208 = encode_clo(alloc_clo(lam9208_fptr, 0));

void lam9210_fptr() // lam9210
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9211 = arg_buffer[1];
    // reading env and args
    void *a8482 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9211);
    void *list = decode_clo_array[14];
    void *a8479 = decode_clo_array[13];
    void *append = decode_clo_array[12];
    void *_u62 = decode_clo_array[11];
    void *kont8727 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *j = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9765 = alloc_clo(lam9208_fptr, 14);

    // setting env list
    clo9765[1] = m;
    clo9765[2] = _u60;
    clo9765[3] = cave;
    clo9765[4] = cons;
    clo9765[5] = i;
    clo9765[6] = matrix_u45read;
    clo9765[7] = _u43;
    clo9765[8] = j;
    clo9765[9] = _u45;
    clo9765[10] = kont8727;
    clo9765[11] = _u62;
    clo9765[12] = append;
    clo9765[13] = a8479;
    clo9765[14] = list;
    void *f8747 = encode_clo(clo9765);

    // if-clause
    bool if_guard9766 = is_true(a8482);
    if (if_guard9766)
    {
        mpz_t *mpzvar9767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9767, "1", 10);
        void *a8483 = encode_mpz(mpzvar9767);

        // creating new closure instance
        void **clo9768 = alloc_clo(lam9157_fptr, 4);

        // setting env list
        clo9768[1] = cave;
        clo9768[2] = matrix_u45read;
        clo9768[3] = j;
        clo9768[4] = f8747;
        void *f8748 = encode_clo(clo9768);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u43);
        arg_buffer[2] = f8748;
        arg_buffer[3] = i;
        arg_buffer[4] = a8483;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8485 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8747);
        arg_buffer[2] = xy8485;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8747))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9210 = encode_clo(alloc_clo(lam9210_fptr, 0));

void lam9212_fptr() // lam9212
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9213 = arg_buffer[1];
    // reading env and args
    void *a8481 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9213);
    void *list = decode_clo_array[14];
    void *a8479 = decode_clo_array[13];
    void *append = decode_clo_array[12];
    void *_u62 = decode_clo_array[11];
    void *kont8727 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *j = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *i = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9769 = alloc_clo(lam9210_fptr, 14);

    // setting env list
    clo9769[1] = m;
    clo9769[2] = _u60;
    clo9769[3] = cave;
    clo9769[4] = cons;
    clo9769[5] = i;
    clo9769[6] = matrix_u45read;
    clo9769[7] = _u43;
    clo9769[8] = j;
    clo9769[9] = _u45;
    clo9769[10] = kont8727;
    clo9769[11] = _u62;
    clo9769[12] = append;
    clo9769[13] = a8479;
    clo9769[14] = list;
    void *f8749 = encode_clo(clo9769);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u60);
    arg_buffer[2] = f8749;
    arg_buffer[3] = i;
    arg_buffer[4] = a8481;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9212 = encode_clo(alloc_clo(lam9212_fptr, 0));

void lam9215_fptr() // lam9215
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9216 = arg_buffer[1];
    // reading env and args
    void *a8479 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9216);
    void *list = decode_clo_array[14];
    void *append = decode_clo_array[13];
    void *_u62 = decode_clo_array[12];
    void *_u45 = decode_clo_array[11];
    void *j = decode_clo_array[10];
    void *_u43 = decode_clo_array[9];
    void *matrix_u45read = decode_clo_array[8];
    void *i = decode_clo_array[7];
    void *kont8727 = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];
    mpz_t *mpzvar9770 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9770, "1", 10);
    void *a8480 = encode_mpz(mpzvar9770);

    // creating new closure instance
    void **clo9771 = alloc_clo(lam9212_fptr, 14);

    // setting env list
    clo9771[1] = m;
    clo9771[2] = _u60;
    clo9771[3] = cave;
    clo9771[4] = cons;
    clo9771[5] = i;
    clo9771[6] = matrix_u45read;
    clo9771[7] = _u43;
    clo9771[8] = j;
    clo9771[9] = _u45;
    clo9771[10] = kont8727;
    clo9771[11] = _u62;
    clo9771[12] = append;
    clo9771[13] = a8479;
    clo9771[14] = list;
    void *f8750 = encode_clo(clo9771);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u45);
    arg_buffer[2] = f8750;
    arg_buffer[3] = n;
    arg_buffer[4] = a8480;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9215 = encode_clo(alloc_clo(lam9215_fptr, 0));

void lam9217_fptr() // lam9217
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9218 = arg_buffer[1];
    // reading env and args
    void *a8474 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9218);
    void *list = decode_clo_array[14];
    void *append = decode_clo_array[13];
    void *_u62 = decode_clo_array[12];
    void *_u45 = decode_clo_array[11];
    void *j = decode_clo_array[10];
    void *_u43 = decode_clo_array[9];
    void *matrix_u45read = decode_clo_array[8];
    void *i = decode_clo_array[7];
    void *kont8727 = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9772 = alloc_clo(lam9215_fptr, 14);

    // setting env list
    clo9772[1] = m;
    clo9772[2] = _u60;
    clo9772[3] = cave;
    clo9772[4] = cons;
    clo9772[5] = n;
    clo9772[6] = kont8727;
    clo9772[7] = i;
    clo9772[8] = matrix_u45read;
    clo9772[9] = _u43;
    clo9772[10] = j;
    clo9772[11] = _u45;
    clo9772[12] = _u62;
    clo9772[13] = append;
    clo9772[14] = list;
    void *f8751 = encode_clo(clo9772);

    // if-clause
    bool if_guard9773 = is_true(a8474);
    if (if_guard9773)
    {
        mpz_t *mpzvar9774 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9774, "1", 10);
        void *a8475 = encode_mpz(mpzvar9774);

        // creating new closure instance
        void **clo9775 = alloc_clo(lam9152_fptr, 4);

        // setting env list
        clo9775[1] = cons;
        clo9775[2] = j;
        clo9775[3] = f8751;
        clo9775[4] = list;
        void *f8753 = encode_clo(clo9775);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u45);
        arg_buffer[2] = f8753;
        arg_buffer[3] = i;
        arg_buffer[4] = a8475;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9776 = alloc_clo(lam9155_fptr, 1);

        // setting env list
        clo9776[1] = f8751;
        void *f8754 = encode_clo(clo9776);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8754;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9217 = encode_clo(alloc_clo(lam9217_fptr, 0));

void lam9219_fptr() // lam9219
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9220 = arg_buffer[1];
    // reading env and args
    void *a8470 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9220);
    void *list = decode_clo_array[14];
    void *append = decode_clo_array[13];
    void *_u62 = decode_clo_array[12];
    void *_u45 = decode_clo_array[11];
    void *j = decode_clo_array[10];
    void *_u43 = decode_clo_array[9];
    void *matrix_u45read = decode_clo_array[8];
    void *i = decode_clo_array[7];
    void *kont8727 = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9777 = alloc_clo(lam9217_fptr, 14);

    // setting env list
    clo9777[1] = m;
    clo9777[2] = _u60;
    clo9777[3] = cave;
    clo9777[4] = cons;
    clo9777[5] = n;
    clo9777[6] = kont8727;
    clo9777[7] = i;
    clo9777[8] = matrix_u45read;
    clo9777[9] = _u43;
    clo9777[10] = j;
    clo9777[11] = _u45;
    clo9777[12] = _u62;
    clo9777[13] = append;
    clo9777[14] = list;
    void *f8755 = encode_clo(clo9777);

    // if-clause
    bool if_guard9778 = is_true(a8470);
    if (if_guard9778)
    {
        mpz_t *mpzvar9779 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
        mpz_init_set_str(*mpzvar9779, "1", 10);
        void *a8471 = encode_mpz(mpzvar9779);

        // creating new closure instance
        void **clo9780 = alloc_clo(lam9146_fptr, 4);

        // setting env list
        clo9780[1] = f8755;
        clo9780[2] = j;
        clo9780[3] = cave;
        clo9780[4] = matrix_u45read;
        void *f8756 = encode_clo(clo9780);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(_u45);
        arg_buffer[2] = f8756;
        arg_buffer[3] = i;
        arg_buffer[4] = a8471;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8473 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8755);
        arg_buffer[2] = xy8473;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8755))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9219 = encode_clo(alloc_clo(lam9219_fptr, 0));

void lam9222_fptr() // lam9222
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9223 = arg_buffer[1];
    // reading env and args
    void *j = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9223);
    void *list = decode_clo_array[13];
    void *append = decode_clo_array[12];
    void *_u43 = decode_clo_array[11];
    void *_u62 = decode_clo_array[10];
    void *_u45 = decode_clo_array[9];
    void *matrix_u45read = decode_clo_array[8];
    void *i = decode_clo_array[7];
    void *kont8727 = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];
    mpz_t *mpzvar9781 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9781, "0", 10);
    void *a8469 = encode_mpz(mpzvar9781);

    // creating new closure instance
    void **clo9782 = alloc_clo(lam9219_fptr, 14);

    // setting env list
    clo9782[1] = m;
    clo9782[2] = _u60;
    clo9782[3] = cave;
    clo9782[4] = cons;
    clo9782[5] = n;
    clo9782[6] = kont8727;
    clo9782[7] = i;
    clo9782[8] = matrix_u45read;
    clo9782[9] = _u43;
    clo9782[10] = j;
    clo9782[11] = _u45;
    clo9782[12] = _u62;
    clo9782[13] = append;
    clo9782[14] = list;
    void *f8757 = encode_clo(clo9782);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(_u62);
    arg_buffer[2] = f8757;
    arg_buffer[3] = i;
    arg_buffer[4] = a8469;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9222 = encode_clo(alloc_clo(lam9222_fptr, 0));

void lam9224_fptr() // lam9224
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9225 = arg_buffer[1];
    // reading env and args
    void *i = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9225);
    void *append = decode_clo_array[14];
    void *_u43 = decode_clo_array[13];
    void *_u62 = decode_clo_array[12];
    void *_u45 = decode_clo_array[11];
    void *list = decode_clo_array[10];
    void *cdr = decode_clo_array[9];
    void *pos = decode_clo_array[8];
    void *matrix_u45read = decode_clo_array[7];
    void *kont8727 = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *_u60 = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9783 = alloc_clo(lam9222_fptr, 13);

    // setting env list
    clo9783[1] = m;
    clo9783[2] = _u60;
    clo9783[3] = cave;
    clo9783[4] = cons;
    clo9783[5] = n;
    clo9783[6] = kont8727;
    clo9783[7] = i;
    clo9783[8] = matrix_u45read;
    clo9783[9] = _u45;
    clo9783[10] = _u62;
    clo9783[11] = _u43;
    clo9783[12] = append;
    clo9783[13] = list;
    void *f8758 = encode_clo(clo9783);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8758;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9224 = encode_clo(alloc_clo(lam9224_fptr, 0));

void lam9226_fptr() // lam9226
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9227 = arg_buffer[1];
    // reading env and args
    void *m = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9227);
    void *append = decode_clo_array[14];
    void *_u43 = decode_clo_array[13];
    void *_u62 = decode_clo_array[12];
    void *_u45 = decode_clo_array[11];
    void *list = decode_clo_array[10];
    void *cdr = decode_clo_array[9];
    void *pos = decode_clo_array[8];
    void *matrix_u45read = decode_clo_array[7];
    void *kont8727 = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *_u60 = decode_clo_array[1];

    // creating new closure instance
    void **clo9784 = alloc_clo(lam9224_fptr, 14);

    // setting env list
    clo9784[1] = m;
    clo9784[2] = _u60;
    clo9784[3] = cave;
    clo9784[4] = cons;
    clo9784[5] = n;
    clo9784[6] = kont8727;
    clo9784[7] = matrix_u45read;
    clo9784[8] = pos;
    clo9784[9] = cdr;
    clo9784[10] = list;
    clo9784[11] = _u45;
    clo9784[12] = _u62;
    clo9784[13] = _u43;
    clo9784[14] = append;
    void *f8759 = encode_clo(clo9784);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8759;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9226 = encode_clo(alloc_clo(lam9226_fptr, 0));

void lam9228_fptr() // lam9228
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9229 = arg_buffer[1];
    // reading env and args
    void *n = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9229);
    void *append = decode_clo_array[14];
    void *_u62 = decode_clo_array[13];
    void *_u45 = decode_clo_array[12];
    void *list = decode_clo_array[11];
    void *cdr = decode_clo_array[10];
    void *_u43 = decode_clo_array[9];
    void *size = decode_clo_array[8];
    void *pos = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *kont8727 = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *_u60 = decode_clo_array[1];

    // creating new closure instance
    void **clo9785 = alloc_clo(lam9226_fptr, 14);

    // setting env list
    clo9785[1] = _u60;
    clo9785[2] = cave;
    clo9785[3] = cons;
    clo9785[4] = car;
    clo9785[5] = n;
    clo9785[6] = kont8727;
    clo9785[7] = matrix_u45read;
    clo9785[8] = pos;
    clo9785[9] = cdr;
    clo9785[10] = list;
    clo9785[11] = _u45;
    clo9785[12] = _u62;
    clo9785[13] = _u43;
    clo9785[14] = append;
    void *f8760 = encode_clo(clo9785);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8760;
    arg_buffer[3] = size;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9228 = encode_clo(alloc_clo(lam9228_fptr, 0));

void lam9230_fptr() // lam9230
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9231 = arg_buffer[1];
    // reading env and args
    void *size = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9231);
    void *append = decode_clo_array[13];
    void *_u43 = decode_clo_array[12];
    void *_u62 = decode_clo_array[11];
    void *_u45 = decode_clo_array[10];
    void *list = decode_clo_array[9];
    void *cdr = decode_clo_array[8];
    void *pos = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *kont8727 = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *_u60 = decode_clo_array[1];

    // creating new closure instance
    void **clo9786 = alloc_clo(lam9228_fptr, 14);

    // setting env list
    clo9786[1] = _u60;
    clo9786[2] = cave;
    clo9786[3] = cons;
    clo9786[4] = car;
    clo9786[5] = kont8727;
    clo9786[6] = matrix_u45read;
    clo9786[7] = pos;
    clo9786[8] = size;
    clo9786[9] = _u43;
    clo9786[10] = cdr;
    clo9786[11] = list;
    clo9786[12] = _u45;
    clo9786[13] = _u62;
    clo9786[14] = append;
    void *f8761 = encode_clo(clo9786);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8761;
    arg_buffer[3] = size;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9230 = encode_clo(alloc_clo(lam9230_fptr, 0));

void neighboring_u45cavities_fptr() // neighboring-cavities
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9232 = arg_buffer[1];
    // reading env and args
    void *kont8727 = arg_buffer[2];
    void *pos = arg_buffer[3];
    void *cave = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9787 = alloc_clo(lam9230_fptr, 13);

    // setting env list
    clo9787[1] = _u60;
    clo9787[2] = cave;
    clo9787[3] = cons;
    clo9787[4] = car;
    clo9787[5] = kont8727;
    clo9787[6] = matrix_u45read;
    clo9787[7] = pos;
    clo9787[8] = cdr;
    clo9787[9] = list;
    clo9787[10] = _u45;
    clo9787[11] = _u62;
    clo9787[12] = _u43;
    clo9787[13] = append;
    void *f8762 = encode_clo(clo9787);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45size);
    arg_buffer[2] = f8762;
    arg_buffer[3] = cave;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45size))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *neighboring_u45cavities = encode_clo(alloc_clo(neighboring_u45cavities_fptr, 0));

void lam9233_fptr() // lam9233
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9234 = arg_buffer[1];
    // reading env and args
    void *a8518 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9234);
    void *kont8763 = decode_clo_array[4];
    void *a8516 = decode_clo_array[3];
    void *a8517 = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45foldl);
    arg_buffer[2] = kont8763;
    arg_buffer[3] = a8516;
    arg_buffer[4] = a8517;
    arg_buffer[5] = a8518;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45foldl))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9233 = encode_clo(alloc_clo(lam9233_fptr, 0));

void lam9235_fptr() // lam9235
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9236 = arg_buffer[1];
    // reading env and args
    void *a8517 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9236);
    void *kont8763 = decode_clo_array[6];
    void *neighboring_u45cavities = decode_clo_array[5];
    void *pos = decode_clo_array[4];
    void *a8516 = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9788 = alloc_clo(lam9233_fptr, 4);

    // setting env list
    clo9788[1] = my_u45foldl;
    clo9788[2] = a8517;
    clo9788[3] = a8516;
    clo9788[4] = kont8763;
    void *f8765 = encode_clo(clo9788);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(neighboring_u45cavities);
    arg_buffer[2] = f8765;
    arg_buffer[3] = pos;
    arg_buffer[4] = cave;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(neighboring_u45cavities))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9235 = encode_clo(alloc_clo(lam9235_fptr, 0));

void lam9237_fptr() // lam9237
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9238 = arg_buffer[1];
    // reading env and args
    void *cont8764 = arg_buffer[2];
    void *c = arg_buffer[3];
    void *nc = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9238);
    void *new_u45cavity_u45id = decode_clo_array[3];
    void *old_u45cavity_u45id = decode_clo_array[2];
    void *change_u45cavity_u45aux = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(change_u45cavity_u45aux);
    arg_buffer[2] = cont8764;
    arg_buffer[3] = c;
    arg_buffer[4] = nc;
    arg_buffer[5] = new_u45cavity_u45id;
    arg_buffer[6] = old_u45cavity_u45id;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(change_u45cavity_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9237 = encode_clo(alloc_clo(lam9237_fptr, 0));

void lam9239_fptr() // lam9239
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9240 = arg_buffer[1];
    // reading env and args
    void *a8515 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9240);
    void *change_u45cavity_u45aux = decode_clo_array[11];
    void *j = decode_clo_array[10];
    void *new_u45cavity_u45id = decode_clo_array[9];
    void *kont8763 = decode_clo_array[8];
    void *old_u45cavity_u45id = decode_clo_array[7];
    void *neighboring_u45cavities = decode_clo_array[6];
    void *pos = decode_clo_array[5];
    void *i = decode_clo_array[4];
    void *matrix_u45write = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // if-clause
    bool if_guard9789 = is_true(a8515);
    if (if_guard9789)
    {

        // creating new closure instance
        void **clo9790 = alloc_clo(lam9237_fptr, 3);

        // setting env list
        clo9790[1] = change_u45cavity_u45aux;
        clo9790[2] = old_u45cavity_u45id;
        clo9790[3] = new_u45cavity_u45id;
        void *a8516 = encode_clo(clo9790);

        // creating new closure instance
        void **clo9791 = alloc_clo(lam9235_fptr, 6);

        // setting env list
        clo9791[1] = my_u45foldl;
        clo9791[2] = cave;
        clo9791[3] = a8516;
        clo9791[4] = pos;
        clo9791[5] = neighboring_u45cavities;
        clo9791[6] = kont8763;
        void *f8766 = encode_clo(clo9791);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(matrix_u45write);
        arg_buffer[2] = f8766;
        arg_buffer[3] = cave;
        arg_buffer[4] = i;
        arg_buffer[5] = j;
        arg_buffer[6] = new_u45cavity_u45id;
        arg_buffer[0] = reinterpret_cast<void *>(6);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45write))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8763);
        arg_buffer[2] = cave;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8763))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9239 = encode_clo(alloc_clo(lam9239_fptr, 0));

void lam9241_fptr() // lam9241
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9242 = arg_buffer[1];
    // reading env and args
    void *cavity_u45id = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9242);
    void *j = decode_clo_array[12];
    void *new_u45cavity_u45id = decode_clo_array[11];
    void *kont8763 = decode_clo_array[10];
    void *old_u45cavity_u45id = decode_clo_array[9];
    void *neighboring_u45cavities = decode_clo_array[8];
    void *change_u45cavity_u45aux = decode_clo_array[7];
    void *equal_u63 = decode_clo_array[6];
    void *pos = decode_clo_array[5];
    void *i = decode_clo_array[4];
    void *matrix_u45write = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9792 = alloc_clo(lam9239_fptr, 11);

    // setting env list
    clo9792[1] = my_u45foldl;
    clo9792[2] = cave;
    clo9792[3] = matrix_u45write;
    clo9792[4] = i;
    clo9792[5] = pos;
    clo9792[6] = neighboring_u45cavities;
    clo9792[7] = old_u45cavity_u45id;
    clo9792[8] = kont8763;
    clo9792[9] = new_u45cavity_u45id;
    clo9792[10] = j;
    clo9792[11] = change_u45cavity_u45aux;
    void *f8767 = encode_clo(clo9792);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8767;
    arg_buffer[3] = cavity_u45id;
    arg_buffer[4] = old_u45cavity_u45id;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9241 = encode_clo(alloc_clo(lam9241_fptr, 0));

void lam9243_fptr() // lam9243
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9244 = arg_buffer[1];
    // reading env and args
    void *j = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9244);
    void *new_u45cavity_u45id = decode_clo_array[12];
    void *kont8763 = decode_clo_array[11];
    void *old_u45cavity_u45id = decode_clo_array[10];
    void *neighboring_u45cavities = decode_clo_array[9];
    void *change_u45cavity_u45aux = decode_clo_array[8];
    void *equal_u63 = decode_clo_array[7];
    void *pos = decode_clo_array[6];
    void *matrix_u45write = decode_clo_array[5];
    void *matrix_u45read = decode_clo_array[4];
    void *i = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9793 = alloc_clo(lam9241_fptr, 12);

    // setting env list
    clo9793[1] = my_u45foldl;
    clo9793[2] = cave;
    clo9793[3] = matrix_u45write;
    clo9793[4] = i;
    clo9793[5] = pos;
    clo9793[6] = equal_u63;
    clo9793[7] = change_u45cavity_u45aux;
    clo9793[8] = neighboring_u45cavities;
    clo9793[9] = old_u45cavity_u45id;
    clo9793[10] = kont8763;
    clo9793[11] = new_u45cavity_u45id;
    clo9793[12] = j;
    void *f8768 = encode_clo(clo9793);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45read);
    arg_buffer[2] = f8768;
    arg_buffer[3] = cave;
    arg_buffer[4] = i;
    arg_buffer[5] = j;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9243 = encode_clo(alloc_clo(lam9243_fptr, 0));

void lam9245_fptr() // lam9245
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9246 = arg_buffer[1];
    // reading env and args
    void *i = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9246);
    void *cdr = decode_clo_array[12];
    void *new_u45cavity_u45id = decode_clo_array[11];
    void *kont8763 = decode_clo_array[10];
    void *old_u45cavity_u45id = decode_clo_array[9];
    void *neighboring_u45cavities = decode_clo_array[8];
    void *change_u45cavity_u45aux = decode_clo_array[7];
    void *equal_u63 = decode_clo_array[6];
    void *pos = decode_clo_array[5];
    void *matrix_u45read = decode_clo_array[4];
    void *matrix_u45write = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9794 = alloc_clo(lam9243_fptr, 12);

    // setting env list
    clo9794[1] = my_u45foldl;
    clo9794[2] = cave;
    clo9794[3] = i;
    clo9794[4] = matrix_u45read;
    clo9794[5] = matrix_u45write;
    clo9794[6] = pos;
    clo9794[7] = equal_u63;
    clo9794[8] = change_u45cavity_u45aux;
    clo9794[9] = neighboring_u45cavities;
    clo9794[10] = old_u45cavity_u45id;
    clo9794[11] = kont8763;
    clo9794[12] = new_u45cavity_u45id;
    void *f8769 = encode_clo(clo9794);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8769;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9245 = encode_clo(alloc_clo(lam9245_fptr, 0));

void change_u45cavity_u45aux_fptr() // change-cavity-aux
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9247 = arg_buffer[1];
    // reading env and args
    void *kont8763 = arg_buffer[2];
    void *cave = arg_buffer[3];
    void *pos = arg_buffer[4];
    void *new_u45cavity_u45id = arg_buffer[5];
    void *old_u45cavity_u45id = arg_buffer[6];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9795 = alloc_clo(lam9245_fptr, 12);

    // setting env list
    clo9795[1] = my_u45foldl;
    clo9795[2] = cave;
    clo9795[3] = matrix_u45write;
    clo9795[4] = matrix_u45read;
    clo9795[5] = pos;
    clo9795[6] = equal_u63;
    void *change_u45cavity_u45aux = encode_clo(alloc_clo(change_u45cavity_u45aux_fptr, 0));

    clo9795[7] = change_u45cavity_u45aux;
    clo9795[8] = neighboring_u45cavities;
    clo9795[9] = old_u45cavity_u45id;
    clo9795[10] = kont8763;
    clo9795[11] = new_u45cavity_u45id;
    clo9795[12] = cdr;
    void *f8770 = encode_clo(clo9795);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8770;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *change_u45cavity_u45aux = encode_clo(alloc_clo(change_u45cavity_u45aux_fptr, 0));

void lam9248_fptr() // lam9248
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9249 = arg_buffer[1];
    // reading env and args
    void *a8519 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9249);
    void *new_u45cavity_u45id = decode_clo_array[5];
    void *change_u45cavity_u45aux = decode_clo_array[4];
    void *kont8771 = decode_clo_array[3];
    void *pos = decode_clo_array[2];
    void *cave = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(change_u45cavity_u45aux);
    arg_buffer[2] = kont8771;
    arg_buffer[3] = cave;
    arg_buffer[4] = pos;
    arg_buffer[5] = new_u45cavity_u45id;
    arg_buffer[6] = a8519;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(change_u45cavity_u45aux))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9248 = encode_clo(alloc_clo(lam9248_fptr, 0));

void lam9250_fptr() // lam9250
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9251 = arg_buffer[1];
    // reading env and args
    void *j = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9251);
    void *new_u45cavity_u45id = decode_clo_array[7];
    void *change_u45cavity_u45aux = decode_clo_array[6];
    void *kont8771 = decode_clo_array[5];
    void *cave = decode_clo_array[4];
    void *pos = decode_clo_array[3];
    void *matrix_u45read = decode_clo_array[2];
    void *i = decode_clo_array[1];

    // creating new closure instance
    void **clo9796 = alloc_clo(lam9248_fptr, 5);

    // setting env list
    clo9796[1] = cave;
    clo9796[2] = pos;
    clo9796[3] = kont8771;
    clo9796[4] = change_u45cavity_u45aux;
    clo9796[5] = new_u45cavity_u45id;
    void *f8772 = encode_clo(clo9796);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45read);
    arg_buffer[2] = f8772;
    arg_buffer[3] = cave;
    arg_buffer[4] = i;
    arg_buffer[5] = j;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9250 = encode_clo(alloc_clo(lam9250_fptr, 0));

void lam9252_fptr() // lam9252
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9253 = arg_buffer[1];
    // reading env and args
    void *i = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9253);
    void *cdr = decode_clo_array[7];
    void *new_u45cavity_u45id = decode_clo_array[6];
    void *change_u45cavity_u45aux = decode_clo_array[5];
    void *kont8771 = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *pos = decode_clo_array[2];
    void *matrix_u45read = decode_clo_array[1];

    // creating new closure instance
    void **clo9797 = alloc_clo(lam9250_fptr, 7);

    // setting env list
    clo9797[1] = i;
    clo9797[2] = matrix_u45read;
    clo9797[3] = pos;
    clo9797[4] = cave;
    clo9797[5] = kont8771;
    clo9797[6] = change_u45cavity_u45aux;
    clo9797[7] = new_u45cavity_u45id;
    void *f8773 = encode_clo(clo9797);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8773;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9252 = encode_clo(alloc_clo(lam9252_fptr, 0));

void change_u45cavity_fptr() // change-cavity
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9254 = arg_buffer[1];
    // reading env and args
    void *kont8771 = arg_buffer[2];
    void *cave = arg_buffer[3];
    void *pos = arg_buffer[4];
    void *new_u45cavity_u45id = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9798 = alloc_clo(lam9252_fptr, 7);

    // setting env list
    clo9798[1] = matrix_u45read;
    clo9798[2] = pos;
    clo9798[3] = cave;
    clo9798[4] = kont8771;
    clo9798[5] = change_u45cavity_u45aux;
    clo9798[6] = new_u45cavity_u45id;
    clo9798[7] = cdr;
    void *f8774 = encode_clo(clo9798);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8774;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *change_u45cavity = encode_clo(alloc_clo(change_u45cavity_fptr, 0));

void lam9255_fptr() // lam9255
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9256 = arg_buffer[1];
    // reading env and args
    void *j = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9256);
    void *kont8775 = decode_clo_array[5];
    void *cave = decode_clo_array[4];
    void *pos = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *matrix_u45write = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45write);
    arg_buffer[2] = kont8775;
    arg_buffer[3] = cave;
    arg_buffer[4] = i;
    arg_buffer[5] = j;
    arg_buffer[6] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(6);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45write))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9255 = encode_clo(alloc_clo(lam9255_fptr, 0));

void lam9257_fptr() // lam9257
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9258 = arg_buffer[1];
    // reading env and args
    void *i = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9258);
    void *cdr = decode_clo_array[5];
    void *kont8775 = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *pos = decode_clo_array[2];
    void *matrix_u45write = decode_clo_array[1];

    // creating new closure instance
    void **clo9799 = alloc_clo(lam9255_fptr, 5);

    // setting env list
    clo9799[1] = matrix_u45write;
    clo9799[2] = i;
    clo9799[3] = pos;
    clo9799[4] = cave;
    clo9799[5] = kont8775;
    void *f8776 = encode_clo(clo9799);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8776;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9257 = encode_clo(alloc_clo(lam9257_fptr, 0));

void pierce_fptr() // pierce
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9259 = arg_buffer[1];
    // reading env and args
    void *kont8775 = arg_buffer[2];
    void *pos = arg_buffer[3];
    void *cave = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9800 = alloc_clo(lam9257_fptr, 5);

    // setting env list
    clo9800[1] = matrix_u45write;
    clo9800[2] = pos;
    clo9800[3] = cave;
    clo9800[4] = kont8775;
    clo9800[5] = cdr;
    void *f8777 = encode_clo(clo9800);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8777;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *pierce = encode_clo(alloc_clo(pierce_fptr, 0));

void lam9260_fptr() // lam9260
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9261 = arg_buffer[1];
    // reading env and args
    void *a8526 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9261);
    void *kont8778 = decode_clo_array[3];
    void *pierce = decode_clo_array[2];
    void *pos = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(pierce);
    arg_buffer[2] = kont8778;
    arg_buffer[3] = pos;
    arg_buffer[4] = a8526;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(pierce))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9260 = encode_clo(alloc_clo(lam9260_fptr, 0));

void lam9262_fptr() // lam9262
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9263 = arg_buffer[1];
    // reading env and args
    void *cont8782 = arg_buffer[2];
    void *c = arg_buffer[3];
    void *nc = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9263);
    void *pos = decode_clo_array[2];
    void *change_u45cavity = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(change_u45cavity);
    arg_buffer[2] = cont8782;
    arg_buffer[3] = c;
    arg_buffer[4] = nc;
    arg_buffer[5] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(change_u45cavity))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9262 = encode_clo(alloc_clo(lam9262_fptr, 0));

void lam9264_fptr() // lam9264
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9265 = arg_buffer[1];
    // reading env and args
    void *a8524 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9265);
    void *kont8778 = decode_clo_array[7];
    void *ncs = decode_clo_array[6];
    void *pierce = decode_clo_array[5];
    void *pos = decode_clo_array[4];
    void *change_u45cavity = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // if-clause
    bool if_guard9801 = is_true(a8524);
    if (if_guard9801)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8778);
        arg_buffer[2] = cave;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8778))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9802 = alloc_clo(lam9262_fptr, 2);

        // setting env list
        clo9802[1] = change_u45cavity;
        clo9802[2] = pos;
        void *a8525 = encode_clo(clo9802);

        // creating new closure instance
        void **clo9803 = alloc_clo(lam9260_fptr, 3);

        // setting env list
        clo9803[1] = pos;
        clo9803[2] = pierce;
        clo9803[3] = kont8778;
        void *f8783 = encode_clo(clo9803);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(my_u45foldl);
        arg_buffer[2] = f8783;
        arg_buffer[3] = a8525;
        arg_buffer[4] = cave;
        arg_buffer[5] = ncs;
        arg_buffer[0] = reinterpret_cast<void *>(5);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45foldl))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9264 = encode_clo(alloc_clo(lam9264_fptr, 0));

void lam9266_fptr() // lam9266
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9267 = arg_buffer[1];
    // reading env and args
    void *a8523 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9267);
    void *kont8778 = decode_clo_array[8];
    void *ncs = decode_clo_array[7];
    void *pierce = decode_clo_array[6];
    void *duplicates_u63 = decode_clo_array[5];
    void *pos = decode_clo_array[4];
    void *change_u45cavity = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9804 = alloc_clo(lam9264_fptr, 7);

    // setting env list
    clo9804[1] = my_u45foldl;
    clo9804[2] = cave;
    clo9804[3] = change_u45cavity;
    clo9804[4] = pos;
    clo9804[5] = pierce;
    clo9804[6] = ncs;
    clo9804[7] = kont8778;
    void *f8784 = encode_clo(clo9804);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(duplicates_u63);
    arg_buffer[2] = f8784;
    arg_buffer[3] = a8523;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(duplicates_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9266 = encode_clo(alloc_clo(lam9266_fptr, 0));

void lam9268_fptr() // lam9268
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9269 = arg_buffer[1];
    // reading env and args
    void *a8521 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9269);
    void *cont8779 = decode_clo_array[4];
    void *matrix_u45read = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *a8520 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(matrix_u45read);
    arg_buffer[2] = cont8779;
    arg_buffer[3] = cave;
    arg_buffer[4] = a8520;
    arg_buffer[5] = a8521;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(matrix_u45read))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9268 = encode_clo(alloc_clo(lam9268_fptr, 0));

void lam9270_fptr() // lam9270
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9271 = arg_buffer[1];
    // reading env and args
    void *a8520 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9271);
    void *cdr = decode_clo_array[5];
    void *cont8779 = decode_clo_array[4];
    void *matrix_u45read = decode_clo_array[3];
    void *nc = decode_clo_array[2];
    void *cave = decode_clo_array[1];

    // creating new closure instance
    void **clo9805 = alloc_clo(lam9268_fptr, 4);

    // setting env list
    clo9805[1] = a8520;
    clo9805[2] = cave;
    clo9805[3] = matrix_u45read;
    clo9805[4] = cont8779;
    void *f8780 = encode_clo(clo9805);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8780;
    arg_buffer[3] = nc;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9270 = encode_clo(alloc_clo(lam9270_fptr, 0));

void lam9272_fptr() // lam9272
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9273 = arg_buffer[1];
    // reading env and args
    void *cont8779 = arg_buffer[2];
    void *nc = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9273);
    void *cdr = decode_clo_array[4];
    void *matrix_u45read = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *cave = decode_clo_array[1];

    // creating new closure instance
    void **clo9806 = alloc_clo(lam9270_fptr, 5);

    // setting env list
    clo9806[1] = cave;
    clo9806[2] = nc;
    clo9806[3] = matrix_u45read;
    clo9806[4] = cont8779;
    clo9806[5] = cdr;
    void *f8781 = encode_clo(clo9806);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8781;
    arg_buffer[3] = nc;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9272 = encode_clo(alloc_clo(lam9272_fptr, 0));

void lam9274_fptr() // lam9274
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9275 = arg_buffer[1];
    // reading env and args
    void *ncs = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9275);
    void *map = decode_clo_array[11];
    void *pierce = decode_clo_array[10];
    void *cdr = decode_clo_array[9];
    void *kont8778 = decode_clo_array[8];
    void *pos = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *change_u45cavity = decode_clo_array[5];
    void *duplicates_u63 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9807 = alloc_clo(lam9272_fptr, 4);

    // setting env list
    clo9807[1] = cave;
    clo9807[2] = car;
    clo9807[3] = matrix_u45read;
    clo9807[4] = cdr;
    void *a8522 = encode_clo(clo9807);

    // creating new closure instance
    void **clo9808 = alloc_clo(lam9266_fptr, 8);

    // setting env list
    clo9808[1] = my_u45foldl;
    clo9808[2] = cave;
    clo9808[3] = change_u45cavity;
    clo9808[4] = pos;
    clo9808[5] = duplicates_u63;
    clo9808[6] = pierce;
    clo9808[7] = ncs;
    clo9808[8] = kont8778;
    void *f8785 = encode_clo(clo9808);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(map);
    arg_buffer[2] = f8785;
    arg_buffer[3] = a8522;
    arg_buffer[4] = ncs;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9274 = encode_clo(alloc_clo(lam9274_fptr, 0));

void lam9276_fptr() // lam9276
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9277 = arg_buffer[1];
    // reading env and args
    void *j = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9277);
    void *pierce = decode_clo_array[12];
    void *cdr = decode_clo_array[11];
    void *kont8778 = decode_clo_array[10];
    void *map = decode_clo_array[9];
    void *neighboring_u45cavities = decode_clo_array[8];
    void *pos = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *change_u45cavity = decode_clo_array[5];
    void *duplicates_u63 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9809 = alloc_clo(lam9274_fptr, 11);

    // setting env list
    clo9809[1] = my_u45foldl;
    clo9809[2] = cave;
    clo9809[3] = car;
    clo9809[4] = duplicates_u63;
    clo9809[5] = change_u45cavity;
    clo9809[6] = matrix_u45read;
    clo9809[7] = pos;
    clo9809[8] = kont8778;
    clo9809[9] = cdr;
    clo9809[10] = pierce;
    clo9809[11] = map;
    void *f8786 = encode_clo(clo9809);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(neighboring_u45cavities);
    arg_buffer[2] = f8786;
    arg_buffer[3] = pos;
    arg_buffer[4] = cave;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(neighboring_u45cavities))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9276 = encode_clo(alloc_clo(lam9276_fptr, 0));

void lam9278_fptr() // lam9278
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9279 = arg_buffer[1];
    // reading env and args
    void *i = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9279);
    void *pierce = decode_clo_array[12];
    void *cdr = decode_clo_array[11];
    void *kont8778 = decode_clo_array[10];
    void *map = decode_clo_array[9];
    void *neighboring_u45cavities = decode_clo_array[8];
    void *pos = decode_clo_array[7];
    void *matrix_u45read = decode_clo_array[6];
    void *change_u45cavity = decode_clo_array[5];
    void *duplicates_u63 = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *my_u45foldl = decode_clo_array[1];

    // creating new closure instance
    void **clo9810 = alloc_clo(lam9276_fptr, 12);

    // setting env list
    clo9810[1] = my_u45foldl;
    clo9810[2] = cave;
    clo9810[3] = car;
    clo9810[4] = duplicates_u63;
    clo9810[5] = change_u45cavity;
    clo9810[6] = matrix_u45read;
    clo9810[7] = pos;
    clo9810[8] = neighboring_u45cavities;
    clo9810[9] = map;
    clo9810[10] = kont8778;
    clo9810[11] = cdr;
    clo9810[12] = pierce;
    void *f8787 = encode_clo(clo9810);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8787;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9278 = encode_clo(alloc_clo(lam9278_fptr, 0));

void try_u45to_u45pierce_fptr() // try-to-pierce
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9280 = arg_buffer[1];
    // reading env and args
    void *kont8778 = arg_buffer[2];
    void *pos = arg_buffer[3];
    void *cave = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9811 = alloc_clo(lam9278_fptr, 12);

    // setting env list
    clo9811[1] = my_u45foldl;
    clo9811[2] = cave;
    clo9811[3] = car;
    clo9811[4] = duplicates_u63;
    clo9811[5] = change_u45cavity;
    clo9811[6] = matrix_u45read;
    clo9811[7] = pos;
    clo9811[8] = neighboring_u45cavities;
    clo9811[9] = map;
    clo9811[10] = kont8778;
    clo9811[11] = cdr;
    clo9811[12] = pierce;
    void *f8788 = encode_clo(clo9811);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(car);
    arg_buffer[2] = f8788;
    arg_buffer[3] = pos;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *try_u45to_u45pierce = encode_clo(alloc_clo(try_u45to_u45pierce_fptr, 0));

void lam9281_fptr() // lam9281
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9282 = arg_buffer[1];
    // reading env and args
    void *a8529 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9282);
    void *pierce_u45randomly = decode_clo_array[3];
    void *a8528 = decode_clo_array[2];
    void *kont8789 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(pierce_u45randomly);
    arg_buffer[2] = kont8789;
    arg_buffer[3] = a8528;
    arg_buffer[4] = a8529;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(pierce_u45randomly))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9281 = encode_clo(alloc_clo(lam9281_fptr, 0));

void lam9283_fptr() // lam9283
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9284 = arg_buffer[1];
    // reading env and args
    void *a8528 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9284);
    void *pierce_u45randomly = decode_clo_array[5];
    void *hole = decode_clo_array[4];
    void *kont8789 = decode_clo_array[3];
    void *try_u45to_u45pierce = decode_clo_array[2];
    void *cave = decode_clo_array[1];

    // creating new closure instance
    void **clo9812 = alloc_clo(lam9281_fptr, 3);

    // setting env list
    clo9812[1] = kont8789;
    clo9812[2] = a8528;
    clo9812[3] = pierce_u45randomly;
    void *f8790 = encode_clo(clo9812);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(try_u45to_u45pierce);
    arg_buffer[2] = f8790;
    arg_buffer[3] = hole;
    arg_buffer[4] = cave;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(try_u45to_u45pierce))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9283 = encode_clo(alloc_clo(lam9283_fptr, 0));

void lam9285_fptr() // lam9285
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9286 = arg_buffer[1];
    // reading env and args
    void *hole = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9286);
    void *cdr = decode_clo_array[6];
    void *pierce_u45randomly = decode_clo_array[5];
    void *possible_u45holes = decode_clo_array[4];
    void *kont8789 = decode_clo_array[3];
    void *try_u45to_u45pierce = decode_clo_array[2];
    void *cave = decode_clo_array[1];

    // creating new closure instance
    void **clo9813 = alloc_clo(lam9283_fptr, 5);

    // setting env list
    clo9813[1] = cave;
    clo9813[2] = try_u45to_u45pierce;
    clo9813[3] = kont8789;
    clo9813[4] = hole;
    clo9813[5] = pierce_u45randomly;
    void *f8791 = encode_clo(clo9813);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cdr);
    arg_buffer[2] = f8791;
    arg_buffer[3] = possible_u45holes;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9285 = encode_clo(alloc_clo(lam9285_fptr, 0));

void lam9287_fptr() // lam9287
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9288 = arg_buffer[1];
    // reading env and args
    void *a8527 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9288);
    void *cdr = decode_clo_array[7];
    void *pierce_u45randomly = decode_clo_array[6];
    void *possible_u45holes = decode_clo_array[5];
    void *kont8789 = decode_clo_array[4];
    void *cave = decode_clo_array[3];
    void *try_u45to_u45pierce = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9814 = is_true(a8527);
    if (if_guard9814)
    {

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8789);
        arg_buffer[2] = cave;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8789))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9815 = alloc_clo(lam9285_fptr, 6);

        // setting env list
        clo9815[1] = cave;
        clo9815[2] = try_u45to_u45pierce;
        clo9815[3] = kont8789;
        clo9815[4] = possible_u45holes;
        clo9815[5] = pierce_u45randomly;
        clo9815[6] = cdr;
        void *f8792 = encode_clo(clo9815);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(car);
        arg_buffer[2] = f8792;
        arg_buffer[3] = possible_u45holes;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9287 = encode_clo(alloc_clo(lam9287_fptr, 0));

void pierce_u45randomly_fptr() // pierce-randomly
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9289 = arg_buffer[1];
    // reading env and args
    void *kont8789 = arg_buffer[2];
    void *possible_u45holes = arg_buffer[3];
    void *cave = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9816 = alloc_clo(lam9287_fptr, 7);

    // setting env list
    clo9816[1] = car;
    clo9816[2] = try_u45to_u45pierce;
    clo9816[3] = cave;
    clo9816[4] = kont8789;
    clo9816[5] = possible_u45holes;
    void *pierce_u45randomly = encode_clo(alloc_clo(pierce_u45randomly_fptr, 0));

    clo9816[6] = pierce_u45randomly;
    clo9816[7] = cdr;
    void *f8793 = encode_clo(clo9816);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(null_u63);
    arg_buffer[2] = f8793;
    arg_buffer[3] = possible_u45holes;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *pierce_u45randomly = encode_clo(alloc_clo(pierce_u45randomly_fptr, 0));

void lam9290_fptr() // lam9290
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9291 = arg_buffer[1];
    // reading env and args
    void *xy8531 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9291);
    void *f8814 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8814);
    arg_buffer[2] = xy8531;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8814))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9290 = encode_clo(alloc_clo(lam9290_fptr, 0));

void lam9296_fptr() // lam9296
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9297 = arg_buffer[1];
    // reading env and args
    void *xy8539 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9297);
    void *f8810 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(f8810);
    arg_buffer[2] = xy8539;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8810))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9296 = encode_clo(alloc_clo(lam9296_fptr, 0));

void lam9299_fptr() // lam9299
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9300 = arg_buffer[1];
    // reading env and args
    void *xy8542 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9300);
    void *cont8808 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cont8808);
    arg_buffer[2] = xy8542;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont8808))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9299 = encode_clo(alloc_clo(lam9299_fptr, 0));

void lam9302_fptr() // lam9302
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9303 = arg_buffer[1];
    // reading env and args
    void *a8541 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9303);
    void *j = decode_clo_array[4];
    void *i = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *cont8808 = decode_clo_array[1];

    // if-clause
    bool if_guard9817 = is_true(a8541);
    if (if_guard9817)
    {

        // creating new closure instance
        void **clo9818 = alloc_clo(lam9299_fptr, 1);

        // setting env list
        clo9818[1] = cont8808;
        void *f8809 = encode_clo(clo9818);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cons);
        arg_buffer[2] = f8809;
        arg_buffer[3] = i;
        arg_buffer[4] = j;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8543 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cont8808);
        arg_buffer[2] = xy8543;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont8808))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9302 = encode_clo(alloc_clo(lam9302_fptr, 0));

void lam9304_fptr() // lam9304
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9305 = arg_buffer[1];
    // reading env and args
    void *a8538 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9305);
    void *even_u63 = decode_clo_array[5];
    void *j = decode_clo_array[4];
    void *i = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *cont8808 = decode_clo_array[1];

    // creating new closure instance
    void **clo9819 = alloc_clo(lam9302_fptr, 4);

    // setting env list
    clo9819[1] = cont8808;
    clo9819[2] = cons;
    clo9819[3] = i;
    clo9819[4] = j;
    void *f8810 = encode_clo(clo9819);

    // if-clause
    bool if_guard9820 = is_true(a8538);
    if (if_guard9820)
    {

        // creating new closure instance
        void **clo9821 = alloc_clo(lam9296_fptr, 1);

        // setting env list
        clo9821[1] = f8810;
        void *f8811 = encode_clo(clo9821);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(even_u63);
        arg_buffer[2] = f8811;
        arg_buffer[3] = j;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8540 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8810);
        arg_buffer[2] = xy8540;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8810))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9304 = encode_clo(alloc_clo(lam9304_fptr, 0));

void lam9306_fptr() // lam9306
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9307 = arg_buffer[1];
    // reading env and args
    void *cont8808 = arg_buffer[2];
    void *i = arg_buffer[3];
    void *j = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9307);
    void *even_u63 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9822 = alloc_clo(lam9304_fptr, 5);

    // setting env list
    clo9822[1] = cont8808;
    clo9822[2] = cons;
    clo9822[3] = i;
    clo9822[4] = j;
    clo9822[5] = even_u63;
    void *f8812 = encode_clo(clo9822);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(even_u63);
    arg_buffer[2] = f8812;
    arg_buffer[3] = i;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9306 = encode_clo(alloc_clo(lam9306_fptr, 0));

void lam9308_fptr() // lam9308
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9309 = arg_buffer[1];
    // reading env and args
    void *a8555 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9309);
    void *concat = decode_clo_array[2];
    void *f8797 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(concat);
    arg_buffer[2] = f8797;
    arg_buffer[3] = a8555;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(concat))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9308 = encode_clo(alloc_clo(lam9308_fptr, 0));

void lam9310_fptr() // lam9310
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9311 = arg_buffer[1];
    // reading env and args
    void *a8553 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9311);
    void *concat = decode_clo_array[2];
    void *cont8798 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(concat);
    arg_buffer[2] = cont8798;
    arg_buffer[3] = a8553;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(concat))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9310 = encode_clo(alloc_clo(lam9310_fptr, 0));

void lam9312_fptr() // lam9312
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9313 = arg_buffer[1];
    // reading env and args
    void *xy8550 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9313);
    void *cont8799 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cont8799);
    arg_buffer[2] = xy8550;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont8799))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9312 = encode_clo(alloc_clo(lam9312_fptr, 0));

void lam9314_fptr() // lam9314
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9315 = arg_buffer[1];
    // reading env and args
    void *a8551 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9315);
    void *list = decode_clo_array[2];
    void *cont8799 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(list);
    arg_buffer[2] = cont8799;
    arg_buffer[3] = a8551;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9314 = encode_clo(alloc_clo(lam9314_fptr, 0));

void lam9316_fptr() // lam9316
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9317 = arg_buffer[1];
    // reading env and args
    void *a8549 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9317);
    void *list = decode_clo_array[5];
    void *cont8799 = decode_clo_array[4];
    void *j = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // if-clause
    bool if_guard9823 = is_true(a8549);
    if (if_guard9823)
    {

        // creating new closure instance
        void **clo9824 = alloc_clo(lam9312_fptr, 1);

        // setting env list
        clo9824[1] = cont8799;
        void *f8800 = encode_clo(clo9824);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(list);
        arg_buffer[2] = f8800;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9825 = alloc_clo(lam9314_fptr, 2);

        // setting env list
        clo9825[1] = cont8799;
        clo9825[2] = list;
        void *f8801 = encode_clo(clo9825);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(cons);
        arg_buffer[2] = f8801;
        arg_buffer[3] = i;
        arg_buffer[4] = j;
        arg_buffer[0] = reinterpret_cast<void *>(4);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9316 = encode_clo(alloc_clo(lam9316_fptr, 0));

void lam9318_fptr() // lam9318
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9319 = arg_buffer[1];
    // reading env and args
    void *a8548 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9319);
    void *list = decode_clo_array[7];
    void *cont8799 = decode_clo_array[6];
    void *equal_u63 = decode_clo_array[5];
    void *i = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *j = decode_clo_array[2];
    void *a8547 = decode_clo_array[1];

    // creating new closure instance
    void **clo9826 = alloc_clo(lam9316_fptr, 5);

    // setting env list
    clo9826[1] = cons;
    clo9826[2] = i;
    clo9826[3] = j;
    clo9826[4] = cont8799;
    clo9826[5] = list;
    void *f8802 = encode_clo(clo9826);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(equal_u63);
    arg_buffer[2] = f8802;
    arg_buffer[3] = a8547;
    arg_buffer[4] = a8548;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9318 = encode_clo(alloc_clo(lam9318_fptr, 0));

void lam9320_fptr() // lam9320
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9321 = arg_buffer[1];
    // reading env and args
    void *a8547 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9321);
    void *list = decode_clo_array[7];
    void *even_u63 = decode_clo_array[6];
    void *cont8799 = decode_clo_array[5];
    void *equal_u63 = decode_clo_array[4];
    void *j = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9827 = alloc_clo(lam9318_fptr, 7);

    // setting env list
    clo9827[1] = a8547;
    clo9827[2] = j;
    clo9827[3] = cons;
    clo9827[4] = i;
    clo9827[5] = equal_u63;
    clo9827[6] = cont8799;
    clo9827[7] = list;
    void *f8803 = encode_clo(clo9827);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(even_u63);
    arg_buffer[2] = f8803;
    arg_buffer[3] = j;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9320 = encode_clo(alloc_clo(lam9320_fptr, 0));

void lam9322_fptr() // lam9322
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9323 = arg_buffer[1];
    // reading env and args
    void *cont8799 = arg_buffer[2];
    void *j = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9323);
    void *list = decode_clo_array[5];
    void *even_u63 = decode_clo_array[4];
    void *equal_u63 = decode_clo_array[3];
    void *i = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9828 = alloc_clo(lam9320_fptr, 7);

    // setting env list
    clo9828[1] = cons;
    clo9828[2] = i;
    clo9828[3] = j;
    clo9828[4] = equal_u63;
    clo9828[5] = cont8799;
    clo9828[6] = even_u63;
    clo9828[7] = list;
    void *f8804 = encode_clo(clo9828);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(even_u63);
    arg_buffer[2] = f8804;
    arg_buffer[3] = i;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9322 = encode_clo(alloc_clo(lam9322_fptr, 0));

void lam9325_fptr() // lam9325
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9326 = arg_buffer[1];
    // reading env and args
    void *cont8798 = arg_buffer[2];
    void *i = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9326);
    void *even_u63 = decode_clo_array[7];
    void *equal_u63 = decode_clo_array[6];
    void *my_u45for = decode_clo_array[5];
    void *concat = decode_clo_array[4];
    void *list = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *m = decode_clo_array[1];
    mpz_t *mpzvar9829 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9829, "0", 10);
    void *a8546 = encode_mpz(mpzvar9829);

    // creating new closure instance
    void **clo9830 = alloc_clo(lam9322_fptr, 5);

    // setting env list
    clo9830[1] = cons;
    clo9830[2] = i;
    clo9830[3] = equal_u63;
    clo9830[4] = even_u63;
    clo9830[5] = list;
    void *a8552 = encode_clo(clo9830);

    // creating new closure instance
    void **clo9831 = alloc_clo(lam9310_fptr, 2);

    // setting env list
    clo9831[1] = cont8798;
    clo9831[2] = concat;
    void *f8805 = encode_clo(clo9831);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45for);
    arg_buffer[2] = f8805;
    arg_buffer[3] = a8546;
    arg_buffer[4] = m;
    arg_buffer[5] = a8552;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45for))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9325 = encode_clo(alloc_clo(lam9325_fptr, 0));

void lam9328_fptr() // lam9328
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9329 = arg_buffer[1];
    // reading env and args
    void *a8557 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9329);
    void *kont8794 = decode_clo_array[2];
    void *cave_u45to_u45maze = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(cave_u45to_u45maze);
    arg_buffer[2] = kont8794;
    arg_buffer[3] = a8557;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cave_u45to_u45maze))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9328 = encode_clo(alloc_clo(lam9328_fptr, 0));

void lam9330_fptr() // lam9330
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9331 = arg_buffer[1];
    // reading env and args
    void *a8556 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9331);
    void *kont8794 = decode_clo_array[4];
    void *pierce_u45randomly = decode_clo_array[3];
    void *cave = decode_clo_array[2];
    void *cave_u45to_u45maze = decode_clo_array[1];

    // creating new closure instance
    void **clo9832 = alloc_clo(lam9328_fptr, 2);

    // setting env list
    clo9832[1] = cave_u45to_u45maze;
    clo9832[2] = kont8794;
    void *f8795 = encode_clo(clo9832);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(pierce_u45randomly);
    arg_buffer[2] = f8795;
    arg_buffer[3] = a8556;
    arg_buffer[4] = cave;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(pierce_u45randomly))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9330 = encode_clo(alloc_clo(lam9330_fptr, 0));

void lam9332_fptr() // lam9332
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9333 = arg_buffer[1];
    // reading env and args
    void *possible_u45holes = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9333);
    void *kont8794 = decode_clo_array[5];
    void *cave = decode_clo_array[4];
    void *cave_u45to_u45maze = decode_clo_array[3];
    void *pierce_u45randomly = decode_clo_array[2];
    void *shuffle = decode_clo_array[1];

    // creating new closure instance
    void **clo9833 = alloc_clo(lam9330_fptr, 4);

    // setting env list
    clo9833[1] = cave_u45to_u45maze;
    clo9833[2] = cave;
    clo9833[3] = pierce_u45randomly;
    clo9833[4] = kont8794;
    void *f8796 = encode_clo(clo9833);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(shuffle);
    arg_buffer[2] = f8796;
    arg_buffer[3] = possible_u45holes;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(shuffle))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9332 = encode_clo(alloc_clo(lam9332_fptr, 0));

void lam9334_fptr() // lam9334
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9335 = arg_buffer[1];
    // reading env and args
    void *cave = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9335);
    void *equal_u63 = decode_clo_array[12];
    void *my_u45for = decode_clo_array[11];
    void *n = decode_clo_array[10];
    void *cave_u45to_u45maze = decode_clo_array[9];
    void *concat = decode_clo_array[8];
    void *list = decode_clo_array[7];
    void *kont8794 = decode_clo_array[6];
    void *even_u63 = decode_clo_array[5];
    void *pierce_u45randomly = decode_clo_array[4];
    void *shuffle = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9834 = alloc_clo(lam9332_fptr, 5);

    // setting env list
    clo9834[1] = shuffle;
    clo9834[2] = pierce_u45randomly;
    clo9834[3] = cave_u45to_u45maze;
    clo9834[4] = cave;
    clo9834[5] = kont8794;
    void *f8797 = encode_clo(clo9834);

    mpz_t *mpzvar9835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9835, "0", 10);
    void *a8545 = encode_mpz(mpzvar9835);

    // creating new closure instance
    void **clo9836 = alloc_clo(lam9325_fptr, 7);

    // setting env list
    clo9836[1] = m;
    clo9836[2] = cons;
    clo9836[3] = list;
    clo9836[4] = concat;
    clo9836[5] = my_u45for;
    clo9836[6] = equal_u63;
    clo9836[7] = even_u63;
    void *a8554 = encode_clo(clo9836);

    // creating new closure instance
    void **clo9837 = alloc_clo(lam9308_fptr, 2);

    // setting env list
    clo9837[1] = f8797;
    clo9837[2] = concat;
    void *f8806 = encode_clo(clo9837);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(my_u45for);
    arg_buffer[2] = f8806;
    arg_buffer[3] = a8545;
    arg_buffer[4] = n;
    arg_buffer[5] = a8554;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(my_u45for))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *lam9334 = encode_clo(alloc_clo(lam9334_fptr, 0));

void lam9336_fptr() // lam9336
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9337 = arg_buffer[1];
    // reading env and args
    void *a8536 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9337);
    void *equal_u63 = decode_clo_array[13];
    void *my_u45for = decode_clo_array[12];
    void *n = decode_clo_array[11];
    void *cave_u45to_u45maze = decode_clo_array[10];
    void *concat = decode_clo_array[9];
    void *list = decode_clo_array[8];
    void *make_u45matrix = decode_clo_array[7];
    void *kont8794 = decode_clo_array[6];
    void *even_u63 = decode_clo_array[5];
    void *pierce_u45randomly = decode_clo_array[4];
    void *shuffle = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // if-clause
    bool if_guard9838 = is_true(a8536);
    if (if_guard9838)
    {
        void *xy8537 = encode_str(new (GC) std::string("error"));

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(kont8794);
        arg_buffer[2] = xy8537;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8794))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9839 = alloc_clo(lam9334_fptr, 12);

        // setting env list
        clo9839[1] = m;
        clo9839[2] = cons;
        clo9839[3] = shuffle;
        clo9839[4] = pierce_u45randomly;
        clo9839[5] = even_u63;
        clo9839[6] = kont8794;
        clo9839[7] = list;
        clo9839[8] = concat;
        clo9839[9] = cave_u45to_u45maze;
        clo9839[10] = n;
        clo9839[11] = my_u45for;
        clo9839[12] = equal_u63;
        void *f8807 = encode_clo(clo9839);

        // creating new closure instance
        void **clo9840 = alloc_clo(lam9306_fptr, 2);

        // setting env list
        clo9840[1] = cons;
        clo9840[2] = even_u63;
        void *a8544 = encode_clo(clo9840);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(make_u45matrix);
        arg_buffer[2] = f8807;
        arg_buffer[3] = n;
        arg_buffer[4] = m;
        arg_buffer[5] = a8544;
        arg_buffer[0] = reinterpret_cast<void *>(5);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(make_u45matrix))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9336 = encode_clo(alloc_clo(lam9336_fptr, 0));

void lam9338_fptr() // lam9338
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9339 = arg_buffer[1];
    // reading env and args
    void *a8533 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9339);
    void *equal_u63 = decode_clo_array[13];
    void *my_u45for = decode_clo_array[12];
    void *n = decode_clo_array[11];
    void *cave_u45to_u45maze = decode_clo_array[10];
    void *concat = decode_clo_array[9];
    void *list = decode_clo_array[8];
    void *make_u45matrix = decode_clo_array[7];
    void *kont8794 = decode_clo_array[6];
    void *even_u63 = decode_clo_array[5];
    void *pierce_u45randomly = decode_clo_array[4];
    void *shuffle = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9841 = alloc_clo(lam9336_fptr, 13);

    // setting env list
    clo9841[1] = m;
    clo9841[2] = cons;
    clo9841[3] = shuffle;
    clo9841[4] = pierce_u45randomly;
    clo9841[5] = even_u63;
    clo9841[6] = kont8794;
    clo9841[7] = make_u45matrix;
    clo9841[8] = list;
    clo9841[9] = concat;
    clo9841[10] = cave_u45to_u45maze;
    clo9841[11] = n;
    clo9841[12] = my_u45for;
    clo9841[13] = equal_u63;
    void *f8813 = encode_clo(clo9841);

    // if-clause
    bool if_guard9842 = is_true(a8533);
    if (if_guard9842)
    {
        void *xy8534 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8813);
        arg_buffer[2] = xy8534;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8813))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8535 = encode_bool(true);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8813);
        arg_buffer[2] = xy8535;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8813))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9338 = encode_clo(alloc_clo(lam9338_fptr, 0));

void lam9340_fptr() // lam9340
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9341 = arg_buffer[1];
    // reading env and args
    void *a8530 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9341);
    void *odd_u63 = decode_clo_array[14];
    void *equal_u63 = decode_clo_array[13];
    void *my_u45for = decode_clo_array[12];
    void *n = decode_clo_array[11];
    void *cave_u45to_u45maze = decode_clo_array[10];
    void *concat = decode_clo_array[9];
    void *list = decode_clo_array[8];
    void *make_u45matrix = decode_clo_array[7];
    void *kont8794 = decode_clo_array[6];
    void *even_u63 = decode_clo_array[5];
    void *pierce_u45randomly = decode_clo_array[4];
    void *shuffle = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *m = decode_clo_array[1];

    // creating new closure instance
    void **clo9843 = alloc_clo(lam9338_fptr, 13);

    // setting env list
    clo9843[1] = m;
    clo9843[2] = cons;
    clo9843[3] = shuffle;
    clo9843[4] = pierce_u45randomly;
    clo9843[5] = even_u63;
    clo9843[6] = kont8794;
    clo9843[7] = make_u45matrix;
    clo9843[8] = list;
    clo9843[9] = concat;
    clo9843[10] = cave_u45to_u45maze;
    clo9843[11] = n;
    clo9843[12] = my_u45for;
    clo9843[13] = equal_u63;
    void *f8814 = encode_clo(clo9843);

    // if-clause
    bool if_guard9844 = is_true(a8530);
    if (if_guard9844)
    {

        // creating new closure instance
        void **clo9845 = alloc_clo(lam9290_fptr, 1);

        // setting env list
        clo9845[1] = f8814;
        void *f8815 = encode_clo(clo9845);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(odd_u63);
        arg_buffer[2] = f8815;
        arg_buffer[3] = m;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8532 = encode_bool(false);

        // clo-app
        arg_buffer[1] = reinterpret_cast<void *>(f8814);
        arg_buffer[2] = xy8532;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8814))[0]);
        // resetting the closure array
        decode_clo_array = nullptr;
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9340 = encode_clo(alloc_clo(lam9340_fptr, 0));

void make_u45maze_fptr() // make-maze
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9342 = arg_buffer[1];
    // reading env and args
    void *kont8794 = arg_buffer[2];
    void *n = arg_buffer[3];
    void *m = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9846 = alloc_clo(lam9340_fptr, 14);

    // setting env list
    clo9846[1] = m;
    clo9846[2] = cons;
    clo9846[3] = shuffle;
    clo9846[4] = pierce_u45randomly;
    clo9846[5] = even_u63;
    clo9846[6] = kont8794;
    clo9846[7] = make_u45matrix;
    clo9846[8] = list;
    clo9846[9] = concat;
    clo9846[10] = cave_u45to_u45maze;
    clo9846[11] = n;
    clo9846[12] = my_u45for;
    clo9846[13] = equal_u63;
    clo9846[14] = odd_u63;
    void *f8816 = encode_clo(clo9846);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(odd_u63);
    arg_buffer[2] = f8816;
    arg_buffer[3] = n;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *make_u45maze = encode_clo(alloc_clo(make_u45maze_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9345 = arg_buffer[1];
    // reading env and args
    void *kont8817 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    mpz_t *mpzvar9847 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9847, "7", 10);
    void *a8558 = encode_mpz(mpzvar9847);
    mpz_t *mpzvar9848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_str(*mpzvar9848, "7", 10);
    void *a8559 = encode_mpz(mpzvar9848);

    // clo-app
    arg_buffer[1] = reinterpret_cast<void *>(make_u45maze);
    arg_buffer[2] = kont8817;
    arg_buffer[3] = a8558;
    arg_buffer[4] = a8559;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(make_u45maze))[0]);
    // resetting the closure array
    decode_clo_array = nullptr;
    // call next proc using a function pointer
    function_ptr();
}

void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
    mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);
    // making a call to the brouhaha main function to kick off our C++ emission.
    void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
    arg_buffer[0] = 0;
    arg_buffer[2] = fhalt_clo;
    function_ptr();
}
