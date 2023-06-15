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
void* _22252 = arg_buffer[1];
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

void* kont2198922090 = prim_car(lst);
void* lst22091 = prim_cdr(lst);
void* x2190122092 = apply_prim__u43(lst22091);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2198922090);
arg_buffer[2] = x2190122092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2198922090))[0]);
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
void* _22253 = arg_buffer[1];
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

void* kont2199122093 = prim_car(lst);
void* lst22094 = prim_cdr(lst);
void* x2190222095 = apply_prim__u45(lst22094);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2199122093);
arg_buffer[2] = x2190222095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2199122093))[0]);
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
void* _22254 = arg_buffer[1];
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

void* kont2199322096 = prim_car(lst);
void* lst22097 = prim_cdr(lst);
void* x2190322098 = apply_prim__u42(lst22097);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2199322096);
arg_buffer[2] = x2190322098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2199322096))[0]);
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
void* _22255 = arg_buffer[1];
//reading env and args
void* kont21995 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2190422099 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21995);
arg_buffer[2] = x2190422099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21995))[0]);
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
void* _22256 = arg_buffer[1];
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

void* kont2199622100 = prim_car(lst);
void* lst22101 = prim_cdr(lst);
void* x2190522102 = apply_prim__u47(lst22101);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2199622100);
arg_buffer[2] = x2190522102;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2199622100))[0]);
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
void* _22257 = arg_buffer[1];
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

void* kont2199822103 = prim_car(lst);
void* lst22104 = prim_cdr(lst);
void* x2190622105 = apply_prim__u61(lst22104);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2199822103);
arg_buffer[2] = x2190622105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2199822103))[0]);
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
void* _22258 = arg_buffer[1];
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

void* kont2200022106 = prim_car(lst);
void* lst22107 = prim_cdr(lst);
void* x2190722108 = apply_prim__u62(lst22107);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2200022106);
arg_buffer[2] = x2190722108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2200022106))[0]);
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
void* _22259 = arg_buffer[1];
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

void* kont2200222109 = prim_car(lst);
void* lst22110 = prim_cdr(lst);
void* x2190822111 = apply_prim__u60(lst22110);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2200222109);
arg_buffer[2] = x2190822111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2200222109))[0]);
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
void* _22260 = arg_buffer[1];
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

void* kont2200422112 = prim_car(lst);
void* lst22113 = prim_cdr(lst);
void* x2190922114 = apply_prim__u60_u61(lst22113);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2200422112);
arg_buffer[2] = x2190922114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2200422112))[0]);
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
void* _22261 = arg_buffer[1];
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

void* kont2200622115 = prim_car(lst);
void* lst22116 = prim_cdr(lst);
void* x2191022117 = apply_prim__u62_u61(lst22116);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2200622115);
arg_buffer[2] = x2191022117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2200622115))[0]);
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
void* _22262 = arg_buffer[1];
//reading env and args
void* kont22008 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2191122118 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22008);
arg_buffer[2] = x2191122118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22008))[0]);
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
void* _22263 = arg_buffer[1];
//reading env and args
void* kont22009 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2191222119 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22009);
arg_buffer[2] = x2191222119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22009))[0]);
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
void* _22264 = arg_buffer[1];
//reading env and args
void* kont22010 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2191322120 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22010);
arg_buffer[2] = x2191322120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22010))[0]);
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
void* _22265 = arg_buffer[1];
//reading env and args
void* kont22011 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2191422121 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22011);
arg_buffer[2] = x2191422121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22011))[0]);
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
void* _22266 = arg_buffer[1];
//reading env and args
void* kont22012 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2191522122 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22012);
arg_buffer[2] = x2191522122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22012))[0]);
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
void* _22267 = arg_buffer[1];
//reading env and args
void* kont22013 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2191622123 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22013);
arg_buffer[2] = x2191622123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22013))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam22268_fptr() // lam22268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22269 = arg_buffer[1];
//reading env and args
void* a2191922127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env22269))[3];
//not do dummy comment
void* a2191722124 = (decode_clo(env22269))[2];
//not do dummy comment
void* kont22014 = (decode_clo(env22269))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22014;
arg_buffer[3] = a2191722124;
arg_buffer[4] = a2191922127;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22268 = encode_clo(alloc_clo(lam22268_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22272 = arg_buffer[1];
//reading env and args
void* kont22014 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28457 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28457, "0", 10);
void* a2191722124 = encode_mpz(mpzvar28457);
mpz_t* mpzvar28458 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28458, "2", 10);
void* a2191822125 = encode_mpz(mpzvar28458);

//creating new closure instance
void** clo28460 = alloc_clo(lam22268_fptr, 3);

//setting env list
clo28460[1] = kont22014;
clo28460[2] = a2191722124;
clo28460[3] = equal_u63;
void* f2201522126 = encode_clo(clo28460);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2201522126;
arg_buffer[3] = x;
arg_buffer[4] = a2191822125;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam22273_fptr() // lam22273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22274 = arg_buffer[1];
//reading env and args
void* a2192222131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env22274))[3];
//not do dummy comment
void* a2192022128 = (decode_clo(env22274))[2];
//not do dummy comment
void* kont22016 = (decode_clo(env22274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22016;
arg_buffer[3] = a2192022128;
arg_buffer[4] = a2192222131;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22273 = encode_clo(alloc_clo(lam22273_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22277 = arg_buffer[1];
//reading env and args
void* kont22016 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28461 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28461, "1", 10);
void* a2192022128 = encode_mpz(mpzvar28461);
mpz_t* mpzvar28462 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28462, "2", 10);
void* a2192122129 = encode_mpz(mpzvar28462);

//creating new closure instance
void** clo28464 = alloc_clo(lam22273_fptr, 3);

//setting env list
clo28464[1] = kont22016;
clo28464[2] = a2192022128;
clo28464[3] = equal_u63;
void* f2201722130 = encode_clo(clo28464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2201722130;
arg_buffer[3] = x;
arg_buffer[4] = a2192122129;
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
void* _22278 = arg_buffer[1];
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

void* kont2201822132 = prim_car(x);
void* x22133 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2201822132);
arg_buffer[2] = x22133;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2201822132))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam22281_fptr() // lam22281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22282 = arg_buffer[1];
//reading env and args
void* a2192822143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22020 = (decode_clo(env22282))[3];
//not do dummy comment
void* x = (decode_clo(env22282))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22282))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont22020;
arg_buffer[3] = x;
arg_buffer[4] = a2192822143;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22281 = encode_clo(alloc_clo(lam22281_fptr, 0));

