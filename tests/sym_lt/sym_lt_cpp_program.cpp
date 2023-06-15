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
void* _121329 = arg_buffer[1];
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

void* kont121066121166 = prim_car(lst);
void* lst121167 = prim_cdr(lst);
void* x120976121168 = apply_prim__u43(lst121167);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121066121166);
arg_buffer[2] = x120976121168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121066121166))[0]);
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
void* _121330 = arg_buffer[1];
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

void* kont121068121169 = prim_car(lst);
void* lst121170 = prim_cdr(lst);
void* x120977121171 = apply_prim__u45(lst121170);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121068121169);
arg_buffer[2] = x120977121171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121068121169))[0]);
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
void* _121331 = arg_buffer[1];
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

void* kont121070121172 = prim_car(lst);
void* lst121173 = prim_cdr(lst);
void* x120978121174 = apply_prim__u42(lst121173);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121070121172);
arg_buffer[2] = x120978121174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121070121172))[0]);
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
void* _121332 = arg_buffer[1];
//reading env and args
void* kont121072 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x120979121175 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121072);
arg_buffer[2] = x120979121175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121072))[0]);
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
void* _121333 = arg_buffer[1];
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

void* kont121073121176 = prim_car(lst);
void* lst121177 = prim_cdr(lst);
void* x120980121178 = apply_prim__u47(lst121177);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121073121176);
arg_buffer[2] = x120980121178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121073121176))[0]);
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
void* _121334 = arg_buffer[1];
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

void* kont121075121179 = prim_car(lst);
void* lst121180 = prim_cdr(lst);
void* x120981121181 = apply_prim__u61(lst121180);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121075121179);
arg_buffer[2] = x120981121181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121075121179))[0]);
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
void* _121335 = arg_buffer[1];
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

void* kont121077121182 = prim_car(lst);
void* lst121183 = prim_cdr(lst);
void* x120982121184 = apply_prim__u62(lst121183);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121077121182);
arg_buffer[2] = x120982121184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121077121182))[0]);
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
void* _121336 = arg_buffer[1];
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

void* kont121079121185 = prim_car(lst);
void* lst121186 = prim_cdr(lst);
void* x120983121187 = apply_prim__u60(lst121186);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121079121185);
arg_buffer[2] = x120983121187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121079121185))[0]);
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
void* _121337 = arg_buffer[1];
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

void* kont121081121188 = prim_car(lst);
void* lst121189 = prim_cdr(lst);
void* x120984121190 = apply_prim__u60_u61(lst121189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121081121188);
arg_buffer[2] = x120984121190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121081121188))[0]);
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
void* _121338 = arg_buffer[1];
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

void* kont121083121191 = prim_car(lst);
void* lst121192 = prim_cdr(lst);
void* x120985121193 = apply_prim__u62_u61(lst121192);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121083121191);
arg_buffer[2] = x120985121193;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121083121191))[0]);
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
void* _121339 = arg_buffer[1];
//reading env and args
void* kont121085 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x120986121194 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121085);
arg_buffer[2] = x120986121194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121085))[0]);
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
void* _121340 = arg_buffer[1];
//reading env and args
void* kont121086 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x120987121195 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121086);
arg_buffer[2] = x120987121195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121086))[0]);
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
void* _121341 = arg_buffer[1];
//reading env and args
void* kont121087 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x120988121196 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121087);
arg_buffer[2] = x120988121196;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121087))[0]);
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
void* _121342 = arg_buffer[1];
//reading env and args
void* kont121088 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x120989121197 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121088);
arg_buffer[2] = x120989121197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121088))[0]);
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
void* _121343 = arg_buffer[1];
//reading env and args
void* kont121089 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x120990121198 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121089);
arg_buffer[2] = x120990121198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121089))[0]);
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
void* _121344 = arg_buffer[1];
//reading env and args
void* kont121090 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x120991121199 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121090);
arg_buffer[2] = x120991121199;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121090))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam121345_fptr() // lam121345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121346 = arg_buffer[1];
//reading env and args
void* a120994121203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121091 = (decode_clo(env121346))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env121346))[2];
//not do dummy comment
void* a120992121200 = (decode_clo(env121346))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont121091;
arg_buffer[3] = a120992121200;
arg_buffer[4] = a120994121203;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121345 = encode_clo(alloc_clo(lam121345_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121349 = arg_buffer[1];
//reading env and args
void* kont121091 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar122027 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122027, "0", 10);
void* a120992121200 = encode_mpz(mpzvar122027);
mpz_t* mpzvar122028 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122028, "2", 10);
void* a120993121201 = encode_mpz(mpzvar122028);

//creating new closure instance
void** clo122030 = alloc_clo(lam121345_fptr, 3);

//setting env list
clo122030[1] = a120992121200;
clo122030[2] = equal_u63;
clo122030[3] = kont121091;
void* f121092121202 = encode_clo(clo122030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f121092121202;
arg_buffer[3] = x;
arg_buffer[4] = a120993121201;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam121350_fptr() // lam121350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121351 = arg_buffer[1];
//reading env and args
void* a120997121207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a120995121204 = (decode_clo(env121351))[3];
//not do dummy comment
void* kont121093 = (decode_clo(env121351))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env121351))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont121093;
arg_buffer[3] = a120995121204;
arg_buffer[4] = a120997121207;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121350 = encode_clo(alloc_clo(lam121350_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121354 = arg_buffer[1];
//reading env and args
void* kont121093 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar122031 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122031, "1", 10);
void* a120995121204 = encode_mpz(mpzvar122031);
mpz_t* mpzvar122032 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122032, "2", 10);
void* a120996121205 = encode_mpz(mpzvar122032);

//creating new closure instance
void** clo122034 = alloc_clo(lam121350_fptr, 3);

//setting env list
clo122034[1] = equal_u63;
clo122034[2] = kont121093;
clo122034[3] = a120995121204;
void* f121094121206 = encode_clo(clo122034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f121094121206;
arg_buffer[3] = x;
arg_buffer[4] = a120996121205;
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
void* _121355 = arg_buffer[1];
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

void* kont121095121208 = prim_car(x);
void* x121209 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121095121208);
arg_buffer[2] = x121209;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121095121208))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam121358_fptr() // lam121358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121359 = arg_buffer[1];
//reading env and args
void* a121003121219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121097 = (decode_clo(env121359))[3];
//not do dummy comment
void* x = (decode_clo(env121359))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env121359))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont121097;
arg_buffer[3] = x;
arg_buffer[4] = a121003121219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121358 = encode_clo(alloc_clo(lam121358_fptr, 0));

