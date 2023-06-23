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
void* _95128 = arg_buffer[1];
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

void* kont9483994947 = prim_car(lst);
void* lst94948 = prim_cdr(lst);
void* x9473994949 = apply_prim__u43(lst94948);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9483994947);
arg_buffer[2] = x9473994949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9483994947))[0]);
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
void* _95129 = arg_buffer[1];
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

void* kont9484194950 = prim_car(lst);
void* lst94951 = prim_cdr(lst);
void* x9474094952 = apply_prim__u45(lst94951);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9484194950);
arg_buffer[2] = x9474094952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9484194950))[0]);
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
void* _95130 = arg_buffer[1];
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

void* kont9484394953 = prim_car(lst);
void* lst94954 = prim_cdr(lst);
void* x9474194955 = apply_prim__u42(lst94954);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9484394953);
arg_buffer[2] = x9474194955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9484394953))[0]);
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
void* _95131 = arg_buffer[1];
//reading env and args
void* kont94845 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9474294956 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94845);
arg_buffer[2] = x9474294956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94845))[0]);
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
void* _95132 = arg_buffer[1];
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

void* kont9484694957 = prim_car(lst);
void* lst94958 = prim_cdr(lst);
void* x9474394959 = apply_prim__u47(lst94958);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9484694957);
arg_buffer[2] = x9474394959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9484694957))[0]);
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
void* _95133 = arg_buffer[1];
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

void* kont9484894960 = prim_car(lst);
void* lst94961 = prim_cdr(lst);
void* x9474494962 = apply_prim__u61(lst94961);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9484894960);
arg_buffer[2] = x9474494962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9484894960))[0]);
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
void* _95134 = arg_buffer[1];
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

void* kont9485094963 = prim_car(lst);
void* lst94964 = prim_cdr(lst);
void* x9474594965 = apply_prim__u62(lst94964);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9485094963);
arg_buffer[2] = x9474594965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9485094963))[0]);
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
void* _95135 = arg_buffer[1];
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

void* kont9485294966 = prim_car(lst);
void* lst94967 = prim_cdr(lst);
void* x9474694968 = apply_prim__u60(lst94967);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9485294966);
arg_buffer[2] = x9474694968;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9485294966))[0]);
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
void* _95136 = arg_buffer[1];
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

void* kont9485494969 = prim_car(lst);
void* lst94970 = prim_cdr(lst);
void* x9474794971 = apply_prim__u60_u61(lst94970);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9485494969);
arg_buffer[2] = x9474794971;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9485494969))[0]);
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
void* _95137 = arg_buffer[1];
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

void* kont9485694972 = prim_car(lst);
void* lst94973 = prim_cdr(lst);
void* x9474894974 = apply_prim__u62_u61(lst94973);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9485694972);
arg_buffer[2] = x9474894974;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9485694972))[0]);
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
void* _95138 = arg_buffer[1];
//reading env and args
void* kont94858 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9474994975 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94858);
arg_buffer[2] = x9474994975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94858))[0]);
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
void* _95139 = arg_buffer[1];
//reading env and args
void* kont94859 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9475094976 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94859);
arg_buffer[2] = x9475094976;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94859))[0]);
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
void* _95140 = arg_buffer[1];
//reading env and args
void* kont94860 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9475194977 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94860);
arg_buffer[2] = x9475194977;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94860))[0]);
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
void* _95141 = arg_buffer[1];
//reading env and args
void* kont94861 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9475294978 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94861);
arg_buffer[2] = x9475294978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94861))[0]);
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
void* _95142 = arg_buffer[1];
//reading env and args
void* kont94862 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9475394979 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94862);
arg_buffer[2] = x9475394979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94862))[0]);
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
void* _95143 = arg_buffer[1];
//reading env and args
void* kont94863 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9475494980 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94863);
arg_buffer[2] = x9475494980;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam95144_fptr() // lam95144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95145 = arg_buffer[1];
//reading env and args
void* a9475794984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94864 = (decode_clo(env95145))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env95145))[2];
//not do dummy comment
void* a9475594981 = (decode_clo(env95145))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont94864;
arg_buffer[3] = a9475594981;
arg_buffer[4] = a9475794984;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95144 = encode_clo(alloc_clo(lam95144_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95148 = arg_buffer[1];
//reading env and args
void* kont94864 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar105048 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105048, "0", 10);
void* a9475594981 = encode_mpz(mpzvar105048);
mpz_t* mpzvar105049 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105049, "2", 10);
void* a9475694982 = encode_mpz(mpzvar105049);

//creating new closure instance
void** clo105051 = alloc_clo(lam95144_fptr, 3);

//setting env list
clo105051[1] = a9475594981;
clo105051[2] = equal_u63;
clo105051[3] = kont94864;
void* f9486594983 = encode_clo(clo105051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9486594983;
arg_buffer[3] = x;
arg_buffer[4] = a9475694982;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam95149_fptr() // lam95149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95150 = arg_buffer[1];
//reading env and args
void* a9476094988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94866 = (decode_clo(env95150))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env95150))[2];
//not do dummy comment
void* a9475894985 = (decode_clo(env95150))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont94866;
arg_buffer[3] = a9475894985;
arg_buffer[4] = a9476094988;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95149 = encode_clo(alloc_clo(lam95149_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95153 = arg_buffer[1];
//reading env and args
void* kont94866 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar105052 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105052, "1", 10);
void* a9475894985 = encode_mpz(mpzvar105052);
mpz_t* mpzvar105053 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105053, "2", 10);
void* a9475994986 = encode_mpz(mpzvar105053);

//creating new closure instance
void** clo105055 = alloc_clo(lam95149_fptr, 3);

//setting env list
clo105055[1] = a9475894985;
clo105055[2] = equal_u63;
clo105055[3] = kont94866;
void* f9486794987 = encode_clo(clo105055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9486794987;
arg_buffer[3] = x;
arg_buffer[4] = a9475994986;
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
void* _95154 = arg_buffer[1];
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

void* kont9486894989 = prim_car(x);
void* x94990 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9486894989);
arg_buffer[2] = x94990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9486894989))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam95157_fptr() // lam95157 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95158 = arg_buffer[1];
//reading env and args
void* a9476695000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94870 = (decode_clo(env95158))[3];
//not do dummy comment
void* x = (decode_clo(env95158))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env95158))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont94870;
arg_buffer[3] = x;
arg_buffer[4] = a9476695000;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95157 = encode_clo(alloc_clo(lam95157_fptr, 0));

void* lam95159_fptr() // lam95159 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95160 = arg_buffer[1];
//reading env and args
void* a9476494997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95160))[5];
//not do dummy comment
void* lst = (decode_clo(env95160))[4];
//not do dummy comment
void* kont94870 = (decode_clo(env95160))[3];
//not do dummy comment
void* x = (decode_clo(env95160))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env95160))[1];

//if-clause
bool if_guard105056 = is_true(a9476494997);
if(if_guard105056)
{
void* x9476594998 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94870);
arg_buffer[2] = x9476594998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94870))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105058 = alloc_clo(lam95157_fptr, 3);

//setting env list
clo105058[1] = member_u63;
clo105058[2] = x;
clo105058[3] = kont94870;
void* f9487194999 = encode_clo(clo105058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9487194999;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95159 = encode_clo(alloc_clo(lam95159_fptr, 0));

void* lam95161_fptr() // lam95161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95162 = arg_buffer[1];
//reading env and args
void* a9476394995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95162))[6];
//not do dummy comment
void* lst = (decode_clo(env95162))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env95162))[4];
//not do dummy comment
void* kont94870 = (decode_clo(env95162))[3];
//not do dummy comment
void* x = (decode_clo(env95162))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env95162))[1];

//creating new closure instance
void** clo105060 = alloc_clo(lam95159_fptr, 5);

