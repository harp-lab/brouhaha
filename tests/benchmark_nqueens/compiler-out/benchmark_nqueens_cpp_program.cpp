#include <stdio.h>
#include <string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
mpz_t *mpz9263 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_t *mpz9262 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_t *mpz9249 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_t *mpz9264 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));

void _u43_fptr() // +
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9267 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9265 = prim_car(lst);
        void *lst9268 = prim_cdr(lst);
        void *x9266 = apply_prim__u43(lst9268);
        arg_buffer[1] = kont9265;
        arg_buffer[2] = x9266;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9265))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9265 = arg_buffer[2];
        void *x9266 = apply_prim__u43(arg_buffer);
        arg_buffer[1] = kont9265;
        arg_buffer[2] = x9266;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9265))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr() // -
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9271 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9269 = prim_car(lst);
        void *lst9272 = prim_cdr(lst);
        void *x9270 = apply_prim__u45(lst9272);
        arg_buffer[1] = kont9269;
        arg_buffer[2] = x9270;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9269))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9269 = arg_buffer[2];
        void *x9270 = apply_prim__u45(arg_buffer);
        arg_buffer[1] = kont9269;
        arg_buffer[2] = x9270;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9269))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr() // *
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9275 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9273 = prim_car(lst);
        void *lst9276 = prim_cdr(lst);
        void *x9274 = apply_prim__u42(lst9276);
        arg_buffer[1] = kont9273;
        arg_buffer[2] = x9274;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9273))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9273 = arg_buffer[2];
        void *x9274 = apply_prim__u42(arg_buffer);
        arg_buffer[1] = kont9273;
        arg_buffer[2] = x9274;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9273))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr() // /
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9279 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9277 = prim_car(lst);
        void *lst9280 = prim_cdr(lst);
        void *x9278 = apply_prim__u47(lst9280);
        arg_buffer[1] = kont9277;
        arg_buffer[2] = x9278;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9277 = arg_buffer[2];
        void *x9278 = apply_prim__u47(arg_buffer);
        arg_buffer[1] = kont9277;
        arg_buffer[2] = x9278;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9277))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr() // =
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9283 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9281 = prim_car(lst);
        void *lst9284 = prim_cdr(lst);
        void *x9282 = apply_prim__u61(lst9284);
        arg_buffer[1] = kont9281;
        arg_buffer[2] = x9282;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9281))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9281 = arg_buffer[2];
        void *x9282 = apply_prim__u61(arg_buffer);
        arg_buffer[1] = kont9281;
        arg_buffer[2] = x9282;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9281))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr() // >
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9287 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9285 = prim_car(lst);
        void *lst9288 = prim_cdr(lst);
        void *x9286 = apply_prim__u62(lst9288);
        arg_buffer[1] = kont9285;
        arg_buffer[2] = x9286;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9285))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9285 = arg_buffer[2];
        void *x9286 = apply_prim__u62(arg_buffer);
        arg_buffer[1] = kont9285;
        arg_buffer[2] = x9286;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9285))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr() // <
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9291 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9289 = prim_car(lst);
        void *lst9292 = prim_cdr(lst);
        void *x9290 = apply_prim__u60(lst9292);
        arg_buffer[1] = kont9289;
        arg_buffer[2] = x9290;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9289))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9289 = arg_buffer[2];
        void *x9290 = apply_prim__u60(arg_buffer);
        arg_buffer[1] = kont9289;
        arg_buffer[2] = x9290;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9289))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr() // <=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9295 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9293 = prim_car(lst);
        void *lst9296 = prim_cdr(lst);
        void *x9294 = apply_prim__u60_u61(lst9296);
        arg_buffer[1] = kont9293;
        arg_buffer[2] = x9294;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9293))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9293 = arg_buffer[2];
        void *x9294 = apply_prim__u60_u61(arg_buffer);
        arg_buffer[1] = kont9293;
        arg_buffer[2] = x9294;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9293))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr() // >=
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9299 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9297 = prim_car(lst);
        void *lst9300 = prim_cdr(lst);
        void *x9298 = apply_prim__u62_u61(lst9300);
        arg_buffer[1] = kont9297;
        arg_buffer[2] = x9298;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9297))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9297 = arg_buffer[2];
        void *x9298 = apply_prim__u62_u61(arg_buffer);
        arg_buffer[1] = kont9297;
        arg_buffer[2] = x9298;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9297))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *_u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr() // modulo
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9303 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9301 = prim_car(lst);
        void *lst9304 = prim_cdr(lst);
        void *x9302 = apply_prim_modulo(lst9304);
        arg_buffer[1] = kont9301;
        arg_buffer[2] = x9302;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9301))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9301 = arg_buffer[2];
        void *x9302 = apply_prim_modulo(arg_buffer);
        arg_buffer[1] = kont9301;
        arg_buffer[2] = x9302;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9301))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr() // null?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9307 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9305 = prim_car(lst);
        void *lst9308 = prim_cdr(lst);
        void *x9306 = apply_prim_null_u63(lst9308);
        arg_buffer[1] = kont9305;
        arg_buffer[2] = x9306;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9305))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9305 = arg_buffer[2];
        void *x9306 = apply_prim_null_u63(arg_buffer);
        arg_buffer[1] = kont9305;
        arg_buffer[2] = x9306;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9305))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr() // equal?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9311 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9309 = prim_car(lst);
        void *lst9312 = prim_cdr(lst);
        void *x9310 = apply_prim_equal_u63(lst9312);
        arg_buffer[1] = kont9309;
        arg_buffer[2] = x9310;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9309))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9309 = arg_buffer[2];
        void *x9310 = apply_prim_equal_u63(arg_buffer);
        arg_buffer[1] = kont9309;
        arg_buffer[2] = x9310;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9309))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr() // eq?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9315 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9313 = prim_car(lst);
        void *lst9316 = prim_cdr(lst);
        void *x9314 = apply_prim_eq_u63(lst9316);
        arg_buffer[1] = kont9313;
        arg_buffer[2] = x9314;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9313))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9313 = arg_buffer[2];
        void *x9314 = apply_prim_eq_u63(arg_buffer);
        arg_buffer[1] = kont9313;
        arg_buffer[2] = x9314;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9313))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr() // cons
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9319 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9317 = prim_car(lst);
        void *lst9320 = prim_cdr(lst);
        void *x9318 = apply_prim_cons(lst9320);
        arg_buffer[1] = kont9317;
        arg_buffer[2] = x9318;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9317))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9317 = arg_buffer[2];
        void *x9318 = apply_prim_cons(arg_buffer);
        arg_buffer[1] = kont9317;
        arg_buffer[2] = x9318;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9317))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr() // car
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9323 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9321 = prim_car(lst);
        void *lst9324 = prim_cdr(lst);
        void *x9322 = apply_prim_car(lst9324);
        arg_buffer[1] = kont9321;
        arg_buffer[2] = x9322;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9321))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9321 = arg_buffer[2];
        void *x9322 = apply_prim_car(arg_buffer);
        arg_buffer[1] = kont9321;
        arg_buffer[2] = x9322;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9321))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr() // cdr
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9327 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9325 = prim_car(lst);
        void *lst9328 = prim_cdr(lst);
        void *x9326 = apply_prim_cdr(lst9328);
        arg_buffer[1] = kont9325;
        arg_buffer[2] = x9326;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9325))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9325 = arg_buffer[2];
        void *x9326 = apply_prim_cdr(arg_buffer);
        arg_buffer[1] = kont9325;
        arg_buffer[2] = x9326;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9325))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr() // float->int
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9331 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9329 = prim_car(lst);
        void *lst9332 = prim_cdr(lst);
        void *x9330 = apply_prim_float_u45_u62int(lst9332);
        arg_buffer[1] = kont9329;
        arg_buffer[2] = x9330;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9329))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9329 = arg_buffer[2];
        void *x9330 = apply_prim_float_u45_u62int(arg_buffer);
        arg_buffer[1] = kont9329;
        arg_buffer[2] = x9330;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9329))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr() // int->float
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9335 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9333 = prim_car(lst);
        void *lst9336 = prim_cdr(lst);
        void *x9334 = apply_prim_int_u45_u62float(lst9336);
        arg_buffer[1] = kont9333;
        arg_buffer[2] = x9334;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9333))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9333 = arg_buffer[2];
        void *x9334 = apply_prim_int_u45_u62float(arg_buffer);
        arg_buffer[1] = kont9333;
        arg_buffer[2] = x9334;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9333))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr() // hash
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9339 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9337 = prim_car(lst);
        void *lst9340 = prim_cdr(lst);
        void *x9338 = apply_prim_hash(lst9340);
        arg_buffer[1] = kont9337;
        arg_buffer[2] = x9338;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9337))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9337 = arg_buffer[2];
        void *x9338 = apply_prim_hash(arg_buffer);
        arg_buffer[1] = kont9337;
        arg_buffer[2] = x9338;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9337))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr() // hash-ref
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9343 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9341 = prim_car(lst);
        void *lst9344 = prim_cdr(lst);
        void *x9342 = apply_prim_hash_u45ref(lst9344);
        arg_buffer[1] = kont9341;
        arg_buffer[2] = x9342;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9341))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9341 = arg_buffer[2];
        void *x9342 = apply_prim_hash_u45ref(arg_buffer);
        arg_buffer[1] = kont9341;
        arg_buffer[2] = x9342;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9341))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr() // hash-set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9347 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9345 = prim_car(lst);
        void *lst9348 = prim_cdr(lst);
        void *x9346 = apply_prim_hash_u45set(lst9348);
        arg_buffer[1] = kont9345;
        arg_buffer[2] = x9346;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9345))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9345 = arg_buffer[2];
        void *x9346 = apply_prim_hash_u45set(arg_buffer);
        arg_buffer[1] = kont9345;
        arg_buffer[2] = x9346;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9345))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr() // hash-keys
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9351 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9349 = prim_car(lst);
        void *lst9352 = prim_cdr(lst);
        void *x9350 = apply_prim_hash_u45keys(lst9352);
        arg_buffer[1] = kont9349;
        arg_buffer[2] = x9350;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9349))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9349 = arg_buffer[2];
        void *x9350 = apply_prim_hash_u45keys(arg_buffer);
        arg_buffer[1] = kont9349;
        arg_buffer[2] = x9350;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9349))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr() // hash-has-key?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9355 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9353 = prim_car(lst);
        void *lst9356 = prim_cdr(lst);
        void *x9354 = apply_prim_hash_u45has_u45key_u63(lst9356);
        arg_buffer[1] = kont9353;
        arg_buffer[2] = x9354;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9353))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9353 = arg_buffer[2];
        void *x9354 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
        arg_buffer[1] = kont9353;
        arg_buffer[2] = x9354;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9353))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr() // hash-count
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9359 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9357 = prim_car(lst);
        void *lst9360 = prim_cdr(lst);
        void *x9358 = apply_prim_hash_u45count(lst9360);
        arg_buffer[1] = kont9357;
        arg_buffer[2] = x9358;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9357))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9357 = arg_buffer[2];
        void *x9358 = apply_prim_hash_u45count(arg_buffer);
        arg_buffer[1] = kont9357;
        arg_buffer[2] = x9358;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9357))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr() // set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9363 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9361 = prim_car(lst);
        void *lst9364 = prim_cdr(lst);
        void *x9362 = apply_prim_set(lst9364);
        arg_buffer[1] = kont9361;
        arg_buffer[2] = x9362;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9361))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9361 = arg_buffer[2];
        void *x9362 = apply_prim_set(arg_buffer);
        arg_buffer[1] = kont9361;
        arg_buffer[2] = x9362;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9361))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr() // set->list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9367 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9365 = prim_car(lst);
        void *lst9368 = prim_cdr(lst);
        void *x9366 = apply_prim_set_u45_u62list(lst9368);
        arg_buffer[1] = kont9365;
        arg_buffer[2] = x9366;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9365))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9365 = arg_buffer[2];
        void *x9366 = apply_prim_set_u45_u62list(arg_buffer);
        arg_buffer[1] = kont9365;
        arg_buffer[2] = x9366;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9365))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr() // list->set
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9371 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9369 = prim_car(lst);
        void *lst9372 = prim_cdr(lst);
        void *x9370 = apply_prim_list_u45_u62set(lst9372);
        arg_buffer[1] = kont9369;
        arg_buffer[2] = x9370;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9369))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9369 = arg_buffer[2];
        void *x9370 = apply_prim_list_u45_u62set(arg_buffer);
        arg_buffer[1] = kont9369;
        arg_buffer[2] = x9370;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9369))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr() // set-add
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9375 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9373 = prim_car(lst);
        void *lst9376 = prim_cdr(lst);
        void *x9374 = apply_prim_set_u45add(lst9376);
        arg_buffer[1] = kont9373;
        arg_buffer[2] = x9374;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9373))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9373 = arg_buffer[2];
        void *x9374 = apply_prim_set_u45add(arg_buffer);
        arg_buffer[1] = kont9373;
        arg_buffer[2] = x9374;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9373))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr() // set-member?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9379 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9377 = prim_car(lst);
        void *lst9380 = prim_cdr(lst);
        void *x9378 = apply_prim_set_u45member_u63(lst9380);
        arg_buffer[1] = kont9377;
        arg_buffer[2] = x9378;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9377))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9377 = arg_buffer[2];
        void *x9378 = apply_prim_set_u45member_u63(arg_buffer);
        arg_buffer[1] = kont9377;
        arg_buffer[2] = x9378;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9377))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr() // set-remove
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9383 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9381 = prim_car(lst);
        void *lst9384 = prim_cdr(lst);
        void *x9382 = apply_prim_set_u45remove(lst9384);
        arg_buffer[1] = kont9381;
        arg_buffer[2] = x9382;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9381))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9381 = arg_buffer[2];
        void *x9382 = apply_prim_set_u45remove(arg_buffer);
        arg_buffer[1] = kont9381;
        arg_buffer[2] = x9382;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9381))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr() // set-count
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9387 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9385 = prim_car(lst);
        void *lst9388 = prim_cdr(lst);
        void *x9386 = apply_prim_set_u45count(lst9388);
        arg_buffer[1] = kont9385;
        arg_buffer[2] = x9386;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9385))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9385 = arg_buffer[2];
        void *x9386 = apply_prim_set_u45count(arg_buffer);
        arg_buffer[1] = kont9385;
        arg_buffer[2] = x9386;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9385))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr() // string?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9391 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9389 = prim_car(lst);
        void *lst9392 = prim_cdr(lst);
        void *x9390 = apply_prim_string_u63(lst9392);
        arg_buffer[1] = kont9389;
        arg_buffer[2] = x9390;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9389))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9389 = arg_buffer[2];
        void *x9390 = apply_prim_string_u63(arg_buffer);
        arg_buffer[1] = kont9389;
        arg_buffer[2] = x9390;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9389))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr() // string-length
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9395 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9393 = prim_car(lst);
        void *lst9396 = prim_cdr(lst);
        void *x9394 = apply_prim_string_u45length(lst9396);
        arg_buffer[1] = kont9393;
        arg_buffer[2] = x9394;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9393))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9393 = arg_buffer[2];
        void *x9394 = apply_prim_string_u45length(arg_buffer);
        arg_buffer[1] = kont9393;
        arg_buffer[2] = x9394;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9393))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr() // string-ref
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9399 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9397 = prim_car(lst);
        void *lst9400 = prim_cdr(lst);
        void *x9398 = apply_prim_string_u45ref(lst9400);
        arg_buffer[1] = kont9397;
        arg_buffer[2] = x9398;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9397))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9397 = arg_buffer[2];
        void *x9398 = apply_prim_string_u45ref(arg_buffer);
        arg_buffer[1] = kont9397;
        arg_buffer[2] = x9398;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9397))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr() // substring
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9403 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9401 = prim_car(lst);
        void *lst9404 = prim_cdr(lst);
        void *x9402 = apply_prim_substring(lst9404);
        arg_buffer[1] = kont9401;
        arg_buffer[2] = x9402;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9401))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9401 = arg_buffer[2];
        void *x9402 = apply_prim_substring(arg_buffer);
        arg_buffer[1] = kont9401;
        arg_buffer[2] = x9402;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9401))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr() // string-append
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9407 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9405 = prim_car(lst);
        void *lst9408 = prim_cdr(lst);
        void *x9406 = apply_prim_string_u45append(lst9408);
        arg_buffer[1] = kont9405;
        arg_buffer[2] = x9406;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9405))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9405 = arg_buffer[2];
        void *x9406 = apply_prim_string_u45append(arg_buffer);
        arg_buffer[1] = kont9405;
        arg_buffer[2] = x9406;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9405))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr() // string->list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9411 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9409 = prim_car(lst);
        void *lst9412 = prim_cdr(lst);
        void *x9410 = apply_prim_string_u45_u62list(lst9412);
        arg_buffer[1] = kont9409;
        arg_buffer[2] = x9410;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9409))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9409 = arg_buffer[2];
        void *x9410 = apply_prim_string_u45_u62list(arg_buffer);
        arg_buffer[1] = kont9409;
        arg_buffer[2] = x9410;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9409))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr() // exact-floor
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9415 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9413 = prim_car(lst);
        void *lst9416 = prim_cdr(lst);
        void *x9414 = apply_prim_exact_u45floor(lst9416);
        arg_buffer[1] = kont9413;
        arg_buffer[2] = x9414;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9413))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9413 = arg_buffer[2];
        void *x9414 = apply_prim_exact_u45floor(arg_buffer);
        arg_buffer[1] = kont9413;
        arg_buffer[2] = x9414;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9413))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr() // exact-ceiling
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9419 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9417 = prim_car(lst);
        void *lst9420 = prim_cdr(lst);
        void *x9418 = apply_prim_exact_u45ceiling(lst9420);
        arg_buffer[1] = kont9417;
        arg_buffer[2] = x9418;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9417))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9417 = arg_buffer[2];
        void *x9418 = apply_prim_exact_u45ceiling(arg_buffer);
        arg_buffer[1] = kont9417;
        arg_buffer[2] = x9418;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9417))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr() // exact-round
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9423 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9421 = prim_car(lst);
        void *lst9424 = prim_cdr(lst);
        void *x9422 = apply_prim_exact_u45round(lst9424);
        arg_buffer[1] = kont9421;
        arg_buffer[2] = x9422;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9421))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9421 = arg_buffer[2];
        void *x9422 = apply_prim_exact_u45round(arg_buffer);
        arg_buffer[1] = kont9421;
        arg_buffer[2] = x9422;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9421))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr() // abs
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9427 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9425 = prim_car(lst);
        void *lst9428 = prim_cdr(lst);
        void *x9426 = apply_prim_abs(lst9428);
        arg_buffer[1] = kont9425;
        arg_buffer[2] = x9426;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9425))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9425 = arg_buffer[2];
        void *x9426 = apply_prim_abs(arg_buffer);
        arg_buffer[1] = kont9425;
        arg_buffer[2] = x9426;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9425))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr() // max
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9431 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9429 = prim_car(lst);
        void *lst9432 = prim_cdr(lst);
        void *x9430 = apply_prim_max(lst9432);
        arg_buffer[1] = kont9429;
        arg_buffer[2] = x9430;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9429))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9429 = arg_buffer[2];
        void *x9430 = apply_prim_max(arg_buffer);
        arg_buffer[1] = kont9429;
        arg_buffer[2] = x9430;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9429))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr() // min
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9435 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9433 = prim_car(lst);
        void *lst9436 = prim_cdr(lst);
        void *x9434 = apply_prim_min(lst9436);
        arg_buffer[1] = kont9433;
        arg_buffer[2] = x9434;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9433))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9433 = arg_buffer[2];
        void *x9434 = apply_prim_min(arg_buffer);
        arg_buffer[1] = kont9433;
        arg_buffer[2] = x9434;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9433))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr() // expt
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9439 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9437 = prim_car(lst);
        void *lst9440 = prim_cdr(lst);
        void *x9438 = apply_prim_expt(lst9440);
        arg_buffer[1] = kont9437;
        arg_buffer[2] = x9438;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9437))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9437 = arg_buffer[2];
        void *x9438 = apply_prim_expt(arg_buffer);
        arg_buffer[1] = kont9437;
        arg_buffer[2] = x9438;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9437))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr() // sqrt
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9443 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9441 = prim_car(lst);
        void *lst9444 = prim_cdr(lst);
        void *x9442 = apply_prim_sqrt(lst9444);
        arg_buffer[1] = kont9441;
        arg_buffer[2] = x9442;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9441))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9441 = arg_buffer[2];
        void *x9442 = apply_prim_sqrt(arg_buffer);
        arg_buffer[1] = kont9441;
        arg_buffer[2] = x9442;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9441))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr() // remainder
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9447 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9445 = prim_car(lst);
        void *lst9448 = prim_cdr(lst);
        void *x9446 = apply_prim_remainder(lst9448);
        arg_buffer[1] = kont9445;
        arg_buffer[2] = x9446;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9445))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9445 = arg_buffer[2];
        void *x9446 = apply_prim_remainder(arg_buffer);
        arg_buffer[1] = kont9445;
        arg_buffer[2] = x9446;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9445))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr() // quotient
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9451 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9449 = prim_car(lst);
        void *lst9452 = prim_cdr(lst);
        void *x9450 = apply_prim_quotient(lst9452);
        arg_buffer[1] = kont9449;
        arg_buffer[2] = x9450;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9449))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9449 = arg_buffer[2];
        void *x9450 = apply_prim_quotient(arg_buffer);
        arg_buffer[1] = kont9449;
        arg_buffer[2] = x9450;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9449))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr() // random
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9455 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9453 = prim_car(lst);
        void *lst9456 = prim_cdr(lst);
        void *x9454 = apply_prim_random(lst9456);
        arg_buffer[1] = kont9453;
        arg_buffer[2] = x9454;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9453))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9453 = arg_buffer[2];
        void *x9454 = apply_prim_random(arg_buffer);
        arg_buffer[1] = kont9453;
        arg_buffer[2] = x9454;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9453))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr() // symbol?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9459 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9457 = prim_car(lst);
        void *lst9460 = prim_cdr(lst);
        void *x9458 = apply_prim_symbol_u63(lst9460);
        arg_buffer[1] = kont9457;
        arg_buffer[2] = x9458;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9457))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9457 = arg_buffer[2];
        void *x9458 = apply_prim_symbol_u63(arg_buffer);
        arg_buffer[1] = kont9457;
        arg_buffer[2] = x9458;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9457))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr() // pair?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9463 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9461 = prim_car(lst);
        void *lst9464 = prim_cdr(lst);
        void *x9462 = apply_prim_pair_u63(lst9464);
        arg_buffer[1] = kont9461;
        arg_buffer[2] = x9462;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9461))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9461 = arg_buffer[2];
        void *x9462 = apply_prim_pair_u63(arg_buffer);
        arg_buffer[1] = kont9461;
        arg_buffer[2] = x9462;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9461))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr() // positive?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9467 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9465 = prim_car(lst);
        void *lst9468 = prim_cdr(lst);
        void *x9466 = apply_prim_positive_u63(lst9468);
        arg_buffer[1] = kont9465;
        arg_buffer[2] = x9466;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9465))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9465 = arg_buffer[2];
        void *x9466 = apply_prim_positive_u63(arg_buffer);
        arg_buffer[1] = kont9465;
        arg_buffer[2] = x9466;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9465))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr() // negative?
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_env9471 = arg_buffer[1];
    // decoding closure array
    void **decode_clo_array = nullptr;
    if (is_cons(arg_buffer[2]))
    {
        //(apply e0 e0) case
        void *lst = arg_buffer[2];
        void *kont9469 = prim_car(lst);
        void *lst9472 = prim_cdr(lst);
        void *x9470 = apply_prim_negative_u63(lst9472);
        arg_buffer[1] = kont9469;
        arg_buffer[2] = x9470;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9469))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *kont9469 = arg_buffer[2];
        void *x9470 = apply_prim_negative_u63(arg_buffer);
        arg_buffer[1] = kont9469;
        arg_buffer[2] = x9470;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9469))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr() // list
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8962 = arg_buffer[1];
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

    void *kont8821 = prim_car(x);
    void *x8960 = prim_cdr(x);

    // clo-app
    arg_buffer[1] = kont8821;
    arg_buffer[2] = x8960;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8821))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *list = encode_clo(alloc_clo(list_fptr, 0));

