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
void* _29198 = arg_buffer[1];
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

void* kont2894029040 = prim_car(lst);
void* lst29041 = prim_cdr(lst);
void* x2885529042 = apply_prim__u43(lst29041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2894029040);
arg_buffer[2] = x2885529042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2894029040))[0]);
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
void* _29199 = arg_buffer[1];
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

void* kont2894229043 = prim_car(lst);
void* lst29044 = prim_cdr(lst);
void* x2885629045 = apply_prim__u45(lst29044);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2894229043);
arg_buffer[2] = x2885629045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2894229043))[0]);
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
void* _29200 = arg_buffer[1];
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

void* kont2894429046 = prim_car(lst);
void* lst29047 = prim_cdr(lst);
void* x2885729048 = apply_prim__u42(lst29047);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2894429046);
arg_buffer[2] = x2885729048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2894429046))[0]);
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
void* _29201 = arg_buffer[1];
//reading env and args
void* kont28946 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2885829049 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28946);
arg_buffer[2] = x2885829049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28946))[0]);
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
void* _29202 = arg_buffer[1];
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

void* kont2894729050 = prim_car(lst);
void* lst29051 = prim_cdr(lst);
void* x2885929052 = apply_prim__u47(lst29051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2894729050);
arg_buffer[2] = x2885929052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2894729050))[0]);
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
void* _29203 = arg_buffer[1];
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

void* kont2894929053 = prim_car(lst);
void* lst29054 = prim_cdr(lst);
void* x2886029055 = apply_prim__u61(lst29054);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2894929053);
arg_buffer[2] = x2886029055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2894929053))[0]);
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
void* _29204 = arg_buffer[1];
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

void* kont2895129056 = prim_car(lst);
void* lst29057 = prim_cdr(lst);
void* x2886129058 = apply_prim__u62(lst29057);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2895129056);
arg_buffer[2] = x2886129058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2895129056))[0]);
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
void* _29205 = arg_buffer[1];
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

void* kont2895329059 = prim_car(lst);
void* lst29060 = prim_cdr(lst);
void* x2886229061 = apply_prim__u60(lst29060);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2895329059);
arg_buffer[2] = x2886229061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2895329059))[0]);
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
void* _29206 = arg_buffer[1];
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

void* kont2895529062 = prim_car(lst);
void* lst29063 = prim_cdr(lst);
void* x2886329064 = apply_prim__u60_u61(lst29063);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2895529062);
arg_buffer[2] = x2886329064;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2895529062))[0]);
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
void* _29207 = arg_buffer[1];
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

void* kont2895729065 = prim_car(lst);
void* lst29066 = prim_cdr(lst);
void* x2886429067 = apply_prim__u62_u61(lst29066);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2895729065);
arg_buffer[2] = x2886429067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2895729065))[0]);
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
void* _29208 = arg_buffer[1];
//reading env and args
void* kont28959 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2886529068 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28959);
arg_buffer[2] = x2886529068;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28959))[0]);
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
void* _29209 = arg_buffer[1];
//reading env and args
void* kont28960 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2886629069 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28960);
arg_buffer[2] = x2886629069;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28960))[0]);
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
void* _29210 = arg_buffer[1];
//reading env and args
void* kont28961 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2886729070 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28961);
arg_buffer[2] = x2886729070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28961))[0]);
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
void* _29211 = arg_buffer[1];
//reading env and args
void* kont28962 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2886829071 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28962);
arg_buffer[2] = x2886829071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28962))[0]);
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
void* _29212 = arg_buffer[1];
//reading env and args
void* kont28963 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2886929072 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28963);
arg_buffer[2] = x2886929072;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28963))[0]);
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
void* _29213 = arg_buffer[1];
//reading env and args
void* kont28964 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2887029073 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28964);
arg_buffer[2] = x2887029073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28964))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam29214_fptr() // lam29214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29215 = arg_buffer[1];
//reading env and args
void* a2887329077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28965 = (decode_clo(env29215))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env29215))[2];
//not do dummy comment
void* a2887129074 = (decode_clo(env29215))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont28965;
arg_buffer[3] = a2887129074;
arg_buffer[4] = a2887329077;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29214 = encode_clo(alloc_clo(lam29214_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29218 = arg_buffer[1];
//reading env and args
void* kont28965 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29351 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29351, "0", 10);
void* a2887129074 = encode_mpz(mpzvar29351);
mpz_t* mpzvar29352 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29352, "2", 10);
void* a2887229075 = encode_mpz(mpzvar29352);

//creating new closure instance
void** clo29354 = alloc_clo(lam29214_fptr, 3);

//setting env list
clo29354[1] = a2887129074;
clo29354[2] = equal_u63;
clo29354[3] = kont28965;
void* f2896629076 = encode_clo(clo29354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2896629076;
arg_buffer[3] = x;
arg_buffer[4] = a2887229075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam29219_fptr() // lam29219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29220 = arg_buffer[1];
//reading env and args
void* a2887629081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2887429078 = (decode_clo(env29220))[3];
//not do dummy comment
void* kont28967 = (decode_clo(env29220))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env29220))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont28967;
arg_buffer[3] = a2887429078;
arg_buffer[4] = a2887629081;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29219 = encode_clo(alloc_clo(lam29219_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29223 = arg_buffer[1];
//reading env and args
void* kont28967 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29355 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29355, "1", 10);
void* a2887429078 = encode_mpz(mpzvar29355);
mpz_t* mpzvar29356 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29356, "2", 10);
void* a2887529079 = encode_mpz(mpzvar29356);

//creating new closure instance
void** clo29358 = alloc_clo(lam29219_fptr, 3);

//setting env list
clo29358[1] = equal_u63;
clo29358[2] = kont28967;
clo29358[3] = a2887429078;
void* f2896829080 = encode_clo(clo29358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2896829080;
arg_buffer[3] = x;
arg_buffer[4] = a2887529079;
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
void* _29224 = arg_buffer[1];
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

void* kont2896929082 = prim_car(x);
void* x29083 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2896929082);
arg_buffer[2] = x29083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2896929082))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam29227_fptr() // lam29227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29228 = arg_buffer[1];
//reading env and args
void* a2888229093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28971 = (decode_clo(env29228))[3];
//not do dummy comment
void* x = (decode_clo(env29228))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29228))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont28971;
arg_buffer[3] = x;
arg_buffer[4] = a2888229093;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29227 = encode_clo(alloc_clo(lam29227_fptr, 0));

