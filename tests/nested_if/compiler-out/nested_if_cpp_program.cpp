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
void* _27840 = arg_buffer[1];
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

void* kont2749827624 = prim_car(lst);
void* lst27625 = prim_cdr(lst);
void* x2736827626 = apply_prim__u43(lst27625);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2749827624);
arg_buffer[2] = x2736827626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2749827624))[0]);
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
void* _27841 = arg_buffer[1];
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

void* kont2750027627 = prim_car(lst);
void* lst27628 = prim_cdr(lst);
void* x2736927629 = apply_prim_max(lst27628);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2750027627);
arg_buffer[2] = x2736927629;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2750027627))[0]);
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
void* _27842 = arg_buffer[1];
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

void* kont2750227630 = prim_car(lst);
void* lst27631 = prim_cdr(lst);
void* x2737027632 = apply_prim__u45(lst27631);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2750227630);
arg_buffer[2] = x2737027632;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2750227630))[0]);
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
void* _27843 = arg_buffer[1];
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

void* kont2750427633 = prim_car(lst);
void* lst27634 = prim_cdr(lst);
void* x2737127635 = apply_prim__u42(lst27634);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2750427633);
arg_buffer[2] = x2737127635;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2750427633))[0]);
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
void* _27844 = arg_buffer[1];
//reading env and args
void* kont27506 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2737227636 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27506);
arg_buffer[2] = x2737227636;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27506))[0]);
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
void* _27845 = arg_buffer[1];
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

void* kont2750727637 = prim_car(lst);
void* lst27638 = prim_cdr(lst);
void* x2737327639 = apply_prim__u47(lst27638);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2750727637);
arg_buffer[2] = x2737327639;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2750727637))[0]);
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
void* _27846 = arg_buffer[1];
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

void* kont2750927640 = prim_car(lst);
void* lst27641 = prim_cdr(lst);
void* x2737427642 = apply_prim__u61(lst27641);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2750927640);
arg_buffer[2] = x2737427642;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2750927640))[0]);
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
void* _27847 = arg_buffer[1];
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

void* kont2751127643 = prim_car(lst);
void* lst27644 = prim_cdr(lst);
void* x2737527645 = apply_prim__u62(lst27644);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2751127643);
arg_buffer[2] = x2737527645;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2751127643))[0]);
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
void* _27848 = arg_buffer[1];
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

void* kont2751327646 = prim_car(lst);
void* lst27647 = prim_cdr(lst);
void* x2737627648 = apply_prim__u60(lst27647);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2751327646);
arg_buffer[2] = x2737627648;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2751327646))[0]);
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
void* _27849 = arg_buffer[1];
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

void* kont2751527649 = prim_car(lst);
void* lst27650 = prim_cdr(lst);
void* x2737727651 = apply_prim__u60_u61(lst27650);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2751527649);
arg_buffer[2] = x2737727651;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2751527649))[0]);
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
void* _27850 = arg_buffer[1];
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

void* kont2751727652 = prim_car(lst);
void* lst27653 = prim_cdr(lst);
void* x2737827654 = apply_prim__u62_u61(lst27653);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2751727652);
arg_buffer[2] = x2737827654;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2751727652))[0]);
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
void* _27851 = arg_buffer[1];
//reading env and args
void* kont27519 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2737927655 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27519);
arg_buffer[2] = x2737927655;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27519))[0]);
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
void* _27852 = arg_buffer[1];
//reading env and args
void* kont27520 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2738027656 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27520);
arg_buffer[2] = x2738027656;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27520))[0]);
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
void* _27853 = arg_buffer[1];
//reading env and args
void* kont27521 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2738127657 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27521);
arg_buffer[2] = x2738127657;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27521))[0]);
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
void* _27854 = arg_buffer[1];
//reading env and args
void* kont27522 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2738227658 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27522);
arg_buffer[2] = x2738227658;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27522))[0]);
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
void* _27855 = arg_buffer[1];
//reading env and args
void* kont27523 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2738327659 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27523);
arg_buffer[2] = x2738327659;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27523))[0]);
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
void* _27856 = arg_buffer[1];
//reading env and args
void* kont27524 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2738427660 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27524);
arg_buffer[2] = x2738427660;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27524))[0]);
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
void* _27857 = arg_buffer[1];
//reading env and args
void* kont27525 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2738527661 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27525);
arg_buffer[2] = x2738527661;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27525))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam27858_fptr() // lam27858 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27859 = arg_buffer[1];
//reading env and args
void* a2738827665 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27526 = (decode_clo(env27859))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env27859))[2];
//not do dummy comment
void* a2738627662 = (decode_clo(env27859))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont27526;
arg_buffer[3] = a2738627662;
arg_buffer[4] = a2738827665;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27858 = encode_clo(alloc_clo(lam27858_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27862 = arg_buffer[1];
//reading env and args
void* kont27526 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28047 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28047, "0", 10);
void* a2738627662 = encode_mpz(mpzvar28047);
mpz_t* mpzvar28048 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28048, "2", 10);
void* a2738727663 = encode_mpz(mpzvar28048);

//creating new closure instance
void** clo28050 = alloc_clo(lam27858_fptr, 3);

//setting env list
clo28050[1] = a2738627662;
clo28050[2] = equal_u63;
clo28050[3] = kont27526;
void* f2752727664 = encode_clo(clo28050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2752727664;
arg_buffer[3] = x;
arg_buffer[4] = a2738727663;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam27863_fptr() // lam27863 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27864 = arg_buffer[1];
//reading env and args
void* a2739127669 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2738927666 = (decode_clo(env27864))[3];
//not do dummy comment
void* kont27528 = (decode_clo(env27864))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env27864))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont27528;
arg_buffer[3] = a2738927666;
arg_buffer[4] = a2739127669;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27863 = encode_clo(alloc_clo(lam27863_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27867 = arg_buffer[1];
//reading env and args
void* kont27528 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28051 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28051, "1", 10);
void* a2738927666 = encode_mpz(mpzvar28051);
mpz_t* mpzvar28052 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28052, "2", 10);
void* a2739027667 = encode_mpz(mpzvar28052);

//creating new closure instance
void** clo28054 = alloc_clo(lam27863_fptr, 3);

//setting env list
clo28054[1] = equal_u63;
clo28054[2] = kont27528;
clo28054[3] = a2738927666;
void* f2752927668 = encode_clo(clo28054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2752927668;
arg_buffer[3] = x;
arg_buffer[4] = a2739027667;
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
void* _27868 = arg_buffer[1];
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

void* kont2753027670 = prim_car(x);
void* x27671 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2753027670);
arg_buffer[2] = x27671;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2753027670))[0]);
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
void* _27869 = arg_buffer[1];
//reading env and args
void* kont27532 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2739227672 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27532);
arg_buffer[2] = x2739227672;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27532))[0]);
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
void* _27870 = arg_buffer[1];
//reading env and args
void* kont27533 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2739327673 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27533);
arg_buffer[2] = x2739327673;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27533))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam27873_fptr() // lam27873 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27874 = arg_buffer[1];
//reading env and args
void* a2739927683 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env27874))[3];
//not do dummy comment
void* kont27534 = (decode_clo(env27874))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27874))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont27534;
arg_buffer[3] = x;
arg_buffer[4] = a2739927683;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27873 = encode_clo(alloc_clo(lam27873_fptr, 0));

void* lam27875_fptr() // lam27875 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27876 = arg_buffer[1];
//reading env and args
void* a2739727680 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27876))[5];
//not do dummy comment
void* lst = (decode_clo(env27876))[4];
//not do dummy comment
void* x = (decode_clo(env27876))[3];
//not do dummy comment
void* kont27534 = (decode_clo(env27876))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27876))[1];

//if-clause
bool if_guard28055 = is_true(a2739727680);
if(if_guard28055)
{
void* x2739827681 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27534);
arg_buffer[2] = x2739827681;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27534))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28057 = alloc_clo(lam27873_fptr, 3);

