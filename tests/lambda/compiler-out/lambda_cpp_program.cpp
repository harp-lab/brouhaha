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
void* _20724 = arg_buffer[1];
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

void* kont2042820544 = prim_car(lst);
void* lst20545 = prim_cdr(lst);
void* x2032720546 = apply_prim__u43(lst20545);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2042820544);
arg_buffer[2] = x2032720546;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2042820544))[0]);
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
void* _20725 = arg_buffer[1];
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

void* kont2043020547 = prim_car(lst);
void* lst20548 = prim_cdr(lst);
void* x2032820549 = apply_prim_max(lst20548);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2043020547);
arg_buffer[2] = x2032820549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2043020547))[0]);
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
void* _20726 = arg_buffer[1];
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

void* kont2043220550 = prim_car(lst);
void* lst20551 = prim_cdr(lst);
void* x2032920552 = apply_prim__u45(lst20551);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2043220550);
arg_buffer[2] = x2032920552;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2043220550))[0]);
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
void* _20727 = arg_buffer[1];
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

void* kont2043420553 = prim_car(lst);
void* lst20554 = prim_cdr(lst);
void* x2033020555 = apply_prim__u42(lst20554);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2043420553);
arg_buffer[2] = x2033020555;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2043420553))[0]);
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
void* _20728 = arg_buffer[1];
//reading env and args
void* kont20436 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2033120556 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20436);
arg_buffer[2] = x2033120556;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20436))[0]);
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
void* _20729 = arg_buffer[1];
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

void* kont2043720557 = prim_car(lst);
void* lst20558 = prim_cdr(lst);
void* x2033220559 = apply_prim__u47(lst20558);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2043720557);
arg_buffer[2] = x2033220559;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2043720557))[0]);
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
void* _20730 = arg_buffer[1];
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

void* kont2043920560 = prim_car(lst);
void* lst20561 = prim_cdr(lst);
void* x2033320562 = apply_prim__u61(lst20561);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2043920560);
arg_buffer[2] = x2033320562;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2043920560))[0]);
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
void* _20731 = arg_buffer[1];
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

void* kont2044120563 = prim_car(lst);
void* lst20564 = prim_cdr(lst);
void* x2033420565 = apply_prim__u62(lst20564);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2044120563);
arg_buffer[2] = x2033420565;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2044120563))[0]);
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
void* _20732 = arg_buffer[1];
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

void* kont2044320566 = prim_car(lst);
void* lst20567 = prim_cdr(lst);
void* x2033520568 = apply_prim__u60(lst20567);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2044320566);
arg_buffer[2] = x2033520568;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2044320566))[0]);
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
void* _20733 = arg_buffer[1];
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

void* kont2044520569 = prim_car(lst);
void* lst20570 = prim_cdr(lst);
void* x2033620571 = apply_prim__u60_u61(lst20570);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2044520569);
arg_buffer[2] = x2033620571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2044520569))[0]);
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
void* _20734 = arg_buffer[1];
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

void* kont2044720572 = prim_car(lst);
void* lst20573 = prim_cdr(lst);
void* x2033720574 = apply_prim__u62_u61(lst20573);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2044720572);
arg_buffer[2] = x2033720574;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2044720572))[0]);
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
void* _20735 = arg_buffer[1];
//reading env and args
void* kont20449 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2033820575 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20449);
arg_buffer[2] = x2033820575;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20449))[0]);
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
void* _20736 = arg_buffer[1];
//reading env and args
void* kont20450 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2033920576 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20450);
arg_buffer[2] = x2033920576;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20450))[0]);
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
void* _20737 = arg_buffer[1];
//reading env and args
void* kont20451 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2034020577 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20451);
arg_buffer[2] = x2034020577;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20451))[0]);
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
void* _20738 = arg_buffer[1];
//reading env and args
void* kont20452 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2034120578 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20452);
arg_buffer[2] = x2034120578;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20452))[0]);
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
void* _20739 = arg_buffer[1];
//reading env and args
void* kont20453 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2034220579 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20453);
arg_buffer[2] = x2034220579;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20453))[0]);
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
void* _20740 = arg_buffer[1];
//reading env and args
void* kont20454 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2034320580 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20454);
arg_buffer[2] = x2034320580;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20454))[0]);
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
void* _20741 = arg_buffer[1];
//reading env and args
void* kont20455 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2034420581 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20455);
arg_buffer[2] = x2034420581;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20455))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam20742_fptr() // lam20742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20743 = arg_buffer[1];
//reading env and args
void* a2034720585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2034520582 = (decode_clo(env20743))[3];
//not do dummy comment
void* kont20456 = (decode_clo(env20743))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env20743))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont20456;
arg_buffer[3] = a2034520582;
arg_buffer[4] = a2034720585;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20742 = encode_clo(alloc_clo(lam20742_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20746 = arg_buffer[1];
//reading env and args
void* kont20456 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar20892 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20892, "0", 10);
void* a2034520582 = encode_mpz(mpzvar20892);
mpz_t* mpzvar20893 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20893, "2", 10);
void* a2034620583 = encode_mpz(mpzvar20893);

//creating new closure instance
void** clo20895 = alloc_clo(lam20742_fptr, 3);

//setting env list
clo20895[1] = equal_u63;
clo20895[2] = kont20456;
clo20895[3] = a2034520582;
void* f2045720584 = encode_clo(clo20895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2045720584;
arg_buffer[3] = x;
arg_buffer[4] = a2034620583;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam20747_fptr() // lam20747 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20748 = arg_buffer[1];
//reading env and args
void* a2035020589 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env20748))[3];
//not do dummy comment
void* a2034820586 = (decode_clo(env20748))[2];
//not do dummy comment
void* kont20458 = (decode_clo(env20748))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont20458;
arg_buffer[3] = a2034820586;
arg_buffer[4] = a2035020589;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20747 = encode_clo(alloc_clo(lam20747_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20751 = arg_buffer[1];
//reading env and args
void* kont20458 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar20896 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20896, "1", 10);
void* a2034820586 = encode_mpz(mpzvar20896);
mpz_t* mpzvar20897 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20897, "2", 10);
void* a2034920587 = encode_mpz(mpzvar20897);

//creating new closure instance
void** clo20899 = alloc_clo(lam20747_fptr, 3);

//setting env list
clo20899[1] = kont20458;
clo20899[2] = a2034820586;
clo20899[3] = equal_u63;
void* f2045920588 = encode_clo(clo20899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2045920588;
arg_buffer[3] = x;
arg_buffer[4] = a2034920587;
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
void* _20752 = arg_buffer[1];
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

void* kont2046020590 = prim_car(x);
void* x20591 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2046020590);
arg_buffer[2] = x20591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2046020590))[0]);
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
void* _20753 = arg_buffer[1];
//reading env and args
void* kont20462 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2035120592 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20462);
arg_buffer[2] = x2035120592;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20462))[0]);
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
void* _20754 = arg_buffer[1];
//reading env and args
void* kont20463 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2035220593 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20463);
arg_buffer[2] = x2035220593;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20463))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam20757_fptr() // lam20757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20758 = arg_buffer[1];
//reading env and args
void* a2035820603 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env20758))[3];
//not do dummy comment
void* kont20464 = (decode_clo(env20758))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20758))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont20464;
arg_buffer[3] = x;
arg_buffer[4] = a2035820603;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20757 = encode_clo(alloc_clo(lam20757_fptr, 0));

