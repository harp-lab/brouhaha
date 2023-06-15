#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.h"
void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60687 = arg_buffer[1];
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

void* kont6042260523 = prim_car(lst);
void* lst60524 = prim_cdr(lst);
void* x6033260525 = apply_prim__u43(lst60524);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6042260523);
arg_buffer[2] = x6033260525;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6042260523))[0]);
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
void* _60688 = arg_buffer[1];
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

void* kont6042460526 = prim_car(lst);
void* lst60527 = prim_cdr(lst);
void* x6033360528 = apply_prim__u45(lst60527);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6042460526);
arg_buffer[2] = x6033360528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6042460526))[0]);
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
void* _60689 = arg_buffer[1];
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

void* kont6042660529 = prim_car(lst);
void* lst60530 = prim_cdr(lst);
void* x6033460531 = apply_prim__u42(lst60530);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6042660529);
arg_buffer[2] = x6033460531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6042660529))[0]);
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
void* _60690 = arg_buffer[1];
//reading env and args
void* kont60428 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6033560532 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60428);
arg_buffer[2] = x6033560532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60428))[0]);
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
void* _60691 = arg_buffer[1];
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

void* kont6042960533 = prim_car(lst);
void* lst60534 = prim_cdr(lst);
void* x6033660535 = apply_prim__u47(lst60534);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6042960533);
arg_buffer[2] = x6033660535;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6042960533))[0]);
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
void* _60692 = arg_buffer[1];
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

void* kont6043160536 = prim_car(lst);
void* lst60537 = prim_cdr(lst);
void* x6033760538 = apply_prim__u61(lst60537);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6043160536);
arg_buffer[2] = x6033760538;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6043160536))[0]);
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
void* _60693 = arg_buffer[1];
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

void* kont6043360539 = prim_car(lst);
void* lst60540 = prim_cdr(lst);
void* x6033860541 = apply_prim__u62(lst60540);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6043360539);
arg_buffer[2] = x6033860541;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6043360539))[0]);
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
void* _60694 = arg_buffer[1];
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

void* kont6043560542 = prim_car(lst);
void* lst60543 = prim_cdr(lst);
void* x6033960544 = apply_prim__u60(lst60543);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6043560542);
arg_buffer[2] = x6033960544;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6043560542))[0]);
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
void* _60695 = arg_buffer[1];
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

void* kont6043760545 = prim_car(lst);
void* lst60546 = prim_cdr(lst);
void* x6034060547 = apply_prim__u60_u61(lst60546);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6043760545);
arg_buffer[2] = x6034060547;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6043760545))[0]);
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
void* _60696 = arg_buffer[1];
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

void* kont6043960548 = prim_car(lst);
void* lst60549 = prim_cdr(lst);
void* x6034160550 = apply_prim__u62_u61(lst60549);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6043960548);
arg_buffer[2] = x6034160550;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6043960548))[0]);
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
void* _60697 = arg_buffer[1];
//reading env and args
void* kont60441 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x6034260551 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60441);
arg_buffer[2] = x6034260551;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60441))[0]);
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
void* _60698 = arg_buffer[1];
//reading env and args
void* kont60442 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6034360552 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60442);
arg_buffer[2] = x6034360552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60442))[0]);
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
void* _60699 = arg_buffer[1];
//reading env and args
void* kont60443 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6034460553 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60443);
arg_buffer[2] = x6034460553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60443))[0]);
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
void* _60700 = arg_buffer[1];
//reading env and args
void* kont60444 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6034560554 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60444);
arg_buffer[2] = x6034560554;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60444))[0]);
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
void* _60701 = arg_buffer[1];
//reading env and args
void* kont60445 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6034660555 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60445);
arg_buffer[2] = x6034660555;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60445))[0]);
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
void* _60702 = arg_buffer[1];
//reading env and args
void* kont60446 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6034760556 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60446);
arg_buffer[2] = x6034760556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60446))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam60703_fptr() // lam60703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60704 = arg_buffer[1];
//reading env and args
void* a6035060560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env60704))[3];
//not do dummy comment
void* a6034860557 = (decode_clo(env60704))[2];
//not do dummy comment
void* kont60447 = (decode_clo(env60704))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont60447;
arg_buffer[3] = a6034860557;
arg_buffer[4] = a6035060560;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60703 = encode_clo(alloc_clo(lam60703_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60707 = arg_buffer[1];
//reading env and args
void* kont60447 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar61686 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61686, "0", 10);
void* a6034860557 = encode_mpz(mpzvar61686);
mpz_t* mpzvar61687 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61687, "2", 10);
void* a6034960558 = encode_mpz(mpzvar61687);

//creating new closure instance
void** clo61689 = alloc_clo(lam60703_fptr, 3);

//setting env list
clo61689[1] = kont60447;
clo61689[2] = a6034860557;
clo61689[3] = equal_u63;
void* f6044860559 = encode_clo(clo61689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6044860559;
arg_buffer[3] = x;
arg_buffer[4] = a6034960558;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam60708_fptr() // lam60708 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60709 = arg_buffer[1];
//reading env and args
void* a6035360564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env60709))[3];
//not do dummy comment
void* a6035160561 = (decode_clo(env60709))[2];
//not do dummy comment
void* kont60449 = (decode_clo(env60709))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont60449;
arg_buffer[3] = a6035160561;
arg_buffer[4] = a6035360564;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60708 = encode_clo(alloc_clo(lam60708_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60712 = arg_buffer[1];
//reading env and args
void* kont60449 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar61690 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61690, "1", 10);
void* a6035160561 = encode_mpz(mpzvar61690);
mpz_t* mpzvar61691 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61691, "2", 10);
void* a6035260562 = encode_mpz(mpzvar61691);

//creating new closure instance
void** clo61693 = alloc_clo(lam60708_fptr, 3);

//setting env list
clo61693[1] = kont60449;
clo61693[2] = a6035160561;
clo61693[3] = equal_u63;
void* f6045060563 = encode_clo(clo61693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6045060563;
arg_buffer[3] = x;
arg_buffer[4] = a6035260562;
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
void* _60713 = arg_buffer[1];
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

void* kont6045160565 = prim_car(x);
void* x60566 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6045160565);
arg_buffer[2] = x60566;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6045160565))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam60716_fptr() // lam60716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60717 = arg_buffer[1];
//reading env and args
void* a6035960576 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60453 = (decode_clo(env60717))[3];
//not do dummy comment
void* x = (decode_clo(env60717))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env60717))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont60453;
arg_buffer[3] = x;
arg_buffer[4] = a6035960576;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60716 = encode_clo(alloc_clo(lam60716_fptr, 0));