void lam8963_fptr() // lam8963
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8964 = arg_buffer[1];
    // reading env and args
    void *a8685 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8964);
    void *kont8822 = decode_clo_array[3];
    void *a8683 = decode_clo_array[2];
    void *equal_u63 = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_equal_u63_2(a8683, a8685);
    arg_buffer[1] = kont8822;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8822))[0]);
    function_ptr();
}

void *lam8963 = encode_clo(alloc_clo(lam8963_fptr, 0));

void even_u63_fptr() // even?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8967 = arg_buffer[1];
    // reading env and args
    void *kont8822 = arg_buffer[2];
    void *x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *a8683 = encode_mpz(mpz9263);
    void *a8684 = encode_mpz(mpz9249);

    // creating new closure instance
    void **clo9473 = alloc_clo(lam8963_fptr, 3);

    // setting env list
    clo9473[1] = equal_u63;
    clo9473[2] = a8683;
    clo9473[3] = kont8822;
    void *f8823 = encode_clo(clo9473);

    // clo-app
    arg_buffer[2] = apply_prim_modulo_2(x, a8684);
    arg_buffer[1] = f8823;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8823))[0]);
    function_ptr();
}

void *even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8968_fptr() // lam8968
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8969 = arg_buffer[1];
    // reading env and args
    void *a8688 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8969);
    void *kont8824 = decode_clo_array[3];
    void *equal_u63 = decode_clo_array[2];
    void *a8686 = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_equal_u63_2(a8686, a8688);
    arg_buffer[1] = kont8824;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8824))[0]);
    function_ptr();
}

void *lam8968 = encode_clo(alloc_clo(lam8968_fptr, 0));

void odd_u63_fptr() // odd?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8972 = arg_buffer[1];
    // reading env and args
    void *kont8824 = arg_buffer[2];
    void *x = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *a8686 = encode_mpz(mpz9262);
    void *a8687 = encode_mpz(mpz9249);

    // creating new closure instance
    void **clo9474 = alloc_clo(lam8968_fptr, 3);

    // setting env list
    clo9474[1] = a8686;
    clo9474[2] = equal_u63;
    clo9474[3] = kont8824;
    void *f8825 = encode_clo(clo9474);

    // clo-app
    arg_buffer[2] = apply_prim_modulo_2(x, a8687);
    arg_buffer[1] = f8825;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8825))[0]);
    function_ptr();
}

void *odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void lam8973_fptr() // lam8973
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8974 = arg_buffer[1];
    // reading env and args
    void *xy8691 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8974);
    void *kont8826 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = kont8826;
    arg_buffer[2] = xy8691;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8826))[0]);
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
    void *a8694 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8976);
    void *kont8826 = decode_clo_array[3];
    void *list_u45ref = decode_clo_array[2];
    void *a8692 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = list_u45ref;
    arg_buffer[2] = kont8826;
    arg_buffer[3] = a8692;
    arg_buffer[4] = a8694;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list_u45ref))[0]);
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
    void *a8692 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8979);
    void *kont8826 = decode_clo_array[4];
    void *list_u45ref = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];
    void *a8693 = encode_mpz(mpz9262);

    // creating new closure instance
    void **clo9475 = alloc_clo(lam8975_fptr, 3);

    // setting env list
    clo9475[1] = a8692;
    clo9475[2] = list_u45ref;
    clo9475[3] = kont8826;
    void *f8828 = encode_clo(clo9475);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8693);
    arg_buffer[1] = f8828;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8828))[0]);
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
    void *a8690 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8981);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *kont8826 = decode_clo_array[5];
    void *list_u45ref = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9476 = is_true(a8690);
    if (if_guard9476)
    {

        // creating new closure instance
        void **clo9477 = alloc_clo(lam8973_fptr, 1);

        // setting env list
        clo9477[1] = kont8826;
        void *f8827 = encode_clo(clo9477);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8827;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8827))[0]);
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9478 = alloc_clo(lam8978_fptr, 4);

        // setting env list
        clo9478[1] = _u45;
        clo9478[2] = n;
        clo9478[3] = list_u45ref;
        clo9478[4] = kont8826;
        void *f8829 = encode_clo(clo9478);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8829;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8829))[0]);
        function_ptr();
    }
}

void *lam8980 = encode_clo(alloc_clo(lam8980_fptr, 0));

void list_u45ref_fptr() // list-ref
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8983 = arg_buffer[1];
    // reading env and args
    void *kont8826 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *a8689 = encode_mpz(mpz9263);

    // creating new closure instance
    void **clo9479 = alloc_clo(lam8980_fptr, 7);

    // setting env list
    clo9479[1] = car;
    clo9479[2] = n;
    clo9479[3] = _u45;
    void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

    clo9479[4] = list_u45ref;
    clo9479[5] = kont8826;
    clo9479[6] = lst;
    clo9479[7] = cdr;
    void *f8830 = encode_clo(clo9479);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(a8689, n);
    arg_buffer[1] = f8830;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8830))[0]);
    function_ptr();
}

void *list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8984_fptr() // lam8984
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8985 = arg_buffer[1];
    // reading env and args
    void *xy8696 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8985);
    void *f8835 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = f8835;
    arg_buffer[2] = xy8696;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8835))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam8984 = encode_clo(alloc_clo(lam8984_fptr, 0));

void lam8986_fptr() // lam8986
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8987 = arg_buffer[1];
    // reading env and args
    void *xy8697 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8987);
    void *f8835 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = f8835;
    arg_buffer[2] = xy8697;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8835))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam8986 = encode_clo(alloc_clo(lam8986_fptr, 0));

void lam8989_fptr() // lam8989
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8990 = arg_buffer[1];
    // reading env and args
    void *a8702 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8990);
    void *member = decode_clo_array[3];
    void *item = decode_clo_array[2];
    void *kont8831 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = member;
    arg_buffer[2] = kont8831;
    arg_buffer[3] = item;
    arg_buffer[4] = a8702;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member))[0]);
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
    void *a8701 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8992);
    void *cdr = decode_clo_array[5];
    void *member = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *item = decode_clo_array[2];
    void *kont8831 = decode_clo_array[1];

    // if-clause
    bool if_guard9480 = is_true(a8701);
    if (if_guard9480)
    {

        // clo-app
        arg_buffer[1] = kont8831;
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8831))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9481 = alloc_clo(lam8989_fptr, 3);

        // setting env list
        clo9481[1] = kont8831;
        clo9481[2] = item;
        clo9481[3] = member;
        void *f8832 = encode_clo(clo9481);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8832;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8832))[0]);
        function_ptr();
    }
}

void *lam8991 = encode_clo(alloc_clo(lam8991_fptr, 0));

void lam8993_fptr() // lam8993
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8994 = arg_buffer[1];
    // reading env and args
    void *a8700 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8994);
    void *cdr = decode_clo_array[6];
    void *member = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *item = decode_clo_array[3];
    void *equal_u63 = decode_clo_array[2];
    void *kont8831 = decode_clo_array[1];

    // creating new closure instance
    void **clo9482 = alloc_clo(lam8991_fptr, 5);

    // setting env list
    clo9482[1] = kont8831;
    clo9482[2] = item;
    clo9482[3] = lst;
    clo9482[4] = member;
    clo9482[5] = cdr;
    void *f8833 = encode_clo(clo9482);

    // clo-app
    arg_buffer[2] = apply_prim_equal_u63_2(item, a8700);
    arg_buffer[1] = f8833;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8833))[0]);
    function_ptr();
}

void *lam8993 = encode_clo(alloc_clo(lam8993_fptr, 0));

void lam8995_fptr() // lam8995
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8996 = arg_buffer[1];
    // reading env and args
    void *a8698 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8996);
    void *cdr = decode_clo_array[7];
    void *member = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *item = decode_clo_array[4];
    void *equal_u63 = decode_clo_array[3];
    void *kont8831 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9483 = is_true(a8698);
    if (if_guard9483)
    {
        void *xy8699 = encode_bool(false);

        // clo-app
        arg_buffer[1] = kont8831;
        arg_buffer[2] = xy8699;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8831))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9484 = alloc_clo(lam8993_fptr, 6);

        // setting env list
        clo9484[1] = kont8831;
        clo9484[2] = equal_u63;
        clo9484[3] = item;
        clo9484[4] = lst;
        clo9484[5] = member;
        clo9484[6] = cdr;
        void *f8834 = encode_clo(clo9484);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8834;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8834))[0]);
        function_ptr();
    }
}

void *lam8995 = encode_clo(alloc_clo(lam8995_fptr, 0));