//setting env list
clo105060[1] = member_u63;
clo105060[2] = x;
clo105060[3] = kont94870;
clo105060[4] = lst;
clo105060[5] = cdr;
void* f9487294996 = encode_clo(clo105060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9487294996;
arg_buffer[3] = a9476394995;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95161 = encode_clo(alloc_clo(lam95161_fptr, 0));

void* lam95163_fptr() // lam95163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95164 = arg_buffer[1];
//reading env and args
void* a9476194992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95164))[7];
//not do dummy comment
void* lst = (decode_clo(env95164))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env95164))[5];
//not do dummy comment
void* kont94870 = (decode_clo(env95164))[4];
//not do dummy comment
void* x = (decode_clo(env95164))[3];
//not do dummy comment
void* car = (decode_clo(env95164))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env95164))[1];

//if-clause
bool if_guard105061 = is_true(a9476194992);
if(if_guard105061)
{
void* x9476294993 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94870);
arg_buffer[2] = x9476294993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94870))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105063 = alloc_clo(lam95161_fptr, 6);

//setting env list
clo105063[1] = member_u63;
clo105063[2] = x;
clo105063[3] = kont94870;
clo105063[4] = equal_u63;
clo105063[5] = lst;
clo105063[6] = cdr;
void* f9487394994 = encode_clo(clo105063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9487394994;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95163 = encode_clo(alloc_clo(lam95163_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95165 = arg_buffer[1];
//reading env and args
void* kont94870 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo105065 = alloc_clo(lam95163_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo105065[1] = member_u63;
clo105065[2] = car;
clo105065[3] = x;
clo105065[4] = kont94870;
clo105065[5] = equal_u63;
clo105065[6] = lst;
clo105065[7] = cdr;
void* f9487494991 = encode_clo(clo105065);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9487494991;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam95166_fptr() // lam95166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95167 = arg_buffer[1];
//reading env and args
void* a9477095008 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9476995006 = (decode_clo(env95167))[4];
//not do dummy comment
void* fun = (decode_clo(env95167))[3];
//not do dummy comment
void* foldl = (decode_clo(env95167))[2];
//not do dummy comment
void* kont94875 = (decode_clo(env95167))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont94875;
arg_buffer[3] = fun;
arg_buffer[4] = a9476995006;
arg_buffer[5] = a9477095008;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95166 = encode_clo(alloc_clo(lam95166_fptr, 0));

void* lam95168_fptr() // lam95168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95169 = arg_buffer[1];
//reading env and args
void* a9476995006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95169))[5];
//not do dummy comment
void* lst = (decode_clo(env95169))[4];
//not do dummy comment
void* fun = (decode_clo(env95169))[3];
//not do dummy comment
void* foldl = (decode_clo(env95169))[2];
//not do dummy comment
void* kont94875 = (decode_clo(env95169))[1];

//creating new closure instance
void** clo105067 = alloc_clo(lam95166_fptr, 4);

//setting env list
clo105067[1] = kont94875;
clo105067[2] = foldl;
clo105067[3] = fun;
clo105067[4] = a9476995006;
void* f9487695007 = encode_clo(clo105067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9487695007;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95168 = encode_clo(alloc_clo(lam95168_fptr, 0));

void* lam95170_fptr() // lam95170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95171 = arg_buffer[1];
//reading env and args
void* a9476895004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95171))[6];
//not do dummy comment
void* lst = (decode_clo(env95171))[5];
//not do dummy comment
void* fun = (decode_clo(env95171))[4];
//not do dummy comment
void* acc = (decode_clo(env95171))[3];
//not do dummy comment
void* foldl = (decode_clo(env95171))[2];
//not do dummy comment
void* kont94875 = (decode_clo(env95171))[1];

//creating new closure instance
void** clo105069 = alloc_clo(lam95168_fptr, 5);

//setting env list
clo105069[1] = kont94875;
clo105069[2] = foldl;
clo105069[3] = fun;
clo105069[4] = lst;
clo105069[5] = cdr;
void* f9487795005 = encode_clo(clo105069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9487795005;
arg_buffer[3] = a9476895004;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95170 = encode_clo(alloc_clo(lam95170_fptr, 0));

void* lam95172_fptr() // lam95172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95173 = arg_buffer[1];
//reading env and args
void* a9476795002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95173))[7];
//not do dummy comment
void* lst = (decode_clo(env95173))[6];
//not do dummy comment
void* fun = (decode_clo(env95173))[5];
//not do dummy comment
void* acc = (decode_clo(env95173))[4];
//not do dummy comment
void* car = (decode_clo(env95173))[3];
//not do dummy comment
void* foldl = (decode_clo(env95173))[2];
//not do dummy comment
void* kont94875 = (decode_clo(env95173))[1];

//if-clause
bool if_guard105070 = is_true(a9476795002);
if(if_guard105070)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94875);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94875))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105072 = alloc_clo(lam95170_fptr, 6);

//setting env list
clo105072[1] = kont94875;
clo105072[2] = foldl;
clo105072[3] = acc;
clo105072[4] = fun;
clo105072[5] = lst;
clo105072[6] = cdr;
void* f9487895003 = encode_clo(clo105072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9487895003;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95172 = encode_clo(alloc_clo(lam95172_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95174 = arg_buffer[1];
//reading env and args
void* kont94875 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo105074 = alloc_clo(lam95172_fptr, 7);

//setting env list
clo105074[1] = kont94875;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo105074[2] = foldl;
clo105074[3] = car;
clo105074[4] = acc;
clo105074[5] = fun;
clo105074[6] = lst;
clo105074[7] = cdr;
void* f9487995001 = encode_clo(clo105074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9487995001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam95175_fptr() // lam95175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95176 = arg_buffer[1];
//reading env and args
void* a9477495016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94880 = (decode_clo(env95176))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env95176))[2];
//not do dummy comment
void* a9477295012 = (decode_clo(env95176))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont94880;
arg_buffer[3] = a9477295012;
arg_buffer[4] = a9477495016;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95175 = encode_clo(alloc_clo(lam95175_fptr, 0));

void* lam95177_fptr() // lam95177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95178 = arg_buffer[1];
//reading env and args
void* a9477395014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94880 = (decode_clo(env95178))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env95178))[4];
//not do dummy comment
void* a9477295012 = (decode_clo(env95178))[3];
//not do dummy comment
void* lst2 = (decode_clo(env95178))[2];
//not do dummy comment
void* cons = (decode_clo(env95178))[1];

//creating new closure instance
void** clo105076 = alloc_clo(lam95175_fptr, 3);

//setting env list
clo105076[1] = a9477295012;
clo105076[2] = reverse_u45helper;
clo105076[3] = kont94880;
void* f9488195015 = encode_clo(clo105076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9488195015;
arg_buffer[3] = a9477395014;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95177 = encode_clo(alloc_clo(lam95177_fptr, 0));

void* lam95179_fptr() // lam95179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95180 = arg_buffer[1];
//reading env and args
void* a9477295012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env95180))[6];
//not do dummy comment
void* lst2 = (decode_clo(env95180))[5];
//not do dummy comment
void* car = (decode_clo(env95180))[4];
//not do dummy comment
void* cons = (decode_clo(env95180))[3];
//not do dummy comment
void* lst = (decode_clo(env95180))[2];
//not do dummy comment
void* kont94880 = (decode_clo(env95180))[1];

//creating new closure instance
void** clo105078 = alloc_clo(lam95177_fptr, 5);

