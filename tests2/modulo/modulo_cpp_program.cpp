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
void* _48496 = arg_buffer[1];
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

void* kont4823748337 = prim_car(lst);
void* lst48338 = prim_cdr(lst);
void* x4815148339 = apply_prim__u43(lst48338);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4823748337);
arg_buffer[2] = x4815148339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4823748337))[0]);
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
void* _48497 = arg_buffer[1];
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

void* kont4823948340 = prim_car(lst);
void* lst48341 = prim_cdr(lst);
void* x4815248342 = apply_prim__u45(lst48341);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4823948340);
arg_buffer[2] = x4815248342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4823948340))[0]);
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
void* _48498 = arg_buffer[1];
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

void* kont4824148343 = prim_car(lst);
void* lst48344 = prim_cdr(lst);
void* x4815348345 = apply_prim__u42(lst48344);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4824148343);
arg_buffer[2] = x4815348345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4824148343))[0]);
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
void* _48499 = arg_buffer[1];
//reading env and args
void* kont48243 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4815448346 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48243);
arg_buffer[2] = x4815448346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48243))[0]);
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
void* _48500 = arg_buffer[1];
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

void* kont4824448347 = prim_car(lst);
void* lst48348 = prim_cdr(lst);
void* x4815548349 = apply_prim__u47(lst48348);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4824448347);
arg_buffer[2] = x4815548349;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4824448347))[0]);
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
void* _48501 = arg_buffer[1];
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

void* kont4824648350 = prim_car(lst);
void* lst48351 = prim_cdr(lst);
void* x4815648352 = apply_prim__u61(lst48351);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4824648350);
arg_buffer[2] = x4815648352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4824648350))[0]);
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
void* _48502 = arg_buffer[1];
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

void* kont4824848353 = prim_car(lst);
void* lst48354 = prim_cdr(lst);
void* x4815748355 = apply_prim__u62(lst48354);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4824848353);
arg_buffer[2] = x4815748355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4824848353))[0]);
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
void* _48503 = arg_buffer[1];
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

void* kont4825048356 = prim_car(lst);
void* lst48357 = prim_cdr(lst);
void* x4815848358 = apply_prim__u60(lst48357);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4825048356);
arg_buffer[2] = x4815848358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4825048356))[0]);
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
void* _48504 = arg_buffer[1];
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

void* kont4825248359 = prim_car(lst);
void* lst48360 = prim_cdr(lst);
void* x4815948361 = apply_prim__u60_u61(lst48360);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4825248359);
arg_buffer[2] = x4815948361;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4825248359))[0]);
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
void* _48505 = arg_buffer[1];
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

void* kont4825448362 = prim_car(lst);
void* lst48363 = prim_cdr(lst);
void* x4816048364 = apply_prim__u62_u61(lst48363);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4825448362);
arg_buffer[2] = x4816048364;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4825448362))[0]);
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
void* _48506 = arg_buffer[1];
//reading env and args
void* kont48256 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4816148365 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48256);
arg_buffer[2] = x4816148365;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48256))[0]);
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
void* _48507 = arg_buffer[1];
//reading env and args
void* kont48257 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4816248366 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48257);
arg_buffer[2] = x4816248366;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48257))[0]);
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
void* _48508 = arg_buffer[1];
//reading env and args
void* kont48258 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4816348367 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48258);
arg_buffer[2] = x4816348367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48258))[0]);
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
void* _48509 = arg_buffer[1];
//reading env and args
void* kont48259 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4816448368 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48259);
arg_buffer[2] = x4816448368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48259))[0]);
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
void* _48510 = arg_buffer[1];
//reading env and args
void* kont48260 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4816548369 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48260);
arg_buffer[2] = x4816548369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48260))[0]);
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
void* _48511 = arg_buffer[1];
//reading env and args
void* kont48261 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4816648370 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48261);
arg_buffer[2] = x4816648370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48261))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam48512_fptr() // lam48512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48513 = arg_buffer[1];
//reading env and args
void* a4816948374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env48513))[3];
//not do dummy comment
void* a4816748371 = (decode_clo(env48513))[2];
//not do dummy comment
void* kont48262 = (decode_clo(env48513))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48262;
arg_buffer[3] = a4816748371;
arg_buffer[4] = a4816948374;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48512 = encode_clo(alloc_clo(lam48512_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48516 = arg_buffer[1];
//reading env and args
void* kont48262 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48950 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48950, "0", 10);
void* a4816748371 = encode_mpz(mpzvar48950);
mpz_t* mpzvar48951 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48951, "2", 10);
void* a4816848372 = encode_mpz(mpzvar48951);

//creating new closure instance
void** clo48953 = alloc_clo(lam48512_fptr, 3);

//setting env list
clo48953[1] = kont48262;
clo48953[2] = a4816748371;
clo48953[3] = equal_u63;
void* f4826348373 = encode_clo(clo48953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4826348373;
arg_buffer[3] = x;
arg_buffer[4] = a4816848372;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam48517_fptr() // lam48517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48518 = arg_buffer[1];
//reading env and args
void* a4817248378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env48518))[3];
//not do dummy comment
void* a4817048375 = (decode_clo(env48518))[2];
//not do dummy comment
void* kont48264 = (decode_clo(env48518))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48264;
arg_buffer[3] = a4817048375;
arg_buffer[4] = a4817248378;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48517 = encode_clo(alloc_clo(lam48517_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48521 = arg_buffer[1];
//reading env and args
void* kont48264 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar48954 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48954, "1", 10);
void* a4817048375 = encode_mpz(mpzvar48954);
mpz_t* mpzvar48955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48955, "2", 10);
void* a4817148376 = encode_mpz(mpzvar48955);

//creating new closure instance
void** clo48957 = alloc_clo(lam48517_fptr, 3);

//setting env list
clo48957[1] = kont48264;
clo48957[2] = a4817048375;
clo48957[3] = equal_u63;
void* f4826548377 = encode_clo(clo48957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4826548377;
arg_buffer[3] = x;
arg_buffer[4] = a4817148376;
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
void* _48522 = arg_buffer[1];
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

void* kont4826648379 = prim_car(x);
void* x48380 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4826648379);
arg_buffer[2] = x48380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4826648379))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam48525_fptr() // lam48525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48526 = arg_buffer[1];
//reading env and args
void* a4817848390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48268 = (decode_clo(env48526))[3];
//not do dummy comment
void* x = (decode_clo(env48526))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48526))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont48268;
arg_buffer[3] = x;
arg_buffer[4] = a4817848390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48525 = encode_clo(alloc_clo(lam48525_fptr, 0));