void lam8997_fptr() // lam8997
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env8998 = arg_buffer[1];
    // reading env and args
    void *a8695 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env8998);
    void *cdr = decode_clo_array[8];
    void *member = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *null_u63 = decode_clo_array[5];
    void *item = decode_clo_array[4];
    void *equal_u63 = decode_clo_array[3];
    void *kont8831 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo9485 = alloc_clo(lam8995_fptr, 7);

    // setting env list
    clo9485[1] = car;
    clo9485[2] = kont8831;
    clo9485[3] = equal_u63;
    clo9485[4] = item;
    clo9485[5] = lst;
    clo9485[6] = member;
    clo9485[7] = cdr;
    void *f8835 = encode_clo(clo9485);

    // if-clause
    bool if_guard9486 = is_true(a8695);
    if (if_guard9486)
    {

        // creating new closure instance
        void **clo9487 = alloc_clo(lam8984_fptr, 1);

        // setting env list
        clo9487[1] = f8835;
        void *f8836 = encode_clo(clo9487);

        // clo-app
        arg_buffer[2] = apply_prim_null_u63_1(item);
        arg_buffer[1] = f8836;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8836))[0]);
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9488 = alloc_clo(lam8986_fptr, 1);

        // setting env list
        clo9488[1] = f8835;
        void *f8837 = encode_clo(clo9488);

        // clo-app
        arg_buffer[2] = apply_prim_null_u63_1(lst);
        arg_buffer[1] = f8837;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8837))[0]);
        function_ptr();
    }
}

void *lam8997 = encode_clo(alloc_clo(lam8997_fptr, 0));

void member_fptr() // member
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_8999 = arg_buffer[1];
    // reading env and args
    void *kont8831 = arg_buffer[2];
    void *item = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9489 = alloc_clo(lam8997_fptr, 8);

    // setting env list
    clo9489[1] = car;
    clo9489[2] = kont8831;
    clo9489[3] = equal_u63;
    clo9489[4] = item;
    clo9489[5] = null_u63;
    clo9489[6] = lst;
    void *member = encode_clo(alloc_clo(member_fptr, 0));

    clo9489[7] = member;
    clo9489[8] = cdr;
    void *f8838 = encode_clo(clo9489);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(item);
    arg_buffer[1] = f8838;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8838))[0]);
    function_ptr();
}

void *member = encode_clo(alloc_clo(member_fptr, 0));

void lam9002_fptr() // lam9002
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9003 = arg_buffer[1];
    // reading env and args
    void *a8708 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9003);
    void *kont8839 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *member_u63 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = member_u63;
    arg_buffer[2] = kont8839;
    arg_buffer[3] = x;
    arg_buffer[4] = a8708;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9002 = encode_clo(alloc_clo(lam9002_fptr, 0));

void lam9004_fptr() // lam9004
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9005 = arg_buffer[1];
    // reading env and args
    void *a8706 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9005);
    void *cdr = decode_clo_array[5];
    void *kont8839 = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *member_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9490 = is_true(a8706);
    if (if_guard9490)
    {
        void *xy8707 = encode_bool(true);

        // clo-app
        arg_buffer[1] = kont8839;
        arg_buffer[2] = xy8707;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8839))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9491 = alloc_clo(lam9002_fptr, 3);

        // setting env list
        clo9491[1] = member_u63;
        clo9491[2] = x;
        clo9491[3] = kont8839;
        void *f8840 = encode_clo(clo9491);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8840;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8840))[0]);
        function_ptr();
    }
}

void *lam9004 = encode_clo(alloc_clo(lam9004_fptr, 0));

void lam9006_fptr() // lam9006
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9007 = arg_buffer[1];
    // reading env and args
    void *a8705 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9007);
    void *cdr = decode_clo_array[6];
    void *kont8839 = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *equal_u63 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *member_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9492 = alloc_clo(lam9004_fptr, 5);

    // setting env list
    clo9492[1] = member_u63;
    clo9492[2] = x;
    clo9492[3] = lst;
    clo9492[4] = kont8839;
    clo9492[5] = cdr;
    void *f8841 = encode_clo(clo9492);

    // clo-app
    arg_buffer[2] = apply_prim_equal_u63_2(a8705, x);
    arg_buffer[1] = f8841;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8841))[0]);
    function_ptr();
}

void *lam9006 = encode_clo(alloc_clo(lam9006_fptr, 0));

void lam9008_fptr() // lam9008
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9009 = arg_buffer[1];
    // reading env and args
    void *a8703 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9009);
    void *cdr = decode_clo_array[7];
    void *kont8839 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *equal_u63 = decode_clo_array[4];
    void *x = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *member_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9493 = is_true(a8703);
    if (if_guard9493)
    {
        void *xy8704 = encode_bool(false);

        // clo-app
        arg_buffer[1] = kont8839;
        arg_buffer[2] = xy8704;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8839))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9494 = alloc_clo(lam9006_fptr, 6);

        // setting env list
        clo9494[1] = member_u63;
        clo9494[2] = x;
        clo9494[3] = equal_u63;
        clo9494[4] = lst;
        clo9494[5] = kont8839;
        clo9494[6] = cdr;
        void *f8842 = encode_clo(clo9494);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8842;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8842))[0]);
        function_ptr();
    }
}

void *lam9008 = encode_clo(alloc_clo(lam9008_fptr, 0));

void member_u63_fptr() // member?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9010 = arg_buffer[1];
    // reading env and args
    void *kont8839 = arg_buffer[2];
    void *x = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9495 = alloc_clo(lam9008_fptr, 7);

    // setting env list
    void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

    clo9495[1] = member_u63;
    clo9495[2] = car;
    clo9495[3] = x;
    clo9495[4] = equal_u63;
    clo9495[5] = lst;
    clo9495[6] = kont8839;
    clo9495[7] = cdr;
    void *f8843 = encode_clo(clo9495);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = f8843;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8843))[0]);
    function_ptr();
}

void *member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam9012_fptr() // lam9012
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9013 = arg_buffer[1];
    // reading env and args
    void *a8713 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9013);
    void *a8711 = decode_clo_array[3];
    void *kont8844 = decode_clo_array[2];
    void *_u43 = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(a8711, a8713);
    arg_buffer[1] = kont8844;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8844))[0]);
    function_ptr();
}

void *lam9012 = encode_clo(alloc_clo(lam9012_fptr, 0));

void lam9014_fptr() // lam9014
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9015 = arg_buffer[1];
    // reading env and args
    void *a8712 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9015);
    void *a8711 = decode_clo_array[4];
    void *length = decode_clo_array[3];
    void *kont8844 = decode_clo_array[2];
    void *_u43 = decode_clo_array[1];

    // creating new closure instance
    void **clo9496 = alloc_clo(lam9012_fptr, 3);

    // setting env list
    clo9496[1] = _u43;
    clo9496[2] = kont8844;
    clo9496[3] = a8711;
    void *f8845 = encode_clo(clo9496);

    // clo-app
    arg_buffer[1] = length;
    arg_buffer[2] = f8845;
    arg_buffer[3] = a8712;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9014 = encode_clo(alloc_clo(lam9014_fptr, 0));

void lam9017_fptr() // lam9017
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9018 = arg_buffer[1];
    // reading env and args
    void *a8709 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9018);
    void *cdr = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *length = decode_clo_array[3];
    void *kont8844 = decode_clo_array[2];
    void *_u43 = decode_clo_array[1];

    // if-clause
    bool if_guard9497 = is_true(a8709);
    if (if_guard9497)
    {
        void *xy8710 = encode_mpz(mpz9263);

        // clo-app
        arg_buffer[1] = kont8844;
        arg_buffer[2] = xy8710;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8844))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *a8711 = encode_mpz(mpz9262);

        // creating new closure instance
        void **clo9498 = alloc_clo(lam9014_fptr, 4);

        // setting env list
        clo9498[1] = _u43;
        clo9498[2] = kont8844;
        clo9498[3] = length;
        clo9498[4] = a8711;
        void *f8846 = encode_clo(clo9498);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8846;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8846))[0]);
        function_ptr();
    }
}

void *lam9017 = encode_clo(alloc_clo(lam9017_fptr, 0));

void length_fptr() // length
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9019 = arg_buffer[1];
    // reading env and args
    void *kont8844 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9499 = alloc_clo(lam9017_fptr, 5);

    // setting env list
    clo9499[1] = _u43;
    clo9499[2] = kont8844;
    void *length = encode_clo(alloc_clo(length_fptr, 0));

    clo9499[3] = length;
    clo9499[4] = lst;
    clo9499[5] = cdr;
    void *f8847 = encode_clo(clo9499);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = f8847;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8847))[0]);
    function_ptr();
}

void *length = encode_clo(alloc_clo(length_fptr, 0));

void lam9020_fptr() // lam9020
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9021 = arg_buffer[1];
    // reading env and args
    void *xy8715 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9021);
    void *kont8848 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = kont8848;
    arg_buffer[2] = xy8715;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8848))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9020 = encode_clo(alloc_clo(lam9020_fptr, 0));

void lam9022_fptr() // lam9022
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9023 = arg_buffer[1];
    // reading env and args
    void *a8719 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9023);
    void *a8717 = decode_clo_array[3];
    void *kont8848 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8717, a8719);
    arg_buffer[1] = kont8848;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8848))[0]);
    function_ptr();
}

void *lam9022 = encode_clo(alloc_clo(lam9022_fptr, 0));

void lam9024_fptr() // lam9024
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9025 = arg_buffer[1];
    // reading env and args
    void *a8718 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9025);
    void *map = decode_clo_array[5];
    void *a8717 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *kont8848 = decode_clo_array[1];

    // creating new closure instance
    void **clo9500 = alloc_clo(lam9022_fptr, 3);

    // setting env list
    clo9500[1] = cons;
    clo9500[2] = kont8848;
    clo9500[3] = a8717;
    void *f8850 = encode_clo(clo9500);

    // clo-app
    arg_buffer[1] = map;
    arg_buffer[2] = f8850;
    arg_buffer[3] = proc;
    arg_buffer[4] = a8718;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9024 = encode_clo(alloc_clo(lam9024_fptr, 0));

void lam9026_fptr() // lam9026
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9027 = arg_buffer[1];
    // reading env and args
    void *a8717 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9027);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *map = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *kont8848 = decode_clo_array[1];

    // creating new closure instance
    void **clo9501 = alloc_clo(lam9024_fptr, 5);

    // setting env list
    clo9501[1] = kont8848;
    clo9501[2] = proc;
    clo9501[3] = cons;
    clo9501[4] = a8717;
    clo9501[5] = map;
    void *f8851 = encode_clo(clo9501);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = f8851;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8851))[0]);
    function_ptr();
}

void *lam9026 = encode_clo(alloc_clo(lam9026_fptr, 0));

void lam9028_fptr() // lam9028
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9029 = arg_buffer[1];
    // reading env and args
    void *a8716 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9029);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *map = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *kont8848 = decode_clo_array[1];

    // creating new closure instance
    void **clo9502 = alloc_clo(lam9026_fptr, 6);

    // setting env list
    clo9502[1] = kont8848;
    clo9502[2] = proc;
    clo9502[3] = cons;
    clo9502[4] = map;
    clo9502[5] = lst;
    clo9502[6] = cdr;
    void *f8852 = encode_clo(clo9502);

    // clo-app
    arg_buffer[1] = proc;
    arg_buffer[2] = f8852;
    arg_buffer[3] = a8716;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9028 = encode_clo(alloc_clo(lam9028_fptr, 0));

void lam9030_fptr() // lam9030
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9031 = arg_buffer[1];
    // reading env and args
    void *a8714 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9031);
    void *lst = decode_clo_array[8];
    void *map = decode_clo_array[7];
    void *car = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *proc = decode_clo_array[2];
    void *kont8848 = decode_clo_array[1];

    // if-clause
    bool if_guard9503 = is_true(a8714);
    if (if_guard9503)
    {

        // creating new closure instance
        void **clo9504 = alloc_clo(lam9020_fptr, 1);

        // setting env list
        clo9504[1] = kont8848;
        void *f8849 = encode_clo(clo9504);

        // clo-app
        arg_buffer[1] = list;
        arg_buffer[2] = f8849;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9505 = alloc_clo(lam9028_fptr, 6);

        // setting env list
        clo9505[1] = kont8848;
        clo9505[2] = proc;
        clo9505[3] = cons;
        clo9505[4] = map;
        clo9505[5] = lst;
        clo9505[6] = cdr;
        void *f8853 = encode_clo(clo9505);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8853;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8853))[0]);
        function_ptr();
    }
}

void *lam9030 = encode_clo(alloc_clo(lam9030_fptr, 0));

void map_fptr() // map
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9032 = arg_buffer[1];
    // reading env and args
    void *kont8848 = arg_buffer[2];
    void *proc = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9506 = alloc_clo(lam9030_fptr, 8);

    // setting env list
    clo9506[1] = kont8848;
    clo9506[2] = proc;
    clo9506[3] = cdr;
    clo9506[4] = list;
    clo9506[5] = cons;
    clo9506[6] = car;
    void *map = encode_clo(alloc_clo(map_fptr, 0));

    clo9506[7] = map;
    clo9506[8] = lst;
    void *f8854 = encode_clo(clo9506);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = f8854;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8854))[0]);
    function_ptr();
}

void *map = encode_clo(alloc_clo(map_fptr, 0));

void lam9033_fptr() // lam9033
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9034 = arg_buffer[1];
    // reading env and args
    void *xy8721 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9034);
    void *kont8855 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = kont8855;
    arg_buffer[2] = xy8721;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8855))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9033 = encode_clo(alloc_clo(lam9033_fptr, 0));

void lam9035_fptr() // lam9035
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9036 = arg_buffer[1];
    // reading env and args
    void *a8726 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9036);
    void *kont8855 = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *a8724 = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8724, a8726);
    arg_buffer[1] = kont8855;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8855))[0]);
    function_ptr();
}

void *lam9035 = encode_clo(alloc_clo(lam9035_fptr, 0));

void lam9037_fptr() // lam9037
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9038 = arg_buffer[1];
    // reading env and args
    void *a8725 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9038);
    void *kont8855 = decode_clo_array[5];
    void *op = decode_clo_array[4];
    void *filter = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *a8724 = decode_clo_array[1];

    // creating new closure instance
    void **clo9507 = alloc_clo(lam9035_fptr, 3);

    // setting env list
    clo9507[1] = a8724;
    clo9507[2] = cons;
    clo9507[3] = kont8855;
    void *f8857 = encode_clo(clo9507);

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = f8857;
    arg_buffer[3] = op;
    arg_buffer[4] = a8725;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9037 = encode_clo(alloc_clo(lam9037_fptr, 0));

void lam9039_fptr() // lam9039
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9040 = arg_buffer[1];
    // reading env and args
    void *a8724 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9040);
    void *cdr = decode_clo_array[6];
    void *kont8855 = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *op = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9508 = alloc_clo(lam9037_fptr, 5);

    // setting env list
    clo9508[1] = a8724;
    clo9508[2] = cons;
    clo9508[3] = filter;
    clo9508[4] = op;
    clo9508[5] = kont8855;
    void *f8858 = encode_clo(clo9508);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = f8858;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8858))[0]);
    function_ptr();
}

void *lam9039 = encode_clo(alloc_clo(lam9039_fptr, 0));

void lam9041_fptr() // lam9041
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9042 = arg_buffer[1];
    // reading env and args
    void *a8727 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9042);
    void *kont8855 = decode_clo_array[3];
    void *op = decode_clo_array[2];
    void *filter = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = filter;
    arg_buffer[2] = kont8855;
    arg_buffer[3] = op;
    arg_buffer[4] = a8727;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9041 = encode_clo(alloc_clo(lam9041_fptr, 0));

void lam9043_fptr() // lam9043
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9044 = arg_buffer[1];
    // reading env and args
    void *a8723 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9044);
    void *cdr = decode_clo_array[7];
    void *kont8855 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *op = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9509 = is_true(a8723);
    if (if_guard9509)
    {

        // creating new closure instance
        void **clo9510 = alloc_clo(lam9039_fptr, 6);

        // setting env list
        clo9510[1] = cons;
        clo9510[2] = filter;
        clo9510[3] = op;
        clo9510[4] = lst;
        clo9510[5] = kont8855;
        clo9510[6] = cdr;
        void *f8859 = encode_clo(clo9510);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8859;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8859))[0]);
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9511 = alloc_clo(lam9041_fptr, 3);

        // setting env list
        clo9511[1] = filter;
        clo9511[2] = op;
        clo9511[3] = kont8855;
        void *f8860 = encode_clo(clo9511);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8860;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8860))[0]);
        function_ptr();
    }
}

