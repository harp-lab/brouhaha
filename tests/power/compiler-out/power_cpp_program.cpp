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
void* _30773 = arg_buffer[1];
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

void* kont3044830573 = prim_car(lst);
void* lst30574 = prim_cdr(lst);
void* x3033330575 = apply_prim__u43(lst30574);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3044830573);
arg_buffer[2] = x3033330575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3044830573))[0]);
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
void* _30774 = arg_buffer[1];
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

void* kont3045030576 = prim_car(lst);
void* lst30577 = prim_cdr(lst);
void* x3033430578 = apply_prim_max(lst30577);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3045030576);
arg_buffer[2] = x3033430578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3045030576))[0]);
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
void* _30775 = arg_buffer[1];
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

void* kont3045230579 = prim_car(lst);
void* lst30580 = prim_cdr(lst);
void* x3033530581 = apply_prim__u45(lst30580);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3045230579);
arg_buffer[2] = x3033530581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3045230579))[0]);
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
void* _30776 = arg_buffer[1];
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

void* kont3045430582 = prim_car(lst);
void* lst30583 = prim_cdr(lst);
void* x3033630584 = apply_prim__u42(lst30583);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3045430582);
arg_buffer[2] = x3033630584;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3045430582))[0]);
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
void* _30777 = arg_buffer[1];
//reading env and args
void* kont30456 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3033730585 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30456);
arg_buffer[2] = x3033730585;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30456))[0]);
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
void* _30778 = arg_buffer[1];
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

void* kont3045730586 = prim_car(lst);
void* lst30587 = prim_cdr(lst);
void* x3033830588 = apply_prim__u47(lst30587);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3045730586);
arg_buffer[2] = x3033830588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3045730586))[0]);
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
void* _30779 = arg_buffer[1];
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

void* kont3045930589 = prim_car(lst);
void* lst30590 = prim_cdr(lst);
void* x3033930591 = apply_prim__u61(lst30590);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3045930589);
arg_buffer[2] = x3033930591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3045930589))[0]);
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
void* _30780 = arg_buffer[1];
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

void* kont3046130592 = prim_car(lst);
void* lst30593 = prim_cdr(lst);
void* x3034030594 = apply_prim__u62(lst30593);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3046130592);
arg_buffer[2] = x3034030594;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3046130592))[0]);
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
void* _30781 = arg_buffer[1];
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

void* kont3046330595 = prim_car(lst);
void* lst30596 = prim_cdr(lst);
void* x3034130597 = apply_prim__u60(lst30596);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3046330595);
arg_buffer[2] = x3034130597;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3046330595))[0]);
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
void* _30782 = arg_buffer[1];
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

void* kont3046530598 = prim_car(lst);
void* lst30599 = prim_cdr(lst);
void* x3034230600 = apply_prim__u60_u61(lst30599);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3046530598);
arg_buffer[2] = x3034230600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3046530598))[0]);
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
void* _30783 = arg_buffer[1];
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

void* kont3046730601 = prim_car(lst);
void* lst30602 = prim_cdr(lst);
void* x3034330603 = apply_prim__u62_u61(lst30602);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3046730601);
arg_buffer[2] = x3034330603;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3046730601))[0]);
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
void* _30784 = arg_buffer[1];
//reading env and args
void* kont30469 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3034430604 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30469);
arg_buffer[2] = x3034430604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30469))[0]);
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
void* _30785 = arg_buffer[1];
//reading env and args
void* kont30470 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3034530605 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30470);
arg_buffer[2] = x3034530605;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30470))[0]);
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
void* _30786 = arg_buffer[1];
//reading env and args
void* kont30471 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3034630606 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30471);
arg_buffer[2] = x3034630606;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30471))[0]);
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
void* _30787 = arg_buffer[1];
//reading env and args
void* kont30472 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3034730607 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30472);
arg_buffer[2] = x3034730607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30472))[0]);
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
void* _30788 = arg_buffer[1];
//reading env and args
void* kont30473 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3034830608 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30473);
arg_buffer[2] = x3034830608;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30473))[0]);
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
void* _30789 = arg_buffer[1];
//reading env and args
void* kont30474 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3034930609 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30474);
arg_buffer[2] = x3034930609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30474))[0]);
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
void* _30790 = arg_buffer[1];
//reading env and args
void* kont30475 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3035030610 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30475);
arg_buffer[2] = x3035030610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30475))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam30791_fptr() // lam30791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30792 = arg_buffer[1];
//reading env and args
void* a3035330614 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3035130611 = (decode_clo(env30792))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env30792))[2];
//not do dummy comment
void* kont30476 = (decode_clo(env30792))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30476;
arg_buffer[3] = a3035130611;
arg_buffer[4] = a3035330614;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30791 = encode_clo(alloc_clo(lam30791_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30795 = arg_buffer[1];
//reading env and args
void* kont30476 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30964 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30964, "0", 10);
void* a3035130611 = encode_mpz(mpzvar30964);
mpz_t* mpzvar30965 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30965, "2", 10);
void* a3035230612 = encode_mpz(mpzvar30965);

//creating new closure instance
void** clo30967 = alloc_clo(lam30791_fptr, 3);

//setting env list
clo30967[1] = kont30476;
clo30967[2] = equal_u63;
clo30967[3] = a3035130611;
void* f3047730613 = encode_clo(clo30967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3047730613;
arg_buffer[3] = x;
arg_buffer[4] = a3035230612;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam30796_fptr() // lam30796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30797 = arg_buffer[1];
//reading env and args
void* a3035630618 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3035430615 = (decode_clo(env30797))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env30797))[2];
//not do dummy comment
void* kont30478 = (decode_clo(env30797))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30478;
arg_buffer[3] = a3035430615;
arg_buffer[4] = a3035630618;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30796 = encode_clo(alloc_clo(lam30796_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30800 = arg_buffer[1];
//reading env and args
void* kont30478 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar30968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30968, "1", 10);
void* a3035430615 = encode_mpz(mpzvar30968);
mpz_t* mpzvar30969 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar30969, "2", 10);
void* a3035530616 = encode_mpz(mpzvar30969);

//creating new closure instance
void** clo30971 = alloc_clo(lam30796_fptr, 3);

//setting env list
clo30971[1] = kont30478;
clo30971[2] = equal_u63;
clo30971[3] = a3035430615;
void* f3047930617 = encode_clo(clo30971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3047930617;
arg_buffer[3] = x;
arg_buffer[4] = a3035530616;
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
void* _30801 = arg_buffer[1];
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

void* kont3048030619 = prim_car(x);
void* x30620 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3048030619);
arg_buffer[2] = x30620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3048030619))[0]);
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
void* _30802 = arg_buffer[1];
//reading env and args
void* kont30482 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x3035730621 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30482);
arg_buffer[2] = x3035730621;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30482))[0]);
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
void* _30803 = arg_buffer[1];
//reading env and args
void* kont30483 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x3035830622 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30483);
arg_buffer[2] = x3035830622;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30483))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam30806_fptr() // lam30806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30807 = arg_buffer[1];
//reading env and args
void* a3036430632 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30484 = (decode_clo(env30807))[3];
//not do dummy comment
void* x = (decode_clo(env30807))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30807))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont30484;
arg_buffer[3] = x;
arg_buffer[4] = a3036430632;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30806 = encode_clo(alloc_clo(lam30806_fptr, 0));

void* lam30808_fptr() // lam30808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30809 = arg_buffer[1];
//reading env and args
void* a3036230629 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30809))[5];
//not do dummy comment
void* x = (decode_clo(env30809))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env30809))[3];
//not do dummy comment
void* lst = (decode_clo(env30809))[2];
//not do dummy comment
void* kont30484 = (decode_clo(env30809))[1];

//if-clause
bool if_guard30972 = is_true(a3036230629);
if(if_guard30972)
{
void* x3036330630 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30484);
arg_buffer[2] = x3036330630;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30484))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30974 = alloc_clo(lam30806_fptr, 3);