void* lam29229_fptr() // lam29229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29230 = arg_buffer[1];
//reading env and args
void* a2888029090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29230))[5];
//not do dummy comment
void* lst = (decode_clo(env29230))[4];
//not do dummy comment
void* kont28971 = (decode_clo(env29230))[3];
//not do dummy comment
void* x = (decode_clo(env29230))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29230))[1];

//if-clause
bool if_guard29359 = is_true(a2888029090);
if(if_guard29359)
{
void* x2888129091 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28971);
arg_buffer[2] = x2888129091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29361 = alloc_clo(lam29227_fptr, 3);

//setting env list
clo29361[1] = member_u63;
clo29361[2] = x;
clo29361[3] = kont28971;
void* f2897229092 = encode_clo(clo29361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2897229092;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29229 = encode_clo(alloc_clo(lam29229_fptr, 0));

void* lam29231_fptr() // lam29231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29232 = arg_buffer[1];
//reading env and args
void* a2887929088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29232))[6];
//not do dummy comment
void* lst = (decode_clo(env29232))[5];
//not do dummy comment
void* kont28971 = (decode_clo(env29232))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env29232))[3];
//not do dummy comment
void* x = (decode_clo(env29232))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29232))[1];

//creating new closure instance
void** clo29363 = alloc_clo(lam29229_fptr, 5);

//setting env list
clo29363[1] = member_u63;
clo29363[2] = x;
clo29363[3] = kont28971;
clo29363[4] = lst;
clo29363[5] = cdr;
void* f2897329089 = encode_clo(clo29363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2897329089;
arg_buffer[3] = a2887929088;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29231 = encode_clo(alloc_clo(lam29231_fptr, 0));

void* lam29233_fptr() // lam29233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29234 = arg_buffer[1];
//reading env and args
void* a2887729085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29234))[7];
//not do dummy comment
void* lst = (decode_clo(env29234))[6];
//not do dummy comment
void* kont28971 = (decode_clo(env29234))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env29234))[4];
//not do dummy comment
void* x = (decode_clo(env29234))[3];
//not do dummy comment
void* car = (decode_clo(env29234))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env29234))[1];

//if-clause
bool if_guard29364 = is_true(a2887729085);
if(if_guard29364)
{
void* x2887829086 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28971);
arg_buffer[2] = x2887829086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29366 = alloc_clo(lam29231_fptr, 6);

//setting env list
clo29366[1] = member_u63;
clo29366[2] = x;
clo29366[3] = equal_u63;
clo29366[4] = kont28971;
clo29366[5] = lst;
clo29366[6] = cdr;
void* f2897429087 = encode_clo(clo29366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2897429087;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29233 = encode_clo(alloc_clo(lam29233_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29235 = arg_buffer[1];
//reading env and args
void* kont28971 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29368 = alloc_clo(lam29233_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo29368[1] = member_u63;
clo29368[2] = car;
clo29368[3] = x;
clo29368[4] = equal_u63;
clo29368[5] = kont28971;
clo29368[6] = lst;
clo29368[7] = cdr;
void* f2897529084 = encode_clo(clo29368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2897529084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam29236_fptr() // lam29236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29237 = arg_buffer[1];
//reading env and args
void* a2888629101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2888529099 = (decode_clo(env29237))[4];
//not do dummy comment
void* fun = (decode_clo(env29237))[3];
//not do dummy comment
void* kont28976 = (decode_clo(env29237))[2];
//not do dummy comment
void* foldl = (decode_clo(env29237))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont28976;
arg_buffer[3] = fun;
arg_buffer[4] = a2888529099;
arg_buffer[5] = a2888629101;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29236 = encode_clo(alloc_clo(lam29236_fptr, 0));

void* lam29238_fptr() // lam29238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29239 = arg_buffer[1];
//reading env and args
void* a2888529099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29239))[5];
//not do dummy comment
void* lst = (decode_clo(env29239))[4];
//not do dummy comment
void* fun = (decode_clo(env29239))[3];
//not do dummy comment
void* kont28976 = (decode_clo(env29239))[2];
//not do dummy comment
void* foldl = (decode_clo(env29239))[1];

//creating new closure instance
void** clo29370 = alloc_clo(lam29236_fptr, 4);

//setting env list
clo29370[1] = foldl;
clo29370[2] = kont28976;
clo29370[3] = fun;
clo29370[4] = a2888529099;
void* f2897729100 = encode_clo(clo29370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2897729100;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29238 = encode_clo(alloc_clo(lam29238_fptr, 0));

void* lam29240_fptr() // lam29240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29241 = arg_buffer[1];
//reading env and args
void* a2888429097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29241))[6];
//not do dummy comment
void* lst = (decode_clo(env29241))[5];
//not do dummy comment
void* fun = (decode_clo(env29241))[4];
//not do dummy comment
void* foldl = (decode_clo(env29241))[3];
//not do dummy comment
void* acc = (decode_clo(env29241))[2];
//not do dummy comment
void* kont28976 = (decode_clo(env29241))[1];

//creating new closure instance
void** clo29372 = alloc_clo(lam29238_fptr, 5);

//setting env list
clo29372[1] = foldl;
clo29372[2] = kont28976;
clo29372[3] = fun;
clo29372[4] = lst;
clo29372[5] = cdr;
void* f2897829098 = encode_clo(clo29372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2897829098;
arg_buffer[3] = a2888429097;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29240 = encode_clo(alloc_clo(lam29240_fptr, 0));

void* lam29242_fptr() // lam29242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29243 = arg_buffer[1];
//reading env and args
void* a2888329095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29243))[7];
//not do dummy comment
void* lst = (decode_clo(env29243))[6];
//not do dummy comment
void* fun = (decode_clo(env29243))[5];
//not do dummy comment
void* car = (decode_clo(env29243))[4];
//not do dummy comment
void* foldl = (decode_clo(env29243))[3];
//not do dummy comment
void* acc = (decode_clo(env29243))[2];
//not do dummy comment
void* kont28976 = (decode_clo(env29243))[1];

//if-clause
bool if_guard29373 = is_true(a2888329095);
if(if_guard29373)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28976);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28976))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29375 = alloc_clo(lam29240_fptr, 6);

