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
void* _57709 = arg_buffer[1];
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

void* kont5744357544 = prim_car(lst);
void* lst57545 = prim_cdr(lst);
void* x5735257546 = apply_prim__u43(lst57545);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5744357544);
arg_buffer[2] = x5735257546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5744357544))[0]);
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
void* _57710 = arg_buffer[1];
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

void* kont5744557547 = prim_car(lst);
void* lst57548 = prim_cdr(lst);
void* x5735357549 = apply_prim__u45(lst57548);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5744557547);
arg_buffer[2] = x5735357549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5744557547))[0]);
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
void* _57711 = arg_buffer[1];
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

void* kont5744757550 = prim_car(lst);
void* lst57551 = prim_cdr(lst);
void* x5735457552 = apply_prim__u42(lst57551);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5744757550);
arg_buffer[2] = x5735457552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5744757550))[0]);
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
void* _57712 = arg_buffer[1];
//reading env and args
void* kont57449 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5735557553 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57449);
arg_buffer[2] = x5735557553;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57449))[0]);
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
void* _57713 = arg_buffer[1];
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

void* kont5745057554 = prim_car(lst);
void* lst57555 = prim_cdr(lst);
void* x5735657556 = apply_prim__u47(lst57555);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5745057554);
arg_buffer[2] = x5735657556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5745057554))[0]);
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
void* _57714 = arg_buffer[1];
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

void* kont5745257557 = prim_car(lst);
void* lst57558 = prim_cdr(lst);
void* x5735757559 = apply_prim__u61(lst57558);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5745257557);
arg_buffer[2] = x5735757559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5745257557))[0]);
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
void* _57715 = arg_buffer[1];
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

void* kont5745457560 = prim_car(lst);
void* lst57561 = prim_cdr(lst);
void* x5735857562 = apply_prim__u62(lst57561);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5745457560);
arg_buffer[2] = x5735857562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5745457560))[0]);
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
void* _57716 = arg_buffer[1];
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

void* kont5745657563 = prim_car(lst);
void* lst57564 = prim_cdr(lst);
void* x5735957565 = apply_prim__u60(lst57564);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5745657563);
arg_buffer[2] = x5735957565;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5745657563))[0]);
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
void* _57717 = arg_buffer[1];
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

void* kont5745857566 = prim_car(lst);
void* lst57567 = prim_cdr(lst);
void* x5736057568 = apply_prim__u60_u61(lst57567);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5745857566);
arg_buffer[2] = x5736057568;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5745857566))[0]);
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
void* _57718 = arg_buffer[1];
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

void* kont5746057569 = prim_car(lst);
void* lst57570 = prim_cdr(lst);
void* x5736157571 = apply_prim__u62_u61(lst57570);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5746057569);
arg_buffer[2] = x5736157571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5746057569))[0]);
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
void* _57719 = arg_buffer[1];
//reading env and args
void* kont57462 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5736257572 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57462);
arg_buffer[2] = x5736257572;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57462))[0]);
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
void* _57720 = arg_buffer[1];
//reading env and args
void* kont57463 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5736357573 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57463);
arg_buffer[2] = x5736357573;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57463))[0]);
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
void* _57721 = arg_buffer[1];
//reading env and args
void* kont57464 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5736457574 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57464);
arg_buffer[2] = x5736457574;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57464))[0]);
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
void* _57722 = arg_buffer[1];
//reading env and args
void* kont57465 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5736557575 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57465);
arg_buffer[2] = x5736557575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57465))[0]);
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
void* _57723 = arg_buffer[1];
//reading env and args
void* kont57466 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5736657576 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57466);
arg_buffer[2] = x5736657576;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57466))[0]);
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
void* _57724 = arg_buffer[1];
//reading env and args
void* kont57467 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5736757577 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57467);
arg_buffer[2] = x5736757577;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57467))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam57725_fptr() // lam57725 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57726 = arg_buffer[1];
//reading env and args
void* a5737057581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5736857578 = (decode_clo(env57726))[3];
//not do dummy comment
void* kont57468 = (decode_clo(env57726))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env57726))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57468;
arg_buffer[3] = a5736857578;
arg_buffer[4] = a5737057581;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57725 = encode_clo(alloc_clo(lam57725_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57729 = arg_buffer[1];
//reading env and args
void* kont57468 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58709 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58709, "0", 10);
void* a5736857578 = encode_mpz(mpzvar58709);
mpz_t* mpzvar58710 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58710, "2", 10);
void* a5736957579 = encode_mpz(mpzvar58710);

//creating new closure instance
void** clo58712 = alloc_clo(lam57725_fptr, 3);

//setting env list
clo58712[1] = equal_u63;
clo58712[2] = kont57468;
clo58712[3] = a5736857578;
void* f5746957580 = encode_clo(clo58712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5746957580;
arg_buffer[3] = x;
arg_buffer[4] = a5736957579;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam57730_fptr() // lam57730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57731 = arg_buffer[1];
//reading env and args
void* a5737357585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5737157582 = (decode_clo(env57731))[3];
//not do dummy comment
void* kont57470 = (decode_clo(env57731))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env57731))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont57470;
arg_buffer[3] = a5737157582;
arg_buffer[4] = a5737357585;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57730 = encode_clo(alloc_clo(lam57730_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57734 = arg_buffer[1];
//reading env and args
void* kont57470 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar58713 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58713, "1", 10);
void* a5737157582 = encode_mpz(mpzvar58713);
mpz_t* mpzvar58714 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58714, "2", 10);
void* a5737257583 = encode_mpz(mpzvar58714);

//creating new closure instance
void** clo58716 = alloc_clo(lam57730_fptr, 3);

//setting env list
clo58716[1] = equal_u63;
clo58716[2] = kont57470;
clo58716[3] = a5737157582;
void* f5747157584 = encode_clo(clo58716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5747157584;
arg_buffer[3] = x;
arg_buffer[4] = a5737257583;
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
void* _57735 = arg_buffer[1];
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

void* kont5747257586 = prim_car(x);
void* x57587 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5747257586);
arg_buffer[2] = x57587;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5747257586))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam57738_fptr() // lam57738 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57739 = arg_buffer[1];
//reading env and args
void* a5737957597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env57739))[3];
//not do dummy comment
void* kont57474 = (decode_clo(env57739))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57739))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont57474;
arg_buffer[3] = x;
arg_buffer[4] = a5737957597;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57738 = encode_clo(alloc_clo(lam57738_fptr, 0));

