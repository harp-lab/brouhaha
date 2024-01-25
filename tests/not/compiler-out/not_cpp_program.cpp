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
void* _28613 = arg_buffer[1];
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

void* kont2831728434 = prim_car(lst);
void* lst28435 = prim_cdr(lst);
void* x2821528436 = apply_prim__u43(lst28435);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2831728434);
arg_buffer[2] = x2821528436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2831728434))[0]);
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
void* _28614 = arg_buffer[1];
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

void* kont2831928437 = prim_car(lst);
void* lst28438 = prim_cdr(lst);
void* x2821628439 = apply_prim_max(lst28438);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2831928437);
arg_buffer[2] = x2821628439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2831928437))[0]);
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
void* _28615 = arg_buffer[1];
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

void* kont2832128440 = prim_car(lst);
void* lst28441 = prim_cdr(lst);
void* x2821728442 = apply_prim__u45(lst28441);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2832128440);
arg_buffer[2] = x2821728442;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2832128440))[0]);
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
void* _28616 = arg_buffer[1];
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

void* kont2832328443 = prim_car(lst);
void* lst28444 = prim_cdr(lst);
void* x2821828445 = apply_prim__u42(lst28444);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2832328443);
arg_buffer[2] = x2821828445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2832328443))[0]);
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
void* _28617 = arg_buffer[1];
//reading env and args
void* kont28325 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2821928446 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28325);
arg_buffer[2] = x2821928446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28325))[0]);
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
void* _28618 = arg_buffer[1];
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

void* kont2832628447 = prim_car(lst);
void* lst28448 = prim_cdr(lst);
void* x2822028449 = apply_prim__u47(lst28448);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2832628447);
arg_buffer[2] = x2822028449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2832628447))[0]);
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
void* _28619 = arg_buffer[1];
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

void* kont2832828450 = prim_car(lst);
void* lst28451 = prim_cdr(lst);
void* x2822128452 = apply_prim__u61(lst28451);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2832828450);
arg_buffer[2] = x2822128452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2832828450))[0]);
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
void* _28620 = arg_buffer[1];
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

void* kont2833028453 = prim_car(lst);
void* lst28454 = prim_cdr(lst);
void* x2822228455 = apply_prim__u62(lst28454);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2833028453);
arg_buffer[2] = x2822228455;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2833028453))[0]);
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
void* _28621 = arg_buffer[1];
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

void* kont2833228456 = prim_car(lst);
void* lst28457 = prim_cdr(lst);
void* x2822328458 = apply_prim__u60(lst28457);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2833228456);
arg_buffer[2] = x2822328458;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2833228456))[0]);
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
void* _28622 = arg_buffer[1];
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

void* kont2833428459 = prim_car(lst);
void* lst28460 = prim_cdr(lst);
void* x2822428461 = apply_prim__u60_u61(lst28460);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2833428459);
arg_buffer[2] = x2822428461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2833428459))[0]);
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
void* _28623 = arg_buffer[1];
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

void* kont2833628462 = prim_car(lst);
void* lst28463 = prim_cdr(lst);
void* x2822528464 = apply_prim__u62_u61(lst28463);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2833628462);
arg_buffer[2] = x2822528464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2833628462))[0]);
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
void* _28624 = arg_buffer[1];
//reading env and args
void* kont28338 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2822628465 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28338);
arg_buffer[2] = x2822628465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28338))[0]);
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
void* _28625 = arg_buffer[1];
//reading env and args
void* kont28339 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2822728466 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28339);
arg_buffer[2] = x2822728466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28339))[0]);
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
void* _28626 = arg_buffer[1];
//reading env and args
void* kont28340 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2822828467 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28340);
arg_buffer[2] = x2822828467;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28340))[0]);
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
void* _28627 = arg_buffer[1];
//reading env and args
void* kont28341 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2822928468 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28341);
arg_buffer[2] = x2822928468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28341))[0]);
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
void* _28628 = arg_buffer[1];
//reading env and args
void* kont28342 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2823028469 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28342);
arg_buffer[2] = x2823028469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28342))[0]);
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
void* _28629 = arg_buffer[1];
//reading env and args
void* kont28343 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2823128470 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28343);
arg_buffer[2] = x2823128470;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28343))[0]);
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
void* _28630 = arg_buffer[1];
//reading env and args
void* kont28344 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2823228471 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28344);
arg_buffer[2] = x2823228471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28344))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam28631_fptr() // lam28631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28632 = arg_buffer[1];
//reading env and args
void* a2823528475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env28632))[3];
//not do dummy comment
void* a2823328472 = (decode_clo(env28632))[2];
//not do dummy comment
void* kont28345 = (decode_clo(env28632))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont28345;
arg_buffer[3] = a2823328472;
arg_buffer[4] = a2823528475;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28631 = encode_clo(alloc_clo(lam28631_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28635 = arg_buffer[1];
//reading env and args
void* kont28345 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28783 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28783, "0", 10);
void* a2823328472 = encode_mpz(mpzvar28783);
mpz_t* mpzvar28784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28784, "2", 10);
void* a2823428473 = encode_mpz(mpzvar28784);

//creating new closure instance
void** clo28786 = alloc_clo(lam28631_fptr, 3);

//setting env list
clo28786[1] = kont28345;
clo28786[2] = a2823328472;
clo28786[3] = equal_u63;
void* f2834628474 = encode_clo(clo28786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2834628474;
arg_buffer[3] = x;
arg_buffer[4] = a2823428473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam28636_fptr() // lam28636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28637 = arg_buffer[1];
//reading env and args
void* a2823828479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2823628476 = (decode_clo(env28637))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env28637))[2];
//not do dummy comment
void* kont28347 = (decode_clo(env28637))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont28347;
arg_buffer[3] = a2823628476;
arg_buffer[4] = a2823828479;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28636 = encode_clo(alloc_clo(lam28636_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28640 = arg_buffer[1];
//reading env and args
void* kont28347 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28787, "1", 10);
void* a2823628476 = encode_mpz(mpzvar28787);
mpz_t* mpzvar28788 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28788, "2", 10);
void* a2823728477 = encode_mpz(mpzvar28788);

//creating new closure instance
void** clo28790 = alloc_clo(lam28636_fptr, 3);

//setting env list
clo28790[1] = kont28347;
clo28790[2] = equal_u63;
clo28790[3] = a2823628476;
void* f2834828478 = encode_clo(clo28790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2834828478;
arg_buffer[3] = x;
arg_buffer[4] = a2823728477;
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
void* _28641 = arg_buffer[1];
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

void* kont2834928480 = prim_car(x);
void* x28481 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2834928480);
arg_buffer[2] = x28481;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2834928480))[0]);
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
void* _28642 = arg_buffer[1];
//reading env and args
void* kont28351 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2823928482 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28351);
arg_buffer[2] = x2823928482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28351))[0]);
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
void* _28643 = arg_buffer[1];
//reading env and args
void* kont28352 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2824028483 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28352);
arg_buffer[2] = x2824028483;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28352))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam28646_fptr() // lam28646 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28647 = arg_buffer[1];
//reading env and args
void* a2824628493 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28353 = (decode_clo(env28647))[3];
//not do dummy comment
void* x = (decode_clo(env28647))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28647))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont28353;
arg_buffer[3] = x;
arg_buffer[4] = a2824628493;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28646 = encode_clo(alloc_clo(lam28646_fptr, 0));

