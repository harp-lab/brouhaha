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
void* _42266 = arg_buffer[1];
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

void* kont4199642098 = prim_car(lst);
void* lst42099 = prim_cdr(lst);
void* x4190342100 = apply_prim__u43(lst42099);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4199642098);
arg_buffer[2] = x4190342100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4199642098))[0]);
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
void* _42267 = arg_buffer[1];
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

void* kont4199842101 = prim_car(lst);
void* lst42102 = prim_cdr(lst);
void* x4190442103 = apply_prim__u45(lst42102);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4199842101);
arg_buffer[2] = x4190442103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4199842101))[0]);
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
void* _42268 = arg_buffer[1];
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

void* kont4200042104 = prim_car(lst);
void* lst42105 = prim_cdr(lst);
void* x4190542106 = apply_prim__u42(lst42105);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4200042104);
arg_buffer[2] = x4190542106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4200042104))[0]);
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
void* _42269 = arg_buffer[1];
//reading env and args
void* kont42002 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4190642107 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42002);
arg_buffer[2] = x4190642107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42002))[0]);
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
void* _42270 = arg_buffer[1];
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

void* kont4200342108 = prim_car(lst);
void* lst42109 = prim_cdr(lst);
void* x4190742110 = apply_prim__u47(lst42109);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4200342108);
arg_buffer[2] = x4190742110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4200342108))[0]);
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
void* _42271 = arg_buffer[1];
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

void* kont4200542111 = prim_car(lst);
void* lst42112 = prim_cdr(lst);
void* x4190842113 = apply_prim__u61(lst42112);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4200542111);
arg_buffer[2] = x4190842113;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4200542111))[0]);
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
void* _42272 = arg_buffer[1];
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

void* kont4200742114 = prim_car(lst);
void* lst42115 = prim_cdr(lst);
void* x4190942116 = apply_prim__u62(lst42115);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4200742114);
arg_buffer[2] = x4190942116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4200742114))[0]);
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
void* _42273 = arg_buffer[1];
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

void* kont4200942117 = prim_car(lst);
void* lst42118 = prim_cdr(lst);
void* x4191042119 = apply_prim__u60(lst42118);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4200942117);
arg_buffer[2] = x4191042119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4200942117))[0]);
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
void* _42274 = arg_buffer[1];
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

void* kont4201142120 = prim_car(lst);
void* lst42121 = prim_cdr(lst);
void* x4191142122 = apply_prim__u60_u61(lst42121);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4201142120);
arg_buffer[2] = x4191142122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4201142120))[0]);
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
void* _42275 = arg_buffer[1];
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

void* kont4201342123 = prim_car(lst);
void* lst42124 = prim_cdr(lst);
void* x4191242125 = apply_prim__u62_u61(lst42124);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4201342123);
arg_buffer[2] = x4191242125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4201342123))[0]);
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
void* _42276 = arg_buffer[1];
//reading env and args
void* kont42015 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4191342126 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42015);
arg_buffer[2] = x4191342126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42015))[0]);
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
void* _42277 = arg_buffer[1];
//reading env and args
void* kont42016 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4191442127 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42016);
arg_buffer[2] = x4191442127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42016))[0]);
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
void* _42278 = arg_buffer[1];
//reading env and args
void* kont42017 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4191542128 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42017);
arg_buffer[2] = x4191542128;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42017))[0]);
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
void* _42279 = arg_buffer[1];
//reading env and args
void* kont42018 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4191642129 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42018);
arg_buffer[2] = x4191642129;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42018))[0]);
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
void* _42280 = arg_buffer[1];
//reading env and args
void* kont42019 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4191742130 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42019);
arg_buffer[2] = x4191742130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42019))[0]);
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
void* _42281 = arg_buffer[1];
//reading env and args
void* kont42020 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4191842131 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42020);
arg_buffer[2] = x4191842131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42020))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam42282_fptr() // lam42282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42283 = arg_buffer[1];
//reading env and args
void* a4192142135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42021 = (decode_clo(env42283))[3];
//not do dummy comment
void* a4191942132 = (decode_clo(env42283))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env42283))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42021;
arg_buffer[3] = a4191942132;
arg_buffer[4] = a4192142135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42282 = encode_clo(alloc_clo(lam42282_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42286 = arg_buffer[1];
//reading env and args
void* kont42021 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar43493 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43493, "0", 10);
void* a4191942132 = encode_mpz(mpzvar43493);
mpz_t* mpzvar43494 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43494, "2", 10);
void* a4192042133 = encode_mpz(mpzvar43494);

//creating new closure instance
void** clo43496 = alloc_clo(lam42282_fptr, 3);

//setting env list
clo43496[1] = equal_u63;
clo43496[2] = a4191942132;
clo43496[3] = kont42021;
void* f4202242134 = encode_clo(clo43496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4202242134;
arg_buffer[3] = x;
arg_buffer[4] = a4192042133;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam42287_fptr() // lam42287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42288 = arg_buffer[1];
//reading env and args
void* a4192442139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env42288))[3];
//not do dummy comment
void* kont42023 = (decode_clo(env42288))[2];
//not do dummy comment
void* a4192242136 = (decode_clo(env42288))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42023;
arg_buffer[3] = a4192242136;
arg_buffer[4] = a4192442139;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42287 = encode_clo(alloc_clo(lam42287_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42291 = arg_buffer[1];
//reading env and args
void* kont42023 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar43497 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43497, "1", 10);
void* a4192242136 = encode_mpz(mpzvar43497);
mpz_t* mpzvar43498 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43498, "2", 10);
void* a4192342137 = encode_mpz(mpzvar43498);

//creating new closure instance
void** clo43500 = alloc_clo(lam42287_fptr, 3);

//setting env list
clo43500[1] = a4192242136;
clo43500[2] = kont42023;
clo43500[3] = equal_u63;
void* f4202442138 = encode_clo(clo43500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4202442138;
arg_buffer[3] = x;
arg_buffer[4] = a4192342137;
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
void* _42292 = arg_buffer[1];
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

void* kont4202542140 = prim_car(x);
void* x42141 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4202542140);
arg_buffer[2] = x42141;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4202542140))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam42295_fptr() // lam42295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42296 = arg_buffer[1];
//reading env and args
void* a4193042151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env42296))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env42296))[2];
//not do dummy comment
void* kont42027 = (decode_clo(env42296))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont42027;
arg_buffer[3] = x;
arg_buffer[4] = a4193042151;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42295 = encode_clo(alloc_clo(lam42295_fptr, 0));

