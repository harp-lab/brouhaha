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
void* _45504 = arg_buffer[1];
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

void* kont4520945326 = prim_car(lst);
void* lst45327 = prim_cdr(lst);
void* x4511045328 = apply_prim__u43(lst45327);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4520945326);
arg_buffer[2] = x4511045328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4520945326))[0]);
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
void* _45505 = arg_buffer[1];
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

void* kont4521145329 = prim_car(lst);
void* lst45330 = prim_cdr(lst);
void* x4511145331 = apply_prim_max(lst45330);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521145329);
arg_buffer[2] = x4511145331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521145329))[0]);
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
void* _45506 = arg_buffer[1];
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

void* kont4521345332 = prim_car(lst);
void* lst45333 = prim_cdr(lst);
void* x4511245334 = apply_prim__u45(lst45333);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521345332);
arg_buffer[2] = x4511245334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521345332))[0]);
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
void* _45507 = arg_buffer[1];
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

void* kont4521545335 = prim_car(lst);
void* lst45336 = prim_cdr(lst);
void* x4511345337 = apply_prim__u42(lst45336);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521545335);
arg_buffer[2] = x4511345337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521545335))[0]);
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
void* _45508 = arg_buffer[1];
//reading env and args
void* kont45217 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4511445338 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45217);
arg_buffer[2] = x4511445338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45217))[0]);
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
void* _45509 = arg_buffer[1];
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

void* kont4521845339 = prim_car(lst);
void* lst45340 = prim_cdr(lst);
void* x4511545341 = apply_prim__u47(lst45340);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521845339);
arg_buffer[2] = x4511545341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521845339))[0]);
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
void* _45510 = arg_buffer[1];
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

void* kont4522045342 = prim_car(lst);
void* lst45343 = prim_cdr(lst);
void* x4511645344 = apply_prim__u61(lst45343);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522045342);
arg_buffer[2] = x4511645344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522045342))[0]);
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
void* _45511 = arg_buffer[1];
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

void* kont4522245345 = prim_car(lst);
void* lst45346 = prim_cdr(lst);
void* x4511745347 = apply_prim__u62(lst45346);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522245345);
arg_buffer[2] = x4511745347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522245345))[0]);
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
void* _45512 = arg_buffer[1];
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

void* kont4522445348 = prim_car(lst);
void* lst45349 = prim_cdr(lst);
void* x4511845350 = apply_prim__u60(lst45349);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522445348);
arg_buffer[2] = x4511845350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522445348))[0]);
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
void* _45513 = arg_buffer[1];
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

void* kont4522645351 = prim_car(lst);
void* lst45352 = prim_cdr(lst);
void* x4511945353 = apply_prim__u60_u61(lst45352);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522645351);
arg_buffer[2] = x4511945353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522645351))[0]);
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
void* _45514 = arg_buffer[1];
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

void* kont4522845354 = prim_car(lst);
void* lst45355 = prim_cdr(lst);
void* x4512045356 = apply_prim__u62_u61(lst45355);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522845354);
arg_buffer[2] = x4512045356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522845354))[0]);
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
void* _45515 = arg_buffer[1];
//reading env and args
void* kont45230 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4512145357 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45230);
arg_buffer[2] = x4512145357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45230))[0]);
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
void* _45516 = arg_buffer[1];
//reading env and args
void* kont45231 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4512245358 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45231);
arg_buffer[2] = x4512245358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45231))[0]);
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
void* _45517 = arg_buffer[1];
//reading env and args
void* kont45232 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4512345359 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45232);
arg_buffer[2] = x4512345359;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45232))[0]);
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
void* _45518 = arg_buffer[1];
//reading env and args
void* kont45233 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4512445360 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45233);
arg_buffer[2] = x4512445360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45233))[0]);
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
void* _45519 = arg_buffer[1];
//reading env and args
void* kont45234 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4512545361 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45234);
arg_buffer[2] = x4512545361;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45234))[0]);
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
void* _45520 = arg_buffer[1];
//reading env and args
void* kont45235 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4512645362 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45235);
arg_buffer[2] = x4512645362;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45235))[0]);
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
void* _45521 = arg_buffer[1];
//reading env and args
void* kont45236 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4512745363 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45236);
arg_buffer[2] = x4512745363;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam45522_fptr() // lam45522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45523 = arg_buffer[1];
//reading env and args
void* a4513045367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4512845364 = (decode_clo(env45523))[3];
//not do dummy comment
void* kont45237 = (decode_clo(env45523))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env45523))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45237;
arg_buffer[3] = a4512845364;
arg_buffer[4] = a4513045367;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45522 = encode_clo(alloc_clo(lam45522_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45526 = arg_buffer[1];
//reading env and args
void* kont45237 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45673 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45673, "0", 10);
void* a4512845364 = encode_mpz(mpzvar45673);
mpz_t* mpzvar45674 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45674, "2", 10);
void* a4512945365 = encode_mpz(mpzvar45674);

//creating new closure instance
void** clo45676 = alloc_clo(lam45522_fptr, 3);

//setting env list
clo45676[1] = equal_u63;
clo45676[2] = kont45237;
clo45676[3] = a4512845364;
void* f4523845366 = encode_clo(clo45676);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4523845366;
arg_buffer[3] = x;
arg_buffer[4] = a4512945365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam45527_fptr() // lam45527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45528 = arg_buffer[1];
//reading env and args
void* a4513345371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env45528))[3];
//not do dummy comment
void* kont45239 = (decode_clo(env45528))[2];
//not do dummy comment
void* a4513145368 = (decode_clo(env45528))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45239;
arg_buffer[3] = a4513145368;
arg_buffer[4] = a4513345371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45527 = encode_clo(alloc_clo(lam45527_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45531 = arg_buffer[1];
//reading env and args
void* kont45239 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45677 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45677, "1", 10);
void* a4513145368 = encode_mpz(mpzvar45677);
mpz_t* mpzvar45678 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45678, "2", 10);
void* a4513245369 = encode_mpz(mpzvar45678);

//creating new closure instance
void** clo45680 = alloc_clo(lam45527_fptr, 3);

//setting env list
clo45680[1] = a4513145368;
clo45680[2] = kont45239;
clo45680[3] = equal_u63;
void* f4524045370 = encode_clo(clo45680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4524045370;
arg_buffer[3] = x;
arg_buffer[4] = a4513245369;
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
void* _45532 = arg_buffer[1];
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

void* kont4524145372 = prim_car(x);
void* x45373 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4524145372);
arg_buffer[2] = x45373;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4524145372))[0]);
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
void* _45533 = arg_buffer[1];
//reading env and args
void* kont45243 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4513445374 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45243);
arg_buffer[2] = x4513445374;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45243))[0]);
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
void* _45534 = arg_buffer[1];
//reading env and args
void* kont45244 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4513545375 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45244);
arg_buffer[2] = x4513545375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45244))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam45537_fptr() // lam45537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45538 = arg_buffer[1];
//reading env and args
void* a4514145385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45245 = (decode_clo(env45538))[3];
//not do dummy comment
void* x = (decode_clo(env45538))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env45538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont45245;
arg_buffer[3] = x;
arg_buffer[4] = a4514145385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45537 = encode_clo(alloc_clo(lam45537_fptr, 0));