void* lam28648_fptr() // lam28648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28649 = arg_buffer[1];
//reading env and args
void* a2824428490 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28649))[5];
//not do dummy comment
void* lst = (decode_clo(env28649))[4];
//not do dummy comment
void* kont28353 = (decode_clo(env28649))[3];
//not do dummy comment
void* x = (decode_clo(env28649))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28649))[1];

//if-clause
bool if_guard28791 = is_true(a2824428490);
if(if_guard28791)
{
void* x2824528491 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28353);
arg_buffer[2] = x2824528491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28353))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28793 = alloc_clo(lam28646_fptr, 3);

//setting env list
clo28793[1] = member_u63;
clo28793[2] = x;
clo28793[3] = kont28353;
void* f2835428492 = encode_clo(clo28793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2835428492;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28648 = encode_clo(alloc_clo(lam28648_fptr, 0));

void* lam28650_fptr() // lam28650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28651 = arg_buffer[1];
//reading env and args
void* a2824328488 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28651))[6];
//not do dummy comment
void* lst = (decode_clo(env28651))[5];
//not do dummy comment
void* kont28353 = (decode_clo(env28651))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env28651))[3];
//not do dummy comment
void* x = (decode_clo(env28651))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28651))[1];

//creating new closure instance
void** clo28795 = alloc_clo(lam28648_fptr, 5);

//setting env list
clo28795[1] = member_u63;
clo28795[2] = x;
clo28795[3] = kont28353;
clo28795[4] = lst;
clo28795[5] = cdr;
void* f2835528489 = encode_clo(clo28795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2835528489;
arg_buffer[3] = a2824328488;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28650 = encode_clo(alloc_clo(lam28650_fptr, 0));

void* lam28652_fptr() // lam28652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28653 = arg_buffer[1];
//reading env and args
void* a2824128485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28653))[7];
//not do dummy comment
void* lst = (decode_clo(env28653))[6];
//not do dummy comment
void* kont28353 = (decode_clo(env28653))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env28653))[4];
//not do dummy comment
void* x = (decode_clo(env28653))[3];
//not do dummy comment
void* car = (decode_clo(env28653))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28653))[1];

//if-clause
bool if_guard28796 = is_true(a2824128485);
if(if_guard28796)
{
void* x2824228486 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28353);
arg_buffer[2] = x2824228486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28353))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28798 = alloc_clo(lam28650_fptr, 6);

//setting env list
clo28798[1] = member_u63;
clo28798[2] = x;
clo28798[3] = equal_u63;
clo28798[4] = kont28353;
clo28798[5] = lst;
clo28798[6] = cdr;
void* f2835628487 = encode_clo(clo28798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2835628487;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28652 = encode_clo(alloc_clo(lam28652_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28654 = arg_buffer[1];
//reading env and args
void* kont28353 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28800 = alloc_clo(lam28652_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo28800[1] = member_u63;
clo28800[2] = car;
clo28800[3] = x;
clo28800[4] = equal_u63;
clo28800[5] = kont28353;
clo28800[6] = lst;
clo28800[7] = cdr;
void* f2835728484 = encode_clo(clo28800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2835728484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam28655_fptr() // lam28655 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28656 = arg_buffer[1];
//reading env and args
void* a2825028501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2824928499 = (decode_clo(env28656))[4];
//not do dummy comment
void* foldl = (decode_clo(env28656))[3];
//not do dummy comment
void* kont28358 = (decode_clo(env28656))[2];
//not do dummy comment
void* fun = (decode_clo(env28656))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont28358;
arg_buffer[3] = fun;
arg_buffer[4] = a2824928499;
arg_buffer[5] = a2825028501;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28655 = encode_clo(alloc_clo(lam28655_fptr, 0));

void* lam28657_fptr() // lam28657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28658 = arg_buffer[1];
//reading env and args
void* a2824928499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28658))[5];
//not do dummy comment
void* lst = (decode_clo(env28658))[4];
//not do dummy comment
void* foldl = (decode_clo(env28658))[3];
//not do dummy comment
void* kont28358 = (decode_clo(env28658))[2];
//not do dummy comment
void* fun = (decode_clo(env28658))[1];

//creating new closure instance
void** clo28802 = alloc_clo(lam28655_fptr, 4);

//setting env list
clo28802[1] = fun;
clo28802[2] = kont28358;
clo28802[3] = foldl;
clo28802[4] = a2824928499;
void* f2835928500 = encode_clo(clo28802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2835928500;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28657 = encode_clo(alloc_clo(lam28657_fptr, 0));

void* lam28659_fptr() // lam28659 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28660 = arg_buffer[1];
//reading env and args
void* a2824828497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28660))[6];
//not do dummy comment
void* lst = (decode_clo(env28660))[5];
//not do dummy comment
void* acc = (decode_clo(env28660))[4];
//not do dummy comment
void* foldl = (decode_clo(env28660))[3];
//not do dummy comment
void* kont28358 = (decode_clo(env28660))[2];
//not do dummy comment
void* fun = (decode_clo(env28660))[1];

//creating new closure instance
void** clo28804 = alloc_clo(lam28657_fptr, 5);

//setting env list
clo28804[1] = fun;
clo28804[2] = kont28358;
clo28804[3] = foldl;
clo28804[4] = lst;
clo28804[5] = cdr;
void* f2836028498 = encode_clo(clo28804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2836028498;
arg_buffer[3] = a2824828497;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28659 = encode_clo(alloc_clo(lam28659_fptr, 0));

void* lam28661_fptr() // lam28661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28662 = arg_buffer[1];
//reading env and args
void* a2824728495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28662))[7];
//not do dummy comment
void* lst = (decode_clo(env28662))[6];
//not do dummy comment
void* acc = (decode_clo(env28662))[5];
//not do dummy comment
void* car = (decode_clo(env28662))[4];
//not do dummy comment
void* foldl = (decode_clo(env28662))[3];
//not do dummy comment
void* kont28358 = (decode_clo(env28662))[2];
//not do dummy comment
void* fun = (decode_clo(env28662))[1];

//if-clause
bool if_guard28805 = is_true(a2824728495);
if(if_guard28805)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28358);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28358))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28807 = alloc_clo(lam28659_fptr, 6);

