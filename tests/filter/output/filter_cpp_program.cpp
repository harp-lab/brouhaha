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
void* _40648 = arg_buffer[1];
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

void* kont4038540486 = prim_car(lst);
void* lst40487 = prim_cdr(lst);
void* x4029740488 = apply_prim__u43(lst40487);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4038540486);
arg_buffer[2] = x4029740488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4038540486))[0]);
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
void* _40649 = arg_buffer[1];
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

void* kont4038740489 = prim_car(lst);
void* lst40490 = prim_cdr(lst);
void* x4029840491 = apply_prim__u45(lst40490);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4038740489);
arg_buffer[2] = x4029840491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4038740489))[0]);
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
void* _40650 = arg_buffer[1];
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

void* kont4038940492 = prim_car(lst);
void* lst40493 = prim_cdr(lst);
void* x4029940494 = apply_prim__u42(lst40493);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4038940492);
arg_buffer[2] = x4029940494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4038940492))[0]);
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
void* _40651 = arg_buffer[1];
//reading env and args
void* kont40391 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4030040495 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40391);
arg_buffer[2] = x4030040495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40391))[0]);
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
void* _40652 = arg_buffer[1];
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

void* kont4039240496 = prim_car(lst);
void* lst40497 = prim_cdr(lst);
void* x4030140498 = apply_prim__u47(lst40497);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4039240496);
arg_buffer[2] = x4030140498;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4039240496))[0]);
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
void* _40653 = arg_buffer[1];
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

void* kont4039440499 = prim_car(lst);
void* lst40500 = prim_cdr(lst);
void* x4030240501 = apply_prim__u61(lst40500);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4039440499);
arg_buffer[2] = x4030240501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4039440499))[0]);
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
void* _40654 = arg_buffer[1];
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

void* kont4039640502 = prim_car(lst);
void* lst40503 = prim_cdr(lst);
void* x4030340504 = apply_prim__u62(lst40503);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4039640502);
arg_buffer[2] = x4030340504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4039640502))[0]);
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
void* _40655 = arg_buffer[1];
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

void* kont4039840505 = prim_car(lst);
void* lst40506 = prim_cdr(lst);
void* x4030440507 = apply_prim__u60(lst40506);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4039840505);
arg_buffer[2] = x4030440507;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4039840505))[0]);
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
void* _40656 = arg_buffer[1];
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

void* kont4040040508 = prim_car(lst);
void* lst40509 = prim_cdr(lst);
void* x4030540510 = apply_prim__u60_u61(lst40509);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4040040508);
arg_buffer[2] = x4030540510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4040040508))[0]);
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
void* _40657 = arg_buffer[1];
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

void* kont4040240511 = prim_car(lst);
void* lst40512 = prim_cdr(lst);
void* x4030640513 = apply_prim__u62_u61(lst40512);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4040240511);
arg_buffer[2] = x4030640513;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4040240511))[0]);
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
void* _40658 = arg_buffer[1];
//reading env and args
void* kont40404 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4030740514 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40404);
arg_buffer[2] = x4030740514;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40404))[0]);
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
void* _40659 = arg_buffer[1];
//reading env and args
void* kont40405 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4030840515 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40405);
arg_buffer[2] = x4030840515;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40405))[0]);
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
void* _40660 = arg_buffer[1];
//reading env and args
void* kont40406 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4030940516 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40406);
arg_buffer[2] = x4030940516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40406))[0]);
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
void* _40661 = arg_buffer[1];
//reading env and args
void* kont40407 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4031040517 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40407);
arg_buffer[2] = x4031040517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40407))[0]);
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
void* _40662 = arg_buffer[1];
//reading env and args
void* kont40408 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4031140518 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40408);
arg_buffer[2] = x4031140518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40408))[0]);
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
void* _40663 = arg_buffer[1];
//reading env and args
void* kont40409 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4031240519 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40409);
arg_buffer[2] = x4031240519;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40409))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam40664_fptr() // lam40664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40665 = arg_buffer[1];
//reading env and args
void* a4031540523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4031340520 = (decode_clo(env40665))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env40665))[2];
//not do dummy comment
void* kont40410 = (decode_clo(env40665))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont40410;
arg_buffer[3] = a4031340520;
arg_buffer[4] = a4031540523;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40664 = encode_clo(alloc_clo(lam40664_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40668 = arg_buffer[1];
//reading env and args
void* kont40410 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46853 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46853, "0", 10);
void* a4031340520 = encode_mpz(mpzvar46853);
mpz_t* mpzvar46854 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46854, "2", 10);
void* a4031440521 = encode_mpz(mpzvar46854);

//creating new closure instance
void** clo46856 = alloc_clo(lam40664_fptr, 3);

//setting env list
clo46856[1] = kont40410;
clo46856[2] = equal_u63;
clo46856[3] = a4031340520;
void* f4041140522 = encode_clo(clo46856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4041140522;
arg_buffer[3] = x;
arg_buffer[4] = a4031440521;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam40669_fptr() // lam40669 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40670 = arg_buffer[1];
//reading env and args
void* a4031840527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env40670))[3];
//not do dummy comment
void* a4031640524 = (decode_clo(env40670))[2];
//not do dummy comment
void* kont40412 = (decode_clo(env40670))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont40412;
arg_buffer[3] = a4031640524;
arg_buffer[4] = a4031840527;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40669 = encode_clo(alloc_clo(lam40669_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40673 = arg_buffer[1];
//reading env and args
void* kont40412 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46857 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46857, "1", 10);
void* a4031640524 = encode_mpz(mpzvar46857);
mpz_t* mpzvar46858 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46858, "2", 10);
void* a4031740525 = encode_mpz(mpzvar46858);

//creating new closure instance
void** clo46860 = alloc_clo(lam40669_fptr, 3);

//setting env list
clo46860[1] = kont40412;
clo46860[2] = a4031640524;
clo46860[3] = equal_u63;
void* f4041340526 = encode_clo(clo46860);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4041340526;
arg_buffer[3] = x;
arg_buffer[4] = a4031740525;
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
void* _40674 = arg_buffer[1];
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

void* kont4041440528 = prim_car(x);
void* x40529 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4041440528);
arg_buffer[2] = x40529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4041440528))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam40677_fptr() // lam40677 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40678 = arg_buffer[1];
//reading env and args
void* a4032440539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env40678))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env40678))[2];
//not do dummy comment
void* kont40416 = (decode_clo(env40678))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont40416;
arg_buffer[3] = x;
arg_buffer[4] = a4032440539;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40677 = encode_clo(alloc_clo(lam40677_fptr, 0));

