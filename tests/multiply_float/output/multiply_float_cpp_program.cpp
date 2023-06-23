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
void* _85465 = arg_buffer[1];
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

void* kont8520585305 = prim_car(lst);
void* lst85306 = prim_cdr(lst);
void* x8511885307 = apply_prim__u43(lst85306);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8520585305);
arg_buffer[2] = x8511885307;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8520585305))[0]);
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
void* _85466 = arg_buffer[1];
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

void* kont8520785308 = prim_car(lst);
void* lst85309 = prim_cdr(lst);
void* x8511985310 = apply_prim__u45(lst85309);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8520785308);
arg_buffer[2] = x8511985310;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8520785308))[0]);
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
void* _85467 = arg_buffer[1];
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

void* kont8520985311 = prim_car(lst);
void* lst85312 = prim_cdr(lst);
void* x8512085313 = apply_prim__u42(lst85312);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8520985311);
arg_buffer[2] = x8512085313;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8520985311))[0]);
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
void* _85468 = arg_buffer[1];
//reading env and args
void* kont85211 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8512185314 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85211);
arg_buffer[2] = x8512185314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85211))[0]);
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
void* _85469 = arg_buffer[1];
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

void* kont8521285315 = prim_car(lst);
void* lst85316 = prim_cdr(lst);
void* x8512285317 = apply_prim__u47(lst85316);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8521285315);
arg_buffer[2] = x8512285317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521285315))[0]);
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
void* _85470 = arg_buffer[1];
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

void* kont8521485318 = prim_car(lst);
void* lst85319 = prim_cdr(lst);
void* x8512385320 = apply_prim__u61(lst85319);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8521485318);
arg_buffer[2] = x8512385320;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521485318))[0]);
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
void* _85471 = arg_buffer[1];
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

void* kont8521685321 = prim_car(lst);
void* lst85322 = prim_cdr(lst);
void* x8512485323 = apply_prim__u62(lst85322);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8521685321);
arg_buffer[2] = x8512485323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521685321))[0]);
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
void* _85472 = arg_buffer[1];
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

void* kont8521885324 = prim_car(lst);
void* lst85325 = prim_cdr(lst);
void* x8512585326 = apply_prim__u60(lst85325);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8521885324);
arg_buffer[2] = x8512585326;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8521885324))[0]);
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
void* _85473 = arg_buffer[1];
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

void* kont8522085327 = prim_car(lst);
void* lst85328 = prim_cdr(lst);
void* x8512685329 = apply_prim__u60_u61(lst85328);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8522085327);
arg_buffer[2] = x8512685329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8522085327))[0]);
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
void* _85474 = arg_buffer[1];
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

void* kont8522285330 = prim_car(lst);
void* lst85331 = prim_cdr(lst);
void* x8512785332 = apply_prim__u62_u61(lst85331);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8522285330);
arg_buffer[2] = x8512785332;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8522285330))[0]);
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
void* _85475 = arg_buffer[1];
//reading env and args
void* kont85224 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8512885333 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85224);
arg_buffer[2] = x8512885333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85224))[0]);
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
void* _85476 = arg_buffer[1];
//reading env and args
void* kont85225 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8512985334 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85225);
arg_buffer[2] = x8512985334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85225))[0]);
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
void* _85477 = arg_buffer[1];
//reading env and args
void* kont85226 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8513085335 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85226);
arg_buffer[2] = x8513085335;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85226))[0]);
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
void* _85478 = arg_buffer[1];
//reading env and args
void* kont85227 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8513185336 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85227);
arg_buffer[2] = x8513185336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85227))[0]);
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
void* _85479 = arg_buffer[1];
//reading env and args
void* kont85228 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8513285337 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85228);
arg_buffer[2] = x8513285337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85228))[0]);
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
void* _85480 = arg_buffer[1];
//reading env and args
void* kont85229 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8513385338 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85229);
arg_buffer[2] = x8513385338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85229))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam85481_fptr() // lam85481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85482 = arg_buffer[1];
//reading env and args
void* a8513685342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8513485339 = (decode_clo(env85482))[3];
//not do dummy comment
void* kont85230 = (decode_clo(env85482))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env85482))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont85230;
arg_buffer[3] = a8513485339;
arg_buffer[4] = a8513685342;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85481 = encode_clo(alloc_clo(lam85481_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85485 = arg_buffer[1];
//reading env and args
void* kont85230 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar86124 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86124, "0", 10);
void* a8513485339 = encode_mpz(mpzvar86124);
mpz_t* mpzvar86125 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86125, "2", 10);
void* a8513585340 = encode_mpz(mpzvar86125);

//creating new closure instance
void** clo86127 = alloc_clo(lam85481_fptr, 3);

//setting env list
clo86127[1] = equal_u63;
clo86127[2] = kont85230;
clo86127[3] = a8513485339;
void* f8523185341 = encode_clo(clo86127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8523185341;
arg_buffer[3] = x;
arg_buffer[4] = a8513585340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam85486_fptr() // lam85486 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85487 = arg_buffer[1];
//reading env and args
void* a8513985346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8513785343 = (decode_clo(env85487))[3];
//not do dummy comment
void* kont85232 = (decode_clo(env85487))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env85487))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont85232;
arg_buffer[3] = a8513785343;
arg_buffer[4] = a8513985346;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85486 = encode_clo(alloc_clo(lam85486_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85490 = arg_buffer[1];
//reading env and args
void* kont85232 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar86128 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86128, "1", 10);
void* a8513785343 = encode_mpz(mpzvar86128);
mpz_t* mpzvar86129 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86129, "2", 10);
void* a8513885344 = encode_mpz(mpzvar86129);

//creating new closure instance
void** clo86131 = alloc_clo(lam85486_fptr, 3);

//setting env list
clo86131[1] = equal_u63;
clo86131[2] = kont85232;
clo86131[3] = a8513785343;
void* f8523385345 = encode_clo(clo86131);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8523385345;
arg_buffer[3] = x;
arg_buffer[4] = a8513885344;
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
void* _85491 = arg_buffer[1];
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

void* kont8523485347 = prim_car(x);
void* x85348 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8523485347);
arg_buffer[2] = x85348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8523485347))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam85494_fptr() // lam85494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85495 = arg_buffer[1];
//reading env and args
void* a8514585358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env85495))[3];
//not do dummy comment
void* kont85236 = (decode_clo(env85495))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85495))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont85236;
arg_buffer[3] = x;
arg_buffer[4] = a8514585358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85494 = encode_clo(alloc_clo(lam85494_fptr, 0));