//setting env list
clo105078[1] = cons;
clo105078[2] = lst2;
clo105078[3] = a9477295012;
clo105078[4] = reverse_u45helper;
clo105078[5] = kont94880;
void* f9488295013 = encode_clo(clo105078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9488295013;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95179 = encode_clo(alloc_clo(lam95179_fptr, 0));

void* lam95181_fptr() // lam95181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95182 = arg_buffer[1];
//reading env and args
void* a9477195010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95182))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env95182))[6];
//not do dummy comment
void* lst2 = (decode_clo(env95182))[5];
//not do dummy comment
void* car = (decode_clo(env95182))[4];
//not do dummy comment
void* cons = (decode_clo(env95182))[3];
//not do dummy comment
void* lst = (decode_clo(env95182))[2];
//not do dummy comment
void* kont94880 = (decode_clo(env95182))[1];

//if-clause
bool if_guard105079 = is_true(a9477195010);
if(if_guard105079)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94880);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94880))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105081 = alloc_clo(lam95179_fptr, 6);

//setting env list
clo105081[1] = kont94880;
clo105081[2] = lst;
clo105081[3] = cons;
clo105081[4] = car;
clo105081[5] = lst2;
clo105081[6] = reverse_u45helper;
void* f9488395011 = encode_clo(clo105081);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9488395011;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95181 = encode_clo(alloc_clo(lam95181_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95183 = arg_buffer[1];
//reading env and args
void* kont94880 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo105083 = alloc_clo(lam95181_fptr, 7);

//setting env list
clo105083[1] = kont94880;
clo105083[2] = lst;
clo105083[3] = cons;
clo105083[4] = car;
clo105083[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo105083[6] = reverse_u45helper;
clo105083[7] = cdr;
void* f9488495009 = encode_clo(clo105083);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9488495009;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam95184_fptr() // lam95184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95185 = arg_buffer[1];
//reading env and args
void* a9477595018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env95185))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env95185))[2];
//not do dummy comment
void* kont94885 = (decode_clo(env95185))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont94885;
arg_buffer[3] = lst;
arg_buffer[4] = a9477595018;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95184 = encode_clo(alloc_clo(lam95184_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95186 = arg_buffer[1];
//reading env and args
void* kont94885 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo105085 = alloc_clo(lam95184_fptr, 3);

//setting env list
clo105085[1] = kont94885;
clo105085[2] = reverse_u45helper;
clo105085[3] = lst;
void* f9488695017 = encode_clo(clo105085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9488695017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam95187_fptr() // lam95187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95188 = arg_buffer[1];
//reading env and args
void* x9477895023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94887 = (decode_clo(env95188))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94887);
arg_buffer[2] = x9477895023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94887))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95187 = encode_clo(alloc_clo(lam95187_fptr, 0));

void* lam95189_fptr() // lam95189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95190 = arg_buffer[1];
//reading env and args
void* a9478395032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9477995025 = (decode_clo(env95190))[4];
//not do dummy comment
void* a9478195028 = (decode_clo(env95190))[3];
//not do dummy comment
void* kont94887 = (decode_clo(env95190))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env95190))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont94887;
arg_buffer[3] = a9477995025;
arg_buffer[4] = a9478195028;
arg_buffer[5] = a9478395032;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95189 = encode_clo(alloc_clo(lam95189_fptr, 0));

void* lam95191_fptr() // lam95191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95192 = arg_buffer[1];
//reading env and args
void* a9478295030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9477995025 = (decode_clo(env95192))[6];
//not do dummy comment
void* a9478195028 = (decode_clo(env95192))[5];
//not do dummy comment
void* kont94887 = (decode_clo(env95192))[4];
//not do dummy comment
void* cons = (decode_clo(env95192))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env95192))[2];
//not do dummy comment
void* lst2 = (decode_clo(env95192))[1];

//creating new closure instance
void** clo105087 = alloc_clo(lam95189_fptr, 4);

//setting env list
clo105087[1] = take_u45helper;
clo105087[2] = kont94887;
clo105087[3] = a9478195028;
clo105087[4] = a9477995025;
void* f9488995031 = encode_clo(clo105087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9488995031;
arg_buffer[3] = a9478295030;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95191 = encode_clo(alloc_clo(lam95191_fptr, 0));

void* lam95193_fptr() // lam95193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95194 = arg_buffer[1];
//reading env and args
void* a9478195028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env95194))[7];
//not do dummy comment
void* a9477995025 = (decode_clo(env95194))[6];
//not do dummy comment
void* kont94887 = (decode_clo(env95194))[5];
//not do dummy comment
void* car = (decode_clo(env95194))[4];
//not do dummy comment
void* cons = (decode_clo(env95194))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env95194))[2];
//not do dummy comment
void* lst2 = (decode_clo(env95194))[1];

//creating new closure instance
void** clo105089 = alloc_clo(lam95191_fptr, 6);

//setting env list
clo105089[1] = lst2;
clo105089[2] = take_u45helper;
clo105089[3] = cons;
clo105089[4] = kont94887;
clo105089[5] = a9478195028;
clo105089[6] = a9477995025;
void* f9489095029 = encode_clo(clo105089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9489095029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95193 = encode_clo(alloc_clo(lam95193_fptr, 0));

void* lam95196_fptr() // lam95196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95197 = arg_buffer[1];
//reading env and args
void* a9477995025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env95197))[8];
//not do dummy comment
void* kont94887 = (decode_clo(env95197))[7];
//not do dummy comment
void* cons = (decode_clo(env95197))[6];
//not do dummy comment
void* _u45 = (decode_clo(env95197))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env95197))[4];
//not do dummy comment
void* lst2 = (decode_clo(env95197))[3];
//not do dummy comment
void* n = (decode_clo(env95197))[2];
//not do dummy comment
void* car = (decode_clo(env95197))[1];
mpz_t* mpzvar105090 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105090, "1", 10);
void* a9478095026 = encode_mpz(mpzvar105090);

//creating new closure instance
void** clo105092 = alloc_clo(lam95193_fptr, 7);

//setting env list
clo105092[1] = lst2;
clo105092[2] = take_u45helper;
clo105092[3] = cons;
clo105092[4] = car;
clo105092[5] = kont94887;
clo105092[6] = a9477995025;
clo105092[7] = lst;
void* f9489195027 = encode_clo(clo105092);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9489195027;
arg_buffer[3] = n;
arg_buffer[4] = a9478095026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95196 = encode_clo(alloc_clo(lam95196_fptr, 0));

void* lam95198_fptr() // lam95198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95199 = arg_buffer[1];
//reading env and args
void* a9477795021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95199))[10];
//not do dummy comment
void* lst = (decode_clo(env95199))[9];
//not do dummy comment
void* reverse = (decode_clo(env95199))[8];
//not do dummy comment
void* kont94887 = (decode_clo(env95199))[7];
//not do dummy comment
void* cons = (decode_clo(env95199))[6];
//not do dummy comment
void* _u45 = (decode_clo(env95199))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env95199))[4];
//not do dummy comment
void* lst2 = (decode_clo(env95199))[3];
//not do dummy comment
void* n = (decode_clo(env95199))[2];
//not do dummy comment
void* car = (decode_clo(env95199))[1];

