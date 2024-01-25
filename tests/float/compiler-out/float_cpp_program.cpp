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
void* _14949 = arg_buffer[1];
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

void* kont1465414771 = prim_car(lst);
void* lst14772 = prim_cdr(lst);
void* x1455314773 = apply_prim__u43(lst14772);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1465414771);
arg_buffer[2] = x1455314773;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1465414771))[0]);
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
void* _14950 = arg_buffer[1];
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

void* kont1465614774 = prim_car(lst);
void* lst14775 = prim_cdr(lst);
void* x1455414776 = apply_prim_max(lst14775);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1465614774);
arg_buffer[2] = x1455414776;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1465614774))[0]);
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
void* _14951 = arg_buffer[1];
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

void* kont1465814777 = prim_car(lst);
void* lst14778 = prim_cdr(lst);
void* x1455514779 = apply_prim__u45(lst14778);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1465814777);
arg_buffer[2] = x1455514779;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1465814777))[0]);
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
void* _14952 = arg_buffer[1];
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

void* kont1466014780 = prim_car(lst);
void* lst14781 = prim_cdr(lst);
void* x1455614782 = apply_prim__u42(lst14781);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1466014780);
arg_buffer[2] = x1455614782;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1466014780))[0]);
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
void* _14953 = arg_buffer[1];
//reading env and args
void* kont14662 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1455714783 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14662);
arg_buffer[2] = x1455714783;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14662))[0]);
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
void* _14954 = arg_buffer[1];
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

void* kont1466314784 = prim_car(lst);
void* lst14785 = prim_cdr(lst);
void* x1455814786 = apply_prim__u47(lst14785);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1466314784);
arg_buffer[2] = x1455814786;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1466314784))[0]);
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
void* _14955 = arg_buffer[1];
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

void* kont1466514787 = prim_car(lst);
void* lst14788 = prim_cdr(lst);
void* x1455914789 = apply_prim__u61(lst14788);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1466514787);
arg_buffer[2] = x1455914789;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1466514787))[0]);
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
void* _14956 = arg_buffer[1];
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

void* kont1466714790 = prim_car(lst);
void* lst14791 = prim_cdr(lst);
void* x1456014792 = apply_prim__u62(lst14791);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1466714790);
arg_buffer[2] = x1456014792;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1466714790))[0]);
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
void* _14957 = arg_buffer[1];
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

void* kont1466914793 = prim_car(lst);
void* lst14794 = prim_cdr(lst);
void* x1456114795 = apply_prim__u60(lst14794);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1466914793);
arg_buffer[2] = x1456114795;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1466914793))[0]);
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
void* _14958 = arg_buffer[1];
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

void* kont1467114796 = prim_car(lst);
void* lst14797 = prim_cdr(lst);
void* x1456214798 = apply_prim__u60_u61(lst14797);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1467114796);
arg_buffer[2] = x1456214798;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1467114796))[0]);
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
void* _14959 = arg_buffer[1];
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

void* kont1467314799 = prim_car(lst);
void* lst14800 = prim_cdr(lst);
void* x1456314801 = apply_prim__u62_u61(lst14800);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1467314799);
arg_buffer[2] = x1456314801;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1467314799))[0]);
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
void* _14960 = arg_buffer[1];
//reading env and args
void* kont14675 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1456414802 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14675);
arg_buffer[2] = x1456414802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14675))[0]);
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
void* _14961 = arg_buffer[1];
//reading env and args
void* kont14676 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1456514803 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14676);
arg_buffer[2] = x1456514803;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14676))[0]);
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
void* _14962 = arg_buffer[1];
//reading env and args
void* kont14677 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1456614804 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14677);
arg_buffer[2] = x1456614804;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14677))[0]);
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
void* _14963 = arg_buffer[1];
//reading env and args
void* kont14678 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1456714805 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14678);
arg_buffer[2] = x1456714805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14678))[0]);
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
void* _14964 = arg_buffer[1];
//reading env and args
void* kont14679 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1456814806 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14679);
arg_buffer[2] = x1456814806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14679))[0]);
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
void* _14965 = arg_buffer[1];
//reading env and args
void* kont14680 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1456914807 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14680);
arg_buffer[2] = x1456914807;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14680))[0]);
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
void* _14966 = arg_buffer[1];
//reading env and args
void* kont14681 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1457014808 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14681);
arg_buffer[2] = x1457014808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14681))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam14967_fptr() // lam14967 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14968 = arg_buffer[1];
//reading env and args
void* a1457314812 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env14968))[3];
//not do dummy comment
void* a1457114809 = (decode_clo(env14968))[2];
//not do dummy comment
void* kont14682 = (decode_clo(env14968))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont14682;
arg_buffer[3] = a1457114809;
arg_buffer[4] = a1457314812;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14967 = encode_clo(alloc_clo(lam14967_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14971 = arg_buffer[1];
//reading env and args
void* kont14682 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar15118 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15118, "0", 10);
void* a1457114809 = encode_mpz(mpzvar15118);
mpz_t* mpzvar15119 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15119, "2", 10);
void* a1457214810 = encode_mpz(mpzvar15119);

//creating new closure instance
void** clo15121 = alloc_clo(lam14967_fptr, 3);

//setting env list
clo15121[1] = kont14682;
clo15121[2] = a1457114809;
clo15121[3] = equal_u63;
void* f1468314811 = encode_clo(clo15121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1468314811;
arg_buffer[3] = x;
arg_buffer[4] = a1457214810;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam14972_fptr() // lam14972 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14973 = arg_buffer[1];
//reading env and args
void* a1457614816 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1457414813 = (decode_clo(env14973))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env14973))[2];
//not do dummy comment
void* kont14684 = (decode_clo(env14973))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont14684;
arg_buffer[3] = a1457414813;
arg_buffer[4] = a1457614816;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14972 = encode_clo(alloc_clo(lam14972_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14976 = arg_buffer[1];
//reading env and args
void* kont14684 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar15122 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15122, "1", 10);
void* a1457414813 = encode_mpz(mpzvar15122);
mpz_t* mpzvar15123 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15123, "2", 10);
void* a1457514814 = encode_mpz(mpzvar15123);

//creating new closure instance
void** clo15125 = alloc_clo(lam14972_fptr, 3);

//setting env list
clo15125[1] = kont14684;
clo15125[2] = equal_u63;
clo15125[3] = a1457414813;
void* f1468514815 = encode_clo(clo15125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1468514815;
arg_buffer[3] = x;
arg_buffer[4] = a1457514814;
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
void* _14977 = arg_buffer[1];
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

void* kont1468614817 = prim_car(x);
void* x14818 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1468614817);
arg_buffer[2] = x14818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1468614817))[0]);
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
void* _14978 = arg_buffer[1];
//reading env and args
void* kont14688 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1457714819 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14688);
arg_buffer[2] = x1457714819;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14688))[0]);
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
void* _14979 = arg_buffer[1];
//reading env and args
void* kont14689 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1457814820 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14689);
arg_buffer[2] = x1457814820;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14689))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam14982_fptr() // lam14982 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14983 = arg_buffer[1];
//reading env and args
void* a1458414830 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14690 = (decode_clo(env14983))[3];
//not do dummy comment
void* x = (decode_clo(env14983))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env14983))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont14690;
arg_buffer[3] = x;
arg_buffer[4] = a1458414830;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14982 = encode_clo(alloc_clo(lam14982_fptr, 0));