void* lam60718_fptr() // lam60718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60719 = arg_buffer[1];
//reading env and args
void* a6035760573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60719))[5];
//not do dummy comment
void* x = (decode_clo(env60719))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env60719))[3];
//not do dummy comment
void* lst = (decode_clo(env60719))[2];
//not do dummy comment
void* kont60453 = (decode_clo(env60719))[1];

//if-clause
bool if_guard61694 = is_true(a6035760573);
if(if_guard61694)
{
void* x6035860574 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60453);
arg_buffer[2] = x6035860574;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60453))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61696 = alloc_clo(lam60716_fptr, 3);

//setting env list
clo61696[1] = member_u63;
clo61696[2] = x;
clo61696[3] = kont60453;
void* f6045460575 = encode_clo(clo61696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6045460575;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60718 = encode_clo(alloc_clo(lam60718_fptr, 0));

void* lam60720_fptr() // lam60720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60721 = arg_buffer[1];
//reading env and args
void* a6035660571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60721))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env60721))[5];
//not do dummy comment
void* x = (decode_clo(env60721))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env60721))[3];
//not do dummy comment
void* lst = (decode_clo(env60721))[2];
//not do dummy comment
void* kont60453 = (decode_clo(env60721))[1];

//creating new closure instance
void** clo61698 = alloc_clo(lam60718_fptr, 5);

//setting env list
clo61698[1] = kont60453;
clo61698[2] = lst;
clo61698[3] = member_u63;
clo61698[4] = x;
clo61698[5] = cdr;
void* f6045560572 = encode_clo(clo61698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f6045560572;
arg_buffer[3] = a6035660571;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60720 = encode_clo(alloc_clo(lam60720_fptr, 0));

void* lam60722_fptr() // lam60722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60723 = arg_buffer[1];
//reading env and args
void* a6035460568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60723))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env60723))[6];
//not do dummy comment
void* x = (decode_clo(env60723))[5];
//not do dummy comment
void* car = (decode_clo(env60723))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env60723))[3];
//not do dummy comment
void* lst = (decode_clo(env60723))[2];
//not do dummy comment
void* kont60453 = (decode_clo(env60723))[1];

//if-clause
bool if_guard61699 = is_true(a6035460568);
if(if_guard61699)
{
void* x6035560569 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60453);
arg_buffer[2] = x6035560569;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60453))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61701 = alloc_clo(lam60720_fptr, 6);

//setting env list
clo61701[1] = kont60453;
clo61701[2] = lst;
clo61701[3] = member_u63;
clo61701[4] = x;
clo61701[5] = equal_u63;
clo61701[6] = cdr;
void* f6045660570 = encode_clo(clo61701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6045660570;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60722 = encode_clo(alloc_clo(lam60722_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60724 = arg_buffer[1];
//reading env and args
void* kont60453 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61703 = alloc_clo(lam60722_fptr, 7);

//setting env list
clo61703[1] = kont60453;
clo61703[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo61703[3] = member_u63;
clo61703[4] = car;
clo61703[5] = x;
clo61703[6] = equal_u63;
clo61703[7] = cdr;
void* f6045760567 = encode_clo(clo61703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6045760567;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam60725_fptr() // lam60725 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60726 = arg_buffer[1];
//reading env and args
void* a6036360584 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6036260582 = (decode_clo(env60726))[4];
//not do dummy comment
void* kont60458 = (decode_clo(env60726))[3];
//not do dummy comment
void* fun = (decode_clo(env60726))[2];
//not do dummy comment
void* foldl = (decode_clo(env60726))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont60458;
arg_buffer[3] = fun;
arg_buffer[4] = a6036260582;
arg_buffer[5] = a6036360584;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60725 = encode_clo(alloc_clo(lam60725_fptr, 0));

void* lam60727_fptr() // lam60727 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60728 = arg_buffer[1];
//reading env and args
void* a6036260582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60728))[5];
//not do dummy comment
void* lst = (decode_clo(env60728))[4];
//not do dummy comment
void* kont60458 = (decode_clo(env60728))[3];
//not do dummy comment
void* fun = (decode_clo(env60728))[2];
//not do dummy comment
void* foldl = (decode_clo(env60728))[1];

//creating new closure instance
void** clo61705 = alloc_clo(lam60725_fptr, 4);

//setting env list
clo61705[1] = foldl;
clo61705[2] = fun;
clo61705[3] = kont60458;
clo61705[4] = a6036260582;
void* f6045960583 = encode_clo(clo61705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6045960583;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60727 = encode_clo(alloc_clo(lam60727_fptr, 0));

void* lam60729_fptr() // lam60729 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60730 = arg_buffer[1];
//reading env and args
void* a6036160580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60730))[6];
//not do dummy comment
void* lst = (decode_clo(env60730))[5];
//not do dummy comment
void* kont60458 = (decode_clo(env60730))[4];
//not do dummy comment
void* fun = (decode_clo(env60730))[3];
//not do dummy comment
void* acc = (decode_clo(env60730))[2];
//not do dummy comment
void* foldl = (decode_clo(env60730))[1];

//creating new closure instance
void** clo61707 = alloc_clo(lam60727_fptr, 5);

//setting env list
clo61707[1] = foldl;
clo61707[2] = fun;
clo61707[3] = kont60458;
clo61707[4] = lst;
clo61707[5] = cdr;
void* f6046060581 = encode_clo(clo61707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f6046060581;
arg_buffer[3] = a6036160580;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60729 = encode_clo(alloc_clo(lam60729_fptr, 0));

void* lam60731_fptr() // lam60731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60732 = arg_buffer[1];
//reading env and args
void* a6036060578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60732))[7];
//not do dummy comment
void* lst = (decode_clo(env60732))[6];
//not do dummy comment
void* kont60458 = (decode_clo(env60732))[5];
//not do dummy comment
void* fun = (decode_clo(env60732))[4];
//not do dummy comment
void* acc = (decode_clo(env60732))[3];
//not do dummy comment
void* car = (decode_clo(env60732))[2];
//not do dummy comment
void* foldl = (decode_clo(env60732))[1];

//if-clause
bool if_guard61708 = is_true(a6036060578);
if(if_guard61708)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60458);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60458))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61710 = alloc_clo(lam60729_fptr, 6);