//setting env list
clo29375[1] = kont28976;
clo29375[2] = acc;
clo29375[3] = foldl;
clo29375[4] = fun;
clo29375[5] = lst;
clo29375[6] = cdr;
void* f2897929096 = encode_clo(clo29375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2897929096;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29242 = encode_clo(alloc_clo(lam29242_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29244 = arg_buffer[1];
//reading env and args
void* kont28976 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29377 = alloc_clo(lam29242_fptr, 7);

//setting env list
clo29377[1] = kont28976;
clo29377[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo29377[3] = foldl;
clo29377[4] = car;
clo29377[5] = fun;
clo29377[6] = lst;
clo29377[7] = cdr;
void* f2898029094 = encode_clo(clo29377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2898029094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam29245_fptr() // lam29245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29246 = arg_buffer[1];
//reading env and args
void* a2889029109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28981 = (decode_clo(env29246))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29246))[2];
//not do dummy comment
void* a2888829105 = (decode_clo(env29246))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont28981;
arg_buffer[3] = a2888829105;
arg_buffer[4] = a2889029109;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29245 = encode_clo(alloc_clo(lam29245_fptr, 0));

void* lam29247_fptr() // lam29247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29248 = arg_buffer[1];
//reading env and args
void* a2888929107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28981 = (decode_clo(env29248))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29248))[4];
//not do dummy comment
void* cons = (decode_clo(env29248))[3];
//not do dummy comment
void* a2888829105 = (decode_clo(env29248))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29248))[1];

//creating new closure instance
void** clo29379 = alloc_clo(lam29245_fptr, 3);

//setting env list
clo29379[1] = a2888829105;
clo29379[2] = reverse_u45helper;
clo29379[3] = kont28981;
void* f2898229108 = encode_clo(clo29379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2898229108;
arg_buffer[3] = a2888929107;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29247 = encode_clo(alloc_clo(lam29247_fptr, 0));

void* lam29249_fptr() // lam29249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29250 = arg_buffer[1];
//reading env and args
void* a2888829105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28981 = (decode_clo(env29250))[6];
//not do dummy comment
void* lst = (decode_clo(env29250))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29250))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29250))[3];
//not do dummy comment
void* car = (decode_clo(env29250))[2];
//not do dummy comment
void* cons = (decode_clo(env29250))[1];

//creating new closure instance
void** clo29381 = alloc_clo(lam29247_fptr, 5);

//setting env list
clo29381[1] = lst2;
clo29381[2] = a2888829105;
clo29381[3] = cons;
clo29381[4] = reverse_u45helper;
clo29381[5] = kont28981;
void* f2898329106 = encode_clo(clo29381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2898329106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29249 = encode_clo(alloc_clo(lam29249_fptr, 0));

void* lam29251_fptr() // lam29251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29252 = arg_buffer[1];
//reading env and args
void* a2888729103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29252))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29252))[6];
//not do dummy comment
void* lst2 = (decode_clo(env29252))[5];
//not do dummy comment
void* car = (decode_clo(env29252))[4];
//not do dummy comment
void* cons = (decode_clo(env29252))[3];
//not do dummy comment
void* kont28981 = (decode_clo(env29252))[2];
//not do dummy comment
void* cdr = (decode_clo(env29252))[1];

//if-clause
bool if_guard29382 = is_true(a2888729103);
if(if_guard29382)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28981);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28981))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29384 = alloc_clo(lam29249_fptr, 6);

//setting env list
clo29384[1] = cons;
clo29384[2] = car;
clo29384[3] = lst2;
clo29384[4] = reverse_u45helper;
clo29384[5] = lst;
clo29384[6] = kont28981;
void* f2898429104 = encode_clo(clo29384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2898429104;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29251 = encode_clo(alloc_clo(lam29251_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29253 = arg_buffer[1];
//reading env and args
void* kont28981 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29386 = alloc_clo(lam29251_fptr, 7);

//setting env list
clo29386[1] = cdr;
clo29386[2] = kont28981;
clo29386[3] = cons;
clo29386[4] = car;
clo29386[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo29386[6] = reverse_u45helper;
clo29386[7] = lst;
void* f2898529102 = encode_clo(clo29386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2898529102;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam29254_fptr() // lam29254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29255 = arg_buffer[1];
//reading env and args
void* a2889129111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29255))[3];
//not do dummy comment
void* kont28986 = (decode_clo(env29255))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env29255))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont28986;
arg_buffer[3] = lst;
arg_buffer[4] = a2889129111;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29254 = encode_clo(alloc_clo(lam29254_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29256 = arg_buffer[1];
//reading env and args
void* kont28986 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29388 = alloc_clo(lam29254_fptr, 3);

//setting env list
clo29388[1] = reverse_u45helper;
clo29388[2] = kont28986;
clo29388[3] = lst;
void* f2898729110 = encode_clo(clo29388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2898729110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam29257_fptr() // lam29257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29258 = arg_buffer[1];
//reading env and args
void* x2889429116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28988 = (decode_clo(env29258))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28988);
arg_buffer[2] = x2889429116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28988))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29257 = encode_clo(alloc_clo(lam29257_fptr, 0));

void* lam29259_fptr() // lam29259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29260 = arg_buffer[1];
//reading env and args
void* a2889929125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28988 = (decode_clo(env29260))[4];
//not do dummy comment
void* a2889529118 = (decode_clo(env29260))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29260))[2];
//not do dummy comment
void* a2889729121 = (decode_clo(env29260))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont28988;
arg_buffer[3] = a2889529118;
arg_buffer[4] = a2889729121;
arg_buffer[5] = a2889929125;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29259 = encode_clo(alloc_clo(lam29259_fptr, 0));

void* lam29261_fptr() // lam29261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29262 = arg_buffer[1];
//reading env and args
void* a2889829123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28988 = (decode_clo(env29262))[6];
//not do dummy comment
void* a2889529118 = (decode_clo(env29262))[5];
//not do dummy comment
void* cons = (decode_clo(env29262))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env29262))[3];
//not do dummy comment
void* a2889729121 = (decode_clo(env29262))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29262))[1];

//creating new closure instance
void** clo29390 = alloc_clo(lam29259_fptr, 4);

//setting env list
clo29390[1] = a2889729121;
clo29390[2] = take_u45helper;
clo29390[3] = a2889529118;
clo29390[4] = kont28988;
void* f2899029124 = encode_clo(clo29390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2899029124;
arg_buffer[3] = a2889829123;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29261 = encode_clo(alloc_clo(lam29261_fptr, 0));

void* lam29263_fptr() // lam29263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29264 = arg_buffer[1];
//reading env and args
void* a2889729121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29264))[7];
//not do dummy comment
void* kont28988 = (decode_clo(env29264))[6];
//not do dummy comment
void* a2889529118 = (decode_clo(env29264))[5];
//not do dummy comment
void* car = (decode_clo(env29264))[4];
//not do dummy comment
void* cons = (decode_clo(env29264))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env29264))[2];
//not do dummy comment
void* lst2 = (decode_clo(env29264))[1];