void* lam14984_fptr() // lam14984 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14985 = arg_buffer[1];
//reading env and args
void* a1458214827 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14985))[5];
//not do dummy comment
void* lst = (decode_clo(env14985))[4];
//not do dummy comment
void* kont14690 = (decode_clo(env14985))[3];
//not do dummy comment
void* x = (decode_clo(env14985))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env14985))[1];

//if-clause
bool if_guard15126 = is_true(a1458214827);
if(if_guard15126)
{
void* x1458314828 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14690);
arg_buffer[2] = x1458314828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14690))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo15128 = alloc_clo(lam14982_fptr, 3);

//setting env list
clo15128[1] = member_u63;
clo15128[2] = x;
clo15128[3] = kont14690;
void* f1469114829 = encode_clo(clo15128);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1469114829;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14984 = encode_clo(alloc_clo(lam14984_fptr, 0));

void* lam14986_fptr() // lam14986 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14987 = arg_buffer[1];
//reading env and args
void* a1458114825 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14987))[6];
//not do dummy comment
void* lst = (decode_clo(env14987))[5];
//not do dummy comment
void* kont14690 = (decode_clo(env14987))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env14987))[3];
//not do dummy comment
void* x = (decode_clo(env14987))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env14987))[1];

//creating new closure instance
void** clo15130 = alloc_clo(lam14984_fptr, 5);

//setting env list
clo15130[1] = member_u63;
clo15130[2] = x;
clo15130[3] = kont14690;
clo15130[4] = lst;
clo15130[5] = cdr;
void* f1469214826 = encode_clo(clo15130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1469214826;
arg_buffer[3] = a1458114825;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14986 = encode_clo(alloc_clo(lam14986_fptr, 0));

void* lam14988_fptr() // lam14988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14989 = arg_buffer[1];
//reading env and args
void* a1457914822 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14989))[7];
//not do dummy comment
void* lst = (decode_clo(env14989))[6];
//not do dummy comment
void* kont14690 = (decode_clo(env14989))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env14989))[4];
//not do dummy comment
void* x = (decode_clo(env14989))[3];
//not do dummy comment
void* car = (decode_clo(env14989))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env14989))[1];

//if-clause
bool if_guard15131 = is_true(a1457914822);
if(if_guard15131)
{
void* x1458014823 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14690);
arg_buffer[2] = x1458014823;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14690))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo15133 = alloc_clo(lam14986_fptr, 6);

//setting env list
clo15133[1] = member_u63;
clo15133[2] = x;
clo15133[3] = equal_u63;
clo15133[4] = kont14690;
clo15133[5] = lst;
clo15133[6] = cdr;
void* f1469314824 = encode_clo(clo15133);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1469314824;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14988 = encode_clo(alloc_clo(lam14988_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14990 = arg_buffer[1];
//reading env and args
void* kont14690 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo15135 = alloc_clo(lam14988_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo15135[1] = member_u63;
clo15135[2] = car;
clo15135[3] = x;
clo15135[4] = equal_u63;
clo15135[5] = kont14690;
clo15135[6] = lst;
clo15135[7] = cdr;
void* f1469414821 = encode_clo(clo15135);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1469414821;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam14991_fptr() // lam14991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14992 = arg_buffer[1];
//reading env and args
void* a1458814838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1458714836 = (decode_clo(env14992))[4];
//not do dummy comment
void* foldl = (decode_clo(env14992))[3];
//not do dummy comment
void* kont14695 = (decode_clo(env14992))[2];
//not do dummy comment
void* fun = (decode_clo(env14992))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont14695;
arg_buffer[3] = fun;
arg_buffer[4] = a1458714836;
arg_buffer[5] = a1458814838;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14991 = encode_clo(alloc_clo(lam14991_fptr, 0));

void* lam14993_fptr() // lam14993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14994 = arg_buffer[1];
//reading env and args
void* a1458714836 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14994))[5];
//not do dummy comment
void* lst = (decode_clo(env14994))[4];
//not do dummy comment
void* foldl = (decode_clo(env14994))[3];
//not do dummy comment
void* kont14695 = (decode_clo(env14994))[2];
//not do dummy comment
void* fun = (decode_clo(env14994))[1];

//creating new closure instance
void** clo15137 = alloc_clo(lam14991_fptr, 4);

//setting env list
clo15137[1] = fun;
clo15137[2] = kont14695;
clo15137[3] = foldl;
clo15137[4] = a1458714836;
void* f1469614837 = encode_clo(clo15137);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1469614837;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14993 = encode_clo(alloc_clo(lam14993_fptr, 0));

void* lam14995_fptr() // lam14995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14996 = arg_buffer[1];
//reading env and args
void* a1458614834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14996))[6];
//not do dummy comment
void* lst = (decode_clo(env14996))[5];
//not do dummy comment
void* acc = (decode_clo(env14996))[4];
//not do dummy comment
void* foldl = (decode_clo(env14996))[3];
//not do dummy comment
void* kont14695 = (decode_clo(env14996))[2];
//not do dummy comment
void* fun = (decode_clo(env14996))[1];

//creating new closure instance
void** clo15139 = alloc_clo(lam14993_fptr, 5);

//setting env list
clo15139[1] = fun;
clo15139[2] = kont14695;
clo15139[3] = foldl;
clo15139[4] = lst;
clo15139[5] = cdr;
void* f1469714835 = encode_clo(clo15139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1469714835;
arg_buffer[3] = a1458614834;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14995 = encode_clo(alloc_clo(lam14995_fptr, 0));

void* lam14997_fptr() // lam14997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14998 = arg_buffer[1];
//reading env and args
void* a1458514832 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14998))[7];
//not do dummy comment
void* lst = (decode_clo(env14998))[6];
//not do dummy comment
void* acc = (decode_clo(env14998))[5];
//not do dummy comment
void* car = (decode_clo(env14998))[4];
//not do dummy comment
void* foldl = (decode_clo(env14998))[3];
//not do dummy comment
void* kont14695 = (decode_clo(env14998))[2];
//not do dummy comment
void* fun = (decode_clo(env14998))[1];

//if-clause
bool if_guard15140 = is_true(a1458514832);
if(if_guard15140)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14695);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14695))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo15142 = alloc_clo(lam14995_fptr, 6);