//setting env list
clo61710[1] = foldl;
clo61710[2] = acc;
clo61710[3] = fun;
clo61710[4] = kont60458;
clo61710[5] = lst;
clo61710[6] = cdr;
void* f6046160579 = encode_clo(clo61710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6046160579;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60731 = encode_clo(alloc_clo(lam60731_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60733 = arg_buffer[1];
//reading env and args
void* kont60458 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo61712 = alloc_clo(lam60731_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo61712[1] = foldl;
clo61712[2] = car;
clo61712[3] = acc;
clo61712[4] = fun;
clo61712[5] = kont60458;
clo61712[6] = lst;
clo61712[7] = cdr;
void* f6046260577 = encode_clo(clo61712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6046260577;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam60734_fptr() // lam60734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60735 = arg_buffer[1];
//reading env and args
void* a6036760592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60735))[3];
//not do dummy comment
void* a6036560588 = (decode_clo(env60735))[2];
//not do dummy comment
void* kont60463 = (decode_clo(env60735))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont60463;
arg_buffer[3] = a6036560588;
arg_buffer[4] = a6036760592;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60734 = encode_clo(alloc_clo(lam60734_fptr, 0));

void* lam60736_fptr() // lam60736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60737 = arg_buffer[1];
//reading env and args
void* a6036660590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60737))[5];
//not do dummy comment
void* a6036560588 = (decode_clo(env60737))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60737))[3];
//not do dummy comment
void* cons = (decode_clo(env60737))[2];
//not do dummy comment
void* kont60463 = (decode_clo(env60737))[1];

//creating new closure instance
void** clo61714 = alloc_clo(lam60734_fptr, 3);

//setting env list
clo61714[1] = kont60463;
clo61714[2] = a6036560588;
clo61714[3] = reverse_u45helper;
void* f6046460591 = encode_clo(clo61714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6046460591;
arg_buffer[3] = a6036660590;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60736 = encode_clo(alloc_clo(lam60736_fptr, 0));

void* lam60738_fptr() // lam60738 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60739 = arg_buffer[1];
//reading env and args
void* a6036560588 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60739))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60739))[5];
//not do dummy comment
void* lst2 = (decode_clo(env60739))[4];
//not do dummy comment
void* car = (decode_clo(env60739))[3];
//not do dummy comment
void* cons = (decode_clo(env60739))[2];
//not do dummy comment
void* kont60463 = (decode_clo(env60739))[1];

//creating new closure instance
void** clo61716 = alloc_clo(lam60736_fptr, 5);

//setting env list
clo61716[1] = kont60463;
clo61716[2] = cons;
clo61716[3] = lst2;
clo61716[4] = a6036560588;
clo61716[5] = reverse_u45helper;
void* f6046560589 = encode_clo(clo61716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6046560589;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60738 = encode_clo(alloc_clo(lam60738_fptr, 0));

void* lam60740_fptr() // lam60740 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60741 = arg_buffer[1];
//reading env and args
void* a6036460586 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60741))[7];
//not do dummy comment
void* lst = (decode_clo(env60741))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60741))[5];
//not do dummy comment
void* lst2 = (decode_clo(env60741))[4];
//not do dummy comment
void* car = (decode_clo(env60741))[3];
//not do dummy comment
void* cons = (decode_clo(env60741))[2];
//not do dummy comment
void* kont60463 = (decode_clo(env60741))[1];

//if-clause
bool if_guard61717 = is_true(a6036460586);
if(if_guard61717)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60463);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60463))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61719 = alloc_clo(lam60738_fptr, 6);

//setting env list
clo61719[1] = kont60463;
clo61719[2] = cons;
clo61719[3] = car;
clo61719[4] = lst2;
clo61719[5] = reverse_u45helper;
clo61719[6] = lst;
void* f6046660587 = encode_clo(clo61719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6046660587;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60740 = encode_clo(alloc_clo(lam60740_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60742 = arg_buffer[1];
//reading env and args
void* kont60463 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61721 = alloc_clo(lam60740_fptr, 7);

//setting env list
clo61721[1] = kont60463;
clo61721[2] = cons;
clo61721[3] = car;
clo61721[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo61721[5] = reverse_u45helper;
clo61721[6] = lst;
clo61721[7] = cdr;
void* f6046760585 = encode_clo(clo61721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6046760585;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam60743_fptr() // lam60743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60744 = arg_buffer[1];
//reading env and args
void* a6036860594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60468 = (decode_clo(env60744))[3];
//not do dummy comment
void* lst = (decode_clo(env60744))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60744))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont60468;
arg_buffer[3] = lst;
arg_buffer[4] = a6036860594;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60743 = encode_clo(alloc_clo(lam60743_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60745 = arg_buffer[1];
//reading env and args
void* kont60468 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo61723 = alloc_clo(lam60743_fptr, 3);

//setting env list
clo61723[1] = reverse_u45helper;
clo61723[2] = lst;
clo61723[3] = kont60468;
void* f6046960593 = encode_clo(clo61723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6046960593;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam60746_fptr() // lam60746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60747 = arg_buffer[1];
//reading env and args
void* x6037160599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60470 = (decode_clo(env60747))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60470);
arg_buffer[2] = x6037160599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60470))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60746 = encode_clo(alloc_clo(lam60746_fptr, 0));

void* lam60748_fptr() // lam60748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60749 = arg_buffer[1];
//reading env and args
void* a6037660608 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60470 = (decode_clo(env60749))[4];
//not do dummy comment
void* a6037260601 = (decode_clo(env60749))[3];
//not do dummy comment
void* a6037460604 = (decode_clo(env60749))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env60749))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont60470;
arg_buffer[3] = a6037260601;
arg_buffer[4] = a6037460604;
arg_buffer[5] = a6037660608;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60748 = encode_clo(alloc_clo(lam60748_fptr, 0));

void* lam60750_fptr() // lam60750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60751 = arg_buffer[1];
//reading env and args
void* a6037560606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60470 = (decode_clo(env60751))[6];
//not do dummy comment
void* a6037260601 = (decode_clo(env60751))[5];
//not do dummy comment
void* a6037460604 = (decode_clo(env60751))[4];
//not do dummy comment
void* cons = (decode_clo(env60751))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env60751))[2];
//not do dummy comment
void* lst2 = (decode_clo(env60751))[1];

//creating new closure instance
void** clo61725 = alloc_clo(lam60748_fptr, 4);

//setting env list
clo61725[1] = take_u45helper;
clo61725[2] = a6037460604;
clo61725[3] = a6037260601;
clo61725[4] = kont60470;
void* f6047260607 = encode_clo(clo61725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6047260607;
arg_buffer[3] = a6037560606;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60750 = encode_clo(alloc_clo(lam60750_fptr, 0));

void* lam60752_fptr() // lam60752 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60753 = arg_buffer[1];
//reading env and args
void* a6037460604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60753))[7];
//not do dummy comment
void* kont60470 = (decode_clo(env60753))[6];
//not do dummy comment
void* a6037260601 = (decode_clo(env60753))[5];
//not do dummy comment
void* car = (decode_clo(env60753))[4];
//not do dummy comment
void* cons = (decode_clo(env60753))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env60753))[2];
//not do dummy comment
void* lst2 = (decode_clo(env60753))[1];