void* lam57740_fptr() // lam57740 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57741 = arg_buffer[1];
//reading env and args
void* a5737757594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57741))[5];
//not do dummy comment
void* lst = (decode_clo(env57741))[4];
//not do dummy comment
void* x = (decode_clo(env57741))[3];
//not do dummy comment
void* kont57474 = (decode_clo(env57741))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57741))[1];

//if-clause
bool if_guard58717 = is_true(a5737757594);
if(if_guard58717)
{
void* x5737857595 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57474);
arg_buffer[2] = x5737857595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57474))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58719 = alloc_clo(lam57738_fptr, 3);

//setting env list
clo58719[1] = member_u63;
clo58719[2] = kont57474;
clo58719[3] = x;
void* f5747557596 = encode_clo(clo58719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5747557596;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57740 = encode_clo(alloc_clo(lam57740_fptr, 0));

void* lam57742_fptr() // lam57742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57743 = arg_buffer[1];
//reading env and args
void* a5737657592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57743))[6];
//not do dummy comment
void* lst = (decode_clo(env57743))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env57743))[4];
//not do dummy comment
void* x = (decode_clo(env57743))[3];
//not do dummy comment
void* kont57474 = (decode_clo(env57743))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57743))[1];

//creating new closure instance
void** clo58721 = alloc_clo(lam57740_fptr, 5);

//setting env list
clo58721[1] = member_u63;
clo58721[2] = kont57474;
clo58721[3] = x;
clo58721[4] = lst;
clo58721[5] = cdr;
void* f5747657593 = encode_clo(clo58721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5747657593;
arg_buffer[3] = a5737657592;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57742 = encode_clo(alloc_clo(lam57742_fptr, 0));

void* lam57744_fptr() // lam57744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57745 = arg_buffer[1];
//reading env and args
void* a5737457589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57745))[7];
//not do dummy comment
void* lst = (decode_clo(env57745))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env57745))[5];
//not do dummy comment
void* x = (decode_clo(env57745))[4];
//not do dummy comment
void* kont57474 = (decode_clo(env57745))[3];
//not do dummy comment
void* car = (decode_clo(env57745))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env57745))[1];

//if-clause
bool if_guard58722 = is_true(a5737457589);
if(if_guard58722)
{
void* x5737557590 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57474);
arg_buffer[2] = x5737557590;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57474))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58724 = alloc_clo(lam57742_fptr, 6);

//setting env list
clo58724[1] = member_u63;
clo58724[2] = kont57474;
clo58724[3] = x;
clo58724[4] = equal_u63;
clo58724[5] = lst;
clo58724[6] = cdr;
void* f5747757591 = encode_clo(clo58724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5747757591;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57744 = encode_clo(alloc_clo(lam57744_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57746 = arg_buffer[1];
//reading env and args
void* kont57474 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58726 = alloc_clo(lam57744_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo58726[1] = member_u63;
clo58726[2] = car;
clo58726[3] = kont57474;
clo58726[4] = x;
clo58726[5] = equal_u63;
clo58726[6] = lst;
clo58726[7] = cdr;
void* f5747857588 = encode_clo(clo58726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5747857588;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam57747_fptr() // lam57747 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57748 = arg_buffer[1];
//reading env and args
void* a5738357605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57479 = (decode_clo(env57748))[4];
//not do dummy comment
void* fun = (decode_clo(env57748))[3];
//not do dummy comment
void* a5738257603 = (decode_clo(env57748))[2];
//not do dummy comment
void* foldl = (decode_clo(env57748))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont57479;
arg_buffer[3] = fun;
arg_buffer[4] = a5738257603;
arg_buffer[5] = a5738357605;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57747 = encode_clo(alloc_clo(lam57747_fptr, 0));

void* lam57749_fptr() // lam57749 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57750 = arg_buffer[1];
//reading env and args
void* a5738257603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57750))[5];
//not do dummy comment
void* kont57479 = (decode_clo(env57750))[4];
//not do dummy comment
void* lst = (decode_clo(env57750))[3];
//not do dummy comment
void* fun = (decode_clo(env57750))[2];
//not do dummy comment
void* foldl = (decode_clo(env57750))[1];

//creating new closure instance
void** clo58728 = alloc_clo(lam57747_fptr, 4);

//setting env list
clo58728[1] = foldl;
clo58728[2] = a5738257603;
clo58728[3] = fun;
clo58728[4] = kont57479;
void* f5748057604 = encode_clo(clo58728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5748057604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57749 = encode_clo(alloc_clo(lam57749_fptr, 0));

void* lam57751_fptr() // lam57751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57752 = arg_buffer[1];
//reading env and args
void* a5738157601 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57752))[6];
//not do dummy comment
void* kont57479 = (decode_clo(env57752))[5];
//not do dummy comment
void* lst = (decode_clo(env57752))[4];
//not do dummy comment
void* fun = (decode_clo(env57752))[3];
//not do dummy comment
void* acc = (decode_clo(env57752))[2];
//not do dummy comment
void* foldl = (decode_clo(env57752))[1];

//creating new closure instance
void** clo58730 = alloc_clo(lam57749_fptr, 5);

//setting env list
clo58730[1] = foldl;
clo58730[2] = fun;
clo58730[3] = lst;
clo58730[4] = kont57479;
clo58730[5] = cdr;
void* f5748157602 = encode_clo(clo58730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5748157602;
arg_buffer[3] = a5738157601;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57751 = encode_clo(alloc_clo(lam57751_fptr, 0));

void* lam57753_fptr() // lam57753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57754 = arg_buffer[1];
//reading env and args
void* a5738057599 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57754))[7];
//not do dummy comment
void* kont57479 = (decode_clo(env57754))[6];
//not do dummy comment
void* lst = (decode_clo(env57754))[5];
//not do dummy comment
void* fun = (decode_clo(env57754))[4];
//not do dummy comment
void* acc = (decode_clo(env57754))[3];
//not do dummy comment
void* car = (decode_clo(env57754))[2];
//not do dummy comment
void* foldl = (decode_clo(env57754))[1];

//if-clause
bool if_guard58731 = is_true(a5738057599);
if(if_guard58731)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57479);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57479))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58733 = alloc_clo(lam57751_fptr, 6);