void* lam22283_fptr() // lam22283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22284 = arg_buffer[1];
//reading env and args
void* a2192622140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22284))[5];
//not do dummy comment
void* kont22020 = (decode_clo(env22284))[4];
//not do dummy comment
void* lst = (decode_clo(env22284))[3];
//not do dummy comment
void* x = (decode_clo(env22284))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22284))[1];

//if-clause
bool if_guard28465 = is_true(a2192622140);
if(if_guard28465)
{
void* x2192722141 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22020);
arg_buffer[2] = x2192722141;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22020))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28467 = alloc_clo(lam22281_fptr, 3);

//setting env list
clo28467[1] = member_u63;
clo28467[2] = x;
clo28467[3] = kont22020;
void* f2202122142 = encode_clo(clo28467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2202122142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22283 = encode_clo(alloc_clo(lam22283_fptr, 0));

void* lam22285_fptr() // lam22285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22286 = arg_buffer[1];
//reading env and args
void* a2192522138 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22286))[6];
//not do dummy comment
void* kont22020 = (decode_clo(env22286))[5];
//not do dummy comment
void* lst = (decode_clo(env22286))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env22286))[3];
//not do dummy comment
void* x = (decode_clo(env22286))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22286))[1];

//creating new closure instance
void** clo28469 = alloc_clo(lam22283_fptr, 5);

//setting env list
clo28469[1] = member_u63;
clo28469[2] = x;
clo28469[3] = lst;
clo28469[4] = kont22020;
clo28469[5] = cdr;
void* f2202222139 = encode_clo(clo28469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2202222139;
arg_buffer[3] = a2192522138;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22285 = encode_clo(alloc_clo(lam22285_fptr, 0));

void* lam22287_fptr() // lam22287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22288 = arg_buffer[1];
//reading env and args
void* a2192322135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22288))[7];
//not do dummy comment
void* kont22020 = (decode_clo(env22288))[6];
//not do dummy comment
void* lst = (decode_clo(env22288))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env22288))[4];
//not do dummy comment
void* x = (decode_clo(env22288))[3];
//not do dummy comment
void* car = (decode_clo(env22288))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env22288))[1];

//if-clause
bool if_guard28470 = is_true(a2192322135);
if(if_guard28470)
{
void* x2192422136 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22020);
arg_buffer[2] = x2192422136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22020))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28472 = alloc_clo(lam22285_fptr, 6);

//setting env list
clo28472[1] = member_u63;
clo28472[2] = x;
clo28472[3] = equal_u63;
clo28472[4] = lst;
clo28472[5] = kont22020;
clo28472[6] = cdr;
void* f2202322137 = encode_clo(clo28472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2202322137;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22287 = encode_clo(alloc_clo(lam22287_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22289 = arg_buffer[1];
//reading env and args
void* kont22020 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28474 = alloc_clo(lam22287_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo28474[1] = member_u63;
clo28474[2] = car;
clo28474[3] = x;
clo28474[4] = equal_u63;
clo28474[5] = lst;
clo28474[6] = kont22020;
clo28474[7] = cdr;
void* f2202422134 = encode_clo(clo28474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2202422134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam22290_fptr() // lam22290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22291 = arg_buffer[1];
//reading env and args
void* a2193222151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2193122149 = (decode_clo(env22291))[4];
//not do dummy comment
void* kont22025 = (decode_clo(env22291))[3];
//not do dummy comment
void* fun = (decode_clo(env22291))[2];
//not do dummy comment
void* foldl = (decode_clo(env22291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont22025;
arg_buffer[3] = fun;
arg_buffer[4] = a2193122149;
arg_buffer[5] = a2193222151;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22290 = encode_clo(alloc_clo(lam22290_fptr, 0));

void* lam22292_fptr() // lam22292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22293 = arg_buffer[1];
//reading env and args
void* a2193122149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22293))[5];
//not do dummy comment
void* lst = (decode_clo(env22293))[4];
//not do dummy comment
void* kont22025 = (decode_clo(env22293))[3];
//not do dummy comment
void* fun = (decode_clo(env22293))[2];
//not do dummy comment
void* foldl = (decode_clo(env22293))[1];

//creating new closure instance
void** clo28476 = alloc_clo(lam22290_fptr, 4);

//setting env list
clo28476[1] = foldl;
clo28476[2] = fun;
clo28476[3] = kont22025;
clo28476[4] = a2193122149;
void* f2202622150 = encode_clo(clo28476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2202622150;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22292 = encode_clo(alloc_clo(lam22292_fptr, 0));

void* lam22294_fptr() // lam22294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22295 = arg_buffer[1];
//reading env and args
void* a2193022147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22295))[6];
//not do dummy comment
void* lst = (decode_clo(env22295))[5];
//not do dummy comment
void* kont22025 = (decode_clo(env22295))[4];
//not do dummy comment
void* fun = (decode_clo(env22295))[3];
//not do dummy comment
void* acc = (decode_clo(env22295))[2];
//not do dummy comment
void* foldl = (decode_clo(env22295))[1];

//creating new closure instance
void** clo28478 = alloc_clo(lam22292_fptr, 5);

//setting env list
clo28478[1] = foldl;
clo28478[2] = fun;
clo28478[3] = kont22025;
clo28478[4] = lst;
clo28478[5] = cdr;
void* f2202722148 = encode_clo(clo28478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2202722148;
arg_buffer[3] = a2193022147;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22294 = encode_clo(alloc_clo(lam22294_fptr, 0));

void* lam22296_fptr() // lam22296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22297 = arg_buffer[1];
//reading env and args
void* a2192922145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22297))[7];
//not do dummy comment
void* lst = (decode_clo(env22297))[6];
//not do dummy comment
void* kont22025 = (decode_clo(env22297))[5];
//not do dummy comment
void* fun = (decode_clo(env22297))[4];
//not do dummy comment
void* acc = (decode_clo(env22297))[3];
//not do dummy comment
void* car = (decode_clo(env22297))[2];
//not do dummy comment
void* foldl = (decode_clo(env22297))[1];

//if-clause
bool if_guard28479 = is_true(a2192922145);
if(if_guard28479)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22025);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22025))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28481 = alloc_clo(lam22294_fptr, 6);

