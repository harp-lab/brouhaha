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
void* _41680 = arg_buffer[1];
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

void* kont4141541516 = prim_car(lst);
void* lst41517 = prim_cdr(lst);
void* x4132541518 = apply_prim__u43(lst41517);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4141541516);
arg_buffer[2] = x4132541518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4141541516))[0]);
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
void* _41681 = arg_buffer[1];
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

void* kont4141741519 = prim_car(lst);
void* lst41520 = prim_cdr(lst);
void* x4132641521 = apply_prim__u45(lst41520);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4141741519);
arg_buffer[2] = x4132641521;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4141741519))[0]);
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
void* _41682 = arg_buffer[1];
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

void* kont4141941522 = prim_car(lst);
void* lst41523 = prim_cdr(lst);
void* x4132741524 = apply_prim__u42(lst41523);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4141941522);
arg_buffer[2] = x4132741524;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4141941522))[0]);
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
void* _41683 = arg_buffer[1];
//reading env and args
void* kont41421 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4132841525 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41421);
arg_buffer[2] = x4132841525;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41421))[0]);
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
void* _41684 = arg_buffer[1];
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

void* kont4142241526 = prim_car(lst);
void* lst41527 = prim_cdr(lst);
void* x4132941528 = apply_prim__u47(lst41527);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4142241526);
arg_buffer[2] = x4132941528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4142241526))[0]);
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
void* _41685 = arg_buffer[1];
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

void* kont4142441529 = prim_car(lst);
void* lst41530 = prim_cdr(lst);
void* x4133041531 = apply_prim__u61(lst41530);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4142441529);
arg_buffer[2] = x4133041531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4142441529))[0]);
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
void* _41686 = arg_buffer[1];
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

void* kont4142641532 = prim_car(lst);
void* lst41533 = prim_cdr(lst);
void* x4133141534 = apply_prim__u62(lst41533);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4142641532);
arg_buffer[2] = x4133141534;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4142641532))[0]);
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
void* _41687 = arg_buffer[1];
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

void* kont4142841535 = prim_car(lst);
void* lst41536 = prim_cdr(lst);
void* x4133241537 = apply_prim__u60(lst41536);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4142841535);
arg_buffer[2] = x4133241537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4142841535))[0]);
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
void* _41688 = arg_buffer[1];
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

void* kont4143041538 = prim_car(lst);
void* lst41539 = prim_cdr(lst);
void* x4133341540 = apply_prim__u60_u61(lst41539);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4143041538);
arg_buffer[2] = x4133341540;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4143041538))[0]);
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
void* _41689 = arg_buffer[1];
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

void* kont4143241541 = prim_car(lst);
void* lst41542 = prim_cdr(lst);
void* x4133441543 = apply_prim__u62_u61(lst41542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4143241541);
arg_buffer[2] = x4133441543;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4143241541))[0]);
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
void* _41690 = arg_buffer[1];
//reading env and args
void* kont41434 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4133541544 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41434);
arg_buffer[2] = x4133541544;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41434))[0]);
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
void* _41691 = arg_buffer[1];
//reading env and args
void* kont41435 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4133641545 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41435);
arg_buffer[2] = x4133641545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41435))[0]);
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
void* _41692 = arg_buffer[1];
//reading env and args
void* kont41436 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4133741546 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41436);
arg_buffer[2] = x4133741546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41436))[0]);
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
void* _41693 = arg_buffer[1];
//reading env and args
void* kont41437 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4133841547 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41437);
arg_buffer[2] = x4133841547;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41437))[0]);
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
void* _41694 = arg_buffer[1];
//reading env and args
void* kont41438 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4133941548 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41438);
arg_buffer[2] = x4133941548;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41438))[0]);
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
void* _41695 = arg_buffer[1];
//reading env and args
void* kont41439 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4134041549 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41439);
arg_buffer[2] = x4134041549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41439))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam41696_fptr() // lam41696 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41697 = arg_buffer[1];
//reading env and args
void* a4134341553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env41697))[3];
//not do dummy comment
void* a4134141550 = (decode_clo(env41697))[2];
//not do dummy comment
void* kont41440 = (decode_clo(env41697))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41440;
arg_buffer[3] = a4134141550;
arg_buffer[4] = a4134341553;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41696 = encode_clo(alloc_clo(lam41696_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41700 = arg_buffer[1];
//reading env and args
void* kont41440 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42679 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42679, "0", 10);
void* a4134141550 = encode_mpz(mpzvar42679);
mpz_t* mpzvar42680 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42680, "2", 10);
void* a4134241551 = encode_mpz(mpzvar42680);

//creating new closure instance
void** clo42682 = alloc_clo(lam41696_fptr, 3);

//setting env list
clo42682[1] = kont41440;
clo42682[2] = a4134141550;
clo42682[3] = equal_u63;
void* f4144141552 = encode_clo(clo42682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4144141552;
arg_buffer[3] = x;
arg_buffer[4] = a4134241551;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam41701_fptr() // lam41701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41702 = arg_buffer[1];
//reading env and args
void* a4134641557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env41702))[3];
//not do dummy comment
void* kont41442 = (decode_clo(env41702))[2];
//not do dummy comment
void* a4134441554 = (decode_clo(env41702))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41442;
arg_buffer[3] = a4134441554;
arg_buffer[4] = a4134641557;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41701 = encode_clo(alloc_clo(lam41701_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41705 = arg_buffer[1];
//reading env and args
void* kont41442 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42683 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42683, "1", 10);
void* a4134441554 = encode_mpz(mpzvar42683);
mpz_t* mpzvar42684 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42684, "2", 10);
void* a4134541555 = encode_mpz(mpzvar42684);

//creating new closure instance
void** clo42686 = alloc_clo(lam41701_fptr, 3);

//setting env list
clo42686[1] = a4134441554;
clo42686[2] = kont41442;
clo42686[3] = equal_u63;
void* f4144341556 = encode_clo(clo42686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4144341556;
arg_buffer[3] = x;
arg_buffer[4] = a4134541555;
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
void* _41706 = arg_buffer[1];
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

void* kont4144441558 = prim_car(x);
void* x41559 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4144441558);
arg_buffer[2] = x41559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4144441558))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam41709_fptr() // lam41709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41710 = arg_buffer[1];
//reading env and args
void* a4135241569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41446 = (decode_clo(env41710))[3];
//not do dummy comment
void* x = (decode_clo(env41710))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41710))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont41446;
arg_buffer[3] = x;
arg_buffer[4] = a4135241569;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41709 = encode_clo(alloc_clo(lam41709_fptr, 0));

