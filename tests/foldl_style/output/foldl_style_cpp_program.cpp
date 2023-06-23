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
void* _48484 = arg_buffer[1];
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

void* kont4822248322 = prim_car(lst);
void* lst48323 = prim_cdr(lst);
void* x4813348324 = apply_prim__u43(lst48323);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4822248322);
arg_buffer[2] = x4813348324;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4822248322))[0]);
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
void* _48485 = arg_buffer[1];
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

void* kont4822448325 = prim_car(lst);
void* lst48326 = prim_cdr(lst);
void* x4813448327 = apply_prim__u45(lst48326);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4822448325);
arg_buffer[2] = x4813448327;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4822448325))[0]);
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
void* _48486 = arg_buffer[1];
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

void* kont4822648328 = prim_car(lst);
void* lst48329 = prim_cdr(lst);
void* x4813548330 = apply_prim__u42(lst48329);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4822648328);
arg_buffer[2] = x4813548330;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4822648328))[0]);
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
void* _48487 = arg_buffer[1];
//reading env and args
void* kont48228 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4813648331 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48228);
arg_buffer[2] = x4813648331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48228))[0]);
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
void* _48488 = arg_buffer[1];
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

void* kont4822948332 = prim_car(lst);
void* lst48333 = prim_cdr(lst);
void* x4813748334 = apply_prim__u47(lst48333);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4822948332);
arg_buffer[2] = x4813748334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4822948332))[0]);
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
void* _48489 = arg_buffer[1];
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

void* kont4823148335 = prim_car(lst);
void* lst48336 = prim_cdr(lst);
void* x4813848337 = apply_prim__u61(lst48336);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4823148335);
arg_buffer[2] = x4813848337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4823148335))[0]);
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
void* _48490 = arg_buffer[1];
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

void* kont4823348338 = prim_car(lst);
void* lst48339 = prim_cdr(lst);
void* x4813948340 = apply_prim__u62(lst48339);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4823348338);
arg_buffer[2] = x4813948340;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4823348338))[0]);
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
void* _48491 = arg_buffer[1];
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

void* kont4823548341 = prim_car(lst);
void* lst48342 = prim_cdr(lst);
void* x4814048343 = apply_prim__u60(lst48342);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4823548341);
arg_buffer[2] = x4814048343;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4823548341))[0]);
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
void* _48492 = arg_buffer[1];
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

void* kont4823748344 = prim_car(lst);
void* lst48345 = prim_cdr(lst);
void* x4814148346 = apply_prim__u60_u61(lst48345);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4823748344);
arg_buffer[2] = x4814148346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4823748344))[0]);
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
void* _48493 = arg_buffer[1];
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

void* kont4823948347 = prim_car(lst);
void* lst48348 = prim_cdr(lst);
void* x4814248349 = apply_prim__u62_u61(lst48348);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4823948347);
arg_buffer[2] = x4814248349;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4823948347))[0]);
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
void* _48494 = arg_buffer[1];
//reading env and args
void* kont48241 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4814348350 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48241);
arg_buffer[2] = x4814348350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48241))[0]);
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
void* _48495 = arg_buffer[1];
//reading env and args
void* kont48242 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4814448351 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48242);
arg_buffer[2] = x4814448351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48242))[0]);
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
void* _48496 = arg_buffer[1];
//reading env and args
void* kont48243 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4814548352 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48243);
arg_buffer[2] = x4814548352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48243))[0]);
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
void* _48497 = arg_buffer[1];
//reading env and args
void* kont48244 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4814648353 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48244);
arg_buffer[2] = x4814648353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48244))[0]);
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
void* _48498 = arg_buffer[1];
//reading env and args
void* kont48245 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4814748354 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48245);
arg_buffer[2] = x4814748354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48245))[0]);
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
void* _48499 = arg_buffer[1];
//reading env and args
void* kont48246 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4814848355 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48246);
arg_buffer[2] = x4814848355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48246))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam48500_fptr() // lam48500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48501 = arg_buffer[1];
//reading env and args
void* a4815148359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48247 = (decode_clo(env48501))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env48501))[2];
//not do dummy comment
void* a4814948356 = (decode_clo(env48501))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48247;
arg_buffer[3] = a4814948356;
arg_buffer[4] = a4815148359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48500 = encode_clo(alloc_clo(lam48500_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48504 = arg_buffer[1];
//reading env and args
void* kont48247 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54521 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54521, "0", 10);
void* a4814948356 = encode_mpz(mpzvar54521);
mpz_t* mpzvar54522 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54522, "2", 10);
void* a4815048357 = encode_mpz(mpzvar54522);

//creating new closure instance
void** clo54524 = alloc_clo(lam48500_fptr, 3);

//setting env list
clo54524[1] = a4814948356;
clo54524[2] = equal_u63;
clo54524[3] = kont48247;
void* f4824848358 = encode_clo(clo54524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4824848358;
arg_buffer[3] = x;
arg_buffer[4] = a4815048357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam48505_fptr() // lam48505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48506 = arg_buffer[1];
//reading env and args
void* a4815448363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4815248360 = (decode_clo(env48506))[3];
//not do dummy comment
void* kont48249 = (decode_clo(env48506))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env48506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont48249;
arg_buffer[3] = a4815248360;
arg_buffer[4] = a4815448363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48505 = encode_clo(alloc_clo(lam48505_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48509 = arg_buffer[1];
//reading env and args
void* kont48249 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54525, "1", 10);
void* a4815248360 = encode_mpz(mpzvar54525);
mpz_t* mpzvar54526 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54526, "2", 10);
void* a4815348361 = encode_mpz(mpzvar54526);

//creating new closure instance
void** clo54528 = alloc_clo(lam48505_fptr, 3);

//setting env list
clo54528[1] = equal_u63;
clo54528[2] = kont48249;
clo54528[3] = a4815248360;
void* f4825048362 = encode_clo(clo54528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4825048362;
arg_buffer[3] = x;
arg_buffer[4] = a4815348361;
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
void* _48510 = arg_buffer[1];
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

void* kont4825148364 = prim_car(x);
void* x48365 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4825148364);
arg_buffer[2] = x48365;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4825148364))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam48513_fptr() // lam48513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48514 = arg_buffer[1];
//reading env and args
void* a4816048375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48253 = (decode_clo(env48514))[3];
//not do dummy comment
void* x = (decode_clo(env48514))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48514))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont48253;
arg_buffer[3] = x;
arg_buffer[4] = a4816048375;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48513 = encode_clo(alloc_clo(lam48513_fptr, 0));