//if-clause
bool if_guard105093 = is_true(a9477795021);
if(if_guard105093)
{

//creating new closure instance
void** clo105095 = alloc_clo(lam95187_fptr, 1);

//setting env list
clo105095[1] = kont94887;
void* f9488895022 = encode_clo(clo105095);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9488895022;
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
void** clo105097 = alloc_clo(lam95196_fptr, 8);

//setting env list
clo105097[1] = car;
clo105097[2] = n;
clo105097[3] = lst2;
clo105097[4] = take_u45helper;
clo105097[5] = _u45;
clo105097[6] = cons;
clo105097[7] = kont94887;
clo105097[8] = lst;
void* f9489295024 = encode_clo(clo105097);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9489295024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95198 = encode_clo(alloc_clo(lam95198_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95201 = arg_buffer[1];
//reading env and args
void* kont94887 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar105098 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105098, "0", 10);
void* a9477695019 = encode_mpz(mpzvar105098);

//creating new closure instance
void** clo105100 = alloc_clo(lam95198_fptr, 10);

//setting env list
clo105100[1] = car;
clo105100[2] = n;
clo105100[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo105100[4] = take_u45helper;
clo105100[5] = _u45;
clo105100[6] = cons;
clo105100[7] = kont94887;
clo105100[8] = reverse;
clo105100[9] = lst;
clo105100[10] = cdr;
void* f9489395020 = encode_clo(clo105100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9489395020;
arg_buffer[3] = n;
arg_buffer[4] = a9477695019;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam95202_fptr() // lam95202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95203 = arg_buffer[1];
//reading env and args
void* a9478495034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94894 = (decode_clo(env95203))[4];
//not do dummy comment
void* lst = (decode_clo(env95203))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env95203))[2];
//not do dummy comment
void* n = (decode_clo(env95203))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont94894;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9478495034;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95202 = encode_clo(alloc_clo(lam95202_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95204 = arg_buffer[1];
//reading env and args
void* kont94894 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo105102 = alloc_clo(lam95202_fptr, 4);

//setting env list
clo105102[1] = n;
clo105102[2] = take_u45helper;
clo105102[3] = lst;
clo105102[4] = kont94894;
void* f9489595033 = encode_clo(clo105102);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9489595033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam95206_fptr() // lam95206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95207 = arg_buffer[1];
//reading env and args
void* a9478995042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9478795038 = (decode_clo(env95207))[3];
//not do dummy comment
void* kont94896 = (decode_clo(env95207))[2];
//not do dummy comment
void* _u43 = (decode_clo(env95207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont94896;
arg_buffer[3] = a9478795038;
arg_buffer[4] = a9478995042;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95206 = encode_clo(alloc_clo(lam95206_fptr, 0));

void* lam95208_fptr() // lam95208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95209 = arg_buffer[1];
//reading env and args
void* a9478895040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9478795038 = (decode_clo(env95209))[4];
//not do dummy comment
void* kont94896 = (decode_clo(env95209))[3];
//not do dummy comment
void* length = (decode_clo(env95209))[2];
//not do dummy comment
void* _u43 = (decode_clo(env95209))[1];

//creating new closure instance
void** clo105104 = alloc_clo(lam95206_fptr, 3);

//setting env list
clo105104[1] = _u43;
clo105104[2] = kont94896;
clo105104[3] = a9478795038;
void* f9489795041 = encode_clo(clo105104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9489795041;
arg_buffer[3] = a9478895040;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95208 = encode_clo(alloc_clo(lam95208_fptr, 0));

void* lam95211_fptr() // lam95211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95212 = arg_buffer[1];
//reading env and args
void* a9478595036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95212))[5];
//not do dummy comment
void* length = (decode_clo(env95212))[4];
//not do dummy comment
void* _u43 = (decode_clo(env95212))[3];
//not do dummy comment
void* lst = (decode_clo(env95212))[2];
//not do dummy comment
void* kont94896 = (decode_clo(env95212))[1];

//if-clause
bool if_guard105105 = is_true(a9478595036);
if(if_guard105105)
{
mpz_t* mpzvar105106 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105106, "0", 10);
void* x9478695037 = encode_mpz(mpzvar105106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94896);
arg_buffer[2] = x9478695037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94896))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar105107 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105107, "1", 10);
void* a9478795038 = encode_mpz(mpzvar105107);

//creating new closure instance
void** clo105109 = alloc_clo(lam95208_fptr, 4);

//setting env list
clo105109[1] = _u43;
clo105109[2] = length;
clo105109[3] = kont94896;
clo105109[4] = a9478795038;
void* f9489895039 = encode_clo(clo105109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9489895039;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95211 = encode_clo(alloc_clo(lam95211_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95213 = arg_buffer[1];
//reading env and args
void* kont94896 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo105111 = alloc_clo(lam95211_fptr, 5);

//setting env list
clo105111[1] = kont94896;
clo105111[2] = lst;
clo105111[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo105111[4] = length;
clo105111[5] = cdr;
void* f9489995035 = encode_clo(clo105111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9489995035;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam95214_fptr() // lam95214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95215 = arg_buffer[1];
//reading env and args
void* x9479195046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94900 = (decode_clo(env95215))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94900);
arg_buffer[2] = x9479195046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94900))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95214 = encode_clo(alloc_clo(lam95214_fptr, 0));

void* lam95216_fptr() // lam95216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95217 = arg_buffer[1];
//reading env and args
void* a9479595054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94900 = (decode_clo(env95217))[3];
//not do dummy comment
void* cons = (decode_clo(env95217))[2];
//not do dummy comment
void* a9479395050 = (decode_clo(env95217))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont94900;
arg_buffer[3] = a9479395050;
arg_buffer[4] = a9479595054;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95216 = encode_clo(alloc_clo(lam95216_fptr, 0));

void* lam95218_fptr() // lam95218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95219 = arg_buffer[1];
//reading env and args
void* a9479495052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env95219))[5];
//not do dummy comment
void* kont94900 = (decode_clo(env95219))[4];
//not do dummy comment
void* proc = (decode_clo(env95219))[3];
//not do dummy comment
void* cons = (decode_clo(env95219))[2];
//not do dummy comment
void* a9479395050 = (decode_clo(env95219))[1];

//creating new closure instance
void** clo105113 = alloc_clo(lam95216_fptr, 3);

//setting env list
clo105113[1] = a9479395050;
clo105113[2] = cons;
clo105113[3] = kont94900;
void* f9490295053 = encode_clo(clo105113);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9490295053;
arg_buffer[3] = proc;
arg_buffer[4] = a9479495052;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95218 = encode_clo(alloc_clo(lam95218_fptr, 0));

void* lam95220_fptr() // lam95220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95221 = arg_buffer[1];
//reading env and args
void* a9479395050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95221))[6];
//not do dummy comment
void* lst = (decode_clo(env95221))[5];
//not do dummy comment
void* map = (decode_clo(env95221))[4];
//not do dummy comment
void* kont94900 = (decode_clo(env95221))[3];
//not do dummy comment
void* proc = (decode_clo(env95221))[2];
//not do dummy comment
void* cons = (decode_clo(env95221))[1];

//creating new closure instance
void** clo105115 = alloc_clo(lam95218_fptr, 5);

//setting env list
clo105115[1] = a9479395050;
clo105115[2] = cons;
clo105115[3] = proc;
clo105115[4] = kont94900;
clo105115[5] = map;
void* f9490395051 = encode_clo(clo105115);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9490395051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95220 = encode_clo(alloc_clo(lam95220_fptr, 0));

void* lam95222_fptr() // lam95222 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95223 = arg_buffer[1];
//reading env and args
void* a9479295048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95223))[6];
//not do dummy comment
void* lst = (decode_clo(env95223))[5];
//not do dummy comment
void* map = (decode_clo(env95223))[4];
//not do dummy comment
void* kont94900 = (decode_clo(env95223))[3];
//not do dummy comment
void* proc = (decode_clo(env95223))[2];
//not do dummy comment
void* cons = (decode_clo(env95223))[1];

//creating new closure instance
void** clo105117 = alloc_clo(lam95220_fptr, 6);

//setting env list
clo105117[1] = cons;
clo105117[2] = proc;
clo105117[3] = kont94900;
clo105117[4] = map;
clo105117[5] = lst;
clo105117[6] = cdr;
void* f9490495049 = encode_clo(clo105117);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9490495049;
arg_buffer[3] = a9479295048;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95222 = encode_clo(alloc_clo(lam95222_fptr, 0));