void* lam41711_fptr() // lam41711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41712 = arg_buffer[1];
//reading env and args
void* a4135041566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41712))[5];
//not do dummy comment
void* kont41446 = (decode_clo(env41712))[4];
//not do dummy comment
void* lst = (decode_clo(env41712))[3];
//not do dummy comment
void* x = (decode_clo(env41712))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41712))[1];

//if-clause
bool if_guard42687 = is_true(a4135041566);
if(if_guard42687)
{
void* x4135141567 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41446);
arg_buffer[2] = x4135141567;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41446))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42689 = alloc_clo(lam41709_fptr, 3);

//setting env list
clo42689[1] = member_u63;
clo42689[2] = x;
clo42689[3] = kont41446;
void* f4144741568 = encode_clo(clo42689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4144741568;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41711 = encode_clo(alloc_clo(lam41711_fptr, 0));

void* lam41713_fptr() // lam41713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41714 = arg_buffer[1];
//reading env and args
void* a4134941564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41714))[6];
//not do dummy comment
void* kont41446 = (decode_clo(env41714))[5];
//not do dummy comment
void* lst = (decode_clo(env41714))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env41714))[3];
//not do dummy comment
void* x = (decode_clo(env41714))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41714))[1];

//creating new closure instance
void** clo42691 = alloc_clo(lam41711_fptr, 5);

//setting env list
clo42691[1] = member_u63;
clo42691[2] = x;
clo42691[3] = lst;
clo42691[4] = kont41446;
clo42691[5] = cdr;
void* f4144841565 = encode_clo(clo42691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4144841565;
arg_buffer[3] = a4134941564;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41713 = encode_clo(alloc_clo(lam41713_fptr, 0));

void* lam41715_fptr() // lam41715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41716 = arg_buffer[1];
//reading env and args
void* a4134741561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41716))[7];
//not do dummy comment
void* kont41446 = (decode_clo(env41716))[6];
//not do dummy comment
void* lst = (decode_clo(env41716))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env41716))[4];
//not do dummy comment
void* x = (decode_clo(env41716))[3];
//not do dummy comment
void* car = (decode_clo(env41716))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41716))[1];

//if-clause
bool if_guard42692 = is_true(a4134741561);
if(if_guard42692)
{
void* x4134841562 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41446);
arg_buffer[2] = x4134841562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41446))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42694 = alloc_clo(lam41713_fptr, 6);

//setting env list
clo42694[1] = member_u63;
clo42694[2] = x;
clo42694[3] = equal_u63;
clo42694[4] = lst;
clo42694[5] = kont41446;
clo42694[6] = cdr;
void* f4144941563 = encode_clo(clo42694);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4144941563;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41715 = encode_clo(alloc_clo(lam41715_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41717 = arg_buffer[1];
//reading env and args
void* kont41446 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42696 = alloc_clo(lam41715_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo42696[1] = member_u63;
clo42696[2] = car;
clo42696[3] = x;
clo42696[4] = equal_u63;
clo42696[5] = lst;
clo42696[6] = kont41446;
clo42696[7] = cdr;
void* f4145041560 = encode_clo(clo42696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4145041560;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam41718_fptr() // lam41718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41719 = arg_buffer[1];
//reading env and args
void* a4135641577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4135541575 = (decode_clo(env41719))[4];
//not do dummy comment
void* kont41451 = (decode_clo(env41719))[3];
//not do dummy comment
void* fun = (decode_clo(env41719))[2];
//not do dummy comment
void* foldl = (decode_clo(env41719))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont41451;
arg_buffer[3] = fun;
arg_buffer[4] = a4135541575;
arg_buffer[5] = a4135641577;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41718 = encode_clo(alloc_clo(lam41718_fptr, 0));

void* lam41720_fptr() // lam41720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41721 = arg_buffer[1];
//reading env and args
void* a4135541575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41721))[5];
//not do dummy comment
void* lst = (decode_clo(env41721))[4];
//not do dummy comment
void* kont41451 = (decode_clo(env41721))[3];
//not do dummy comment
void* fun = (decode_clo(env41721))[2];
//not do dummy comment
void* foldl = (decode_clo(env41721))[1];

//creating new closure instance
void** clo42698 = alloc_clo(lam41718_fptr, 4);

//setting env list
clo42698[1] = foldl;
clo42698[2] = fun;
clo42698[3] = kont41451;
clo42698[4] = a4135541575;
void* f4145241576 = encode_clo(clo42698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4145241576;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41720 = encode_clo(alloc_clo(lam41720_fptr, 0));

void* lam41722_fptr() // lam41722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41723 = arg_buffer[1];
//reading env and args
void* a4135441573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41723))[6];
//not do dummy comment
void* lst = (decode_clo(env41723))[5];
//not do dummy comment
void* kont41451 = (decode_clo(env41723))[4];
//not do dummy comment
void* fun = (decode_clo(env41723))[3];
//not do dummy comment
void* acc = (decode_clo(env41723))[2];
//not do dummy comment
void* foldl = (decode_clo(env41723))[1];

//creating new closure instance
void** clo42700 = alloc_clo(lam41720_fptr, 5);

//setting env list
clo42700[1] = foldl;
clo42700[2] = fun;
clo42700[3] = kont41451;
clo42700[4] = lst;
clo42700[5] = cdr;
void* f4145341574 = encode_clo(clo42700);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4145341574;
arg_buffer[3] = a4135441573;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41722 = encode_clo(alloc_clo(lam41722_fptr, 0));

void* lam41724_fptr() // lam41724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41725 = arg_buffer[1];
//reading env and args
void* a4135341571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41725))[7];
//not do dummy comment
void* lst = (decode_clo(env41725))[6];
//not do dummy comment
void* kont41451 = (decode_clo(env41725))[5];
//not do dummy comment
void* fun = (decode_clo(env41725))[4];
//not do dummy comment
void* acc = (decode_clo(env41725))[3];
//not do dummy comment
void* car = (decode_clo(env41725))[2];
//not do dummy comment
void* foldl = (decode_clo(env41725))[1];

//if-clause
bool if_guard42701 = is_true(a4135341571);
if(if_guard42701)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41451);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41451))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42703 = alloc_clo(lam41722_fptr, 6);