void *lam9043 = encode_clo(alloc_clo(lam9043_fptr, 0));

void lam9045_fptr() // lam9045
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9046 = arg_buffer[1];
    // reading env and args
    void *a8722 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9046);
    void *cdr = decode_clo_array[7];
    void *kont8855 = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *op = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo9512 = alloc_clo(lam9043_fptr, 7);

    // setting env list
    clo9512[1] = car;
    clo9512[2] = filter;
    clo9512[3] = cons;
    clo9512[4] = op;
    clo9512[5] = lst;
    clo9512[6] = kont8855;
    clo9512[7] = cdr;
    void *f8861 = encode_clo(clo9512);

    // clo-app
    arg_buffer[1] = op;
    arg_buffer[2] = f8861;
    arg_buffer[3] = a8722;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9045 = encode_clo(alloc_clo(lam9045_fptr, 0));

void lam9047_fptr() // lam9047
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9048 = arg_buffer[1];
    // reading env and args
    void *a8720 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9048);
    void *kont8855 = decode_clo_array[8];
    void *lst = decode_clo_array[7];
    void *op = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *filter = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9513 = is_true(a8720);
    if (if_guard9513)
    {

        // creating new closure instance
        void **clo9514 = alloc_clo(lam9033_fptr, 1);

        // setting env list
        clo9514[1] = kont8855;
        void *f8856 = encode_clo(clo9514);

        // clo-app
        arg_buffer[1] = list;
        arg_buffer[2] = f8856;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9515 = alloc_clo(lam9045_fptr, 7);

        // setting env list
        clo9515[1] = car;
        clo9515[2] = filter;
        clo9515[3] = cons;
        clo9515[4] = op;
        clo9515[5] = lst;
        clo9515[6] = kont8855;
        clo9515[7] = cdr;
        void *f8862 = encode_clo(clo9515);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8862;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8862))[0]);
        function_ptr();
    }
}

void *lam9047 = encode_clo(alloc_clo(lam9047_fptr, 0));

void filter_fptr() // filter
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9049 = arg_buffer[1];
    // reading env and args
    void *kont8855 = arg_buffer[2];
    void *op = arg_buffer[3];
    void *lst = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9516 = alloc_clo(lam9047_fptr, 8);

    // setting env list
    clo9516[1] = car;
    void *filter = encode_clo(alloc_clo(filter_fptr, 0));

    clo9516[2] = filter;
    clo9516[3] = cdr;
    clo9516[4] = list;
    clo9516[5] = cons;
    clo9516[6] = op;
    clo9516[7] = lst;
    clo9516[8] = kont8855;
    void *f8863 = encode_clo(clo9516);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = f8863;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8863))[0]);
    function_ptr();
}

void *filter = encode_clo(alloc_clo(filter_fptr, 0));

void lam9050_fptr() // lam9050
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9051 = arg_buffer[1];
    // reading env and args
    void *a8732 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9051);
    void *drop = decode_clo_array[3];
    void *a8730 = decode_clo_array[2];
    void *kont8864 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = drop;
    arg_buffer[2] = kont8864;
    arg_buffer[3] = a8730;
    arg_buffer[4] = a8732;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9050 = encode_clo(alloc_clo(lam9050_fptr, 0));

void lam9053_fptr() // lam9053
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9054 = arg_buffer[1];
    // reading env and args
    void *a8730 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9054);
    void *drop = decode_clo_array[4];
    void *kont8864 = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *_u45 = decode_clo_array[1];
    void *a8731 = encode_mpz(mpz9262);

    // creating new closure instance
    void **clo9517 = alloc_clo(lam9050_fptr, 3);

    // setting env list
    clo9517[1] = kont8864;
    clo9517[2] = a8730;
    clo9517[3] = drop;
    void *f8865 = encode_clo(clo9517);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8731);
    arg_buffer[1] = f8865;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8865))[0]);
    function_ptr();
}

void *lam9053 = encode_clo(alloc_clo(lam9053_fptr, 0));

void lam9055_fptr() // lam9055
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9056 = arg_buffer[1];
    // reading env and args
    void *a8729 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9056);
    void *cdr = decode_clo_array[6];
    void *kont8864 = decode_clo_array[5];
    void *n = decode_clo_array[4];
    void *_u45 = decode_clo_array[3];
    void *lst = decode_clo_array[2];
    void *drop = decode_clo_array[1];

    // if-clause
    bool if_guard9518 = is_true(a8729);
    if (if_guard9518)
    {

        // clo-app
        arg_buffer[1] = kont8864;
        arg_buffer[2] = lst;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8864))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9519 = alloc_clo(lam9053_fptr, 4);

        // setting env list
        clo9519[1] = _u45;
        clo9519[2] = n;
        clo9519[3] = kont8864;
        clo9519[4] = drop;
        void *f8866 = encode_clo(clo9519);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8866;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8866))[0]);
        function_ptr();
    }
}

void *lam9055 = encode_clo(alloc_clo(lam9055_fptr, 0));

void drop_fptr() // drop
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9058 = arg_buffer[1];
    // reading env and args
    void *kont8864 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *a8728 = encode_mpz(mpz9263);

    // creating new closure instance
    void **clo9520 = alloc_clo(lam9055_fptr, 6);

    // setting env list
    void *drop = encode_clo(alloc_clo(drop_fptr, 0));

    clo9520[1] = drop;
    clo9520[2] = lst;
    clo9520[3] = _u45;
    clo9520[4] = n;
    clo9520[5] = kont8864;
    clo9520[6] = cdr;
    void *f8867 = encode_clo(clo9520);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8728);
    arg_buffer[1] = f8867;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8867))[0]);
    function_ptr();
}

void *drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam9059_fptr() // lam9059
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9060 = arg_buffer[1];
    // reading env and args
    void *a8736 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9060);
    void *foldl = decode_clo_array[4];
    void *kont8868 = decode_clo_array[3];
    void *a8735 = decode_clo_array[2];
    void *fun = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = foldl;
    arg_buffer[2] = kont8868;
    arg_buffer[3] = fun;
    arg_buffer[4] = a8735;
    arg_buffer[5] = a8736;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9059 = encode_clo(alloc_clo(lam9059_fptr, 0));

void lam9061_fptr() // lam9061
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9062 = arg_buffer[1];
    // reading env and args
    void *a8735 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9062);
    void *cdr = decode_clo_array[5];
    void *lst = decode_clo_array[4];
    void *fun = decode_clo_array[3];
    void *foldl = decode_clo_array[2];
    void *kont8868 = decode_clo_array[1];

    // creating new closure instance
    void **clo9521 = alloc_clo(lam9059_fptr, 4);

    // setting env list
    clo9521[1] = fun;
    clo9521[2] = a8735;
    clo9521[3] = kont8868;
    clo9521[4] = foldl;
    void *f8869 = encode_clo(clo9521);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = f8869;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8869))[0]);
    function_ptr();
}

void *lam9061 = encode_clo(alloc_clo(lam9061_fptr, 0));

void lam9063_fptr() // lam9063
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9064 = arg_buffer[1];
    // reading env and args
    void *a8734 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9064);
    void *cdr = decode_clo_array[6];
    void *lst = decode_clo_array[5];
    void *fun = decode_clo_array[4];
    void *acc = decode_clo_array[3];
    void *foldl = decode_clo_array[2];
    void *kont8868 = decode_clo_array[1];

    // creating new closure instance
    void **clo9522 = alloc_clo(lam9061_fptr, 5);

    // setting env list
    clo9522[1] = kont8868;
    clo9522[2] = foldl;
    clo9522[3] = fun;
    clo9522[4] = lst;
    clo9522[5] = cdr;
    void *f8870 = encode_clo(clo9522);

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = f8870;
    arg_buffer[3] = a8734;
    arg_buffer[4] = acc;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9063 = encode_clo(alloc_clo(lam9063_fptr, 0));

void lam9065_fptr() // lam9065
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9066 = arg_buffer[1];
    // reading env and args
    void *a8733 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9066);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *fun = decode_clo_array[5];
    void *acc = decode_clo_array[4];
    void *car = decode_clo_array[3];
    void *foldl = decode_clo_array[2];
    void *kont8868 = decode_clo_array[1];

    // if-clause
    bool if_guard9523 = is_true(a8733);
    if (if_guard9523)
    {

        // clo-app
        arg_buffer[1] = kont8868;
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8868))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9524 = alloc_clo(lam9063_fptr, 6);

        // setting env list
        clo9524[1] = kont8868;
        clo9524[2] = foldl;
        clo9524[3] = acc;
        clo9524[4] = fun;
        clo9524[5] = lst;
        clo9524[6] = cdr;
        void *f8871 = encode_clo(clo9524);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8871;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8871))[0]);
        function_ptr();
    }
}

void *lam9065 = encode_clo(alloc_clo(lam9065_fptr, 0));

void foldl_fptr() // foldl
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9067 = arg_buffer[1];
    // reading env and args
    void *kont8868 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9525 = alloc_clo(lam9065_fptr, 7);

    // setting env list
    clo9525[1] = kont8868;
    void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

    clo9525[2] = foldl;
    clo9525[3] = car;
    clo9525[4] = acc;
    clo9525[5] = fun;
    clo9525[6] = lst;
    clo9525[7] = cdr;
    void *f8872 = encode_clo(clo9525);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = f8872;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8872))[0]);
    function_ptr();
}

void *foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam9068_fptr() // lam9068
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9069 = arg_buffer[1];
    // reading env and args
    void *a8740 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9069);
    void *kont8873 = decode_clo_array[3];
    void *fun = decode_clo_array[2];
    void *a8738 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = fun;
    arg_buffer[2] = kont8873;
    arg_buffer[3] = a8738;
    arg_buffer[4] = a8740;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9068 = encode_clo(alloc_clo(lam9068_fptr, 0));

void lam9070_fptr() // lam9070
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9071 = arg_buffer[1];
    // reading env and args
    void *a8739 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9071);
    void *fun = decode_clo_array[5];
    void *acc = decode_clo_array[4];
    void *a8738 = decode_clo_array[3];
    void *kont8873 = decode_clo_array[2];
    void *foldr = decode_clo_array[1];

    // creating new closure instance
    void **clo9526 = alloc_clo(lam9068_fptr, 3);

    // setting env list
    clo9526[1] = a8738;
    clo9526[2] = fun;
    clo9526[3] = kont8873;
    void *f8874 = encode_clo(clo9526);

    // clo-app
    arg_buffer[1] = foldr;
    arg_buffer[2] = f8874;
    arg_buffer[3] = fun;
    arg_buffer[4] = acc;
    arg_buffer[5] = a8739;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9070 = encode_clo(alloc_clo(lam9070_fptr, 0));

void lam9072_fptr() // lam9072
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9073 = arg_buffer[1];
    // reading env and args
    void *a8738 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9073);
    void *cdr = decode_clo_array[6];
    void *fun = decode_clo_array[5];
    void *acc = decode_clo_array[4];
    void *kont8873 = decode_clo_array[3];
    void *foldr = decode_clo_array[2];
    void *lst = decode_clo_array[1];

    // creating new closure instance
    void **clo9527 = alloc_clo(lam9070_fptr, 5);

    // setting env list
    clo9527[1] = foldr;
    clo9527[2] = kont8873;
    clo9527[3] = a8738;
    clo9527[4] = acc;
    clo9527[5] = fun;
    void *f8875 = encode_clo(clo9527);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lst);
    arg_buffer[1] = f8875;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8875))[0]);
    function_ptr();
}

void *lam9072 = encode_clo(alloc_clo(lam9072_fptr, 0));

void lam9074_fptr() // lam9074
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9075 = arg_buffer[1];
    // reading env and args
    void *a8737 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9075);
    void *cdr = decode_clo_array[7];
    void *fun = decode_clo_array[6];
    void *acc = decode_clo_array[5];
    void *car = decode_clo_array[4];
    void *kont8873 = decode_clo_array[3];
    void *foldr = decode_clo_array[2];
    void *lst = decode_clo_array[1];

    // if-clause
    bool if_guard9528 = is_true(a8737);
    if (if_guard9528)
    {

        // clo-app
        arg_buffer[1] = kont8873;
        arg_buffer[2] = acc;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8873))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9529 = alloc_clo(lam9072_fptr, 6);

        // setting env list
        clo9529[1] = lst;
        clo9529[2] = foldr;
        clo9529[3] = kont8873;
        clo9529[4] = acc;
        clo9529[5] = fun;
        clo9529[6] = cdr;
        void *f8876 = encode_clo(clo9529);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lst);
        arg_buffer[1] = f8876;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8876))[0]);
        function_ptr();
    }
}

void *lam9074 = encode_clo(alloc_clo(lam9074_fptr, 0));

void foldr_fptr() // foldr
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9076 = arg_buffer[1];
    // reading env and args
    void *kont8873 = arg_buffer[2];
    void *fun = arg_buffer[3];
    void *acc = arg_buffer[4];
    void *lst = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9530 = alloc_clo(lam9074_fptr, 7);

    // setting env list
    clo9530[1] = lst;
    void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

    clo9530[2] = foldr;
    clo9530[3] = kont8873;
    clo9530[4] = car;
    clo9530[5] = acc;
    clo9530[6] = fun;
    clo9530[7] = cdr;
    void *f8877 = encode_clo(clo9530);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = f8877;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8877))[0]);
    function_ptr();
}

void *foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void lam9077_fptr() // lam9077
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9078 = arg_buffer[1];
    // reading env and args
    void *a8744 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9078);
    void *a8742 = decode_clo_array[3];
    void *reverse_u45helper = decode_clo_array[2];
    void *kont8878 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reverse_u45helper;
    arg_buffer[2] = kont8878;
    arg_buffer[3] = a8742;
    arg_buffer[4] = a8744;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9077 = encode_clo(alloc_clo(lam9077_fptr, 0));

void lam9079_fptr() // lam9079
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9080 = arg_buffer[1];
    // reading env and args
    void *a8743 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9080);
    void *a8742 = decode_clo_array[5];
    void *reverse_u45helper = decode_clo_array[4];
    void *kont8878 = decode_clo_array[3];
    void *lst2 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9531 = alloc_clo(lam9077_fptr, 3);

    // setting env list
    clo9531[1] = kont8878;
    clo9531[2] = reverse_u45helper;
    clo9531[3] = a8742;
    void *f8879 = encode_clo(clo9531);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8743, lst2);
    arg_buffer[1] = f8879;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8879))[0]);
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
    void *a8742 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9082);
    void *lst = decode_clo_array[6];
    void *reverse_u45helper = decode_clo_array[5];
    void *kont8878 = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9532 = alloc_clo(lam9079_fptr, 5);

    // setting env list
    clo9532[1] = cons;
    clo9532[2] = lst2;
    clo9532[3] = kont8878;
    clo9532[4] = reverse_u45helper;
    clo9532[5] = a8742;
    void *f8880 = encode_clo(clo9532);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(lst);
    arg_buffer[1] = f8880;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8880))[0]);
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
    void *a8741 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9084);
    void *cdr = decode_clo_array[7];
    void *lst = decode_clo_array[6];
    void *reverse_u45helper = decode_clo_array[5];
    void *kont8878 = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *car = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // if-clause
    bool if_guard9533 = is_true(a8741);
    if (if_guard9533)
    {

        // clo-app
        arg_buffer[1] = kont8878;
        arg_buffer[2] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8878))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9534 = alloc_clo(lam9081_fptr, 6);

        // setting env list
        clo9534[1] = cons;
        clo9534[2] = car;
        clo9534[3] = lst2;
        clo9534[4] = kont8878;
        clo9534[5] = reverse_u45helper;
        clo9534[6] = lst;
        void *f8881 = encode_clo(clo9534);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8881;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8881))[0]);
        function_ptr();
    }
}

void *lam9083 = encode_clo(alloc_clo(lam9083_fptr, 0));

void reverse_u45helper_fptr() // reverse-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9085 = arg_buffer[1];
    // reading env and args
    void *kont8878 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *lst2 = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9535 = alloc_clo(lam9083_fptr, 7);

    // setting env list
    clo9535[1] = cons;
    clo9535[2] = car;
    clo9535[3] = lst2;
    clo9535[4] = kont8878;
    void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

    clo9535[5] = reverse_u45helper;
    clo9535[6] = lst;
    clo9535[7] = cdr;
    void *f8882 = encode_clo(clo9535);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lst);
    arg_buffer[1] = f8882;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8882))[0]);
    function_ptr();
}

