#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31522 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3122231340 = prim_car(lst);
void* lst31341 = prim_cdr(lst);
void* x3111831342 = apply_prim__u43(lst31341);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3122231340);
arg_buffer[2] = x3111831342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3122231340))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31523 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3122431343 = prim_car(lst);
void* lst31344 = prim_cdr(lst);
void* x3111931345 = apply_prim_max(lst31344);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3122431343);
arg_buffer[2] = x3111931345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3122431343))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31524 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3122631346 = prim_car(lst);
void* lst31347 = prim_cdr(lst);
void* x3112031348 = apply_prim__u45(lst31347);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3122631346);
arg_buffer[2] = x3112031348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3122631346))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void* _u42_fptr() // * 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31525 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3122831349 = prim_car(lst);
void* lst31350 = prim_cdr(lst);
void* x3112131351 = apply_prim__u42(lst31350);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3122831349);
arg_buffer[2] = x3112131351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3122831349))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* modulo_fptr() // modulo 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31526 = arg_buffer[1];
//reading env and args
void* kont31230 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3112231352 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31230);
arg_buffer[2] = x3112231352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31230))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void* _u47_fptr() // / 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31527 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3123131353 = prim_car(lst);
void* lst31354 = prim_cdr(lst);
void* x3112331355 = apply_prim__u47(lst31354);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3123131353);
arg_buffer[2] = x3112331355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3123131353))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void* _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31528 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3123331356 = prim_car(lst);
void* lst31357 = prim_cdr(lst);
void* x3112431358 = apply_prim__u61(lst31357);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3123331356);
arg_buffer[2] = x3112431358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3123331356))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void* _u62_fptr() // > 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31529 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3123531359 = prim_car(lst);
void* lst31360 = prim_cdr(lst);
void* x3112531361 = apply_prim__u62(lst31360);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3123531359);
arg_buffer[2] = x3112531361;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3123531359))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void* _u60_fptr() // < 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31530 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3123731362 = prim_car(lst);
void* lst31363 = prim_cdr(lst);
void* x3112631364 = apply_prim__u60(lst31363);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3123731362);
arg_buffer[2] = x3112631364;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3123731362))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void* _u60_u61_fptr() // <= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31531 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3123931365 = prim_car(lst);
void* lst31366 = prim_cdr(lst);
void* x3112731367 = apply_prim__u60_u61(lst31366);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3123931365);
arg_buffer[2] = x3112731367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3123931365))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void* _u62_u61_fptr() // >= 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31532 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3124131368 = prim_car(lst);
void* lst31369 = prim_cdr(lst);
void* x3112831370 = apply_prim__u62_u61(lst31369);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3124131368);
arg_buffer[2] = x3112831370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3124131368))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void* null_u63_fptr() // null? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31533 = arg_buffer[1];
//reading env and args
void* kont31243 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3112931371 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31243);
arg_buffer[2] = x3112931371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31243))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31534 = arg_buffer[1];
//reading env and args
void* kont31244 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3113031372 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31244);
arg_buffer[2] = x3113031372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31244))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* eq_u63_fptr() // eq? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31535 = arg_buffer[1];
//reading env and args
void* kont31245 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3113131373 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31245);
arg_buffer[2] = x3113131373;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31536 = arg_buffer[1];
//reading env and args
void* kont31246 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3113231374 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31246);
arg_buffer[2] = x3113231374;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31246))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void* car_fptr() // car 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31537 = arg_buffer[1];
//reading env and args
void* kont31247 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3113331375 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31247);
arg_buffer[2] = x3113331375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31247))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31538 = arg_buffer[1];
//reading env and args
void* kont31248 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3113431376 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31248);
arg_buffer[2] = x3113431376;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31248))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31539 = arg_buffer[1];
//reading env and args
void* kont31249 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3113531377 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31249);
arg_buffer[2] = x3113531377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31249))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam31540_fptr() // lam31540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31541 = arg_buffer[1];
//reading env and args
void* a3113831381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env31541))[3];
//not do dummy comment
void* kont31250 = (decode_clo(env31541))[2];
//not do dummy comment
void* a3113631378 = (decode_clo(env31541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31250;
arg_buffer[3] = a3113631378;
arg_buffer[4] = a3113831381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31540 = encode_clo(alloc_clo(lam31540_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31544 = arg_buffer[1];
//reading env and args
void* kont31250 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar31695 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31695, "0", 10);
void* a3113631378 = encode_mpz(mpzvar31695);
mpz_t* mpzvar31696 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31696, "2", 10);
void* a3113731379 = encode_mpz(mpzvar31696);

//creating new closure instance
void** clo31698 = alloc_clo(lam31540_fptr, 3);

//setting env list
clo31698[1] = a3113631378;
clo31698[2] = kont31250;
clo31698[3] = equal_u63;
void* f3125131380 = encode_clo(clo31698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3125131380;
arg_buffer[3] = x;
arg_buffer[4] = a3113731379;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam31545_fptr() // lam31545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31546 = arg_buffer[1];
//reading env and args
void* a3114131385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31252 = (decode_clo(env31546))[3];
//not do dummy comment
void* a3113931382 = (decode_clo(env31546))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env31546))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31252;
arg_buffer[3] = a3113931382;
arg_buffer[4] = a3114131385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31545 = encode_clo(alloc_clo(lam31545_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31549 = arg_buffer[1];
//reading env and args
void* kont31252 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar31699 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31699, "1", 10);
void* a3113931382 = encode_mpz(mpzvar31699);
mpz_t* mpzvar31700 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31700, "2", 10);
void* a3114031383 = encode_mpz(mpzvar31700);

//creating new closure instance
void** clo31702 = alloc_clo(lam31545_fptr, 3);

//setting env list
clo31702[1] = equal_u63;
clo31702[2] = a3113931382;
clo31702[3] = kont31252;
void* f3125331384 = encode_clo(clo31702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3125331384;
arg_buffer[3] = x;
arg_buffer[4] = a3114031383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void* list_fptr() // list 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31550 = arg_buffer[1];
void* x;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
x = arg_buffer[2];
}
else
{
//building cons cell
x = encode_null();
for(int i = numArgs; i >= 2; i--)
{
x = prim_cons(arg_buffer[i], x);

}

}

void* kont3125431386 = prim_car(x);
void* x31387 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3125431386);
arg_buffer[2] = x31387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3125431386))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31551 = arg_buffer[1];
//reading env and args
void* kont31256 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x3114231388 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31256);
arg_buffer[2] = x3114231388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31256))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31552 = arg_buffer[1];
//reading env and args
void* kont31257 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x3114331389 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31257);
arg_buffer[2] = x3114331389;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31257))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam31555_fptr() // lam31555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31556 = arg_buffer[1];
//reading env and args
void* a3114931399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31258 = (decode_clo(env31556))[3];
//not do dummy comment
void* x = (decode_clo(env31556))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31556))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont31258;
arg_buffer[3] = x;
arg_buffer[4] = a3114931399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31555 = encode_clo(alloc_clo(lam31555_fptr, 0));