void* lam48527_fptr() // lam48527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48528 = arg_buffer[1];
//reading env and args
void* a4817648387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48528))[5];
//not do dummy comment
void* kont48268 = (decode_clo(env48528))[4];
//not do dummy comment
void* lst = (decode_clo(env48528))[3];
//not do dummy comment
void* x = (decode_clo(env48528))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48528))[1];

//if-clause
bool if_guard48958 = is_true(a4817648387);
if(if_guard48958)
{
void* x4817748388 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48268);
arg_buffer[2] = x4817748388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48268))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48960 = alloc_clo(lam48525_fptr, 3);

//setting env list
clo48960[1] = member_u63;
clo48960[2] = x;
clo48960[3] = kont48268;
void* f4826948389 = encode_clo(clo48960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4826948389;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48527 = encode_clo(alloc_clo(lam48527_fptr, 0));

void* lam48529_fptr() // lam48529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48530 = arg_buffer[1];
//reading env and args
void* a4817548385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48530))[6];
//not do dummy comment
void* kont48268 = (decode_clo(env48530))[5];
//not do dummy comment
void* lst = (decode_clo(env48530))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env48530))[3];
//not do dummy comment
void* x = (decode_clo(env48530))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48530))[1];

//creating new closure instance
void** clo48962 = alloc_clo(lam48527_fptr, 5);

//setting env list
clo48962[1] = member_u63;
clo48962[2] = x;
clo48962[3] = lst;
clo48962[4] = kont48268;
clo48962[5] = cdr;
void* f4827048386 = encode_clo(clo48962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4827048386;
arg_buffer[3] = a4817548385;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48529 = encode_clo(alloc_clo(lam48529_fptr, 0));

void* lam48531_fptr() // lam48531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48532 = arg_buffer[1];
//reading env and args
void* a4817348382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48532))[7];
//not do dummy comment
void* kont48268 = (decode_clo(env48532))[6];
//not do dummy comment
void* lst = (decode_clo(env48532))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env48532))[4];
//not do dummy comment
void* x = (decode_clo(env48532))[3];
//not do dummy comment
void* car = (decode_clo(env48532))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48532))[1];

//if-clause
bool if_guard48963 = is_true(a4817348382);
if(if_guard48963)
{
void* x4817448383 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48268);
arg_buffer[2] = x4817448383;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48268))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48965 = alloc_clo(lam48529_fptr, 6);

//setting env list
clo48965[1] = member_u63;
clo48965[2] = x;
clo48965[3] = equal_u63;
clo48965[4] = lst;
clo48965[5] = kont48268;
clo48965[6] = cdr;
void* f4827148384 = encode_clo(clo48965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4827148384;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48531 = encode_clo(alloc_clo(lam48531_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48533 = arg_buffer[1];
//reading env and args
void* kont48268 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48967 = alloc_clo(lam48531_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo48967[1] = member_u63;
clo48967[2] = car;
clo48967[3] = x;
clo48967[4] = equal_u63;
clo48967[5] = lst;
clo48967[6] = kont48268;
clo48967[7] = cdr;
void* f4827248381 = encode_clo(clo48967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4827248381;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam48534_fptr() // lam48534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48535 = arg_buffer[1];
//reading env and args
void* a4818248398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4818148396 = (decode_clo(env48535))[4];
//not do dummy comment
void* kont48273 = (decode_clo(env48535))[3];
//not do dummy comment
void* fun = (decode_clo(env48535))[2];
//not do dummy comment
void* foldl = (decode_clo(env48535))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont48273;
arg_buffer[3] = fun;
arg_buffer[4] = a4818148396;
arg_buffer[5] = a4818248398;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48534 = encode_clo(alloc_clo(lam48534_fptr, 0));

void* lam48536_fptr() // lam48536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48537 = arg_buffer[1];
//reading env and args
void* a4818148396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48537))[5];
//not do dummy comment
void* lst = (decode_clo(env48537))[4];
//not do dummy comment
void* kont48273 = (decode_clo(env48537))[3];
//not do dummy comment
void* fun = (decode_clo(env48537))[2];
//not do dummy comment
void* foldl = (decode_clo(env48537))[1];

//creating new closure instance
void** clo48969 = alloc_clo(lam48534_fptr, 4);

//setting env list
clo48969[1] = foldl;
clo48969[2] = fun;
clo48969[3] = kont48273;
clo48969[4] = a4818148396;
void* f4827448397 = encode_clo(clo48969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4827448397;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48536 = encode_clo(alloc_clo(lam48536_fptr, 0));

void* lam48538_fptr() // lam48538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48539 = arg_buffer[1];
//reading env and args
void* a4818048394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48539))[6];
//not do dummy comment
void* lst = (decode_clo(env48539))[5];
//not do dummy comment
void* kont48273 = (decode_clo(env48539))[4];
//not do dummy comment
void* fun = (decode_clo(env48539))[3];
//not do dummy comment
void* acc = (decode_clo(env48539))[2];
//not do dummy comment
void* foldl = (decode_clo(env48539))[1];

//creating new closure instance
void** clo48971 = alloc_clo(lam48536_fptr, 5);

//setting env list
clo48971[1] = foldl;
clo48971[2] = fun;
clo48971[3] = kont48273;
clo48971[4] = lst;
clo48971[5] = cdr;
void* f4827548395 = encode_clo(clo48971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4827548395;
arg_buffer[3] = a4818048394;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48538 = encode_clo(alloc_clo(lam48538_fptr, 0));

void* lam48540_fptr() // lam48540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48541 = arg_buffer[1];
//reading env and args
void* a4817948392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48541))[7];
//not do dummy comment
void* lst = (decode_clo(env48541))[6];
//not do dummy comment
void* kont48273 = (decode_clo(env48541))[5];
//not do dummy comment
void* fun = (decode_clo(env48541))[4];
//not do dummy comment
void* acc = (decode_clo(env48541))[3];
//not do dummy comment
void* car = (decode_clo(env48541))[2];
//not do dummy comment
void* foldl = (decode_clo(env48541))[1];

//if-clause
bool if_guard48972 = is_true(a4817948392);
if(if_guard48972)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48273);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48273))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48974 = alloc_clo(lam48538_fptr, 6);