void* lam40679_fptr() // lam40679 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40680 = arg_buffer[1];
//reading env and args
void* a4032240536 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40680))[5];
//not do dummy comment
void* lst = (decode_clo(env40680))[4];
//not do dummy comment
void* x = (decode_clo(env40680))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env40680))[2];
//not do dummy comment
void* kont40416 = (decode_clo(env40680))[1];

//if-clause
bool if_guard46861 = is_true(a4032240536);
if(if_guard46861)
{
void* x4032340537 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40416);
arg_buffer[2] = x4032340537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40416))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46863 = alloc_clo(lam40677_fptr, 3);

//setting env list
clo46863[1] = kont40416;
clo46863[2] = member_u63;
clo46863[3] = x;
void* f4041740538 = encode_clo(clo46863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4041740538;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40679 = encode_clo(alloc_clo(lam40679_fptr, 0));

void* lam40681_fptr() // lam40681 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40682 = arg_buffer[1];
//reading env and args
void* a4032140534 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40682))[6];
//not do dummy comment
void* lst = (decode_clo(env40682))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env40682))[4];
//not do dummy comment
void* x = (decode_clo(env40682))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env40682))[2];
//not do dummy comment
void* kont40416 = (decode_clo(env40682))[1];

//creating new closure instance
void** clo46865 = alloc_clo(lam40679_fptr, 5);

//setting env list
clo46865[1] = kont40416;
clo46865[2] = member_u63;
clo46865[3] = x;
clo46865[4] = lst;
clo46865[5] = cdr;
void* f4041840535 = encode_clo(clo46865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4041840535;
arg_buffer[3] = a4032140534;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40681 = encode_clo(alloc_clo(lam40681_fptr, 0));

void* lam40683_fptr() // lam40683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40684 = arg_buffer[1];
//reading env and args
void* a4031940531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40684))[7];
//not do dummy comment
void* lst = (decode_clo(env40684))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env40684))[5];
//not do dummy comment
void* x = (decode_clo(env40684))[4];
//not do dummy comment
void* car = (decode_clo(env40684))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env40684))[2];
//not do dummy comment
void* kont40416 = (decode_clo(env40684))[1];

//if-clause
bool if_guard46866 = is_true(a4031940531);
if(if_guard46866)
{
void* x4032040532 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40416);
arg_buffer[2] = x4032040532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40416))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46868 = alloc_clo(lam40681_fptr, 6);

//setting env list
clo46868[1] = kont40416;
clo46868[2] = member_u63;
clo46868[3] = x;
clo46868[4] = equal_u63;
clo46868[5] = lst;
clo46868[6] = cdr;
void* f4041940533 = encode_clo(clo46868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4041940533;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40683 = encode_clo(alloc_clo(lam40683_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40685 = arg_buffer[1];
//reading env and args
void* kont40416 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46870 = alloc_clo(lam40683_fptr, 7);

//setting env list
clo46870[1] = kont40416;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo46870[2] = member_u63;
clo46870[3] = car;
clo46870[4] = x;
clo46870[5] = equal_u63;
clo46870[6] = lst;
clo46870[7] = cdr;
void* f4042040530 = encode_clo(clo46870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4042040530;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam40686_fptr() // lam40686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40687 = arg_buffer[1];
//reading env and args
void* a4032840547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4032740545 = (decode_clo(env40687))[4];
//not do dummy comment
void* kont40421 = (decode_clo(env40687))[3];
//not do dummy comment
void* fun = (decode_clo(env40687))[2];
//not do dummy comment
void* foldl = (decode_clo(env40687))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont40421;
arg_buffer[3] = fun;
arg_buffer[4] = a4032740545;
arg_buffer[5] = a4032840547;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40686 = encode_clo(alloc_clo(lam40686_fptr, 0));

void* lam40688_fptr() // lam40688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40689 = arg_buffer[1];
//reading env and args
void* a4032740545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40689))[5];
//not do dummy comment
void* fun = (decode_clo(env40689))[4];
//not do dummy comment
void* foldl = (decode_clo(env40689))[3];
//not do dummy comment
void* lst = (decode_clo(env40689))[2];
//not do dummy comment
void* kont40421 = (decode_clo(env40689))[1];

//creating new closure instance
void** clo46872 = alloc_clo(lam40686_fptr, 4);

//setting env list
clo46872[1] = foldl;
clo46872[2] = fun;
clo46872[3] = kont40421;
clo46872[4] = a4032740545;
void* f4042240546 = encode_clo(clo46872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4042240546;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40688 = encode_clo(alloc_clo(lam40688_fptr, 0));

void* lam40690_fptr() // lam40690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40691 = arg_buffer[1];
//reading env and args
void* a4032640543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40691))[6];
//not do dummy comment
void* fun = (decode_clo(env40691))[5];
//not do dummy comment
void* acc = (decode_clo(env40691))[4];
//not do dummy comment
void* foldl = (decode_clo(env40691))[3];
//not do dummy comment
void* lst = (decode_clo(env40691))[2];
//not do dummy comment
void* kont40421 = (decode_clo(env40691))[1];

//creating new closure instance
void** clo46874 = alloc_clo(lam40688_fptr, 5);

//setting env list
clo46874[1] = kont40421;
clo46874[2] = lst;
clo46874[3] = foldl;
clo46874[4] = fun;
clo46874[5] = cdr;
void* f4042340544 = encode_clo(clo46874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4042340544;
arg_buffer[3] = a4032640543;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40690 = encode_clo(alloc_clo(lam40690_fptr, 0));

void* lam40692_fptr() // lam40692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40693 = arg_buffer[1];
//reading env and args
void* a4032540541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40693))[7];
//not do dummy comment
void* fun = (decode_clo(env40693))[6];
//not do dummy comment
void* acc = (decode_clo(env40693))[5];
//not do dummy comment
void* car = (decode_clo(env40693))[4];
//not do dummy comment
void* foldl = (decode_clo(env40693))[3];
//not do dummy comment
void* lst = (decode_clo(env40693))[2];
//not do dummy comment
void* kont40421 = (decode_clo(env40693))[1];

//if-clause
bool if_guard46875 = is_true(a4032540541);
if(if_guard46875)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40421);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40421))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46877 = alloc_clo(lam40690_fptr, 6);