void* lam31557_fptr() // lam31557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31558 = arg_buffer[1];
//reading env and args
void* a3114731396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31558))[5];
//not do dummy comment
void* lst = (decode_clo(env31558))[4];
//not do dummy comment
void* kont31258 = (decode_clo(env31558))[3];
//not do dummy comment
void* x = (decode_clo(env31558))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31558))[1];

//if-clause
bool if_guard31703 = is_true(a3114731396);
if(if_guard31703)
{
void* x3114831397 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31258);
arg_buffer[2] = x3114831397;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31258))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31705 = alloc_clo(lam31555_fptr, 3);

//setting env list
clo31705[1] = member_u63;
clo31705[2] = x;
clo31705[3] = kont31258;
void* f3125931398 = encode_clo(clo31705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3125931398;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31557 = encode_clo(alloc_clo(lam31557_fptr, 0));

void* lam31559_fptr() // lam31559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31560 = arg_buffer[1];
//reading env and args
void* a3114631394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31560))[6];
//not do dummy comment
void* lst = (decode_clo(env31560))[5];
//not do dummy comment
void* kont31258 = (decode_clo(env31560))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env31560))[3];
//not do dummy comment
void* x = (decode_clo(env31560))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31560))[1];

//creating new closure instance
void** clo31707 = alloc_clo(lam31557_fptr, 5);

//setting env list
clo31707[1] = member_u63;
clo31707[2] = x;
clo31707[3] = kont31258;
clo31707[4] = lst;
clo31707[5] = cdr;
void* f3126031395 = encode_clo(clo31707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3126031395;
arg_buffer[3] = a3114631394;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31559 = encode_clo(alloc_clo(lam31559_fptr, 0));

void* lam31561_fptr() // lam31561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31562 = arg_buffer[1];
//reading env and args
void* a3114431391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31562))[7];
//not do dummy comment
void* lst = (decode_clo(env31562))[6];
//not do dummy comment
void* kont31258 = (decode_clo(env31562))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env31562))[4];
//not do dummy comment
void* x = (decode_clo(env31562))[3];
//not do dummy comment
void* car = (decode_clo(env31562))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31562))[1];

//if-clause
bool if_guard31708 = is_true(a3114431391);
if(if_guard31708)
{
void* x3114531392 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31258);
arg_buffer[2] = x3114531392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31258))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31710 = alloc_clo(lam31559_fptr, 6);

//setting env list
clo31710[1] = member_u63;
clo31710[2] = x;
clo31710[3] = equal_u63;
clo31710[4] = kont31258;
clo31710[5] = lst;
clo31710[6] = cdr;
void* f3126131393 = encode_clo(clo31710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3126131393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31561 = encode_clo(alloc_clo(lam31561_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31563 = arg_buffer[1];
//reading env and args
void* kont31258 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31712 = alloc_clo(lam31561_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo31712[1] = member_u63;
clo31712[2] = car;
clo31712[3] = x;
clo31712[4] = equal_u63;
clo31712[5] = kont31258;
clo31712[6] = lst;
clo31712[7] = cdr;
void* f3126231390 = encode_clo(clo31712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3126231390;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam31564_fptr() // lam31564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31565 = arg_buffer[1];
//reading env and args
void* a3115331407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3115231405 = (decode_clo(env31565))[4];
//not do dummy comment
void* fun = (decode_clo(env31565))[3];
//not do dummy comment
void* kont31263 = (decode_clo(env31565))[2];
//not do dummy comment
void* foldl = (decode_clo(env31565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont31263;
arg_buffer[3] = fun;
arg_buffer[4] = a3115231405;
arg_buffer[5] = a3115331407;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31564 = encode_clo(alloc_clo(lam31564_fptr, 0));

void* lam31566_fptr() // lam31566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31567 = arg_buffer[1];
//reading env and args
void* a3115231405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31567))[5];
//not do dummy comment
void* lst = (decode_clo(env31567))[4];
//not do dummy comment
void* fun = (decode_clo(env31567))[3];
//not do dummy comment
void* kont31263 = (decode_clo(env31567))[2];
//not do dummy comment
void* foldl = (decode_clo(env31567))[1];

//creating new closure instance
void** clo31714 = alloc_clo(lam31564_fptr, 4);

//setting env list
clo31714[1] = foldl;
clo31714[2] = kont31263;
clo31714[3] = fun;
clo31714[4] = a3115231405;
void* f3126431406 = encode_clo(clo31714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3126431406;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31566 = encode_clo(alloc_clo(lam31566_fptr, 0));

void* lam31568_fptr() // lam31568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31569 = arg_buffer[1];
//reading env and args
void* a3115131403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31569))[6];
//not do dummy comment
void* lst = (decode_clo(env31569))[5];
//not do dummy comment
void* fun = (decode_clo(env31569))[4];
//not do dummy comment
void* foldl = (decode_clo(env31569))[3];
//not do dummy comment
void* acc = (decode_clo(env31569))[2];
//not do dummy comment
void* kont31263 = (decode_clo(env31569))[1];

//creating new closure instance
void** clo31716 = alloc_clo(lam31566_fptr, 5);

//setting env list
clo31716[1] = foldl;
clo31716[2] = kont31263;
clo31716[3] = fun;
clo31716[4] = lst;
clo31716[5] = cdr;
void* f3126531404 = encode_clo(clo31716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3126531404;
arg_buffer[3] = a3115131403;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31568 = encode_clo(alloc_clo(lam31568_fptr, 0));

void* lam31570_fptr() // lam31570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31571 = arg_buffer[1];
//reading env and args
void* a3115031401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31571))[7];
//not do dummy comment
void* lst = (decode_clo(env31571))[6];
//not do dummy comment
void* fun = (decode_clo(env31571))[5];
//not do dummy comment
void* car = (decode_clo(env31571))[4];
//not do dummy comment
void* foldl = (decode_clo(env31571))[3];
//not do dummy comment
void* acc = (decode_clo(env31571))[2];
//not do dummy comment
void* kont31263 = (decode_clo(env31571))[1];

//if-clause
bool if_guard31717 = is_true(a3115031401);
if(if_guard31717)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31263);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31263))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31719 = alloc_clo(lam31568_fptr, 6);