void* lam45539_fptr() // lam45539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45540 = arg_buffer[1];
//reading env and args
void* a4513945382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45540))[5];
//not do dummy comment
void* x = (decode_clo(env45540))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env45540))[3];
//not do dummy comment
void* kont45245 = (decode_clo(env45540))[2];
//not do dummy comment
void* cdr = (decode_clo(env45540))[1];

//if-clause
bool if_guard45681 = is_true(a4513945382);
if(if_guard45681)
{
void* x4514045383 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45245);
arg_buffer[2] = x4514045383;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45683 = alloc_clo(lam45537_fptr, 3);

//setting env list
clo45683[1] = member_u63;
clo45683[2] = x;
clo45683[3] = kont45245;
void* f4524645384 = encode_clo(clo45683);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4524645384;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45539 = encode_clo(alloc_clo(lam45539_fptr, 0));

void* lam45541_fptr() // lam45541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45542 = arg_buffer[1];
//reading env and args
void* a4513845380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45542))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env45542))[5];
//not do dummy comment
void* x = (decode_clo(env45542))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env45542))[3];
//not do dummy comment
void* kont45245 = (decode_clo(env45542))[2];
//not do dummy comment
void* cdr = (decode_clo(env45542))[1];

//creating new closure instance
void** clo45685 = alloc_clo(lam45539_fptr, 5);

//setting env list
clo45685[1] = cdr;
clo45685[2] = kont45245;
clo45685[3] = member_u63;
clo45685[4] = x;
clo45685[5] = lst;
void* f4524745381 = encode_clo(clo45685);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4524745381;
arg_buffer[3] = a4513845380;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45541 = encode_clo(alloc_clo(lam45541_fptr, 0));

void* lam45543_fptr() // lam45543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45544 = arg_buffer[1];
//reading env and args
void* a4513645377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45544))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env45544))[6];
//not do dummy comment
void* x = (decode_clo(env45544))[5];
//not do dummy comment
void* car = (decode_clo(env45544))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env45544))[3];
//not do dummy comment
void* kont45245 = (decode_clo(env45544))[2];
//not do dummy comment
void* cdr = (decode_clo(env45544))[1];

//if-clause
bool if_guard45686 = is_true(a4513645377);
if(if_guard45686)
{
void* x4513745378 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45245);
arg_buffer[2] = x4513745378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45688 = alloc_clo(lam45541_fptr, 6);

//setting env list
clo45688[1] = cdr;
clo45688[2] = kont45245;
clo45688[3] = member_u63;
clo45688[4] = x;
clo45688[5] = equal_u63;
clo45688[6] = lst;
void* f4524845379 = encode_clo(clo45688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4524845379;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45543 = encode_clo(alloc_clo(lam45543_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45545 = arg_buffer[1];
//reading env and args
void* kont45245 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45690 = alloc_clo(lam45543_fptr, 7);

//setting env list
clo45690[1] = cdr;
clo45690[2] = kont45245;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo45690[3] = member_u63;
clo45690[4] = car;
clo45690[5] = x;
clo45690[6] = equal_u63;
clo45690[7] = lst;
void* f4524945376 = encode_clo(clo45690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4524945376;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam45546_fptr() // lam45546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45547 = arg_buffer[1];
//reading env and args
void* a4514545393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4514445391 = (decode_clo(env45547))[4];
//not do dummy comment
void* kont45250 = (decode_clo(env45547))[3];
//not do dummy comment
void* fun = (decode_clo(env45547))[2];
//not do dummy comment
void* foldl = (decode_clo(env45547))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont45250;
arg_buffer[3] = fun;
arg_buffer[4] = a4514445391;
arg_buffer[5] = a4514545393;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45546 = encode_clo(alloc_clo(lam45546_fptr, 0));

void* lam45548_fptr() // lam45548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45549 = arg_buffer[1];
//reading env and args
void* a4514445391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45549))[5];
//not do dummy comment
void* lst = (decode_clo(env45549))[4];
//not do dummy comment
void* kont45250 = (decode_clo(env45549))[3];
//not do dummy comment
void* fun = (decode_clo(env45549))[2];
//not do dummy comment
void* foldl = (decode_clo(env45549))[1];

//creating new closure instance
void** clo45692 = alloc_clo(lam45546_fptr, 4);

//setting env list
clo45692[1] = foldl;
clo45692[2] = fun;
clo45692[3] = kont45250;
clo45692[4] = a4514445391;
void* f4525145392 = encode_clo(clo45692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4525145392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45548 = encode_clo(alloc_clo(lam45548_fptr, 0));

void* lam45550_fptr() // lam45550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45551 = arg_buffer[1];
//reading env and args
void* a4514345389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45551))[6];
//not do dummy comment
void* lst = (decode_clo(env45551))[5];
//not do dummy comment
void* kont45250 = (decode_clo(env45551))[4];
//not do dummy comment
void* fun = (decode_clo(env45551))[3];
//not do dummy comment
void* acc = (decode_clo(env45551))[2];
//not do dummy comment
void* foldl = (decode_clo(env45551))[1];

//creating new closure instance
void** clo45694 = alloc_clo(lam45548_fptr, 5);

//setting env list
clo45694[1] = foldl;
clo45694[2] = fun;
clo45694[3] = kont45250;
clo45694[4] = lst;
clo45694[5] = cdr;
void* f4525245390 = encode_clo(clo45694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4525245390;
arg_buffer[3] = a4514345389;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45550 = encode_clo(alloc_clo(lam45550_fptr, 0));

void* lam45552_fptr() // lam45552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45553 = arg_buffer[1];
//reading env and args
void* a4514245387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45553))[7];
//not do dummy comment
void* lst = (decode_clo(env45553))[6];
//not do dummy comment
void* kont45250 = (decode_clo(env45553))[5];
//not do dummy comment
void* fun = (decode_clo(env45553))[4];
//not do dummy comment
void* acc = (decode_clo(env45553))[3];
//not do dummy comment
void* car = (decode_clo(env45553))[2];
//not do dummy comment
void* foldl = (decode_clo(env45553))[1];

//if-clause
bool if_guard45695 = is_true(a4514245387);
if(if_guard45695)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45250);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45250))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45697 = alloc_clo(lam45550_fptr, 6);