void* lam85496_fptr() // lam85496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85497 = arg_buffer[1];
//reading env and args
void* a8514385355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85497))[5];
//not do dummy comment
void* lst = (decode_clo(env85497))[4];
//not do dummy comment
void* x = (decode_clo(env85497))[3];
//not do dummy comment
void* kont85236 = (decode_clo(env85497))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85497))[1];

//if-clause
bool if_guard86132 = is_true(a8514385355);
if(if_guard86132)
{
void* x8514485356 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85236);
arg_buffer[2] = x8514485356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86134 = alloc_clo(lam85494_fptr, 3);

//setting env list
clo86134[1] = member_u63;
clo86134[2] = kont85236;
clo86134[3] = x;
void* f8523785357 = encode_clo(clo86134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8523785357;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85496 = encode_clo(alloc_clo(lam85496_fptr, 0));

void* lam85498_fptr() // lam85498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85499 = arg_buffer[1];
//reading env and args
void* a8514285353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85499))[6];
//not do dummy comment
void* lst = (decode_clo(env85499))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env85499))[4];
//not do dummy comment
void* x = (decode_clo(env85499))[3];
//not do dummy comment
void* kont85236 = (decode_clo(env85499))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85499))[1];

//creating new closure instance
void** clo86136 = alloc_clo(lam85496_fptr, 5);

//setting env list
clo86136[1] = member_u63;
clo86136[2] = kont85236;
clo86136[3] = x;
clo86136[4] = lst;
clo86136[5] = cdr;
void* f8523885354 = encode_clo(clo86136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8523885354;
arg_buffer[3] = a8514285353;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85498 = encode_clo(alloc_clo(lam85498_fptr, 0));

void* lam85500_fptr() // lam85500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85501 = arg_buffer[1];
//reading env and args
void* a8514085350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85501))[7];
//not do dummy comment
void* lst = (decode_clo(env85501))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env85501))[5];
//not do dummy comment
void* x = (decode_clo(env85501))[4];
//not do dummy comment
void* kont85236 = (decode_clo(env85501))[3];
//not do dummy comment
void* car = (decode_clo(env85501))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env85501))[1];

//if-clause
bool if_guard86137 = is_true(a8514085350);
if(if_guard86137)
{
void* x8514185351 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85236);
arg_buffer[2] = x8514185351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86139 = alloc_clo(lam85498_fptr, 6);

//setting env list
clo86139[1] = member_u63;
clo86139[2] = kont85236;
clo86139[3] = x;
clo86139[4] = equal_u63;
clo86139[5] = lst;
clo86139[6] = cdr;
void* f8523985352 = encode_clo(clo86139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8523985352;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85500 = encode_clo(alloc_clo(lam85500_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85502 = arg_buffer[1];
//reading env and args
void* kont85236 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86141 = alloc_clo(lam85500_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo86141[1] = member_u63;
clo86141[2] = car;
clo86141[3] = kont85236;
clo86141[4] = x;
clo86141[5] = equal_u63;
clo86141[6] = lst;
clo86141[7] = cdr;
void* f8524085349 = encode_clo(clo86141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8524085349;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam85503_fptr() // lam85503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85504 = arg_buffer[1];
//reading env and args
void* a8514985366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85241 = (decode_clo(env85504))[4];
//not do dummy comment
void* fun = (decode_clo(env85504))[3];
//not do dummy comment
void* a8514885364 = (decode_clo(env85504))[2];
//not do dummy comment
void* foldl = (decode_clo(env85504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont85241;
arg_buffer[3] = fun;
arg_buffer[4] = a8514885364;
arg_buffer[5] = a8514985366;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85503 = encode_clo(alloc_clo(lam85503_fptr, 0));

void* lam85505_fptr() // lam85505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85506 = arg_buffer[1];
//reading env and args
void* a8514885364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85506))[5];
//not do dummy comment
void* kont85241 = (decode_clo(env85506))[4];
//not do dummy comment
void* lst = (decode_clo(env85506))[3];
//not do dummy comment
void* fun = (decode_clo(env85506))[2];
//not do dummy comment
void* foldl = (decode_clo(env85506))[1];

//creating new closure instance
void** clo86143 = alloc_clo(lam85503_fptr, 4);

//setting env list
clo86143[1] = foldl;
clo86143[2] = a8514885364;
clo86143[3] = fun;
clo86143[4] = kont85241;
void* f8524285365 = encode_clo(clo86143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8524285365;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85505 = encode_clo(alloc_clo(lam85505_fptr, 0));

void* lam85507_fptr() // lam85507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85508 = arg_buffer[1];
//reading env and args
void* a8514785362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85508))[6];
//not do dummy comment
void* kont85241 = (decode_clo(env85508))[5];
//not do dummy comment
void* lst = (decode_clo(env85508))[4];
//not do dummy comment
void* fun = (decode_clo(env85508))[3];
//not do dummy comment
void* acc = (decode_clo(env85508))[2];
//not do dummy comment
void* foldl = (decode_clo(env85508))[1];

//creating new closure instance
void** clo86145 = alloc_clo(lam85505_fptr, 5);

//setting env list
clo86145[1] = foldl;
clo86145[2] = fun;
clo86145[3] = lst;
clo86145[4] = kont85241;
clo86145[5] = cdr;
void* f8524385363 = encode_clo(clo86145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8524385363;
arg_buffer[3] = a8514785362;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85507 = encode_clo(alloc_clo(lam85507_fptr, 0));

void* lam85509_fptr() // lam85509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85510 = arg_buffer[1];
//reading env and args
void* a8514685360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85510))[7];
//not do dummy comment
void* kont85241 = (decode_clo(env85510))[6];
//not do dummy comment
void* lst = (decode_clo(env85510))[5];
//not do dummy comment
void* fun = (decode_clo(env85510))[4];
//not do dummy comment
void* acc = (decode_clo(env85510))[3];
//not do dummy comment
void* car = (decode_clo(env85510))[2];
//not do dummy comment
void* foldl = (decode_clo(env85510))[1];

//if-clause
bool if_guard86146 = is_true(a8514685360);
if(if_guard86146)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85241);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85241))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86148 = alloc_clo(lam85507_fptr, 6);