//setting env list
clo28481[1] = foldl;
clo28481[2] = acc;
clo28481[3] = fun;
clo28481[4] = kont22025;
clo28481[5] = lst;
clo28481[6] = cdr;
void* f2202822146 = encode_clo(clo28481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2202822146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22296 = encode_clo(alloc_clo(lam22296_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22298 = arg_buffer[1];
//reading env and args
void* kont22025 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28483 = alloc_clo(lam22296_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo28483[1] = foldl;
clo28483[2] = car;
clo28483[3] = acc;
clo28483[4] = fun;
clo28483[5] = kont22025;
clo28483[6] = lst;
clo28483[7] = cdr;
void* f2202922144 = encode_clo(clo28483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2202922144;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam22299_fptr() // lam22299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22300 = arg_buffer[1];
//reading env and args
void* a2193622159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22300))[3];
//not do dummy comment
void* a2193422155 = (decode_clo(env22300))[2];
//not do dummy comment
void* kont22030 = (decode_clo(env22300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22030;
arg_buffer[3] = a2193422155;
arg_buffer[4] = a2193622159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22299 = encode_clo(alloc_clo(lam22299_fptr, 0));

void* lam22301_fptr() // lam22301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22302 = arg_buffer[1];
//reading env and args
void* a2193522157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22302))[5];
//not do dummy comment
void* a2193422155 = (decode_clo(env22302))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22302))[3];
//not do dummy comment
void* kont22030 = (decode_clo(env22302))[2];
//not do dummy comment
void* cons = (decode_clo(env22302))[1];

//creating new closure instance
void** clo28485 = alloc_clo(lam22299_fptr, 3);

//setting env list
clo28485[1] = kont22030;
clo28485[2] = a2193422155;
clo28485[3] = reverse_u45helper;
void* f2203122158 = encode_clo(clo28485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2203122158;
arg_buffer[3] = a2193522157;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22301 = encode_clo(alloc_clo(lam22301_fptr, 0));

void* lam22303_fptr() // lam22303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22304 = arg_buffer[1];
//reading env and args
void* a2193422155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22304))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22304))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22304))[4];
//not do dummy comment
void* cons = (decode_clo(env22304))[3];
//not do dummy comment
void* kont22030 = (decode_clo(env22304))[2];
//not do dummy comment
void* car = (decode_clo(env22304))[1];

//creating new closure instance
void** clo28487 = alloc_clo(lam22301_fptr, 5);

//setting env list
clo28487[1] = cons;
clo28487[2] = kont22030;
clo28487[3] = lst2;
clo28487[4] = a2193422155;
clo28487[5] = reverse_u45helper;
void* f2203222156 = encode_clo(clo28487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2203222156;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22303 = encode_clo(alloc_clo(lam22303_fptr, 0));

void* lam22305_fptr() // lam22305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22306 = arg_buffer[1];
//reading env and args
void* a2193322153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22306))[7];
//not do dummy comment
void* lst = (decode_clo(env22306))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22306))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22306))[4];
//not do dummy comment
void* cons = (decode_clo(env22306))[3];
//not do dummy comment
void* kont22030 = (decode_clo(env22306))[2];
//not do dummy comment
void* car = (decode_clo(env22306))[1];

//if-clause
bool if_guard28488 = is_true(a2193322153);
if(if_guard28488)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22030);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22030))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28490 = alloc_clo(lam22303_fptr, 6);

//setting env list
clo28490[1] = car;
clo28490[2] = kont22030;
clo28490[3] = cons;
clo28490[4] = lst2;
clo28490[5] = reverse_u45helper;
clo28490[6] = lst;
void* f2203322154 = encode_clo(clo28490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2203322154;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22305 = encode_clo(alloc_clo(lam22305_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22307 = arg_buffer[1];
//reading env and args
void* kont22030 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28492 = alloc_clo(lam22305_fptr, 7);

//setting env list
clo28492[1] = car;
clo28492[2] = kont22030;
clo28492[3] = cons;
clo28492[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo28492[5] = reverse_u45helper;
clo28492[6] = lst;
clo28492[7] = cdr;
void* f2203422152 = encode_clo(clo28492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2203422152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam22308_fptr() // lam22308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22309 = arg_buffer[1];
//reading env and args
void* a2193722161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22035 = (decode_clo(env22309))[3];
//not do dummy comment
void* lst = (decode_clo(env22309))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22309))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22035;
arg_buffer[3] = lst;
arg_buffer[4] = a2193722161;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22308 = encode_clo(alloc_clo(lam22308_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22310 = arg_buffer[1];
//reading env and args
void* kont22035 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28494 = alloc_clo(lam22308_fptr, 3);

//setting env list
clo28494[1] = reverse_u45helper;
clo28494[2] = lst;
clo28494[3] = kont22035;
void* f2203622160 = encode_clo(clo28494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2203622160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam22311_fptr() // lam22311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22312 = arg_buffer[1];
//reading env and args
void* x2194022166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22037 = (decode_clo(env22312))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22037);
arg_buffer[2] = x2194022166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22037))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22311 = encode_clo(alloc_clo(lam22311_fptr, 0));

void* lam22313_fptr() // lam22313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22314 = arg_buffer[1];
//reading env and args
void* a2194522175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22037 = (decode_clo(env22314))[4];
//not do dummy comment
void* a2194122168 = (decode_clo(env22314))[3];
//not do dummy comment
void* a2194322171 = (decode_clo(env22314))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env22314))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22037;
arg_buffer[3] = a2194122168;
arg_buffer[4] = a2194322171;
arg_buffer[5] = a2194522175;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22313 = encode_clo(alloc_clo(lam22313_fptr, 0));

void* lam22315_fptr() // lam22315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22316 = arg_buffer[1];
//reading env and args
void* a2194422173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22037 = (decode_clo(env22316))[6];
//not do dummy comment
void* a2194122168 = (decode_clo(env22316))[5];
//not do dummy comment
void* a2194322171 = (decode_clo(env22316))[4];
//not do dummy comment
void* cons = (decode_clo(env22316))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22316))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22316))[1];

//creating new closure instance
void** clo28496 = alloc_clo(lam22313_fptr, 4);

//setting env list
clo28496[1] = take_u45helper;
clo28496[2] = a2194322171;
clo28496[3] = a2194122168;
clo28496[4] = kont22037;
void* f2203922174 = encode_clo(clo28496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2203922174;
arg_buffer[3] = a2194422173;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22315 = encode_clo(alloc_clo(lam22315_fptr, 0));

void* lam22317_fptr() // lam22317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22318 = arg_buffer[1];
//reading env and args
void* a2194322171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2194122168 = (decode_clo(env22318))[7];
//not do dummy comment
void* car = (decode_clo(env22318))[6];
//not do dummy comment
void* cons = (decode_clo(env22318))[5];
//not do dummy comment
void* lst = (decode_clo(env22318))[4];
//not do dummy comment
void* kont22037 = (decode_clo(env22318))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22318))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22318))[1];