//setting env list
clo45697[1] = foldl;
clo45697[2] = acc;
clo45697[3] = fun;
clo45697[4] = kont45250;
clo45697[5] = lst;
clo45697[6] = cdr;
void* f4525345388 = encode_clo(clo45697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4525345388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45552 = encode_clo(alloc_clo(lam45552_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45554 = arg_buffer[1];
//reading env and args
void* kont45250 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45699 = alloc_clo(lam45552_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo45699[1] = foldl;
clo45699[2] = car;
clo45699[3] = acc;
clo45699[4] = fun;
clo45699[5] = kont45250;
clo45699[6] = lst;
clo45699[7] = cdr;
void* f4525445386 = encode_clo(clo45699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4525445386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam45555_fptr() // lam45555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45556 = arg_buffer[1];
//reading env and args
void* a4514945401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45556))[3];
//not do dummy comment
void* a4514745397 = (decode_clo(env45556))[2];
//not do dummy comment
void* kont45255 = (decode_clo(env45556))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45255;
arg_buffer[3] = a4514745397;
arg_buffer[4] = a4514945401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45555 = encode_clo(alloc_clo(lam45555_fptr, 0));

void* lam45557_fptr() // lam45557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45558 = arg_buffer[1];
//reading env and args
void* a4514845399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45558))[5];
//not do dummy comment
void* a4514745397 = (decode_clo(env45558))[4];
//not do dummy comment
void* kont45255 = (decode_clo(env45558))[3];
//not do dummy comment
void* lst2 = (decode_clo(env45558))[2];
//not do dummy comment
void* cons = (decode_clo(env45558))[1];

//creating new closure instance
void** clo45701 = alloc_clo(lam45555_fptr, 3);

//setting env list
clo45701[1] = kont45255;
clo45701[2] = a4514745397;
clo45701[3] = reverse_u45helper;
void* f4525645400 = encode_clo(clo45701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4525645400;
arg_buffer[3] = a4514845399;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45557 = encode_clo(alloc_clo(lam45557_fptr, 0));

void* lam45559_fptr() // lam45559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45560 = arg_buffer[1];
//reading env and args
void* a4514745397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45560))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45560))[5];
//not do dummy comment
void* kont45255 = (decode_clo(env45560))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45560))[3];
//not do dummy comment
void* car = (decode_clo(env45560))[2];
//not do dummy comment
void* cons = (decode_clo(env45560))[1];

//creating new closure instance
void** clo45703 = alloc_clo(lam45557_fptr, 5);

//setting env list
clo45703[1] = cons;
clo45703[2] = lst2;
clo45703[3] = kont45255;
clo45703[4] = a4514745397;
clo45703[5] = reverse_u45helper;
void* f4525745398 = encode_clo(clo45703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4525745398;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45559 = encode_clo(alloc_clo(lam45559_fptr, 0));

void* lam45561_fptr() // lam45561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45562 = arg_buffer[1];
//reading env and args
void* a4514645395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45562))[7];
//not do dummy comment
void* lst = (decode_clo(env45562))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45562))[5];
//not do dummy comment
void* kont45255 = (decode_clo(env45562))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45562))[3];
//not do dummy comment
void* car = (decode_clo(env45562))[2];
//not do dummy comment
void* cons = (decode_clo(env45562))[1];

//if-clause
bool if_guard45704 = is_true(a4514645395);
if(if_guard45704)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45255);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45255))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45706 = alloc_clo(lam45559_fptr, 6);

//setting env list
clo45706[1] = cons;
clo45706[2] = car;
clo45706[3] = lst2;
clo45706[4] = kont45255;
clo45706[5] = reverse_u45helper;
clo45706[6] = lst;
void* f4525845396 = encode_clo(clo45706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4525845396;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45561 = encode_clo(alloc_clo(lam45561_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45563 = arg_buffer[1];
//reading env and args
void* kont45255 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45708 = alloc_clo(lam45561_fptr, 7);

//setting env list
clo45708[1] = cons;
clo45708[2] = car;
clo45708[3] = lst2;
clo45708[4] = kont45255;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo45708[5] = reverse_u45helper;
clo45708[6] = lst;
clo45708[7] = cdr;
void* f4525945394 = encode_clo(clo45708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4525945394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam45564_fptr() // lam45564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45565 = arg_buffer[1];
//reading env and args
void* a4515045403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45565))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45565))[2];
//not do dummy comment
void* kont45260 = (decode_clo(env45565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45260;
arg_buffer[3] = lst;
arg_buffer[4] = a4515045403;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45564 = encode_clo(alloc_clo(lam45564_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45566 = arg_buffer[1];
//reading env and args
void* kont45260 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45710 = alloc_clo(lam45564_fptr, 3);

//setting env list
clo45710[1] = kont45260;
clo45710[2] = reverse_u45helper;
clo45710[3] = lst;
void* f4526145402 = encode_clo(clo45710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4526145402;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam45567_fptr() // lam45567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45568 = arg_buffer[1];
//reading env and args
void* x4515345408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45262 = (decode_clo(env45568))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45262);
arg_buffer[2] = x4515345408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45262))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45567 = encode_clo(alloc_clo(lam45567_fptr, 0));

void* lam45569_fptr() // lam45569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45570 = arg_buffer[1];
//reading env and args
void* a4515845417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45262 = (decode_clo(env45570))[4];
//not do dummy comment
void* a4515445410 = (decode_clo(env45570))[3];
//not do dummy comment
void* a4515645413 = (decode_clo(env45570))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env45570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45262;
arg_buffer[3] = a4515445410;
arg_buffer[4] = a4515645413;
arg_buffer[5] = a4515845417;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45569 = encode_clo(alloc_clo(lam45569_fptr, 0));

void* lam45571_fptr() // lam45571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45572 = arg_buffer[1];
//reading env and args
void* a4515745415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45262 = (decode_clo(env45572))[6];
//not do dummy comment
void* a4515445410 = (decode_clo(env45572))[5];
//not do dummy comment
void* a4515645413 = (decode_clo(env45572))[4];
//not do dummy comment
void* cons = (decode_clo(env45572))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45572))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45572))[1];

//creating new closure instance
void** clo45712 = alloc_clo(lam45569_fptr, 4);

//setting env list
clo45712[1] = take_u45helper;
clo45712[2] = a4515645413;
clo45712[3] = a4515445410;
clo45712[4] = kont45262;
void* f4526445416 = encode_clo(clo45712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4526445416;
arg_buffer[3] = a4515745415;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45571 = encode_clo(alloc_clo(lam45571_fptr, 0));

void* lam45573_fptr() // lam45573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45574 = arg_buffer[1];
//reading env and args
void* a4515645413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45262 = (decode_clo(env45574))[7];
//not do dummy comment
void* lst = (decode_clo(env45574))[6];
//not do dummy comment
void* a4515445410 = (decode_clo(env45574))[5];
//not do dummy comment
void* car = (decode_clo(env45574))[4];
//not do dummy comment
void* cons = (decode_clo(env45574))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45574))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45574))[1];