void* lam20759_fptr() // lam20759 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20760 = arg_buffer[1];
//reading env and args
void* a2035620600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20760))[5];
//not do dummy comment
void* lst = (decode_clo(env20760))[4];
//not do dummy comment
void* x = (decode_clo(env20760))[3];
//not do dummy comment
void* kont20464 = (decode_clo(env20760))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20760))[1];

//if-clause
bool if_guard20900 = is_true(a2035620600);
if(if_guard20900)
{
void* x2035720601 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20464);
arg_buffer[2] = x2035720601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20464))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20902 = alloc_clo(lam20757_fptr, 3);

//setting env list
clo20902[1] = member_u63;
clo20902[2] = kont20464;
clo20902[3] = x;
void* f2046520602 = encode_clo(clo20902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2046520602;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20759 = encode_clo(alloc_clo(lam20759_fptr, 0));

void* lam20761_fptr() // lam20761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20762 = arg_buffer[1];
//reading env and args
void* a2035520598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20762))[6];
//not do dummy comment
void* lst = (decode_clo(env20762))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env20762))[4];
//not do dummy comment
void* x = (decode_clo(env20762))[3];
//not do dummy comment
void* kont20464 = (decode_clo(env20762))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20762))[1];

//creating new closure instance
void** clo20904 = alloc_clo(lam20759_fptr, 5);

//setting env list
clo20904[1] = member_u63;
clo20904[2] = kont20464;
clo20904[3] = x;
clo20904[4] = lst;
clo20904[5] = cdr;
void* f2046620599 = encode_clo(clo20904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2046620599;
arg_buffer[3] = a2035520598;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20761 = encode_clo(alloc_clo(lam20761_fptr, 0));

void* lam20763_fptr() // lam20763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20764 = arg_buffer[1];
//reading env and args
void* a2035320595 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20764))[7];
//not do dummy comment
void* lst = (decode_clo(env20764))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env20764))[5];
//not do dummy comment
void* x = (decode_clo(env20764))[4];
//not do dummy comment
void* kont20464 = (decode_clo(env20764))[3];
//not do dummy comment
void* car = (decode_clo(env20764))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env20764))[1];

//if-clause
bool if_guard20905 = is_true(a2035320595);
if(if_guard20905)
{
void* x2035420596 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20464);
arg_buffer[2] = x2035420596;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20464))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20907 = alloc_clo(lam20761_fptr, 6);

//setting env list
clo20907[1] = member_u63;
clo20907[2] = kont20464;
clo20907[3] = x;
clo20907[4] = equal_u63;
clo20907[5] = lst;
clo20907[6] = cdr;
void* f2046720597 = encode_clo(clo20907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2046720597;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20763 = encode_clo(alloc_clo(lam20763_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20765 = arg_buffer[1];
//reading env and args
void* kont20464 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20909 = alloc_clo(lam20763_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo20909[1] = member_u63;
clo20909[2] = car;
clo20909[3] = kont20464;
clo20909[4] = x;
clo20909[5] = equal_u63;
clo20909[6] = lst;
clo20909[7] = cdr;
void* f2046820594 = encode_clo(clo20909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2046820594;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam20766_fptr() // lam20766 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20767 = arg_buffer[1];
//reading env and args
void* a2036220611 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20469 = (decode_clo(env20767))[4];
//not do dummy comment
void* fun = (decode_clo(env20767))[3];
//not do dummy comment
void* a2036120609 = (decode_clo(env20767))[2];
//not do dummy comment
void* foldl = (decode_clo(env20767))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont20469;
arg_buffer[3] = fun;
arg_buffer[4] = a2036120609;
arg_buffer[5] = a2036220611;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20766 = encode_clo(alloc_clo(lam20766_fptr, 0));

void* lam20768_fptr() // lam20768 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20769 = arg_buffer[1];
//reading env and args
void* a2036120609 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20769))[5];
//not do dummy comment
void* kont20469 = (decode_clo(env20769))[4];
//not do dummy comment
void* lst = (decode_clo(env20769))[3];
//not do dummy comment
void* fun = (decode_clo(env20769))[2];
//not do dummy comment
void* foldl = (decode_clo(env20769))[1];

//creating new closure instance
void** clo20911 = alloc_clo(lam20766_fptr, 4);

//setting env list
clo20911[1] = foldl;
clo20911[2] = a2036120609;
clo20911[3] = fun;
clo20911[4] = kont20469;
void* f2047020610 = encode_clo(clo20911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2047020610;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20768 = encode_clo(alloc_clo(lam20768_fptr, 0));

void* lam20770_fptr() // lam20770 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20771 = arg_buffer[1];
//reading env and args
void* a2036020607 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20771))[6];
//not do dummy comment
void* kont20469 = (decode_clo(env20771))[5];
//not do dummy comment
void* lst = (decode_clo(env20771))[4];
//not do dummy comment
void* fun = (decode_clo(env20771))[3];
//not do dummy comment
void* acc = (decode_clo(env20771))[2];
//not do dummy comment
void* foldl = (decode_clo(env20771))[1];

//creating new closure instance
void** clo20913 = alloc_clo(lam20768_fptr, 5);

//setting env list
clo20913[1] = foldl;
clo20913[2] = fun;
clo20913[3] = lst;
clo20913[4] = kont20469;
clo20913[5] = cdr;
void* f2047120608 = encode_clo(clo20913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2047120608;
arg_buffer[3] = a2036020607;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20770 = encode_clo(alloc_clo(lam20770_fptr, 0));

void* lam20772_fptr() // lam20772 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20773 = arg_buffer[1];
//reading env and args
void* a2035920605 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20773))[7];
//not do dummy comment
void* kont20469 = (decode_clo(env20773))[6];
//not do dummy comment
void* lst = (decode_clo(env20773))[5];
//not do dummy comment
void* fun = (decode_clo(env20773))[4];
//not do dummy comment
void* acc = (decode_clo(env20773))[3];
//not do dummy comment
void* car = (decode_clo(env20773))[2];
//not do dummy comment
void* foldl = (decode_clo(env20773))[1];

//if-clause
bool if_guard20914 = is_true(a2035920605);
if(if_guard20914)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20469);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20469))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20916 = alloc_clo(lam20770_fptr, 6);

