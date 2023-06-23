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
void* _57584 = arg_buffer[1];
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

void* kont5731957420 = prim_car(lst);
void* lst57421 = prim_cdr(lst);
void* x5722957422 = apply_prim__u43(lst57421);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5731957420);
arg_buffer[2] = x5722957422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5731957420))[0]);
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
void* _57585 = arg_buffer[1];
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

void* kont5732157423 = prim_car(lst);
void* lst57424 = prim_cdr(lst);
void* x5723057425 = apply_prim__u45(lst57424);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5732157423);
arg_buffer[2] = x5723057425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5732157423))[0]);
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
void* _57586 = arg_buffer[1];
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

void* kont5732357426 = prim_car(lst);
void* lst57427 = prim_cdr(lst);
void* x5723157428 = apply_prim__u42(lst57427);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5732357426);
arg_buffer[2] = x5723157428;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5732357426))[0]);
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
void* _57587 = arg_buffer[1];
//reading env and args
void* kont57325 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5723257429 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57325);
arg_buffer[2] = x5723257429;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57325))[0]);
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
void* _57588 = arg_buffer[1];
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

void* kont5732657430 = prim_car(lst);
void* lst57431 = prim_cdr(lst);
void* x5723357432 = apply_prim__u47(lst57431);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5732657430);
arg_buffer[2] = x5723357432;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5732657430))[0]);
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
void* _57589 = arg_buffer[1];
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

void* kont5732857433 = prim_car(lst);
void* lst57434 = prim_cdr(lst);
void* x5723457435 = apply_prim__u61(lst57434);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5732857433);
arg_buffer[2] = x5723457435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5732857433))[0]);
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
void* _57590 = arg_buffer[1];
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

void* kont5733057436 = prim_car(lst);
void* lst57437 = prim_cdr(lst);
void* x5723557438 = apply_prim__u62(lst57437);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5733057436);
arg_buffer[2] = x5723557438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5733057436))[0]);
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
void* _57591 = arg_buffer[1];
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

void* kont5733257439 = prim_car(lst);
void* lst57440 = prim_cdr(lst);
void* x5723657441 = apply_prim__u60(lst57440);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5733257439);
arg_buffer[2] = x5723657441;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5733257439))[0]);
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
void* _57592 = arg_buffer[1];
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

void* kont5733457442 = prim_car(lst);
void* lst57443 = prim_cdr(lst);
void* x5723757444 = apply_prim__u60_u61(lst57443);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5733457442);
arg_buffer[2] = x5723757444;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5733457442))[0]);
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
void* _57593 = arg_buffer[1];
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

void* kont5733657445 = prim_car(lst);
void* lst57446 = prim_cdr(lst);
void* x5723857447 = apply_prim__u62_u61(lst57446);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5733657445);
arg_buffer[2] = x5723857447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5733657445))[0]);
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
void* _57594 = arg_buffer[1];
//reading env and args
void* kont57338 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5723957448 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57338);
arg_buffer[2] = x5723957448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57338))[0]);
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
void* _57595 = arg_buffer[1];
//reading env and args
void* kont57339 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5724057449 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57339);
arg_buffer[2] = x5724057449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57339))[0]);
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
void* _57596 = arg_buffer[1];
//reading env and args
void* kont57340 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5724157450 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57340);
arg_buffer[2] = x5724157450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57340))[0]);
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
void* _57597 = arg_buffer[1];
//reading env and args
void* kont57341 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5724257451 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57341);
arg_buffer[2] = x5724257451;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57341))[0]);
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
void* _57598 = arg_buffer[1];
//reading env and args
void* kont57342 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5724357452 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57342);
arg_buffer[2] = x5724357452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57342))[0]);
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
void* _57599 = arg_buffer[1];
//reading env and args
void* kont57343 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5724457453 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57343);
arg_buffer[2] = x5724457453;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57343))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam57600_fptr() // lam57600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57601 = arg_buffer[1];
//reading env and args
void* a5724757457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env57601))[3];
//not do dummy comment
void* a5724557454 = (decode_clo(env57601))[2];
//not do dummy comment
void* kont57344 = (decode_clo(env57601))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57344;
arg_buffer[3] = a5724557454;
arg_buffer[4] = a5724757457;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57600 = encode_clo(alloc_clo(lam57600_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57604 = arg_buffer[1];
//reading env and args
void* kont57344 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58527 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58527, "0", 10);
void* a5724557454 = encode_mpz(mpzvar58527);
mpz_t* mpzvar58528 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58528, "2", 10);
void* a5724657455 = encode_mpz(mpzvar58528);

//creating new closure instance
void** clo58530 = alloc_clo(lam57600_fptr, 3);

//setting env list
clo58530[1] = kont57344;
clo58530[2] = a5724557454;
clo58530[3] = equal_u63;
void* f5734557456 = encode_clo(clo58530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5734557456;
arg_buffer[3] = x;
arg_buffer[4] = a5724657455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam57605_fptr() // lam57605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57606 = arg_buffer[1];
//reading env and args
void* a5725057461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env57606))[3];
//not do dummy comment
void* kont57346 = (decode_clo(env57606))[2];
//not do dummy comment
void* a5724857458 = (decode_clo(env57606))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57346;
arg_buffer[3] = a5724857458;
arg_buffer[4] = a5725057461;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57605 = encode_clo(alloc_clo(lam57605_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57609 = arg_buffer[1];
//reading env and args
void* kont57346 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58531 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58531, "1", 10);
void* a5724857458 = encode_mpz(mpzvar58531);
mpz_t* mpzvar58532 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58532, "2", 10);
void* a5724957459 = encode_mpz(mpzvar58532);

//creating new closure instance
void** clo58534 = alloc_clo(lam57605_fptr, 3);

//setting env list
clo58534[1] = a5724857458;
clo58534[2] = kont57346;
clo58534[3] = equal_u63;
void* f5734757460 = encode_clo(clo58534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5734757460;
arg_buffer[3] = x;
arg_buffer[4] = a5724957459;
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
void* _57610 = arg_buffer[1];
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

void* kont5734857462 = prim_car(x);
void* x57463 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5734857462);
arg_buffer[2] = x57463;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5734857462))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam57613_fptr() // lam57613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57614 = arg_buffer[1];
//reading env and args
void* a5725657473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57350 = (decode_clo(env57614))[3];
//not do dummy comment
void* x = (decode_clo(env57614))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57614))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont57350;
arg_buffer[3] = x;
arg_buffer[4] = a5725657473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57613 = encode_clo(alloc_clo(lam57613_fptr, 0));

