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
void* _47338 = arg_buffer[1];
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

void* kont4707547175 = prim_car(lst);
void* lst47176 = prim_cdr(lst);
void* x4698547177 = apply_prim__u43(lst47176);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4707547175);
arg_buffer[2] = x4698547177;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4707547175))[0]);
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
void* _47339 = arg_buffer[1];
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

void* kont4707747178 = prim_car(lst);
void* lst47179 = prim_cdr(lst);
void* x4698647180 = apply_prim__u45(lst47179);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4707747178);
arg_buffer[2] = x4698647180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4707747178))[0]);
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
void* _47340 = arg_buffer[1];
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

void* kont4707947181 = prim_car(lst);
void* lst47182 = prim_cdr(lst);
void* x4698747183 = apply_prim__u42(lst47182);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4707947181);
arg_buffer[2] = x4698747183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4707947181))[0]);
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
void* _47341 = arg_buffer[1];
//reading env and args
void* kont47081 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4698847184 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47081);
arg_buffer[2] = x4698847184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47081))[0]);
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
void* _47342 = arg_buffer[1];
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

void* kont4708247185 = prim_car(lst);
void* lst47186 = prim_cdr(lst);
void* x4698947187 = apply_prim__u47(lst47186);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4708247185);
arg_buffer[2] = x4698947187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4708247185))[0]);
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
void* _47343 = arg_buffer[1];
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

void* kont4708447188 = prim_car(lst);
void* lst47189 = prim_cdr(lst);
void* x4699047190 = apply_prim__u61(lst47189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4708447188);
arg_buffer[2] = x4699047190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4708447188))[0]);
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
void* _47344 = arg_buffer[1];
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

void* kont4708647191 = prim_car(lst);
void* lst47192 = prim_cdr(lst);
void* x4699147193 = apply_prim__u62(lst47192);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4708647191);
arg_buffer[2] = x4699147193;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4708647191))[0]);
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
void* _47345 = arg_buffer[1];
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

void* kont4708847194 = prim_car(lst);
void* lst47195 = prim_cdr(lst);
void* x4699247196 = apply_prim__u60(lst47195);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4708847194);
arg_buffer[2] = x4699247196;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4708847194))[0]);
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
void* _47346 = arg_buffer[1];
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

void* kont4709047197 = prim_car(lst);
void* lst47198 = prim_cdr(lst);
void* x4699347199 = apply_prim__u60_u61(lst47198);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4709047197);
arg_buffer[2] = x4699347199;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4709047197))[0]);
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
void* _47347 = arg_buffer[1];
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

void* kont4709247200 = prim_car(lst);
void* lst47201 = prim_cdr(lst);
void* x4699447202 = apply_prim__u62_u61(lst47201);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4709247200);
arg_buffer[2] = x4699447202;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4709247200))[0]);
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
void* _47348 = arg_buffer[1];
//reading env and args
void* kont47094 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4699547203 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47094);
arg_buffer[2] = x4699547203;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47094))[0]);
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
void* _47349 = arg_buffer[1];
//reading env and args
void* kont47095 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4699647204 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47095);
arg_buffer[2] = x4699647204;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47095))[0]);
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
void* _47350 = arg_buffer[1];
//reading env and args
void* kont47096 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4699747205 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47096);
arg_buffer[2] = x4699747205;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47096))[0]);
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
void* _47351 = arg_buffer[1];
//reading env and args
void* kont47097 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4699847206 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47097);
arg_buffer[2] = x4699847206;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47097))[0]);
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
void* _47352 = arg_buffer[1];
//reading env and args
void* kont47098 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4699947207 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47098);
arg_buffer[2] = x4699947207;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47098))[0]);
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
void* _47353 = arg_buffer[1];
//reading env and args
void* kont47099 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4700047208 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47099);
arg_buffer[2] = x4700047208;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47099))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam47354_fptr() // lam47354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47355 = arg_buffer[1];
//reading env and args
void* a4700347212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47100 = (decode_clo(env47355))[3];
//not do dummy comment
void* a4700147209 = (decode_clo(env47355))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env47355))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont47100;
arg_buffer[3] = a4700147209;
arg_buffer[4] = a4700347212;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47354 = encode_clo(alloc_clo(lam47354_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47358 = arg_buffer[1];
//reading env and args
void* kont47100 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48000 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48000, "0", 10);
void* a4700147209 = encode_mpz(mpzvar48000);
mpz_t* mpzvar48001 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48001, "2", 10);
void* a4700247210 = encode_mpz(mpzvar48001);

//creating new closure instance
void** clo48003 = alloc_clo(lam47354_fptr, 3);

//setting env list
clo48003[1] = equal_u63;
clo48003[2] = a4700147209;
clo48003[3] = kont47100;
void* f4710147211 = encode_clo(clo48003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4710147211;
arg_buffer[3] = x;
arg_buffer[4] = a4700247210;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam47359_fptr() // lam47359 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47360 = arg_buffer[1];
//reading env and args
void* a4700647216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env47360))[3];
//not do dummy comment
void* a4700447213 = (decode_clo(env47360))[2];
//not do dummy comment
void* kont47102 = (decode_clo(env47360))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont47102;
arg_buffer[3] = a4700447213;
arg_buffer[4] = a4700647216;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47359 = encode_clo(alloc_clo(lam47359_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47363 = arg_buffer[1];
//reading env and args
void* kont47102 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48004 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48004, "1", 10);
void* a4700447213 = encode_mpz(mpzvar48004);
mpz_t* mpzvar48005 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48005, "2", 10);
void* a4700547214 = encode_mpz(mpzvar48005);

//creating new closure instance
void** clo48007 = alloc_clo(lam47359_fptr, 3);

//setting env list
clo48007[1] = kont47102;
clo48007[2] = a4700447213;
clo48007[3] = equal_u63;
void* f4710347215 = encode_clo(clo48007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4710347215;
arg_buffer[3] = x;
arg_buffer[4] = a4700547214;
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
void* _47364 = arg_buffer[1];
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

void* kont4710447217 = prim_car(x);
void* x47218 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4710447217);
arg_buffer[2] = x47218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4710447217))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam47367_fptr() // lam47367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47368 = arg_buffer[1];
//reading env and args
void* a4701247228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47106 = (decode_clo(env47368))[3];
//not do dummy comment
void* x = (decode_clo(env47368))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47368))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont47106;
arg_buffer[3] = x;
arg_buffer[4] = a4701247228;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47367 = encode_clo(alloc_clo(lam47367_fptr, 0));