void* lam48515_fptr() // lam48515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48516 = arg_buffer[1];
//reading env and args
void* a4815848372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48516))[5];
//not do dummy comment
void* lst = (decode_clo(env48516))[4];
//not do dummy comment
void* kont48253 = (decode_clo(env48516))[3];
//not do dummy comment
void* x = (decode_clo(env48516))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env48516))[1];

//if-clause
bool if_guard54529 = is_true(a4815848372);
if(if_guard54529)
{
void* x4815948373 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48253);
arg_buffer[2] = x4815948373;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48253))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54531 = alloc_clo(lam48513_fptr, 3);

//setting env list
clo54531[1] = member_u63;
clo54531[2] = x;
clo54531[3] = kont48253;
void* f4825448374 = encode_clo(clo54531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4825448374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48515 = encode_clo(alloc_clo(lam48515_fptr, 0));

void* lam48517_fptr() // lam48517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48518 = arg_buffer[1];
//reading env and args
void* a4815748370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48518))[6];
//not do dummy comment
void* lst = (decode_clo(env48518))[5];
//not do dummy comment
void* x = (decode_clo(env48518))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env48518))[3];
//not do dummy comment
void* kont48253 = (decode_clo(env48518))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env48518))[1];

//creating new closure instance
void** clo54533 = alloc_clo(lam48515_fptr, 5);

//setting env list
clo54533[1] = member_u63;
clo54533[2] = x;
clo54533[3] = kont48253;
clo54533[4] = lst;
clo54533[5] = cdr;
void* f4825548371 = encode_clo(clo54533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4825548371;
arg_buffer[3] = a4815748370;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48517 = encode_clo(alloc_clo(lam48517_fptr, 0));

void* lam48519_fptr() // lam48519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48520 = arg_buffer[1];
//reading env and args
void* a4815548367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48520))[7];
//not do dummy comment
void* lst = (decode_clo(env48520))[6];
//not do dummy comment
void* x = (decode_clo(env48520))[5];
//not do dummy comment
void* car = (decode_clo(env48520))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env48520))[3];
//not do dummy comment
void* kont48253 = (decode_clo(env48520))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env48520))[1];

//if-clause
bool if_guard54534 = is_true(a4815548367);
if(if_guard54534)
{
void* x4815648368 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48253);
arg_buffer[2] = x4815648368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48253))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54536 = alloc_clo(lam48517_fptr, 6);

//setting env list
clo54536[1] = equal_u63;
clo54536[2] = kont48253;
clo54536[3] = member_u63;
clo54536[4] = x;
clo54536[5] = lst;
clo54536[6] = cdr;
void* f4825648369 = encode_clo(clo54536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4825648369;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48519 = encode_clo(alloc_clo(lam48519_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48521 = arg_buffer[1];
//reading env and args
void* kont48253 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54538 = alloc_clo(lam48519_fptr, 7);

//setting env list
clo54538[1] = equal_u63;
clo54538[2] = kont48253;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo54538[3] = member_u63;
clo54538[4] = car;
clo54538[5] = x;
clo54538[6] = lst;
clo54538[7] = cdr;
void* f4825748366 = encode_clo(clo54538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4825748366;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam48522_fptr() // lam48522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48523 = arg_buffer[1];
//reading env and args
void* a4816448383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4816348381 = (decode_clo(env48523))[4];
//not do dummy comment
void* fun = (decode_clo(env48523))[3];
//not do dummy comment
void* kont48258 = (decode_clo(env48523))[2];
//not do dummy comment
void* foldl = (decode_clo(env48523))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont48258;
arg_buffer[3] = fun;
arg_buffer[4] = a4816348381;
arg_buffer[5] = a4816448383;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48522 = encode_clo(alloc_clo(lam48522_fptr, 0));

void* lam48524_fptr() // lam48524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48525 = arg_buffer[1];
//reading env and args
void* a4816348381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48525))[5];
//not do dummy comment
void* lst = (decode_clo(env48525))[4];
//not do dummy comment
void* fun = (decode_clo(env48525))[3];
//not do dummy comment
void* kont48258 = (decode_clo(env48525))[2];
//not do dummy comment
void* foldl = (decode_clo(env48525))[1];

//creating new closure instance
void** clo54540 = alloc_clo(lam48522_fptr, 4);

//setting env list
clo54540[1] = foldl;
clo54540[2] = kont48258;
clo54540[3] = fun;
clo54540[4] = a4816348381;
void* f4825948382 = encode_clo(clo54540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4825948382;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48524 = encode_clo(alloc_clo(lam48524_fptr, 0));

void* lam48526_fptr() // lam48526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48527 = arg_buffer[1];
//reading env and args
void* a4816248379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48527))[6];
//not do dummy comment
void* lst = (decode_clo(env48527))[5];
//not do dummy comment
void* fun = (decode_clo(env48527))[4];
//not do dummy comment
void* acc = (decode_clo(env48527))[3];
//not do dummy comment
void* kont48258 = (decode_clo(env48527))[2];
//not do dummy comment
void* foldl = (decode_clo(env48527))[1];

//creating new closure instance
void** clo54542 = alloc_clo(lam48524_fptr, 5);

//setting env list
clo54542[1] = foldl;
clo54542[2] = kont48258;
clo54542[3] = fun;
clo54542[4] = lst;
clo54542[5] = cdr;
void* f4826048380 = encode_clo(clo54542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4826048380;
arg_buffer[3] = a4816248379;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48526 = encode_clo(alloc_clo(lam48526_fptr, 0));

void* lam48528_fptr() // lam48528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48529 = arg_buffer[1];
//reading env and args
void* a4816148377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48529))[7];
//not do dummy comment
void* lst = (decode_clo(env48529))[6];
//not do dummy comment
void* fun = (decode_clo(env48529))[5];
//not do dummy comment
void* acc = (decode_clo(env48529))[4];
//not do dummy comment
void* foldl = (decode_clo(env48529))[3];
//not do dummy comment
void* kont48258 = (decode_clo(env48529))[2];
//not do dummy comment
void* car = (decode_clo(env48529))[1];

//if-clause
bool if_guard54543 = is_true(a4816148377);
if(if_guard54543)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48258);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48258))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54545 = alloc_clo(lam48526_fptr, 6);