//setting env list
clo28057[1] = member_u63;
clo28057[2] = kont27534;
clo28057[3] = x;
void* f2753527682 = encode_clo(clo28057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2753527682;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27875 = encode_clo(alloc_clo(lam27875_fptr, 0));

void* lam27877_fptr() // lam27877 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27878 = arg_buffer[1];
//reading env and args
void* a2739627678 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27878))[6];
//not do dummy comment
void* lst = (decode_clo(env27878))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env27878))[4];
//not do dummy comment
void* x = (decode_clo(env27878))[3];
//not do dummy comment
void* kont27534 = (decode_clo(env27878))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27878))[1];

//creating new closure instance
void** clo28059 = alloc_clo(lam27875_fptr, 5);

//setting env list
clo28059[1] = member_u63;
clo28059[2] = kont27534;
clo28059[3] = x;
clo28059[4] = lst;
clo28059[5] = cdr;
void* f2753627679 = encode_clo(clo28059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2753627679;
arg_buffer[3] = a2739627678;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27877 = encode_clo(alloc_clo(lam27877_fptr, 0));

void* lam27879_fptr() // lam27879 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27880 = arg_buffer[1];
//reading env and args
void* a2739427675 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27880))[7];
//not do dummy comment
void* lst = (decode_clo(env27880))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env27880))[5];
//not do dummy comment
void* x = (decode_clo(env27880))[4];
//not do dummy comment
void* car = (decode_clo(env27880))[3];
//not do dummy comment
void* kont27534 = (decode_clo(env27880))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27880))[1];

//if-clause
bool if_guard28060 = is_true(a2739427675);
if(if_guard28060)
{
void* x2739527676 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27534);
arg_buffer[2] = x2739527676;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27534))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28062 = alloc_clo(lam27877_fptr, 6);

//setting env list
clo28062[1] = member_u63;
clo28062[2] = kont27534;
clo28062[3] = x;
clo28062[4] = equal_u63;
clo28062[5] = lst;
clo28062[6] = cdr;
void* f2753727677 = encode_clo(clo28062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2753727677;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27879 = encode_clo(alloc_clo(lam27879_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27881 = arg_buffer[1];
//reading env and args
void* kont27534 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28064 = alloc_clo(lam27879_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo28064[1] = member_u63;
clo28064[2] = kont27534;
clo28064[3] = car;
clo28064[4] = x;
clo28064[5] = equal_u63;
clo28064[6] = lst;
clo28064[7] = cdr;
void* f2753827674 = encode_clo(clo28064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2753827674;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam27882_fptr() // lam27882 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27883 = arg_buffer[1];
//reading env and args
void* a2740327691 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27539 = (decode_clo(env27883))[4];
//not do dummy comment
void* a2740227689 = (decode_clo(env27883))[3];
//not do dummy comment
void* fun = (decode_clo(env27883))[2];
//not do dummy comment
void* foldl = (decode_clo(env27883))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont27539;
arg_buffer[3] = fun;
arg_buffer[4] = a2740227689;
arg_buffer[5] = a2740327691;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27882 = encode_clo(alloc_clo(lam27882_fptr, 0));

void* lam27884_fptr() // lam27884 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27885 = arg_buffer[1];
//reading env and args
void* a2740227689 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27885))[5];
//not do dummy comment
void* kont27539 = (decode_clo(env27885))[4];
//not do dummy comment
void* lst = (decode_clo(env27885))[3];
//not do dummy comment
void* fun = (decode_clo(env27885))[2];
//not do dummy comment
void* foldl = (decode_clo(env27885))[1];

//creating new closure instance
void** clo28066 = alloc_clo(lam27882_fptr, 4);

//setting env list
clo28066[1] = foldl;
clo28066[2] = fun;
clo28066[3] = a2740227689;
clo28066[4] = kont27539;
void* f2754027690 = encode_clo(clo28066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2754027690;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27884 = encode_clo(alloc_clo(lam27884_fptr, 0));

void* lam27886_fptr() // lam27886 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27887 = arg_buffer[1];
//reading env and args
void* a2740127687 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27887))[6];
//not do dummy comment
void* kont27539 = (decode_clo(env27887))[5];
//not do dummy comment
void* lst = (decode_clo(env27887))[4];
//not do dummy comment
void* fun = (decode_clo(env27887))[3];
//not do dummy comment
void* acc = (decode_clo(env27887))[2];
//not do dummy comment
void* foldl = (decode_clo(env27887))[1];

//creating new closure instance
void** clo28068 = alloc_clo(lam27884_fptr, 5);

//setting env list
clo28068[1] = foldl;
clo28068[2] = fun;
clo28068[3] = lst;
clo28068[4] = kont27539;
clo28068[5] = cdr;
void* f2754127688 = encode_clo(clo28068);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2754127688;
arg_buffer[3] = a2740127687;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27886 = encode_clo(alloc_clo(lam27886_fptr, 0));

void* lam27888_fptr() // lam27888 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27889 = arg_buffer[1];
//reading env and args
void* a2740027685 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27889))[7];
//not do dummy comment
void* kont27539 = (decode_clo(env27889))[6];
//not do dummy comment
void* lst = (decode_clo(env27889))[5];
//not do dummy comment
void* fun = (decode_clo(env27889))[4];
//not do dummy comment
void* acc = (decode_clo(env27889))[3];
//not do dummy comment
void* car = (decode_clo(env27889))[2];
//not do dummy comment
void* foldl = (decode_clo(env27889))[1];

//if-clause
bool if_guard28069 = is_true(a2740027685);
if(if_guard28069)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27539);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27539))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28071 = alloc_clo(lam27886_fptr, 6);

//setting env list
clo28071[1] = foldl;
clo28071[2] = acc;
clo28071[3] = fun;
clo28071[4] = lst;
clo28071[5] = kont27539;
clo28071[6] = cdr;
void* f2754227686 = encode_clo(clo28071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2754227686;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27888 = encode_clo(alloc_clo(lam27888_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27890 = arg_buffer[1];
//reading env and args
void* kont27539 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28073 = alloc_clo(lam27888_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo28073[1] = foldl;
clo28073[2] = car;
clo28073[3] = acc;
clo28073[4] = fun;
clo28073[5] = lst;
clo28073[6] = kont27539;
clo28073[7] = cdr;
void* f2754327684 = encode_clo(clo28073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2754327684;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam27891_fptr() // lam27891 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27892 = arg_buffer[1];
//reading env and args
void* a2740727699 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27892))[3];
//not do dummy comment
void* kont27544 = (decode_clo(env27892))[2];
//not do dummy comment
void* a2740527695 = (decode_clo(env27892))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont27544;
arg_buffer[3] = a2740527695;
arg_buffer[4] = a2740727699;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27891 = encode_clo(alloc_clo(lam27891_fptr, 0));

void* lam27893_fptr() // lam27893 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27894 = arg_buffer[1];
//reading env and args
void* a2740627697 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27894))[5];
//not do dummy comment
void* kont27544 = (decode_clo(env27894))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27894))[3];
//not do dummy comment
void* cons = (decode_clo(env27894))[2];
//not do dummy comment
void* a2740527695 = (decode_clo(env27894))[1];

//creating new closure instance
void** clo28075 = alloc_clo(lam27891_fptr, 3);

//setting env list
clo28075[1] = a2740527695;
clo28075[2] = kont27544;
clo28075[3] = reverse_u45helper;
void* f2754527698 = encode_clo(clo28075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2754527698;
arg_buffer[3] = a2740627697;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27893 = encode_clo(alloc_clo(lam27893_fptr, 0));

void* lam27895_fptr() // lam27895 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27896 = arg_buffer[1];
//reading env and args
void* a2740527695 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27896))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27896))[5];
//not do dummy comment
void* kont27544 = (decode_clo(env27896))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27896))[3];
//not do dummy comment
void* car = (decode_clo(env27896))[2];
//not do dummy comment
void* cons = (decode_clo(env27896))[1];

//creating new closure instance
void** clo28077 = alloc_clo(lam27893_fptr, 5);

