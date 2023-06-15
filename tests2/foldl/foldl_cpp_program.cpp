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
void* _31502 = arg_buffer[1];
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

void* kont3123931339 = prim_car(lst);
void* lst31340 = prim_cdr(lst);
void* x3114931341 = apply_prim__u43(lst31340);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3123931339);
arg_buffer[2] = x3114931341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3123931339))[0]);
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
void* _31503 = arg_buffer[1];
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

void* kont3124131342 = prim_car(lst);
void* lst31343 = prim_cdr(lst);
void* x3115031344 = apply_prim__u45(lst31343);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3124131342);
arg_buffer[2] = x3115031344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3124131342))[0]);
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
void* _31504 = arg_buffer[1];
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

void* kont3124331345 = prim_car(lst);
void* lst31346 = prim_cdr(lst);
void* x3115131347 = apply_prim__u42(lst31346);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3124331345);
arg_buffer[2] = x3115131347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3124331345))[0]);
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
void* _31505 = arg_buffer[1];
//reading env and args
void* kont31245 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3115231348 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31245);
arg_buffer[2] = x3115231348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31245))[0]);
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
void* _31506 = arg_buffer[1];
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

void* kont3124631349 = prim_car(lst);
void* lst31350 = prim_cdr(lst);
void* x3115331351 = apply_prim__u47(lst31350);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3124631349);
arg_buffer[2] = x3115331351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3124631349))[0]);
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
void* _31507 = arg_buffer[1];
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

void* kont3124831352 = prim_car(lst);
void* lst31353 = prim_cdr(lst);
void* x3115431354 = apply_prim__u61(lst31353);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3124831352);
arg_buffer[2] = x3115431354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3124831352))[0]);
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
void* _31508 = arg_buffer[1];
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

void* kont3125031355 = prim_car(lst);
void* lst31356 = prim_cdr(lst);
void* x3115531357 = apply_prim__u62(lst31356);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3125031355);
arg_buffer[2] = x3115531357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3125031355))[0]);
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
void* _31509 = arg_buffer[1];
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

void* kont3125231358 = prim_car(lst);
void* lst31359 = prim_cdr(lst);
void* x3115631360 = apply_prim__u60(lst31359);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3125231358);
arg_buffer[2] = x3115631360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3125231358))[0]);
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
void* _31510 = arg_buffer[1];
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

void* kont3125431361 = prim_car(lst);
void* lst31362 = prim_cdr(lst);
void* x3115731363 = apply_prim__u60_u61(lst31362);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3125431361);
arg_buffer[2] = x3115731363;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3125431361))[0]);
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
void* _31511 = arg_buffer[1];
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

void* kont3125631364 = prim_car(lst);
void* lst31365 = prim_cdr(lst);
void* x3115831366 = apply_prim__u62_u61(lst31365);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3125631364);
arg_buffer[2] = x3115831366;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3125631364))[0]);
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
void* _31512 = arg_buffer[1];
//reading env and args
void* kont31258 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3115931367 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31258);
arg_buffer[2] = x3115931367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31258))[0]);
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
void* _31513 = arg_buffer[1];
//reading env and args
void* kont31259 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3116031368 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31259);
arg_buffer[2] = x3116031368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31259))[0]);
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
void* _31514 = arg_buffer[1];
//reading env and args
void* kont31260 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3116131369 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31260);
arg_buffer[2] = x3116131369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31260))[0]);
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
void* _31515 = arg_buffer[1];
//reading env and args
void* kont31261 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3116231370 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31261);
arg_buffer[2] = x3116231370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31261))[0]);
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
void* _31516 = arg_buffer[1];
//reading env and args
void* kont31262 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3116331371 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31262);
arg_buffer[2] = x3116331371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31262))[0]);
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
void* _31517 = arg_buffer[1];
//reading env and args
void* kont31263 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3116431372 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31263);
arg_buffer[2] = x3116431372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31263))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam31518_fptr() // lam31518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31519 = arg_buffer[1];
//reading env and args
void* a3116731376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31264 = (decode_clo(env31519))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env31519))[2];
//not do dummy comment
void* a3116531373 = (decode_clo(env31519))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31264;
arg_buffer[3] = a3116531373;
arg_buffer[4] = a3116731376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31518 = encode_clo(alloc_clo(lam31518_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31522 = arg_buffer[1];
//reading env and args
void* kont31264 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar39400 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39400, "0", 10);
void* a3116531373 = encode_mpz(mpzvar39400);
mpz_t* mpzvar39401 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39401, "2", 10);
void* a3116631374 = encode_mpz(mpzvar39401);

//creating new closure instance
void** clo39403 = alloc_clo(lam31518_fptr, 3);

//setting env list
clo39403[1] = a3116531373;
clo39403[2] = equal_u63;
clo39403[3] = kont31264;
void* f3126531375 = encode_clo(clo39403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3126531375;
arg_buffer[3] = x;
arg_buffer[4] = a3116631374;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam31523_fptr() // lam31523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31524 = arg_buffer[1];
//reading env and args
void* a3117031380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3116831377 = (decode_clo(env31524))[3];
//not do dummy comment
void* kont31266 = (decode_clo(env31524))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env31524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont31266;
arg_buffer[3] = a3116831377;
arg_buffer[4] = a3117031380;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31523 = encode_clo(alloc_clo(lam31523_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31527 = arg_buffer[1];
//reading env and args
void* kont31266 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar39404 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39404, "1", 10);
void* a3116831377 = encode_mpz(mpzvar39404);
mpz_t* mpzvar39405 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39405, "2", 10);
void* a3116931378 = encode_mpz(mpzvar39405);

//creating new closure instance
void** clo39407 = alloc_clo(lam31523_fptr, 3);

//setting env list
clo39407[1] = equal_u63;
clo39407[2] = kont31266;
clo39407[3] = a3116831377;
void* f3126731379 = encode_clo(clo39407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3126731379;
arg_buffer[3] = x;
arg_buffer[4] = a3116931378;
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
void* _31528 = arg_buffer[1];
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

void* kont3126831381 = prim_car(x);
void* x31382 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3126831381);
arg_buffer[2] = x31382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3126831381))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam31531_fptr() // lam31531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31532 = arg_buffer[1];
//reading env and args
void* a3117631392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31270 = (decode_clo(env31532))[3];
//not do dummy comment
void* x = (decode_clo(env31532))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont31270;
arg_buffer[3] = x;
arg_buffer[4] = a3117631392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31531 = encode_clo(alloc_clo(lam31531_fptr, 0));