//setting env list
clo30974[1] = member_u63;
clo30974[2] = x;
clo30974[3] = kont30484;
void* f3048530631 = encode_clo(clo30974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3048530631;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30808 = encode_clo(alloc_clo(lam30808_fptr, 0));

void* lam30810_fptr() // lam30810 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30811 = arg_buffer[1];
//reading env and args
void* a3036130627 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30811))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env30811))[5];
//not do dummy comment
void* x = (decode_clo(env30811))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env30811))[3];
//not do dummy comment
void* lst = (decode_clo(env30811))[2];
//not do dummy comment
void* kont30484 = (decode_clo(env30811))[1];

//creating new closure instance
void** clo30976 = alloc_clo(lam30808_fptr, 5);

//setting env list
clo30976[1] = kont30484;
clo30976[2] = lst;
clo30976[3] = member_u63;
clo30976[4] = x;
clo30976[5] = cdr;
void* f3048630628 = encode_clo(clo30976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3048630628;
arg_buffer[3] = a3036130627;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30810 = encode_clo(alloc_clo(lam30810_fptr, 0));

void* lam30812_fptr() // lam30812 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30813 = arg_buffer[1];
//reading env and args
void* a3035930624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30813))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env30813))[6];
//not do dummy comment
void* x = (decode_clo(env30813))[5];
//not do dummy comment
void* car = (decode_clo(env30813))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env30813))[3];
//not do dummy comment
void* lst = (decode_clo(env30813))[2];
//not do dummy comment
void* kont30484 = (decode_clo(env30813))[1];

//if-clause
bool if_guard30977 = is_true(a3035930624);
if(if_guard30977)
{
void* x3036030625 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30484);
arg_buffer[2] = x3036030625;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30484))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30979 = alloc_clo(lam30810_fptr, 6);

//setting env list
clo30979[1] = kont30484;
clo30979[2] = lst;
clo30979[3] = member_u63;
clo30979[4] = x;
clo30979[5] = equal_u63;
clo30979[6] = cdr;
void* f3048730626 = encode_clo(clo30979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3048730626;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30812 = encode_clo(alloc_clo(lam30812_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30814 = arg_buffer[1];
//reading env and args
void* kont30484 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30981 = alloc_clo(lam30812_fptr, 7);

//setting env list
clo30981[1] = kont30484;
clo30981[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo30981[3] = member_u63;
clo30981[4] = car;
clo30981[5] = x;
clo30981[6] = equal_u63;
clo30981[7] = cdr;
void* f3048830623 = encode_clo(clo30981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3048830623;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam30815_fptr() // lam30815 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30816 = arg_buffer[1];
//reading env and args
void* a3036830640 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30489 = (decode_clo(env30816))[4];
//not do dummy comment
void* fun = (decode_clo(env30816))[3];
//not do dummy comment
void* a3036730638 = (decode_clo(env30816))[2];
//not do dummy comment
void* foldl = (decode_clo(env30816))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont30489;
arg_buffer[3] = fun;
arg_buffer[4] = a3036730638;
arg_buffer[5] = a3036830640;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30815 = encode_clo(alloc_clo(lam30815_fptr, 0));

void* lam30817_fptr() // lam30817 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30818 = arg_buffer[1];
//reading env and args
void* a3036730638 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30818))[5];
//not do dummy comment
void* lst = (decode_clo(env30818))[4];
//not do dummy comment
void* kont30489 = (decode_clo(env30818))[3];
//not do dummy comment
void* fun = (decode_clo(env30818))[2];
//not do dummy comment
void* foldl = (decode_clo(env30818))[1];

//creating new closure instance
void** clo30983 = alloc_clo(lam30815_fptr, 4);

//setting env list
clo30983[1] = foldl;
clo30983[2] = a3036730638;
clo30983[3] = fun;
clo30983[4] = kont30489;
void* f3049030639 = encode_clo(clo30983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3049030639;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30817 = encode_clo(alloc_clo(lam30817_fptr, 0));

void* lam30819_fptr() // lam30819 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30820 = arg_buffer[1];
//reading env and args
void* a3036630636 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30820))[6];
//not do dummy comment
void* lst = (decode_clo(env30820))[5];
//not do dummy comment
void* kont30489 = (decode_clo(env30820))[4];
//not do dummy comment
void* fun = (decode_clo(env30820))[3];
//not do dummy comment
void* acc = (decode_clo(env30820))[2];
//not do dummy comment
void* foldl = (decode_clo(env30820))[1];

//creating new closure instance
void** clo30985 = alloc_clo(lam30817_fptr, 5);

//setting env list
clo30985[1] = foldl;
clo30985[2] = fun;
clo30985[3] = kont30489;
clo30985[4] = lst;
clo30985[5] = cdr;
void* f3049130637 = encode_clo(clo30985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3049130637;
arg_buffer[3] = a3036630636;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30819 = encode_clo(alloc_clo(lam30819_fptr, 0));

void* lam30821_fptr() // lam30821 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30822 = arg_buffer[1];
//reading env and args
void* a3036530634 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30822))[7];
//not do dummy comment
void* lst = (decode_clo(env30822))[6];
//not do dummy comment
void* kont30489 = (decode_clo(env30822))[5];
//not do dummy comment
void* fun = (decode_clo(env30822))[4];
//not do dummy comment
void* acc = (decode_clo(env30822))[3];
//not do dummy comment
void* car = (decode_clo(env30822))[2];
//not do dummy comment
void* foldl = (decode_clo(env30822))[1];

//if-clause
bool if_guard30986 = is_true(a3036530634);
if(if_guard30986)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30489);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30489))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30988 = alloc_clo(lam30819_fptr, 6);

//setting env list
clo30988[1] = foldl;
clo30988[2] = acc;
clo30988[3] = fun;
clo30988[4] = kont30489;
clo30988[5] = lst;
clo30988[6] = cdr;
void* f3049230635 = encode_clo(clo30988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3049230635;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30821 = encode_clo(alloc_clo(lam30821_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30823 = arg_buffer[1];
//reading env and args
void* kont30489 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo30990 = alloc_clo(lam30821_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo30990[1] = foldl;
clo30990[2] = car;
clo30990[3] = acc;
clo30990[4] = fun;
clo30990[5] = kont30489;
clo30990[6] = lst;
clo30990[7] = cdr;
void* f3049330633 = encode_clo(clo30990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3049330633;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam30824_fptr() // lam30824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30825 = arg_buffer[1];
//reading env and args
void* a3037230648 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3037030644 = (decode_clo(env30825))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30825))[2];
//not do dummy comment
void* kont30494 = (decode_clo(env30825))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30494;
arg_buffer[3] = a3037030644;
arg_buffer[4] = a3037230648;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30824 = encode_clo(alloc_clo(lam30824_fptr, 0));

void* lam30826_fptr() // lam30826 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30827 = arg_buffer[1];
//reading env and args
void* a3037130646 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3037030644 = (decode_clo(env30827))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30827))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30827))[3];
//not do dummy comment
void* cons = (decode_clo(env30827))[2];
//not do dummy comment
void* kont30494 = (decode_clo(env30827))[1];

//creating new closure instance
void** clo30992 = alloc_clo(lam30824_fptr, 3);

//setting env list
clo30992[1] = kont30494;
clo30992[2] = reverse_u45helper;
clo30992[3] = a3037030644;
void* f3049530647 = encode_clo(clo30992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3049530647;
arg_buffer[3] = a3037130646;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30826 = encode_clo(alloc_clo(lam30826_fptr, 0));

void* lam30828_fptr() // lam30828 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30829 = arg_buffer[1];
//reading env and args
void* a3037030644 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30829))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30829))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30829))[4];
//not do dummy comment
void* car = (decode_clo(env30829))[3];
//not do dummy comment
void* cons = (decode_clo(env30829))[2];
//not do dummy comment
void* kont30494 = (decode_clo(env30829))[1];

//creating new closure instance
void** clo30994 = alloc_clo(lam30826_fptr, 5);