//setting env list
clo42703[1] = foldl;
clo42703[2] = acc;
clo42703[3] = fun;
clo42703[4] = kont41451;
clo42703[5] = lst;
clo42703[6] = cdr;
void* f4145441572 = encode_clo(clo42703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4145441572;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41724 = encode_clo(alloc_clo(lam41724_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41726 = arg_buffer[1];
//reading env and args
void* kont41451 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42705 = alloc_clo(lam41724_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo42705[1] = foldl;
clo42705[2] = car;
clo42705[3] = acc;
clo42705[4] = fun;
clo42705[5] = kont41451;
clo42705[6] = lst;
clo42705[7] = cdr;
void* f4145541570 = encode_clo(clo42705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4145541570;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam41727_fptr() // lam41727 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41728 = arg_buffer[1];
//reading env and args
void* a4136041585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41728))[3];
//not do dummy comment
void* a4135841581 = (decode_clo(env41728))[2];
//not do dummy comment
void* kont41456 = (decode_clo(env41728))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41456;
arg_buffer[3] = a4135841581;
arg_buffer[4] = a4136041585;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41727 = encode_clo(alloc_clo(lam41727_fptr, 0));

void* lam41729_fptr() // lam41729 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41730 = arg_buffer[1];
//reading env and args
void* a4135941583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41730))[5];
//not do dummy comment
void* a4135841581 = (decode_clo(env41730))[4];
//not do dummy comment
void* kont41456 = (decode_clo(env41730))[3];
//not do dummy comment
void* lst2 = (decode_clo(env41730))[2];
//not do dummy comment
void* cons = (decode_clo(env41730))[1];

//creating new closure instance
void** clo42707 = alloc_clo(lam41727_fptr, 3);

//setting env list
clo42707[1] = kont41456;
clo42707[2] = a4135841581;
clo42707[3] = reverse_u45helper;
void* f4145741584 = encode_clo(clo42707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4145741584;
arg_buffer[3] = a4135941583;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41729 = encode_clo(alloc_clo(lam41729_fptr, 0));

void* lam41731_fptr() // lam41731 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41732 = arg_buffer[1];
//reading env and args
void* a4135841581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41732))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41732))[5];
//not do dummy comment
void* kont41456 = (decode_clo(env41732))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41732))[3];
//not do dummy comment
void* car = (decode_clo(env41732))[2];
//not do dummy comment
void* cons = (decode_clo(env41732))[1];

//creating new closure instance
void** clo42709 = alloc_clo(lam41729_fptr, 5);

//setting env list
clo42709[1] = cons;
clo42709[2] = lst2;
clo42709[3] = kont41456;
clo42709[4] = a4135841581;
clo42709[5] = reverse_u45helper;
void* f4145841582 = encode_clo(clo42709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4145841582;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41731 = encode_clo(alloc_clo(lam41731_fptr, 0));

void* lam41733_fptr() // lam41733 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41734 = arg_buffer[1];
//reading env and args
void* a4135741579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41734))[7];
//not do dummy comment
void* lst = (decode_clo(env41734))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41734))[5];
//not do dummy comment
void* kont41456 = (decode_clo(env41734))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41734))[3];
//not do dummy comment
void* car = (decode_clo(env41734))[2];
//not do dummy comment
void* cons = (decode_clo(env41734))[1];

//if-clause
bool if_guard42710 = is_true(a4135741579);
if(if_guard42710)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41456);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41456))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42712 = alloc_clo(lam41731_fptr, 6);

//setting env list
clo42712[1] = cons;
clo42712[2] = car;
clo42712[3] = lst2;
clo42712[4] = kont41456;
clo42712[5] = reverse_u45helper;
clo42712[6] = lst;
void* f4145941580 = encode_clo(clo42712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4145941580;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41733 = encode_clo(alloc_clo(lam41733_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41735 = arg_buffer[1];
//reading env and args
void* kont41456 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42714 = alloc_clo(lam41733_fptr, 7);

//setting env list
clo42714[1] = cons;
clo42714[2] = car;
clo42714[3] = lst2;
clo42714[4] = kont41456;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo42714[5] = reverse_u45helper;
clo42714[6] = lst;
clo42714[7] = cdr;
void* f4146041578 = encode_clo(clo42714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4146041578;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam41736_fptr() // lam41736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41737 = arg_buffer[1];
//reading env and args
void* a4136141587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41461 = (decode_clo(env41737))[3];
//not do dummy comment
void* lst = (decode_clo(env41737))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41737))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41461;
arg_buffer[3] = lst;
arg_buffer[4] = a4136141587;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41736 = encode_clo(alloc_clo(lam41736_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41738 = arg_buffer[1];
//reading env and args
void* kont41461 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42716 = alloc_clo(lam41736_fptr, 3);

//setting env list
clo42716[1] = reverse_u45helper;
clo42716[2] = lst;
clo42716[3] = kont41461;
void* f4146241586 = encode_clo(clo42716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4146241586;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam41739_fptr() // lam41739 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41740 = arg_buffer[1];
//reading env and args
void* x4136441592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41463 = (decode_clo(env41740))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41463);
arg_buffer[2] = x4136441592;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41463))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41739 = encode_clo(alloc_clo(lam41739_fptr, 0));

void* lam41741_fptr() // lam41741 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41742 = arg_buffer[1];
//reading env and args
void* a4136941601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41463 = (decode_clo(env41742))[4];
//not do dummy comment
void* a4136541594 = (decode_clo(env41742))[3];
//not do dummy comment
void* a4136741597 = (decode_clo(env41742))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env41742))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41463;
arg_buffer[3] = a4136541594;
arg_buffer[4] = a4136741597;
arg_buffer[5] = a4136941601;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41741 = encode_clo(alloc_clo(lam41741_fptr, 0));

void* lam41743_fptr() // lam41743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41744 = arg_buffer[1];
//reading env and args
void* a4136841599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41463 = (decode_clo(env41744))[6];
//not do dummy comment
void* a4136541594 = (decode_clo(env41744))[5];
//not do dummy comment
void* a4136741597 = (decode_clo(env41744))[4];
//not do dummy comment
void* cons = (decode_clo(env41744))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41744))[2];
//not do dummy comment
void* lst2 = (decode_clo(env41744))[1];

//creating new closure instance
void** clo42718 = alloc_clo(lam41741_fptr, 4);

//setting env list
clo42718[1] = take_u45helper;
clo42718[2] = a4136741597;
clo42718[3] = a4136541594;
clo42718[4] = kont41463;
void* f4146541600 = encode_clo(clo42718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4146541600;
arg_buffer[3] = a4136841599;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41743 = encode_clo(alloc_clo(lam41743_fptr, 0));

void* lam41745_fptr() // lam41745 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41746 = arg_buffer[1];
//reading env and args
void* a4136741597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41463 = (decode_clo(env41746))[7];
//not do dummy comment
void* lst = (decode_clo(env41746))[6];
//not do dummy comment
void* a4136541594 = (decode_clo(env41746))[5];
//not do dummy comment
void* car = (decode_clo(env41746))[4];
//not do dummy comment
void* cons = (decode_clo(env41746))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41746))[2];
//not do dummy comment
void* lst2 = (decode_clo(env41746))[1];