void* lam31533_fptr() // lam31533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31534 = arg_buffer[1];
//reading env and args
void* a3117431389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31534))[5];
//not do dummy comment
void* lst = (decode_clo(env31534))[4];
//not do dummy comment
void* kont31270 = (decode_clo(env31534))[3];
//not do dummy comment
void* x = (decode_clo(env31534))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31534))[1];

//if-clause
bool if_guard39408 = is_true(a3117431389);
if(if_guard39408)
{
void* x3117531390 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31270);
arg_buffer[2] = x3117531390;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31270))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39410 = alloc_clo(lam31531_fptr, 3);

//setting env list
clo39410[1] = member_u63;
clo39410[2] = x;
clo39410[3] = kont31270;
void* f3127131391 = encode_clo(clo39410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3127131391;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31533 = encode_clo(alloc_clo(lam31533_fptr, 0));

void* lam31535_fptr() // lam31535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31536 = arg_buffer[1];
//reading env and args
void* a3117331387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31536))[6];
//not do dummy comment
void* lst = (decode_clo(env31536))[5];
//not do dummy comment
void* x = (decode_clo(env31536))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env31536))[3];
//not do dummy comment
void* kont31270 = (decode_clo(env31536))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env31536))[1];

//creating new closure instance
void** clo39412 = alloc_clo(lam31533_fptr, 5);

//setting env list
clo39412[1] = member_u63;
clo39412[2] = x;
clo39412[3] = kont31270;
clo39412[4] = lst;
clo39412[5] = cdr;
void* f3127231388 = encode_clo(clo39412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3127231388;
arg_buffer[3] = a3117331387;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31535 = encode_clo(alloc_clo(lam31535_fptr, 0));

void* lam31537_fptr() // lam31537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31538 = arg_buffer[1];
//reading env and args
void* a3117131384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31538))[7];
//not do dummy comment
void* lst = (decode_clo(env31538))[6];
//not do dummy comment
void* x = (decode_clo(env31538))[5];
//not do dummy comment
void* car = (decode_clo(env31538))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env31538))[3];
//not do dummy comment
void* kont31270 = (decode_clo(env31538))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env31538))[1];

//if-clause
bool if_guard39413 = is_true(a3117131384);
if(if_guard39413)
{
void* x3117231385 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31270);
arg_buffer[2] = x3117231385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31270))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39415 = alloc_clo(lam31535_fptr, 6);

//setting env list
clo39415[1] = equal_u63;
clo39415[2] = kont31270;
clo39415[3] = member_u63;
clo39415[4] = x;
clo39415[5] = lst;
clo39415[6] = cdr;
void* f3127331386 = encode_clo(clo39415);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3127331386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31537 = encode_clo(alloc_clo(lam31537_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31539 = arg_buffer[1];
//reading env and args
void* kont31270 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39417 = alloc_clo(lam31537_fptr, 7);

//setting env list
clo39417[1] = equal_u63;
clo39417[2] = kont31270;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo39417[3] = member_u63;
clo39417[4] = car;
clo39417[5] = x;
clo39417[6] = lst;
clo39417[7] = cdr;
void* f3127431383 = encode_clo(clo39417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3127431383;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam31540_fptr() // lam31540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31541 = arg_buffer[1];
//reading env and args
void* a3118031400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3117931398 = (decode_clo(env31541))[4];
//not do dummy comment
void* fun = (decode_clo(env31541))[3];
//not do dummy comment
void* kont31275 = (decode_clo(env31541))[2];
//not do dummy comment
void* foldl = (decode_clo(env31541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont31275;
arg_buffer[3] = fun;
arg_buffer[4] = a3117931398;
arg_buffer[5] = a3118031400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31540 = encode_clo(alloc_clo(lam31540_fptr, 0));

void* lam31542_fptr() // lam31542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31543 = arg_buffer[1];
//reading env and args
void* a3117931398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31543))[5];
//not do dummy comment
void* lst = (decode_clo(env31543))[4];
//not do dummy comment
void* fun = (decode_clo(env31543))[3];
//not do dummy comment
void* kont31275 = (decode_clo(env31543))[2];
//not do dummy comment
void* foldl = (decode_clo(env31543))[1];

//creating new closure instance
void** clo39419 = alloc_clo(lam31540_fptr, 4);

//setting env list
clo39419[1] = foldl;
clo39419[2] = kont31275;
clo39419[3] = fun;
clo39419[4] = a3117931398;
void* f3127631399 = encode_clo(clo39419);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3127631399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31542 = encode_clo(alloc_clo(lam31542_fptr, 0));

void* lam31544_fptr() // lam31544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31545 = arg_buffer[1];
//reading env and args
void* a3117831396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31545))[6];
//not do dummy comment
void* lst = (decode_clo(env31545))[5];
//not do dummy comment
void* fun = (decode_clo(env31545))[4];
//not do dummy comment
void* acc = (decode_clo(env31545))[3];
//not do dummy comment
void* kont31275 = (decode_clo(env31545))[2];
//not do dummy comment
void* foldl = (decode_clo(env31545))[1];

//creating new closure instance
void** clo39421 = alloc_clo(lam31542_fptr, 5);

//setting env list
clo39421[1] = foldl;
clo39421[2] = kont31275;
clo39421[3] = fun;
clo39421[4] = lst;
clo39421[5] = cdr;
void* f3127731397 = encode_clo(clo39421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3127731397;
arg_buffer[3] = a3117831396;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31544 = encode_clo(alloc_clo(lam31544_fptr, 0));

void* lam31546_fptr() // lam31546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31547 = arg_buffer[1];
//reading env and args
void* a3117731394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31547))[7];
//not do dummy comment
void* lst = (decode_clo(env31547))[6];
//not do dummy comment
void* fun = (decode_clo(env31547))[5];
//not do dummy comment
void* acc = (decode_clo(env31547))[4];
//not do dummy comment
void* foldl = (decode_clo(env31547))[3];
//not do dummy comment
void* kont31275 = (decode_clo(env31547))[2];
//not do dummy comment
void* car = (decode_clo(env31547))[1];

//if-clause
bool if_guard39422 = is_true(a3117731394);
if(if_guard39422)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31275);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31275))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39424 = alloc_clo(lam31544_fptr, 6);