//setting env list
clo28077[1] = a2740527695;
clo28077[2] = cons;
clo28077[3] = lst2;
clo28077[4] = kont27544;
clo28077[5] = reverse_u45helper;
void* f2754627696 = encode_clo(clo28077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2754627696;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27895 = encode_clo(alloc_clo(lam27895_fptr, 0));

void* lam27897_fptr() // lam27897 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27898 = arg_buffer[1];
//reading env and args
void* a2740427693 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27898))[7];
//not do dummy comment
void* lst = (decode_clo(env27898))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27898))[5];
//not do dummy comment
void* kont27544 = (decode_clo(env27898))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27898))[3];
//not do dummy comment
void* car = (decode_clo(env27898))[2];
//not do dummy comment
void* cons = (decode_clo(env27898))[1];

//if-clause
bool if_guard28078 = is_true(a2740427693);
if(if_guard28078)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27544);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27544))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28080 = alloc_clo(lam27895_fptr, 6);

//setting env list
clo28080[1] = cons;
clo28080[2] = car;
clo28080[3] = lst2;
clo28080[4] = kont27544;
clo28080[5] = reverse_u45helper;
clo28080[6] = lst;
void* f2754727694 = encode_clo(clo28080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2754727694;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27897 = encode_clo(alloc_clo(lam27897_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27899 = arg_buffer[1];
//reading env and args
void* kont27544 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28082 = alloc_clo(lam27897_fptr, 7);

//setting env list
clo28082[1] = cons;
clo28082[2] = car;
clo28082[3] = lst2;
clo28082[4] = kont27544;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo28082[5] = reverse_u45helper;
clo28082[6] = lst;
clo28082[7] = cdr;
void* f2754827692 = encode_clo(clo28082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2754827692;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam27900_fptr() // lam27900 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27901 = arg_buffer[1];
//reading env and args
void* a2740827701 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27901))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27901))[2];
//not do dummy comment
void* kont27549 = (decode_clo(env27901))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont27549;
arg_buffer[3] = lst;
arg_buffer[4] = a2740827701;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27900 = encode_clo(alloc_clo(lam27900_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27902 = arg_buffer[1];
//reading env and args
void* kont27549 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28084 = alloc_clo(lam27900_fptr, 3);

//setting env list
clo28084[1] = kont27549;
clo28084[2] = reverse_u45helper;
clo28084[3] = lst;
void* f2755027700 = encode_clo(clo28084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2755027700;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam27903_fptr() // lam27903 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27904 = arg_buffer[1];
//reading env and args
void* x2741127706 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27551 = (decode_clo(env27904))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27551);
arg_buffer[2] = x2741127706;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27551))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27903 = encode_clo(alloc_clo(lam27903_fptr, 0));

void* lam27905_fptr() // lam27905 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27906 = arg_buffer[1];
//reading env and args
void* a2741627715 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2741227708 = (decode_clo(env27906))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env27906))[3];
//not do dummy comment
void* a2741427711 = (decode_clo(env27906))[2];
//not do dummy comment
void* kont27551 = (decode_clo(env27906))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont27551;
arg_buffer[3] = a2741227708;
arg_buffer[4] = a2741427711;
arg_buffer[5] = a2741627715;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27905 = encode_clo(alloc_clo(lam27905_fptr, 0));

void* lam27907_fptr() // lam27907 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27908 = arg_buffer[1];
//reading env and args
void* a2741527713 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env27908))[6];
//not do dummy comment
void* a2741227708 = (decode_clo(env27908))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env27908))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27908))[3];
//not do dummy comment
void* a2741427711 = (decode_clo(env27908))[2];
//not do dummy comment
void* kont27551 = (decode_clo(env27908))[1];

//creating new closure instance
void** clo28086 = alloc_clo(lam27905_fptr, 4);

//setting env list
clo28086[1] = kont27551;
clo28086[2] = a2741427711;
clo28086[3] = take_u45helper;
clo28086[4] = a2741227708;
void* f2755327714 = encode_clo(clo28086);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2755327714;
arg_buffer[3] = a2741527713;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27907 = encode_clo(alloc_clo(lam27907_fptr, 0));

void* lam27909_fptr() // lam27909 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27910 = arg_buffer[1];
//reading env and args
void* a2741427711 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27910))[7];
//not do dummy comment
void* car = (decode_clo(env27910))[6];
//not do dummy comment
void* cons = (decode_clo(env27910))[5];
//not do dummy comment
void* kont27551 = (decode_clo(env27910))[4];
//not do dummy comment
void* a2741227708 = (decode_clo(env27910))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env27910))[2];
//not do dummy comment
void* lst2 = (decode_clo(env27910))[1];

//creating new closure instance
void** clo28088 = alloc_clo(lam27907_fptr, 6);

//setting env list
clo28088[1] = kont27551;
clo28088[2] = a2741427711;
clo28088[3] = lst2;
clo28088[4] = take_u45helper;
clo28088[5] = a2741227708;
clo28088[6] = cons;
void* f2755427712 = encode_clo(clo28088);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2755427712;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27909 = encode_clo(alloc_clo(lam27909_fptr, 0));

void* lam27912_fptr() // lam27912 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27913 = arg_buffer[1];
//reading env and args
void* a2741227708 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27913))[8];
//not do dummy comment
void* cons = (decode_clo(env27913))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env27913))[6];
//not do dummy comment
void* lst2 = (decode_clo(env27913))[5];
//not do dummy comment
void* n = (decode_clo(env27913))[4];
//not do dummy comment
void* car = (decode_clo(env27913))[3];
//not do dummy comment
void* kont27551 = (decode_clo(env27913))[2];
//not do dummy comment
void* _u45 = (decode_clo(env27913))[1];
mpz_t* mpzvar28089 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28089, "1", 10);
void* a2741327709 = encode_mpz(mpzvar28089);

//creating new closure instance
void** clo28091 = alloc_clo(lam27909_fptr, 7);

//setting env list
clo28091[1] = lst2;
clo28091[2] = take_u45helper;
clo28091[3] = a2741227708;
clo28091[4] = kont27551;
clo28091[5] = cons;
clo28091[6] = car;
clo28091[7] = lst;
void* f2755527710 = encode_clo(clo28091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2755527710;
arg_buffer[3] = n;
arg_buffer[4] = a2741327709;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27912 = encode_clo(alloc_clo(lam27912_fptr, 0));

void* lam27914_fptr() // lam27914 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27915 = arg_buffer[1];
//reading env and args
void* a2741027704 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27915))[10];
//not do dummy comment
void* lst = (decode_clo(env27915))[9];
//not do dummy comment
void* reverse = (decode_clo(env27915))[8];
//not do dummy comment
void* cons = (decode_clo(env27915))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env27915))[6];
//not do dummy comment
void* lst2 = (decode_clo(env27915))[5];
//not do dummy comment
void* n = (decode_clo(env27915))[4];
//not do dummy comment
void* car = (decode_clo(env27915))[3];
//not do dummy comment
void* kont27551 = (decode_clo(env27915))[2];
//not do dummy comment
void* _u45 = (decode_clo(env27915))[1];