//creating new closure instance
void** clo28498 = alloc_clo(lam22315_fptr, 6);

//setting env list
clo28498[1] = lst2;
clo28498[2] = take_u45helper;
clo28498[3] = cons;
clo28498[4] = a2194322171;
clo28498[5] = a2194122168;
clo28498[6] = kont22037;
void* f2204022172 = encode_clo(clo28498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2204022172;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22317 = encode_clo(alloc_clo(lam22317_fptr, 0));

void* lam22320_fptr() // lam22320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22321 = arg_buffer[1];
//reading env and args
void* a2194122168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env22321))[8];
//not do dummy comment
void* _u45 = (decode_clo(env22321))[7];
//not do dummy comment
void* lst = (decode_clo(env22321))[6];
//not do dummy comment
void* kont22037 = (decode_clo(env22321))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env22321))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22321))[3];
//not do dummy comment
void* n = (decode_clo(env22321))[2];
//not do dummy comment
void* car = (decode_clo(env22321))[1];
mpz_t* mpzvar28499 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28499, "1", 10);
void* a2194222169 = encode_mpz(mpzvar28499);

//creating new closure instance
void** clo28501 = alloc_clo(lam22317_fptr, 7);

//setting env list
clo28501[1] = lst2;
clo28501[2] = take_u45helper;
clo28501[3] = kont22037;
clo28501[4] = lst;
clo28501[5] = cons;
clo28501[6] = car;
clo28501[7] = a2194122168;
void* f2204122170 = encode_clo(clo28501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2204122170;
arg_buffer[3] = n;
arg_buffer[4] = a2194222169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22320 = encode_clo(alloc_clo(lam22320_fptr, 0));

void* lam22322_fptr() // lam22322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22323 = arg_buffer[1];
//reading env and args
void* a2193922164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22323))[10];
//not do dummy comment
void* reverse = (decode_clo(env22323))[9];
//not do dummy comment
void* cons = (decode_clo(env22323))[8];
//not do dummy comment
void* _u45 = (decode_clo(env22323))[7];
//not do dummy comment
void* lst = (decode_clo(env22323))[6];
//not do dummy comment
void* kont22037 = (decode_clo(env22323))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env22323))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22323))[3];
//not do dummy comment
void* n = (decode_clo(env22323))[2];
//not do dummy comment
void* car = (decode_clo(env22323))[1];