void* lam42297_fptr() // lam42297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42298 = arg_buffer[1];
//reading env and args
void* a4192842148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42298))[5];
//not do dummy comment
void* lst = (decode_clo(env42298))[4];
//not do dummy comment
void* x = (decode_clo(env42298))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env42298))[2];
//not do dummy comment
void* kont42027 = (decode_clo(env42298))[1];

//if-clause
bool if_guard43501 = is_true(a4192842148);
if(if_guard43501)
{
void* x4192942149 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42027);
arg_buffer[2] = x4192942149;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42027))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43503 = alloc_clo(lam42295_fptr, 3);

//setting env list
clo43503[1] = kont42027;
clo43503[2] = member_u63;
clo43503[3] = x;
void* f4202842150 = encode_clo(clo43503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4202842150;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42297 = encode_clo(alloc_clo(lam42297_fptr, 0));

void* lam42299_fptr() // lam42299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42300 = arg_buffer[1];
//reading env and args
void* a4192742146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42300))[6];
//not do dummy comment
void* lst = (decode_clo(env42300))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env42300))[4];
//not do dummy comment
void* x = (decode_clo(env42300))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env42300))[2];
//not do dummy comment
void* kont42027 = (decode_clo(env42300))[1];

//creating new closure instance
void** clo43505 = alloc_clo(lam42297_fptr, 5);

//setting env list
clo43505[1] = kont42027;
clo43505[2] = member_u63;
clo43505[3] = x;
clo43505[4] = lst;
clo43505[5] = cdr;
void* f4202942147 = encode_clo(clo43505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4202942147;
arg_buffer[3] = a4192742146;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42299 = encode_clo(alloc_clo(lam42299_fptr, 0));

void* lam42301_fptr() // lam42301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42302 = arg_buffer[1];
//reading env and args
void* a4192542143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42302))[7];
//not do dummy comment
void* lst = (decode_clo(env42302))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env42302))[5];
//not do dummy comment
void* x = (decode_clo(env42302))[4];
//not do dummy comment
void* car = (decode_clo(env42302))[3];
//not do dummy comment
void* member_u63 = (decode_clo(env42302))[2];
//not do dummy comment
void* kont42027 = (decode_clo(env42302))[1];

//if-clause
bool if_guard43506 = is_true(a4192542143);
if(if_guard43506)
{
void* x4192642144 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42027);
arg_buffer[2] = x4192642144;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42027))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43508 = alloc_clo(lam42299_fptr, 6);

//setting env list
clo43508[1] = kont42027;
clo43508[2] = member_u63;
clo43508[3] = x;
clo43508[4] = equal_u63;
clo43508[5] = lst;
clo43508[6] = cdr;
void* f4203042145 = encode_clo(clo43508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4203042145;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42301 = encode_clo(alloc_clo(lam42301_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42303 = arg_buffer[1];
//reading env and args
void* kont42027 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43510 = alloc_clo(lam42301_fptr, 7);

//setting env list
clo43510[1] = kont42027;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo43510[2] = member_u63;
clo43510[3] = car;
clo43510[4] = x;
clo43510[5] = equal_u63;
clo43510[6] = lst;
clo43510[7] = cdr;
void* f4203142142 = encode_clo(clo43510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4203142142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam42304_fptr() // lam42304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42305 = arg_buffer[1];
//reading env and args
void* a4193442159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4193342157 = (decode_clo(env42305))[4];
//not do dummy comment
void* kont42032 = (decode_clo(env42305))[3];
//not do dummy comment
void* fun = (decode_clo(env42305))[2];
//not do dummy comment
void* foldl = (decode_clo(env42305))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont42032;
arg_buffer[3] = fun;
arg_buffer[4] = a4193342157;
arg_buffer[5] = a4193442159;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42304 = encode_clo(alloc_clo(lam42304_fptr, 0));

void* lam42306_fptr() // lam42306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42307 = arg_buffer[1];
//reading env and args
void* a4193342157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42307))[5];
//not do dummy comment
void* fun = (decode_clo(env42307))[4];
//not do dummy comment
void* foldl = (decode_clo(env42307))[3];
//not do dummy comment
void* lst = (decode_clo(env42307))[2];
//not do dummy comment
void* kont42032 = (decode_clo(env42307))[1];

//creating new closure instance
void** clo43512 = alloc_clo(lam42304_fptr, 4);

//setting env list
clo43512[1] = foldl;
clo43512[2] = fun;
clo43512[3] = kont42032;
clo43512[4] = a4193342157;
void* f4203342158 = encode_clo(clo43512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4203342158;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42306 = encode_clo(alloc_clo(lam42306_fptr, 0));

void* lam42308_fptr() // lam42308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42309 = arg_buffer[1];
//reading env and args
void* a4193242155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42309))[6];
//not do dummy comment
void* fun = (decode_clo(env42309))[5];
//not do dummy comment
void* acc = (decode_clo(env42309))[4];
//not do dummy comment
void* foldl = (decode_clo(env42309))[3];
//not do dummy comment
void* lst = (decode_clo(env42309))[2];
//not do dummy comment
void* kont42032 = (decode_clo(env42309))[1];

//creating new closure instance
void** clo43514 = alloc_clo(lam42306_fptr, 5);

//setting env list
clo43514[1] = kont42032;
clo43514[2] = lst;
clo43514[3] = foldl;
clo43514[4] = fun;
clo43514[5] = cdr;
void* f4203442156 = encode_clo(clo43514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4203442156;
arg_buffer[3] = a4193242155;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42308 = encode_clo(alloc_clo(lam42308_fptr, 0));

void* lam42310_fptr() // lam42310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42311 = arg_buffer[1];
//reading env and args
void* a4193142153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42311))[7];
//not do dummy comment
void* fun = (decode_clo(env42311))[6];
//not do dummy comment
void* acc = (decode_clo(env42311))[5];
//not do dummy comment
void* car = (decode_clo(env42311))[4];
//not do dummy comment
void* foldl = (decode_clo(env42311))[3];
//not do dummy comment
void* lst = (decode_clo(env42311))[2];
//not do dummy comment
void* kont42032 = (decode_clo(env42311))[1];

//if-clause
bool if_guard43515 = is_true(a4193142153);
if(if_guard43515)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42032);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42032))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43517 = alloc_clo(lam42308_fptr, 6);