//setting env list
clo39424[1] = foldl;
clo39424[2] = kont31275;
clo39424[3] = acc;
clo39424[4] = fun;
clo39424[5] = lst;
clo39424[6] = cdr;
void* f3127831395 = encode_clo(clo39424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3127831395;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31546 = encode_clo(alloc_clo(lam31546_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31548 = arg_buffer[1];
//reading env and args
void* kont31275 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo39426 = alloc_clo(lam31546_fptr, 7);

//setting env list
clo39426[1] = car;
clo39426[2] = kont31275;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo39426[3] = foldl;
clo39426[4] = acc;
clo39426[5] = fun;
clo39426[6] = lst;
clo39426[7] = cdr;
void* f3127931393 = encode_clo(clo39426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3127931393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam31549_fptr() // lam31549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31550 = arg_buffer[1];
//reading env and args
void* a3118431408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31280 = (decode_clo(env31550))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31550))[2];
//not do dummy comment
void* a3118231404 = (decode_clo(env31550))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31280;
arg_buffer[3] = a3118231404;
arg_buffer[4] = a3118431408;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31549 = encode_clo(alloc_clo(lam31549_fptr, 0));

void* lam31551_fptr() // lam31551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31552 = arg_buffer[1];
//reading env and args
void* a3118331406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31280 = (decode_clo(env31552))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31552))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31552))[3];
//not do dummy comment
void* cons = (decode_clo(env31552))[2];
//not do dummy comment
void* a3118231404 = (decode_clo(env31552))[1];

//creating new closure instance
void** clo39428 = alloc_clo(lam31549_fptr, 3);

//setting env list
clo39428[1] = a3118231404;
clo39428[2] = reverse_u45helper;
clo39428[3] = kont31280;
void* f3128131407 = encode_clo(clo39428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3128131407;
arg_buffer[3] = a3118331406;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31551 = encode_clo(alloc_clo(lam31551_fptr, 0));

void* lam31553_fptr() // lam31553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31554 = arg_buffer[1];
//reading env and args
void* a3118231404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31280 = (decode_clo(env31554))[6];
//not do dummy comment
void* lst = (decode_clo(env31554))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31554))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31554))[3];
//not do dummy comment
void* car = (decode_clo(env31554))[2];
//not do dummy comment
void* cons = (decode_clo(env31554))[1];

//creating new closure instance
void** clo39430 = alloc_clo(lam31551_fptr, 5);

//setting env list
clo39430[1] = a3118231404;
clo39430[2] = cons;
clo39430[3] = lst2;
clo39430[4] = reverse_u45helper;
clo39430[5] = kont31280;
void* f3128231405 = encode_clo(clo39430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3128231405;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31553 = encode_clo(alloc_clo(lam31553_fptr, 0));

void* lam31555_fptr() // lam31555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31556 = arg_buffer[1];
//reading env and args
void* a3118131402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31556))[7];
//not do dummy comment
void* kont31280 = (decode_clo(env31556))[6];
//not do dummy comment
void* lst = (decode_clo(env31556))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31556))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31556))[3];
//not do dummy comment
void* car = (decode_clo(env31556))[2];
//not do dummy comment
void* cons = (decode_clo(env31556))[1];

//if-clause
bool if_guard39431 = is_true(a3118131402);
if(if_guard39431)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31280);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31280))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39433 = alloc_clo(lam31553_fptr, 6);

//setting env list
clo39433[1] = cons;
clo39433[2] = car;
clo39433[3] = lst2;
clo39433[4] = reverse_u45helper;
clo39433[5] = lst;
clo39433[6] = kont31280;
void* f3128331403 = encode_clo(clo39433);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3128331403;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31555 = encode_clo(alloc_clo(lam31555_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31557 = arg_buffer[1];
//reading env and args
void* kont31280 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39435 = alloc_clo(lam31555_fptr, 7);

//setting env list
clo39435[1] = cons;
clo39435[2] = car;
clo39435[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo39435[4] = reverse_u45helper;
clo39435[5] = lst;
clo39435[6] = kont31280;
clo39435[7] = cdr;
void* f3128431401 = encode_clo(clo39435);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3128431401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam31558_fptr() // lam31558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31559 = arg_buffer[1];
//reading env and args
void* a3118531410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31559))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31559))[2];
//not do dummy comment
void* kont31285 = (decode_clo(env31559))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont31285;
arg_buffer[3] = lst;
arg_buffer[4] = a3118531410;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31558 = encode_clo(alloc_clo(lam31558_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31560 = arg_buffer[1];
//reading env and args
void* kont31285 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo39437 = alloc_clo(lam31558_fptr, 3);

//setting env list
clo39437[1] = kont31285;
clo39437[2] = reverse_u45helper;
clo39437[3] = lst;
void* f3128631409 = encode_clo(clo39437);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3128631409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam31561_fptr() // lam31561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31562 = arg_buffer[1];
//reading env and args
void* x3118831415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31287 = (decode_clo(env31562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31287);
arg_buffer[2] = x3118831415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31287))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31561 = encode_clo(alloc_clo(lam31561_fptr, 0));

void* lam31563_fptr() // lam31563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31564 = arg_buffer[1];
//reading env and args
void* a3119331424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31287 = (decode_clo(env31564))[4];
//not do dummy comment
void* a3118931417 = (decode_clo(env31564))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31564))[2];
//not do dummy comment
void* a3119131420 = (decode_clo(env31564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31287;
arg_buffer[3] = a3118931417;
arg_buffer[4] = a3119131420;
arg_buffer[5] = a3119331424;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31563 = encode_clo(alloc_clo(lam31563_fptr, 0));

void* lam31565_fptr() // lam31565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31566 = arg_buffer[1];
//reading env and args
void* a3119231422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31287 = (decode_clo(env31566))[6];
//not do dummy comment
void* a3118931417 = (decode_clo(env31566))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env31566))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31566))[3];
//not do dummy comment
void* a3119131420 = (decode_clo(env31566))[2];
//not do dummy comment
void* cons = (decode_clo(env31566))[1];

//creating new closure instance
void** clo39439 = alloc_clo(lam31563_fptr, 4);

//setting env list
clo39439[1] = a3119131420;
clo39439[2] = take_u45helper;
clo39439[3] = a3118931417;
clo39439[4] = kont31287;
void* f3128931423 = encode_clo(clo39439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3128931423;
arg_buffer[3] = a3119231422;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31565 = encode_clo(alloc_clo(lam31565_fptr, 0));

void* lam31567_fptr() // lam31567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31568 = arg_buffer[1];
//reading env and args
void* a3119131420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31568))[7];
//not do dummy comment
void* kont31287 = (decode_clo(env31568))[6];
//not do dummy comment
void* a3118931417 = (decode_clo(env31568))[5];
//not do dummy comment
void* car = (decode_clo(env31568))[4];
//not do dummy comment
void* cons = (decode_clo(env31568))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31568))[2];
//not do dummy comment
void* lst2 = (decode_clo(env31568))[1];

//creating new closure instance
void** clo39441 = alloc_clo(lam31565_fptr, 6);