//setting env list
clo48974[1] = foldl;
clo48974[2] = acc;
clo48974[3] = fun;
clo48974[4] = kont48273;
clo48974[5] = lst;
clo48974[6] = cdr;
void* f4827648393 = encode_clo(clo48974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4827648393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48540 = encode_clo(alloc_clo(lam48540_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48542 = arg_buffer[1];
//reading env and args
void* kont48273 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo48976 = alloc_clo(lam48540_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo48976[1] = foldl;
clo48976[2] = car;
clo48976[3] = acc;
clo48976[4] = fun;
clo48976[5] = kont48273;
clo48976[6] = lst;
clo48976[7] = cdr;
void* f4827748391 = encode_clo(clo48976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4827748391;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam48543_fptr() // lam48543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48544 = arg_buffer[1];
//reading env and args
void* a4818648406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48544))[3];
//not do dummy comment
void* a4818448402 = (decode_clo(env48544))[2];
//not do dummy comment
void* kont48278 = (decode_clo(env48544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48278;
arg_buffer[3] = a4818448402;
arg_buffer[4] = a4818648406;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48543 = encode_clo(alloc_clo(lam48543_fptr, 0));

void* lam48545_fptr() // lam48545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48546 = arg_buffer[1];
//reading env and args
void* a4818548404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48546))[5];
//not do dummy comment
void* a4818448402 = (decode_clo(env48546))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48546))[3];
//not do dummy comment
void* kont48278 = (decode_clo(env48546))[2];
//not do dummy comment
void* cons = (decode_clo(env48546))[1];

//creating new closure instance
void** clo48978 = alloc_clo(lam48543_fptr, 3);

//setting env list
clo48978[1] = kont48278;
clo48978[2] = a4818448402;
clo48978[3] = reverse_u45helper;
void* f4827948405 = encode_clo(clo48978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4827948405;
arg_buffer[3] = a4818548404;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48545 = encode_clo(alloc_clo(lam48545_fptr, 0));

void* lam48547_fptr() // lam48547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48548 = arg_buffer[1];
//reading env and args
void* a4818448402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48548))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48548))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48548))[4];
//not do dummy comment
void* cons = (decode_clo(env48548))[3];
//not do dummy comment
void* kont48278 = (decode_clo(env48548))[2];
//not do dummy comment
void* car = (decode_clo(env48548))[1];

//creating new closure instance
void** clo48980 = alloc_clo(lam48545_fptr, 5);

//setting env list
clo48980[1] = cons;
clo48980[2] = kont48278;
clo48980[3] = lst2;
clo48980[4] = a4818448402;
clo48980[5] = reverse_u45helper;
void* f4828048403 = encode_clo(clo48980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4828048403;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48547 = encode_clo(alloc_clo(lam48547_fptr, 0));

void* lam48549_fptr() // lam48549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48550 = arg_buffer[1];
//reading env and args
void* a4818348400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48550))[7];
//not do dummy comment
void* lst = (decode_clo(env48550))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48550))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48550))[4];
//not do dummy comment
void* cons = (decode_clo(env48550))[3];
//not do dummy comment
void* kont48278 = (decode_clo(env48550))[2];
//not do dummy comment
void* car = (decode_clo(env48550))[1];

//if-clause
bool if_guard48981 = is_true(a4818348400);
if(if_guard48981)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48278);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48278))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo48983 = alloc_clo(lam48547_fptr, 6);

//setting env list
clo48983[1] = car;
clo48983[2] = kont48278;
clo48983[3] = cons;
clo48983[4] = lst2;
clo48983[5] = reverse_u45helper;
clo48983[6] = lst;
void* f4828148401 = encode_clo(clo48983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4828148401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48549 = encode_clo(alloc_clo(lam48549_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48551 = arg_buffer[1];
//reading env and args
void* kont48278 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo48985 = alloc_clo(lam48549_fptr, 7);

//setting env list
clo48985[1] = car;
clo48985[2] = kont48278;
clo48985[3] = cons;
clo48985[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo48985[5] = reverse_u45helper;
clo48985[6] = lst;
clo48985[7] = cdr;
void* f4828248399 = encode_clo(clo48985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4828248399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam48552_fptr() // lam48552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48553 = arg_buffer[1];
//reading env and args
void* a4818748408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48283 = (decode_clo(env48553))[3];
//not do dummy comment
void* lst = (decode_clo(env48553))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48553))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48283;
arg_buffer[3] = lst;
arg_buffer[4] = a4818748408;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48552 = encode_clo(alloc_clo(lam48552_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48554 = arg_buffer[1];
//reading env and args
void* kont48283 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo48987 = alloc_clo(lam48552_fptr, 3);

//setting env list
clo48987[1] = reverse_u45helper;
clo48987[2] = lst;
clo48987[3] = kont48283;
void* f4828448407 = encode_clo(clo48987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4828448407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam48555_fptr() // lam48555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48556 = arg_buffer[1];
//reading env and args
void* x4819048413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48285 = (decode_clo(env48556))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48285);
arg_buffer[2] = x4819048413;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48285))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48555 = encode_clo(alloc_clo(lam48555_fptr, 0));

void* lam48557_fptr() // lam48557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48558 = arg_buffer[1];
//reading env and args
void* a4819548422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48285 = (decode_clo(env48558))[4];
//not do dummy comment
void* a4819148415 = (decode_clo(env48558))[3];
//not do dummy comment
void* a4819348418 = (decode_clo(env48558))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env48558))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48285;
arg_buffer[3] = a4819148415;
arg_buffer[4] = a4819348418;
arg_buffer[5] = a4819548422;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48557 = encode_clo(alloc_clo(lam48557_fptr, 0));

void* lam48559_fptr() // lam48559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48560 = arg_buffer[1];
//reading env and args
void* a4819448420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48285 = (decode_clo(env48560))[6];
//not do dummy comment
void* a4819148415 = (decode_clo(env48560))[5];
//not do dummy comment
void* a4819348418 = (decode_clo(env48560))[4];
//not do dummy comment
void* cons = (decode_clo(env48560))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48560))[2];
//not do dummy comment
void* lst2 = (decode_clo(env48560))[1];

//creating new closure instance
void** clo48989 = alloc_clo(lam48557_fptr, 4);