//creating new closure instance
void** clo29392 = alloc_clo(lam29261_fptr, 6);

//setting env list
clo29392[1] = lst2;
clo29392[2] = a2889729121;
clo29392[3] = take_u45helper;
clo29392[4] = cons;
clo29392[5] = a2889529118;
clo29392[6] = kont28988;
void* f2899129122 = encode_clo(clo29392);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2899129122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29263 = encode_clo(alloc_clo(lam29263_fptr, 0));

void* lam29266_fptr() // lam29266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29267 = arg_buffer[1];
//reading env and args
void* a2889529118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29267))[8];
//not do dummy comment
void* kont28988 = (decode_clo(env29267))[7];
//not do dummy comment
void* cons = (decode_clo(env29267))[6];
//not do dummy comment
void* _u45 = (decode_clo(env29267))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29267))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29267))[3];
//not do dummy comment
void* n = (decode_clo(env29267))[2];
//not do dummy comment
void* car = (decode_clo(env29267))[1];
mpz_t* mpzvar29393 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29393, "1", 10);
void* a2889629119 = encode_mpz(mpzvar29393);

//creating new closure instance
void** clo29395 = alloc_clo(lam29263_fptr, 7);

//setting env list
clo29395[1] = lst2;
clo29395[2] = take_u45helper;
clo29395[3] = cons;
clo29395[4] = car;
clo29395[5] = a2889529118;
clo29395[6] = kont28988;
clo29395[7] = lst;
void* f2899229120 = encode_clo(clo29395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2899229120;
arg_buffer[3] = n;
arg_buffer[4] = a2889629119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29266 = encode_clo(alloc_clo(lam29266_fptr, 0));

void* lam29268_fptr() // lam29268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29269 = arg_buffer[1];
//reading env and args
void* a2889329114 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29269))[10];
//not do dummy comment
void* lst = (decode_clo(env29269))[9];
//not do dummy comment
void* cons = (decode_clo(env29269))[8];
//not do dummy comment
void* _u45 = (decode_clo(env29269))[7];
//not do dummy comment
void* kont28988 = (decode_clo(env29269))[6];
//not do dummy comment
void* reverse = (decode_clo(env29269))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env29269))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29269))[3];
//not do dummy comment
void* n = (decode_clo(env29269))[2];
//not do dummy comment
void* car = (decode_clo(env29269))[1];

//if-clause
bool if_guard29396 = is_true(a2889329114);
if(if_guard29396)
{

//creating new closure instance
void** clo29398 = alloc_clo(lam29257_fptr, 1);

//setting env list
clo29398[1] = kont28988;
void* f2898929115 = encode_clo(clo29398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2898929115;
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
void** clo29400 = alloc_clo(lam29266_fptr, 8);

//setting env list
clo29400[1] = car;
clo29400[2] = n;
clo29400[3] = lst2;
clo29400[4] = take_u45helper;
clo29400[5] = _u45;
clo29400[6] = cons;
clo29400[7] = kont28988;
clo29400[8] = lst;
void* f2899329117 = encode_clo(clo29400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2899329117;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29268 = encode_clo(alloc_clo(lam29268_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29271 = arg_buffer[1];
//reading env and args
void* kont28988 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar29401 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29401, "0", 10);
void* a2889229112 = encode_mpz(mpzvar29401);

//creating new closure instance
void** clo29403 = alloc_clo(lam29268_fptr, 10);

//setting env list
clo29403[1] = car;
clo29403[2] = n;
clo29403[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo29403[4] = take_u45helper;
clo29403[5] = reverse;
clo29403[6] = kont28988;
clo29403[7] = _u45;
clo29403[8] = cons;
clo29403[9] = lst;
clo29403[10] = cdr;
void* f2899429113 = encode_clo(clo29403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2899429113;
arg_buffer[3] = n;
arg_buffer[4] = a2889229112;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam29272_fptr() // lam29272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29273 = arg_buffer[1];
//reading env and args
void* a2890029127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29273))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env29273))[3];
//not do dummy comment
void* n = (decode_clo(env29273))[2];
//not do dummy comment
void* kont28995 = (decode_clo(env29273))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont28995;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2890029127;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29272 = encode_clo(alloc_clo(lam29272_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29274 = arg_buffer[1];
//reading env and args
void* kont28995 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29405 = alloc_clo(lam29272_fptr, 4);

//setting env list
clo29405[1] = kont28995;
clo29405[2] = n;
clo29405[3] = take_u45helper;
clo29405[4] = lst;
void* f2899629126 = encode_clo(clo29405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2899629126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam29276_fptr() // lam29276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29277 = arg_buffer[1];
//reading env and args
void* a2890529135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28997 = (decode_clo(env29277))[3];
//not do dummy comment
void* a2890329131 = (decode_clo(env29277))[2];
//not do dummy comment
void* _u43 = (decode_clo(env29277))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont28997;
arg_buffer[3] = a2890329131;
arg_buffer[4] = a2890529135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29276 = encode_clo(alloc_clo(lam29276_fptr, 0));

void* lam29278_fptr() // lam29278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29279 = arg_buffer[1];
//reading env and args
void* a2890429133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont28997 = (decode_clo(env29279))[4];
//not do dummy comment
void* length = (decode_clo(env29279))[3];
//not do dummy comment
void* a2890329131 = (decode_clo(env29279))[2];
//not do dummy comment
void* _u43 = (decode_clo(env29279))[1];

//creating new closure instance
void** clo29407 = alloc_clo(lam29276_fptr, 3);

//setting env list
clo29407[1] = _u43;
clo29407[2] = a2890329131;
clo29407[3] = kont28997;
void* f2899829134 = encode_clo(clo29407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2899829134;
arg_buffer[3] = a2890429133;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29278 = encode_clo(alloc_clo(lam29278_fptr, 0));

void* lam29281_fptr() // lam29281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29282 = arg_buffer[1];
//reading env and args
void* a2890129129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29282))[5];
//not do dummy comment
void* length = (decode_clo(env29282))[4];
//not do dummy comment
void* _u43 = (decode_clo(env29282))[3];
//not do dummy comment
void* kont28997 = (decode_clo(env29282))[2];
//not do dummy comment
void* cdr = (decode_clo(env29282))[1];

//if-clause
bool if_guard29408 = is_true(a2890129129);
if(if_guard29408)
{
mpz_t* mpzvar29409 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29409, "0", 10);
void* x2890229130 = encode_mpz(mpzvar29409);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont28997);
arg_buffer[2] = x2890229130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont28997))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar29410 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29410, "1", 10);
void* a2890329131 = encode_mpz(mpzvar29410);