//setting env list
clo58733[1] = foldl;
clo58733[2] = acc;
clo58733[3] = fun;
clo58733[4] = lst;
clo58733[5] = kont57479;
clo58733[6] = cdr;
void* f5748257600 = encode_clo(clo58733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5748257600;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57753 = encode_clo(alloc_clo(lam57753_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57755 = arg_buffer[1];
//reading env and args
void* kont57479 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58735 = alloc_clo(lam57753_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo58735[1] = foldl;
clo58735[2] = car;
clo58735[3] = acc;
clo58735[4] = fun;
clo58735[5] = lst;
clo58735[6] = kont57479;
clo58735[7] = cdr;
void* f5748357598 = encode_clo(clo58735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5748357598;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam57756_fptr() // lam57756 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57757 = arg_buffer[1];
//reading env and args
void* a5738757613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5738557609 = (decode_clo(env57757))[3];
//not do dummy comment
void* kont57484 = (decode_clo(env57757))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57757))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57484;
arg_buffer[3] = a5738557609;
arg_buffer[4] = a5738757613;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57756 = encode_clo(alloc_clo(lam57756_fptr, 0));

void* lam57758_fptr() // lam57758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57759 = arg_buffer[1];
//reading env and args
void* a5738657611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5738557609 = (decode_clo(env57759))[5];
//not do dummy comment
void* kont57484 = (decode_clo(env57759))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57759))[3];
//not do dummy comment
void* lst2 = (decode_clo(env57759))[2];
//not do dummy comment
void* cons = (decode_clo(env57759))[1];

//creating new closure instance
void** clo58737 = alloc_clo(lam57756_fptr, 3);

//setting env list
clo58737[1] = reverse_u45helper;
clo58737[2] = kont57484;
clo58737[3] = a5738557609;
void* f5748557612 = encode_clo(clo58737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5748557612;
arg_buffer[3] = a5738657611;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57758 = encode_clo(alloc_clo(lam57758_fptr, 0));

void* lam57760_fptr() // lam57760 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57761 = arg_buffer[1];
//reading env and args
void* a5738557609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57761))[6];
//not do dummy comment
void* kont57484 = (decode_clo(env57761))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57761))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57761))[3];
//not do dummy comment
void* car = (decode_clo(env57761))[2];
//not do dummy comment
void* cons = (decode_clo(env57761))[1];

//creating new closure instance
void** clo58739 = alloc_clo(lam57758_fptr, 5);

//setting env list
clo58739[1] = cons;
clo58739[2] = lst2;
clo58739[3] = reverse_u45helper;
clo58739[4] = kont57484;
clo58739[5] = a5738557609;
void* f5748657610 = encode_clo(clo58739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5748657610;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57760 = encode_clo(alloc_clo(lam57760_fptr, 0));

void* lam57762_fptr() // lam57762 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57763 = arg_buffer[1];
//reading env and args
void* a5738457607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57763))[7];
//not do dummy comment
void* lst = (decode_clo(env57763))[6];
//not do dummy comment
void* kont57484 = (decode_clo(env57763))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57763))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57763))[3];
//not do dummy comment
void* car = (decode_clo(env57763))[2];
//not do dummy comment
void* cons = (decode_clo(env57763))[1];

//if-clause
bool if_guard58740 = is_true(a5738457607);
if(if_guard58740)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57484);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57484))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58742 = alloc_clo(lam57760_fptr, 6);

//setting env list
clo58742[1] = cons;
clo58742[2] = car;
clo58742[3] = lst2;
clo58742[4] = reverse_u45helper;
clo58742[5] = kont57484;
clo58742[6] = lst;
void* f5748757608 = encode_clo(clo58742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5748757608;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57762 = encode_clo(alloc_clo(lam57762_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57764 = arg_buffer[1];
//reading env and args
void* kont57484 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58744 = alloc_clo(lam57762_fptr, 7);

//setting env list
clo58744[1] = cons;
clo58744[2] = car;
clo58744[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo58744[4] = reverse_u45helper;
clo58744[5] = kont57484;
clo58744[6] = lst;
clo58744[7] = cdr;
void* f5748857606 = encode_clo(clo58744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5748857606;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam57765_fptr() // lam57765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57766 = arg_buffer[1];
//reading env and args
void* a5738857615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57766))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env57766))[2];
//not do dummy comment
void* kont57489 = (decode_clo(env57766))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont57489;
arg_buffer[3] = lst;
arg_buffer[4] = a5738857615;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57765 = encode_clo(alloc_clo(lam57765_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57767 = arg_buffer[1];
//reading env and args
void* kont57489 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58746 = alloc_clo(lam57765_fptr, 3);

//setting env list
clo58746[1] = kont57489;
clo58746[2] = reverse_u45helper;
clo58746[3] = lst;
void* f5749057614 = encode_clo(clo58746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5749057614;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam57768_fptr() // lam57768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57769 = arg_buffer[1];
//reading env and args
void* x5739157620 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57491 = (decode_clo(env57769))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57491);
arg_buffer[2] = x5739157620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57491))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57768 = encode_clo(alloc_clo(lam57768_fptr, 0));

void* lam57770_fptr() // lam57770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57771 = arg_buffer[1];
//reading env and args
void* a5739657629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5739257622 = (decode_clo(env57771))[4];
//not do dummy comment
void* a5739457625 = (decode_clo(env57771))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57771))[2];
//not do dummy comment
void* kont57491 = (decode_clo(env57771))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57491;
arg_buffer[3] = a5739257622;
arg_buffer[4] = a5739457625;
arg_buffer[5] = a5739657629;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57770 = encode_clo(alloc_clo(lam57770_fptr, 0));

void* lam57772_fptr() // lam57772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57773 = arg_buffer[1];
//reading env and args
void* a5739557627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5739257622 = (decode_clo(env57773))[6];
//not do dummy comment
void* a5739457625 = (decode_clo(env57773))[5];
//not do dummy comment
void* kont57491 = (decode_clo(env57773))[4];
//not do dummy comment
void* cons = (decode_clo(env57773))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env57773))[2];
//not do dummy comment
void* lst2 = (decode_clo(env57773))[1];

//creating new closure instance
void** clo58748 = alloc_clo(lam57770_fptr, 4);

//setting env list
clo58748[1] = kont57491;
clo58748[2] = take_u45helper;
clo58748[3] = a5739457625;
clo58748[4] = a5739257622;
void* f5749357628 = encode_clo(clo58748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5749357628;
arg_buffer[3] = a5739557627;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57772 = encode_clo(alloc_clo(lam57772_fptr, 0));

void* lam57774_fptr() // lam57774 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57775 = arg_buffer[1];
//reading env and args
void* a5739457625 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5739257622 = (decode_clo(env57775))[7];
//not do dummy comment
void* lst = (decode_clo(env57775))[6];
//not do dummy comment
void* cons = (decode_clo(env57775))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env57775))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57775))[3];
//not do dummy comment
void* kont57491 = (decode_clo(env57775))[2];
//not do dummy comment
void* car = (decode_clo(env57775))[1];

//creating new closure instance
void** clo58750 = alloc_clo(lam57772_fptr, 6);