//setting env list
clo15142[1] = fun;
clo15142[2] = kont14695;
clo15142[3] = foldl;
clo15142[4] = acc;
clo15142[5] = lst;
clo15142[6] = cdr;
void* f1469814833 = encode_clo(clo15142);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1469814833;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14997 = encode_clo(alloc_clo(lam14997_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14999 = arg_buffer[1];
//reading env and args
void* kont14695 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo15144 = alloc_clo(lam14997_fptr, 7);

//setting env list
clo15144[1] = fun;
clo15144[2] = kont14695;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo15144[3] = foldl;
clo15144[4] = car;
clo15144[5] = acc;
clo15144[6] = lst;
clo15144[7] = cdr;
void* f1469914831 = encode_clo(clo15144);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1469914831;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam15000_fptr() // lam15000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15001 = arg_buffer[1];
//reading env and args
void* a1459214846 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env15001))[3];
//not do dummy comment
void* a1459014842 = (decode_clo(env15001))[2];
//not do dummy comment
void* kont14700 = (decode_clo(env15001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont14700;
arg_buffer[3] = a1459014842;
arg_buffer[4] = a1459214846;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15000 = encode_clo(alloc_clo(lam15000_fptr, 0));

void* lam15002_fptr() // lam15002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15003 = arg_buffer[1];
//reading env and args
void* a1459114844 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env15003))[5];
//not do dummy comment
void* lst2 = (decode_clo(env15003))[4];
//not do dummy comment
void* a1459014842 = (decode_clo(env15003))[3];
//not do dummy comment
void* cons = (decode_clo(env15003))[2];
//not do dummy comment
void* kont14700 = (decode_clo(env15003))[1];

//creating new closure instance
void** clo15146 = alloc_clo(lam15000_fptr, 3);

//setting env list
clo15146[1] = kont14700;
clo15146[2] = a1459014842;
clo15146[3] = reverse_u45helper;
void* f1470114845 = encode_clo(clo15146);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1470114845;
arg_buffer[3] = a1459114844;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15002 = encode_clo(alloc_clo(lam15002_fptr, 0));

void* lam15004_fptr() // lam15004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15005 = arg_buffer[1];
//reading env and args
void* a1459014842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env15005))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env15005))[5];
//not do dummy comment
void* lst2 = (decode_clo(env15005))[4];
//not do dummy comment
void* car = (decode_clo(env15005))[3];
//not do dummy comment
void* cons = (decode_clo(env15005))[2];
//not do dummy comment
void* kont14700 = (decode_clo(env15005))[1];

//creating new closure instance
void** clo15148 = alloc_clo(lam15002_fptr, 5);

//setting env list
clo15148[1] = kont14700;
clo15148[2] = cons;
clo15148[3] = a1459014842;
clo15148[4] = lst2;
clo15148[5] = reverse_u45helper;
void* f1470214843 = encode_clo(clo15148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1470214843;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15004 = encode_clo(alloc_clo(lam15004_fptr, 0));

void* lam15006_fptr() // lam15006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15007 = arg_buffer[1];
//reading env and args
void* a1458914840 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15007))[7];
//not do dummy comment
void* lst = (decode_clo(env15007))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env15007))[5];
//not do dummy comment
void* lst2 = (decode_clo(env15007))[4];
//not do dummy comment
void* car = (decode_clo(env15007))[3];
//not do dummy comment
void* cons = (decode_clo(env15007))[2];
//not do dummy comment
void* kont14700 = (decode_clo(env15007))[1];

//if-clause
bool if_guard15149 = is_true(a1458914840);
if(if_guard15149)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14700);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14700))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo15151 = alloc_clo(lam15004_fptr, 6);

//setting env list
clo15151[1] = kont14700;
clo15151[2] = cons;
clo15151[3] = car;
clo15151[4] = lst2;
clo15151[5] = reverse_u45helper;
clo15151[6] = lst;
void* f1470314841 = encode_clo(clo15151);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1470314841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15006 = encode_clo(alloc_clo(lam15006_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15008 = arg_buffer[1];
//reading env and args
void* kont14700 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo15153 = alloc_clo(lam15006_fptr, 7);

//setting env list
clo15153[1] = kont14700;
clo15153[2] = cons;
clo15153[3] = car;
clo15153[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo15153[5] = reverse_u45helper;
clo15153[6] = lst;
clo15153[7] = cdr;
void* f1470414839 = encode_clo(clo15153);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1470414839;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam15009_fptr() // lam15009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15010 = arg_buffer[1];
//reading env and args
void* a1459314848 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env15010))[3];
//not do dummy comment
void* kont14705 = (decode_clo(env15010))[2];
//not do dummy comment
void* lst = (decode_clo(env15010))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont14705;
arg_buffer[3] = lst;
arg_buffer[4] = a1459314848;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15009 = encode_clo(alloc_clo(lam15009_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15011 = arg_buffer[1];
//reading env and args
void* kont14705 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo15155 = alloc_clo(lam15009_fptr, 3);

//setting env list
clo15155[1] = lst;
clo15155[2] = kont14705;
clo15155[3] = reverse_u45helper;
void* f1470614847 = encode_clo(clo15155);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1470614847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam15012_fptr() // lam15012 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15013 = arg_buffer[1];
//reading env and args
void* x1459614853 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14707 = (decode_clo(env15013))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14707);
arg_buffer[2] = x1459614853;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14707))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15012 = encode_clo(alloc_clo(lam15012_fptr, 0));

void* lam15014_fptr() // lam15014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15015 = arg_buffer[1];
//reading env and args
void* a1460114862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14707 = (decode_clo(env15015))[4];
//not do dummy comment
void* a1459714855 = (decode_clo(env15015))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env15015))[2];
//not do dummy comment
void* a1459914858 = (decode_clo(env15015))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont14707;
arg_buffer[3] = a1459714855;
arg_buffer[4] = a1459914858;
arg_buffer[5] = a1460114862;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15014 = encode_clo(alloc_clo(lam15014_fptr, 0));

void* lam15016_fptr() // lam15016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15017 = arg_buffer[1];
//reading env and args
void* a1460014860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14707 = (decode_clo(env15017))[6];
//not do dummy comment
void* a1459714855 = (decode_clo(env15017))[5];
//not do dummy comment
void* a1459914858 = (decode_clo(env15017))[4];
//not do dummy comment
void* cons = (decode_clo(env15017))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env15017))[2];
//not do dummy comment
void* lst2 = (decode_clo(env15017))[1];

//creating new closure instance
void** clo15157 = alloc_clo(lam15014_fptr, 4);

//setting env list
clo15157[1] = a1459914858;
clo15157[2] = take_u45helper;
clo15157[3] = a1459714855;
clo15157[4] = kont14707;
void* f1470914861 = encode_clo(clo15157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1470914861;
arg_buffer[3] = a1460014860;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15016 = encode_clo(alloc_clo(lam15016_fptr, 0));

void* lam15018_fptr() // lam15018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15019 = arg_buffer[1];
//reading env and args
void* a1459914858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env15019))[7];
//not do dummy comment
void* kont14707 = (decode_clo(env15019))[6];
//not do dummy comment
void* a1459714855 = (decode_clo(env15019))[5];
//not do dummy comment
void* car = (decode_clo(env15019))[4];
//not do dummy comment
void* cons = (decode_clo(env15019))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env15019))[2];
//not do dummy comment
void* lst2 = (decode_clo(env15019))[1];