void* lam47369_fptr() // lam47369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47370 = arg_buffer[1];
//reading env and args
void* a4701047225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47370))[5];
//not do dummy comment
void* kont47106 = (decode_clo(env47370))[4];
//not do dummy comment
void* lst = (decode_clo(env47370))[3];
//not do dummy comment
void* x = (decode_clo(env47370))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47370))[1];

//if-clause
bool if_guard48008 = is_true(a4701047225);
if(if_guard48008)
{
void* x4701147226 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47106);
arg_buffer[2] = x4701147226;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47106))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48010 = alloc_clo(lam47367_fptr, 3);

//setting env list
clo48010[1] = member_u63;
clo48010[2] = x;
clo48010[3] = kont47106;
void* f4710747227 = encode_clo(clo48010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4710747227;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47369 = encode_clo(alloc_clo(lam47369_fptr, 0));

void* lam47371_fptr() // lam47371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47372 = arg_buffer[1];
//reading env and args
void* a4700947223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47372))[6];
//not do dummy comment
void* kont47106 = (decode_clo(env47372))[5];
//not do dummy comment
void* lst = (decode_clo(env47372))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env47372))[3];
//not do dummy comment
void* x = (decode_clo(env47372))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47372))[1];

//creating new closure instance
void** clo48012 = alloc_clo(lam47369_fptr, 5);

//setting env list
clo48012[1] = member_u63;
clo48012[2] = x;
clo48012[3] = lst;
clo48012[4] = kont47106;
clo48012[5] = cdr;
void* f4710847224 = encode_clo(clo48012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4710847224;
arg_buffer[3] = a4700947223;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47371 = encode_clo(alloc_clo(lam47371_fptr, 0));

void* lam47373_fptr() // lam47373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47374 = arg_buffer[1];
//reading env and args
void* a4700747220 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47374))[7];
//not do dummy comment
void* kont47106 = (decode_clo(env47374))[6];
//not do dummy comment
void* lst = (decode_clo(env47374))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env47374))[4];
//not do dummy comment
void* x = (decode_clo(env47374))[3];
//not do dummy comment
void* car = (decode_clo(env47374))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47374))[1];

//if-clause
bool if_guard48013 = is_true(a4700747220);
if(if_guard48013)
{
void* x4700847221 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47106);
arg_buffer[2] = x4700847221;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47106))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48015 = alloc_clo(lam47371_fptr, 6);

//setting env list
clo48015[1] = member_u63;
clo48015[2] = x;
clo48015[3] = equal_u63;
clo48015[4] = lst;
clo48015[5] = kont47106;
clo48015[6] = cdr;
void* f4710947222 = encode_clo(clo48015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4710947222;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47373 = encode_clo(alloc_clo(lam47373_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47375 = arg_buffer[1];
//reading env and args
void* kont47106 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48017 = alloc_clo(lam47373_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo48017[1] = member_u63;
clo48017[2] = car;
clo48017[3] = x;
clo48017[4] = equal_u63;
clo48017[5] = lst;
clo48017[6] = kont47106;
clo48017[7] = cdr;
void* f4711047219 = encode_clo(clo48017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4711047219;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam47376_fptr() // lam47376 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47377 = arg_buffer[1];
//reading env and args
void* a4701647236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4701547234 = (decode_clo(env47377))[4];
//not do dummy comment
void* kont47111 = (decode_clo(env47377))[3];
//not do dummy comment
void* fun = (decode_clo(env47377))[2];
//not do dummy comment
void* foldl = (decode_clo(env47377))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont47111;
arg_buffer[3] = fun;
arg_buffer[4] = a4701547234;
arg_buffer[5] = a4701647236;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47376 = encode_clo(alloc_clo(lam47376_fptr, 0));

void* lam47378_fptr() // lam47378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47379 = arg_buffer[1];
//reading env and args
void* a4701547234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47379))[5];
//not do dummy comment
void* lst = (decode_clo(env47379))[4];
//not do dummy comment
void* kont47111 = (decode_clo(env47379))[3];
//not do dummy comment
void* fun = (decode_clo(env47379))[2];
//not do dummy comment
void* foldl = (decode_clo(env47379))[1];

//creating new closure instance
void** clo48019 = alloc_clo(lam47376_fptr, 4);

//setting env list
clo48019[1] = foldl;
clo48019[2] = fun;
clo48019[3] = kont47111;
clo48019[4] = a4701547234;
void* f4711247235 = encode_clo(clo48019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4711247235;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47378 = encode_clo(alloc_clo(lam47378_fptr, 0));

void* lam47380_fptr() // lam47380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47381 = arg_buffer[1];
//reading env and args
void* a4701447232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47381))[6];
//not do dummy comment
void* lst = (decode_clo(env47381))[5];
//not do dummy comment
void* kont47111 = (decode_clo(env47381))[4];
//not do dummy comment
void* fun = (decode_clo(env47381))[3];
//not do dummy comment
void* acc = (decode_clo(env47381))[2];
//not do dummy comment
void* foldl = (decode_clo(env47381))[1];

//creating new closure instance
void** clo48021 = alloc_clo(lam47378_fptr, 5);

//setting env list
clo48021[1] = foldl;
clo48021[2] = fun;
clo48021[3] = kont47111;
clo48021[4] = lst;
clo48021[5] = cdr;
void* f4711347233 = encode_clo(clo48021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4711347233;
arg_buffer[3] = a4701447232;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47380 = encode_clo(alloc_clo(lam47380_fptr, 0));

void* lam47382_fptr() // lam47382 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47383 = arg_buffer[1];
//reading env and args
void* a4701347230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47383))[7];
//not do dummy comment
void* lst = (decode_clo(env47383))[6];
//not do dummy comment
void* kont47111 = (decode_clo(env47383))[5];
//not do dummy comment
void* fun = (decode_clo(env47383))[4];
//not do dummy comment
void* acc = (decode_clo(env47383))[3];
//not do dummy comment
void* car = (decode_clo(env47383))[2];
//not do dummy comment
void* foldl = (decode_clo(env47383))[1];

//if-clause
bool if_guard48022 = is_true(a4701347230);
if(if_guard48022)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47111);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47111))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48024 = alloc_clo(lam47380_fptr, 6);