void* lam95224_fptr() // lam95224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95225 = arg_buffer[1];
//reading env and args
void* a9479095044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env95225))[8];
//not do dummy comment
void* map = (decode_clo(env95225))[7];
//not do dummy comment
void* kont94900 = (decode_clo(env95225))[6];
//not do dummy comment
void* proc = (decode_clo(env95225))[5];
//not do dummy comment
void* car = (decode_clo(env95225))[4];
//not do dummy comment
void* cons = (decode_clo(env95225))[3];
//not do dummy comment
void* list = (decode_clo(env95225))[2];
//not do dummy comment
void* cdr = (decode_clo(env95225))[1];

//if-clause
bool if_guard105118 = is_true(a9479095044);
if(if_guard105118)
{

//creating new closure instance
void** clo105120 = alloc_clo(lam95214_fptr, 1);

//setting env list
clo105120[1] = kont94900;
void* f9490195045 = encode_clo(clo105120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9490195045;
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
void** clo105122 = alloc_clo(lam95222_fptr, 6);

//setting env list
clo105122[1] = cons;
clo105122[2] = proc;
clo105122[3] = kont94900;
clo105122[4] = map;
clo105122[5] = lst;
clo105122[6] = cdr;
void* f9490595047 = encode_clo(clo105122);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9490595047;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95224 = encode_clo(alloc_clo(lam95224_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95226 = arg_buffer[1];
//reading env and args
void* kont94900 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo105124 = alloc_clo(lam95224_fptr, 8);

//setting env list
clo105124[1] = cdr;
clo105124[2] = list;
clo105124[3] = cons;
clo105124[4] = car;
clo105124[5] = proc;
clo105124[6] = kont94900;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo105124[7] = map;
clo105124[8] = lst;
void* f9490695043 = encode_clo(clo105124);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9490695043;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam95227_fptr() // lam95227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95228 = arg_buffer[1];
//reading env and args
void* x9479795058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94907 = (decode_clo(env95228))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94907);
arg_buffer[2] = x9479795058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94907))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95227 = encode_clo(alloc_clo(lam95227_fptr, 0));

void* lam95229_fptr() // lam95229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95230 = arg_buffer[1];
//reading env and args
void* a9480295068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9480095064 = (decode_clo(env95230))[3];
//not do dummy comment
void* cons = (decode_clo(env95230))[2];
//not do dummy comment
void* kont94907 = (decode_clo(env95230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont94907;
arg_buffer[3] = a9480095064;
arg_buffer[4] = a9480295068;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95229 = encode_clo(alloc_clo(lam95229_fptr, 0));

void* lam95231_fptr() // lam95231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95232 = arg_buffer[1];
//reading env and args
void* a9480195066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env95232))[5];
//not do dummy comment
void* a9480095064 = (decode_clo(env95232))[4];
//not do dummy comment
void* filter = (decode_clo(env95232))[3];
//not do dummy comment
void* cons = (decode_clo(env95232))[2];
//not do dummy comment
void* kont94907 = (decode_clo(env95232))[1];

//creating new closure instance
void** clo105126 = alloc_clo(lam95229_fptr, 3);

//setting env list
clo105126[1] = kont94907;
clo105126[2] = cons;
clo105126[3] = a9480095064;
void* f9490995067 = encode_clo(clo105126);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9490995067;
arg_buffer[3] = op;
arg_buffer[4] = a9480195066;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95231 = encode_clo(alloc_clo(lam95231_fptr, 0));

void* lam95233_fptr() // lam95233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95234 = arg_buffer[1];
//reading env and args
void* a9480095064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95234))[6];
//not do dummy comment
void* lst = (decode_clo(env95234))[5];
//not do dummy comment
void* op = (decode_clo(env95234))[4];
//not do dummy comment
void* filter = (decode_clo(env95234))[3];
//not do dummy comment
void* cons = (decode_clo(env95234))[2];
//not do dummy comment
void* kont94907 = (decode_clo(env95234))[1];

//creating new closure instance
void** clo105128 = alloc_clo(lam95231_fptr, 5);

//setting env list
clo105128[1] = kont94907;
clo105128[2] = cons;
clo105128[3] = filter;
clo105128[4] = a9480095064;
clo105128[5] = op;
void* f9491095065 = encode_clo(clo105128);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9491095065;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95233 = encode_clo(alloc_clo(lam95233_fptr, 0));

void* lam95235_fptr() // lam95235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95236 = arg_buffer[1];
//reading env and args
void* a9480395070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env95236))[3];
//not do dummy comment
void* filter = (decode_clo(env95236))[2];
//not do dummy comment
void* kont94907 = (decode_clo(env95236))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont94907;
arg_buffer[3] = op;
arg_buffer[4] = a9480395070;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95235 = encode_clo(alloc_clo(lam95235_fptr, 0));

void* lam95237_fptr() // lam95237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95238 = arg_buffer[1];
//reading env and args
void* a9479995062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95238))[7];
//not do dummy comment
void* lst = (decode_clo(env95238))[6];
//not do dummy comment
void* op = (decode_clo(env95238))[5];
//not do dummy comment
void* cons = (decode_clo(env95238))[4];
//not do dummy comment
void* kont94907 = (decode_clo(env95238))[3];
//not do dummy comment
void* filter = (decode_clo(env95238))[2];
//not do dummy comment
void* car = (decode_clo(env95238))[1];

//if-clause
bool if_guard105129 = is_true(a9479995062);
if(if_guard105129)
{

//creating new closure instance
void** clo105131 = alloc_clo(lam95233_fptr, 6);

//setting env list
clo105131[1] = kont94907;
clo105131[2] = cons;
clo105131[3] = filter;
clo105131[4] = op;
clo105131[5] = lst;
clo105131[6] = cdr;
void* f9491195063 = encode_clo(clo105131);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9491195063;
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
void** clo105133 = alloc_clo(lam95235_fptr, 3);

//setting env list
clo105133[1] = kont94907;
clo105133[2] = filter;
clo105133[3] = op;
void* f9491295069 = encode_clo(clo105133);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9491295069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95237 = encode_clo(alloc_clo(lam95237_fptr, 0));

void* lam95239_fptr() // lam95239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95240 = arg_buffer[1];
//reading env and args
void* a9479895060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95240))[7];
//not do dummy comment
void* lst = (decode_clo(env95240))[6];
//not do dummy comment
void* op = (decode_clo(env95240))[5];
//not do dummy comment
void* cons = (decode_clo(env95240))[4];
//not do dummy comment
void* kont94907 = (decode_clo(env95240))[3];
//not do dummy comment
void* filter = (decode_clo(env95240))[2];
//not do dummy comment
void* car = (decode_clo(env95240))[1];

//creating new closure instance
void** clo105135 = alloc_clo(lam95237_fptr, 7);

//setting env list
clo105135[1] = car;
clo105135[2] = filter;
clo105135[3] = kont94907;
clo105135[4] = cons;
clo105135[5] = op;
clo105135[6] = lst;
clo105135[7] = cdr;
void* f9491395061 = encode_clo(clo105135);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9491395061;
arg_buffer[3] = a9479895060;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95239 = encode_clo(alloc_clo(lam95239_fptr, 0));

void* lam95241_fptr() // lam95241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95242 = arg_buffer[1];
//reading env and args
void* a9479695056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env95242))[8];
//not do dummy comment
void* op = (decode_clo(env95242))[7];
//not do dummy comment
void* cons = (decode_clo(env95242))[6];
//not do dummy comment
void* kont94907 = (decode_clo(env95242))[5];
//not do dummy comment
void* list = (decode_clo(env95242))[4];
//not do dummy comment
void* cdr = (decode_clo(env95242))[3];
//not do dummy comment
void* filter = (decode_clo(env95242))[2];
//not do dummy comment
void* car = (decode_clo(env95242))[1];