void* lam121360_fptr() // lam121360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121361 = arg_buffer[1];
//reading env and args
void* a121001121216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121361))[5];
//not do dummy comment
void* lst = (decode_clo(env121361))[4];
//not do dummy comment
void* kont121097 = (decode_clo(env121361))[3];
//not do dummy comment
void* x = (decode_clo(env121361))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env121361))[1];

//if-clause
bool if_guard122035 = is_true(a121001121216);
if(if_guard122035)
{
void* x121002121217 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121097);
arg_buffer[2] = x121002121217;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121097))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo122037 = alloc_clo(lam121358_fptr, 3);

//setting env list
clo122037[1] = member_u63;
clo122037[2] = x;
clo122037[3] = kont121097;
void* f121098121218 = encode_clo(clo122037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121098121218;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121360 = encode_clo(alloc_clo(lam121360_fptr, 0));

void* lam121362_fptr() // lam121362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121363 = arg_buffer[1];
//reading env and args
void* a121000121214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121363))[6];
//not do dummy comment
void* lst = (decode_clo(env121363))[5];
//not do dummy comment
void* x = (decode_clo(env121363))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env121363))[3];
//not do dummy comment
void* kont121097 = (decode_clo(env121363))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env121363))[1];

//creating new closure instance
void** clo122039 = alloc_clo(lam121360_fptr, 5);

//setting env list
clo122039[1] = member_u63;
clo122039[2] = x;
clo122039[3] = kont121097;
clo122039[4] = lst;
clo122039[5] = cdr;
void* f121099121215 = encode_clo(clo122039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f121099121215;
arg_buffer[3] = a121000121214;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121362 = encode_clo(alloc_clo(lam121362_fptr, 0));

void* lam121364_fptr() // lam121364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121365 = arg_buffer[1];
//reading env and args
void* a120998121211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121365))[7];
//not do dummy comment
void* lst = (decode_clo(env121365))[6];
//not do dummy comment
void* x = (decode_clo(env121365))[5];
//not do dummy comment
void* car = (decode_clo(env121365))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env121365))[3];
//not do dummy comment
void* kont121097 = (decode_clo(env121365))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env121365))[1];

//if-clause
bool if_guard122040 = is_true(a120998121211);
if(if_guard122040)
{
void* x120999121212 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121097);
arg_buffer[2] = x120999121212;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121097))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo122042 = alloc_clo(lam121362_fptr, 6);

//setting env list
clo122042[1] = equal_u63;
clo122042[2] = kont121097;
clo122042[3] = member_u63;
clo122042[4] = x;
clo122042[5] = lst;
clo122042[6] = cdr;
void* f121100121213 = encode_clo(clo122042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121100121213;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121364 = encode_clo(alloc_clo(lam121364_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121366 = arg_buffer[1];
//reading env and args
void* kont121097 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo122044 = alloc_clo(lam121364_fptr, 7);

//setting env list
clo122044[1] = equal_u63;
clo122044[2] = kont121097;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo122044[3] = member_u63;
clo122044[4] = car;
clo122044[5] = x;
clo122044[6] = lst;
clo122044[7] = cdr;
void* f121101121210 = encode_clo(clo122044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121101121210;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam121367_fptr() // lam121367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121368 = arg_buffer[1];
//reading env and args
void* a121007121227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a121006121225 = (decode_clo(env121368))[4];
//not do dummy comment
void* fun = (decode_clo(env121368))[3];
//not do dummy comment
void* kont121102 = (decode_clo(env121368))[2];
//not do dummy comment
void* foldl = (decode_clo(env121368))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont121102;
arg_buffer[3] = fun;
arg_buffer[4] = a121006121225;
arg_buffer[5] = a121007121227;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121367 = encode_clo(alloc_clo(lam121367_fptr, 0));

void* lam121369_fptr() // lam121369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121370 = arg_buffer[1];
//reading env and args
void* a121006121225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121370))[5];
//not do dummy comment
void* lst = (decode_clo(env121370))[4];
//not do dummy comment
void* fun = (decode_clo(env121370))[3];
//not do dummy comment
void* kont121102 = (decode_clo(env121370))[2];
//not do dummy comment
void* foldl = (decode_clo(env121370))[1];

//creating new closure instance
void** clo122046 = alloc_clo(lam121367_fptr, 4);

//setting env list
clo122046[1] = foldl;
clo122046[2] = kont121102;
clo122046[3] = fun;
clo122046[4] = a121006121225;
void* f121103121226 = encode_clo(clo122046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121103121226;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121369 = encode_clo(alloc_clo(lam121369_fptr, 0));

void* lam121371_fptr() // lam121371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121372 = arg_buffer[1];
//reading env and args
void* a121005121223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121372))[6];
//not do dummy comment
void* lst = (decode_clo(env121372))[5];
//not do dummy comment
void* fun = (decode_clo(env121372))[4];
//not do dummy comment
void* acc = (decode_clo(env121372))[3];
//not do dummy comment
void* kont121102 = (decode_clo(env121372))[2];
//not do dummy comment
void* foldl = (decode_clo(env121372))[1];

//creating new closure instance
void** clo122048 = alloc_clo(lam121369_fptr, 5);

//setting env list
clo122048[1] = foldl;
clo122048[2] = kont121102;
clo122048[3] = fun;
clo122048[4] = lst;
clo122048[5] = cdr;
void* f121104121224 = encode_clo(clo122048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f121104121224;
arg_buffer[3] = a121005121223;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121371 = encode_clo(alloc_clo(lam121371_fptr, 0));

void* lam121373_fptr() // lam121373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121374 = arg_buffer[1];
//reading env and args
void* a121004121221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121374))[7];
//not do dummy comment
void* lst = (decode_clo(env121374))[6];
//not do dummy comment
void* fun = (decode_clo(env121374))[5];
//not do dummy comment
void* acc = (decode_clo(env121374))[4];
//not do dummy comment
void* foldl = (decode_clo(env121374))[3];
//not do dummy comment
void* kont121102 = (decode_clo(env121374))[2];
//not do dummy comment
void* car = (decode_clo(env121374))[1];

//if-clause
bool if_guard122049 = is_true(a121004121221);
if(if_guard122049)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121102);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121102))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo122051 = alloc_clo(lam121371_fptr, 6);