//if-clause
bool if_guard28092 = is_true(a2741027704);
if(if_guard28092)
{

//creating new closure instance
void** clo28094 = alloc_clo(lam27903_fptr, 1);

//setting env list
clo28094[1] = kont27551;
void* f2755227705 = encode_clo(clo28094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2755227705;
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
void** clo28096 = alloc_clo(lam27912_fptr, 8);

//setting env list
clo28096[1] = _u45;
clo28096[2] = kont27551;
clo28096[3] = car;
clo28096[4] = n;
clo28096[5] = lst2;
clo28096[6] = take_u45helper;
clo28096[7] = cons;
clo28096[8] = lst;
void* f2755627707 = encode_clo(clo28096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2755627707;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27914 = encode_clo(alloc_clo(lam27914_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27917 = arg_buffer[1];
//reading env and args
void* kont27551 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar28097 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28097, "0", 10);
void* a2740927702 = encode_mpz(mpzvar28097);

//creating new closure instance
void** clo28099 = alloc_clo(lam27914_fptr, 10);

//setting env list
clo28099[1] = _u45;
clo28099[2] = kont27551;
clo28099[3] = car;
clo28099[4] = n;
clo28099[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo28099[6] = take_u45helper;
clo28099[7] = cons;
clo28099[8] = reverse;
clo28099[9] = lst;
clo28099[10] = cdr;
void* f2755727703 = encode_clo(clo28099);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2755727703;
arg_buffer[3] = n;
arg_buffer[4] = a2740927702;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam27918_fptr() // lam27918 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27919 = arg_buffer[1];
//reading env and args
void* a2741727717 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27919))[4];
//not do dummy comment
void* kont27558 = (decode_clo(env27919))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env27919))[2];
//not do dummy comment
void* n = (decode_clo(env27919))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont27558;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2741727717;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27918 = encode_clo(alloc_clo(lam27918_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27920 = arg_buffer[1];
//reading env and args
void* kont27558 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28101 = alloc_clo(lam27918_fptr, 4);

//setting env list
clo28101[1] = n;
clo28101[2] = take_u45helper;
clo28101[3] = kont27558;
clo28101[4] = lst;
void* f2755927716 = encode_clo(clo28101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2755927716;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam27922_fptr() // lam27922 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27923 = arg_buffer[1];
//reading env and args
void* a2742227725 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27560 = (decode_clo(env27923))[3];
//not do dummy comment
void* a2742027721 = (decode_clo(env27923))[2];
//not do dummy comment
void* _u43 = (decode_clo(env27923))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont27560;
arg_buffer[3] = a2742027721;
arg_buffer[4] = a2742227725;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27922 = encode_clo(alloc_clo(lam27922_fptr, 0));

void* lam27924_fptr() // lam27924 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27925 = arg_buffer[1];
//reading env and args
void* a2742127723 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env27925))[4];
//not do dummy comment
void* kont27560 = (decode_clo(env27925))[3];
//not do dummy comment
void* a2742027721 = (decode_clo(env27925))[2];
//not do dummy comment
void* _u43 = (decode_clo(env27925))[1];

//creating new closure instance
void** clo28103 = alloc_clo(lam27922_fptr, 3);

//setting env list
clo28103[1] = _u43;
clo28103[2] = a2742027721;
clo28103[3] = kont27560;
void* f2756127724 = encode_clo(clo28103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2756127724;
arg_buffer[3] = a2742127723;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27924 = encode_clo(alloc_clo(lam27924_fptr, 0));

void* lam27927_fptr() // lam27927 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27928 = arg_buffer[1];
//reading env and args
void* a2741827719 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27928))[5];
//not do dummy comment
void* lst = (decode_clo(env27928))[4];
//not do dummy comment
void* length = (decode_clo(env27928))[3];
//not do dummy comment
void* kont27560 = (decode_clo(env27928))[2];
//not do dummy comment
void* _u43 = (decode_clo(env27928))[1];

//if-clause
bool if_guard28104 = is_true(a2741827719);
if(if_guard28104)
{
mpz_t* mpzvar28105 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28105, "0", 10);
void* x2741927720 = encode_mpz(mpzvar28105);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27560);
arg_buffer[2] = x2741927720;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27560))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28106 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28106, "1", 10);
void* a2742027721 = encode_mpz(mpzvar28106);

//creating new closure instance
void** clo28108 = alloc_clo(lam27924_fptr, 4);

//setting env list
clo28108[1] = _u43;
clo28108[2] = a2742027721;
clo28108[3] = kont27560;
clo28108[4] = length;
void* f2756227722 = encode_clo(clo28108);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2756227722;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27927 = encode_clo(alloc_clo(lam27927_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27929 = arg_buffer[1];
//reading env and args
void* kont27560 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28110 = alloc_clo(lam27927_fptr, 5);

//setting env list
clo28110[1] = _u43;
clo28110[2] = kont27560;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo28110[3] = length;
clo28110[4] = lst;
clo28110[5] = cdr;
void* f2756327718 = encode_clo(clo28110);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2756327718;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam27930_fptr() // lam27930 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27931 = arg_buffer[1];
//reading env and args
void* x2742427729 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27564 = (decode_clo(env27931))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27564);
arg_buffer[2] = x2742427729;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27564))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27930 = encode_clo(alloc_clo(lam27930_fptr, 0));

void* lam27932_fptr() // lam27932 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27933 = arg_buffer[1];
//reading env and args
void* a2742827737 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2742627733 = (decode_clo(env27933))[3];
//not do dummy comment
void* kont27564 = (decode_clo(env27933))[2];
//not do dummy comment
void* cons = (decode_clo(env27933))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont27564;
arg_buffer[3] = a2742627733;
arg_buffer[4] = a2742827737;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27932 = encode_clo(alloc_clo(lam27932_fptr, 0));

void* lam27934_fptr() // lam27934 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27935 = arg_buffer[1];
//reading env and args
void* a2742727735 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env27935))[5];
//not do dummy comment
void* kont27564 = (decode_clo(env27935))[4];
//not do dummy comment
void* cons = (decode_clo(env27935))[3];
//not do dummy comment
void* map = (decode_clo(env27935))[2];
//not do dummy comment
void* a2742627733 = (decode_clo(env27935))[1];

//creating new closure instance
void** clo28112 = alloc_clo(lam27932_fptr, 3);

//setting env list
clo28112[1] = cons;
clo28112[2] = kont27564;
clo28112[3] = a2742627733;
void* f2756627736 = encode_clo(clo28112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2756627736;
arg_buffer[3] = proc;
arg_buffer[4] = a2742727735;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27934 = encode_clo(alloc_clo(lam27934_fptr, 0));

void* lam27936_fptr() // lam27936 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27937 = arg_buffer[1];
//reading env and args
void* a2742627733 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27937))[6];
//not do dummy comment
void* lst = (decode_clo(env27937))[5];
//not do dummy comment
void* map = (decode_clo(env27937))[4];
//not do dummy comment
void* proc = (decode_clo(env27937))[3];
//not do dummy comment
void* kont27564 = (decode_clo(env27937))[2];
//not do dummy comment
void* cons = (decode_clo(env27937))[1];

//creating new closure instance
void** clo28114 = alloc_clo(lam27934_fptr, 5);

//setting env list
clo28114[1] = a2742627733;
clo28114[2] = map;
clo28114[3] = cons;
clo28114[4] = kont27564;
clo28114[5] = proc;
void* f2756727734 = encode_clo(clo28114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2756727734;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27936 = encode_clo(alloc_clo(lam27936_fptr, 0));

void* lam27938_fptr() // lam27938 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27939 = arg_buffer[1];
//reading env and args
void* a2742527731 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27939))[6];
//not do dummy comment
void* lst = (decode_clo(env27939))[5];
//not do dummy comment
void* map = (decode_clo(env27939))[4];
//not do dummy comment
void* proc = (decode_clo(env27939))[3];
//not do dummy comment
void* kont27564 = (decode_clo(env27939))[2];
//not do dummy comment
void* cons = (decode_clo(env27939))[1];

//creating new closure instance
void** clo28116 = alloc_clo(lam27936_fptr, 6);

//setting env list
clo28116[1] = cons;
clo28116[2] = kont27564;
clo28116[3] = proc;
clo28116[4] = map;
clo28116[5] = lst;
clo28116[6] = cdr;
void* f2756827732 = encode_clo(clo28116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2756827732;
arg_buffer[3] = a2742527731;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27938 = encode_clo(alloc_clo(lam27938_fptr, 0));

void* lam27940_fptr() // lam27940 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27941 = arg_buffer[1];
//reading env and args
void* a2742327727 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27941))[8];
//not do dummy comment
void* map = (decode_clo(env27941))[7];
//not do dummy comment
void* proc = (decode_clo(env27941))[6];
//not do dummy comment
void* kont27564 = (decode_clo(env27941))[5];
//not do dummy comment
void* car = (decode_clo(env27941))[4];
//not do dummy comment
void* cons = (decode_clo(env27941))[3];
//not do dummy comment
void* list = (decode_clo(env27941))[2];
//not do dummy comment
void* cdr = (decode_clo(env27941))[1];