//if-clause
bool if_guard28502 = is_true(a2193922164);
if(if_guard28502)
{

//creating new closure instance
void** clo28504 = alloc_clo(lam22311_fptr, 1);

//setting env list
clo28504[1] = kont22037;
void* f2203822165 = encode_clo(clo28504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2203822165;
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
void** clo28506 = alloc_clo(lam22320_fptr, 8);

//setting env list
clo28506[1] = car;
clo28506[2] = n;
clo28506[3] = lst2;
clo28506[4] = take_u45helper;
clo28506[5] = kont22037;
clo28506[6] = lst;
clo28506[7] = _u45;
clo28506[8] = cons;
void* f2204222167 = encode_clo(clo28506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2204222167;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22322 = encode_clo(alloc_clo(lam22322_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22325 = arg_buffer[1];
//reading env and args
void* kont22037 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar28507 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28507, "0", 10);
void* a2193822162 = encode_mpz(mpzvar28507);

//creating new closure instance
void** clo28509 = alloc_clo(lam22322_fptr, 10);

//setting env list
clo28509[1] = car;
clo28509[2] = n;
clo28509[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo28509[4] = take_u45helper;
clo28509[5] = kont22037;
clo28509[6] = lst;
clo28509[7] = _u45;
clo28509[8] = cons;
clo28509[9] = reverse;
clo28509[10] = cdr;
void* f2204322163 = encode_clo(clo28509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2204322163;
arg_buffer[3] = n;
arg_buffer[4] = a2193822162;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam22326_fptr() // lam22326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22327 = arg_buffer[1];
//reading env and args
void* a2194622177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22327))[4];
//not do dummy comment
void* kont22044 = (decode_clo(env22327))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22327))[2];
//not do dummy comment
void* n = (decode_clo(env22327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22044;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2194622177;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22326 = encode_clo(alloc_clo(lam22326_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22328 = arg_buffer[1];
//reading env and args
void* kont22044 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28511 = alloc_clo(lam22326_fptr, 4);

//setting env list
clo28511[1] = n;
clo28511[2] = take_u45helper;
clo28511[3] = kont22044;
clo28511[4] = lst;
void* f2204522176 = encode_clo(clo28511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2204522176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam22330_fptr() // lam22330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22331 = arg_buffer[1];
//reading env and args
void* a2195122185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2194922181 = (decode_clo(env22331))[3];
//not do dummy comment
void* _u43 = (decode_clo(env22331))[2];
//not do dummy comment
void* kont22046 = (decode_clo(env22331))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont22046;
arg_buffer[3] = a2194922181;
arg_buffer[4] = a2195122185;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22330 = encode_clo(alloc_clo(lam22330_fptr, 0));

void* lam22332_fptr() // lam22332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22333 = arg_buffer[1];
//reading env and args
void* a2195022183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2194922181 = (decode_clo(env22333))[4];
//not do dummy comment
void* length = (decode_clo(env22333))[3];
//not do dummy comment
void* _u43 = (decode_clo(env22333))[2];
//not do dummy comment
void* kont22046 = (decode_clo(env22333))[1];

//creating new closure instance
void** clo28513 = alloc_clo(lam22330_fptr, 3);

//setting env list
clo28513[1] = kont22046;
clo28513[2] = _u43;
clo28513[3] = a2194922181;
void* f2204722184 = encode_clo(clo28513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2204722184;
arg_buffer[3] = a2195022183;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22332 = encode_clo(alloc_clo(lam22332_fptr, 0));

void* lam22335_fptr() // lam22335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22336 = arg_buffer[1];
//reading env and args
void* a2194722179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22336))[5];
//not do dummy comment
void* lst = (decode_clo(env22336))[4];
//not do dummy comment
void* length = (decode_clo(env22336))[3];
//not do dummy comment
void* _u43 = (decode_clo(env22336))[2];
//not do dummy comment
void* kont22046 = (decode_clo(env22336))[1];

//if-clause
bool if_guard28514 = is_true(a2194722179);
if(if_guard28514)
{
mpz_t* mpzvar28515 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28515, "0", 10);
void* x2194822180 = encode_mpz(mpzvar28515);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22046);
arg_buffer[2] = x2194822180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22046))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28516 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28516, "1", 10);
void* a2194922181 = encode_mpz(mpzvar28516);

//creating new closure instance
void** clo28518 = alloc_clo(lam22332_fptr, 4);

//setting env list
clo28518[1] = kont22046;
clo28518[2] = _u43;
clo28518[3] = length;
clo28518[4] = a2194922181;
void* f2204822182 = encode_clo(clo28518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2204822182;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22335 = encode_clo(alloc_clo(lam22335_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22337 = arg_buffer[1];
//reading env and args
void* kont22046 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28520 = alloc_clo(lam22335_fptr, 5);

//setting env list
clo28520[1] = kont22046;
clo28520[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo28520[3] = length;
clo28520[4] = lst;
clo28520[5] = cdr;
void* f2204922178 = encode_clo(clo28520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2204922178;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam22338_fptr() // lam22338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22339 = arg_buffer[1];
//reading env and args
void* x2195322189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22050 = (decode_clo(env22339))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22050);
arg_buffer[2] = x2195322189;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22050))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22338 = encode_clo(alloc_clo(lam22338_fptr, 0));

void* lam22340_fptr() // lam22340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22341 = arg_buffer[1];
//reading env and args
void* a2195722197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2195522193 = (decode_clo(env22341))[3];
//not do dummy comment
void* kont22050 = (decode_clo(env22341))[2];
//not do dummy comment
void* cons = (decode_clo(env22341))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22050;
arg_buffer[3] = a2195522193;
arg_buffer[4] = a2195722197;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22340 = encode_clo(alloc_clo(lam22340_fptr, 0));

void* lam22342_fptr() // lam22342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22343 = arg_buffer[1];
//reading env and args
void* a2195622195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2195522193 = (decode_clo(env22343))[5];
//not do dummy comment
void* kont22050 = (decode_clo(env22343))[4];
//not do dummy comment
void* map = (decode_clo(env22343))[3];
//not do dummy comment
void* proc = (decode_clo(env22343))[2];
//not do dummy comment
void* cons = (decode_clo(env22343))[1];

//creating new closure instance
void** clo28522 = alloc_clo(lam22340_fptr, 3);

//setting env list
clo28522[1] = cons;
clo28522[2] = kont22050;
clo28522[3] = a2195522193;
void* f2205222196 = encode_clo(clo28522);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2205222196;
arg_buffer[3] = proc;
arg_buffer[4] = a2195622195;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22342 = encode_clo(alloc_clo(lam22342_fptr, 0));

void* lam22344_fptr() // lam22344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22345 = arg_buffer[1];
//reading env and args
void* a2195522193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22345))[6];
//not do dummy comment
void* kont22050 = (decode_clo(env22345))[5];
//not do dummy comment
void* lst = (decode_clo(env22345))[4];
//not do dummy comment
void* map = (decode_clo(env22345))[3];
//not do dummy comment
void* proc = (decode_clo(env22345))[2];
//not do dummy comment
void* cons = (decode_clo(env22345))[1];

//creating new closure instance
void** clo28524 = alloc_clo(lam22342_fptr, 5);

//setting env list
clo28524[1] = cons;
clo28524[2] = proc;
clo28524[3] = map;
clo28524[4] = kont22050;
clo28524[5] = a2195522193;
void* f2205322194 = encode_clo(clo28524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2205322194;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22344 = encode_clo(alloc_clo(lam22344_fptr, 0));

void* lam22346_fptr() // lam22346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22347 = arg_buffer[1];
//reading env and args
void* a2195422191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22347))[6];
//not do dummy comment
void* kont22050 = (decode_clo(env22347))[5];
//not do dummy comment
void* lst = (decode_clo(env22347))[4];
//not do dummy comment
void* map = (decode_clo(env22347))[3];
//not do dummy comment
void* proc = (decode_clo(env22347))[2];
//not do dummy comment
void* cons = (decode_clo(env22347))[1];

//creating new closure instance
void** clo28526 = alloc_clo(lam22344_fptr, 6);

//setting env list
clo28526[1] = cons;
clo28526[2] = proc;
clo28526[3] = map;
clo28526[4] = lst;
clo28526[5] = kont22050;
clo28526[6] = cdr;
void* f2205422192 = encode_clo(clo28526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2205422192;
arg_buffer[3] = a2195422191;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22346 = encode_clo(alloc_clo(lam22346_fptr, 0));

void* lam22348_fptr() // lam22348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22349 = arg_buffer[1];
//reading env and args
void* a2195222187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22050 = (decode_clo(env22349))[8];
//not do dummy comment
void* lst = (decode_clo(env22349))[7];
//not do dummy comment
void* map = (decode_clo(env22349))[6];
//not do dummy comment
void* proc = (decode_clo(env22349))[5];
//not do dummy comment
void* car = (decode_clo(env22349))[4];
//not do dummy comment
void* cons = (decode_clo(env22349))[3];
//not do dummy comment
void* list = (decode_clo(env22349))[2];
//not do dummy comment
void* cdr = (decode_clo(env22349))[1];

//if-clause
bool if_guard28527 = is_true(a2195222187);
if(if_guard28527)
{

//creating new closure instance
void** clo28529 = alloc_clo(lam22338_fptr, 1);

//setting env list
clo28529[1] = kont22050;
void* f2205122188 = encode_clo(clo28529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2205122188;
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
void** clo28531 = alloc_clo(lam22346_fptr, 6);

//setting env list
clo28531[1] = cons;
clo28531[2] = proc;
clo28531[3] = map;
clo28531[4] = lst;
clo28531[5] = kont22050;
clo28531[6] = cdr;
void* f2205522190 = encode_clo(clo28531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2205522190;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22348 = encode_clo(alloc_clo(lam22348_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22350 = arg_buffer[1];
//reading env and args
void* kont22050 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28533 = alloc_clo(lam22348_fptr, 8);

//setting env list
clo28533[1] = cdr;
clo28533[2] = list;
clo28533[3] = cons;
clo28533[4] = car;
clo28533[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo28533[6] = map;
clo28533[7] = lst;
clo28533[8] = kont22050;
void* f2205622186 = encode_clo(clo28533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2205622186;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam22351_fptr() // lam22351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22352 = arg_buffer[1];
//reading env and args
void* x2195922201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22057 = (decode_clo(env22352))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22057);
arg_buffer[2] = x2195922201;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22057))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22351 = encode_clo(alloc_clo(lam22351_fptr, 0));

void* lam22353_fptr() // lam22353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22354 = arg_buffer[1];
//reading env and args
void* a2196422211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22057 = (decode_clo(env22354))[3];
//not do dummy comment
void* cons = (decode_clo(env22354))[2];
//not do dummy comment
void* a2196222207 = (decode_clo(env22354))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22057;
arg_buffer[3] = a2196222207;
arg_buffer[4] = a2196422211;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22353 = encode_clo(alloc_clo(lam22353_fptr, 0));

void* lam22355_fptr() // lam22355 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22356 = arg_buffer[1];
//reading env and args
void* a2196322209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env22356))[5];
//not do dummy comment
void* kont22057 = (decode_clo(env22356))[4];
//not do dummy comment
void* filter = (decode_clo(env22356))[3];
//not do dummy comment
void* cons = (decode_clo(env22356))[2];
//not do dummy comment
void* a2196222207 = (decode_clo(env22356))[1];

//creating new closure instance
void** clo28535 = alloc_clo(lam22353_fptr, 3);

//setting env list
clo28535[1] = a2196222207;
clo28535[2] = cons;
clo28535[3] = kont22057;
void* f2205922210 = encode_clo(clo28535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2205922210;
arg_buffer[3] = op;
arg_buffer[4] = a2196322209;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22355 = encode_clo(alloc_clo(lam22355_fptr, 0));

void* lam22357_fptr() // lam22357 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22358 = arg_buffer[1];
//reading env and args
void* a2196222207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22358))[6];
//not do dummy comment
void* lst = (decode_clo(env22358))[5];
//not do dummy comment
void* op = (decode_clo(env22358))[4];
//not do dummy comment
void* kont22057 = (decode_clo(env22358))[3];
//not do dummy comment
void* filter = (decode_clo(env22358))[2];
//not do dummy comment
void* cons = (decode_clo(env22358))[1];

//creating new closure instance
void** clo28537 = alloc_clo(lam22355_fptr, 5);

//setting env list
clo28537[1] = a2196222207;
clo28537[2] = cons;
clo28537[3] = filter;
clo28537[4] = kont22057;
clo28537[5] = op;
void* f2206022208 = encode_clo(clo28537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2206022208;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22357 = encode_clo(alloc_clo(lam22357_fptr, 0));

void* lam22359_fptr() // lam22359 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22360 = arg_buffer[1];
//reading env and args
void* a2196522213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env22360))[3];
//not do dummy comment
void* kont22057 = (decode_clo(env22360))[2];
//not do dummy comment
void* filter = (decode_clo(env22360))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont22057;
arg_buffer[3] = op;
arg_buffer[4] = a2196522213;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22359 = encode_clo(alloc_clo(lam22359_fptr, 0));

void* lam22361_fptr() // lam22361 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22362 = arg_buffer[1];
//reading env and args
void* a2196122205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22362))[7];
//not do dummy comment
void* lst = (decode_clo(env22362))[6];
//not do dummy comment
void* op = (decode_clo(env22362))[5];
//not do dummy comment
void* kont22057 = (decode_clo(env22362))[4];
//not do dummy comment
void* cons = (decode_clo(env22362))[3];
//not do dummy comment
void* filter = (decode_clo(env22362))[2];
//not do dummy comment
void* car = (decode_clo(env22362))[1];