//creating new closure instance
void** clo29412 = alloc_clo(lam29278_fptr, 4);

//setting env list
clo29412[1] = _u43;
clo29412[2] = a2890329131;
clo29412[3] = length;
clo29412[4] = kont28997;
void* f2899929132 = encode_clo(clo29412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2899929132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29281 = encode_clo(alloc_clo(lam29281_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29283 = arg_buffer[1];
//reading env and args
void* kont28997 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29414 = alloc_clo(lam29281_fptr, 5);

//setting env list
clo29414[1] = cdr;
clo29414[2] = kont28997;
clo29414[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo29414[4] = length;
clo29414[5] = lst;
void* f2900029128 = encode_clo(clo29414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2900029128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam29284_fptr() // lam29284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29285 = arg_buffer[1];
//reading env and args
void* x2890729139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29001 = (decode_clo(env29285))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29001);
arg_buffer[2] = x2890729139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29001))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29284 = encode_clo(alloc_clo(lam29284_fptr, 0));

void* lam29286_fptr() // lam29286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29287 = arg_buffer[1];
//reading env and args
void* a2891129147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2890929143 = (decode_clo(env29287))[3];
//not do dummy comment
void* kont29001 = (decode_clo(env29287))[2];
//not do dummy comment
void* cons = (decode_clo(env29287))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29001;
arg_buffer[3] = a2890929143;
arg_buffer[4] = a2891129147;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29286 = encode_clo(alloc_clo(lam29286_fptr, 0));

void* lam29288_fptr() // lam29288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29289 = arg_buffer[1];
//reading env and args
void* a2891029145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2890929143 = (decode_clo(env29289))[5];
//not do dummy comment
void* kont29001 = (decode_clo(env29289))[4];
//not do dummy comment
void* map = (decode_clo(env29289))[3];
//not do dummy comment
void* proc = (decode_clo(env29289))[2];
//not do dummy comment
void* cons = (decode_clo(env29289))[1];

//creating new closure instance
void** clo29416 = alloc_clo(lam29286_fptr, 3);

//setting env list
clo29416[1] = cons;
clo29416[2] = kont29001;
clo29416[3] = a2890929143;
void* f2900329146 = encode_clo(clo29416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2900329146;
arg_buffer[3] = proc;
arg_buffer[4] = a2891029145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29288 = encode_clo(alloc_clo(lam29288_fptr, 0));

void* lam29290_fptr() // lam29290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29291 = arg_buffer[1];
//reading env and args
void* a2890929143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29291))[6];
//not do dummy comment
void* map = (decode_clo(env29291))[5];
//not do dummy comment
void* proc = (decode_clo(env29291))[4];
//not do dummy comment
void* cons = (decode_clo(env29291))[3];
//not do dummy comment
void* lst = (decode_clo(env29291))[2];
//not do dummy comment
void* kont29001 = (decode_clo(env29291))[1];

//creating new closure instance
void** clo29418 = alloc_clo(lam29288_fptr, 5);

//setting env list
clo29418[1] = cons;
clo29418[2] = proc;
clo29418[3] = map;
clo29418[4] = kont29001;
clo29418[5] = a2890929143;
void* f2900429144 = encode_clo(clo29418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2900429144;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29290 = encode_clo(alloc_clo(lam29290_fptr, 0));

void* lam29292_fptr() // lam29292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29293 = arg_buffer[1];
//reading env and args
void* a2890829141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29293))[6];
//not do dummy comment
void* map = (decode_clo(env29293))[5];
//not do dummy comment
void* proc = (decode_clo(env29293))[4];
//not do dummy comment
void* cons = (decode_clo(env29293))[3];
//not do dummy comment
void* lst = (decode_clo(env29293))[2];
//not do dummy comment
void* kont29001 = (decode_clo(env29293))[1];

//creating new closure instance
void** clo29420 = alloc_clo(lam29290_fptr, 6);

//setting env list
clo29420[1] = kont29001;
clo29420[2] = lst;
clo29420[3] = cons;
clo29420[4] = proc;
clo29420[5] = map;
clo29420[6] = cdr;
void* f2900529142 = encode_clo(clo29420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2900529142;
arg_buffer[3] = a2890829141;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29292 = encode_clo(alloc_clo(lam29292_fptr, 0));

void* lam29294_fptr() // lam29294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29295 = arg_buffer[1];
//reading env and args
void* a2890629137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env29295))[8];
//not do dummy comment
void* proc = (decode_clo(env29295))[7];
//not do dummy comment
void* car = (decode_clo(env29295))[6];
//not do dummy comment
void* cons = (decode_clo(env29295))[5];
//not do dummy comment
void* list = (decode_clo(env29295))[4];
//not do dummy comment
void* cdr = (decode_clo(env29295))[3];
//not do dummy comment
void* lst = (decode_clo(env29295))[2];
//not do dummy comment
void* kont29001 = (decode_clo(env29295))[1];