//creating new closure instance
void** clo42720 = alloc_clo(lam41743_fptr, 6);

//setting env list
clo42720[1] = lst2;
clo42720[2] = take_u45helper;
clo42720[3] = cons;
clo42720[4] = a4136741597;
clo42720[5] = a4136541594;
clo42720[6] = kont41463;
void* f4146641598 = encode_clo(clo42720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4146641598;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41745 = encode_clo(alloc_clo(lam41745_fptr, 0));

void* lam41748_fptr() // lam41748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41749 = arg_buffer[1];
//reading env and args
void* a4136541594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41463 = (decode_clo(env41749))[8];
//not do dummy comment
void* lst = (decode_clo(env41749))[7];
//not do dummy comment
void* cons = (decode_clo(env41749))[6];
//not do dummy comment
void* _u45 = (decode_clo(env41749))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env41749))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41749))[3];
//not do dummy comment
void* n = (decode_clo(env41749))[2];
//not do dummy comment
void* car = (decode_clo(env41749))[1];
mpz_t* mpzvar42721 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42721, "1", 10);
void* a4136641595 = encode_mpz(mpzvar42721);

//creating new closure instance
void** clo42723 = alloc_clo(lam41745_fptr, 7);

//setting env list
clo42723[1] = lst2;
clo42723[2] = take_u45helper;
clo42723[3] = cons;
clo42723[4] = car;
clo42723[5] = a4136541594;
clo42723[6] = lst;
clo42723[7] = kont41463;
void* f4146741596 = encode_clo(clo42723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4146741596;
arg_buffer[3] = n;
arg_buffer[4] = a4136641595;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41748 = encode_clo(alloc_clo(lam41748_fptr, 0));

void* lam41750_fptr() // lam41750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41751 = arg_buffer[1];
//reading env and args
void* a4136341590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41751))[10];
//not do dummy comment
void* kont41463 = (decode_clo(env41751))[9];
//not do dummy comment
void* lst = (decode_clo(env41751))[8];
//not do dummy comment
void* reverse = (decode_clo(env41751))[7];
//not do dummy comment
void* cons = (decode_clo(env41751))[6];
//not do dummy comment
void* _u45 = (decode_clo(env41751))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env41751))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41751))[3];
//not do dummy comment
void* n = (decode_clo(env41751))[2];
//not do dummy comment
void* car = (decode_clo(env41751))[1];

//if-clause
bool if_guard42724 = is_true(a4136341590);
if(if_guard42724)
{

//creating new closure instance
void** clo42726 = alloc_clo(lam41739_fptr, 1);

//setting env list
clo42726[1] = kont41463;
void* f4146441591 = encode_clo(clo42726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4146441591;
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
void** clo42728 = alloc_clo(lam41748_fptr, 8);

//setting env list
clo42728[1] = car;
clo42728[2] = n;
clo42728[3] = lst2;
clo42728[4] = take_u45helper;
clo42728[5] = _u45;
clo42728[6] = cons;
clo42728[7] = lst;
clo42728[8] = kont41463;
void* f4146841593 = encode_clo(clo42728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4146841593;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41750 = encode_clo(alloc_clo(lam41750_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41753 = arg_buffer[1];
//reading env and args
void* kont41463 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar42729 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42729, "0", 10);
void* a4136241588 = encode_mpz(mpzvar42729);

//creating new closure instance
void** clo42731 = alloc_clo(lam41750_fptr, 10);

//setting env list
clo42731[1] = car;
clo42731[2] = n;
clo42731[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo42731[4] = take_u45helper;
clo42731[5] = _u45;
clo42731[6] = cons;
clo42731[7] = reverse;
clo42731[8] = lst;
clo42731[9] = kont41463;
clo42731[10] = cdr;
void* f4146941589 = encode_clo(clo42731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4146941589;
arg_buffer[3] = n;
arg_buffer[4] = a4136241588;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam41754_fptr() // lam41754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41755 = arg_buffer[1];
//reading env and args
void* a4137041603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41755))[4];
//not do dummy comment
void* kont41470 = (decode_clo(env41755))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41755))[2];
//not do dummy comment
void* n = (decode_clo(env41755))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41470;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4137041603;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41754 = encode_clo(alloc_clo(lam41754_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41756 = arg_buffer[1];
//reading env and args
void* kont41470 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42733 = alloc_clo(lam41754_fptr, 4);

//setting env list
clo42733[1] = n;
clo42733[2] = take_u45helper;
clo42733[3] = kont41470;
clo42733[4] = lst;
void* f4147141602 = encode_clo(clo42733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4147141602;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam41758_fptr() // lam41758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41759 = arg_buffer[1];
//reading env and args
void* a4137541611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4137341607 = (decode_clo(env41759))[3];
//not do dummy comment
void* _u43 = (decode_clo(env41759))[2];
//not do dummy comment
void* kont41472 = (decode_clo(env41759))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont41472;
arg_buffer[3] = a4137341607;
arg_buffer[4] = a4137541611;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41758 = encode_clo(alloc_clo(lam41758_fptr, 0));

void* lam41760_fptr() // lam41760 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41761 = arg_buffer[1];
//reading env and args
void* a4137441609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4137341607 = (decode_clo(env41761))[4];
//not do dummy comment
void* length = (decode_clo(env41761))[3];
//not do dummy comment
void* _u43 = (decode_clo(env41761))[2];
//not do dummy comment
void* kont41472 = (decode_clo(env41761))[1];

//creating new closure instance
void** clo42735 = alloc_clo(lam41758_fptr, 3);

//setting env list
clo42735[1] = kont41472;
clo42735[2] = _u43;
clo42735[3] = a4137341607;
void* f4147341610 = encode_clo(clo42735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4147341610;
arg_buffer[3] = a4137441609;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41760 = encode_clo(alloc_clo(lam41760_fptr, 0));

void* lam41763_fptr() // lam41763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41764 = arg_buffer[1];
//reading env and args
void* a4137141605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41764))[5];
//not do dummy comment
void* lst = (decode_clo(env41764))[4];
//not do dummy comment
void* length = (decode_clo(env41764))[3];
//not do dummy comment
void* _u43 = (decode_clo(env41764))[2];
//not do dummy comment
void* kont41472 = (decode_clo(env41764))[1];

//if-clause
bool if_guard42736 = is_true(a4137141605);
if(if_guard42736)
{
mpz_t* mpzvar42737 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42737, "0", 10);
void* x4137241606 = encode_mpz(mpzvar42737);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41472);
arg_buffer[2] = x4137241606;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41472))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar42738 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42738, "1", 10);
void* a4137341607 = encode_mpz(mpzvar42738);