//setting env list
clo43517[1] = kont42032;
clo43517[2] = lst;
clo43517[3] = foldl;
clo43517[4] = acc;
clo43517[5] = fun;
clo43517[6] = cdr;
void* f4203542154 = encode_clo(clo43517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4203542154;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42310 = encode_clo(alloc_clo(lam42310_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42312 = arg_buffer[1];
//reading env and args
void* kont42032 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo43519 = alloc_clo(lam42310_fptr, 7);

//setting env list
clo43519[1] = kont42032;
clo43519[2] = lst;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo43519[3] = foldl;
clo43519[4] = car;
clo43519[5] = acc;
clo43519[6] = fun;
clo43519[7] = cdr;
void* f4203642152 = encode_clo(clo43519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4203642152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam42313_fptr() // lam42313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42314 = arg_buffer[1];
//reading env and args
void* a4193842167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42037 = (decode_clo(env42314))[3];
//not do dummy comment
void* a4193642163 = (decode_clo(env42314))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42314))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42037;
arg_buffer[3] = a4193642163;
arg_buffer[4] = a4193842167;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42313 = encode_clo(alloc_clo(lam42313_fptr, 0));

void* lam42315_fptr() // lam42315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42316 = arg_buffer[1];
//reading env and args
void* a4193742165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42037 = (decode_clo(env42316))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42316))[4];
//not do dummy comment
void* cons = (decode_clo(env42316))[3];
//not do dummy comment
void* a4193642163 = (decode_clo(env42316))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42316))[1];

//creating new closure instance
void** clo43521 = alloc_clo(lam42313_fptr, 3);

//setting env list
clo43521[1] = reverse_u45helper;
clo43521[2] = a4193642163;
clo43521[3] = kont42037;
void* f4203842166 = encode_clo(clo43521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4203842166;
arg_buffer[3] = a4193742165;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42315 = encode_clo(alloc_clo(lam42315_fptr, 0));

void* lam42317_fptr() // lam42317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42318 = arg_buffer[1];
//reading env and args
void* a4193642163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42318))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42318))[5];
//not do dummy comment
void* kont42037 = (decode_clo(env42318))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42318))[3];
//not do dummy comment
void* car = (decode_clo(env42318))[2];
//not do dummy comment
void* cons = (decode_clo(env42318))[1];

//creating new closure instance
void** clo43523 = alloc_clo(lam42315_fptr, 5);

//setting env list
clo43523[1] = reverse_u45helper;
clo43523[2] = a4193642163;
clo43523[3] = cons;
clo43523[4] = lst2;
clo43523[5] = kont42037;
void* f4203942164 = encode_clo(clo43523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4203942164;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42317 = encode_clo(alloc_clo(lam42317_fptr, 0));

void* lam42319_fptr() // lam42319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42320 = arg_buffer[1];
//reading env and args
void* a4193542161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42320))[7];
//not do dummy comment
void* lst = (decode_clo(env42320))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42320))[5];
//not do dummy comment
void* kont42037 = (decode_clo(env42320))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42320))[3];
//not do dummy comment
void* car = (decode_clo(env42320))[2];
//not do dummy comment
void* cons = (decode_clo(env42320))[1];

//if-clause
bool if_guard43524 = is_true(a4193542161);
if(if_guard43524)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42037);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42037))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43526 = alloc_clo(lam42317_fptr, 6);

//setting env list
clo43526[1] = cons;
clo43526[2] = car;
clo43526[3] = lst2;
clo43526[4] = kont42037;
clo43526[5] = reverse_u45helper;
clo43526[6] = lst;
void* f4204042162 = encode_clo(clo43526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4204042162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42319 = encode_clo(alloc_clo(lam42319_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42321 = arg_buffer[1];
//reading env and args
void* kont42037 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43528 = alloc_clo(lam42319_fptr, 7);

//setting env list
clo43528[1] = cons;
clo43528[2] = car;
clo43528[3] = lst2;
clo43528[4] = kont42037;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo43528[5] = reverse_u45helper;
clo43528[6] = lst;
clo43528[7] = cdr;
void* f4204142160 = encode_clo(clo43528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4204142160;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam42322_fptr() // lam42322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42323 = arg_buffer[1];
//reading env and args
void* a4193942169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42323))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42323))[2];
//not do dummy comment
void* kont42042 = (decode_clo(env42323))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42042;
arg_buffer[3] = lst;
arg_buffer[4] = a4193942169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42322 = encode_clo(alloc_clo(lam42322_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42324 = arg_buffer[1];
//reading env and args
void* kont42042 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo43530 = alloc_clo(lam42322_fptr, 3);

//setting env list
clo43530[1] = kont42042;
clo43530[2] = reverse_u45helper;
clo43530[3] = lst;
void* f4204342168 = encode_clo(clo43530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4204342168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam42325_fptr() // lam42325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42326 = arg_buffer[1];
//reading env and args
void* x4194242174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42044 = (decode_clo(env42326))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42044);
arg_buffer[2] = x4194242174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42044))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42325 = encode_clo(alloc_clo(lam42325_fptr, 0));

void* lam42327_fptr() // lam42327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42328 = arg_buffer[1];
//reading env and args
void* a4194742183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42044 = (decode_clo(env42328))[4];
//not do dummy comment
void* a4194342176 = (decode_clo(env42328))[3];
//not do dummy comment
void* a4194542179 = (decode_clo(env42328))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env42328))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42044;
arg_buffer[3] = a4194342176;
arg_buffer[4] = a4194542179;
arg_buffer[5] = a4194742183;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42327 = encode_clo(alloc_clo(lam42327_fptr, 0));

void* lam42329_fptr() // lam42329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42330 = arg_buffer[1];
//reading env and args
void* a4194642181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42044 = (decode_clo(env42330))[6];
//not do dummy comment
void* a4194342176 = (decode_clo(env42330))[5];
//not do dummy comment
void* a4194542179 = (decode_clo(env42330))[4];
//not do dummy comment
void* cons = (decode_clo(env42330))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42330))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42330))[1];

//creating new closure instance
void** clo43532 = alloc_clo(lam42327_fptr, 4);

//setting env list
clo43532[1] = take_u45helper;
clo43532[2] = a4194542179;
clo43532[3] = a4194342176;
clo43532[4] = kont42044;
void* f4204642182 = encode_clo(clo43532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4204642182;
arg_buffer[3] = a4194642181;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42329 = encode_clo(alloc_clo(lam42329_fptr, 0));

void* lam42331_fptr() // lam42331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42332 = arg_buffer[1];
//reading env and args
void* a4194542179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42044 = (decode_clo(env42332))[7];
//not do dummy comment
void* car = (decode_clo(env42332))[6];
//not do dummy comment
void* cons = (decode_clo(env42332))[5];
//not do dummy comment
void* lst = (decode_clo(env42332))[4];
//not do dummy comment
void* a4194342176 = (decode_clo(env42332))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42332))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42332))[1];

//creating new closure instance
void** clo43534 = alloc_clo(lam42329_fptr, 6);