//if-clause
bool if_guard29421 = is_true(a2890629137);
if(if_guard29421)
{

//creating new closure instance
void** clo29423 = alloc_clo(lam29284_fptr, 1);

//setting env list
clo29423[1] = kont29001;
void* f2900229138 = encode_clo(clo29423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2900229138;
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
void** clo29425 = alloc_clo(lam29292_fptr, 6);

//setting env list
clo29425[1] = kont29001;
clo29425[2] = lst;
clo29425[3] = cons;
clo29425[4] = proc;
clo29425[5] = map;
clo29425[6] = cdr;
void* f2900629140 = encode_clo(clo29425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2900629140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29294 = encode_clo(alloc_clo(lam29294_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29296 = arg_buffer[1];
//reading env and args
void* kont29001 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29427 = alloc_clo(lam29294_fptr, 8);

//setting env list
clo29427[1] = kont29001;
clo29427[2] = lst;
clo29427[3] = cdr;
clo29427[4] = list;
clo29427[5] = cons;
clo29427[6] = car;
clo29427[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo29427[8] = map;
void* f2900729136 = encode_clo(clo29427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2900729136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam29297_fptr() // lam29297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29298 = arg_buffer[1];
//reading env and args
void* x2891329151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29008 = (decode_clo(env29298))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29008);
arg_buffer[2] = x2891329151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29008))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29297 = encode_clo(alloc_clo(lam29297_fptr, 0));

void* lam29299_fptr() // lam29299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29300 = arg_buffer[1];
//reading env and args
void* a2891829161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2891629157 = (decode_clo(env29300))[3];
//not do dummy comment
void* kont29008 = (decode_clo(env29300))[2];
//not do dummy comment
void* cons = (decode_clo(env29300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29008;
arg_buffer[3] = a2891629157;
arg_buffer[4] = a2891829161;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29299 = encode_clo(alloc_clo(lam29299_fptr, 0));

void* lam29301_fptr() // lam29301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29302 = arg_buffer[1];
//reading env and args
void* a2891729159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2891629157 = (decode_clo(env29302))[5];
//not do dummy comment
void* op = (decode_clo(env29302))[4];
//not do dummy comment
void* kont29008 = (decode_clo(env29302))[3];
//not do dummy comment
void* filter = (decode_clo(env29302))[2];
//not do dummy comment
void* cons = (decode_clo(env29302))[1];

//creating new closure instance
void** clo29429 = alloc_clo(lam29299_fptr, 3);

//setting env list
clo29429[1] = cons;
clo29429[2] = kont29008;
clo29429[3] = a2891629157;
void* f2901029160 = encode_clo(clo29429);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2901029160;
arg_buffer[3] = op;
arg_buffer[4] = a2891729159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29301 = encode_clo(alloc_clo(lam29301_fptr, 0));

void* lam29303_fptr() // lam29303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29304 = arg_buffer[1];
//reading env and args
void* a2891629157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29304))[6];
//not do dummy comment
void* lst = (decode_clo(env29304))[5];
//not do dummy comment
void* op = (decode_clo(env29304))[4];
//not do dummy comment
void* kont29008 = (decode_clo(env29304))[3];
//not do dummy comment
void* filter = (decode_clo(env29304))[2];
//not do dummy comment
void* cons = (decode_clo(env29304))[1];

//creating new closure instance
void** clo29431 = alloc_clo(lam29301_fptr, 5);

//setting env list
clo29431[1] = cons;
clo29431[2] = filter;
clo29431[3] = kont29008;
clo29431[4] = op;
clo29431[5] = a2891629157;
void* f2901129158 = encode_clo(clo29431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2901129158;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29303 = encode_clo(alloc_clo(lam29303_fptr, 0));

void* lam29305_fptr() // lam29305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29306 = arg_buffer[1];
//reading env and args
void* a2891929163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env29306))[3];
//not do dummy comment
void* kont29008 = (decode_clo(env29306))[2];
//not do dummy comment
void* filter = (decode_clo(env29306))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont29008;
arg_buffer[3] = op;
arg_buffer[4] = a2891929163;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29305 = encode_clo(alloc_clo(lam29305_fptr, 0));

void* lam29307_fptr() // lam29307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29308 = arg_buffer[1];
//reading env and args
void* a2891529155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29308))[7];
//not do dummy comment
void* lst = (decode_clo(env29308))[6];
//not do dummy comment
void* op = (decode_clo(env29308))[5];
//not do dummy comment
void* kont29008 = (decode_clo(env29308))[4];
//not do dummy comment
void* cons = (decode_clo(env29308))[3];
//not do dummy comment
void* filter = (decode_clo(env29308))[2];
//not do dummy comment
void* car = (decode_clo(env29308))[1];

//if-clause
bool if_guard29432 = is_true(a2891529155);
if(if_guard29432)
{

//creating new closure instance
void** clo29434 = alloc_clo(lam29303_fptr, 6);

//setting env list
clo29434[1] = cons;
clo29434[2] = filter;
clo29434[3] = kont29008;
clo29434[4] = op;
clo29434[5] = lst;
clo29434[6] = cdr;
void* f2901229156 = encode_clo(clo29434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2901229156;
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
void** clo29436 = alloc_clo(lam29305_fptr, 3);

//setting env list
clo29436[1] = filter;
clo29436[2] = kont29008;
clo29436[3] = op;
void* f2901329162 = encode_clo(clo29436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2901329162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29307 = encode_clo(alloc_clo(lam29307_fptr, 0));

void* lam29309_fptr() // lam29309 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29310 = arg_buffer[1];
//reading env and args
void* a2891429153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29310))[7];
//not do dummy comment
void* lst = (decode_clo(env29310))[6];
//not do dummy comment
void* op = (decode_clo(env29310))[5];
//not do dummy comment
void* kont29008 = (decode_clo(env29310))[4];
//not do dummy comment
void* cons = (decode_clo(env29310))[3];
//not do dummy comment
void* filter = (decode_clo(env29310))[2];
//not do dummy comment
void* car = (decode_clo(env29310))[1];

//creating new closure instance
void** clo29438 = alloc_clo(lam29307_fptr, 7);

//setting env list
clo29438[1] = car;
clo29438[2] = filter;
clo29438[3] = cons;
clo29438[4] = kont29008;
clo29438[5] = op;
clo29438[6] = lst;
clo29438[7] = cdr;
void* f2901429154 = encode_clo(clo29438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2901429154;
arg_buffer[3] = a2891429153;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29309 = encode_clo(alloc_clo(lam29309_fptr, 0));

void* lam29311_fptr() // lam29311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29312 = arg_buffer[1];
//reading env and args
void* a2891229149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env29312))[8];
//not do dummy comment
void* op = (decode_clo(env29312))[7];
//not do dummy comment
void* kont29008 = (decode_clo(env29312))[6];
//not do dummy comment
void* cons = (decode_clo(env29312))[5];
//not do dummy comment
void* list = (decode_clo(env29312))[4];
//not do dummy comment
void* cdr = (decode_clo(env29312))[3];
//not do dummy comment
void* filter = (decode_clo(env29312))[2];
//not do dummy comment
void* car = (decode_clo(env29312))[1];

//if-clause
bool if_guard29439 = is_true(a2891229149);
if(if_guard29439)
{

//creating new closure instance
void** clo29441 = alloc_clo(lam29297_fptr, 1);

//setting env list
clo29441[1] = kont29008;
void* f2900929150 = encode_clo(clo29441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2900929150;
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
void** clo29443 = alloc_clo(lam29309_fptr, 7);

//setting env list
clo29443[1] = car;
clo29443[2] = filter;
clo29443[3] = cons;
clo29443[4] = kont29008;
clo29443[5] = op;
clo29443[6] = lst;
clo29443[7] = cdr;
void* f2901529152 = encode_clo(clo29443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2901529152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29311 = encode_clo(alloc_clo(lam29311_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29313 = arg_buffer[1];
//reading env and args
void* kont29008 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29445 = alloc_clo(lam29311_fptr, 8);

//setting env list
clo29445[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo29445[2] = filter;
clo29445[3] = cdr;
clo29445[4] = list;
clo29445[5] = cons;
clo29445[6] = kont29008;
clo29445[7] = op;
clo29445[8] = lst;
void* f2901629148 = encode_clo(clo29445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2901629148;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam29314_fptr() // lam29314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29315 = arg_buffer[1];
//reading env and args
void* a2892429171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2892229168 = (decode_clo(env29315))[3];
//not do dummy comment
void* kont29017 = (decode_clo(env29315))[2];
//not do dummy comment
void* drop = (decode_clo(env29315))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont29017;
arg_buffer[3] = a2892229168;
arg_buffer[4] = a2892429171;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29314 = encode_clo(alloc_clo(lam29314_fptr, 0));

void* lam29317_fptr() // lam29317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29318 = arg_buffer[1];
//reading env and args
void* a2892229168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env29318))[4];
//not do dummy comment
void* _u45 = (decode_clo(env29318))[3];
//not do dummy comment
void* kont29017 = (decode_clo(env29318))[2];
//not do dummy comment
void* drop = (decode_clo(env29318))[1];
mpz_t* mpzvar29446 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29446, "1", 10);
void* a2892329169 = encode_mpz(mpzvar29446);

//creating new closure instance
void** clo29448 = alloc_clo(lam29314_fptr, 3);

//setting env list
clo29448[1] = drop;
clo29448[2] = kont29017;
clo29448[3] = a2892229168;
void* f2901829170 = encode_clo(clo29448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2901829170;
arg_buffer[3] = n;
arg_buffer[4] = a2892329169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29317 = encode_clo(alloc_clo(lam29317_fptr, 0));

void* lam29319_fptr() // lam29319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29320 = arg_buffer[1];
//reading env and args
void* a2892129166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29320))[6];
//not do dummy comment
void* n = (decode_clo(env29320))[5];
//not do dummy comment
void* _u45 = (decode_clo(env29320))[4];
//not do dummy comment
void* lst = (decode_clo(env29320))[3];
//not do dummy comment
void* kont29017 = (decode_clo(env29320))[2];
//not do dummy comment
void* drop = (decode_clo(env29320))[1];

//if-clause
bool if_guard29449 = is_true(a2892129166);
if(if_guard29449)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29017);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29017))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29451 = alloc_clo(lam29317_fptr, 4);

//setting env list
clo29451[1] = drop;
clo29451[2] = kont29017;
clo29451[3] = _u45;
clo29451[4] = n;
void* f2901929167 = encode_clo(clo29451);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2901929167;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29319 = encode_clo(alloc_clo(lam29319_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29322 = arg_buffer[1];
//reading env and args
void* kont29017 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar29452 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29452, "0", 10);
void* a2892029164 = encode_mpz(mpzvar29452);

//creating new closure instance
void** clo29454 = alloc_clo(lam29319_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo29454[1] = drop;
clo29454[2] = kont29017;
clo29454[3] = lst;
clo29454[4] = _u45;
clo29454[5] = n;
clo29454[6] = cdr;
void* f2902029165 = encode_clo(clo29454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2902029165;
arg_buffer[3] = n;
arg_buffer[4] = a2892029164;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam29323_fptr() // lam29323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29324 = arg_buffer[1];
//reading env and args
void* a2892829179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2892629175 = (decode_clo(env29324))[3];
//not do dummy comment
void* kont29021 = (decode_clo(env29324))[2];
//not do dummy comment
void* proc = (decode_clo(env29324))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont29021;
arg_buffer[3] = a2892629175;
arg_buffer[4] = a2892829179;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29323 = encode_clo(alloc_clo(lam29323_fptr, 0));

void* lam29325_fptr() // lam29325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29326 = arg_buffer[1];
//reading env and args
void* a2892729177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2892629175 = (decode_clo(env29326))[5];
//not do dummy comment
void* foldr = (decode_clo(env29326))[4];
//not do dummy comment
void* kont29021 = (decode_clo(env29326))[3];
//not do dummy comment
void* proc = (decode_clo(env29326))[2];
//not do dummy comment
void* acc = (decode_clo(env29326))[1];

//creating new closure instance
void** clo29456 = alloc_clo(lam29323_fptr, 3);

//setting env list
clo29456[1] = proc;
clo29456[2] = kont29021;
clo29456[3] = a2892629175;
void* f2902229178 = encode_clo(clo29456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2902229178;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2892729177;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29325 = encode_clo(alloc_clo(lam29325_fptr, 0));

void* lam29327_fptr() // lam29327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29328 = arg_buffer[1];
//reading env and args
void* a2892629175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29328))[6];
//not do dummy comment
void* kont29021 = (decode_clo(env29328))[5];
//not do dummy comment
void* foldr = (decode_clo(env29328))[4];
//not do dummy comment
void* lst = (decode_clo(env29328))[3];
//not do dummy comment
void* proc = (decode_clo(env29328))[2];
//not do dummy comment
void* acc = (decode_clo(env29328))[1];

//creating new closure instance
void** clo29458 = alloc_clo(lam29325_fptr, 5);

//setting env list
clo29458[1] = acc;
clo29458[2] = proc;
clo29458[3] = kont29021;
clo29458[4] = foldr;
clo29458[5] = a2892629175;
void* f2902329176 = encode_clo(clo29458);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2902329176;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29327 = encode_clo(alloc_clo(lam29327_fptr, 0));

void* lam29329_fptr() // lam29329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29330 = arg_buffer[1];
//reading env and args
void* a2892529173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29330))[7];
//not do dummy comment
void* kont29021 = (decode_clo(env29330))[6];
//not do dummy comment
void* car = (decode_clo(env29330))[5];
//not do dummy comment
void* foldr = (decode_clo(env29330))[4];
//not do dummy comment
void* lst = (decode_clo(env29330))[3];
//not do dummy comment
void* proc = (decode_clo(env29330))[2];
//not do dummy comment
void* acc = (decode_clo(env29330))[1];

//if-clause
bool if_guard29459 = is_true(a2892529173);
if(if_guard29459)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29021);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29021))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29461 = alloc_clo(lam29327_fptr, 6);