//setting env list
clo48024[1] = foldl;
clo48024[2] = acc;
clo48024[3] = fun;
clo48024[4] = kont47111;
clo48024[5] = lst;
clo48024[6] = cdr;
void* f4711447231 = encode_clo(clo48024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4711447231;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47382 = encode_clo(alloc_clo(lam47382_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47384 = arg_buffer[1];
//reading env and args
void* kont47111 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo48026 = alloc_clo(lam47382_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo48026[1] = foldl;
clo48026[2] = car;
clo48026[3] = acc;
clo48026[4] = fun;
clo48026[5] = kont47111;
clo48026[6] = lst;
clo48026[7] = cdr;
void* f4711547229 = encode_clo(clo48026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4711547229;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam47385_fptr() // lam47385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47386 = arg_buffer[1];
//reading env and args
void* a4702047244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47116 = (decode_clo(env47386))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47386))[2];
//not do dummy comment
void* a4701847240 = (decode_clo(env47386))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont47116;
arg_buffer[3] = a4701847240;
arg_buffer[4] = a4702047244;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47385 = encode_clo(alloc_clo(lam47385_fptr, 0));

void* lam47387_fptr() // lam47387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47388 = arg_buffer[1];
//reading env and args
void* a4701947242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47116 = (decode_clo(env47388))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47388))[4];
//not do dummy comment
void* cons = (decode_clo(env47388))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47388))[2];
//not do dummy comment
void* a4701847240 = (decode_clo(env47388))[1];

//creating new closure instance
void** clo48028 = alloc_clo(lam47385_fptr, 3);

//setting env list
clo48028[1] = a4701847240;
clo48028[2] = reverse_u45helper;
clo48028[3] = kont47116;
void* f4711747243 = encode_clo(clo48028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4711747243;
arg_buffer[3] = a4701947242;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47387 = encode_clo(alloc_clo(lam47387_fptr, 0));

void* lam47389_fptr() // lam47389 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47390 = arg_buffer[1];
//reading env and args
void* a4701847240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47390))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47390))[5];
//not do dummy comment
void* kont47116 = (decode_clo(env47390))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47390))[3];
//not do dummy comment
void* car = (decode_clo(env47390))[2];
//not do dummy comment
void* cons = (decode_clo(env47390))[1];

//creating new closure instance
void** clo48030 = alloc_clo(lam47387_fptr, 5);

//setting env list
clo48030[1] = a4701847240;
clo48030[2] = reverse_u45helper;
clo48030[3] = cons;
clo48030[4] = lst2;
clo48030[5] = kont47116;
void* f4711847241 = encode_clo(clo48030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4711847241;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47389 = encode_clo(alloc_clo(lam47389_fptr, 0));

void* lam47391_fptr() // lam47391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47392 = arg_buffer[1];
//reading env and args
void* a4701747238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47392))[7];
//not do dummy comment
void* lst = (decode_clo(env47392))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47392))[5];
//not do dummy comment
void* kont47116 = (decode_clo(env47392))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47392))[3];
//not do dummy comment
void* car = (decode_clo(env47392))[2];
//not do dummy comment
void* cons = (decode_clo(env47392))[1];

//if-clause
bool if_guard48031 = is_true(a4701747238);
if(if_guard48031)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47116);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47116))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48033 = alloc_clo(lam47389_fptr, 6);

//setting env list
clo48033[1] = cons;
clo48033[2] = car;
clo48033[3] = lst2;
clo48033[4] = kont47116;
clo48033[5] = reverse_u45helper;
clo48033[6] = lst;
void* f4711947239 = encode_clo(clo48033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4711947239;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47391 = encode_clo(alloc_clo(lam47391_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47393 = arg_buffer[1];
//reading env and args
void* kont47116 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48035 = alloc_clo(lam47391_fptr, 7);

//setting env list
clo48035[1] = cons;
clo48035[2] = car;
clo48035[3] = lst2;
clo48035[4] = kont47116;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo48035[5] = reverse_u45helper;
clo48035[6] = lst;
clo48035[7] = cdr;
void* f4712047237 = encode_clo(clo48035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4712047237;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam47394_fptr() // lam47394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47395 = arg_buffer[1];
//reading env and args
void* a4702147246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47121 = (decode_clo(env47395))[3];
//not do dummy comment
void* lst = (decode_clo(env47395))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47395))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont47121;
arg_buffer[3] = lst;
arg_buffer[4] = a4702147246;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47394 = encode_clo(alloc_clo(lam47394_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47396 = arg_buffer[1];
//reading env and args
void* kont47121 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo48037 = alloc_clo(lam47394_fptr, 3);

//setting env list
clo48037[1] = reverse_u45helper;
clo48037[2] = lst;
clo48037[3] = kont47121;
void* f4712247245 = encode_clo(clo48037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4712247245;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam47397_fptr() // lam47397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47398 = arg_buffer[1];
//reading env and args
void* x4702447251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47123 = (decode_clo(env47398))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47123);
arg_buffer[2] = x4702447251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47123))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47397 = encode_clo(alloc_clo(lam47397_fptr, 0));

void* lam47399_fptr() // lam47399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47400 = arg_buffer[1];
//reading env and args
void* a4702947260 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47123 = (decode_clo(env47400))[4];
//not do dummy comment
void* a4702547253 = (decode_clo(env47400))[3];
//not do dummy comment
void* a4702747256 = (decode_clo(env47400))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env47400))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont47123;
arg_buffer[3] = a4702547253;
arg_buffer[4] = a4702747256;
arg_buffer[5] = a4702947260;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47399 = encode_clo(alloc_clo(lam47399_fptr, 0));

void* lam47401_fptr() // lam47401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47402 = arg_buffer[1];
//reading env and args
void* a4702847258 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47123 = (decode_clo(env47402))[6];
//not do dummy comment
void* a4702547253 = (decode_clo(env47402))[5];
//not do dummy comment
void* a4702747256 = (decode_clo(env47402))[4];
//not do dummy comment
void* cons = (decode_clo(env47402))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47402))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47402))[1];

//creating new closure instance
void** clo48039 = alloc_clo(lam47399_fptr, 4);

//setting env list
clo48039[1] = take_u45helper;
clo48039[2] = a4702747256;
clo48039[3] = a4702547253;
clo48039[4] = kont47123;
void* f4712547259 = encode_clo(clo48039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4712547259;
arg_buffer[3] = a4702847258;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47401 = encode_clo(alloc_clo(lam47401_fptr, 0));

void* lam47403_fptr() // lam47403 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47404 = arg_buffer[1];
//reading env and args
void* a4702747256 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47123 = (decode_clo(env47404))[7];
//not do dummy comment
void* car = (decode_clo(env47404))[6];
//not do dummy comment
void* cons = (decode_clo(env47404))[5];
//not do dummy comment
void* lst = (decode_clo(env47404))[4];
//not do dummy comment
void* a4702547253 = (decode_clo(env47404))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47404))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47404))[1];