//setting env list
clo20916[1] = foldl;
clo20916[2] = acc;
clo20916[3] = fun;
clo20916[4] = lst;
clo20916[5] = kont20469;
clo20916[6] = cdr;
void* f2047220606 = encode_clo(clo20916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2047220606;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20772 = encode_clo(alloc_clo(lam20772_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20774 = arg_buffer[1];
//reading env and args
void* kont20469 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo20918 = alloc_clo(lam20772_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo20918[1] = foldl;
clo20918[2] = car;
clo20918[3] = acc;
clo20918[4] = fun;
clo20918[5] = lst;
clo20918[6] = kont20469;
clo20918[7] = cdr;
void* f2047320604 = encode_clo(clo20918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2047320604;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam20775_fptr() // lam20775 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20776 = arg_buffer[1];
//reading env and args
void* a2036620619 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2036420615 = (decode_clo(env20776))[3];
//not do dummy comment
void* kont20474 = (decode_clo(env20776))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20776))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont20474;
arg_buffer[3] = a2036420615;
arg_buffer[4] = a2036620619;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20775 = encode_clo(alloc_clo(lam20775_fptr, 0));

void* lam20777_fptr() // lam20777 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20778 = arg_buffer[1];
//reading env and args
void* a2036520617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2036420615 = (decode_clo(env20778))[5];
//not do dummy comment
void* kont20474 = (decode_clo(env20778))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20778))[3];
//not do dummy comment
void* lst2 = (decode_clo(env20778))[2];
//not do dummy comment
void* cons = (decode_clo(env20778))[1];

//creating new closure instance
void** clo20920 = alloc_clo(lam20775_fptr, 3);

//setting env list
clo20920[1] = reverse_u45helper;
clo20920[2] = kont20474;
clo20920[3] = a2036420615;
void* f2047520618 = encode_clo(clo20920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2047520618;
arg_buffer[3] = a2036520617;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20777 = encode_clo(alloc_clo(lam20777_fptr, 0));

void* lam20779_fptr() // lam20779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20780 = arg_buffer[1];
//reading env and args
void* a2036420615 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20780))[6];
//not do dummy comment
void* kont20474 = (decode_clo(env20780))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20780))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20780))[3];
//not do dummy comment
void* car = (decode_clo(env20780))[2];
//not do dummy comment
void* cons = (decode_clo(env20780))[1];

//creating new closure instance
void** clo20922 = alloc_clo(lam20777_fptr, 5);

//setting env list
clo20922[1] = cons;
clo20922[2] = lst2;
clo20922[3] = reverse_u45helper;
clo20922[4] = kont20474;
clo20922[5] = a2036420615;
void* f2047620616 = encode_clo(clo20922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2047620616;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20779 = encode_clo(alloc_clo(lam20779_fptr, 0));

void* lam20781_fptr() // lam20781 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20782 = arg_buffer[1];
//reading env and args
void* a2036320613 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20782))[7];
//not do dummy comment
void* lst = (decode_clo(env20782))[6];
//not do dummy comment
void* kont20474 = (decode_clo(env20782))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20782))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20782))[3];
//not do dummy comment
void* car = (decode_clo(env20782))[2];
//not do dummy comment
void* cons = (decode_clo(env20782))[1];

//if-clause
bool if_guard20923 = is_true(a2036320613);
if(if_guard20923)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20474);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20474))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20925 = alloc_clo(lam20779_fptr, 6);

//setting env list
clo20925[1] = cons;
clo20925[2] = car;
clo20925[3] = lst2;
clo20925[4] = reverse_u45helper;
clo20925[5] = kont20474;
clo20925[6] = lst;
void* f2047720614 = encode_clo(clo20925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2047720614;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20781 = encode_clo(alloc_clo(lam20781_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20783 = arg_buffer[1];
//reading env and args
void* kont20474 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20927 = alloc_clo(lam20781_fptr, 7);

//setting env list
clo20927[1] = cons;
clo20927[2] = car;
clo20927[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo20927[4] = reverse_u45helper;
clo20927[5] = kont20474;
clo20927[6] = lst;
clo20927[7] = cdr;
void* f2047820612 = encode_clo(clo20927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2047820612;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam20784_fptr() // lam20784 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20785 = arg_buffer[1];
//reading env and args
void* a2036720621 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20785))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env20785))[2];
//not do dummy comment
void* kont20479 = (decode_clo(env20785))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont20479;
arg_buffer[3] = lst;
arg_buffer[4] = a2036720621;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20784 = encode_clo(alloc_clo(lam20784_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20786 = arg_buffer[1];
//reading env and args
void* kont20479 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo20929 = alloc_clo(lam20784_fptr, 3);

//setting env list
clo20929[1] = kont20479;
clo20929[2] = reverse_u45helper;
clo20929[3] = lst;
void* f2048020620 = encode_clo(clo20929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2048020620;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam20787_fptr() // lam20787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20788 = arg_buffer[1];
//reading env and args
void* x2037020626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20481 = (decode_clo(env20788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20481);
arg_buffer[2] = x2037020626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20481))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20787 = encode_clo(alloc_clo(lam20787_fptr, 0));

void* lam20789_fptr() // lam20789 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20790 = arg_buffer[1];
//reading env and args
void* a2037520635 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2037120628 = (decode_clo(env20790))[4];
//not do dummy comment
void* a2037320631 = (decode_clo(env20790))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env20790))[2];
//not do dummy comment
void* kont20481 = (decode_clo(env20790))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont20481;
arg_buffer[3] = a2037120628;
arg_buffer[4] = a2037320631;
arg_buffer[5] = a2037520635;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20789 = encode_clo(alloc_clo(lam20789_fptr, 0));

void* lam20791_fptr() // lam20791 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20792 = arg_buffer[1];
//reading env and args
void* a2037420633 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2037120628 = (decode_clo(env20792))[6];
//not do dummy comment
void* a2037320631 = (decode_clo(env20792))[5];
//not do dummy comment
void* kont20481 = (decode_clo(env20792))[4];
//not do dummy comment
void* cons = (decode_clo(env20792))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env20792))[2];
//not do dummy comment
void* lst2 = (decode_clo(env20792))[1];

//creating new closure instance
void** clo20931 = alloc_clo(lam20789_fptr, 4);

//setting env list
clo20931[1] = kont20481;
clo20931[2] = take_u45helper;
clo20931[3] = a2037320631;
clo20931[4] = a2037120628;
void* f2048320634 = encode_clo(clo20931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2048320634;
arg_buffer[3] = a2037420633;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20791 = encode_clo(alloc_clo(lam20791_fptr, 0));

void* lam20793_fptr() // lam20793 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20794 = arg_buffer[1];
//reading env and args
void* a2037320631 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2037120628 = (decode_clo(env20794))[7];
//not do dummy comment
void* lst = (decode_clo(env20794))[6];
//not do dummy comment
void* cons = (decode_clo(env20794))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env20794))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20794))[3];
//not do dummy comment
void* kont20481 = (decode_clo(env20794))[2];
//not do dummy comment
void* car = (decode_clo(env20794))[1];

