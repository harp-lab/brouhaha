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
void* _45515 = arg_buffer[1];
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

void* kont4521145330 = prim_car(lst);
void* lst45331 = prim_cdr(lst);
void* x4510645332 = apply_prim__u43(lst45331);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521145330);
arg_buffer[2] = x4510645332;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521145330))[0]);
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
void* _45516 = arg_buffer[1];
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

void* kont4521345333 = prim_car(lst);
void* lst45334 = prim_cdr(lst);
void* x4510745335 = apply_prim_max(lst45334);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521345333);
arg_buffer[2] = x4510745335;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521345333))[0]);
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
void* _45517 = arg_buffer[1];
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

void* kont4521545336 = prim_car(lst);
void* lst45337 = prim_cdr(lst);
void* x4510845338 = apply_prim__u45(lst45337);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521545336);
arg_buffer[2] = x4510845338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521545336))[0]);
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
void* _45518 = arg_buffer[1];
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

void* kont4521745339 = prim_car(lst);
void* lst45340 = prim_cdr(lst);
void* x4510945341 = apply_prim__u42(lst45340);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4521745339);
arg_buffer[2] = x4510945341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4521745339))[0]);
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
void* _45519 = arg_buffer[1];
//reading env and args
void* kont45219 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4511045342 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45219);
arg_buffer[2] = x4511045342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45219))[0]);
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
void* _45520 = arg_buffer[1];
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

void* kont4522045343 = prim_car(lst);
void* lst45344 = prim_cdr(lst);
void* x4511145345 = apply_prim__u47(lst45344);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522045343);
arg_buffer[2] = x4511145345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522045343))[0]);
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
void* _45521 = arg_buffer[1];
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

void* kont4522245346 = prim_car(lst);
void* lst45347 = prim_cdr(lst);
void* x4511245348 = apply_prim__u61(lst45347);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522245346);
arg_buffer[2] = x4511245348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522245346))[0]);
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
void* _45522 = arg_buffer[1];
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

void* kont4522445349 = prim_car(lst);
void* lst45350 = prim_cdr(lst);
void* x4511345351 = apply_prim__u62(lst45350);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522445349);
arg_buffer[2] = x4511345351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522445349))[0]);
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
void* _45523 = arg_buffer[1];
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

void* kont4522645352 = prim_car(lst);
void* lst45353 = prim_cdr(lst);
void* x4511445354 = apply_prim__u60(lst45353);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522645352);
arg_buffer[2] = x4511445354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522645352))[0]);
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
void* _45524 = arg_buffer[1];
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

void* kont4522845355 = prim_car(lst);
void* lst45356 = prim_cdr(lst);
void* x4511545357 = apply_prim__u60_u61(lst45356);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4522845355);
arg_buffer[2] = x4511545357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4522845355))[0]);
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
void* _45525 = arg_buffer[1];
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

void* kont4523045358 = prim_car(lst);
void* lst45359 = prim_cdr(lst);
void* x4511645360 = apply_prim__u62_u61(lst45359);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4523045358);
arg_buffer[2] = x4511645360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4523045358))[0]);
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
void* _45526 = arg_buffer[1];
//reading env and args
void* kont45232 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4511745361 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45232);
arg_buffer[2] = x4511745361;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45232))[0]);
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
void* _45527 = arg_buffer[1];
//reading env and args
void* kont45233 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4511845362 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45233);
arg_buffer[2] = x4511845362;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45233))[0]);
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
void* _45528 = arg_buffer[1];
//reading env and args
void* kont45234 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4511945363 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45234);
arg_buffer[2] = x4511945363;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45234))[0]);
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
void* _45529 = arg_buffer[1];
//reading env and args
void* kont45235 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4512045364 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45235);
arg_buffer[2] = x4512045364;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45235))[0]);
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
void* _45530 = arg_buffer[1];
//reading env and args
void* kont45236 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4512145365 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45236);
arg_buffer[2] = x4512145365;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45236))[0]);
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
void* _45531 = arg_buffer[1];
//reading env and args
void* kont45237 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4512245366 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45237);
arg_buffer[2] = x4512245366;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45237))[0]);
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
void* _45532 = arg_buffer[1];
//reading env and args
void* kont45238 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4512345367 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45238);
arg_buffer[2] = x4512345367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45238))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam45533_fptr() // lam45533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45534 = arg_buffer[1];
//reading env and args
void* a4512645371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45239 = (decode_clo(env45534))[3];
//not do dummy comment
void* a4512445368 = (decode_clo(env45534))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env45534))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45239;
arg_buffer[3] = a4512445368;
arg_buffer[4] = a4512645371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45533 = encode_clo(alloc_clo(lam45533_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45537 = arg_buffer[1];
//reading env and args
void* kont45239 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45689 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45689, "0", 10);
void* a4512445368 = encode_mpz(mpzvar45689);
mpz_t* mpzvar45690 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45690, "2", 10);
void* a4512545369 = encode_mpz(mpzvar45690);

//creating new closure instance
void** clo45692 = alloc_clo(lam45533_fptr, 3);

//setting env list
clo45692[1] = equal_u63;
clo45692[2] = a4512445368;
clo45692[3] = kont45239;
void* f4524045370 = encode_clo(clo45692);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4524045370;
arg_buffer[3] = x;
arg_buffer[4] = a4512545369;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam45538_fptr() // lam45538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45539 = arg_buffer[1];
//reading env and args
void* a4512945375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45241 = (decode_clo(env45539))[3];
//not do dummy comment
void* a4512745372 = (decode_clo(env45539))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env45539))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45241;
arg_buffer[3] = a4512745372;
arg_buffer[4] = a4512945375;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45538 = encode_clo(alloc_clo(lam45538_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45542 = arg_buffer[1];
//reading env and args
void* kont45241 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar45693 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45693, "1", 10);
void* a4512745372 = encode_mpz(mpzvar45693);
mpz_t* mpzvar45694 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45694, "2", 10);
void* a4512845373 = encode_mpz(mpzvar45694);

//creating new closure instance
void** clo45696 = alloc_clo(lam45538_fptr, 3);