//creating new closure instance
void** clo48041 = alloc_clo(lam47401_fptr, 6);

//setting env list
clo48041[1] = lst2;
clo48041[2] = take_u45helper;
clo48041[3] = cons;
clo48041[4] = a4702747256;
clo48041[5] = a4702547253;
clo48041[6] = kont47123;
void* f4712647257 = encode_clo(clo48041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4712647257;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47403 = encode_clo(alloc_clo(lam47403_fptr, 0));

void* lam47406_fptr() // lam47406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47407 = arg_buffer[1];
//reading env and args
void* a4702547253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47123 = (decode_clo(env47407))[8];
//not do dummy comment
void* lst = (decode_clo(env47407))[7];
//not do dummy comment
void* cons = (decode_clo(env47407))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47407))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47407))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47407))[3];
//not do dummy comment
void* n = (decode_clo(env47407))[2];
//not do dummy comment
void* car = (decode_clo(env47407))[1];
mpz_t* mpzvar48042 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48042, "1", 10);
void* a4702647254 = encode_mpz(mpzvar48042);

//creating new closure instance
void** clo48044 = alloc_clo(lam47403_fptr, 7);

//setting env list
clo48044[1] = lst2;
clo48044[2] = take_u45helper;
clo48044[3] = a4702547253;
clo48044[4] = lst;
clo48044[5] = cons;
clo48044[6] = car;
clo48044[7] = kont47123;
void* f4712747255 = encode_clo(clo48044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4712747255;
arg_buffer[3] = n;
arg_buffer[4] = a4702647254;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47406 = encode_clo(alloc_clo(lam47406_fptr, 0));

void* lam47408_fptr() // lam47408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47409 = arg_buffer[1];
//reading env and args
void* a4702347249 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47409))[10];
//not do dummy comment
void* kont47123 = (decode_clo(env47409))[9];
//not do dummy comment
void* lst = (decode_clo(env47409))[8];
//not do dummy comment
void* reverse = (decode_clo(env47409))[7];
//not do dummy comment
void* cons = (decode_clo(env47409))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47409))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47409))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47409))[3];
//not do dummy comment
void* n = (decode_clo(env47409))[2];
//not do dummy comment
void* car = (decode_clo(env47409))[1];

//if-clause
bool if_guard48045 = is_true(a4702347249);
if(if_guard48045)
{

//creating new closure instance
void** clo48047 = alloc_clo(lam47397_fptr, 1);

//setting env list
clo48047[1] = kont47123;
void* f4712447250 = encode_clo(clo48047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4712447250;
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
void** clo48049 = alloc_clo(lam47406_fptr, 8);

//setting env list
clo48049[1] = car;
clo48049[2] = n;
clo48049[3] = lst2;
clo48049[4] = take_u45helper;
clo48049[5] = _u45;
clo48049[6] = cons;
clo48049[7] = lst;
clo48049[8] = kont47123;
void* f4712847252 = encode_clo(clo48049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4712847252;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47408 = encode_clo(alloc_clo(lam47408_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47411 = arg_buffer[1];
//reading env and args
void* kont47123 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar48050 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48050, "0", 10);
void* a4702247247 = encode_mpz(mpzvar48050);

//creating new closure instance
void** clo48052 = alloc_clo(lam47408_fptr, 10);

//setting env list
clo48052[1] = car;
clo48052[2] = n;
clo48052[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo48052[4] = take_u45helper;
clo48052[5] = _u45;
clo48052[6] = cons;
clo48052[7] = reverse;
clo48052[8] = lst;
clo48052[9] = kont47123;
clo48052[10] = cdr;
void* f4712947248 = encode_clo(clo48052);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4712947248;
arg_buffer[3] = n;
arg_buffer[4] = a4702247247;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam47412_fptr() // lam47412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47413 = arg_buffer[1];
//reading env and args
void* a4703047262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47413))[4];
//not do dummy comment
void* kont47130 = (decode_clo(env47413))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47413))[2];
//not do dummy comment
void* n = (decode_clo(env47413))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont47130;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4703047262;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47412 = encode_clo(alloc_clo(lam47412_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47414 = arg_buffer[1];
//reading env and args
void* kont47130 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48054 = alloc_clo(lam47412_fptr, 4);

//setting env list
clo48054[1] = n;
clo48054[2] = take_u45helper;
clo48054[3] = kont47130;
clo48054[4] = lst;
void* f4713147261 = encode_clo(clo48054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4713147261;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam47416_fptr() // lam47416 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47417 = arg_buffer[1];
//reading env and args
void* a4703547270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4703347266 = (decode_clo(env47417))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47417))[2];
//not do dummy comment
void* kont47132 = (decode_clo(env47417))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont47132;
arg_buffer[3] = a4703347266;
arg_buffer[4] = a4703547270;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47416 = encode_clo(alloc_clo(lam47416_fptr, 0));

void* lam47418_fptr() // lam47418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47419 = arg_buffer[1];
//reading env and args
void* a4703447268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4703347266 = (decode_clo(env47419))[4];
//not do dummy comment
void* length = (decode_clo(env47419))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47419))[2];
//not do dummy comment
void* kont47132 = (decode_clo(env47419))[1];

//creating new closure instance
void** clo48056 = alloc_clo(lam47416_fptr, 3);

//setting env list
clo48056[1] = kont47132;
clo48056[2] = _u43;
clo48056[3] = a4703347266;
void* f4713347269 = encode_clo(clo48056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4713347269;
arg_buffer[3] = a4703447268;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47418 = encode_clo(alloc_clo(lam47418_fptr, 0));

void* lam47421_fptr() // lam47421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47422 = arg_buffer[1];
//reading env and args
void* a4703147264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47422))[5];
//not do dummy comment
void* lst = (decode_clo(env47422))[4];
//not do dummy comment
void* length = (decode_clo(env47422))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47422))[2];
//not do dummy comment
void* kont47132 = (decode_clo(env47422))[1];

//if-clause
bool if_guard48057 = is_true(a4703147264);
if(if_guard48057)
{
mpz_t* mpzvar48058 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48058, "0", 10);
void* x4703247265 = encode_mpz(mpzvar48058);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47132);
arg_buffer[2] = x4703247265;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47132))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar48059 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48059, "1", 10);
void* a4703347266 = encode_mpz(mpzvar48059);

//creating new closure instance
void** clo48061 = alloc_clo(lam47418_fptr, 4);