//creating new closure instance
void** clo20933 = alloc_clo(lam20791_fptr, 6);

//setting env list
clo20933[1] = lst2;
clo20933[2] = take_u45helper;
clo20933[3] = cons;
clo20933[4] = kont20481;
clo20933[5] = a2037320631;
clo20933[6] = a2037120628;
void* f2048420632 = encode_clo(clo20933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2048420632;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20793 = encode_clo(alloc_clo(lam20793_fptr, 0));

void* lam20796_fptr() // lam20796 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20797 = arg_buffer[1];
//reading env and args
void* a2037120628 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20797))[8];
//not do dummy comment
void* cons = (decode_clo(env20797))[7];
//not do dummy comment
void* _u45 = (decode_clo(env20797))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env20797))[5];
//not do dummy comment
void* lst2 = (decode_clo(env20797))[4];
//not do dummy comment
void* car = (decode_clo(env20797))[3];
//not do dummy comment
void* n = (decode_clo(env20797))[2];
//not do dummy comment
void* kont20481 = (decode_clo(env20797))[1];
mpz_t* mpzvar20934 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20934, "1", 10);
void* a2037220629 = encode_mpz(mpzvar20934);

//creating new closure instance
void** clo20936 = alloc_clo(lam20793_fptr, 7);

//setting env list
clo20936[1] = car;
clo20936[2] = kont20481;
clo20936[3] = lst2;
clo20936[4] = take_u45helper;
clo20936[5] = cons;
clo20936[6] = lst;
clo20936[7] = a2037120628;
void* f2048520630 = encode_clo(clo20936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2048520630;
arg_buffer[3] = n;
arg_buffer[4] = a2037220629;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20796 = encode_clo(alloc_clo(lam20796_fptr, 0));

void* lam20798_fptr() // lam20798 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20799 = arg_buffer[1];
//reading env and args
void* a2036920624 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20799))[10];
//not do dummy comment
void* lst = (decode_clo(env20799))[9];
//not do dummy comment
void* reverse = (decode_clo(env20799))[8];
//not do dummy comment
void* cons = (decode_clo(env20799))[7];
//not do dummy comment
void* _u45 = (decode_clo(env20799))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env20799))[5];
//not do dummy comment
void* lst2 = (decode_clo(env20799))[4];
//not do dummy comment
void* car = (decode_clo(env20799))[3];
//not do dummy comment
void* n = (decode_clo(env20799))[2];
//not do dummy comment
void* kont20481 = (decode_clo(env20799))[1];

//if-clause
bool if_guard20937 = is_true(a2036920624);
if(if_guard20937)
{

//creating new closure instance
void** clo20939 = alloc_clo(lam20787_fptr, 1);

//setting env list
clo20939[1] = kont20481;
void* f2048220625 = encode_clo(clo20939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2048220625;
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
void** clo20941 = alloc_clo(lam20796_fptr, 8);

//setting env list
clo20941[1] = kont20481;
clo20941[2] = n;
clo20941[3] = car;
clo20941[4] = lst2;
clo20941[5] = take_u45helper;
clo20941[6] = _u45;
clo20941[7] = cons;
clo20941[8] = lst;
void* f2048620627 = encode_clo(clo20941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2048620627;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20798 = encode_clo(alloc_clo(lam20798_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20801 = arg_buffer[1];
//reading env and args
void* kont20481 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar20942 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20942, "0", 10);
void* a2036820622 = encode_mpz(mpzvar20942);

//creating new closure instance
void** clo20944 = alloc_clo(lam20798_fptr, 10);

//setting env list
clo20944[1] = kont20481;
clo20944[2] = n;
clo20944[3] = car;
clo20944[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo20944[5] = take_u45helper;
clo20944[6] = _u45;
clo20944[7] = cons;
clo20944[8] = reverse;
clo20944[9] = lst;
clo20944[10] = cdr;
void* f2048720623 = encode_clo(clo20944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2048720623;
arg_buffer[3] = n;
arg_buffer[4] = a2036820622;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam20802_fptr() // lam20802 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20803 = arg_buffer[1];
//reading env and args
void* a2037620637 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env20803))[4];
//not do dummy comment
void* n = (decode_clo(env20803))[3];
//not do dummy comment
void* lst = (decode_clo(env20803))[2];
//not do dummy comment
void* kont20488 = (decode_clo(env20803))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont20488;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2037620637;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20802 = encode_clo(alloc_clo(lam20802_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20804 = arg_buffer[1];
//reading env and args
void* kont20488 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20946 = alloc_clo(lam20802_fptr, 4);

//setting env list
clo20946[1] = kont20488;
clo20946[2] = lst;
clo20946[3] = n;
clo20946[4] = take_u45helper;
void* f2048920636 = encode_clo(clo20946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2048920636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam20806_fptr() // lam20806 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20807 = arg_buffer[1];
//reading env and args
void* a2038120645 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20490 = (decode_clo(env20807))[3];
//not do dummy comment
void* _u43 = (decode_clo(env20807))[2];
//not do dummy comment
void* a2037920641 = (decode_clo(env20807))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont20490;
arg_buffer[3] = a2037920641;
arg_buffer[4] = a2038120645;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20806 = encode_clo(alloc_clo(lam20806_fptr, 0));

void* lam20808_fptr() // lam20808 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20809 = arg_buffer[1];
//reading env and args
void* a2038020643 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env20809))[4];
//not do dummy comment
void* kont20490 = (decode_clo(env20809))[3];
//not do dummy comment
void* _u43 = (decode_clo(env20809))[2];
//not do dummy comment
void* a2037920641 = (decode_clo(env20809))[1];

//creating new closure instance
void** clo20948 = alloc_clo(lam20806_fptr, 3);

//setting env list
clo20948[1] = a2037920641;
clo20948[2] = _u43;
clo20948[3] = kont20490;
void* f2049120644 = encode_clo(clo20948);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2049120644;
arg_buffer[3] = a2038020643;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20808 = encode_clo(alloc_clo(lam20808_fptr, 0));

void* lam20811_fptr() // lam20811 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20812 = arg_buffer[1];
//reading env and args
void* a2037720639 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20812))[5];
//not do dummy comment
void* lst = (decode_clo(env20812))[4];
//not do dummy comment
void* length = (decode_clo(env20812))[3];
//not do dummy comment
void* kont20490 = (decode_clo(env20812))[2];
//not do dummy comment
void* _u43 = (decode_clo(env20812))[1];

//if-clause
bool if_guard20949 = is_true(a2037720639);
if(if_guard20949)
{
mpz_t* mpzvar20950 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20950, "0", 10);
void* x2037820640 = encode_mpz(mpzvar20950);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20490);
arg_buffer[2] = x2037820640;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20490))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar20951 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20951, "1", 10);
void* a2037920641 = encode_mpz(mpzvar20951);

//creating new closure instance
void** clo20953 = alloc_clo(lam20808_fptr, 4);