//creating new closure instance
void** clo61727 = alloc_clo(lam60750_fptr, 6);

//setting env list
clo61727[1] = lst2;
clo61727[2] = take_u45helper;
clo61727[3] = cons;
clo61727[4] = a6037460604;
clo61727[5] = a6037260601;
clo61727[6] = kont60470;
void* f6047360605 = encode_clo(clo61727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6047360605;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60752 = encode_clo(alloc_clo(lam60752_fptr, 0));

void* lam60755_fptr() // lam60755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60756 = arg_buffer[1];
//reading env and args
void* a6037260601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60756))[8];
//not do dummy comment
void* kont60470 = (decode_clo(env60756))[7];
//not do dummy comment
void* cons = (decode_clo(env60756))[6];
//not do dummy comment
void* _u45 = (decode_clo(env60756))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env60756))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60756))[3];
//not do dummy comment
void* n = (decode_clo(env60756))[2];
//not do dummy comment
void* car = (decode_clo(env60756))[1];
mpz_t* mpzvar61728 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61728, "1", 10);
void* a6037360602 = encode_mpz(mpzvar61728);

//creating new closure instance
void** clo61730 = alloc_clo(lam60752_fptr, 7);

//setting env list
clo61730[1] = lst2;
clo61730[2] = take_u45helper;
clo61730[3] = cons;
clo61730[4] = car;
clo61730[5] = a6037260601;
clo61730[6] = kont60470;
clo61730[7] = lst;
void* f6047460603 = encode_clo(clo61730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6047460603;
arg_buffer[3] = n;
arg_buffer[4] = a6037360602;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60755 = encode_clo(alloc_clo(lam60755_fptr, 0));

void* lam60757_fptr() // lam60757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60758 = arg_buffer[1];
//reading env and args
void* a6037060597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60758))[10];
//not do dummy comment
void* lst = (decode_clo(env60758))[9];
//not do dummy comment
void* kont60470 = (decode_clo(env60758))[8];
//not do dummy comment
void* reverse = (decode_clo(env60758))[7];
//not do dummy comment
void* cons = (decode_clo(env60758))[6];
//not do dummy comment
void* _u45 = (decode_clo(env60758))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env60758))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60758))[3];
//not do dummy comment
void* n = (decode_clo(env60758))[2];
//not do dummy comment
void* car = (decode_clo(env60758))[1];

//if-clause
bool if_guard61731 = is_true(a6037060597);
if(if_guard61731)
{

//creating new closure instance
void** clo61733 = alloc_clo(lam60746_fptr, 1);

//setting env list
clo61733[1] = kont60470;
void* f6047160598 = encode_clo(clo61733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f6047160598;
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
void** clo61735 = alloc_clo(lam60755_fptr, 8);

//setting env list
clo61735[1] = car;
clo61735[2] = n;
clo61735[3] = lst2;
clo61735[4] = take_u45helper;
clo61735[5] = _u45;
clo61735[6] = cons;
clo61735[7] = kont60470;
clo61735[8] = lst;
void* f6047560600 = encode_clo(clo61735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6047560600;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60757 = encode_clo(alloc_clo(lam60757_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60760 = arg_buffer[1];
//reading env and args
void* kont60470 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar61736 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61736, "0", 10);
void* a6036960595 = encode_mpz(mpzvar61736);

//creating new closure instance
void** clo61738 = alloc_clo(lam60757_fptr, 10);

//setting env list
clo61738[1] = car;
clo61738[2] = n;
clo61738[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo61738[4] = take_u45helper;
clo61738[5] = _u45;
clo61738[6] = cons;
clo61738[7] = reverse;
clo61738[8] = kont60470;
clo61738[9] = lst;
clo61738[10] = cdr;
void* f6047660596 = encode_clo(clo61738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6047660596;
arg_buffer[3] = n;
arg_buffer[4] = a6036960595;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam60761_fptr() // lam60761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60762 = arg_buffer[1];
//reading env and args
void* a6037760610 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60762))[4];
//not do dummy comment
void* n = (decode_clo(env60762))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env60762))[2];
//not do dummy comment
void* kont60477 = (decode_clo(env60762))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont60477;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a6037760610;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60761 = encode_clo(alloc_clo(lam60761_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60763 = arg_buffer[1];
//reading env and args
void* kont60477 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61740 = alloc_clo(lam60761_fptr, 4);

//setting env list
clo61740[1] = kont60477;
clo61740[2] = take_u45helper;
clo61740[3] = n;
clo61740[4] = lst;
void* f6047860609 = encode_clo(clo61740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6047860609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam60765_fptr() // lam60765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60766 = arg_buffer[1];
//reading env and args
void* a6038260618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6038060614 = (decode_clo(env60766))[3];
//not do dummy comment
void* _u43 = (decode_clo(env60766))[2];
//not do dummy comment
void* kont60479 = (decode_clo(env60766))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont60479;
arg_buffer[3] = a6038060614;
arg_buffer[4] = a6038260618;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60765 = encode_clo(alloc_clo(lam60765_fptr, 0));

void* lam60767_fptr() // lam60767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60768 = arg_buffer[1];
//reading env and args
void* a6038160616 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env60768))[4];
//not do dummy comment
void* kont60479 = (decode_clo(env60768))[3];
//not do dummy comment
void* a6038060614 = (decode_clo(env60768))[2];
//not do dummy comment
void* length = (decode_clo(env60768))[1];

//creating new closure instance
void** clo61742 = alloc_clo(lam60765_fptr, 3);

//setting env list
clo61742[1] = kont60479;
clo61742[2] = _u43;
clo61742[3] = a6038060614;
void* f6048060617 = encode_clo(clo61742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f6048060617;
arg_buffer[3] = a6038160616;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60767 = encode_clo(alloc_clo(lam60767_fptr, 0));

void* lam60770_fptr() // lam60770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60771 = arg_buffer[1];
//reading env and args
void* a6037860612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60771))[5];
//not do dummy comment
void* lst = (decode_clo(env60771))[4];
//not do dummy comment
void* length = (decode_clo(env60771))[3];
//not do dummy comment
void* _u43 = (decode_clo(env60771))[2];
//not do dummy comment
void* kont60479 = (decode_clo(env60771))[1];

//if-clause
bool if_guard61743 = is_true(a6037860612);
if(if_guard61743)
{
mpz_t* mpzvar61744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61744, "0", 10);
void* x6037960613 = encode_mpz(mpzvar61744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60479);
arg_buffer[2] = x6037960613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60479))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar61745 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61745, "1", 10);
void* a6038060614 = encode_mpz(mpzvar61745);