//setting env list
clo58750[1] = lst2;
clo58750[2] = take_u45helper;
clo58750[3] = cons;
clo58750[4] = kont57491;
clo58750[5] = a5739457625;
clo58750[6] = a5739257622;
void* f5749457626 = encode_clo(clo58750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5749457626;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57774 = encode_clo(alloc_clo(lam57774_fptr, 0));

void* lam57777_fptr() // lam57777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57778 = arg_buffer[1];
//reading env and args
void* a5739257622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57778))[8];
//not do dummy comment
void* cons = (decode_clo(env57778))[7];
//not do dummy comment
void* _u45 = (decode_clo(env57778))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env57778))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57778))[4];
//not do dummy comment
void* n = (decode_clo(env57778))[3];
//not do dummy comment
void* kont57491 = (decode_clo(env57778))[2];
//not do dummy comment
void* car = (decode_clo(env57778))[1];
mpz_t* mpzvar58751 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58751, "1", 10);
void* a5739357623 = encode_mpz(mpzvar58751);

//creating new closure instance
void** clo58753 = alloc_clo(lam57774_fptr, 7);

//setting env list
clo58753[1] = car;
clo58753[2] = kont57491;
clo58753[3] = lst2;
clo58753[4] = take_u45helper;
clo58753[5] = cons;
clo58753[6] = lst;
clo58753[7] = a5739257622;
void* f5749557624 = encode_clo(clo58753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5749557624;
arg_buffer[3] = n;
arg_buffer[4] = a5739357623;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57777 = encode_clo(alloc_clo(lam57777_fptr, 0));

void* lam57779_fptr() // lam57779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57780 = arg_buffer[1];
//reading env and args
void* a5739057618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57780))[10];
//not do dummy comment
void* lst = (decode_clo(env57780))[9];
//not do dummy comment
void* reverse = (decode_clo(env57780))[8];
//not do dummy comment
void* cons = (decode_clo(env57780))[7];
//not do dummy comment
void* _u45 = (decode_clo(env57780))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env57780))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57780))[4];
//not do dummy comment
void* n = (decode_clo(env57780))[3];
//not do dummy comment
void* kont57491 = (decode_clo(env57780))[2];
//not do dummy comment
void* car = (decode_clo(env57780))[1];

//if-clause
bool if_guard58754 = is_true(a5739057618);
if(if_guard58754)
{

//creating new closure instance
void** clo58756 = alloc_clo(lam57768_fptr, 1);

//setting env list
clo58756[1] = kont57491;
void* f5749257619 = encode_clo(clo58756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5749257619;
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
void** clo58758 = alloc_clo(lam57777_fptr, 8);

//setting env list
clo58758[1] = car;
clo58758[2] = kont57491;
clo58758[3] = n;
clo58758[4] = lst2;
clo58758[5] = take_u45helper;
clo58758[6] = _u45;
clo58758[7] = cons;
clo58758[8] = lst;
void* f5749657621 = encode_clo(clo58758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5749657621;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57779 = encode_clo(alloc_clo(lam57779_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57782 = arg_buffer[1];
//reading env and args
void* kont57491 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar58759 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58759, "0", 10);
void* a5738957616 = encode_mpz(mpzvar58759);

//creating new closure instance
void** clo58761 = alloc_clo(lam57779_fptr, 10);

//setting env list
clo58761[1] = car;
clo58761[2] = kont57491;
clo58761[3] = n;
clo58761[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo58761[5] = take_u45helper;
clo58761[6] = _u45;
clo58761[7] = cons;
clo58761[8] = reverse;
clo58761[9] = lst;
clo58761[10] = cdr;
void* f5749757617 = encode_clo(clo58761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5749757617;
arg_buffer[3] = n;
arg_buffer[4] = a5738957616;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam57783_fptr() // lam57783 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57784 = arg_buffer[1];
//reading env and args
void* a5739757631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env57784))[4];
//not do dummy comment
void* n = (decode_clo(env57784))[3];
//not do dummy comment
void* lst = (decode_clo(env57784))[2];
//not do dummy comment
void* kont57498 = (decode_clo(env57784))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont57498;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5739757631;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57783 = encode_clo(alloc_clo(lam57783_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57785 = arg_buffer[1];
//reading env and args
void* kont57498 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58763 = alloc_clo(lam57783_fptr, 4);

//setting env list
clo58763[1] = kont57498;
clo58763[2] = lst;
clo58763[3] = n;
clo58763[4] = take_u45helper;
void* f5749957630 = encode_clo(clo58763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5749957630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam57787_fptr() // lam57787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57788 = arg_buffer[1];
//reading env and args
void* a5740257639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57500 = (decode_clo(env57788))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57788))[2];
//not do dummy comment
void* a5740057635 = (decode_clo(env57788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont57500;
arg_buffer[3] = a5740057635;
arg_buffer[4] = a5740257639;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57787 = encode_clo(alloc_clo(lam57787_fptr, 0));

void* lam57789_fptr() // lam57789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57790 = arg_buffer[1];
//reading env and args
void* a5740157637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env57790))[4];
//not do dummy comment
void* kont57500 = (decode_clo(env57790))[3];
//not do dummy comment
void* _u43 = (decode_clo(env57790))[2];
//not do dummy comment
void* a5740057635 = (decode_clo(env57790))[1];

//creating new closure instance
void** clo58765 = alloc_clo(lam57787_fptr, 3);

//setting env list
clo58765[1] = a5740057635;
clo58765[2] = _u43;
clo58765[3] = kont57500;
void* f5750157638 = encode_clo(clo58765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5750157638;
arg_buffer[3] = a5740157637;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57789 = encode_clo(alloc_clo(lam57789_fptr, 0));

void* lam57792_fptr() // lam57792 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57793 = arg_buffer[1];
//reading env and args
void* a5739857633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57793))[5];
//not do dummy comment
void* lst = (decode_clo(env57793))[4];
//not do dummy comment
void* length = (decode_clo(env57793))[3];
//not do dummy comment
void* kont57500 = (decode_clo(env57793))[2];
//not do dummy comment
void* _u43 = (decode_clo(env57793))[1];

//if-clause
bool if_guard58766 = is_true(a5739857633);
if(if_guard58766)
{
mpz_t* mpzvar58767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58767, "0", 10);
void* x5739957634 = encode_mpz(mpzvar58767);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57500);
arg_buffer[2] = x5739957634;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57500))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar58768 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58768, "1", 10);
void* a5740057635 = encode_mpz(mpzvar58768);

//creating new closure instance
void** clo58770 = alloc_clo(lam57789_fptr, 4);