//setting env list
clo39441[1] = cons;
clo39441[2] = a3119131420;
clo39441[3] = lst2;
clo39441[4] = take_u45helper;
clo39441[5] = a3118931417;
clo39441[6] = kont31287;
void* f3129031421 = encode_clo(clo39441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3129031421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31567 = encode_clo(alloc_clo(lam31567_fptr, 0));

void* lam31570_fptr() // lam31570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31571 = arg_buffer[1];
//reading env and args
void* a3118931417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31571))[8];
//not do dummy comment
void* kont31287 = (decode_clo(env31571))[7];
//not do dummy comment
void* cons = (decode_clo(env31571))[6];
//not do dummy comment
void* _u45 = (decode_clo(env31571))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env31571))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31571))[3];
//not do dummy comment
void* n = (decode_clo(env31571))[2];
//not do dummy comment
void* car = (decode_clo(env31571))[1];
mpz_t* mpzvar39442 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39442, "1", 10);
void* a3119031418 = encode_mpz(mpzvar39442);

//creating new closure instance
void** clo39444 = alloc_clo(lam31567_fptr, 7);

//setting env list
clo39444[1] = lst2;
clo39444[2] = take_u45helper;
clo39444[3] = cons;
clo39444[4] = car;
clo39444[5] = a3118931417;
clo39444[6] = kont31287;
clo39444[7] = lst;
void* f3129131419 = encode_clo(clo39444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3129131419;
arg_buffer[3] = n;
arg_buffer[4] = a3119031418;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31570 = encode_clo(alloc_clo(lam31570_fptr, 0));

void* lam31572_fptr() // lam31572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31573 = arg_buffer[1];
//reading env and args
void* a3118731413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31573))[10];
//not do dummy comment
void* lst = (decode_clo(env31573))[9];
//not do dummy comment
void* reverse = (decode_clo(env31573))[8];
//not do dummy comment
void* kont31287 = (decode_clo(env31573))[7];
//not do dummy comment
void* cons = (decode_clo(env31573))[6];
//not do dummy comment
void* _u45 = (decode_clo(env31573))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env31573))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31573))[3];
//not do dummy comment
void* n = (decode_clo(env31573))[2];
//not do dummy comment
void* car = (decode_clo(env31573))[1];