//setting env list
clo30994[1] = kont30494;
clo30994[2] = cons;
clo30994[3] = lst2;
clo30994[4] = reverse_u45helper;
clo30994[5] = a3037030644;
void* f3049630645 = encode_clo(clo30994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3049630645;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30828 = encode_clo(alloc_clo(lam30828_fptr, 0));

void* lam30830_fptr() // lam30830 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30831 = arg_buffer[1];
//reading env and args
void* a3036930642 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30831))[7];
//not do dummy comment
void* lst = (decode_clo(env30831))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30831))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30831))[4];
//not do dummy comment
void* car = (decode_clo(env30831))[3];
//not do dummy comment
void* cons = (decode_clo(env30831))[2];
//not do dummy comment
void* kont30494 = (decode_clo(env30831))[1];

//if-clause
bool if_guard30995 = is_true(a3036930642);
if(if_guard30995)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30494);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30494))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo30997 = alloc_clo(lam30828_fptr, 6);

//setting env list
clo30997[1] = kont30494;
clo30997[2] = cons;
clo30997[3] = car;
clo30997[4] = lst2;
clo30997[5] = reverse_u45helper;
clo30997[6] = lst;
void* f3049730643 = encode_clo(clo30997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3049730643;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30830 = encode_clo(alloc_clo(lam30830_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30832 = arg_buffer[1];
//reading env and args
void* kont30494 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo30999 = alloc_clo(lam30830_fptr, 7);

//setting env list
clo30999[1] = kont30494;
clo30999[2] = cons;
clo30999[3] = car;
clo30999[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo30999[5] = reverse_u45helper;
clo30999[6] = lst;
clo30999[7] = cdr;
void* f3049830641 = encode_clo(clo30999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3049830641;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam30833_fptr() // lam30833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30834 = arg_buffer[1];
//reading env and args
void* a3037330650 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30499 = (decode_clo(env30834))[3];
//not do dummy comment
void* lst = (decode_clo(env30834))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30834))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30499;
arg_buffer[3] = lst;
arg_buffer[4] = a3037330650;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30833 = encode_clo(alloc_clo(lam30833_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30835 = arg_buffer[1];
//reading env and args
void* kont30499 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31001 = alloc_clo(lam30833_fptr, 3);

//setting env list
clo31001[1] = reverse_u45helper;
clo31001[2] = lst;
clo31001[3] = kont30499;
void* f3050030649 = encode_clo(clo31001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3050030649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam30836_fptr() // lam30836 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30837 = arg_buffer[1];
//reading env and args
void* x3037630655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30501 = (decode_clo(env30837))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30501);
arg_buffer[2] = x3037630655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30501))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30836 = encode_clo(alloc_clo(lam30836_fptr, 0));

void* lam30838_fptr() // lam30838 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30839 = arg_buffer[1];
//reading env and args
void* a3038130664 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3037730657 = (decode_clo(env30839))[4];
//not do dummy comment
void* a3037930660 = (decode_clo(env30839))[3];
//not do dummy comment
void* kont30501 = (decode_clo(env30839))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env30839))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30501;
arg_buffer[3] = a3037730657;
arg_buffer[4] = a3037930660;
arg_buffer[5] = a3038130664;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30838 = encode_clo(alloc_clo(lam30838_fptr, 0));

void* lam30840_fptr() // lam30840 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30841 = arg_buffer[1];
//reading env and args
void* a3038030662 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3037730657 = (decode_clo(env30841))[6];
//not do dummy comment
void* a3037930660 = (decode_clo(env30841))[5];
//not do dummy comment
void* kont30501 = (decode_clo(env30841))[4];
//not do dummy comment
void* cons = (decode_clo(env30841))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30841))[2];
//not do dummy comment
void* lst2 = (decode_clo(env30841))[1];

//creating new closure instance
void** clo31003 = alloc_clo(lam30838_fptr, 4);

//setting env list
clo31003[1] = take_u45helper;
clo31003[2] = kont30501;
clo31003[3] = a3037930660;
clo31003[4] = a3037730657;
void* f3050330663 = encode_clo(clo31003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3050330663;
arg_buffer[3] = a3038030662;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30840 = encode_clo(alloc_clo(lam30840_fptr, 0));

void* lam30842_fptr() // lam30842 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30843 = arg_buffer[1];
//reading env and args
void* a3037930660 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3037730657 = (decode_clo(env30843))[7];
//not do dummy comment
void* lst = (decode_clo(env30843))[6];
//not do dummy comment
void* kont30501 = (decode_clo(env30843))[5];
//not do dummy comment
void* car = (decode_clo(env30843))[4];
//not do dummy comment
void* cons = (decode_clo(env30843))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30843))[2];
//not do dummy comment
void* lst2 = (decode_clo(env30843))[1];

//creating new closure instance
void** clo31005 = alloc_clo(lam30840_fptr, 6);

//setting env list
clo31005[1] = lst2;
clo31005[2] = take_u45helper;
clo31005[3] = cons;
clo31005[4] = kont30501;
clo31005[5] = a3037930660;
clo31005[6] = a3037730657;
void* f3050430661 = encode_clo(clo31005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3050430661;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30842 = encode_clo(alloc_clo(lam30842_fptr, 0));

void* lam30845_fptr() // lam30845 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30846 = arg_buffer[1];
//reading env and args
void* a3037730657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30846))[8];
//not do dummy comment
void* kont30501 = (decode_clo(env30846))[7];
//not do dummy comment
void* cons = (decode_clo(env30846))[6];
//not do dummy comment
void* _u45 = (decode_clo(env30846))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30846))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30846))[3];
//not do dummy comment
void* n = (decode_clo(env30846))[2];
//not do dummy comment
void* car = (decode_clo(env30846))[1];
mpz_t* mpzvar31006 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31006, "1", 10);
void* a3037830658 = encode_mpz(mpzvar31006);

//creating new closure instance
void** clo31008 = alloc_clo(lam30842_fptr, 7);

//setting env list
clo31008[1] = lst2;
clo31008[2] = take_u45helper;
clo31008[3] = cons;
clo31008[4] = car;
clo31008[5] = kont30501;
clo31008[6] = lst;
clo31008[7] = a3037730657;
void* f3050530659 = encode_clo(clo31008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3050530659;
arg_buffer[3] = n;
arg_buffer[4] = a3037830658;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30845 = encode_clo(alloc_clo(lam30845_fptr, 0));

void* lam30847_fptr() // lam30847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30848 = arg_buffer[1];
//reading env and args
void* a3037530653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30848))[10];
//not do dummy comment
void* lst = (decode_clo(env30848))[9];
//not do dummy comment
void* kont30501 = (decode_clo(env30848))[8];
//not do dummy comment
void* reverse = (decode_clo(env30848))[7];
//not do dummy comment
void* cons = (decode_clo(env30848))[6];
//not do dummy comment
void* _u45 = (decode_clo(env30848))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30848))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30848))[3];
//not do dummy comment
void* n = (decode_clo(env30848))[2];
//not do dummy comment
void* car = (decode_clo(env30848))[1];