//setting env list
clo58770[1] = a5740057635;
clo58770[2] = _u43;
clo58770[3] = kont57500;
clo58770[4] = length;
void* f5750257636 = encode_clo(clo58770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5750257636;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57792 = encode_clo(alloc_clo(lam57792_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57794 = arg_buffer[1];
//reading env and args
void* kont57500 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo58772 = alloc_clo(lam57792_fptr, 5);

//setting env list
clo58772[1] = _u43;
clo58772[2] = kont57500;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo58772[3] = length;
clo58772[4] = lst;
clo58772[5] = cdr;
void* f5750357632 = encode_clo(clo58772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5750357632;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam57795_fptr() // lam57795 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57796 = arg_buffer[1];
//reading env and args
void* x5740457643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57504 = (decode_clo(env57796))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57504);
arg_buffer[2] = x5740457643;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57504))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57795 = encode_clo(alloc_clo(lam57795_fptr, 0));

void* lam57797_fptr() // lam57797 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57798 = arg_buffer[1];
//reading env and args
void* a5740857651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5740657647 = (decode_clo(env57798))[3];
//not do dummy comment
void* kont57504 = (decode_clo(env57798))[2];
//not do dummy comment
void* cons = (decode_clo(env57798))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57504;
arg_buffer[3] = a5740657647;
arg_buffer[4] = a5740857651;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57797 = encode_clo(alloc_clo(lam57797_fptr, 0));

void* lam57799_fptr() // lam57799 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57800 = arg_buffer[1];
//reading env and args
void* a5740757649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env57800))[5];
//not do dummy comment
void* a5740657647 = (decode_clo(env57800))[4];
//not do dummy comment
void* kont57504 = (decode_clo(env57800))[3];
//not do dummy comment
void* proc = (decode_clo(env57800))[2];
//not do dummy comment
void* cons = (decode_clo(env57800))[1];

//creating new closure instance
void** clo58774 = alloc_clo(lam57797_fptr, 3);

//setting env list
clo58774[1] = cons;
clo58774[2] = kont57504;
clo58774[3] = a5740657647;
void* f5750657650 = encode_clo(clo58774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5750657650;
arg_buffer[3] = proc;
arg_buffer[4] = a5740757649;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57799 = encode_clo(alloc_clo(lam57799_fptr, 0));

void* lam57801_fptr() // lam57801 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57802 = arg_buffer[1];
//reading env and args
void* a5740657647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57802))[6];
//not do dummy comment
void* lst = (decode_clo(env57802))[5];
//not do dummy comment
void* map = (decode_clo(env57802))[4];
//not do dummy comment
void* kont57504 = (decode_clo(env57802))[3];
//not do dummy comment
void* proc = (decode_clo(env57802))[2];
//not do dummy comment
void* cons = (decode_clo(env57802))[1];

//creating new closure instance
void** clo58776 = alloc_clo(lam57799_fptr, 5);

//setting env list
clo58776[1] = cons;
clo58776[2] = proc;
clo58776[3] = kont57504;
clo58776[4] = a5740657647;
clo58776[5] = map;
void* f5750757648 = encode_clo(clo58776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5750757648;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57801 = encode_clo(alloc_clo(lam57801_fptr, 0));

void* lam57803_fptr() // lam57803 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57804 = arg_buffer[1];
//reading env and args
void* a5740557645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57804))[6];
//not do dummy comment
void* lst = (decode_clo(env57804))[5];
//not do dummy comment
void* map = (decode_clo(env57804))[4];
//not do dummy comment
void* kont57504 = (decode_clo(env57804))[3];
//not do dummy comment
void* proc = (decode_clo(env57804))[2];
//not do dummy comment
void* cons = (decode_clo(env57804))[1];

//creating new closure instance
void** clo58778 = alloc_clo(lam57801_fptr, 6);

//setting env list
clo58778[1] = cons;
clo58778[2] = proc;
clo58778[3] = kont57504;
clo58778[4] = map;
clo58778[5] = lst;
clo58778[6] = cdr;
void* f5750857646 = encode_clo(clo58778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5750857646;
arg_buffer[3] = a5740557645;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57803 = encode_clo(alloc_clo(lam57803_fptr, 0));

void* lam57805_fptr() // lam57805 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57806 = arg_buffer[1];
//reading env and args
void* a5740357641 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env57806))[8];
//not do dummy comment
void* map = (decode_clo(env57806))[7];
//not do dummy comment
void* kont57504 = (decode_clo(env57806))[6];
//not do dummy comment
void* proc = (decode_clo(env57806))[5];
//not do dummy comment
void* car = (decode_clo(env57806))[4];
//not do dummy comment
void* cons = (decode_clo(env57806))[3];
//not do dummy comment
void* list = (decode_clo(env57806))[2];
//not do dummy comment
void* cdr = (decode_clo(env57806))[1];