//setting env list
clo46877[1] = kont40421;
clo46877[2] = lst;
clo46877[3] = foldl;
clo46877[4] = acc;
clo46877[5] = fun;
clo46877[6] = cdr;
void* f4042440542 = encode_clo(clo46877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4042440542;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40692 = encode_clo(alloc_clo(lam40692_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40694 = arg_buffer[1];
//reading env and args
void* kont40421 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46879 = alloc_clo(lam40692_fptr, 7);

//setting env list
clo46879[1] = kont40421;
clo46879[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo46879[3] = foldl;
clo46879[4] = car;
clo46879[5] = acc;
clo46879[6] = fun;
clo46879[7] = cdr;
void* f4042540540 = encode_clo(clo46879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4042540540;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam40695_fptr() // lam40695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40696 = arg_buffer[1];
//reading env and args
void* a4033240555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4033040551 = (decode_clo(env40696))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40696))[2];
//not do dummy comment
void* kont40426 = (decode_clo(env40696))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont40426;
arg_buffer[3] = a4033040551;
arg_buffer[4] = a4033240555;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40695 = encode_clo(alloc_clo(lam40695_fptr, 0));

void* lam40697_fptr() // lam40697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40698 = arg_buffer[1];
//reading env and args
void* a4033140553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4033040551 = (decode_clo(env40698))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40698))[4];
//not do dummy comment
void* kont40426 = (decode_clo(env40698))[3];
//not do dummy comment
void* lst2 = (decode_clo(env40698))[2];
//not do dummy comment
void* cons = (decode_clo(env40698))[1];

//creating new closure instance
void** clo46881 = alloc_clo(lam40695_fptr, 3);

//setting env list
clo46881[1] = kont40426;
clo46881[2] = reverse_u45helper;
clo46881[3] = a4033040551;
void* f4042740554 = encode_clo(clo46881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4042740554;
arg_buffer[3] = a4033140553;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40697 = encode_clo(alloc_clo(lam40697_fptr, 0));

void* lam40699_fptr() // lam40699 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40700 = arg_buffer[1];
//reading env and args
void* a4033040551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40700))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40700))[5];
//not do dummy comment
void* kont40426 = (decode_clo(env40700))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40700))[3];
//not do dummy comment
void* car = (decode_clo(env40700))[2];
//not do dummy comment
void* cons = (decode_clo(env40700))[1];

//creating new closure instance
void** clo46883 = alloc_clo(lam40697_fptr, 5);

//setting env list
clo46883[1] = cons;
clo46883[2] = lst2;
clo46883[3] = kont40426;
clo46883[4] = reverse_u45helper;
clo46883[5] = a4033040551;
void* f4042840552 = encode_clo(clo46883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4042840552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40699 = encode_clo(alloc_clo(lam40699_fptr, 0));

void* lam40701_fptr() // lam40701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40702 = arg_buffer[1];
//reading env and args
void* a4032940549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40702))[7];
//not do dummy comment
void* lst = (decode_clo(env40702))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40702))[5];
//not do dummy comment
void* kont40426 = (decode_clo(env40702))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40702))[3];
//not do dummy comment
void* car = (decode_clo(env40702))[2];
//not do dummy comment
void* cons = (decode_clo(env40702))[1];

//if-clause
bool if_guard46884 = is_true(a4032940549);
if(if_guard46884)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40426);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40426))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46886 = alloc_clo(lam40699_fptr, 6);

//setting env list
clo46886[1] = cons;
clo46886[2] = car;
clo46886[3] = lst2;
clo46886[4] = kont40426;
clo46886[5] = reverse_u45helper;
clo46886[6] = lst;
void* f4042940550 = encode_clo(clo46886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4042940550;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40701 = encode_clo(alloc_clo(lam40701_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40703 = arg_buffer[1];
//reading env and args
void* kont40426 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46888 = alloc_clo(lam40701_fptr, 7);

//setting env list
clo46888[1] = cons;
clo46888[2] = car;
clo46888[3] = lst2;
clo46888[4] = kont40426;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo46888[5] = reverse_u45helper;
clo46888[6] = lst;
clo46888[7] = cdr;
void* f4043040548 = encode_clo(clo46888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4043040548;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam40704_fptr() // lam40704 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40705 = arg_buffer[1];
//reading env and args
void* a4033340557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40705))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40705))[2];
//not do dummy comment
void* kont40431 = (decode_clo(env40705))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont40431;
arg_buffer[3] = lst;
arg_buffer[4] = a4033340557;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40704 = encode_clo(alloc_clo(lam40704_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40706 = arg_buffer[1];
//reading env and args
void* kont40431 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46890 = alloc_clo(lam40704_fptr, 3);

//setting env list
clo46890[1] = kont40431;
clo46890[2] = reverse_u45helper;
clo46890[3] = lst;
void* f4043240556 = encode_clo(clo46890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4043240556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam40707_fptr() // lam40707 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40708 = arg_buffer[1];
//reading env and args
void* x4033640562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40433 = (decode_clo(env40708))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40433);
arg_buffer[2] = x4033640562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40433))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40707 = encode_clo(alloc_clo(lam40707_fptr, 0));

void* lam40709_fptr() // lam40709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40710 = arg_buffer[1];
//reading env and args
void* a4034140571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40433 = (decode_clo(env40710))[4];
//not do dummy comment
void* a4033740564 = (decode_clo(env40710))[3];
//not do dummy comment
void* a4033940567 = (decode_clo(env40710))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env40710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont40433;
arg_buffer[3] = a4033740564;
arg_buffer[4] = a4033940567;
arg_buffer[5] = a4034140571;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40709 = encode_clo(alloc_clo(lam40709_fptr, 0));

void* lam40711_fptr() // lam40711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40712 = arg_buffer[1];
//reading env and args
void* a4034040569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40433 = (decode_clo(env40712))[6];
//not do dummy comment
void* a4033740564 = (decode_clo(env40712))[5];
//not do dummy comment
void* a4033940567 = (decode_clo(env40712))[4];
//not do dummy comment
void* cons = (decode_clo(env40712))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40712))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40712))[1];

//creating new closure instance
void** clo46892 = alloc_clo(lam40709_fptr, 4);

//setting env list
clo46892[1] = take_u45helper;
clo46892[2] = a4033940567;
clo46892[3] = a4033740564;
clo46892[4] = kont40433;
void* f4043540570 = encode_clo(clo46892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4043540570;
arg_buffer[3] = a4034040569;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40711 = encode_clo(alloc_clo(lam40711_fptr, 0));

void* lam40713_fptr() // lam40713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40714 = arg_buffer[1];
//reading env and args
void* a4033940567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40433 = (decode_clo(env40714))[7];
//not do dummy comment
void* a4033740564 = (decode_clo(env40714))[6];
//not do dummy comment
void* lst = (decode_clo(env40714))[5];
//not do dummy comment
void* car = (decode_clo(env40714))[4];
//not do dummy comment
void* cons = (decode_clo(env40714))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40714))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40714))[1];