//setting env list
clo48061[1] = kont47132;
clo48061[2] = _u43;
clo48061[3] = length;
clo48061[4] = a4703347266;
void* f4713447267 = encode_clo(clo48061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4713447267;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47421 = encode_clo(alloc_clo(lam47421_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47423 = arg_buffer[1];
//reading env and args
void* kont47132 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo48063 = alloc_clo(lam47421_fptr, 5);

//setting env list
clo48063[1] = kont47132;
clo48063[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo48063[3] = length;
clo48063[4] = lst;
clo48063[5] = cdr;
void* f4713547263 = encode_clo(clo48063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4713547263;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam47424_fptr() // lam47424 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47425 = arg_buffer[1];
//reading env and args
void* x4703747274 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47136 = (decode_clo(env47425))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47136);
arg_buffer[2] = x4703747274;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47136))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47424 = encode_clo(alloc_clo(lam47424_fptr, 0));

void* lam47426_fptr() // lam47426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47427 = arg_buffer[1];
//reading env and args
void* a4704147282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4703947278 = (decode_clo(env47427))[3];
//not do dummy comment
void* cons = (decode_clo(env47427))[2];
//not do dummy comment
void* kont47136 = (decode_clo(env47427))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47136;
arg_buffer[3] = a4703947278;
arg_buffer[4] = a4704147282;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47426 = encode_clo(alloc_clo(lam47426_fptr, 0));

void* lam47428_fptr() // lam47428 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47429 = arg_buffer[1];
//reading env and args
void* a4704047280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env47429))[5];
//not do dummy comment
void* proc = (decode_clo(env47429))[4];
//not do dummy comment
void* a4703947278 = (decode_clo(env47429))[3];
//not do dummy comment
void* cons = (decode_clo(env47429))[2];
//not do dummy comment
void* kont47136 = (decode_clo(env47429))[1];

//creating new closure instance
void** clo48065 = alloc_clo(lam47426_fptr, 3);

//setting env list
clo48065[1] = kont47136;
clo48065[2] = cons;
clo48065[3] = a4703947278;
void* f4713847281 = encode_clo(clo48065);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4713847281;
arg_buffer[3] = proc;
arg_buffer[4] = a4704047280;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47428 = encode_clo(alloc_clo(lam47428_fptr, 0));

void* lam47430_fptr() // lam47430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47431 = arg_buffer[1];
//reading env and args
void* a4703947278 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47431))[6];
//not do dummy comment
void* lst = (decode_clo(env47431))[5];
//not do dummy comment
void* map = (decode_clo(env47431))[4];
//not do dummy comment
void* proc = (decode_clo(env47431))[3];
//not do dummy comment
void* cons = (decode_clo(env47431))[2];
//not do dummy comment
void* kont47136 = (decode_clo(env47431))[1];

//creating new closure instance
void** clo48067 = alloc_clo(lam47428_fptr, 5);

//setting env list
clo48067[1] = kont47136;
clo48067[2] = cons;
clo48067[3] = a4703947278;
clo48067[4] = proc;
clo48067[5] = map;
void* f4713947279 = encode_clo(clo48067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4713947279;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47430 = encode_clo(alloc_clo(lam47430_fptr, 0));

void* lam47432_fptr() // lam47432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47433 = arg_buffer[1];
//reading env and args
void* a4703847276 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47433))[6];
//not do dummy comment
void* lst = (decode_clo(env47433))[5];
//not do dummy comment
void* map = (decode_clo(env47433))[4];
//not do dummy comment
void* proc = (decode_clo(env47433))[3];
//not do dummy comment
void* cons = (decode_clo(env47433))[2];
//not do dummy comment
void* kont47136 = (decode_clo(env47433))[1];

//creating new closure instance
void** clo48069 = alloc_clo(lam47430_fptr, 6);

//setting env list
clo48069[1] = kont47136;
clo48069[2] = cons;
clo48069[3] = proc;
clo48069[4] = map;
clo48069[5] = lst;
clo48069[6] = cdr;
void* f4714047277 = encode_clo(clo48069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4714047277;
arg_buffer[3] = a4703847276;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47432 = encode_clo(alloc_clo(lam47432_fptr, 0));

void* lam47434_fptr() // lam47434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47435 = arg_buffer[1];
//reading env and args
void* a4703647272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47435))[8];
//not do dummy comment
void* map = (decode_clo(env47435))[7];
//not do dummy comment
void* proc = (decode_clo(env47435))[6];
//not do dummy comment
void* car = (decode_clo(env47435))[5];
//not do dummy comment
void* cons = (decode_clo(env47435))[4];
//not do dummy comment
void* kont47136 = (decode_clo(env47435))[3];
//not do dummy comment
void* list = (decode_clo(env47435))[2];
//not do dummy comment
void* cdr = (decode_clo(env47435))[1];