//setting env list
clo28807[1] = fun;
clo28807[2] = kont28358;
clo28807[3] = foldl;
clo28807[4] = acc;
clo28807[5] = lst;
clo28807[6] = cdr;
void* f2836128496 = encode_clo(clo28807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2836128496;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28661 = encode_clo(alloc_clo(lam28661_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28663 = arg_buffer[1];
//reading env and args
void* kont28358 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28809 = alloc_clo(lam28661_fptr, 7);

//setting env list
clo28809[1] = fun;
clo28809[2] = kont28358;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo28809[3] = foldl;
clo28809[4] = car;
clo28809[5] = acc;
clo28809[6] = lst;
clo28809[7] = cdr;
void* f2836228494 = encode_clo(clo28809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2836228494;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam28664_fptr() // lam28664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28665 = arg_buffer[1];
//reading env and args
void* a2825428509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28665))[3];
//not do dummy comment
void* a2825228505 = (decode_clo(env28665))[2];
//not do dummy comment
void* kont28363 = (decode_clo(env28665))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont28363;
arg_buffer[3] = a2825228505;
arg_buffer[4] = a2825428509;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28664 = encode_clo(alloc_clo(lam28664_fptr, 0));

void* lam28666_fptr() // lam28666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28667 = arg_buffer[1];
//reading env and args
void* a2825328507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28667))[5];
//not do dummy comment
void* lst2 = (decode_clo(env28667))[4];
//not do dummy comment
void* a2825228505 = (decode_clo(env28667))[3];
//not do dummy comment
void* cons = (decode_clo(env28667))[2];
//not do dummy comment
void* kont28363 = (decode_clo(env28667))[1];

//creating new closure instance
void** clo28811 = alloc_clo(lam28664_fptr, 3);

//setting env list
clo28811[1] = kont28363;
clo28811[2] = a2825228505;
clo28811[3] = reverse_u45helper;
void* f2836428508 = encode_clo(clo28811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2836428508;
arg_buffer[3] = a2825328507;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28666 = encode_clo(alloc_clo(lam28666_fptr, 0));

void* lam28668_fptr() // lam28668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28669 = arg_buffer[1];
//reading env and args
void* a2825228505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28669))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28669))[5];
//not do dummy comment
void* lst2 = (decode_clo(env28669))[4];
//not do dummy comment
void* car = (decode_clo(env28669))[3];
//not do dummy comment
void* cons = (decode_clo(env28669))[2];
//not do dummy comment
void* kont28363 = (decode_clo(env28669))[1];

//creating new closure instance
void** clo28813 = alloc_clo(lam28666_fptr, 5);

//setting env list
clo28813[1] = kont28363;
clo28813[2] = cons;
clo28813[3] = a2825228505;
clo28813[4] = lst2;
clo28813[5] = reverse_u45helper;
void* f2836528506 = encode_clo(clo28813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2836528506;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28668 = encode_clo(alloc_clo(lam28668_fptr, 0));

void* lam28670_fptr() // lam28670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28671 = arg_buffer[1];
//reading env and args
void* a2825128503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28671))[7];
//not do dummy comment
void* lst = (decode_clo(env28671))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28671))[5];
//not do dummy comment
void* lst2 = (decode_clo(env28671))[4];
//not do dummy comment
void* car = (decode_clo(env28671))[3];
//not do dummy comment
void* cons = (decode_clo(env28671))[2];
//not do dummy comment
void* kont28363 = (decode_clo(env28671))[1];

//if-clause
bool if_guard28814 = is_true(a2825128503);
if(if_guard28814)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28363);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28363))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28816 = alloc_clo(lam28668_fptr, 6);

//setting env list
clo28816[1] = kont28363;
clo28816[2] = cons;
clo28816[3] = car;
clo28816[4] = lst2;
clo28816[5] = reverse_u45helper;
clo28816[6] = lst;
void* f2836628504 = encode_clo(clo28816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2836628504;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28670 = encode_clo(alloc_clo(lam28670_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28672 = arg_buffer[1];
//reading env and args
void* kont28363 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28818 = alloc_clo(lam28670_fptr, 7);

//setting env list
clo28818[1] = kont28363;
clo28818[2] = cons;
clo28818[3] = car;
clo28818[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo28818[5] = reverse_u45helper;
clo28818[6] = lst;
clo28818[7] = cdr;
void* f2836728502 = encode_clo(clo28818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2836728502;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam28673_fptr() // lam28673 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28674 = arg_buffer[1];
//reading env and args
void* a2825528511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28674))[3];
//not do dummy comment
void* lst = (decode_clo(env28674))[2];
//not do dummy comment
void* kont28368 = (decode_clo(env28674))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont28368;
arg_buffer[3] = lst;
arg_buffer[4] = a2825528511;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28673 = encode_clo(alloc_clo(lam28673_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28675 = arg_buffer[1];
//reading env and args
void* kont28368 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28820 = alloc_clo(lam28673_fptr, 3);

//setting env list
clo28820[1] = kont28368;
clo28820[2] = lst;
clo28820[3] = reverse_u45helper;
void* f2836928510 = encode_clo(clo28820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2836928510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam28676_fptr() // lam28676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28677 = arg_buffer[1];
//reading env and args
void* x2825828516 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28370 = (decode_clo(env28677))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28370);
arg_buffer[2] = x2825828516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28370))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28676 = encode_clo(alloc_clo(lam28676_fptr, 0));

void* lam28678_fptr() // lam28678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28679 = arg_buffer[1];
//reading env and args
void* a2826328525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28370 = (decode_clo(env28679))[4];
//not do dummy comment
void* a2825928518 = (decode_clo(env28679))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env28679))[2];
//not do dummy comment
void* a2826128521 = (decode_clo(env28679))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont28370;
arg_buffer[3] = a2825928518;
arg_buffer[4] = a2826128521;
arg_buffer[5] = a2826328525;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28678 = encode_clo(alloc_clo(lam28678_fptr, 0));

void* lam28680_fptr() // lam28680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28681 = arg_buffer[1];
//reading env and args
void* a2826228523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28370 = (decode_clo(env28681))[6];
//not do dummy comment
void* a2825928518 = (decode_clo(env28681))[5];
//not do dummy comment
void* a2826128521 = (decode_clo(env28681))[4];
//not do dummy comment
void* cons = (decode_clo(env28681))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env28681))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28681))[1];

//creating new closure instance
void** clo28822 = alloc_clo(lam28678_fptr, 4);

//setting env list
clo28822[1] = a2826128521;
clo28822[2] = take_u45helper;
clo28822[3] = a2825928518;
clo28822[4] = kont28370;
void* f2837228524 = encode_clo(clo28822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2837228524;
arg_buffer[3] = a2826228523;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28680 = encode_clo(alloc_clo(lam28680_fptr, 0));

void* lam28682_fptr() // lam28682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28683 = arg_buffer[1];
//reading env and args
void* a2826128521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28683))[7];
//not do dummy comment
void* kont28370 = (decode_clo(env28683))[6];
//not do dummy comment
void* a2825928518 = (decode_clo(env28683))[5];
//not do dummy comment
void* car = (decode_clo(env28683))[4];
//not do dummy comment
void* cons = (decode_clo(env28683))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env28683))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28683))[1];