//creating new closure instance
void** clo46894 = alloc_clo(lam40711_fptr, 6);

//setting env list
clo46894[1] = lst2;
clo46894[2] = take_u45helper;
clo46894[3] = cons;
clo46894[4] = a4033940567;
clo46894[5] = a4033740564;
clo46894[6] = kont40433;
void* f4043640568 = encode_clo(clo46894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4043640568;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40713 = encode_clo(alloc_clo(lam40713_fptr, 0));

void* lam40716_fptr() // lam40716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40717 = arg_buffer[1];
//reading env and args
void* a4033740564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40433 = (decode_clo(env40717))[8];
//not do dummy comment
void* lst = (decode_clo(env40717))[7];
//not do dummy comment
void* cons = (decode_clo(env40717))[6];
//not do dummy comment
void* _u45 = (decode_clo(env40717))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env40717))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40717))[3];
//not do dummy comment
void* n = (decode_clo(env40717))[2];
//not do dummy comment
void* car = (decode_clo(env40717))[1];
mpz_t* mpzvar46895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46895, "1", 10);
void* a4033840565 = encode_mpz(mpzvar46895);

//creating new closure instance
void** clo46897 = alloc_clo(lam40713_fptr, 7);

//setting env list
clo46897[1] = lst2;
clo46897[2] = take_u45helper;
clo46897[3] = cons;
clo46897[4] = car;
clo46897[5] = lst;
clo46897[6] = a4033740564;
clo46897[7] = kont40433;
void* f4043740566 = encode_clo(clo46897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4043740566;
arg_buffer[3] = n;
arg_buffer[4] = a4033840565;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40716 = encode_clo(alloc_clo(lam40716_fptr, 0));

void* lam40718_fptr() // lam40718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40719 = arg_buffer[1];
//reading env and args
void* a4033540560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40719))[10];
//not do dummy comment
void* reverse = (decode_clo(env40719))[9];
//not do dummy comment
void* cons = (decode_clo(env40719))[8];
//not do dummy comment
void* _u45 = (decode_clo(env40719))[7];
//not do dummy comment
void* kont40433 = (decode_clo(env40719))[6];
//not do dummy comment
void* cdr = (decode_clo(env40719))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env40719))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40719))[3];
//not do dummy comment
void* n = (decode_clo(env40719))[2];
//not do dummy comment
void* car = (decode_clo(env40719))[1];

//if-clause
bool if_guard46898 = is_true(a4033540560);
if(if_guard46898)
{

//creating new closure instance
void** clo46900 = alloc_clo(lam40707_fptr, 1);

//setting env list
clo46900[1] = kont40433;
void* f4043440561 = encode_clo(clo46900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4043440561;
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
void** clo46902 = alloc_clo(lam40716_fptr, 8);

//setting env list
clo46902[1] = car;
clo46902[2] = n;
clo46902[3] = lst2;
clo46902[4] = take_u45helper;
clo46902[5] = _u45;
clo46902[6] = cons;
clo46902[7] = lst;
clo46902[8] = kont40433;
void* f4043840563 = encode_clo(clo46902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4043840563;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40718 = encode_clo(alloc_clo(lam40718_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40721 = arg_buffer[1];
//reading env and args
void* kont40433 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar46903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46903, "0", 10);
void* a4033440558 = encode_mpz(mpzvar46903);

//creating new closure instance
void** clo46905 = alloc_clo(lam40718_fptr, 10);

//setting env list
clo46905[1] = car;
clo46905[2] = n;
clo46905[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo46905[4] = take_u45helper;
clo46905[5] = cdr;
clo46905[6] = kont40433;
clo46905[7] = _u45;
clo46905[8] = cons;
clo46905[9] = reverse;
clo46905[10] = lst;
void* f4043940559 = encode_clo(clo46905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4043940559;
arg_buffer[3] = n;
arg_buffer[4] = a4033440558;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam40722_fptr() // lam40722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40723 = arg_buffer[1];
//reading env and args
void* a4034240573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40723))[4];
//not do dummy comment
void* kont40440 = (decode_clo(env40723))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40723))[2];
//not do dummy comment
void* n = (decode_clo(env40723))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont40440;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4034240573;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40722 = encode_clo(alloc_clo(lam40722_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40724 = arg_buffer[1];
//reading env and args
void* kont40440 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46907 = alloc_clo(lam40722_fptr, 4);

//setting env list
clo46907[1] = n;
clo46907[2] = take_u45helper;
clo46907[3] = kont40440;
clo46907[4] = lst;
void* f4044140572 = encode_clo(clo46907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4044140572;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam40726_fptr() // lam40726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40727 = arg_buffer[1];
//reading env and args
void* a4034740581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4034540577 = (decode_clo(env40727))[3];
//not do dummy comment
void* _u43 = (decode_clo(env40727))[2];
//not do dummy comment
void* kont40442 = (decode_clo(env40727))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont40442;
arg_buffer[3] = a4034540577;
arg_buffer[4] = a4034740581;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40726 = encode_clo(alloc_clo(lam40726_fptr, 0));

void* lam40728_fptr() // lam40728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40729 = arg_buffer[1];
//reading env and args
void* a4034640579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4034540577 = (decode_clo(env40729))[4];
//not do dummy comment
void* length = (decode_clo(env40729))[3];
//not do dummy comment
void* _u43 = (decode_clo(env40729))[2];
//not do dummy comment
void* kont40442 = (decode_clo(env40729))[1];

//creating new closure instance
void** clo46909 = alloc_clo(lam40726_fptr, 3);

//setting env list
clo46909[1] = kont40442;
clo46909[2] = _u43;
clo46909[3] = a4034540577;
void* f4044340580 = encode_clo(clo46909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4044340580;
arg_buffer[3] = a4034640579;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40728 = encode_clo(alloc_clo(lam40728_fptr, 0));

void* lam40731_fptr() // lam40731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40732 = arg_buffer[1];
//reading env and args
void* a4034340575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40732))[5];
//not do dummy comment
void* lst = (decode_clo(env40732))[4];
//not do dummy comment
void* length = (decode_clo(env40732))[3];
//not do dummy comment
void* _u43 = (decode_clo(env40732))[2];
//not do dummy comment
void* kont40442 = (decode_clo(env40732))[1];

//if-clause
bool if_guard46910 = is_true(a4034340575);
if(if_guard46910)
{
mpz_t* mpzvar46911 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46911, "0", 10);
void* x4034440576 = encode_mpz(mpzvar46911);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40442);
arg_buffer[2] = x4034440576;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40442))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar46912 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46912, "1", 10);
void* a4034540577 = encode_mpz(mpzvar46912);