//setting env list
clo45696[1] = equal_u63;
clo45696[2] = a4512745372;
clo45696[3] = kont45241;
void* f4524245374 = encode_clo(clo45696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4524245374;
arg_buffer[3] = x;
arg_buffer[4] = a4512845373;
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
void* _45543 = arg_buffer[1];
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

void* kont4524345376 = prim_car(x);
void* x45377 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4524345376);
arg_buffer[2] = x45377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4524345376))[0]);
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
void* _45544 = arg_buffer[1];
//reading env and args
void* kont45245 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4513045378 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45245);
arg_buffer[2] = x4513045378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45245))[0]);
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
void* _45545 = arg_buffer[1];
//reading env and args
void* kont45246 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x4513145379 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45246);
arg_buffer[2] = x4513145379;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45246))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam45548_fptr() // lam45548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45549 = arg_buffer[1];
//reading env and args
void* a4513745389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45247 = (decode_clo(env45549))[3];
//not do dummy comment
void* x = (decode_clo(env45549))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env45549))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont45247;
arg_buffer[3] = x;
arg_buffer[4] = a4513745389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
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
void* a4513545386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45551))[5];
//not do dummy comment
void* lst = (decode_clo(env45551))[4];
//not do dummy comment
void* kont45247 = (decode_clo(env45551))[3];
//not do dummy comment
void* x = (decode_clo(env45551))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env45551))[1];

//if-clause
bool if_guard45697 = is_true(a4513545386);
if(if_guard45697)
{
void* x4513645387 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45247);
arg_buffer[2] = x4513645387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45247))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45699 = alloc_clo(lam45548_fptr, 3);

//setting env list
clo45699[1] = member_u63;
clo45699[2] = x;
clo45699[3] = kont45247;
void* f4524845388 = encode_clo(clo45699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4524845388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45550 = encode_clo(alloc_clo(lam45550_fptr, 0));

void* lam45552_fptr() // lam45552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45553 = arg_buffer[1];
//reading env and args
void* a4513445384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45553))[6];
//not do dummy comment
void* lst = (decode_clo(env45553))[5];
//not do dummy comment
void* x = (decode_clo(env45553))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env45553))[3];
//not do dummy comment
void* kont45247 = (decode_clo(env45553))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env45553))[1];

//creating new closure instance
void** clo45701 = alloc_clo(lam45550_fptr, 5);

//setting env list
clo45701[1] = member_u63;
clo45701[2] = x;
clo45701[3] = kont45247;
clo45701[4] = lst;
clo45701[5] = cdr;
void* f4524945385 = encode_clo(clo45701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4524945385;
arg_buffer[3] = a4513445384;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45552 = encode_clo(alloc_clo(lam45552_fptr, 0));

void* lam45554_fptr() // lam45554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45555 = arg_buffer[1];
//reading env and args
void* a4513245381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45555))[7];
//not do dummy comment
void* lst = (decode_clo(env45555))[6];
//not do dummy comment
void* x = (decode_clo(env45555))[5];
//not do dummy comment
void* car = (decode_clo(env45555))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env45555))[3];
//not do dummy comment
void* kont45247 = (decode_clo(env45555))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env45555))[1];

//if-clause
bool if_guard45702 = is_true(a4513245381);
if(if_guard45702)
{
void* x4513345382 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45247);
arg_buffer[2] = x4513345382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45247))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45704 = alloc_clo(lam45552_fptr, 6);

//setting env list
clo45704[1] = equal_u63;
clo45704[2] = kont45247;
clo45704[3] = member_u63;
clo45704[4] = x;
clo45704[5] = lst;
clo45704[6] = cdr;
void* f4525045383 = encode_clo(clo45704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4525045383;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45554 = encode_clo(alloc_clo(lam45554_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45556 = arg_buffer[1];
//reading env and args
void* kont45247 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45706 = alloc_clo(lam45554_fptr, 7);

//setting env list
clo45706[1] = equal_u63;
clo45706[2] = kont45247;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo45706[3] = member_u63;
clo45706[4] = car;
clo45706[5] = x;
clo45706[6] = lst;
clo45706[7] = cdr;
void* f4525145380 = encode_clo(clo45706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4525145380;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam45557_fptr() // lam45557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45558 = arg_buffer[1];
//reading env and args
void* a4514145397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env45558))[4];
//not do dummy comment
void* a4514045395 = (decode_clo(env45558))[3];
//not do dummy comment
void* kont45252 = (decode_clo(env45558))[2];
//not do dummy comment
void* foldl = (decode_clo(env45558))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont45252;
arg_buffer[3] = fun;
arg_buffer[4] = a4514045395;
arg_buffer[5] = a4514145397;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a4514045395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45560))[5];
//not do dummy comment
void* lst = (decode_clo(env45560))[4];
//not do dummy comment
void* fun = (decode_clo(env45560))[3];
//not do dummy comment
void* kont45252 = (decode_clo(env45560))[2];
//not do dummy comment
void* foldl = (decode_clo(env45560))[1];

//creating new closure instance
void** clo45708 = alloc_clo(lam45557_fptr, 4);

//setting env list
clo45708[1] = foldl;
clo45708[2] = kont45252;
clo45708[3] = a4514045395;
clo45708[4] = fun;
void* f4525345396 = encode_clo(clo45708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4525345396;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a4513945393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45562))[6];
//not do dummy comment
void* lst = (decode_clo(env45562))[5];
//not do dummy comment
void* fun = (decode_clo(env45562))[4];
//not do dummy comment
void* acc = (decode_clo(env45562))[3];
//not do dummy comment
void* kont45252 = (decode_clo(env45562))[2];
//not do dummy comment
void* foldl = (decode_clo(env45562))[1];

//creating new closure instance
void** clo45710 = alloc_clo(lam45559_fptr, 5);

//setting env list
clo45710[1] = foldl;
clo45710[2] = kont45252;
clo45710[3] = fun;
clo45710[4] = lst;
clo45710[5] = cdr;
void* f4525445394 = encode_clo(clo45710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4525445394;
arg_buffer[3] = a4513945393;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45561 = encode_clo(alloc_clo(lam45561_fptr, 0));

void* lam45563_fptr() // lam45563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45564 = arg_buffer[1];
//reading env and args
void* a4513845391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45564))[7];
//not do dummy comment
void* lst = (decode_clo(env45564))[6];
//not do dummy comment
void* fun = (decode_clo(env45564))[5];
//not do dummy comment
void* acc = (decode_clo(env45564))[4];
//not do dummy comment
void* foldl = (decode_clo(env45564))[3];
//not do dummy comment
void* kont45252 = (decode_clo(env45564))[2];
//not do dummy comment
void* car = (decode_clo(env45564))[1];

//if-clause
bool if_guard45711 = is_true(a4513845391);
if(if_guard45711)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45252);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45252))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45713 = alloc_clo(lam45561_fptr, 6);