//creating new closure instance
void** clo15159 = alloc_clo(lam15016_fptr, 6);

//setting env list
clo15159[1] = lst2;
clo15159[2] = take_u45helper;
clo15159[3] = cons;
clo15159[4] = a1459914858;
clo15159[5] = a1459714855;
clo15159[6] = kont14707;
void* f1471014859 = encode_clo(clo15159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1471014859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15018 = encode_clo(alloc_clo(lam15018_fptr, 0));

void* lam15021_fptr() // lam15021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15022 = arg_buffer[1];
//reading env and args
void* a1459714855 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env15022))[8];
//not do dummy comment
void* kont14707 = (decode_clo(env15022))[7];
//not do dummy comment
void* cons = (decode_clo(env15022))[6];
//not do dummy comment
void* _u45 = (decode_clo(env15022))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env15022))[4];
//not do dummy comment
void* lst2 = (decode_clo(env15022))[3];
//not do dummy comment
void* n = (decode_clo(env15022))[2];
//not do dummy comment
void* car = (decode_clo(env15022))[1];
mpz_t* mpzvar15160 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15160, "1", 10);
void* a1459814856 = encode_mpz(mpzvar15160);

//creating new closure instance
void** clo15162 = alloc_clo(lam15018_fptr, 7);

//setting env list
clo15162[1] = lst2;
clo15162[2] = take_u45helper;
clo15162[3] = cons;
clo15162[4] = car;
clo15162[5] = a1459714855;
clo15162[6] = kont14707;
clo15162[7] = lst;
void* f1471114857 = encode_clo(clo15162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1471114857;
arg_buffer[3] = n;
arg_buffer[4] = a1459814856;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15021 = encode_clo(alloc_clo(lam15021_fptr, 0));

void* lam15023_fptr() // lam15023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15024 = arg_buffer[1];
//reading env and args
void* a1459514851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15024))[10];
//not do dummy comment
void* lst = (decode_clo(env15024))[9];
//not do dummy comment
void* kont14707 = (decode_clo(env15024))[8];
//not do dummy comment
void* reverse = (decode_clo(env15024))[7];
//not do dummy comment
void* cons = (decode_clo(env15024))[6];
//not do dummy comment
void* _u45 = (decode_clo(env15024))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env15024))[4];
//not do dummy comment
void* lst2 = (decode_clo(env15024))[3];
//not do dummy comment
void* n = (decode_clo(env15024))[2];
//not do dummy comment
void* car = (decode_clo(env15024))[1];

//if-clause
bool if_guard15163 = is_true(a1459514851);
if(if_guard15163)
{

//creating new closure instance
void** clo15165 = alloc_clo(lam15012_fptr, 1);

//setting env list
clo15165[1] = kont14707;
void* f1470814852 = encode_clo(clo15165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1470814852;
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
void** clo15167 = alloc_clo(lam15021_fptr, 8);

//setting env list
clo15167[1] = car;
clo15167[2] = n;
clo15167[3] = lst2;
clo15167[4] = take_u45helper;
clo15167[5] = _u45;
clo15167[6] = cons;
clo15167[7] = kont14707;
clo15167[8] = lst;
void* f1471214854 = encode_clo(clo15167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1471214854;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15023 = encode_clo(alloc_clo(lam15023_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15026 = arg_buffer[1];
//reading env and args
void* kont14707 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar15168 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15168, "0", 10);
void* a1459414849 = encode_mpz(mpzvar15168);

//creating new closure instance
void** clo15170 = alloc_clo(lam15023_fptr, 10);

//setting env list
clo15170[1] = car;
clo15170[2] = n;
clo15170[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo15170[4] = take_u45helper;
clo15170[5] = _u45;
clo15170[6] = cons;
clo15170[7] = reverse;
clo15170[8] = kont14707;
clo15170[9] = lst;
clo15170[10] = cdr;
void* f1471314850 = encode_clo(clo15170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1471314850;
arg_buffer[3] = n;
arg_buffer[4] = a1459414849;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam15027_fptr() // lam15027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15028 = arg_buffer[1];
//reading env and args
void* a1460214864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env15028))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env15028))[3];
//not do dummy comment
void* kont14714 = (decode_clo(env15028))[2];
//not do dummy comment
void* n = (decode_clo(env15028))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont14714;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1460214864;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15027 = encode_clo(alloc_clo(lam15027_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15029 = arg_buffer[1];
//reading env and args
void* kont14714 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo15172 = alloc_clo(lam15027_fptr, 4);

//setting env list
clo15172[1] = n;
clo15172[2] = kont14714;
clo15172[3] = take_u45helper;
clo15172[4] = lst;
void* f1471514863 = encode_clo(clo15172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1471514863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam15031_fptr() // lam15031 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15032 = arg_buffer[1];
//reading env and args
void* a1460714872 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1460514868 = (decode_clo(env15032))[3];
//not do dummy comment
void* _u43 = (decode_clo(env15032))[2];
//not do dummy comment
void* kont14716 = (decode_clo(env15032))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont14716;
arg_buffer[3] = a1460514868;
arg_buffer[4] = a1460714872;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15031 = encode_clo(alloc_clo(lam15031_fptr, 0));

void* lam15033_fptr() // lam15033 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15034 = arg_buffer[1];
//reading env and args
void* a1460614870 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env15034))[4];
//not do dummy comment
void* a1460514868 = (decode_clo(env15034))[3];
//not do dummy comment
void* _u43 = (decode_clo(env15034))[2];
//not do dummy comment
void* kont14716 = (decode_clo(env15034))[1];

//creating new closure instance
void** clo15174 = alloc_clo(lam15031_fptr, 3);

//setting env list
clo15174[1] = kont14716;
clo15174[2] = _u43;
clo15174[3] = a1460514868;
void* f1471714871 = encode_clo(clo15174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1471714871;
arg_buffer[3] = a1460614870;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15033 = encode_clo(alloc_clo(lam15033_fptr, 0));

void* lam15036_fptr() // lam15036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15037 = arg_buffer[1];
//reading env and args
void* a1460314866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15037))[5];
//not do dummy comment
void* lst = (decode_clo(env15037))[4];
//not do dummy comment
void* length = (decode_clo(env15037))[3];
//not do dummy comment
void* _u43 = (decode_clo(env15037))[2];
//not do dummy comment
void* kont14716 = (decode_clo(env15037))[1];

//if-clause
bool if_guard15175 = is_true(a1460314866);
if(if_guard15175)
{
mpz_t* mpzvar15176 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15176, "0", 10);
void* x1460414867 = encode_mpz(mpzvar15176);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14716);
arg_buffer[2] = x1460414867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14716))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar15177 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15177, "1", 10);
void* a1460514868 = encode_mpz(mpzvar15177);