//if-clause
bool if_guard58779 = is_true(a5740357641);
if(if_guard58779)
{

//creating new closure instance
void** clo58781 = alloc_clo(lam57795_fptr, 1);

//setting env list
clo58781[1] = kont57504;
void* f5750557642 = encode_clo(clo58781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5750557642;
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
void** clo58783 = alloc_clo(lam57803_fptr, 6);

//setting env list
clo58783[1] = cons;
clo58783[2] = proc;
clo58783[3] = kont57504;
clo58783[4] = map;
clo58783[5] = lst;
clo58783[6] = cdr;
void* f5750957644 = encode_clo(clo58783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5750957644;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57805 = encode_clo(alloc_clo(lam57805_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57807 = arg_buffer[1];
//reading env and args
void* kont57504 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58785 = alloc_clo(lam57805_fptr, 8);

//setting env list
clo58785[1] = cdr;
clo58785[2] = list;
clo58785[3] = cons;
clo58785[4] = car;
clo58785[5] = proc;
clo58785[6] = kont57504;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo58785[7] = map;
clo58785[8] = lst;
void* f5751057640 = encode_clo(clo58785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5751057640;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam57808_fptr() // lam57808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57809 = arg_buffer[1];
//reading env and args
void* x5741057655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57511 = (decode_clo(env57809))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57511);
arg_buffer[2] = x5741057655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57511))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57808 = encode_clo(alloc_clo(lam57808_fptr, 0));

void* lam57810_fptr() // lam57810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57811 = arg_buffer[1];
//reading env and args
void* a5741557665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57511 = (decode_clo(env57811))[3];
//not do dummy comment
void* a5741357661 = (decode_clo(env57811))[2];
//not do dummy comment
void* cons = (decode_clo(env57811))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57511;
arg_buffer[3] = a5741357661;
arg_buffer[4] = a5741557665;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57810 = encode_clo(alloc_clo(lam57810_fptr, 0));

void* lam57812_fptr() // lam57812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57813 = arg_buffer[1];
//reading env and args
void* a5741457663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57511 = (decode_clo(env57813))[5];
//not do dummy comment
void* filter = (decode_clo(env57813))[4];
//not do dummy comment
void* cons = (decode_clo(env57813))[3];
//not do dummy comment
void* a5741357661 = (decode_clo(env57813))[2];
//not do dummy comment
void* op = (decode_clo(env57813))[1];

//creating new closure instance
void** clo58787 = alloc_clo(lam57810_fptr, 3);

//setting env list
clo58787[1] = cons;
clo58787[2] = a5741357661;
clo58787[3] = kont57511;
void* f5751357664 = encode_clo(clo58787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5751357664;
arg_buffer[3] = op;
arg_buffer[4] = a5741457663;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57812 = encode_clo(alloc_clo(lam57812_fptr, 0));

void* lam57814_fptr() // lam57814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57815 = arg_buffer[1];
//reading env and args
void* a5741357661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57815))[6];
//not do dummy comment
void* kont57511 = (decode_clo(env57815))[5];
//not do dummy comment
void* lst = (decode_clo(env57815))[4];
//not do dummy comment
void* op = (decode_clo(env57815))[3];
//not do dummy comment
void* filter = (decode_clo(env57815))[2];
//not do dummy comment
void* cons = (decode_clo(env57815))[1];

//creating new closure instance
void** clo58789 = alloc_clo(lam57812_fptr, 5);

//setting env list
clo58789[1] = op;
clo58789[2] = a5741357661;
clo58789[3] = cons;
clo58789[4] = filter;
clo58789[5] = kont57511;
void* f5751457662 = encode_clo(clo58789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5751457662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57814 = encode_clo(alloc_clo(lam57814_fptr, 0));

void* lam57816_fptr() // lam57816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57817 = arg_buffer[1];
//reading env and args
void* a5741657667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57511 = (decode_clo(env57817))[3];
//not do dummy comment
void* op = (decode_clo(env57817))[2];
//not do dummy comment
void* filter = (decode_clo(env57817))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont57511;
arg_buffer[3] = op;
arg_buffer[4] = a5741657667;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57816 = encode_clo(alloc_clo(lam57816_fptr, 0));

void* lam57818_fptr() // lam57818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57819 = arg_buffer[1];
//reading env and args
void* a5741257659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57819))[7];
//not do dummy comment
void* kont57511 = (decode_clo(env57819))[6];
//not do dummy comment
void* lst = (decode_clo(env57819))[5];
//not do dummy comment
void* op = (decode_clo(env57819))[4];
//not do dummy comment
void* cons = (decode_clo(env57819))[3];
//not do dummy comment
void* filter = (decode_clo(env57819))[2];
//not do dummy comment
void* car = (decode_clo(env57819))[1];

//if-clause
bool if_guard58790 = is_true(a5741257659);
if(if_guard58790)
{

//creating new closure instance
void** clo58792 = alloc_clo(lam57814_fptr, 6);

//setting env list
clo58792[1] = cons;
clo58792[2] = filter;
clo58792[3] = op;
clo58792[4] = lst;
clo58792[5] = kont57511;
clo58792[6] = cdr;
void* f5751557660 = encode_clo(clo58792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5751557660;
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
void** clo58794 = alloc_clo(lam57816_fptr, 3);

//setting env list
clo58794[1] = filter;
clo58794[2] = op;
clo58794[3] = kont57511;
void* f5751657666 = encode_clo(clo58794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5751657666;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57818 = encode_clo(alloc_clo(lam57818_fptr, 0));

void* lam57820_fptr() // lam57820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57821 = arg_buffer[1];
//reading env and args
void* a5741157657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57821))[7];
//not do dummy comment
void* kont57511 = (decode_clo(env57821))[6];
//not do dummy comment
void* lst = (decode_clo(env57821))[5];
//not do dummy comment
void* op = (decode_clo(env57821))[4];
//not do dummy comment
void* cons = (decode_clo(env57821))[3];
//not do dummy comment
void* filter = (decode_clo(env57821))[2];
//not do dummy comment
void* car = (decode_clo(env57821))[1];

//creating new closure instance
void** clo58796 = alloc_clo(lam57818_fptr, 7);

//setting env list
clo58796[1] = car;
clo58796[2] = filter;
clo58796[3] = cons;
clo58796[4] = op;
clo58796[5] = lst;
clo58796[6] = kont57511;
clo58796[7] = cdr;
void* f5751757658 = encode_clo(clo58796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5751757658;
arg_buffer[3] = a5741157657;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57820 = encode_clo(alloc_clo(lam57820_fptr, 0));

void* lam57822_fptr() // lam57822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57823 = arg_buffer[1];
//reading env and args
void* a5740957653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57511 = (decode_clo(env57823))[8];
//not do dummy comment
void* lst = (decode_clo(env57823))[7];
//not do dummy comment
void* op = (decode_clo(env57823))[6];
//not do dummy comment
void* cons = (decode_clo(env57823))[5];
//not do dummy comment
void* list = (decode_clo(env57823))[4];
//not do dummy comment
void* cdr = (decode_clo(env57823))[3];
//not do dummy comment
void* filter = (decode_clo(env57823))[2];
//not do dummy comment
void* car = (decode_clo(env57823))[1];

//if-clause
bool if_guard58797 = is_true(a5740957653);
if(if_guard58797)
{

//creating new closure instance
void** clo58799 = alloc_clo(lam57808_fptr, 1);

//setting env list
clo58799[1] = kont57511;
void* f5751257654 = encode_clo(clo58799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5751257654;
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
void** clo58801 = alloc_clo(lam57820_fptr, 7);

//setting env list
clo58801[1] = car;
clo58801[2] = filter;
clo58801[3] = cons;
clo58801[4] = op;
clo58801[5] = lst;
clo58801[6] = kont57511;
clo58801[7] = cdr;
void* f5751857656 = encode_clo(clo58801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5751857656;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57822 = encode_clo(alloc_clo(lam57822_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57824 = arg_buffer[1];
//reading env and args
void* kont57511 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58803 = alloc_clo(lam57822_fptr, 8);

//setting env list
clo58803[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo58803[2] = filter;
clo58803[3] = cdr;
clo58803[4] = list;
clo58803[5] = cons;
clo58803[6] = op;
clo58803[7] = lst;
clo58803[8] = kont57511;
void* f5751957652 = encode_clo(clo58803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5751957652;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam57825_fptr() // lam57825 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57826 = arg_buffer[1];
//reading env and args
void* a5742157675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5741957672 = (decode_clo(env57826))[3];
//not do dummy comment
void* drop = (decode_clo(env57826))[2];
//not do dummy comment
void* kont57520 = (decode_clo(env57826))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont57520;
arg_buffer[3] = a5741957672;
arg_buffer[4] = a5742157675;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57825 = encode_clo(alloc_clo(lam57825_fptr, 0));

void* lam57828_fptr() // lam57828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57829 = arg_buffer[1];
//reading env and args
void* a5741957672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env57829))[4];
//not do dummy comment
void* kont57520 = (decode_clo(env57829))[3];
//not do dummy comment
void* n = (decode_clo(env57829))[2];
//not do dummy comment
void* _u45 = (decode_clo(env57829))[1];
mpz_t* mpzvar58804 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58804, "1", 10);
void* a5742057673 = encode_mpz(mpzvar58804);

//creating new closure instance
void** clo58806 = alloc_clo(lam57825_fptr, 3);

//setting env list
clo58806[1] = kont57520;
clo58806[2] = drop;
clo58806[3] = a5741957672;
void* f5752157674 = encode_clo(clo58806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5752157674;
arg_buffer[3] = n;
arg_buffer[4] = a5742057673;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57828 = encode_clo(alloc_clo(lam57828_fptr, 0));

void* lam57830_fptr() // lam57830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57831 = arg_buffer[1];
//reading env and args
void* a5741857670 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57831))[6];
//not do dummy comment
void* kont57520 = (decode_clo(env57831))[5];
//not do dummy comment
void* n = (decode_clo(env57831))[4];
//not do dummy comment
void* _u45 = (decode_clo(env57831))[3];
//not do dummy comment
void* lst = (decode_clo(env57831))[2];
//not do dummy comment
void* drop = (decode_clo(env57831))[1];

//if-clause
bool if_guard58807 = is_true(a5741857670);
if(if_guard58807)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57520);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57520))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58809 = alloc_clo(lam57828_fptr, 4);

//setting env list
clo58809[1] = _u45;
clo58809[2] = n;
clo58809[3] = kont57520;
clo58809[4] = drop;
void* f5752257671 = encode_clo(clo58809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5752257671;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57830 = encode_clo(alloc_clo(lam57830_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57833 = arg_buffer[1];
//reading env and args
void* kont57520 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar58810 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58810, "0", 10);
void* a5741757668 = encode_mpz(mpzvar58810);

//creating new closure instance
void** clo58812 = alloc_clo(lam57830_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo58812[1] = drop;
clo58812[2] = lst;
clo58812[3] = _u45;
clo58812[4] = n;
clo58812[5] = kont57520;
clo58812[6] = cdr;
void* f5752357669 = encode_clo(clo58812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5752357669;
arg_buffer[3] = n;
arg_buffer[4] = a5741757668;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam57834_fptr() // lam57834 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57835 = arg_buffer[1];
//reading env and args
void* a5742557683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5742357679 = (decode_clo(env57835))[3];
//not do dummy comment
void* proc = (decode_clo(env57835))[2];
//not do dummy comment
void* kont57524 = (decode_clo(env57835))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont57524;
arg_buffer[3] = a5742357679;
arg_buffer[4] = a5742557683;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57834 = encode_clo(alloc_clo(lam57834_fptr, 0));

void* lam57836_fptr() // lam57836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57837 = arg_buffer[1];
//reading env and args
void* a5742457681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env57837))[5];
//not do dummy comment
void* a5742357679 = (decode_clo(env57837))[4];
//not do dummy comment
void* kont57524 = (decode_clo(env57837))[3];
//not do dummy comment
void* proc = (decode_clo(env57837))[2];
//not do dummy comment
void* acc = (decode_clo(env57837))[1];

//creating new closure instance
void** clo58814 = alloc_clo(lam57834_fptr, 3);

//setting env list
clo58814[1] = kont57524;
clo58814[2] = proc;
clo58814[3] = a5742357679;
void* f5752557682 = encode_clo(clo58814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5752557682;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5742457681;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57836 = encode_clo(alloc_clo(lam57836_fptr, 0));

void* lam57838_fptr() // lam57838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57839 = arg_buffer[1];
//reading env and args
void* a5742357679 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57839))[6];
//not do dummy comment
void* kont57524 = (decode_clo(env57839))[5];
//not do dummy comment
void* foldr = (decode_clo(env57839))[4];
//not do dummy comment
void* lst = (decode_clo(env57839))[3];
//not do dummy comment
void* proc = (decode_clo(env57839))[2];
//not do dummy comment
void* acc = (decode_clo(env57839))[1];

//creating new closure instance
void** clo58816 = alloc_clo(lam57836_fptr, 5);

//setting env list
clo58816[1] = acc;
clo58816[2] = proc;
clo58816[3] = kont57524;
clo58816[4] = a5742357679;
clo58816[5] = foldr;
void* f5752657680 = encode_clo(clo58816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5752657680;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57838 = encode_clo(alloc_clo(lam57838_fptr, 0));

void* lam57840_fptr() // lam57840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57841 = arg_buffer[1];
//reading env and args
void* a5742257677 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57841))[7];
//not do dummy comment
void* car = (decode_clo(env57841))[6];
//not do dummy comment
void* kont57524 = (decode_clo(env57841))[5];
//not do dummy comment
void* foldr = (decode_clo(env57841))[4];
//not do dummy comment
void* lst = (decode_clo(env57841))[3];
//not do dummy comment
void* proc = (decode_clo(env57841))[2];
//not do dummy comment
void* acc = (decode_clo(env57841))[1];

//if-clause
bool if_guard58817 = is_true(a5742257677);
if(if_guard58817)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57524);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57524))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58819 = alloc_clo(lam57838_fptr, 6);