//if-clause
bool if_guard31009 = is_true(a3037530653);
if(if_guard31009)
{

//creating new closure instance
void** clo31011 = alloc_clo(lam30836_fptr, 1);

//setting env list
clo31011[1] = kont30501;
void* f3050230654 = encode_clo(clo31011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3050230654;
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
void** clo31013 = alloc_clo(lam30845_fptr, 8);

//setting env list
clo31013[1] = car;
clo31013[2] = n;
clo31013[3] = lst2;
clo31013[4] = take_u45helper;
clo31013[5] = _u45;
clo31013[6] = cons;
clo31013[7] = kont30501;
clo31013[8] = lst;
void* f3050630656 = encode_clo(clo31013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3050630656;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30847 = encode_clo(alloc_clo(lam30847_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30850 = arg_buffer[1];
//reading env and args
void* kont30501 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar31014 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31014, "0", 10);
void* a3037430651 = encode_mpz(mpzvar31014);

//creating new closure instance
void** clo31016 = alloc_clo(lam30847_fptr, 10);

//setting env list
clo31016[1] = car;
clo31016[2] = n;
clo31016[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo31016[4] = take_u45helper;
clo31016[5] = _u45;
clo31016[6] = cons;
clo31016[7] = reverse;
clo31016[8] = kont30501;
clo31016[9] = lst;
clo31016[10] = cdr;
void* f3050730652 = encode_clo(clo31016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3050730652;
arg_buffer[3] = n;
arg_buffer[4] = a3037430651;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam30851_fptr() // lam30851 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30852 = arg_buffer[1];
//reading env and args
void* a3038230666 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30852))[4];
//not do dummy comment
void* n = (decode_clo(env30852))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30852))[2];
//not do dummy comment
void* kont30508 = (decode_clo(env30852))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30508;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3038230666;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30851 = encode_clo(alloc_clo(lam30851_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30853 = arg_buffer[1];
//reading env and args
void* kont30508 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31018 = alloc_clo(lam30851_fptr, 4);

//setting env list
clo31018[1] = kont30508;
clo31018[2] = take_u45helper;
clo31018[3] = n;
clo31018[4] = lst;
void* f3050930665 = encode_clo(clo31018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3050930665;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam30855_fptr() // lam30855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30856 = arg_buffer[1];
//reading env and args
void* a3038730674 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env30856))[3];
//not do dummy comment
void* a3038530670 = (decode_clo(env30856))[2];
//not do dummy comment
void* kont30510 = (decode_clo(env30856))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont30510;
arg_buffer[3] = a3038530670;
arg_buffer[4] = a3038730674;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30855 = encode_clo(alloc_clo(lam30855_fptr, 0));

void* lam30857_fptr() // lam30857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30858 = arg_buffer[1];
//reading env and args
void* a3038630672 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env30858))[4];
//not do dummy comment
void* _u43 = (decode_clo(env30858))[3];
//not do dummy comment
void* a3038530670 = (decode_clo(env30858))[2];
//not do dummy comment
void* kont30510 = (decode_clo(env30858))[1];

//creating new closure instance
void** clo31020 = alloc_clo(lam30855_fptr, 3);

//setting env list
clo31020[1] = kont30510;
clo31020[2] = a3038530670;
clo31020[3] = _u43;
void* f3051130673 = encode_clo(clo31020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3051130673;
arg_buffer[3] = a3038630672;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30857 = encode_clo(alloc_clo(lam30857_fptr, 0));

void* lam30860_fptr() // lam30860 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30861 = arg_buffer[1];
//reading env and args
void* a3038330668 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30861))[5];
//not do dummy comment
void* lst = (decode_clo(env30861))[4];
//not do dummy comment
void* length = (decode_clo(env30861))[3];
//not do dummy comment
void* _u43 = (decode_clo(env30861))[2];
//not do dummy comment
void* kont30510 = (decode_clo(env30861))[1];

//if-clause
bool if_guard31021 = is_true(a3038330668);
if(if_guard31021)
{
mpz_t* mpzvar31022 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31022, "0", 10);
void* x3038430669 = encode_mpz(mpzvar31022);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30510);
arg_buffer[2] = x3038430669;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30510))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar31023 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31023, "1", 10);
void* a3038530670 = encode_mpz(mpzvar31023);

//creating new closure instance
void** clo31025 = alloc_clo(lam30857_fptr, 4);

//setting env list
clo31025[1] = kont30510;
clo31025[2] = a3038530670;
clo31025[3] = _u43;
clo31025[4] = length;
void* f3051230671 = encode_clo(clo31025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3051230671;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30860 = encode_clo(alloc_clo(lam30860_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30862 = arg_buffer[1];
//reading env and args
void* kont30510 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31027 = alloc_clo(lam30860_fptr, 5);

//setting env list
clo31027[1] = kont30510;
clo31027[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo31027[3] = length;
clo31027[4] = lst;
clo31027[5] = cdr;
void* f3051330667 = encode_clo(clo31027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3051330667;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam30863_fptr() // lam30863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30864 = arg_buffer[1];
//reading env and args
void* x3038930678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30514 = (decode_clo(env30864))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30514);
arg_buffer[2] = x3038930678;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30514))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30863 = encode_clo(alloc_clo(lam30863_fptr, 0));

void* lam30865_fptr() // lam30865 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30866 = arg_buffer[1];
//reading env and args
void* a3039330686 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30514 = (decode_clo(env30866))[3];
//not do dummy comment
void* a3039130682 = (decode_clo(env30866))[2];
//not do dummy comment
void* cons = (decode_clo(env30866))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30514;
arg_buffer[3] = a3039130682;
arg_buffer[4] = a3039330686;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30865 = encode_clo(alloc_clo(lam30865_fptr, 0));

void* lam30867_fptr() // lam30867 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30868 = arg_buffer[1];
//reading env and args
void* a3039230684 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30514 = (decode_clo(env30868))[5];
//not do dummy comment
void* map = (decode_clo(env30868))[4];
//not do dummy comment
void* a3039130682 = (decode_clo(env30868))[3];
//not do dummy comment
void* proc = (decode_clo(env30868))[2];
//not do dummy comment
void* cons = (decode_clo(env30868))[1];

//creating new closure instance
void** clo31029 = alloc_clo(lam30865_fptr, 3);

//setting env list
clo31029[1] = cons;
clo31029[2] = a3039130682;
clo31029[3] = kont30514;
void* f3051630685 = encode_clo(clo31029);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3051630685;
arg_buffer[3] = proc;
arg_buffer[4] = a3039230684;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30867 = encode_clo(alloc_clo(lam30867_fptr, 0));

void* lam30869_fptr() // lam30869 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30870 = arg_buffer[1];
//reading env and args
void* a3039130682 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30870))[6];
//not do dummy comment
void* kont30514 = (decode_clo(env30870))[5];
//not do dummy comment
void* lst = (decode_clo(env30870))[4];
//not do dummy comment
void* map = (decode_clo(env30870))[3];
//not do dummy comment
void* proc = (decode_clo(env30870))[2];
//not do dummy comment
void* cons = (decode_clo(env30870))[1];

//creating new closure instance
void** clo31031 = alloc_clo(lam30867_fptr, 5);

//setting env list
clo31031[1] = cons;
clo31031[2] = proc;
clo31031[3] = a3039130682;
clo31031[4] = map;
clo31031[5] = kont30514;
void* f3051730683 = encode_clo(clo31031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3051730683;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30869 = encode_clo(alloc_clo(lam30869_fptr, 0));

void* lam30871_fptr() // lam30871 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30872 = arg_buffer[1];
//reading env and args
void* a3039030680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30872))[6];
//not do dummy comment
void* kont30514 = (decode_clo(env30872))[5];
//not do dummy comment
void* lst = (decode_clo(env30872))[4];
//not do dummy comment
void* map = (decode_clo(env30872))[3];
//not do dummy comment
void* proc = (decode_clo(env30872))[2];
//not do dummy comment
void* cons = (decode_clo(env30872))[1];

//creating new closure instance
void** clo31033 = alloc_clo(lam30869_fptr, 6);