//setting env list
clo45713[1] = foldl;
clo45713[2] = kont45252;
clo45713[3] = acc;
clo45713[4] = fun;
clo45713[5] = lst;
clo45713[6] = cdr;
void* f4525545392 = encode_clo(clo45713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4525545392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45563 = encode_clo(alloc_clo(lam45563_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45565 = arg_buffer[1];
//reading env and args
void* kont45252 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45715 = alloc_clo(lam45563_fptr, 7);

//setting env list
clo45715[1] = car;
clo45715[2] = kont45252;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo45715[3] = foldl;
clo45715[4] = acc;
clo45715[5] = fun;
clo45715[6] = lst;
clo45715[7] = cdr;
void* f4525645390 = encode_clo(clo45715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4525645390;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam45566_fptr() // lam45566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45567 = arg_buffer[1];
//reading env and args
void* a4514545405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45567))[3];
//not do dummy comment
void* a4514345401 = (decode_clo(env45567))[2];
//not do dummy comment
void* kont45257 = (decode_clo(env45567))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45257;
arg_buffer[3] = a4514345401;
arg_buffer[4] = a4514545405;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45566 = encode_clo(alloc_clo(lam45566_fptr, 0));

void* lam45568_fptr() // lam45568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45569 = arg_buffer[1];
//reading env and args
void* a4514445403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45569))[5];
//not do dummy comment
void* lst2 = (decode_clo(env45569))[4];
//not do dummy comment
void* cons = (decode_clo(env45569))[3];
//not do dummy comment
void* a4514345401 = (decode_clo(env45569))[2];
//not do dummy comment
void* kont45257 = (decode_clo(env45569))[1];

//creating new closure instance
void** clo45717 = alloc_clo(lam45566_fptr, 3);

//setting env list
clo45717[1] = kont45257;
clo45717[2] = a4514345401;
clo45717[3] = reverse_u45helper;
void* f4525845404 = encode_clo(clo45717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4525845404;
arg_buffer[3] = a4514445403;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45568 = encode_clo(alloc_clo(lam45568_fptr, 0));

void* lam45570_fptr() // lam45570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45571 = arg_buffer[1];
//reading env and args
void* a4514345401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45257 = (decode_clo(env45571))[6];
//not do dummy comment
void* lst = (decode_clo(env45571))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45571))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45571))[3];
//not do dummy comment
void* car = (decode_clo(env45571))[2];
//not do dummy comment
void* cons = (decode_clo(env45571))[1];

//creating new closure instance
void** clo45719 = alloc_clo(lam45568_fptr, 5);

//setting env list
clo45719[1] = kont45257;
clo45719[2] = a4514345401;
clo45719[3] = cons;
clo45719[4] = lst2;
clo45719[5] = reverse_u45helper;
void* f4525945402 = encode_clo(clo45719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4525945402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45570 = encode_clo(alloc_clo(lam45570_fptr, 0));

void* lam45572_fptr() // lam45572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45573 = arg_buffer[1];
//reading env and args
void* a4514245399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45573))[7];
//not do dummy comment
void* kont45257 = (decode_clo(env45573))[6];
//not do dummy comment
void* lst = (decode_clo(env45573))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45573))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45573))[3];
//not do dummy comment
void* car = (decode_clo(env45573))[2];
//not do dummy comment
void* cons = (decode_clo(env45573))[1];

//if-clause
bool if_guard45720 = is_true(a4514245399);
if(if_guard45720)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45257);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45257))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45722 = alloc_clo(lam45570_fptr, 6);

//setting env list
clo45722[1] = cons;
clo45722[2] = car;
clo45722[3] = lst2;
clo45722[4] = reverse_u45helper;
clo45722[5] = lst;
clo45722[6] = kont45257;
void* f4526045400 = encode_clo(clo45722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4526045400;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45572 = encode_clo(alloc_clo(lam45572_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45574 = arg_buffer[1];
//reading env and args
void* kont45257 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45724 = alloc_clo(lam45572_fptr, 7);

//setting env list
clo45724[1] = cons;
clo45724[2] = car;
clo45724[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo45724[4] = reverse_u45helper;
clo45724[5] = lst;
clo45724[6] = kont45257;
clo45724[7] = cdr;
void* f4526145398 = encode_clo(clo45724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4526145398;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam45575_fptr() // lam45575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45576 = arg_buffer[1];
//reading env and args
void* a4514645407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45576))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env45576))[2];
//not do dummy comment
void* kont45262 = (decode_clo(env45576))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45262;
arg_buffer[3] = lst;
arg_buffer[4] = a4514645407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45575 = encode_clo(alloc_clo(lam45575_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45577 = arg_buffer[1];
//reading env and args
void* kont45262 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45726 = alloc_clo(lam45575_fptr, 3);

//setting env list
clo45726[1] = kont45262;
clo45726[2] = reverse_u45helper;
clo45726[3] = lst;
void* f4526345406 = encode_clo(clo45726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4526345406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam45578_fptr() // lam45578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45579 = arg_buffer[1];
//reading env and args
void* x4514945412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45264 = (decode_clo(env45579))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45264);
arg_buffer[2] = x4514945412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45264))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45578 = encode_clo(alloc_clo(lam45578_fptr, 0));

void* lam45580_fptr() // lam45580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45581 = arg_buffer[1];
//reading env and args
void* a4515445421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4515245417 = (decode_clo(env45581))[4];
//not do dummy comment
void* kont45264 = (decode_clo(env45581))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45581))[2];
//not do dummy comment
void* a4515045414 = (decode_clo(env45581))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45264;
arg_buffer[3] = a4515045414;
arg_buffer[4] = a4515245417;
arg_buffer[5] = a4515445421;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45580 = encode_clo(alloc_clo(lam45580_fptr, 0));

void* lam45582_fptr() // lam45582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45583 = arg_buffer[1];
//reading env and args
void* a4515345419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4515245417 = (decode_clo(env45583))[6];
//not do dummy comment
void* kont45264 = (decode_clo(env45583))[5];
//not do dummy comment
void* cons = (decode_clo(env45583))[4];
//not do dummy comment
void* a4515045414 = (decode_clo(env45583))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45583))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45583))[1];

//creating new closure instance
void** clo45728 = alloc_clo(lam45580_fptr, 4);

//setting env list
clo45728[1] = a4515045414;
clo45728[2] = take_u45helper;
clo45728[3] = kont45264;
clo45728[4] = a4515245417;
void* f4526645420 = encode_clo(clo45728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4526645420;
arg_buffer[3] = a4515345419;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45582 = encode_clo(alloc_clo(lam45582_fptr, 0));

void* lam45584_fptr() // lam45584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45585 = arg_buffer[1];
//reading env and args
void* a4515245417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45585))[7];
//not do dummy comment
void* kont45264 = (decode_clo(env45585))[6];
//not do dummy comment
void* car = (decode_clo(env45585))[5];
//not do dummy comment
void* cons = (decode_clo(env45585))[4];
//not do dummy comment
void* a4515045414 = (decode_clo(env45585))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45585))[2];
//not do dummy comment
void* lst2 = (decode_clo(env45585))[1];