//creating new closure instance
void** clo45714 = alloc_clo(lam45571_fptr, 6);

//setting env list
clo45714[1] = lst2;
clo45714[2] = take_u45helper;
clo45714[3] = cons;
clo45714[4] = a4515645413;
clo45714[5] = a4515445410;
clo45714[6] = kont45262;
void* f4526545414 = encode_clo(clo45714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4526545414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45573 = encode_clo(alloc_clo(lam45573_fptr, 0));

void* lam45576_fptr() // lam45576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45577 = arg_buffer[1];
//reading env and args
void* a4515445410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45262 = (decode_clo(env45577))[8];
//not do dummy comment
void* lst = (decode_clo(env45577))[7];
//not do dummy comment
void* cons = (decode_clo(env45577))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45577))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45577))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45577))[3];
//not do dummy comment
void* n = (decode_clo(env45577))[2];
//not do dummy comment
void* car = (decode_clo(env45577))[1];
mpz_t* mpzvar45715 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45715, "1", 10);
void* a4515545411 = encode_mpz(mpzvar45715);

//creating new closure instance
void** clo45717 = alloc_clo(lam45573_fptr, 7);

//setting env list
clo45717[1] = lst2;
clo45717[2] = take_u45helper;
clo45717[3] = cons;
clo45717[4] = car;
clo45717[5] = a4515445410;
clo45717[6] = lst;
clo45717[7] = kont45262;
void* f4526645412 = encode_clo(clo45717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4526645412;
arg_buffer[3] = n;
arg_buffer[4] = a4515545411;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45576 = encode_clo(alloc_clo(lam45576_fptr, 0));

void* lam45578_fptr() // lam45578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45579 = arg_buffer[1];
//reading env and args
void* a4515245406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45579))[10];
//not do dummy comment
void* kont45262 = (decode_clo(env45579))[9];
//not do dummy comment
void* lst = (decode_clo(env45579))[8];
//not do dummy comment
void* reverse = (decode_clo(env45579))[7];
//not do dummy comment
void* cons = (decode_clo(env45579))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45579))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45579))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45579))[3];
//not do dummy comment
void* n = (decode_clo(env45579))[2];
//not do dummy comment
void* car = (decode_clo(env45579))[1];

//if-clause
bool if_guard45718 = is_true(a4515245406);
if(if_guard45718)
{

//creating new closure instance
void** clo45720 = alloc_clo(lam45567_fptr, 1);

//setting env list
clo45720[1] = kont45262;
void* f4526345407 = encode_clo(clo45720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4526345407;
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
void** clo45722 = alloc_clo(lam45576_fptr, 8);

//setting env list
clo45722[1] = car;
clo45722[2] = n;
clo45722[3] = lst2;
clo45722[4] = take_u45helper;
clo45722[5] = _u45;
clo45722[6] = cons;
clo45722[7] = lst;
clo45722[8] = kont45262;
void* f4526745409 = encode_clo(clo45722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4526745409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45578 = encode_clo(alloc_clo(lam45578_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45581 = arg_buffer[1];
//reading env and args
void* kont45262 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar45723 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45723, "0", 10);
void* a4515145404 = encode_mpz(mpzvar45723);

//creating new closure instance
void** clo45725 = alloc_clo(lam45578_fptr, 10);

//setting env list
clo45725[1] = car;
clo45725[2] = n;
clo45725[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo45725[4] = take_u45helper;
clo45725[5] = _u45;
clo45725[6] = cons;
clo45725[7] = reverse;
clo45725[8] = lst;
clo45725[9] = kont45262;
clo45725[10] = cdr;
void* f4526845405 = encode_clo(clo45725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4526845405;
arg_buffer[3] = n;
arg_buffer[4] = a4515145404;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam45582_fptr() // lam45582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45583 = arg_buffer[1];
//reading env and args
void* a4515945419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45583))[4];
//not do dummy comment
void* kont45269 = (decode_clo(env45583))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45583))[2];
//not do dummy comment
void* n = (decode_clo(env45583))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45269;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4515945419;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45582 = encode_clo(alloc_clo(lam45582_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45584 = arg_buffer[1];
//reading env and args
void* kont45269 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45727 = alloc_clo(lam45582_fptr, 4);

//setting env list
clo45727[1] = n;
clo45727[2] = take_u45helper;
clo45727[3] = kont45269;
clo45727[4] = lst;
void* f4527045418 = encode_clo(clo45727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4527045418;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam45586_fptr() // lam45586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45587 = arg_buffer[1];
//reading env and args
void* a4516445427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4516245423 = (decode_clo(env45587))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45587))[2];
//not do dummy comment
void* kont45271 = (decode_clo(env45587))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont45271;
arg_buffer[3] = a4516245423;
arg_buffer[4] = a4516445427;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45586 = encode_clo(alloc_clo(lam45586_fptr, 0));

void* lam45588_fptr() // lam45588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45589 = arg_buffer[1];
//reading env and args
void* a4516345425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4516245423 = (decode_clo(env45589))[4];
//not do dummy comment
void* length = (decode_clo(env45589))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45589))[2];
//not do dummy comment
void* kont45271 = (decode_clo(env45589))[1];

//creating new closure instance
void** clo45729 = alloc_clo(lam45586_fptr, 3);

//setting env list
clo45729[1] = kont45271;
clo45729[2] = _u43;
clo45729[3] = a4516245423;
void* f4527245426 = encode_clo(clo45729);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4527245426;
arg_buffer[3] = a4516345425;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45588 = encode_clo(alloc_clo(lam45588_fptr, 0));

void* lam45591_fptr() // lam45591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45592 = arg_buffer[1];
//reading env and args
void* a4516045421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45592))[5];
//not do dummy comment
void* lst = (decode_clo(env45592))[4];
//not do dummy comment
void* length = (decode_clo(env45592))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45592))[2];
//not do dummy comment
void* kont45271 = (decode_clo(env45592))[1];

//if-clause
bool if_guard45730 = is_true(a4516045421);
if(if_guard45730)
{
mpz_t* mpzvar45731 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45731, "0", 10);
void* x4516145422 = encode_mpz(mpzvar45731);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45271);
arg_buffer[2] = x4516145422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45271))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar45732 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45732, "1", 10);
void* a4516245423 = encode_mpz(mpzvar45732);

//creating new closure instance
void** clo45734 = alloc_clo(lam45588_fptr, 4);