//creating new closure instance
void** clo61747 = alloc_clo(lam60767_fptr, 4);

//setting env list
clo61747[1] = length;
clo61747[2] = a6038060614;
clo61747[3] = kont60479;
clo61747[4] = _u43;
void* f6048160615 = encode_clo(clo61747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6048160615;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60770 = encode_clo(alloc_clo(lam60770_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60772 = arg_buffer[1];
//reading env and args
void* kont60479 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo61749 = alloc_clo(lam60770_fptr, 5);

//setting env list
clo61749[1] = kont60479;
clo61749[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo61749[3] = length;
clo61749[4] = lst;
clo61749[5] = cdr;
void* f6048260611 = encode_clo(clo61749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6048260611;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam60773_fptr() // lam60773 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60774 = arg_buffer[1];
//reading env and args
void* x6038460622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60483 = (decode_clo(env60774))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60483);
arg_buffer[2] = x6038460622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60483))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60773 = encode_clo(alloc_clo(lam60773_fptr, 0));

void* lam60775_fptr() // lam60775 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60776 = arg_buffer[1];
//reading env and args
void* a6038860630 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6038660626 = (decode_clo(env60776))[3];
//not do dummy comment
void* kont60483 = (decode_clo(env60776))[2];
//not do dummy comment
void* cons = (decode_clo(env60776))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont60483;
arg_buffer[3] = a6038660626;
arg_buffer[4] = a6038860630;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60775 = encode_clo(alloc_clo(lam60775_fptr, 0));

void* lam60777_fptr() // lam60777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60778 = arg_buffer[1];
//reading env and args
void* a6038760628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6038660626 = (decode_clo(env60778))[5];
//not do dummy comment
void* kont60483 = (decode_clo(env60778))[4];
//not do dummy comment
void* map = (decode_clo(env60778))[3];
//not do dummy comment
void* proc = (decode_clo(env60778))[2];
//not do dummy comment
void* cons = (decode_clo(env60778))[1];

//creating new closure instance
void** clo61751 = alloc_clo(lam60775_fptr, 3);

//setting env list
clo61751[1] = cons;
clo61751[2] = kont60483;
clo61751[3] = a6038660626;
void* f6048560629 = encode_clo(clo61751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f6048560629;
arg_buffer[3] = proc;
arg_buffer[4] = a6038760628;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60777 = encode_clo(alloc_clo(lam60777_fptr, 0));

void* lam60779_fptr() // lam60779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60780 = arg_buffer[1];
//reading env and args
void* a6038660626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60780))[6];
//not do dummy comment
void* kont60483 = (decode_clo(env60780))[5];
//not do dummy comment
void* lst = (decode_clo(env60780))[4];
//not do dummy comment
void* map = (decode_clo(env60780))[3];
//not do dummy comment
void* proc = (decode_clo(env60780))[2];
//not do dummy comment
void* cons = (decode_clo(env60780))[1];

//creating new closure instance
void** clo61753 = alloc_clo(lam60777_fptr, 5);

//setting env list
clo61753[1] = cons;
clo61753[2] = proc;
clo61753[3] = map;
clo61753[4] = kont60483;
clo61753[5] = a6038660626;
void* f6048660627 = encode_clo(clo61753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6048660627;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60779 = encode_clo(alloc_clo(lam60779_fptr, 0));

void* lam60781_fptr() // lam60781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60782 = arg_buffer[1];
//reading env and args
void* a6038560624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60782))[6];
//not do dummy comment
void* kont60483 = (decode_clo(env60782))[5];
//not do dummy comment
void* lst = (decode_clo(env60782))[4];
//not do dummy comment
void* map = (decode_clo(env60782))[3];
//not do dummy comment
void* proc = (decode_clo(env60782))[2];
//not do dummy comment
void* cons = (decode_clo(env60782))[1];

//creating new closure instance
void** clo61755 = alloc_clo(lam60779_fptr, 6);