//setting env list
clo54545[1] = foldl;
clo54545[2] = kont48258;
clo54545[3] = acc;
clo54545[4] = fun;
clo54545[5] = lst;
clo54545[6] = cdr;
void* f4826148378 = encode_clo(clo54545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4826148378;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48528 = encode_clo(alloc_clo(lam48528_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48530 = arg_buffer[1];
//reading env and args
void* kont48258 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54547 = alloc_clo(lam48528_fptr, 7);

//setting env list
clo54547[1] = car;
clo54547[2] = kont48258;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo54547[3] = foldl;
clo54547[4] = acc;
clo54547[5] = fun;
clo54547[6] = lst;
clo54547[7] = cdr;
void* f4826248376 = encode_clo(clo54547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4826248376;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam48531_fptr() // lam48531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48532 = arg_buffer[1];
//reading env and args
void* a4816848391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48263 = (decode_clo(env48532))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48532))[2];
//not do dummy comment
void* a4816648387 = (decode_clo(env48532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48263;
arg_buffer[3] = a4816648387;
arg_buffer[4] = a4816848391;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48531 = encode_clo(alloc_clo(lam48531_fptr, 0));

void* lam48533_fptr() // lam48533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48534 = arg_buffer[1];
//reading env and args
void* a4816748389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48263 = (decode_clo(env48534))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48534))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48534))[3];
//not do dummy comment
void* cons = (decode_clo(env48534))[2];
//not do dummy comment
void* a4816648387 = (decode_clo(env48534))[1];

//creating new closure instance
void** clo54549 = alloc_clo(lam48531_fptr, 3);

//setting env list
clo54549[1] = a4816648387;
clo54549[2] = reverse_u45helper;
clo54549[3] = kont48263;
void* f4826448390 = encode_clo(clo54549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4826448390;
arg_buffer[3] = a4816748389;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48533 = encode_clo(alloc_clo(lam48533_fptr, 0));

void* lam48535_fptr() // lam48535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48536 = arg_buffer[1];
//reading env and args
void* a4816648387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48263 = (decode_clo(env48536))[6];
//not do dummy comment
void* lst = (decode_clo(env48536))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48536))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48536))[3];
//not do dummy comment
void* car = (decode_clo(env48536))[2];
//not do dummy comment
void* cons = (decode_clo(env48536))[1];

//creating new closure instance
void** clo54551 = alloc_clo(lam48533_fptr, 5);

//setting env list
clo54551[1] = a4816648387;
clo54551[2] = cons;
clo54551[3] = lst2;
clo54551[4] = reverse_u45helper;
clo54551[5] = kont48263;
void* f4826548388 = encode_clo(clo54551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4826548388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48535 = encode_clo(alloc_clo(lam48535_fptr, 0));

void* lam48537_fptr() // lam48537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48538 = arg_buffer[1];
//reading env and args
void* a4816548385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48538))[7];
//not do dummy comment
void* kont48263 = (decode_clo(env48538))[6];
//not do dummy comment
void* lst = (decode_clo(env48538))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48538))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48538))[3];
//not do dummy comment
void* car = (decode_clo(env48538))[2];
//not do dummy comment
void* cons = (decode_clo(env48538))[1];

//if-clause
bool if_guard54552 = is_true(a4816548385);
if(if_guard54552)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48263);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48263))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54554 = alloc_clo(lam48535_fptr, 6);

//setting env list
clo54554[1] = cons;
clo54554[2] = car;
clo54554[3] = lst2;
clo54554[4] = reverse_u45helper;
clo54554[5] = lst;
clo54554[6] = kont48263;
void* f4826648386 = encode_clo(clo54554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4826648386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48537 = encode_clo(alloc_clo(lam48537_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48539 = arg_buffer[1];
//reading env and args
void* kont48263 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54556 = alloc_clo(lam48537_fptr, 7);

//setting env list
clo54556[1] = cons;
clo54556[2] = car;
clo54556[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo54556[4] = reverse_u45helper;
clo54556[5] = lst;
clo54556[6] = kont48263;
clo54556[7] = cdr;
void* f4826748384 = encode_clo(clo54556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4826748384;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam48540_fptr() // lam48540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48541 = arg_buffer[1];
//reading env and args
void* a4816948393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48541))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env48541))[2];
//not do dummy comment
void* kont48268 = (decode_clo(env48541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont48268;
arg_buffer[3] = lst;
arg_buffer[4] = a4816948393;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48540 = encode_clo(alloc_clo(lam48540_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48542 = arg_buffer[1];
//reading env and args
void* kont48268 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54558 = alloc_clo(lam48540_fptr, 3);

//setting env list
clo54558[1] = kont48268;
clo54558[2] = reverse_u45helper;
clo54558[3] = lst;
void* f4826948392 = encode_clo(clo54558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4826948392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam48543_fptr() // lam48543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48544 = arg_buffer[1];
//reading env and args
void* x4817248398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48270 = (decode_clo(env48544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48270);
arg_buffer[2] = x4817248398;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48270))[0]);
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
void* a4817748407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48270 = (decode_clo(env48546))[4];
//not do dummy comment
void* a4817348400 = (decode_clo(env48546))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48546))[2];
//not do dummy comment
void* a4817548403 = (decode_clo(env48546))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48270;
arg_buffer[3] = a4817348400;
arg_buffer[4] = a4817548403;
arg_buffer[5] = a4817748407;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a4817648405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48270 = (decode_clo(env48548))[6];
//not do dummy comment
void* a4817348400 = (decode_clo(env48548))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48548))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48548))[3];
//not do dummy comment
void* cons = (decode_clo(env48548))[2];
//not do dummy comment
void* a4817548403 = (decode_clo(env48548))[1];

//creating new closure instance
void** clo54560 = alloc_clo(lam48545_fptr, 4);

//setting env list
clo54560[1] = a4817548403;
clo54560[2] = take_u45helper;
clo54560[3] = a4817348400;
clo54560[4] = kont48270;
void* f4827248406 = encode_clo(clo54560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4827248406;
arg_buffer[3] = a4817648405;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a4817548403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48550))[7];
//not do dummy comment
void* kont48270 = (decode_clo(env48550))[6];
//not do dummy comment
void* a4817348400 = (decode_clo(env48550))[5];
//not do dummy comment
void* car = (decode_clo(env48550))[4];
//not do dummy comment
void* cons = (decode_clo(env48550))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48550))[2];
//not do dummy comment
void* lst2 = (decode_clo(env48550))[1];

//creating new closure instance
void** clo54562 = alloc_clo(lam48547_fptr, 6);