//creating new closure instance
void** clo42740 = alloc_clo(lam41760_fptr, 4);

//setting env list
clo42740[1] = kont41472;
clo42740[2] = _u43;
clo42740[3] = length;
clo42740[4] = a4137341607;
void* f4147441608 = encode_clo(clo42740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4147441608;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41763 = encode_clo(alloc_clo(lam41763_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41765 = arg_buffer[1];
//reading env and args
void* kont41472 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42742 = alloc_clo(lam41763_fptr, 5);

//setting env list
clo42742[1] = kont41472;
clo42742[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo42742[3] = length;
clo42742[4] = lst;
clo42742[5] = cdr;
void* f4147541604 = encode_clo(clo42742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4147541604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam41766_fptr() // lam41766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41767 = arg_buffer[1];
//reading env and args
void* x4137741615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41476 = (decode_clo(env41767))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41476);
arg_buffer[2] = x4137741615;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41476))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41766 = encode_clo(alloc_clo(lam41766_fptr, 0));

void* lam41768_fptr() // lam41768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41769 = arg_buffer[1];
//reading env and args
void* a4138141623 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41476 = (decode_clo(env41769))[3];
//not do dummy comment
void* cons = (decode_clo(env41769))[2];
//not do dummy comment
void* a4137941619 = (decode_clo(env41769))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41476;
arg_buffer[3] = a4137941619;
arg_buffer[4] = a4138141623;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41768 = encode_clo(alloc_clo(lam41768_fptr, 0));

void* lam41770_fptr() // lam41770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41771 = arg_buffer[1];
//reading env and args
void* a4138041621 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env41771))[5];
//not do dummy comment
void* proc = (decode_clo(env41771))[4];
//not do dummy comment
void* kont41476 = (decode_clo(env41771))[3];
//not do dummy comment
void* cons = (decode_clo(env41771))[2];
//not do dummy comment
void* a4137941619 = (decode_clo(env41771))[1];

//creating new closure instance
void** clo42744 = alloc_clo(lam41768_fptr, 3);

//setting env list
clo42744[1] = a4137941619;
clo42744[2] = cons;
clo42744[3] = kont41476;
void* f4147841622 = encode_clo(clo42744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4147841622;
arg_buffer[3] = proc;
arg_buffer[4] = a4138041621;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41770 = encode_clo(alloc_clo(lam41770_fptr, 0));

void* lam41772_fptr() // lam41772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41773 = arg_buffer[1];
//reading env and args
void* a4137941619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41773))[6];
//not do dummy comment
void* lst = (decode_clo(env41773))[5];
//not do dummy comment
void* map = (decode_clo(env41773))[4];
//not do dummy comment
void* proc = (decode_clo(env41773))[3];
//not do dummy comment
void* cons = (decode_clo(env41773))[2];
//not do dummy comment
void* kont41476 = (decode_clo(env41773))[1];

//creating new closure instance
void** clo42746 = alloc_clo(lam41770_fptr, 5);

//setting env list
clo42746[1] = a4137941619;
clo42746[2] = cons;
clo42746[3] = kont41476;
clo42746[4] = proc;
clo42746[5] = map;
void* f4147941620 = encode_clo(clo42746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4147941620;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41772 = encode_clo(alloc_clo(lam41772_fptr, 0));

void* lam41774_fptr() // lam41774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41775 = arg_buffer[1];
//reading env and args
void* a4137841617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41775))[6];
//not do dummy comment
void* lst = (decode_clo(env41775))[5];
//not do dummy comment
void* map = (decode_clo(env41775))[4];
//not do dummy comment
void* proc = (decode_clo(env41775))[3];
//not do dummy comment
void* cons = (decode_clo(env41775))[2];
//not do dummy comment
void* kont41476 = (decode_clo(env41775))[1];

//creating new closure instance
void** clo42748 = alloc_clo(lam41772_fptr, 6);

//setting env list
clo42748[1] = kont41476;
clo42748[2] = cons;
clo42748[3] = proc;
clo42748[4] = map;
clo42748[5] = lst;
clo42748[6] = cdr;
void* f4148041618 = encode_clo(clo42748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4148041618;
arg_buffer[3] = a4137841617;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41774 = encode_clo(alloc_clo(lam41774_fptr, 0));

void* lam41776_fptr() // lam41776 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41777 = arg_buffer[1];
//reading env and args
void* a4137641613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41777))[8];
//not do dummy comment
void* map = (decode_clo(env41777))[7];
//not do dummy comment
void* proc = (decode_clo(env41777))[6];
//not do dummy comment
void* car = (decode_clo(env41777))[5];
//not do dummy comment
void* cons = (decode_clo(env41777))[4];
//not do dummy comment
void* kont41476 = (decode_clo(env41777))[3];
//not do dummy comment
void* list = (decode_clo(env41777))[2];
//not do dummy comment
void* cdr = (decode_clo(env41777))[1];