//setting env list
clo43534[1] = lst2;
clo43534[2] = take_u45helper;
clo43534[3] = cons;
clo43534[4] = a4194542179;
clo43534[5] = a4194342176;
clo43534[6] = kont42044;
void* f4204742180 = encode_clo(clo43534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4204742180;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42331 = encode_clo(alloc_clo(lam42331_fptr, 0));

void* lam42334_fptr() // lam42334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42335 = arg_buffer[1];
//reading env and args
void* a4194342176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42044 = (decode_clo(env42335))[8];
//not do dummy comment
void* lst = (decode_clo(env42335))[7];
//not do dummy comment
void* cons = (decode_clo(env42335))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42335))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42335))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42335))[3];
//not do dummy comment
void* n = (decode_clo(env42335))[2];
//not do dummy comment
void* car = (decode_clo(env42335))[1];
mpz_t* mpzvar43535 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43535, "1", 10);
void* a4194442177 = encode_mpz(mpzvar43535);

//creating new closure instance
void** clo43537 = alloc_clo(lam42331_fptr, 7);

//setting env list
clo43537[1] = lst2;
clo43537[2] = take_u45helper;
clo43537[3] = a4194342176;
clo43537[4] = lst;
clo43537[5] = cons;
clo43537[6] = car;
clo43537[7] = kont42044;
void* f4204842178 = encode_clo(clo43537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4204842178;
arg_buffer[3] = n;
arg_buffer[4] = a4194442177;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42334 = encode_clo(alloc_clo(lam42334_fptr, 0));

void* lam42336_fptr() // lam42336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42337 = arg_buffer[1];
//reading env and args
void* a4194142172 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42337))[10];
//not do dummy comment
void* reverse = (decode_clo(env42337))[9];
//not do dummy comment
void* cons = (decode_clo(env42337))[8];
//not do dummy comment
void* _u45 = (decode_clo(env42337))[7];
//not do dummy comment
void* kont42044 = (decode_clo(env42337))[6];
//not do dummy comment
void* cdr = (decode_clo(env42337))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42337))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42337))[3];
//not do dummy comment
void* n = (decode_clo(env42337))[2];
//not do dummy comment
void* car = (decode_clo(env42337))[1];

//if-clause
bool if_guard43538 = is_true(a4194142172);
if(if_guard43538)
{

//creating new closure instance
void** clo43540 = alloc_clo(lam42325_fptr, 1);

//setting env list
clo43540[1] = kont42044;
void* f4204542173 = encode_clo(clo43540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4204542173;
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
void** clo43542 = alloc_clo(lam42334_fptr, 8);

//setting env list
clo43542[1] = car;
clo43542[2] = n;
clo43542[3] = lst2;
clo43542[4] = take_u45helper;
clo43542[5] = _u45;
clo43542[6] = cons;
clo43542[7] = lst;
clo43542[8] = kont42044;
void* f4204942175 = encode_clo(clo43542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4204942175;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42336 = encode_clo(alloc_clo(lam42336_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42339 = arg_buffer[1];
//reading env and args
void* kont42044 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar43543 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43543, "0", 10);
void* a4194042170 = encode_mpz(mpzvar43543);

//creating new closure instance
void** clo43545 = alloc_clo(lam42336_fptr, 10);

//setting env list
clo43545[1] = car;
clo43545[2] = n;
clo43545[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo43545[4] = take_u45helper;
clo43545[5] = cdr;
clo43545[6] = kont42044;
clo43545[7] = _u45;
clo43545[8] = cons;
clo43545[9] = reverse;
clo43545[10] = lst;
void* f4205042171 = encode_clo(clo43545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4205042171;
arg_buffer[3] = n;
arg_buffer[4] = a4194042170;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam42340_fptr() // lam42340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42341 = arg_buffer[1];
//reading env and args
void* a4194842185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42341))[4];
//not do dummy comment
void* kont42051 = (decode_clo(env42341))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42341))[2];
//not do dummy comment
void* n = (decode_clo(env42341))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42051;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4194842185;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42340 = encode_clo(alloc_clo(lam42340_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42342 = arg_buffer[1];
//reading env and args
void* kont42051 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43547 = alloc_clo(lam42340_fptr, 4);

//setting env list
clo43547[1] = n;
clo43547[2] = take_u45helper;
clo43547[3] = kont42051;
clo43547[4] = lst;
void* f4205242184 = encode_clo(clo43547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4205242184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam42344_fptr() // lam42344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42345 = arg_buffer[1];
//reading env and args
void* a4195342193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4195142189 = (decode_clo(env42345))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42345))[2];
//not do dummy comment
void* kont42053 = (decode_clo(env42345))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont42053;
arg_buffer[3] = a4195142189;
arg_buffer[4] = a4195342193;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42344 = encode_clo(alloc_clo(lam42344_fptr, 0));

void* lam42346_fptr() // lam42346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42347 = arg_buffer[1];
//reading env and args
void* a4195242191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4195142189 = (decode_clo(env42347))[4];
//not do dummy comment
void* length = (decode_clo(env42347))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42347))[2];
//not do dummy comment
void* kont42053 = (decode_clo(env42347))[1];

//creating new closure instance
void** clo43549 = alloc_clo(lam42344_fptr, 3);

//setting env list
clo43549[1] = kont42053;
clo43549[2] = _u43;
clo43549[3] = a4195142189;
void* f4205442192 = encode_clo(clo43549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4205442192;
arg_buffer[3] = a4195242191;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42346 = encode_clo(alloc_clo(lam42346_fptr, 0));

void* lam42349_fptr() // lam42349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42350 = arg_buffer[1];
//reading env and args
void* a4194942187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42350))[5];
//not do dummy comment
void* lst = (decode_clo(env42350))[4];
//not do dummy comment
void* length = (decode_clo(env42350))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42350))[2];
//not do dummy comment
void* kont42053 = (decode_clo(env42350))[1];

//if-clause
bool if_guard43550 = is_true(a4194942187);
if(if_guard43550)
{
mpz_t* mpzvar43551 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43551, "0", 10);
void* x4195042188 = encode_mpz(mpzvar43551);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42053);
arg_buffer[2] = x4195042188;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42053))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar43552 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43552, "1", 10);
void* a4195142189 = encode_mpz(mpzvar43552);

//creating new closure instance
void** clo43554 = alloc_clo(lam42346_fptr, 4);

