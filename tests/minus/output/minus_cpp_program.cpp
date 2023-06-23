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
void* _80623 = arg_buffer[1];
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

void* kont8036280462 = prim_car(lst);
void* lst80463 = prim_cdr(lst);
void* x8027480464 = apply_prim__u43(lst80463);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8036280462);
arg_buffer[2] = x8027480464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8036280462))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80624 = arg_buffer[1];
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

void* kont8036480465 = prim_car(lst);
void* lst80466 = prim_cdr(lst);
void* x8027580467 = apply_prim__u45(lst80466);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8036480465);
arg_buffer[2] = x8027580467;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8036480465))[0]);
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
void* _80625 = arg_buffer[1];
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

void* kont8036680468 = prim_car(lst);
void* lst80469 = prim_cdr(lst);
void* x8027680470 = apply_prim__u42(lst80469);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8036680468);
arg_buffer[2] = x8027680470;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8036680468))[0]);
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
void* _80626 = arg_buffer[1];
//reading env and args
void* kont80368 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8027780471 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80368);
arg_buffer[2] = x8027780471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80368))[0]);
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
void* _80627 = arg_buffer[1];
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

void* kont8036980472 = prim_car(lst);
void* lst80473 = prim_cdr(lst);
void* x8027880474 = apply_prim__u47(lst80473);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8036980472);
arg_buffer[2] = x8027880474;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8036980472))[0]);
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
void* _80628 = arg_buffer[1];
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

void* kont8037180475 = prim_car(lst);
void* lst80476 = prim_cdr(lst);
void* x8027980477 = apply_prim__u61(lst80476);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8037180475);
arg_buffer[2] = x8027980477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8037180475))[0]);
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
void* _80629 = arg_buffer[1];
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

void* kont8037380478 = prim_car(lst);
void* lst80479 = prim_cdr(lst);
void* x8028080480 = apply_prim__u62(lst80479);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8037380478);
arg_buffer[2] = x8028080480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8037380478))[0]);
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
void* _80630 = arg_buffer[1];
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

void* kont8037580481 = prim_car(lst);
void* lst80482 = prim_cdr(lst);
void* x8028180483 = apply_prim__u60(lst80482);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8037580481);
arg_buffer[2] = x8028180483;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8037580481))[0]);
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
void* _80631 = arg_buffer[1];
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

void* kont8037780484 = prim_car(lst);
void* lst80485 = prim_cdr(lst);
void* x8028280486 = apply_prim__u60_u61(lst80485);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8037780484);
arg_buffer[2] = x8028280486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8037780484))[0]);
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
void* _80632 = arg_buffer[1];
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

void* kont8037980487 = prim_car(lst);
void* lst80488 = prim_cdr(lst);
void* x8028380489 = apply_prim__u62_u61(lst80488);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8037980487);
arg_buffer[2] = x8028380489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8037980487))[0]);
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
void* _80633 = arg_buffer[1];
//reading env and args
void* kont80381 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8028480490 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80381);
arg_buffer[2] = x8028480490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80381))[0]);
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
void* _80634 = arg_buffer[1];
//reading env and args
void* kont80382 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8028580491 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80382);
arg_buffer[2] = x8028580491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80382))[0]);
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
void* _80635 = arg_buffer[1];
//reading env and args
void* kont80383 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8028680492 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80383);
arg_buffer[2] = x8028680492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80383))[0]);
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
void* _80636 = arg_buffer[1];
//reading env and args
void* kont80384 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8028780493 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80384);
arg_buffer[2] = x8028780493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80384))[0]);
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
void* _80637 = arg_buffer[1];
//reading env and args
void* kont80385 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8028880494 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80385);
arg_buffer[2] = x8028880494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80385))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80638 = arg_buffer[1];
//reading env and args
void* kont80386 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8028980495 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80386);
arg_buffer[2] = x8028980495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80386))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam80639_fptr() // lam80639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80640 = arg_buffer[1];
//reading env and args
void* a8029280499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env80640))[3];
//not do dummy comment
void* a8029080496 = (decode_clo(env80640))[2];
//not do dummy comment
void* kont80387 = (decode_clo(env80640))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont80387;
arg_buffer[3] = a8029080496;
arg_buffer[4] = a8029280499;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80639 = encode_clo(alloc_clo(lam80639_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80643 = arg_buffer[1];
//reading env and args
void* kont80387 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar81283 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81283, "0", 10);
void* a8029080496 = encode_mpz(mpzvar81283);
mpz_t* mpzvar81284 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81284, "2", 10);
void* a8029180497 = encode_mpz(mpzvar81284);

//creating new closure instance
void** clo81286 = alloc_clo(lam80639_fptr, 3);

//setting env list
clo81286[1] = kont80387;
clo81286[2] = a8029080496;
clo81286[3] = equal_u63;
void* f8038880498 = encode_clo(clo81286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8038880498;
arg_buffer[3] = x;
arg_buffer[4] = a8029180497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam80644_fptr() // lam80644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80645 = arg_buffer[1];
//reading env and args
void* a8029580503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8029380500 = (decode_clo(env80645))[3];
//not do dummy comment
void* kont80389 = (decode_clo(env80645))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env80645))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont80389;
arg_buffer[3] = a8029380500;
arg_buffer[4] = a8029580503;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80644 = encode_clo(alloc_clo(lam80644_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80648 = arg_buffer[1];
//reading env and args
void* kont80389 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar81287 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81287, "1", 10);
void* a8029380500 = encode_mpz(mpzvar81287);
mpz_t* mpzvar81288 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81288, "2", 10);
void* a8029480501 = encode_mpz(mpzvar81288);

//creating new closure instance
void** clo81290 = alloc_clo(lam80644_fptr, 3);

//setting env list
clo81290[1] = equal_u63;
clo81290[2] = kont80389;
clo81290[3] = a8029380500;
void* f8039080502 = encode_clo(clo81290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8039080502;
arg_buffer[3] = x;
arg_buffer[4] = a8029480501;
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
void* _80649 = arg_buffer[1];
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

void* kont8039180504 = prim_car(x);
void* x80505 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8039180504);
arg_buffer[2] = x80505;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8039180504))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam80652_fptr() // lam80652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80653 = arg_buffer[1];
//reading env and args
void* a8030180515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80393 = (decode_clo(env80653))[3];
//not do dummy comment
void* x = (decode_clo(env80653))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env80653))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont80393;
arg_buffer[3] = x;
arg_buffer[4] = a8030180515;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80652 = encode_clo(alloc_clo(lam80652_fptr, 0));