void* lam57615_fptr() // lam57615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57616 = arg_buffer[1];
//reading env and args
void* a5725457470 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57616))[5];
//not do dummy comment
void* kont57350 = (decode_clo(env57616))[4];
//not do dummy comment
void* lst = (decode_clo(env57616))[3];
//not do dummy comment
void* x = (decode_clo(env57616))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57616))[1];

//if-clause
bool if_guard58535 = is_true(a5725457470);
if(if_guard58535)
{
void* x5725557471 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57350);
arg_buffer[2] = x5725557471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57350))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58537 = alloc_clo(lam57613_fptr, 3);

//setting env list
clo58537[1] = member_u63;
clo58537[2] = x;
clo58537[3] = kont57350;
void* f5735157472 = encode_clo(clo58537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5735157472;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57615 = encode_clo(alloc_clo(lam57615_fptr, 0));

void* lam57617_fptr() // lam57617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57618 = arg_buffer[1];
//reading env and args
void* a5725357468 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57618))[6];
//not do dummy comment
void* kont57350 = (decode_clo(env57618))[5];
//not do dummy comment
void* lst = (decode_clo(env57618))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env57618))[3];
//not do dummy comment
void* x = (decode_clo(env57618))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57618))[1];

//creating new closure instance
void** clo58539 = alloc_clo(lam57615_fptr, 5);

//setting env list
clo58539[1] = member_u63;
clo58539[2] = x;
clo58539[3] = lst;
clo58539[4] = kont57350;
clo58539[5] = cdr;
void* f5735257469 = encode_clo(clo58539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5735257469;
arg_buffer[3] = a5725357468;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57617 = encode_clo(alloc_clo(lam57617_fptr, 0));

void* lam57619_fptr() // lam57619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57620 = arg_buffer[1];
//reading env and args
void* a5725157465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57620))[7];
//not do dummy comment
void* kont57350 = (decode_clo(env57620))[6];
//not do dummy comment
void* lst = (decode_clo(env57620))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env57620))[4];
//not do dummy comment
void* x = (decode_clo(env57620))[3];
//not do dummy comment
void* car = (decode_clo(env57620))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57620))[1];

//if-clause
bool if_guard58540 = is_true(a5725157465);
if(if_guard58540)
{
void* x5725257466 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57350);
arg_buffer[2] = x5725257466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57350))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58542 = alloc_clo(lam57617_fptr, 6);

//setting env list
clo58542[1] = member_u63;
clo58542[2] = x;
clo58542[3] = equal_u63;
clo58542[4] = lst;
clo58542[5] = kont57350;
clo58542[6] = cdr;
void* f5735357467 = encode_clo(clo58542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5735357467;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57619 = encode_clo(alloc_clo(lam57619_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57621 = arg_buffer[1];
//reading env and args
void* kont57350 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58544 = alloc_clo(lam57619_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo58544[1] = member_u63;
clo58544[2] = car;
clo58544[3] = x;
clo58544[4] = equal_u63;
clo58544[5] = lst;
clo58544[6] = kont57350;
clo58544[7] = cdr;
void* f5735457464 = encode_clo(clo58544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5735457464;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam57622_fptr() // lam57622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57623 = arg_buffer[1];
//reading env and args
void* a5726057481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5725957479 = (decode_clo(env57623))[4];
//not do dummy comment
void* kont57355 = (decode_clo(env57623))[3];
//not do dummy comment
void* fun = (decode_clo(env57623))[2];
//not do dummy comment
void* foldl = (decode_clo(env57623))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont57355;
arg_buffer[3] = fun;
arg_buffer[4] = a5725957479;
arg_buffer[5] = a5726057481;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57622 = encode_clo(alloc_clo(lam57622_fptr, 0));

void* lam57624_fptr() // lam57624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57625 = arg_buffer[1];
//reading env and args
void* a5725957479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57625))[5];
//not do dummy comment
void* lst = (decode_clo(env57625))[4];
//not do dummy comment
void* kont57355 = (decode_clo(env57625))[3];
//not do dummy comment
void* fun = (decode_clo(env57625))[2];
//not do dummy comment
void* foldl = (decode_clo(env57625))[1];

//creating new closure instance
void** clo58546 = alloc_clo(lam57622_fptr, 4);

//setting env list
clo58546[1] = foldl;
clo58546[2] = fun;
clo58546[3] = kont57355;
clo58546[4] = a5725957479;
void* f5735657480 = encode_clo(clo58546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5735657480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57624 = encode_clo(alloc_clo(lam57624_fptr, 0));

void* lam57626_fptr() // lam57626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57627 = arg_buffer[1];
//reading env and args
void* a5725857477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57627))[6];
//not do dummy comment
void* lst = (decode_clo(env57627))[5];
//not do dummy comment
void* kont57355 = (decode_clo(env57627))[4];
//not do dummy comment
void* fun = (decode_clo(env57627))[3];
//not do dummy comment
void* acc = (decode_clo(env57627))[2];
//not do dummy comment
void* foldl = (decode_clo(env57627))[1];

//creating new closure instance
void** clo58548 = alloc_clo(lam57624_fptr, 5);

//setting env list
clo58548[1] = foldl;
clo58548[2] = fun;
clo58548[3] = kont57355;
clo58548[4] = lst;
clo58548[5] = cdr;
void* f5735757478 = encode_clo(clo58548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5735757478;
arg_buffer[3] = a5725857477;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57626 = encode_clo(alloc_clo(lam57626_fptr, 0));

void* lam57628_fptr() // lam57628 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57629 = arg_buffer[1];
//reading env and args
void* a5725757475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57629))[7];
//not do dummy comment
void* lst = (decode_clo(env57629))[6];
//not do dummy comment
void* kont57355 = (decode_clo(env57629))[5];
//not do dummy comment
void* fun = (decode_clo(env57629))[4];
//not do dummy comment
void* acc = (decode_clo(env57629))[3];
//not do dummy comment
void* car = (decode_clo(env57629))[2];
//not do dummy comment
void* foldl = (decode_clo(env57629))[1];

//if-clause
bool if_guard58549 = is_true(a5725757475);
if(if_guard58549)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57355);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57355))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58551 = alloc_clo(lam57626_fptr, 6);