//if-clause
bool if_guard39445 = is_true(a3118731413);
if(if_guard39445)
{

//creating new closure instance
void** clo39447 = alloc_clo(lam31561_fptr, 1);

//setting env list
clo39447[1] = kont31287;
void* f3128831414 = encode_clo(clo39447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3128831414;
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
void** clo39449 = alloc_clo(lam31570_fptr, 8);

//setting env list
clo39449[1] = car;
clo39449[2] = n;
clo39449[3] = lst2;
clo39449[4] = take_u45helper;
clo39449[5] = _u45;
clo39449[6] = cons;
clo39449[7] = kont31287;
clo39449[8] = lst;
void* f3129231416 = encode_clo(clo39449);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3129231416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31572 = encode_clo(alloc_clo(lam31572_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31575 = arg_buffer[1];
//reading env and args
void* kont31287 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar39450 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39450, "0", 10);
void* a3118631411 = encode_mpz(mpzvar39450);

//creating new closure instance
void** clo39452 = alloc_clo(lam31572_fptr, 10);

//setting env list
clo39452[1] = car;
clo39452[2] = n;
clo39452[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo39452[4] = take_u45helper;
clo39452[5] = _u45;
clo39452[6] = cons;
clo39452[7] = kont31287;
clo39452[8] = reverse;
clo39452[9] = lst;
clo39452[10] = cdr;
void* f3129331412 = encode_clo(clo39452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3129331412;
arg_buffer[3] = n;
arg_buffer[4] = a3118631411;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam31576_fptr() // lam31576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31577 = arg_buffer[1];
//reading env and args
void* a3119431426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31294 = (decode_clo(env31577))[4];
//not do dummy comment
void* lst = (decode_clo(env31577))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31577))[2];
//not do dummy comment
void* n = (decode_clo(env31577))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont31294;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3119431426;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31576 = encode_clo(alloc_clo(lam31576_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31578 = arg_buffer[1];
//reading env and args
void* kont31294 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39454 = alloc_clo(lam31576_fptr, 4);

//setting env list
clo39454[1] = n;
clo39454[2] = take_u45helper;
clo39454[3] = lst;
clo39454[4] = kont31294;
void* f3129531425 = encode_clo(clo39454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3129531425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam31580_fptr() // lam31580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31581 = arg_buffer[1];
//reading env and args
void* a3119931434 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31296 = (decode_clo(env31581))[3];
//not do dummy comment
void* a3119731430 = (decode_clo(env31581))[2];
//not do dummy comment
void* _u43 = (decode_clo(env31581))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont31296;
arg_buffer[3] = a3119731430;
arg_buffer[4] = a3119931434;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31580 = encode_clo(alloc_clo(lam31580_fptr, 0));

void* lam31582_fptr() // lam31582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31583 = arg_buffer[1];
//reading env and args
void* a3119831432 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31296 = (decode_clo(env31583))[4];
//not do dummy comment
void* length = (decode_clo(env31583))[3];
//not do dummy comment
void* a3119731430 = (decode_clo(env31583))[2];
//not do dummy comment
void* _u43 = (decode_clo(env31583))[1];

//creating new closure instance
void** clo39456 = alloc_clo(lam31580_fptr, 3);

//setting env list
clo39456[1] = _u43;
clo39456[2] = a3119731430;
clo39456[3] = kont31296;
void* f3129731433 = encode_clo(clo39456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3129731433;
arg_buffer[3] = a3119831432;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31582 = encode_clo(alloc_clo(lam31582_fptr, 0));

void* lam31585_fptr() // lam31585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31586 = arg_buffer[1];
//reading env and args
void* a3119531428 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31586))[5];
//not do dummy comment
void* kont31296 = (decode_clo(env31586))[4];
//not do dummy comment
void* lst = (decode_clo(env31586))[3];
//not do dummy comment
void* length = (decode_clo(env31586))[2];
//not do dummy comment
void* _u43 = (decode_clo(env31586))[1];

//if-clause
bool if_guard39457 = is_true(a3119531428);
if(if_guard39457)
{
mpz_t* mpzvar39458 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39458, "0", 10);
void* x3119631429 = encode_mpz(mpzvar39458);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31296);
arg_buffer[2] = x3119631429;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31296))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar39459 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39459, "1", 10);
void* a3119731430 = encode_mpz(mpzvar39459);

//creating new closure instance
void** clo39461 = alloc_clo(lam31582_fptr, 4);

//setting env list
clo39461[1] = _u43;
clo39461[2] = a3119731430;
clo39461[3] = length;
clo39461[4] = kont31296;
void* f3129831431 = encode_clo(clo39461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3129831431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31585 = encode_clo(alloc_clo(lam31585_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31587 = arg_buffer[1];
//reading env and args
void* kont31296 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo39463 = alloc_clo(lam31585_fptr, 5);

//setting env list
clo39463[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo39463[2] = length;
clo39463[3] = lst;
clo39463[4] = kont31296;
clo39463[5] = cdr;
void* f3129931427 = encode_clo(clo39463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3129931427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam31588_fptr() // lam31588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31589 = arg_buffer[1];
//reading env and args
void* x3120131438 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31300 = (decode_clo(env31589))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31300);
arg_buffer[2] = x3120131438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31300))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31588 = encode_clo(alloc_clo(lam31588_fptr, 0));

void* lam31590_fptr() // lam31590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31591 = arg_buffer[1];
//reading env and args
void* a3120531446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3120331442 = (decode_clo(env31591))[3];
//not do dummy comment
void* kont31300 = (decode_clo(env31591))[2];
//not do dummy comment
void* cons = (decode_clo(env31591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31300;
arg_buffer[3] = a3120331442;
arg_buffer[4] = a3120531446;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31590 = encode_clo(alloc_clo(lam31590_fptr, 0));

void* lam31592_fptr() // lam31592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31593 = arg_buffer[1];
//reading env and args
void* a3120431444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3120331442 = (decode_clo(env31593))[5];
//not do dummy comment
void* map = (decode_clo(env31593))[4];
//not do dummy comment
void* kont31300 = (decode_clo(env31593))[3];
//not do dummy comment
void* proc = (decode_clo(env31593))[2];
//not do dummy comment
void* cons = (decode_clo(env31593))[1];

//creating new closure instance
void** clo39465 = alloc_clo(lam31590_fptr, 3);

//setting env list
clo39465[1] = cons;
clo39465[2] = kont31300;
clo39465[3] = a3120331442;
void* f3130231445 = encode_clo(clo39465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3130231445;
arg_buffer[3] = proc;
arg_buffer[4] = a3120431444;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31592 = encode_clo(alloc_clo(lam31592_fptr, 0));

void* lam31594_fptr() // lam31594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31595 = arg_buffer[1];
//reading env and args
void* a3120331442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31595))[6];
//not do dummy comment
void* lst = (decode_clo(env31595))[5];
//not do dummy comment
void* map = (decode_clo(env31595))[4];
//not do dummy comment
void* kont31300 = (decode_clo(env31595))[3];
//not do dummy comment
void* proc = (decode_clo(env31595))[2];
//not do dummy comment
void* cons = (decode_clo(env31595))[1];

//creating new closure instance
void** clo39467 = alloc_clo(lam31592_fptr, 5);

//setting env list
clo39467[1] = cons;
clo39467[2] = proc;
clo39467[3] = kont31300;
clo39467[4] = map;
clo39467[5] = a3120331442;
void* f3130331443 = encode_clo(clo39467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3130331443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31594 = encode_clo(alloc_clo(lam31594_fptr, 0));

void* lam31596_fptr() // lam31596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31597 = arg_buffer[1];
//reading env and args
void* a3120231440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31597))[6];
//not do dummy comment
void* lst = (decode_clo(env31597))[5];
//not do dummy comment
void* map = (decode_clo(env31597))[4];
//not do dummy comment
void* kont31300 = (decode_clo(env31597))[3];
//not do dummy comment
void* proc = (decode_clo(env31597))[2];
//not do dummy comment
void* cons = (decode_clo(env31597))[1];

//creating new closure instance
void** clo39469 = alloc_clo(lam31594_fptr, 6);

//setting env list
clo39469[1] = cons;
clo39469[2] = proc;
clo39469[3] = kont31300;
clo39469[4] = map;
clo39469[5] = lst;
clo39469[6] = cdr;
void* f3130431441 = encode_clo(clo39469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3130431441;
arg_buffer[3] = a3120231440;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31596 = encode_clo(alloc_clo(lam31596_fptr, 0));

void* lam31598_fptr() // lam31598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31599 = arg_buffer[1];
//reading env and args
void* a3120031436 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31599))[8];
//not do dummy comment
void* map = (decode_clo(env31599))[7];
//not do dummy comment
void* kont31300 = (decode_clo(env31599))[6];
//not do dummy comment
void* proc = (decode_clo(env31599))[5];
//not do dummy comment
void* car = (decode_clo(env31599))[4];
//not do dummy comment
void* cons = (decode_clo(env31599))[3];
//not do dummy comment
void* list = (decode_clo(env31599))[2];
//not do dummy comment
void* cdr = (decode_clo(env31599))[1];

//if-clause
bool if_guard39470 = is_true(a3120031436);
if(if_guard39470)
{

//creating new closure instance
void** clo39472 = alloc_clo(lam31588_fptr, 1);

//setting env list
clo39472[1] = kont31300;
void* f3130131437 = encode_clo(clo39472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3130131437;
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
void** clo39474 = alloc_clo(lam31596_fptr, 6);

//setting env list
clo39474[1] = cons;
clo39474[2] = proc;
clo39474[3] = kont31300;
clo39474[4] = map;
clo39474[5] = lst;
clo39474[6] = cdr;
void* f3130531439 = encode_clo(clo39474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3130531439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31598 = encode_clo(alloc_clo(lam31598_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31600 = arg_buffer[1];
//reading env and args
void* kont31300 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39476 = alloc_clo(lam31598_fptr, 8);

//setting env list
clo39476[1] = cdr;
clo39476[2] = list;
clo39476[3] = cons;
clo39476[4] = car;
clo39476[5] = proc;
clo39476[6] = kont31300;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo39476[7] = map;
clo39476[8] = lst;
void* f3130631435 = encode_clo(clo39476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3130631435;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam31601_fptr() // lam31601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31602 = arg_buffer[1];
//reading env and args
void* x3120731450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31307 = (decode_clo(env31602))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31307);
arg_buffer[2] = x3120731450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31307))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31601 = encode_clo(alloc_clo(lam31601_fptr, 0));

void* lam31603_fptr() // lam31603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31604 = arg_buffer[1];
//reading env and args
void* a3121231460 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3121031456 = (decode_clo(env31604))[3];
//not do dummy comment
void* kont31307 = (decode_clo(env31604))[2];
//not do dummy comment
void* cons = (decode_clo(env31604))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31307;
arg_buffer[3] = a3121031456;
arg_buffer[4] = a3121231460;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31603 = encode_clo(alloc_clo(lam31603_fptr, 0));

void* lam31605_fptr() // lam31605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31606 = arg_buffer[1];
//reading env and args
void* a3121131458 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3121031456 = (decode_clo(env31606))[5];
//not do dummy comment
void* op = (decode_clo(env31606))[4];
//not do dummy comment
void* cons = (decode_clo(env31606))[3];
//not do dummy comment
void* filter = (decode_clo(env31606))[2];
//not do dummy comment
void* kont31307 = (decode_clo(env31606))[1];

//creating new closure instance
void** clo39478 = alloc_clo(lam31603_fptr, 3);

//setting env list
clo39478[1] = cons;
clo39478[2] = kont31307;
clo39478[3] = a3121031456;
void* f3130931459 = encode_clo(clo39478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3130931459;
arg_buffer[3] = op;
arg_buffer[4] = a3121131458;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31605 = encode_clo(alloc_clo(lam31605_fptr, 0));

void* lam31607_fptr() // lam31607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31608 = arg_buffer[1];
//reading env and args
void* a3121031456 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31608))[6];
//not do dummy comment
void* lst = (decode_clo(env31608))[5];
//not do dummy comment
void* op = (decode_clo(env31608))[4];
//not do dummy comment
void* cons = (decode_clo(env31608))[3];
//not do dummy comment
void* filter = (decode_clo(env31608))[2];
//not do dummy comment
void* kont31307 = (decode_clo(env31608))[1];

//creating new closure instance
void** clo39480 = alloc_clo(lam31605_fptr, 5);

//setting env list
clo39480[1] = kont31307;
clo39480[2] = filter;
clo39480[3] = cons;
clo39480[4] = op;
clo39480[5] = a3121031456;
void* f3131031457 = encode_clo(clo39480);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3131031457;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31607 = encode_clo(alloc_clo(lam31607_fptr, 0));

void* lam31609_fptr() // lam31609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31610 = arg_buffer[1];
//reading env and args
void* a3121331462 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env31610))[3];
//not do dummy comment
void* filter = (decode_clo(env31610))[2];
//not do dummy comment
void* kont31307 = (decode_clo(env31610))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont31307;
arg_buffer[3] = op;
arg_buffer[4] = a3121331462;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31609 = encode_clo(alloc_clo(lam31609_fptr, 0));

void* lam31611_fptr() // lam31611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31612 = arg_buffer[1];
//reading env and args
void* a3120931454 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31612))[7];
//not do dummy comment
void* lst = (decode_clo(env31612))[6];
//not do dummy comment
void* op = (decode_clo(env31612))[5];
//not do dummy comment
void* cons = (decode_clo(env31612))[4];
//not do dummy comment
void* filter = (decode_clo(env31612))[3];
//not do dummy comment
void* kont31307 = (decode_clo(env31612))[2];
//not do dummy comment
void* car = (decode_clo(env31612))[1];