void* lam80654_fptr() // lam80654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80655 = arg_buffer[1];
//reading env and args
void* a8029980512 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80655))[5];
//not do dummy comment
void* lst = (decode_clo(env80655))[4];
//not do dummy comment
void* kont80393 = (decode_clo(env80655))[3];
//not do dummy comment
void* x = (decode_clo(env80655))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env80655))[1];

//if-clause
bool if_guard81291 = is_true(a8029980512);
if(if_guard81291)
{
void* x8030080513 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80393);
arg_buffer[2] = x8030080513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80393))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo81293 = alloc_clo(lam80652_fptr, 3);

//setting env list
clo81293[1] = member_u63;
clo81293[2] = x;
clo81293[3] = kont80393;
void* f8039480514 = encode_clo(clo81293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8039480514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80654 = encode_clo(alloc_clo(lam80654_fptr, 0));

void* lam80656_fptr() // lam80656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80657 = arg_buffer[1];
//reading env and args
void* a8029880510 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80657))[6];
//not do dummy comment
void* lst = (decode_clo(env80657))[5];
//not do dummy comment
void* kont80393 = (decode_clo(env80657))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env80657))[3];
//not do dummy comment
void* x = (decode_clo(env80657))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env80657))[1];

//creating new closure instance
void** clo81295 = alloc_clo(lam80654_fptr, 5);

//setting env list
clo81295[1] = member_u63;
clo81295[2] = x;
clo81295[3] = kont80393;
clo81295[4] = lst;
clo81295[5] = cdr;
void* f8039580511 = encode_clo(clo81295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8039580511;
arg_buffer[3] = a8029880510;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80656 = encode_clo(alloc_clo(lam80656_fptr, 0));

void* lam80658_fptr() // lam80658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80659 = arg_buffer[1];
//reading env and args
void* a8029680507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80659))[7];
//not do dummy comment
void* lst = (decode_clo(env80659))[6];
//not do dummy comment
void* kont80393 = (decode_clo(env80659))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env80659))[4];
//not do dummy comment
void* x = (decode_clo(env80659))[3];
//not do dummy comment
void* car = (decode_clo(env80659))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env80659))[1];

//if-clause
bool if_guard81296 = is_true(a8029680507);
if(if_guard81296)
{
void* x8029780508 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80393);
arg_buffer[2] = x8029780508;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80393))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo81298 = alloc_clo(lam80656_fptr, 6);

//setting env list
clo81298[1] = member_u63;
clo81298[2] = x;
clo81298[3] = equal_u63;
clo81298[4] = kont80393;
clo81298[5] = lst;
clo81298[6] = cdr;
void* f8039680509 = encode_clo(clo81298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8039680509;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80658 = encode_clo(alloc_clo(lam80658_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80660 = arg_buffer[1];
//reading env and args
void* kont80393 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo81300 = alloc_clo(lam80658_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo81300[1] = member_u63;
clo81300[2] = car;
clo81300[3] = x;
clo81300[4] = equal_u63;
clo81300[5] = kont80393;
clo81300[6] = lst;
clo81300[7] = cdr;
void* f8039780506 = encode_clo(clo81300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8039780506;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam80661_fptr() // lam80661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80662 = arg_buffer[1];
//reading env and args
void* a8030580523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8030480521 = (decode_clo(env80662))[4];
//not do dummy comment
void* foldl = (decode_clo(env80662))[3];
//not do dummy comment
void* kont80398 = (decode_clo(env80662))[2];
//not do dummy comment
void* fun = (decode_clo(env80662))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont80398;
arg_buffer[3] = fun;
arg_buffer[4] = a8030480521;
arg_buffer[5] = a8030580523;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80661 = encode_clo(alloc_clo(lam80661_fptr, 0));

void* lam80663_fptr() // lam80663 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80664 = arg_buffer[1];
//reading env and args
void* a8030480521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80664))[5];
//not do dummy comment
void* lst = (decode_clo(env80664))[4];
//not do dummy comment
void* foldl = (decode_clo(env80664))[3];
//not do dummy comment
void* kont80398 = (decode_clo(env80664))[2];
//not do dummy comment
void* fun = (decode_clo(env80664))[1];

//creating new closure instance
void** clo81302 = alloc_clo(lam80661_fptr, 4);

//setting env list
clo81302[1] = fun;
clo81302[2] = kont80398;
clo81302[3] = foldl;
clo81302[4] = a8030480521;
void* f8039980522 = encode_clo(clo81302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8039980522;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80663 = encode_clo(alloc_clo(lam80663_fptr, 0));

void* lam80665_fptr() // lam80665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80666 = arg_buffer[1];
//reading env and args
void* a8030380519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80666))[6];
//not do dummy comment
void* lst = (decode_clo(env80666))[5];
//not do dummy comment
void* acc = (decode_clo(env80666))[4];
//not do dummy comment
void* foldl = (decode_clo(env80666))[3];
//not do dummy comment
void* kont80398 = (decode_clo(env80666))[2];
//not do dummy comment
void* fun = (decode_clo(env80666))[1];

//creating new closure instance
void** clo81304 = alloc_clo(lam80663_fptr, 5);

//setting env list
clo81304[1] = fun;
clo81304[2] = kont80398;
clo81304[3] = foldl;
clo81304[4] = lst;
clo81304[5] = cdr;
void* f8040080520 = encode_clo(clo81304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8040080520;
arg_buffer[3] = a8030380519;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80665 = encode_clo(alloc_clo(lam80665_fptr, 0));

void* lam80667_fptr() // lam80667 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80668 = arg_buffer[1];
//reading env and args
void* a8030280517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80668))[7];
//not do dummy comment
void* lst = (decode_clo(env80668))[6];
//not do dummy comment
void* acc = (decode_clo(env80668))[5];
//not do dummy comment
void* car = (decode_clo(env80668))[4];
//not do dummy comment
void* foldl = (decode_clo(env80668))[3];
//not do dummy comment
void* kont80398 = (decode_clo(env80668))[2];
//not do dummy comment
void* fun = (decode_clo(env80668))[1];

//if-clause
bool if_guard81305 = is_true(a8030280517);
if(if_guard81305)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80398);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80398))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo81307 = alloc_clo(lam80665_fptr, 6);