//creating new closure instance
void** clo46914 = alloc_clo(lam40728_fptr, 4);

//setting env list
clo46914[1] = kont40442;
clo46914[2] = _u43;
clo46914[3] = length;
clo46914[4] = a4034540577;
void* f4044440578 = encode_clo(clo46914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4044440578;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40731 = encode_clo(alloc_clo(lam40731_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40733 = arg_buffer[1];
//reading env and args
void* kont40442 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46916 = alloc_clo(lam40731_fptr, 5);

//setting env list
clo46916[1] = kont40442;
clo46916[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo46916[3] = length;
clo46916[4] = lst;
clo46916[5] = cdr;
void* f4044540574 = encode_clo(clo46916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4044540574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam40734_fptr() // lam40734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40735 = arg_buffer[1];
//reading env and args
void* x4034940585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40446 = (decode_clo(env40735))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40446);
arg_buffer[2] = x4034940585;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40446))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40734 = encode_clo(alloc_clo(lam40734_fptr, 0));

void* lam40736_fptr() // lam40736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40737 = arg_buffer[1];
//reading env and args
void* a4035340593 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4035140589 = (decode_clo(env40737))[3];
//not do dummy comment
void* kont40446 = (decode_clo(env40737))[2];
//not do dummy comment
void* cons = (decode_clo(env40737))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont40446;
arg_buffer[3] = a4035140589;
arg_buffer[4] = a4035340593;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40736 = encode_clo(alloc_clo(lam40736_fptr, 0));

void* lam40738_fptr() // lam40738 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40739 = arg_buffer[1];
//reading env and args
void* a4035240591 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env40739))[5];
//not do dummy comment
void* proc = (decode_clo(env40739))[4];
//not do dummy comment
void* a4035140589 = (decode_clo(env40739))[3];
//not do dummy comment
void* kont40446 = (decode_clo(env40739))[2];
//not do dummy comment
void* cons = (decode_clo(env40739))[1];

//creating new closure instance
void** clo46918 = alloc_clo(lam40736_fptr, 3);

//setting env list
clo46918[1] = cons;
clo46918[2] = kont40446;
clo46918[3] = a4035140589;
void* f4044840592 = encode_clo(clo46918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4044840592;
arg_buffer[3] = proc;
arg_buffer[4] = a4035240591;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40738 = encode_clo(alloc_clo(lam40738_fptr, 0));

void* lam40740_fptr() // lam40740 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40741 = arg_buffer[1];
//reading env and args
void* a4035140589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40741))[6];
//not do dummy comment
void* lst = (decode_clo(env40741))[5];
//not do dummy comment
void* map = (decode_clo(env40741))[4];
//not do dummy comment
void* proc = (decode_clo(env40741))[3];
//not do dummy comment
void* kont40446 = (decode_clo(env40741))[2];
//not do dummy comment
void* cons = (decode_clo(env40741))[1];

//creating new closure instance
void** clo46920 = alloc_clo(lam40738_fptr, 5);

//setting env list
clo46920[1] = cons;
clo46920[2] = kont40446;
clo46920[3] = a4035140589;
clo46920[4] = proc;
clo46920[5] = map;
void* f4044940590 = encode_clo(clo46920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4044940590;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40740 = encode_clo(alloc_clo(lam40740_fptr, 0));

void* lam40742_fptr() // lam40742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40743 = arg_buffer[1];
//reading env and args
void* a4035040587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40743))[6];
//not do dummy comment
void* lst = (decode_clo(env40743))[5];
//not do dummy comment
void* map = (decode_clo(env40743))[4];
//not do dummy comment
void* proc = (decode_clo(env40743))[3];
//not do dummy comment
void* kont40446 = (decode_clo(env40743))[2];
//not do dummy comment
void* cons = (decode_clo(env40743))[1];

//creating new closure instance
void** clo46922 = alloc_clo(lam40740_fptr, 6);

//setting env list
clo46922[1] = cons;
clo46922[2] = kont40446;
clo46922[3] = proc;
clo46922[4] = map;
clo46922[5] = lst;
clo46922[6] = cdr;
void* f4045040588 = encode_clo(clo46922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4045040588;
arg_buffer[3] = a4035040587;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40742 = encode_clo(alloc_clo(lam40742_fptr, 0));

void* lam40744_fptr() // lam40744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40745 = arg_buffer[1];
//reading env and args
void* a4034840583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40745))[8];
//not do dummy comment
void* map = (decode_clo(env40745))[7];
//not do dummy comment
void* proc = (decode_clo(env40745))[6];
//not do dummy comment
void* cons = (decode_clo(env40745))[5];
//not do dummy comment
void* list = (decode_clo(env40745))[4];
//not do dummy comment
void* cdr = (decode_clo(env40745))[3];
//not do dummy comment
void* kont40446 = (decode_clo(env40745))[2];
//not do dummy comment
void* car = (decode_clo(env40745))[1];