//setting env list
clo58819[1] = acc;
clo58819[2] = proc;
clo58819[3] = lst;
clo58819[4] = foldr;
clo58819[5] = kont57524;
clo58819[6] = cdr;
void* f5752757678 = encode_clo(clo58819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5752757678;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57840 = encode_clo(alloc_clo(lam57840_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57842 = arg_buffer[1];
//reading env and args
void* kont57524 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo58821 = alloc_clo(lam57840_fptr, 7);

//setting env list
clo58821[1] = acc;
clo58821[2] = proc;
clo58821[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo58821[4] = foldr;
clo58821[5] = kont57524;
clo58821[6] = car;
clo58821[7] = cdr;
void* f5752857676 = encode_clo(clo58821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5752857676;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam57843_fptr() // lam57843 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57844 = arg_buffer[1];
//reading env and args
void* a5742957691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5742757687 = (decode_clo(env57844))[3];
//not do dummy comment
void* kont57529 = (decode_clo(env57844))[2];
//not do dummy comment
void* cons = (decode_clo(env57844))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont57529;
arg_buffer[3] = a5742757687;
arg_buffer[4] = a5742957691;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57843 = encode_clo(alloc_clo(lam57843_fptr, 0));

void* lam57845_fptr() // lam57845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57846 = arg_buffer[1];
//reading env and args
void* a5742857689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5742757687 = (decode_clo(env57846))[5];
//not do dummy comment
void* kont57529 = (decode_clo(env57846))[4];
//not do dummy comment
void* append = (decode_clo(env57846))[3];
//not do dummy comment
void* lst2 = (decode_clo(env57846))[2];
//not do dummy comment
void* cons = (decode_clo(env57846))[1];

//creating new closure instance
void** clo58823 = alloc_clo(lam57843_fptr, 3);

//setting env list
clo58823[1] = cons;
clo58823[2] = kont57529;
clo58823[3] = a5742757687;
void* f5753057690 = encode_clo(clo58823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5753057690;
arg_buffer[3] = a5742857689;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57845 = encode_clo(alloc_clo(lam57845_fptr, 0));

void* lam57847_fptr() // lam57847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57848 = arg_buffer[1];
//reading env and args
void* a5742757687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57848))[6];
//not do dummy comment
void* kont57529 = (decode_clo(env57848))[5];
//not do dummy comment
void* append = (decode_clo(env57848))[4];
//not do dummy comment
void* lst2 = (decode_clo(env57848))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57848))[2];
//not do dummy comment
void* cons = (decode_clo(env57848))[1];

//creating new closure instance
void** clo58825 = alloc_clo(lam57845_fptr, 5);

//setting env list
clo58825[1] = cons;
clo58825[2] = lst2;
clo58825[3] = append;
clo58825[4] = kont57529;
clo58825[5] = a5742757687;
void* f5753157688 = encode_clo(clo58825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5753157688;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57847 = encode_clo(alloc_clo(lam57847_fptr, 0));

void* lam57849_fptr() // lam57849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57850 = arg_buffer[1];
//reading env and args
void* a5742657685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env57850))[7];
//not do dummy comment
void* kont57529 = (decode_clo(env57850))[6];
//not do dummy comment
void* append = (decode_clo(env57850))[5];
//not do dummy comment
void* lst2 = (decode_clo(env57850))[4];
//not do dummy comment
void* cons = (decode_clo(env57850))[3];
//not do dummy comment
void* lst1 = (decode_clo(env57850))[2];
//not do dummy comment
void* car = (decode_clo(env57850))[1];

//if-clause
bool if_guard58826 = is_true(a5742657685);
if(if_guard58826)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57529);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57529))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo58828 = alloc_clo(lam57847_fptr, 6);