//setting env list
clo81307[1] = fun;
clo81307[2] = kont80398;
clo81307[3] = foldl;
clo81307[4] = acc;
clo81307[5] = lst;
clo81307[6] = cdr;
void* f8040180518 = encode_clo(clo81307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8040180518;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80667 = encode_clo(alloc_clo(lam80667_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80669 = arg_buffer[1];
//reading env and args
void* kont80398 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo81309 = alloc_clo(lam80667_fptr, 7);

//setting env list
clo81309[1] = fun;
clo81309[2] = kont80398;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo81309[3] = foldl;
clo81309[4] = car;
clo81309[5] = acc;
clo81309[6] = lst;
clo81309[7] = cdr;
void* f8040280516 = encode_clo(clo81309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8040280516;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam80670_fptr() // lam80670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80671 = arg_buffer[1];
//reading env and args
void* a8030980531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env80671))[3];
//not do dummy comment
void* a8030780527 = (decode_clo(env80671))[2];
//not do dummy comment
void* kont80403 = (decode_clo(env80671))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont80403;
arg_buffer[3] = a8030780527;
arg_buffer[4] = a8030980531;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80670 = encode_clo(alloc_clo(lam80670_fptr, 0));

void* lam80672_fptr() // lam80672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80673 = arg_buffer[1];
//reading env and args
void* a8030880529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env80673))[5];
//not do dummy comment
void* a8030780527 = (decode_clo(env80673))[4];
//not do dummy comment
void* lst2 = (decode_clo(env80673))[3];
//not do dummy comment
void* cons = (decode_clo(env80673))[2];
//not do dummy comment
void* kont80403 = (decode_clo(env80673))[1];

//creating new closure instance
void** clo81311 = alloc_clo(lam80670_fptr, 3);

//setting env list
clo81311[1] = kont80403;
clo81311[2] = a8030780527;
clo81311[3] = reverse_u45helper;
void* f8040480530 = encode_clo(clo81311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8040480530;
arg_buffer[3] = a8030880529;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80672 = encode_clo(alloc_clo(lam80672_fptr, 0));

void* lam80674_fptr() // lam80674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80675 = arg_buffer[1];
//reading env and args
void* a8030780527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env80675))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env80675))[5];
//not do dummy comment
void* lst2 = (decode_clo(env80675))[4];
//not do dummy comment
void* car = (decode_clo(env80675))[3];
//not do dummy comment
void* cons = (decode_clo(env80675))[2];
//not do dummy comment
void* kont80403 = (decode_clo(env80675))[1];

//creating new closure instance
void** clo81313 = alloc_clo(lam80672_fptr, 5);

//setting env list
clo81313[1] = kont80403;
clo81313[2] = cons;
clo81313[3] = lst2;
clo81313[4] = a8030780527;
clo81313[5] = reverse_u45helper;
void* f8040580528 = encode_clo(clo81313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8040580528;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80674 = encode_clo(alloc_clo(lam80674_fptr, 0));

void* lam80676_fptr() // lam80676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80677 = arg_buffer[1];
//reading env and args
void* a8030680525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80677))[7];
//not do dummy comment
void* lst = (decode_clo(env80677))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env80677))[5];
//not do dummy comment
void* lst2 = (decode_clo(env80677))[4];
//not do dummy comment
void* car = (decode_clo(env80677))[3];
//not do dummy comment
void* cons = (decode_clo(env80677))[2];
//not do dummy comment
void* kont80403 = (decode_clo(env80677))[1];

//if-clause
bool if_guard81314 = is_true(a8030680525);
if(if_guard81314)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80403);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80403))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo81316 = alloc_clo(lam80674_fptr, 6);

//setting env list
clo81316[1] = kont80403;
clo81316[2] = cons;
clo81316[3] = car;
clo81316[4] = lst2;
clo81316[5] = reverse_u45helper;
clo81316[6] = lst;
void* f8040680526 = encode_clo(clo81316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8040680526;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80676 = encode_clo(alloc_clo(lam80676_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80678 = arg_buffer[1];
//reading env and args
void* kont80403 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo81318 = alloc_clo(lam80676_fptr, 7);

//setting env list
clo81318[1] = kont80403;
clo81318[2] = cons;
clo81318[3] = car;
clo81318[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo81318[5] = reverse_u45helper;
clo81318[6] = lst;
clo81318[7] = cdr;
void* f8040780524 = encode_clo(clo81318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8040780524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam80679_fptr() // lam80679 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80680 = arg_buffer[1];
//reading env and args
void* a8031080533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env80680))[3];
//not do dummy comment
void* lst = (decode_clo(env80680))[2];
//not do dummy comment
void* kont80408 = (decode_clo(env80680))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont80408;
arg_buffer[3] = lst;
arg_buffer[4] = a8031080533;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80679 = encode_clo(alloc_clo(lam80679_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80681 = arg_buffer[1];
//reading env and args
void* kont80408 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo81320 = alloc_clo(lam80679_fptr, 3);

//setting env list
clo81320[1] = kont80408;
clo81320[2] = lst;
clo81320[3] = reverse_u45helper;
void* f8040980532 = encode_clo(clo81320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8040980532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam80682_fptr() // lam80682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80683 = arg_buffer[1];
//reading env and args
void* x8031380538 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80410 = (decode_clo(env80683))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80410);
arg_buffer[2] = x8031380538;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80410))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80682 = encode_clo(alloc_clo(lam80682_fptr, 0));

void* lam80684_fptr() // lam80684 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80685 = arg_buffer[1];
//reading env and args
void* a8031880547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80410 = (decode_clo(env80685))[4];
//not do dummy comment
void* a8031480540 = (decode_clo(env80685))[3];
//not do dummy comment
void* a8031680543 = (decode_clo(env80685))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env80685))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont80410;
arg_buffer[3] = a8031480540;
arg_buffer[4] = a8031680543;
arg_buffer[5] = a8031880547;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80684 = encode_clo(alloc_clo(lam80684_fptr, 0));

void* lam80686_fptr() // lam80686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80687 = arg_buffer[1];
//reading env and args
void* a8031780545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80410 = (decode_clo(env80687))[6];
//not do dummy comment
void* a8031480540 = (decode_clo(env80687))[5];
//not do dummy comment
void* a8031680543 = (decode_clo(env80687))[4];
//not do dummy comment
void* cons = (decode_clo(env80687))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env80687))[2];
//not do dummy comment
void* lst2 = (decode_clo(env80687))[1];

//creating new closure instance
void** clo81322 = alloc_clo(lam80684_fptr, 4);

//setting env list
clo81322[1] = take_u45helper;
clo81322[2] = a8031680543;
clo81322[3] = a8031480540;
clo81322[4] = kont80410;
void* f8041280546 = encode_clo(clo81322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8041280546;
arg_buffer[3] = a8031780545;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80686 = encode_clo(alloc_clo(lam80686_fptr, 0));

void* lam80688_fptr() // lam80688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80689 = arg_buffer[1];
//reading env and args
void* a8031680543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env80689))[7];
//not do dummy comment
void* kont80410 = (decode_clo(env80689))[6];
//not do dummy comment
void* a8031480540 = (decode_clo(env80689))[5];
//not do dummy comment
void* car = (decode_clo(env80689))[4];
//not do dummy comment
void* cons = (decode_clo(env80689))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env80689))[2];
//not do dummy comment
void* lst2 = (decode_clo(env80689))[1];