//if-clause
bool if_guard39481 = is_true(a3120931454);
if(if_guard39481)
{

//creating new closure instance
void** clo39483 = alloc_clo(lam31607_fptr, 6);

//setting env list
clo39483[1] = kont31307;
clo39483[2] = filter;
clo39483[3] = cons;
clo39483[4] = op;
clo39483[5] = lst;
clo39483[6] = cdr;
void* f3131131455 = encode_clo(clo39483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3131131455;
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
void** clo39485 = alloc_clo(lam31609_fptr, 3);

//setting env list
clo39485[1] = kont31307;
clo39485[2] = filter;
clo39485[3] = op;
void* f3131231461 = encode_clo(clo39485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3131231461;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31611 = encode_clo(alloc_clo(lam31611_fptr, 0));

void* lam31613_fptr() // lam31613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31614 = arg_buffer[1];
//reading env and args
void* a3120831452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31614))[7];
//not do dummy comment
void* lst = (decode_clo(env31614))[6];
//not do dummy comment
void* op = (decode_clo(env31614))[5];
//not do dummy comment
void* cons = (decode_clo(env31614))[4];
//not do dummy comment
void* filter = (decode_clo(env31614))[3];
//not do dummy comment
void* kont31307 = (decode_clo(env31614))[2];
//not do dummy comment
void* car = (decode_clo(env31614))[1];

//creating new closure instance
void** clo39487 = alloc_clo(lam31611_fptr, 7);

//setting env list
clo39487[1] = car;
clo39487[2] = kont31307;
clo39487[3] = filter;
clo39487[4] = cons;
clo39487[5] = op;
clo39487[6] = lst;
clo39487[7] = cdr;
void* f3131331453 = encode_clo(clo39487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3131331453;
arg_buffer[3] = a3120831452;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31613 = encode_clo(alloc_clo(lam31613_fptr, 0));

void* lam31615_fptr() // lam31615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31616 = arg_buffer[1];
//reading env and args
void* a3120631448 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31616))[8];
//not do dummy comment
void* op = (decode_clo(env31616))[7];
//not do dummy comment
void* cons = (decode_clo(env31616))[6];
//not do dummy comment
void* list = (decode_clo(env31616))[5];
//not do dummy comment
void* cdr = (decode_clo(env31616))[4];
//not do dummy comment
void* filter = (decode_clo(env31616))[3];
//not do dummy comment
void* kont31307 = (decode_clo(env31616))[2];
//not do dummy comment
void* car = (decode_clo(env31616))[1];