//setting env list
clo58551[1] = foldl;
clo58551[2] = acc;
clo58551[3] = fun;
clo58551[4] = kont57355;
clo58551[5] = lst;
clo58551[6] = cdr;
void* f5735857476 = encode_clo(clo58551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5735857476;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57628 = encode_clo(alloc_clo(lam57628_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57630 = arg_buffer[1];
//reading env and args
void* kont57355 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58553 = alloc_clo(lam57628_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo58553[1] = foldl;
clo58553[2] = car;
clo58553[3] = acc;
clo58553[4] = fun;
clo58553[5] = kont57355;
clo58553[6] = lst;
clo58553[7] = cdr;
void* f5735957474 = encode_clo(clo58553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5735957474;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam57631_fptr() // lam57631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57632 = arg_buffer[1];
//reading env and args
void* a5726457489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57632))[3];
//not do dummy comment
void* a5726257485 = (decode_clo(env57632))[2];
//not do dummy comment
void* kont57360 = (decode_clo(env57632))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57360;
arg_buffer[3] = a5726257485;
arg_buffer[4] = a5726457489;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57631 = encode_clo(alloc_clo(lam57631_fptr, 0));

void* lam57633_fptr() // lam57633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57634 = arg_buffer[1];
//reading env and args
void* a5726357487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57634))[5];
//not do dummy comment
void* a5726257485 = (decode_clo(env57634))[4];
//not do dummy comment
void* kont57360 = (decode_clo(env57634))[3];
//not do dummy comment
void* lst2 = (decode_clo(env57634))[2];
//not do dummy comment
void* cons = (decode_clo(env57634))[1];

//creating new closure instance
void** clo58555 = alloc_clo(lam57631_fptr, 3);

//setting env list
clo58555[1] = kont57360;
clo58555[2] = a5726257485;
clo58555[3] = reverse_u45helper;
void* f5736157488 = encode_clo(clo58555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5736157488;
arg_buffer[3] = a5726357487;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57633 = encode_clo(alloc_clo(lam57633_fptr, 0));

void* lam57635_fptr() // lam57635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57636 = arg_buffer[1];
//reading env and args
void* a5726257485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57636))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57636))[5];
//not do dummy comment
void* kont57360 = (decode_clo(env57636))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57636))[3];
//not do dummy comment
void* car = (decode_clo(env57636))[2];
//not do dummy comment
void* cons = (decode_clo(env57636))[1];

//creating new closure instance
void** clo58557 = alloc_clo(lam57633_fptr, 5);

//setting env list
clo58557[1] = cons;
clo58557[2] = lst2;
clo58557[3] = kont57360;
clo58557[4] = a5726257485;
clo58557[5] = reverse_u45helper;
void* f5736257486 = encode_clo(clo58557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5736257486;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57635 = encode_clo(alloc_clo(lam57635_fptr, 0));

void* lam57637_fptr() // lam57637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57638 = arg_buffer[1];
//reading env and args
void* a5726157483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57638))[7];
//not do dummy comment
void* lst = (decode_clo(env57638))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57638))[5];
//not do dummy comment
void* kont57360 = (decode_clo(env57638))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57638))[3];
//not do dummy comment
void* car = (decode_clo(env57638))[2];
//not do dummy comment
void* cons = (decode_clo(env57638))[1];

//if-clause
bool if_guard58558 = is_true(a5726157483);
if(if_guard58558)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57360);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57360))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58560 = alloc_clo(lam57635_fptr, 6);

//setting env list
clo58560[1] = cons;
clo58560[2] = car;
clo58560[3] = lst2;
clo58560[4] = kont57360;
clo58560[5] = reverse_u45helper;
clo58560[6] = lst;
void* f5736357484 = encode_clo(clo58560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5736357484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57637 = encode_clo(alloc_clo(lam57637_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57639 = arg_buffer[1];
//reading env and args
void* kont57360 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58562 = alloc_clo(lam57637_fptr, 7);

//setting env list
clo58562[1] = cons;
clo58562[2] = car;
clo58562[3] = lst2;
clo58562[4] = kont57360;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo58562[5] = reverse_u45helper;
clo58562[6] = lst;
clo58562[7] = cdr;
void* f5736457482 = encode_clo(clo58562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5736457482;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam57640_fptr() // lam57640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57641 = arg_buffer[1];
//reading env and args
void* a5726557491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57365 = (decode_clo(env57641))[3];
//not do dummy comment
void* lst = (decode_clo(env57641))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57641))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57365;
arg_buffer[3] = lst;
arg_buffer[4] = a5726557491;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57640 = encode_clo(alloc_clo(lam57640_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57642 = arg_buffer[1];
//reading env and args
void* kont57365 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58564 = alloc_clo(lam57640_fptr, 3);

//setting env list
clo58564[1] = reverse_u45helper;
clo58564[2] = lst;
clo58564[3] = kont57365;
void* f5736657490 = encode_clo(clo58564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5736657490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam57643_fptr() // lam57643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57644 = arg_buffer[1];
//reading env and args
void* x5726857496 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57367 = (decode_clo(env57644))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57367);
arg_buffer[2] = x5726857496;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57367))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57643 = encode_clo(alloc_clo(lam57643_fptr, 0));

void* lam57645_fptr() // lam57645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57646 = arg_buffer[1];
//reading env and args
void* a5727357505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57367 = (decode_clo(env57646))[4];
//not do dummy comment
void* a5726957498 = (decode_clo(env57646))[3];
//not do dummy comment
void* a5727157501 = (decode_clo(env57646))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env57646))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57367;
arg_buffer[3] = a5726957498;
arg_buffer[4] = a5727157501;
arg_buffer[5] = a5727357505;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57645 = encode_clo(alloc_clo(lam57645_fptr, 0));

void* lam57647_fptr() // lam57647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57648 = arg_buffer[1];
//reading env and args
void* a5727257503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57367 = (decode_clo(env57648))[6];
//not do dummy comment
void* a5726957498 = (decode_clo(env57648))[5];
//not do dummy comment
void* a5727157501 = (decode_clo(env57648))[4];
//not do dummy comment
void* cons = (decode_clo(env57648))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57648))[2];
//not do dummy comment
void* lst2 = (decode_clo(env57648))[1];

//creating new closure instance
void** clo58566 = alloc_clo(lam57645_fptr, 4);

//setting env list
clo58566[1] = take_u45helper;
clo58566[2] = a5727157501;
clo58566[3] = a5726957498;
clo58566[4] = kont57367;
void* f5736957504 = encode_clo(clo58566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5736957504;
arg_buffer[3] = a5727257503;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57647 = encode_clo(alloc_clo(lam57647_fptr, 0));

void* lam57649_fptr() // lam57649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57650 = arg_buffer[1];
//reading env and args
void* a5727157501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57367 = (decode_clo(env57650))[7];
//not do dummy comment
void* lst = (decode_clo(env57650))[6];
//not do dummy comment
void* a5726957498 = (decode_clo(env57650))[5];
//not do dummy comment
void* car = (decode_clo(env57650))[4];
//not do dummy comment
void* cons = (decode_clo(env57650))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57650))[2];
//not do dummy comment
void* lst2 = (decode_clo(env57650))[1];