//setting env list
clo48989[1] = take_u45helper;
clo48989[2] = a4819348418;
clo48989[3] = a4819148415;
clo48989[4] = kont48285;
void* f4828748421 = encode_clo(clo48989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4828748421;
arg_buffer[3] = a4819448420;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48559 = encode_clo(alloc_clo(lam48559_fptr, 0));

void* lam48561_fptr() // lam48561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48562 = arg_buffer[1];
//reading env and args
void* a4819348418 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4819148415 = (decode_clo(env48562))[7];
//not do dummy comment
void* car = (decode_clo(env48562))[6];
//not do dummy comment
void* cons = (decode_clo(env48562))[5];
//not do dummy comment
void* lst = (decode_clo(env48562))[4];
//not do dummy comment
void* kont48285 = (decode_clo(env48562))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48562))[2];
//not do dummy comment
void* lst2 = (decode_clo(env48562))[1];

//creating new closure instance
void** clo48991 = alloc_clo(lam48559_fptr, 6);

//setting env list
clo48991[1] = lst2;
clo48991[2] = take_u45helper;
clo48991[3] = cons;
clo48991[4] = a4819348418;
clo48991[5] = a4819148415;
clo48991[6] = kont48285;
void* f4828848419 = encode_clo(clo48991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4828848419;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48561 = encode_clo(alloc_clo(lam48561_fptr, 0));

void* lam48564_fptr() // lam48564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48565 = arg_buffer[1];
//reading env and args
void* a4819148415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env48565))[8];
//not do dummy comment
void* _u45 = (decode_clo(env48565))[7];
//not do dummy comment
void* lst = (decode_clo(env48565))[6];
//not do dummy comment
void* kont48285 = (decode_clo(env48565))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48565))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48565))[3];
//not do dummy comment
void* n = (decode_clo(env48565))[2];
//not do dummy comment
void* car = (decode_clo(env48565))[1];
mpz_t* mpzvar48992 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar48992, "1", 10);
void* a4819248416 = encode_mpz(mpzvar48992);

//creating new closure instance
void** clo48994 = alloc_clo(lam48561_fptr, 7);

//setting env list
clo48994[1] = lst2;
clo48994[2] = take_u45helper;
clo48994[3] = kont48285;
clo48994[4] = lst;
clo48994[5] = cons;
clo48994[6] = car;
clo48994[7] = a4819148415;
void* f4828948417 = encode_clo(clo48994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4828948417;
arg_buffer[3] = n;
arg_buffer[4] = a4819248416;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48564 = encode_clo(alloc_clo(lam48564_fptr, 0));

void* lam48566_fptr() // lam48566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48567 = arg_buffer[1];
//reading env and args
void* a4818948411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48567))[10];
//not do dummy comment
void* reverse = (decode_clo(env48567))[9];
//not do dummy comment
void* cons = (decode_clo(env48567))[8];
//not do dummy comment
void* _u45 = (decode_clo(env48567))[7];
//not do dummy comment
void* lst = (decode_clo(env48567))[6];
//not do dummy comment
void* kont48285 = (decode_clo(env48567))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48567))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48567))[3];
//not do dummy comment
void* n = (decode_clo(env48567))[2];
//not do dummy comment
void* car = (decode_clo(env48567))[1];

//if-clause
bool if_guard48995 = is_true(a4818948411);
if(if_guard48995)
{

//creating new closure instance
void** clo48997 = alloc_clo(lam48555_fptr, 1);

//setting env list
clo48997[1] = kont48285;
void* f4828648412 = encode_clo(clo48997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4828648412;
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
void** clo48999 = alloc_clo(lam48564_fptr, 8);

//setting env list
clo48999[1] = car;
clo48999[2] = n;
clo48999[3] = lst2;
clo48999[4] = take_u45helper;
clo48999[5] = kont48285;
clo48999[6] = lst;
clo48999[7] = _u45;
clo48999[8] = cons;
void* f4829048414 = encode_clo(clo48999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4829048414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48566 = encode_clo(alloc_clo(lam48566_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48569 = arg_buffer[1];
//reading env and args
void* kont48285 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar49000 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49000, "0", 10);
void* a4818848409 = encode_mpz(mpzvar49000);

//creating new closure instance
void** clo49002 = alloc_clo(lam48566_fptr, 10);

//setting env list
clo49002[1] = car;
clo49002[2] = n;
clo49002[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo49002[4] = take_u45helper;
clo49002[5] = kont48285;
clo49002[6] = lst;
clo49002[7] = _u45;
clo49002[8] = cons;
clo49002[9] = reverse;
clo49002[10] = cdr;
void* f4829148410 = encode_clo(clo49002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4829148410;
arg_buffer[3] = n;
arg_buffer[4] = a4818848409;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam48570_fptr() // lam48570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48571 = arg_buffer[1];
//reading env and args
void* a4819648424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48571))[4];
//not do dummy comment
void* kont48292 = (decode_clo(env48571))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48571))[2];
//not do dummy comment
void* n = (decode_clo(env48571))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48292;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4819648424;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48570 = encode_clo(alloc_clo(lam48570_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48572 = arg_buffer[1];
//reading env and args
void* kont48292 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49004 = alloc_clo(lam48570_fptr, 4);

//setting env list
clo49004[1] = n;
clo49004[2] = take_u45helper;
clo49004[3] = kont48292;
clo49004[4] = lst;
void* f4829348423 = encode_clo(clo49004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4829348423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam48574_fptr() // lam48574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48575 = arg_buffer[1];
//reading env and args
void* a4820148432 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4819948428 = (decode_clo(env48575))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48575))[2];
//not do dummy comment
void* kont48294 = (decode_clo(env48575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont48294;
arg_buffer[3] = a4819948428;
arg_buffer[4] = a4820148432;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48574 = encode_clo(alloc_clo(lam48574_fptr, 0));

void* lam48576_fptr() // lam48576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48577 = arg_buffer[1];
//reading env and args
void* a4820048430 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4819948428 = (decode_clo(env48577))[4];
//not do dummy comment
void* length = (decode_clo(env48577))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48577))[2];
//not do dummy comment
void* kont48294 = (decode_clo(env48577))[1];

//creating new closure instance
void** clo49006 = alloc_clo(lam48574_fptr, 3);

//setting env list
clo49006[1] = kont48294;
clo49006[2] = _u43;
clo49006[3] = a4819948428;
void* f4829548431 = encode_clo(clo49006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4829548431;
arg_buffer[3] = a4820048430;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48576 = encode_clo(alloc_clo(lam48576_fptr, 0));

void* lam48579_fptr() // lam48579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48580 = arg_buffer[1];
//reading env and args
void* a4819748426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48580))[5];
//not do dummy comment
void* lst = (decode_clo(env48580))[4];
//not do dummy comment
void* length = (decode_clo(env48580))[3];
//not do dummy comment
void* _u43 = (decode_clo(env48580))[2];
//not do dummy comment
void* kont48294 = (decode_clo(env48580))[1];

//if-clause
bool if_guard49007 = is_true(a4819748426);
if(if_guard49007)
{
mpz_t* mpzvar49008 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49008, "0", 10);
void* x4819848427 = encode_mpz(mpzvar49008);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48294);
arg_buffer[2] = x4819848427;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48294))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar49009 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49009, "1", 10);
void* a4819948428 = encode_mpz(mpzvar49009);