//setting env list
clo31033[1] = cons;
clo31033[2] = proc;
clo31033[3] = map;
clo31033[4] = lst;
clo31033[5] = kont30514;
clo31033[6] = cdr;
void* f3051830681 = encode_clo(clo31033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3051830681;
arg_buffer[3] = a3039030680;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30871 = encode_clo(alloc_clo(lam30871_fptr, 0));

void* lam30873_fptr() // lam30873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30874 = arg_buffer[1];
//reading env and args
void* a3038830676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30514 = (decode_clo(env30874))[8];
//not do dummy comment
void* lst = (decode_clo(env30874))[7];
//not do dummy comment
void* map = (decode_clo(env30874))[6];
//not do dummy comment
void* proc = (decode_clo(env30874))[5];
//not do dummy comment
void* car = (decode_clo(env30874))[4];
//not do dummy comment
void* cons = (decode_clo(env30874))[3];
//not do dummy comment
void* list = (decode_clo(env30874))[2];
//not do dummy comment
void* cdr = (decode_clo(env30874))[1];

//if-clause
bool if_guard31034 = is_true(a3038830676);
if(if_guard31034)
{

//creating new closure instance
void** clo31036 = alloc_clo(lam30863_fptr, 1);

//setting env list
clo31036[1] = kont30514;
void* f3051530677 = encode_clo(clo31036);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3051530677;
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
void** clo31038 = alloc_clo(lam30871_fptr, 6);

//setting env list
clo31038[1] = cons;
clo31038[2] = proc;
clo31038[3] = map;
clo31038[4] = lst;
clo31038[5] = kont30514;
clo31038[6] = cdr;
void* f3051930679 = encode_clo(clo31038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3051930679;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30873 = encode_clo(alloc_clo(lam30873_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30875 = arg_buffer[1];
//reading env and args
void* kont30514 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31040 = alloc_clo(lam30873_fptr, 8);

//setting env list
clo31040[1] = cdr;
clo31040[2] = list;
clo31040[3] = cons;
clo31040[4] = car;
clo31040[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo31040[6] = map;
clo31040[7] = lst;
clo31040[8] = kont30514;
void* f3052030675 = encode_clo(clo31040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3052030675;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam30876_fptr() // lam30876 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30877 = arg_buffer[1];
//reading env and args
void* x3039530690 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30521 = (decode_clo(env30877))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30521);
arg_buffer[2] = x3039530690;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30521))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30876 = encode_clo(alloc_clo(lam30876_fptr, 0));

void* lam30878_fptr() // lam30878 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30879 = arg_buffer[1];
//reading env and args
void* a3040030700 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3039830696 = (decode_clo(env30879))[3];
//not do dummy comment
void* kont30521 = (decode_clo(env30879))[2];
//not do dummy comment
void* cons = (decode_clo(env30879))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30521;
arg_buffer[3] = a3039830696;
arg_buffer[4] = a3040030700;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30878 = encode_clo(alloc_clo(lam30878_fptr, 0));

void* lam30880_fptr() // lam30880 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30881 = arg_buffer[1];
//reading env and args
void* a3039930698 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env30881))[5];
//not do dummy comment
void* a3039830696 = (decode_clo(env30881))[4];
//not do dummy comment
void* kont30521 = (decode_clo(env30881))[3];
//not do dummy comment
void* filter = (decode_clo(env30881))[2];
//not do dummy comment
void* cons = (decode_clo(env30881))[1];

//creating new closure instance
void** clo31042 = alloc_clo(lam30878_fptr, 3);

//setting env list
clo31042[1] = cons;
clo31042[2] = kont30521;
clo31042[3] = a3039830696;
void* f3052330699 = encode_clo(clo31042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3052330699;
arg_buffer[3] = op;
arg_buffer[4] = a3039930698;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30880 = encode_clo(alloc_clo(lam30880_fptr, 0));

void* lam30882_fptr() // lam30882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30883 = arg_buffer[1];
//reading env and args
void* a3039830696 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30883))[6];
//not do dummy comment
void* lst = (decode_clo(env30883))[5];
//not do dummy comment
void* op = (decode_clo(env30883))[4];
//not do dummy comment
void* kont30521 = (decode_clo(env30883))[3];
//not do dummy comment
void* filter = (decode_clo(env30883))[2];
//not do dummy comment
void* cons = (decode_clo(env30883))[1];

//creating new closure instance
void** clo31044 = alloc_clo(lam30880_fptr, 5);

//setting env list
clo31044[1] = cons;
clo31044[2] = filter;
clo31044[3] = kont30521;
clo31044[4] = a3039830696;
clo31044[5] = op;
void* f3052430697 = encode_clo(clo31044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3052430697;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30882 = encode_clo(alloc_clo(lam30882_fptr, 0));

void* lam30884_fptr() // lam30884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30885 = arg_buffer[1];
//reading env and args
void* a3040130702 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env30885))[3];
//not do dummy comment
void* kont30521 = (decode_clo(env30885))[2];
//not do dummy comment
void* filter = (decode_clo(env30885))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont30521;
arg_buffer[3] = op;
arg_buffer[4] = a3040130702;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30884 = encode_clo(alloc_clo(lam30884_fptr, 0));

void* lam30886_fptr() // lam30886 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30887 = arg_buffer[1];
//reading env and args
void* a3039730694 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30887))[7];
//not do dummy comment
void* lst = (decode_clo(env30887))[6];
//not do dummy comment
void* op = (decode_clo(env30887))[5];
//not do dummy comment
void* kont30521 = (decode_clo(env30887))[4];
//not do dummy comment
void* cons = (decode_clo(env30887))[3];
//not do dummy comment
void* filter = (decode_clo(env30887))[2];
//not do dummy comment
void* car = (decode_clo(env30887))[1];

//if-clause
bool if_guard31045 = is_true(a3039730694);
if(if_guard31045)
{

//creating new closure instance
void** clo31047 = alloc_clo(lam30882_fptr, 6);

//setting env list
clo31047[1] = cons;
clo31047[2] = filter;
clo31047[3] = kont30521;
clo31047[4] = op;
clo31047[5] = lst;
clo31047[6] = cdr;
void* f3052530695 = encode_clo(clo31047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3052530695;
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
void** clo31049 = alloc_clo(lam30884_fptr, 3);

//setting env list
clo31049[1] = filter;
clo31049[2] = kont30521;
clo31049[3] = op;
void* f3052630701 = encode_clo(clo31049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3052630701;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30886 = encode_clo(alloc_clo(lam30886_fptr, 0));

void* lam30888_fptr() // lam30888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30889 = arg_buffer[1];
//reading env and args
void* a3039630692 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30889))[7];
//not do dummy comment
void* lst = (decode_clo(env30889))[6];
//not do dummy comment
void* op = (decode_clo(env30889))[5];
//not do dummy comment
void* kont30521 = (decode_clo(env30889))[4];
//not do dummy comment
void* cons = (decode_clo(env30889))[3];
//not do dummy comment
void* filter = (decode_clo(env30889))[2];
//not do dummy comment
void* car = (decode_clo(env30889))[1];

//creating new closure instance
void** clo31051 = alloc_clo(lam30886_fptr, 7);

//setting env list
clo31051[1] = car;
clo31051[2] = filter;
clo31051[3] = cons;
clo31051[4] = kont30521;
clo31051[5] = op;
clo31051[6] = lst;
clo31051[7] = cdr;
void* f3052730693 = encode_clo(clo31051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3052730693;
arg_buffer[3] = a3039630692;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30888 = encode_clo(alloc_clo(lam30888_fptr, 0));

void* lam30890_fptr() // lam30890 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30891 = arg_buffer[1];
//reading env and args
void* a3039430688 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30891))[8];
//not do dummy comment
void* op = (decode_clo(env30891))[7];
//not do dummy comment
void* kont30521 = (decode_clo(env30891))[6];
//not do dummy comment
void* cons = (decode_clo(env30891))[5];
//not do dummy comment
void* list = (decode_clo(env30891))[4];
//not do dummy comment
void* cdr = (decode_clo(env30891))[3];
//not do dummy comment
void* filter = (decode_clo(env30891))[2];
//not do dummy comment
void* car = (decode_clo(env30891))[1];