//setting env list
clo86148[1] = foldl;
clo86148[2] = acc;
clo86148[3] = fun;
clo86148[4] = lst;
clo86148[5] = kont85241;
clo86148[6] = cdr;
void* f8524485361 = encode_clo(clo86148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8524485361;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85509 = encode_clo(alloc_clo(lam85509_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85511 = arg_buffer[1];
//reading env and args
void* kont85241 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo86150 = alloc_clo(lam85509_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo86150[1] = foldl;
clo86150[2] = car;
clo86150[3] = acc;
clo86150[4] = fun;
clo86150[5] = lst;
clo86150[6] = kont85241;
clo86150[7] = cdr;
void* f8524585359 = encode_clo(clo86150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8524585359;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam85512_fptr() // lam85512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85513 = arg_buffer[1];
//reading env and args
void* a8515385374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8515185370 = (decode_clo(env85513))[3];
//not do dummy comment
void* kont85246 = (decode_clo(env85513))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85513))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont85246;
arg_buffer[3] = a8515185370;
arg_buffer[4] = a8515385374;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85512 = encode_clo(alloc_clo(lam85512_fptr, 0));

void* lam85514_fptr() // lam85514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85515 = arg_buffer[1];
//reading env and args
void* a8515285372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8515185370 = (decode_clo(env85515))[5];
//not do dummy comment
void* kont85246 = (decode_clo(env85515))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85515))[3];
//not do dummy comment
void* lst2 = (decode_clo(env85515))[2];
//not do dummy comment
void* cons = (decode_clo(env85515))[1];

//creating new closure instance
void** clo86152 = alloc_clo(lam85512_fptr, 3);

//setting env list
clo86152[1] = reverse_u45helper;
clo86152[2] = kont85246;
clo86152[3] = a8515185370;
void* f8524785373 = encode_clo(clo86152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8524785373;
arg_buffer[3] = a8515285372;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85514 = encode_clo(alloc_clo(lam85514_fptr, 0));

void* lam85516_fptr() // lam85516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85517 = arg_buffer[1];
//reading env and args
void* a8515185370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85517))[6];
//not do dummy comment
void* kont85246 = (decode_clo(env85517))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85517))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85517))[3];
//not do dummy comment
void* car = (decode_clo(env85517))[2];
//not do dummy comment
void* cons = (decode_clo(env85517))[1];

//creating new closure instance
void** clo86154 = alloc_clo(lam85514_fptr, 5);

//setting env list
clo86154[1] = cons;
clo86154[2] = lst2;
clo86154[3] = reverse_u45helper;
clo86154[4] = kont85246;
clo86154[5] = a8515185370;
void* f8524885371 = encode_clo(clo86154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8524885371;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85516 = encode_clo(alloc_clo(lam85516_fptr, 0));

void* lam85518_fptr() // lam85518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85519 = arg_buffer[1];
//reading env and args
void* a8515085368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85519))[7];
//not do dummy comment
void* lst = (decode_clo(env85519))[6];
//not do dummy comment
void* kont85246 = (decode_clo(env85519))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85519))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85519))[3];
//not do dummy comment
void* car = (decode_clo(env85519))[2];
//not do dummy comment
void* cons = (decode_clo(env85519))[1];

//if-clause
bool if_guard86155 = is_true(a8515085368);
if(if_guard86155)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85246);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85246))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86157 = alloc_clo(lam85516_fptr, 6);

//setting env list
clo86157[1] = cons;
clo86157[2] = car;
clo86157[3] = lst2;
clo86157[4] = reverse_u45helper;
clo86157[5] = kont85246;
clo86157[6] = lst;
void* f8524985369 = encode_clo(clo86157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8524985369;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85518 = encode_clo(alloc_clo(lam85518_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85520 = arg_buffer[1];
//reading env and args
void* kont85246 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86159 = alloc_clo(lam85518_fptr, 7);

//setting env list
clo86159[1] = cons;
clo86159[2] = car;
clo86159[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo86159[4] = reverse_u45helper;
clo86159[5] = kont85246;
clo86159[6] = lst;
clo86159[7] = cdr;
void* f8525085367 = encode_clo(clo86159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8525085367;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam85521_fptr() // lam85521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85522 = arg_buffer[1];
//reading env and args
void* a8515485376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85522))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env85522))[2];
//not do dummy comment
void* kont85251 = (decode_clo(env85522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont85251;
arg_buffer[3] = lst;
arg_buffer[4] = a8515485376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85521 = encode_clo(alloc_clo(lam85521_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85523 = arg_buffer[1];
//reading env and args
void* kont85251 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo86161 = alloc_clo(lam85521_fptr, 3);

//setting env list
clo86161[1] = kont85251;
clo86161[2] = reverse_u45helper;
clo86161[3] = lst;
void* f8525285375 = encode_clo(clo86161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8525285375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam85524_fptr() // lam85524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85525 = arg_buffer[1];
//reading env and args
void* x8515785381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85253 = (decode_clo(env85525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85253);
arg_buffer[2] = x8515785381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85253))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85524 = encode_clo(alloc_clo(lam85524_fptr, 0));

void* lam85526_fptr() // lam85526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85527 = arg_buffer[1];
//reading env and args
void* a8516285390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8516085386 = (decode_clo(env85527))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env85527))[3];
//not do dummy comment
void* kont85253 = (decode_clo(env85527))[2];
//not do dummy comment
void* a8515885383 = (decode_clo(env85527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont85253;
arg_buffer[3] = a8515885383;
arg_buffer[4] = a8516085386;
arg_buffer[5] = a8516285390;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85526 = encode_clo(alloc_clo(lam85526_fptr, 0));

void* lam85528_fptr() // lam85528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85529 = arg_buffer[1];
//reading env and args
void* a8516185388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8516085386 = (decode_clo(env85529))[6];
//not do dummy comment
void* kont85253 = (decode_clo(env85529))[5];
//not do dummy comment
void* cons = (decode_clo(env85529))[4];
//not do dummy comment
void* a8515885383 = (decode_clo(env85529))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env85529))[2];
//not do dummy comment
void* lst2 = (decode_clo(env85529))[1];

//creating new closure instance
void** clo86163 = alloc_clo(lam85526_fptr, 4);

//setting env list
clo86163[1] = a8515885383;
clo86163[2] = kont85253;
clo86163[3] = take_u45helper;
clo86163[4] = a8516085386;
void* f8525585389 = encode_clo(clo86163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8525585389;
arg_buffer[3] = a8516185388;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85528 = encode_clo(alloc_clo(lam85528_fptr, 0));

void* lam85530_fptr() // lam85530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85531 = arg_buffer[1];
//reading env and args
void* a8516085386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85531))[7];
//not do dummy comment
void* cons = (decode_clo(env85531))[6];
//not do dummy comment
void* a8515885383 = (decode_clo(env85531))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env85531))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85531))[3];
//not do dummy comment
void* kont85253 = (decode_clo(env85531))[2];
//not do dummy comment
void* car = (decode_clo(env85531))[1];