//setting env list
clo43554[1] = kont42053;
clo43554[2] = _u43;
clo43554[3] = length;
clo43554[4] = a4195142189;
void* f4205542190 = encode_clo(clo43554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4205542190;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42349 = encode_clo(alloc_clo(lam42349_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42351 = arg_buffer[1];
//reading env and args
void* kont42053 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo43556 = alloc_clo(lam42349_fptr, 5);

//setting env list
clo43556[1] = kont42053;
clo43556[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo43556[3] = length;
clo43556[4] = lst;
clo43556[5] = cdr;
void* f4205642186 = encode_clo(clo43556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4205642186;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam42352_fptr() // lam42352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42353 = arg_buffer[1];
//reading env and args
void* x4195542197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42057 = (decode_clo(env42353))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42057);
arg_buffer[2] = x4195542197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42057))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42352 = encode_clo(alloc_clo(lam42352_fptr, 0));

void* lam42354_fptr() // lam42354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42355 = arg_buffer[1];
//reading env and args
void* a4195942205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env42355))[3];
//not do dummy comment
void* a4195742201 = (decode_clo(env42355))[2];
//not do dummy comment
void* kont42057 = (decode_clo(env42355))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42057;
arg_buffer[3] = a4195742201;
arg_buffer[4] = a4195942205;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42354 = encode_clo(alloc_clo(lam42354_fptr, 0));

void* lam42356_fptr() // lam42356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42357 = arg_buffer[1];
//reading env and args
void* a4195842203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env42357))[5];
//not do dummy comment
void* proc = (decode_clo(env42357))[4];
//not do dummy comment
void* cons = (decode_clo(env42357))[3];
//not do dummy comment
void* a4195742201 = (decode_clo(env42357))[2];
//not do dummy comment
void* kont42057 = (decode_clo(env42357))[1];

//creating new closure instance
void** clo43558 = alloc_clo(lam42354_fptr, 3);

//setting env list
clo43558[1] = kont42057;
clo43558[2] = a4195742201;
clo43558[3] = cons;
void* f4205942204 = encode_clo(clo43558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4205942204;
arg_buffer[3] = proc;
arg_buffer[4] = a4195842203;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42356 = encode_clo(alloc_clo(lam42356_fptr, 0));

void* lam42358_fptr() // lam42358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42359 = arg_buffer[1];
//reading env and args
void* a4195742201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42359))[6];
//not do dummy comment
void* lst = (decode_clo(env42359))[5];
//not do dummy comment
void* map = (decode_clo(env42359))[4];
//not do dummy comment
void* proc = (decode_clo(env42359))[3];
//not do dummy comment
void* kont42057 = (decode_clo(env42359))[2];
//not do dummy comment
void* cons = (decode_clo(env42359))[1];

//creating new closure instance
void** clo43560 = alloc_clo(lam42356_fptr, 5);

//setting env list
clo43560[1] = kont42057;
clo43560[2] = a4195742201;
clo43560[3] = cons;
clo43560[4] = proc;
clo43560[5] = map;
void* f4206042202 = encode_clo(clo43560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4206042202;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42358 = encode_clo(alloc_clo(lam42358_fptr, 0));

void* lam42360_fptr() // lam42360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42361 = arg_buffer[1];
//reading env and args
void* a4195642199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42361))[6];
//not do dummy comment
void* lst = (decode_clo(env42361))[5];
//not do dummy comment
void* map = (decode_clo(env42361))[4];
//not do dummy comment
void* proc = (decode_clo(env42361))[3];
//not do dummy comment
void* kont42057 = (decode_clo(env42361))[2];
//not do dummy comment
void* cons = (decode_clo(env42361))[1];

//creating new closure instance
void** clo43562 = alloc_clo(lam42358_fptr, 6);

//setting env list
clo43562[1] = cons;
clo43562[2] = kont42057;
clo43562[3] = proc;
clo43562[4] = map;
clo43562[5] = lst;
clo43562[6] = cdr;
void* f4206142200 = encode_clo(clo43562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4206142200;
arg_buffer[3] = a4195642199;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42360 = encode_clo(alloc_clo(lam42360_fptr, 0));

void* lam42362_fptr() // lam42362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42363 = arg_buffer[1];
//reading env and args
void* a4195442195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42363))[8];
//not do dummy comment
void* map = (decode_clo(env42363))[7];
//not do dummy comment
void* proc = (decode_clo(env42363))[6];
//not do dummy comment
void* cons = (decode_clo(env42363))[5];
//not do dummy comment
void* list = (decode_clo(env42363))[4];
//not do dummy comment
void* cdr = (decode_clo(env42363))[3];
//not do dummy comment
void* kont42057 = (decode_clo(env42363))[2];
//not do dummy comment
void* car = (decode_clo(env42363))[1];