//if-clause
bool if_guard28538 = is_true(a2196122205);
if(if_guard28538)
{

//creating new closure instance
void** clo28540 = alloc_clo(lam22357_fptr, 6);

//setting env list
clo28540[1] = cons;
clo28540[2] = filter;
clo28540[3] = kont22057;
clo28540[4] = op;
clo28540[5] = lst;
clo28540[6] = cdr;
void* f2206122206 = encode_clo(clo28540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2206122206;
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
void** clo28542 = alloc_clo(lam22359_fptr, 3);

//setting env list
clo28542[1] = filter;
clo28542[2] = kont22057;
clo28542[3] = op;
void* f2206222212 = encode_clo(clo28542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2206222212;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22361 = encode_clo(alloc_clo(lam22361_fptr, 0));

void* lam22363_fptr() // lam22363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22364 = arg_buffer[1];
//reading env and args
void* a2196022203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22364))[7];
//not do dummy comment
void* lst = (decode_clo(env22364))[6];
//not do dummy comment
void* op = (decode_clo(env22364))[5];
//not do dummy comment
void* kont22057 = (decode_clo(env22364))[4];
//not do dummy comment
void* cons = (decode_clo(env22364))[3];
//not do dummy comment
void* filter = (decode_clo(env22364))[2];
//not do dummy comment
void* car = (decode_clo(env22364))[1];

//creating new closure instance
void** clo28544 = alloc_clo(lam22361_fptr, 7);

//setting env list
clo28544[1] = car;
clo28544[2] = filter;
clo28544[3] = cons;
clo28544[4] = kont22057;
clo28544[5] = op;
clo28544[6] = lst;
clo28544[7] = cdr;
void* f2206322204 = encode_clo(clo28544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2206322204;
arg_buffer[3] = a2196022203;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22363 = encode_clo(alloc_clo(lam22363_fptr, 0));

void* lam22365_fptr() // lam22365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22366 = arg_buffer[1];
//reading env and args
void* a2195822199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22366))[8];
//not do dummy comment
void* op = (decode_clo(env22366))[7];
//not do dummy comment
void* kont22057 = (decode_clo(env22366))[6];
//not do dummy comment
void* cons = (decode_clo(env22366))[5];
//not do dummy comment
void* list = (decode_clo(env22366))[4];
//not do dummy comment
void* cdr = (decode_clo(env22366))[3];
//not do dummy comment
void* filter = (decode_clo(env22366))[2];
//not do dummy comment
void* car = (decode_clo(env22366))[1];