//if-clause
bool if_guard31052 = is_true(a3039430688);
if(if_guard31052)
{

//creating new closure instance
void** clo31054 = alloc_clo(lam30876_fptr, 1);

//setting env list
clo31054[1] = kont30521;
void* f3052230689 = encode_clo(clo31054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3052230689;
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
void** clo31056 = alloc_clo(lam30888_fptr, 7);

//setting env list
clo31056[1] = car;
clo31056[2] = filter;
clo31056[3] = cons;
clo31056[4] = kont30521;
clo31056[5] = op;
clo31056[6] = lst;
clo31056[7] = cdr;
void* f3052830691 = encode_clo(clo31056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3052830691;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30890 = encode_clo(alloc_clo(lam30890_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30892 = arg_buffer[1];
//reading env and args
void* kont30521 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31058 = alloc_clo(lam30890_fptr, 8);

//setting env list
clo31058[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo31058[2] = filter;
clo31058[3] = cdr;
clo31058[4] = list;
clo31058[5] = cons;
clo31058[6] = kont30521;
clo31058[7] = op;
clo31058[8] = lst;
void* f3052930687 = encode_clo(clo31058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3052930687;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam30893_fptr() // lam30893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30894 = arg_buffer[1];
//reading env and args
void* a3040630710 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30530 = (decode_clo(env30894))[3];
//not do dummy comment
void* a3040430707 = (decode_clo(env30894))[2];
//not do dummy comment
void* drop = (decode_clo(env30894))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont30530;
arg_buffer[3] = a3040430707;
arg_buffer[4] = a3040630710;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30893 = encode_clo(alloc_clo(lam30893_fptr, 0));

void* lam30896_fptr() // lam30896 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30897 = arg_buffer[1];
//reading env and args
void* a3040430707 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30530 = (decode_clo(env30897))[4];
//not do dummy comment
void* drop = (decode_clo(env30897))[3];
//not do dummy comment
void* n = (decode_clo(env30897))[2];
//not do dummy comment
void* _u45 = (decode_clo(env30897))[1];
mpz_t* mpzvar31059 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31059, "1", 10);
void* a3040530708 = encode_mpz(mpzvar31059);

//creating new closure instance
void** clo31061 = alloc_clo(lam30893_fptr, 3);

//setting env list
clo31061[1] = drop;
clo31061[2] = a3040430707;
clo31061[3] = kont30530;
void* f3053130709 = encode_clo(clo31061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3053130709;
arg_buffer[3] = n;
arg_buffer[4] = a3040530708;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30896 = encode_clo(alloc_clo(lam30896_fptr, 0));

void* lam30898_fptr() // lam30898 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30899 = arg_buffer[1];
//reading env and args
void* a3040330705 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30899))[6];
//not do dummy comment
void* kont30530 = (decode_clo(env30899))[5];
//not do dummy comment
void* n = (decode_clo(env30899))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30899))[3];
//not do dummy comment
void* lst = (decode_clo(env30899))[2];
//not do dummy comment
void* drop = (decode_clo(env30899))[1];

//if-clause
bool if_guard31062 = is_true(a3040330705);
if(if_guard31062)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30530);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30530))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31064 = alloc_clo(lam30896_fptr, 4);

//setting env list
clo31064[1] = _u45;
clo31064[2] = n;
clo31064[3] = drop;
clo31064[4] = kont30530;
void* f3053230706 = encode_clo(clo31064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3053230706;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30898 = encode_clo(alloc_clo(lam30898_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30901 = arg_buffer[1];
//reading env and args
void* kont30530 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar31065 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31065, "0", 10);
void* a3040230703 = encode_mpz(mpzvar31065);

//creating new closure instance
void** clo31067 = alloc_clo(lam30898_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo31067[1] = drop;
clo31067[2] = lst;
clo31067[3] = _u45;
clo31067[4] = n;
clo31067[5] = kont30530;
clo31067[6] = cdr;
void* f3053330704 = encode_clo(clo31067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3053330704;
arg_buffer[3] = n;
arg_buffer[4] = a3040230703;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam30902_fptr() // lam30902 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30903 = arg_buffer[1];
//reading env and args
void* a3041030718 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30534 = (decode_clo(env30903))[3];
//not do dummy comment
void* a3040830714 = (decode_clo(env30903))[2];
//not do dummy comment
void* proc = (decode_clo(env30903))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont30534;
arg_buffer[3] = a3040830714;
arg_buffer[4] = a3041030718;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30902 = encode_clo(alloc_clo(lam30902_fptr, 0));

void* lam30904_fptr() // lam30904 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30905 = arg_buffer[1];
//reading env and args
void* a3040930716 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env30905))[5];
//not do dummy comment
void* kont30534 = (decode_clo(env30905))[4];
//not do dummy comment
void* a3040830714 = (decode_clo(env30905))[3];
//not do dummy comment
void* proc = (decode_clo(env30905))[2];
//not do dummy comment
void* acc = (decode_clo(env30905))[1];

//creating new closure instance
void** clo31069 = alloc_clo(lam30902_fptr, 3);

//setting env list
clo31069[1] = proc;
clo31069[2] = a3040830714;
clo31069[3] = kont30534;
void* f3053530717 = encode_clo(clo31069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3053530717;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3040930716;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30904 = encode_clo(alloc_clo(lam30904_fptr, 0));

void* lam30906_fptr() // lam30906 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30907 = arg_buffer[1];
//reading env and args
void* a3040830714 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30907))[6];
//not do dummy comment
void* kont30534 = (decode_clo(env30907))[5];
//not do dummy comment
void* foldr = (decode_clo(env30907))[4];
//not do dummy comment
void* lst = (decode_clo(env30907))[3];
//not do dummy comment
void* proc = (decode_clo(env30907))[2];
//not do dummy comment
void* acc = (decode_clo(env30907))[1];

//creating new closure instance
void** clo31071 = alloc_clo(lam30904_fptr, 5);

//setting env list
clo31071[1] = acc;
clo31071[2] = proc;
clo31071[3] = a3040830714;
clo31071[4] = kont30534;
clo31071[5] = foldr;
void* f3053630715 = encode_clo(clo31071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3053630715;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30906 = encode_clo(alloc_clo(lam30906_fptr, 0));

void* lam30908_fptr() // lam30908 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30909 = arg_buffer[1];
//reading env and args
void* a3040730712 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30909))[7];
//not do dummy comment
void* kont30534 = (decode_clo(env30909))[6];
//not do dummy comment
void* car = (decode_clo(env30909))[5];
//not do dummy comment
void* foldr = (decode_clo(env30909))[4];
//not do dummy comment
void* lst = (decode_clo(env30909))[3];
//not do dummy comment
void* proc = (decode_clo(env30909))[2];
//not do dummy comment
void* acc = (decode_clo(env30909))[1];

//if-clause
bool if_guard31072 = is_true(a3040730712);
if(if_guard31072)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30534);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30534))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31074 = alloc_clo(lam30906_fptr, 6);

//setting env list
clo31074[1] = acc;
clo31074[2] = proc;
clo31074[3] = lst;
clo31074[4] = foldr;
clo31074[5] = kont30534;
clo31074[6] = cdr;
void* f3053730713 = encode_clo(clo31074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3053730713;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30908 = encode_clo(alloc_clo(lam30908_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30910 = arg_buffer[1];
//reading env and args
void* kont30534 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo31076 = alloc_clo(lam30908_fptr, 7);

//setting env list
clo31076[1] = acc;
clo31076[2] = proc;
clo31076[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo31076[4] = foldr;
clo31076[5] = car;
clo31076[6] = kont30534;
clo31076[7] = cdr;
void* f3053830711 = encode_clo(clo31076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3053830711;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam30911_fptr() // lam30911 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30912 = arg_buffer[1];
//reading env and args
void* a3041430726 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3041230722 = (decode_clo(env30912))[3];
//not do dummy comment
void* kont30539 = (decode_clo(env30912))[2];
//not do dummy comment
void* cons = (decode_clo(env30912))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30539;
arg_buffer[3] = a3041230722;
arg_buffer[4] = a3041430726;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30911 = encode_clo(alloc_clo(lam30911_fptr, 0));

void* lam30913_fptr() // lam30913 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30914 = arg_buffer[1];
//reading env and args
void* a3041330724 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3041230722 = (decode_clo(env30914))[5];
//not do dummy comment
void* append = (decode_clo(env30914))[4];
//not do dummy comment
void* kont30539 = (decode_clo(env30914))[3];
//not do dummy comment
void* lst2 = (decode_clo(env30914))[2];
//not do dummy comment
void* cons = (decode_clo(env30914))[1];

//creating new closure instance
void** clo31078 = alloc_clo(lam30911_fptr, 3);

//setting env list
clo31078[1] = cons;
clo31078[2] = kont30539;
clo31078[3] = a3041230722;
void* f3054030725 = encode_clo(clo31078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3054030725;
arg_buffer[3] = a3041330724;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30913 = encode_clo(alloc_clo(lam30913_fptr, 0));

void* lam30915_fptr() // lam30915 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30916 = arg_buffer[1];
//reading env and args
void* a3041230722 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30916))[6];
//not do dummy comment
void* append = (decode_clo(env30916))[5];
//not do dummy comment
void* kont30539 = (decode_clo(env30916))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30916))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30916))[2];
//not do dummy comment
void* cons = (decode_clo(env30916))[1];