//if-clause
bool if_guard46923 = is_true(a4034840583);
if(if_guard46923)
{

//creating new closure instance
void** clo46925 = alloc_clo(lam40734_fptr, 1);

//setting env list
clo46925[1] = kont40446;
void* f4044740584 = encode_clo(clo46925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4044740584;
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
void** clo46927 = alloc_clo(lam40742_fptr, 6);

//setting env list
clo46927[1] = cons;
clo46927[2] = kont40446;
clo46927[3] = proc;
clo46927[4] = map;
clo46927[5] = lst;
clo46927[6] = cdr;
void* f4045140586 = encode_clo(clo46927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4045140586;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40744 = encode_clo(alloc_clo(lam40744_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40746 = arg_buffer[1];
//reading env and args
void* kont40446 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46929 = alloc_clo(lam40744_fptr, 8);

//setting env list
clo46929[1] = car;
clo46929[2] = kont40446;
clo46929[3] = cdr;
clo46929[4] = list;
clo46929[5] = cons;
clo46929[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo46929[7] = map;
clo46929[8] = lst;
void* f4045240582 = encode_clo(clo46929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4045240582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam40747_fptr() // lam40747 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40748 = arg_buffer[1];
//reading env and args
void* x4035540597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40453 = (decode_clo(env40748))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40453);
arg_buffer[2] = x4035540597;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40453))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40747 = encode_clo(alloc_clo(lam40747_fptr, 0));

void* lam40749_fptr() // lam40749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40750 = arg_buffer[1];
//reading env and args
void* a4036040607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40453 = (decode_clo(env40750))[3];
//not do dummy comment
void* a4035840603 = (decode_clo(env40750))[2];
//not do dummy comment
void* cons = (decode_clo(env40750))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont40453;
arg_buffer[3] = a4035840603;
arg_buffer[4] = a4036040607;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40749 = encode_clo(alloc_clo(lam40749_fptr, 0));

void* lam40751_fptr() // lam40751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40752 = arg_buffer[1];
//reading env and args
void* a4035940605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40453 = (decode_clo(env40752))[5];
//not do dummy comment
void* op = (decode_clo(env40752))[4];
//not do dummy comment
void* a4035840603 = (decode_clo(env40752))[3];
//not do dummy comment
void* filter = (decode_clo(env40752))[2];
//not do dummy comment
void* cons = (decode_clo(env40752))[1];

//creating new closure instance
void** clo46931 = alloc_clo(lam40749_fptr, 3);

//setting env list
clo46931[1] = cons;
clo46931[2] = a4035840603;
clo46931[3] = kont40453;
void* f4045540606 = encode_clo(clo46931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4045540606;
arg_buffer[3] = op;
arg_buffer[4] = a4035940605;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40751 = encode_clo(alloc_clo(lam40751_fptr, 0));

void* lam40753_fptr() // lam40753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40754 = arg_buffer[1];
//reading env and args
void* a4035840603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40754))[6];
//not do dummy comment
void* op = (decode_clo(env40754))[5];
//not do dummy comment
void* filter = (decode_clo(env40754))[4];
//not do dummy comment
void* cons = (decode_clo(env40754))[3];
//not do dummy comment
void* lst = (decode_clo(env40754))[2];
//not do dummy comment
void* kont40453 = (decode_clo(env40754))[1];

//creating new closure instance
void** clo46933 = alloc_clo(lam40751_fptr, 5);

//setting env list
clo46933[1] = cons;
clo46933[2] = filter;
clo46933[3] = a4035840603;
clo46933[4] = op;
clo46933[5] = kont40453;
void* f4045640604 = encode_clo(clo46933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4045640604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40753 = encode_clo(alloc_clo(lam40753_fptr, 0));

void* lam40755_fptr() // lam40755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40756 = arg_buffer[1];
//reading env and args
void* a4036140609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40453 = (decode_clo(env40756))[3];
//not do dummy comment
void* op = (decode_clo(env40756))[2];
//not do dummy comment
void* filter = (decode_clo(env40756))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont40453;
arg_buffer[3] = op;
arg_buffer[4] = a4036140609;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40755 = encode_clo(alloc_clo(lam40755_fptr, 0));

void* lam40757_fptr() // lam40757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40758 = arg_buffer[1];
//reading env and args
void* a4035740601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40758))[7];
//not do dummy comment
void* op = (decode_clo(env40758))[6];
//not do dummy comment
void* cons = (decode_clo(env40758))[5];
//not do dummy comment
void* lst = (decode_clo(env40758))[4];
//not do dummy comment
void* kont40453 = (decode_clo(env40758))[3];
//not do dummy comment
void* filter = (decode_clo(env40758))[2];
//not do dummy comment
void* car = (decode_clo(env40758))[1];

//if-clause
bool if_guard46934 = is_true(a4035740601);
if(if_guard46934)
{

//creating new closure instance
void** clo46936 = alloc_clo(lam40753_fptr, 6);

//setting env list
clo46936[1] = kont40453;
clo46936[2] = lst;
clo46936[3] = cons;
clo46936[4] = filter;
clo46936[5] = op;
clo46936[6] = cdr;
void* f4045740602 = encode_clo(clo46936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4045740602;
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
void** clo46938 = alloc_clo(lam40755_fptr, 3);

//setting env list
clo46938[1] = filter;
clo46938[2] = op;
clo46938[3] = kont40453;
void* f4045840608 = encode_clo(clo46938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4045840608;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40757 = encode_clo(alloc_clo(lam40757_fptr, 0));

void* lam40759_fptr() // lam40759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40760 = arg_buffer[1];
//reading env and args
void* a4035640599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40760))[7];
//not do dummy comment
void* op = (decode_clo(env40760))[6];
//not do dummy comment
void* cons = (decode_clo(env40760))[5];
//not do dummy comment
void* lst = (decode_clo(env40760))[4];
//not do dummy comment
void* kont40453 = (decode_clo(env40760))[3];
//not do dummy comment
void* filter = (decode_clo(env40760))[2];
//not do dummy comment
void* car = (decode_clo(env40760))[1];

//creating new closure instance
void** clo46940 = alloc_clo(lam40757_fptr, 7);

//setting env list
clo46940[1] = car;
clo46940[2] = filter;
clo46940[3] = kont40453;
clo46940[4] = lst;
clo46940[5] = cons;
clo46940[6] = op;
clo46940[7] = cdr;
void* f4045940600 = encode_clo(clo46940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4045940600;
arg_buffer[3] = a4035640599;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40759 = encode_clo(alloc_clo(lam40759_fptr, 0));

void* lam40761_fptr() // lam40761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40762 = arg_buffer[1];
//reading env and args
void* a4035440595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env40762))[8];
//not do dummy comment
void* cons = (decode_clo(env40762))[7];
//not do dummy comment
void* list = (decode_clo(env40762))[6];
//not do dummy comment
void* cdr = (decode_clo(env40762))[5];
//not do dummy comment
void* lst = (decode_clo(env40762))[4];
//not do dummy comment
void* kont40453 = (decode_clo(env40762))[3];
//not do dummy comment
void* filter = (decode_clo(env40762))[2];
//not do dummy comment
void* car = (decode_clo(env40762))[1];

//if-clause
bool if_guard46941 = is_true(a4035440595);
if(if_guard46941)
{

//creating new closure instance
void** clo46943 = alloc_clo(lam40747_fptr, 1);

//setting env list
clo46943[1] = kont40453;
void* f4045440596 = encode_clo(clo46943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4045440596;
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
void** clo46945 = alloc_clo(lam40759_fptr, 7);

//setting env list
clo46945[1] = car;
clo46945[2] = filter;
clo46945[3] = kont40453;
clo46945[4] = lst;
clo46945[5] = cons;
clo46945[6] = op;
clo46945[7] = cdr;
void* f4046040598 = encode_clo(clo46945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4046040598;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40761 = encode_clo(alloc_clo(lam40761_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40763 = arg_buffer[1];
//reading env and args
void* kont40453 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46947 = alloc_clo(lam40761_fptr, 8);

//setting env list
clo46947[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo46947[2] = filter;
clo46947[3] = kont40453;
clo46947[4] = lst;
clo46947[5] = cdr;
clo46947[6] = list;
clo46947[7] = cons;
clo46947[8] = op;
void* f4046140594 = encode_clo(clo46947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4046140594;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam40764_fptr() // lam40764 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40765 = arg_buffer[1];
//reading env and args
void* a4036640617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env40765))[3];
//not do dummy comment
void* a4036440614 = (decode_clo(env40765))[2];
//not do dummy comment
void* kont40462 = (decode_clo(env40765))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont40462;
arg_buffer[3] = a4036440614;
arg_buffer[4] = a4036640617;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40764 = encode_clo(alloc_clo(lam40764_fptr, 0));

void* lam40767_fptr() // lam40767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40768 = arg_buffer[1];
//reading env and args
void* a4036440614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env40768))[4];
//not do dummy comment
void* _u45 = (decode_clo(env40768))[3];
//not do dummy comment
void* n = (decode_clo(env40768))[2];
//not do dummy comment
void* kont40462 = (decode_clo(env40768))[1];
mpz_t* mpzvar46948 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46948, "1", 10);
void* a4036540615 = encode_mpz(mpzvar46948);

//creating new closure instance
void** clo46950 = alloc_clo(lam40764_fptr, 3);

//setting env list
clo46950[1] = kont40462;
clo46950[2] = a4036440614;
clo46950[3] = drop;
void* f4046340616 = encode_clo(clo46950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4046340616;
arg_buffer[3] = n;
arg_buffer[4] = a4036540615;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40767 = encode_clo(alloc_clo(lam40767_fptr, 0));

void* lam40769_fptr() // lam40769 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40770 = arg_buffer[1];
//reading env and args
void* a4036340612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40770))[6];
//not do dummy comment
void* _u45 = (decode_clo(env40770))[5];
//not do dummy comment
void* lst = (decode_clo(env40770))[4];
//not do dummy comment
void* drop = (decode_clo(env40770))[3];
//not do dummy comment
void* n = (decode_clo(env40770))[2];
//not do dummy comment
void* kont40462 = (decode_clo(env40770))[1];

//if-clause
bool if_guard46951 = is_true(a4036340612);
if(if_guard46951)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40462);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40462))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46953 = alloc_clo(lam40767_fptr, 4);