//if-clause
bool if_guard48070 = is_true(a4703647272);
if(if_guard48070)
{

//creating new closure instance
void** clo48072 = alloc_clo(lam47424_fptr, 1);

//setting env list
clo48072[1] = kont47136;
void* f4713747273 = encode_clo(clo48072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4713747273;
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
void** clo48074 = alloc_clo(lam47432_fptr, 6);

//setting env list
clo48074[1] = kont47136;
clo48074[2] = cons;
clo48074[3] = proc;
clo48074[4] = map;
clo48074[5] = lst;
clo48074[6] = cdr;
void* f4714147275 = encode_clo(clo48074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4714147275;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47434 = encode_clo(alloc_clo(lam47434_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47436 = arg_buffer[1];
//reading env and args
void* kont47136 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48076 = alloc_clo(lam47434_fptr, 8);

//setting env list
clo48076[1] = cdr;
clo48076[2] = list;
clo48076[3] = kont47136;
clo48076[4] = cons;
clo48076[5] = car;
clo48076[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo48076[7] = map;
clo48076[8] = lst;
void* f4714247271 = encode_clo(clo48076);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4714247271;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam47437_fptr() // lam47437 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47438 = arg_buffer[1];
//reading env and args
void* x4704347286 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47143 = (decode_clo(env47438))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47143);
arg_buffer[2] = x4704347286;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47143))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47437 = encode_clo(alloc_clo(lam47437_fptr, 0));

void* lam47439_fptr() // lam47439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47440 = arg_buffer[1];
//reading env and args
void* a4704847296 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47143 = (decode_clo(env47440))[3];
//not do dummy comment
void* a4704647292 = (decode_clo(env47440))[2];
//not do dummy comment
void* cons = (decode_clo(env47440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47143;
arg_buffer[3] = a4704647292;
arg_buffer[4] = a4704847296;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47439 = encode_clo(alloc_clo(lam47439_fptr, 0));

void* lam47441_fptr() // lam47441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47442 = arg_buffer[1];
//reading env and args
void* a4704747294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47143 = (decode_clo(env47442))[5];
//not do dummy comment
void* op = (decode_clo(env47442))[4];
//not do dummy comment
void* a4704647292 = (decode_clo(env47442))[3];
//not do dummy comment
void* filter = (decode_clo(env47442))[2];
//not do dummy comment
void* cons = (decode_clo(env47442))[1];

//creating new closure instance
void** clo48078 = alloc_clo(lam47439_fptr, 3);

//setting env list
clo48078[1] = cons;
clo48078[2] = a4704647292;
clo48078[3] = kont47143;
void* f4714547295 = encode_clo(clo48078);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4714547295;
arg_buffer[3] = op;
arg_buffer[4] = a4704747294;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47441 = encode_clo(alloc_clo(lam47441_fptr, 0));

void* lam47443_fptr() // lam47443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47444 = arg_buffer[1];
//reading env and args
void* a4704647292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47444))[6];
//not do dummy comment
void* lst = (decode_clo(env47444))[5];
//not do dummy comment
void* kont47143 = (decode_clo(env47444))[4];
//not do dummy comment
void* op = (decode_clo(env47444))[3];
//not do dummy comment
void* filter = (decode_clo(env47444))[2];
//not do dummy comment
void* cons = (decode_clo(env47444))[1];

//creating new closure instance
void** clo48080 = alloc_clo(lam47441_fptr, 5);

//setting env list
clo48080[1] = cons;
clo48080[2] = filter;
clo48080[3] = a4704647292;
clo48080[4] = op;
clo48080[5] = kont47143;
void* f4714647293 = encode_clo(clo48080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4714647293;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47443 = encode_clo(alloc_clo(lam47443_fptr, 0));

void* lam47445_fptr() // lam47445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47446 = arg_buffer[1];
//reading env and args
void* a4704947298 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47143 = (decode_clo(env47446))[3];
//not do dummy comment
void* op = (decode_clo(env47446))[2];
//not do dummy comment
void* filter = (decode_clo(env47446))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont47143;
arg_buffer[3] = op;
arg_buffer[4] = a4704947298;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47445 = encode_clo(alloc_clo(lam47445_fptr, 0));

void* lam47447_fptr() // lam47447 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47448 = arg_buffer[1];
//reading env and args
void* a4704547290 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47448))[7];
//not do dummy comment
void* lst = (decode_clo(env47448))[6];
//not do dummy comment
void* kont47143 = (decode_clo(env47448))[5];
//not do dummy comment
void* op = (decode_clo(env47448))[4];
//not do dummy comment
void* cons = (decode_clo(env47448))[3];
//not do dummy comment
void* filter = (decode_clo(env47448))[2];
//not do dummy comment
void* car = (decode_clo(env47448))[1];

//if-clause
bool if_guard48081 = is_true(a4704547290);
if(if_guard48081)
{

//creating new closure instance
void** clo48083 = alloc_clo(lam47443_fptr, 6);

//setting env list
clo48083[1] = cons;
clo48083[2] = filter;
clo48083[3] = op;
clo48083[4] = kont47143;
clo48083[5] = lst;
clo48083[6] = cdr;
void* f4714747291 = encode_clo(clo48083);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4714747291;
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
void** clo48085 = alloc_clo(lam47445_fptr, 3);

//setting env list
clo48085[1] = filter;
clo48085[2] = op;
clo48085[3] = kont47143;
void* f4714847297 = encode_clo(clo48085);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4714847297;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47447 = encode_clo(alloc_clo(lam47447_fptr, 0));

void* lam47449_fptr() // lam47449 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47450 = arg_buffer[1];
//reading env and args
void* a4704447288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47450))[7];
//not do dummy comment
void* lst = (decode_clo(env47450))[6];
//not do dummy comment
void* kont47143 = (decode_clo(env47450))[5];
//not do dummy comment
void* op = (decode_clo(env47450))[4];
//not do dummy comment
void* cons = (decode_clo(env47450))[3];
//not do dummy comment
void* filter = (decode_clo(env47450))[2];
//not do dummy comment
void* car = (decode_clo(env47450))[1];

//creating new closure instance
void** clo48087 = alloc_clo(lam47447_fptr, 7);

//setting env list
clo48087[1] = car;
clo48087[2] = filter;
clo48087[3] = cons;
clo48087[4] = op;
clo48087[5] = kont47143;
clo48087[6] = lst;
clo48087[7] = cdr;
void* f4714947289 = encode_clo(clo48087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4714947289;
arg_buffer[3] = a4704447288;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47449 = encode_clo(alloc_clo(lam47449_fptr, 0));

void* lam47451_fptr() // lam47451 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47452 = arg_buffer[1];
//reading env and args
void* a4704247284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47452))[8];
//not do dummy comment
void* kont47143 = (decode_clo(env47452))[7];
//not do dummy comment
void* op = (decode_clo(env47452))[6];
//not do dummy comment
void* cons = (decode_clo(env47452))[5];
//not do dummy comment
void* list = (decode_clo(env47452))[4];
//not do dummy comment
void* cdr = (decode_clo(env47452))[3];
//not do dummy comment
void* filter = (decode_clo(env47452))[2];
//not do dummy comment
void* car = (decode_clo(env47452))[1];

//if-clause
bool if_guard48088 = is_true(a4704247284);
if(if_guard48088)
{

//creating new closure instance
void** clo48090 = alloc_clo(lam47437_fptr, 1);

//setting env list
clo48090[1] = kont47143;
void* f4714447285 = encode_clo(clo48090);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4714447285;
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
void** clo48092 = alloc_clo(lam47449_fptr, 7);

//setting env list
clo48092[1] = car;
clo48092[2] = filter;
clo48092[3] = cons;
clo48092[4] = op;
clo48092[5] = kont47143;
clo48092[6] = lst;
clo48092[7] = cdr;
void* f4715047287 = encode_clo(clo48092);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4715047287;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47451 = encode_clo(alloc_clo(lam47451_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47453 = arg_buffer[1];
//reading env and args
void* kont47143 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48094 = alloc_clo(lam47451_fptr, 8);

//setting env list
clo48094[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo48094[2] = filter;
clo48094[3] = cdr;
clo48094[4] = list;
clo48094[5] = cons;
clo48094[6] = op;
clo48094[7] = kont47143;
clo48094[8] = lst;
void* f4715147283 = encode_clo(clo48094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4715147283;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam47454_fptr() // lam47454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47455 = arg_buffer[1];
//reading env and args
void* a4705447306 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env47455))[3];
//not do dummy comment
void* a4705247303 = (decode_clo(env47455))[2];
//not do dummy comment
void* kont47152 = (decode_clo(env47455))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont47152;
arg_buffer[3] = a4705247303;
arg_buffer[4] = a4705447306;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47454 = encode_clo(alloc_clo(lam47454_fptr, 0));

void* lam47457_fptr() // lam47457 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47458 = arg_buffer[1];
//reading env and args
void* a4705247303 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env47458))[4];
//not do dummy comment
void* n = (decode_clo(env47458))[3];
//not do dummy comment
void* kont47152 = (decode_clo(env47458))[2];
//not do dummy comment
void* _u45 = (decode_clo(env47458))[1];
mpz_t* mpzvar48095 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48095, "1", 10);
void* a4705347304 = encode_mpz(mpzvar48095);