//creating new closure instance
void** clo58568 = alloc_clo(lam57647_fptr, 6);

//setting env list
clo58568[1] = lst2;
clo58568[2] = take_u45helper;
clo58568[3] = cons;
clo58568[4] = a5727157501;
clo58568[5] = a5726957498;
clo58568[6] = kont57367;
void* f5737057502 = encode_clo(clo58568);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5737057502;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57649 = encode_clo(alloc_clo(lam57649_fptr, 0));

void* lam57652_fptr() // lam57652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57653 = arg_buffer[1];
//reading env and args
void* a5726957498 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57367 = (decode_clo(env57653))[8];
//not do dummy comment
void* lst = (decode_clo(env57653))[7];
//not do dummy comment
void* cons = (decode_clo(env57653))[6];
//not do dummy comment
void* _u45 = (decode_clo(env57653))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57653))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57653))[3];
//not do dummy comment
void* n = (decode_clo(env57653))[2];
//not do dummy comment
void* car = (decode_clo(env57653))[1];
mpz_t* mpzvar58569 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58569, "1", 10);
void* a5727057499 = encode_mpz(mpzvar58569);

//creating new closure instance
void** clo58571 = alloc_clo(lam57649_fptr, 7);

//setting env list
clo58571[1] = lst2;
clo58571[2] = take_u45helper;
clo58571[3] = cons;
clo58571[4] = car;
clo58571[5] = a5726957498;
clo58571[6] = lst;
clo58571[7] = kont57367;
void* f5737157500 = encode_clo(clo58571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5737157500;
arg_buffer[3] = n;
arg_buffer[4] = a5727057499;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57652 = encode_clo(alloc_clo(lam57652_fptr, 0));

void* lam57654_fptr() // lam57654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57655 = arg_buffer[1];
//reading env and args
void* a5726757494 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57655))[10];
//not do dummy comment
void* kont57367 = (decode_clo(env57655))[9];
//not do dummy comment
void* lst = (decode_clo(env57655))[8];
//not do dummy comment
void* reverse = (decode_clo(env57655))[7];
//not do dummy comment
void* cons = (decode_clo(env57655))[6];
//not do dummy comment
void* _u45 = (decode_clo(env57655))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57655))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57655))[3];
//not do dummy comment
void* n = (decode_clo(env57655))[2];
//not do dummy comment
void* car = (decode_clo(env57655))[1];

//if-clause
bool if_guard58572 = is_true(a5726757494);
if(if_guard58572)
{

//creating new closure instance
void** clo58574 = alloc_clo(lam57643_fptr, 1);

//setting env list
clo58574[1] = kont57367;
void* f5736857495 = encode_clo(clo58574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5736857495;
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
void** clo58576 = alloc_clo(lam57652_fptr, 8);

//setting env list
clo58576[1] = car;
clo58576[2] = n;
clo58576[3] = lst2;
clo58576[4] = take_u45helper;
clo58576[5] = _u45;
clo58576[6] = cons;
clo58576[7] = lst;
clo58576[8] = kont57367;
void* f5737257497 = encode_clo(clo58576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5737257497;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57654 = encode_clo(alloc_clo(lam57654_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57657 = arg_buffer[1];
//reading env and args
void* kont57367 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar58577 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58577, "0", 10);
void* a5726657492 = encode_mpz(mpzvar58577);

//creating new closure instance
void** clo58579 = alloc_clo(lam57654_fptr, 10);

//setting env list
clo58579[1] = car;
clo58579[2] = n;
clo58579[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo58579[4] = take_u45helper;
clo58579[5] = _u45;
clo58579[6] = cons;
clo58579[7] = reverse;
clo58579[8] = lst;
clo58579[9] = kont57367;
clo58579[10] = cdr;
void* f5737357493 = encode_clo(clo58579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5737357493;
arg_buffer[3] = n;
arg_buffer[4] = a5726657492;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam57658_fptr() // lam57658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57659 = arg_buffer[1];
//reading env and args
void* a5727457507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57659))[4];
//not do dummy comment
void* kont57374 = (decode_clo(env57659))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57659))[2];
//not do dummy comment
void* n = (decode_clo(env57659))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57374;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5727457507;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57658 = encode_clo(alloc_clo(lam57658_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57660 = arg_buffer[1];
//reading env and args
void* kont57374 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58581 = alloc_clo(lam57658_fptr, 4);

//setting env list
clo58581[1] = n;
clo58581[2] = take_u45helper;
clo58581[3] = kont57374;
clo58581[4] = lst;
void* f5737557506 = encode_clo(clo58581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5737557506;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam57662_fptr() // lam57662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57663 = arg_buffer[1];
//reading env and args
void* a5727957515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5727757511 = (decode_clo(env57663))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57663))[2];
//not do dummy comment
void* kont57376 = (decode_clo(env57663))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont57376;
arg_buffer[3] = a5727757511;
arg_buffer[4] = a5727957515;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57662 = encode_clo(alloc_clo(lam57662_fptr, 0));

void* lam57664_fptr() // lam57664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57665 = arg_buffer[1];
//reading env and args
void* a5727857513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5727757511 = (decode_clo(env57665))[4];
//not do dummy comment
void* length = (decode_clo(env57665))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57665))[2];
//not do dummy comment
void* kont57376 = (decode_clo(env57665))[1];

//creating new closure instance
void** clo58583 = alloc_clo(lam57662_fptr, 3);

//setting env list
clo58583[1] = kont57376;
clo58583[2] = _u43;
clo58583[3] = a5727757511;
void* f5737757514 = encode_clo(clo58583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5737757514;
arg_buffer[3] = a5727857513;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57664 = encode_clo(alloc_clo(lam57664_fptr, 0));

void* lam57667_fptr() // lam57667 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57668 = arg_buffer[1];
//reading env and args
void* a5727557509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57668))[5];
//not do dummy comment
void* lst = (decode_clo(env57668))[4];
//not do dummy comment
void* length = (decode_clo(env57668))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57668))[2];
//not do dummy comment
void* kont57376 = (decode_clo(env57668))[1];

//if-clause
bool if_guard58584 = is_true(a5727557509);
if(if_guard58584)
{
mpz_t* mpzvar58585 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58585, "0", 10);
void* x5727657510 = encode_mpz(mpzvar58585);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57376);
arg_buffer[2] = x5727657510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57376))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar58586 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58586, "1", 10);
void* a5727757511 = encode_mpz(mpzvar58586);