//setting env list
clo122051[1] = foldl;
clo122051[2] = kont121102;
clo122051[3] = acc;
clo122051[4] = fun;
clo122051[5] = lst;
clo122051[6] = cdr;
void* f121105121222 = encode_clo(clo122051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121105121222;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121373 = encode_clo(alloc_clo(lam121373_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121375 = arg_buffer[1];
//reading env and args
void* kont121102 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo122053 = alloc_clo(lam121373_fptr, 7);

//setting env list
clo122053[1] = car;
clo122053[2] = kont121102;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo122053[3] = foldl;
clo122053[4] = acc;
clo122053[5] = fun;
clo122053[6] = lst;
clo122053[7] = cdr;
void* f121106121220 = encode_clo(clo122053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121106121220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam121376_fptr() // lam121376 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121377 = arg_buffer[1];
//reading env and args
void* a121011121235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121107 = (decode_clo(env121377))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env121377))[2];
//not do dummy comment
void* a121009121231 = (decode_clo(env121377))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont121107;
arg_buffer[3] = a121009121231;
arg_buffer[4] = a121011121235;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121376 = encode_clo(alloc_clo(lam121376_fptr, 0));

void* lam121378_fptr() // lam121378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121379 = arg_buffer[1];
//reading env and args
void* a121010121233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121107 = (decode_clo(env121379))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env121379))[4];
//not do dummy comment
void* lst2 = (decode_clo(env121379))[3];
//not do dummy comment
void* cons = (decode_clo(env121379))[2];
//not do dummy comment
void* a121009121231 = (decode_clo(env121379))[1];

//creating new closure instance
void** clo122055 = alloc_clo(lam121376_fptr, 3);

//setting env list
clo122055[1] = a121009121231;
clo122055[2] = reverse_u45helper;
clo122055[3] = kont121107;
void* f121108121234 = encode_clo(clo122055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f121108121234;
arg_buffer[3] = a121010121233;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121378 = encode_clo(alloc_clo(lam121378_fptr, 0));

void* lam121380_fptr() // lam121380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121381 = arg_buffer[1];
//reading env and args
void* a121009121231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121107 = (decode_clo(env121381))[6];
//not do dummy comment
void* lst = (decode_clo(env121381))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env121381))[4];
//not do dummy comment
void* lst2 = (decode_clo(env121381))[3];
//not do dummy comment
void* car = (decode_clo(env121381))[2];
//not do dummy comment
void* cons = (decode_clo(env121381))[1];

//creating new closure instance
void** clo122057 = alloc_clo(lam121378_fptr, 5);

//setting env list
clo122057[1] = a121009121231;
clo122057[2] = cons;
clo122057[3] = lst2;
clo122057[4] = reverse_u45helper;
clo122057[5] = kont121107;
void* f121109121232 = encode_clo(clo122057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121109121232;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121380 = encode_clo(alloc_clo(lam121380_fptr, 0));

void* lam121382_fptr() // lam121382 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121383 = arg_buffer[1];
//reading env and args
void* a121008121229 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121383))[7];
//not do dummy comment
void* kont121107 = (decode_clo(env121383))[6];
//not do dummy comment
void* lst = (decode_clo(env121383))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env121383))[4];
//not do dummy comment
void* lst2 = (decode_clo(env121383))[3];
//not do dummy comment
void* car = (decode_clo(env121383))[2];
//not do dummy comment
void* cons = (decode_clo(env121383))[1];

//if-clause
bool if_guard122058 = is_true(a121008121229);
if(if_guard122058)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121107);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121107))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo122060 = alloc_clo(lam121380_fptr, 6);

//setting env list
clo122060[1] = cons;
clo122060[2] = car;
clo122060[3] = lst2;
clo122060[4] = reverse_u45helper;
clo122060[5] = lst;
clo122060[6] = kont121107;
void* f121110121230 = encode_clo(clo122060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121110121230;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121382 = encode_clo(alloc_clo(lam121382_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121384 = arg_buffer[1];
//reading env and args
void* kont121107 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo122062 = alloc_clo(lam121382_fptr, 7);

//setting env list
clo122062[1] = cons;
clo122062[2] = car;
clo122062[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo122062[4] = reverse_u45helper;
clo122062[5] = lst;
clo122062[6] = kont121107;
clo122062[7] = cdr;
void* f121111121228 = encode_clo(clo122062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121111121228;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam121385_fptr() // lam121385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121386 = arg_buffer[1];
//reading env and args
void* a121012121237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env121386))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env121386))[2];
//not do dummy comment
void* kont121112 = (decode_clo(env121386))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont121112;
arg_buffer[3] = lst;
arg_buffer[4] = a121012121237;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121385 = encode_clo(alloc_clo(lam121385_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121387 = arg_buffer[1];
//reading env and args
void* kont121112 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo122064 = alloc_clo(lam121385_fptr, 3);

//setting env list
clo122064[1] = kont121112;
clo122064[2] = reverse_u45helper;
clo122064[3] = lst;
void* f121113121236 = encode_clo(clo122064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f121113121236;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam121388_fptr() // lam121388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121389 = arg_buffer[1];
//reading env and args
void* x121015121242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121114 = (decode_clo(env121389))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121114);
arg_buffer[2] = x121015121242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121114))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121388 = encode_clo(alloc_clo(lam121388_fptr, 0));

void* lam121390_fptr() // lam121390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121391 = arg_buffer[1];
//reading env and args
void* a121020121251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121114 = (decode_clo(env121391))[4];
//not do dummy comment
void* a121016121244 = (decode_clo(env121391))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env121391))[2];
//not do dummy comment
void* a121018121247 = (decode_clo(env121391))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont121114;
arg_buffer[3] = a121016121244;
arg_buffer[4] = a121018121247;
arg_buffer[5] = a121020121251;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121390 = encode_clo(alloc_clo(lam121390_fptr, 0));

void* lam121392_fptr() // lam121392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121393 = arg_buffer[1];
//reading env and args
void* a121019121249 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121114 = (decode_clo(env121393))[6];
//not do dummy comment
void* a121016121244 = (decode_clo(env121393))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env121393))[4];
//not do dummy comment
void* lst2 = (decode_clo(env121393))[3];
//not do dummy comment
void* a121018121247 = (decode_clo(env121393))[2];
//not do dummy comment
void* cons = (decode_clo(env121393))[1];

//creating new closure instance
void** clo122066 = alloc_clo(lam121390_fptr, 4);

//setting env list
clo122066[1] = a121018121247;
clo122066[2] = take_u45helper;
clo122066[3] = a121016121244;
clo122066[4] = kont121114;
void* f121116121250 = encode_clo(clo122066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f121116121250;
arg_buffer[3] = a121019121249;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121392 = encode_clo(alloc_clo(lam121392_fptr, 0));

void* lam121394_fptr() // lam121394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121395 = arg_buffer[1];
//reading env and args
void* a121018121247 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env121395))[7];
//not do dummy comment
void* kont121114 = (decode_clo(env121395))[6];
//not do dummy comment
void* a121016121244 = (decode_clo(env121395))[5];
//not do dummy comment
void* car = (decode_clo(env121395))[4];
//not do dummy comment
void* cons = (decode_clo(env121395))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env121395))[2];
//not do dummy comment
void* lst2 = (decode_clo(env121395))[1];