//creating new closure instance
void** clo49011 = alloc_clo(lam48576_fptr, 4);

//setting env list
clo49011[1] = kont48294;
clo49011[2] = _u43;
clo49011[3] = length;
clo49011[4] = a4819948428;
void* f4829648429 = encode_clo(clo49011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4829648429;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48579 = encode_clo(alloc_clo(lam48579_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48581 = arg_buffer[1];
//reading env and args
void* kont48294 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49013 = alloc_clo(lam48579_fptr, 5);

//setting env list
clo49013[1] = kont48294;
clo49013[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo49013[3] = length;
clo49013[4] = lst;
clo49013[5] = cdr;
void* f4829748425 = encode_clo(clo49013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4829748425;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam48582_fptr() // lam48582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48583 = arg_buffer[1];
//reading env and args
void* x4820348436 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48298 = (decode_clo(env48583))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48298);
arg_buffer[2] = x4820348436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48298))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48582 = encode_clo(alloc_clo(lam48582_fptr, 0));

void* lam48584_fptr() // lam48584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48585 = arg_buffer[1];
//reading env and args
void* a4820748444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48298 = (decode_clo(env48585))[3];
//not do dummy comment
void* cons = (decode_clo(env48585))[2];
//not do dummy comment
void* a4820548440 = (decode_clo(env48585))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48298;
arg_buffer[3] = a4820548440;
arg_buffer[4] = a4820748444;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48584 = encode_clo(alloc_clo(lam48584_fptr, 0));

void* lam48586_fptr() // lam48586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48587 = arg_buffer[1];
//reading env and args
void* a4820648442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48298 = (decode_clo(env48587))[5];
//not do dummy comment
void* map = (decode_clo(env48587))[4];
//not do dummy comment
void* proc = (decode_clo(env48587))[3];
//not do dummy comment
void* cons = (decode_clo(env48587))[2];
//not do dummy comment
void* a4820548440 = (decode_clo(env48587))[1];

//creating new closure instance
void** clo49015 = alloc_clo(lam48584_fptr, 3);

//setting env list
clo49015[1] = a4820548440;
clo49015[2] = cons;
clo49015[3] = kont48298;
void* f4830048443 = encode_clo(clo49015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4830048443;
arg_buffer[3] = proc;
arg_buffer[4] = a4820648442;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48586 = encode_clo(alloc_clo(lam48586_fptr, 0));

void* lam48588_fptr() // lam48588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48589 = arg_buffer[1];
//reading env and args
void* a4820548440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48589))[6];
//not do dummy comment
void* kont48298 = (decode_clo(env48589))[5];
//not do dummy comment
void* lst = (decode_clo(env48589))[4];
//not do dummy comment
void* map = (decode_clo(env48589))[3];
//not do dummy comment
void* proc = (decode_clo(env48589))[2];
//not do dummy comment
void* cons = (decode_clo(env48589))[1];

//creating new closure instance
void** clo49017 = alloc_clo(lam48586_fptr, 5);

//setting env list
clo49017[1] = a4820548440;
clo49017[2] = cons;
clo49017[3] = proc;
clo49017[4] = map;
clo49017[5] = kont48298;
void* f4830148441 = encode_clo(clo49017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4830148441;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48588 = encode_clo(alloc_clo(lam48588_fptr, 0));

void* lam48590_fptr() // lam48590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48591 = arg_buffer[1];
//reading env and args
void* a4820448438 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48591))[6];
//not do dummy comment
void* kont48298 = (decode_clo(env48591))[5];
//not do dummy comment
void* lst = (decode_clo(env48591))[4];
//not do dummy comment
void* map = (decode_clo(env48591))[3];
//not do dummy comment
void* proc = (decode_clo(env48591))[2];
//not do dummy comment
void* cons = (decode_clo(env48591))[1];

//creating new closure instance
void** clo49019 = alloc_clo(lam48588_fptr, 6);