//if-clause
bool if_guard28545 = is_true(a2195822199);
if(if_guard28545)
{

//creating new closure instance
void** clo28547 = alloc_clo(lam22351_fptr, 1);

//setting env list
clo28547[1] = kont22057;
void* f2205822200 = encode_clo(clo28547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2205822200;
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
void** clo28549 = alloc_clo(lam22363_fptr, 7);

//setting env list
clo28549[1] = car;
clo28549[2] = filter;
clo28549[3] = cons;
clo28549[4] = kont22057;
clo28549[5] = op;
clo28549[6] = lst;
clo28549[7] = cdr;
void* f2206422202 = encode_clo(clo28549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2206422202;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22365 = encode_clo(alloc_clo(lam22365_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22367 = arg_buffer[1];
//reading env and args
void* kont22057 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28551 = alloc_clo(lam22365_fptr, 8);

//setting env list
clo28551[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo28551[2] = filter;
clo28551[3] = cdr;
clo28551[4] = list;
clo28551[5] = cons;
clo28551[6] = kont22057;
clo28551[7] = op;
clo28551[8] = lst;
void* f2206522198 = encode_clo(clo28551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2206522198;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam22368_fptr() // lam22368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22369 = arg_buffer[1];
//reading env and args
void* a2197022221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22066 = (decode_clo(env22369))[3];
//not do dummy comment
void* drop = (decode_clo(env22369))[2];
//not do dummy comment
void* a2196822218 = (decode_clo(env22369))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont22066;
arg_buffer[3] = a2196822218;
arg_buffer[4] = a2197022221;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22368 = encode_clo(alloc_clo(lam22368_fptr, 0));

void* lam22371_fptr() // lam22371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22372 = arg_buffer[1];
//reading env and args
void* a2196822218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22066 = (decode_clo(env22372))[4];
//not do dummy comment
void* drop = (decode_clo(env22372))[3];
//not do dummy comment
void* n = (decode_clo(env22372))[2];
//not do dummy comment
void* _u45 = (decode_clo(env22372))[1];
mpz_t* mpzvar28552 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28552, "1", 10);
void* a2196922219 = encode_mpz(mpzvar28552);

//creating new closure instance
void** clo28554 = alloc_clo(lam22368_fptr, 3);

//setting env list
clo28554[1] = a2196822218;
clo28554[2] = drop;
clo28554[3] = kont22066;
void* f2206722220 = encode_clo(clo28554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2206722220;
arg_buffer[3] = n;
arg_buffer[4] = a2196922219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22371 = encode_clo(alloc_clo(lam22371_fptr, 0));

void* lam22373_fptr() // lam22373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22374 = arg_buffer[1];
//reading env and args
void* a2196722216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22374))[6];
//not do dummy comment
void* kont22066 = (decode_clo(env22374))[5];
//not do dummy comment
void* n = (decode_clo(env22374))[4];
//not do dummy comment
void* _u45 = (decode_clo(env22374))[3];
//not do dummy comment
void* lst = (decode_clo(env22374))[2];
//not do dummy comment
void* drop = (decode_clo(env22374))[1];

//if-clause
bool if_guard28555 = is_true(a2196722216);
if(if_guard28555)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22066);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22066))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28557 = alloc_clo(lam22371_fptr, 4);

//setting env list
clo28557[1] = _u45;
clo28557[2] = n;
clo28557[3] = drop;
clo28557[4] = kont22066;
void* f2206822217 = encode_clo(clo28557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2206822217;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22373 = encode_clo(alloc_clo(lam22373_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22376 = arg_buffer[1];
//reading env and args
void* kont22066 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar28558 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28558, "0", 10);
void* a2196622214 = encode_mpz(mpzvar28558);

//creating new closure instance
void** clo28560 = alloc_clo(lam22373_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo28560[1] = drop;
clo28560[2] = lst;
clo28560[3] = _u45;
clo28560[4] = n;
clo28560[5] = kont22066;
clo28560[6] = cdr;
void* f2206922215 = encode_clo(clo28560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2206922215;
arg_buffer[3] = n;
arg_buffer[4] = a2196622214;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam22377_fptr() // lam22377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22378 = arg_buffer[1];
//reading env and args
void* a2197422229 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2197222225 = (decode_clo(env22378))[3];
//not do dummy comment
void* kont22070 = (decode_clo(env22378))[2];
//not do dummy comment
void* proc = (decode_clo(env22378))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont22070;
arg_buffer[3] = a2197222225;
arg_buffer[4] = a2197422229;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22377 = encode_clo(alloc_clo(lam22377_fptr, 0));

void* lam22379_fptr() // lam22379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22380 = arg_buffer[1];
//reading env and args
void* a2197322227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2197222225 = (decode_clo(env22380))[5];
//not do dummy comment
void* foldr = (decode_clo(env22380))[4];
//not do dummy comment
void* kont22070 = (decode_clo(env22380))[3];
//not do dummy comment
void* proc = (decode_clo(env22380))[2];
//not do dummy comment
void* acc = (decode_clo(env22380))[1];

//creating new closure instance
void** clo28562 = alloc_clo(lam22377_fptr, 3);

//setting env list
clo28562[1] = proc;
clo28562[2] = kont22070;
clo28562[3] = a2197222225;
void* f2207122228 = encode_clo(clo28562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2207122228;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2197322227;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22379 = encode_clo(alloc_clo(lam22379_fptr, 0));

void* lam22381_fptr() // lam22381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22382 = arg_buffer[1];
//reading env and args
void* a2197222225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22382))[6];
//not do dummy comment
void* kont22070 = (decode_clo(env22382))[5];
//not do dummy comment
void* foldr = (decode_clo(env22382))[4];
//not do dummy comment
void* lst = (decode_clo(env22382))[3];
//not do dummy comment
void* proc = (decode_clo(env22382))[2];
//not do dummy comment
void* acc = (decode_clo(env22382))[1];

//creating new closure instance
void** clo28564 = alloc_clo(lam22379_fptr, 5);

//setting env list
clo28564[1] = acc;
clo28564[2] = proc;
clo28564[3] = kont22070;
clo28564[4] = foldr;
clo28564[5] = a2197222225;
void* f2207222226 = encode_clo(clo28564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2207222226;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22381 = encode_clo(alloc_clo(lam22381_fptr, 0));

void* lam22383_fptr() // lam22383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22384 = arg_buffer[1];
//reading env and args
void* a2197122223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22384))[7];
//not do dummy comment
void* kont22070 = (decode_clo(env22384))[6];
//not do dummy comment
void* car = (decode_clo(env22384))[5];
//not do dummy comment
void* foldr = (decode_clo(env22384))[4];
//not do dummy comment
void* lst = (decode_clo(env22384))[3];
//not do dummy comment
void* proc = (decode_clo(env22384))[2];
//not do dummy comment
void* acc = (decode_clo(env22384))[1];

//if-clause
bool if_guard28565 = is_true(a2197122223);
if(if_guard28565)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22070);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22070))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28567 = alloc_clo(lam22381_fptr, 6);

//setting env list
clo28567[1] = acc;
clo28567[2] = proc;
clo28567[3] = lst;
clo28567[4] = foldr;
clo28567[5] = kont22070;
clo28567[6] = cdr;
void* f2207322224 = encode_clo(clo28567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2207322224;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22383 = encode_clo(alloc_clo(lam22383_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22385 = arg_buffer[1];
//reading env and args
void* kont22070 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28569 = alloc_clo(lam22383_fptr, 7);

//setting env list
clo28569[1] = acc;
clo28569[2] = proc;
clo28569[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo28569[4] = foldr;
clo28569[5] = car;
clo28569[6] = kont22070;
clo28569[7] = cdr;
void* f2207422222 = encode_clo(clo28569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2207422222;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam22386_fptr() // lam22386 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22387 = arg_buffer[1];
//reading env and args
void* a2197822237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2197622233 = (decode_clo(env22387))[3];
//not do dummy comment
void* kont22075 = (decode_clo(env22387))[2];
//not do dummy comment
void* cons = (decode_clo(env22387))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22075;
arg_buffer[3] = a2197622233;
arg_buffer[4] = a2197822237;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22386 = encode_clo(alloc_clo(lam22386_fptr, 0));

void* lam22388_fptr() // lam22388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22389 = arg_buffer[1];
//reading env and args
void* a2197722235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22075 = (decode_clo(env22389))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22389))[4];
//not do dummy comment
void* cons = (decode_clo(env22389))[3];
//not do dummy comment
void* append = (decode_clo(env22389))[2];
//not do dummy comment
void* a2197622233 = (decode_clo(env22389))[1];

//creating new closure instance
void** clo28571 = alloc_clo(lam22386_fptr, 3);

//setting env list
clo28571[1] = cons;
clo28571[2] = kont22075;
clo28571[3] = a2197622233;
void* f2207622236 = encode_clo(clo28571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2207622236;
arg_buffer[3] = a2197722235;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22388 = encode_clo(alloc_clo(lam22388_fptr, 0));

void* lam22390_fptr() // lam22390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22391 = arg_buffer[1];
//reading env and args
void* a2197622233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22391))[6];
//not do dummy comment
void* append = (decode_clo(env22391))[5];
//not do dummy comment
void* kont22075 = (decode_clo(env22391))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22391))[3];
//not do dummy comment
void* lst1 = (decode_clo(env22391))[2];
//not do dummy comment
void* cons = (decode_clo(env22391))[1];

//creating new closure instance
void** clo28573 = alloc_clo(lam22388_fptr, 5);

//setting env list
clo28573[1] = a2197622233;
clo28573[2] = append;
clo28573[3] = cons;
clo28573[4] = lst2;
clo28573[5] = kont22075;
void* f2207722234 = encode_clo(clo28573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2207722234;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22390 = encode_clo(alloc_clo(lam22390_fptr, 0));

void* lam22392_fptr() // lam22392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22393 = arg_buffer[1];
//reading env and args
void* a2197522231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22393))[7];
//not do dummy comment
void* append = (decode_clo(env22393))[6];
//not do dummy comment
void* kont22075 = (decode_clo(env22393))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22393))[4];
//not do dummy comment
void* cons = (decode_clo(env22393))[3];
//not do dummy comment
void* lst1 = (decode_clo(env22393))[2];
//not do dummy comment
void* car = (decode_clo(env22393))[1];