//if-clause
bool if_guard105136 = is_true(a9479695056);
if(if_guard105136)
{

//creating new closure instance
void** clo105138 = alloc_clo(lam95227_fptr, 1);

//setting env list
clo105138[1] = kont94907;
void* f9490895057 = encode_clo(clo105138);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9490895057;
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
void** clo105140 = alloc_clo(lam95239_fptr, 7);

//setting env list
clo105140[1] = car;
clo105140[2] = filter;
clo105140[3] = kont94907;
clo105140[4] = cons;
clo105140[5] = op;
clo105140[6] = lst;
clo105140[7] = cdr;
void* f9491495059 = encode_clo(clo105140);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9491495059;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95241 = encode_clo(alloc_clo(lam95241_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95243 = arg_buffer[1];
//reading env and args
void* kont94907 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo105142 = alloc_clo(lam95241_fptr, 8);

//setting env list
clo105142[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo105142[2] = filter;
clo105142[3] = cdr;
clo105142[4] = list;
clo105142[5] = kont94907;
clo105142[6] = cons;
clo105142[7] = op;
clo105142[8] = lst;
void* f9491595055 = encode_clo(clo105142);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9491595055;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam95244_fptr() // lam95244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95245 = arg_buffer[1];
//reading env and args
void* a9480895078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env95245))[3];
//not do dummy comment
void* a9480695075 = (decode_clo(env95245))[2];
//not do dummy comment
void* kont94916 = (decode_clo(env95245))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont94916;
arg_buffer[3] = a9480695075;
arg_buffer[4] = a9480895078;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95244 = encode_clo(alloc_clo(lam95244_fptr, 0));

void* lam95247_fptr() // lam95247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95248 = arg_buffer[1];
//reading env and args
void* a9480695075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env95248))[4];
//not do dummy comment
void* kont94916 = (decode_clo(env95248))[3];
//not do dummy comment
void* n = (decode_clo(env95248))[2];
//not do dummy comment
void* _u45 = (decode_clo(env95248))[1];
mpz_t* mpzvar105143 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105143, "1", 10);
void* a9480795076 = encode_mpz(mpzvar105143);

//creating new closure instance
void** clo105145 = alloc_clo(lam95244_fptr, 3);

//setting env list
clo105145[1] = kont94916;
clo105145[2] = a9480695075;
clo105145[3] = drop;
void* f9491795077 = encode_clo(clo105145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9491795077;
arg_buffer[3] = n;
arg_buffer[4] = a9480795076;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95247 = encode_clo(alloc_clo(lam95247_fptr, 0));

void* lam95249_fptr() // lam95249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95250 = arg_buffer[1];
//reading env and args
void* a9480595073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95250))[6];
//not do dummy comment
void* kont94916 = (decode_clo(env95250))[5];
//not do dummy comment
void* n = (decode_clo(env95250))[4];
//not do dummy comment
void* _u45 = (decode_clo(env95250))[3];
//not do dummy comment
void* lst = (decode_clo(env95250))[2];
//not do dummy comment
void* drop = (decode_clo(env95250))[1];

//if-clause
bool if_guard105146 = is_true(a9480595073);
if(if_guard105146)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94916);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94916))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105148 = alloc_clo(lam95247_fptr, 4);

//setting env list
clo105148[1] = _u45;
clo105148[2] = n;
clo105148[3] = kont94916;
clo105148[4] = drop;
void* f9491895074 = encode_clo(clo105148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9491895074;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95249 = encode_clo(alloc_clo(lam95249_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95252 = arg_buffer[1];
//reading env and args
void* kont94916 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar105149 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105149, "0", 10);
void* a9480495071 = encode_mpz(mpzvar105149);

//creating new closure instance
void** clo105151 = alloc_clo(lam95249_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo105151[1] = drop;
clo105151[2] = lst;
clo105151[3] = _u45;
clo105151[4] = n;
clo105151[5] = kont94916;
clo105151[6] = cdr;
void* f9491995072 = encode_clo(clo105151);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9491995072;
arg_buffer[3] = n;
arg_buffer[4] = a9480495071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam95253_fptr() // lam95253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95254 = arg_buffer[1];
//reading env and args
void* a9481295086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env95254))[3];
//not do dummy comment
void* kont94920 = (decode_clo(env95254))[2];
//not do dummy comment
void* a9481095082 = (decode_clo(env95254))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont94920;
arg_buffer[3] = a9481095082;
arg_buffer[4] = a9481295086;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95253 = encode_clo(alloc_clo(lam95253_fptr, 0));

void* lam95255_fptr() // lam95255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95256 = arg_buffer[1];
//reading env and args
void* a9481195084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env95256))[5];
//not do dummy comment
void* kont94920 = (decode_clo(env95256))[4];
//not do dummy comment
void* a9481095082 = (decode_clo(env95256))[3];
//not do dummy comment
void* proc = (decode_clo(env95256))[2];
//not do dummy comment
void* acc = (decode_clo(env95256))[1];

//creating new closure instance
void** clo105153 = alloc_clo(lam95253_fptr, 3);

//setting env list
clo105153[1] = a9481095082;
clo105153[2] = kont94920;
clo105153[3] = proc;
void* f9492195085 = encode_clo(clo105153);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9492195085;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9481195084;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95255 = encode_clo(alloc_clo(lam95255_fptr, 0));

void* lam95257_fptr() // lam95257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95258 = arg_buffer[1];
//reading env and args
void* a9481095082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95258))[6];
//not do dummy comment
void* kont94920 = (decode_clo(env95258))[5];
//not do dummy comment
void* foldr = (decode_clo(env95258))[4];
//not do dummy comment
void* lst = (decode_clo(env95258))[3];
//not do dummy comment
void* proc = (decode_clo(env95258))[2];
//not do dummy comment
void* acc = (decode_clo(env95258))[1];

//creating new closure instance
void** clo105155 = alloc_clo(lam95255_fptr, 5);

//setting env list
clo105155[1] = acc;
clo105155[2] = proc;
clo105155[3] = a9481095082;
clo105155[4] = kont94920;
clo105155[5] = foldr;
void* f9492295083 = encode_clo(clo105155);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9492295083;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95257 = encode_clo(alloc_clo(lam95257_fptr, 0));

void* lam95259_fptr() // lam95259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95260 = arg_buffer[1];
//reading env and args
void* a9480995080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95260))[7];
//not do dummy comment
void* kont94920 = (decode_clo(env95260))[6];
//not do dummy comment
void* car = (decode_clo(env95260))[5];
//not do dummy comment
void* foldr = (decode_clo(env95260))[4];
//not do dummy comment
void* lst = (decode_clo(env95260))[3];
//not do dummy comment
void* proc = (decode_clo(env95260))[2];
//not do dummy comment
void* acc = (decode_clo(env95260))[1];

//if-clause
bool if_guard105156 = is_true(a9480995080);
if(if_guard105156)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94920);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94920))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105158 = alloc_clo(lam95257_fptr, 6);