//setting env list
clo49019[1] = cons;
clo49019[2] = proc;
clo49019[3] = map;
clo49019[4] = lst;
clo49019[5] = kont48298;
clo49019[6] = cdr;
void* f4830248439 = encode_clo(clo49019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4830248439;
arg_buffer[3] = a4820448438;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48590 = encode_clo(alloc_clo(lam48590_fptr, 0));

void* lam48592_fptr() // lam48592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48593 = arg_buffer[1];
//reading env and args
void* a4820248434 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48298 = (decode_clo(env48593))[8];
//not do dummy comment
void* lst = (decode_clo(env48593))[7];
//not do dummy comment
void* map = (decode_clo(env48593))[6];
//not do dummy comment
void* proc = (decode_clo(env48593))[5];
//not do dummy comment
void* car = (decode_clo(env48593))[4];
//not do dummy comment
void* cons = (decode_clo(env48593))[3];
//not do dummy comment
void* list = (decode_clo(env48593))[2];
//not do dummy comment
void* cdr = (decode_clo(env48593))[1];

//if-clause
bool if_guard49020 = is_true(a4820248434);
if(if_guard49020)
{

//creating new closure instance
void** clo49022 = alloc_clo(lam48582_fptr, 1);

//setting env list
clo49022[1] = kont48298;
void* f4829948435 = encode_clo(clo49022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4829948435;
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
void** clo49024 = alloc_clo(lam48590_fptr, 6);

//setting env list
clo49024[1] = cons;
clo49024[2] = proc;
clo49024[3] = map;
clo49024[4] = lst;
clo49024[5] = kont48298;
clo49024[6] = cdr;
void* f4830348437 = encode_clo(clo49024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4830348437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48592 = encode_clo(alloc_clo(lam48592_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48594 = arg_buffer[1];
//reading env and args
void* kont48298 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49026 = alloc_clo(lam48592_fptr, 8);

//setting env list
clo49026[1] = cdr;
clo49026[2] = list;
clo49026[3] = cons;
clo49026[4] = car;
clo49026[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo49026[6] = map;
clo49026[7] = lst;
clo49026[8] = kont48298;
void* f4830448433 = encode_clo(clo49026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4830448433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam48595_fptr() // lam48595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48596 = arg_buffer[1];
//reading env and args
void* x4820948448 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48305 = (decode_clo(env48596))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48305);
arg_buffer[2] = x4820948448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48305))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48595 = encode_clo(alloc_clo(lam48595_fptr, 0));

void* lam48597_fptr() // lam48597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48598 = arg_buffer[1];
//reading env and args
void* a4821448458 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48305 = (decode_clo(env48598))[3];
//not do dummy comment
void* a4821248454 = (decode_clo(env48598))[2];
//not do dummy comment
void* cons = (decode_clo(env48598))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48305;
arg_buffer[3] = a4821248454;
arg_buffer[4] = a4821448458;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48597 = encode_clo(alloc_clo(lam48597_fptr, 0));

void* lam48599_fptr() // lam48599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48600 = arg_buffer[1];
//reading env and args
void* a4821348456 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env48600))[5];
//not do dummy comment
void* kont48305 = (decode_clo(env48600))[4];
//not do dummy comment
void* cons = (decode_clo(env48600))[3];
//not do dummy comment
void* a4821248454 = (decode_clo(env48600))[2];
//not do dummy comment
void* filter = (decode_clo(env48600))[1];

//creating new closure instance
void** clo49028 = alloc_clo(lam48597_fptr, 3);

//setting env list
clo49028[1] = cons;
clo49028[2] = a4821248454;
clo49028[3] = kont48305;
void* f4830748457 = encode_clo(clo49028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4830748457;
arg_buffer[3] = op;
arg_buffer[4] = a4821348456;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48599 = encode_clo(alloc_clo(lam48599_fptr, 0));

void* lam48601_fptr() // lam48601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48602 = arg_buffer[1];
//reading env and args
void* a4821248454 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48602))[6];
//not do dummy comment
void* lst = (decode_clo(env48602))[5];
//not do dummy comment
void* op = (decode_clo(env48602))[4];
//not do dummy comment
void* kont48305 = (decode_clo(env48602))[3];
//not do dummy comment
void* filter = (decode_clo(env48602))[2];
//not do dummy comment
void* cons = (decode_clo(env48602))[1];

//creating new closure instance
void** clo49030 = alloc_clo(lam48599_fptr, 5);

//setting env list
clo49030[1] = filter;
clo49030[2] = a4821248454;
clo49030[3] = cons;
clo49030[4] = kont48305;
clo49030[5] = op;
void* f4830848455 = encode_clo(clo49030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4830848455;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48601 = encode_clo(alloc_clo(lam48601_fptr, 0));

void* lam48603_fptr() // lam48603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48604 = arg_buffer[1];
//reading env and args
void* a4821548460 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env48604))[3];
//not do dummy comment
void* kont48305 = (decode_clo(env48604))[2];
//not do dummy comment
void* filter = (decode_clo(env48604))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont48305;
arg_buffer[3] = op;
arg_buffer[4] = a4821548460;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48603 = encode_clo(alloc_clo(lam48603_fptr, 0));

void* lam48605_fptr() // lam48605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48606 = arg_buffer[1];
//reading env and args
void* a4821148452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48606))[7];
//not do dummy comment
void* lst = (decode_clo(env48606))[6];
//not do dummy comment
void* op = (decode_clo(env48606))[5];
//not do dummy comment
void* kont48305 = (decode_clo(env48606))[4];
//not do dummy comment
void* cons = (decode_clo(env48606))[3];
//not do dummy comment
void* filter = (decode_clo(env48606))[2];
//not do dummy comment
void* car = (decode_clo(env48606))[1];

//if-clause
bool if_guard49031 = is_true(a4821148452);
if(if_guard49031)
{

//creating new closure instance
void** clo49033 = alloc_clo(lam48601_fptr, 6);

//setting env list
clo49033[1] = cons;
clo49033[2] = filter;
clo49033[3] = kont48305;
clo49033[4] = op;
clo49033[5] = lst;
clo49033[6] = cdr;
void* f4830948453 = encode_clo(clo49033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4830948453;
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
void** clo49035 = alloc_clo(lam48603_fptr, 3);

//setting env list
clo49035[1] = filter;
clo49035[2] = kont48305;
clo49035[3] = op;
void* f4831048459 = encode_clo(clo49035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4831048459;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48605 = encode_clo(alloc_clo(lam48605_fptr, 0));

void* lam48607_fptr() // lam48607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48608 = arg_buffer[1];
//reading env and args
void* a4821048450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48608))[7];
//not do dummy comment
void* lst = (decode_clo(env48608))[6];
//not do dummy comment
void* op = (decode_clo(env48608))[5];
//not do dummy comment
void* kont48305 = (decode_clo(env48608))[4];
//not do dummy comment
void* cons = (decode_clo(env48608))[3];
//not do dummy comment
void* filter = (decode_clo(env48608))[2];
//not do dummy comment
void* car = (decode_clo(env48608))[1];

//creating new closure instance
void** clo49037 = alloc_clo(lam48605_fptr, 7);

//setting env list
clo49037[1] = car;
clo49037[2] = filter;
clo49037[3] = cons;
clo49037[4] = kont48305;
clo49037[5] = op;
clo49037[6] = lst;
clo49037[7] = cdr;
void* f4831148451 = encode_clo(clo49037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4831148451;
arg_buffer[3] = a4821048450;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48607 = encode_clo(alloc_clo(lam48607_fptr, 0));

void* lam48609_fptr() // lam48609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48610 = arg_buffer[1];
//reading env and args
void* a4820848446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48610))[8];
//not do dummy comment
void* op = (decode_clo(env48610))[7];
//not do dummy comment
void* kont48305 = (decode_clo(env48610))[6];
//not do dummy comment
void* cons = (decode_clo(env48610))[5];
//not do dummy comment
void* list = (decode_clo(env48610))[4];
//not do dummy comment
void* cdr = (decode_clo(env48610))[3];
//not do dummy comment
void* filter = (decode_clo(env48610))[2];
//not do dummy comment
void* car = (decode_clo(env48610))[1];