//if-clause
bool if_guard43563 = is_true(a4195442195);
if(if_guard43563)
{

//creating new closure instance
void** clo43565 = alloc_clo(lam42352_fptr, 1);

//setting env list
clo43565[1] = kont42057;
void* f4205842196 = encode_clo(clo43565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4205842196;
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
void** clo43567 = alloc_clo(lam42360_fptr, 6);

//setting env list
clo43567[1] = cons;
clo43567[2] = kont42057;
clo43567[3] = proc;
clo43567[4] = map;
clo43567[5] = lst;
clo43567[6] = cdr;
void* f4206242198 = encode_clo(clo43567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4206242198;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42362 = encode_clo(alloc_clo(lam42362_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42364 = arg_buffer[1];
//reading env and args
void* kont42057 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43569 = alloc_clo(lam42362_fptr, 8);

//setting env list
clo43569[1] = car;
clo43569[2] = kont42057;
clo43569[3] = cdr;
clo43569[4] = list;
clo43569[5] = cons;
clo43569[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo43569[7] = map;
clo43569[8] = lst;
void* f4206342194 = encode_clo(clo43569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4206342194;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam42365_fptr() // lam42365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42366 = arg_buffer[1];
//reading env and args
void* x4196142209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42064 = (decode_clo(env42366))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42064);
arg_buffer[2] = x4196142209;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42064))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42365 = encode_clo(alloc_clo(lam42365_fptr, 0));

void* lam42367_fptr() // lam42367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42368 = arg_buffer[1];
//reading env and args
void* a4196642219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42064 = (decode_clo(env42368))[3];
//not do dummy comment
void* a4196442215 = (decode_clo(env42368))[2];
//not do dummy comment
void* cons = (decode_clo(env42368))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42064;
arg_buffer[3] = a4196442215;
arg_buffer[4] = a4196642219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42367 = encode_clo(alloc_clo(lam42367_fptr, 0));

void* lam42369_fptr() // lam42369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42370 = arg_buffer[1];
//reading env and args
void* a4196542217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42064 = (decode_clo(env42370))[5];
//not do dummy comment
void* op = (decode_clo(env42370))[4];
//not do dummy comment
void* a4196442215 = (decode_clo(env42370))[3];
//not do dummy comment
void* filter = (decode_clo(env42370))[2];
//not do dummy comment
void* cons = (decode_clo(env42370))[1];

//creating new closure instance
void** clo43571 = alloc_clo(lam42367_fptr, 3);

//setting env list
clo43571[1] = cons;
clo43571[2] = a4196442215;
clo43571[3] = kont42064;
void* f4206642218 = encode_clo(clo43571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4206642218;
arg_buffer[3] = op;
arg_buffer[4] = a4196542217;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42369 = encode_clo(alloc_clo(lam42369_fptr, 0));

void* lam42371_fptr() // lam42371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42372 = arg_buffer[1];
//reading env and args
void* a4196442215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42372))[6];
//not do dummy comment
void* op = (decode_clo(env42372))[5];
//not do dummy comment
void* filter = (decode_clo(env42372))[4];
//not do dummy comment
void* cons = (decode_clo(env42372))[3];
//not do dummy comment
void* lst = (decode_clo(env42372))[2];
//not do dummy comment
void* kont42064 = (decode_clo(env42372))[1];

//creating new closure instance
void** clo43573 = alloc_clo(lam42369_fptr, 5);

//setting env list
clo43573[1] = cons;
clo43573[2] = filter;
clo43573[3] = a4196442215;
clo43573[4] = op;
clo43573[5] = kont42064;
void* f4206742216 = encode_clo(clo43573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4206742216;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42371 = encode_clo(alloc_clo(lam42371_fptr, 0));

void* lam42373_fptr() // lam42373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42374 = arg_buffer[1];
//reading env and args
void* a4196742221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42064 = (decode_clo(env42374))[3];
//not do dummy comment
void* op = (decode_clo(env42374))[2];
//not do dummy comment
void* filter = (decode_clo(env42374))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont42064;
arg_buffer[3] = op;
arg_buffer[4] = a4196742221;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42373 = encode_clo(alloc_clo(lam42373_fptr, 0));

void* lam42375_fptr() // lam42375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42376 = arg_buffer[1];
//reading env and args
void* a4196342213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42376))[7];
//not do dummy comment
void* op = (decode_clo(env42376))[6];
//not do dummy comment
void* cons = (decode_clo(env42376))[5];
//not do dummy comment
void* lst = (decode_clo(env42376))[4];
//not do dummy comment
void* kont42064 = (decode_clo(env42376))[3];
//not do dummy comment
void* filter = (decode_clo(env42376))[2];
//not do dummy comment
void* car = (decode_clo(env42376))[1];

//if-clause
bool if_guard43574 = is_true(a4196342213);
if(if_guard43574)
{

//creating new closure instance
void** clo43576 = alloc_clo(lam42371_fptr, 6);

//setting env list
clo43576[1] = kont42064;
clo43576[2] = lst;
clo43576[3] = cons;
clo43576[4] = filter;
clo43576[5] = op;
clo43576[6] = cdr;
void* f4206842214 = encode_clo(clo43576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4206842214;
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
void** clo43578 = alloc_clo(lam42373_fptr, 3);

//setting env list
clo43578[1] = filter;
clo43578[2] = op;
clo43578[3] = kont42064;
void* f4206942220 = encode_clo(clo43578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4206942220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42375 = encode_clo(alloc_clo(lam42375_fptr, 0));

void* lam42377_fptr() // lam42377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42378 = arg_buffer[1];
//reading env and args
void* a4196242211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42378))[7];
//not do dummy comment
void* op = (decode_clo(env42378))[6];
//not do dummy comment
void* cons = (decode_clo(env42378))[5];
//not do dummy comment
void* lst = (decode_clo(env42378))[4];
//not do dummy comment
void* kont42064 = (decode_clo(env42378))[3];
//not do dummy comment
void* filter = (decode_clo(env42378))[2];
//not do dummy comment
void* car = (decode_clo(env42378))[1];

//creating new closure instance
void** clo43580 = alloc_clo(lam42375_fptr, 7);

//setting env list
clo43580[1] = car;
clo43580[2] = filter;
clo43580[3] = kont42064;
clo43580[4] = lst;
clo43580[5] = cons;
clo43580[6] = op;
clo43580[7] = cdr;
void* f4207042212 = encode_clo(clo43580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4207042212;
arg_buffer[3] = a4196242211;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42377 = encode_clo(alloc_clo(lam42377_fptr, 0));

void* lam42379_fptr() // lam42379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42380 = arg_buffer[1];
//reading env and args
void* a4196042207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env42380))[8];
//not do dummy comment
void* cons = (decode_clo(env42380))[7];
//not do dummy comment
void* list = (decode_clo(env42380))[6];
//not do dummy comment
void* cdr = (decode_clo(env42380))[5];
//not do dummy comment
void* lst = (decode_clo(env42380))[4];
//not do dummy comment
void* kont42064 = (decode_clo(env42380))[3];
//not do dummy comment
void* filter = (decode_clo(env42380))[2];
//not do dummy comment
void* car = (decode_clo(env42380))[1];

//if-clause
bool if_guard43581 = is_true(a4196042207);
if(if_guard43581)
{

//creating new closure instance
void** clo43583 = alloc_clo(lam42365_fptr, 1);

//setting env list
clo43583[1] = kont42064;
void* f4206542208 = encode_clo(clo43583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4206542208;
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
void** clo43585 = alloc_clo(lam42377_fptr, 7);

//setting env list
clo43585[1] = car;
clo43585[2] = filter;
clo43585[3] = kont42064;
clo43585[4] = lst;
clo43585[5] = cons;
clo43585[6] = op;
clo43585[7] = cdr;
void* f4207142210 = encode_clo(clo43585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4207142210;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42379 = encode_clo(alloc_clo(lam42379_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42381 = arg_buffer[1];
//reading env and args
void* kont42064 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43587 = alloc_clo(lam42379_fptr, 8);

//setting env list
clo43587[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo43587[2] = filter;
clo43587[3] = kont42064;
clo43587[4] = lst;
clo43587[5] = cdr;
clo43587[6] = list;
clo43587[7] = cons;
clo43587[8] = op;
void* f4207242206 = encode_clo(clo43587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4207242206;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam42382_fptr() // lam42382 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42383 = arg_buffer[1];
//reading env and args
void* a4197242229 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env42383))[3];
//not do dummy comment
void* a4197042226 = (decode_clo(env42383))[2];
//not do dummy comment
void* kont42073 = (decode_clo(env42383))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont42073;
arg_buffer[3] = a4197042226;
arg_buffer[4] = a4197242229;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42382 = encode_clo(alloc_clo(lam42382_fptr, 0));

void* lam42385_fptr() // lam42385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42386 = arg_buffer[1];
//reading env and args
void* a4197042226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env42386))[4];
//not do dummy comment
void* _u45 = (decode_clo(env42386))[3];
//not do dummy comment
void* kont42073 = (decode_clo(env42386))[2];
//not do dummy comment
void* n = (decode_clo(env42386))[1];
mpz_t* mpzvar43588 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43588, "1", 10);
void* a4197142227 = encode_mpz(mpzvar43588);

//creating new closure instance
void** clo43590 = alloc_clo(lam42382_fptr, 3);

//setting env list
clo43590[1] = kont42073;
clo43590[2] = a4197042226;
clo43590[3] = drop;
void* f4207442228 = encode_clo(clo43590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4207442228;
arg_buffer[3] = n;
arg_buffer[4] = a4197142227;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42385 = encode_clo(alloc_clo(lam42385_fptr, 0));

void* lam42387_fptr() // lam42387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42388 = arg_buffer[1];
//reading env and args
void* a4196942224 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42388))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42388))[5];
//not do dummy comment
void* lst = (decode_clo(env42388))[4];
//not do dummy comment
void* drop = (decode_clo(env42388))[3];
//not do dummy comment
void* kont42073 = (decode_clo(env42388))[2];
//not do dummy comment
void* n = (decode_clo(env42388))[1];

//if-clause
bool if_guard43591 = is_true(a4196942224);
if(if_guard43591)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42073);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42073))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43593 = alloc_clo(lam42385_fptr, 4);