//creating new closure instance
void** clo48097 = alloc_clo(lam47454_fptr, 3);

//setting env list
clo48097[1] = kont47152;
clo48097[2] = a4705247303;
clo48097[3] = drop;
void* f4715347305 = encode_clo(clo48097);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4715347305;
arg_buffer[3] = n;
arg_buffer[4] = a4705347304;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47457 = encode_clo(alloc_clo(lam47457_fptr, 0));

void* lam47459_fptr() // lam47459 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47460 = arg_buffer[1];
//reading env and args
void* a4705147301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47460))[6];
//not do dummy comment
void* n = (decode_clo(env47460))[5];
//not do dummy comment
void* lst = (decode_clo(env47460))[4];
//not do dummy comment
void* drop = (decode_clo(env47460))[3];
//not do dummy comment
void* kont47152 = (decode_clo(env47460))[2];
//not do dummy comment
void* _u45 = (decode_clo(env47460))[1];

//if-clause
bool if_guard48098 = is_true(a4705147301);
if(if_guard48098)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47152);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47152))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48100 = alloc_clo(lam47457_fptr, 4);

//setting env list
clo48100[1] = _u45;
clo48100[2] = kont47152;
clo48100[3] = n;
clo48100[4] = drop;
void* f4715447302 = encode_clo(clo48100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4715447302;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47459 = encode_clo(alloc_clo(lam47459_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47462 = arg_buffer[1];
//reading env and args
void* kont47152 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar48101 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48101, "0", 10);
void* a4705047299 = encode_mpz(mpzvar48101);

//creating new closure instance
void** clo48103 = alloc_clo(lam47459_fptr, 6);

//setting env list
clo48103[1] = _u45;
clo48103[2] = kont47152;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo48103[3] = drop;
clo48103[4] = lst;
clo48103[5] = n;
clo48103[6] = cdr;
void* f4715547300 = encode_clo(clo48103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4715547300;
arg_buffer[3] = n;
arg_buffer[4] = a4705047299;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam47463_fptr() // lam47463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47464 = arg_buffer[1];
//reading env and args
void* a4705847314 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47156 = (decode_clo(env47464))[3];
//not do dummy comment
void* proc = (decode_clo(env47464))[2];
//not do dummy comment
void* a4705647310 = (decode_clo(env47464))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont47156;
arg_buffer[3] = a4705647310;
arg_buffer[4] = a4705847314;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47463 = encode_clo(alloc_clo(lam47463_fptr, 0));

void* lam47465_fptr() // lam47465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47466 = arg_buffer[1];
//reading env and args
void* a4705747312 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47156 = (decode_clo(env47466))[5];
//not do dummy comment
void* foldr = (decode_clo(env47466))[4];
//not do dummy comment
void* a4705647310 = (decode_clo(env47466))[3];
//not do dummy comment
void* proc = (decode_clo(env47466))[2];
//not do dummy comment
void* acc = (decode_clo(env47466))[1];

//creating new closure instance
void** clo48105 = alloc_clo(lam47463_fptr, 3);

//setting env list
clo48105[1] = a4705647310;
clo48105[2] = proc;
clo48105[3] = kont47156;
void* f4715747313 = encode_clo(clo48105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4715747313;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4705747312;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47465 = encode_clo(alloc_clo(lam47465_fptr, 0));

void* lam47467_fptr() // lam47467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47468 = arg_buffer[1];
//reading env and args
void* a4705647310 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47468))[6];
//not do dummy comment
void* kont47156 = (decode_clo(env47468))[5];
//not do dummy comment
void* foldr = (decode_clo(env47468))[4];
//not do dummy comment
void* lst = (decode_clo(env47468))[3];
//not do dummy comment
void* proc = (decode_clo(env47468))[2];
//not do dummy comment
void* acc = (decode_clo(env47468))[1];

//creating new closure instance
void** clo48107 = alloc_clo(lam47465_fptr, 5);

//setting env list
clo48107[1] = acc;
clo48107[2] = proc;
clo48107[3] = a4705647310;
clo48107[4] = foldr;
clo48107[5] = kont47156;
void* f4715847311 = encode_clo(clo48107);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4715847311;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47467 = encode_clo(alloc_clo(lam47467_fptr, 0));

void* lam47469_fptr() // lam47469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47470 = arg_buffer[1];
//reading env and args
void* a4705547308 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47470))[7];
//not do dummy comment
void* kont47156 = (decode_clo(env47470))[6];
//not do dummy comment
void* car = (decode_clo(env47470))[5];
//not do dummy comment
void* foldr = (decode_clo(env47470))[4];
//not do dummy comment
void* lst = (decode_clo(env47470))[3];
//not do dummy comment
void* proc = (decode_clo(env47470))[2];
//not do dummy comment
void* acc = (decode_clo(env47470))[1];

//if-clause
bool if_guard48108 = is_true(a4705547308);
if(if_guard48108)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47156);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47156))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48110 = alloc_clo(lam47467_fptr, 6);