//setting env list
clo46953[1] = kont40462;
clo46953[2] = n;
clo46953[3] = _u45;
clo46953[4] = drop;
void* f4046440613 = encode_clo(clo46953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4046440613;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40769 = encode_clo(alloc_clo(lam40769_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40772 = arg_buffer[1];
//reading env and args
void* kont40462 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar46954 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46954, "0", 10);
void* a4036240610 = encode_mpz(mpzvar46954);

//creating new closure instance
void** clo46956 = alloc_clo(lam40769_fptr, 6);

//setting env list
clo46956[1] = kont40462;
clo46956[2] = n;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo46956[3] = drop;
clo46956[4] = lst;
clo46956[5] = _u45;
clo46956[6] = cdr;
void* f4046540611 = encode_clo(clo46956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4046540611;
arg_buffer[3] = n;
arg_buffer[4] = a4036240610;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam40773_fptr() // lam40773 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40774 = arg_buffer[1];
//reading env and args
void* a4037040625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40466 = (decode_clo(env40774))[3];
//not do dummy comment
void* proc = (decode_clo(env40774))[2];
//not do dummy comment
void* a4036840621 = (decode_clo(env40774))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont40466;
arg_buffer[3] = a4036840621;
arg_buffer[4] = a4037040625;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40773 = encode_clo(alloc_clo(lam40773_fptr, 0));

void* lam40775_fptr() // lam40775 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40776 = arg_buffer[1];
//reading env and args
void* a4036940623 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40466 = (decode_clo(env40776))[5];
//not do dummy comment
void* foldr = (decode_clo(env40776))[4];
//not do dummy comment
void* a4036840621 = (decode_clo(env40776))[3];
//not do dummy comment
void* proc = (decode_clo(env40776))[2];
//not do dummy comment
void* acc = (decode_clo(env40776))[1];

//creating new closure instance
void** clo46958 = alloc_clo(lam40773_fptr, 3);

//setting env list
clo46958[1] = a4036840621;
clo46958[2] = proc;
clo46958[3] = kont40466;
void* f4046740624 = encode_clo(clo46958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4046740624;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4036940623;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40775 = encode_clo(alloc_clo(lam40775_fptr, 0));

void* lam40777_fptr() // lam40777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40778 = arg_buffer[1];
//reading env and args
void* a4036840621 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40778))[6];
//not do dummy comment
void* kont40466 = (decode_clo(env40778))[5];
//not do dummy comment
void* foldr = (decode_clo(env40778))[4];
//not do dummy comment
void* lst = (decode_clo(env40778))[3];
//not do dummy comment
void* proc = (decode_clo(env40778))[2];
//not do dummy comment
void* acc = (decode_clo(env40778))[1];

//creating new closure instance
void** clo46960 = alloc_clo(lam40775_fptr, 5);

//setting env list
clo46960[1] = acc;
clo46960[2] = proc;
clo46960[3] = a4036840621;
clo46960[4] = foldr;
clo46960[5] = kont40466;
void* f4046840622 = encode_clo(clo46960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4046840622;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40777 = encode_clo(alloc_clo(lam40777_fptr, 0));

void* lam40779_fptr() // lam40779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40780 = arg_buffer[1];
//reading env and args
void* a4036740619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40780))[7];
//not do dummy comment
void* kont40466 = (decode_clo(env40780))[6];
//not do dummy comment
void* car = (decode_clo(env40780))[5];
//not do dummy comment
void* foldr = (decode_clo(env40780))[4];
//not do dummy comment
void* lst = (decode_clo(env40780))[3];
//not do dummy comment
void* proc = (decode_clo(env40780))[2];
//not do dummy comment
void* acc = (decode_clo(env40780))[1];

//if-clause
bool if_guard46961 = is_true(a4036740619);
if(if_guard46961)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40466);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40466))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46963 = alloc_clo(lam40777_fptr, 6);