//setting env list
clo31719[1] = kont31263;
clo31719[2] = acc;
clo31719[3] = foldl;
clo31719[4] = fun;
clo31719[5] = lst;
clo31719[6] = cdr;
void* f3126631402 = encode_clo(clo31719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3126631402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31570 = encode_clo(alloc_clo(lam31570_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31572 = arg_buffer[1];
//reading env and args
void* kont31263 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo31721 = alloc_clo(lam31570_fptr, 7);

//setting env list
clo31721[1] = kont31263;
clo31721[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo31721[3] = foldl;
clo31721[4] = car;
clo31721[5] = fun;
clo31721[6] = lst;
clo31721[7] = cdr;
void* f3126731400 = encode_clo(clo31721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3126731400;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam31573_fptr() // lam31573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31574 = arg_buffer[1];
//reading env and args
void* a3115731415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31268 = (decode_clo(env31574))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31574))[2];
//not do dummy comment
void* a3115531411 = (decode_clo(env31574))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31268;
arg_buffer[3] = a3115531411;
arg_buffer[4] = a3115731415;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31573 = encode_clo(alloc_clo(lam31573_fptr, 0));

void* lam31575_fptr() // lam31575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31576 = arg_buffer[1];
//reading env and args
void* a3115631413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31268 = (decode_clo(env31576))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31576))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31576))[3];
//not do dummy comment
void* cons = (decode_clo(env31576))[2];
//not do dummy comment
void* a3115531411 = (decode_clo(env31576))[1];

//creating new closure instance
void** clo31723 = alloc_clo(lam31573_fptr, 3);

//setting env list
clo31723[1] = a3115531411;
clo31723[2] = reverse_u45helper;
clo31723[3] = kont31268;
void* f3126931414 = encode_clo(clo31723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3126931414;
arg_buffer[3] = a3115631413;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31575 = encode_clo(alloc_clo(lam31575_fptr, 0));

void* lam31577_fptr() // lam31577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31578 = arg_buffer[1];
//reading env and args
void* a3115531411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31268 = (decode_clo(env31578))[6];
//not do dummy comment
void* lst = (decode_clo(env31578))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31578))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31578))[3];
//not do dummy comment
void* car = (decode_clo(env31578))[2];
//not do dummy comment
void* cons = (decode_clo(env31578))[1];

//creating new closure instance
void** clo31725 = alloc_clo(lam31575_fptr, 5);

//setting env list
clo31725[1] = a3115531411;
clo31725[2] = cons;
clo31725[3] = lst2;
clo31725[4] = reverse_u45helper;
clo31725[5] = kont31268;
void* f3127031412 = encode_clo(clo31725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3127031412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31577 = encode_clo(alloc_clo(lam31577_fptr, 0));

void* lam31579_fptr() // lam31579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31580 = arg_buffer[1];
//reading env and args
void* a3115431409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31580))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31580))[6];
//not do dummy comment
void* lst2 = (decode_clo(env31580))[5];
//not do dummy comment
void* car = (decode_clo(env31580))[4];
//not do dummy comment
void* cons = (decode_clo(env31580))[3];
//not do dummy comment
void* kont31268 = (decode_clo(env31580))[2];
//not do dummy comment
void* cdr = (decode_clo(env31580))[1];

//if-clause
bool if_guard31726 = is_true(a3115431409);
if(if_guard31726)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31268);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31268))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31728 = alloc_clo(lam31577_fptr, 6);

//setting env list
clo31728[1] = cons;
clo31728[2] = car;
clo31728[3] = lst2;
clo31728[4] = reverse_u45helper;
clo31728[5] = lst;
clo31728[6] = kont31268;
void* f3127131410 = encode_clo(clo31728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3127131410;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31579 = encode_clo(alloc_clo(lam31579_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31581 = arg_buffer[1];
//reading env and args
void* kont31268 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31730 = alloc_clo(lam31579_fptr, 7);

//setting env list
clo31730[1] = cdr;
clo31730[2] = kont31268;
clo31730[3] = cons;
clo31730[4] = car;
clo31730[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo31730[6] = reverse_u45helper;
clo31730[7] = lst;
void* f3127231408 = encode_clo(clo31730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3127231408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam31582_fptr() // lam31582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31583 = arg_buffer[1];
//reading env and args
void* a3115831417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31583))[3];
//not do dummy comment
void* kont31273 = (decode_clo(env31583))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31583))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31273;
arg_buffer[3] = lst;
arg_buffer[4] = a3115831417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31582 = encode_clo(alloc_clo(lam31582_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31584 = arg_buffer[1];
//reading env and args
void* kont31273 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31732 = alloc_clo(lam31582_fptr, 3);

//setting env list
clo31732[1] = reverse_u45helper;
clo31732[2] = kont31273;
clo31732[3] = lst;
void* f3127431416 = encode_clo(clo31732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3127431416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam31585_fptr() // lam31585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31586 = arg_buffer[1];
//reading env and args
void* x3116131422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31275 = (decode_clo(env31586))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31275);
arg_buffer[2] = x3116131422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31275))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31585 = encode_clo(alloc_clo(lam31585_fptr, 0));

void* lam31587_fptr() // lam31587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31588 = arg_buffer[1];
//reading env and args
void* a3116631431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31275 = (decode_clo(env31588))[4];
//not do dummy comment
void* a3116431427 = (decode_clo(env31588))[3];
//not do dummy comment
void* a3116231424 = (decode_clo(env31588))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env31588))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31275;
arg_buffer[3] = a3116231424;
arg_buffer[4] = a3116431427;
arg_buffer[5] = a3116631431;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31587 = encode_clo(alloc_clo(lam31587_fptr, 0));

void* lam31589_fptr() // lam31589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31590 = arg_buffer[1];
//reading env and args
void* a3116531429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31275 = (decode_clo(env31590))[6];
//not do dummy comment
void* cons = (decode_clo(env31590))[5];
//not do dummy comment
void* a3116431427 = (decode_clo(env31590))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31590))[3];
//not do dummy comment
void* a3116231424 = (decode_clo(env31590))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env31590))[1];

//creating new closure instance
void** clo31734 = alloc_clo(lam31587_fptr, 4);

//setting env list
clo31734[1] = take_u45helper;
clo31734[2] = a3116231424;
clo31734[3] = a3116431427;
clo31734[4] = kont31275;
void* f3127731430 = encode_clo(clo31734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3127731430;
arg_buffer[3] = a3116531429;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31589 = encode_clo(alloc_clo(lam31589_fptr, 0));

void* lam31591_fptr() // lam31591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31592 = arg_buffer[1];
//reading env and args
void* a3116431427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31592))[7];
//not do dummy comment
void* kont31275 = (decode_clo(env31592))[6];
//not do dummy comment
void* car = (decode_clo(env31592))[5];
//not do dummy comment
void* cons = (decode_clo(env31592))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31592))[3];
//not do dummy comment
void* a3116231424 = (decode_clo(env31592))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env31592))[1];

//creating new closure instance
void** clo31736 = alloc_clo(lam31589_fptr, 6);