//creating new closure instance
void** clo28824 = alloc_clo(lam28680_fptr, 6);

//setting env list
clo28824[1] = lst2;
clo28824[2] = take_u45helper;
clo28824[3] = cons;
clo28824[4] = a2826128521;
clo28824[5] = a2825928518;
clo28824[6] = kont28370;
void* f2837328522 = encode_clo(clo28824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2837328522;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28682 = encode_clo(alloc_clo(lam28682_fptr, 0));

void* lam28685_fptr() // lam28685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28686 = arg_buffer[1];
//reading env and args
void* a2825928518 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28686))[8];
//not do dummy comment
void* kont28370 = (decode_clo(env28686))[7];
//not do dummy comment
void* cons = (decode_clo(env28686))[6];
//not do dummy comment
void* _u45 = (decode_clo(env28686))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env28686))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28686))[3];
//not do dummy comment
void* n = (decode_clo(env28686))[2];
//not do dummy comment
void* car = (decode_clo(env28686))[1];
mpz_t* mpzvar28825 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28825, "1", 10);
void* a2826028519 = encode_mpz(mpzvar28825);

//creating new closure instance
void** clo28827 = alloc_clo(lam28682_fptr, 7);

//setting env list
clo28827[1] = lst2;
clo28827[2] = take_u45helper;
clo28827[3] = cons;
clo28827[4] = car;
clo28827[5] = a2825928518;
clo28827[6] = kont28370;
clo28827[7] = lst;
void* f2837428520 = encode_clo(clo28827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2837428520;
arg_buffer[3] = n;
arg_buffer[4] = a2826028519;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28685 = encode_clo(alloc_clo(lam28685_fptr, 0));

void* lam28687_fptr() // lam28687 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28688 = arg_buffer[1];
//reading env and args
void* a2825728514 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28688))[10];
//not do dummy comment
void* lst = (decode_clo(env28688))[9];
//not do dummy comment
void* kont28370 = (decode_clo(env28688))[8];
//not do dummy comment
void* reverse = (decode_clo(env28688))[7];
//not do dummy comment
void* cons = (decode_clo(env28688))[6];
//not do dummy comment
void* _u45 = (decode_clo(env28688))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env28688))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28688))[3];
//not do dummy comment
void* n = (decode_clo(env28688))[2];
//not do dummy comment
void* car = (decode_clo(env28688))[1];

//if-clause
bool if_guard28828 = is_true(a2825728514);
if(if_guard28828)
{

//creating new closure instance
void** clo28830 = alloc_clo(lam28676_fptr, 1);

//setting env list
clo28830[1] = kont28370;
void* f2837128515 = encode_clo(clo28830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2837128515;
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
void** clo28832 = alloc_clo(lam28685_fptr, 8);

//setting env list
clo28832[1] = car;
clo28832[2] = n;
clo28832[3] = lst2;
clo28832[4] = take_u45helper;
clo28832[5] = _u45;
clo28832[6] = cons;
clo28832[7] = kont28370;
clo28832[8] = lst;
void* f2837528517 = encode_clo(clo28832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2837528517;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28687 = encode_clo(alloc_clo(lam28687_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28690 = arg_buffer[1];
//reading env and args
void* kont28370 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar28833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28833, "0", 10);
void* a2825628512 = encode_mpz(mpzvar28833);

//creating new closure instance
void** clo28835 = alloc_clo(lam28687_fptr, 10);

//setting env list
clo28835[1] = car;
clo28835[2] = n;
clo28835[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo28835[4] = take_u45helper;
clo28835[5] = _u45;
clo28835[6] = cons;
clo28835[7] = reverse;
clo28835[8] = kont28370;
clo28835[9] = lst;
clo28835[10] = cdr;
void* f2837628513 = encode_clo(clo28835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2837628513;
arg_buffer[3] = n;
arg_buffer[4] = a2825628512;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam28691_fptr() // lam28691 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28692 = arg_buffer[1];
//reading env and args
void* a2826428527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28692))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env28692))[3];
//not do dummy comment
void* kont28377 = (decode_clo(env28692))[2];
//not do dummy comment
void* n = (decode_clo(env28692))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont28377;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2826428527;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28691 = encode_clo(alloc_clo(lam28691_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28693 = arg_buffer[1];
//reading env and args
void* kont28377 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28837 = alloc_clo(lam28691_fptr, 4);

//setting env list
clo28837[1] = n;
clo28837[2] = kont28377;
clo28837[3] = take_u45helper;
clo28837[4] = lst;
void* f2837828526 = encode_clo(clo28837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2837828526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam28695_fptr() // lam28695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28696 = arg_buffer[1];
//reading env and args
void* a2826928535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2826728531 = (decode_clo(env28696))[3];
//not do dummy comment
void* _u43 = (decode_clo(env28696))[2];
//not do dummy comment
void* kont28379 = (decode_clo(env28696))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont28379;
arg_buffer[3] = a2826728531;
arg_buffer[4] = a2826928535;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28695 = encode_clo(alloc_clo(lam28695_fptr, 0));

void* lam28697_fptr() // lam28697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28698 = arg_buffer[1];
//reading env and args
void* a2826828533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env28698))[4];
//not do dummy comment
void* a2826728531 = (decode_clo(env28698))[3];
//not do dummy comment
void* _u43 = (decode_clo(env28698))[2];
//not do dummy comment
void* kont28379 = (decode_clo(env28698))[1];

//creating new closure instance
void** clo28839 = alloc_clo(lam28695_fptr, 3);

//setting env list
clo28839[1] = kont28379;
clo28839[2] = _u43;
clo28839[3] = a2826728531;
void* f2838028534 = encode_clo(clo28839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2838028534;
arg_buffer[3] = a2826828533;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28697 = encode_clo(alloc_clo(lam28697_fptr, 0));

void* lam28700_fptr() // lam28700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28701 = arg_buffer[1];
//reading env and args
void* a2826528529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28701))[5];
//not do dummy comment
void* lst = (decode_clo(env28701))[4];
//not do dummy comment
void* length = (decode_clo(env28701))[3];
//not do dummy comment
void* _u43 = (decode_clo(env28701))[2];
//not do dummy comment
void* kont28379 = (decode_clo(env28701))[1];

//if-clause
bool if_guard28840 = is_true(a2826528529);
if(if_guard28840)
{
mpz_t* mpzvar28841 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28841, "0", 10);
void* x2826628530 = encode_mpz(mpzvar28841);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28379);
arg_buffer[2] = x2826628530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28379))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28842 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28842, "1", 10);
void* a2826728531 = encode_mpz(mpzvar28842);