void *reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void lam9086_fptr() // lam9086
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9087 = arg_buffer[1];
    // reading env and args
    void *a8745 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9087);
    void *lst = decode_clo_array[3];
    void *reverse_u45helper = decode_clo_array[2];
    void *kont8883 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = reverse_u45helper;
    arg_buffer[2] = kont8883;
    arg_buffer[3] = lst;
    arg_buffer[4] = a8745;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9086 = encode_clo(alloc_clo(lam9086_fptr, 0));

void reverse_fptr() // reverse
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9088 = arg_buffer[1];
    // reading env and args
    void *kont8883 = arg_buffer[2];
    void *lst = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9536 = alloc_clo(lam9086_fptr, 3);

    // setting env list
    clo9536[1] = kont8883;
    clo9536[2] = reverse_u45helper;
    clo9536[3] = lst;
    void *f8884 = encode_clo(clo9536);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8884;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam9089_fptr() // lam9089
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9090 = arg_buffer[1];
    // reading env and args
    void *a8749 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9090);
    void *kont8885 = decode_clo_array[3];
    void *a8747 = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8747, a8749);
    arg_buffer[1] = kont8885;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8885))[0]);
    function_ptr();
}

void *lam9089 = encode_clo(alloc_clo(lam9089_fptr, 0));

void lam9091_fptr() // lam9091
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9092 = arg_buffer[1];
    // reading env and args
    void *a8748 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9092);
    void *kont8885 = decode_clo_array[5];
    void *a8747 = decode_clo_array[4];
    void *append1 = decode_clo_array[3];
    void *rhs = decode_clo_array[2];
    void *cons = decode_clo_array[1];

    // creating new closure instance
    void **clo9537 = alloc_clo(lam9089_fptr, 3);

    // setting env list
    clo9537[1] = cons;
    clo9537[2] = a8747;
    clo9537[3] = kont8885;
    void *f8886 = encode_clo(clo9537);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = f8886;
    arg_buffer[3] = a8748;
    arg_buffer[4] = rhs;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9091 = encode_clo(alloc_clo(lam9091_fptr, 0));

void lam9093_fptr() // lam9093
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9094 = arg_buffer[1];
    // reading env and args
    void *a8747 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9094);
    void *lhs = decode_clo_array[6];
    void *append1 = decode_clo_array[5];
    void *rhs = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *kont8885 = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9538 = alloc_clo(lam9091_fptr, 5);

    // setting env list
    clo9538[1] = cons;
    clo9538[2] = rhs;
    clo9538[3] = append1;
    clo9538[4] = a8747;
    clo9538[5] = kont8885;
    void *f8887 = encode_clo(clo9538);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(lhs);
    arg_buffer[1] = f8887;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8887))[0]);
    function_ptr();
}

void *lam9093 = encode_clo(alloc_clo(lam9093_fptr, 0));

void lam9095_fptr() // lam9095
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9096 = arg_buffer[1];
    // reading env and args
    void *a8746 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9096);
    void *lhs = decode_clo_array[7];
    void *append1 = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *kont8885 = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *rhs = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9539 = is_true(a8746);
    if (if_guard9539)
    {

        // clo-app
        arg_buffer[1] = kont8885;
        arg_buffer[2] = rhs;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8885))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9540 = alloc_clo(lam9093_fptr, 6);

        // setting env list
        clo9540[1] = cdr;
        clo9540[2] = kont8885;
        clo9540[3] = cons;
        clo9540[4] = rhs;
        clo9540[5] = append1;
        clo9540[6] = lhs;
        void *f8888 = encode_clo(clo9540);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(lhs);
        arg_buffer[1] = f8888;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8888))[0]);
        function_ptr();
    }
}

void *lam9095 = encode_clo(alloc_clo(lam9095_fptr, 0));

void append1_fptr() // append1
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9097 = arg_buffer[1];
    // reading env and args
    void *kont8885 = arg_buffer[2];
    void *lhs = arg_buffer[3];
    void *rhs = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9541 = alloc_clo(lam9095_fptr, 7);

    // setting env list
    clo9541[1] = car;
    clo9541[2] = rhs;
    clo9541[3] = cdr;
    clo9541[4] = kont8885;
    clo9541[5] = cons;
    void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

    clo9541[6] = append1;
    clo9541[7] = lhs;
    void *f8889 = encode_clo(clo9541);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(lhs);
    arg_buffer[1] = f8889;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8889))[0]);
    function_ptr();
}

void *append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam9098_fptr() // lam9098
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9099 = arg_buffer[1];
    // reading env and args
    void *a8752 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9099);
    void *foldr = decode_clo_array[4];
    void *kont8890 = decode_clo_array[3];
    void *a8750 = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = foldr;
    arg_buffer[2] = kont8890;
    arg_buffer[3] = append1;
    arg_buffer[4] = a8750;
    arg_buffer[5] = a8752;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9098 = encode_clo(alloc_clo(lam9098_fptr, 0));

void lam9100_fptr() // lam9100
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9101 = arg_buffer[1];
    // reading env and args
    void *a8751 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9101);
    void *foldr = decode_clo_array[5];
    void *kont8890 = decode_clo_array[4];
    void *a8750 = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9542 = alloc_clo(lam9098_fptr, 4);

    // setting env list
    clo9542[1] = append1;
    clo9542[2] = a8750;
    clo9542[3] = kont8890;
    clo9542[4] = foldr;
    void *f8891 = encode_clo(clo9542);

    // clo-app
    arg_buffer[1] = append1;
    arg_buffer[2] = f8891;
    arg_buffer[3] = a8751;
    arg_buffer[4] = x;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append1))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9100 = encode_clo(alloc_clo(lam9100_fptr, 0));

void lam9102_fptr() // lam9102
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9103 = arg_buffer[1];
    // reading env and args
    void *a8750 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9103);
    void *list = decode_clo_array[6];
    void *foldr = decode_clo_array[5];
    void *kont8890 = decode_clo_array[4];
    void *xs = decode_clo_array[3];
    void *x = decode_clo_array[2];
    void *append1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9543 = alloc_clo(lam9100_fptr, 5);

    // setting env list
    clo9543[1] = append1;
    clo9543[2] = x;
    clo9543[3] = a8750;
    clo9543[4] = kont8890;
    clo9543[5] = foldr;
    void *f8892 = encode_clo(clo9543);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8892;
    arg_buffer[3] = xs;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9102 = encode_clo(alloc_clo(lam9102_fptr, 0));

void lam9104_fptr() // lam9104
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9105 = arg_buffer[1];
    // reading env and args
    void *x = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9105);
    void *list = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *kont8890 = decode_clo_array[3];
    void *append1 = decode_clo_array[2];
    void *xs = decode_clo_array[1];

    // creating new closure instance
    void **clo9544 = alloc_clo(lam9102_fptr, 6);

    // setting env list
    clo9544[1] = append1;
    clo9544[2] = x;
    clo9544[3] = xs;
    clo9544[4] = kont8890;
    clo9544[5] = foldr;
    clo9544[6] = list;
    void *f8893 = encode_clo(clo9544);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8893;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9104 = encode_clo(alloc_clo(lam9104_fptr, 0));

void lam9106_fptr() // lam9106
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9107 = arg_buffer[1];
    // reading env and args
    void *vargs8682 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9107);
    void *list = decode_clo_array[5];
    void *foldr = decode_clo_array[4];
    void *kont8890 = decode_clo_array[3];
    void *append1 = decode_clo_array[2];
    void *xs = decode_clo_array[1];

    // creating new closure instance
    void **clo9545 = alloc_clo(lam9104_fptr, 5);

    // setting env list
    clo9545[1] = xs;
    clo9545[2] = append1;
    clo9545[3] = kont8890;
    clo9545[4] = foldr;
    clo9545[5] = list;
    void *f8894 = encode_clo(clo9545);

    // clo-app
    arg_buffer[1] = f8894;
    arg_buffer[2] = vargs8682;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8894))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9106 = encode_clo(alloc_clo(lam9106_fptr, 0));

void lam9108_fptr() // lam9108
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9109 = arg_buffer[1];
    // reading env and args
    void *xs = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9109);
    void *foldr = decode_clo_array[6];
    void *kont8890 = decode_clo_array[5];
    void *append1 = decode_clo_array[4];
    void *vargs8961 = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9546 = alloc_clo(lam9106_fptr, 5);

    // setting env list
    clo9546[1] = xs;
    clo9546[2] = append1;
    clo9546[3] = kont8890;
    clo9546[4] = foldr;
    clo9546[5] = list;
    void *f8895 = encode_clo(clo9546);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(vargs8961);
    arg_buffer[1] = f8895;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8895))[0]);
    function_ptr();
}

void *lam9108 = encode_clo(alloc_clo(lam9108_fptr, 0));

void append_fptr() // append
{
    // reading number of args
    //  This is the second type of the functions
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9110 = arg_buffer[1];
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

    void *kont8890 = prim_car(vargs);
    void *vargs8961 = prim_cdr(vargs);

    // creating new closure instance
    void **clo9547 = alloc_clo(lam9108_fptr, 6);

    // setting env list
    clo9547[1] = cdr;
    clo9547[2] = list;
    clo9547[3] = vargs8961;
    clo9547[4] = append1;
    clo9547[5] = kont8890;
    clo9547[6] = foldr;
    void *f8896 = encode_clo(clo9547);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(vargs8961);
    arg_buffer[1] = f8896;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8896))[0]);
    function_ptr();
}

void *append = encode_clo(alloc_clo(append_fptr, 0));

void lam9111_fptr() // lam9111
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9112 = arg_buffer[1];
    // reading env and args
    void *xy8755 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9112);
    void *kont8897 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = kont8897;
    arg_buffer[2] = xy8755;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8897))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9111 = encode_clo(alloc_clo(lam9111_fptr, 0));

void lam9113_fptr() // lam9113
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9114 = arg_buffer[1];
    // reading env and args
    void *a8760 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9114);
    void *a8758 = decode_clo_array[4];
    void *a8756 = decode_clo_array[3];
    void *kont8897 = decode_clo_array[2];
    void *take_u45helper = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = take_u45helper;
    arg_buffer[2] = kont8897;
    arg_buffer[3] = a8756;
    arg_buffer[4] = a8758;
    arg_buffer[5] = a8760;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9113 = encode_clo(alloc_clo(lam9113_fptr, 0));

void lam9115_fptr() // lam9115
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9116 = arg_buffer[1];
    // reading env and args
    void *a8759 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9116);
    void *a8758 = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *a8756 = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *kont8897 = decode_clo_array[2];
    void *take_u45helper = decode_clo_array[1];

    // creating new closure instance
    void **clo9548 = alloc_clo(lam9113_fptr, 4);

    // setting env list
    clo9548[1] = take_u45helper;
    clo9548[2] = kont8897;
    clo9548[3] = a8756;
    clo9548[4] = a8758;
    void *f8899 = encode_clo(clo9548);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8759, lst2);
    arg_buffer[1] = f8899;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8899))[0]);
    function_ptr();
}

void *lam9115 = encode_clo(alloc_clo(lam9115_fptr, 0));

void lam9117_fptr() // lam9117
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9118 = arg_buffer[1];
    // reading env and args
    void *a8758 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9118);
    void *lst = decode_clo_array[7];
    void *car = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *a8756 = decode_clo_array[4];
    void *lst2 = decode_clo_array[3];
    void *kont8897 = decode_clo_array[2];
    void *take_u45helper = decode_clo_array[1];

    // creating new closure instance
    void **clo9549 = alloc_clo(lam9115_fptr, 6);

    // setting env list
    clo9549[1] = take_u45helper;
    clo9549[2] = kont8897;
    clo9549[3] = lst2;
    clo9549[4] = a8756;
    clo9549[5] = cons;
    clo9549[6] = a8758;
    void *f8900 = encode_clo(clo9549);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(lst);
    arg_buffer[1] = f8900;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8900))[0]);
    function_ptr();
}

void *lam9117 = encode_clo(alloc_clo(lam9117_fptr, 0));

void lam9120_fptr() // lam9120
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9121 = arg_buffer[1];
    // reading env and args
    void *a8756 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9121);
    void *lst = decode_clo_array[8];
    void *cons = decode_clo_array[7];
    void *_u45 = decode_clo_array[6];
    void *lst2 = decode_clo_array[5];
    void *kont8897 = decode_clo_array[4];
    void *take_u45helper = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];
    void *a8757 = encode_mpz(mpz9262);

    // creating new closure instance
    void **clo9550 = alloc_clo(lam9117_fptr, 7);

    // setting env list
    clo9550[1] = take_u45helper;
    clo9550[2] = kont8897;
    clo9550[3] = lst2;
    clo9550[4] = a8756;
    clo9550[5] = cons;
    clo9550[6] = car;
    clo9550[7] = lst;
    void *f8901 = encode_clo(clo9550);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(n, a8757);
    arg_buffer[1] = f8901;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8901))[0]);
    function_ptr();
}

void *lam9120 = encode_clo(alloc_clo(lam9120_fptr, 0));

void lam9122_fptr() // lam9122
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9123 = arg_buffer[1];
    // reading env and args
    void *a8754 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9123);
    void *cdr = decode_clo_array[10];
    void *lst = decode_clo_array[9];
    void *reverse = decode_clo_array[8];
    void *cons = decode_clo_array[7];
    void *_u45 = decode_clo_array[6];
    void *lst2 = decode_clo_array[5];
    void *kont8897 = decode_clo_array[4];
    void *take_u45helper = decode_clo_array[3];
    void *n = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // if-clause
    bool if_guard9551 = is_true(a8754);
    if (if_guard9551)
    {

        // creating new closure instance
        void **clo9552 = alloc_clo(lam9111_fptr, 1);

        // setting env list
        clo9552[1] = kont8897;
        void *f8898 = encode_clo(clo9552);

        // clo-app
        arg_buffer[1] = reverse;
        arg_buffer[2] = f8898;
        arg_buffer[3] = lst2;
        arg_buffer[0] = reinterpret_cast<void *>(3);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9553 = alloc_clo(lam9120_fptr, 8);

        // setting env list
        clo9553[1] = car;
        clo9553[2] = n;
        clo9553[3] = take_u45helper;
        clo9553[4] = kont8897;
        clo9553[5] = lst2;
        clo9553[6] = _u45;
        clo9553[7] = cons;
        clo9553[8] = lst;
        void *f8902 = encode_clo(clo9553);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(lst);
        arg_buffer[1] = f8902;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8902))[0]);
        function_ptr();
    }
}

void *lam9122 = encode_clo(alloc_clo(lam9122_fptr, 0));

void take_u45helper_fptr() // take-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9125 = arg_buffer[1];
    // reading env and args
    void *kont8897 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    void *lst2 = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *a8753 = encode_mpz(mpz9263);

    // creating new closure instance
    void **clo9554 = alloc_clo(lam9122_fptr, 10);

    // setting env list
    clo9554[1] = car;
    clo9554[2] = n;
    void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

    clo9554[3] = take_u45helper;
    clo9554[4] = kont8897;
    clo9554[5] = lst2;
    clo9554[6] = _u45;
    clo9554[7] = cons;
    clo9554[8] = reverse;
    clo9554[9] = lst;
    clo9554[10] = cdr;
    void *f8903 = encode_clo(clo9554);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8753);
    arg_buffer[1] = f8903;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8903))[0]);
    function_ptr();
}

void *take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void lam9126_fptr() // lam9126
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9127 = arg_buffer[1];
    // reading env and args
    void *a8761 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9127);
    void *kont8904 = decode_clo_array[4];
    void *lst = decode_clo_array[3];
    void *take_u45helper = decode_clo_array[2];
    void *n = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = take_u45helper;
    arg_buffer[2] = kont8904;
    arg_buffer[3] = lst;
    arg_buffer[4] = n;
    arg_buffer[5] = a8761;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9126 = encode_clo(alloc_clo(lam9126_fptr, 0));

void take_fptr() // take
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9128 = arg_buffer[1];
    // reading env and args
    void *kont8904 = arg_buffer[2];
    void *lst = arg_buffer[3];
    void *n = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9555 = alloc_clo(lam9126_fptr, 4);

    // setting env list
    clo9555[1] = n;
    clo9555[2] = take_u45helper;
    clo9555[3] = lst;
    clo9555[4] = kont8904;
    void *f8905 = encode_clo(clo9555);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8905;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *take = encode_clo(alloc_clo(take_fptr, 0));