//setting env list
clo20953[1] = a2037920641;
clo20953[2] = _u43;
clo20953[3] = kont20490;
clo20953[4] = length;
void* f2049220642 = encode_clo(clo20953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2049220642;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20811 = encode_clo(alloc_clo(lam20811_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20813 = arg_buffer[1];
//reading env and args
void* kont20490 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo20955 = alloc_clo(lam20811_fptr, 5);

//setting env list
clo20955[1] = _u43;
clo20955[2] = kont20490;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo20955[3] = length;
clo20955[4] = lst;
clo20955[5] = cdr;
void* f2049320638 = encode_clo(clo20955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2049320638;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam20814_fptr() // lam20814 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20815 = arg_buffer[1];
//reading env and args
void* x2038320649 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20494 = (decode_clo(env20815))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20494);
arg_buffer[2] = x2038320649;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20494))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20814 = encode_clo(alloc_clo(lam20814_fptr, 0));

void* lam20816_fptr() // lam20816 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20817 = arg_buffer[1];
//reading env and args
void* a2038720657 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2038520653 = (decode_clo(env20817))[3];
//not do dummy comment
void* kont20494 = (decode_clo(env20817))[2];
//not do dummy comment
void* cons = (decode_clo(env20817))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont20494;
arg_buffer[3] = a2038520653;
arg_buffer[4] = a2038720657;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20816 = encode_clo(alloc_clo(lam20816_fptr, 0));

void* lam20818_fptr() // lam20818 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20819 = arg_buffer[1];
//reading env and args
void* a2038620655 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env20819))[5];
//not do dummy comment
void* a2038520653 = (decode_clo(env20819))[4];
//not do dummy comment
void* kont20494 = (decode_clo(env20819))[3];
//not do dummy comment
void* proc = (decode_clo(env20819))[2];
//not do dummy comment
void* cons = (decode_clo(env20819))[1];

//creating new closure instance
void** clo20957 = alloc_clo(lam20816_fptr, 3);

//setting env list
clo20957[1] = cons;
clo20957[2] = kont20494;
clo20957[3] = a2038520653;
void* f2049620656 = encode_clo(clo20957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2049620656;
arg_buffer[3] = proc;
arg_buffer[4] = a2038620655;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20818 = encode_clo(alloc_clo(lam20818_fptr, 0));

void* lam20820_fptr() // lam20820 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20821 = arg_buffer[1];
//reading env and args
void* a2038520653 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20821))[6];
//not do dummy comment
void* lst = (decode_clo(env20821))[5];
//not do dummy comment
void* map = (decode_clo(env20821))[4];
//not do dummy comment
void* kont20494 = (decode_clo(env20821))[3];
//not do dummy comment
void* proc = (decode_clo(env20821))[2];
//not do dummy comment
void* cons = (decode_clo(env20821))[1];

//creating new closure instance
void** clo20959 = alloc_clo(lam20818_fptr, 5);

//setting env list
clo20959[1] = cons;
clo20959[2] = proc;
clo20959[3] = kont20494;
clo20959[4] = a2038520653;
clo20959[5] = map;
void* f2049720654 = encode_clo(clo20959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2049720654;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20820 = encode_clo(alloc_clo(lam20820_fptr, 0));

void* lam20822_fptr() // lam20822 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20823 = arg_buffer[1];
//reading env and args
void* a2038420651 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20823))[6];
//not do dummy comment
void* lst = (decode_clo(env20823))[5];
//not do dummy comment
void* map = (decode_clo(env20823))[4];
//not do dummy comment
void* kont20494 = (decode_clo(env20823))[3];
//not do dummy comment
void* proc = (decode_clo(env20823))[2];
//not do dummy comment
void* cons = (decode_clo(env20823))[1];

//creating new closure instance
void** clo20961 = alloc_clo(lam20820_fptr, 6);

//setting env list
clo20961[1] = cons;
clo20961[2] = proc;
clo20961[3] = kont20494;
clo20961[4] = map;
clo20961[5] = lst;
clo20961[6] = cdr;
void* f2049820652 = encode_clo(clo20961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2049820652;
arg_buffer[3] = a2038420651;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20822 = encode_clo(alloc_clo(lam20822_fptr, 0));

void* lam20824_fptr() // lam20824 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20825 = arg_buffer[1];
//reading env and args
void* a2038220647 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env20825))[8];
//not do dummy comment
void* map = (decode_clo(env20825))[7];
//not do dummy comment
void* kont20494 = (decode_clo(env20825))[6];
//not do dummy comment
void* proc = (decode_clo(env20825))[5];
//not do dummy comment
void* car = (decode_clo(env20825))[4];
//not do dummy comment
void* cons = (decode_clo(env20825))[3];
//not do dummy comment
void* list = (decode_clo(env20825))[2];
//not do dummy comment
void* cdr = (decode_clo(env20825))[1];