//creating new closure instance
void** clo86165 = alloc_clo(lam85528_fptr, 6);

//setting env list
clo86165[1] = lst2;
clo86165[2] = take_u45helper;
clo86165[3] = a8515885383;
clo86165[4] = cons;
clo86165[5] = kont85253;
clo86165[6] = a8516085386;
void* f8525685387 = encode_clo(clo86165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8525685387;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85530 = encode_clo(alloc_clo(lam85530_fptr, 0));

void* lam85533_fptr() // lam85533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85534 = arg_buffer[1];
//reading env and args
void* a8515885383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85534))[8];
//not do dummy comment
void* cons = (decode_clo(env85534))[7];
//not do dummy comment
void* _u45 = (decode_clo(env85534))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env85534))[5];
//not do dummy comment
void* lst2 = (decode_clo(env85534))[4];
//not do dummy comment
void* kont85253 = (decode_clo(env85534))[3];
//not do dummy comment
void* n = (decode_clo(env85534))[2];
//not do dummy comment
void* car = (decode_clo(env85534))[1];
mpz_t* mpzvar86166 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86166, "1", 10);
void* a8515985384 = encode_mpz(mpzvar86166);

//creating new closure instance
void** clo86168 = alloc_clo(lam85530_fptr, 7);

//setting env list
clo86168[1] = car;
clo86168[2] = kont85253;
clo86168[3] = lst2;
clo86168[4] = take_u45helper;
clo86168[5] = a8515885383;
clo86168[6] = cons;
clo86168[7] = lst;
void* f8525785385 = encode_clo(clo86168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8525785385;
arg_buffer[3] = n;
arg_buffer[4] = a8515985384;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85533 = encode_clo(alloc_clo(lam85533_fptr, 0));

void* lam85535_fptr() // lam85535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85536 = arg_buffer[1];
//reading env and args
void* a8515685379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85536))[10];
//not do dummy comment
void* lst = (decode_clo(env85536))[9];
//not do dummy comment
void* reverse = (decode_clo(env85536))[8];
//not do dummy comment
void* cons = (decode_clo(env85536))[7];
//not do dummy comment
void* _u45 = (decode_clo(env85536))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env85536))[5];
//not do dummy comment
void* lst2 = (decode_clo(env85536))[4];
//not do dummy comment
void* kont85253 = (decode_clo(env85536))[3];
//not do dummy comment
void* n = (decode_clo(env85536))[2];
//not do dummy comment
void* car = (decode_clo(env85536))[1];