//creating new closure instance
void** clo31080 = alloc_clo(lam30913_fptr, 5);

//setting env list
clo31080[1] = cons;
clo31080[2] = lst2;
clo31080[3] = kont30539;
clo31080[4] = append;
clo31080[5] = a3041230722;
void* f3054130723 = encode_clo(clo31080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3054130723;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30915 = encode_clo(alloc_clo(lam30915_fptr, 0));

void* lam30917_fptr() // lam30917 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30918 = arg_buffer[1];
//reading env and args
void* a3041130720 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30918))[7];
//not do dummy comment
void* append = (decode_clo(env30918))[6];
//not do dummy comment
void* kont30539 = (decode_clo(env30918))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30918))[4];
//not do dummy comment
void* cons = (decode_clo(env30918))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30918))[2];
//not do dummy comment
void* car = (decode_clo(env30918))[1];

//if-clause
bool if_guard31081 = is_true(a3041130720);
if(if_guard31081)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30539);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30539))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31083 = alloc_clo(lam30915_fptr, 6);

//setting env list
clo31083[1] = cons;
clo31083[2] = lst1;
clo31083[3] = lst2;
clo31083[4] = kont30539;
clo31083[5] = append;
clo31083[6] = cdr;
void* f3054230721 = encode_clo(clo31083);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3054230721;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30917 = encode_clo(alloc_clo(lam30917_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30919 = arg_buffer[1];
//reading env and args
void* kont30539 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31085 = alloc_clo(lam30917_fptr, 7);

//setting env list
clo31085[1] = car;
clo31085[2] = lst1;
clo31085[3] = cons;
clo31085[4] = lst2;
clo31085[5] = kont30539;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo31085[6] = append;
clo31085[7] = cdr;
void* f3054330719 = encode_clo(clo31085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3054330719;
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
void* _30920 = arg_buffer[1];
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

void* kont3054430727 = prim_car(lst);
void* lst30728 = prim_cdr(lst);
void* x3041530729 = apply_prim_hash(lst30728);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3054430727);
arg_buffer[2] = x3041530729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3054430727))[0]);
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
void* _30921 = arg_buffer[1];
//reading env and args
void* kont30546 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3041630730 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30546);
arg_buffer[2] = x3041630730;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30546))[0]);
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
void* _30922 = arg_buffer[1];
//reading env and args
void* kont30547 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3041730731 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30547);
arg_buffer[2] = x3041730731;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30547))[0]);
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
void* _30923 = arg_buffer[1];
//reading env and args
void* kont30548 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3041830732 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30548);
arg_buffer[2] = x3041830732;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30548))[0]);
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
void* _30924 = arg_buffer[1];
//reading env and args
void* kont30549 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3041930733 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30549);
arg_buffer[2] = x3041930733;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30549))[0]);
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
void* _30925 = arg_buffer[1];
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

void* kont3055030734 = prim_car(lst);
void* lst30735 = prim_cdr(lst);
void* x3042030736 = apply_prim_set(lst30735);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3055030734);
arg_buffer[2] = x3042030736;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3055030734))[0]);
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
void* _30926 = arg_buffer[1];
//reading env and args
void* kont30552 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3042130737 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30552);
arg_buffer[2] = x3042130737;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30552))[0]);
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
void* _30927 = arg_buffer[1];
//reading env and args
void* kont30553 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3042230738 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30553);
arg_buffer[2] = x3042230738;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30553))[0]);
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
void* _30928 = arg_buffer[1];
//reading env and args
void* kont30554 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3042330739 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30554);
arg_buffer[2] = x3042330739;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30554))[0]);
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
void* _30929 = arg_buffer[1];
//reading env and args
void* kont30555 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x3042430740 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30555);
arg_buffer[2] = x3042430740;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30555))[0]);
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
void* _30930 = arg_buffer[1];
//reading env and args
void* kont30556 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3042530741 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30556);
arg_buffer[2] = x3042530741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30556))[0]);
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
void* _30931 = arg_buffer[1];
//reading env and args
void* kont30557 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3042630742 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30557);
arg_buffer[2] = x3042630742;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30557))[0]);
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
void* _30932 = arg_buffer[1];
//reading env and args
void* kont30558 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x3042730743 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30558);
arg_buffer[2] = x3042730743;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30558))[0]);
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
void* _30933 = arg_buffer[1];
//reading env and args
void* kont30559 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x3042830744 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30559);
arg_buffer[2] = x3042830744;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30559))[0]);
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
void* _30934 = arg_buffer[1];
//reading env and args
void* kont30560 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x3042930745 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30560);
arg_buffer[2] = x3042930745;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30560))[0]);
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
void* _30935 = arg_buffer[1];
//reading env and args
void* kont30561 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x3043030746 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30561);
arg_buffer[2] = x3043030746;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30561))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam30937_fptr() // lam30937 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30938 = arg_buffer[1];
//reading env and args
void* a3043930760 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30562 = (decode_clo(env30938))[3];
//not do dummy comment
void* power = (decode_clo(env30938))[2];
//not do dummy comment
void* a3043730757 = (decode_clo(env30938))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = kont30562;
arg_buffer[3] = a3043730757;
arg_buffer[4] = a3043930760;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30937 = encode_clo(alloc_clo(lam30937_fptr, 0));

void* lam30940_fptr() // lam30940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30941 = arg_buffer[1];
//reading env and args
void* a3043730757 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30562 = (decode_clo(env30941))[4];
//not do dummy comment
void* power = (decode_clo(env30941))[3];
//not do dummy comment
void* _u47 = (decode_clo(env30941))[2];
//not do dummy comment
void* n = (decode_clo(env30941))[1];
mpz_t* mpzvar31086 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31086, "2", 10);
void* a3043830758 = encode_mpz(mpzvar31086);

//creating new closure instance
void** clo31088 = alloc_clo(lam30937_fptr, 3);

//setting env list
clo31088[1] = a3043730757;
clo31088[2] = power;
clo31088[3] = kont30562;
void* f3056330759 = encode_clo(clo31088);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = f3056330759;
arg_buffer[3] = n;
arg_buffer[4] = a3043830758;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30940 = encode_clo(alloc_clo(lam30940_fptr, 0));

void* lam30942_fptr() // lam30942 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30943 = arg_buffer[1];
//reading env and args
void* a3044530770 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30562 = (decode_clo(env30943))[3];
//not do dummy comment
void* _u42 = (decode_clo(env30943))[2];
//not do dummy comment
void* x = (decode_clo(env30943))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont30562;
arg_buffer[3] = x;
arg_buffer[4] = a3044530770;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30942 = encode_clo(alloc_clo(lam30942_fptr, 0));

void* lam30944_fptr() // lam30944 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30945 = arg_buffer[1];
//reading env and args
void* a3044430768 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30562 = (decode_clo(env30945))[5];
//not do dummy comment
void* power = (decode_clo(env30945))[4];
//not do dummy comment
void* _u42 = (decode_clo(env30945))[3];
//not do dummy comment
void* a3044030762 = (decode_clo(env30945))[2];
//not do dummy comment
void* x = (decode_clo(env30945))[1];

//creating new closure instance
void** clo31090 = alloc_clo(lam30942_fptr, 3);

//setting env list
clo31090[1] = x;
clo31090[2] = _u42;
clo31090[3] = kont30562;
void* f3056530769 = encode_clo(clo31090);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = f3056530769;
arg_buffer[3] = a3044030762;
arg_buffer[4] = a3044430768;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30944 = encode_clo(alloc_clo(lam30944_fptr, 0));