//setting env list
clo43593[1] = n;
clo43593[2] = kont42073;
clo43593[3] = _u45;
clo43593[4] = drop;
void* f4207542225 = encode_clo(clo43593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4207542225;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42387 = encode_clo(alloc_clo(lam42387_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42390 = arg_buffer[1];
//reading env and args
void* kont42073 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar43594 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43594, "0", 10);
void* a4196842222 = encode_mpz(mpzvar43594);

//creating new closure instance
void** clo43596 = alloc_clo(lam42387_fptr, 6);

//setting env list
clo43596[1] = n;
clo43596[2] = kont42073;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo43596[3] = drop;
clo43596[4] = lst;
clo43596[5] = _u45;
clo43596[6] = cdr;
void* f4207642223 = encode_clo(clo43596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4207642223;
arg_buffer[3] = n;
arg_buffer[4] = a4196842222;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam42391_fptr() // lam42391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42392 = arg_buffer[1];
//reading env and args
void* a4197642237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42077 = (decode_clo(env42392))[3];
//not do dummy comment
void* proc = (decode_clo(env42392))[2];
//not do dummy comment
void* a4197442233 = (decode_clo(env42392))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont42077;
arg_buffer[3] = a4197442233;
arg_buffer[4] = a4197642237;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42391 = encode_clo(alloc_clo(lam42391_fptr, 0));

void* lam42393_fptr() // lam42393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42394 = arg_buffer[1];
//reading env and args
void* a4197542235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42077 = (decode_clo(env42394))[5];
//not do dummy comment
void* foldr = (decode_clo(env42394))[4];
//not do dummy comment
void* a4197442233 = (decode_clo(env42394))[3];
//not do dummy comment
void* proc = (decode_clo(env42394))[2];
//not do dummy comment
void* acc = (decode_clo(env42394))[1];

//creating new closure instance
void** clo43598 = alloc_clo(lam42391_fptr, 3);

//setting env list
clo43598[1] = a4197442233;
clo43598[2] = proc;
clo43598[3] = kont42077;
void* f4207842236 = encode_clo(clo43598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4207842236;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4197542235;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42393 = encode_clo(alloc_clo(lam42393_fptr, 0));

void* lam42395_fptr() // lam42395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42396 = arg_buffer[1];
//reading env and args
void* a4197442233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42396))[6];
//not do dummy comment
void* kont42077 = (decode_clo(env42396))[5];
//not do dummy comment
void* foldr = (decode_clo(env42396))[4];
//not do dummy comment
void* lst = (decode_clo(env42396))[3];
//not do dummy comment
void* proc = (decode_clo(env42396))[2];
//not do dummy comment
void* acc = (decode_clo(env42396))[1];

//creating new closure instance
void** clo43600 = alloc_clo(lam42393_fptr, 5);

//setting env list
clo43600[1] = acc;
clo43600[2] = proc;
clo43600[3] = a4197442233;
clo43600[4] = foldr;
clo43600[5] = kont42077;
void* f4207942234 = encode_clo(clo43600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4207942234;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42395 = encode_clo(alloc_clo(lam42395_fptr, 0));

void* lam42397_fptr() // lam42397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42398 = arg_buffer[1];
//reading env and args
void* a4197342231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42398))[7];
//not do dummy comment
void* kont42077 = (decode_clo(env42398))[6];
//not do dummy comment
void* car = (decode_clo(env42398))[5];
//not do dummy comment
void* foldr = (decode_clo(env42398))[4];
//not do dummy comment
void* lst = (decode_clo(env42398))[3];
//not do dummy comment
void* proc = (decode_clo(env42398))[2];
//not do dummy comment
void* acc = (decode_clo(env42398))[1];

//if-clause
bool if_guard43601 = is_true(a4197342231);
if(if_guard43601)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42077);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42077))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43603 = alloc_clo(lam42395_fptr, 6);

//setting env list
clo43603[1] = acc;
clo43603[2] = proc;
clo43603[3] = lst;
clo43603[4] = foldr;
clo43603[5] = kont42077;
clo43603[6] = cdr;
void* f4208042232 = encode_clo(clo43603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4208042232;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42397 = encode_clo(alloc_clo(lam42397_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42399 = arg_buffer[1];
//reading env and args
void* kont42077 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo43605 = alloc_clo(lam42397_fptr, 7);

//setting env list
clo43605[1] = acc;
clo43605[2] = proc;
clo43605[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo43605[4] = foldr;
clo43605[5] = car;
clo43605[6] = kont42077;
clo43605[7] = cdr;
void* f4208142230 = encode_clo(clo43605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4208142230;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam42400_fptr() // lam42400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42401 = arg_buffer[1];
//reading env and args
void* a4198042245 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4197842241 = (decode_clo(env42401))[3];
//not do dummy comment
void* kont42082 = (decode_clo(env42401))[2];
//not do dummy comment
void* cons = (decode_clo(env42401))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42082;
arg_buffer[3] = a4197842241;
arg_buffer[4] = a4198042245;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42400 = encode_clo(alloc_clo(lam42400_fptr, 0));

void* lam42402_fptr() // lam42402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42403 = arg_buffer[1];
//reading env and args
void* a4197942243 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4197842241 = (decode_clo(env42403))[5];
//not do dummy comment
void* kont42082 = (decode_clo(env42403))[4];
//not do dummy comment
void* append = (decode_clo(env42403))[3];
//not do dummy comment
void* lst2 = (decode_clo(env42403))[2];
//not do dummy comment
void* cons = (decode_clo(env42403))[1];

//creating new closure instance
void** clo43607 = alloc_clo(lam42400_fptr, 3);

//setting env list
clo43607[1] = cons;
clo43607[2] = kont42082;
clo43607[3] = a4197842241;
void* f4208342244 = encode_clo(clo43607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4208342244;
arg_buffer[3] = a4197942243;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42402 = encode_clo(alloc_clo(lam42402_fptr, 0));

void* lam42404_fptr() // lam42404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42405 = arg_buffer[1];
//reading env and args
void* a4197842241 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42405))[6];
//not do dummy comment
void* kont42082 = (decode_clo(env42405))[5];
//not do dummy comment
void* append = (decode_clo(env42405))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42405))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42405))[2];
//not do dummy comment
void* cons = (decode_clo(env42405))[1];