//setting env list
clo54562[1] = a4817548403;
clo54562[2] = cons;
clo54562[3] = lst2;
clo54562[4] = take_u45helper;
clo54562[5] = a4817348400;
clo54562[6] = kont48270;
void* f4827348404 = encode_clo(clo54562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4827348404;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48549 = encode_clo(alloc_clo(lam48549_fptr, 0));

void* lam48552_fptr() // lam48552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48553 = arg_buffer[1];
//reading env and args
void* a4817348400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48553))[8];
//not do dummy comment
void* kont48270 = (decode_clo(env48553))[7];
//not do dummy comment
void* cons = (decode_clo(env48553))[6];
//not do dummy comment
void* _u45 = (decode_clo(env48553))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48553))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48553))[3];
//not do dummy comment
void* n = (decode_clo(env48553))[2];
//not do dummy comment
void* car = (decode_clo(env48553))[1];
mpz_t* mpzvar54563 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54563, "1", 10);
void* a4817448401 = encode_mpz(mpzvar54563);

//creating new closure instance
void** clo54565 = alloc_clo(lam48549_fptr, 7);

//setting env list
clo54565[1] = lst2;
clo54565[2] = take_u45helper;
clo54565[3] = cons;
clo54565[4] = car;
clo54565[5] = a4817348400;
clo54565[6] = kont48270;
clo54565[7] = lst;
void* f4827448402 = encode_clo(clo54565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4827448402;
arg_buffer[3] = n;
arg_buffer[4] = a4817448401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48552 = encode_clo(alloc_clo(lam48552_fptr, 0));

void* lam48554_fptr() // lam48554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48555 = arg_buffer[1];
//reading env and args
void* a4817148396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48555))[10];
//not do dummy comment
void* lst = (decode_clo(env48555))[9];
//not do dummy comment
void* reverse = (decode_clo(env48555))[8];
//not do dummy comment
void* kont48270 = (decode_clo(env48555))[7];
//not do dummy comment
void* cons = (decode_clo(env48555))[6];
//not do dummy comment
void* _u45 = (decode_clo(env48555))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env48555))[4];
//not do dummy comment
void* lst2 = (decode_clo(env48555))[3];
//not do dummy comment
void* n = (decode_clo(env48555))[2];
//not do dummy comment
void* car = (decode_clo(env48555))[1];

//if-clause
bool if_guard54566 = is_true(a4817148396);
if(if_guard54566)
{

//creating new closure instance
void** clo54568 = alloc_clo(lam48543_fptr, 1);

//setting env list
clo54568[1] = kont48270;
void* f4827148397 = encode_clo(clo54568);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4827148397;
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
void** clo54570 = alloc_clo(lam48552_fptr, 8);

//setting env list
clo54570[1] = car;
clo54570[2] = n;
clo54570[3] = lst2;
clo54570[4] = take_u45helper;
clo54570[5] = _u45;
clo54570[6] = cons;
clo54570[7] = kont48270;
clo54570[8] = lst;
void* f4827548399 = encode_clo(clo54570);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4827548399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48554 = encode_clo(alloc_clo(lam48554_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48557 = arg_buffer[1];
//reading env and args
void* kont48270 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar54571 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54571, "0", 10);
void* a4817048394 = encode_mpz(mpzvar54571);

//creating new closure instance
void** clo54573 = alloc_clo(lam48554_fptr, 10);

//setting env list
clo54573[1] = car;
clo54573[2] = n;
clo54573[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo54573[4] = take_u45helper;
clo54573[5] = _u45;
clo54573[6] = cons;
clo54573[7] = kont48270;
clo54573[8] = reverse;
clo54573[9] = lst;
clo54573[10] = cdr;
void* f4827648395 = encode_clo(clo54573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4827648395;
arg_buffer[3] = n;
arg_buffer[4] = a4817048394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam48558_fptr() // lam48558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48559 = arg_buffer[1];
//reading env and args
void* a4817848409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48277 = (decode_clo(env48559))[4];
//not do dummy comment
void* lst = (decode_clo(env48559))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env48559))[2];
//not do dummy comment
void* n = (decode_clo(env48559))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont48277;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4817848409;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48558 = encode_clo(alloc_clo(lam48558_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48560 = arg_buffer[1];
//reading env and args
void* kont48277 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54575 = alloc_clo(lam48558_fptr, 4);

//setting env list
clo54575[1] = n;
clo54575[2] = take_u45helper;
clo54575[3] = lst;
clo54575[4] = kont48277;
void* f4827848408 = encode_clo(clo54575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4827848408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam48562_fptr() // lam48562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48563 = arg_buffer[1];
//reading env and args
void* a4818348417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48279 = (decode_clo(env48563))[3];
//not do dummy comment
void* a4818148413 = (decode_clo(env48563))[2];
//not do dummy comment
void* _u43 = (decode_clo(env48563))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont48279;
arg_buffer[3] = a4818148413;
arg_buffer[4] = a4818348417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48562 = encode_clo(alloc_clo(lam48562_fptr, 0));

void* lam48564_fptr() // lam48564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48565 = arg_buffer[1];
//reading env and args
void* a4818248415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48279 = (decode_clo(env48565))[4];
//not do dummy comment
void* length = (decode_clo(env48565))[3];
//not do dummy comment
void* a4818148413 = (decode_clo(env48565))[2];
//not do dummy comment
void* _u43 = (decode_clo(env48565))[1];

//creating new closure instance
void** clo54577 = alloc_clo(lam48562_fptr, 3);

//setting env list
clo54577[1] = _u43;
clo54577[2] = a4818148413;
clo54577[3] = kont48279;
void* f4828048416 = encode_clo(clo54577);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4828048416;
arg_buffer[3] = a4818248415;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48564 = encode_clo(alloc_clo(lam48564_fptr, 0));

void* lam48567_fptr() // lam48567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48568 = arg_buffer[1];
//reading env and args
void* a4817948411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48568))[5];
//not do dummy comment
void* kont48279 = (decode_clo(env48568))[4];
//not do dummy comment
void* lst = (decode_clo(env48568))[3];
//not do dummy comment
void* length = (decode_clo(env48568))[2];
//not do dummy comment
void* _u43 = (decode_clo(env48568))[1];

//if-clause
bool if_guard54578 = is_true(a4817948411);
if(if_guard54578)
{
mpz_t* mpzvar54579 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54579, "0", 10);
void* x4818048412 = encode_mpz(mpzvar54579);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48279);
arg_buffer[2] = x4818048412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48279))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar54580 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54580, "1", 10);
void* a4818148413 = encode_mpz(mpzvar54580);