//if-clause
bool if_guard28117 = is_true(a2742327727);
if(if_guard28117)
{

//creating new closure instance
void** clo28119 = alloc_clo(lam27930_fptr, 1);

//setting env list
clo28119[1] = kont27564;
void* f2756527728 = encode_clo(clo28119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2756527728;
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
void** clo28121 = alloc_clo(lam27938_fptr, 6);

//setting env list
clo28121[1] = cons;
clo28121[2] = kont27564;
clo28121[3] = proc;
clo28121[4] = map;
clo28121[5] = lst;
clo28121[6] = cdr;
void* f2756927730 = encode_clo(clo28121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2756927730;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27940 = encode_clo(alloc_clo(lam27940_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27942 = arg_buffer[1];
//reading env and args
void* kont27564 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28123 = alloc_clo(lam27940_fptr, 8);

//setting env list
clo28123[1] = cdr;
clo28123[2] = list;
clo28123[3] = cons;
clo28123[4] = car;
clo28123[5] = kont27564;
clo28123[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo28123[7] = map;
clo28123[8] = lst;
void* f2757027726 = encode_clo(clo28123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2757027726;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam27943_fptr() // lam27943 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27944 = arg_buffer[1];
//reading env and args
void* x2743027741 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27571 = (decode_clo(env27944))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27571);
arg_buffer[2] = x2743027741;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27571))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27943 = encode_clo(alloc_clo(lam27943_fptr, 0));

void* lam27945_fptr() // lam27945 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27946 = arg_buffer[1];
//reading env and args
void* a2743527751 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env27946))[3];
//not do dummy comment
void* a2743327747 = (decode_clo(env27946))[2];
//not do dummy comment
void* kont27571 = (decode_clo(env27946))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont27571;
arg_buffer[3] = a2743327747;
arg_buffer[4] = a2743527751;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27945 = encode_clo(alloc_clo(lam27945_fptr, 0));

void* lam27947_fptr() // lam27947 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27948 = arg_buffer[1];
//reading env and args
void* a2743427749 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env27948))[5];
//not do dummy comment
void* filter = (decode_clo(env27948))[4];
//not do dummy comment
void* cons = (decode_clo(env27948))[3];
//not do dummy comment
void* a2743327747 = (decode_clo(env27948))[2];
//not do dummy comment
void* kont27571 = (decode_clo(env27948))[1];

//creating new closure instance
void** clo28125 = alloc_clo(lam27945_fptr, 3);

//setting env list
clo28125[1] = kont27571;
clo28125[2] = a2743327747;
clo28125[3] = cons;
void* f2757327750 = encode_clo(clo28125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2757327750;
arg_buffer[3] = op;
arg_buffer[4] = a2743427749;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27947 = encode_clo(alloc_clo(lam27947_fptr, 0));

void* lam27949_fptr() // lam27949 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27950 = arg_buffer[1];
//reading env and args
void* a2743327747 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27950))[6];
//not do dummy comment
void* kont27571 = (decode_clo(env27950))[5];
//not do dummy comment
void* lst = (decode_clo(env27950))[4];
//not do dummy comment
void* op = (decode_clo(env27950))[3];
//not do dummy comment
void* filter = (decode_clo(env27950))[2];
//not do dummy comment
void* cons = (decode_clo(env27950))[1];

//creating new closure instance
void** clo28127 = alloc_clo(lam27947_fptr, 5);

//setting env list
clo28127[1] = kont27571;
clo28127[2] = a2743327747;
clo28127[3] = cons;
clo28127[4] = filter;
clo28127[5] = op;
void* f2757427748 = encode_clo(clo28127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2757427748;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27949 = encode_clo(alloc_clo(lam27949_fptr, 0));

void* lam27951_fptr() // lam27951 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27952 = arg_buffer[1];
//reading env and args
void* a2743627753 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27571 = (decode_clo(env27952))[3];
//not do dummy comment
void* op = (decode_clo(env27952))[2];
//not do dummy comment
void* filter = (decode_clo(env27952))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont27571;
arg_buffer[3] = op;
arg_buffer[4] = a2743627753;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27951 = encode_clo(alloc_clo(lam27951_fptr, 0));

void* lam27953_fptr() // lam27953 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27954 = arg_buffer[1];
//reading env and args
void* a2743227745 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27954))[7];
//not do dummy comment
void* kont27571 = (decode_clo(env27954))[6];
//not do dummy comment
void* lst = (decode_clo(env27954))[5];
//not do dummy comment
void* op = (decode_clo(env27954))[4];
//not do dummy comment
void* cons = (decode_clo(env27954))[3];
//not do dummy comment
void* filter = (decode_clo(env27954))[2];
//not do dummy comment
void* car = (decode_clo(env27954))[1];

//if-clause
bool if_guard28128 = is_true(a2743227745);
if(if_guard28128)
{

//creating new closure instance
void** clo28130 = alloc_clo(lam27949_fptr, 6);

//setting env list
clo28130[1] = cons;
clo28130[2] = filter;
clo28130[3] = op;
clo28130[4] = lst;
clo28130[5] = kont27571;
clo28130[6] = cdr;
void* f2757527746 = encode_clo(clo28130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2757527746;
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
void** clo28132 = alloc_clo(lam27951_fptr, 3);

//setting env list
clo28132[1] = filter;
clo28132[2] = op;
clo28132[3] = kont27571;
void* f2757627752 = encode_clo(clo28132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2757627752;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27953 = encode_clo(alloc_clo(lam27953_fptr, 0));

void* lam27955_fptr() // lam27955 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27956 = arg_buffer[1];
//reading env and args
void* a2743127743 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27956))[7];
//not do dummy comment
void* kont27571 = (decode_clo(env27956))[6];
//not do dummy comment
void* lst = (decode_clo(env27956))[5];
//not do dummy comment
void* op = (decode_clo(env27956))[4];
//not do dummy comment
void* cons = (decode_clo(env27956))[3];
//not do dummy comment
void* filter = (decode_clo(env27956))[2];
//not do dummy comment
void* car = (decode_clo(env27956))[1];

//creating new closure instance
void** clo28134 = alloc_clo(lam27953_fptr, 7);

//setting env list
clo28134[1] = car;
clo28134[2] = filter;
clo28134[3] = cons;
clo28134[4] = op;
clo28134[5] = lst;
clo28134[6] = kont27571;
clo28134[7] = cdr;
void* f2757727744 = encode_clo(clo28134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2757727744;
arg_buffer[3] = a2743127743;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27955 = encode_clo(alloc_clo(lam27955_fptr, 0));

void* lam27957_fptr() // lam27957 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27958 = arg_buffer[1];
//reading env and args
void* a2742927739 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27571 = (decode_clo(env27958))[8];
//not do dummy comment
void* lst = (decode_clo(env27958))[7];
//not do dummy comment
void* op = (decode_clo(env27958))[6];
//not do dummy comment
void* cons = (decode_clo(env27958))[5];
//not do dummy comment
void* list = (decode_clo(env27958))[4];
//not do dummy comment
void* cdr = (decode_clo(env27958))[3];
//not do dummy comment
void* filter = (decode_clo(env27958))[2];
//not do dummy comment
void* car = (decode_clo(env27958))[1];

//if-clause
bool if_guard28135 = is_true(a2742927739);
if(if_guard28135)
{

//creating new closure instance
void** clo28137 = alloc_clo(lam27943_fptr, 1);

//setting env list
clo28137[1] = kont27571;
void* f2757227740 = encode_clo(clo28137);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2757227740;
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
void** clo28139 = alloc_clo(lam27955_fptr, 7);

//setting env list
clo28139[1] = car;
clo28139[2] = filter;
clo28139[3] = cons;
clo28139[4] = op;
clo28139[5] = lst;
clo28139[6] = kont27571;
clo28139[7] = cdr;
void* f2757827742 = encode_clo(clo28139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2757827742;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27957 = encode_clo(alloc_clo(lam27957_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27959 = arg_buffer[1];
//reading env and args
void* kont27571 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28141 = alloc_clo(lam27957_fptr, 8);

//setting env list
clo28141[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo28141[2] = filter;
clo28141[3] = cdr;
clo28141[4] = list;
clo28141[5] = cons;
clo28141[6] = op;
clo28141[7] = lst;
clo28141[8] = kont27571;
void* f2757927738 = encode_clo(clo28141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2757927738;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam27960_fptr() // lam27960 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27961 = arg_buffer[1];
//reading env and args
void* a2744127761 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env27961))[3];
//not do dummy comment
void* kont27580 = (decode_clo(env27961))[2];
//not do dummy comment
void* a2743927758 = (decode_clo(env27961))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont27580;
arg_buffer[3] = a2743927758;
arg_buffer[4] = a2744127761;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27960 = encode_clo(alloc_clo(lam27960_fptr, 0));

void* lam27963_fptr() // lam27963 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27964 = arg_buffer[1];
//reading env and args
void* a2743927758 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env27964))[4];
//not do dummy comment
void* kont27580 = (decode_clo(env27964))[3];
//not do dummy comment
void* n = (decode_clo(env27964))[2];
//not do dummy comment
void* _u45 = (decode_clo(env27964))[1];
mpz_t* mpzvar28142 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28142, "1", 10);
void* a2744027759 = encode_mpz(mpzvar28142);

//creating new closure instance
void** clo28144 = alloc_clo(lam27960_fptr, 3);

//setting env list
clo28144[1] = a2743927758;
clo28144[2] = kont27580;
clo28144[3] = drop;
void* f2758127760 = encode_clo(clo28144);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2758127760;
arg_buffer[3] = n;
arg_buffer[4] = a2744027759;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27963 = encode_clo(alloc_clo(lam27963_fptr, 0));

void* lam27965_fptr() // lam27965 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27966 = arg_buffer[1];
//reading env and args
void* a2743827756 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27966))[6];
//not do dummy comment
void* kont27580 = (decode_clo(env27966))[5];
//not do dummy comment
void* n = (decode_clo(env27966))[4];
//not do dummy comment
void* _u45 = (decode_clo(env27966))[3];
//not do dummy comment
void* lst = (decode_clo(env27966))[2];
//not do dummy comment
void* drop = (decode_clo(env27966))[1];

//if-clause
bool if_guard28145 = is_true(a2743827756);
if(if_guard28145)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27580);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27580))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28147 = alloc_clo(lam27963_fptr, 4);