void lam9134_fptr() // lam9134
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9135 = arg_buffer[1];
    // reading env and args
    void *a8778 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9135);
    void *a8777 = decode_clo_array[4];
    void *kont8906 = decode_clo_array[3];
    void *row = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = kont8906;
    arg_buffer[3] = row;
    arg_buffer[4] = a8777;
    arg_buffer[5] = a8778;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(ok_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9134 = encode_clo(alloc_clo(lam9134_fptr, 0));

void lam9136_fptr() // lam9136
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9137 = arg_buffer[1];
    // reading env and args
    void *a8777 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9137);
    void *cdr = decode_clo_array[5];
    void *kont8906 = decode_clo_array[4];
    void *row = decode_clo_array[3];
    void *placed = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9556 = alloc_clo(lam9134_fptr, 4);

    // setting env list
    clo9556[1] = ok_u63;
    clo9556[2] = row;
    clo9556[3] = kont8906;
    clo9556[4] = a8777;
    void *f8907 = encode_clo(clo9556);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(placed);
    arg_buffer[1] = f8907;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8907))[0]);
    function_ptr();
}

void *lam9136 = encode_clo(alloc_clo(lam9136_fptr, 0));

void lam9140_fptr() // lam9140
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9141 = arg_buffer[1];
    // reading env and args
    void *a8775 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9141);
    void *cdr = decode_clo_array[7];
    void *dist = decode_clo_array[6];
    void *kont8906 = decode_clo_array[5];
    void *_u43 = decode_clo_array[4];
    void *row = decode_clo_array[3];
    void *placed = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9557 = is_true(a8775);
    if (if_guard9557)
    {
        void *a8776 = encode_mpz(mpz9262);

        // creating new closure instance
        void **clo9558 = alloc_clo(lam9136_fptr, 5);

        // setting env list
        clo9558[1] = ok_u63;
        clo9558[2] = placed;
        clo9558[3] = row;
        clo9558[4] = kont8906;
        clo9558[5] = cdr;
        void *f8908 = encode_clo(clo9558);

        // clo-app
        arg_buffer[2] = apply_prim__u43_2(dist, a8776);
        arg_buffer[1] = f8908;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8908))[0]);
        function_ptr();
    }
    else
    {
        void *xy8779 = encode_bool(false);

        // clo-app
        arg_buffer[1] = kont8906;
        arg_buffer[2] = xy8779;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8906))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9140 = encode_clo(alloc_clo(lam9140_fptr, 0));

void lam9142_fptr() // lam9142
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9143 = arg_buffer[1];
    // reading env and args
    void *a8772 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9143);
    void *cdr = decode_clo_array[7];
    void *dist = decode_clo_array[6];
    void *kont8906 = decode_clo_array[5];
    void *_u43 = decode_clo_array[4];
    void *row = decode_clo_array[3];
    void *placed = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9559 = alloc_clo(lam9140_fptr, 7);

    // setting env list
    clo9559[1] = ok_u63;
    clo9559[2] = placed;
    clo9559[3] = row;
    clo9559[4] = _u43;
    clo9559[5] = kont8906;
    clo9559[6] = dist;
    clo9559[7] = cdr;
    void *f8909 = encode_clo(clo9559);

    // if-clause
    bool if_guard9560 = is_true(a8772);
    if (if_guard9560)
    {
        void *xy8773 = encode_bool(false);

        // clo-app
        arg_buffer[1] = f8909;
        arg_buffer[2] = xy8773;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8909))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8774 = encode_bool(true);

        // clo-app
        arg_buffer[1] = f8909;
        arg_buffer[2] = xy8774;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8909))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9142 = encode_clo(alloc_clo(lam9142_fptr, 0));

void lam9144_fptr() // lam9144
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9145 = arg_buffer[1];
    // reading env and args
    void *a8771 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9145);
    void *cdr = decode_clo_array[9];
    void *dist = decode_clo_array[8];
    void *kont8906 = decode_clo_array[7];
    void *_u43 = decode_clo_array[6];
    void *row = decode_clo_array[5];
    void *a8770 = decode_clo_array[4];
    void *placed = decode_clo_array[3];
    void *_u61 = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9561 = alloc_clo(lam9142_fptr, 7);

    // setting env list
    clo9561[1] = ok_u63;
    clo9561[2] = placed;
    clo9561[3] = row;
    clo9561[4] = _u43;
    clo9561[5] = kont8906;
    clo9561[6] = dist;
    clo9561[7] = cdr;
    void *f8910 = encode_clo(clo9561);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(a8770, a8771);
    arg_buffer[1] = f8910;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8910))[0]);
    function_ptr();
}

void *lam9144 = encode_clo(alloc_clo(lam9144_fptr, 0));

void lam9146_fptr() // lam9146
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9147 = arg_buffer[1];
    // reading env and args
    void *a8770 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9147);
    void *cdr = decode_clo_array[9];
    void *dist = decode_clo_array[8];
    void *kont8906 = decode_clo_array[7];
    void *_u43 = decode_clo_array[6];
    void *row = decode_clo_array[5];
    void *placed = decode_clo_array[4];
    void *_u61 = decode_clo_array[3];
    void *_u45 = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9562 = alloc_clo(lam9144_fptr, 9);

    // setting env list
    clo9562[1] = ok_u63;
    clo9562[2] = _u61;
    clo9562[3] = placed;
    clo9562[4] = a8770;
    clo9562[5] = row;
    clo9562[6] = _u43;
    clo9562[7] = kont8906;
    clo9562[8] = dist;
    clo9562[9] = cdr;
    void *f8911 = encode_clo(clo9562);

    // clo-app
    arg_buffer[2] = apply_prim__u45_2(row, dist);
    arg_buffer[1] = f8911;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8911))[0]);
    function_ptr();
}

void *lam9146 = encode_clo(alloc_clo(lam9146_fptr, 0));

void lam9149_fptr() // lam9149
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9150 = arg_buffer[1];
    // reading env and args
    void *a8769 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9150);
    void *cdr = decode_clo_array[10];
    void *dist = decode_clo_array[9];
    void *kont8906 = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *row = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *placed = decode_clo_array[4];
    void *_u61 = decode_clo_array[3];
    void *_u45 = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9563 = is_true(a8769);
    if (if_guard9563)
    {

        // creating new closure instance
        void **clo9564 = alloc_clo(lam9146_fptr, 9);

        // setting env list
        clo9564[1] = ok_u63;
        clo9564[2] = _u45;
        clo9564[3] = _u61;
        clo9564[4] = placed;
        clo9564[5] = row;
        clo9564[6] = _u43;
        clo9564[7] = kont8906;
        clo9564[8] = dist;
        clo9564[9] = cdr;
        void *f8912 = encode_clo(clo9564);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(placed);
        arg_buffer[1] = f8912;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8912))[0]);
        function_ptr();
    }
    else
    {
        void *xy8780 = encode_bool(false);

        // clo-app
        arg_buffer[1] = kont8906;
        arg_buffer[2] = xy8780;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8906))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9149 = encode_clo(alloc_clo(lam9149_fptr, 0));

void lam9151_fptr() // lam9151
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9152 = arg_buffer[1];
    // reading env and args
    void *a8766 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9152);
    void *cdr = decode_clo_array[10];
    void *dist = decode_clo_array[9];
    void *kont8906 = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *row = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *placed = decode_clo_array[4];
    void *_u61 = decode_clo_array[3];
    void *_u45 = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9565 = alloc_clo(lam9149_fptr, 10);

    // setting env list
    clo9565[1] = ok_u63;
    clo9565[2] = _u45;
    clo9565[3] = _u61;
    clo9565[4] = placed;
    clo9565[5] = car;
    clo9565[6] = row;
    clo9565[7] = _u43;
    clo9565[8] = kont8906;
    clo9565[9] = dist;
    clo9565[10] = cdr;
    void *f8913 = encode_clo(clo9565);

    // if-clause
    bool if_guard9566 = is_true(a8766);
    if (if_guard9566)
    {
        void *xy8767 = encode_bool(false);

        // clo-app
        arg_buffer[1] = f8913;
        arg_buffer[2] = xy8767;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8913))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *xy8768 = encode_bool(true);

        // clo-app
        arg_buffer[1] = f8913;
        arg_buffer[2] = xy8768;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8913))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
}

void *lam9151 = encode_clo(alloc_clo(lam9151_fptr, 0));

void lam9153_fptr() // lam9153
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9154 = arg_buffer[1];
    // reading env and args
    void *a8765 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9154);
    void *cdr = decode_clo_array[11];
    void *dist = decode_clo_array[10];
    void *kont8906 = decode_clo_array[9];
    void *a8764 = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *row = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *placed = decode_clo_array[4];
    void *_u61 = decode_clo_array[3];
    void *_u45 = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9567 = alloc_clo(lam9151_fptr, 10);

    // setting env list
    clo9567[1] = ok_u63;
    clo9567[2] = _u45;
    clo9567[3] = _u61;
    clo9567[4] = placed;
    clo9567[5] = car;
    clo9567[6] = row;
    clo9567[7] = _u43;
    clo9567[8] = kont8906;
    clo9567[9] = dist;
    clo9567[10] = cdr;
    void *f8914 = encode_clo(clo9567);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(a8764, a8765);
    arg_buffer[1] = f8914;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8914))[0]);
    function_ptr();
}

void *lam9153 = encode_clo(alloc_clo(lam9153_fptr, 0));

void lam9155_fptr() // lam9155
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9156 = arg_buffer[1];
    // reading env and args
    void *a8764 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9156);
    void *cdr = decode_clo_array[10];
    void *dist = decode_clo_array[9];
    void *kont8906 = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *row = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *placed = decode_clo_array[4];
    void *_u61 = decode_clo_array[3];
    void *_u45 = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9568 = alloc_clo(lam9153_fptr, 11);

    // setting env list
    clo9568[1] = ok_u63;
    clo9568[2] = _u45;
    clo9568[3] = _u61;
    clo9568[4] = placed;
    clo9568[5] = car;
    clo9568[6] = row;
    clo9568[7] = _u43;
    clo9568[8] = a8764;
    clo9568[9] = kont8906;
    clo9568[10] = dist;
    clo9568[11] = cdr;
    void *f8915 = encode_clo(clo9568);

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(row, dist);
    arg_buffer[1] = f8915;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8915))[0]);
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
    void *a8762 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9158);
    void *cdr = decode_clo_array[10];
    void *dist = decode_clo_array[9];
    void *kont8906 = decode_clo_array[8];
    void *_u43 = decode_clo_array[7];
    void *row = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *placed = decode_clo_array[4];
    void *_u61 = decode_clo_array[3];
    void *_u45 = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9569 = is_true(a8762);
    if (if_guard9569)
    {
        void *xy8763 = encode_bool(true);

        // clo-app
        arg_buffer[1] = kont8906;
        arg_buffer[2] = xy8763;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8906))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9570 = alloc_clo(lam9155_fptr, 10);

        // setting env list
        clo9570[1] = ok_u63;
        clo9570[2] = _u45;
        clo9570[3] = _u61;
        clo9570[4] = placed;
        clo9570[5] = car;
        clo9570[6] = row;
        clo9570[7] = _u43;
        clo9570[8] = kont8906;
        clo9570[9] = dist;
        clo9570[10] = cdr;
        void *f8916 = encode_clo(clo9570);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(placed);
        arg_buffer[1] = f8916;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8916))[0]);
        function_ptr();
    }
}

void *lam9157 = encode_clo(alloc_clo(lam9157_fptr, 0));

void ok_u63_fptr() // ok?
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9159 = arg_buffer[1];
    // reading env and args
    void *kont8906 = arg_buffer[2];
    void *row = arg_buffer[3];
    void *dist = arg_buffer[4];
    void *placed = arg_buffer[5];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9571 = alloc_clo(lam9157_fptr, 10);

    // setting env list
    void *ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

    clo9571[1] = ok_u63;
    clo9571[2] = _u45;
    clo9571[3] = _u61;
    clo9571[4] = placed;
    clo9571[5] = car;
    clo9571[6] = row;
    clo9571[7] = _u43;
    clo9571[8] = kont8906;
    clo9571[9] = dist;
    clo9571[10] = cdr;
    void *f8917 = encode_clo(clo9571);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(placed);
    arg_buffer[1] = f8917;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8917))[0]);
    function_ptr();
}

void *ok_u63 = encode_clo(alloc_clo(ok_u63_fptr, 0));

void lam9160_fptr() // lam9160
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9161 = arg_buffer[1];
    // reading env and args
    void *a8782 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9161);
    void *f8943 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_car_1(a8782);
    arg_buffer[1] = f8943;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8943))[0]);
    function_ptr();
}

void *lam9160 = encode_clo(alloc_clo(lam9160_fptr, 0));

void lam9162_fptr() // lam9162
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9163 = arg_buffer[1];
    // reading env and args
    void *a8784 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9163);
    void *f8940 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_car_1(a8784);
    arg_buffer[1] = f8940;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8940))[0]);
    function_ptr();
}

void *lam9162 = encode_clo(alloc_clo(lam9162_fptr, 0));

void lam9164_fptr() // lam9164
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9165 = arg_buffer[1];
    // reading env and args
    void *a8783 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9165);
    void *cdr = decode_clo_array[3];
    void *f8940 = decode_clo_array[2];
    void *car = decode_clo_array[1];

    // creating new closure instance
    void **clo9572 = alloc_clo(lam9162_fptr, 2);

    // setting env list
    clo9572[1] = car;
    clo9572[2] = f8940;
    void *f8941 = encode_clo(clo9572);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(a8783);
    arg_buffer[1] = f8941;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8941))[0]);
    function_ptr();
}

void *lam9164 = encode_clo(alloc_clo(lam9164_fptr, 0));

void lam9166_fptr() // lam9166
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9167 = arg_buffer[1];
    // reading env and args
    void *a8789 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9167);
    void *kont8918 = decode_clo_array[3];
    void *a8787 = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = q_u45helper;
    arg_buffer[2] = kont8918;
    arg_buffer[3] = a8787;
    arg_buffer[4] = a8789;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9166 = encode_clo(alloc_clo(lam9166_fptr, 0));

void lam9169_fptr() // lam9169
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9170 = arg_buffer[1];
    // reading env and args
    void *a8787 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9170);
    void *kont8918 = decode_clo_array[4];
    void *count = decode_clo_array[3];
    void *_u43 = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];
    void *a8788 = encode_mpz(mpz9262);

    // creating new closure instance
    void **clo9573 = alloc_clo(lam9166_fptr, 3);

    // setting env list
    clo9573[1] = q_u45helper;
    clo9573[2] = a8787;
    clo9573[3] = kont8918;
    void *f8919 = encode_clo(clo9573);

    // clo-app
    arg_buffer[2] = apply_prim__u43_2(count, a8788);
    arg_buffer[1] = f8919;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8919))[0]);
    function_ptr();
}

void *lam9169 = encode_clo(alloc_clo(lam9169_fptr, 0));

void lam9171_fptr() // lam9171
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9172 = arg_buffer[1];
    // reading env and args
    void *a8790 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9172);
    void *kont8918 = decode_clo_array[3];
    void *count = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = q_u45helper;
    arg_buffer[2] = kont8918;
    arg_buffer[3] = a8790;
    arg_buffer[4] = count;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9171 = encode_clo(alloc_clo(lam9171_fptr, 0));

void lam9173_fptr() // lam9173
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9174 = arg_buffer[1];
    // reading env and args
    void *a8786 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9174);
    void *kont8918 = decode_clo_array[6];
    void *count = decode_clo_array[5];
    void *_u43 = decode_clo_array[4];
    void *q_u45helper = decode_clo_array[3];
    void *stack = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // if-clause
    bool if_guard9574 = is_true(a8786);
    if (if_guard9574)
    {

        // creating new closure instance
        void **clo9575 = alloc_clo(lam9169_fptr, 4);

        // setting env list
        clo9575[1] = q_u45helper;
        clo9575[2] = _u43;
        clo9575[3] = count;
        clo9575[4] = kont8918;
        void *f8920 = encode_clo(clo9575);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(stack);
        arg_buffer[1] = f8920;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8920))[0]);
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9576 = alloc_clo(lam9171_fptr, 3);

        // setting env list
        clo9576[1] = q_u45helper;
        clo9576[2] = count;
        clo9576[3] = kont8918;
        void *f8921 = encode_clo(clo9576);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(stack);
        arg_buffer[1] = f8921;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8921))[0]);
        function_ptr();
    }
}