//setting env list
clo45734[1] = kont45271;
clo45734[2] = _u43;
clo45734[3] = length;
clo45734[4] = a4516245423;
void* f4527345424 = encode_clo(clo45734);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4527345424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45591 = encode_clo(alloc_clo(lam45591_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45593 = arg_buffer[1];
//reading env and args
void* kont45271 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45736 = alloc_clo(lam45591_fptr, 5);

//setting env list
clo45736[1] = kont45271;
clo45736[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo45736[3] = length;
clo45736[4] = lst;
clo45736[5] = cdr;
void* f4527445420 = encode_clo(clo45736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4527445420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam45594_fptr() // lam45594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45595 = arg_buffer[1];
//reading env and args
void* x4516645431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45275 = (decode_clo(env45595))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45275);
arg_buffer[2] = x4516645431;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45275))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45594 = encode_clo(alloc_clo(lam45594_fptr, 0));

void* lam45596_fptr() // lam45596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45597 = arg_buffer[1];
//reading env and args
void* a4517045439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env45597))[3];
//not do dummy comment
void* a4516845435 = (decode_clo(env45597))[2];
//not do dummy comment
void* kont45275 = (decode_clo(env45597))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45275;
arg_buffer[3] = a4516845435;
arg_buffer[4] = a4517045439;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45596 = encode_clo(alloc_clo(lam45596_fptr, 0));

void* lam45598_fptr() // lam45598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45599 = arg_buffer[1];
//reading env and args
void* a4516945437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env45599))[5];
//not do dummy comment
void* proc = (decode_clo(env45599))[4];
//not do dummy comment
void* cons = (decode_clo(env45599))[3];
//not do dummy comment
void* a4516845435 = (decode_clo(env45599))[2];
//not do dummy comment
void* kont45275 = (decode_clo(env45599))[1];

//creating new closure instance
void** clo45738 = alloc_clo(lam45596_fptr, 3);

//setting env list
clo45738[1] = kont45275;
clo45738[2] = a4516845435;
clo45738[3] = cons;
void* f4527745438 = encode_clo(clo45738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4527745438;
arg_buffer[3] = proc;
arg_buffer[4] = a4516945437;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45598 = encode_clo(alloc_clo(lam45598_fptr, 0));

void* lam45600_fptr() // lam45600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45601 = arg_buffer[1];
//reading env and args
void* a4516845435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45601))[6];
//not do dummy comment
void* lst = (decode_clo(env45601))[5];
//not do dummy comment
void* map = (decode_clo(env45601))[4];
//not do dummy comment
void* proc = (decode_clo(env45601))[3];
//not do dummy comment
void* cons = (decode_clo(env45601))[2];
//not do dummy comment
void* kont45275 = (decode_clo(env45601))[1];

//creating new closure instance
void** clo45740 = alloc_clo(lam45598_fptr, 5);

//setting env list
clo45740[1] = kont45275;
clo45740[2] = a4516845435;
clo45740[3] = cons;
clo45740[4] = proc;
clo45740[5] = map;
void* f4527845436 = encode_clo(clo45740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4527845436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45600 = encode_clo(alloc_clo(lam45600_fptr, 0));

void* lam45602_fptr() // lam45602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45603 = arg_buffer[1];
//reading env and args
void* a4516745433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45603))[6];
//not do dummy comment
void* lst = (decode_clo(env45603))[5];
//not do dummy comment
void* map = (decode_clo(env45603))[4];
//not do dummy comment
void* proc = (decode_clo(env45603))[3];
//not do dummy comment
void* cons = (decode_clo(env45603))[2];
//not do dummy comment
void* kont45275 = (decode_clo(env45603))[1];

//creating new closure instance
void** clo45742 = alloc_clo(lam45600_fptr, 6);

//setting env list
clo45742[1] = kont45275;
clo45742[2] = cons;
clo45742[3] = proc;
clo45742[4] = map;
clo45742[5] = lst;
clo45742[6] = cdr;
void* f4527945434 = encode_clo(clo45742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4527945434;
arg_buffer[3] = a4516745433;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45602 = encode_clo(alloc_clo(lam45602_fptr, 0));

void* lam45604_fptr() // lam45604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45605 = arg_buffer[1];
//reading env and args
void* a4516545429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45605))[8];
//not do dummy comment
void* map = (decode_clo(env45605))[7];
//not do dummy comment
void* proc = (decode_clo(env45605))[6];
//not do dummy comment
void* car = (decode_clo(env45605))[5];
//not do dummy comment
void* list = (decode_clo(env45605))[4];
//not do dummy comment
void* cdr = (decode_clo(env45605))[3];
//not do dummy comment
void* cons = (decode_clo(env45605))[2];
//not do dummy comment
void* kont45275 = (decode_clo(env45605))[1];