//setting env list
clo58828[1] = cons;
clo58828[2] = lst1;
clo58828[3] = lst2;
clo58828[4] = append;
clo58828[5] = kont57529;
clo58828[6] = cdr;
void* f5753257686 = encode_clo(clo58828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5753257686;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam57849 = encode_clo(alloc_clo(lam57849_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57851 = arg_buffer[1];
//reading env and args
void* kont57529 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo58830 = alloc_clo(lam57849_fptr, 7);

//setting env list
clo58830[1] = car;
clo58830[2] = lst1;
clo58830[3] = cons;
clo58830[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo58830[5] = append;
clo58830[6] = kont57529;
clo58830[7] = cdr;
void* f5753357684 = encode_clo(clo58830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5753357684;
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
void* _57852 = arg_buffer[1];
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

void* kont5753457692 = prim_car(lst);
void* lst57693 = prim_cdr(lst);
void* x5743057694 = apply_prim_hash(lst57693);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5753457692);
arg_buffer[2] = x5743057694;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5753457692))[0]);
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
void* _57853 = arg_buffer[1];
//reading env and args
void* kont57536 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5743157695 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57536);
arg_buffer[2] = x5743157695;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57536))[0]);
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
void* _57854 = arg_buffer[1];
//reading env and args
void* kont57537 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5743257696 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57537);
arg_buffer[2] = x5743257696;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57537))[0]);
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
void* _57855 = arg_buffer[1];
//reading env and args
void* kont57538 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5743357697 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57538);
arg_buffer[2] = x5743357697;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57538))[0]);
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
void* _57856 = arg_buffer[1];
//reading env and args
void* kont57539 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5743457698 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57539);
arg_buffer[2] = x5743457698;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57539))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam57857_fptr() // lam57857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57858 = arg_buffer[1];
//reading env and args
void* a5744157706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45count = (decode_clo(env57858))[2];
//not do dummy comment
void* kont57540 = (decode_clo(env57858))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45count);
arg_buffer[2] = kont57540;
arg_buffer[3] = a5744157706;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57857 = encode_clo(alloc_clo(lam57857_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57865 = arg_buffer[1];
//reading env and args
void* kont57540 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar58831 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58831, "100", 10);
void* a5743557699 = encode_mpz(mpzvar58831);
mpz_t* mpzvar58832 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58832, "80", 10);
void* a5743657700 = encode_mpz(mpzvar58832);
mpz_t* mpzvar58833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58833, "10", 10);
void* a5743757701 = encode_mpz(mpzvar58833);
mpz_t* mpzvar58834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58834, "2", 10);
void* a5743857702 = encode_mpz(mpzvar58834);
mpz_t* mpzvar58835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58835, "25", 10);
void* a5743957703 = encode_mpz(mpzvar58835);
mpz_t* mpzvar58836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar58836, "30", 10);
void* a5744057704 = encode_mpz(mpzvar58836);

//creating new closure instance
void** clo58838 = alloc_clo(lam57857_fptr, 2);

//setting env list
clo58838[1] = kont57540;
clo58838[2] = hash_u45count;
void* f5754157705 = encode_clo(clo58838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f5754157705;
arg_buffer[3] = a5743557699;
arg_buffer[4] = a5743657700;
arg_buffer[5] = a5743757701;
arg_buffer[6] = a5743857702;
arg_buffer[7] = a5743957703;
arg_buffer[8] = a5744057704;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam57866_fptr() // lam57866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env57867 = arg_buffer[1];
//reading env and args
void* x5744257708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont57542 = (decode_clo(env57867))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont57542);
arg_buffer[2] = x5744257708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont57542))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam57866 = encode_clo(alloc_clo(lam57866_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _57868 = arg_buffer[1];
//reading env and args
void* kont57542 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo58840 = alloc_clo(lam57866_fptr, 1);

//setting env list
clo58840[1] = kont57542;
void* f5754357707 = encode_clo(clo58840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5754357707;
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