//setting env list
clo31736[1] = take_u45helper;
clo31736[2] = a3116231424;
clo31736[3] = lst2;
clo31736[4] = a3116431427;
clo31736[5] = cons;
clo31736[6] = kont31275;
void* f3127831428 = encode_clo(clo31736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3127831428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31591 = encode_clo(alloc_clo(lam31591_fptr, 0));

void* lam31594_fptr() // lam31594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31595 = arg_buffer[1];
//reading env and args
void* a3116231424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31595))[8];
//not do dummy comment
void* kont31275 = (decode_clo(env31595))[7];
//not do dummy comment
void* cons = (decode_clo(env31595))[6];
//not do dummy comment
void* _u45 = (decode_clo(env31595))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env31595))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31595))[3];
//not do dummy comment
void* n = (decode_clo(env31595))[2];
//not do dummy comment
void* car = (decode_clo(env31595))[1];
mpz_t* mpzvar31737 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31737, "1", 10);
void* a3116331425 = encode_mpz(mpzvar31737);

//creating new closure instance
void** clo31739 = alloc_clo(lam31591_fptr, 7);

//setting env list
clo31739[1] = take_u45helper;
clo31739[2] = a3116231424;
clo31739[3] = lst2;
clo31739[4] = cons;
clo31739[5] = car;
clo31739[6] = kont31275;
clo31739[7] = lst;
void* f3127931426 = encode_clo(clo31739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3127931426;
arg_buffer[3] = n;
arg_buffer[4] = a3116331425;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31594 = encode_clo(alloc_clo(lam31594_fptr, 0));

void* lam31596_fptr() // lam31596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31597 = arg_buffer[1];
//reading env and args
void* a3116031420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31597))[10];
//not do dummy comment
void* lst = (decode_clo(env31597))[9];
//not do dummy comment
void* cons = (decode_clo(env31597))[8];
//not do dummy comment
void* _u45 = (decode_clo(env31597))[7];
//not do dummy comment
void* kont31275 = (decode_clo(env31597))[6];
//not do dummy comment
void* reverse = (decode_clo(env31597))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env31597))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31597))[3];
//not do dummy comment
void* n = (decode_clo(env31597))[2];
//not do dummy comment
void* car = (decode_clo(env31597))[1];

//if-clause
bool if_guard31740 = is_true(a3116031420);
if(if_guard31740)
{

//creating new closure instance
void** clo31742 = alloc_clo(lam31585_fptr, 1);

//setting env list
clo31742[1] = kont31275;
void* f3127631421 = encode_clo(clo31742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3127631421;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31744 = alloc_clo(lam31594_fptr, 8);

//setting env list
clo31744[1] = car;
clo31744[2] = n;
clo31744[3] = lst2;
clo31744[4] = take_u45helper;
clo31744[5] = _u45;
clo31744[6] = cons;
clo31744[7] = kont31275;
clo31744[8] = lst;
void* f3128031423 = encode_clo(clo31744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3128031423;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31596 = encode_clo(alloc_clo(lam31596_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31599 = arg_buffer[1];
//reading env and args
void* kont31275 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar31745 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31745, "0", 10);
void* a3115931418 = encode_mpz(mpzvar31745);

//creating new closure instance
void** clo31747 = alloc_clo(lam31596_fptr, 10);

//setting env list
clo31747[1] = car;
clo31747[2] = n;
clo31747[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo31747[4] = take_u45helper;
clo31747[5] = reverse;
clo31747[6] = kont31275;
clo31747[7] = _u45;
clo31747[8] = cons;
clo31747[9] = lst;
clo31747[10] = cdr;
void* f3128131419 = encode_clo(clo31747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3128131419;
arg_buffer[3] = n;
arg_buffer[4] = a3115931418;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam31600_fptr() // lam31600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31601 = arg_buffer[1];
//reading env and args
void* a3116731433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31601))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env31601))[3];
//not do dummy comment
void* n = (decode_clo(env31601))[2];
//not do dummy comment
void* kont31282 = (decode_clo(env31601))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31282;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3116731433;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31600 = encode_clo(alloc_clo(lam31600_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31602 = arg_buffer[1];
//reading env and args
void* kont31282 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31749 = alloc_clo(lam31600_fptr, 4);

//setting env list
clo31749[1] = kont31282;
clo31749[2] = n;
clo31749[3] = take_u45helper;
clo31749[4] = lst;
void* f3128331432 = encode_clo(clo31749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3128331432;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam31604_fptr() // lam31604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31605 = arg_buffer[1];
//reading env and args
void* a3117231441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31284 = (decode_clo(env31605))[3];
//not do dummy comment
void* a3117031437 = (decode_clo(env31605))[2];
//not do dummy comment
void* _u43 = (decode_clo(env31605))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont31284;
arg_buffer[3] = a3117031437;
arg_buffer[4] = a3117231441;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31604 = encode_clo(alloc_clo(lam31604_fptr, 0));

void* lam31606_fptr() // lam31606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31607 = arg_buffer[1];
//reading env and args
void* a3117131439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31284 = (decode_clo(env31607))[4];
//not do dummy comment
void* length = (decode_clo(env31607))[3];
//not do dummy comment
void* a3117031437 = (decode_clo(env31607))[2];
//not do dummy comment
void* _u43 = (decode_clo(env31607))[1];

//creating new closure instance
void** clo31751 = alloc_clo(lam31604_fptr, 3);

//setting env list
clo31751[1] = _u43;
clo31751[2] = a3117031437;
clo31751[3] = kont31284;
void* f3128531440 = encode_clo(clo31751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3128531440;
arg_buffer[3] = a3117131439;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31606 = encode_clo(alloc_clo(lam31606_fptr, 0));

void* lam31609_fptr() // lam31609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31610 = arg_buffer[1];
//reading env and args
void* a3116831435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31610))[5];
//not do dummy comment
void* length = (decode_clo(env31610))[4];
//not do dummy comment
void* _u43 = (decode_clo(env31610))[3];
//not do dummy comment
void* kont31284 = (decode_clo(env31610))[2];
//not do dummy comment
void* cdr = (decode_clo(env31610))[1];

//if-clause
bool if_guard31752 = is_true(a3116831435);
if(if_guard31752)
{
mpz_t* mpzvar31753 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31753, "0", 10);
void* x3116931436 = encode_mpz(mpzvar31753);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31284);
arg_buffer[2] = x3116931436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31284))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar31754 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31754, "1", 10);
void* a3117031437 = encode_mpz(mpzvar31754);

//creating new closure instance
void** clo31756 = alloc_clo(lam31606_fptr, 4);