void* lam30947_fptr() // lam30947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30948 = arg_buffer[1];
//reading env and args
void* a3044230765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30562 = (decode_clo(env30948))[6];
//not do dummy comment
void* power = (decode_clo(env30948))[5];
//not do dummy comment
void* _u42 = (decode_clo(env30948))[4];
//not do dummy comment
void* a3044030762 = (decode_clo(env30948))[3];
//not do dummy comment
void* x = (decode_clo(env30948))[2];
//not do dummy comment
void* _u47 = (decode_clo(env30948))[1];
mpz_t* mpzvar31091 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31091, "2", 10);
void* a3044330766 = encode_mpz(mpzvar31091);

//creating new closure instance
void** clo31093 = alloc_clo(lam30944_fptr, 5);

//setting env list
clo31093[1] = x;
clo31093[2] = a3044030762;
clo31093[3] = _u42;
clo31093[4] = power;
clo31093[5] = kont30562;
void* f3056630767 = encode_clo(clo31093);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = f3056630767;
arg_buffer[3] = a3044230765;
arg_buffer[4] = a3044330766;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30947 = encode_clo(alloc_clo(lam30947_fptr, 0));

void* lam30950_fptr() // lam30950 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30951 = arg_buffer[1];
//reading env and args
void* a3044030762 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30562 = (decode_clo(env30951))[7];
//not do dummy comment
void* power = (decode_clo(env30951))[6];
//not do dummy comment
void* _u42 = (decode_clo(env30951))[5];
//not do dummy comment
void* x = (decode_clo(env30951))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30951))[3];
//not do dummy comment
void* _u47 = (decode_clo(env30951))[2];
//not do dummy comment
void* n = (decode_clo(env30951))[1];
mpz_t* mpzvar31094 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31094, "1", 10);
void* a3044130763 = encode_mpz(mpzvar31094);

//creating new closure instance
void** clo31096 = alloc_clo(lam30947_fptr, 6);

//setting env list
clo31096[1] = _u47;
clo31096[2] = x;
clo31096[3] = a3044030762;
clo31096[4] = _u42;
clo31096[5] = power;
clo31096[6] = kont30562;
void* f3056730764 = encode_clo(clo31096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3056730764;
arg_buffer[3] = n;
arg_buffer[4] = a3044130763;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30950 = encode_clo(alloc_clo(lam30950_fptr, 0));

void* lam30952_fptr() // lam30952 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30953 = arg_buffer[1];
//reading env and args
void* a3043630755 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30562 = (decode_clo(env30953))[7];
//not do dummy comment
void* power = (decode_clo(env30953))[6];
//not do dummy comment
void* _u42 = (decode_clo(env30953))[5];
//not do dummy comment
void* x = (decode_clo(env30953))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30953))[3];
//not do dummy comment
void* _u47 = (decode_clo(env30953))[2];
//not do dummy comment
void* n = (decode_clo(env30953))[1];

//if-clause
bool if_guard31097 = is_true(a3043630755);
if(if_guard31097)
{

//creating new closure instance
void** clo31099 = alloc_clo(lam30940_fptr, 4);

//setting env list
clo31099[1] = n;
clo31099[2] = _u47;
clo31099[3] = power;
clo31099[4] = kont30562;
void* f3056430756 = encode_clo(clo31099);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f3056430756;
arg_buffer[3] = x;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31101 = alloc_clo(lam30950_fptr, 7);

//setting env list
clo31101[1] = n;
clo31101[2] = _u47;
clo31101[3] = _u45;
clo31101[4] = x;
clo31101[5] = _u42;
clo31101[6] = power;
clo31101[7] = kont30562;
void* f3056830761 = encode_clo(clo31101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f3056830761;
arg_buffer[3] = x;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30952 = encode_clo(alloc_clo(lam30952_fptr, 0));

void* lam30954_fptr() // lam30954 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30955 = arg_buffer[1];
//reading env and args
void* a3043530753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env30955))[8];
//not do dummy comment
void* _u42 = (decode_clo(env30955))[7];
//not do dummy comment
void* x = (decode_clo(env30955))[6];
//not do dummy comment
void* _u45 = (decode_clo(env30955))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env30955))[4];
//not do dummy comment
void* kont30562 = (decode_clo(env30955))[3];
//not do dummy comment
void* _u47 = (decode_clo(env30955))[2];
//not do dummy comment
void* n = (decode_clo(env30955))[1];

//if-clause
bool if_guard31102 = is_true(a3043530753);
if(if_guard31102)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30562);
arg_buffer[2] = x;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30562))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31104 = alloc_clo(lam30952_fptr, 7);

//setting env list
clo31104[1] = n;
clo31104[2] = _u47;
clo31104[3] = _u45;
clo31104[4] = x;
clo31104[5] = _u42;
clo31104[6] = power;
clo31104[7] = kont30562;
void* f3056930754 = encode_clo(clo31104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f3056930754;
arg_buffer[3] = n;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30954 = encode_clo(alloc_clo(lam30954_fptr, 0));

void* lam30957_fptr() // lam30957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30958 = arg_buffer[1];
//reading env and args
void* a3043230749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env30958))[9];
//not do dummy comment
void* _u42 = (decode_clo(env30958))[8];
//not do dummy comment
void* x = (decode_clo(env30958))[7];
//not do dummy comment
void* even_u63 = (decode_clo(env30958))[6];
//not do dummy comment
void* kont30562 = (decode_clo(env30958))[5];
//not do dummy comment
void* _u47 = (decode_clo(env30958))[4];
//not do dummy comment
void* n = (decode_clo(env30958))[3];
//not do dummy comment
void* _u61 = (decode_clo(env30958))[2];
//not do dummy comment
void* _u45 = (decode_clo(env30958))[1];

//if-clause
bool if_guard31105 = is_true(a3043230749);
if(if_guard31105)
{
mpz_t* mpzvar31106 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31106, "1", 10);
void* x3043330750 = encode_mpz(mpzvar31106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30562);
arg_buffer[2] = x3043330750;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30562))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar31107 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31107, "1", 10);
void* a3043430751 = encode_mpz(mpzvar31107);

//creating new closure instance
void** clo31109 = alloc_clo(lam30954_fptr, 8);

//setting env list
clo31109[1] = n;
clo31109[2] = _u47;
clo31109[3] = kont30562;
clo31109[4] = even_u63;
clo31109[5] = _u45;
clo31109[6] = x;
clo31109[7] = _u42;
clo31109[8] = power;
void* f3057030752 = encode_clo(clo31109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3057030752;
arg_buffer[3] = n;
arg_buffer[4] = a3043430751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30957 = encode_clo(alloc_clo(lam30957_fptr, 0));

void* power_fptr() // power 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30960 = arg_buffer[1];
//reading env and args
void* kont30562 = arg_buffer[2];
void* x = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar31110 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31110, "0", 10);
void* a3043130747 = encode_mpz(mpzvar31110);

//creating new closure instance
void** clo31112 = alloc_clo(lam30957_fptr, 9);

//setting env list
clo31112[1] = _u45;
clo31112[2] = _u61;
clo31112[3] = n;
clo31112[4] = _u47;
clo31112[5] = kont30562;
clo31112[6] = even_u63;
clo31112[7] = x;
clo31112[8] = _u42;
void* power = encode_clo(alloc_clo(power_fptr, 0));

clo31112[9] = power;
void* f3057130748 = encode_clo(clo31112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3057130748;
arg_buffer[3] = n;
arg_buffer[4] = a3043130747;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* power = encode_clo(alloc_clo(power_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30963 = arg_buffer[1];
//reading env and args
void* kont30572 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar31113 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31113, "2", 10);
void* a3044630771 = encode_mpz(mpzvar31113);
mpz_t* mpzvar31114 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31114, "10", 10);
void* a3044730772 = encode_mpz(mpzvar31114);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = kont30572;
arg_buffer[3] = a3044630771;
arg_buffer[4] = a3044730772;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
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