//creating new closure instance
void** clo43609 = alloc_clo(lam42402_fptr, 5);

//setting env list
clo43609[1] = cons;
clo43609[2] = lst2;
clo43609[3] = append;
clo43609[4] = kont42082;
clo43609[5] = a4197842241;
void* f4208442242 = encode_clo(clo43609);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4208442242;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42404 = encode_clo(alloc_clo(lam42404_fptr, 0));

void* lam42406_fptr() // lam42406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42407 = arg_buffer[1];
//reading env and args
void* a4197742239 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42407))[7];
//not do dummy comment
void* kont42082 = (decode_clo(env42407))[6];
//not do dummy comment
void* append = (decode_clo(env42407))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42407))[4];
//not do dummy comment
void* cons = (decode_clo(env42407))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42407))[2];
//not do dummy comment
void* car = (decode_clo(env42407))[1];

//if-clause
bool if_guard43610 = is_true(a4197742239);
if(if_guard43610)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42082);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42082))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo43612 = alloc_clo(lam42404_fptr, 6);

//setting env list
clo43612[1] = cons;
clo43612[2] = lst1;
clo43612[3] = lst2;
clo43612[4] = append;
clo43612[5] = kont42082;
clo43612[6] = cdr;
void* f4208542240 = encode_clo(clo43612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4208542240;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42406 = encode_clo(alloc_clo(lam42406_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42408 = arg_buffer[1];
//reading env and args
void* kont42082 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo43614 = alloc_clo(lam42406_fptr, 7);

//setting env list
clo43614[1] = car;
clo43614[2] = lst1;
clo43614[3] = cons;
clo43614[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo43614[5] = append;
clo43614[6] = kont42082;
clo43614[7] = cdr;
void* f4208642238 = encode_clo(clo43614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4208642238;
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
void* _42409 = arg_buffer[1];
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

void* kont4208742246 = prim_car(lst);
void* lst42247 = prim_cdr(lst);
void* x4198142248 = apply_prim_hash(lst42247);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4208742246);
arg_buffer[2] = x4198142248;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4208742246))[0]);
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
void* _42410 = arg_buffer[1];
//reading env and args
void* kont42089 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4198242249 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42089);
arg_buffer[2] = x4198242249;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42089))[0]);
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
void* _42411 = arg_buffer[1];
//reading env and args
void* kont42090 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4198342250 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42090);
arg_buffer[2] = x4198342250;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42090))[0]);
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
void* _42412 = arg_buffer[1];
//reading env and args
void* kont42091 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4198442251 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42091);
arg_buffer[2] = x4198442251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42091))[0]);
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
void* _42413 = arg_buffer[1];
//reading env and args
void* kont42092 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4198542252 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42092);
arg_buffer[2] = x4198542252;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42092))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam42415_fptr() // lam42415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42416 = arg_buffer[1];
//reading env and args
void* a4199342262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env42416))[2];
//not do dummy comment
void* kont42093 = (decode_clo(env42416))[1];
void* a4199442263 = encode_str(new(GC) std::string("work"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont42093;
arg_buffer[3] = a4199342262;
arg_buffer[4] = a4199442263;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42415 = encode_clo(alloc_clo(lam42415_fptr, 0));

void* lam42419_fptr() // lam42419 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42420 = arg_buffer[1];
//reading env and args
void* a4199042258 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45set = (decode_clo(env42420))[3];
//not do dummy comment
void* hash_u45ref = (decode_clo(env42420))[2];
//not do dummy comment
void* kont42093 = (decode_clo(env42420))[1];
void* a4199142259 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar43615 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43615, "90", 10);
void* a4199242260 = encode_mpz(mpzvar43615);

//creating new closure instance
void** clo43617 = alloc_clo(lam42415_fptr, 2);

//setting env list
clo43617[1] = kont42093;
clo43617[2] = hash_u45ref;
void* f4209442261 = encode_clo(clo43617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45set);
arg_buffer[2] = f4209442261;
arg_buffer[3] = a4199042258;
arg_buffer[4] = a4199142259;
arg_buffer[5] = a4199242260;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42419 = encode_clo(alloc_clo(lam42419_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42425 = arg_buffer[1];
//reading env and args
void* kont42093 = arg_buffer[2];
//Dummy comment
void* a4198642253 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar43618 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43618, "80", 10);
void* a4198742254 = encode_mpz(mpzvar43618);
mpz_t* mpzvar43619 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar43619, "10", 10);
void* a4198842255 = encode_mpz(mpzvar43619);
void* a4198942256 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo43621 = alloc_clo(lam42419_fptr, 3);

//setting env list
clo43621[1] = kont42093;
clo43621[2] = hash_u45ref;
clo43621[3] = hash_u45set;
void* f4209542257 = encode_clo(clo43621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4209542257;
arg_buffer[3] = a4198642253;
arg_buffer[4] = a4198742254;
arg_buffer[5] = a4198842255;
arg_buffer[6] = a4198942256;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam42426_fptr() // lam42426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42427 = arg_buffer[1];
//reading env and args
void* x4199542265 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42096 = (decode_clo(env42427))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42096);
arg_buffer[2] = x4199542265;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42096))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42426 = encode_clo(alloc_clo(lam42426_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42428 = arg_buffer[1];
//reading env and args
void* kont42096 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo43623 = alloc_clo(lam42426_fptr, 1);

//setting env list
clo43623[1] = kont42096;
void* f4209742264 = encode_clo(clo43623);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4209742264;
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