void *lam9173 = encode_clo(alloc_clo(lam9173_fptr, 0));

void lam9175_fptr() // lam9175
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9176 = arg_buffer[1];
    // reading env and args
    void *a8804 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9176);
    void *f8924 = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *a8803 = decode_clo_array[1];

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8803, a8804);
    arg_buffer[1] = f8924;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8924))[0]);
    function_ptr();
}

void *lam9175 = encode_clo(alloc_clo(lam9175_fptr, 0));

void lam9177_fptr() // lam9177
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9178 = arg_buffer[1];
    // reading env and args
    void *a8803 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9178);
    void *f8924 = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *stack = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9577 = alloc_clo(lam9175_fptr, 3);

    // setting env list
    clo9577[1] = a8803;
    clo9577[2] = cons;
    clo9577[3] = f8924;
    void *f8925 = encode_clo(clo9577);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(stack);
    arg_buffer[1] = f8925;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8925))[0]);
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
    void *a8802 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9180);
    void *f8924 = decode_clo_array[7];
    void *a8799 = decode_clo_array[6];
    void *a8800 = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *stack = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9578 = alloc_clo(lam9177_fptr, 4);

    // setting env list
    clo9578[1] = cdr;
    clo9578[2] = stack;
    clo9578[3] = cons;
    clo9578[4] = f8924;
    void *f8926 = encode_clo(clo9578);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8926;
    arg_buffer[3] = a8799;
    arg_buffer[4] = a8800;
    arg_buffer[5] = a8802;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9179 = encode_clo(alloc_clo(lam9179_fptr, 0));

void lam9181_fptr() // lam9181
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9182 = arg_buffer[1];
    // reading env and args
    void *a8801 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9182);
    void *f8924 = decode_clo_array[8];
    void *z = decode_clo_array[7];
    void *a8799 = decode_clo_array[6];
    void *a8800 = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *stack = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9579 = alloc_clo(lam9179_fptr, 7);

    // setting env list
    clo9579[1] = cdr;
    clo9579[2] = list;
    clo9579[3] = stack;
    clo9579[4] = cons;
    clo9579[5] = a8800;
    clo9579[6] = a8799;
    clo9579[7] = f8924;
    void *f8927 = encode_clo(clo9579);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8801, z);
    arg_buffer[1] = f8927;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8927))[0]);
    function_ptr();
}

void *lam9181 = encode_clo(alloc_clo(lam9181_fptr, 0));

void lam9183_fptr() // lam9183
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9184 = arg_buffer[1];
    // reading env and args
    void *a8800 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9184);
    void *f8924 = decode_clo_array[9];
    void *z = decode_clo_array[8];
    void *a8799 = decode_clo_array[7];
    void *x = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *stack = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9580 = alloc_clo(lam9181_fptr, 8);

    // setting env list
    clo9580[1] = cdr;
    clo9580[2] = list;
    clo9580[3] = stack;
    clo9580[4] = cons;
    clo9580[5] = a8800;
    clo9580[6] = a8799;
    clo9580[7] = z;
    clo9580[8] = f8924;
    void *f8928 = encode_clo(clo9580);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(x);
    arg_buffer[1] = f8928;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8928))[0]);
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
    void *a8799 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9186);
    void *f8924 = decode_clo_array[8];
    void *z = decode_clo_array[7];
    void *x = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *stack = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9581 = alloc_clo(lam9183_fptr, 9);

    // setting env list
    clo9581[1] = cdr;
    clo9581[2] = list;
    clo9581[3] = stack;
    clo9581[4] = cons;
    clo9581[5] = car;
    clo9581[6] = x;
    clo9581[7] = a8799;
    clo9581[8] = z;
    clo9581[9] = f8924;
    void *f8929 = encode_clo(clo9581);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8929;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9185 = encode_clo(alloc_clo(lam9185_fptr, 0));

void lam9187_fptr() // lam9187
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9188 = arg_buffer[1];
    // reading env and args
    void *a8798 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9188);
    void *f8924 = decode_clo_array[10];
    void *append = decode_clo_array[9];
    void *z = decode_clo_array[8];
    void *y = decode_clo_array[7];
    void *x = decode_clo_array[6];
    void *car = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *stack = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9582 = alloc_clo(lam9185_fptr, 8);

    // setting env list
    clo9582[1] = cdr;
    clo9582[2] = list;
    clo9582[3] = stack;
    clo9582[4] = cons;
    clo9582[5] = car;
    clo9582[6] = x;
    clo9582[7] = z;
    clo9582[8] = f8924;
    void *f8930 = encode_clo(clo9582);

    // clo-app
    arg_buffer[1] = append;
    arg_buffer[2] = f8930;
    arg_buffer[3] = a8798;
    arg_buffer[4] = y;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9187 = encode_clo(alloc_clo(lam9187_fptr, 0));

void lam9189_fptr() // lam9189
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9190 = arg_buffer[1];
    // reading env and args
    void *xy8805 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9190);
    void *f8924 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = f8924;
    arg_buffer[2] = xy8805;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8924))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9189 = encode_clo(alloc_clo(lam9189_fptr, 0));

void lam9191_fptr() // lam9191
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9192 = arg_buffer[1];
    // reading env and args
    void *a8807 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9192);
    void *kont8918 = decode_clo_array[3];
    void *count = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = q_u45helper;
    arg_buffer[2] = kont8918;
    arg_buffer[3] = a8807;
    arg_buffer[4] = count;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9191 = encode_clo(alloc_clo(lam9191_fptr, 0));

void lam9193_fptr() // lam9193
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9194 = arg_buffer[1];
    // reading env and args
    void *a8806 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9194);
    void *kont8918 = decode_clo_array[5];
    void *count = decode_clo_array[4];
    void *a8794 = decode_clo_array[3];
    void *cons = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // creating new closure instance
    void **clo9583 = alloc_clo(lam9191_fptr, 3);

    // setting env list
    clo9583[1] = q_u45helper;
    clo9583[2] = count;
    clo9583[3] = kont8918;
    void *f8923 = encode_clo(clo9583);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8794, a8806);
    arg_buffer[1] = f8923;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8923))[0]);
    function_ptr();
}

void *lam9193 = encode_clo(alloc_clo(lam9193_fptr, 0));

void lam9195_fptr() // lam9195
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9196 = arg_buffer[1];
    // reading env and args
    void *a8797 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9196);
    void *kont8918 = decode_clo_array[13];
    void *count = decode_clo_array[12];
    void *a8794 = decode_clo_array[11];
    void *append = decode_clo_array[10];
    void *z = decode_clo_array[9];
    void *y = decode_clo_array[8];
    void *x = decode_clo_array[7];
    void *car = decode_clo_array[6];
    void *cons = decode_clo_array[5];
    void *q_u45helper = decode_clo_array[4];
    void *stack = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *cdr = decode_clo_array[1];

    // creating new closure instance
    void **clo9584 = alloc_clo(lam9193_fptr, 5);

    // setting env list
    clo9584[1] = q_u45helper;
    clo9584[2] = cons;
    clo9584[3] = a8794;
    clo9584[4] = count;
    clo9584[5] = kont8918;
    void *f8924 = encode_clo(clo9584);

    // if-clause
    bool if_guard9585 = is_true(a8797);
    if (if_guard9585)
    {

        // creating new closure instance
        void **clo9586 = alloc_clo(lam9187_fptr, 10);

        // setting env list
        clo9586[1] = cdr;
        clo9586[2] = list;
        clo9586[3] = stack;
        clo9586[4] = cons;
        clo9586[5] = car;
        clo9586[6] = x;
        clo9586[7] = y;
        clo9586[8] = z;
        clo9586[9] = append;
        clo9586[10] = f8924;
        void *f8931 = encode_clo(clo9586);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(x);
        arg_buffer[1] = f8931;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8931))[0]);
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9587 = alloc_clo(lam9189_fptr, 1);

        // setting env list
        clo9587[1] = f8924;
        void *f8932 = encode_clo(clo9587);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(stack);
        arg_buffer[1] = f8932;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8932))[0]);
        function_ptr();
    }
}

void *lam9195 = encode_clo(alloc_clo(lam9195_fptr, 0));

void lam9198_fptr() // lam9198
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9199 = arg_buffer[1];
    // reading env and args
    void *a8795 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9199);
    void *kont8918 = decode_clo_array[14];
    void *count = decode_clo_array[13];
    void *a8794 = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *z = decode_clo_array[10];
    void *y = decode_clo_array[9];
    void *x = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];
    void *a8796 = encode_mpz(mpz9262);

    // creating new closure instance
    void **clo9588 = alloc_clo(lam9195_fptr, 13);

    // setting env list
    clo9588[1] = cdr;
    clo9588[2] = list;
    clo9588[3] = stack;
    clo9588[4] = q_u45helper;
    clo9588[5] = cons;
    clo9588[6] = car;
    clo9588[7] = x;
    clo9588[8] = y;
    clo9588[9] = z;
    clo9588[10] = append;
    clo9588[11] = a8794;
    clo9588[12] = count;
    clo9588[13] = kont8918;
    void *f8933 = encode_clo(clo9588);

    // clo-app
    arg_buffer[1] = ok_u63;
    arg_buffer[2] = f8933;
    arg_buffer[3] = a8795;
    arg_buffer[4] = a8796;
    arg_buffer[5] = z;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(ok_u63))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9198 = encode_clo(alloc_clo(lam9198_fptr, 0));

void lam9200_fptr() // lam9200
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9201 = arg_buffer[1];
    // reading env and args
    void *a8794 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9201);
    void *kont8918 = decode_clo_array[13];
    void *count = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *z = decode_clo_array[10];
    void *y = decode_clo_array[9];
    void *x = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9589 = alloc_clo(lam9198_fptr, 14);

    // setting env list
    clo9589[1] = ok_u63;
    clo9589[2] = q_u45helper;
    clo9589[3] = cdr;
    clo9589[4] = list;
    clo9589[5] = stack;
    clo9589[6] = cons;
    clo9589[7] = car;
    clo9589[8] = x;
    clo9589[9] = y;
    clo9589[10] = z;
    clo9589[11] = append;
    clo9589[12] = a8794;
    clo9589[13] = count;
    clo9589[14] = kont8918;
    void *f8934 = encode_clo(clo9589);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(x);
    arg_buffer[1] = f8934;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8934))[0]);
    function_ptr();
}

void *lam9200 = encode_clo(alloc_clo(lam9200_fptr, 0));

void lam9202_fptr() // lam9202
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9203 = arg_buffer[1];
    // reading env and args
    void *a8793 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9203);
    void *kont8918 = decode_clo_array[14];
    void *a8791 = decode_clo_array[13];
    void *count = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *z = decode_clo_array[10];
    void *y = decode_clo_array[9];
    void *x = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9590 = alloc_clo(lam9200_fptr, 13);

    // setting env list
    clo9590[1] = ok_u63;
    clo9590[2] = q_u45helper;
    clo9590[3] = cdr;
    clo9590[4] = list;
    clo9590[5] = stack;
    clo9590[6] = cons;
    clo9590[7] = car;
    clo9590[8] = x;
    clo9590[9] = y;
    clo9590[10] = z;
    clo9590[11] = append;
    clo9590[12] = count;
    clo9590[13] = kont8918;
    void *f8935 = encode_clo(clo9590);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8935;
    arg_buffer[3] = a8791;
    arg_buffer[4] = a8793;
    arg_buffer[5] = z;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9202 = encode_clo(alloc_clo(lam9202_fptr, 0));

void lam9204_fptr() // lam9204
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9205 = arg_buffer[1];
    // reading env and args
    void *a8792 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9205);
    void *kont8918 = decode_clo_array[14];
    void *a8791 = decode_clo_array[13];
    void *count = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *z = decode_clo_array[10];
    void *y = decode_clo_array[9];
    void *x = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9591 = alloc_clo(lam9202_fptr, 14);

    // setting env list
    clo9591[1] = ok_u63;
    clo9591[2] = q_u45helper;
    clo9591[3] = cdr;
    clo9591[4] = list;
    clo9591[5] = stack;
    clo9591[6] = cons;
    clo9591[7] = car;
    clo9591[8] = x;
    clo9591[9] = y;
    clo9591[10] = z;
    clo9591[11] = append;
    clo9591[12] = count;
    clo9591[13] = a8791;
    clo9591[14] = kont8918;
    void *f8936 = encode_clo(clo9591);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(a8792, y);
    arg_buffer[1] = f8936;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8936))[0]);
    function_ptr();
}

void *lam9204 = encode_clo(alloc_clo(lam9204_fptr, 0));

void lam9206_fptr() // lam9206
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9207 = arg_buffer[1];
    // reading env and args
    void *a8791 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9207);
    void *kont8918 = decode_clo_array[13];
    void *count = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *z = decode_clo_array[10];
    void *y = decode_clo_array[9];
    void *x = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9592 = alloc_clo(lam9204_fptr, 14);

    // setting env list
    clo9592[1] = ok_u63;
    clo9592[2] = q_u45helper;
    clo9592[3] = cdr;
    clo9592[4] = list;
    clo9592[5] = stack;
    clo9592[6] = cons;
    clo9592[7] = car;
    clo9592[8] = x;
    clo9592[9] = y;
    clo9592[10] = z;
    clo9592[11] = append;
    clo9592[12] = count;
    clo9592[13] = a8791;
    clo9592[14] = kont8918;
    void *f8937 = encode_clo(clo9592);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(x);
    arg_buffer[1] = f8937;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8937))[0]);
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
    void *a8785 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9209);
    void *kont8918 = decode_clo_array[15];
    void *count = decode_clo_array[14];
    void *null_u63 = decode_clo_array[13];
    void *append = decode_clo_array[12];
    void *y = decode_clo_array[11];
    void *x = decode_clo_array[10];
    void *car = decode_clo_array[9];
    void *cons = decode_clo_array[8];
    void *stack = decode_clo_array[7];
    void *list = decode_clo_array[6];
    void *cdr = decode_clo_array[5];
    void *z = decode_clo_array[4];
    void *_u43 = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9593 = is_true(a8785);
    if (if_guard9593)
    {

        // creating new closure instance
        void **clo9594 = alloc_clo(lam9173_fptr, 6);

        // setting env list
        clo9594[1] = cdr;
        clo9594[2] = stack;
        clo9594[3] = q_u45helper;
        clo9594[4] = _u43;
        clo9594[5] = count;
        clo9594[6] = kont8918;
        void *f8922 = encode_clo(clo9594);

        // clo-app
        arg_buffer[2] = apply_prim_null_u63_1(y);
        arg_buffer[1] = f8922;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8922))[0]);
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9595 = alloc_clo(lam9206_fptr, 13);

        // setting env list
        clo9595[1] = ok_u63;
        clo9595[2] = q_u45helper;
        clo9595[3] = cdr;
        clo9595[4] = list;
        clo9595[5] = stack;
        clo9595[6] = cons;
        clo9595[7] = car;
        clo9595[8] = x;
        clo9595[9] = y;
        clo9595[10] = z;
        clo9595[11] = append;
        clo9595[12] = count;
        clo9595[13] = kont8918;
        void *f8938 = encode_clo(clo9595);

        // clo-app
        arg_buffer[2] = apply_prim_cdr_1(x);
        arg_buffer[1] = f8938;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8938))[0]);
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
    void *z = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9211);
    void *kont8918 = decode_clo_array[14];
    void *count = decode_clo_array[13];
    void *null_u63 = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *_u43 = decode_clo_array[10];
    void *y = decode_clo_array[9];
    void *x = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9596 = alloc_clo(lam9208_fptr, 15);

    // setting env list
    clo9596[1] = ok_u63;
    clo9596[2] = q_u45helper;
    clo9596[3] = _u43;
    clo9596[4] = z;
    clo9596[5] = cdr;
    clo9596[6] = list;
    clo9596[7] = stack;
    clo9596[8] = cons;
    clo9596[9] = car;
    clo9596[10] = x;
    clo9596[11] = y;
    clo9596[12] = append;
    clo9596[13] = null_u63;
    clo9596[14] = count;
    clo9596[15] = kont8918;
    void *f8939 = encode_clo(clo9596);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(x);
    arg_buffer[1] = f8939;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8939))[0]);
    function_ptr();
}

void *lam9210 = encode_clo(alloc_clo(lam9210_fptr, 0));