//if-clause
bool if_guard20962 = is_true(a2038220647);
if(if_guard20962)
{

//creating new closure instance
void** clo20964 = alloc_clo(lam20814_fptr, 1);

//setting env list
clo20964[1] = kont20494;
void* f2049520648 = encode_clo(clo20964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2049520648;
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
void** clo20966 = alloc_clo(lam20822_fptr, 6);

//setting env list
clo20966[1] = cons;
clo20966[2] = proc;
clo20966[3] = kont20494;
clo20966[4] = map;
clo20966[5] = lst;
clo20966[6] = cdr;
void* f2049920650 = encode_clo(clo20966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2049920650;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20824 = encode_clo(alloc_clo(lam20824_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20826 = arg_buffer[1];
//reading env and args
void* kont20494 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20968 = alloc_clo(lam20824_fptr, 8);

//setting env list
clo20968[1] = cdr;
clo20968[2] = list;
clo20968[3] = cons;
clo20968[4] = car;
clo20968[5] = proc;
clo20968[6] = kont20494;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo20968[7] = map;
clo20968[8] = lst;
void* f2050020646 = encode_clo(clo20968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2050020646;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam20827_fptr() // lam20827 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20828 = arg_buffer[1];
//reading env and args
void* x2038920661 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20501 = (decode_clo(env20828))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20501);
arg_buffer[2] = x2038920661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20501))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20827 = encode_clo(alloc_clo(lam20827_fptr, 0));

void* lam20829_fptr() // lam20829 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20830 = arg_buffer[1];
//reading env and args
void* a2039420671 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20501 = (decode_clo(env20830))[3];
//not do dummy comment
void* a2039220667 = (decode_clo(env20830))[2];
//not do dummy comment
void* cons = (decode_clo(env20830))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont20501;
arg_buffer[3] = a2039220667;
arg_buffer[4] = a2039420671;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20829 = encode_clo(alloc_clo(lam20829_fptr, 0));

void* lam20831_fptr() // lam20831 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20832 = arg_buffer[1];
//reading env and args
void* a2039320669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20501 = (decode_clo(env20832))[5];
//not do dummy comment
void* filter = (decode_clo(env20832))[4];
//not do dummy comment
void* cons = (decode_clo(env20832))[3];
//not do dummy comment
void* a2039220667 = (decode_clo(env20832))[2];
//not do dummy comment
void* op = (decode_clo(env20832))[1];

//creating new closure instance
void** clo20970 = alloc_clo(lam20829_fptr, 3);

//setting env list
clo20970[1] = cons;
clo20970[2] = a2039220667;
clo20970[3] = kont20501;
void* f2050320670 = encode_clo(clo20970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2050320670;
arg_buffer[3] = op;
arg_buffer[4] = a2039320669;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20831 = encode_clo(alloc_clo(lam20831_fptr, 0));

void* lam20833_fptr() // lam20833 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20834 = arg_buffer[1];
//reading env and args
void* a2039220667 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20834))[6];
//not do dummy comment
void* kont20501 = (decode_clo(env20834))[5];
//not do dummy comment
void* lst = (decode_clo(env20834))[4];
//not do dummy comment
void* op = (decode_clo(env20834))[3];
//not do dummy comment
void* filter = (decode_clo(env20834))[2];
//not do dummy comment
void* cons = (decode_clo(env20834))[1];

//creating new closure instance
void** clo20972 = alloc_clo(lam20831_fptr, 5);

//setting env list
clo20972[1] = op;
clo20972[2] = a2039220667;
clo20972[3] = cons;
clo20972[4] = filter;
clo20972[5] = kont20501;
void* f2050420668 = encode_clo(clo20972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2050420668;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20833 = encode_clo(alloc_clo(lam20833_fptr, 0));

void* lam20835_fptr() // lam20835 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20836 = arg_buffer[1];
//reading env and args
void* a2039520673 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20501 = (decode_clo(env20836))[3];
//not do dummy comment
void* op = (decode_clo(env20836))[2];
//not do dummy comment
void* filter = (decode_clo(env20836))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont20501;
arg_buffer[3] = op;
arg_buffer[4] = a2039520673;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20835 = encode_clo(alloc_clo(lam20835_fptr, 0));

void* lam20837_fptr() // lam20837 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20838 = arg_buffer[1];
//reading env and args
void* a2039120665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20838))[7];
//not do dummy comment
void* kont20501 = (decode_clo(env20838))[6];
//not do dummy comment
void* lst = (decode_clo(env20838))[5];
//not do dummy comment
void* op = (decode_clo(env20838))[4];
//not do dummy comment
void* cons = (decode_clo(env20838))[3];
//not do dummy comment
void* filter = (decode_clo(env20838))[2];
//not do dummy comment
void* car = (decode_clo(env20838))[1];

//if-clause
bool if_guard20973 = is_true(a2039120665);
if(if_guard20973)
{

//creating new closure instance
void** clo20975 = alloc_clo(lam20833_fptr, 6);

//setting env list
clo20975[1] = cons;
clo20975[2] = filter;
clo20975[3] = op;
clo20975[4] = lst;
clo20975[5] = kont20501;
clo20975[6] = cdr;
void* f2050520666 = encode_clo(clo20975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2050520666;
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
void** clo20977 = alloc_clo(lam20835_fptr, 3);

//setting env list
clo20977[1] = filter;
clo20977[2] = op;
clo20977[3] = kont20501;
void* f2050620672 = encode_clo(clo20977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2050620672;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20837 = encode_clo(alloc_clo(lam20837_fptr, 0));

void* lam20839_fptr() // lam20839 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20840 = arg_buffer[1];
//reading env and args
void* a2039020663 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20840))[7];
//not do dummy comment
void* kont20501 = (decode_clo(env20840))[6];
//not do dummy comment
void* lst = (decode_clo(env20840))[5];
//not do dummy comment
void* op = (decode_clo(env20840))[4];
//not do dummy comment
void* cons = (decode_clo(env20840))[3];
//not do dummy comment
void* filter = (decode_clo(env20840))[2];
//not do dummy comment
void* car = (decode_clo(env20840))[1];

//creating new closure instance
void** clo20979 = alloc_clo(lam20837_fptr, 7);

//setting env list
clo20979[1] = car;
clo20979[2] = filter;
clo20979[3] = cons;
clo20979[4] = op;
clo20979[5] = lst;
clo20979[6] = kont20501;
clo20979[7] = cdr;
void* f2050720664 = encode_clo(clo20979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2050720664;
arg_buffer[3] = a2039020663;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20839 = encode_clo(alloc_clo(lam20839_fptr, 0));

void* lam20841_fptr() // lam20841 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20842 = arg_buffer[1];
//reading env and args
void* a2038820659 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont20501 = (decode_clo(env20842))[8];
//not do dummy comment
void* lst = (decode_clo(env20842))[7];
//not do dummy comment
void* op = (decode_clo(env20842))[6];
//not do dummy comment
void* cons = (decode_clo(env20842))[5];
//not do dummy comment
void* list = (decode_clo(env20842))[4];
//not do dummy comment
void* cdr = (decode_clo(env20842))[3];
//not do dummy comment
void* filter = (decode_clo(env20842))[2];
//not do dummy comment
void* car = (decode_clo(env20842))[1];

//if-clause
bool if_guard20980 = is_true(a2038820659);
if(if_guard20980)
{

//creating new closure instance
void** clo20982 = alloc_clo(lam20827_fptr, 1);

//setting env list
clo20982[1] = kont20501;
void* f2050220660 = encode_clo(clo20982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2050220660;
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
void** clo20984 = alloc_clo(lam20839_fptr, 7);

//setting env list
clo20984[1] = car;
clo20984[2] = filter;
clo20984[3] = cons;
clo20984[4] = op;
clo20984[5] = lst;
clo20984[6] = kont20501;
clo20984[7] = cdr;
void* f2050820662 = encode_clo(clo20984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2050820662;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20841 = encode_clo(alloc_clo(lam20841_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20843 = arg_buffer[1];
//reading env and args
void* kont20501 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo20986 = alloc_clo(lam20841_fptr, 8);

//setting env list
clo20986[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo20986[2] = filter;
clo20986[3] = cdr;
clo20986[4] = list;
clo20986[5] = cons;
clo20986[6] = op;
clo20986[7] = lst;
clo20986[8] = kont20501;
void* f2050920658 = encode_clo(clo20986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2050920658;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam20844_fptr() // lam20844 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20845 = arg_buffer[1];
//reading env and args
void* a2040020681 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2039820678 = (decode_clo(env20845))[3];
//not do dummy comment
void* drop = (decode_clo(env20845))[2];
//not do dummy comment
void* kont20510 = (decode_clo(env20845))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont20510;
arg_buffer[3] = a2039820678;
arg_buffer[4] = a2040020681;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20844 = encode_clo(alloc_clo(lam20844_fptr, 0));

void* lam20847_fptr() // lam20847 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20848 = arg_buffer[1];
//reading env and args
void* a2039820678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env20848))[4];
//not do dummy comment
void* kont20510 = (decode_clo(env20848))[3];
//not do dummy comment
void* n = (decode_clo(env20848))[2];
//not do dummy comment
void* _u45 = (decode_clo(env20848))[1];
mpz_t* mpzvar20987 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20987, "1", 10);
void* a2039920679 = encode_mpz(mpzvar20987);

//creating new closure instance
void** clo20989 = alloc_clo(lam20844_fptr, 3);

//setting env list
clo20989[1] = kont20510;
clo20989[2] = drop;
clo20989[3] = a2039820678;
void* f2051120680 = encode_clo(clo20989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2051120680;
arg_buffer[3] = n;
arg_buffer[4] = a2039920679;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20847 = encode_clo(alloc_clo(lam20847_fptr, 0));

void* lam20849_fptr() // lam20849 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20850 = arg_buffer[1];
//reading env and args
void* a2039720676 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20850))[6];
//not do dummy comment
void* kont20510 = (decode_clo(env20850))[5];
//not do dummy comment
void* n = (decode_clo(env20850))[4];
//not do dummy comment
void* _u45 = (decode_clo(env20850))[3];
//not do dummy comment
void* lst = (decode_clo(env20850))[2];
//not do dummy comment
void* drop = (decode_clo(env20850))[1];

//if-clause
bool if_guard20990 = is_true(a2039720676);
if(if_guard20990)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20510);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20510))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo20992 = alloc_clo(lam20847_fptr, 4);

//setting env list
clo20992[1] = _u45;
clo20992[2] = n;
clo20992[3] = kont20510;
clo20992[4] = drop;
void* f2051220677 = encode_clo(clo20992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2051220677;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20849 = encode_clo(alloc_clo(lam20849_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20852 = arg_buffer[1];
//reading env and args
void* kont20510 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar20993 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar20993, "0", 10);
void* a2039620674 = encode_mpz(mpzvar20993);

//creating new closure instance
void** clo20995 = alloc_clo(lam20849_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo20995[1] = drop;
clo20995[2] = lst;
clo20995[3] = _u45;
clo20995[4] = n;
clo20995[5] = kont20510;
clo20995[6] = cdr;
void* f2051320675 = encode_clo(clo20995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2051320675;
arg_buffer[3] = n;
arg_buffer[4] = a2039620674;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam20853_fptr() // lam20853 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20854 = arg_buffer[1];
//reading env and args
void* a2040420689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2040220685 = (decode_clo(env20854))[3];
//not do dummy comment
void* proc = (decode_clo(env20854))[2];
//not do dummy comment
void* kont20514 = (decode_clo(env20854))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont20514;
arg_buffer[3] = a2040220685;
arg_buffer[4] = a2040420689;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20853 = encode_clo(alloc_clo(lam20853_fptr, 0));

void* lam20855_fptr() // lam20855 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20856 = arg_buffer[1];
//reading env and args
void* a2040320687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env20856))[5];
//not do dummy comment
void* a2040220685 = (decode_clo(env20856))[4];
//not do dummy comment
void* kont20514 = (decode_clo(env20856))[3];
//not do dummy comment
void* proc = (decode_clo(env20856))[2];
//not do dummy comment
void* acc = (decode_clo(env20856))[1];

//creating new closure instance
void** clo20997 = alloc_clo(lam20853_fptr, 3);

//setting env list
clo20997[1] = kont20514;
clo20997[2] = proc;
clo20997[3] = a2040220685;
void* f2051520688 = encode_clo(clo20997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2051520688;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2040320687;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20855 = encode_clo(alloc_clo(lam20855_fptr, 0));

void* lam20857_fptr() // lam20857 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20858 = arg_buffer[1];
//reading env and args
void* a2040220685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20858))[6];
//not do dummy comment
void* kont20514 = (decode_clo(env20858))[5];
//not do dummy comment
void* foldr = (decode_clo(env20858))[4];
//not do dummy comment
void* lst = (decode_clo(env20858))[3];
//not do dummy comment
void* proc = (decode_clo(env20858))[2];
//not do dummy comment
void* acc = (decode_clo(env20858))[1];

//creating new closure instance
void** clo20999 = alloc_clo(lam20855_fptr, 5);

//setting env list
clo20999[1] = acc;
clo20999[2] = proc;
clo20999[3] = kont20514;
clo20999[4] = a2040220685;
clo20999[5] = foldr;
void* f2051620686 = encode_clo(clo20999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2051620686;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20857 = encode_clo(alloc_clo(lam20857_fptr, 0));

void* lam20859_fptr() // lam20859 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20860 = arg_buffer[1];
//reading env and args
void* a2040120683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20860))[7];
//not do dummy comment
void* car = (decode_clo(env20860))[6];
//not do dummy comment
void* kont20514 = (decode_clo(env20860))[5];
//not do dummy comment
void* foldr = (decode_clo(env20860))[4];
//not do dummy comment
void* lst = (decode_clo(env20860))[3];
//not do dummy comment
void* proc = (decode_clo(env20860))[2];
//not do dummy comment
void* acc = (decode_clo(env20860))[1];

//if-clause
bool if_guard21000 = is_true(a2040120683);
if(if_guard21000)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20514);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20514))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21002 = alloc_clo(lam20857_fptr, 6);