//if-clause
bool if_guard42749 = is_true(a4137641613);
if(if_guard42749)
{

//creating new closure instance
void** clo42751 = alloc_clo(lam41766_fptr, 1);

//setting env list
clo42751[1] = kont41476;
void* f4147741614 = encode_clo(clo42751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4147741614;
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
void** clo42753 = alloc_clo(lam41774_fptr, 6);

//setting env list
clo42753[1] = kont41476;
clo42753[2] = cons;
clo42753[3] = proc;
clo42753[4] = map;
clo42753[5] = lst;
clo42753[6] = cdr;
void* f4148141616 = encode_clo(clo42753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4148141616;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41776 = encode_clo(alloc_clo(lam41776_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41778 = arg_buffer[1];
//reading env and args
void* kont41476 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42755 = alloc_clo(lam41776_fptr, 8);

//setting env list
clo42755[1] = cdr;
clo42755[2] = list;
clo42755[3] = kont41476;
clo42755[4] = cons;
clo42755[5] = car;
clo42755[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo42755[7] = map;
clo42755[8] = lst;
void* f4148241612 = encode_clo(clo42755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4148241612;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam41779_fptr() // lam41779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41780 = arg_buffer[1];
//reading env and args
void* x4138341627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41483 = (decode_clo(env41780))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41483);
arg_buffer[2] = x4138341627;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41483))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41779 = encode_clo(alloc_clo(lam41779_fptr, 0));

void* lam41781_fptr() // lam41781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41782 = arg_buffer[1];
//reading env and args
void* a4138841637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41483 = (decode_clo(env41782))[3];
//not do dummy comment
void* a4138641633 = (decode_clo(env41782))[2];
//not do dummy comment
void* cons = (decode_clo(env41782))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41483;
arg_buffer[3] = a4138641633;
arg_buffer[4] = a4138841637;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41781 = encode_clo(alloc_clo(lam41781_fptr, 0));

void* lam41783_fptr() // lam41783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41784 = arg_buffer[1];
//reading env and args
void* a4138741635 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41483 = (decode_clo(env41784))[5];
//not do dummy comment
void* op = (decode_clo(env41784))[4];
//not do dummy comment
void* a4138641633 = (decode_clo(env41784))[3];
//not do dummy comment
void* filter = (decode_clo(env41784))[2];
//not do dummy comment
void* cons = (decode_clo(env41784))[1];

//creating new closure instance
void** clo42757 = alloc_clo(lam41781_fptr, 3);

//setting env list
clo42757[1] = cons;
clo42757[2] = a4138641633;
clo42757[3] = kont41483;
void* f4148541636 = encode_clo(clo42757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4148541636;
arg_buffer[3] = op;
arg_buffer[4] = a4138741635;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41783 = encode_clo(alloc_clo(lam41783_fptr, 0));

void* lam41785_fptr() // lam41785 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41786 = arg_buffer[1];
//reading env and args
void* a4138641633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41786))[6];
//not do dummy comment
void* lst = (decode_clo(env41786))[5];
//not do dummy comment
void* kont41483 = (decode_clo(env41786))[4];
//not do dummy comment
void* op = (decode_clo(env41786))[3];
//not do dummy comment
void* filter = (decode_clo(env41786))[2];
//not do dummy comment
void* cons = (decode_clo(env41786))[1];

//creating new closure instance
void** clo42759 = alloc_clo(lam41783_fptr, 5);

//setting env list
clo42759[1] = cons;
clo42759[2] = filter;
clo42759[3] = a4138641633;
clo42759[4] = op;
clo42759[5] = kont41483;
void* f4148641634 = encode_clo(clo42759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4148641634;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41785 = encode_clo(alloc_clo(lam41785_fptr, 0));

void* lam41787_fptr() // lam41787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41788 = arg_buffer[1];
//reading env and args
void* a4138941639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41483 = (decode_clo(env41788))[3];
//not do dummy comment
void* op = (decode_clo(env41788))[2];
//not do dummy comment
void* filter = (decode_clo(env41788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont41483;
arg_buffer[3] = op;
arg_buffer[4] = a4138941639;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41787 = encode_clo(alloc_clo(lam41787_fptr, 0));

void* lam41789_fptr() // lam41789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41790 = arg_buffer[1];
//reading env and args
void* a4138541631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41790))[7];
//not do dummy comment
void* lst = (decode_clo(env41790))[6];
//not do dummy comment
void* kont41483 = (decode_clo(env41790))[5];
//not do dummy comment
void* op = (decode_clo(env41790))[4];
//not do dummy comment
void* cons = (decode_clo(env41790))[3];
//not do dummy comment
void* filter = (decode_clo(env41790))[2];
//not do dummy comment
void* car = (decode_clo(env41790))[1];

//if-clause
bool if_guard42760 = is_true(a4138541631);
if(if_guard42760)
{

//creating new closure instance
void** clo42762 = alloc_clo(lam41785_fptr, 6);

//setting env list
clo42762[1] = cons;
clo42762[2] = filter;
clo42762[3] = op;
clo42762[4] = kont41483;
clo42762[5] = lst;
clo42762[6] = cdr;
void* f4148741632 = encode_clo(clo42762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4148741632;
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
void** clo42764 = alloc_clo(lam41787_fptr, 3);

//setting env list
clo42764[1] = filter;
clo42764[2] = op;
clo42764[3] = kont41483;
void* f4148841638 = encode_clo(clo42764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4148841638;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41789 = encode_clo(alloc_clo(lam41789_fptr, 0));

void* lam41791_fptr() // lam41791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41792 = arg_buffer[1];
//reading env and args
void* a4138441629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41792))[7];
//not do dummy comment
void* lst = (decode_clo(env41792))[6];
//not do dummy comment
void* kont41483 = (decode_clo(env41792))[5];
//not do dummy comment
void* op = (decode_clo(env41792))[4];
//not do dummy comment
void* cons = (decode_clo(env41792))[3];
//not do dummy comment
void* filter = (decode_clo(env41792))[2];
//not do dummy comment
void* car = (decode_clo(env41792))[1];

//creating new closure instance
void** clo42766 = alloc_clo(lam41789_fptr, 7);

//setting env list
clo42766[1] = car;
clo42766[2] = filter;
clo42766[3] = cons;
clo42766[4] = op;
clo42766[5] = kont41483;
clo42766[6] = lst;
clo42766[7] = cdr;
void* f4148941630 = encode_clo(clo42766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4148941630;
arg_buffer[3] = a4138441629;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41791 = encode_clo(alloc_clo(lam41791_fptr, 0));

void* lam41793_fptr() // lam41793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41794 = arg_buffer[1];
//reading env and args
void* a4138241625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41794))[8];
//not do dummy comment
void* kont41483 = (decode_clo(env41794))[7];
//not do dummy comment
void* op = (decode_clo(env41794))[6];
//not do dummy comment
void* cons = (decode_clo(env41794))[5];
//not do dummy comment
void* list = (decode_clo(env41794))[4];
//not do dummy comment
void* cdr = (decode_clo(env41794))[3];
//not do dummy comment
void* filter = (decode_clo(env41794))[2];
//not do dummy comment
void* car = (decode_clo(env41794))[1];

//if-clause
bool if_guard42767 = is_true(a4138241625);
if(if_guard42767)
{

//creating new closure instance
void** clo42769 = alloc_clo(lam41779_fptr, 1);

//setting env list
clo42769[1] = kont41483;
void* f4148441626 = encode_clo(clo42769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4148441626;
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
void** clo42771 = alloc_clo(lam41791_fptr, 7);

//setting env list
clo42771[1] = car;
clo42771[2] = filter;
clo42771[3] = cons;
clo42771[4] = op;
clo42771[5] = kont41483;
clo42771[6] = lst;
clo42771[7] = cdr;
void* f4149041628 = encode_clo(clo42771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4149041628;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41793 = encode_clo(alloc_clo(lam41793_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41795 = arg_buffer[1];
//reading env and args
void* kont41483 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42773 = alloc_clo(lam41793_fptr, 8);

//setting env list
clo42773[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo42773[2] = filter;
clo42773[3] = cdr;
clo42773[4] = list;
clo42773[5] = cons;
clo42773[6] = op;
clo42773[7] = kont41483;
clo42773[8] = lst;
void* f4149141624 = encode_clo(clo42773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4149141624;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam41796_fptr() // lam41796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41797 = arg_buffer[1];
//reading env and args
void* a4139441647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env41797))[3];
//not do dummy comment
void* a4139241644 = (decode_clo(env41797))[2];
//not do dummy comment
void* kont41492 = (decode_clo(env41797))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont41492;
arg_buffer[3] = a4139241644;
arg_buffer[4] = a4139441647;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41796 = encode_clo(alloc_clo(lam41796_fptr, 0));

void* lam41799_fptr() // lam41799 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41800 = arg_buffer[1];
//reading env and args
void* a4139241644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env41800))[4];
//not do dummy comment
void* n = (decode_clo(env41800))[3];
//not do dummy comment
void* kont41492 = (decode_clo(env41800))[2];
//not do dummy comment
void* _u45 = (decode_clo(env41800))[1];
mpz_t* mpzvar42774 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42774, "1", 10);
void* a4139341645 = encode_mpz(mpzvar42774);

//creating new closure instance
void** clo42776 = alloc_clo(lam41796_fptr, 3);

//setting env list
clo42776[1] = kont41492;
clo42776[2] = a4139241644;
clo42776[3] = drop;
void* f4149341646 = encode_clo(clo42776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4149341646;
arg_buffer[3] = n;
arg_buffer[4] = a4139341645;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41799 = encode_clo(alloc_clo(lam41799_fptr, 0));

void* lam41801_fptr() // lam41801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41802 = arg_buffer[1];
//reading env and args
void* a4139141642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41802))[6];
//not do dummy comment
void* n = (decode_clo(env41802))[5];
//not do dummy comment
void* lst = (decode_clo(env41802))[4];
//not do dummy comment
void* drop = (decode_clo(env41802))[3];
//not do dummy comment
void* kont41492 = (decode_clo(env41802))[2];
//not do dummy comment
void* _u45 = (decode_clo(env41802))[1];

//if-clause
bool if_guard42777 = is_true(a4139141642);
if(if_guard42777)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41492);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41492))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42779 = alloc_clo(lam41799_fptr, 4);

//setting env list
clo42779[1] = _u45;
clo42779[2] = kont41492;
clo42779[3] = n;
clo42779[4] = drop;
void* f4149441643 = encode_clo(clo42779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4149441643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41801 = encode_clo(alloc_clo(lam41801_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41804 = arg_buffer[1];
//reading env and args
void* kont41492 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar42780 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42780, "0", 10);
void* a4139041640 = encode_mpz(mpzvar42780);

//creating new closure instance
void** clo42782 = alloc_clo(lam41801_fptr, 6);

//setting env list
clo42782[1] = _u45;
clo42782[2] = kont41492;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo42782[3] = drop;
clo42782[4] = lst;
clo42782[5] = n;
clo42782[6] = cdr;
void* f4149541641 = encode_clo(clo42782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4149541641;
arg_buffer[3] = n;
arg_buffer[4] = a4139041640;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam41805_fptr() // lam41805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41806 = arg_buffer[1];
//reading env and args
void* a4139841655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41496 = (decode_clo(env41806))[3];
//not do dummy comment
void* proc = (decode_clo(env41806))[2];
//not do dummy comment
void* a4139641651 = (decode_clo(env41806))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont41496;
arg_buffer[3] = a4139641651;
arg_buffer[4] = a4139841655;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41805 = encode_clo(alloc_clo(lam41805_fptr, 0));

void* lam41807_fptr() // lam41807 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41808 = arg_buffer[1];
//reading env and args
void* a4139741653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41496 = (decode_clo(env41808))[5];
//not do dummy comment
void* foldr = (decode_clo(env41808))[4];
//not do dummy comment
void* a4139641651 = (decode_clo(env41808))[3];
//not do dummy comment
void* proc = (decode_clo(env41808))[2];
//not do dummy comment
void* acc = (decode_clo(env41808))[1];

//creating new closure instance
void** clo42784 = alloc_clo(lam41805_fptr, 3);

//setting env list
clo42784[1] = a4139641651;
clo42784[2] = proc;
clo42784[3] = kont41496;
void* f4149741654 = encode_clo(clo42784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4149741654;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4139741653;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41807 = encode_clo(alloc_clo(lam41807_fptr, 0));

void* lam41809_fptr() // lam41809 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41810 = arg_buffer[1];
//reading env and args
void* a4139641651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41810))[6];
//not do dummy comment
void* kont41496 = (decode_clo(env41810))[5];
//not do dummy comment
void* foldr = (decode_clo(env41810))[4];
//not do dummy comment
void* lst = (decode_clo(env41810))[3];
//not do dummy comment
void* proc = (decode_clo(env41810))[2];
//not do dummy comment
void* acc = (decode_clo(env41810))[1];

//creating new closure instance
void** clo42786 = alloc_clo(lam41807_fptr, 5);

//setting env list
clo42786[1] = acc;
clo42786[2] = proc;
clo42786[3] = a4139641651;
clo42786[4] = foldr;
clo42786[5] = kont41496;
void* f4149841652 = encode_clo(clo42786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4149841652;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41809 = encode_clo(alloc_clo(lam41809_fptr, 0));

void* lam41811_fptr() // lam41811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41812 = arg_buffer[1];
//reading env and args
void* a4139541649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41812))[7];
//not do dummy comment
void* kont41496 = (decode_clo(env41812))[6];
//not do dummy comment
void* car = (decode_clo(env41812))[5];
//not do dummy comment
void* foldr = (decode_clo(env41812))[4];
//not do dummy comment
void* lst = (decode_clo(env41812))[3];
//not do dummy comment
void* proc = (decode_clo(env41812))[2];
//not do dummy comment
void* acc = (decode_clo(env41812))[1];

//if-clause
bool if_guard42787 = is_true(a4139541649);
if(if_guard42787)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41496);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41496))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42789 = alloc_clo(lam41809_fptr, 6);