//setting env list
clo105158[1] = acc;
clo105158[2] = proc;
clo105158[3] = lst;
clo105158[4] = foldr;
clo105158[5] = kont94920;
clo105158[6] = cdr;
void* f9492395081 = encode_clo(clo105158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9492395081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95259 = encode_clo(alloc_clo(lam95259_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95261 = arg_buffer[1];
//reading env and args
void* kont94920 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo105160 = alloc_clo(lam95259_fptr, 7);

//setting env list
clo105160[1] = acc;
clo105160[2] = proc;
clo105160[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo105160[4] = foldr;
clo105160[5] = car;
clo105160[6] = kont94920;
clo105160[7] = cdr;
void* f9492495079 = encode_clo(clo105160);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9492495079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam95262_fptr() // lam95262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95263 = arg_buffer[1];
//reading env and args
void* a9481695094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94925 = (decode_clo(env95263))[3];
//not do dummy comment
void* a9481495090 = (decode_clo(env95263))[2];
//not do dummy comment
void* cons = (decode_clo(env95263))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont94925;
arg_buffer[3] = a9481495090;
arg_buffer[4] = a9481695094;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95262 = encode_clo(alloc_clo(lam95262_fptr, 0));

void* lam95264_fptr() // lam95264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95265 = arg_buffer[1];
//reading env and args
void* a9481595092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont94925 = (decode_clo(env95265))[5];
//not do dummy comment
void* a9481495090 = (decode_clo(env95265))[4];
//not do dummy comment
void* append = (decode_clo(env95265))[3];
//not do dummy comment
void* lst2 = (decode_clo(env95265))[2];
//not do dummy comment
void* cons = (decode_clo(env95265))[1];

//creating new closure instance
void** clo105162 = alloc_clo(lam95262_fptr, 3);

//setting env list
clo105162[1] = cons;
clo105162[2] = a9481495090;
clo105162[3] = kont94925;
void* f9492695093 = encode_clo(clo105162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9492695093;
arg_buffer[3] = a9481595092;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95264 = encode_clo(alloc_clo(lam95264_fptr, 0));

void* lam95266_fptr() // lam95266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95267 = arg_buffer[1];
//reading env and args
void* a9481495090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95267))[6];
//not do dummy comment
void* kont94925 = (decode_clo(env95267))[5];
//not do dummy comment
void* append = (decode_clo(env95267))[4];
//not do dummy comment
void* lst2 = (decode_clo(env95267))[3];
//not do dummy comment
void* lst1 = (decode_clo(env95267))[2];
//not do dummy comment
void* cons = (decode_clo(env95267))[1];

//creating new closure instance
void** clo105164 = alloc_clo(lam95264_fptr, 5);

//setting env list
clo105164[1] = cons;
clo105164[2] = lst2;
clo105164[3] = append;
clo105164[4] = a9481495090;
clo105164[5] = kont94925;
void* f9492795091 = encode_clo(clo105164);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9492795091;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95266 = encode_clo(alloc_clo(lam95266_fptr, 0));

void* lam95268_fptr() // lam95268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95269 = arg_buffer[1];
//reading env and args
void* a9481395088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env95269))[7];
//not do dummy comment
void* kont94925 = (decode_clo(env95269))[6];
//not do dummy comment
void* append = (decode_clo(env95269))[5];
//not do dummy comment
void* lst2 = (decode_clo(env95269))[4];
//not do dummy comment
void* cons = (decode_clo(env95269))[3];
//not do dummy comment
void* lst1 = (decode_clo(env95269))[2];
//not do dummy comment
void* car = (decode_clo(env95269))[1];

//if-clause
bool if_guard105165 = is_true(a9481395088);
if(if_guard105165)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94925);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94925))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105167 = alloc_clo(lam95266_fptr, 6);

//setting env list
clo105167[1] = cons;
clo105167[2] = lst1;
clo105167[3] = lst2;
clo105167[4] = append;
clo105167[5] = kont94925;
clo105167[6] = cdr;
void* f9492895089 = encode_clo(clo105167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9492895089;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95268 = encode_clo(alloc_clo(lam95268_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95270 = arg_buffer[1];
//reading env and args
void* kont94925 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo105169 = alloc_clo(lam95268_fptr, 7);

//setting env list
clo105169[1] = car;
clo105169[2] = lst1;
clo105169[3] = cons;
clo105169[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo105169[5] = append;
clo105169[6] = kont94925;
clo105169[7] = cdr;
void* f9492995087 = encode_clo(clo105169);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9492995087;
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
void* _95271 = arg_buffer[1];
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

void* kont9493095095 = prim_car(lst);
void* lst95096 = prim_cdr(lst);
void* x9481795097 = apply_prim_hash(lst95096);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9493095095);
arg_buffer[2] = x9481795097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9493095095))[0]);
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
void* _95272 = arg_buffer[1];
//reading env and args
void* kont94932 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9481895098 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94932);
arg_buffer[2] = x9481895098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94932))[0]);
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
void* _95273 = arg_buffer[1];
//reading env and args
void* kont94933 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9481995099 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94933);
arg_buffer[2] = x9481995099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94933))[0]);
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
void* _95274 = arg_buffer[1];
//reading env and args
void* kont94934 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9482095100 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94934);
arg_buffer[2] = x9482095100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94934))[0]);
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
void* _95275 = arg_buffer[1];
//reading env and args
void* kont94935 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9482195101 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94935);
arg_buffer[2] = x9482195101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94935))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam95277_fptr() // lam95277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95278 = arg_buffer[1];
//reading env and args
void* a9483095115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env95278))[3];
//not do dummy comment
void* a9482895112 = (decode_clo(env95278))[2];
//not do dummy comment
void* kont94936 = (decode_clo(env95278))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = kont94936;
arg_buffer[3] = a9482895112;
arg_buffer[4] = a9483095115;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95277 = encode_clo(alloc_clo(lam95277_fptr, 0));

void* lam95280_fptr() // lam95280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95281 = arg_buffer[1];
//reading env and args
void* a9482895112 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env95281))[4];
//not do dummy comment
void* kont94936 = (decode_clo(env95281))[3];
//not do dummy comment
void* _u47 = (decode_clo(env95281))[2];
//not do dummy comment
void* n = (decode_clo(env95281))[1];
mpz_t* mpzvar105170 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105170, "2", 10);
void* a9482995113 = encode_mpz(mpzvar105170);

//creating new closure instance
void** clo105172 = alloc_clo(lam95277_fptr, 3);

//setting env list
clo105172[1] = kont94936;
clo105172[2] = a9482895112;
clo105172[3] = power;
void* f9493795114 = encode_clo(clo105172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = f9493795114;
arg_buffer[3] = n;
arg_buffer[4] = a9482995113;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95280 = encode_clo(alloc_clo(lam95280_fptr, 0));

void* lam95282_fptr() // lam95282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95283 = arg_buffer[1];
//reading env and args
void* a9483695125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env95283))[3];
//not do dummy comment
void* x = (decode_clo(env95283))[2];
//not do dummy comment
void* kont94936 = (decode_clo(env95283))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont94936;
arg_buffer[3] = x;
arg_buffer[4] = a9483695125;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95282 = encode_clo(alloc_clo(lam95282_fptr, 0));

void* lam95284_fptr() // lam95284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95285 = arg_buffer[1];
//reading env and args
void* a9483595123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9483195117 = (decode_clo(env95285))[5];
//not do dummy comment
void* power = (decode_clo(env95285))[4];
//not do dummy comment
void* _u42 = (decode_clo(env95285))[3];
//not do dummy comment
void* x = (decode_clo(env95285))[2];
//not do dummy comment
void* kont94936 = (decode_clo(env95285))[1];

//creating new closure instance
void** clo105174 = alloc_clo(lam95282_fptr, 3);

//setting env list
clo105174[1] = kont94936;
clo105174[2] = x;
clo105174[3] = _u42;
void* f9493995124 = encode_clo(clo105174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = f9493995124;
arg_buffer[3] = a9483195117;
arg_buffer[4] = a9483595123;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(power))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95284 = encode_clo(alloc_clo(lam95284_fptr, 0));

void* lam95287_fptr() // lam95287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95288 = arg_buffer[1];
//reading env and args
void* a9483395120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9483195117 = (decode_clo(env95288))[6];
//not do dummy comment
void* power = (decode_clo(env95288))[5];
//not do dummy comment
void* _u42 = (decode_clo(env95288))[4];
//not do dummy comment
void* x = (decode_clo(env95288))[3];
//not do dummy comment
void* kont94936 = (decode_clo(env95288))[2];
//not do dummy comment
void* _u47 = (decode_clo(env95288))[1];
mpz_t* mpzvar105175 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105175, "2", 10);
void* a9483495121 = encode_mpz(mpzvar105175);