//creating new closure instance
void** clo122068 = alloc_clo(lam121392_fptr, 6);

//setting env list
clo122068[1] = cons;
clo122068[2] = a121018121247;
clo122068[3] = lst2;
clo122068[4] = take_u45helper;
clo122068[5] = a121016121244;
clo122068[6] = kont121114;
void* f121117121248 = encode_clo(clo122068);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121117121248;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121394 = encode_clo(alloc_clo(lam121394_fptr, 0));

void* lam121397_fptr() // lam121397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121398 = arg_buffer[1];
//reading env and args
void* a121016121244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env121398))[8];
//not do dummy comment
void* kont121114 = (decode_clo(env121398))[7];
//not do dummy comment
void* cons = (decode_clo(env121398))[6];
//not do dummy comment
void* _u45 = (decode_clo(env121398))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env121398))[4];
//not do dummy comment
void* lst2 = (decode_clo(env121398))[3];
//not do dummy comment
void* n = (decode_clo(env121398))[2];
//not do dummy comment
void* car = (decode_clo(env121398))[1];
mpz_t* mpzvar122069 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122069, "1", 10);
void* a121017121245 = encode_mpz(mpzvar122069);

//creating new closure instance
void** clo122071 = alloc_clo(lam121394_fptr, 7);

//setting env list
clo122071[1] = lst2;
clo122071[2] = take_u45helper;
clo122071[3] = cons;
clo122071[4] = car;
clo122071[5] = a121016121244;
clo122071[6] = kont121114;
clo122071[7] = lst;
void* f121118121246 = encode_clo(clo122071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f121118121246;
arg_buffer[3] = n;
arg_buffer[4] = a121017121245;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121397 = encode_clo(alloc_clo(lam121397_fptr, 0));

void* lam121399_fptr() // lam121399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121400 = arg_buffer[1];
//reading env and args
void* a121014121240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121400))[10];
//not do dummy comment
void* lst = (decode_clo(env121400))[9];
//not do dummy comment
void* reverse = (decode_clo(env121400))[8];
//not do dummy comment
void* kont121114 = (decode_clo(env121400))[7];
//not do dummy comment
void* cons = (decode_clo(env121400))[6];
//not do dummy comment
void* _u45 = (decode_clo(env121400))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env121400))[4];
//not do dummy comment
void* lst2 = (decode_clo(env121400))[3];
//not do dummy comment
void* n = (decode_clo(env121400))[2];
//not do dummy comment
void* car = (decode_clo(env121400))[1];

//if-clause
bool if_guard122072 = is_true(a121014121240);
if(if_guard122072)
{

//creating new closure instance
void** clo122074 = alloc_clo(lam121388_fptr, 1);

//setting env list
clo122074[1] = kont121114;
void* f121115121241 = encode_clo(clo122074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f121115121241;
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
void** clo122076 = alloc_clo(lam121397_fptr, 8);

//setting env list
clo122076[1] = car;
clo122076[2] = n;
clo122076[3] = lst2;
clo122076[4] = take_u45helper;
clo122076[5] = _u45;
clo122076[6] = cons;
clo122076[7] = kont121114;
clo122076[8] = lst;
void* f121119121243 = encode_clo(clo122076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121119121243;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121399 = encode_clo(alloc_clo(lam121399_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121402 = arg_buffer[1];
//reading env and args
void* kont121114 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar122077 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122077, "0", 10);
void* a121013121238 = encode_mpz(mpzvar122077);

//creating new closure instance
void** clo122079 = alloc_clo(lam121399_fptr, 10);

//setting env list
clo122079[1] = car;
clo122079[2] = n;
clo122079[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo122079[4] = take_u45helper;
clo122079[5] = _u45;
clo122079[6] = cons;
clo122079[7] = kont121114;
clo122079[8] = reverse;
clo122079[9] = lst;
clo122079[10] = cdr;
void* f121120121239 = encode_clo(clo122079);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f121120121239;
arg_buffer[3] = n;
arg_buffer[4] = a121013121238;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam121403_fptr() // lam121403 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121404 = arg_buffer[1];
//reading env and args
void* a121021121253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121121 = (decode_clo(env121404))[4];
//not do dummy comment
void* lst = (decode_clo(env121404))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env121404))[2];
//not do dummy comment
void* n = (decode_clo(env121404))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont121121;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a121021121253;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121403 = encode_clo(alloc_clo(lam121403_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121405 = arg_buffer[1];
//reading env and args
void* kont121121 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo122081 = alloc_clo(lam121403_fptr, 4);

//setting env list
clo122081[1] = n;
clo122081[2] = take_u45helper;
clo122081[3] = lst;
clo122081[4] = kont121121;
void* f121122121252 = encode_clo(clo122081);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f121122121252;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam121407_fptr() // lam121407 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121408 = arg_buffer[1];
//reading env and args
void* a121026121261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121123 = (decode_clo(env121408))[3];
//not do dummy comment
void* a121024121257 = (decode_clo(env121408))[2];
//not do dummy comment
void* _u43 = (decode_clo(env121408))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont121123;
arg_buffer[3] = a121024121257;
arg_buffer[4] = a121026121261;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121407 = encode_clo(alloc_clo(lam121407_fptr, 0));

void* lam121409_fptr() // lam121409 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121410 = arg_buffer[1];
//reading env and args
void* a121025121259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121123 = (decode_clo(env121410))[4];
//not do dummy comment
void* length = (decode_clo(env121410))[3];
//not do dummy comment
void* a121024121257 = (decode_clo(env121410))[2];
//not do dummy comment
void* _u43 = (decode_clo(env121410))[1];

//creating new closure instance
void** clo122083 = alloc_clo(lam121407_fptr, 3);

//setting env list
clo122083[1] = _u43;
clo122083[2] = a121024121257;
clo122083[3] = kont121123;
void* f121124121260 = encode_clo(clo122083);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f121124121260;
arg_buffer[3] = a121025121259;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121409 = encode_clo(alloc_clo(lam121409_fptr, 0));

void* lam121412_fptr() // lam121412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121413 = arg_buffer[1];
//reading env and args
void* a121022121255 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121413))[5];
//not do dummy comment
void* kont121123 = (decode_clo(env121413))[4];
//not do dummy comment
void* lst = (decode_clo(env121413))[3];
//not do dummy comment
void* length = (decode_clo(env121413))[2];
//not do dummy comment
void* _u43 = (decode_clo(env121413))[1];

//if-clause
bool if_guard122084 = is_true(a121022121255);
if(if_guard122084)
{
mpz_t* mpzvar122085 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122085, "0", 10);
void* x121023121256 = encode_mpz(mpzvar122085);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121123);
arg_buffer[2] = x121023121256;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121123))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar122086 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122086, "1", 10);
void* a121024121257 = encode_mpz(mpzvar122086);