//setting env list
clo31756[1] = _u43;
clo31756[2] = a3117031437;
clo31756[3] = length;
clo31756[4] = kont31284;
void* f3128631438 = encode_clo(clo31756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3128631438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31609 = encode_clo(alloc_clo(lam31609_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31611 = arg_buffer[1];
//reading env and args
void* kont31284 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31758 = alloc_clo(lam31609_fptr, 5);

//setting env list
clo31758[1] = cdr;
clo31758[2] = kont31284;
clo31758[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo31758[4] = length;
clo31758[5] = lst;
void* f3128731434 = encode_clo(clo31758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3128731434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam31612_fptr() // lam31612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31613 = arg_buffer[1];
//reading env and args
void* x3117431445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31288 = (decode_clo(env31613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31288);
arg_buffer[2] = x3117431445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31288))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31612 = encode_clo(alloc_clo(lam31612_fptr, 0));

void* lam31614_fptr() // lam31614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31615 = arg_buffer[1];
//reading env and args
void* a3117831453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31288 = (decode_clo(env31615))[3];
//not do dummy comment
void* a3117631449 = (decode_clo(env31615))[2];
//not do dummy comment
void* cons = (decode_clo(env31615))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31288;
arg_buffer[3] = a3117631449;
arg_buffer[4] = a3117831453;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31614 = encode_clo(alloc_clo(lam31614_fptr, 0));

void* lam31616_fptr() // lam31616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31617 = arg_buffer[1];
//reading env and args
void* a3117731451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31288 = (decode_clo(env31617))[5];
//not do dummy comment
void* proc = (decode_clo(env31617))[4];
//not do dummy comment
void* cons = (decode_clo(env31617))[3];
//not do dummy comment
void* map = (decode_clo(env31617))[2];
//not do dummy comment
void* a3117631449 = (decode_clo(env31617))[1];

//creating new closure instance
void** clo31760 = alloc_clo(lam31614_fptr, 3);

//setting env list
clo31760[1] = cons;
clo31760[2] = a3117631449;
clo31760[3] = kont31288;
void* f3129031452 = encode_clo(clo31760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3129031452;
arg_buffer[3] = proc;
arg_buffer[4] = a3117731451;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31616 = encode_clo(alloc_clo(lam31616_fptr, 0));

void* lam31618_fptr() // lam31618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31619 = arg_buffer[1];
//reading env and args
void* a3117631449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31619))[6];
//not do dummy comment
void* map = (decode_clo(env31619))[5];
//not do dummy comment
void* proc = (decode_clo(env31619))[4];
//not do dummy comment
void* cons = (decode_clo(env31619))[3];
//not do dummy comment
void* lst = (decode_clo(env31619))[2];
//not do dummy comment
void* kont31288 = (decode_clo(env31619))[1];

//creating new closure instance
void** clo31762 = alloc_clo(lam31616_fptr, 5);

//setting env list
clo31762[1] = a3117631449;
clo31762[2] = map;
clo31762[3] = cons;
clo31762[4] = proc;
clo31762[5] = kont31288;
void* f3129131450 = encode_clo(clo31762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3129131450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31618 = encode_clo(alloc_clo(lam31618_fptr, 0));

void* lam31620_fptr() // lam31620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31621 = arg_buffer[1];
//reading env and args
void* a3117531447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31621))[6];
//not do dummy comment
void* map = (decode_clo(env31621))[5];
//not do dummy comment
void* proc = (decode_clo(env31621))[4];
//not do dummy comment
void* cons = (decode_clo(env31621))[3];
//not do dummy comment
void* lst = (decode_clo(env31621))[2];
//not do dummy comment
void* kont31288 = (decode_clo(env31621))[1];

//creating new closure instance
void** clo31764 = alloc_clo(lam31618_fptr, 6);

//setting env list
clo31764[1] = kont31288;
clo31764[2] = lst;
clo31764[3] = cons;
clo31764[4] = proc;
clo31764[5] = map;
clo31764[6] = cdr;
void* f3129231448 = encode_clo(clo31764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3129231448;
arg_buffer[3] = a3117531447;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31620 = encode_clo(alloc_clo(lam31620_fptr, 0));

void* lam31622_fptr() // lam31622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31623 = arg_buffer[1];
//reading env and args
void* a3117331443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env31623))[8];
//not do dummy comment
void* proc = (decode_clo(env31623))[7];
//not do dummy comment
void* car = (decode_clo(env31623))[6];
//not do dummy comment
void* cons = (decode_clo(env31623))[5];
//not do dummy comment
void* list = (decode_clo(env31623))[4];
//not do dummy comment
void* cdr = (decode_clo(env31623))[3];
//not do dummy comment
void* lst = (decode_clo(env31623))[2];
//not do dummy comment
void* kont31288 = (decode_clo(env31623))[1];

//if-clause
bool if_guard31765 = is_true(a3117331443);
if(if_guard31765)
{

//creating new closure instance
void** clo31767 = alloc_clo(lam31612_fptr, 1);

//setting env list
clo31767[1] = kont31288;
void* f3128931444 = encode_clo(clo31767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3128931444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31769 = alloc_clo(lam31620_fptr, 6);

//setting env list
clo31769[1] = kont31288;
clo31769[2] = lst;
clo31769[3] = cons;
clo31769[4] = proc;
clo31769[5] = map;
clo31769[6] = cdr;
void* f3129331446 = encode_clo(clo31769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3129331446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31622 = encode_clo(alloc_clo(lam31622_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31624 = arg_buffer[1];
//reading env and args
void* kont31288 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31771 = alloc_clo(lam31622_fptr, 8);

//setting env list
clo31771[1] = kont31288;
clo31771[2] = lst;
clo31771[3] = cdr;
clo31771[4] = list;
clo31771[5] = cons;
clo31771[6] = car;
clo31771[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo31771[8] = map;
void* f3129431442 = encode_clo(clo31771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3129431442;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam31625_fptr() // lam31625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31626 = arg_buffer[1];
//reading env and args
void* x3118031457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31295 = (decode_clo(env31626))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31295);
arg_buffer[2] = x3118031457;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31295))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31625 = encode_clo(alloc_clo(lam31625_fptr, 0));

void* lam31627_fptr() // lam31627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31628 = arg_buffer[1];
//reading env and args
void* a3118531467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3118331463 = (decode_clo(env31628))[3];
//not do dummy comment
void* kont31295 = (decode_clo(env31628))[2];
//not do dummy comment
void* cons = (decode_clo(env31628))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31295;
arg_buffer[3] = a3118331463;
arg_buffer[4] = a3118531467;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31627 = encode_clo(alloc_clo(lam31627_fptr, 0));

void* lam31629_fptr() // lam31629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31630 = arg_buffer[1];
//reading env and args
void* a3118431465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3118331463 = (decode_clo(env31630))[5];
//not do dummy comment
void* op = (decode_clo(env31630))[4];
//not do dummy comment
void* kont31295 = (decode_clo(env31630))[3];
//not do dummy comment
void* filter = (decode_clo(env31630))[2];
//not do dummy comment
void* cons = (decode_clo(env31630))[1];

//creating new closure instance
void** clo31773 = alloc_clo(lam31627_fptr, 3);

//setting env list
clo31773[1] = cons;
clo31773[2] = kont31295;
clo31773[3] = a3118331463;
void* f3129731466 = encode_clo(clo31773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3129731466;
arg_buffer[3] = op;
arg_buffer[4] = a3118431465;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31629 = encode_clo(alloc_clo(lam31629_fptr, 0));

void* lam31631_fptr() // lam31631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31632 = arg_buffer[1];
//reading env and args
void* a3118331463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31632))[6];
//not do dummy comment
void* lst = (decode_clo(env31632))[5];
//not do dummy comment
void* op = (decode_clo(env31632))[4];
//not do dummy comment
void* kont31295 = (decode_clo(env31632))[3];
//not do dummy comment
void* filter = (decode_clo(env31632))[2];
//not do dummy comment
void* cons = (decode_clo(env31632))[1];

//creating new closure instance
void** clo31775 = alloc_clo(lam31629_fptr, 5);

//setting env list
clo31775[1] = cons;
clo31775[2] = filter;
clo31775[3] = kont31295;
clo31775[4] = op;
clo31775[5] = a3118331463;
void* f3129831464 = encode_clo(clo31775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3129831464;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31631 = encode_clo(alloc_clo(lam31631_fptr, 0));

void* lam31633_fptr() // lam31633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31634 = arg_buffer[1];
//reading env and args
void* a3118631469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env31634))[3];
//not do dummy comment
void* kont31295 = (decode_clo(env31634))[2];
//not do dummy comment
void* filter = (decode_clo(env31634))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont31295;
arg_buffer[3] = op;
arg_buffer[4] = a3118631469;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31633 = encode_clo(alloc_clo(lam31633_fptr, 0));

void* lam31635_fptr() // lam31635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31636 = arg_buffer[1];
//reading env and args
void* a3118231461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31636))[7];
//not do dummy comment
void* lst = (decode_clo(env31636))[6];
//not do dummy comment
void* op = (decode_clo(env31636))[5];
//not do dummy comment
void* kont31295 = (decode_clo(env31636))[4];
//not do dummy comment
void* cons = (decode_clo(env31636))[3];
//not do dummy comment
void* filter = (decode_clo(env31636))[2];
//not do dummy comment
void* car = (decode_clo(env31636))[1];

//if-clause
bool if_guard31776 = is_true(a3118231461);
if(if_guard31776)
{

//creating new closure instance
void** clo31778 = alloc_clo(lam31631_fptr, 6);

//setting env list
clo31778[1] = cons;
clo31778[2] = filter;
clo31778[3] = kont31295;
clo31778[4] = op;
clo31778[5] = lst;
clo31778[6] = cdr;
void* f3129931462 = encode_clo(clo31778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3129931462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31780 = alloc_clo(lam31633_fptr, 3);

//setting env list
clo31780[1] = filter;
clo31780[2] = kont31295;
clo31780[3] = op;
void* f3130031468 = encode_clo(clo31780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3130031468;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31635 = encode_clo(alloc_clo(lam31635_fptr, 0));

void* lam31637_fptr() // lam31637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31638 = arg_buffer[1];
//reading env and args
void* a3118131459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31638))[7];
//not do dummy comment
void* lst = (decode_clo(env31638))[6];
//not do dummy comment
void* op = (decode_clo(env31638))[5];
//not do dummy comment
void* kont31295 = (decode_clo(env31638))[4];
//not do dummy comment
void* cons = (decode_clo(env31638))[3];
//not do dummy comment
void* filter = (decode_clo(env31638))[2];
//not do dummy comment
void* car = (decode_clo(env31638))[1];

//creating new closure instance
void** clo31782 = alloc_clo(lam31635_fptr, 7);

//setting env list
clo31782[1] = car;
clo31782[2] = filter;
clo31782[3] = cons;
clo31782[4] = kont31295;
clo31782[5] = op;
clo31782[6] = lst;
clo31782[7] = cdr;
void* f3130131460 = encode_clo(clo31782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3130131460;
arg_buffer[3] = a3118131459;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31637 = encode_clo(alloc_clo(lam31637_fptr, 0));

void* lam31639_fptr() // lam31639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31640 = arg_buffer[1];
//reading env and args
void* a3117931455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31640))[8];
//not do dummy comment
void* op = (decode_clo(env31640))[7];
//not do dummy comment
void* kont31295 = (decode_clo(env31640))[6];
//not do dummy comment
void* cons = (decode_clo(env31640))[5];
//not do dummy comment
void* list = (decode_clo(env31640))[4];
//not do dummy comment
void* cdr = (decode_clo(env31640))[3];
//not do dummy comment
void* filter = (decode_clo(env31640))[2];
//not do dummy comment
void* car = (decode_clo(env31640))[1];

//if-clause
bool if_guard31783 = is_true(a3117931455);
if(if_guard31783)
{

//creating new closure instance
void** clo31785 = alloc_clo(lam31625_fptr, 1);

//setting env list
clo31785[1] = kont31295;
void* f3129631456 = encode_clo(clo31785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3129631456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31787 = alloc_clo(lam31637_fptr, 7);

//setting env list
clo31787[1] = car;
clo31787[2] = filter;
clo31787[3] = cons;
clo31787[4] = kont31295;
clo31787[5] = op;
clo31787[6] = lst;
clo31787[7] = cdr;
void* f3130231458 = encode_clo(clo31787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3130231458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31639 = encode_clo(alloc_clo(lam31639_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31641 = arg_buffer[1];
//reading env and args
void* kont31295 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31789 = alloc_clo(lam31639_fptr, 8);

//setting env list
clo31789[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo31789[2] = filter;
clo31789[3] = cdr;
clo31789[4] = list;
clo31789[5] = cons;
clo31789[6] = kont31295;
clo31789[7] = op;
clo31789[8] = lst;
void* f3130331454 = encode_clo(clo31789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3130331454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam31642_fptr() // lam31642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31643 = arg_buffer[1];
//reading env and args
void* a3119131477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3118931474 = (decode_clo(env31643))[3];
//not do dummy comment
void* kont31304 = (decode_clo(env31643))[2];
//not do dummy comment
void* drop = (decode_clo(env31643))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont31304;
arg_buffer[3] = a3118931474;
arg_buffer[4] = a3119131477;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31642 = encode_clo(alloc_clo(lam31642_fptr, 0));

void* lam31645_fptr() // lam31645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31646 = arg_buffer[1];
//reading env and args
void* a3118931474 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env31646))[4];
//not do dummy comment
void* _u45 = (decode_clo(env31646))[3];
//not do dummy comment
void* kont31304 = (decode_clo(env31646))[2];
//not do dummy comment
void* drop = (decode_clo(env31646))[1];
mpz_t* mpzvar31790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31790, "1", 10);
void* a3119031475 = encode_mpz(mpzvar31790);

//creating new closure instance
void** clo31792 = alloc_clo(lam31642_fptr, 3);

//setting env list
clo31792[1] = drop;
clo31792[2] = kont31304;
clo31792[3] = a3118931474;
void* f3130531476 = encode_clo(clo31792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3130531476;
arg_buffer[3] = n;
arg_buffer[4] = a3119031475;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31645 = encode_clo(alloc_clo(lam31645_fptr, 0));

void* lam31647_fptr() // lam31647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31648 = arg_buffer[1];
//reading env and args
void* a3118831472 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31648))[6];
//not do dummy comment
void* n = (decode_clo(env31648))[5];
//not do dummy comment
void* _u45 = (decode_clo(env31648))[4];
//not do dummy comment
void* lst = (decode_clo(env31648))[3];
//not do dummy comment
void* kont31304 = (decode_clo(env31648))[2];
//not do dummy comment
void* drop = (decode_clo(env31648))[1];

//if-clause
bool if_guard31793 = is_true(a3118831472);
if(if_guard31793)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31304);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31304))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31795 = alloc_clo(lam31645_fptr, 4);

//setting env list
clo31795[1] = drop;
clo31795[2] = kont31304;
clo31795[3] = _u45;
clo31795[4] = n;
void* f3130631473 = encode_clo(clo31795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3130631473;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31647 = encode_clo(alloc_clo(lam31647_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31650 = arg_buffer[1];
//reading env and args
void* kont31304 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar31796 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31796, "0", 10);
void* a3118731470 = encode_mpz(mpzvar31796);

//creating new closure instance
void** clo31798 = alloc_clo(lam31647_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo31798[1] = drop;
clo31798[2] = kont31304;
clo31798[3] = lst;
clo31798[4] = _u45;
clo31798[5] = n;
clo31798[6] = cdr;
void* f3130731471 = encode_clo(clo31798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3130731471;
arg_buffer[3] = n;
arg_buffer[4] = a3118731470;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam31651_fptr() // lam31651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31652 = arg_buffer[1];
//reading env and args
void* a3119531485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3119331481 = (decode_clo(env31652))[3];
//not do dummy comment
void* kont31308 = (decode_clo(env31652))[2];
//not do dummy comment
void* proc = (decode_clo(env31652))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont31308;
arg_buffer[3] = a3119331481;
arg_buffer[4] = a3119531485;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31651 = encode_clo(alloc_clo(lam31651_fptr, 0));

void* lam31653_fptr() // lam31653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31654 = arg_buffer[1];
//reading env and args
void* a3119431483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env31654))[5];
//not do dummy comment
void* a3119331481 = (decode_clo(env31654))[4];
//not do dummy comment
void* kont31308 = (decode_clo(env31654))[3];
//not do dummy comment
void* proc = (decode_clo(env31654))[2];
//not do dummy comment
void* acc = (decode_clo(env31654))[1];

//creating new closure instance
void** clo31800 = alloc_clo(lam31651_fptr, 3);

//setting env list
clo31800[1] = proc;
clo31800[2] = kont31308;
clo31800[3] = a3119331481;
void* f3130931484 = encode_clo(clo31800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3130931484;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3119431483;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31653 = encode_clo(alloc_clo(lam31653_fptr, 0));

void* lam31655_fptr() // lam31655 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31656 = arg_buffer[1];
//reading env and args
void* a3119331481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31656))[6];
//not do dummy comment
void* kont31308 = (decode_clo(env31656))[5];
//not do dummy comment
void* foldr = (decode_clo(env31656))[4];
//not do dummy comment
void* lst = (decode_clo(env31656))[3];
//not do dummy comment
void* proc = (decode_clo(env31656))[2];
//not do dummy comment
void* acc = (decode_clo(env31656))[1];

//creating new closure instance
void** clo31802 = alloc_clo(lam31653_fptr, 5);

//setting env list
clo31802[1] = acc;
clo31802[2] = proc;
clo31802[3] = kont31308;
clo31802[4] = a3119331481;
clo31802[5] = foldr;
void* f3131031482 = encode_clo(clo31802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3131031482;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31655 = encode_clo(alloc_clo(lam31655_fptr, 0));

void* lam31657_fptr() // lam31657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31658 = arg_buffer[1];
//reading env and args
void* a3119231479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31658))[7];
//not do dummy comment
void* kont31308 = (decode_clo(env31658))[6];
//not do dummy comment
void* car = (decode_clo(env31658))[5];
//not do dummy comment
void* foldr = (decode_clo(env31658))[4];
//not do dummy comment
void* lst = (decode_clo(env31658))[3];
//not do dummy comment
void* proc = (decode_clo(env31658))[2];
//not do dummy comment
void* acc = (decode_clo(env31658))[1];

//if-clause
bool if_guard31803 = is_true(a3119231479);
if(if_guard31803)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31308);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31308))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31805 = alloc_clo(lam31655_fptr, 6);