//setting env list
clo42789[1] = acc;
clo42789[2] = proc;
clo42789[3] = lst;
clo42789[4] = foldr;
clo42789[5] = kont41496;
clo42789[6] = cdr;
void* f4149941650 = encode_clo(clo42789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4149941650;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41811 = encode_clo(alloc_clo(lam41811_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41813 = arg_buffer[1];
//reading env and args
void* kont41496 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42791 = alloc_clo(lam41811_fptr, 7);

//setting env list
clo42791[1] = acc;
clo42791[2] = proc;
clo42791[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo42791[4] = foldr;
clo42791[5] = car;
clo42791[6] = kont41496;
clo42791[7] = cdr;
void* f4150041648 = encode_clo(clo42791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4150041648;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam41814_fptr() // lam41814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41815 = arg_buffer[1];
//reading env and args
void* a4140241663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4140041659 = (decode_clo(env41815))[3];
//not do dummy comment
void* kont41501 = (decode_clo(env41815))[2];
//not do dummy comment
void* cons = (decode_clo(env41815))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41501;
arg_buffer[3] = a4140041659;
arg_buffer[4] = a4140241663;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41814 = encode_clo(alloc_clo(lam41814_fptr, 0));

void* lam41816_fptr() // lam41816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41817 = arg_buffer[1];
//reading env and args
void* a4140141661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4140041659 = (decode_clo(env41817))[5];
//not do dummy comment
void* lst2 = (decode_clo(env41817))[4];
//not do dummy comment
void* cons = (decode_clo(env41817))[3];
//not do dummy comment
void* append = (decode_clo(env41817))[2];
//not do dummy comment
void* kont41501 = (decode_clo(env41817))[1];

//creating new closure instance
void** clo42793 = alloc_clo(lam41814_fptr, 3);

//setting env list
clo42793[1] = cons;
clo42793[2] = kont41501;
clo42793[3] = a4140041659;
void* f4150241662 = encode_clo(clo42793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4150241662;
arg_buffer[3] = a4140141661;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41816 = encode_clo(alloc_clo(lam41816_fptr, 0));

void* lam41818_fptr() // lam41818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41819 = arg_buffer[1];
//reading env and args
void* a4140041659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41819))[6];
//not do dummy comment
void* lst2 = (decode_clo(env41819))[5];
//not do dummy comment
void* lst1 = (decode_clo(env41819))[4];
//not do dummy comment
void* cons = (decode_clo(env41819))[3];
//not do dummy comment
void* append = (decode_clo(env41819))[2];
//not do dummy comment
void* kont41501 = (decode_clo(env41819))[1];

//creating new closure instance
void** clo42795 = alloc_clo(lam41816_fptr, 5);

//setting env list
clo42795[1] = kont41501;
clo42795[2] = append;
clo42795[3] = cons;
clo42795[4] = lst2;
clo42795[5] = a4140041659;
void* f4150341660 = encode_clo(clo42795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4150341660;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41818 = encode_clo(alloc_clo(lam41818_fptr, 0));

void* lam41820_fptr() // lam41820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41821 = arg_buffer[1];
//reading env and args
void* a4139941657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41821))[7];
//not do dummy comment
void* lst2 = (decode_clo(env41821))[6];
//not do dummy comment
void* cons = (decode_clo(env41821))[5];
//not do dummy comment
void* append = (decode_clo(env41821))[4];
//not do dummy comment
void* kont41501 = (decode_clo(env41821))[3];
//not do dummy comment
void* lst1 = (decode_clo(env41821))[2];
//not do dummy comment
void* car = (decode_clo(env41821))[1];

//if-clause
bool if_guard42796 = is_true(a4139941657);
if(if_guard42796)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41501);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41501))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42798 = alloc_clo(lam41818_fptr, 6);