//setting env list
clo61755[1] = cons;
clo61755[2] = proc;
clo61755[3] = map;
clo61755[4] = lst;
clo61755[5] = kont60483;
clo61755[6] = cdr;
void* f6048760625 = encode_clo(clo61755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f6048760625;
arg_buffer[3] = a6038560624;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60781 = encode_clo(alloc_clo(lam60781_fptr, 0));

void* lam60783_fptr() // lam60783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60784 = arg_buffer[1];
//reading env and args
void* a6038360620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60483 = (decode_clo(env60784))[8];
//not do dummy comment
void* lst = (decode_clo(env60784))[7];
//not do dummy comment
void* map = (decode_clo(env60784))[6];
//not do dummy comment
void* proc = (decode_clo(env60784))[5];
//not do dummy comment
void* car = (decode_clo(env60784))[4];
//not do dummy comment
void* cons = (decode_clo(env60784))[3];
//not do dummy comment
void* list = (decode_clo(env60784))[2];
//not do dummy comment
void* cdr = (decode_clo(env60784))[1];

//if-clause
bool if_guard61756 = is_true(a6038360620);
if(if_guard61756)
{

//creating new closure instance
void** clo61758 = alloc_clo(lam60773_fptr, 1);

//setting env list
clo61758[1] = kont60483;
void* f6048460621 = encode_clo(clo61758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6048460621;
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
void** clo61760 = alloc_clo(lam60781_fptr, 6);

//setting env list
clo61760[1] = cons;
clo61760[2] = proc;
clo61760[3] = map;
clo61760[4] = lst;
clo61760[5] = kont60483;
clo61760[6] = cdr;
void* f6048860623 = encode_clo(clo61760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6048860623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60783 = encode_clo(alloc_clo(lam60783_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60785 = arg_buffer[1];
//reading env and args
void* kont60483 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61762 = alloc_clo(lam60783_fptr, 8);

//setting env list
clo61762[1] = cdr;
clo61762[2] = list;
clo61762[3] = cons;
clo61762[4] = car;
clo61762[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo61762[6] = map;
clo61762[7] = lst;
clo61762[8] = kont60483;
void* f6048960619 = encode_clo(clo61762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6048960619;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam60786_fptr() // lam60786 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60787 = arg_buffer[1];
//reading env and args
void* x6039060634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60490 = (decode_clo(env60787))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60490);
arg_buffer[2] = x6039060634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60490))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60786 = encode_clo(alloc_clo(lam60786_fptr, 0));

void* lam60788_fptr() // lam60788 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60789 = arg_buffer[1];
//reading env and args
void* a6039560644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60490 = (decode_clo(env60789))[3];
//not do dummy comment
void* cons = (decode_clo(env60789))[2];
//not do dummy comment
void* a6039360640 = (decode_clo(env60789))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont60490;
arg_buffer[3] = a6039360640;
arg_buffer[4] = a6039560644;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60788 = encode_clo(alloc_clo(lam60788_fptr, 0));

void* lam60790_fptr() // lam60790 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60791 = arg_buffer[1];
//reading env and args
void* a6039460642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env60791))[5];
//not do dummy comment
void* kont60490 = (decode_clo(env60791))[4];
//not do dummy comment
void* filter = (decode_clo(env60791))[3];
//not do dummy comment
void* cons = (decode_clo(env60791))[2];
//not do dummy comment
void* a6039360640 = (decode_clo(env60791))[1];

//creating new closure instance
void** clo61764 = alloc_clo(lam60788_fptr, 3);

//setting env list
clo61764[1] = a6039360640;
clo61764[2] = cons;
clo61764[3] = kont60490;
void* f6049260643 = encode_clo(clo61764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f6049260643;
arg_buffer[3] = op;
arg_buffer[4] = a6039460642;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60790 = encode_clo(alloc_clo(lam60790_fptr, 0));

void* lam60792_fptr() // lam60792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60793 = arg_buffer[1];
//reading env and args
void* a6039360640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60793))[6];
//not do dummy comment
void* lst = (decode_clo(env60793))[5];
//not do dummy comment
void* op = (decode_clo(env60793))[4];
//not do dummy comment
void* kont60490 = (decode_clo(env60793))[3];
//not do dummy comment
void* filter = (decode_clo(env60793))[2];
//not do dummy comment
void* cons = (decode_clo(env60793))[1];

//creating new closure instance
void** clo61766 = alloc_clo(lam60790_fptr, 5);

//setting env list
clo61766[1] = a6039360640;
clo61766[2] = cons;
clo61766[3] = filter;
clo61766[4] = kont60490;
clo61766[5] = op;
void* f6049360641 = encode_clo(clo61766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6049360641;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60792 = encode_clo(alloc_clo(lam60792_fptr, 0));

void* lam60794_fptr() // lam60794 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60795 = arg_buffer[1];
//reading env and args
void* a6039660646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env60795))[3];
//not do dummy comment
void* kont60490 = (decode_clo(env60795))[2];
//not do dummy comment
void* filter = (decode_clo(env60795))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont60490;
arg_buffer[3] = op;
arg_buffer[4] = a6039660646;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60794 = encode_clo(alloc_clo(lam60794_fptr, 0));

void* lam60796_fptr() // lam60796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60797 = arg_buffer[1];
//reading env and args
void* a6039260638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60797))[7];
//not do dummy comment
void* lst = (decode_clo(env60797))[6];
//not do dummy comment
void* op = (decode_clo(env60797))[5];
//not do dummy comment
void* kont60490 = (decode_clo(env60797))[4];
//not do dummy comment
void* cons = (decode_clo(env60797))[3];
//not do dummy comment
void* filter = (decode_clo(env60797))[2];
//not do dummy comment
void* car = (decode_clo(env60797))[1];

//if-clause
bool if_guard61767 = is_true(a6039260638);
if(if_guard61767)
{

//creating new closure instance
void** clo61769 = alloc_clo(lam60792_fptr, 6);

//setting env list
clo61769[1] = cons;
clo61769[2] = filter;
clo61769[3] = kont60490;
clo61769[4] = op;
clo61769[5] = lst;
clo61769[6] = cdr;
void* f6049460639 = encode_clo(clo61769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6049460639;
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
void** clo61771 = alloc_clo(lam60794_fptr, 3);

//setting env list
clo61771[1] = filter;
clo61771[2] = kont60490;
clo61771[3] = op;
void* f6049560645 = encode_clo(clo61771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6049560645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60796 = encode_clo(alloc_clo(lam60796_fptr, 0));

void* lam60798_fptr() // lam60798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60799 = arg_buffer[1];
//reading env and args
void* a6039160636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60799))[7];
//not do dummy comment
void* lst = (decode_clo(env60799))[6];
//not do dummy comment
void* op = (decode_clo(env60799))[5];
//not do dummy comment
void* kont60490 = (decode_clo(env60799))[4];
//not do dummy comment
void* cons = (decode_clo(env60799))[3];
//not do dummy comment
void* filter = (decode_clo(env60799))[2];
//not do dummy comment
void* car = (decode_clo(env60799))[1];

//creating new closure instance
void** clo61773 = alloc_clo(lam60796_fptr, 7);

//setting env list
clo61773[1] = car;
clo61773[2] = filter;
clo61773[3] = cons;
clo61773[4] = kont60490;
clo61773[5] = op;
clo61773[6] = lst;
clo61773[7] = cdr;
void* f6049660637 = encode_clo(clo61773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f6049660637;
arg_buffer[3] = a6039160636;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60798 = encode_clo(alloc_clo(lam60798_fptr, 0));

void* lam60800_fptr() // lam60800 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60801 = arg_buffer[1];
//reading env and args
void* a6038960632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60801))[8];
//not do dummy comment
void* op = (decode_clo(env60801))[7];
//not do dummy comment
void* kont60490 = (decode_clo(env60801))[6];
//not do dummy comment
void* cons = (decode_clo(env60801))[5];
//not do dummy comment
void* list = (decode_clo(env60801))[4];
//not do dummy comment
void* cdr = (decode_clo(env60801))[3];
//not do dummy comment
void* filter = (decode_clo(env60801))[2];
//not do dummy comment
void* car = (decode_clo(env60801))[1];