//setting env list
clo46963[1] = acc;
clo46963[2] = proc;
clo46963[3] = lst;
clo46963[4] = foldr;
clo46963[5] = kont40466;
clo46963[6] = cdr;
void* f4046940620 = encode_clo(clo46963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4046940620;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40779 = encode_clo(alloc_clo(lam40779_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40781 = arg_buffer[1];
//reading env and args
void* kont40466 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46965 = alloc_clo(lam40779_fptr, 7);

//setting env list
clo46965[1] = acc;
clo46965[2] = proc;
clo46965[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo46965[4] = foldr;
clo46965[5] = car;
clo46965[6] = kont40466;
clo46965[7] = cdr;
void* f4047040618 = encode_clo(clo46965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4047040618;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam40782_fptr() // lam40782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40783 = arg_buffer[1];
//reading env and args
void* a4037440633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4037240629 = (decode_clo(env40783))[3];
//not do dummy comment
void* kont40471 = (decode_clo(env40783))[2];
//not do dummy comment
void* cons = (decode_clo(env40783))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont40471;
arg_buffer[3] = a4037240629;
arg_buffer[4] = a4037440633;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40782 = encode_clo(alloc_clo(lam40782_fptr, 0));

void* lam40784_fptr() // lam40784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40785 = arg_buffer[1];
//reading env and args
void* a4037340631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4037240629 = (decode_clo(env40785))[5];
//not do dummy comment
void* kont40471 = (decode_clo(env40785))[4];
//not do dummy comment
void* append = (decode_clo(env40785))[3];
//not do dummy comment
void* lst2 = (decode_clo(env40785))[2];
//not do dummy comment
void* cons = (decode_clo(env40785))[1];

//creating new closure instance
void** clo46967 = alloc_clo(lam40782_fptr, 3);

//setting env list
clo46967[1] = cons;
clo46967[2] = kont40471;
clo46967[3] = a4037240629;
void* f4047240632 = encode_clo(clo46967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4047240632;
arg_buffer[3] = a4037340631;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40784 = encode_clo(alloc_clo(lam40784_fptr, 0));

void* lam40786_fptr() // lam40786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40787 = arg_buffer[1];
//reading env and args
void* a4037240629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40787))[6];
//not do dummy comment
void* kont40471 = (decode_clo(env40787))[5];
//not do dummy comment
void* append = (decode_clo(env40787))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40787))[3];
//not do dummy comment
void* lst1 = (decode_clo(env40787))[2];
//not do dummy comment
void* cons = (decode_clo(env40787))[1];

//creating new closure instance
void** clo46969 = alloc_clo(lam40784_fptr, 5);

//setting env list
clo46969[1] = cons;
clo46969[2] = lst2;
clo46969[3] = append;
clo46969[4] = kont40471;
clo46969[5] = a4037240629;
void* f4047340630 = encode_clo(clo46969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4047340630;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40786 = encode_clo(alloc_clo(lam40786_fptr, 0));

void* lam40788_fptr() // lam40788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40789 = arg_buffer[1];
//reading env and args
void* a4037140627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40789))[7];
//not do dummy comment
void* kont40471 = (decode_clo(env40789))[6];
//not do dummy comment
void* append = (decode_clo(env40789))[5];
//not do dummy comment
void* lst2 = (decode_clo(env40789))[4];
//not do dummy comment
void* cons = (decode_clo(env40789))[3];
//not do dummy comment
void* lst1 = (decode_clo(env40789))[2];
//not do dummy comment
void* car = (decode_clo(env40789))[1];

//if-clause
bool if_guard46970 = is_true(a4037140627);
if(if_guard46970)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40471);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40471))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46972 = alloc_clo(lam40786_fptr, 6);

//setting env list
clo46972[1] = cons;
clo46972[2] = lst1;
clo46972[3] = lst2;
clo46972[4] = append;
clo46972[5] = kont40471;
clo46972[6] = cdr;
void* f4047440628 = encode_clo(clo46972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4047440628;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40788 = encode_clo(alloc_clo(lam40788_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40790 = arg_buffer[1];
//reading env and args
void* kont40471 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46974 = alloc_clo(lam40788_fptr, 7);

//setting env list
clo46974[1] = car;
clo46974[2] = lst1;
clo46974[3] = cons;
clo46974[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo46974[5] = append;
clo46974[6] = kont40471;
clo46974[7] = cdr;
void* f4047540626 = encode_clo(clo46974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4047540626;
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
void* _40791 = arg_buffer[1];
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

void* kont4047640634 = prim_car(lst);
void* lst40635 = prim_cdr(lst);
void* x4037540636 = apply_prim_hash(lst40635);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4047640634);
arg_buffer[2] = x4037540636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4047640634))[0]);
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
void* _40792 = arg_buffer[1];
//reading env and args
void* kont40478 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4037640637 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40478);
arg_buffer[2] = x4037640637;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40478))[0]);
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
void* _40793 = arg_buffer[1];
//reading env and args
void* kont40479 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4037740638 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40479);
arg_buffer[2] = x4037740638;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40479))[0]);
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
void* _40794 = arg_buffer[1];
//reading env and args
void* kont40480 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4037840639 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40480);
arg_buffer[2] = x4037840639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40480))[0]);
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
void* _40795 = arg_buffer[1];
//reading env and args
void* kont40481 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4037940640 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40481);
arg_buffer[2] = x4037940640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40481))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam40796_fptr() // lam40796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40797 = arg_buffer[1];
//reading env and args
void* a4038340645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* filter = (decode_clo(env40797))[3];
//not do dummy comment
void* kont40482 = (decode_clo(env40797))[2];
//not do dummy comment
void* odd_u63 = (decode_clo(env40797))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont40482;
arg_buffer[3] = odd_u63;
arg_buffer[4] = a4038340645;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40796 = encode_clo(alloc_clo(lam40796_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40801 = arg_buffer[1];
//reading env and args
void* kont40482 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar46975 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46975, "1", 10);
void* a4038040641 = encode_mpz(mpzvar46975);
mpz_t* mpzvar46976 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46976, "2", 10);
void* a4038140642 = encode_mpz(mpzvar46976);
mpz_t* mpzvar46977 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46977, "3", 10);
void* a4038240643 = encode_mpz(mpzvar46977);

//creating new closure instance
void** clo46979 = alloc_clo(lam40796_fptr, 3);

//setting env list
clo46979[1] = odd_u63;
clo46979[2] = kont40482;
clo46979[3] = filter;
void* f4048340644 = encode_clo(clo46979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4048340644;
arg_buffer[3] = a4038040641;
arg_buffer[4] = a4038140642;
arg_buffer[5] = a4038240643;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam40802_fptr() // lam40802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40803 = arg_buffer[1];
//reading env and args
void* x4038440647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40484 = (decode_clo(env40803))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40484);
arg_buffer[2] = x4038440647;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40484))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40802 = encode_clo(alloc_clo(lam40802_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40804 = arg_buffer[1];
//reading env and args
void* kont40484 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo46981 = alloc_clo(lam40802_fptr, 1);

//setting env list
clo46981[1] = kont40484;
void* f4048540646 = encode_clo(clo46981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4048540646;
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