//creating new closure instance
void** clo15179 = alloc_clo(lam15033_fptr, 4);

//setting env list
clo15179[1] = kont14716;
clo15179[2] = _u43;
clo15179[3] = a1460514868;
clo15179[4] = length;
void* f1471814869 = encode_clo(clo15179);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1471814869;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15036 = encode_clo(alloc_clo(lam15036_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15038 = arg_buffer[1];
//reading env and args
void* kont14716 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo15181 = alloc_clo(lam15036_fptr, 5);

//setting env list
clo15181[1] = kont14716;
clo15181[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo15181[3] = length;
clo15181[4] = lst;
clo15181[5] = cdr;
void* f1471914865 = encode_clo(clo15181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1471914865;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam15039_fptr() // lam15039 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15040 = arg_buffer[1];
//reading env and args
void* x1460914876 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14720 = (decode_clo(env15040))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14720);
arg_buffer[2] = x1460914876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14720))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15039 = encode_clo(alloc_clo(lam15039_fptr, 0));

void* lam15041_fptr() // lam15041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15042 = arg_buffer[1];
//reading env and args
void* a1461314884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env15042))[3];
//not do dummy comment
void* kont14720 = (decode_clo(env15042))[2];
//not do dummy comment
void* a1461114880 = (decode_clo(env15042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont14720;
arg_buffer[3] = a1461114880;
arg_buffer[4] = a1461314884;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15041 = encode_clo(alloc_clo(lam15041_fptr, 0));

void* lam15043_fptr() // lam15043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15044 = arg_buffer[1];
//reading env and args
void* a1461214882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env15044))[5];
//not do dummy comment
void* proc = (decode_clo(env15044))[4];
//not do dummy comment
void* cons = (decode_clo(env15044))[3];
//not do dummy comment
void* kont14720 = (decode_clo(env15044))[2];
//not do dummy comment
void* a1461114880 = (decode_clo(env15044))[1];

//creating new closure instance
void** clo15183 = alloc_clo(lam15041_fptr, 3);

//setting env list
clo15183[1] = a1461114880;
clo15183[2] = kont14720;
clo15183[3] = cons;
void* f1472214883 = encode_clo(clo15183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1472214883;
arg_buffer[3] = proc;
arg_buffer[4] = a1461214882;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15043 = encode_clo(alloc_clo(lam15043_fptr, 0));

void* lam15045_fptr() // lam15045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15046 = arg_buffer[1];
//reading env and args
void* a1461114880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15046))[6];
//not do dummy comment
void* kont14720 = (decode_clo(env15046))[5];
//not do dummy comment
void* lst = (decode_clo(env15046))[4];
//not do dummy comment
void* map = (decode_clo(env15046))[3];
//not do dummy comment
void* proc = (decode_clo(env15046))[2];
//not do dummy comment
void* cons = (decode_clo(env15046))[1];

//creating new closure instance
void** clo15185 = alloc_clo(lam15043_fptr, 5);

//setting env list
clo15185[1] = a1461114880;
clo15185[2] = kont14720;
clo15185[3] = cons;
clo15185[4] = proc;
clo15185[5] = map;
void* f1472314881 = encode_clo(clo15185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1472314881;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15045 = encode_clo(alloc_clo(lam15045_fptr, 0));

void* lam15047_fptr() // lam15047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15048 = arg_buffer[1];
//reading env and args
void* a1461014878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15048))[6];
//not do dummy comment
void* kont14720 = (decode_clo(env15048))[5];
//not do dummy comment
void* lst = (decode_clo(env15048))[4];
//not do dummy comment
void* map = (decode_clo(env15048))[3];
//not do dummy comment
void* proc = (decode_clo(env15048))[2];
//not do dummy comment
void* cons = (decode_clo(env15048))[1];

//creating new closure instance
void** clo15187 = alloc_clo(lam15045_fptr, 6);