//creating new closure instance
void** clo28844 = alloc_clo(lam28697_fptr, 4);

//setting env list
clo28844[1] = kont28379;
clo28844[2] = _u43;
clo28844[3] = a2826728531;
clo28844[4] = length;
void* f2838128532 = encode_clo(clo28844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2838128532;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28700 = encode_clo(alloc_clo(lam28700_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28702 = arg_buffer[1];
//reading env and args
void* kont28379 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28846 = alloc_clo(lam28700_fptr, 5);

//setting env list
clo28846[1] = kont28379;
clo28846[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo28846[3] = length;
clo28846[4] = lst;
clo28846[5] = cdr;
void* f2838228528 = encode_clo(clo28846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2838228528;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam28703_fptr() // lam28703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28704 = arg_buffer[1];
//reading env and args
void* x2827128539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28383 = (decode_clo(env28704))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28383);
arg_buffer[2] = x2827128539;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28383))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28703 = encode_clo(alloc_clo(lam28703_fptr, 0));

void* lam28705_fptr() // lam28705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28706 = arg_buffer[1];
//reading env and args
void* a2827528547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env28706))[3];
//not do dummy comment
void* kont28383 = (decode_clo(env28706))[2];
//not do dummy comment
void* a2827328543 = (decode_clo(env28706))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont28383;
arg_buffer[3] = a2827328543;
arg_buffer[4] = a2827528547;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28705 = encode_clo(alloc_clo(lam28705_fptr, 0));

void* lam28707_fptr() // lam28707 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28708 = arg_buffer[1];
//reading env and args
void* a2827428545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env28708))[5];
//not do dummy comment
void* proc = (decode_clo(env28708))[4];
//not do dummy comment
void* cons = (decode_clo(env28708))[3];
//not do dummy comment
void* kont28383 = (decode_clo(env28708))[2];
//not do dummy comment
void* a2827328543 = (decode_clo(env28708))[1];

//creating new closure instance
void** clo28848 = alloc_clo(lam28705_fptr, 3);

//setting env list
clo28848[1] = a2827328543;
clo28848[2] = kont28383;
clo28848[3] = cons;
void* f2838528546 = encode_clo(clo28848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2838528546;
arg_buffer[3] = proc;
arg_buffer[4] = a2827428545;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28707 = encode_clo(alloc_clo(lam28707_fptr, 0));

void* lam28709_fptr() // lam28709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28710 = arg_buffer[1];
//reading env and args
void* a2827328543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28710))[6];
//not do dummy comment
void* kont28383 = (decode_clo(env28710))[5];
//not do dummy comment
void* lst = (decode_clo(env28710))[4];
//not do dummy comment
void* map = (decode_clo(env28710))[3];
//not do dummy comment
void* proc = (decode_clo(env28710))[2];
//not do dummy comment
void* cons = (decode_clo(env28710))[1];

//creating new closure instance
void** clo28850 = alloc_clo(lam28707_fptr, 5);

//setting env list
clo28850[1] = a2827328543;
clo28850[2] = kont28383;
clo28850[3] = cons;
clo28850[4] = proc;
clo28850[5] = map;
void* f2838628544 = encode_clo(clo28850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2838628544;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28709 = encode_clo(alloc_clo(lam28709_fptr, 0));

void* lam28711_fptr() // lam28711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28712 = arg_buffer[1];
//reading env and args
void* a2827228541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28712))[6];
//not do dummy comment
void* kont28383 = (decode_clo(env28712))[5];
//not do dummy comment
void* lst = (decode_clo(env28712))[4];
//not do dummy comment
void* map = (decode_clo(env28712))[3];
//not do dummy comment
void* proc = (decode_clo(env28712))[2];
//not do dummy comment
void* cons = (decode_clo(env28712))[1];

//creating new closure instance
void** clo28852 = alloc_clo(lam28709_fptr, 6);