//creating new closure instance
void** clo45730 = alloc_clo(lam45582_fptr, 6);

//setting env list
clo45730[1] = lst2;
clo45730[2] = take_u45helper;
clo45730[3] = a4515045414;
clo45730[4] = cons;
clo45730[5] = kont45264;
clo45730[6] = a4515245417;
void* f4526745418 = encode_clo(clo45730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4526745418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45584 = encode_clo(alloc_clo(lam45584_fptr, 0));

void* lam45587_fptr() // lam45587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45588 = arg_buffer[1];
//reading env and args
void* a4515045414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45588))[8];
//not do dummy comment
void* kont45264 = (decode_clo(env45588))[7];
//not do dummy comment
void* cons = (decode_clo(env45588))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45588))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45588))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45588))[3];
//not do dummy comment
void* n = (decode_clo(env45588))[2];
//not do dummy comment
void* car = (decode_clo(env45588))[1];
mpz_t* mpzvar45731 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45731, "1", 10);
void* a4515145415 = encode_mpz(mpzvar45731);

//creating new closure instance
void** clo45733 = alloc_clo(lam45584_fptr, 7);

//setting env list
clo45733[1] = lst2;
clo45733[2] = take_u45helper;
clo45733[3] = a4515045414;
clo45733[4] = cons;
clo45733[5] = car;
clo45733[6] = kont45264;
clo45733[7] = lst;
void* f4526845416 = encode_clo(clo45733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4526845416;
arg_buffer[3] = n;
arg_buffer[4] = a4515145415;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45587 = encode_clo(alloc_clo(lam45587_fptr, 0));

void* lam45589_fptr() // lam45589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45590 = arg_buffer[1];
//reading env and args
void* a4514845410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45590))[10];
//not do dummy comment
void* lst = (decode_clo(env45590))[9];
//not do dummy comment
void* reverse = (decode_clo(env45590))[8];
//not do dummy comment
void* kont45264 = (decode_clo(env45590))[7];
//not do dummy comment
void* cons = (decode_clo(env45590))[6];
//not do dummy comment
void* _u45 = (decode_clo(env45590))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env45590))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45590))[3];
//not do dummy comment
void* n = (decode_clo(env45590))[2];
//not do dummy comment
void* car = (decode_clo(env45590))[1];

//if-clause
bool if_guard45734 = is_true(a4514845410);
if(if_guard45734)
{

//creating new closure instance
void** clo45736 = alloc_clo(lam45578_fptr, 1);

//setting env list
clo45736[1] = kont45264;
void* f4526545411 = encode_clo(clo45736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4526545411;
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
void** clo45738 = alloc_clo(lam45587_fptr, 8);

//setting env list
clo45738[1] = car;
clo45738[2] = n;
clo45738[3] = lst2;
clo45738[4] = take_u45helper;
clo45738[5] = _u45;
clo45738[6] = cons;
clo45738[7] = kont45264;
clo45738[8] = lst;
void* f4526945413 = encode_clo(clo45738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4526945413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45589 = encode_clo(alloc_clo(lam45589_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45592 = arg_buffer[1];
//reading env and args
void* kont45264 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar45739 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45739, "0", 10);
void* a4514745408 = encode_mpz(mpzvar45739);

//creating new closure instance
void** clo45741 = alloc_clo(lam45589_fptr, 10);

//setting env list
clo45741[1] = car;
clo45741[2] = n;
clo45741[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo45741[4] = take_u45helper;
clo45741[5] = _u45;
clo45741[6] = cons;
clo45741[7] = kont45264;
clo45741[8] = reverse;
clo45741[9] = lst;
clo45741[10] = cdr;
void* f4527045409 = encode_clo(clo45741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4527045409;
arg_buffer[3] = n;
arg_buffer[4] = a4514745408;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam45593_fptr() // lam45593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45594 = arg_buffer[1];
//reading env and args
void* a4515545423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45271 = (decode_clo(env45594))[4];
//not do dummy comment
void* lst = (decode_clo(env45594))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env45594))[2];
//not do dummy comment
void* n = (decode_clo(env45594))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45271;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4515545423;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45593 = encode_clo(alloc_clo(lam45593_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45595 = arg_buffer[1];
//reading env and args
void* kont45271 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45743 = alloc_clo(lam45593_fptr, 4);

//setting env list
clo45743[1] = n;
clo45743[2] = take_u45helper;
clo45743[3] = lst;
clo45743[4] = kont45271;
void* f4527245422 = encode_clo(clo45743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4527245422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam45597_fptr() // lam45597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45598 = arg_buffer[1];
//reading env and args
void* a4516045431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45273 = (decode_clo(env45598))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45598))[2];
//not do dummy comment
void* a4515845427 = (decode_clo(env45598))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont45273;
arg_buffer[3] = a4515845427;
arg_buffer[4] = a4516045431;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45597 = encode_clo(alloc_clo(lam45597_fptr, 0));

void* lam45599_fptr() // lam45599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45600 = arg_buffer[1];
//reading env and args
void* a4515945429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45273 = (decode_clo(env45600))[4];
//not do dummy comment
void* length = (decode_clo(env45600))[3];
//not do dummy comment
void* _u43 = (decode_clo(env45600))[2];
//not do dummy comment
void* a4515845427 = (decode_clo(env45600))[1];

//creating new closure instance
void** clo45745 = alloc_clo(lam45597_fptr, 3);

//setting env list
clo45745[1] = a4515845427;
clo45745[2] = _u43;
clo45745[3] = kont45273;
void* f4527445430 = encode_clo(clo45745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4527445430;
arg_buffer[3] = a4515945429;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45599 = encode_clo(alloc_clo(lam45599_fptr, 0));

void* lam45602_fptr() // lam45602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45603 = arg_buffer[1];
//reading env and args
void* a4515645425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45603))[5];
//not do dummy comment
void* kont45273 = (decode_clo(env45603))[4];
//not do dummy comment
void* lst = (decode_clo(env45603))[3];
//not do dummy comment
void* length = (decode_clo(env45603))[2];
//not do dummy comment
void* _u43 = (decode_clo(env45603))[1];

//if-clause
bool if_guard45746 = is_true(a4515645425);
if(if_guard45746)
{
mpz_t* mpzvar45747 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45747, "0", 10);
void* x4515745426 = encode_mpz(mpzvar45747);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45273);
arg_buffer[2] = x4515745426;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45273))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar45748 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45748, "1", 10);
void* a4515845427 = encode_mpz(mpzvar45748);