//if-clause
bool if_guard49038 = is_true(a4820848446);
if(if_guard49038)
{

//creating new closure instance
void** clo49040 = alloc_clo(lam48595_fptr, 1);

//setting env list
clo49040[1] = kont48305;
void* f4830648447 = encode_clo(clo49040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4830648447;
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
void** clo49042 = alloc_clo(lam48607_fptr, 7);

//setting env list
clo49042[1] = car;
clo49042[2] = filter;
clo49042[3] = cons;
clo49042[4] = kont48305;
clo49042[5] = op;
clo49042[6] = lst;
clo49042[7] = cdr;
void* f4831248449 = encode_clo(clo49042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4831248449;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48609 = encode_clo(alloc_clo(lam48609_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48611 = arg_buffer[1];
//reading env and args
void* kont48305 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49044 = alloc_clo(lam48609_fptr, 8);

//setting env list
clo49044[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo49044[2] = filter;
clo49044[3] = cdr;
clo49044[4] = list;
clo49044[5] = cons;
clo49044[6] = kont48305;
clo49044[7] = op;
clo49044[8] = lst;
void* f4831348445 = encode_clo(clo49044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4831348445;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam48612_fptr() // lam48612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48613 = arg_buffer[1];
//reading env and args
void* a4822048468 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48314 = (decode_clo(env48613))[3];
//not do dummy comment
void* drop = (decode_clo(env48613))[2];
//not do dummy comment
void* a4821848465 = (decode_clo(env48613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont48314;
arg_buffer[3] = a4821848465;
arg_buffer[4] = a4822048468;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48612 = encode_clo(alloc_clo(lam48612_fptr, 0));

void* lam48615_fptr() // lam48615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48616 = arg_buffer[1];
//reading env and args
void* a4821848465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48314 = (decode_clo(env48616))[4];
//not do dummy comment
void* drop = (decode_clo(env48616))[3];
//not do dummy comment
void* n = (decode_clo(env48616))[2];
//not do dummy comment
void* _u45 = (decode_clo(env48616))[1];
mpz_t* mpzvar49045 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49045, "1", 10);
void* a4821948466 = encode_mpz(mpzvar49045);

//creating new closure instance
void** clo49047 = alloc_clo(lam48612_fptr, 3);

//setting env list
clo49047[1] = a4821848465;
clo49047[2] = drop;
clo49047[3] = kont48314;
void* f4831548467 = encode_clo(clo49047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4831548467;
arg_buffer[3] = n;
arg_buffer[4] = a4821948466;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48615 = encode_clo(alloc_clo(lam48615_fptr, 0));

void* lam48617_fptr() // lam48617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48618 = arg_buffer[1];
//reading env and args
void* a4821748463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48618))[6];
//not do dummy comment
void* kont48314 = (decode_clo(env48618))[5];
//not do dummy comment
void* n = (decode_clo(env48618))[4];
//not do dummy comment
void* _u45 = (decode_clo(env48618))[3];
//not do dummy comment
void* lst = (decode_clo(env48618))[2];
//not do dummy comment
void* drop = (decode_clo(env48618))[1];

//if-clause
bool if_guard49048 = is_true(a4821748463);
if(if_guard49048)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48314);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48314))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49050 = alloc_clo(lam48615_fptr, 4);

//setting env list
clo49050[1] = _u45;
clo49050[2] = n;
clo49050[3] = drop;
clo49050[4] = kont48314;
void* f4831648464 = encode_clo(clo49050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4831648464;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48617 = encode_clo(alloc_clo(lam48617_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48620 = arg_buffer[1];
//reading env and args
void* kont48314 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar49051 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49051, "0", 10);
void* a4821648461 = encode_mpz(mpzvar49051);

//creating new closure instance
void** clo49053 = alloc_clo(lam48617_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo49053[1] = drop;
clo49053[2] = lst;
clo49053[3] = _u45;
clo49053[4] = n;
clo49053[5] = kont48314;
clo49053[6] = cdr;
void* f4831748462 = encode_clo(clo49053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4831748462;
arg_buffer[3] = n;
arg_buffer[4] = a4821648461;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam48621_fptr() // lam48621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48622 = arg_buffer[1];
//reading env and args
void* a4822448476 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48318 = (decode_clo(env48622))[3];
//not do dummy comment
void* proc = (decode_clo(env48622))[2];
//not do dummy comment
void* a4822248472 = (decode_clo(env48622))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont48318;
arg_buffer[3] = a4822248472;
arg_buffer[4] = a4822448476;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48621 = encode_clo(alloc_clo(lam48621_fptr, 0));

void* lam48623_fptr() // lam48623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48624 = arg_buffer[1];
//reading env and args
void* a4822348474 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env48624))[5];
//not do dummy comment
void* kont48318 = (decode_clo(env48624))[4];
//not do dummy comment
void* a4822248472 = (decode_clo(env48624))[3];
//not do dummy comment
void* proc = (decode_clo(env48624))[2];
//not do dummy comment
void* acc = (decode_clo(env48624))[1];

//creating new closure instance
void** clo49055 = alloc_clo(lam48621_fptr, 3);

//setting env list
clo49055[1] = a4822248472;
clo49055[2] = proc;
clo49055[3] = kont48318;
void* f4831948475 = encode_clo(clo49055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4831948475;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4822348474;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48623 = encode_clo(alloc_clo(lam48623_fptr, 0));

void* lam48625_fptr() // lam48625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48626 = arg_buffer[1];
//reading env and args
void* a4822248472 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48626))[6];
//not do dummy comment
void* kont48318 = (decode_clo(env48626))[5];
//not do dummy comment
void* foldr = (decode_clo(env48626))[4];
//not do dummy comment
void* lst = (decode_clo(env48626))[3];
//not do dummy comment
void* proc = (decode_clo(env48626))[2];
//not do dummy comment
void* acc = (decode_clo(env48626))[1];

//creating new closure instance
void** clo49057 = alloc_clo(lam48623_fptr, 5);

//setting env list
clo49057[1] = acc;
clo49057[2] = proc;
clo49057[3] = a4822248472;
clo49057[4] = kont48318;
clo49057[5] = foldr;
void* f4832048473 = encode_clo(clo49057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4832048473;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48625 = encode_clo(alloc_clo(lam48625_fptr, 0));

void* lam48627_fptr() // lam48627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48628 = arg_buffer[1];
//reading env and args
void* a4822148470 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48628))[7];
//not do dummy comment
void* kont48318 = (decode_clo(env48628))[6];
//not do dummy comment
void* car = (decode_clo(env48628))[5];
//not do dummy comment
void* foldr = (decode_clo(env48628))[4];
//not do dummy comment
void* lst = (decode_clo(env48628))[3];
//not do dummy comment
void* proc = (decode_clo(env48628))[2];
//not do dummy comment
void* acc = (decode_clo(env48628))[1];

//if-clause
bool if_guard49058 = is_true(a4822148470);
if(if_guard49058)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48318);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48318))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49060 = alloc_clo(lam48625_fptr, 6);

//setting env list
clo49060[1] = acc;
clo49060[2] = proc;
clo49060[3] = lst;
clo49060[4] = foldr;
clo49060[5] = kont48318;
clo49060[6] = cdr;
void* f4832148471 = encode_clo(clo49060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4832148471;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48627 = encode_clo(alloc_clo(lam48627_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48629 = arg_buffer[1];
//reading env and args
void* kont48318 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49062 = alloc_clo(lam48627_fptr, 7);

//setting env list
clo49062[1] = acc;
clo49062[2] = proc;
clo49062[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo49062[4] = foldr;
clo49062[5] = car;
clo49062[6] = kont48318;
clo49062[7] = cdr;
void* f4832248469 = encode_clo(clo49062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4832248469;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam48630_fptr() // lam48630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48631 = arg_buffer[1];
//reading env and args
void* a4822848484 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4822648480 = (decode_clo(env48631))[3];
//not do dummy comment
void* kont48323 = (decode_clo(env48631))[2];
//not do dummy comment
void* cons = (decode_clo(env48631))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48323;
arg_buffer[3] = a4822648480;
arg_buffer[4] = a4822848484;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48630 = encode_clo(alloc_clo(lam48630_fptr, 0));

void* lam48632_fptr() // lam48632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48633 = arg_buffer[1];
//reading env and args
void* a4822748482 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4822648480 = (decode_clo(env48633))[5];
//not do dummy comment
void* append = (decode_clo(env48633))[4];
//not do dummy comment
void* kont48323 = (decode_clo(env48633))[3];
//not do dummy comment
void* lst2 = (decode_clo(env48633))[2];
//not do dummy comment
void* cons = (decode_clo(env48633))[1];

//creating new closure instance
void** clo49064 = alloc_clo(lam48630_fptr, 3);

//setting env list
clo49064[1] = cons;
clo49064[2] = kont48323;
clo49064[3] = a4822648480;
void* f4832448483 = encode_clo(clo49064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4832448483;
arg_buffer[3] = a4822748482;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48632 = encode_clo(alloc_clo(lam48632_fptr, 0));

void* lam48634_fptr() // lam48634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48635 = arg_buffer[1];
//reading env and args
void* a4822648480 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48635))[6];
//not do dummy comment
void* append = (decode_clo(env48635))[5];
//not do dummy comment
void* kont48323 = (decode_clo(env48635))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48635))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48635))[2];
//not do dummy comment
void* cons = (decode_clo(env48635))[1];

//creating new closure instance
void** clo49066 = alloc_clo(lam48632_fptr, 5);

//setting env list
clo49066[1] = cons;
clo49066[2] = lst2;
clo49066[3] = kont48323;
clo49066[4] = append;
clo49066[5] = a4822648480;
void* f4832548481 = encode_clo(clo49066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4832548481;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48634 = encode_clo(alloc_clo(lam48634_fptr, 0));

void* lam48636_fptr() // lam48636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48637 = arg_buffer[1];
//reading env and args
void* a4822548478 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48637))[7];
//not do dummy comment
void* append = (decode_clo(env48637))[6];
//not do dummy comment
void* kont48323 = (decode_clo(env48637))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48637))[4];
//not do dummy comment
void* cons = (decode_clo(env48637))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48637))[2];
//not do dummy comment
void* car = (decode_clo(env48637))[1];