//setting env list
clo48110[1] = acc;
clo48110[2] = proc;
clo48110[3] = lst;
clo48110[4] = foldr;
clo48110[5] = kont47156;
clo48110[6] = cdr;
void* f4715947309 = encode_clo(clo48110);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4715947309;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47469 = encode_clo(alloc_clo(lam47469_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47471 = arg_buffer[1];
//reading env and args
void* kont47156 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo48112 = alloc_clo(lam47469_fptr, 7);

//setting env list
clo48112[1] = acc;
clo48112[2] = proc;
clo48112[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo48112[4] = foldr;
clo48112[5] = car;
clo48112[6] = kont47156;
clo48112[7] = cdr;
void* f4716047307 = encode_clo(clo48112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4716047307;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam47472_fptr() // lam47472 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47473 = arg_buffer[1];
//reading env and args
void* a4706247322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4706047318 = (decode_clo(env47473))[3];
//not do dummy comment
void* kont47161 = (decode_clo(env47473))[2];
//not do dummy comment
void* cons = (decode_clo(env47473))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont47161;
arg_buffer[3] = a4706047318;
arg_buffer[4] = a4706247322;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47472 = encode_clo(alloc_clo(lam47472_fptr, 0));

void* lam47474_fptr() // lam47474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47475 = arg_buffer[1];
//reading env and args
void* a4706147320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4706047318 = (decode_clo(env47475))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47475))[4];
//not do dummy comment
void* cons = (decode_clo(env47475))[3];
//not do dummy comment
void* append = (decode_clo(env47475))[2];
//not do dummy comment
void* kont47161 = (decode_clo(env47475))[1];

//creating new closure instance
void** clo48114 = alloc_clo(lam47472_fptr, 3);

//setting env list
clo48114[1] = cons;
clo48114[2] = kont47161;
clo48114[3] = a4706047318;
void* f4716247321 = encode_clo(clo48114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4716247321;
arg_buffer[3] = a4706147320;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47474 = encode_clo(alloc_clo(lam47474_fptr, 0));

void* lam47476_fptr() // lam47476 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47477 = arg_buffer[1];
//reading env and args
void* a4706047318 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47477))[6];
//not do dummy comment
void* lst2 = (decode_clo(env47477))[5];
//not do dummy comment
void* lst1 = (decode_clo(env47477))[4];
//not do dummy comment
void* cons = (decode_clo(env47477))[3];
//not do dummy comment
void* append = (decode_clo(env47477))[2];
//not do dummy comment
void* kont47161 = (decode_clo(env47477))[1];

//creating new closure instance
void** clo48116 = alloc_clo(lam47474_fptr, 5);

//setting env list
clo48116[1] = kont47161;
clo48116[2] = append;
clo48116[3] = cons;
clo48116[4] = lst2;
clo48116[5] = a4706047318;
void* f4716347319 = encode_clo(clo48116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4716347319;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47476 = encode_clo(alloc_clo(lam47476_fptr, 0));

void* lam47478_fptr() // lam47478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47479 = arg_buffer[1];
//reading env and args
void* a4705947316 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47479))[7];
//not do dummy comment
void* lst2 = (decode_clo(env47479))[6];
//not do dummy comment
void* cons = (decode_clo(env47479))[5];
//not do dummy comment
void* append = (decode_clo(env47479))[4];
//not do dummy comment
void* kont47161 = (decode_clo(env47479))[3];
//not do dummy comment
void* lst1 = (decode_clo(env47479))[2];
//not do dummy comment
void* car = (decode_clo(env47479))[1];

//if-clause
bool if_guard48117 = is_true(a4705947316);
if(if_guard48117)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47161);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47161))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48119 = alloc_clo(lam47476_fptr, 6);

//setting env list
clo48119[1] = kont47161;
clo48119[2] = append;
clo48119[3] = cons;
clo48119[4] = lst1;
clo48119[5] = lst2;
clo48119[6] = cdr;
void* f4716447317 = encode_clo(clo48119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4716447317;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47478 = encode_clo(alloc_clo(lam47478_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47480 = arg_buffer[1];
//reading env and args
void* kont47161 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48121 = alloc_clo(lam47478_fptr, 7);

//setting env list
clo48121[1] = car;
clo48121[2] = lst1;
clo48121[3] = kont47161;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo48121[4] = append;
clo48121[5] = cons;
clo48121[6] = lst2;
clo48121[7] = cdr;
void* f4716547315 = encode_clo(clo48121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4716547315;
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
void* _47481 = arg_buffer[1];
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

void* kont4716647323 = prim_car(lst);
void* lst47324 = prim_cdr(lst);
void* x4706347325 = apply_prim_hash(lst47324);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4716647323);
arg_buffer[2] = x4706347325;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4716647323))[0]);
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
void* _47482 = arg_buffer[1];
//reading env and args
void* kont47168 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4706447326 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47168);
arg_buffer[2] = x4706447326;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47168))[0]);
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
void* _47483 = arg_buffer[1];
//reading env and args
void* kont47169 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4706547327 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47169);
arg_buffer[2] = x4706547327;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47169))[0]);
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
void* _47484 = arg_buffer[1];
//reading env and args
void* kont47170 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4706647328 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47170);
arg_buffer[2] = x4706647328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47170))[0]);
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
void* _47485 = arg_buffer[1];
//reading env and args
void* kont47171 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4706747329 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47171);
arg_buffer[2] = x4706747329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47171))[0]);
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
void* _47492 = arg_buffer[1];
//reading env and args
void* kont47172 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar48122 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar48122, "10.3", 10);
void* a4706847330 = encode_mpf(mpfvar48122);
mpf_t* mpfvar48123 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar48123, "2.4", 10);
void* a4706947331 = encode_mpf(mpfvar48123);
mpz_t* mpzvar48124 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48124, "3", 10);
void* a4707047332 = encode_mpz(mpzvar48124);
mpf_t* mpfvar48125 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar48125, "4.5", 10);
void* a4707147333 = encode_mpf(mpfvar48125);
mpz_t* mpzvar48126 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48126, "5", 10);
void* a4707247334 = encode_mpz(mpzvar48126);
mpf_t* mpfvar48127 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar48127, "6.7", 10);
void* a4707347335 = encode_mpf(mpfvar48127);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont47172;
arg_buffer[3] = a4706847330;
arg_buffer[4] = a4706947331;
arg_buffer[5] = a4707047332;
arg_buffer[6] = a4707147333;
arg_buffer[7] = a4707247334;
arg_buffer[8] = a4707347335;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam47493_fptr() // lam47493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47494 = arg_buffer[1];
//reading env and args
void* x4707447337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont47173 = (decode_clo(env47494))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont47173);
arg_buffer[2] = x4707447337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont47173))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47493 = encode_clo(alloc_clo(lam47493_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47495 = arg_buffer[1];
//reading env and args
void* kont47173 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo48129 = alloc_clo(lam47493_fptr, 1);

//setting env list
clo48129[1] = kont47173;
void* f4717447336 = encode_clo(clo48129);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4717447336;
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