//setting env list
clo28852[1] = cons;
clo28852[2] = proc;
clo28852[3] = map;
clo28852[4] = lst;
clo28852[5] = kont28383;
clo28852[6] = cdr;
void* f2838728542 = encode_clo(clo28852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2838728542;
arg_buffer[3] = a2827228541;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28711 = encode_clo(alloc_clo(lam28711_fptr, 0));

void* lam28713_fptr() // lam28713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28714 = arg_buffer[1];
//reading env and args
void* a2827028537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28383 = (decode_clo(env28714))[8];
//not do dummy comment
void* lst = (decode_clo(env28714))[7];
//not do dummy comment
void* map = (decode_clo(env28714))[6];
//not do dummy comment
void* proc = (decode_clo(env28714))[5];
//not do dummy comment
void* car = (decode_clo(env28714))[4];
//not do dummy comment
void* cons = (decode_clo(env28714))[3];
//not do dummy comment
void* list = (decode_clo(env28714))[2];
//not do dummy comment
void* cdr = (decode_clo(env28714))[1];

//if-clause
bool if_guard28853 = is_true(a2827028537);
if(if_guard28853)
{

//creating new closure instance
void** clo28855 = alloc_clo(lam28703_fptr, 1);

//setting env list
clo28855[1] = kont28383;
void* f2838428538 = encode_clo(clo28855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2838428538;
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
void** clo28857 = alloc_clo(lam28711_fptr, 6);

//setting env list
clo28857[1] = cons;
clo28857[2] = proc;
clo28857[3] = map;
clo28857[4] = lst;
clo28857[5] = kont28383;
clo28857[6] = cdr;
void* f2838828540 = encode_clo(clo28857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2838828540;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28713 = encode_clo(alloc_clo(lam28713_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28715 = arg_buffer[1];
//reading env and args
void* kont28383 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28859 = alloc_clo(lam28713_fptr, 8);

//setting env list
clo28859[1] = cdr;
clo28859[2] = list;
clo28859[3] = cons;
clo28859[4] = car;
clo28859[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo28859[6] = map;
clo28859[7] = lst;
clo28859[8] = kont28383;
void* f2838928536 = encode_clo(clo28859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2838928536;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam28716_fptr() // lam28716 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28717 = arg_buffer[1];
//reading env and args
void* x2827728551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28390 = (decode_clo(env28717))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28390);
arg_buffer[2] = x2827728551;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28390))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28716 = encode_clo(alloc_clo(lam28716_fptr, 0));

void* lam28718_fptr() // lam28718 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28719 = arg_buffer[1];
//reading env and args
void* a2828228561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2828028557 = (decode_clo(env28719))[3];
//not do dummy comment
void* kont28390 = (decode_clo(env28719))[2];
//not do dummy comment
void* cons = (decode_clo(env28719))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont28390;
arg_buffer[3] = a2828028557;
arg_buffer[4] = a2828228561;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28718 = encode_clo(alloc_clo(lam28718_fptr, 0));

void* lam28720_fptr() // lam28720 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28721 = arg_buffer[1];
//reading env and args
void* a2828128559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2828028557 = (decode_clo(env28721))[5];
//not do dummy comment
void* op = (decode_clo(env28721))[4];
//not do dummy comment
void* kont28390 = (decode_clo(env28721))[3];
//not do dummy comment
void* filter = (decode_clo(env28721))[2];
//not do dummy comment
void* cons = (decode_clo(env28721))[1];

//creating new closure instance
void** clo28861 = alloc_clo(lam28718_fptr, 3);

//setting env list
clo28861[1] = cons;
clo28861[2] = kont28390;
clo28861[3] = a2828028557;
void* f2839228560 = encode_clo(clo28861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2839228560;
arg_buffer[3] = op;
arg_buffer[4] = a2828128559;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28720 = encode_clo(alloc_clo(lam28720_fptr, 0));

void* lam28722_fptr() // lam28722 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28723 = arg_buffer[1];
//reading env and args
void* a2828028557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28723))[6];
//not do dummy comment
void* lst = (decode_clo(env28723))[5];
//not do dummy comment
void* op = (decode_clo(env28723))[4];
//not do dummy comment
void* kont28390 = (decode_clo(env28723))[3];
//not do dummy comment
void* filter = (decode_clo(env28723))[2];
//not do dummy comment
void* cons = (decode_clo(env28723))[1];

//creating new closure instance
void** clo28863 = alloc_clo(lam28720_fptr, 5);

//setting env list
clo28863[1] = cons;
clo28863[2] = filter;
clo28863[3] = kont28390;
clo28863[4] = op;
clo28863[5] = a2828028557;
void* f2839328558 = encode_clo(clo28863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2839328558;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28722 = encode_clo(alloc_clo(lam28722_fptr, 0));

void* lam28724_fptr() // lam28724 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28725 = arg_buffer[1];
//reading env and args
void* a2828328563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env28725))[3];
//not do dummy comment
void* kont28390 = (decode_clo(env28725))[2];
//not do dummy comment
void* filter = (decode_clo(env28725))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont28390;
arg_buffer[3] = op;
arg_buffer[4] = a2828328563;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28724 = encode_clo(alloc_clo(lam28724_fptr, 0));

void* lam28726_fptr() // lam28726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28727 = arg_buffer[1];
//reading env and args
void* a2827928555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28727))[7];
//not do dummy comment
void* lst = (decode_clo(env28727))[6];
//not do dummy comment
void* op = (decode_clo(env28727))[5];
//not do dummy comment
void* kont28390 = (decode_clo(env28727))[4];
//not do dummy comment
void* cons = (decode_clo(env28727))[3];
//not do dummy comment
void* filter = (decode_clo(env28727))[2];
//not do dummy comment
void* car = (decode_clo(env28727))[1];

//if-clause
bool if_guard28864 = is_true(a2827928555);
if(if_guard28864)
{

//creating new closure instance
void** clo28866 = alloc_clo(lam28722_fptr, 6);

//setting env list
clo28866[1] = cons;
clo28866[2] = filter;
clo28866[3] = kont28390;
clo28866[4] = op;
clo28866[5] = lst;
clo28866[6] = cdr;
void* f2839428556 = encode_clo(clo28866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2839428556;
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
void** clo28868 = alloc_clo(lam28724_fptr, 3);

//setting env list
clo28868[1] = filter;
clo28868[2] = kont28390;
clo28868[3] = op;
void* f2839528562 = encode_clo(clo28868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2839528562;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28726 = encode_clo(alloc_clo(lam28726_fptr, 0));

void* lam28728_fptr() // lam28728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28729 = arg_buffer[1];
//reading env and args
void* a2827828553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28729))[7];
//not do dummy comment
void* lst = (decode_clo(env28729))[6];
//not do dummy comment
void* op = (decode_clo(env28729))[5];
//not do dummy comment
void* kont28390 = (decode_clo(env28729))[4];
//not do dummy comment
void* cons = (decode_clo(env28729))[3];
//not do dummy comment
void* filter = (decode_clo(env28729))[2];
//not do dummy comment
void* car = (decode_clo(env28729))[1];

//creating new closure instance
void** clo28870 = alloc_clo(lam28726_fptr, 7);

//setting env list
clo28870[1] = car;
clo28870[2] = filter;
clo28870[3] = cons;
clo28870[4] = kont28390;
clo28870[5] = op;
clo28870[6] = lst;
clo28870[7] = cdr;
void* f2839628554 = encode_clo(clo28870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2839628554;
arg_buffer[3] = a2827828553;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28728 = encode_clo(alloc_clo(lam28728_fptr, 0));

void* lam28730_fptr() // lam28730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28731 = arg_buffer[1];
//reading env and args
void* a2827628549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28731))[8];
//not do dummy comment
void* op = (decode_clo(env28731))[7];
//not do dummy comment
void* kont28390 = (decode_clo(env28731))[6];
//not do dummy comment
void* cons = (decode_clo(env28731))[5];
//not do dummy comment
void* list = (decode_clo(env28731))[4];
//not do dummy comment
void* cdr = (decode_clo(env28731))[3];
//not do dummy comment
void* filter = (decode_clo(env28731))[2];
//not do dummy comment
void* car = (decode_clo(env28731))[1];

//if-clause
bool if_guard28871 = is_true(a2827628549);
if(if_guard28871)
{

//creating new closure instance
void** clo28873 = alloc_clo(lam28716_fptr, 1);

//setting env list
clo28873[1] = kont28390;
void* f2839128550 = encode_clo(clo28873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2839128550;
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
void** clo28875 = alloc_clo(lam28728_fptr, 7);

//setting env list
clo28875[1] = car;
clo28875[2] = filter;
clo28875[3] = cons;
clo28875[4] = kont28390;
clo28875[5] = op;
clo28875[6] = lst;
clo28875[7] = cdr;
void* f2839728552 = encode_clo(clo28875);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2839728552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28730 = encode_clo(alloc_clo(lam28730_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28732 = arg_buffer[1];
//reading env and args
void* kont28390 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28877 = alloc_clo(lam28730_fptr, 8);

//setting env list
clo28877[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo28877[2] = filter;
clo28877[3] = cdr;
clo28877[4] = list;
clo28877[5] = cons;
clo28877[6] = kont28390;
clo28877[7] = op;
clo28877[8] = lst;
void* f2839828548 = encode_clo(clo28877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2839828548;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam28733_fptr() // lam28733 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28734 = arg_buffer[1];
//reading env and args
void* a2828828571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28399 = (decode_clo(env28734))[3];
//not do dummy comment
void* drop = (decode_clo(env28734))[2];
//not do dummy comment
void* a2828628568 = (decode_clo(env28734))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont28399;
arg_buffer[3] = a2828628568;
arg_buffer[4] = a2828828571;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28733 = encode_clo(alloc_clo(lam28733_fptr, 0));

void* lam28736_fptr() // lam28736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28737 = arg_buffer[1];
//reading env and args
void* a2828628568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28399 = (decode_clo(env28737))[4];
//not do dummy comment
void* drop = (decode_clo(env28737))[3];
//not do dummy comment
void* n = (decode_clo(env28737))[2];
//not do dummy comment
void* _u45 = (decode_clo(env28737))[1];
mpz_t* mpzvar28878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28878, "1", 10);
void* a2828728569 = encode_mpz(mpzvar28878);

//creating new closure instance
void** clo28880 = alloc_clo(lam28733_fptr, 3);

//setting env list
clo28880[1] = a2828628568;
clo28880[2] = drop;
clo28880[3] = kont28399;
void* f2840028570 = encode_clo(clo28880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2840028570;
arg_buffer[3] = n;
arg_buffer[4] = a2828728569;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28736 = encode_clo(alloc_clo(lam28736_fptr, 0));

void* lam28738_fptr() // lam28738 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28739 = arg_buffer[1];
//reading env and args
void* a2828528566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28739))[6];
//not do dummy comment
void* kont28399 = (decode_clo(env28739))[5];
//not do dummy comment
void* n = (decode_clo(env28739))[4];
//not do dummy comment
void* _u45 = (decode_clo(env28739))[3];
//not do dummy comment
void* lst = (decode_clo(env28739))[2];
//not do dummy comment
void* drop = (decode_clo(env28739))[1];

//if-clause
bool if_guard28881 = is_true(a2828528566);
if(if_guard28881)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28399);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28399))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28883 = alloc_clo(lam28736_fptr, 4);

//setting env list
clo28883[1] = _u45;
clo28883[2] = n;
clo28883[3] = drop;
clo28883[4] = kont28399;
void* f2840128567 = encode_clo(clo28883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2840128567;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28738 = encode_clo(alloc_clo(lam28738_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28741 = arg_buffer[1];
//reading env and args
void* kont28399 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar28884 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28884, "0", 10);
void* a2828428564 = encode_mpz(mpzvar28884);

//creating new closure instance
void** clo28886 = alloc_clo(lam28738_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo28886[1] = drop;
clo28886[2] = lst;
clo28886[3] = _u45;
clo28886[4] = n;
clo28886[5] = kont28399;
clo28886[6] = cdr;
void* f2840228565 = encode_clo(clo28886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2840228565;
arg_buffer[3] = n;
arg_buffer[4] = a2828428564;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam28742_fptr() // lam28742 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28743 = arg_buffer[1];
//reading env and args
void* a2829228579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2829028575 = (decode_clo(env28743))[3];
//not do dummy comment
void* kont28403 = (decode_clo(env28743))[2];
//not do dummy comment
void* proc = (decode_clo(env28743))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont28403;
arg_buffer[3] = a2829028575;
arg_buffer[4] = a2829228579;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28742 = encode_clo(alloc_clo(lam28742_fptr, 0));

void* lam28744_fptr() // lam28744 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28745 = arg_buffer[1];
//reading env and args
void* a2829128577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2829028575 = (decode_clo(env28745))[5];
//not do dummy comment
void* foldr = (decode_clo(env28745))[4];
//not do dummy comment
void* kont28403 = (decode_clo(env28745))[3];
//not do dummy comment
void* proc = (decode_clo(env28745))[2];
//not do dummy comment
void* acc = (decode_clo(env28745))[1];

//creating new closure instance
void** clo28888 = alloc_clo(lam28742_fptr, 3);

//setting env list
clo28888[1] = proc;
clo28888[2] = kont28403;
clo28888[3] = a2829028575;
void* f2840428578 = encode_clo(clo28888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2840428578;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2829128577;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28744 = encode_clo(alloc_clo(lam28744_fptr, 0));

void* lam28746_fptr() // lam28746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28747 = arg_buffer[1];
//reading env and args
void* a2829028575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28747))[6];
//not do dummy comment
void* kont28403 = (decode_clo(env28747))[5];
//not do dummy comment
void* foldr = (decode_clo(env28747))[4];
//not do dummy comment
void* lst = (decode_clo(env28747))[3];
//not do dummy comment
void* proc = (decode_clo(env28747))[2];
//not do dummy comment
void* acc = (decode_clo(env28747))[1];

//creating new closure instance
void** clo28890 = alloc_clo(lam28744_fptr, 5);

//setting env list
clo28890[1] = acc;
clo28890[2] = proc;
clo28890[3] = kont28403;
clo28890[4] = foldr;
clo28890[5] = a2829028575;
void* f2840528576 = encode_clo(clo28890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2840528576;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28746 = encode_clo(alloc_clo(lam28746_fptr, 0));

void* lam28748_fptr() // lam28748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28749 = arg_buffer[1];
//reading env and args
void* a2828928573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28749))[7];
//not do dummy comment
void* kont28403 = (decode_clo(env28749))[6];
//not do dummy comment
void* car = (decode_clo(env28749))[5];
//not do dummy comment
void* foldr = (decode_clo(env28749))[4];
//not do dummy comment
void* lst = (decode_clo(env28749))[3];
//not do dummy comment
void* proc = (decode_clo(env28749))[2];
//not do dummy comment
void* acc = (decode_clo(env28749))[1];

//if-clause
bool if_guard28891 = is_true(a2828928573);
if(if_guard28891)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28403);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28403))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28893 = alloc_clo(lam28746_fptr, 6);

//setting env list
clo28893[1] = acc;
clo28893[2] = proc;
clo28893[3] = lst;
clo28893[4] = foldr;
clo28893[5] = kont28403;
clo28893[6] = cdr;
void* f2840628574 = encode_clo(clo28893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2840628574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28748 = encode_clo(alloc_clo(lam28748_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28750 = arg_buffer[1];
//reading env and args
void* kont28403 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28895 = alloc_clo(lam28748_fptr, 7);

//setting env list
clo28895[1] = acc;
clo28895[2] = proc;
clo28895[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo28895[4] = foldr;
clo28895[5] = car;
clo28895[6] = kont28403;
clo28895[7] = cdr;
void* f2840728572 = encode_clo(clo28895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2840728572;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam28751_fptr() // lam28751 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28752 = arg_buffer[1];
//reading env and args
void* a2829628587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2829428583 = (decode_clo(env28752))[3];
//not do dummy comment
void* kont28408 = (decode_clo(env28752))[2];
//not do dummy comment
void* cons = (decode_clo(env28752))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont28408;
arg_buffer[3] = a2829428583;
arg_buffer[4] = a2829628587;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28751 = encode_clo(alloc_clo(lam28751_fptr, 0));

void* lam28753_fptr() // lam28753 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28754 = arg_buffer[1];
//reading env and args
void* a2829528585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env28754))[5];
//not do dummy comment
void* a2829428583 = (decode_clo(env28754))[4];
//not do dummy comment
void* cons = (decode_clo(env28754))[3];
//not do dummy comment
void* kont28408 = (decode_clo(env28754))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28754))[1];

//creating new closure instance
void** clo28897 = alloc_clo(lam28751_fptr, 3);

//setting env list
clo28897[1] = cons;
clo28897[2] = kont28408;
clo28897[3] = a2829428583;
void* f2840928586 = encode_clo(clo28897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2840928586;
arg_buffer[3] = a2829528585;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28753 = encode_clo(alloc_clo(lam28753_fptr, 0));

void* lam28755_fptr() // lam28755 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28756 = arg_buffer[1];
//reading env and args
void* a2829428583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28756))[6];
//not do dummy comment
void* append = (decode_clo(env28756))[5];
//not do dummy comment
void* lst1 = (decode_clo(env28756))[4];
//not do dummy comment
void* cons = (decode_clo(env28756))[3];
//not do dummy comment
void* kont28408 = (decode_clo(env28756))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28756))[1];