//creating new closure instance
void** clo45750 = alloc_clo(lam45599_fptr, 4);

//setting env list
clo45750[1] = a4515845427;
clo45750[2] = _u43;
clo45750[3] = length;
clo45750[4] = kont45273;
void* f4527545428 = encode_clo(clo45750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4527545428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45602 = encode_clo(alloc_clo(lam45602_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45604 = arg_buffer[1];
//reading env and args
void* kont45273 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo45752 = alloc_clo(lam45602_fptr, 5);

//setting env list
clo45752[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo45752[2] = length;
clo45752[3] = lst;
clo45752[4] = kont45273;
clo45752[5] = cdr;
void* f4527645424 = encode_clo(clo45752);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4527645424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam45605_fptr() // lam45605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45606 = arg_buffer[1];
//reading env and args
void* x4516245435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45277 = (decode_clo(env45606))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45277);
arg_buffer[2] = x4516245435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45277))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45605 = encode_clo(alloc_clo(lam45605_fptr, 0));

void* lam45607_fptr() // lam45607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45608 = arg_buffer[1];
//reading env and args
void* a4516645443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45277 = (decode_clo(env45608))[3];
//not do dummy comment
void* a4516445439 = (decode_clo(env45608))[2];
//not do dummy comment
void* cons = (decode_clo(env45608))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45277;
arg_buffer[3] = a4516445439;
arg_buffer[4] = a4516645443;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a4516545441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env45610))[5];
//not do dummy comment
void* kont45277 = (decode_clo(env45610))[4];
//not do dummy comment
void* a4516445439 = (decode_clo(env45610))[3];
//not do dummy comment
void* proc = (decode_clo(env45610))[2];
//not do dummy comment
void* cons = (decode_clo(env45610))[1];

//creating new closure instance
void** clo45754 = alloc_clo(lam45607_fptr, 3);

//setting env list
clo45754[1] = cons;
clo45754[2] = a4516445439;
clo45754[3] = kont45277;
void* f4527945442 = encode_clo(clo45754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4527945442;
arg_buffer[3] = proc;
arg_buffer[4] = a4516545441;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a4516445439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45612))[6];
//not do dummy comment
void* lst = (decode_clo(env45612))[5];
//not do dummy comment
void* map = (decode_clo(env45612))[4];
//not do dummy comment
void* kont45277 = (decode_clo(env45612))[3];
//not do dummy comment
void* proc = (decode_clo(env45612))[2];
//not do dummy comment
void* cons = (decode_clo(env45612))[1];

//creating new closure instance
void** clo45756 = alloc_clo(lam45609_fptr, 5);

//setting env list
clo45756[1] = cons;
clo45756[2] = proc;
clo45756[3] = a4516445439;
clo45756[4] = kont45277;
clo45756[5] = map;
void* f4528045440 = encode_clo(clo45756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4528045440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a4516345437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45614))[6];
//not do dummy comment
void* lst = (decode_clo(env45614))[5];
//not do dummy comment
void* map = (decode_clo(env45614))[4];
//not do dummy comment
void* kont45277 = (decode_clo(env45614))[3];
//not do dummy comment
void* proc = (decode_clo(env45614))[2];
//not do dummy comment
void* cons = (decode_clo(env45614))[1];

//creating new closure instance
void** clo45758 = alloc_clo(lam45611_fptr, 6);

//setting env list
clo45758[1] = cons;
clo45758[2] = proc;
clo45758[3] = kont45277;
clo45758[4] = map;
clo45758[5] = lst;
clo45758[6] = cdr;
void* f4528145438 = encode_clo(clo45758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4528145438;
arg_buffer[3] = a4516345437;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a4516145433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45616))[8];
//not do dummy comment
void* map = (decode_clo(env45616))[7];
//not do dummy comment
void* kont45277 = (decode_clo(env45616))[6];
//not do dummy comment
void* proc = (decode_clo(env45616))[5];
//not do dummy comment
void* car = (decode_clo(env45616))[4];
//not do dummy comment
void* cons = (decode_clo(env45616))[3];
//not do dummy comment
void* list = (decode_clo(env45616))[2];
//not do dummy comment
void* cdr = (decode_clo(env45616))[1];

//if-clause
bool if_guard45759 = is_true(a4516145433);
if(if_guard45759)
{

//creating new closure instance
void** clo45761 = alloc_clo(lam45605_fptr, 1);

//setting env list
clo45761[1] = kont45277;
void* f4527845434 = encode_clo(clo45761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4527845434;
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
void** clo45763 = alloc_clo(lam45613_fptr, 6);

//setting env list
clo45763[1] = cons;
clo45763[2] = proc;
clo45763[3] = kont45277;
clo45763[4] = map;
clo45763[5] = lst;
clo45763[6] = cdr;
void* f4528245436 = encode_clo(clo45763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4528245436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45615 = encode_clo(alloc_clo(lam45615_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45617 = arg_buffer[1];
//reading env and args
void* kont45277 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45765 = alloc_clo(lam45615_fptr, 8);

//setting env list
clo45765[1] = cdr;
clo45765[2] = list;
clo45765[3] = cons;
clo45765[4] = car;
clo45765[5] = proc;
clo45765[6] = kont45277;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo45765[7] = map;
clo45765[8] = lst;
void* f4528345432 = encode_clo(clo45765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4528345432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam45618_fptr() // lam45618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45619 = arg_buffer[1];
//reading env and args
void* x4516845447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45284 = (decode_clo(env45619))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45284);
arg_buffer[2] = x4516845447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45284))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45618 = encode_clo(alloc_clo(lam45618_fptr, 0));

void* lam45620_fptr() // lam45620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45621 = arg_buffer[1];
//reading env and args
void* a4517345457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4517145453 = (decode_clo(env45621))[3];
//not do dummy comment
void* kont45284 = (decode_clo(env45621))[2];
//not do dummy comment
void* cons = (decode_clo(env45621))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45284;
arg_buffer[3] = a4517145453;
arg_buffer[4] = a4517345457;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45620 = encode_clo(alloc_clo(lam45620_fptr, 0));

void* lam45622_fptr() // lam45622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45623 = arg_buffer[1];
//reading env and args
void* a4517245455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4517145453 = (decode_clo(env45623))[5];
//not do dummy comment
void* op = (decode_clo(env45623))[4];
//not do dummy comment
void* cons = (decode_clo(env45623))[3];
//not do dummy comment
void* filter = (decode_clo(env45623))[2];
//not do dummy comment
void* kont45284 = (decode_clo(env45623))[1];

//creating new closure instance
void** clo45767 = alloc_clo(lam45620_fptr, 3);

//setting env list
clo45767[1] = cons;
clo45767[2] = kont45284;
clo45767[3] = a4517145453;
void* f4528645456 = encode_clo(clo45767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4528645456;
arg_buffer[3] = op;
arg_buffer[4] = a4517245455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45622 = encode_clo(alloc_clo(lam45622_fptr, 0));

void* lam45624_fptr() // lam45624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45625 = arg_buffer[1];
//reading env and args
void* a4517145453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45625))[6];
//not do dummy comment
void* lst = (decode_clo(env45625))[5];
//not do dummy comment
void* op = (decode_clo(env45625))[4];
//not do dummy comment
void* cons = (decode_clo(env45625))[3];
//not do dummy comment
void* filter = (decode_clo(env45625))[2];
//not do dummy comment
void* kont45284 = (decode_clo(env45625))[1];

//creating new closure instance
void** clo45769 = alloc_clo(lam45622_fptr, 5);

//setting env list
clo45769[1] = kont45284;
clo45769[2] = filter;
clo45769[3] = cons;
clo45769[4] = op;
clo45769[5] = a4517145453;
void* f4528745454 = encode_clo(clo45769);



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

void* lam45624 = encode_clo(alloc_clo(lam45624_fptr, 0));

void* lam45626_fptr() // lam45626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45627 = arg_buffer[1];
//reading env and args
void* a4517445459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env45627))[3];
//not do dummy comment
void* filter = (decode_clo(env45627))[2];
//not do dummy comment
void* kont45284 = (decode_clo(env45627))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont45284;
arg_buffer[3] = op;
arg_buffer[4] = a4517445459;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45626 = encode_clo(alloc_clo(lam45626_fptr, 0));