//setting env list
clo28147[1] = _u45;
clo28147[2] = n;
clo28147[3] = kont27580;
clo28147[4] = drop;
void* f2758227757 = encode_clo(clo28147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2758227757;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27965 = encode_clo(alloc_clo(lam27965_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27968 = arg_buffer[1];
//reading env and args
void* kont27580 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar28148 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28148, "0", 10);
void* a2743727754 = encode_mpz(mpzvar28148);

//creating new closure instance
void** clo28150 = alloc_clo(lam27965_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo28150[1] = drop;
clo28150[2] = lst;
clo28150[3] = _u45;
clo28150[4] = n;
clo28150[5] = kont27580;
clo28150[6] = cdr;
void* f2758327755 = encode_clo(clo28150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2758327755;
arg_buffer[3] = n;
arg_buffer[4] = a2743727754;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam27969_fptr() // lam27969 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27970 = arg_buffer[1];
//reading env and args
void* a2744527769 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27584 = (decode_clo(env27970))[3];
//not do dummy comment
void* a2744327765 = (decode_clo(env27970))[2];
//not do dummy comment
void* proc = (decode_clo(env27970))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont27584;
arg_buffer[3] = a2744327765;
arg_buffer[4] = a2744527769;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27969 = encode_clo(alloc_clo(lam27969_fptr, 0));

void* lam27971_fptr() // lam27971 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27972 = arg_buffer[1];
//reading env and args
void* a2744427767 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27584 = (decode_clo(env27972))[5];
//not do dummy comment
void* foldr = (decode_clo(env27972))[4];
//not do dummy comment
void* a2744327765 = (decode_clo(env27972))[3];
//not do dummy comment
void* proc = (decode_clo(env27972))[2];
//not do dummy comment
void* acc = (decode_clo(env27972))[1];

//creating new closure instance
void** clo28152 = alloc_clo(lam27969_fptr, 3);

//setting env list
clo28152[1] = proc;
clo28152[2] = a2744327765;
clo28152[3] = kont27584;
void* f2758527768 = encode_clo(clo28152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2758527768;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2744427767;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27971 = encode_clo(alloc_clo(lam27971_fptr, 0));

void* lam27973_fptr() // lam27973 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27974 = arg_buffer[1];
//reading env and args
void* a2744327765 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27584 = (decode_clo(env27974))[6];
//not do dummy comment
void* cdr = (decode_clo(env27974))[5];
//not do dummy comment
void* foldr = (decode_clo(env27974))[4];
//not do dummy comment
void* lst = (decode_clo(env27974))[3];
//not do dummy comment
void* proc = (decode_clo(env27974))[2];
//not do dummy comment
void* acc = (decode_clo(env27974))[1];

//creating new closure instance
void** clo28154 = alloc_clo(lam27971_fptr, 5);

//setting env list
clo28154[1] = acc;
clo28154[2] = proc;
clo28154[3] = a2744327765;
clo28154[4] = foldr;
clo28154[5] = kont27584;
void* f2758627766 = encode_clo(clo28154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2758627766;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27973 = encode_clo(alloc_clo(lam27973_fptr, 0));

void* lam27975_fptr() // lam27975 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27976 = arg_buffer[1];
//reading env and args
void* a2744227763 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env27976))[7];
//not do dummy comment
void* kont27584 = (decode_clo(env27976))[6];
//not do dummy comment
void* cdr = (decode_clo(env27976))[5];
//not do dummy comment
void* foldr = (decode_clo(env27976))[4];
//not do dummy comment
void* lst = (decode_clo(env27976))[3];
//not do dummy comment
void* proc = (decode_clo(env27976))[2];
//not do dummy comment
void* acc = (decode_clo(env27976))[1];

//if-clause
bool if_guard28155 = is_true(a2744227763);
if(if_guard28155)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27584);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27584))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28157 = alloc_clo(lam27973_fptr, 6);

//setting env list
clo28157[1] = acc;
clo28157[2] = proc;
clo28157[3] = lst;
clo28157[4] = foldr;
clo28157[5] = cdr;
clo28157[6] = kont27584;
void* f2758727764 = encode_clo(clo28157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2758727764;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27975 = encode_clo(alloc_clo(lam27975_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27977 = arg_buffer[1];
//reading env and args
void* kont27584 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28159 = alloc_clo(lam27975_fptr, 7);

//setting env list
clo28159[1] = acc;
clo28159[2] = proc;
clo28159[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo28159[4] = foldr;
clo28159[5] = cdr;
clo28159[6] = kont27584;
clo28159[7] = car;
void* f2758827762 = encode_clo(clo28159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2758827762;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam27978_fptr() // lam27978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27979 = arg_buffer[1];
//reading env and args
void* a2744927777 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27589 = (decode_clo(env27979))[3];
//not do dummy comment
void* a2744727773 = (decode_clo(env27979))[2];
//not do dummy comment
void* cons = (decode_clo(env27979))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont27589;
arg_buffer[3] = a2744727773;
arg_buffer[4] = a2744927777;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27978 = encode_clo(alloc_clo(lam27978_fptr, 0));

void* lam27980_fptr() // lam27980 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27981 = arg_buffer[1];
//reading env and args
void* a2744827775 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27589 = (decode_clo(env27981))[5];
//not do dummy comment
void* append = (decode_clo(env27981))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27981))[3];
//not do dummy comment
void* a2744727773 = (decode_clo(env27981))[2];
//not do dummy comment
void* cons = (decode_clo(env27981))[1];

//creating new closure instance
void** clo28161 = alloc_clo(lam27978_fptr, 3);

//setting env list
clo28161[1] = cons;
clo28161[2] = a2744727773;
clo28161[3] = kont27589;
void* f2759027776 = encode_clo(clo28161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2759027776;
arg_buffer[3] = a2744827775;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27980 = encode_clo(alloc_clo(lam27980_fptr, 0));

void* lam27982_fptr() // lam27982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27983 = arg_buffer[1];
//reading env and args
void* a2744727773 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27983))[6];
//not do dummy comment
void* kont27589 = (decode_clo(env27983))[5];
//not do dummy comment
void* append = (decode_clo(env27983))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27983))[3];
//not do dummy comment
void* lst1 = (decode_clo(env27983))[2];
//not do dummy comment
void* cons = (decode_clo(env27983))[1];

//creating new closure instance
void** clo28163 = alloc_clo(lam27980_fptr, 5);

//setting env list
clo28163[1] = cons;
clo28163[2] = a2744727773;
clo28163[3] = lst2;
clo28163[4] = append;
clo28163[5] = kont27589;
void* f2759127774 = encode_clo(clo28163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2759127774;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27982 = encode_clo(alloc_clo(lam27982_fptr, 0));

void* lam27984_fptr() // lam27984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27985 = arg_buffer[1];
//reading env and args
void* a2744627771 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27985))[7];
//not do dummy comment
void* kont27589 = (decode_clo(env27985))[6];
//not do dummy comment
void* append = (decode_clo(env27985))[5];
//not do dummy comment
void* lst2 = (decode_clo(env27985))[4];
//not do dummy comment
void* cons = (decode_clo(env27985))[3];
//not do dummy comment
void* lst1 = (decode_clo(env27985))[2];
//not do dummy comment
void* car = (decode_clo(env27985))[1];