//creating new closure instance
void** clo54582 = alloc_clo(lam48564_fptr, 4);

//setting env list
clo54582[1] = _u43;
clo54582[2] = a4818148413;
clo54582[3] = length;
clo54582[4] = kont48279;
void* f4828148414 = encode_clo(clo54582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4828148414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48567 = encode_clo(alloc_clo(lam48567_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48569 = arg_buffer[1];
//reading env and args
void* kont48279 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54584 = alloc_clo(lam48567_fptr, 5);

//setting env list
clo54584[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo54584[2] = length;
clo54584[3] = lst;
clo54584[4] = kont48279;
clo54584[5] = cdr;
void* f4828248410 = encode_clo(clo54584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4828248410;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam48570_fptr() // lam48570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48571 = arg_buffer[1];
//reading env and args
void* x4818548421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48283 = (decode_clo(env48571))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48283);
arg_buffer[2] = x4818548421;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48283))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48570 = encode_clo(alloc_clo(lam48570_fptr, 0));

void* lam48572_fptr() // lam48572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48573 = arg_buffer[1];
//reading env and args
void* a4818948429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4818748425 = (decode_clo(env48573))[3];
//not do dummy comment
void* kont48283 = (decode_clo(env48573))[2];
//not do dummy comment
void* cons = (decode_clo(env48573))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48283;
arg_buffer[3] = a4818748425;
arg_buffer[4] = a4818948429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48572 = encode_clo(alloc_clo(lam48572_fptr, 0));

void* lam48574_fptr() // lam48574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48575 = arg_buffer[1];
//reading env and args
void* a4818848427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4818748425 = (decode_clo(env48575))[5];
//not do dummy comment
void* map = (decode_clo(env48575))[4];
//not do dummy comment
void* kont48283 = (decode_clo(env48575))[3];
//not do dummy comment
void* proc = (decode_clo(env48575))[2];
//not do dummy comment
void* cons = (decode_clo(env48575))[1];

//creating new closure instance
void** clo54586 = alloc_clo(lam48572_fptr, 3);

//setting env list
clo54586[1] = cons;
clo54586[2] = kont48283;
clo54586[3] = a4818748425;
void* f4828548428 = encode_clo(clo54586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4828548428;
arg_buffer[3] = proc;
arg_buffer[4] = a4818848427;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a4818748425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48577))[6];
//not do dummy comment
void* lst = (decode_clo(env48577))[5];
//not do dummy comment
void* map = (decode_clo(env48577))[4];
//not do dummy comment
void* kont48283 = (decode_clo(env48577))[3];
//not do dummy comment
void* proc = (decode_clo(env48577))[2];
//not do dummy comment
void* cons = (decode_clo(env48577))[1];

//creating new closure instance
void** clo54588 = alloc_clo(lam48574_fptr, 5);

//setting env list
clo54588[1] = cons;
clo54588[2] = proc;
clo54588[3] = kont48283;
clo54588[4] = map;
clo54588[5] = a4818748425;
void* f4828648426 = encode_clo(clo54588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4828648426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48576 = encode_clo(alloc_clo(lam48576_fptr, 0));

void* lam48578_fptr() // lam48578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48579 = arg_buffer[1];
//reading env and args
void* a4818648423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48579))[6];
//not do dummy comment
void* lst = (decode_clo(env48579))[5];
//not do dummy comment
void* map = (decode_clo(env48579))[4];
//not do dummy comment
void* kont48283 = (decode_clo(env48579))[3];
//not do dummy comment
void* proc = (decode_clo(env48579))[2];
//not do dummy comment
void* cons = (decode_clo(env48579))[1];

//creating new closure instance
void** clo54590 = alloc_clo(lam48576_fptr, 6);

//setting env list
clo54590[1] = cons;
clo54590[2] = proc;
clo54590[3] = kont48283;
clo54590[4] = map;
clo54590[5] = lst;
clo54590[6] = cdr;
void* f4828748424 = encode_clo(clo54590);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4828748424;
arg_buffer[3] = a4818648423;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48578 = encode_clo(alloc_clo(lam48578_fptr, 0));

void* lam48580_fptr() // lam48580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48581 = arg_buffer[1];
//reading env and args
void* a4818448419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48581))[8];
//not do dummy comment
void* map = (decode_clo(env48581))[7];
//not do dummy comment
void* kont48283 = (decode_clo(env48581))[6];
//not do dummy comment
void* proc = (decode_clo(env48581))[5];
//not do dummy comment
void* car = (decode_clo(env48581))[4];
//not do dummy comment
void* cons = (decode_clo(env48581))[3];
//not do dummy comment
void* list = (decode_clo(env48581))[2];
//not do dummy comment
void* cdr = (decode_clo(env48581))[1];