//if-clause
bool if_guard28574 = is_true(a2197522231);
if(if_guard28574)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22075);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22075))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28576 = alloc_clo(lam22390_fptr, 6);

//setting env list
clo28576[1] = cons;
clo28576[2] = lst1;
clo28576[3] = lst2;
clo28576[4] = kont22075;
clo28576[5] = append;
clo28576[6] = cdr;
void* f2207822232 = encode_clo(clo28576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2207822232;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22392 = encode_clo(alloc_clo(lam22392_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22394 = arg_buffer[1];
//reading env and args
void* kont22075 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28578 = alloc_clo(lam22392_fptr, 7);

//setting env list
clo28578[1] = car;
clo28578[2] = lst1;
clo28578[3] = cons;
clo28578[4] = lst2;
clo28578[5] = kont22075;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo28578[6] = append;
clo28578[7] = cdr;
void* f2207922230 = encode_clo(clo28578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2207922230;
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
void* _22395 = arg_buffer[1];
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

void* kont2208022238 = prim_car(lst);
void* lst22239 = prim_cdr(lst);
void* x2197922240 = apply_prim_hash(lst22239);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2208022238);
arg_buffer[2] = x2197922240;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2208022238))[0]);
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
void* _22396 = arg_buffer[1];
//reading env and args
void* kont22082 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2198022241 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22082);
arg_buffer[2] = x2198022241;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22082))[0]);
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
void* _22397 = arg_buffer[1];
//reading env and args
void* kont22083 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2198122242 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22083);
arg_buffer[2] = x2198122242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22083))[0]);
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
void* _22398 = arg_buffer[1];
//reading env and args
void* kont22084 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2198222243 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22084);
arg_buffer[2] = x2198222243;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22084))[0]);
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
void* _22399 = arg_buffer[1];
//reading env and args
void* kont22085 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2198322244 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22085);
arg_buffer[2] = x2198322244;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22085))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam22400_fptr() // lam22400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22401 = arg_buffer[1];
//reading env and args
void* a2198722249 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env22401))[3];
//not do dummy comment
void* kont22086 = (decode_clo(env22401))[2];
//not do dummy comment
void* filter = (decode_clo(env22401))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont22086;
arg_buffer[3] = odd_u63;
arg_buffer[4] = a2198722249;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22400 = encode_clo(alloc_clo(lam22400_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22405 = arg_buffer[1];
//reading env and args
void* kont22086 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar28579 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28579, "1", 10);
void* a2198422245 = encode_mpz(mpzvar28579);
mpz_t* mpzvar28580 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28580, "2", 10);
void* a2198522246 = encode_mpz(mpzvar28580);
mpz_t* mpzvar28581 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28581, "3", 10);
void* a2198622247 = encode_mpz(mpzvar28581);

//creating new closure instance
void** clo28583 = alloc_clo(lam22400_fptr, 3);

//setting env list
clo28583[1] = filter;
clo28583[2] = kont22086;
clo28583[3] = odd_u63;
void* f2208722248 = encode_clo(clo28583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2208722248;
arg_buffer[3] = a2198422245;
arg_buffer[4] = a2198522246;
arg_buffer[5] = a2198622247;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam22406_fptr() // lam22406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22407 = arg_buffer[1];
//reading env and args
void* x2198822251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22088 = (decode_clo(env22407))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22088);
arg_buffer[2] = x2198822251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22088))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22406 = encode_clo(alloc_clo(lam22406_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22408 = arg_buffer[1];
//reading env and args
void* kont22088 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo28585 = alloc_clo(lam22406_fptr, 1);

//setting env list
clo28585[1] = kont22088;
void* f2208922250 = encode_clo(clo28585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2208922250;
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