//if-clause
bool if_guard45743 = is_true(a4516545429);
if(if_guard45743)
{

//creating new closure instance
void** clo45745 = alloc_clo(lam45594_fptr, 1);

//setting env list
clo45745[1] = kont45275;
void* f4527645430 = encode_clo(clo45745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4527645430;
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
void** clo45747 = alloc_clo(lam45602_fptr, 6);

//setting env list
clo45747[1] = kont45275;
clo45747[2] = cons;
clo45747[3] = proc;
clo45747[4] = map;
clo45747[5] = lst;
clo45747[6] = cdr;
void* f4528045432 = encode_clo(clo45747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4528045432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45604 = encode_clo(alloc_clo(lam45604_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45606 = arg_buffer[1];
//reading env and args
void* kont45275 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45749 = alloc_clo(lam45604_fptr, 8);

//setting env list
clo45749[1] = kont45275;
clo45749[2] = cons;
clo45749[3] = cdr;
clo45749[4] = list;
clo45749[5] = car;
clo45749[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo45749[7] = map;
clo45749[8] = lst;
void* f4528145428 = encode_clo(clo45749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4528145428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam45607_fptr() // lam45607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45608 = arg_buffer[1];
//reading env and args
void* x4517245443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45282 = (decode_clo(env45608))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45282);
arg_buffer[2] = x4517245443;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45282))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45607 = encode_clo(alloc_clo(lam45607_fptr, 0));

void* lam45609_fptr() // lam45609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45610 = arg_buffer[1];
//reading env and args
void* a4517745453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45282 = (decode_clo(env45610))[3];
//not do dummy comment
void* a4517545449 = (decode_clo(env45610))[2];
//not do dummy comment
void* cons = (decode_clo(env45610))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45282;
arg_buffer[3] = a4517545449;
arg_buffer[4] = a4517745453;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45609 = encode_clo(alloc_clo(lam45609_fptr, 0));

void* lam45611_fptr() // lam45611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45612 = arg_buffer[1];
//reading env and args
void* a4517645451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45282 = (decode_clo(env45612))[5];
//not do dummy comment
void* op = (decode_clo(env45612))[4];
//not do dummy comment
void* a4517545449 = (decode_clo(env45612))[3];
//not do dummy comment
void* filter = (decode_clo(env45612))[2];
//not do dummy comment
void* cons = (decode_clo(env45612))[1];

//creating new closure instance
void** clo45751 = alloc_clo(lam45609_fptr, 3);

//setting env list
clo45751[1] = cons;
clo45751[2] = a4517545449;
clo45751[3] = kont45282;
void* f4528445452 = encode_clo(clo45751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4528445452;
arg_buffer[3] = op;
arg_buffer[4] = a4517645451;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45611 = encode_clo(alloc_clo(lam45611_fptr, 0));

void* lam45613_fptr() // lam45613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45614 = arg_buffer[1];
//reading env and args
void* a4517545449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45614))[6];
//not do dummy comment
void* lst = (decode_clo(env45614))[5];
//not do dummy comment
void* kont45282 = (decode_clo(env45614))[4];
//not do dummy comment
void* op = (decode_clo(env45614))[3];
//not do dummy comment
void* filter = (decode_clo(env45614))[2];
//not do dummy comment
void* cons = (decode_clo(env45614))[1];

//creating new closure instance
void** clo45753 = alloc_clo(lam45611_fptr, 5);

//setting env list
clo45753[1] = cons;
clo45753[2] = filter;
clo45753[3] = a4517545449;
clo45753[4] = op;
clo45753[5] = kont45282;
void* f4528545450 = encode_clo(clo45753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4528545450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45613 = encode_clo(alloc_clo(lam45613_fptr, 0));

void* lam45615_fptr() // lam45615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45616 = arg_buffer[1];
//reading env and args
void* a4517845455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45282 = (decode_clo(env45616))[3];
//not do dummy comment
void* op = (decode_clo(env45616))[2];
//not do dummy comment
void* filter = (decode_clo(env45616))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont45282;
arg_buffer[3] = op;
arg_buffer[4] = a4517845455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45615 = encode_clo(alloc_clo(lam45615_fptr, 0));

void* lam45617_fptr() // lam45617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45618 = arg_buffer[1];
//reading env and args
void* a4517445447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45618))[7];
//not do dummy comment
void* lst = (decode_clo(env45618))[6];
//not do dummy comment
void* kont45282 = (decode_clo(env45618))[5];
//not do dummy comment
void* op = (decode_clo(env45618))[4];
//not do dummy comment
void* cons = (decode_clo(env45618))[3];
//not do dummy comment
void* filter = (decode_clo(env45618))[2];
//not do dummy comment
void* car = (decode_clo(env45618))[1];

//if-clause
bool if_guard45754 = is_true(a4517445447);
if(if_guard45754)
{

//creating new closure instance
void** clo45756 = alloc_clo(lam45613_fptr, 6);

//setting env list
clo45756[1] = cons;
clo45756[2] = filter;
clo45756[3] = op;
clo45756[4] = kont45282;
clo45756[5] = lst;
clo45756[6] = cdr;
void* f4528645448 = encode_clo(clo45756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4528645448;
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
void** clo45758 = alloc_clo(lam45615_fptr, 3);

//setting env list
clo45758[1] = filter;
clo45758[2] = op;
clo45758[3] = kont45282;
void* f4528745454 = encode_clo(clo45758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4528745454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45617 = encode_clo(alloc_clo(lam45617_fptr, 0));

void* lam45619_fptr() // lam45619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45620 = arg_buffer[1];
//reading env and args
void* a4517345445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45620))[7];
//not do dummy comment
void* lst = (decode_clo(env45620))[6];
//not do dummy comment
void* kont45282 = (decode_clo(env45620))[5];
//not do dummy comment
void* op = (decode_clo(env45620))[4];
//not do dummy comment
void* cons = (decode_clo(env45620))[3];
//not do dummy comment
void* filter = (decode_clo(env45620))[2];
//not do dummy comment
void* car = (decode_clo(env45620))[1];

//creating new closure instance
void** clo45760 = alloc_clo(lam45617_fptr, 7);

//setting env list
clo45760[1] = car;
clo45760[2] = filter;
clo45760[3] = cons;
clo45760[4] = op;
clo45760[5] = kont45282;
clo45760[6] = lst;
clo45760[7] = cdr;
void* f4528845446 = encode_clo(clo45760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4528845446;
arg_buffer[3] = a4517345445;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45619 = encode_clo(alloc_clo(lam45619_fptr, 0));

void* lam45621_fptr() // lam45621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45622 = arg_buffer[1];
//reading env and args
void* a4517145441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45622))[8];
//not do dummy comment
void* kont45282 = (decode_clo(env45622))[7];
//not do dummy comment
void* op = (decode_clo(env45622))[6];
//not do dummy comment
void* cons = (decode_clo(env45622))[5];
//not do dummy comment
void* list = (decode_clo(env45622))[4];
//not do dummy comment
void* cdr = (decode_clo(env45622))[3];
//not do dummy comment
void* filter = (decode_clo(env45622))[2];
//not do dummy comment
void* car = (decode_clo(env45622))[1];

//if-clause
bool if_guard45761 = is_true(a4517145441);
if(if_guard45761)
{

//creating new closure instance
void** clo45763 = alloc_clo(lam45607_fptr, 1);

//setting env list
clo45763[1] = kont45282;
void* f4528345442 = encode_clo(clo45763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4528345442;
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
void** clo45765 = alloc_clo(lam45619_fptr, 7);

//setting env list
clo45765[1] = car;
clo45765[2] = filter;
clo45765[3] = cons;
clo45765[4] = op;
clo45765[5] = kont45282;
clo45765[6] = lst;
clo45765[7] = cdr;
void* f4528945444 = encode_clo(clo45765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4528945444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45621 = encode_clo(alloc_clo(lam45621_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45623 = arg_buffer[1];
//reading env and args
void* kont45282 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45767 = alloc_clo(lam45621_fptr, 8);

//setting env list
clo45767[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo45767[2] = filter;
clo45767[3] = cdr;
clo45767[4] = list;
clo45767[5] = cons;
clo45767[6] = op;
clo45767[7] = kont45282;
clo45767[8] = lst;
void* f4529045440 = encode_clo(clo45767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4529045440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam45624_fptr() // lam45624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45625 = arg_buffer[1];
//reading env and args
void* a4518345463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env45625))[3];
//not do dummy comment
void* a4518145460 = (decode_clo(env45625))[2];
//not do dummy comment
void* kont45291 = (decode_clo(env45625))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont45291;
arg_buffer[3] = a4518145460;
arg_buffer[4] = a4518345463;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45624 = encode_clo(alloc_clo(lam45624_fptr, 0));

void* lam45627_fptr() // lam45627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45628 = arg_buffer[1];
//reading env and args
void* a4518145460 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env45628))[4];
//not do dummy comment
void* n = (decode_clo(env45628))[3];
//not do dummy comment
void* kont45291 = (decode_clo(env45628))[2];
//not do dummy comment
void* _u45 = (decode_clo(env45628))[1];
mpz_t* mpzvar45768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45768, "1", 10);
void* a4518245461 = encode_mpz(mpzvar45768);

//creating new closure instance
void** clo45770 = alloc_clo(lam45624_fptr, 3);

//setting env list
clo45770[1] = kont45291;
clo45770[2] = a4518145460;
clo45770[3] = drop;
void* f4529245462 = encode_clo(clo45770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4529245462;
arg_buffer[3] = n;
arg_buffer[4] = a4518245461;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45627 = encode_clo(alloc_clo(lam45627_fptr, 0));

void* lam45629_fptr() // lam45629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45630 = arg_buffer[1];
//reading env and args
void* a4518045458 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45630))[6];
//not do dummy comment
void* n = (decode_clo(env45630))[5];
//not do dummy comment
void* kont45291 = (decode_clo(env45630))[4];
//not do dummy comment
void* _u45 = (decode_clo(env45630))[3];
//not do dummy comment
void* lst = (decode_clo(env45630))[2];
//not do dummy comment
void* drop = (decode_clo(env45630))[1];

//if-clause
bool if_guard45771 = is_true(a4518045458);
if(if_guard45771)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45291);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45291))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45773 = alloc_clo(lam45627_fptr, 4);