//creating new closure instance
void** clo58588 = alloc_clo(lam57664_fptr, 4);

//setting env list
clo58588[1] = kont57376;
clo58588[2] = _u43;
clo58588[3] = length;
clo58588[4] = a5727757511;
void* f5737857512 = encode_clo(clo58588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5737857512;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57667 = encode_clo(alloc_clo(lam57667_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57669 = arg_buffer[1];
//reading env and args
void* kont57376 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58590 = alloc_clo(lam57667_fptr, 5);

//setting env list
clo58590[1] = kont57376;
clo58590[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo58590[3] = length;
clo58590[4] = lst;
clo58590[5] = cdr;
void* f5737957508 = encode_clo(clo58590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5737957508;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam57670_fptr() // lam57670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57671 = arg_buffer[1];
//reading env and args
void* x5728157519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57380 = (decode_clo(env57671))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57380);
arg_buffer[2] = x5728157519;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57380))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57670 = encode_clo(alloc_clo(lam57670_fptr, 0));

void* lam57672_fptr() // lam57672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57673 = arg_buffer[1];
//reading env and args
void* a5728557527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57380 = (decode_clo(env57673))[3];
//not do dummy comment
void* a5728357523 = (decode_clo(env57673))[2];
//not do dummy comment
void* cons = (decode_clo(env57673))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57380;
arg_buffer[3] = a5728357523;
arg_buffer[4] = a5728557527;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57672 = encode_clo(alloc_clo(lam57672_fptr, 0));

void* lam57674_fptr() // lam57674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57675 = arg_buffer[1];
//reading env and args
void* a5728457525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env57675))[5];
//not do dummy comment
void* proc = (decode_clo(env57675))[4];
//not do dummy comment
void* kont57380 = (decode_clo(env57675))[3];
//not do dummy comment
void* a5728357523 = (decode_clo(env57675))[2];
//not do dummy comment
void* cons = (decode_clo(env57675))[1];

//creating new closure instance
void** clo58592 = alloc_clo(lam57672_fptr, 3);

//setting env list
clo58592[1] = cons;
clo58592[2] = a5728357523;
clo58592[3] = kont57380;
void* f5738257526 = encode_clo(clo58592);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5738257526;
arg_buffer[3] = proc;
arg_buffer[4] = a5728457525;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57674 = encode_clo(alloc_clo(lam57674_fptr, 0));

void* lam57676_fptr() // lam57676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57677 = arg_buffer[1];
//reading env and args
void* a5728357523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57677))[6];
//not do dummy comment
void* lst = (decode_clo(env57677))[5];
//not do dummy comment
void* map = (decode_clo(env57677))[4];
//not do dummy comment
void* proc = (decode_clo(env57677))[3];
//not do dummy comment
void* cons = (decode_clo(env57677))[2];
//not do dummy comment
void* kont57380 = (decode_clo(env57677))[1];

//creating new closure instance
void** clo58594 = alloc_clo(lam57674_fptr, 5);

//setting env list
clo58594[1] = cons;
clo58594[2] = a5728357523;
clo58594[3] = kont57380;
clo58594[4] = proc;
clo58594[5] = map;
void* f5738357524 = encode_clo(clo58594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5738357524;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57676 = encode_clo(alloc_clo(lam57676_fptr, 0));

void* lam57678_fptr() // lam57678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57679 = arg_buffer[1];
//reading env and args
void* a5728257521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57679))[6];
//not do dummy comment
void* lst = (decode_clo(env57679))[5];
//not do dummy comment
void* map = (decode_clo(env57679))[4];
//not do dummy comment
void* proc = (decode_clo(env57679))[3];
//not do dummy comment
void* cons = (decode_clo(env57679))[2];
//not do dummy comment
void* kont57380 = (decode_clo(env57679))[1];

//creating new closure instance
void** clo58596 = alloc_clo(lam57676_fptr, 6);

//setting env list
clo58596[1] = kont57380;
clo58596[2] = cons;
clo58596[3] = proc;
clo58596[4] = map;
clo58596[5] = lst;
clo58596[6] = cdr;
void* f5738457522 = encode_clo(clo58596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5738457522;
arg_buffer[3] = a5728257521;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57678 = encode_clo(alloc_clo(lam57678_fptr, 0));

void* lam57680_fptr() // lam57680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57681 = arg_buffer[1];
//reading env and args
void* a5728057517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57681))[8];
//not do dummy comment
void* map = (decode_clo(env57681))[7];
//not do dummy comment
void* proc = (decode_clo(env57681))[6];
//not do dummy comment
void* car = (decode_clo(env57681))[5];
//not do dummy comment
void* cons = (decode_clo(env57681))[4];
//not do dummy comment
void* kont57380 = (decode_clo(env57681))[3];
//not do dummy comment
void* list = (decode_clo(env57681))[2];
//not do dummy comment
void* cdr = (decode_clo(env57681))[1];