//setting env list
clo15187[1] = cons;
clo15187[2] = proc;
clo15187[3] = map;
clo15187[4] = lst;
clo15187[5] = kont14720;
clo15187[6] = cdr;
void* f1472414879 = encode_clo(clo15187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1472414879;
arg_buffer[3] = a1461014878;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15047 = encode_clo(alloc_clo(lam15047_fptr, 0));

void* lam15049_fptr() // lam15049 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15050 = arg_buffer[1];
//reading env and args
void* a1460814874 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14720 = (decode_clo(env15050))[8];
//not do dummy comment
void* lst = (decode_clo(env15050))[7];
//not do dummy comment
void* map = (decode_clo(env15050))[6];
//not do dummy comment
void* proc = (decode_clo(env15050))[5];
//not do dummy comment
void* car = (decode_clo(env15050))[4];
//not do dummy comment
void* cons = (decode_clo(env15050))[3];
//not do dummy comment
void* list = (decode_clo(env15050))[2];
//not do dummy comment
void* cdr = (decode_clo(env15050))[1];

//if-clause
bool if_guard15188 = is_true(a1460814874);
if(if_guard15188)
{

//creating new closure instance
void** clo15190 = alloc_clo(lam15039_fptr, 1);

//setting env list
clo15190[1] = kont14720;
void* f1472114875 = encode_clo(clo15190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1472114875;
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
void** clo15192 = alloc_clo(lam15047_fptr, 6);

//setting env list
clo15192[1] = cons;
clo15192[2] = proc;
clo15192[3] = map;
clo15192[4] = lst;
clo15192[5] = kont14720;
clo15192[6] = cdr;
void* f1472514877 = encode_clo(clo15192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1472514877;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15049 = encode_clo(alloc_clo(lam15049_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15051 = arg_buffer[1];
//reading env and args
void* kont14720 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo15194 = alloc_clo(lam15049_fptr, 8);

//setting env list
clo15194[1] = cdr;
clo15194[2] = list;
clo15194[3] = cons;
clo15194[4] = car;
clo15194[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo15194[6] = map;
clo15194[7] = lst;
clo15194[8] = kont14720;
void* f1472614873 = encode_clo(clo15194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1472614873;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam15052_fptr() // lam15052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15053 = arg_buffer[1];
//reading env and args
void* x1461514888 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14727 = (decode_clo(env15053))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14727);
arg_buffer[2] = x1461514888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14727))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15052 = encode_clo(alloc_clo(lam15052_fptr, 0));

void* lam15054_fptr() // lam15054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15055 = arg_buffer[1];
//reading env and args
void* a1462014898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1461814894 = (decode_clo(env15055))[3];
//not do dummy comment
void* kont14727 = (decode_clo(env15055))[2];
//not do dummy comment
void* cons = (decode_clo(env15055))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont14727;
arg_buffer[3] = a1461814894;
arg_buffer[4] = a1462014898;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15054 = encode_clo(alloc_clo(lam15054_fptr, 0));

void* lam15056_fptr() // lam15056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15057 = arg_buffer[1];
//reading env and args
void* a1461914896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1461814894 = (decode_clo(env15057))[5];
//not do dummy comment
void* op = (decode_clo(env15057))[4];
//not do dummy comment
void* kont14727 = (decode_clo(env15057))[3];
//not do dummy comment
void* filter = (decode_clo(env15057))[2];
//not do dummy comment
void* cons = (decode_clo(env15057))[1];

//creating new closure instance
void** clo15196 = alloc_clo(lam15054_fptr, 3);

//setting env list
clo15196[1] = cons;
clo15196[2] = kont14727;
clo15196[3] = a1461814894;
void* f1472914897 = encode_clo(clo15196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1472914897;
arg_buffer[3] = op;
arg_buffer[4] = a1461914896;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15056 = encode_clo(alloc_clo(lam15056_fptr, 0));

void* lam15058_fptr() // lam15058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15059 = arg_buffer[1];
//reading env and args
void* a1461814894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15059))[6];
//not do dummy comment
void* lst = (decode_clo(env15059))[5];
//not do dummy comment
void* op = (decode_clo(env15059))[4];
//not do dummy comment
void* kont14727 = (decode_clo(env15059))[3];
//not do dummy comment
void* filter = (decode_clo(env15059))[2];
//not do dummy comment
void* cons = (decode_clo(env15059))[1];

//creating new closure instance
void** clo15198 = alloc_clo(lam15056_fptr, 5);

//setting env list
clo15198[1] = cons;
clo15198[2] = filter;
clo15198[3] = kont14727;
clo15198[4] = op;
clo15198[5] = a1461814894;
void* f1473014895 = encode_clo(clo15198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1473014895;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15058 = encode_clo(alloc_clo(lam15058_fptr, 0));

void* lam15060_fptr() // lam15060 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15061 = arg_buffer[1];
//reading env and args
void* a1462114900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env15061))[3];
//not do dummy comment
void* kont14727 = (decode_clo(env15061))[2];
//not do dummy comment
void* filter = (decode_clo(env15061))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont14727;
arg_buffer[3] = op;
arg_buffer[4] = a1462114900;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15060 = encode_clo(alloc_clo(lam15060_fptr, 0));

void* lam15062_fptr() // lam15062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15063 = arg_buffer[1];
//reading env and args
void* a1461714892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15063))[7];
//not do dummy comment
void* lst = (decode_clo(env15063))[6];
//not do dummy comment
void* op = (decode_clo(env15063))[5];
//not do dummy comment
void* kont14727 = (decode_clo(env15063))[4];
//not do dummy comment
void* cons = (decode_clo(env15063))[3];
//not do dummy comment
void* filter = (decode_clo(env15063))[2];
//not do dummy comment
void* car = (decode_clo(env15063))[1];

//if-clause
bool if_guard15199 = is_true(a1461714892);
if(if_guard15199)
{

//creating new closure instance
void** clo15201 = alloc_clo(lam15058_fptr, 6);

//setting env list
clo15201[1] = cons;
clo15201[2] = filter;
clo15201[3] = kont14727;
clo15201[4] = op;
clo15201[5] = lst;
clo15201[6] = cdr;
void* f1473114893 = encode_clo(clo15201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1473114893;
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
void** clo15203 = alloc_clo(lam15060_fptr, 3);

//setting env list
clo15203[1] = filter;
clo15203[2] = kont14727;
clo15203[3] = op;
void* f1473214899 = encode_clo(clo15203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1473214899;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15062 = encode_clo(alloc_clo(lam15062_fptr, 0));

void* lam15064_fptr() // lam15064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15065 = arg_buffer[1];
//reading env and args
void* a1461614890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15065))[7];
//not do dummy comment
void* lst = (decode_clo(env15065))[6];
//not do dummy comment
void* op = (decode_clo(env15065))[5];
//not do dummy comment
void* kont14727 = (decode_clo(env15065))[4];
//not do dummy comment
void* cons = (decode_clo(env15065))[3];
//not do dummy comment
void* filter = (decode_clo(env15065))[2];
//not do dummy comment
void* car = (decode_clo(env15065))[1];

//creating new closure instance
void** clo15205 = alloc_clo(lam15062_fptr, 7);

//setting env list
clo15205[1] = car;
clo15205[2] = filter;
clo15205[3] = cons;
clo15205[4] = kont14727;
clo15205[5] = op;
clo15205[6] = lst;
clo15205[7] = cdr;
void* f1473314891 = encode_clo(clo15205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1473314891;
arg_buffer[3] = a1461614890;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15064 = encode_clo(alloc_clo(lam15064_fptr, 0));

void* lam15066_fptr() // lam15066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15067 = arg_buffer[1];
//reading env and args
void* a1461414886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env15067))[8];
//not do dummy comment
void* op = (decode_clo(env15067))[7];
//not do dummy comment
void* kont14727 = (decode_clo(env15067))[6];
//not do dummy comment
void* cons = (decode_clo(env15067))[5];
//not do dummy comment
void* list = (decode_clo(env15067))[4];
//not do dummy comment
void* cdr = (decode_clo(env15067))[3];
//not do dummy comment
void* filter = (decode_clo(env15067))[2];
//not do dummy comment
void* car = (decode_clo(env15067))[1];

//if-clause
bool if_guard15206 = is_true(a1461414886);
if(if_guard15206)
{

//creating new closure instance
void** clo15208 = alloc_clo(lam15052_fptr, 1);

//setting env list
clo15208[1] = kont14727;
void* f1472814887 = encode_clo(clo15208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1472814887;
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
void** clo15210 = alloc_clo(lam15064_fptr, 7);

//setting env list
clo15210[1] = car;
clo15210[2] = filter;
clo15210[3] = cons;
clo15210[4] = kont14727;
clo15210[5] = op;
clo15210[6] = lst;
clo15210[7] = cdr;
void* f1473414889 = encode_clo(clo15210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1473414889;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15066 = encode_clo(alloc_clo(lam15066_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15068 = arg_buffer[1];
//reading env and args
void* kont14727 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo15212 = alloc_clo(lam15066_fptr, 8);

//setting env list
clo15212[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo15212[2] = filter;
clo15212[3] = cdr;
clo15212[4] = list;
clo15212[5] = cons;
clo15212[6] = kont14727;
clo15212[7] = op;
clo15212[8] = lst;
void* f1473514885 = encode_clo(clo15212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1473514885;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam15069_fptr() // lam15069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15070 = arg_buffer[1];
//reading env and args
void* a1462614908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14736 = (decode_clo(env15070))[3];
//not do dummy comment
void* drop = (decode_clo(env15070))[2];
//not do dummy comment
void* a1462414905 = (decode_clo(env15070))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont14736;
arg_buffer[3] = a1462414905;
arg_buffer[4] = a1462614908;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15069 = encode_clo(alloc_clo(lam15069_fptr, 0));

void* lam15072_fptr() // lam15072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15073 = arg_buffer[1];
//reading env and args
void* a1462414905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14736 = (decode_clo(env15073))[4];
//not do dummy comment
void* drop = (decode_clo(env15073))[3];
//not do dummy comment
void* n = (decode_clo(env15073))[2];
//not do dummy comment
void* _u45 = (decode_clo(env15073))[1];
mpz_t* mpzvar15213 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15213, "1", 10);
void* a1462514906 = encode_mpz(mpzvar15213);

//creating new closure instance
void** clo15215 = alloc_clo(lam15069_fptr, 3);

//setting env list
clo15215[1] = a1462414905;
clo15215[2] = drop;
clo15215[3] = kont14736;
void* f1473714907 = encode_clo(clo15215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1473714907;
arg_buffer[3] = n;
arg_buffer[4] = a1462514906;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15072 = encode_clo(alloc_clo(lam15072_fptr, 0));

void* lam15074_fptr() // lam15074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15075 = arg_buffer[1];
//reading env and args
void* a1462314903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15075))[6];
//not do dummy comment
void* kont14736 = (decode_clo(env15075))[5];
//not do dummy comment
void* n = (decode_clo(env15075))[4];
//not do dummy comment
void* _u45 = (decode_clo(env15075))[3];
//not do dummy comment
void* lst = (decode_clo(env15075))[2];
//not do dummy comment
void* drop = (decode_clo(env15075))[1];

//if-clause
bool if_guard15216 = is_true(a1462314903);
if(if_guard15216)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14736);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14736))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo15218 = alloc_clo(lam15072_fptr, 4);

//setting env list
clo15218[1] = _u45;
clo15218[2] = n;
clo15218[3] = drop;
clo15218[4] = kont14736;
void* f1473814904 = encode_clo(clo15218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1473814904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15074 = encode_clo(alloc_clo(lam15074_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15077 = arg_buffer[1];
//reading env and args
void* kont14736 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar15219 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar15219, "0", 10);
void* a1462214901 = encode_mpz(mpzvar15219);

//creating new closure instance
void** clo15221 = alloc_clo(lam15074_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo15221[1] = drop;
clo15221[2] = lst;
clo15221[3] = _u45;
clo15221[4] = n;
clo15221[5] = kont14736;
clo15221[6] = cdr;
void* f1473914902 = encode_clo(clo15221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1473914902;
arg_buffer[3] = n;
arg_buffer[4] = a1462214901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam15078_fptr() // lam15078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15079 = arg_buffer[1];
//reading env and args
void* a1463014916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1462814912 = (decode_clo(env15079))[3];
//not do dummy comment
void* kont14740 = (decode_clo(env15079))[2];
//not do dummy comment
void* proc = (decode_clo(env15079))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont14740;
arg_buffer[3] = a1462814912;
arg_buffer[4] = a1463014916;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15078 = encode_clo(alloc_clo(lam15078_fptr, 0));

void* lam15080_fptr() // lam15080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15081 = arg_buffer[1];
//reading env and args
void* a1462914914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1462814912 = (decode_clo(env15081))[5];
//not do dummy comment
void* foldr = (decode_clo(env15081))[4];
//not do dummy comment
void* kont14740 = (decode_clo(env15081))[3];
//not do dummy comment
void* proc = (decode_clo(env15081))[2];
//not do dummy comment
void* acc = (decode_clo(env15081))[1];

//creating new closure instance
void** clo15223 = alloc_clo(lam15078_fptr, 3);

//setting env list
clo15223[1] = proc;
clo15223[2] = kont14740;
clo15223[3] = a1462814912;
void* f1474114915 = encode_clo(clo15223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1474114915;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1462914914;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15080 = encode_clo(alloc_clo(lam15080_fptr, 0));

void* lam15082_fptr() // lam15082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15083 = arg_buffer[1];
//reading env and args
void* a1462814912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15083))[6];
//not do dummy comment
void* kont14740 = (decode_clo(env15083))[5];
//not do dummy comment
void* foldr = (decode_clo(env15083))[4];
//not do dummy comment
void* lst = (decode_clo(env15083))[3];
//not do dummy comment
void* proc = (decode_clo(env15083))[2];
//not do dummy comment
void* acc = (decode_clo(env15083))[1];

//creating new closure instance
void** clo15225 = alloc_clo(lam15080_fptr, 5);

//setting env list
clo15225[1] = acc;
clo15225[2] = proc;
clo15225[3] = kont14740;
clo15225[4] = foldr;
clo15225[5] = a1462814912;
void* f1474214913 = encode_clo(clo15225);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1474214913;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15082 = encode_clo(alloc_clo(lam15082_fptr, 0));

void* lam15084_fptr() // lam15084 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15085 = arg_buffer[1];
//reading env and args
void* a1462714910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15085))[7];
//not do dummy comment
void* kont14740 = (decode_clo(env15085))[6];
//not do dummy comment
void* car = (decode_clo(env15085))[5];
//not do dummy comment
void* foldr = (decode_clo(env15085))[4];
//not do dummy comment
void* lst = (decode_clo(env15085))[3];
//not do dummy comment
void* proc = (decode_clo(env15085))[2];
//not do dummy comment
void* acc = (decode_clo(env15085))[1];

//if-clause
bool if_guard15226 = is_true(a1462714910);
if(if_guard15226)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14740);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14740))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo15228 = alloc_clo(lam15082_fptr, 6);

//setting env list
clo15228[1] = acc;
clo15228[2] = proc;
clo15228[3] = lst;
clo15228[4] = foldr;
clo15228[5] = kont14740;
clo15228[6] = cdr;
void* f1474314911 = encode_clo(clo15228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1474314911;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15084 = encode_clo(alloc_clo(lam15084_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15086 = arg_buffer[1];
//reading env and args
void* kont14740 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo15230 = alloc_clo(lam15084_fptr, 7);

//setting env list
clo15230[1] = acc;
clo15230[2] = proc;
clo15230[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo15230[4] = foldr;
clo15230[5] = car;
clo15230[6] = kont14740;
clo15230[7] = cdr;
void* f1474414909 = encode_clo(clo15230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1474414909;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam15087_fptr() // lam15087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15088 = arg_buffer[1];
//reading env and args
void* a1463414924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1463214920 = (decode_clo(env15088))[3];
//not do dummy comment
void* kont14745 = (decode_clo(env15088))[2];
//not do dummy comment
void* cons = (decode_clo(env15088))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont14745;
arg_buffer[3] = a1463214920;
arg_buffer[4] = a1463414924;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15087 = encode_clo(alloc_clo(lam15087_fptr, 0));

void* lam15089_fptr() // lam15089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15090 = arg_buffer[1];
//reading env and args
void* a1463314922 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env15090))[5];
//not do dummy comment
void* a1463214920 = (decode_clo(env15090))[4];
//not do dummy comment
void* cons = (decode_clo(env15090))[3];
//not do dummy comment
void* kont14745 = (decode_clo(env15090))[2];
//not do dummy comment
void* lst2 = (decode_clo(env15090))[1];

//creating new closure instance
void** clo15232 = alloc_clo(lam15087_fptr, 3);

//setting env list
clo15232[1] = cons;
clo15232[2] = kont14745;
clo15232[3] = a1463214920;
void* f1474614923 = encode_clo(clo15232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1474614923;
arg_buffer[3] = a1463314922;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15089 = encode_clo(alloc_clo(lam15089_fptr, 0));

void* lam15091_fptr() // lam15091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15092 = arg_buffer[1];
//reading env and args
void* a1463214920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15092))[6];
//not do dummy comment
void* append = (decode_clo(env15092))[5];
//not do dummy comment
void* lst1 = (decode_clo(env15092))[4];
//not do dummy comment
void* cons = (decode_clo(env15092))[3];
//not do dummy comment
void* kont14745 = (decode_clo(env15092))[2];
//not do dummy comment
void* lst2 = (decode_clo(env15092))[1];

//creating new closure instance
void** clo15234 = alloc_clo(lam15089_fptr, 5);

//setting env list
clo15234[1] = lst2;
clo15234[2] = kont14745;
clo15234[3] = cons;
clo15234[4] = a1463214920;
clo15234[5] = append;
void* f1474714921 = encode_clo(clo15234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1474714921;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15091 = encode_clo(alloc_clo(lam15091_fptr, 0));

void* lam15093_fptr() // lam15093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15094 = arg_buffer[1];
//reading env and args
void* a1463114918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env15094))[7];
//not do dummy comment
void* append = (decode_clo(env15094))[6];
//not do dummy comment
void* cons = (decode_clo(env15094))[5];
//not do dummy comment
void* kont14745 = (decode_clo(env15094))[4];
//not do dummy comment
void* lst2 = (decode_clo(env15094))[3];
//not do dummy comment
void* lst1 = (decode_clo(env15094))[2];
//not do dummy comment
void* car = (decode_clo(env15094))[1];

//if-clause
bool if_guard15235 = is_true(a1463114918);
if(if_guard15235)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14745);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14745))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo15237 = alloc_clo(lam15091_fptr, 6);