//creating new closure instance
void** clo105177 = alloc_clo(lam95284_fptr, 5);

//setting env list
clo105177[1] = kont94936;
clo105177[2] = x;
clo105177[3] = _u42;
clo105177[4] = power;
clo105177[5] = a9483195117;
void* f9494095122 = encode_clo(clo105177);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = f9494095122;
arg_buffer[3] = a9483395120;
arg_buffer[4] = a9483495121;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95287 = encode_clo(alloc_clo(lam95287_fptr, 0));

void* lam95290_fptr() // lam95290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95291 = arg_buffer[1];
//reading env and args
void* a9483195117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env95291))[7];
//not do dummy comment
void* _u42 = (decode_clo(env95291))[6];
//not do dummy comment
void* x = (decode_clo(env95291))[5];
//not do dummy comment
void* kont94936 = (decode_clo(env95291))[4];
//not do dummy comment
void* _u45 = (decode_clo(env95291))[3];
//not do dummy comment
void* _u47 = (decode_clo(env95291))[2];
//not do dummy comment
void* n = (decode_clo(env95291))[1];
mpz_t* mpzvar105178 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105178, "1", 10);
void* a9483295118 = encode_mpz(mpzvar105178);

//creating new closure instance
void** clo105180 = alloc_clo(lam95287_fptr, 6);

//setting env list
clo105180[1] = _u47;
clo105180[2] = kont94936;
clo105180[3] = x;
clo105180[4] = _u42;
clo105180[5] = power;
clo105180[6] = a9483195117;
void* f9494195119 = encode_clo(clo105180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9494195119;
arg_buffer[3] = n;
arg_buffer[4] = a9483295118;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam95290 = encode_clo(alloc_clo(lam95290_fptr, 0));

void* lam95292_fptr() // lam95292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95293 = arg_buffer[1];
//reading env and args
void* a9482795110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* power = (decode_clo(env95293))[7];
//not do dummy comment
void* _u42 = (decode_clo(env95293))[6];
//not do dummy comment
void* x = (decode_clo(env95293))[5];
//not do dummy comment
void* kont94936 = (decode_clo(env95293))[4];
//not do dummy comment
void* _u45 = (decode_clo(env95293))[3];
//not do dummy comment
void* _u47 = (decode_clo(env95293))[2];
//not do dummy comment
void* n = (decode_clo(env95293))[1];

//if-clause
bool if_guard105181 = is_true(a9482795110);
if(if_guard105181)
{

//creating new closure instance
void** clo105183 = alloc_clo(lam95280_fptr, 4);

//setting env list
clo105183[1] = n;
clo105183[2] = _u47;
clo105183[3] = kont94936;
clo105183[4] = power;
void* f9493895111 = encode_clo(clo105183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f9493895111;
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
void** clo105185 = alloc_clo(lam95290_fptr, 7);

//setting env list
clo105185[1] = n;
clo105185[2] = _u47;
clo105185[3] = _u45;
clo105185[4] = kont94936;
clo105185[5] = x;
clo105185[6] = _u42;
clo105185[7] = power;
void* f9494295116 = encode_clo(clo105185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f9494295116;
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

void* lam95292 = encode_clo(alloc_clo(lam95292_fptr, 0));

void* lam95294_fptr() // lam95294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95295 = arg_buffer[1];
//reading env and args
void* a9482695108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* even_u63 = (decode_clo(env95295))[8];
//not do dummy comment
void* power = (decode_clo(env95295))[7];
//not do dummy comment
void* _u42 = (decode_clo(env95295))[6];
//not do dummy comment
void* x = (decode_clo(env95295))[5];
//not do dummy comment
void* kont94936 = (decode_clo(env95295))[4];
//not do dummy comment
void* _u45 = (decode_clo(env95295))[3];
//not do dummy comment
void* _u47 = (decode_clo(env95295))[2];
//not do dummy comment
void* n = (decode_clo(env95295))[1];

//if-clause
bool if_guard105186 = is_true(a9482695108);
if(if_guard105186)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94936);
arg_buffer[2] = x;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94936))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo105188 = alloc_clo(lam95292_fptr, 7);

//setting env list
clo105188[1] = n;
clo105188[2] = _u47;
clo105188[3] = _u45;
clo105188[4] = kont94936;
clo105188[5] = x;
clo105188[6] = _u42;
clo105188[7] = power;
void* f9494395109 = encode_clo(clo105188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f9494395109;
arg_buffer[3] = n;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95294 = encode_clo(alloc_clo(lam95294_fptr, 0));

void* lam95297_fptr() // lam95297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env95298 = arg_buffer[1];
//reading env and args
void* a9482395104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* even_u63 = (decode_clo(env95298))[9];
//not do dummy comment
void* power = (decode_clo(env95298))[8];
//not do dummy comment
void* _u42 = (decode_clo(env95298))[7];
//not do dummy comment
void* x = (decode_clo(env95298))[6];
//not do dummy comment
void* kont94936 = (decode_clo(env95298))[5];
//not do dummy comment
void* _u47 = (decode_clo(env95298))[4];
//not do dummy comment
void* n = (decode_clo(env95298))[3];
//not do dummy comment
void* _u61 = (decode_clo(env95298))[2];
//not do dummy comment
void* _u45 = (decode_clo(env95298))[1];

//if-clause
bool if_guard105189 = is_true(a9482395104);
if(if_guard105189)
{
mpz_t* mpzvar105190 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105190, "1", 10);
void* x9482495105 = encode_mpz(mpzvar105190);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont94936);
arg_buffer[2] = x9482495105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont94936))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar105191 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105191, "1", 10);
void* a9482595106 = encode_mpz(mpzvar105191);

//creating new closure instance
void** clo105193 = alloc_clo(lam95294_fptr, 8);

//setting env list
clo105193[1] = n;
clo105193[2] = _u47;
clo105193[3] = _u45;
clo105193[4] = kont94936;
clo105193[5] = x;
clo105193[6] = _u42;
clo105193[7] = power;
clo105193[8] = even_u63;
void* f9494495107 = encode_clo(clo105193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9494495107;
arg_buffer[3] = n;
arg_buffer[4] = a9482595106;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam95297 = encode_clo(alloc_clo(lam95297_fptr, 0));

void* power_fptr() // power 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _95300 = arg_buffer[1];
//reading env and args
void* kont94936 = arg_buffer[2];
void* x = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar105194 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105194, "0", 10);
void* a9482295102 = encode_mpz(mpzvar105194);

//creating new closure instance
void** clo105196 = alloc_clo(lam95297_fptr, 9);

//setting env list
clo105196[1] = _u45;
clo105196[2] = _u61;
clo105196[3] = n;
clo105196[4] = _u47;
clo105196[5] = kont94936;
clo105196[6] = x;
clo105196[7] = _u42;
void* power = encode_clo(alloc_clo(power_fptr, 0));

clo105196[8] = power;
clo105196[9] = even_u63;
void* f9494595103 = encode_clo(clo105196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9494595103;
arg_buffer[3] = n;
arg_buffer[4] = a9482295102;
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
void* _95303 = arg_buffer[1];
//reading env and args
void* kont94946 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar105197 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105197, "2", 10);
void* a9483795126 = encode_mpz(mpzvar105197);
mpz_t* mpzvar105198 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar105198, "10", 10);
void* a9483895127 = encode_mpz(mpzvar105198);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(power);
arg_buffer[2] = kont94946;
arg_buffer[3] = a9483795126;
arg_buffer[4] = a9483895127;
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