//setting env list
clo21002[1] = acc;
clo21002[2] = proc;
clo21002[3] = lst;
clo21002[4] = foldr;
clo21002[5] = kont20514;
clo21002[6] = cdr;
void* f2051720684 = encode_clo(clo21002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2051720684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20859 = encode_clo(alloc_clo(lam20859_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20861 = arg_buffer[1];
//reading env and args
void* kont20514 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo21004 = alloc_clo(lam20859_fptr, 7);

//setting env list
clo21004[1] = acc;
clo21004[2] = proc;
clo21004[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo21004[4] = foldr;
clo21004[5] = kont20514;
clo21004[6] = car;
clo21004[7] = cdr;
void* f2051820682 = encode_clo(clo21004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2051820682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam20862_fptr() // lam20862 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20863 = arg_buffer[1];
//reading env and args
void* a2040820697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2040620693 = (decode_clo(env20863))[3];
//not do dummy comment
void* kont20519 = (decode_clo(env20863))[2];
//not do dummy comment
void* cons = (decode_clo(env20863))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont20519;
arg_buffer[3] = a2040620693;
arg_buffer[4] = a2040820697;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20862 = encode_clo(alloc_clo(lam20862_fptr, 0));

void* lam20864_fptr() // lam20864 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20865 = arg_buffer[1];
//reading env and args
void* a2040720695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2040620693 = (decode_clo(env20865))[5];
//not do dummy comment
void* kont20519 = (decode_clo(env20865))[4];
//not do dummy comment
void* append = (decode_clo(env20865))[3];
//not do dummy comment
void* lst2 = (decode_clo(env20865))[2];
//not do dummy comment
void* cons = (decode_clo(env20865))[1];

//creating new closure instance
void** clo21006 = alloc_clo(lam20862_fptr, 3);

//setting env list
clo21006[1] = cons;
clo21006[2] = kont20519;
clo21006[3] = a2040620693;
void* f2052020696 = encode_clo(clo21006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2052020696;
arg_buffer[3] = a2040720695;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20864 = encode_clo(alloc_clo(lam20864_fptr, 0));

void* lam20866_fptr() // lam20866 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20867 = arg_buffer[1];
//reading env and args
void* a2040620693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20867))[6];
//not do dummy comment
void* kont20519 = (decode_clo(env20867))[5];
//not do dummy comment
void* append = (decode_clo(env20867))[4];
//not do dummy comment
void* lst2 = (decode_clo(env20867))[3];
//not do dummy comment
void* lst1 = (decode_clo(env20867))[2];
//not do dummy comment
void* cons = (decode_clo(env20867))[1];

//creating new closure instance
void** clo21008 = alloc_clo(lam20864_fptr, 5);

//setting env list
clo21008[1] = cons;
clo21008[2] = lst2;
clo21008[3] = append;
clo21008[4] = kont20519;
clo21008[5] = a2040620693;
void* f2052120694 = encode_clo(clo21008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2052120694;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20866 = encode_clo(alloc_clo(lam20866_fptr, 0));

void* lam20868_fptr() // lam20868 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20869 = arg_buffer[1];
//reading env and args
void* a2040520691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env20869))[7];
//not do dummy comment
void* kont20519 = (decode_clo(env20869))[6];
//not do dummy comment
void* append = (decode_clo(env20869))[5];
//not do dummy comment
void* lst2 = (decode_clo(env20869))[4];
//not do dummy comment
void* cons = (decode_clo(env20869))[3];
//not do dummy comment
void* lst1 = (decode_clo(env20869))[2];
//not do dummy comment
void* car = (decode_clo(env20869))[1];

//if-clause
bool if_guard21009 = is_true(a2040520691);
if(if_guard21009)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20519);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20519))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21011 = alloc_clo(lam20866_fptr, 6);