//if-clause
bool if_guard28164 = is_true(a2744627771);
if(if_guard28164)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27589);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27589))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28166 = alloc_clo(lam27982_fptr, 6);

//setting env list
clo28166[1] = cons;
clo28166[2] = lst1;
clo28166[3] = lst2;
clo28166[4] = append;
clo28166[5] = kont27589;
clo28166[6] = cdr;
void* f2759227772 = encode_clo(clo28166);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2759227772;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27984 = encode_clo(alloc_clo(lam27984_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27986 = arg_buffer[1];
//reading env and args
void* kont27589 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28168 = alloc_clo(lam27984_fptr, 7);

//setting env list
clo28168[1] = car;
clo28168[2] = lst1;
clo28168[3] = cons;
clo28168[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo28168[5] = append;
clo28168[6] = kont27589;
clo28168[7] = cdr;
void* f2759327770 = encode_clo(clo28168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2759327770;
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
void* _27987 = arg_buffer[1];
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

void* kont2759427778 = prim_car(lst);
void* lst27779 = prim_cdr(lst);
void* x2745027780 = apply_prim_hash(lst27779);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2759427778);
arg_buffer[2] = x2745027780;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2759427778))[0]);
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
void* _27988 = arg_buffer[1];
//reading env and args
void* kont27596 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2745127781 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27596);
arg_buffer[2] = x2745127781;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27596))[0]);
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
void* _27989 = arg_buffer[1];
//reading env and args
void* kont27597 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2745227782 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27597);
arg_buffer[2] = x2745227782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27597))[0]);
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
void* _27990 = arg_buffer[1];
//reading env and args
void* kont27598 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2745327783 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27598);
arg_buffer[2] = x2745327783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27598))[0]);
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
void* _27991 = arg_buffer[1];
//reading env and args
void* kont27599 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2745427784 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27599);
arg_buffer[2] = x2745427784;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27599))[0]);
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
void* _27992 = arg_buffer[1];
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

void* kont2760027785 = prim_car(lst);
void* lst27786 = prim_cdr(lst);
void* x2745527787 = apply_prim_set(lst27786);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2760027785);
arg_buffer[2] = x2745527787;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2760027785))[0]);
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
void* _27993 = arg_buffer[1];
//reading env and args
void* kont27602 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2745627788 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27602);
arg_buffer[2] = x2745627788;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27602))[0]);
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
void* _27994 = arg_buffer[1];
//reading env and args
void* kont27603 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2745727789 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27603);
arg_buffer[2] = x2745727789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27603))[0]);
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
void* _27995 = arg_buffer[1];
//reading env and args
void* kont27604 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2745827790 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27604);
arg_buffer[2] = x2745827790;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27604))[0]);
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
void* _27996 = arg_buffer[1];
//reading env and args
void* kont27605 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2745927791 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27605);
arg_buffer[2] = x2745927791;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27605))[0]);
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
void* _27997 = arg_buffer[1];
//reading env and args
void* kont27606 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2746027792 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27606);
arg_buffer[2] = x2746027792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27606))[0]);
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
void* _27998 = arg_buffer[1];
//reading env and args
void* kont27607 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2746127793 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27607);
arg_buffer[2] = x2746127793;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27607))[0]);
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
void* _27999 = arg_buffer[1];
//reading env and args
void* kont27608 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2746227794 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27608);
arg_buffer[2] = x2746227794;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27608))[0]);
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
void* _28000 = arg_buffer[1];
//reading env and args
void* kont27609 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2746327795 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27609);
arg_buffer[2] = x2746327795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27609))[0]);
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
void* _28001 = arg_buffer[1];
//reading env and args
void* kont27610 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2746427796 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27610);
arg_buffer[2] = x2746427796;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27610))[0]);
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
void* _28002 = arg_buffer[1];
//reading env and args
void* kont27611 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2746527797 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27611);
arg_buffer[2] = x2746527797;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27611))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam28005_fptr() // lam28005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28006 = arg_buffer[1];
//reading env and args
void* a2748727823 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27612 = (decode_clo(env28006))[3];
//not do dummy comment
void* append = (decode_clo(env28006))[2];
//not do dummy comment
void* a2748127816 = (decode_clo(env28006))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = kont27612;
arg_buffer[3] = a2748127816;
arg_buffer[4] = a2748727823;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28005 = encode_clo(alloc_clo(lam28005_fptr, 0));

void* lam28012_fptr() // lam28012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28013 = arg_buffer[1];
//reading env and args
void* a2748127816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env28013))[3];
//not do dummy comment
void* append = (decode_clo(env28013))[2];
//not do dummy comment
void* kont27612 = (decode_clo(env28013))[1];
mpz_t* mpzvar28169 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28169, "234", 10);
void* a2748227817 = encode_mpz(mpzvar28169);
mpz_t* mpzvar28170 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28170, "12212", 10);
void* a2748327818 = encode_mpz(mpzvar28170);
mpz_t* mpzvar28171 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28171, "332", 10);
void* a2748427819 = encode_mpz(mpzvar28171);
mpz_t* mpzvar28172 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28172, "12", 10);
void* a2748527820 = encode_mpz(mpzvar28172);
mpz_t* mpzvar28173 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28173, "2", 10);
void* a2748627821 = encode_mpz(mpzvar28173);

//creating new closure instance
void** clo28175 = alloc_clo(lam28005_fptr, 3);

//setting env list
clo28175[1] = a2748127816;
clo28175[2] = append;
clo28175[3] = kont27612;
void* f2761327822 = encode_clo(clo28175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2761327822;
arg_buffer[3] = a2748227817;
arg_buffer[4] = a2748327818;
arg_buffer[5] = a2748427819;
arg_buffer[6] = a2748527820;
arg_buffer[7] = a2748627821;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28012 = encode_clo(alloc_clo(lam28012_fptr, 0));

void* lam28020_fptr() // lam28020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28021 = arg_buffer[1];
//reading env and args
void* a2749627835 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2749327831 = (decode_clo(env28021))[3];
//not do dummy comment
void* append = (decode_clo(env28021))[2];
//not do dummy comment
void* kont27612 = (decode_clo(env28021))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = kont27612;
arg_buffer[3] = a2749327831;
arg_buffer[4] = a2749627835;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28020 = encode_clo(alloc_clo(lam28020_fptr, 0));

void* lam28024_fptr() // lam28024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28025 = arg_buffer[1];
//reading env and args
void* a2749327831 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env28025))[3];
//not do dummy comment
void* append = (decode_clo(env28025))[2];
//not do dummy comment
void* kont27612 = (decode_clo(env28025))[1];
mpz_t* mpzvar28176 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28176, "0", 10);
void* a2749427832 = encode_mpz(mpzvar28176);
mpz_t* mpzvar28177 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28177, "1", 10);
void* a2749527833 = encode_mpz(mpzvar28177);

//creating new closure instance
void** clo28179 = alloc_clo(lam28020_fptr, 3);

//setting env list
clo28179[1] = kont27612;
clo28179[2] = append;
clo28179[3] = a2749327831;
void* f2761527834 = encode_clo(clo28179);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2761527834;
arg_buffer[3] = a2749427832;
arg_buffer[4] = a2749527833;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28024 = encode_clo(alloc_clo(lam28024_fptr, 0));