//creating new closure instance
void** clo28899 = alloc_clo(lam28753_fptr, 5);

//setting env list
clo28899[1] = lst2;
clo28899[2] = kont28408;
clo28899[3] = cons;
clo28899[4] = a2829428583;
clo28899[5] = append;
void* f2841028584 = encode_clo(clo28899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2841028584;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28755 = encode_clo(alloc_clo(lam28755_fptr, 0));

void* lam28757_fptr() // lam28757 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28758 = arg_buffer[1];
//reading env and args
void* a2829328581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28758))[7];
//not do dummy comment
void* append = (decode_clo(env28758))[6];
//not do dummy comment
void* cons = (decode_clo(env28758))[5];
//not do dummy comment
void* kont28408 = (decode_clo(env28758))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28758))[3];
//not do dummy comment
void* lst1 = (decode_clo(env28758))[2];
//not do dummy comment
void* car = (decode_clo(env28758))[1];

//if-clause
bool if_guard28900 = is_true(a2829328581);
if(if_guard28900)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28408);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28408))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28902 = alloc_clo(lam28755_fptr, 6);

//setting env list
clo28902[1] = lst2;
clo28902[2] = kont28408;
clo28902[3] = cons;
clo28902[4] = lst1;
clo28902[5] = append;
clo28902[6] = cdr;
void* f2841128582 = encode_clo(clo28902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2841128582;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28757 = encode_clo(alloc_clo(lam28757_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28759 = arg_buffer[1];
//reading env and args
void* kont28408 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28904 = alloc_clo(lam28757_fptr, 7);

//setting env list
clo28904[1] = car;
clo28904[2] = lst1;
clo28904[3] = lst2;
clo28904[4] = kont28408;
clo28904[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo28904[6] = append;
clo28904[7] = cdr;
void* f2841228580 = encode_clo(clo28904);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2841228580;
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
void* _28760 = arg_buffer[1];
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

void* kont2841328588 = prim_car(lst);
void* lst28589 = prim_cdr(lst);
void* x2829728590 = apply_prim_hash(lst28589);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2841328588);
arg_buffer[2] = x2829728590;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2841328588))[0]);
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
void* _28761 = arg_buffer[1];
//reading env and args
void* kont28415 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2829828591 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28415);
arg_buffer[2] = x2829828591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28415))[0]);
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
void* _28762 = arg_buffer[1];
//reading env and args
void* kont28416 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2829928592 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28416);
arg_buffer[2] = x2829928592;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28416))[0]);
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
void* _28763 = arg_buffer[1];
//reading env and args
void* kont28417 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2830028593 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28417);
arg_buffer[2] = x2830028593;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28417))[0]);
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
void* _28764 = arg_buffer[1];
//reading env and args
void* kont28418 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2830128594 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28418);
arg_buffer[2] = x2830128594;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28418))[0]);
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
void* _28765 = arg_buffer[1];
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