//setting env list
clo21011[1] = cons;
clo21011[2] = lst1;
clo21011[3] = lst2;
clo21011[4] = append;
clo21011[5] = kont20519;
clo21011[6] = cdr;
void* f2052220692 = encode_clo(clo21011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2052220692;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam20868 = encode_clo(alloc_clo(lam20868_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20870 = arg_buffer[1];
//reading env and args
void* kont20519 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo21013 = alloc_clo(lam20868_fptr, 7);

//setting env list
clo21013[1] = car;
clo21013[2] = lst1;
clo21013[3] = cons;
clo21013[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo21013[5] = append;
clo21013[6] = kont20519;
clo21013[7] = cdr;
void* f2052320690 = encode_clo(clo21013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2052320690;
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
void* _20871 = arg_buffer[1];
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

void* kont2052420698 = prim_car(lst);
void* lst20699 = prim_cdr(lst);
void* x2040920700 = apply_prim_hash(lst20699);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2052420698);
arg_buffer[2] = x2040920700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2052420698))[0]);
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
void* _20872 = arg_buffer[1];
//reading env and args
void* kont20526 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2041020701 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20526);
arg_buffer[2] = x2041020701;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20526))[0]);
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
void* _20873 = arg_buffer[1];
//reading env and args
void* kont20527 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2041120702 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20527);
arg_buffer[2] = x2041120702;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20527))[0]);
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
void* _20874 = arg_buffer[1];
//reading env and args
void* kont20528 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2041220703 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20528);
arg_buffer[2] = x2041220703;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20528))[0]);
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
void* _20875 = arg_buffer[1];
//reading env and args
void* kont20529 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2041320704 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20529);
arg_buffer[2] = x2041320704;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20529))[0]);
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
void* _20876 = arg_buffer[1];
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

void* kont2053020705 = prim_car(lst);
void* lst20706 = prim_cdr(lst);
void* x2041420707 = apply_prim_set(lst20706);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2053020705);
arg_buffer[2] = x2041420707;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2053020705))[0]);
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
void* _20877 = arg_buffer[1];
//reading env and args
void* kont20532 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2041520708 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20532);
arg_buffer[2] = x2041520708;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20532))[0]);
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
void* _20878 = arg_buffer[1];
//reading env and args
void* kont20533 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2041620709 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20533);
arg_buffer[2] = x2041620709;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20533))[0]);
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
void* _20879 = arg_buffer[1];
//reading env and args
void* kont20534 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2041720710 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20534);
arg_buffer[2] = x2041720710;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20534))[0]);
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
void* _20880 = arg_buffer[1];
//reading env and args
void* kont20535 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2041820711 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20535);
arg_buffer[2] = x2041820711;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20535))[0]);
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
void* _20881 = arg_buffer[1];
//reading env and args
void* kont20536 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2041920712 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20536);
arg_buffer[2] = x2041920712;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20536))[0]);
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
void* _20882 = arg_buffer[1];
//reading env and args
void* kont20537 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2042020713 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20537);
arg_buffer[2] = x2042020713;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20537))[0]);
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
void* _20883 = arg_buffer[1];
//reading env and args
void* kont20538 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2042120714 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20538);
arg_buffer[2] = x2042120714;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20538))[0]);
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
void* _20884 = arg_buffer[1];
//reading env and args
void* kont20539 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2042220715 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20539);
arg_buffer[2] = x2042220715;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20539))[0]);
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
void* _20885 = arg_buffer[1];
//reading env and args
void* kont20540 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2042320716 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20540);
arg_buffer[2] = x2042320716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20540))[0]);
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
void* _20886 = arg_buffer[1];
//reading env and args
void* kont20541 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2042420717 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont20541);
arg_buffer[2] = x2042420717;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont20541))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam20889_fptr() // lam20889 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env20890 = arg_buffer[1];
//reading env and args
void* cont2054320719 = arg_buffer[2];
void* a2032520720 = arg_buffer[3];
void* b2032620721 = arg_buffer[4];
//Dummy comment

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cont2054320719);
arg_buffer[2] = b2032620721;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cont2054320719))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam20889 = encode_clo(alloc_clo(lam20889_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _20891 = arg_buffer[1];
//reading env and args
void* kont20542 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo21015 = alloc_clo(lam20889_fptr, 0);
void* a2042520718 = encode_clo(clo21015);


mpz_t* mpzvar21016 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21016, "5", 10);
void* a2042620722 = encode_mpz(mpzvar21016);
mpz_t* mpzvar21017 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21017, "6", 10);
void* a2042720723 = encode_mpz(mpzvar21017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(a2042520718);
arg_buffer[2] = kont20542;
arg_buffer[3] = a2042620722;
arg_buffer[4] = a2042720723;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(a2042520718))[0]);
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