void* lam28027_fptr() // lam28027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28028 = arg_buffer[1];
//reading env and args
void* a2748927826 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env28028))[4];
//not do dummy comment
void* kont27612 = (decode_clo(env28028))[3];
//not do dummy comment
void* append = (decode_clo(env28028))[2];
//not do dummy comment
void* _u42 = (decode_clo(env28028))[1];

//if-clause
bool if_guard28180 = is_true(a2748927826);
if(if_guard28180)
{
mpz_t* mpzvar28181 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28181, "10", 10);
void* a2749027827 = encode_mpz(mpzvar28181);
mpz_t* mpzvar28182 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28182, "2", 10);
void* a2749127828 = encode_mpz(mpzvar28182);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont27612;
arg_buffer[3] = a2749027827;
arg_buffer[4] = a2749127828;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28183 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28183, "0", 10);
void* a2749227829 = encode_mpz(mpzvar28183);

//creating new closure instance
void** clo28185 = alloc_clo(lam28024_fptr, 3);

//setting env list
clo28185[1] = kont27612;
clo28185[2] = append;
clo28185[3] = list;
void* f2761627830 = encode_clo(clo28185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2761627830;
arg_buffer[3] = a2749227829;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28027 = encode_clo(alloc_clo(lam28027_fptr, 0));

void* lam28030_fptr() // lam28030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28031 = arg_buffer[1];
//reading env and args
void* a2747627810 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env28031))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env28031))[4];
//not do dummy comment
void* kont27612 = (decode_clo(env28031))[3];
//not do dummy comment
void* append = (decode_clo(env28031))[2];
//not do dummy comment
void* _u42 = (decode_clo(env28031))[1];

//if-clause
bool if_guard28186 = is_true(a2747627810);
if(if_guard28186)
{
mpz_t* mpzvar28187 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28187, "1", 10);
void* a2747727811 = encode_mpz(mpzvar28187);
mpz_t* mpzvar28188 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28188, "2", 10);
void* a2747827812 = encode_mpz(mpzvar28188);
mpz_t* mpzvar28189 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28189, "3", 10);
void* a2747927813 = encode_mpz(mpzvar28189);
mpz_t* mpzvar28190 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28190, "4", 10);
void* a2748027814 = encode_mpz(mpzvar28190);

//creating new closure instance
void** clo28192 = alloc_clo(lam28012_fptr, 3);

//setting env list
clo28192[1] = kont27612;
clo28192[2] = append;
clo28192[3] = list;
void* f2761427815 = encode_clo(clo28192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2761427815;
arg_buffer[3] = a2747727811;
arg_buffer[4] = a2747827812;
arg_buffer[5] = a2747927813;
arg_buffer[6] = a2748027814;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28193 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28193, "3", 10);
void* a2748827824 = encode_mpz(mpzvar28193);

//creating new closure instance
void** clo28195 = alloc_clo(lam28027_fptr, 4);

//setting env list
clo28195[1] = _u42;
clo28195[2] = append;
clo28195[3] = kont27612;
clo28195[4] = list;
void* f2761727825 = encode_clo(clo28195);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f2761727825;
arg_buffer[3] = a2748827824;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28030 = encode_clo(alloc_clo(lam28030_fptr, 0));

void* lam28032_fptr() // lam28032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28033 = arg_buffer[1];
//reading env and args
void* a2747327808 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env28033))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env28033))[4];
//not do dummy comment
void* kont27612 = (decode_clo(env28033))[3];
//not do dummy comment
void* append = (decode_clo(env28033))[2];
//not do dummy comment
void* _u42 = (decode_clo(env28033))[1];

//creating new closure instance
void** clo28197 = alloc_clo(lam28030_fptr, 5);

//setting env list
clo28197[1] = _u42;
clo28197[2] = append;
clo28197[3] = kont27612;
clo28197[4] = even_u63;
clo28197[5] = list;
void* f2761827809 = encode_clo(clo28197);



//if-clause
bool if_guard28198 = is_true(a2747327808);
if(if_guard28198)
{
void* x2747427836 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f2761827809);
arg_buffer[2] = x2747427836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f2761827809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x2747527837 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f2761827809);
arg_buffer[2] = x2747527837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f2761827809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28032 = encode_clo(alloc_clo(lam28032_fptr, 0));

void* lam28034_fptr() // lam28034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28035 = arg_buffer[1];
//reading env and args
void* a2747227806 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env28035))[7];
//not do dummy comment
void* even_u63 = (decode_clo(env28035))[6];
//not do dummy comment
void* a2746927802 = (decode_clo(env28035))[5];
//not do dummy comment
void* kont27612 = (decode_clo(env28035))[4];
//not do dummy comment
void* append = (decode_clo(env28035))[3];
//not do dummy comment
void* _u42 = (decode_clo(env28035))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env28035))[1];

//creating new closure instance
void** clo28200 = alloc_clo(lam28032_fptr, 5);

//setting env list
clo28200[1] = _u42;
clo28200[2] = append;
clo28200[3] = kont27612;
clo28200[4] = even_u63;
clo28200[5] = list;
void* f2761927807 = encode_clo(clo28200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2761927807;
arg_buffer[3] = a2746927802;
arg_buffer[4] = a2747227806;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28034 = encode_clo(alloc_clo(lam28034_fptr, 0));

void* lam28038_fptr() // lam28038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28039 = arg_buffer[1];
//reading env and args
void* a2746927802 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env28039))[7];
//not do dummy comment
void* even_u63 = (decode_clo(env28039))[6];
//not do dummy comment
void* kont27612 = (decode_clo(env28039))[5];
//not do dummy comment
void* _u45 = (decode_clo(env28039))[4];
//not do dummy comment
void* append = (decode_clo(env28039))[3];
//not do dummy comment
void* _u42 = (decode_clo(env28039))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env28039))[1];
mpz_t* mpzvar28201 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28201, "10", 10);
void* a2747027803 = encode_mpz(mpzvar28201);
mpz_t* mpzvar28202 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28202, "4", 10);
void* a2747127804 = encode_mpz(mpzvar28202);

//creating new closure instance
void** clo28204 = alloc_clo(lam28034_fptr, 7);

//setting env list
clo28204[1] = equal_u63;
clo28204[2] = _u42;
clo28204[3] = append;
clo28204[4] = kont27612;
clo28204[5] = a2746927802;
clo28204[6] = even_u63;
clo28204[7] = list;
void* f2762027805 = encode_clo(clo28204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2762027805;
arg_buffer[3] = a2747027803;
arg_buffer[4] = a2747127804;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28038 = encode_clo(alloc_clo(lam28038_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28043 = arg_buffer[1];
//reading env and args
void* kont27612 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar28205 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28205, "1", 10);
void* a2746627798 = encode_mpz(mpzvar28205);
mpz_t* mpzvar28206 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28206, "2", 10);
void* a2746727799 = encode_mpz(mpzvar28206);
mpz_t* mpzvar28207 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28207, "3", 10);
void* a2746827800 = encode_mpz(mpzvar28207);

//creating new closure instance
void** clo28209 = alloc_clo(lam28038_fptr, 7);

//setting env list
clo28209[1] = equal_u63;
clo28209[2] = _u42;
clo28209[3] = append;
clo28209[4] = _u45;
clo28209[5] = kont27612;
clo28209[6] = even_u63;
clo28209[7] = list;
void* f2762127801 = encode_clo(clo28209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f2762127801;
arg_buffer[3] = a2746627798;
arg_buffer[4] = a2746727799;
arg_buffer[5] = a2746827800;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam28044_fptr() // lam28044 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28045 = arg_buffer[1];
//reading env and args
void* x2749727839 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27622 = (decode_clo(env28045))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27622);
arg_buffer[2] = x2749727839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27622))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28044 = encode_clo(alloc_clo(lam28044_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28046 = arg_buffer[1];
//reading env and args
void* kont27622 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo28211 = alloc_clo(lam28044_fptr, 1);

//setting env list
clo28211[1] = kont27622;
void* f2762327838 = encode_clo(clo28211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2762327838;
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