//setting env list
clo45773[1] = _u45;
clo45773[2] = kont45291;
clo45773[3] = n;
clo45773[4] = drop;
void* f4529345459 = encode_clo(clo45773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4529345459;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45629 = encode_clo(alloc_clo(lam45629_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45632 = arg_buffer[1];
//reading env and args
void* kont45291 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar45774 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45774, "0", 10);
void* a4517945456 = encode_mpz(mpzvar45774);

//creating new closure instance
void** clo45776 = alloc_clo(lam45629_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo45776[1] = drop;
clo45776[2] = lst;
clo45776[3] = _u45;
clo45776[4] = kont45291;
clo45776[5] = n;
clo45776[6] = cdr;
void* f4529445457 = encode_clo(clo45776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4529445457;
arg_buffer[3] = n;
arg_buffer[4] = a4517945456;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam45633_fptr() // lam45633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45634 = arg_buffer[1];
//reading env and args
void* a4518745471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45295 = (decode_clo(env45634))[3];
//not do dummy comment
void* proc = (decode_clo(env45634))[2];
//not do dummy comment
void* a4518545467 = (decode_clo(env45634))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont45295;
arg_buffer[3] = a4518545467;
arg_buffer[4] = a4518745471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45633 = encode_clo(alloc_clo(lam45633_fptr, 0));

void* lam45635_fptr() // lam45635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45636 = arg_buffer[1];
//reading env and args
void* a4518645469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45295 = (decode_clo(env45636))[5];
//not do dummy comment
void* foldr = (decode_clo(env45636))[4];
//not do dummy comment
void* a4518545467 = (decode_clo(env45636))[3];
//not do dummy comment
void* proc = (decode_clo(env45636))[2];
//not do dummy comment
void* acc = (decode_clo(env45636))[1];

//creating new closure instance
void** clo45778 = alloc_clo(lam45633_fptr, 3);

//setting env list
clo45778[1] = a4518545467;
clo45778[2] = proc;
clo45778[3] = kont45295;
void* f4529645470 = encode_clo(clo45778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4529645470;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4518645469;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45635 = encode_clo(alloc_clo(lam45635_fptr, 0));

void* lam45637_fptr() // lam45637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45638 = arg_buffer[1];
//reading env and args
void* a4518545467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45638))[6];
//not do dummy comment
void* kont45295 = (decode_clo(env45638))[5];
//not do dummy comment
void* foldr = (decode_clo(env45638))[4];
//not do dummy comment
void* lst = (decode_clo(env45638))[3];
//not do dummy comment
void* proc = (decode_clo(env45638))[2];
//not do dummy comment
void* acc = (decode_clo(env45638))[1];

//creating new closure instance
void** clo45780 = alloc_clo(lam45635_fptr, 5);

//setting env list
clo45780[1] = acc;
clo45780[2] = proc;
clo45780[3] = a4518545467;
clo45780[4] = foldr;
clo45780[5] = kont45295;
void* f4529745468 = encode_clo(clo45780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4529745468;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45637 = encode_clo(alloc_clo(lam45637_fptr, 0));

void* lam45639_fptr() // lam45639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45640 = arg_buffer[1];
//reading env and args
void* a4518445465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45640))[7];
//not do dummy comment
void* kont45295 = (decode_clo(env45640))[6];
//not do dummy comment
void* car = (decode_clo(env45640))[5];
//not do dummy comment
void* foldr = (decode_clo(env45640))[4];
//not do dummy comment
void* lst = (decode_clo(env45640))[3];
//not do dummy comment
void* proc = (decode_clo(env45640))[2];
//not do dummy comment
void* acc = (decode_clo(env45640))[1];

//if-clause
bool if_guard45781 = is_true(a4518445465);
if(if_guard45781)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45295);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45295))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45783 = alloc_clo(lam45637_fptr, 6);