//creating new closure instance
void** clo122088 = alloc_clo(lam121409_fptr, 4);

//setting env list
clo122088[1] = _u43;
clo122088[2] = a121024121257;
clo122088[3] = length;
clo122088[4] = kont121123;
void* f121125121258 = encode_clo(clo122088);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121125121258;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121412 = encode_clo(alloc_clo(lam121412_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121414 = arg_buffer[1];
//reading env and args
void* kont121123 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo122090 = alloc_clo(lam121412_fptr, 5);

//setting env list
clo122090[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo122090[2] = length;
clo122090[3] = lst;
clo122090[4] = kont121123;
clo122090[5] = cdr;
void* f121126121254 = encode_clo(clo122090);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121126121254;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam121415_fptr() // lam121415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121416 = arg_buffer[1];
//reading env and args
void* x121028121265 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121127 = (decode_clo(env121416))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121127);
arg_buffer[2] = x121028121265;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121127))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121415 = encode_clo(alloc_clo(lam121415_fptr, 0));

void* lam121417_fptr() // lam121417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121418 = arg_buffer[1];
//reading env and args
void* a121032121273 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a121030121269 = (decode_clo(env121418))[3];
//not do dummy comment
void* kont121127 = (decode_clo(env121418))[2];
//not do dummy comment
void* cons = (decode_clo(env121418))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont121127;
arg_buffer[3] = a121030121269;
arg_buffer[4] = a121032121273;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121417 = encode_clo(alloc_clo(lam121417_fptr, 0));

void* lam121419_fptr() // lam121419 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121420 = arg_buffer[1];
//reading env and args
void* a121031121271 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a121030121269 = (decode_clo(env121420))[5];
//not do dummy comment
void* map = (decode_clo(env121420))[4];
//not do dummy comment
void* kont121127 = (decode_clo(env121420))[3];
//not do dummy comment
void* proc = (decode_clo(env121420))[2];
//not do dummy comment
void* cons = (decode_clo(env121420))[1];

//creating new closure instance
void** clo122092 = alloc_clo(lam121417_fptr, 3);

//setting env list
clo122092[1] = cons;
clo122092[2] = kont121127;
clo122092[3] = a121030121269;
void* f121129121272 = encode_clo(clo122092);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f121129121272;
arg_buffer[3] = proc;
arg_buffer[4] = a121031121271;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121419 = encode_clo(alloc_clo(lam121419_fptr, 0));

void* lam121421_fptr() // lam121421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121422 = arg_buffer[1];
//reading env and args
void* a121030121269 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121422))[6];
//not do dummy comment
void* lst = (decode_clo(env121422))[5];
//not do dummy comment
void* map = (decode_clo(env121422))[4];
//not do dummy comment
void* kont121127 = (decode_clo(env121422))[3];
//not do dummy comment
void* proc = (decode_clo(env121422))[2];
//not do dummy comment
void* cons = (decode_clo(env121422))[1];

//creating new closure instance
void** clo122094 = alloc_clo(lam121419_fptr, 5);

//setting env list
clo122094[1] = cons;
clo122094[2] = proc;
clo122094[3] = kont121127;
clo122094[4] = map;
clo122094[5] = a121030121269;
void* f121130121270 = encode_clo(clo122094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121130121270;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121421 = encode_clo(alloc_clo(lam121421_fptr, 0));

void* lam121423_fptr() // lam121423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121424 = arg_buffer[1];
//reading env and args
void* a121029121267 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121424))[6];
//not do dummy comment
void* lst = (decode_clo(env121424))[5];
//not do dummy comment
void* map = (decode_clo(env121424))[4];
//not do dummy comment
void* kont121127 = (decode_clo(env121424))[3];
//not do dummy comment
void* proc = (decode_clo(env121424))[2];
//not do dummy comment
void* cons = (decode_clo(env121424))[1];

//creating new closure instance
void** clo122096 = alloc_clo(lam121421_fptr, 6);

//setting env list
clo122096[1] = cons;
clo122096[2] = proc;
clo122096[3] = kont121127;
clo122096[4] = map;
clo122096[5] = lst;
clo122096[6] = cdr;
void* f121131121268 = encode_clo(clo122096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f121131121268;
arg_buffer[3] = a121029121267;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121423 = encode_clo(alloc_clo(lam121423_fptr, 0));

void* lam121425_fptr() // lam121425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121426 = arg_buffer[1];
//reading env and args
void* a121027121263 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env121426))[8];
//not do dummy comment
void* map = (decode_clo(env121426))[7];
//not do dummy comment
void* kont121127 = (decode_clo(env121426))[6];
//not do dummy comment
void* proc = (decode_clo(env121426))[5];
//not do dummy comment
void* car = (decode_clo(env121426))[4];
//not do dummy comment
void* cons = (decode_clo(env121426))[3];
//not do dummy comment
void* list = (decode_clo(env121426))[2];
//not do dummy comment
void* cdr = (decode_clo(env121426))[1];