//if-clause
bool if_guard61774 = is_true(a6038960632);
if(if_guard61774)
{

//creating new closure instance
void** clo61776 = alloc_clo(lam60786_fptr, 1);

//setting env list
clo61776[1] = kont60490;
void* f6049160633 = encode_clo(clo61776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6049160633;
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
void** clo61778 = alloc_clo(lam60798_fptr, 7);

//setting env list
clo61778[1] = car;
clo61778[2] = filter;
clo61778[3] = cons;
clo61778[4] = kont60490;
clo61778[5] = op;
clo61778[6] = lst;
clo61778[7] = cdr;
void* f6049760635 = encode_clo(clo61778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6049760635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60800 = encode_clo(alloc_clo(lam60800_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60802 = arg_buffer[1];
//reading env and args
void* kont60490 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61780 = alloc_clo(lam60800_fptr, 8);

//setting env list
clo61780[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo61780[2] = filter;
clo61780[3] = cdr;
clo61780[4] = list;
clo61780[5] = cons;
clo61780[6] = kont60490;
clo61780[7] = op;
clo61780[8] = lst;
void* f6049860631 = encode_clo(clo61780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6049860631;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam60803_fptr() // lam60803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60804 = arg_buffer[1];
//reading env and args
void* a6040160654 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60499 = (decode_clo(env60804))[3];
//not do dummy comment
void* drop = (decode_clo(env60804))[2];
//not do dummy comment
void* a6039960651 = (decode_clo(env60804))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont60499;
arg_buffer[3] = a6039960651;
arg_buffer[4] = a6040160654;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60803 = encode_clo(alloc_clo(lam60803_fptr, 0));

void* lam60806_fptr() // lam60806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60807 = arg_buffer[1];
//reading env and args
void* a6039960651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60499 = (decode_clo(env60807))[4];
//not do dummy comment
void* drop = (decode_clo(env60807))[3];
//not do dummy comment
void* n = (decode_clo(env60807))[2];
//not do dummy comment
void* _u45 = (decode_clo(env60807))[1];
mpz_t* mpzvar61781 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61781, "1", 10);
void* a6040060652 = encode_mpz(mpzvar61781);

//creating new closure instance
void** clo61783 = alloc_clo(lam60803_fptr, 3);

//setting env list
clo61783[1] = a6039960651;
clo61783[2] = drop;
clo61783[3] = kont60499;
void* f6050060653 = encode_clo(clo61783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6050060653;
arg_buffer[3] = n;
arg_buffer[4] = a6040060652;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60806 = encode_clo(alloc_clo(lam60806_fptr, 0));

void* lam60808_fptr() // lam60808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60809 = arg_buffer[1];
//reading env and args
void* a6039860649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60809))[6];
//not do dummy comment
void* kont60499 = (decode_clo(env60809))[5];
//not do dummy comment
void* n = (decode_clo(env60809))[4];
//not do dummy comment
void* _u45 = (decode_clo(env60809))[3];
//not do dummy comment
void* lst = (decode_clo(env60809))[2];
//not do dummy comment
void* drop = (decode_clo(env60809))[1];

//if-clause
bool if_guard61784 = is_true(a6039860649);
if(if_guard61784)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60499);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60499))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61786 = alloc_clo(lam60806_fptr, 4);

//setting env list
clo61786[1] = _u45;
clo61786[2] = n;
clo61786[3] = drop;
clo61786[4] = kont60499;
void* f6050160650 = encode_clo(clo61786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6050160650;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60808 = encode_clo(alloc_clo(lam60808_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60811 = arg_buffer[1];
//reading env and args
void* kont60499 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar61787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61787, "0", 10);
void* a6039760647 = encode_mpz(mpzvar61787);

//creating new closure instance
void** clo61789 = alloc_clo(lam60808_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo61789[1] = drop;
clo61789[2] = lst;
clo61789[3] = _u45;
clo61789[4] = n;
clo61789[5] = kont60499;
clo61789[6] = cdr;
void* f6050260648 = encode_clo(clo61789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6050260648;
arg_buffer[3] = n;
arg_buffer[4] = a6039760647;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam60812_fptr() // lam60812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60813 = arg_buffer[1];
//reading env and args
void* a6040560662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6040360658 = (decode_clo(env60813))[3];
//not do dummy comment
void* kont60503 = (decode_clo(env60813))[2];
//not do dummy comment
void* proc = (decode_clo(env60813))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont60503;
arg_buffer[3] = a6040360658;
arg_buffer[4] = a6040560662;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60812 = encode_clo(alloc_clo(lam60812_fptr, 0));

void* lam60814_fptr() // lam60814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60815 = arg_buffer[1];
//reading env and args
void* a6040460660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6040360658 = (decode_clo(env60815))[5];
//not do dummy comment
void* foldr = (decode_clo(env60815))[4];
//not do dummy comment
void* kont60503 = (decode_clo(env60815))[3];
//not do dummy comment
void* proc = (decode_clo(env60815))[2];
//not do dummy comment
void* acc = (decode_clo(env60815))[1];

//creating new closure instance
void** clo61791 = alloc_clo(lam60812_fptr, 3);

//setting env list
clo61791[1] = proc;
clo61791[2] = kont60503;
clo61791[3] = a6040360658;
void* f6050460661 = encode_clo(clo61791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f6050460661;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a6040460660;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60814 = encode_clo(alloc_clo(lam60814_fptr, 0));

void* lam60816_fptr() // lam60816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60817 = arg_buffer[1];
//reading env and args
void* a6040360658 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60817))[6];
//not do dummy comment
void* kont60503 = (decode_clo(env60817))[5];
//not do dummy comment
void* foldr = (decode_clo(env60817))[4];
//not do dummy comment
void* lst = (decode_clo(env60817))[3];
//not do dummy comment
void* proc = (decode_clo(env60817))[2];
//not do dummy comment
void* acc = (decode_clo(env60817))[1];

//creating new closure instance
void** clo61793 = alloc_clo(lam60814_fptr, 5);

//setting env list
clo61793[1] = acc;
clo61793[2] = proc;
clo61793[3] = kont60503;
clo61793[4] = foldr;
clo61793[5] = a6040360658;
void* f6050560659 = encode_clo(clo61793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6050560659;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60816 = encode_clo(alloc_clo(lam60816_fptr, 0));

void* lam60818_fptr() // lam60818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60819 = arg_buffer[1];
//reading env and args
void* a6040260656 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60819))[7];
//not do dummy comment
void* kont60503 = (decode_clo(env60819))[6];
//not do dummy comment
void* car = (decode_clo(env60819))[5];
//not do dummy comment
void* foldr = (decode_clo(env60819))[4];
//not do dummy comment
void* lst = (decode_clo(env60819))[3];
//not do dummy comment
void* proc = (decode_clo(env60819))[2];
//not do dummy comment
void* acc = (decode_clo(env60819))[1];

//if-clause
bool if_guard61794 = is_true(a6040260656);
if(if_guard61794)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60503);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60503))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61796 = alloc_clo(lam60816_fptr, 6);

//setting env list
clo61796[1] = acc;
clo61796[2] = proc;
clo61796[3] = lst;
clo61796[4] = foldr;
clo61796[5] = kont60503;
clo61796[6] = cdr;
void* f6050660657 = encode_clo(clo61796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6050660657;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60818 = encode_clo(alloc_clo(lam60818_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60820 = arg_buffer[1];
//reading env and args
void* kont60503 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo61798 = alloc_clo(lam60818_fptr, 7);

//setting env list
clo61798[1] = acc;
clo61798[2] = proc;
clo61798[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo61798[4] = foldr;
clo61798[5] = car;
clo61798[6] = kont60503;
clo61798[7] = cdr;
void* f6050760655 = encode_clo(clo61798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6050760655;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam60821_fptr() // lam60821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60822 = arg_buffer[1];
//reading env and args
void* a6040960670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6040760666 = (decode_clo(env60822))[3];
//not do dummy comment
void* kont60508 = (decode_clo(env60822))[2];
//not do dummy comment
void* cons = (decode_clo(env60822))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont60508;
arg_buffer[3] = a6040760666;
arg_buffer[4] = a6040960670;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60821 = encode_clo(alloc_clo(lam60821_fptr, 0));

void* lam60823_fptr() // lam60823 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60824 = arg_buffer[1];
//reading env and args
void* a6040860668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env60824))[5];
//not do dummy comment
void* a6040760666 = (decode_clo(env60824))[4];
//not do dummy comment
void* kont60508 = (decode_clo(env60824))[3];
//not do dummy comment
void* lst2 = (decode_clo(env60824))[2];
//not do dummy comment
void* cons = (decode_clo(env60824))[1];

//creating new closure instance
void** clo61800 = alloc_clo(lam60821_fptr, 3);

//setting env list
clo61800[1] = cons;
clo61800[2] = kont60508;
clo61800[3] = a6040760666;
void* f6050960669 = encode_clo(clo61800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f6050960669;
arg_buffer[3] = a6040860668;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60823 = encode_clo(alloc_clo(lam60823_fptr, 0));

void* lam60825_fptr() // lam60825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60826 = arg_buffer[1];
//reading env and args
void* a6040760666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60826))[6];
//not do dummy comment
void* append = (decode_clo(env60826))[5];
//not do dummy comment
void* kont60508 = (decode_clo(env60826))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60826))[3];
//not do dummy comment
void* lst1 = (decode_clo(env60826))[2];
//not do dummy comment
void* cons = (decode_clo(env60826))[1];

//creating new closure instance
void** clo61802 = alloc_clo(lam60823_fptr, 5);

//setting env list
clo61802[1] = cons;
clo61802[2] = lst2;
clo61802[3] = kont60508;
clo61802[4] = a6040760666;
clo61802[5] = append;
void* f6051060667 = encode_clo(clo61802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6051060667;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60825 = encode_clo(alloc_clo(lam60825_fptr, 0));

void* lam60827_fptr() // lam60827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60828 = arg_buffer[1];
//reading env and args
void* a6040660664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60828))[7];
//not do dummy comment
void* append = (decode_clo(env60828))[6];
//not do dummy comment
void* kont60508 = (decode_clo(env60828))[5];
//not do dummy comment
void* lst2 = (decode_clo(env60828))[4];
//not do dummy comment
void* cons = (decode_clo(env60828))[3];
//not do dummy comment
void* lst1 = (decode_clo(env60828))[2];
//not do dummy comment
void* car = (decode_clo(env60828))[1];