void* lam45628_fptr() // lam45628 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45629 = arg_buffer[1];
//reading env and args
void* a4517045451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45629))[7];
//not do dummy comment
void* lst = (decode_clo(env45629))[6];
//not do dummy comment
void* op = (decode_clo(env45629))[5];
//not do dummy comment
void* cons = (decode_clo(env45629))[4];
//not do dummy comment
void* filter = (decode_clo(env45629))[3];
//not do dummy comment
void* kont45284 = (decode_clo(env45629))[2];
//not do dummy comment
void* car = (decode_clo(env45629))[1];

//if-clause
bool if_guard45770 = is_true(a4517045451);
if(if_guard45770)
{

//creating new closure instance
void** clo45772 = alloc_clo(lam45624_fptr, 6);

//setting env list
clo45772[1] = kont45284;
clo45772[2] = filter;
clo45772[3] = cons;
clo45772[4] = op;
clo45772[5] = lst;
clo45772[6] = cdr;
void* f4528845452 = encode_clo(clo45772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4528845452;
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
void** clo45774 = alloc_clo(lam45626_fptr, 3);

//setting env list
clo45774[1] = kont45284;
clo45774[2] = filter;
clo45774[3] = op;
void* f4528945458 = encode_clo(clo45774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4528945458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45628 = encode_clo(alloc_clo(lam45628_fptr, 0));

void* lam45630_fptr() // lam45630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45631 = arg_buffer[1];
//reading env and args
void* a4516945449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45631))[7];
//not do dummy comment
void* lst = (decode_clo(env45631))[6];
//not do dummy comment
void* op = (decode_clo(env45631))[5];
//not do dummy comment
void* cons = (decode_clo(env45631))[4];
//not do dummy comment
void* filter = (decode_clo(env45631))[3];
//not do dummy comment
void* kont45284 = (decode_clo(env45631))[2];
//not do dummy comment
void* car = (decode_clo(env45631))[1];

//creating new closure instance
void** clo45776 = alloc_clo(lam45628_fptr, 7);

//setting env list
clo45776[1] = car;
clo45776[2] = kont45284;
clo45776[3] = filter;
clo45776[4] = cons;
clo45776[5] = op;
clo45776[6] = lst;
clo45776[7] = cdr;
void* f4529045450 = encode_clo(clo45776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4529045450;
arg_buffer[3] = a4516945449;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45630 = encode_clo(alloc_clo(lam45630_fptr, 0));

void* lam45632_fptr() // lam45632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45633 = arg_buffer[1];
//reading env and args
void* a4516745445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env45633))[8];
//not do dummy comment
void* op = (decode_clo(env45633))[7];
//not do dummy comment
void* cons = (decode_clo(env45633))[6];
//not do dummy comment
void* list = (decode_clo(env45633))[5];
//not do dummy comment
void* cdr = (decode_clo(env45633))[4];
//not do dummy comment
void* filter = (decode_clo(env45633))[3];
//not do dummy comment
void* kont45284 = (decode_clo(env45633))[2];
//not do dummy comment
void* car = (decode_clo(env45633))[1];

//if-clause
bool if_guard45777 = is_true(a4516745445);
if(if_guard45777)
{

//creating new closure instance
void** clo45779 = alloc_clo(lam45618_fptr, 1);

//setting env list
clo45779[1] = kont45284;
void* f4528545446 = encode_clo(clo45779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4528545446;
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
void** clo45781 = alloc_clo(lam45630_fptr, 7);

//setting env list
clo45781[1] = car;
clo45781[2] = kont45284;
clo45781[3] = filter;
clo45781[4] = cons;
clo45781[5] = op;
clo45781[6] = lst;
clo45781[7] = cdr;
void* f4529145448 = encode_clo(clo45781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4529145448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45632 = encode_clo(alloc_clo(lam45632_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45634 = arg_buffer[1];
//reading env and args
void* kont45284 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45783 = alloc_clo(lam45632_fptr, 8);

//setting env list
clo45783[1] = car;
clo45783[2] = kont45284;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo45783[3] = filter;
clo45783[4] = cdr;
clo45783[5] = list;
clo45783[6] = cons;
clo45783[7] = op;
clo45783[8] = lst;
void* f4529245444 = encode_clo(clo45783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4529245444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam45635_fptr() // lam45635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45636 = arg_buffer[1];
//reading env and args
void* a4517945467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4517745464 = (decode_clo(env45636))[3];
//not do dummy comment
void* drop = (decode_clo(env45636))[2];
//not do dummy comment
void* kont45293 = (decode_clo(env45636))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont45293;
arg_buffer[3] = a4517745464;
arg_buffer[4] = a4517945467;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45635 = encode_clo(alloc_clo(lam45635_fptr, 0));

void* lam45638_fptr() // lam45638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45639 = arg_buffer[1];
//reading env and args
void* a4517745464 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env45639))[4];
//not do dummy comment
void* kont45293 = (decode_clo(env45639))[3];
//not do dummy comment
void* n = (decode_clo(env45639))[2];
//not do dummy comment
void* _u45 = (decode_clo(env45639))[1];
mpz_t* mpzvar45784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45784, "1", 10);
void* a4517845465 = encode_mpz(mpzvar45784);

//creating new closure instance
void** clo45786 = alloc_clo(lam45635_fptr, 3);

//setting env list
clo45786[1] = kont45293;
clo45786[2] = drop;
clo45786[3] = a4517745464;
void* f4529445466 = encode_clo(clo45786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4529445466;
arg_buffer[3] = n;
arg_buffer[4] = a4517845465;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45638 = encode_clo(alloc_clo(lam45638_fptr, 0));

void* lam45640_fptr() // lam45640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45641 = arg_buffer[1];
//reading env and args
void* a4517645462 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45641))[6];
//not do dummy comment
void* kont45293 = (decode_clo(env45641))[5];
//not do dummy comment
void* n = (decode_clo(env45641))[4];
//not do dummy comment
void* _u45 = (decode_clo(env45641))[3];
//not do dummy comment
void* lst = (decode_clo(env45641))[2];
//not do dummy comment
void* drop = (decode_clo(env45641))[1];

//if-clause
bool if_guard45787 = is_true(a4517645462);
if(if_guard45787)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45293);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45293))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45789 = alloc_clo(lam45638_fptr, 4);