//if-clause
bool if_guard122097 = is_true(a121027121263);
if(if_guard122097)
{

//creating new closure instance
void** clo122099 = alloc_clo(lam121415_fptr, 1);

//setting env list
clo122099[1] = kont121127;
void* f121128121264 = encode_clo(clo122099);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f121128121264;
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
void** clo122101 = alloc_clo(lam121423_fptr, 6);

//setting env list
clo122101[1] = cons;
clo122101[2] = proc;
clo122101[3] = kont121127;
clo122101[4] = map;
clo122101[5] = lst;
clo122101[6] = cdr;
void* f121132121266 = encode_clo(clo122101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121132121266;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121425 = encode_clo(alloc_clo(lam121425_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121427 = arg_buffer[1];
//reading env and args
void* kont121127 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo122103 = alloc_clo(lam121425_fptr, 8);

//setting env list
clo122103[1] = cdr;
clo122103[2] = list;
clo122103[3] = cons;
clo122103[4] = car;
clo122103[5] = proc;
clo122103[6] = kont121127;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo122103[7] = map;
clo122103[8] = lst;
void* f121133121262 = encode_clo(clo122103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121133121262;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam121428_fptr() // lam121428 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121429 = arg_buffer[1];
//reading env and args
void* x121034121277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121134 = (decode_clo(env121429))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121134);
arg_buffer[2] = x121034121277;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121134))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121428 = encode_clo(alloc_clo(lam121428_fptr, 0));

void* lam121430_fptr() // lam121430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121431 = arg_buffer[1];
//reading env and args
void* a121039121287 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a121037121283 = (decode_clo(env121431))[3];
//not do dummy comment
void* kont121134 = (decode_clo(env121431))[2];
//not do dummy comment
void* cons = (decode_clo(env121431))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont121134;
arg_buffer[3] = a121037121283;
arg_buffer[4] = a121039121287;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121430 = encode_clo(alloc_clo(lam121430_fptr, 0));

void* lam121432_fptr() // lam121432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121433 = arg_buffer[1];
//reading env and args
void* a121038121285 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a121037121283 = (decode_clo(env121433))[5];
//not do dummy comment
void* op = (decode_clo(env121433))[4];
//not do dummy comment
void* cons = (decode_clo(env121433))[3];
//not do dummy comment
void* filter = (decode_clo(env121433))[2];
//not do dummy comment
void* kont121134 = (decode_clo(env121433))[1];

//creating new closure instance
void** clo122105 = alloc_clo(lam121430_fptr, 3);

//setting env list
clo122105[1] = cons;
clo122105[2] = kont121134;
clo122105[3] = a121037121283;
void* f121136121286 = encode_clo(clo122105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f121136121286;
arg_buffer[3] = op;
arg_buffer[4] = a121038121285;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121432 = encode_clo(alloc_clo(lam121432_fptr, 0));

void* lam121434_fptr() // lam121434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121435 = arg_buffer[1];
//reading env and args
void* a121037121283 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121435))[6];
//not do dummy comment
void* lst = (decode_clo(env121435))[5];
//not do dummy comment
void* op = (decode_clo(env121435))[4];
//not do dummy comment
void* cons = (decode_clo(env121435))[3];
//not do dummy comment
void* filter = (decode_clo(env121435))[2];
//not do dummy comment
void* kont121134 = (decode_clo(env121435))[1];

//creating new closure instance
void** clo122107 = alloc_clo(lam121432_fptr, 5);

//setting env list
clo122107[1] = kont121134;
clo122107[2] = filter;
clo122107[3] = cons;
clo122107[4] = op;
clo122107[5] = a121037121283;
void* f121137121284 = encode_clo(clo122107);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121137121284;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121434 = encode_clo(alloc_clo(lam121434_fptr, 0));

void* lam121436_fptr() // lam121436 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121437 = arg_buffer[1];
//reading env and args
void* a121040121289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env121437))[3];
//not do dummy comment
void* filter = (decode_clo(env121437))[2];
//not do dummy comment
void* kont121134 = (decode_clo(env121437))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont121134;
arg_buffer[3] = op;
arg_buffer[4] = a121040121289;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121436 = encode_clo(alloc_clo(lam121436_fptr, 0));

void* lam121438_fptr() // lam121438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121439 = arg_buffer[1];
//reading env and args
void* a121036121281 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121439))[7];
//not do dummy comment
void* lst = (decode_clo(env121439))[6];
//not do dummy comment
void* op = (decode_clo(env121439))[5];
//not do dummy comment
void* cons = (decode_clo(env121439))[4];
//not do dummy comment
void* filter = (decode_clo(env121439))[3];
//not do dummy comment
void* kont121134 = (decode_clo(env121439))[2];
//not do dummy comment
void* car = (decode_clo(env121439))[1];

//if-clause
bool if_guard122108 = is_true(a121036121281);
if(if_guard122108)
{

//creating new closure instance
void** clo122110 = alloc_clo(lam121434_fptr, 6);

//setting env list
clo122110[1] = kont121134;
clo122110[2] = filter;
clo122110[3] = cons;
clo122110[4] = op;
clo122110[5] = lst;
clo122110[6] = cdr;
void* f121138121282 = encode_clo(clo122110);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121138121282;
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
void** clo122112 = alloc_clo(lam121436_fptr, 3);

//setting env list
clo122112[1] = kont121134;
clo122112[2] = filter;
clo122112[3] = op;
void* f121139121288 = encode_clo(clo122112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121139121288;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121438 = encode_clo(alloc_clo(lam121438_fptr, 0));

void* lam121440_fptr() // lam121440 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121441 = arg_buffer[1];
//reading env and args
void* a121035121279 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121441))[7];
//not do dummy comment
void* lst = (decode_clo(env121441))[6];
//not do dummy comment
void* op = (decode_clo(env121441))[5];
//not do dummy comment
void* cons = (decode_clo(env121441))[4];
//not do dummy comment
void* filter = (decode_clo(env121441))[3];
//not do dummy comment
void* kont121134 = (decode_clo(env121441))[2];
//not do dummy comment
void* car = (decode_clo(env121441))[1];

//creating new closure instance
void** clo122114 = alloc_clo(lam121438_fptr, 7);

//setting env list
clo122114[1] = car;
clo122114[2] = kont121134;
clo122114[3] = filter;
clo122114[4] = cons;
clo122114[5] = op;
clo122114[6] = lst;
clo122114[7] = cdr;
void* f121140121280 = encode_clo(clo122114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f121140121280;
arg_buffer[3] = a121035121279;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121440 = encode_clo(alloc_clo(lam121440_fptr, 0));

void* lam121442_fptr() // lam121442 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121443 = arg_buffer[1];
//reading env and args
void* a121033121275 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env121443))[8];
//not do dummy comment
void* op = (decode_clo(env121443))[7];
//not do dummy comment
void* cons = (decode_clo(env121443))[6];
//not do dummy comment
void* list = (decode_clo(env121443))[5];
//not do dummy comment
void* cdr = (decode_clo(env121443))[4];
//not do dummy comment
void* filter = (decode_clo(env121443))[3];
//not do dummy comment
void* kont121134 = (decode_clo(env121443))[2];
//not do dummy comment
void* car = (decode_clo(env121443))[1];