//creating new closure instance
void** clo81324 = alloc_clo(lam80686_fptr, 6);

//setting env list
clo81324[1] = lst2;
clo81324[2] = take_u45helper;
clo81324[3] = cons;
clo81324[4] = a8031680543;
clo81324[5] = a8031480540;
clo81324[6] = kont80410;
void* f8041380544 = encode_clo(clo81324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8041380544;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80688 = encode_clo(alloc_clo(lam80688_fptr, 0));

void* lam80691_fptr() // lam80691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80692 = arg_buffer[1];
//reading env and args
void* a8031480540 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env80692))[8];
//not do dummy comment
void* kont80410 = (decode_clo(env80692))[7];
//not do dummy comment
void* cons = (decode_clo(env80692))[6];
//not do dummy comment
void* _u45 = (decode_clo(env80692))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env80692))[4];
//not do dummy comment
void* lst2 = (decode_clo(env80692))[3];
//not do dummy comment
void* n = (decode_clo(env80692))[2];
//not do dummy comment
void* car = (decode_clo(env80692))[1];
mpz_t* mpzvar81325 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81325, "1", 10);
void* a8031580541 = encode_mpz(mpzvar81325);

//creating new closure instance
void** clo81327 = alloc_clo(lam80688_fptr, 7);

//setting env list
clo81327[1] = lst2;
clo81327[2] = take_u45helper;
clo81327[3] = cons;
clo81327[4] = car;
clo81327[5] = a8031480540;
clo81327[6] = kont80410;
clo81327[7] = lst;
void* f8041480542 = encode_clo(clo81327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8041480542;
arg_buffer[3] = n;
arg_buffer[4] = a8031580541;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80691 = encode_clo(alloc_clo(lam80691_fptr, 0));

void* lam80693_fptr() // lam80693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80694 = arg_buffer[1];
//reading env and args
void* a8031280536 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80694))[10];
//not do dummy comment
void* lst = (decode_clo(env80694))[9];
//not do dummy comment
void* kont80410 = (decode_clo(env80694))[8];
//not do dummy comment
void* reverse = (decode_clo(env80694))[7];
//not do dummy comment
void* cons = (decode_clo(env80694))[6];
//not do dummy comment
void* _u45 = (decode_clo(env80694))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env80694))[4];
//not do dummy comment
void* lst2 = (decode_clo(env80694))[3];
//not do dummy comment
void* n = (decode_clo(env80694))[2];
//not do dummy comment
void* car = (decode_clo(env80694))[1];

//if-clause
bool if_guard81328 = is_true(a8031280536);
if(if_guard81328)
{

//creating new closure instance
void** clo81330 = alloc_clo(lam80682_fptr, 1);

//setting env list
clo81330[1] = kont80410;
void* f8041180537 = encode_clo(clo81330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8041180537;
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
void** clo81332 = alloc_clo(lam80691_fptr, 8);

//setting env list
clo81332[1] = car;
clo81332[2] = n;
clo81332[3] = lst2;
clo81332[4] = take_u45helper;
clo81332[5] = _u45;
clo81332[6] = cons;
clo81332[7] = kont80410;
clo81332[8] = lst;
void* f8041580539 = encode_clo(clo81332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8041580539;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80693 = encode_clo(alloc_clo(lam80693_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80696 = arg_buffer[1];
//reading env and args
void* kont80410 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar81333 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81333, "0", 10);
void* a8031180534 = encode_mpz(mpzvar81333);

//creating new closure instance
void** clo81335 = alloc_clo(lam80693_fptr, 10);

//setting env list
clo81335[1] = car;
clo81335[2] = n;
clo81335[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo81335[4] = take_u45helper;
clo81335[5] = _u45;
clo81335[6] = cons;
clo81335[7] = reverse;
clo81335[8] = kont80410;
clo81335[9] = lst;
clo81335[10] = cdr;
void* f8041680535 = encode_clo(clo81335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8041680535;
arg_buffer[3] = n;
arg_buffer[4] = a8031180534;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam80697_fptr() // lam80697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80698 = arg_buffer[1];
//reading env and args
void* a8031980549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env80698))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env80698))[3];
//not do dummy comment
void* n = (decode_clo(env80698))[2];
//not do dummy comment
void* kont80417 = (decode_clo(env80698))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont80417;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8031980549;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80697 = encode_clo(alloc_clo(lam80697_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80699 = arg_buffer[1];
//reading env and args
void* kont80417 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo81337 = alloc_clo(lam80697_fptr, 4);

//setting env list
clo81337[1] = kont80417;
clo81337[2] = n;
clo81337[3] = take_u45helper;
clo81337[4] = lst;
void* f8041880548 = encode_clo(clo81337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8041880548;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam80701_fptr() // lam80701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80702 = arg_buffer[1];
//reading env and args
void* a8032480557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8032280553 = (decode_clo(env80702))[3];
//not do dummy comment
void* _u43 = (decode_clo(env80702))[2];
//not do dummy comment
void* kont80419 = (decode_clo(env80702))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont80419;
arg_buffer[3] = a8032280553;
arg_buffer[4] = a8032480557;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80701 = encode_clo(alloc_clo(lam80701_fptr, 0));

void* lam80703_fptr() // lam80703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80704 = arg_buffer[1];
//reading env and args
void* a8032380555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env80704))[4];
//not do dummy comment
void* kont80419 = (decode_clo(env80704))[3];
//not do dummy comment
void* a8032280553 = (decode_clo(env80704))[2];
//not do dummy comment
void* length = (decode_clo(env80704))[1];

//creating new closure instance
void** clo81339 = alloc_clo(lam80701_fptr, 3);

//setting env list
clo81339[1] = kont80419;
clo81339[2] = _u43;
clo81339[3] = a8032280553;
void* f8042080556 = encode_clo(clo81339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8042080556;
arg_buffer[3] = a8032380555;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80703 = encode_clo(alloc_clo(lam80703_fptr, 0));

void* lam80706_fptr() // lam80706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80707 = arg_buffer[1];
//reading env and args
void* a8032080551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80707))[5];
//not do dummy comment
void* lst = (decode_clo(env80707))[4];
//not do dummy comment
void* length = (decode_clo(env80707))[3];
//not do dummy comment
void* _u43 = (decode_clo(env80707))[2];
//not do dummy comment
void* kont80419 = (decode_clo(env80707))[1];

//if-clause
bool if_guard81340 = is_true(a8032080551);
if(if_guard81340)
{
mpz_t* mpzvar81341 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81341, "0", 10);
void* x8032180552 = encode_mpz(mpzvar81341);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80419);
arg_buffer[2] = x8032180552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80419))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar81342 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81342, "1", 10);
void* a8032280553 = encode_mpz(mpzvar81342);