//if-clause
bool if_guard58597 = is_true(a5728057517);
if(if_guard58597)
{

//creating new closure instance
void** clo58599 = alloc_clo(lam57670_fptr, 1);

//setting env list
clo58599[1] = kont57380;
void* f5738157518 = encode_clo(clo58599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5738157518;
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
void** clo58601 = alloc_clo(lam57678_fptr, 6);

//setting env list
clo58601[1] = kont57380;
clo58601[2] = cons;
clo58601[3] = proc;
clo58601[4] = map;
clo58601[5] = lst;
clo58601[6] = cdr;
void* f5738557520 = encode_clo(clo58601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5738557520;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57680 = encode_clo(alloc_clo(lam57680_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57682 = arg_buffer[1];
//reading env and args
void* kont57380 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58603 = alloc_clo(lam57680_fptr, 8);

//setting env list
clo58603[1] = cdr;
clo58603[2] = list;
clo58603[3] = kont57380;
clo58603[4] = cons;
clo58603[5] = car;
clo58603[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo58603[7] = map;
clo58603[8] = lst;
void* f5738657516 = encode_clo(clo58603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5738657516;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam57683_fptr() // lam57683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57684 = arg_buffer[1];
//reading env and args
void* x5728757531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57387 = (decode_clo(env57684))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57387);
arg_buffer[2] = x5728757531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57387))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57683 = encode_clo(alloc_clo(lam57683_fptr, 0));

void* lam57685_fptr() // lam57685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57686 = arg_buffer[1];
//reading env and args
void* a5729257541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57387 = (decode_clo(env57686))[3];
//not do dummy comment
void* a5729057537 = (decode_clo(env57686))[2];
//not do dummy comment
void* cons = (decode_clo(env57686))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57387;
arg_buffer[3] = a5729057537;
arg_buffer[4] = a5729257541;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57685 = encode_clo(alloc_clo(lam57685_fptr, 0));

void* lam57687_fptr() // lam57687 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57688 = arg_buffer[1];
//reading env and args
void* a5729157539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57387 = (decode_clo(env57688))[5];
//not do dummy comment
void* op = (decode_clo(env57688))[4];
//not do dummy comment
void* a5729057537 = (decode_clo(env57688))[3];
//not do dummy comment
void* filter = (decode_clo(env57688))[2];
//not do dummy comment
void* cons = (decode_clo(env57688))[1];

//creating new closure instance
void** clo58605 = alloc_clo(lam57685_fptr, 3);

//setting env list
clo58605[1] = cons;
clo58605[2] = a5729057537;
clo58605[3] = kont57387;
void* f5738957540 = encode_clo(clo58605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5738957540;
arg_buffer[3] = op;
arg_buffer[4] = a5729157539;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57687 = encode_clo(alloc_clo(lam57687_fptr, 0));

void* lam57689_fptr() // lam57689 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57690 = arg_buffer[1];
//reading env and args
void* a5729057537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57690))[6];
//not do dummy comment
void* lst = (decode_clo(env57690))[5];
//not do dummy comment
void* kont57387 = (decode_clo(env57690))[4];
//not do dummy comment
void* op = (decode_clo(env57690))[3];
//not do dummy comment
void* filter = (decode_clo(env57690))[2];
//not do dummy comment
void* cons = (decode_clo(env57690))[1];

//creating new closure instance
void** clo58607 = alloc_clo(lam57687_fptr, 5);

//setting env list
clo58607[1] = cons;
clo58607[2] = filter;
clo58607[3] = a5729057537;
clo58607[4] = op;
clo58607[5] = kont57387;
void* f5739057538 = encode_clo(clo58607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5739057538;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57689 = encode_clo(alloc_clo(lam57689_fptr, 0));

void* lam57691_fptr() // lam57691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57692 = arg_buffer[1];
//reading env and args
void* a5729357543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57387 = (decode_clo(env57692))[3];
//not do dummy comment
void* op = (decode_clo(env57692))[2];
//not do dummy comment
void* filter = (decode_clo(env57692))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont57387;
arg_buffer[3] = op;
arg_buffer[4] = a5729357543;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57691 = encode_clo(alloc_clo(lam57691_fptr, 0));

void* lam57693_fptr() // lam57693 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57694 = arg_buffer[1];
//reading env and args
void* a5728957535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57694))[7];
//not do dummy comment
void* lst = (decode_clo(env57694))[6];
//not do dummy comment
void* kont57387 = (decode_clo(env57694))[5];
//not do dummy comment
void* op = (decode_clo(env57694))[4];
//not do dummy comment
void* cons = (decode_clo(env57694))[3];
//not do dummy comment
void* filter = (decode_clo(env57694))[2];
//not do dummy comment
void* car = (decode_clo(env57694))[1];

//if-clause
bool if_guard58608 = is_true(a5728957535);
if(if_guard58608)
{

//creating new closure instance
void** clo58610 = alloc_clo(lam57689_fptr, 6);

//setting env list
clo58610[1] = cons;
clo58610[2] = filter;
clo58610[3] = op;
clo58610[4] = kont57387;
clo58610[5] = lst;
clo58610[6] = cdr;
void* f5739157536 = encode_clo(clo58610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5739157536;
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
void** clo58612 = alloc_clo(lam57691_fptr, 3);

//setting env list
clo58612[1] = filter;
clo58612[2] = op;
clo58612[3] = kont57387;
void* f5739257542 = encode_clo(clo58612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5739257542;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57693 = encode_clo(alloc_clo(lam57693_fptr, 0));

void* lam57695_fptr() // lam57695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57696 = arg_buffer[1];
//reading env and args
void* a5728857533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57696))[7];
//not do dummy comment
void* lst = (decode_clo(env57696))[6];
//not do dummy comment
void* kont57387 = (decode_clo(env57696))[5];
//not do dummy comment
void* op = (decode_clo(env57696))[4];
//not do dummy comment
void* cons = (decode_clo(env57696))[3];
//not do dummy comment
void* filter = (decode_clo(env57696))[2];
//not do dummy comment
void* car = (decode_clo(env57696))[1];

//creating new closure instance
void** clo58614 = alloc_clo(lam57693_fptr, 7);

//setting env list
clo58614[1] = car;
clo58614[2] = filter;
clo58614[3] = cons;
clo58614[4] = op;
clo58614[5] = kont57387;
clo58614[6] = lst;
clo58614[7] = cdr;
void* f5739357534 = encode_clo(clo58614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5739357534;
arg_buffer[3] = a5728857533;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57695 = encode_clo(alloc_clo(lam57695_fptr, 0));

void* lam57697_fptr() // lam57697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57698 = arg_buffer[1];
//reading env and args
void* a5728657529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57698))[8];
//not do dummy comment
void* kont57387 = (decode_clo(env57698))[7];
//not do dummy comment
void* op = (decode_clo(env57698))[6];
//not do dummy comment
void* cons = (decode_clo(env57698))[5];
//not do dummy comment
void* list = (decode_clo(env57698))[4];
//not do dummy comment
void* cdr = (decode_clo(env57698))[3];
//not do dummy comment
void* filter = (decode_clo(env57698))[2];
//not do dummy comment
void* car = (decode_clo(env57698))[1];

//if-clause
bool if_guard58615 = is_true(a5728657529);
if(if_guard58615)
{

//creating new closure instance
void** clo58617 = alloc_clo(lam57683_fptr, 1);

//setting env list
clo58617[1] = kont57387;
void* f5738857530 = encode_clo(clo58617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5738857530;
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
void** clo58619 = alloc_clo(lam57695_fptr, 7);

//setting env list
clo58619[1] = car;
clo58619[2] = filter;
clo58619[3] = cons;
clo58619[4] = op;
clo58619[5] = kont57387;
clo58619[6] = lst;
clo58619[7] = cdr;
void* f5739457532 = encode_clo(clo58619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5739457532;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57697 = encode_clo(alloc_clo(lam57697_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57699 = arg_buffer[1];
//reading env and args
void* kont57387 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58621 = alloc_clo(lam57697_fptr, 8);

//setting env list
clo58621[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo58621[2] = filter;
clo58621[3] = cdr;
clo58621[4] = list;
clo58621[5] = cons;
clo58621[6] = op;
clo58621[7] = kont57387;
clo58621[8] = lst;
void* f5739557528 = encode_clo(clo58621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5739557528;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam57700_fptr() // lam57700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57701 = arg_buffer[1];
//reading env and args
void* a5729857551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env57701))[3];
//not do dummy comment
void* a5729657548 = (decode_clo(env57701))[2];
//not do dummy comment
void* kont57396 = (decode_clo(env57701))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont57396;
arg_buffer[3] = a5729657548;
arg_buffer[4] = a5729857551;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57700 = encode_clo(alloc_clo(lam57700_fptr, 0));

void* lam57703_fptr() // lam57703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57704 = arg_buffer[1];
//reading env and args
void* a5729657548 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env57704))[4];
//not do dummy comment
void* n = (decode_clo(env57704))[3];
//not do dummy comment
void* kont57396 = (decode_clo(env57704))[2];
//not do dummy comment
void* _u45 = (decode_clo(env57704))[1];
mpz_t* mpzvar58622 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58622, "1", 10);
void* a5729757549 = encode_mpz(mpzvar58622);

//creating new closure instance
void** clo58624 = alloc_clo(lam57700_fptr, 3);

//setting env list
clo58624[1] = kont57396;
clo58624[2] = a5729657548;
clo58624[3] = drop;
void* f5739757550 = encode_clo(clo58624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5739757550;
arg_buffer[3] = n;
arg_buffer[4] = a5729757549;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57703 = encode_clo(alloc_clo(lam57703_fptr, 0));

void* lam57705_fptr() // lam57705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57706 = arg_buffer[1];
//reading env and args
void* a5729557546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57706))[6];
//not do dummy comment
void* n = (decode_clo(env57706))[5];
//not do dummy comment
void* lst = (decode_clo(env57706))[4];
//not do dummy comment
void* drop = (decode_clo(env57706))[3];
//not do dummy comment
void* kont57396 = (decode_clo(env57706))[2];
//not do dummy comment
void* _u45 = (decode_clo(env57706))[1];

//if-clause
bool if_guard58625 = is_true(a5729557546);
if(if_guard58625)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57396);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57396))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58627 = alloc_clo(lam57703_fptr, 4);