//if-clause
bool if_guard122115 = is_true(a121033121275);
if(if_guard122115)
{

//creating new closure instance
void** clo122117 = alloc_clo(lam121428_fptr, 1);

//setting env list
clo122117[1] = kont121134;
void* f121135121276 = encode_clo(clo122117);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f121135121276;
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
void** clo122119 = alloc_clo(lam121440_fptr, 7);

//setting env list
clo122119[1] = car;
clo122119[2] = kont121134;
clo122119[3] = filter;
clo122119[4] = cons;
clo122119[5] = op;
clo122119[6] = lst;
clo122119[7] = cdr;
void* f121141121278 = encode_clo(clo122119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121141121278;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121442 = encode_clo(alloc_clo(lam121442_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121444 = arg_buffer[1];
//reading env and args
void* kont121134 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo122121 = alloc_clo(lam121442_fptr, 8);

//setting env list
clo122121[1] = car;
clo122121[2] = kont121134;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo122121[3] = filter;
clo122121[4] = cdr;
clo122121[5] = list;
clo122121[6] = cons;
clo122121[7] = op;
clo122121[8] = lst;
void* f121142121274 = encode_clo(clo122121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121142121274;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam121445_fptr() // lam121445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121446 = arg_buffer[1];
//reading env and args
void* a121045121297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env121446))[3];
//not do dummy comment
void* kont121143 = (decode_clo(env121446))[2];
//not do dummy comment
void* a121043121294 = (decode_clo(env121446))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont121143;
arg_buffer[3] = a121043121294;
arg_buffer[4] = a121045121297;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121445 = encode_clo(alloc_clo(lam121445_fptr, 0));

void* lam121448_fptr() // lam121448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121449 = arg_buffer[1];
//reading env and args
void* a121043121294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env121449))[4];
//not do dummy comment
void* kont121143 = (decode_clo(env121449))[3];
//not do dummy comment
void* n = (decode_clo(env121449))[2];
//not do dummy comment
void* _u45 = (decode_clo(env121449))[1];
mpz_t* mpzvar122122 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122122, "1", 10);
void* a121044121295 = encode_mpz(mpzvar122122);

//creating new closure instance
void** clo122124 = alloc_clo(lam121445_fptr, 3);

//setting env list
clo122124[1] = a121043121294;
clo122124[2] = kont121143;
clo122124[3] = drop;
void* f121144121296 = encode_clo(clo122124);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f121144121296;
arg_buffer[3] = n;
arg_buffer[4] = a121044121295;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121448 = encode_clo(alloc_clo(lam121448_fptr, 0));

void* lam121450_fptr() // lam121450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121451 = arg_buffer[1];
//reading env and args
void* a121042121292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121451))[6];
//not do dummy comment
void* kont121143 = (decode_clo(env121451))[5];
//not do dummy comment
void* n = (decode_clo(env121451))[4];
//not do dummy comment
void* _u45 = (decode_clo(env121451))[3];
//not do dummy comment
void* lst = (decode_clo(env121451))[2];
//not do dummy comment
void* drop = (decode_clo(env121451))[1];

//if-clause
bool if_guard122125 = is_true(a121042121292);
if(if_guard122125)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121143);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121143))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo122127 = alloc_clo(lam121448_fptr, 4);

//setting env list
clo122127[1] = _u45;
clo122127[2] = n;
clo122127[3] = kont121143;
clo122127[4] = drop;
void* f121145121293 = encode_clo(clo122127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121145121293;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121450 = encode_clo(alloc_clo(lam121450_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121453 = arg_buffer[1];
//reading env and args
void* kont121143 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar122128 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122128, "0", 10);
void* a121041121290 = encode_mpz(mpzvar122128);

//creating new closure instance
void** clo122130 = alloc_clo(lam121450_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo122130[1] = drop;
clo122130[2] = lst;
clo122130[3] = _u45;
clo122130[4] = n;
clo122130[5] = kont121143;
clo122130[6] = cdr;
void* f121146121291 = encode_clo(clo122130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f121146121291;
arg_buffer[3] = n;
arg_buffer[4] = a121041121290;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam121454_fptr() // lam121454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121455 = arg_buffer[1];
//reading env and args
void* a121049121305 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a121047121301 = (decode_clo(env121455))[3];
//not do dummy comment
void* kont121147 = (decode_clo(env121455))[2];
//not do dummy comment
void* proc = (decode_clo(env121455))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont121147;
arg_buffer[3] = a121047121301;
arg_buffer[4] = a121049121305;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121454 = encode_clo(alloc_clo(lam121454_fptr, 0));

void* lam121456_fptr() // lam121456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121457 = arg_buffer[1];
//reading env and args
void* a121048121303 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121147 = (decode_clo(env121457))[5];
//not do dummy comment
void* foldr = (decode_clo(env121457))[4];
//not do dummy comment
void* a121047121301 = (decode_clo(env121457))[3];
//not do dummy comment
void* proc = (decode_clo(env121457))[2];
//not do dummy comment
void* acc = (decode_clo(env121457))[1];

//creating new closure instance
void** clo122132 = alloc_clo(lam121454_fptr, 3);

//setting env list
clo122132[1] = proc;
clo122132[2] = kont121147;
clo122132[3] = a121047121301;
void* f121148121304 = encode_clo(clo122132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f121148121304;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a121048121303;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121456 = encode_clo(alloc_clo(lam121456_fptr, 0));

void* lam121458_fptr() // lam121458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121459 = arg_buffer[1];
//reading env and args
void* a121047121301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121459))[6];
//not do dummy comment
void* kont121147 = (decode_clo(env121459))[5];
//not do dummy comment
void* foldr = (decode_clo(env121459))[4];
//not do dummy comment
void* lst = (decode_clo(env121459))[3];
//not do dummy comment
void* proc = (decode_clo(env121459))[2];
//not do dummy comment
void* acc = (decode_clo(env121459))[1];

//creating new closure instance
void** clo122134 = alloc_clo(lam121456_fptr, 5);

//setting env list
clo122134[1] = acc;
clo122134[2] = proc;
clo122134[3] = a121047121301;
clo122134[4] = foldr;
clo122134[5] = kont121147;
void* f121149121302 = encode_clo(clo122134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121149121302;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121458 = encode_clo(alloc_clo(lam121458_fptr, 0));

void* lam121460_fptr() // lam121460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121461 = arg_buffer[1];
//reading env and args
void* a121046121299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121461))[7];
//not do dummy comment
void* kont121147 = (decode_clo(env121461))[6];
//not do dummy comment
void* car = (decode_clo(env121461))[5];
//not do dummy comment
void* foldr = (decode_clo(env121461))[4];
//not do dummy comment
void* lst = (decode_clo(env121461))[3];
//not do dummy comment
void* proc = (decode_clo(env121461))[2];
//not do dummy comment
void* acc = (decode_clo(env121461))[1];

//if-clause
bool if_guard122135 = is_true(a121046121299);
if(if_guard122135)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121147);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121147))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo122137 = alloc_clo(lam121458_fptr, 6);