//setting env list
clo29461[1] = acc;
clo29461[2] = proc;
clo29461[3] = lst;
clo29461[4] = foldr;
clo29461[5] = kont29021;
clo29461[6] = cdr;
void* f2902429174 = encode_clo(clo29461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2902429174;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29329 = encode_clo(alloc_clo(lam29329_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29331 = arg_buffer[1];
//reading env and args
void* kont29021 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29463 = alloc_clo(lam29329_fptr, 7);

//setting env list
clo29463[1] = acc;
clo29463[2] = proc;
clo29463[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo29463[4] = foldr;
clo29463[5] = car;
clo29463[6] = kont29021;
clo29463[7] = cdr;
void* f2902529172 = encode_clo(clo29463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2902529172;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam29332_fptr() // lam29332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29333 = arg_buffer[1];
//reading env and args
void* a2893229187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2893029183 = (decode_clo(env29333))[3];
//not do dummy comment
void* kont29026 = (decode_clo(env29333))[2];
//not do dummy comment
void* cons = (decode_clo(env29333))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29026;
arg_buffer[3] = a2893029183;
arg_buffer[4] = a2893229187;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29332 = encode_clo(alloc_clo(lam29332_fptr, 0));

void* lam29334_fptr() // lam29334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29335 = arg_buffer[1];
//reading env and args
void* a2893129185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env29335))[5];
//not do dummy comment
void* a2893029183 = (decode_clo(env29335))[4];
//not do dummy comment
void* lst2 = (decode_clo(env29335))[3];
//not do dummy comment
void* kont29026 = (decode_clo(env29335))[2];
//not do dummy comment
void* cons = (decode_clo(env29335))[1];

//creating new closure instance
void** clo29465 = alloc_clo(lam29332_fptr, 3);

//setting env list
clo29465[1] = cons;
clo29465[2] = kont29026;
clo29465[3] = a2893029183;
void* f2902729186 = encode_clo(clo29465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2902729186;
arg_buffer[3] = a2893129185;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29334 = encode_clo(alloc_clo(lam29334_fptr, 0));

void* lam29336_fptr() // lam29336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29337 = arg_buffer[1];
//reading env and args
void* a2893029183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29337))[6];
//not do dummy comment
void* append = (decode_clo(env29337))[5];
//not do dummy comment
void* lst2 = (decode_clo(env29337))[4];
//not do dummy comment
void* cons = (decode_clo(env29337))[3];
//not do dummy comment
void* lst1 = (decode_clo(env29337))[2];
//not do dummy comment
void* kont29026 = (decode_clo(env29337))[1];

//creating new closure instance
void** clo29467 = alloc_clo(lam29334_fptr, 5);

//setting env list
clo29467[1] = cons;
clo29467[2] = kont29026;
clo29467[3] = lst2;
clo29467[4] = a2893029183;
clo29467[5] = append;
void* f2902829184 = encode_clo(clo29467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2902829184;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29336 = encode_clo(alloc_clo(lam29336_fptr, 0));

void* lam29338_fptr() // lam29338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29339 = arg_buffer[1];
//reading env and args
void* a2892929181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env29339))[7];
//not do dummy comment
void* append = (decode_clo(env29339))[6];
//not do dummy comment
void* lst2 = (decode_clo(env29339))[5];
//not do dummy comment
void* cons = (decode_clo(env29339))[4];
//not do dummy comment
void* car = (decode_clo(env29339))[3];
//not do dummy comment
void* lst1 = (decode_clo(env29339))[2];
//not do dummy comment
void* kont29026 = (decode_clo(env29339))[1];

//if-clause
bool if_guard29468 = is_true(a2892929181);
if(if_guard29468)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29026);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29026))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29470 = alloc_clo(lam29336_fptr, 6);