//if-clause
bool if_guard54591 = is_true(a4818448419);
if(if_guard54591)
{

//creating new closure instance
void** clo54593 = alloc_clo(lam48570_fptr, 1);

//setting env list
clo54593[1] = kont48283;
void* f4828448420 = encode_clo(clo54593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4828448420;
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
void** clo54595 = alloc_clo(lam48578_fptr, 6);

//setting env list
clo54595[1] = cons;
clo54595[2] = proc;
clo54595[3] = kont48283;
clo54595[4] = map;
clo54595[5] = lst;
clo54595[6] = cdr;
void* f4828848422 = encode_clo(clo54595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4828848422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48580 = encode_clo(alloc_clo(lam48580_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48582 = arg_buffer[1];
//reading env and args
void* kont48283 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54597 = alloc_clo(lam48580_fptr, 8);

//setting env list
clo54597[1] = cdr;
clo54597[2] = list;
clo54597[3] = cons;
clo54597[4] = car;
clo54597[5] = proc;
clo54597[6] = kont48283;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo54597[7] = map;
clo54597[8] = lst;
void* f4828948418 = encode_clo(clo54597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4828948418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam48583_fptr() // lam48583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48584 = arg_buffer[1];
//reading env and args
void* x4819148433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48290 = (decode_clo(env48584))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48290);
arg_buffer[2] = x4819148433;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48290))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48583 = encode_clo(alloc_clo(lam48583_fptr, 0));

void* lam48585_fptr() // lam48585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48586 = arg_buffer[1];
//reading env and args
void* a4819648443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4819448439 = (decode_clo(env48586))[3];
//not do dummy comment
void* kont48290 = (decode_clo(env48586))[2];
//not do dummy comment
void* cons = (decode_clo(env48586))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48290;
arg_buffer[3] = a4819448439;
arg_buffer[4] = a4819648443;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48585 = encode_clo(alloc_clo(lam48585_fptr, 0));

void* lam48587_fptr() // lam48587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48588 = arg_buffer[1];
//reading env and args
void* a4819548441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4819448439 = (decode_clo(env48588))[5];
//not do dummy comment
void* op = (decode_clo(env48588))[4];
//not do dummy comment
void* cons = (decode_clo(env48588))[3];
//not do dummy comment
void* filter = (decode_clo(env48588))[2];
//not do dummy comment
void* kont48290 = (decode_clo(env48588))[1];

//creating new closure instance
void** clo54599 = alloc_clo(lam48585_fptr, 3);

//setting env list
clo54599[1] = cons;
clo54599[2] = kont48290;
clo54599[3] = a4819448439;
void* f4829248442 = encode_clo(clo54599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4829248442;
arg_buffer[3] = op;
arg_buffer[4] = a4819548441;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48587 = encode_clo(alloc_clo(lam48587_fptr, 0));

void* lam48589_fptr() // lam48589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48590 = arg_buffer[1];
//reading env and args
void* a4819448439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48590))[6];
//not do dummy comment
void* lst = (decode_clo(env48590))[5];
//not do dummy comment
void* op = (decode_clo(env48590))[4];
//not do dummy comment
void* cons = (decode_clo(env48590))[3];
//not do dummy comment
void* filter = (decode_clo(env48590))[2];
//not do dummy comment
void* kont48290 = (decode_clo(env48590))[1];

//creating new closure instance
void** clo54601 = alloc_clo(lam48587_fptr, 5);

//setting env list
clo54601[1] = kont48290;
clo54601[2] = filter;
clo54601[3] = cons;
clo54601[4] = op;
clo54601[5] = a4819448439;
void* f4829348440 = encode_clo(clo54601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4829348440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48589 = encode_clo(alloc_clo(lam48589_fptr, 0));

void* lam48591_fptr() // lam48591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48592 = arg_buffer[1];
//reading env and args
void* a4819748445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env48592))[3];
//not do dummy comment
void* filter = (decode_clo(env48592))[2];
//not do dummy comment
void* kont48290 = (decode_clo(env48592))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont48290;
arg_buffer[3] = op;
arg_buffer[4] = a4819748445;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48591 = encode_clo(alloc_clo(lam48591_fptr, 0));

void* lam48593_fptr() // lam48593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48594 = arg_buffer[1];
//reading env and args
void* a4819348437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48594))[7];
//not do dummy comment
void* lst = (decode_clo(env48594))[6];
//not do dummy comment
void* op = (decode_clo(env48594))[5];
//not do dummy comment
void* cons = (decode_clo(env48594))[4];
//not do dummy comment
void* filter = (decode_clo(env48594))[3];
//not do dummy comment
void* car = (decode_clo(env48594))[2];
//not do dummy comment
void* kont48290 = (decode_clo(env48594))[1];

//if-clause
bool if_guard54602 = is_true(a4819348437);
if(if_guard54602)
{

//creating new closure instance
void** clo54604 = alloc_clo(lam48589_fptr, 6);

//setting env list
clo54604[1] = kont48290;
clo54604[2] = filter;
clo54604[3] = cons;
clo54604[4] = op;
clo54604[5] = lst;
clo54604[6] = cdr;
void* f4829448438 = encode_clo(clo54604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4829448438;
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
void** clo54606 = alloc_clo(lam48591_fptr, 3);

//setting env list
clo54606[1] = kont48290;
clo54606[2] = filter;
clo54606[3] = op;
void* f4829548444 = encode_clo(clo54606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4829548444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48593 = encode_clo(alloc_clo(lam48593_fptr, 0));

void* lam48595_fptr() // lam48595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48596 = arg_buffer[1];
//reading env and args
void* a4819248435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48596))[7];
//not do dummy comment
void* lst = (decode_clo(env48596))[6];
//not do dummy comment
void* op = (decode_clo(env48596))[5];
//not do dummy comment
void* cons = (decode_clo(env48596))[4];
//not do dummy comment
void* filter = (decode_clo(env48596))[3];
//not do dummy comment
void* car = (decode_clo(env48596))[2];
//not do dummy comment
void* kont48290 = (decode_clo(env48596))[1];

//creating new closure instance
void** clo54608 = alloc_clo(lam48593_fptr, 7);

//setting env list
clo54608[1] = kont48290;
clo54608[2] = car;
clo54608[3] = filter;
clo54608[4] = cons;
clo54608[5] = op;
clo54608[6] = lst;
clo54608[7] = cdr;
void* f4829648436 = encode_clo(clo54608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4829648436;
arg_buffer[3] = a4819248435;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a4819048431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env48598))[8];
//not do dummy comment
void* op = (decode_clo(env48598))[7];
//not do dummy comment
void* cons = (decode_clo(env48598))[6];
//not do dummy comment
void* list = (decode_clo(env48598))[5];
//not do dummy comment
void* cdr = (decode_clo(env48598))[4];
//not do dummy comment
void* filter = (decode_clo(env48598))[3];
//not do dummy comment
void* car = (decode_clo(env48598))[2];
//not do dummy comment
void* kont48290 = (decode_clo(env48598))[1];

//if-clause
bool if_guard54609 = is_true(a4819048431);
if(if_guard54609)
{

//creating new closure instance
void** clo54611 = alloc_clo(lam48583_fptr, 1);

//setting env list
clo54611[1] = kont48290;
void* f4829148432 = encode_clo(clo54611);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4829148432;
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
void** clo54613 = alloc_clo(lam48595_fptr, 7);

//setting env list
clo54613[1] = kont48290;
clo54613[2] = car;
clo54613[3] = filter;
clo54613[4] = cons;
clo54613[5] = op;
clo54613[6] = lst;
clo54613[7] = cdr;
void* f4829748434 = encode_clo(clo54613);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4829748434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48597 = encode_clo(alloc_clo(lam48597_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48599 = arg_buffer[1];
//reading env and args
void* kont48290 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54615 = alloc_clo(lam48597_fptr, 8);

//setting env list
clo54615[1] = kont48290;
clo54615[2] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo54615[3] = filter;
clo54615[4] = cdr;
clo54615[5] = list;
clo54615[6] = cons;
clo54615[7] = op;
clo54615[8] = lst;
void* f4829848430 = encode_clo(clo54615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4829848430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam48600_fptr() // lam48600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48601 = arg_buffer[1];
//reading env and args
void* a4820248453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env48601))[3];
//not do dummy comment
void* kont48299 = (decode_clo(env48601))[2];
//not do dummy comment
void* a4820048450 = (decode_clo(env48601))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont48299;
arg_buffer[3] = a4820048450;
arg_buffer[4] = a4820248453;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48600 = encode_clo(alloc_clo(lam48600_fptr, 0));

void* lam48603_fptr() // lam48603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48604 = arg_buffer[1];
//reading env and args
void* a4820048450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env48604))[4];
//not do dummy comment
void* kont48299 = (decode_clo(env48604))[3];
//not do dummy comment
void* n = (decode_clo(env48604))[2];
//not do dummy comment
void* _u45 = (decode_clo(env48604))[1];
mpz_t* mpzvar54616 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54616, "1", 10);
void* a4820148451 = encode_mpz(mpzvar54616);