//if-clause
bool if_guard39488 = is_true(a3120631448);
if(if_guard39488)
{

//creating new closure instance
void** clo39490 = alloc_clo(lam31601_fptr, 1);

//setting env list
clo39490[1] = kont31307;
void* f3130831449 = encode_clo(clo39490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3130831449;
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
void** clo39492 = alloc_clo(lam31613_fptr, 7);

//setting env list
clo39492[1] = car;
clo39492[2] = kont31307;
clo39492[3] = filter;
clo39492[4] = cons;
clo39492[5] = op;
clo39492[6] = lst;
clo39492[7] = cdr;
void* f3131431451 = encode_clo(clo39492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3131431451;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31615 = encode_clo(alloc_clo(lam31615_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31617 = arg_buffer[1];
//reading env and args
void* kont31307 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39494 = alloc_clo(lam31615_fptr, 8);

//setting env list
clo39494[1] = car;
clo39494[2] = kont31307;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo39494[3] = filter;
clo39494[4] = cdr;
clo39494[5] = list;
clo39494[6] = cons;
clo39494[7] = op;
clo39494[8] = lst;
void* f3131531447 = encode_clo(clo39494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3131531447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam31618_fptr() // lam31618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31619 = arg_buffer[1];
//reading env and args
void* a3121831470 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env31619))[3];
//not do dummy comment
void* kont31316 = (decode_clo(env31619))[2];
//not do dummy comment
void* a3121631467 = (decode_clo(env31619))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont31316;
arg_buffer[3] = a3121631467;
arg_buffer[4] = a3121831470;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31618 = encode_clo(alloc_clo(lam31618_fptr, 0));

void* lam31621_fptr() // lam31621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31622 = arg_buffer[1];
//reading env and args
void* a3121631467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env31622))[4];
//not do dummy comment
void* kont31316 = (decode_clo(env31622))[3];
//not do dummy comment
void* n = (decode_clo(env31622))[2];
//not do dummy comment
void* _u45 = (decode_clo(env31622))[1];
mpz_t* mpzvar39495 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39495, "1", 10);
void* a3121731468 = encode_mpz(mpzvar39495);

//creating new closure instance
void** clo39497 = alloc_clo(lam31618_fptr, 3);

//setting env list
clo39497[1] = a3121631467;
clo39497[2] = kont31316;
clo39497[3] = drop;
void* f3131731469 = encode_clo(clo39497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3131731469;
arg_buffer[3] = n;
arg_buffer[4] = a3121731468;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31621 = encode_clo(alloc_clo(lam31621_fptr, 0));

void* lam31623_fptr() // lam31623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31624 = arg_buffer[1];
//reading env and args
void* a3121531465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31624))[6];
//not do dummy comment
void* kont31316 = (decode_clo(env31624))[5];
//not do dummy comment
void* n = (decode_clo(env31624))[4];
//not do dummy comment
void* _u45 = (decode_clo(env31624))[3];
//not do dummy comment
void* lst = (decode_clo(env31624))[2];
//not do dummy comment
void* drop = (decode_clo(env31624))[1];

//if-clause
bool if_guard39498 = is_true(a3121531465);
if(if_guard39498)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31316);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31316))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39500 = alloc_clo(lam31621_fptr, 4);

//setting env list
clo39500[1] = _u45;
clo39500[2] = n;
clo39500[3] = kont31316;
clo39500[4] = drop;
void* f3131831466 = encode_clo(clo39500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3131831466;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31623 = encode_clo(alloc_clo(lam31623_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31626 = arg_buffer[1];
//reading env and args
void* kont31316 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar39501 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39501, "0", 10);
void* a3121431463 = encode_mpz(mpzvar39501);

//creating new closure instance
void** clo39503 = alloc_clo(lam31623_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo39503[1] = drop;
clo39503[2] = lst;
clo39503[3] = _u45;
clo39503[4] = n;
clo39503[5] = kont31316;
clo39503[6] = cdr;
void* f3131931464 = encode_clo(clo39503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3131931464;
arg_buffer[3] = n;
arg_buffer[4] = a3121431463;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam31627_fptr() // lam31627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31628 = arg_buffer[1];
//reading env and args
void* a3122231478 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3122031474 = (decode_clo(env31628))[3];
//not do dummy comment
void* kont31320 = (decode_clo(env31628))[2];
//not do dummy comment
void* proc = (decode_clo(env31628))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont31320;
arg_buffer[3] = a3122031474;
arg_buffer[4] = a3122231478;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31627 = encode_clo(alloc_clo(lam31627_fptr, 0));

void* lam31629_fptr() // lam31629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31630 = arg_buffer[1];
//reading env and args
void* a3122131476 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont31320 = (decode_clo(env31630))[5];
//not do dummy comment
void* foldr = (decode_clo(env31630))[4];
//not do dummy comment
void* a3122031474 = (decode_clo(env31630))[3];
//not do dummy comment
void* proc = (decode_clo(env31630))[2];
//not do dummy comment
void* acc = (decode_clo(env31630))[1];

//creating new closure instance
void** clo39505 = alloc_clo(lam31627_fptr, 3);

//setting env list
clo39505[1] = proc;
clo39505[2] = kont31320;
clo39505[3] = a3122031474;
void* f3132131477 = encode_clo(clo39505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3132131477;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3122131476;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31629 = encode_clo(alloc_clo(lam31629_fptr, 0));

void* lam31631_fptr() // lam31631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31632 = arg_buffer[1];
//reading env and args
void* a3122031474 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31632))[6];
//not do dummy comment
void* kont31320 = (decode_clo(env31632))[5];
//not do dummy comment
void* foldr = (decode_clo(env31632))[4];
//not do dummy comment
void* lst = (decode_clo(env31632))[3];
//not do dummy comment
void* proc = (decode_clo(env31632))[2];
//not do dummy comment
void* acc = (decode_clo(env31632))[1];

//creating new closure instance
void** clo39507 = alloc_clo(lam31629_fptr, 5);

//setting env list
clo39507[1] = acc;
clo39507[2] = proc;
clo39507[3] = a3122031474;
clo39507[4] = foldr;
clo39507[5] = kont31320;
void* f3132231475 = encode_clo(clo39507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3132231475;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31631 = encode_clo(alloc_clo(lam31631_fptr, 0));

void* lam31633_fptr() // lam31633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31634 = arg_buffer[1];
//reading env and args
void* a3121931472 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31634))[7];
//not do dummy comment
void* kont31320 = (decode_clo(env31634))[6];
//not do dummy comment
void* car = (decode_clo(env31634))[5];
//not do dummy comment
void* foldr = (decode_clo(env31634))[4];
//not do dummy comment
void* lst = (decode_clo(env31634))[3];
//not do dummy comment
void* proc = (decode_clo(env31634))[2];
//not do dummy comment
void* acc = (decode_clo(env31634))[1];

//if-clause
bool if_guard39508 = is_true(a3121931472);
if(if_guard39508)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31320);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31320))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39510 = alloc_clo(lam31631_fptr, 6);