//if-clause
bool if_guard86169 = is_true(a8515685379);
if(if_guard86169)
{

//creating new closure instance
void** clo86171 = alloc_clo(lam85524_fptr, 1);

//setting env list
clo86171[1] = kont85253;
void* f8525485380 = encode_clo(clo86171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8525485380;
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
void** clo86173 = alloc_clo(lam85533_fptr, 8);

//setting env list
clo86173[1] = car;
clo86173[2] = n;
clo86173[3] = kont85253;
clo86173[4] = lst2;
clo86173[5] = take_u45helper;
clo86173[6] = _u45;
clo86173[7] = cons;
clo86173[8] = lst;
void* f8525885382 = encode_clo(clo86173);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8525885382;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85535 = encode_clo(alloc_clo(lam85535_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85538 = arg_buffer[1];
//reading env and args
void* kont85253 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar86174 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86174, "0", 10);
void* a8515585377 = encode_mpz(mpzvar86174);

//creating new closure instance
void** clo86176 = alloc_clo(lam85535_fptr, 10);

//setting env list
clo86176[1] = car;
clo86176[2] = n;
clo86176[3] = kont85253;
clo86176[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo86176[5] = take_u45helper;
clo86176[6] = _u45;
clo86176[7] = cons;
clo86176[8] = reverse;
clo86176[9] = lst;
clo86176[10] = cdr;
void* f8525985378 = encode_clo(clo86176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8525985378;
arg_buffer[3] = n;
arg_buffer[4] = a8515585377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam85539_fptr() // lam85539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85540 = arg_buffer[1];
//reading env and args
void* a8516385392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env85540))[4];
//not do dummy comment
void* n = (decode_clo(env85540))[3];
//not do dummy comment
void* lst = (decode_clo(env85540))[2];
//not do dummy comment
void* kont85260 = (decode_clo(env85540))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont85260;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8516385392;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85539 = encode_clo(alloc_clo(lam85539_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85541 = arg_buffer[1];
//reading env and args
void* kont85260 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86178 = alloc_clo(lam85539_fptr, 4);

//setting env list
clo86178[1] = kont85260;
clo86178[2] = lst;
clo86178[3] = n;
clo86178[4] = take_u45helper;
void* f8526185391 = encode_clo(clo86178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8526185391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam85543_fptr() // lam85543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85544 = arg_buffer[1];
//reading env and args
void* a8516885400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85262 = (decode_clo(env85544))[3];
//not do dummy comment
void* _u43 = (decode_clo(env85544))[2];
//not do dummy comment
void* a8516685396 = (decode_clo(env85544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont85262;
arg_buffer[3] = a8516685396;
arg_buffer[4] = a8516885400;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85543 = encode_clo(alloc_clo(lam85543_fptr, 0));

void* lam85545_fptr() // lam85545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85546 = arg_buffer[1];
//reading env and args
void* a8516785398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env85546))[4];
//not do dummy comment
void* kont85262 = (decode_clo(env85546))[3];
//not do dummy comment
void* _u43 = (decode_clo(env85546))[2];
//not do dummy comment
void* a8516685396 = (decode_clo(env85546))[1];

//creating new closure instance
void** clo86180 = alloc_clo(lam85543_fptr, 3);

//setting env list
clo86180[1] = a8516685396;
clo86180[2] = _u43;
clo86180[3] = kont85262;
void* f8526385399 = encode_clo(clo86180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8526385399;
arg_buffer[3] = a8516785398;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85545 = encode_clo(alloc_clo(lam85545_fptr, 0));

void* lam85548_fptr() // lam85548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85549 = arg_buffer[1];
//reading env and args
void* a8516485394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85549))[5];
//not do dummy comment
void* lst = (decode_clo(env85549))[4];
//not do dummy comment
void* length = (decode_clo(env85549))[3];
//not do dummy comment
void* kont85262 = (decode_clo(env85549))[2];
//not do dummy comment
void* _u43 = (decode_clo(env85549))[1];

//if-clause
bool if_guard86181 = is_true(a8516485394);
if(if_guard86181)
{
mpz_t* mpzvar86182 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86182, "0", 10);
void* x8516585395 = encode_mpz(mpzvar86182);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85262);
arg_buffer[2] = x8516585395;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85262))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar86183 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86183, "1", 10);
void* a8516685396 = encode_mpz(mpzvar86183);

//creating new closure instance
void** clo86185 = alloc_clo(lam85545_fptr, 4);

//setting env list
clo86185[1] = a8516685396;
clo86185[2] = _u43;
clo86185[3] = kont85262;
clo86185[4] = length;
void* f8526485397 = encode_clo(clo86185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8526485397;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85548 = encode_clo(alloc_clo(lam85548_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85550 = arg_buffer[1];
//reading env and args
void* kont85262 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo86187 = alloc_clo(lam85548_fptr, 5);

//setting env list
clo86187[1] = _u43;
clo86187[2] = kont85262;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo86187[3] = length;
clo86187[4] = lst;
clo86187[5] = cdr;
void* f8526585393 = encode_clo(clo86187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8526585393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam85551_fptr() // lam85551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85552 = arg_buffer[1];
//reading env and args
void* x8517085404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85266 = (decode_clo(env85552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85266);
arg_buffer[2] = x8517085404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85266))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85551 = encode_clo(alloc_clo(lam85551_fptr, 0));

void* lam85553_fptr() // lam85553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85554 = arg_buffer[1];
//reading env and args
void* a8517485412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8517285408 = (decode_clo(env85554))[3];
//not do dummy comment
void* kont85266 = (decode_clo(env85554))[2];
//not do dummy comment
void* cons = (decode_clo(env85554))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont85266;
arg_buffer[3] = a8517285408;
arg_buffer[4] = a8517485412;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85553 = encode_clo(alloc_clo(lam85553_fptr, 0));

void* lam85555_fptr() // lam85555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85556 = arg_buffer[1];
//reading env and args
void* a8517385410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env85556))[5];
//not do dummy comment
void* a8517285408 = (decode_clo(env85556))[4];
//not do dummy comment
void* kont85266 = (decode_clo(env85556))[3];
//not do dummy comment
void* proc = (decode_clo(env85556))[2];
//not do dummy comment
void* cons = (decode_clo(env85556))[1];

//creating new closure instance
void** clo86189 = alloc_clo(lam85553_fptr, 3);

//setting env list
clo86189[1] = cons;
clo86189[2] = kont85266;
clo86189[3] = a8517285408;
void* f8526885411 = encode_clo(clo86189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8526885411;
arg_buffer[3] = proc;
arg_buffer[4] = a8517385410;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85555 = encode_clo(alloc_clo(lam85555_fptr, 0));

void* lam85557_fptr() // lam85557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85558 = arg_buffer[1];
//reading env and args
void* a8517285408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85558))[6];
//not do dummy comment
void* lst = (decode_clo(env85558))[5];
//not do dummy comment
void* map = (decode_clo(env85558))[4];
//not do dummy comment
void* kont85266 = (decode_clo(env85558))[3];
//not do dummy comment
void* proc = (decode_clo(env85558))[2];
//not do dummy comment
void* cons = (decode_clo(env85558))[1];

//creating new closure instance
void** clo86191 = alloc_clo(lam85555_fptr, 5);

//setting env list
clo86191[1] = cons;
clo86191[2] = proc;
clo86191[3] = kont85266;
clo86191[4] = a8517285408;
clo86191[5] = map;
void* f8526985409 = encode_clo(clo86191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8526985409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85557 = encode_clo(alloc_clo(lam85557_fptr, 0));

void* lam85559_fptr() // lam85559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85560 = arg_buffer[1];
//reading env and args
void* a8517185406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85560))[6];
//not do dummy comment
void* lst = (decode_clo(env85560))[5];
//not do dummy comment
void* map = (decode_clo(env85560))[4];
//not do dummy comment
void* kont85266 = (decode_clo(env85560))[3];
//not do dummy comment
void* proc = (decode_clo(env85560))[2];
//not do dummy comment
void* cons = (decode_clo(env85560))[1];

//creating new closure instance
void** clo86193 = alloc_clo(lam85557_fptr, 6);

//setting env list
clo86193[1] = cons;
clo86193[2] = proc;
clo86193[3] = kont85266;
clo86193[4] = map;
clo86193[5] = lst;
clo86193[6] = cdr;
void* f8527085407 = encode_clo(clo86193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8527085407;
arg_buffer[3] = a8517185406;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85559 = encode_clo(alloc_clo(lam85559_fptr, 0));

void* lam85561_fptr() // lam85561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85562 = arg_buffer[1];
//reading env and args
void* a8516985402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env85562))[8];
//not do dummy comment
void* map = (decode_clo(env85562))[7];
//not do dummy comment
void* kont85266 = (decode_clo(env85562))[6];
//not do dummy comment
void* proc = (decode_clo(env85562))[5];
//not do dummy comment
void* car = (decode_clo(env85562))[4];
//not do dummy comment
void* cons = (decode_clo(env85562))[3];
//not do dummy comment
void* list = (decode_clo(env85562))[2];
//not do dummy comment
void* cdr = (decode_clo(env85562))[1];