//creating new closure instance
void** clo54618 = alloc_clo(lam48600_fptr, 3);

//setting env list
clo54618[1] = a4820048450;
clo54618[2] = kont48299;
clo54618[3] = drop;
void* f4830048452 = encode_clo(clo54618);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4830048452;
arg_buffer[3] = n;
arg_buffer[4] = a4820148451;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a4819948448 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48606))[6];
//not do dummy comment
void* kont48299 = (decode_clo(env48606))[5];
//not do dummy comment
void* n = (decode_clo(env48606))[4];
//not do dummy comment
void* _u45 = (decode_clo(env48606))[3];
//not do dummy comment
void* lst = (decode_clo(env48606))[2];
//not do dummy comment
void* drop = (decode_clo(env48606))[1];

//if-clause
bool if_guard54619 = is_true(a4819948448);
if(if_guard54619)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48299);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48299))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54621 = alloc_clo(lam48603_fptr, 4);

//setting env list
clo54621[1] = _u45;
clo54621[2] = n;
clo54621[3] = kont48299;
clo54621[4] = drop;
void* f4830148449 = encode_clo(clo54621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4830148449;
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

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48608 = arg_buffer[1];
//reading env and args
void* kont48299 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar54622 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54622, "0", 10);
void* a4819848446 = encode_mpz(mpzvar54622);

//creating new closure instance
void** clo54624 = alloc_clo(lam48605_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo54624[1] = drop;
clo54624[2] = lst;
clo54624[3] = _u45;
clo54624[4] = n;
clo54624[5] = kont48299;
clo54624[6] = cdr;
void* f4830248447 = encode_clo(clo54624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4830248447;
arg_buffer[3] = n;
arg_buffer[4] = a4819848446;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam48609_fptr() // lam48609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48610 = arg_buffer[1];
//reading env and args
void* a4820648461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4820448457 = (decode_clo(env48610))[3];
//not do dummy comment
void* kont48303 = (decode_clo(env48610))[2];
//not do dummy comment
void* proc = (decode_clo(env48610))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont48303;
arg_buffer[3] = a4820448457;
arg_buffer[4] = a4820648461;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48609 = encode_clo(alloc_clo(lam48609_fptr, 0));

void* lam48611_fptr() // lam48611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48612 = arg_buffer[1];
//reading env and args
void* a4820548459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont48303 = (decode_clo(env48612))[5];
//not do dummy comment
void* foldr = (decode_clo(env48612))[4];
//not do dummy comment
void* a4820448457 = (decode_clo(env48612))[3];
//not do dummy comment
void* proc = (decode_clo(env48612))[2];
//not do dummy comment
void* acc = (decode_clo(env48612))[1];

//creating new closure instance
void** clo54626 = alloc_clo(lam48609_fptr, 3);

//setting env list
clo54626[1] = proc;
clo54626[2] = kont48303;
clo54626[3] = a4820448457;
void* f4830448460 = encode_clo(clo54626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4830448460;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4820548459;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48611 = encode_clo(alloc_clo(lam48611_fptr, 0));

void* lam48613_fptr() // lam48613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48614 = arg_buffer[1];
//reading env and args
void* a4820448457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48614))[6];
//not do dummy comment
void* kont48303 = (decode_clo(env48614))[5];
//not do dummy comment
void* foldr = (decode_clo(env48614))[4];
//not do dummy comment
void* lst = (decode_clo(env48614))[3];
//not do dummy comment
void* proc = (decode_clo(env48614))[2];
//not do dummy comment
void* acc = (decode_clo(env48614))[1];

//creating new closure instance
void** clo54628 = alloc_clo(lam48611_fptr, 5);

//setting env list
clo54628[1] = acc;
clo54628[2] = proc;
clo54628[3] = a4820448457;
clo54628[4] = foldr;
clo54628[5] = kont48303;
void* f4830548458 = encode_clo(clo54628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4830548458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48613 = encode_clo(alloc_clo(lam48613_fptr, 0));

void* lam48615_fptr() // lam48615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48616 = arg_buffer[1];
//reading env and args
void* a4820348455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48616))[7];
//not do dummy comment
void* kont48303 = (decode_clo(env48616))[6];
//not do dummy comment
void* car = (decode_clo(env48616))[5];
//not do dummy comment
void* foldr = (decode_clo(env48616))[4];
//not do dummy comment
void* lst = (decode_clo(env48616))[3];
//not do dummy comment
void* proc = (decode_clo(env48616))[2];
//not do dummy comment
void* acc = (decode_clo(env48616))[1];

//if-clause
bool if_guard54629 = is_true(a4820348455);
if(if_guard54629)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48303);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48303))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54631 = alloc_clo(lam48613_fptr, 6);