//if-clause
bool if_guard49067 = is_true(a4822548478);
if(if_guard49067)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48323);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48323))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49069 = alloc_clo(lam48634_fptr, 6);

//setting env list
clo49069[1] = cons;
clo49069[2] = lst1;
clo49069[3] = lst2;
clo49069[4] = kont48323;
clo49069[5] = append;
clo49069[6] = cdr;
void* f4832648479 = encode_clo(clo49069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4832648479;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48636 = encode_clo(alloc_clo(lam48636_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48638 = arg_buffer[1];
//reading env and args
void* kont48323 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49071 = alloc_clo(lam48636_fptr, 7);

//setting env list
clo49071[1] = car;
clo49071[2] = lst1;
clo49071[3] = cons;
clo49071[4] = lst2;
clo49071[5] = kont48323;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo49071[6] = append;
clo49071[7] = cdr;
void* f4832748477 = encode_clo(clo49071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4832748477;
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
void* _48639 = arg_buffer[1];
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

void* kont4832848485 = prim_car(lst);
void* lst48486 = prim_cdr(lst);
void* x4822948487 = apply_prim_hash(lst48486);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4832848485);
arg_buffer[2] = x4822948487;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4832848485))[0]);
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
void* _48640 = arg_buffer[1];
//reading env and args
void* kont48330 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4823048488 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48330);
arg_buffer[2] = x4823048488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48330))[0]);
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
void* _48641 = arg_buffer[1];
//reading env and args
void* kont48331 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4823148489 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48331);
arg_buffer[2] = x4823148489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48331))[0]);
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
void* _48642 = arg_buffer[1];
//reading env and args
void* kont48332 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4823248490 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48332);
arg_buffer[2] = x4823248490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48332))[0]);
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
void* _48643 = arg_buffer[1];
//reading env and args
void* kont48333 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4823348491 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48333);
arg_buffer[2] = x4823348491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48333))[0]);
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
void* _48646 = arg_buffer[1];
//reading env and args
void* kont48334 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar49072 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49072, "28", 10);
void* a4823448492 = encode_mpz(mpzvar49072);
mpz_t* mpzvar49073 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49073, "8", 10);
void* a4823548493 = encode_mpz(mpzvar49073);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = kont48334;
arg_buffer[3] = a4823448492;
arg_buffer[4] = a4823548493;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam48647_fptr() // lam48647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48648 = arg_buffer[1];
//reading env and args
void* x4823648495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48335 = (decode_clo(env48648))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48335);
arg_buffer[2] = x4823648495;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48335))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48647 = encode_clo(alloc_clo(lam48647_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48649 = arg_buffer[1];
//reading env and args
void* kont48335 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo49075 = alloc_clo(lam48647_fptr, 1);

//setting env list
clo49075[1] = kont48335;
void* f4833648494 = encode_clo(clo49075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4833648494;
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