//if-clause
bool if_guard86194 = is_true(a8516985402);
if(if_guard86194)
{

//creating new closure instance
void** clo86196 = alloc_clo(lam85551_fptr, 1);

//setting env list
clo86196[1] = kont85266;
void* f8526785403 = encode_clo(clo86196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8526785403;
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
void** clo86198 = alloc_clo(lam85559_fptr, 6);

//setting env list
clo86198[1] = cons;
clo86198[2] = proc;
clo86198[3] = kont85266;
clo86198[4] = map;
clo86198[5] = lst;
clo86198[6] = cdr;
void* f8527185405 = encode_clo(clo86198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8527185405;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85561 = encode_clo(alloc_clo(lam85561_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85563 = arg_buffer[1];
//reading env and args
void* kont85266 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86200 = alloc_clo(lam85561_fptr, 8);

//setting env list
clo86200[1] = cdr;
clo86200[2] = list;
clo86200[3] = cons;
clo86200[4] = car;
clo86200[5] = proc;
clo86200[6] = kont85266;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo86200[7] = map;
clo86200[8] = lst;
void* f8527285401 = encode_clo(clo86200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8527285401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam85564_fptr() // lam85564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85565 = arg_buffer[1];
//reading env and args
void* x8517685416 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85273 = (decode_clo(env85565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85273);
arg_buffer[2] = x8517685416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85273))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85564 = encode_clo(alloc_clo(lam85564_fptr, 0));

void* lam85566_fptr() // lam85566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85567 = arg_buffer[1];
//reading env and args
void* a8518185426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85273 = (decode_clo(env85567))[3];
//not do dummy comment
void* a8517985422 = (decode_clo(env85567))[2];
//not do dummy comment
void* cons = (decode_clo(env85567))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont85273;
arg_buffer[3] = a8517985422;
arg_buffer[4] = a8518185426;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85566 = encode_clo(alloc_clo(lam85566_fptr, 0));

void* lam85568_fptr() // lam85568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85569 = arg_buffer[1];
//reading env and args
void* a8518085424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85273 = (decode_clo(env85569))[5];
//not do dummy comment
void* a8517985422 = (decode_clo(env85569))[4];
//not do dummy comment
void* op = (decode_clo(env85569))[3];
//not do dummy comment
void* filter = (decode_clo(env85569))[2];
//not do dummy comment
void* cons = (decode_clo(env85569))[1];

//creating new closure instance
void** clo86202 = alloc_clo(lam85566_fptr, 3);

//setting env list
clo86202[1] = cons;
clo86202[2] = a8517985422;
clo86202[3] = kont85273;
void* f8527585425 = encode_clo(clo86202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8527585425;
arg_buffer[3] = op;
arg_buffer[4] = a8518085424;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85568 = encode_clo(alloc_clo(lam85568_fptr, 0));

void* lam85570_fptr() // lam85570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85571 = arg_buffer[1];
//reading env and args
void* a8517985422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85571))[6];
//not do dummy comment
void* kont85273 = (decode_clo(env85571))[5];
//not do dummy comment
void* lst = (decode_clo(env85571))[4];
//not do dummy comment
void* op = (decode_clo(env85571))[3];
//not do dummy comment
void* filter = (decode_clo(env85571))[2];
//not do dummy comment
void* cons = (decode_clo(env85571))[1];

//creating new closure instance
void** clo86204 = alloc_clo(lam85568_fptr, 5);

//setting env list
clo86204[1] = cons;
clo86204[2] = filter;
clo86204[3] = op;
clo86204[4] = a8517985422;
clo86204[5] = kont85273;
void* f8527685423 = encode_clo(clo86204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8527685423;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85570 = encode_clo(alloc_clo(lam85570_fptr, 0));

void* lam85572_fptr() // lam85572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85573 = arg_buffer[1];
//reading env and args
void* a8518285428 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85273 = (decode_clo(env85573))[3];
//not do dummy comment
void* op = (decode_clo(env85573))[2];
//not do dummy comment
void* filter = (decode_clo(env85573))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont85273;
arg_buffer[3] = op;
arg_buffer[4] = a8518285428;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85572 = encode_clo(alloc_clo(lam85572_fptr, 0));

void* lam85574_fptr() // lam85574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85575 = arg_buffer[1];
//reading env and args
void* a8517885420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85575))[7];
//not do dummy comment
void* kont85273 = (decode_clo(env85575))[6];
//not do dummy comment
void* lst = (decode_clo(env85575))[5];
//not do dummy comment
void* op = (decode_clo(env85575))[4];
//not do dummy comment
void* cons = (decode_clo(env85575))[3];
//not do dummy comment
void* filter = (decode_clo(env85575))[2];
//not do dummy comment
void* car = (decode_clo(env85575))[1];

//if-clause
bool if_guard86205 = is_true(a8517885420);
if(if_guard86205)
{

//creating new closure instance
void** clo86207 = alloc_clo(lam85570_fptr, 6);

//setting env list
clo86207[1] = cons;
clo86207[2] = filter;
clo86207[3] = op;
clo86207[4] = lst;
clo86207[5] = kont85273;
clo86207[6] = cdr;
void* f8527785421 = encode_clo(clo86207);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8527785421;
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
void** clo86209 = alloc_clo(lam85572_fptr, 3);

//setting env list
clo86209[1] = filter;
clo86209[2] = op;
clo86209[3] = kont85273;
void* f8527885427 = encode_clo(clo86209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8527885427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85574 = encode_clo(alloc_clo(lam85574_fptr, 0));

void* lam85576_fptr() // lam85576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85577 = arg_buffer[1];
//reading env and args
void* a8517785418 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85577))[7];
//not do dummy comment
void* kont85273 = (decode_clo(env85577))[6];
//not do dummy comment
void* lst = (decode_clo(env85577))[5];
//not do dummy comment
void* op = (decode_clo(env85577))[4];
//not do dummy comment
void* cons = (decode_clo(env85577))[3];
//not do dummy comment
void* filter = (decode_clo(env85577))[2];
//not do dummy comment
void* car = (decode_clo(env85577))[1];

//creating new closure instance
void** clo86211 = alloc_clo(lam85574_fptr, 7);

//setting env list
clo86211[1] = car;
clo86211[2] = filter;
clo86211[3] = cons;
clo86211[4] = op;
clo86211[5] = lst;
clo86211[6] = kont85273;
clo86211[7] = cdr;
void* f8527985419 = encode_clo(clo86211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8527985419;
arg_buffer[3] = a8517785418;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85576 = encode_clo(alloc_clo(lam85576_fptr, 0));

void* lam85578_fptr() // lam85578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85579 = arg_buffer[1];
//reading env and args
void* a8517585414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85273 = (decode_clo(env85579))[8];
//not do dummy comment
void* lst = (decode_clo(env85579))[7];
//not do dummy comment
void* op = (decode_clo(env85579))[6];
//not do dummy comment
void* cons = (decode_clo(env85579))[5];
//not do dummy comment
void* list = (decode_clo(env85579))[4];
//not do dummy comment
void* cdr = (decode_clo(env85579))[3];
//not do dummy comment
void* filter = (decode_clo(env85579))[2];
//not do dummy comment
void* car = (decode_clo(env85579))[1];

//if-clause
bool if_guard86212 = is_true(a8517585414);
if(if_guard86212)
{

//creating new closure instance
void** clo86214 = alloc_clo(lam85564_fptr, 1);

//setting env list
clo86214[1] = kont85273;
void* f8527485415 = encode_clo(clo86214);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8527485415;
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
void** clo86216 = alloc_clo(lam85576_fptr, 7);

//setting env list
clo86216[1] = car;
clo86216[2] = filter;
clo86216[3] = cons;
clo86216[4] = op;
clo86216[5] = lst;
clo86216[6] = kont85273;
clo86216[7] = cdr;
void* f8528085417 = encode_clo(clo86216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8528085417;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85578 = encode_clo(alloc_clo(lam85578_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85580 = arg_buffer[1];
//reading env and args
void* kont85273 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86218 = alloc_clo(lam85578_fptr, 8);

//setting env list
clo86218[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo86218[2] = filter;
clo86218[3] = cdr;
clo86218[4] = list;
clo86218[5] = cons;
clo86218[6] = op;
clo86218[7] = lst;
clo86218[8] = kont85273;
void* f8528185413 = encode_clo(clo86218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8528185413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam85581_fptr() // lam85581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85582 = arg_buffer[1];
//reading env and args
void* a8518785436 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8518585433 = (decode_clo(env85582))[3];
//not do dummy comment
void* drop = (decode_clo(env85582))[2];
//not do dummy comment
void* kont85282 = (decode_clo(env85582))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont85282;
arg_buffer[3] = a8518585433;
arg_buffer[4] = a8518785436;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85581 = encode_clo(alloc_clo(lam85581_fptr, 0));

void* lam85584_fptr() // lam85584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85585 = arg_buffer[1];
//reading env and args
void* a8518585433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env85585))[4];
//not do dummy comment
void* kont85282 = (decode_clo(env85585))[3];
//not do dummy comment
void* n = (decode_clo(env85585))[2];
//not do dummy comment
void* _u45 = (decode_clo(env85585))[1];
mpz_t* mpzvar86219 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86219, "1", 10);
void* a8518685434 = encode_mpz(mpzvar86219);

//creating new closure instance
void** clo86221 = alloc_clo(lam85581_fptr, 3);

//setting env list
clo86221[1] = kont85282;
clo86221[2] = drop;
clo86221[3] = a8518585433;
void* f8528385435 = encode_clo(clo86221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8528385435;
arg_buffer[3] = n;
arg_buffer[4] = a8518685434;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85584 = encode_clo(alloc_clo(lam85584_fptr, 0));

void* lam85586_fptr() // lam85586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85587 = arg_buffer[1];
//reading env and args
void* a8518485431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85587))[6];
//not do dummy comment
void* kont85282 = (decode_clo(env85587))[5];
//not do dummy comment
void* n = (decode_clo(env85587))[4];
//not do dummy comment
void* _u45 = (decode_clo(env85587))[3];
//not do dummy comment
void* lst = (decode_clo(env85587))[2];
//not do dummy comment
void* drop = (decode_clo(env85587))[1];

//if-clause
bool if_guard86222 = is_true(a8518485431);
if(if_guard86222)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85282);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85282))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86224 = alloc_clo(lam85584_fptr, 4);

//setting env list
clo86224[1] = _u45;
clo86224[2] = n;
clo86224[3] = kont85282;
clo86224[4] = drop;
void* f8528485432 = encode_clo(clo86224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8528485432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85586 = encode_clo(alloc_clo(lam85586_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85589 = arg_buffer[1];
//reading env and args
void* kont85282 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar86225 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar86225, "0", 10);
void* a8518385429 = encode_mpz(mpzvar86225);

//creating new closure instance
void** clo86227 = alloc_clo(lam85586_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo86227[1] = drop;
clo86227[2] = lst;
clo86227[3] = _u45;
clo86227[4] = n;
clo86227[5] = kont85282;
clo86227[6] = cdr;
void* f8528585430 = encode_clo(clo86227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8528585430;
arg_buffer[3] = n;
arg_buffer[4] = a8518385429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam85590_fptr() // lam85590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85591 = arg_buffer[1];
//reading env and args
void* a8519185444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8518985440 = (decode_clo(env85591))[3];
//not do dummy comment
void* proc = (decode_clo(env85591))[2];
//not do dummy comment
void* kont85286 = (decode_clo(env85591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont85286;
arg_buffer[3] = a8518985440;
arg_buffer[4] = a8519185444;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85590 = encode_clo(alloc_clo(lam85590_fptr, 0));

void* lam85592_fptr() // lam85592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85593 = arg_buffer[1];
//reading env and args
void* a8519085442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env85593))[5];
//not do dummy comment
void* a8518985440 = (decode_clo(env85593))[4];
//not do dummy comment
void* kont85286 = (decode_clo(env85593))[3];
//not do dummy comment
void* proc = (decode_clo(env85593))[2];
//not do dummy comment
void* acc = (decode_clo(env85593))[1];

//creating new closure instance
void** clo86229 = alloc_clo(lam85590_fptr, 3);

//setting env list
clo86229[1] = kont85286;
clo86229[2] = proc;
clo86229[3] = a8518985440;
void* f8528785443 = encode_clo(clo86229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8528785443;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8519085442;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85592 = encode_clo(alloc_clo(lam85592_fptr, 0));

void* lam85594_fptr() // lam85594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85595 = arg_buffer[1];
//reading env and args
void* a8518985440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85595))[6];
//not do dummy comment
void* kont85286 = (decode_clo(env85595))[5];
//not do dummy comment
void* foldr = (decode_clo(env85595))[4];
//not do dummy comment
void* lst = (decode_clo(env85595))[3];
//not do dummy comment
void* proc = (decode_clo(env85595))[2];
//not do dummy comment
void* acc = (decode_clo(env85595))[1];

//creating new closure instance
void** clo86231 = alloc_clo(lam85592_fptr, 5);

//setting env list
clo86231[1] = acc;
clo86231[2] = proc;
clo86231[3] = kont85286;
clo86231[4] = a8518985440;
clo86231[5] = foldr;
void* f8528885441 = encode_clo(clo86231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8528885441;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85594 = encode_clo(alloc_clo(lam85594_fptr, 0));

void* lam85596_fptr() // lam85596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85597 = arg_buffer[1];
//reading env and args
void* a8518885438 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85597))[7];
//not do dummy comment
void* car = (decode_clo(env85597))[6];
//not do dummy comment
void* kont85286 = (decode_clo(env85597))[5];
//not do dummy comment
void* foldr = (decode_clo(env85597))[4];
//not do dummy comment
void* lst = (decode_clo(env85597))[3];
//not do dummy comment
void* proc = (decode_clo(env85597))[2];
//not do dummy comment
void* acc = (decode_clo(env85597))[1];

//if-clause
bool if_guard86232 = is_true(a8518885438);
if(if_guard86232)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85286);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85286))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86234 = alloc_clo(lam85594_fptr, 6);

//setting env list
clo86234[1] = acc;
clo86234[2] = proc;
clo86234[3] = lst;
clo86234[4] = foldr;
clo86234[5] = kont85286;
clo86234[6] = cdr;
void* f8528985439 = encode_clo(clo86234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8528985439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85596 = encode_clo(alloc_clo(lam85596_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85598 = arg_buffer[1];
//reading env and args
void* kont85286 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo86236 = alloc_clo(lam85596_fptr, 7);

//setting env list
clo86236[1] = acc;
clo86236[2] = proc;
clo86236[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo86236[4] = foldr;
clo86236[5] = kont85286;
clo86236[6] = car;
clo86236[7] = cdr;
void* f8529085437 = encode_clo(clo86236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8529085437;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam85599_fptr() // lam85599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85600 = arg_buffer[1];
//reading env and args
void* a8519585452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8519385448 = (decode_clo(env85600))[3];
//not do dummy comment
void* kont85291 = (decode_clo(env85600))[2];
//not do dummy comment
void* cons = (decode_clo(env85600))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont85291;
arg_buffer[3] = a8519385448;
arg_buffer[4] = a8519585452;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85599 = encode_clo(alloc_clo(lam85599_fptr, 0));

void* lam85601_fptr() // lam85601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85602 = arg_buffer[1];
//reading env and args
void* a8519485450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8519385448 = (decode_clo(env85602))[5];
//not do dummy comment
void* kont85291 = (decode_clo(env85602))[4];
//not do dummy comment
void* append = (decode_clo(env85602))[3];
//not do dummy comment
void* lst2 = (decode_clo(env85602))[2];
//not do dummy comment
void* cons = (decode_clo(env85602))[1];

//creating new closure instance
void** clo86238 = alloc_clo(lam85599_fptr, 3);

//setting env list
clo86238[1] = cons;
clo86238[2] = kont85291;
clo86238[3] = a8519385448;
void* f8529285451 = encode_clo(clo86238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8529285451;
arg_buffer[3] = a8519485450;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85601 = encode_clo(alloc_clo(lam85601_fptr, 0));

void* lam85603_fptr() // lam85603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85604 = arg_buffer[1];
//reading env and args
void* a8519385448 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85604))[6];
//not do dummy comment
void* kont85291 = (decode_clo(env85604))[5];
//not do dummy comment
void* append = (decode_clo(env85604))[4];
//not do dummy comment
void* lst2 = (decode_clo(env85604))[3];
//not do dummy comment
void* lst1 = (decode_clo(env85604))[2];
//not do dummy comment
void* cons = (decode_clo(env85604))[1];

//creating new closure instance
void** clo86240 = alloc_clo(lam85601_fptr, 5);

//setting env list
clo86240[1] = cons;
clo86240[2] = lst2;
clo86240[3] = append;
clo86240[4] = kont85291;
clo86240[5] = a8519385448;
void* f8529385449 = encode_clo(clo86240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8529385449;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85603 = encode_clo(alloc_clo(lam85603_fptr, 0));

void* lam85605_fptr() // lam85605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85606 = arg_buffer[1];
//reading env and args
void* a8519285446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env85606))[7];
//not do dummy comment
void* kont85291 = (decode_clo(env85606))[6];
//not do dummy comment
void* append = (decode_clo(env85606))[5];
//not do dummy comment
void* lst2 = (decode_clo(env85606))[4];
//not do dummy comment
void* cons = (decode_clo(env85606))[3];
//not do dummy comment
void* lst1 = (decode_clo(env85606))[2];
//not do dummy comment
void* car = (decode_clo(env85606))[1];

//if-clause
bool if_guard86241 = is_true(a8519285446);
if(if_guard86241)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85291);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85291))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo86243 = alloc_clo(lam85603_fptr, 6);

//setting env list
clo86243[1] = cons;
clo86243[2] = lst1;
clo86243[3] = lst2;
clo86243[4] = append;
clo86243[5] = kont85291;
clo86243[6] = cdr;
void* f8529485447 = encode_clo(clo86243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8529485447;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam85605 = encode_clo(alloc_clo(lam85605_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85607 = arg_buffer[1];
//reading env and args
void* kont85291 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo86245 = alloc_clo(lam85605_fptr, 7);

//setting env list
clo86245[1] = car;
clo86245[2] = lst1;
clo86245[3] = cons;
clo86245[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo86245[5] = append;
clo86245[6] = kont85291;
clo86245[7] = cdr;
void* f8529585445 = encode_clo(clo86245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8529585445;
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
void* _85608 = arg_buffer[1];
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

void* kont8529685453 = prim_car(lst);
void* lst85454 = prim_cdr(lst);
void* x8519685455 = apply_prim_hash(lst85454);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8529685453);
arg_buffer[2] = x8519685455;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8529685453))[0]);
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
void* _85609 = arg_buffer[1];
//reading env and args
void* kont85298 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8519785456 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85298);
arg_buffer[2] = x8519785456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85298))[0]);
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
void* _85610 = arg_buffer[1];
//reading env and args
void* kont85299 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8519885457 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85299);
arg_buffer[2] = x8519885457;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85299))[0]);
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
void* _85611 = arg_buffer[1];
//reading env and args
void* kont85300 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8519985458 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85300);
arg_buffer[2] = x8519985458;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85300))[0]);
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
void* _85612 = arg_buffer[1];
//reading env and args
void* kont85301 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8520085459 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85301);
arg_buffer[2] = x8520085459;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85301))[0]);
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
void* _85616 = arg_buffer[1];
//reading env and args
void* kont85302 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar86246 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar86246, "1.4", 10);
void* a8520185460 = encode_mpf(mpfvar86246);
mpf_t* mpfvar86247 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar86247, "2.5", 10);
void* a8520285461 = encode_mpf(mpfvar86247);
mpf_t* mpfvar86248 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar86248, "1.0", 10);
void* a8520385462 = encode_mpf(mpfvar86248);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont85302;
arg_buffer[3] = a8520185460;
arg_buffer[4] = a8520285461;
arg_buffer[5] = a8520385462;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam85617_fptr() // lam85617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env85618 = arg_buffer[1];
//reading env and args
void* x8520485464 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont85303 = (decode_clo(env85618))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont85303);
arg_buffer[2] = x8520485464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont85303))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam85617 = encode_clo(alloc_clo(lam85617_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _85619 = arg_buffer[1];
//reading env and args
void* kont85303 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo86250 = alloc_clo(lam85617_fptr, 1);

//setting env list
clo86250[1] = kont85303;
void* f8530485463 = encode_clo(clo86250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8530485463;
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