//setting env list
clo29470[1] = kont29026;
clo29470[2] = lst1;
clo29470[3] = cons;
clo29470[4] = lst2;
clo29470[5] = append;
clo29470[6] = cdr;
void* f2902929182 = encode_clo(clo29470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2902929182;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam29338 = encode_clo(alloc_clo(lam29338_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29340 = arg_buffer[1];
//reading env and args
void* kont29026 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29472 = alloc_clo(lam29338_fptr, 7);

//setting env list
clo29472[1] = kont29026;
clo29472[2] = lst1;
clo29472[3] = car;
clo29472[4] = cons;
clo29472[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo29472[6] = append;
clo29472[7] = cdr;
void* f2903029180 = encode_clo(clo29472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2903029180;
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
void* _29341 = arg_buffer[1];
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

void* kont2903129188 = prim_car(lst);
void* lst29189 = prim_cdr(lst);
void* x2893329190 = apply_prim_hash(lst29189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2903129188);
arg_buffer[2] = x2893329190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2903129188))[0]);
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
void* _29342 = arg_buffer[1];
//reading env and args
void* kont29033 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2893429191 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29033);
arg_buffer[2] = x2893429191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29033))[0]);
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
void* _29343 = arg_buffer[1];
//reading env and args
void* kont29034 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2893529192 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29034);
arg_buffer[2] = x2893529192;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29034))[0]);
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
void* _29344 = arg_buffer[1];
//reading env and args
void* kont29035 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2893629193 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29035);
arg_buffer[2] = x2893629193;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29035))[0]);
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
void* _29345 = arg_buffer[1];
//reading env and args
void* kont29036 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2893729194 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29036);
arg_buffer[2] = x2893729194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29036))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29347 = arg_buffer[1];
//reading env and args
void* kont29037 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar29473 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29473, "42", 10);
void* x2893829195 = encode_mpz(mpzvar29473);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29037);
arg_buffer[2] = x2893829195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29037))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam29348_fptr() // lam29348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env29349 = arg_buffer[1];
//reading env and args
void* x2893929197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29038 = (decode_clo(env29349))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29038);
arg_buffer[2] = x2893929197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29038))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam29348 = encode_clo(alloc_clo(lam29348_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _29350 = arg_buffer[1];
//reading env and args
void* kont29038 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo29475 = alloc_clo(lam29348_fptr, 1);

//setting env list
clo29475[1] = kont29038;
void* f2903929196 = encode_clo(clo29475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2903929196;
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