void lam9212_fptr() // lam9212
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9213 = arg_buffer[1];
    // reading env and args
    void *y = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9213);
    void *count = decode_clo_array[14];
    void *null_u63 = decode_clo_array[13];
    void *append = decode_clo_array[12];
    void *_u43 = decode_clo_array[11];
    void *x = decode_clo_array[10];
    void *car = decode_clo_array[9];
    void *cons = decode_clo_array[8];
    void *stack = decode_clo_array[7];
    void *list = decode_clo_array[6];
    void *cdr = decode_clo_array[5];
    void *state = decode_clo_array[4];
    void *kont8918 = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9597 = alloc_clo(lam9210_fptr, 14);

    // setting env list
    clo9597[1] = ok_u63;
    clo9597[2] = q_u45helper;
    clo9597[3] = cdr;
    clo9597[4] = list;
    clo9597[5] = stack;
    clo9597[6] = cons;
    clo9597[7] = car;
    clo9597[8] = x;
    clo9597[9] = y;
    clo9597[10] = _u43;
    clo9597[11] = append;
    clo9597[12] = null_u63;
    clo9597[13] = count;
    clo9597[14] = kont8918;
    void *f8940 = encode_clo(clo9597);

    // creating new closure instance
    void **clo9598 = alloc_clo(lam9164_fptr, 3);

    // setting env list
    clo9598[1] = car;
    clo9598[2] = f8940;
    clo9598[3] = cdr;
    void *f8942 = encode_clo(clo9598);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(state);
    arg_buffer[1] = f8942;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8942))[0]);
    function_ptr();
}

void *lam9212 = encode_clo(alloc_clo(lam9212_fptr, 0));

void lam9214_fptr() // lam9214
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9215 = arg_buffer[1];
    // reading env and args
    void *x = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9215);
    void *count = decode_clo_array[13];
    void *null_u63 = decode_clo_array[12];
    void *append = decode_clo_array[11];
    void *_u43 = decode_clo_array[10];
    void *car = decode_clo_array[9];
    void *cons = decode_clo_array[8];
    void *stack = decode_clo_array[7];
    void *list = decode_clo_array[6];
    void *cdr = decode_clo_array[5];
    void *state = decode_clo_array[4];
    void *kont8918 = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9599 = alloc_clo(lam9212_fptr, 14);

    // setting env list
    clo9599[1] = ok_u63;
    clo9599[2] = q_u45helper;
    clo9599[3] = kont8918;
    clo9599[4] = state;
    clo9599[5] = cdr;
    clo9599[6] = list;
    clo9599[7] = stack;
    clo9599[8] = cons;
    clo9599[9] = car;
    clo9599[10] = x;
    clo9599[11] = _u43;
    clo9599[12] = append;
    clo9599[13] = null_u63;
    clo9599[14] = count;
    void *f8943 = encode_clo(clo9599);

    // creating new closure instance
    void **clo9600 = alloc_clo(lam9160_fptr, 2);

    // setting env list
    clo9600[1] = car;
    clo9600[2] = f8943;
    void *f8944 = encode_clo(clo9600);

    // clo-app
    arg_buffer[2] = apply_prim_cdr_1(state);
    arg_buffer[1] = f8944;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8944))[0]);
    function_ptr();
}

void *lam9214 = encode_clo(alloc_clo(lam9214_fptr, 0));

void lam9216_fptr() // lam9216
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9217 = arg_buffer[1];
    // reading env and args
    void *state = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9217);
    void *kont8918 = decode_clo_array[12];
    void *count = decode_clo_array[11];
    void *null_u63 = decode_clo_array[10];
    void *append = decode_clo_array[9];
    void *_u43 = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // creating new closure instance
    void **clo9601 = alloc_clo(lam9214_fptr, 13);

    // setting env list
    clo9601[1] = ok_u63;
    clo9601[2] = q_u45helper;
    clo9601[3] = kont8918;
    clo9601[4] = state;
    clo9601[5] = cdr;
    clo9601[6] = list;
    clo9601[7] = stack;
    clo9601[8] = cons;
    clo9601[9] = car;
    clo9601[10] = _u43;
    clo9601[11] = append;
    clo9601[12] = null_u63;
    clo9601[13] = count;
    void *f8945 = encode_clo(clo9601);

    // clo-app
    arg_buffer[2] = apply_prim_car_1(state);
    arg_buffer[1] = f8945;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8945))[0]);
    function_ptr();
}

void *lam9216 = encode_clo(alloc_clo(lam9216_fptr, 0));

void lam9218_fptr() // lam9218
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9219 = arg_buffer[1];
    // reading env and args
    void *a8781 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9219);
    void *kont8918 = decode_clo_array[12];
    void *count = decode_clo_array[11];
    void *null_u63 = decode_clo_array[10];
    void *append = decode_clo_array[9];
    void *_u43 = decode_clo_array[8];
    void *car = decode_clo_array[7];
    void *cons = decode_clo_array[6];
    void *stack = decode_clo_array[5];
    void *list = decode_clo_array[4];
    void *cdr = decode_clo_array[3];
    void *q_u45helper = decode_clo_array[2];
    void *ok_u63 = decode_clo_array[1];

    // if-clause
    bool if_guard9602 = is_true(a8781);
    if (if_guard9602)
    {

        // clo-app
        arg_buffer[1] = kont8918;
        arg_buffer[2] = count;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8918))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {

        // creating new closure instance
        void **clo9603 = alloc_clo(lam9216_fptr, 12);

        // setting env list
        clo9603[1] = ok_u63;
        clo9603[2] = q_u45helper;
        clo9603[3] = cdr;
        clo9603[4] = list;
        clo9603[5] = stack;
        clo9603[6] = cons;
        clo9603[7] = car;
        clo9603[8] = _u43;
        clo9603[9] = append;
        clo9603[10] = null_u63;
        clo9603[11] = count;
        clo9603[12] = kont8918;
        void *f8946 = encode_clo(clo9603);

        // clo-app
        arg_buffer[2] = apply_prim_car_1(stack);
        arg_buffer[1] = f8946;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8946))[0]);
        function_ptr();
    }
}

void *lam9218 = encode_clo(alloc_clo(lam9218_fptr, 0));

void q_u45helper_fptr() // q-helper
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9220 = arg_buffer[1];
    // reading env and args
    void *kont8918 = arg_buffer[2];
    void *stack = arg_buffer[3];
    void *count = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9604 = alloc_clo(lam9218_fptr, 12);

    // setting env list
    clo9604[1] = ok_u63;
    void *q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

    clo9604[2] = q_u45helper;
    clo9604[3] = cdr;
    clo9604[4] = list;
    clo9604[5] = stack;
    clo9604[6] = cons;
    clo9604[7] = car;
    clo9604[8] = _u43;
    clo9604[9] = append;
    clo9604[10] = null_u63;
    clo9604[11] = count;
    clo9604[12] = kont8918;
    void *f8947 = encode_clo(clo9604);

    // clo-app
    arg_buffer[2] = apply_prim_null_u63_1(stack);
    arg_buffer[1] = f8947;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8947))[0]);
    function_ptr();
}

void *q_u45helper = encode_clo(alloc_clo(q_u45helper_fptr, 0));

void lam9221_fptr() // lam9221
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9222 = arg_buffer[1];
    // reading env and args
    void *a8812 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9222);
    void *iota1 = decode_clo_array[3];
    void *a8811 = decode_clo_array[2];
    void *kont8948 = decode_clo_array[1];

    // clo-app
    arg_buffer[1] = iota1;
    arg_buffer[2] = kont8948;
    arg_buffer[3] = a8811;
    arg_buffer[4] = a8812;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(iota1))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9221 = encode_clo(alloc_clo(lam9221_fptr, 0));

void lam9223_fptr() // lam9223
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9224 = arg_buffer[1];
    // reading env and args
    void *a8811 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9224);
    void *iota1 = decode_clo_array[5];
    void *n = decode_clo_array[4];
    void *cons = decode_clo_array[3];
    void *kont8948 = decode_clo_array[2];
    void *l = decode_clo_array[1];

    // creating new closure instance
    void **clo9605 = alloc_clo(lam9221_fptr, 3);

    // setting env list
    clo9605[1] = kont8948;
    clo9605[2] = a8811;
    clo9605[3] = iota1;
    void *f8949 = encode_clo(clo9605);

    // clo-app
    arg_buffer[2] = apply_prim_cons_2(n, l);
    arg_buffer[1] = f8949;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8949))[0]);
    function_ptr();
}

void *lam9223 = encode_clo(alloc_clo(lam9223_fptr, 0));

void lam9226_fptr() // lam9226
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9227 = arg_buffer[1];
    // reading env and args
    void *a8809 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9227);
    void *iota1 = decode_clo_array[6];
    void *n = decode_clo_array[5];
    void *cons = decode_clo_array[4];
    void *kont8948 = decode_clo_array[3];
    void *_u45 = decode_clo_array[2];
    void *l = decode_clo_array[1];

    // if-clause
    bool if_guard9606 = is_true(a8809);
    if (if_guard9606)
    {

        // clo-app
        arg_buffer[1] = kont8948;
        arg_buffer[2] = l;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8948))[0]);
        // call next proc using a function pointer
        function_ptr();
    }
    else
    {
        void *a8810 = encode_mpz(mpz9262);

        // creating new closure instance
        void **clo9607 = alloc_clo(lam9223_fptr, 5);

        // setting env list
        clo9607[1] = l;
        clo9607[2] = kont8948;
        clo9607[3] = cons;
        clo9607[4] = n;
        clo9607[5] = iota1;
        void *f8950 = encode_clo(clo9607);

        // clo-app
        arg_buffer[2] = apply_prim__u45_2(n, a8810);
        arg_buffer[1] = f8950;
        arg_buffer[0] = reinterpret_cast<void *>(2);
        auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8950))[0]);
        function_ptr();
    }
}

void *lam9226 = encode_clo(alloc_clo(lam9226_fptr, 0));

void iota1_fptr() // iota1
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9229 = arg_buffer[1];
    // reading env and args
    void *kont8948 = arg_buffer[2];
    void *n = arg_buffer[3];
    void *l = arg_buffer[4];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *a8808 = encode_mpz(mpz9263);

    // creating new closure instance
    void **clo9608 = alloc_clo(lam9226_fptr, 6);

    // setting env list
    clo9608[1] = l;
    clo9608[2] = _u45;
    clo9608[3] = kont8948;
    clo9608[4] = cons;
    clo9608[5] = n;
    void *iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

    clo9608[6] = iota1;
    void *f8951 = encode_clo(clo9608);

    // clo-app
    arg_buffer[2] = apply_prim__u61_2(n, a8808);
    arg_buffer[1] = f8951;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f8951))[0]);
    function_ptr();
}

void *iota1 = encode_clo(alloc_clo(iota1_fptr, 0));

void lam9231_fptr() // lam9231
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9232 = arg_buffer[1];
    // reading env and args
    void *a8818 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9232);
    void *kont8952 = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];
    void *a8819 = encode_mpz(mpz9263);

    // clo-app
    arg_buffer[1] = q_u45helper;
    arg_buffer[2] = kont8952;
    arg_buffer[3] = a8818;
    arg_buffer[4] = a8819;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(q_u45helper))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9231 = encode_clo(alloc_clo(lam9231_fptr, 0));

void lam9233_fptr() // lam9233
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9234 = arg_buffer[1];
    // reading env and args
    void *a8817 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9234);
    void *list = decode_clo_array[3];
    void *kont8952 = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // creating new closure instance
    void **clo9609 = alloc_clo(lam9231_fptr, 2);

    // setting env list
    clo9609[1] = q_u45helper;
    clo9609[2] = kont8952;
    void *f8953 = encode_clo(clo9609);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8953;
    arg_buffer[3] = a8817;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
    void *a8816 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9236);
    void *list = decode_clo_array[5];
    void *kont8952 = decode_clo_array[4];
    void *a8814 = decode_clo_array[3];
    void *a8815 = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // creating new closure instance
    void **clo9610 = alloc_clo(lam9233_fptr, 3);

    // setting env list
    clo9610[1] = q_u45helper;
    clo9610[2] = kont8952;
    clo9610[3] = list;
    void *f8954 = encode_clo(clo9610);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8954;
    arg_buffer[3] = a8814;
    arg_buffer[4] = a8815;
    arg_buffer[5] = a8816;
    arg_buffer[0] = reinterpret_cast<void *>(5);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
    void *a8815 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9238);
    void *list = decode_clo_array[4];
    void *kont8952 = decode_clo_array[3];
    void *a8814 = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // creating new closure instance
    void **clo9611 = alloc_clo(lam9235_fptr, 5);

    // setting env list
    clo9611[1] = q_u45helper;
    clo9611[2] = a8815;
    clo9611[3] = a8814;
    clo9611[4] = kont8952;
    clo9611[5] = list;
    void *f8955 = encode_clo(clo9611);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8955;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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
    void *a8814 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9240);
    void *list = decode_clo_array[3];
    void *kont8952 = decode_clo_array[2];
    void *q_u45helper = decode_clo_array[1];

    // creating new closure instance
    void **clo9612 = alloc_clo(lam9237_fptr, 4);

    // setting env list
    clo9612[1] = q_u45helper;
    clo9612[2] = a8814;
    clo9612[3] = kont8952;
    clo9612[4] = list;
    void *f8956 = encode_clo(clo9612);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8956;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9239 = encode_clo(alloc_clo(lam9239_fptr, 0));

void lam9241_fptr() // lam9241
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *env9242 = arg_buffer[1];
    // reading env and args
    void *a8813 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    decode_clo_array = decode_clo(env9242);
    void *kont8952 = decode_clo_array[5];
    void *n = decode_clo_array[4];
    void *q_u45helper = decode_clo_array[3];
    void *list = decode_clo_array[2];
    void *iota1 = decode_clo_array[1];

    // creating new closure instance
    void **clo9613 = alloc_clo(lam9239_fptr, 3);

    // setting env list
    clo9613[1] = q_u45helper;
    clo9613[2] = kont8952;
    clo9613[3] = list;
    void *f8957 = encode_clo(clo9613);

    // clo-app
    arg_buffer[1] = iota1;
    arg_buffer[2] = f8957;
    arg_buffer[3] = n;
    arg_buffer[4] = a8813;
    arg_buffer[0] = reinterpret_cast<void *>(4);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(iota1))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *lam9241 = encode_clo(alloc_clo(lam9241_fptr, 0));

void nqueens_fptr() // nqueens
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9243 = arg_buffer[1];
    // reading env and args
    void *kont8952 = arg_buffer[2];
    void *n = arg_buffer[3];
    // decoding closure array
    void **decode_clo_array = nullptr;

    // creating new closure instance
    void **clo9614 = alloc_clo(lam9241_fptr, 5);

    // setting env list
    clo9614[1] = iota1;
    clo9614[2] = list;
    clo9614[3] = q_u45helper;
    clo9614[4] = n;
    clo9614[5] = kont8952;
    void *f8958 = encode_clo(clo9614);

    // clo-app
    arg_buffer[1] = list;
    arg_buffer[2] = f8958;
    arg_buffer[0] = reinterpret_cast<void *>(2);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *nqueens = encode_clo(alloc_clo(nqueens_fptr, 0));

void brouhaha_main_fptr() // brouhaha_main
{
    // reading number of args
    numArgs = reinterpret_cast<long>(arg_buffer[0]);
    // reading env
    void *_9245 = arg_buffer[1];
    // reading env and args
    void *kont8959 = arg_buffer[2];
    // decoding closure array
    void **decode_clo_array = nullptr;
    void *a8820 = encode_mpz(mpz9264);

    // clo-app
    arg_buffer[1] = nqueens;
    arg_buffer[2] = kont8959;
    arg_buffer[3] = a8820;
    arg_buffer[0] = reinterpret_cast<void *>(3);
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(nqueens))[0]);
    // call next proc using a function pointer
    function_ptr();
}

void *brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
    mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

    // initializing global constants in the main
    mpz_init_set_si(*mpz9263, 0);
    mpz_init_set_si(*mpz9262, 1);
    mpz_init_set_si(*mpz9249, 2);
    mpz_init_set_si(*mpz9264, 14);

    // making a call to the brouhaha main function to kick off our C++ emission.
    void *fhalt_clo = encode_clo(alloc_clo(fhalt, 0));
    auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
    arg_buffer[0] = 0;
    arg_buffer[2] = fhalt_clo;
    function_ptr();
}