//setting env list
clo31805[1] = acc;
clo31805[2] = proc;
clo31805[3] = lst;
clo31805[4] = foldr;
clo31805[5] = kont31308;
clo31805[6] = cdr;
void* f3131131480 = encode_clo(clo31805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3131131480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31657 = encode_clo(alloc_clo(lam31657_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31659 = arg_buffer[1];
//reading env and args
void* kont31308 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo31807 = alloc_clo(lam31657_fptr, 7);

//setting env list
clo31807[1] = acc;
clo31807[2] = proc;
clo31807[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo31807[4] = foldr;
clo31807[5] = car;
clo31807[6] = kont31308;
clo31807[7] = cdr;
void* f3131231478 = encode_clo(clo31807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3131231478;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam31660_fptr() // lam31660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31661 = arg_buffer[1];
//reading env and args
void* a3119931493 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env31661))[3];
//not do dummy comment
void* a3119731489 = (decode_clo(env31661))[2];
//not do dummy comment
void* kont31313 = (decode_clo(env31661))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31313;
arg_buffer[3] = a3119731489;
arg_buffer[4] = a3119931493;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31660 = encode_clo(alloc_clo(lam31660_fptr, 0));

void* lam31662_fptr() // lam31662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31663 = arg_buffer[1];
//reading env and args
void* a3119831491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env31663))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31663))[4];
//not do dummy comment
void* cons = (decode_clo(env31663))[3];
//not do dummy comment
void* a3119731489 = (decode_clo(env31663))[2];
//not do dummy comment
void* kont31313 = (decode_clo(env31663))[1];