//setting env list
clo54631[1] = acc;
clo54631[2] = proc;
clo54631[3] = lst;
clo54631[4] = foldr;
clo54631[5] = kont48303;
clo54631[6] = cdr;
void* f4830648456 = encode_clo(clo54631);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4830648456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48615 = encode_clo(alloc_clo(lam48615_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48617 = arg_buffer[1];
//reading env and args
void* kont48303 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54633 = alloc_clo(lam48615_fptr, 7);

//setting env list
clo54633[1] = acc;
clo54633[2] = proc;
clo54633[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo54633[4] = foldr;
clo54633[5] = car;
clo54633[6] = kont48303;
clo54633[7] = cdr;
void* f4830748454 = encode_clo(clo54633);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4830748454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam48618_fptr() // lam48618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48619 = arg_buffer[1];
//reading env and args
void* a4821048469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4820848465 = (decode_clo(env48619))[3];
//not do dummy comment
void* cons = (decode_clo(env48619))[2];
//not do dummy comment
void* kont48308 = (decode_clo(env48619))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont48308;
arg_buffer[3] = a4820848465;
arg_buffer[4] = a4821048469;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48618 = encode_clo(alloc_clo(lam48618_fptr, 0));

void* lam48620_fptr() // lam48620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48621 = arg_buffer[1];
//reading env and args
void* a4820948467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env48621))[5];
//not do dummy comment
void* cons = (decode_clo(env48621))[4];
//not do dummy comment
void* kont48308 = (decode_clo(env48621))[3];
//not do dummy comment
void* a4820848465 = (decode_clo(env48621))[2];
//not do dummy comment
void* lst2 = (decode_clo(env48621))[1];

//creating new closure instance
void** clo54635 = alloc_clo(lam48618_fptr, 3);

//setting env list
clo54635[1] = kont48308;
clo54635[2] = cons;
clo54635[3] = a4820848465;
void* f4830948468 = encode_clo(clo54635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4830948468;
arg_buffer[3] = a4820948467;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48620 = encode_clo(alloc_clo(lam48620_fptr, 0));

void* lam48622_fptr() // lam48622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48623 = arg_buffer[1];
//reading env and args
void* a4820848465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48623))[6];
//not do dummy comment
void* append = (decode_clo(env48623))[5];
//not do dummy comment
void* lst2 = (decode_clo(env48623))[4];
//not do dummy comment
void* lst1 = (decode_clo(env48623))[3];
//not do dummy comment
void* cons = (decode_clo(env48623))[2];
//not do dummy comment
void* kont48308 = (decode_clo(env48623))[1];

//creating new closure instance
void** clo54637 = alloc_clo(lam48620_fptr, 5);

//setting env list
clo54637[1] = lst2;
clo54637[2] = a4820848465;
clo54637[3] = kont48308;
clo54637[4] = cons;
clo54637[5] = append;
void* f4831048466 = encode_clo(clo54637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4831048466;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48622 = encode_clo(alloc_clo(lam48622_fptr, 0));

void* lam48624_fptr() // lam48624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48625 = arg_buffer[1];
//reading env and args
void* a4820748463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env48625))[7];
//not do dummy comment
void* append = (decode_clo(env48625))[6];
//not do dummy comment
void* lst2 = (decode_clo(env48625))[5];
//not do dummy comment
void* cons = (decode_clo(env48625))[4];
//not do dummy comment
void* kont48308 = (decode_clo(env48625))[3];
//not do dummy comment
void* lst1 = (decode_clo(env48625))[2];
//not do dummy comment
void* car = (decode_clo(env48625))[1];

//if-clause
bool if_guard54638 = is_true(a4820748463);
if(if_guard54638)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48308);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48308))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54640 = alloc_clo(lam48622_fptr, 6);

//setting env list
clo54640[1] = kont48308;
clo54640[2] = cons;
clo54640[3] = lst1;
clo54640[4] = lst2;
clo54640[5] = append;
clo54640[6] = cdr;
void* f4831148464 = encode_clo(clo54640);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4831148464;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam48624 = encode_clo(alloc_clo(lam48624_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48626 = arg_buffer[1];
//reading env and args
void* kont48308 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54642 = alloc_clo(lam48624_fptr, 7);

//setting env list
clo54642[1] = car;
clo54642[2] = lst1;
clo54642[3] = kont48308;
clo54642[4] = cons;
clo54642[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo54642[6] = append;
clo54642[7] = cdr;
void* f4831248462 = encode_clo(clo54642);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4831248462;
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
void* _48627 = arg_buffer[1];
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

void* kont4831348470 = prim_car(lst);
void* lst48471 = prim_cdr(lst);
void* x4821148472 = apply_prim_hash(lst48471);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4831348470);
arg_buffer[2] = x4821148472;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4831348470))[0]);
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
void* _48628 = arg_buffer[1];
//reading env and args
void* kont48315 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4821248473 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48315);
arg_buffer[2] = x4821248473;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48315))[0]);
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
void* _48629 = arg_buffer[1];
//reading env and args
void* kont48316 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4821348474 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48316);
arg_buffer[2] = x4821348474;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48316))[0]);
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
void* _48630 = arg_buffer[1];
//reading env and args
void* kont48317 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4821448475 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48317);
arg_buffer[2] = x4821448475;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48317))[0]);
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
void* _48631 = arg_buffer[1];
//reading env and args
void* kont48318 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4821548476 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont48318);
arg_buffer[2] = x4821548476;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont48318))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_u45foldl_fptr() // call-foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48633 = arg_buffer[1];
//reading env and args
void* kont48319 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54643 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54643, "0", 10);
void* a4821648477 = encode_mpz(mpzvar54643);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont48319;
arg_buffer[3] = _u43;
arg_buffer[4] = a4821648477;
arg_buffer[5] = lst;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call_u45foldl = encode_clo(alloc_clo(call_u45foldl_fptr, 0));

void* lam48634_fptr() // lam48634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env48635 = arg_buffer[1];
//reading env and args
void* a4822148483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* call_u45foldl = (decode_clo(env48635))[2];
//not do dummy comment
void* kont48320 = (decode_clo(env48635))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call_u45foldl);
arg_buffer[2] = kont48320;
arg_buffer[3] = a4822148483;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam48634 = encode_clo(alloc_clo(lam48634_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _48640 = arg_buffer[1];
//reading env and args
void* kont48320 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar54644 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54644, "1", 10);
void* a4821748478 = encode_mpz(mpzvar54644);
mpz_t* mpzvar54645 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54645, "2", 10);
void* a4821848479 = encode_mpz(mpzvar54645);
mpz_t* mpzvar54646 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54646, "3", 10);
void* a4821948480 = encode_mpz(mpzvar54646);
mpz_t* mpzvar54647 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54647, "4", 10);
void* a4822048481 = encode_mpz(mpzvar54647);

//creating new closure instance
void** clo54649 = alloc_clo(lam48634_fptr, 2);

//setting env list
clo54649[1] = kont48320;
clo54649[2] = call_u45foldl;
void* f4832148482 = encode_clo(clo54649);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4832148482;
arg_buffer[3] = a4821748478;
arg_buffer[4] = a4821848479;
arg_buffer[5] = a4821948480;
arg_buffer[6] = a4822048481;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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