//setting env list
clo15237[1] = lst2;
clo15237[2] = kont14745;
clo15237[3] = cons;
clo15237[4] = lst1;
clo15237[5] = append;
clo15237[6] = cdr;
void* f1474814919 = encode_clo(clo15237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1474814919;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam15093 = encode_clo(alloc_clo(lam15093_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15095 = arg_buffer[1];
//reading env and args
void* kont14745 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo15239 = alloc_clo(lam15093_fptr, 7);

//setting env list
clo15239[1] = car;
clo15239[2] = lst1;
clo15239[3] = lst2;
clo15239[4] = kont14745;
clo15239[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo15239[6] = append;
clo15239[7] = cdr;
void* f1474914917 = encode_clo(clo15239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1474914917;
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
void* _15096 = arg_buffer[1];
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

void* kont1475014925 = prim_car(lst);
void* lst14926 = prim_cdr(lst);
void* x1463514927 = apply_prim_hash(lst14926);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1475014925);
arg_buffer[2] = x1463514927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1475014925))[0]);
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
void* _15097 = arg_buffer[1];
//reading env and args
void* kont14752 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1463614928 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14752);
arg_buffer[2] = x1463614928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14752))[0]);
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
void* _15098 = arg_buffer[1];
//reading env and args
void* kont14753 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1463714929 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14753);
arg_buffer[2] = x1463714929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14753))[0]);
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
void* _15099 = arg_buffer[1];
//reading env and args
void* kont14754 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1463814930 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14754);
arg_buffer[2] = x1463814930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14754))[0]);
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
void* _15100 = arg_buffer[1];
//reading env and args
void* kont14755 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1463914931 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14755);
arg_buffer[2] = x1463914931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14755))[0]);
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
void* _15101 = arg_buffer[1];
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