//creating new closure instance
void** clo31809 = alloc_clo(lam31660_fptr, 3);

//setting env list
clo31809[1] = kont31313;
clo31809[2] = a3119731489;
clo31809[3] = cons;
void* f3131431492 = encode_clo(clo31809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3131431492;
arg_buffer[3] = a3119831491;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31662 = encode_clo(alloc_clo(lam31662_fptr, 0));

void* lam31664_fptr() // lam31664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31665 = arg_buffer[1];
//reading env and args
void* a3119731489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31665))[6];
//not do dummy comment
void* append = (decode_clo(env31665))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31665))[4];
//not do dummy comment
void* cons = (decode_clo(env31665))[3];
//not do dummy comment
void* kont31313 = (decode_clo(env31665))[2];
//not do dummy comment
void* lst1 = (decode_clo(env31665))[1];

//creating new closure instance
void** clo31811 = alloc_clo(lam31662_fptr, 5);

//setting env list
clo31811[1] = kont31313;
clo31811[2] = a3119731489;
clo31811[3] = cons;
clo31811[4] = lst2;
clo31811[5] = append;
void* f3131531490 = encode_clo(clo31811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3131531490;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31664 = encode_clo(alloc_clo(lam31664_fptr, 0));

void* lam31666_fptr() // lam31666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31667 = arg_buffer[1];
//reading env and args
void* a3119631487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31667))[7];
//not do dummy comment
void* append = (decode_clo(env31667))[6];
//not do dummy comment
void* lst2 = (decode_clo(env31667))[5];
//not do dummy comment
void* cons = (decode_clo(env31667))[4];
//not do dummy comment
void* kont31313 = (decode_clo(env31667))[3];
//not do dummy comment
void* lst1 = (decode_clo(env31667))[2];
//not do dummy comment
void* car = (decode_clo(env31667))[1];