//setting env list
clo58627[1] = _u45;
clo58627[2] = kont57396;
clo58627[3] = n;
clo58627[4] = drop;
void* f5739857547 = encode_clo(clo58627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5739857547;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57705 = encode_clo(alloc_clo(lam57705_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57708 = arg_buffer[1];
//reading env and args
void* kont57396 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar58628 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58628, "0", 10);
void* a5729457544 = encode_mpz(mpzvar58628);

//creating new closure instance
void** clo58630 = alloc_clo(lam57705_fptr, 6);

//setting env list
clo58630[1] = _u45;
clo58630[2] = kont57396;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo58630[3] = drop;
clo58630[4] = lst;
clo58630[5] = n;
clo58630[6] = cdr;
void* f5739957545 = encode_clo(clo58630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5739957545;
arg_buffer[3] = n;
arg_buffer[4] = a5729457544;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam57709_fptr() // lam57709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57710 = arg_buffer[1];
//reading env and args
void* a5730257559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57400 = (decode_clo(env57710))[3];
//not do dummy comment
void* proc = (decode_clo(env57710))[2];
//not do dummy comment
void* a5730057555 = (decode_clo(env57710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont57400;
arg_buffer[3] = a5730057555;
arg_buffer[4] = a5730257559;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57709 = encode_clo(alloc_clo(lam57709_fptr, 0));

void* lam57711_fptr() // lam57711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57712 = arg_buffer[1];
//reading env and args
void* a5730157557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57400 = (decode_clo(env57712))[5];
//not do dummy comment
void* foldr = (decode_clo(env57712))[4];
//not do dummy comment
void* a5730057555 = (decode_clo(env57712))[3];
//not do dummy comment
void* proc = (decode_clo(env57712))[2];
//not do dummy comment
void* acc = (decode_clo(env57712))[1];

//creating new closure instance
void** clo58632 = alloc_clo(lam57709_fptr, 3);

//setting env list
clo58632[1] = a5730057555;
clo58632[2] = proc;
clo58632[3] = kont57400;
void* f5740157558 = encode_clo(clo58632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5740157558;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5730157557;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57711 = encode_clo(alloc_clo(lam57711_fptr, 0));

void* lam57713_fptr() // lam57713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57714 = arg_buffer[1];
//reading env and args
void* a5730057555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57714))[6];
//not do dummy comment
void* kont57400 = (decode_clo(env57714))[5];
//not do dummy comment
void* foldr = (decode_clo(env57714))[4];
//not do dummy comment
void* lst = (decode_clo(env57714))[3];
//not do dummy comment
void* proc = (decode_clo(env57714))[2];
//not do dummy comment
void* acc = (decode_clo(env57714))[1];

//creating new closure instance
void** clo58634 = alloc_clo(lam57711_fptr, 5);

//setting env list
clo58634[1] = acc;
clo58634[2] = proc;
clo58634[3] = a5730057555;
clo58634[4] = foldr;
clo58634[5] = kont57400;
void* f5740257556 = encode_clo(clo58634);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5740257556;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57713 = encode_clo(alloc_clo(lam57713_fptr, 0));

void* lam57715_fptr() // lam57715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57716 = arg_buffer[1];
//reading env and args
void* a5729957553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57716))[7];
//not do dummy comment
void* kont57400 = (decode_clo(env57716))[6];
//not do dummy comment
void* car = (decode_clo(env57716))[5];
//not do dummy comment
void* foldr = (decode_clo(env57716))[4];
//not do dummy comment
void* lst = (decode_clo(env57716))[3];
//not do dummy comment
void* proc = (decode_clo(env57716))[2];
//not do dummy comment
void* acc = (decode_clo(env57716))[1];

//if-clause
bool if_guard58635 = is_true(a5729957553);
if(if_guard58635)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57400);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57400))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58637 = alloc_clo(lam57713_fptr, 6);