//setting env list
clo42798[1] = kont41501;
clo42798[2] = append;
clo42798[3] = cons;
clo42798[4] = lst1;
clo42798[5] = lst2;
clo42798[6] = cdr;
void* f4150441658 = encode_clo(clo42798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4150441658;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41820 = encode_clo(alloc_clo(lam41820_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41822 = arg_buffer[1];
//reading env and args
void* kont41501 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42800 = alloc_clo(lam41820_fptr, 7);

//setting env list
clo42800[1] = car;
clo42800[2] = lst1;
clo42800[3] = kont41501;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo42800[4] = append;
clo42800[5] = cons;
clo42800[6] = lst2;
clo42800[7] = cdr;
void* f4150541656 = encode_clo(clo42800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4150541656;
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
void* _41823 = arg_buffer[1];
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

void* kont4150641664 = prim_car(lst);
void* lst41665 = prim_cdr(lst);
void* x4140341666 = apply_prim_hash(lst41665);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4150641664);
arg_buffer[2] = x4140341666;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4150641664))[0]);
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
void* _41824 = arg_buffer[1];
//reading env and args
void* kont41508 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4140441667 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41508);
arg_buffer[2] = x4140441667;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41508))[0]);
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
void* _41825 = arg_buffer[1];
//reading env and args
void* kont41509 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4140541668 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41509);
arg_buffer[2] = x4140541668;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41509))[0]);
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
void* _41826 = arg_buffer[1];
//reading env and args
void* kont41510 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4140641669 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41510);
arg_buffer[2] = x4140641669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41510))[0]);
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
void* _41827 = arg_buffer[1];
//reading env and args
void* kont41511 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4140741670 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41511);
arg_buffer[2] = x4140741670;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41511))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam41829_fptr() // lam41829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41830 = arg_buffer[1];
//reading env and args
void* a4141241676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env41830))[2];
//not do dummy comment
void* kont41512 = (decode_clo(env41830))[1];
mpz_t* mpzvar42801 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42801, "10", 10);
void* a4141341677 = encode_mpz(mpzvar42801);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont41512;
arg_buffer[3] = a4141241676;
arg_buffer[4] = a4141341677;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41829 = encode_clo(alloc_clo(lam41829_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41835 = arg_buffer[1];
//reading env and args
void* kont41512 = arg_buffer[2];
//Dummy comment
void* a4140841671 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar42802 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42802, "80", 10);
void* a4140941672 = encode_mpz(mpzvar42802);
mpz_t* mpzvar42803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42803, "10", 10);
void* a4141041673 = encode_mpz(mpzvar42803);
void* a4141141674 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo42805 = alloc_clo(lam41829_fptr, 2);

//setting env list
clo42805[1] = kont41512;
clo42805[2] = hash_u45ref;
void* f4151341675 = encode_clo(clo42805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4151341675;
arg_buffer[3] = a4140841671;
arg_buffer[4] = a4140941672;
arg_buffer[5] = a4141041673;
arg_buffer[6] = a4141141674;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam41836_fptr() // lam41836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41837 = arg_buffer[1];
//reading env and args
void* x4141441679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41514 = (decode_clo(env41837))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41514);
arg_buffer[2] = x4141441679;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41514))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41836 = encode_clo(alloc_clo(lam41836_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41838 = arg_buffer[1];
//reading env and args
void* kont41514 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo42807 = alloc_clo(lam41836_fptr, 1);

//setting env list
clo42807[1] = kont41514;
void* f4151541678 = encode_clo(clo42807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4151541678;
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