//setting env list
clo122137[1] = acc;
clo122137[2] = proc;
clo122137[3] = lst;
clo122137[4] = foldr;
clo122137[5] = kont121147;
clo122137[6] = cdr;
void* f121150121300 = encode_clo(clo122137);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121150121300;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121460 = encode_clo(alloc_clo(lam121460_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121462 = arg_buffer[1];
//reading env and args
void* kont121147 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo122139 = alloc_clo(lam121460_fptr, 7);

//setting env list
clo122139[1] = acc;
clo122139[2] = proc;
clo122139[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo122139[4] = foldr;
clo122139[5] = car;
clo122139[6] = kont121147;
clo122139[7] = cdr;
void* f121151121298 = encode_clo(clo122139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121151121298;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam121463_fptr() // lam121463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121464 = arg_buffer[1];
//reading env and args
void* a121053121313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a121051121309 = (decode_clo(env121464))[3];
//not do dummy comment
void* cons = (decode_clo(env121464))[2];
//not do dummy comment
void* kont121152 = (decode_clo(env121464))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont121152;
arg_buffer[3] = a121051121309;
arg_buffer[4] = a121053121313;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121463 = encode_clo(alloc_clo(lam121463_fptr, 0));

void* lam121465_fptr() // lam121465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121466 = arg_buffer[1];
//reading env and args
void* a121052121311 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env121466))[5];
//not do dummy comment
void* cons = (decode_clo(env121466))[4];
//not do dummy comment
void* kont121152 = (decode_clo(env121466))[3];
//not do dummy comment
void* a121051121309 = (decode_clo(env121466))[2];
//not do dummy comment
void* lst2 = (decode_clo(env121466))[1];

//creating new closure instance
void** clo122141 = alloc_clo(lam121463_fptr, 3);

//setting env list
clo122141[1] = kont121152;
clo122141[2] = cons;
clo122141[3] = a121051121309;
void* f121153121312 = encode_clo(clo122141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f121153121312;
arg_buffer[3] = a121052121311;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121465 = encode_clo(alloc_clo(lam121465_fptr, 0));

void* lam121467_fptr() // lam121467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121468 = arg_buffer[1];
//reading env and args
void* a121051121309 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121468))[6];
//not do dummy comment
void* append = (decode_clo(env121468))[5];
//not do dummy comment
void* lst2 = (decode_clo(env121468))[4];
//not do dummy comment
void* lst1 = (decode_clo(env121468))[3];
//not do dummy comment
void* cons = (decode_clo(env121468))[2];
//not do dummy comment
void* kont121152 = (decode_clo(env121468))[1];

//creating new closure instance
void** clo122143 = alloc_clo(lam121465_fptr, 5);

//setting env list
clo122143[1] = lst2;
clo122143[2] = a121051121309;
clo122143[3] = kont121152;
clo122143[4] = cons;
clo122143[5] = append;
void* f121154121310 = encode_clo(clo122143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f121154121310;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121467 = encode_clo(alloc_clo(lam121467_fptr, 0));

void* lam121469_fptr() // lam121469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121470 = arg_buffer[1];
//reading env and args
void* a121050121307 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env121470))[7];
//not do dummy comment
void* append = (decode_clo(env121470))[6];
//not do dummy comment
void* lst2 = (decode_clo(env121470))[5];
//not do dummy comment
void* cons = (decode_clo(env121470))[4];
//not do dummy comment
void* kont121152 = (decode_clo(env121470))[3];
//not do dummy comment
void* lst1 = (decode_clo(env121470))[2];
//not do dummy comment
void* car = (decode_clo(env121470))[1];

//if-clause
bool if_guard122144 = is_true(a121050121307);
if(if_guard122144)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121152);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121152))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo122146 = alloc_clo(lam121467_fptr, 6);

//setting env list
clo122146[1] = kont121152;
clo122146[2] = cons;
clo122146[3] = lst1;
clo122146[4] = lst2;
clo122146[5] = append;
clo122146[6] = cdr;
void* f121155121308 = encode_clo(clo122146);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f121155121308;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam121469 = encode_clo(alloc_clo(lam121469_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121471 = arg_buffer[1];
//reading env and args
void* kont121152 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo122148 = alloc_clo(lam121469_fptr, 7);

//setting env list
clo122148[1] = car;
clo122148[2] = lst1;
clo122148[3] = kont121152;
clo122148[4] = cons;
clo122148[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo122148[6] = append;
clo122148[7] = cdr;
void* f121156121306 = encode_clo(clo122148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f121156121306;
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
void* _121472 = arg_buffer[1];
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

void* kont121157121314 = prim_car(lst);
void* lst121315 = prim_cdr(lst);
void* x121054121316 = apply_prim_hash(lst121315);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121157121314);
arg_buffer[2] = x121054121316;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121157121314))[0]);
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
void* _121473 = arg_buffer[1];
//reading env and args
void* kont121159 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x121055121317 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121159);
arg_buffer[2] = x121055121317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121159))[0]);
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
void* _121474 = arg_buffer[1];
//reading env and args
void* kont121160 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x121056121318 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121160);
arg_buffer[2] = x121056121318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121160))[0]);
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
void* _121475 = arg_buffer[1];
//reading env and args
void* kont121161 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x121057121319 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121161);
arg_buffer[2] = x121057121319;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121161))[0]);
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
void* _121476 = arg_buffer[1];
//reading env and args
void* kont121162 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x121058121320 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121162);
arg_buffer[2] = x121058121320;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121162))[0]);
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
void* _121483 = arg_buffer[1];
//reading env and args
void* kont121163 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar122149 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122149, "1", 10);
void* a121059121321 = encode_mpz(mpzvar122149);
mpz_t* mpzvar122150 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122150, "2", 10);
void* a121060121322 = encode_mpz(mpzvar122150);
mpz_t* mpzvar122151 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122151, "3", 10);
void* a121061121323 = encode_mpz(mpzvar122151);
mpz_t* mpzvar122152 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122152, "4", 10);
void* a121062121324 = encode_mpz(mpzvar122152);
mpz_t* mpzvar122153 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122153, "5", 10);
void* a121063121325 = encode_mpz(mpzvar122153);
mpz_t* mpzvar122154 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar122154, "100", 10);
void* a121064121326 = encode_mpz(mpzvar122154);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60);
arg_buffer[2] = kont121163;
arg_buffer[3] = a121059121321;
arg_buffer[4] = a121060121322;
arg_buffer[5] = a121061121323;
arg_buffer[6] = a121062121324;
arg_buffer[7] = a121063121325;
arg_buffer[8] = a121064121326;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam121484_fptr() // lam121484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env121485 = arg_buffer[1];
//reading env and args
void* x121065121328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont121164 = (decode_clo(env121485))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont121164);
arg_buffer[2] = x121065121328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont121164))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam121484 = encode_clo(alloc_clo(lam121484_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _121486 = arg_buffer[1];
//reading env and args
void* kont121164 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo122156 = alloc_clo(lam121484_fptr, 1);

//setting env list
clo122156[1] = kont121164;
void* f121165121327 = encode_clo(clo122156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f121165121327;
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