void* kont2841928595 = prim_car(lst);
void* lst28596 = prim_cdr(lst);
void* x2830228597 = apply_prim_set(lst28596);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2841928595);
arg_buffer[2] = x2830228597;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2841928595))[0]);
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
void* _28766 = arg_buffer[1];
//reading env and args
void* kont28421 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2830328598 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28421);
arg_buffer[2] = x2830328598;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28421))[0]);
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
void* _28767 = arg_buffer[1];
//reading env and args
void* kont28422 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2830428599 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28422);
arg_buffer[2] = x2830428599;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28422))[0]);
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
void* _28768 = arg_buffer[1];
//reading env and args
void* kont28423 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2830528600 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28423);
arg_buffer[2] = x2830528600;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28423))[0]);
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
void* _28769 = arg_buffer[1];
//reading env and args
void* kont28424 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2830628601 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28424);
arg_buffer[2] = x2830628601;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28424))[0]);
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
void* _28770 = arg_buffer[1];
//reading env and args
void* kont28425 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2830728602 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28425);
arg_buffer[2] = x2830728602;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28425))[0]);
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
void* _28771 = arg_buffer[1];
//reading env and args
void* kont28426 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2830828603 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28426);
arg_buffer[2] = x2830828603;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28426))[0]);
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
void* _28772 = arg_buffer[1];
//reading env and args
void* kont28427 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2830928604 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28427);
arg_buffer[2] = x2830928604;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28427))[0]);
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
void* _28773 = arg_buffer[1];
//reading env and args
void* kont28428 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2831028605 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28428);
arg_buffer[2] = x2831028605;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28428))[0]);
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
void* _28774 = arg_buffer[1];
//reading env and args
void* kont28429 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2831128606 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28429);
arg_buffer[2] = x2831128606;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28429))[0]);
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
void* _28775 = arg_buffer[1];
//reading env and args
void* kont28430 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2831228607 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28430);
arg_buffer[2] = x2831228607;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28430))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28779 = arg_buffer[1];
//reading env and args
void* kont28431 = arg_buffer[2];
//Dummy comment
void* a2831328608 = encode_bool(false);

//if-clause
bool if_guard28905 = is_true(a2831328608);
if(if_guard28905)
{
void* x2831428609 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28431);
arg_buffer[2] = x2831428609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28431))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x2831528610 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28431);
arg_buffer[2] = x2831528610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28431))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam28780_fptr() // lam28780 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28781 = arg_buffer[1];
//reading env and args
void* x2831628612 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28432 = (decode_clo(env28781))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28432);
arg_buffer[2] = x2831628612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28432))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28780 = encode_clo(alloc_clo(lam28780_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28782 = arg_buffer[1];
//reading env and args
void* kont28432 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo28907 = alloc_clo(lam28780_fptr, 1);

//setting env list
clo28907[1] = kont28432;
void* f2843328611 = encode_clo(clo28907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2843328611;
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