//if-clause
bool if_guard31812 = is_true(a3119631487);
if(if_guard31812)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31313);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31313))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31814 = alloc_clo(lam31664_fptr, 6);

//setting env list
clo31814[1] = lst1;
clo31814[2] = kont31313;
clo31814[3] = cons;
clo31814[4] = lst2;
clo31814[5] = append;
clo31814[6] = cdr;
void* f3131631488 = encode_clo(clo31814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3131631488;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31666 = encode_clo(alloc_clo(lam31666_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31668 = arg_buffer[1];
//reading env and args
void* kont31313 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31816 = alloc_clo(lam31666_fptr, 7);

//setting env list
clo31816[1] = car;
clo31816[2] = lst1;
clo31816[3] = kont31313;
clo31816[4] = cons;
clo31816[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo31816[6] = append;
clo31816[7] = cdr;
void* f3131731486 = encode_clo(clo31816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3131731486;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* append = encode_clo(alloc_clo(append_fptr, 0));

void* hash_fptr() // hash 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31669 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3131831494 = prim_car(lst);
void* lst31495 = prim_cdr(lst);
void* x3120031496 = apply_prim_hash(lst31495);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3131831494);
arg_buffer[2] = x3120031496;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3131831494))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void* hash_u45ref_fptr() // hash-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31670 = arg_buffer[1];
//reading env and args
void* kont31320 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3120131497 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31320);
arg_buffer[2] = x3120131497;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31320))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void* hash_u45set_fptr() // hash-set 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31671 = arg_buffer[1];
//reading env and args
void* kont31321 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3120231498 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31321);
arg_buffer[2] = x3120231498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31321))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void* hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31672 = arg_buffer[1];
//reading env and args
void* kont31322 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3120331499 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31322);
arg_buffer[2] = x3120331499;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31322))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void* hash_u45count_fptr() // hash-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31673 = arg_buffer[1];
//reading env and args
void* kont31323 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3120431500 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31323);
arg_buffer[2] = x3120431500;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31323))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31674 = arg_buffer[1];
void* lst;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
lst = arg_buffer[2];
}
else
{
//building cons cell
lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

}

void* kont3132431501 = prim_car(lst);
void* lst31502 = prim_cdr(lst);
void* x3120531503 = apply_prim_set(lst31502);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3132431501);
arg_buffer[2] = x3120531503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3132431501))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31675 = arg_buffer[1];
//reading env and args
void* kont31326 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3120631504 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31326);
arg_buffer[2] = x3120631504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31326))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31676 = arg_buffer[1];
//reading env and args
void* kont31327 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3120731505 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31327);
arg_buffer[2] = x3120731505;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31327))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31677 = arg_buffer[1];
//reading env and args
void* kont31328 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3120831506 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31328);
arg_buffer[2] = x3120831506;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31328))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31678 = arg_buffer[1];
//reading env and args
void* kont31329 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3120931507 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31329);
arg_buffer[2] = x3120931507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31329))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31679 = arg_buffer[1];
//reading env and args
void* kont31330 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3121031508 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31330);
arg_buffer[2] = x3121031508;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31330))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31680 = arg_buffer[1];
//reading env and args
void* kont31331 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3121131509 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31331);
arg_buffer[2] = x3121131509;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31331))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31681 = arg_buffer[1];
//reading env and args
void* kont31332 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x3121231510 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31332);
arg_buffer[2] = x3121231510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31332))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31682 = arg_buffer[1];
//reading env and args
void* kont31333 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x3121331511 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31333);
arg_buffer[2] = x3121331511;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31333))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31683 = arg_buffer[1];
//reading env and args
void* kont31334 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x3121431512 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31334);
arg_buffer[2] = x3121431512;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31334))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31684 = arg_buffer[1];
//reading env and args
void* kont31335 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3121531513 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31335);
arg_buffer[2] = x3121531513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31335))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam31685_fptr() // lam31685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31686 = arg_buffer[1];
//reading env and args
void* x3121631515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31336 = (decode_clo(env31686))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31336);
arg_buffer[2] = x3121631515;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31336))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31685 = encode_clo(alloc_clo(lam31685_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31687 = arg_buffer[1];
//reading env and args
void* kont31336 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31818 = alloc_clo(lam31685_fptr, 1);

//setting env list
clo31818[1] = kont31336;
void* f3133731514 = encode_clo(clo31818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3133731514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam31688_fptr() // lam31688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31689 = arg_buffer[1];
//reading env and args
void* a3122131521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31338 = (decode_clo(env31689))[2];
//not do dummy comment
void* call = (decode_clo(env31689))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont31338;
arg_buffer[3] = a3122131521;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31688 = encode_clo(alloc_clo(lam31688_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31694 = arg_buffer[1];
//reading env and args
void* kont31338 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar31819 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31819, "1", 10);
void* a3121731516 = encode_mpz(mpzvar31819);
mpz_t* mpzvar31820 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31820, "2", 10);
void* a3121831517 = encode_mpz(mpzvar31820);
mpz_t* mpzvar31821 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31821, "3", 10);
void* a3121931518 = encode_mpz(mpzvar31821);
mpz_t* mpzvar31822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31822, "4", 10);
void* a3122031519 = encode_mpz(mpzvar31822);

//creating new closure instance
void** clo31824 = alloc_clo(lam31688_fptr, 2);

//setting env list
clo31824[1] = call;
clo31824[2] = kont31338;
void* f3133931520 = encode_clo(clo31824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3133931520;
arg_buffer[3] = a3121731516;
arg_buffer[4] = a3121831517;
arg_buffer[5] = a3121931518;
arg_buffer[6] = a3122031519;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);
//making a call to the brouhaha main function to kick off our c++ emission.
void *fhalt_clo = encode_clo(alloc_clo(fhalt,0));
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(brouhaha_main))[0]);
arg_buffer[0]=0;
arg_buffer[2]=fhalt_clo;
function_ptr();
return 0;
}