void* kont1475614932 = prim_car(lst);
void* lst14933 = prim_cdr(lst);
void* x1464014934 = apply_prim_set(lst14933);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1475614932);
arg_buffer[2] = x1464014934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1475614932))[0]);
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
void* _15102 = arg_buffer[1];
//reading env and args
void* kont14758 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1464114935 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14758);
arg_buffer[2] = x1464114935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14758))[0]);
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
void* _15103 = arg_buffer[1];
//reading env and args
void* kont14759 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1464214936 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14759);
arg_buffer[2] = x1464214936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14759))[0]);
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
void* _15104 = arg_buffer[1];
//reading env and args
void* kont14760 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1464314937 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14760);
arg_buffer[2] = x1464314937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14760))[0]);
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
void* _15105 = arg_buffer[1];
//reading env and args
void* kont14761 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1464414938 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14761);
arg_buffer[2] = x1464414938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14761))[0]);
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
void* _15106 = arg_buffer[1];
//reading env and args
void* kont14762 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1464514939 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14762);
arg_buffer[2] = x1464514939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14762))[0]);
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
void* _15107 = arg_buffer[1];
//reading env and args
void* kont14763 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1464614940 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14763);
arg_buffer[2] = x1464614940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14763))[0]);
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
void* _15108 = arg_buffer[1];
//reading env and args
void* kont14764 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x1464714941 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14764);
arg_buffer[2] = x1464714941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14764))[0]);
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
void* _15109 = arg_buffer[1];
//reading env and args
void* kont14765 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x1464814942 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14765);
arg_buffer[2] = x1464814942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14765))[0]);
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
void* _15110 = arg_buffer[1];
//reading env and args
void* kont14766 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x1464914943 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14766);
arg_buffer[2] = x1464914943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14766))[0]);
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
void* _15111 = arg_buffer[1];
//reading env and args
void* kont14767 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1465014944 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14767);
arg_buffer[2] = x1465014944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14767))[0]);
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
void* _15114 = arg_buffer[1];
//reading env and args
void* kont14768 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar15240 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar15240, "3.25", 10);
void* a1465114945 = encode_mpf(mpfvar15240);
mpf_t* mpfvar15241 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar15241, "4.85", 10);
void* a1465214946 = encode_mpf(mpfvar15241);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont14768;
arg_buffer[3] = a1465114945;
arg_buffer[4] = a1465214946;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam15115_fptr() // lam15115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env15116 = arg_buffer[1];
//reading env and args
void* x1465314948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14769 = (decode_clo(env15116))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14769);
arg_buffer[2] = x1465314948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14769))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam15115 = encode_clo(alloc_clo(lam15115_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _15117 = arg_buffer[1];
//reading env and args
void* kont14769 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo15243 = alloc_clo(lam15115_fptr, 1);

//setting env list
clo15243[1] = kont14769;
void* f1477014947 = encode_clo(clo15243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1477014947;
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