//creating new closure instance
void** clo81344 = alloc_clo(lam80703_fptr, 4);

//setting env list
clo81344[1] = length;
clo81344[2] = a8032280553;
clo81344[3] = kont80419;
clo81344[4] = _u43;
void* f8042180554 = encode_clo(clo81344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8042180554;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80706 = encode_clo(alloc_clo(lam80706_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80708 = arg_buffer[1];
//reading env and args
void* kont80419 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo81346 = alloc_clo(lam80706_fptr, 5);

//setting env list
clo81346[1] = kont80419;
clo81346[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo81346[3] = length;
clo81346[4] = lst;
clo81346[5] = cdr;
void* f8042280550 = encode_clo(clo81346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8042280550;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam80709_fptr() // lam80709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80710 = arg_buffer[1];
//reading env and args
void* x8032680561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80423 = (decode_clo(env80710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80423);
arg_buffer[2] = x8032680561;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80423))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80709 = encode_clo(alloc_clo(lam80709_fptr, 0));

void* lam80711_fptr() // lam80711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80712 = arg_buffer[1];
//reading env and args
void* a8033080569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8032880565 = (decode_clo(env80712))[3];
//not do dummy comment
void* kont80423 = (decode_clo(env80712))[2];
//not do dummy comment
void* cons = (decode_clo(env80712))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont80423;
arg_buffer[3] = a8032880565;
arg_buffer[4] = a8033080569;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80711 = encode_clo(alloc_clo(lam80711_fptr, 0));

void* lam80713_fptr() // lam80713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80714 = arg_buffer[1];
//reading env and args
void* a8032980567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8032880565 = (decode_clo(env80714))[5];
//not do dummy comment
void* kont80423 = (decode_clo(env80714))[4];
//not do dummy comment
void* map = (decode_clo(env80714))[3];
//not do dummy comment
void* proc = (decode_clo(env80714))[2];
//not do dummy comment
void* cons = (decode_clo(env80714))[1];

//creating new closure instance
void** clo81348 = alloc_clo(lam80711_fptr, 3);

//setting env list
clo81348[1] = cons;
clo81348[2] = kont80423;
clo81348[3] = a8032880565;
void* f8042580568 = encode_clo(clo81348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8042580568;
arg_buffer[3] = proc;
arg_buffer[4] = a8032980567;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80713 = encode_clo(alloc_clo(lam80713_fptr, 0));

void* lam80715_fptr() // lam80715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80716 = arg_buffer[1];
//reading env and args
void* a8032880565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80716))[6];
//not do dummy comment
void* kont80423 = (decode_clo(env80716))[5];
//not do dummy comment
void* lst = (decode_clo(env80716))[4];
//not do dummy comment
void* map = (decode_clo(env80716))[3];
//not do dummy comment
void* proc = (decode_clo(env80716))[2];
//not do dummy comment
void* cons = (decode_clo(env80716))[1];

//creating new closure instance
void** clo81350 = alloc_clo(lam80713_fptr, 5);

//setting env list
clo81350[1] = cons;
clo81350[2] = proc;
clo81350[3] = map;
clo81350[4] = kont80423;
clo81350[5] = a8032880565;
void* f8042680566 = encode_clo(clo81350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8042680566;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80715 = encode_clo(alloc_clo(lam80715_fptr, 0));

void* lam80717_fptr() // lam80717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80718 = arg_buffer[1];
//reading env and args
void* a8032780563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80718))[6];
//not do dummy comment
void* kont80423 = (decode_clo(env80718))[5];
//not do dummy comment
void* lst = (decode_clo(env80718))[4];
//not do dummy comment
void* map = (decode_clo(env80718))[3];
//not do dummy comment
void* proc = (decode_clo(env80718))[2];
//not do dummy comment
void* cons = (decode_clo(env80718))[1];

//creating new closure instance
void** clo81352 = alloc_clo(lam80715_fptr, 6);

//setting env list
clo81352[1] = cons;
clo81352[2] = proc;
clo81352[3] = map;
clo81352[4] = lst;
clo81352[5] = kont80423;
clo81352[6] = cdr;
void* f8042780564 = encode_clo(clo81352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8042780564;
arg_buffer[3] = a8032780563;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80717 = encode_clo(alloc_clo(lam80717_fptr, 0));

void* lam80719_fptr() // lam80719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80720 = arg_buffer[1];
//reading env and args
void* a8032580559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80423 = (decode_clo(env80720))[8];
//not do dummy comment
void* lst = (decode_clo(env80720))[7];
//not do dummy comment
void* map = (decode_clo(env80720))[6];
//not do dummy comment
void* proc = (decode_clo(env80720))[5];
//not do dummy comment
void* car = (decode_clo(env80720))[4];
//not do dummy comment
void* cons = (decode_clo(env80720))[3];
//not do dummy comment
void* list = (decode_clo(env80720))[2];
//not do dummy comment
void* cdr = (decode_clo(env80720))[1];

//if-clause
bool if_guard81353 = is_true(a8032580559);
if(if_guard81353)
{

//creating new closure instance
void** clo81355 = alloc_clo(lam80709_fptr, 1);

//setting env list
clo81355[1] = kont80423;
void* f8042480560 = encode_clo(clo81355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8042480560;
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
void** clo81357 = alloc_clo(lam80717_fptr, 6);

//setting env list
clo81357[1] = cons;
clo81357[2] = proc;
clo81357[3] = map;
clo81357[4] = lst;
clo81357[5] = kont80423;
clo81357[6] = cdr;
void* f8042880562 = encode_clo(clo81357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8042880562;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80719 = encode_clo(alloc_clo(lam80719_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80721 = arg_buffer[1];
//reading env and args
void* kont80423 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo81359 = alloc_clo(lam80719_fptr, 8);

//setting env list
clo81359[1] = cdr;
clo81359[2] = list;
clo81359[3] = cons;
clo81359[4] = car;
clo81359[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo81359[6] = map;
clo81359[7] = lst;
clo81359[8] = kont80423;
void* f8042980558 = encode_clo(clo81359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8042980558;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam80722_fptr() // lam80722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80723 = arg_buffer[1];
//reading env and args
void* x8033280573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80430 = (decode_clo(env80723))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80430);
arg_buffer[2] = x8033280573;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80430))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80722 = encode_clo(alloc_clo(lam80722_fptr, 0));

void* lam80724_fptr() // lam80724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80725 = arg_buffer[1];
//reading env and args
void* a8033780583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80430 = (decode_clo(env80725))[3];
//not do dummy comment
void* cons = (decode_clo(env80725))[2];
//not do dummy comment
void* a8033580579 = (decode_clo(env80725))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont80430;
arg_buffer[3] = a8033580579;
arg_buffer[4] = a8033780583;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80724 = encode_clo(alloc_clo(lam80724_fptr, 0));

void* lam80726_fptr() // lam80726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80727 = arg_buffer[1];
//reading env and args
void* a8033680581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env80727))[5];
//not do dummy comment
void* kont80430 = (decode_clo(env80727))[4];
//not do dummy comment
void* filter = (decode_clo(env80727))[3];
//not do dummy comment
void* cons = (decode_clo(env80727))[2];
//not do dummy comment
void* a8033580579 = (decode_clo(env80727))[1];

//creating new closure instance
void** clo81361 = alloc_clo(lam80724_fptr, 3);

//setting env list
clo81361[1] = a8033580579;
clo81361[2] = cons;
clo81361[3] = kont80430;
void* f8043280582 = encode_clo(clo81361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8043280582;
arg_buffer[3] = op;
arg_buffer[4] = a8033680581;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80726 = encode_clo(alloc_clo(lam80726_fptr, 0));

void* lam80728_fptr() // lam80728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80729 = arg_buffer[1];
//reading env and args
void* a8033580579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80729))[6];
//not do dummy comment
void* lst = (decode_clo(env80729))[5];
//not do dummy comment
void* op = (decode_clo(env80729))[4];
//not do dummy comment
void* kont80430 = (decode_clo(env80729))[3];
//not do dummy comment
void* filter = (decode_clo(env80729))[2];
//not do dummy comment
void* cons = (decode_clo(env80729))[1];

//creating new closure instance
void** clo81363 = alloc_clo(lam80726_fptr, 5);

//setting env list
clo81363[1] = a8033580579;
clo81363[2] = cons;
clo81363[3] = filter;
clo81363[4] = kont80430;
clo81363[5] = op;
void* f8043380580 = encode_clo(clo81363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8043380580;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80728 = encode_clo(alloc_clo(lam80728_fptr, 0));

void* lam80730_fptr() // lam80730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80731 = arg_buffer[1];
//reading env and args
void* a8033880585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env80731))[3];
//not do dummy comment
void* kont80430 = (decode_clo(env80731))[2];
//not do dummy comment
void* filter = (decode_clo(env80731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont80430;
arg_buffer[3] = op;
arg_buffer[4] = a8033880585;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80730 = encode_clo(alloc_clo(lam80730_fptr, 0));

void* lam80732_fptr() // lam80732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80733 = arg_buffer[1];
//reading env and args
void* a8033480577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80733))[7];
//not do dummy comment
void* lst = (decode_clo(env80733))[6];
//not do dummy comment
void* op = (decode_clo(env80733))[5];
//not do dummy comment
void* kont80430 = (decode_clo(env80733))[4];
//not do dummy comment
void* cons = (decode_clo(env80733))[3];
//not do dummy comment
void* filter = (decode_clo(env80733))[2];
//not do dummy comment
void* car = (decode_clo(env80733))[1];

//if-clause
bool if_guard81364 = is_true(a8033480577);
if(if_guard81364)
{

//creating new closure instance
void** clo81366 = alloc_clo(lam80728_fptr, 6);

//setting env list
clo81366[1] = cons;
clo81366[2] = filter;
clo81366[3] = kont80430;
clo81366[4] = op;
clo81366[5] = lst;
clo81366[6] = cdr;
void* f8043480578 = encode_clo(clo81366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8043480578;
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
void** clo81368 = alloc_clo(lam80730_fptr, 3);

//setting env list
clo81368[1] = filter;
clo81368[2] = kont80430;
clo81368[3] = op;
void* f8043580584 = encode_clo(clo81368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8043580584;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80732 = encode_clo(alloc_clo(lam80732_fptr, 0));

void* lam80734_fptr() // lam80734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80735 = arg_buffer[1];
//reading env and args
void* a8033380575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80735))[7];
//not do dummy comment
void* lst = (decode_clo(env80735))[6];
//not do dummy comment
void* op = (decode_clo(env80735))[5];
//not do dummy comment
void* kont80430 = (decode_clo(env80735))[4];
//not do dummy comment
void* cons = (decode_clo(env80735))[3];
//not do dummy comment
void* filter = (decode_clo(env80735))[2];
//not do dummy comment
void* car = (decode_clo(env80735))[1];

//creating new closure instance
void** clo81370 = alloc_clo(lam80732_fptr, 7);

//setting env list
clo81370[1] = car;
clo81370[2] = filter;
clo81370[3] = cons;
clo81370[4] = kont80430;
clo81370[5] = op;
clo81370[6] = lst;
clo81370[7] = cdr;
void* f8043680576 = encode_clo(clo81370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8043680576;
arg_buffer[3] = a8033380575;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80734 = encode_clo(alloc_clo(lam80734_fptr, 0));

void* lam80736_fptr() // lam80736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80737 = arg_buffer[1];
//reading env and args
void* a8033180571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env80737))[8];
//not do dummy comment
void* op = (decode_clo(env80737))[7];
//not do dummy comment
void* kont80430 = (decode_clo(env80737))[6];
//not do dummy comment
void* cons = (decode_clo(env80737))[5];
//not do dummy comment
void* list = (decode_clo(env80737))[4];
//not do dummy comment
void* cdr = (decode_clo(env80737))[3];
//not do dummy comment
void* filter = (decode_clo(env80737))[2];
//not do dummy comment
void* car = (decode_clo(env80737))[1];

//if-clause
bool if_guard81371 = is_true(a8033180571);
if(if_guard81371)
{

//creating new closure instance
void** clo81373 = alloc_clo(lam80722_fptr, 1);

//setting env list
clo81373[1] = kont80430;
void* f8043180572 = encode_clo(clo81373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8043180572;
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
void** clo81375 = alloc_clo(lam80734_fptr, 7);

//setting env list
clo81375[1] = car;
clo81375[2] = filter;
clo81375[3] = cons;
clo81375[4] = kont80430;
clo81375[5] = op;
clo81375[6] = lst;
clo81375[7] = cdr;
void* f8043780574 = encode_clo(clo81375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8043780574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80736 = encode_clo(alloc_clo(lam80736_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80738 = arg_buffer[1];
//reading env and args
void* kont80430 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo81377 = alloc_clo(lam80736_fptr, 8);

//setting env list
clo81377[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo81377[2] = filter;
clo81377[3] = cdr;
clo81377[4] = list;
clo81377[5] = cons;
clo81377[6] = kont80430;
clo81377[7] = op;
clo81377[8] = lst;
void* f8043880570 = encode_clo(clo81377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8043880570;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam80739_fptr() // lam80739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80740 = arg_buffer[1];
//reading env and args
void* a8034380593 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80439 = (decode_clo(env80740))[3];
//not do dummy comment
void* drop = (decode_clo(env80740))[2];
//not do dummy comment
void* a8034180590 = (decode_clo(env80740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont80439;
arg_buffer[3] = a8034180590;
arg_buffer[4] = a8034380593;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80739 = encode_clo(alloc_clo(lam80739_fptr, 0));

void* lam80742_fptr() // lam80742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80743 = arg_buffer[1];
//reading env and args
void* a8034180590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80439 = (decode_clo(env80743))[4];
//not do dummy comment
void* drop = (decode_clo(env80743))[3];
//not do dummy comment
void* n = (decode_clo(env80743))[2];
//not do dummy comment
void* _u45 = (decode_clo(env80743))[1];
mpz_t* mpzvar81378 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81378, "1", 10);
void* a8034280591 = encode_mpz(mpzvar81378);

//creating new closure instance
void** clo81380 = alloc_clo(lam80739_fptr, 3);

//setting env list
clo81380[1] = a8034180590;
clo81380[2] = drop;
clo81380[3] = kont80439;
void* f8044080592 = encode_clo(clo81380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8044080592;
arg_buffer[3] = n;
arg_buffer[4] = a8034280591;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80742 = encode_clo(alloc_clo(lam80742_fptr, 0));

void* lam80744_fptr() // lam80744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80745 = arg_buffer[1];
//reading env and args
void* a8034080588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80745))[6];
//not do dummy comment
void* kont80439 = (decode_clo(env80745))[5];
//not do dummy comment
void* n = (decode_clo(env80745))[4];
//not do dummy comment
void* _u45 = (decode_clo(env80745))[3];
//not do dummy comment
void* lst = (decode_clo(env80745))[2];
//not do dummy comment
void* drop = (decode_clo(env80745))[1];

//if-clause
bool if_guard81381 = is_true(a8034080588);
if(if_guard81381)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80439);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80439))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo81383 = alloc_clo(lam80742_fptr, 4);

//setting env list
clo81383[1] = _u45;
clo81383[2] = n;
clo81383[3] = drop;
clo81383[4] = kont80439;
void* f8044180589 = encode_clo(clo81383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8044180589;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80744 = encode_clo(alloc_clo(lam80744_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80747 = arg_buffer[1];
//reading env and args
void* kont80439 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar81384 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81384, "0", 10);
void* a8033980586 = encode_mpz(mpzvar81384);

//creating new closure instance
void** clo81386 = alloc_clo(lam80744_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo81386[1] = drop;
clo81386[2] = lst;
clo81386[3] = _u45;
clo81386[4] = n;
clo81386[5] = kont80439;
clo81386[6] = cdr;
void* f8044280587 = encode_clo(clo81386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8044280587;
arg_buffer[3] = n;
arg_buffer[4] = a8033980586;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam80748_fptr() // lam80748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80749 = arg_buffer[1];
//reading env and args
void* a8034780601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8034580597 = (decode_clo(env80749))[3];
//not do dummy comment
void* kont80443 = (decode_clo(env80749))[2];
//not do dummy comment
void* proc = (decode_clo(env80749))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont80443;
arg_buffer[3] = a8034580597;
arg_buffer[4] = a8034780601;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80748 = encode_clo(alloc_clo(lam80748_fptr, 0));

void* lam80750_fptr() // lam80750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80751 = arg_buffer[1];
//reading env and args
void* a8034680599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8034580597 = (decode_clo(env80751))[5];
//not do dummy comment
void* foldr = (decode_clo(env80751))[4];
//not do dummy comment
void* kont80443 = (decode_clo(env80751))[3];
//not do dummy comment
void* proc = (decode_clo(env80751))[2];
//not do dummy comment
void* acc = (decode_clo(env80751))[1];

//creating new closure instance
void** clo81388 = alloc_clo(lam80748_fptr, 3);

//setting env list
clo81388[1] = proc;
clo81388[2] = kont80443;
clo81388[3] = a8034580597;
void* f8044480600 = encode_clo(clo81388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8044480600;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8034680599;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80750 = encode_clo(alloc_clo(lam80750_fptr, 0));

void* lam80752_fptr() // lam80752 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80753 = arg_buffer[1];
//reading env and args
void* a8034580597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80753))[6];
//not do dummy comment
void* kont80443 = (decode_clo(env80753))[5];
//not do dummy comment
void* foldr = (decode_clo(env80753))[4];
//not do dummy comment
void* lst = (decode_clo(env80753))[3];
//not do dummy comment
void* proc = (decode_clo(env80753))[2];
//not do dummy comment
void* acc = (decode_clo(env80753))[1];

//creating new closure instance
void** clo81390 = alloc_clo(lam80750_fptr, 5);

//setting env list
clo81390[1] = acc;
clo81390[2] = proc;
clo81390[3] = kont80443;
clo81390[4] = foldr;
clo81390[5] = a8034580597;
void* f8044580598 = encode_clo(clo81390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8044580598;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80752 = encode_clo(alloc_clo(lam80752_fptr, 0));

void* lam80754_fptr() // lam80754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80755 = arg_buffer[1];
//reading env and args
void* a8034480595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80755))[7];
//not do dummy comment
void* kont80443 = (decode_clo(env80755))[6];
//not do dummy comment
void* car = (decode_clo(env80755))[5];
//not do dummy comment
void* foldr = (decode_clo(env80755))[4];
//not do dummy comment
void* lst = (decode_clo(env80755))[3];
//not do dummy comment
void* proc = (decode_clo(env80755))[2];
//not do dummy comment
void* acc = (decode_clo(env80755))[1];

//if-clause
bool if_guard81391 = is_true(a8034480595);
if(if_guard81391)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80443);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80443))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo81393 = alloc_clo(lam80752_fptr, 6);

//setting env list
clo81393[1] = acc;
clo81393[2] = proc;
clo81393[3] = lst;
clo81393[4] = foldr;
clo81393[5] = kont80443;
clo81393[6] = cdr;
void* f8044680596 = encode_clo(clo81393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8044680596;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80754 = encode_clo(alloc_clo(lam80754_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80756 = arg_buffer[1];
//reading env and args
void* kont80443 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo81395 = alloc_clo(lam80754_fptr, 7);

//setting env list
clo81395[1] = acc;
clo81395[2] = proc;
clo81395[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo81395[4] = foldr;
clo81395[5] = car;
clo81395[6] = kont80443;
clo81395[7] = cdr;
void* f8044780594 = encode_clo(clo81395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8044780594;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam80757_fptr() // lam80757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80758 = arg_buffer[1];
//reading env and args
void* a8035180609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8034980605 = (decode_clo(env80758))[3];
//not do dummy comment
void* kont80448 = (decode_clo(env80758))[2];
//not do dummy comment
void* cons = (decode_clo(env80758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont80448;
arg_buffer[3] = a8034980605;
arg_buffer[4] = a8035180609;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80757 = encode_clo(alloc_clo(lam80757_fptr, 0));

void* lam80759_fptr() // lam80759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80760 = arg_buffer[1];
//reading env and args
void* a8035080607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env80760))[5];
//not do dummy comment
void* a8034980605 = (decode_clo(env80760))[4];
//not do dummy comment
void* cons = (decode_clo(env80760))[3];
//not do dummy comment
void* kont80448 = (decode_clo(env80760))[2];
//not do dummy comment
void* lst2 = (decode_clo(env80760))[1];

//creating new closure instance
void** clo81397 = alloc_clo(lam80757_fptr, 3);

//setting env list
clo81397[1] = cons;
clo81397[2] = kont80448;
clo81397[3] = a8034980605;
void* f8044980608 = encode_clo(clo81397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8044980608;
arg_buffer[3] = a8035080607;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80759 = encode_clo(alloc_clo(lam80759_fptr, 0));

void* lam80761_fptr() // lam80761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80762 = arg_buffer[1];
//reading env and args
void* a8034980605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80762))[6];
//not do dummy comment
void* append = (decode_clo(env80762))[5];
//not do dummy comment
void* lst1 = (decode_clo(env80762))[4];
//not do dummy comment
void* cons = (decode_clo(env80762))[3];
//not do dummy comment
void* kont80448 = (decode_clo(env80762))[2];
//not do dummy comment
void* lst2 = (decode_clo(env80762))[1];

//creating new closure instance
void** clo81399 = alloc_clo(lam80759_fptr, 5);

//setting env list
clo81399[1] = lst2;
clo81399[2] = kont80448;
clo81399[3] = cons;
clo81399[4] = a8034980605;
clo81399[5] = append;
void* f8045080606 = encode_clo(clo81399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8045080606;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80761 = encode_clo(alloc_clo(lam80761_fptr, 0));

void* lam80763_fptr() // lam80763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80764 = arg_buffer[1];
//reading env and args
void* a8034880603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env80764))[7];
//not do dummy comment
void* append = (decode_clo(env80764))[6];
//not do dummy comment
void* cons = (decode_clo(env80764))[5];
//not do dummy comment
void* kont80448 = (decode_clo(env80764))[4];
//not do dummy comment
void* lst2 = (decode_clo(env80764))[3];
//not do dummy comment
void* lst1 = (decode_clo(env80764))[2];
//not do dummy comment
void* car = (decode_clo(env80764))[1];

//if-clause
bool if_guard81400 = is_true(a8034880603);
if(if_guard81400)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80448);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80448))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo81402 = alloc_clo(lam80761_fptr, 6);

//setting env list
clo81402[1] = lst2;
clo81402[2] = kont80448;
clo81402[3] = cons;
clo81402[4] = lst1;
clo81402[5] = append;
clo81402[6] = cdr;
void* f8045180604 = encode_clo(clo81402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8045180604;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam80763 = encode_clo(alloc_clo(lam80763_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80765 = arg_buffer[1];
//reading env and args
void* kont80448 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo81404 = alloc_clo(lam80763_fptr, 7);

//setting env list
clo81404[1] = car;
clo81404[2] = lst1;
clo81404[3] = lst2;
clo81404[4] = kont80448;
clo81404[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo81404[6] = append;
clo81404[7] = cdr;
void* f8045280602 = encode_clo(clo81404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8045280602;
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
void* _80766 = arg_buffer[1];
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

void* kont8045380610 = prim_car(lst);
void* lst80611 = prim_cdr(lst);
void* x8035280612 = apply_prim_hash(lst80611);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8045380610);
arg_buffer[2] = x8035280612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8045380610))[0]);
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
void* _80767 = arg_buffer[1];
//reading env and args
void* kont80455 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8035380613 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80455);
arg_buffer[2] = x8035380613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80455))[0]);
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
void* _80768 = arg_buffer[1];
//reading env and args
void* kont80456 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8035480614 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80456);
arg_buffer[2] = x8035480614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80456))[0]);
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
void* _80769 = arg_buffer[1];
//reading env and args
void* kont80457 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8035580615 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80457);
arg_buffer[2] = x8035580615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80457))[0]);
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
void* _80770 = arg_buffer[1];
//reading env and args
void* kont80458 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8035680616 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80458);
arg_buffer[2] = x8035680616;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80458))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80775 = arg_buffer[1];
//reading env and args
void* kont80459 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar81405 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81405, "100", 10);
void* a8035780617 = encode_mpz(mpzvar81405);
mpz_t* mpzvar81406 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81406, "80", 10);
void* a8035880618 = encode_mpz(mpzvar81406);
mpz_t* mpzvar81407 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81407, "10", 10);
void* a8035980619 = encode_mpz(mpzvar81407);
mpz_t* mpzvar81408 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar81408, "2", 10);
void* a8036080620 = encode_mpz(mpzvar81408);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = kont80459;
arg_buffer[3] = a8035780617;
arg_buffer[4] = a8035880618;
arg_buffer[5] = a8035980619;
arg_buffer[6] = a8036080620;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam80776_fptr() // lam80776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env80777 = arg_buffer[1];
//reading env and args
void* x8036180622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont80460 = (decode_clo(env80777))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80460);
arg_buffer[2] = x8036180622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80460))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam80776 = encode_clo(alloc_clo(lam80776_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _80778 = arg_buffer[1];
//reading env and args
void* kont80460 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo81410 = alloc_clo(lam80776_fptr, 1);

//setting env list
clo81410[1] = kont80460;
void* f8046180621 = encode_clo(clo81410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8046180621;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
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