//setting env list
clo58637[1] = acc;
clo58637[2] = proc;
clo58637[3] = lst;
clo58637[4] = foldr;
clo58637[5] = kont57400;
clo58637[6] = cdr;
void* f5740357554 = encode_clo(clo58637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5740357554;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57715 = encode_clo(alloc_clo(lam57715_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57717 = arg_buffer[1];
//reading env and args
void* kont57400 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58639 = alloc_clo(lam57715_fptr, 7);

//setting env list
clo58639[1] = acc;
clo58639[2] = proc;
clo58639[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo58639[4] = foldr;
clo58639[5] = car;
clo58639[6] = kont57400;
clo58639[7] = cdr;
void* f5740457552 = encode_clo(clo58639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5740457552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam57718_fptr() // lam57718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57719 = arg_buffer[1];
//reading env and args
void* a5730657567 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5730457563 = (decode_clo(env57719))[3];
//not do dummy comment
void* kont57405 = (decode_clo(env57719))[2];
//not do dummy comment
void* cons = (decode_clo(env57719))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57405;
arg_buffer[3] = a5730457563;
arg_buffer[4] = a5730657567;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57718 = encode_clo(alloc_clo(lam57718_fptr, 0));

void* lam57720_fptr() // lam57720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57721 = arg_buffer[1];
//reading env and args
void* a5730557565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5730457563 = (decode_clo(env57721))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57721))[4];
//not do dummy comment
void* cons = (decode_clo(env57721))[3];
//not do dummy comment
void* append = (decode_clo(env57721))[2];
//not do dummy comment
void* kont57405 = (decode_clo(env57721))[1];

//creating new closure instance
void** clo58641 = alloc_clo(lam57718_fptr, 3);

//setting env list
clo58641[1] = cons;
clo58641[2] = kont57405;
clo58641[3] = a5730457563;
void* f5740657566 = encode_clo(clo58641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5740657566;
arg_buffer[3] = a5730557565;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57720 = encode_clo(alloc_clo(lam57720_fptr, 0));

void* lam57722_fptr() // lam57722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57723 = arg_buffer[1];
//reading env and args
void* a5730457563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57723))[6];
//not do dummy comment
void* lst2 = (decode_clo(env57723))[5];
//not do dummy comment
void* lst1 = (decode_clo(env57723))[4];
//not do dummy comment
void* cons = (decode_clo(env57723))[3];
//not do dummy comment
void* append = (decode_clo(env57723))[2];
//not do dummy comment
void* kont57405 = (decode_clo(env57723))[1];

//creating new closure instance
void** clo58643 = alloc_clo(lam57720_fptr, 5);

//setting env list
clo58643[1] = kont57405;
clo58643[2] = append;
clo58643[3] = cons;
clo58643[4] = lst2;
clo58643[5] = a5730457563;
void* f5740757564 = encode_clo(clo58643);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5740757564;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57722 = encode_clo(alloc_clo(lam57722_fptr, 0));

void* lam57724_fptr() // lam57724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57725 = arg_buffer[1];
//reading env and args
void* a5730357561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57725))[7];
//not do dummy comment
void* lst2 = (decode_clo(env57725))[6];
//not do dummy comment
void* cons = (decode_clo(env57725))[5];
//not do dummy comment
void* append = (decode_clo(env57725))[4];
//not do dummy comment
void* kont57405 = (decode_clo(env57725))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57725))[2];
//not do dummy comment
void* car = (decode_clo(env57725))[1];

//if-clause
bool if_guard58644 = is_true(a5730357561);
if(if_guard58644)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57405);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57405))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58646 = alloc_clo(lam57722_fptr, 6);

//setting env list
clo58646[1] = kont57405;
clo58646[2] = append;
clo58646[3] = cons;
clo58646[4] = lst1;
clo58646[5] = lst2;
clo58646[6] = cdr;
void* f5740857562 = encode_clo(clo58646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5740857562;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57724 = encode_clo(alloc_clo(lam57724_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57726 = arg_buffer[1];
//reading env and args
void* kont57405 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58648 = alloc_clo(lam57724_fptr, 7);

//setting env list
clo58648[1] = car;
clo58648[2] = lst1;
clo58648[3] = kont57405;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo58648[4] = append;
clo58648[5] = cons;
clo58648[6] = lst2;
clo58648[7] = cdr;
void* f5740957560 = encode_clo(clo58648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5740957560;
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
void* _57727 = arg_buffer[1];
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

void* kont5741057568 = prim_car(lst);
void* lst57569 = prim_cdr(lst);
void* x5730757570 = apply_prim_hash(lst57569);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5741057568);
arg_buffer[2] = x5730757570;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5741057568))[0]);
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
void* _57728 = arg_buffer[1];
//reading env and args
void* kont57412 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5730857571 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57412);
arg_buffer[2] = x5730857571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57412))[0]);
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
void* _57729 = arg_buffer[1];
//reading env and args
void* kont57413 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5730957572 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57413);
arg_buffer[2] = x5730957572;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57413))[0]);
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
void* _57730 = arg_buffer[1];
//reading env and args
void* kont57414 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5731057573 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57414);
arg_buffer[2] = x5731057573;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57414))[0]);
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
void* _57731 = arg_buffer[1];
//reading env and args
void* kont57415 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5731157574 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57415);
arg_buffer[2] = x5731157574;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57415))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam57733_fptr() // lam57733 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57734 = arg_buffer[1];
//reading env and args
void* a5731657580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57416 = (decode_clo(env57734))[2];
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env57734))[1];
mpz_t* mpzvar58649 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58649, "5", 10);
void* a5731757581 = encode_mpz(mpzvar58649);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45has_u45key_u63);
arg_buffer[2] = kont57416;
arg_buffer[3] = a5731657580;
arg_buffer[4] = a5731757581;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57733 = encode_clo(alloc_clo(lam57733_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57739 = arg_buffer[1];
//reading env and args
void* kont57416 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar58650 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58650, "100", 10);
void* a5731257575 = encode_mpz(mpzvar58650);
mpz_t* mpzvar58651 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58651, "80", 10);
void* a5731357576 = encode_mpz(mpzvar58651);
mpz_t* mpzvar58652 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58652, "10", 10);
void* a5731457577 = encode_mpz(mpzvar58652);
mpz_t* mpzvar58653 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58653, "2", 10);
void* a5731557578 = encode_mpz(mpzvar58653);

//creating new closure instance
void** clo58655 = alloc_clo(lam57733_fptr, 2);

//setting env list
clo58655[1] = hash_u45has_u45key_u63;
clo58655[2] = kont57416;
void* f5741757579 = encode_clo(clo58655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f5741757579;
arg_buffer[3] = a5731257575;
arg_buffer[4] = a5731357576;
arg_buffer[5] = a5731457577;
arg_buffer[6] = a5731557578;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam57740_fptr() // lam57740 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57741 = arg_buffer[1];
//reading env and args
void* x5731857583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57418 = (decode_clo(env57741))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57418);
arg_buffer[2] = x5731857583;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57418))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57740 = encode_clo(alloc_clo(lam57740_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57742 = arg_buffer[1];
//reading env and args
void* kont57418 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo58657 = alloc_clo(lam57740_fptr, 1);

//setting env list
clo58657[1] = kont57418;
void* f5741957582 = encode_clo(clo58657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5741957582;
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