//if-clause
bool if_guard61803 = is_true(a6040660664);
if(if_guard61803)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60508);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60508))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61805 = alloc_clo(lam60825_fptr, 6);

//setting env list
clo61805[1] = cons;
clo61805[2] = lst1;
clo61805[3] = lst2;
clo61805[4] = kont60508;
clo61805[5] = append;
clo61805[6] = cdr;
void* f6051160665 = encode_clo(clo61805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6051160665;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60827 = encode_clo(alloc_clo(lam60827_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60829 = arg_buffer[1];
//reading env and args
void* kont60508 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61807 = alloc_clo(lam60827_fptr, 7);

//setting env list
clo61807[1] = car;
clo61807[2] = lst1;
clo61807[3] = cons;
clo61807[4] = lst2;
clo61807[5] = kont60508;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo61807[6] = append;
clo61807[7] = cdr;
void* f6051260663 = encode_clo(clo61807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6051260663;
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
void* _60830 = arg_buffer[1];
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

void* kont6051360671 = prim_car(lst);
void* lst60672 = prim_cdr(lst);
void* x6041060673 = apply_prim_hash(lst60672);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6051360671);
arg_buffer[2] = x6041060673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6051360671))[0]);
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
void* _60831 = arg_buffer[1];
//reading env and args
void* kont60515 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6041160674 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60515);
arg_buffer[2] = x6041160674;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60515))[0]);
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
void* _60832 = arg_buffer[1];
//reading env and args
void* kont60516 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x6041260675 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60516);
arg_buffer[2] = x6041260675;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60516))[0]);
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
void* _60833 = arg_buffer[1];
//reading env and args
void* kont60517 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6041360676 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60517);
arg_buffer[2] = x6041360676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60517))[0]);
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
void* _60834 = arg_buffer[1];
//reading env and args
void* kont60518 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x6041460677 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60518);
arg_buffer[2] = x6041460677;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60518))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam60836_fptr() // lam60836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60837 = arg_buffer[1];
//reading env and args
void* a6041960683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env60837))[2];
//not do dummy comment
void* kont60519 = (decode_clo(env60837))[1];
mpz_t* mpzvar61808 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61808, "10", 10);
void* a6042060684 = encode_mpz(mpzvar61808);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont60519;
arg_buffer[3] = a6041960683;
arg_buffer[4] = a6042060684;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60836 = encode_clo(alloc_clo(lam60836_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60842 = arg_buffer[1];
//reading env and args
void* kont60519 = arg_buffer[2];
//Dummy comment
void* a6041560678 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar61809 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61809, "80", 10);
void* a6041660679 = encode_mpz(mpzvar61809);
mpz_t* mpzvar61810 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61810, "10", 10);
void* a6041760680 = encode_mpz(mpzvar61810);
void* a6041860681 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo61812 = alloc_clo(lam60836_fptr, 2);

//setting env list
clo61812[1] = kont60519;
clo61812[2] = hash_u45ref;
void* f6052060682 = encode_clo(clo61812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f6052060682;
arg_buffer[3] = a6041560678;
arg_buffer[4] = a6041660679;
arg_buffer[5] = a6041760680;
arg_buffer[6] = a6041860681;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam60843_fptr() // lam60843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60844 = arg_buffer[1];
//reading env and args
void* x6042160686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60521 = (decode_clo(env60844))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60521);
arg_buffer[2] = x6042160686;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60521))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60843 = encode_clo(alloc_clo(lam60843_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60845 = arg_buffer[1];
//reading env and args
void* kont60521 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo61814 = alloc_clo(lam60843_fptr, 1);

//setting env list
clo61814[1] = kont60521;
void* f6052260685 = encode_clo(clo61814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f6052260685;
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