//setting env list
clo45783[1] = acc;
clo45783[2] = proc;
clo45783[3] = lst;
clo45783[4] = foldr;
clo45783[5] = kont45295;
clo45783[6] = cdr;
void* f4529845466 = encode_clo(clo45783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4529845466;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45639 = encode_clo(alloc_clo(lam45639_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45641 = arg_buffer[1];
//reading env and args
void* kont45295 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45785 = alloc_clo(lam45639_fptr, 7);

//setting env list
clo45785[1] = acc;
clo45785[2] = proc;
clo45785[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo45785[4] = foldr;
clo45785[5] = car;
clo45785[6] = kont45295;
clo45785[7] = cdr;
void* f4529945464 = encode_clo(clo45785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4529945464;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam45642_fptr() // lam45642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45643 = arg_buffer[1];
//reading env and args
void* a4519145479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4518945475 = (decode_clo(env45643))[3];
//not do dummy comment
void* kont45300 = (decode_clo(env45643))[2];
//not do dummy comment
void* cons = (decode_clo(env45643))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45300;
arg_buffer[3] = a4518945475;
arg_buffer[4] = a4519145479;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45642 = encode_clo(alloc_clo(lam45642_fptr, 0));

void* lam45644_fptr() // lam45644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45645 = arg_buffer[1];
//reading env and args
void* a4519045477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4518945475 = (decode_clo(env45645))[5];
//not do dummy comment
void* kont45300 = (decode_clo(env45645))[4];
//not do dummy comment
void* append = (decode_clo(env45645))[3];
//not do dummy comment
void* lst2 = (decode_clo(env45645))[2];
//not do dummy comment
void* cons = (decode_clo(env45645))[1];

//creating new closure instance
void** clo45787 = alloc_clo(lam45642_fptr, 3);

//setting env list
clo45787[1] = cons;
clo45787[2] = kont45300;
clo45787[3] = a4518945475;
void* f4530145478 = encode_clo(clo45787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4530145478;
arg_buffer[3] = a4519045477;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45644 = encode_clo(alloc_clo(lam45644_fptr, 0));

void* lam45646_fptr() // lam45646 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45647 = arg_buffer[1];
//reading env and args
void* a4518945475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45647))[6];
//not do dummy comment
void* kont45300 = (decode_clo(env45647))[5];
//not do dummy comment
void* append = (decode_clo(env45647))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45647))[3];
//not do dummy comment
void* lst1 = (decode_clo(env45647))[2];
//not do dummy comment
void* cons = (decode_clo(env45647))[1];

//creating new closure instance
void** clo45789 = alloc_clo(lam45644_fptr, 5);

//setting env list
clo45789[1] = cons;
clo45789[2] = lst2;
clo45789[3] = append;
clo45789[4] = kont45300;
clo45789[5] = a4518945475;
void* f4530245476 = encode_clo(clo45789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4530245476;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45646 = encode_clo(alloc_clo(lam45646_fptr, 0));

void* lam45648_fptr() // lam45648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45649 = arg_buffer[1];
//reading env and args
void* a4518845473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45649))[7];
//not do dummy comment
void* kont45300 = (decode_clo(env45649))[6];
//not do dummy comment
void* append = (decode_clo(env45649))[5];
//not do dummy comment
void* lst2 = (decode_clo(env45649))[4];
//not do dummy comment
void* cons = (decode_clo(env45649))[3];
//not do dummy comment
void* lst1 = (decode_clo(env45649))[2];
//not do dummy comment
void* car = (decode_clo(env45649))[1];

//if-clause
bool if_guard45790 = is_true(a4518845473);
if(if_guard45790)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45300);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45300))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45792 = alloc_clo(lam45646_fptr, 6);

//setting env list
clo45792[1] = cons;
clo45792[2] = lst1;
clo45792[3] = lst2;
clo45792[4] = append;
clo45792[5] = kont45300;
clo45792[6] = cdr;
void* f4530345474 = encode_clo(clo45792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4530345474;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45648 = encode_clo(alloc_clo(lam45648_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45650 = arg_buffer[1];
//reading env and args
void* kont45300 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45794 = alloc_clo(lam45648_fptr, 7);

//setting env list
clo45794[1] = car;
clo45794[2] = lst1;
clo45794[3] = cons;
clo45794[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo45794[5] = append;
clo45794[6] = kont45300;
clo45794[7] = cdr;
void* f4530445472 = encode_clo(clo45794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4530445472;
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
void* _45651 = arg_buffer[1];
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

void* kont4530545480 = prim_car(lst);
void* lst45481 = prim_cdr(lst);
void* x4519245482 = apply_prim_hash(lst45481);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4530545480);
arg_buffer[2] = x4519245482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4530545480))[0]);
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
void* _45652 = arg_buffer[1];
//reading env and args
void* kont45307 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4519345483 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45307);
arg_buffer[2] = x4519345483;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45307))[0]);
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
void* _45653 = arg_buffer[1];
//reading env and args
void* kont45308 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4519445484 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45308);
arg_buffer[2] = x4519445484;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45308))[0]);
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
void* _45654 = arg_buffer[1];
//reading env and args
void* kont45309 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4519545485 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45309);
arg_buffer[2] = x4519545485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45309))[0]);
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
void* _45655 = arg_buffer[1];
//reading env and args
void* kont45310 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4519645486 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45310);
arg_buffer[2] = x4519645486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45310))[0]);
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
void* _45656 = arg_buffer[1];
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

void* kont4531145487 = prim_car(lst);
void* lst45488 = prim_cdr(lst);
void* x4519745489 = apply_prim_set(lst45488);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4531145487);
arg_buffer[2] = x4519745489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4531145487))[0]);
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
void* _45657 = arg_buffer[1];
//reading env and args
void* kont45313 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4519845490 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45313);
arg_buffer[2] = x4519845490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45313))[0]);
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
void* _45658 = arg_buffer[1];
//reading env and args
void* kont45314 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4519945491 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45314);
arg_buffer[2] = x4519945491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45314))[0]);
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
void* _45659 = arg_buffer[1];
//reading env and args
void* kont45315 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4520045492 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45315);
arg_buffer[2] = x4520045492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45315))[0]);
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
void* _45660 = arg_buffer[1];
//reading env and args
void* kont45316 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4520145493 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45316);
arg_buffer[2] = x4520145493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45316))[0]);
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
void* _45661 = arg_buffer[1];
//reading env and args
void* kont45317 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4520245494 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45317);
arg_buffer[2] = x4520245494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45317))[0]);
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
void* _45662 = arg_buffer[1];
//reading env and args
void* kont45318 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4520345495 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45318);
arg_buffer[2] = x4520345495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45318))[0]);
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
void* _45663 = arg_buffer[1];
//reading env and args
void* kont45319 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x4520445496 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45319);
arg_buffer[2] = x4520445496;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45319))[0]);
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
void* _45664 = arg_buffer[1];
//reading env and args
void* kont45320 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x4520545497 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45320);
arg_buffer[2] = x4520545497;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45320))[0]);
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
void* _45665 = arg_buffer[1];
//reading env and args
void* kont45321 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x4520645498 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45321);
arg_buffer[2] = x4520645498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45321))[0]);
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
void* _45666 = arg_buffer[1];
//reading env and args
void* kont45322 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4520745499 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45322);
arg_buffer[2] = x4520745499;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45322))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* yes_fptr() // yes 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45669 = arg_buffer[1];
//reading env and args
void* kont45323 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar45795 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45795, "5", 10);
void* x4510845500 = encode_mpz(mpzvar45795);
mpz_t* mpzvar45796 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45796, "6", 10);
void* y4510945501 = encode_mpz(mpzvar45796);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45323);
arg_buffer[2] = x4510845500;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45323))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* yes = encode_clo(alloc_clo(yes_fptr, 0));

void* lam45670_fptr() // lam45670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45671 = arg_buffer[1];
//reading env and args
void* x4520845503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45324 = (decode_clo(env45671))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45324);
arg_buffer[2] = x4520845503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45324))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45670 = encode_clo(alloc_clo(lam45670_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45672 = arg_buffer[1];
//reading env and args
void* kont45324 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo45798 = alloc_clo(lam45670_fptr, 1);

//setting env list
clo45798[1] = kont45324;
void* f4532545502 = encode_clo(clo45798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(yes);
arg_buffer[2] = f4532545502;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(yes))[0]);
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