//setting env list
clo45789[1] = _u45;
clo45789[2] = n;
clo45789[3] = kont45293;
clo45789[4] = drop;
void* f4529545463 = encode_clo(clo45789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4529545463;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45640 = encode_clo(alloc_clo(lam45640_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45643 = arg_buffer[1];
//reading env and args
void* kont45293 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar45790 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar45790, "0", 10);
void* a4517545460 = encode_mpz(mpzvar45790);

//creating new closure instance
void** clo45792 = alloc_clo(lam45640_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo45792[1] = drop;
clo45792[2] = lst;
clo45792[3] = _u45;
clo45792[4] = n;
clo45792[5] = kont45293;
clo45792[6] = cdr;
void* f4529645461 = encode_clo(clo45792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4529645461;
arg_buffer[3] = n;
arg_buffer[4] = a4517545460;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam45644_fptr() // lam45644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45645 = arg_buffer[1];
//reading env and args
void* a4518345475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4518145471 = (decode_clo(env45645))[3];
//not do dummy comment
void* kont45297 = (decode_clo(env45645))[2];
//not do dummy comment
void* proc = (decode_clo(env45645))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont45297;
arg_buffer[3] = a4518145471;
arg_buffer[4] = a4518345475;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a4518245473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env45647))[5];
//not do dummy comment
void* a4518145471 = (decode_clo(env45647))[4];
//not do dummy comment
void* kont45297 = (decode_clo(env45647))[3];
//not do dummy comment
void* proc = (decode_clo(env45647))[2];
//not do dummy comment
void* acc = (decode_clo(env45647))[1];

//creating new closure instance
void** clo45794 = alloc_clo(lam45644_fptr, 3);

//setting env list
clo45794[1] = proc;
clo45794[2] = kont45297;
clo45794[3] = a4518145471;
void* f4529845474 = encode_clo(clo45794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4529845474;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4518245473;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
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
void* a4518145471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45649))[6];
//not do dummy comment
void* kont45297 = (decode_clo(env45649))[5];
//not do dummy comment
void* foldr = (decode_clo(env45649))[4];
//not do dummy comment
void* lst = (decode_clo(env45649))[3];
//not do dummy comment
void* proc = (decode_clo(env45649))[2];
//not do dummy comment
void* acc = (decode_clo(env45649))[1];

//creating new closure instance
void** clo45796 = alloc_clo(lam45646_fptr, 5);

//setting env list
clo45796[1] = acc;
clo45796[2] = proc;
clo45796[3] = kont45297;
clo45796[4] = a4518145471;
clo45796[5] = foldr;
void* f4529945472 = encode_clo(clo45796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4529945472;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45648 = encode_clo(alloc_clo(lam45648_fptr, 0));

void* lam45650_fptr() // lam45650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45651 = arg_buffer[1];
//reading env and args
void* a4518045469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45651))[7];
//not do dummy comment
void* kont45297 = (decode_clo(env45651))[6];
//not do dummy comment
void* car = (decode_clo(env45651))[5];
//not do dummy comment
void* foldr = (decode_clo(env45651))[4];
//not do dummy comment
void* lst = (decode_clo(env45651))[3];
//not do dummy comment
void* proc = (decode_clo(env45651))[2];
//not do dummy comment
void* acc = (decode_clo(env45651))[1];

//if-clause
bool if_guard45797 = is_true(a4518045469);
if(if_guard45797)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45297);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45297))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45799 = alloc_clo(lam45648_fptr, 6);