//setting env list
clo39510[1] = acc;
clo39510[2] = proc;
clo39510[3] = lst;
clo39510[4] = foldr;
clo39510[5] = kont31320;
clo39510[6] = cdr;
void* f3132331473 = encode_clo(clo39510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3132331473;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31633 = encode_clo(alloc_clo(lam31633_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31635 = arg_buffer[1];
//reading env and args
void* kont31320 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo39512 = alloc_clo(lam31633_fptr, 7);

//setting env list
clo39512[1] = acc;
clo39512[2] = proc;
clo39512[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo39512[4] = foldr;
clo39512[5] = car;
clo39512[6] = kont31320;
clo39512[7] = cdr;
void* f3132431471 = encode_clo(clo39512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3132431471;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam31636_fptr() // lam31636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31637 = arg_buffer[1];
//reading env and args
void* a3122631486 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3122431482 = (decode_clo(env31637))[3];
//not do dummy comment
void* cons = (decode_clo(env31637))[2];
//not do dummy comment
void* kont31325 = (decode_clo(env31637))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont31325;
arg_buffer[3] = a3122431482;
arg_buffer[4] = a3122631486;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31636 = encode_clo(alloc_clo(lam31636_fptr, 0));

void* lam31638_fptr() // lam31638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31639 = arg_buffer[1];
//reading env and args
void* a3122531484 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env31639))[5];
//not do dummy comment
void* cons = (decode_clo(env31639))[4];
//not do dummy comment
void* kont31325 = (decode_clo(env31639))[3];
//not do dummy comment
void* a3122431482 = (decode_clo(env31639))[2];
//not do dummy comment
void* lst2 = (decode_clo(env31639))[1];

//creating new closure instance
void** clo39514 = alloc_clo(lam31636_fptr, 3);

//setting env list
clo39514[1] = kont31325;
clo39514[2] = cons;
clo39514[3] = a3122431482;
void* f3132631485 = encode_clo(clo39514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3132631485;
arg_buffer[3] = a3122531484;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31638 = encode_clo(alloc_clo(lam31638_fptr, 0));

void* lam31640_fptr() // lam31640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31641 = arg_buffer[1];
//reading env and args
void* a3122431482 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31641))[6];
//not do dummy comment
void* append = (decode_clo(env31641))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31641))[4];
//not do dummy comment
void* lst1 = (decode_clo(env31641))[3];
//not do dummy comment
void* cons = (decode_clo(env31641))[2];
//not do dummy comment
void* kont31325 = (decode_clo(env31641))[1];

//creating new closure instance
void** clo39516 = alloc_clo(lam31638_fptr, 5);

//setting env list
clo39516[1] = lst2;
clo39516[2] = a3122431482;
clo39516[3] = kont31325;
clo39516[4] = cons;
clo39516[5] = append;
void* f3132731483 = encode_clo(clo39516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3132731483;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31640 = encode_clo(alloc_clo(lam31640_fptr, 0));

void* lam31642_fptr() // lam31642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31643 = arg_buffer[1];
//reading env and args
void* a3122331480 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31643))[7];
//not do dummy comment
void* append = (decode_clo(env31643))[6];
//not do dummy comment
void* lst2 = (decode_clo(env31643))[5];
//not do dummy comment
void* cons = (decode_clo(env31643))[4];
//not do dummy comment
void* kont31325 = (decode_clo(env31643))[3];
//not do dummy comment
void* lst1 = (decode_clo(env31643))[2];
//not do dummy comment
void* car = (decode_clo(env31643))[1];

//if-clause
bool if_guard39517 = is_true(a3122331480);
if(if_guard39517)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31325);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31325))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39519 = alloc_clo(lam31640_fptr, 6);

//setting env list
clo39519[1] = kont31325;
clo39519[2] = cons;
clo39519[3] = lst1;
clo39519[4] = lst2;
clo39519[5] = append;
clo39519[6] = cdr;
void* f3132831481 = encode_clo(clo39519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3132831481;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31642 = encode_clo(alloc_clo(lam31642_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31644 = arg_buffer[1];
//reading env and args
void* kont31325 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39521 = alloc_clo(lam31642_fptr, 7);

//setting env list
clo39521[1] = car;
clo39521[2] = lst1;
clo39521[3] = kont31325;
clo39521[4] = cons;
clo39521[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo39521[6] = append;
clo39521[7] = cdr;
void* f3132931479 = encode_clo(clo39521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3132931479;
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
void* _31645 = arg_buffer[1];
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

void* kont3133031487 = prim_car(lst);
void* lst31488 = prim_cdr(lst);
void* x3122731489 = apply_prim_hash(lst31488);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3133031487);
arg_buffer[2] = x3122731489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3133031487))[0]);
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
void* _31646 = arg_buffer[1];
//reading env and args
void* kont31332 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3122831490 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31332);
arg_buffer[2] = x3122831490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31332))[0]);
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
void* _31647 = arg_buffer[1];
//reading env and args
void* kont31333 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3122931491 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31333);
arg_buffer[2] = x3122931491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31333))[0]);
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
void* _31648 = arg_buffer[1];
//reading env and args
void* kont31334 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3123031492 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31334);
arg_buffer[2] = x3123031492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31334))[0]);
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
void* _31649 = arg_buffer[1];
//reading env and args
void* kont31335 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3123131493 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont31335);
arg_buffer[2] = x3123131493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont31335))[0]);
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
void* _31651 = arg_buffer[1];
//reading env and args
void* kont31336 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar39522 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39522, "0", 10);
void* a3123231494 = encode_mpz(mpzvar39522);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont31336;
arg_buffer[3] = _u43;
arg_buffer[4] = a3123231494;
arg_buffer[5] = lst;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call_u45foldl = encode_clo(alloc_clo(call_u45foldl_fptr, 0));

void* lam31652_fptr() // lam31652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31653 = arg_buffer[1];
//reading env and args
void* a3123831501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* call_u45foldl = (decode_clo(env31653))[2];
//not do dummy comment
void* kont31337 = (decode_clo(env31653))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call_u45foldl);
arg_buffer[2] = kont31337;
arg_buffer[3] = a3123831501;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31652 = encode_clo(alloc_clo(lam31652_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31659 = arg_buffer[1];
//reading env and args
void* kont31337 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar39523 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39523, "1", 10);
void* a3123331495 = encode_mpz(mpzvar39523);
mpz_t* mpzvar39524 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39524, "2", 10);
void* a3123431496 = encode_mpz(mpzvar39524);
mpz_t* mpzvar39525 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39525, "3", 10);
void* a3123531497 = encode_mpz(mpzvar39525);
mpz_t* mpzvar39526 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39526, "4", 10);
void* a3123631498 = encode_mpz(mpzvar39526);
mpz_t* mpzvar39527 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39527, "10", 10);
void* a3123731499 = encode_mpz(mpzvar39527);

//creating new closure instance
void** clo39529 = alloc_clo(lam31652_fptr, 2);

//setting env list
clo39529[1] = kont31337;
clo39529[2] = call_u45foldl;
void* f3133831500 = encode_clo(clo39529);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3133831500;
arg_buffer[3] = a3123331495;
arg_buffer[4] = a3123431496;
arg_buffer[5] = a3123531497;
arg_buffer[6] = a3123631498;
arg_buffer[7] = a3123731499;
arg_buffer[0] = reinterpret_cast<void*>(7);
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