//setting env list
clo45799[1] = acc;
clo45799[2] = proc;
clo45799[3] = lst;
clo45799[4] = foldr;
clo45799[5] = kont45297;
clo45799[6] = cdr;
void* f4530045470 = encode_clo(clo45799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4530045470;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45650 = encode_clo(alloc_clo(lam45650_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45652 = arg_buffer[1];
//reading env and args
void* kont45297 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo45801 = alloc_clo(lam45650_fptr, 7);

//setting env list
clo45801[1] = acc;
clo45801[2] = proc;
clo45801[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo45801[4] = foldr;
clo45801[5] = car;
clo45801[6] = kont45297;
clo45801[7] = cdr;
void* f4530145468 = encode_clo(clo45801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4530145468;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam45653_fptr() // lam45653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45654 = arg_buffer[1];
//reading env and args
void* a4518745483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4518545479 = (decode_clo(env45654))[3];
//not do dummy comment
void* cons = (decode_clo(env45654))[2];
//not do dummy comment
void* kont45302 = (decode_clo(env45654))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45302;
arg_buffer[3] = a4518545479;
arg_buffer[4] = a4518745483;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45653 = encode_clo(alloc_clo(lam45653_fptr, 0));

void* lam45655_fptr() // lam45655 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45656 = arg_buffer[1];
//reading env and args
void* a4518645481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4518545479 = (decode_clo(env45656))[5];
//not do dummy comment
void* append = (decode_clo(env45656))[4];
//not do dummy comment
void* lst2 = (decode_clo(env45656))[3];
//not do dummy comment
void* cons = (decode_clo(env45656))[2];
//not do dummy comment
void* kont45302 = (decode_clo(env45656))[1];

//creating new closure instance
void** clo45803 = alloc_clo(lam45653_fptr, 3);

//setting env list
clo45803[1] = kont45302;
clo45803[2] = cons;
clo45803[3] = a4518545479;
void* f4530345482 = encode_clo(clo45803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4530345482;
arg_buffer[3] = a4518645481;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45655 = encode_clo(alloc_clo(lam45655_fptr, 0));

void* lam45657_fptr() // lam45657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45658 = arg_buffer[1];
//reading env and args
void* a4518545479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45658))[6];
//not do dummy comment
void* append = (decode_clo(env45658))[5];
//not do dummy comment
void* lst2 = (decode_clo(env45658))[4];
//not do dummy comment
void* lst1 = (decode_clo(env45658))[3];
//not do dummy comment
void* cons = (decode_clo(env45658))[2];
//not do dummy comment
void* kont45302 = (decode_clo(env45658))[1];

//creating new closure instance
void** clo45805 = alloc_clo(lam45655_fptr, 5);

//setting env list
clo45805[1] = kont45302;
clo45805[2] = cons;
clo45805[3] = lst2;
clo45805[4] = append;
clo45805[5] = a4518545479;
void* f4530445480 = encode_clo(clo45805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4530445480;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45657 = encode_clo(alloc_clo(lam45657_fptr, 0));

void* lam45659_fptr() // lam45659 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45660 = arg_buffer[1];
//reading env and args
void* a4518445477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env45660))[7];
//not do dummy comment
void* append = (decode_clo(env45660))[6];
//not do dummy comment
void* lst2 = (decode_clo(env45660))[5];
//not do dummy comment
void* cons = (decode_clo(env45660))[4];
//not do dummy comment
void* kont45302 = (decode_clo(env45660))[3];
//not do dummy comment
void* lst1 = (decode_clo(env45660))[2];
//not do dummy comment
void* car = (decode_clo(env45660))[1];

//if-clause
bool if_guard45806 = is_true(a4518445477);
if(if_guard45806)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45302);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45302))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo45808 = alloc_clo(lam45657_fptr, 6);

//setting env list
clo45808[1] = kont45302;
clo45808[2] = cons;
clo45808[3] = lst1;
clo45808[4] = lst2;
clo45808[5] = append;
clo45808[6] = cdr;
void* f4530545478 = encode_clo(clo45808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4530545478;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam45659 = encode_clo(alloc_clo(lam45659_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45661 = arg_buffer[1];
//reading env and args
void* kont45302 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo45810 = alloc_clo(lam45659_fptr, 7);

//setting env list
clo45810[1] = car;
clo45810[2] = lst1;
clo45810[3] = kont45302;
clo45810[4] = cons;
clo45810[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo45810[6] = append;
clo45810[7] = cdr;
void* f4530645476 = encode_clo(clo45810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4530645476;
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
void* _45662 = arg_buffer[1];
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

void* kont4530745484 = prim_car(lst);
void* lst45485 = prim_cdr(lst);
void* x4518845486 = apply_prim_hash(lst45485);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4530745484);
arg_buffer[2] = x4518845486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4530745484))[0]);
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
void* _45663 = arg_buffer[1];
//reading env and args
void* kont45309 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4518945487 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45309);
arg_buffer[2] = x4518945487;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45309))[0]);
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
void* _45664 = arg_buffer[1];
//reading env and args
void* kont45310 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4519045488 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45310);
arg_buffer[2] = x4519045488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45310))[0]);
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
void* _45665 = arg_buffer[1];
//reading env and args
void* kont45311 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4519145489 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45311);
arg_buffer[2] = x4519145489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45311))[0]);
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
void* _45666 = arg_buffer[1];
//reading env and args
void* kont45312 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4519245490 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45312);
arg_buffer[2] = x4519245490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45312))[0]);
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
void* _45667 = arg_buffer[1];
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

void* kont4531345491 = prim_car(lst);
void* lst45492 = prim_cdr(lst);
void* x4519345493 = apply_prim_set(lst45492);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4531345491);
arg_buffer[2] = x4519345493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4531345491))[0]);
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
void* _45668 = arg_buffer[1];
//reading env and args
void* kont45315 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4519445494 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45315);
arg_buffer[2] = x4519445494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45315))[0]);
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
void* _45669 = arg_buffer[1];
//reading env and args
void* kont45316 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4519545495 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45316);
arg_buffer[2] = x4519545495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45316))[0]);
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
void* _45670 = arg_buffer[1];
//reading env and args
void* kont45317 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4519645496 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45317);
arg_buffer[2] = x4519645496;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45317))[0]);
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
void* _45671 = arg_buffer[1];
//reading env and args
void* kont45318 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x4519745497 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45318);
arg_buffer[2] = x4519745497;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45318))[0]);
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
void* _45672 = arg_buffer[1];
//reading env and args
void* kont45319 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4519845498 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45319);
arg_buffer[2] = x4519845498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45319))[0]);
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
void* _45673 = arg_buffer[1];
//reading env and args
void* kont45320 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4519945499 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45320);
arg_buffer[2] = x4519945499;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45320))[0]);
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
void* _45674 = arg_buffer[1];
//reading env and args
void* kont45321 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x4520045500 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45321);
arg_buffer[2] = x4520045500;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45321))[0]);
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
void* _45675 = arg_buffer[1];
//reading env and args
void* kont45322 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x4520145501 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45322);
arg_buffer[2] = x4520145501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45322))[0]);
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
void* _45676 = arg_buffer[1];
//reading env and args
void* kont45323 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x4520245502 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45323);
arg_buffer[2] = x4520245502;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45323))[0]);
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
void* _45677 = arg_buffer[1];
//reading env and args
void* kont45324 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x4520345503 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45324);
arg_buffer[2] = x4520345503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45324))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam45683_fptr() // lam45683 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env45684 = arg_buffer[1];
void* x451054532745505;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
x451054532745505 = arg_buffer[2];
}
else
{
//building cons cell
x451054532745505 = encode_null();
for(int i = numArgs; i >= 2; i--)
{
x451054532745505 = prim_cons(arg_buffer[i], x451054532745505);

}

}

void* cont4532645506 = prim_car(x451054532745505);
void* x4510545507 = prim_cdr(x451054532745505);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cont4532645506);
arg_buffer[2] = x4510545507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont4532645506))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam45683 = encode_clo(alloc_clo(lam45683_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _45685 = arg_buffer[1];
//reading env and args
void* kont45325 = arg_buffer[2];
//Dummy comment
