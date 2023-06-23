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
void* _91486 = arg_buffer[1];
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

void* kont9122691326 = prim_car(lst);
void* lst91327 = prim_cdr(lst);
void* x9113991328 = apply_prim__u43(lst91327);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9122691326);
arg_buffer[2] = x9113991328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9122691326))[0]);
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
void* _91487 = arg_buffer[1];
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

void* kont9122891329 = prim_car(lst);
void* lst91330 = prim_cdr(lst);
void* x9114091331 = apply_prim__u45(lst91330);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9122891329);
arg_buffer[2] = x9114091331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9122891329))[0]);
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
void* _91488 = arg_buffer[1];
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

void* kont9123091332 = prim_car(lst);
void* lst91333 = prim_cdr(lst);
void* x9114191334 = apply_prim__u42(lst91333);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9123091332);
arg_buffer[2] = x9114191334;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123091332))[0]);
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
void* _91489 = arg_buffer[1];
//reading env and args
void* kont91232 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9114291335 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91232);
arg_buffer[2] = x9114291335;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91232))[0]);
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
void* _91490 = arg_buffer[1];
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

void* kont9123391336 = prim_car(lst);
void* lst91337 = prim_cdr(lst);
void* x9114391338 = apply_prim__u47(lst91337);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9123391336);
arg_buffer[2] = x9114391338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123391336))[0]);
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
void* _91491 = arg_buffer[1];
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

void* kont9123591339 = prim_car(lst);
void* lst91340 = prim_cdr(lst);
void* x9114491341 = apply_prim__u61(lst91340);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9123591339);
arg_buffer[2] = x9114491341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123591339))[0]);
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
void* _91492 = arg_buffer[1];
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

void* kont9123791342 = prim_car(lst);
void* lst91343 = prim_cdr(lst);
void* x9114591344 = apply_prim__u62(lst91343);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9123791342);
arg_buffer[2] = x9114591344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123791342))[0]);
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
void* _91493 = arg_buffer[1];
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

void* kont9123991345 = prim_car(lst);
void* lst91346 = prim_cdr(lst);
void* x9114691347 = apply_prim__u60(lst91346);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9123991345);
arg_buffer[2] = x9114691347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9123991345))[0]);
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
void* _91494 = arg_buffer[1];
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

void* kont9124191348 = prim_car(lst);
void* lst91349 = prim_cdr(lst);
void* x9114791350 = apply_prim__u60_u61(lst91349);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9124191348);
arg_buffer[2] = x9114791350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9124191348))[0]);
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
void* _91495 = arg_buffer[1];
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

void* kont9124391351 = prim_car(lst);
void* lst91352 = prim_cdr(lst);
void* x9114891353 = apply_prim__u62_u61(lst91352);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9124391351);
arg_buffer[2] = x9114891353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9124391351))[0]);
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
void* _91496 = arg_buffer[1];
//reading env and args
void* kont91245 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9114991354 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91245);
arg_buffer[2] = x9114991354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91245))[0]);
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
void* _91497 = arg_buffer[1];
//reading env and args
void* kont91246 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9115091355 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91246);
arg_buffer[2] = x9115091355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91246))[0]);
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
void* _91498 = arg_buffer[1];
//reading env and args
void* kont91247 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9115191356 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91247);
arg_buffer[2] = x9115191356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91247))[0]);
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
void* _91499 = arg_buffer[1];
//reading env and args
void* kont91248 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9115291357 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91248);
arg_buffer[2] = x9115291357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91248))[0]);
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
void* _91500 = arg_buffer[1];
//reading env and args
void* kont91249 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9115391358 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91249);
arg_buffer[2] = x9115391358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91249))[0]);
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
void* _91501 = arg_buffer[1];
//reading env and args
void* kont91250 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9115491359 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91250);
arg_buffer[2] = x9115491359;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91250))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam91502_fptr() // lam91502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91503 = arg_buffer[1];
//reading env and args
void* a9115791363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env91503))[3];
//not do dummy comment
void* a9115591360 = (decode_clo(env91503))[2];
//not do dummy comment
void* kont91251 = (decode_clo(env91503))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont91251;
arg_buffer[3] = a9115591360;
arg_buffer[4] = a9115791363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91502 = encode_clo(alloc_clo(lam91502_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91506 = arg_buffer[1];
//reading env and args
void* kont91251 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar91641 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91641, "0", 10);
void* a9115591360 = encode_mpz(mpzvar91641);
mpz_t* mpzvar91642 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91642, "2", 10);
void* a9115691361 = encode_mpz(mpzvar91642);

//creating new closure instance
void** clo91644 = alloc_clo(lam91502_fptr, 3);

//setting env list
clo91644[1] = kont91251;
clo91644[2] = a9115591360;
clo91644[3] = equal_u63;
void* f9125291362 = encode_clo(clo91644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9125291362;
arg_buffer[3] = x;
arg_buffer[4] = a9115691361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam91507_fptr() // lam91507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91508 = arg_buffer[1];
//reading env and args
void* a9116091367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9115891364 = (decode_clo(env91508))[3];
//not do dummy comment
void* kont91253 = (decode_clo(env91508))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env91508))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont91253;
arg_buffer[3] = a9115891364;
arg_buffer[4] = a9116091367;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91507 = encode_clo(alloc_clo(lam91507_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91511 = arg_buffer[1];
//reading env and args
void* kont91253 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar91645 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91645, "1", 10);
void* a9115891364 = encode_mpz(mpzvar91645);
mpz_t* mpzvar91646 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91646, "2", 10);
void* a9115991365 = encode_mpz(mpzvar91646);

//creating new closure instance
void** clo91648 = alloc_clo(lam91507_fptr, 3);

//setting env list
clo91648[1] = equal_u63;
clo91648[2] = kont91253;
clo91648[3] = a9115891364;
void* f9125491366 = encode_clo(clo91648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9125491366;
arg_buffer[3] = x;
arg_buffer[4] = a9115991365;
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
void* _91512 = arg_buffer[1];
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

void* kont9125591368 = prim_car(x);
void* x91369 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9125591368);
arg_buffer[2] = x91369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9125591368))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam91515_fptr() // lam91515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91516 = arg_buffer[1];
//reading env and args
void* a9116691379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91257 = (decode_clo(env91516))[3];
//not do dummy comment
void* x = (decode_clo(env91516))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env91516))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont91257;
arg_buffer[3] = x;
arg_buffer[4] = a9116691379;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91515 = encode_clo(alloc_clo(lam91515_fptr, 0));

void* lam91517_fptr() // lam91517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91518 = arg_buffer[1];
//reading env and args
void* a9116491376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91518))[5];
//not do dummy comment
void* lst = (decode_clo(env91518))[4];
//not do dummy comment
void* kont91257 = (decode_clo(env91518))[3];
//not do dummy comment
void* x = (decode_clo(env91518))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env91518))[1];

//if-clause
bool if_guard91649 = is_true(a9116491376);
if(if_guard91649)
{
void* x9116591377 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91257);
arg_buffer[2] = x9116591377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91257))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo91651 = alloc_clo(lam91515_fptr, 3);

//setting env list
clo91651[1] = member_u63;
clo91651[2] = x;
clo91651[3] = kont91257;
void* f9125891378 = encode_clo(clo91651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9125891378;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91517 = encode_clo(alloc_clo(lam91517_fptr, 0));

void* lam91519_fptr() // lam91519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91520 = arg_buffer[1];
//reading env and args
void* a9116391374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91520))[6];
//not do dummy comment
void* lst = (decode_clo(env91520))[5];
//not do dummy comment
void* kont91257 = (decode_clo(env91520))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env91520))[3];
//not do dummy comment
void* x = (decode_clo(env91520))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env91520))[1];

//creating new closure instance
void** clo91653 = alloc_clo(lam91517_fptr, 5);

//setting env list
clo91653[1] = member_u63;
clo91653[2] = x;
clo91653[3] = kont91257;
clo91653[4] = lst;
clo91653[5] = cdr;
void* f9125991375 = encode_clo(clo91653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9125991375;
arg_buffer[3] = a9116391374;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91519 = encode_clo(alloc_clo(lam91519_fptr, 0));

void* lam91521_fptr() // lam91521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91522 = arg_buffer[1];
//reading env and args
void* a9116191371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91522))[7];
//not do dummy comment
void* lst = (decode_clo(env91522))[6];
//not do dummy comment
void* kont91257 = (decode_clo(env91522))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env91522))[4];
//not do dummy comment
void* x = (decode_clo(env91522))[3];
//not do dummy comment
void* car = (decode_clo(env91522))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env91522))[1];

//if-clause
bool if_guard91654 = is_true(a9116191371);
if(if_guard91654)
{
void* x9116291372 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91257);
arg_buffer[2] = x9116291372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91257))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo91656 = alloc_clo(lam91519_fptr, 6);

//setting env list
clo91656[1] = member_u63;
clo91656[2] = x;
clo91656[3] = equal_u63;
clo91656[4] = kont91257;
clo91656[5] = lst;
clo91656[6] = cdr;
void* f9126091373 = encode_clo(clo91656);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9126091373;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91521 = encode_clo(alloc_clo(lam91521_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91523 = arg_buffer[1];
//reading env and args
void* kont91257 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo91658 = alloc_clo(lam91521_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo91658[1] = member_u63;
clo91658[2] = car;
clo91658[3] = x;
clo91658[4] = equal_u63;
clo91658[5] = kont91257;
clo91658[6] = lst;
clo91658[7] = cdr;
void* f9126191370 = encode_clo(clo91658);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9126191370;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam91524_fptr() // lam91524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91525 = arg_buffer[1];
//reading env and args
void* a9117091387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9116991385 = (decode_clo(env91525))[4];
//not do dummy comment
void* foldl = (decode_clo(env91525))[3];
//not do dummy comment
void* kont91262 = (decode_clo(env91525))[2];
//not do dummy comment
void* fun = (decode_clo(env91525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont91262;
arg_buffer[3] = fun;
arg_buffer[4] = a9116991385;
arg_buffer[5] = a9117091387;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91524 = encode_clo(alloc_clo(lam91524_fptr, 0));

void* lam91526_fptr() // lam91526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91527 = arg_buffer[1];
//reading env and args
void* a9116991385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91527))[5];
//not do dummy comment
void* lst = (decode_clo(env91527))[4];
//not do dummy comment
void* foldl = (decode_clo(env91527))[3];
//not do dummy comment
void* kont91262 = (decode_clo(env91527))[2];
//not do dummy comment
void* fun = (decode_clo(env91527))[1];

//creating new closure instance
void** clo91660 = alloc_clo(lam91524_fptr, 4);

//setting env list
clo91660[1] = fun;
clo91660[2] = kont91262;
clo91660[3] = foldl;
clo91660[4] = a9116991385;
void* f9126391386 = encode_clo(clo91660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9126391386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91526 = encode_clo(alloc_clo(lam91526_fptr, 0));

void* lam91528_fptr() // lam91528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91529 = arg_buffer[1];
//reading env and args
void* a9116891383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91529))[6];
//not do dummy comment
void* lst = (decode_clo(env91529))[5];
//not do dummy comment
void* acc = (decode_clo(env91529))[4];
//not do dummy comment
void* foldl = (decode_clo(env91529))[3];
//not do dummy comment
void* kont91262 = (decode_clo(env91529))[2];
//not do dummy comment
void* fun = (decode_clo(env91529))[1];

//creating new closure instance
void** clo91662 = alloc_clo(lam91526_fptr, 5);

//setting env list
clo91662[1] = fun;
clo91662[2] = kont91262;
clo91662[3] = foldl;
clo91662[4] = lst;
clo91662[5] = cdr;
void* f9126491384 = encode_clo(clo91662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9126491384;
arg_buffer[3] = a9116891383;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91528 = encode_clo(alloc_clo(lam91528_fptr, 0));

void* lam91530_fptr() // lam91530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91531 = arg_buffer[1];
//reading env and args
void* a9116791381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91531))[7];
//not do dummy comment
void* lst = (decode_clo(env91531))[6];
//not do dummy comment
void* acc = (decode_clo(env91531))[5];
//not do dummy comment
void* car = (decode_clo(env91531))[4];
//not do dummy comment
void* foldl = (decode_clo(env91531))[3];
//not do dummy comment
void* kont91262 = (decode_clo(env91531))[2];
//not do dummy comment
void* fun = (decode_clo(env91531))[1];

//if-clause
bool if_guard91663 = is_true(a9116791381);
if(if_guard91663)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91262);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91262))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo91665 = alloc_clo(lam91528_fptr, 6);

//setting env list
clo91665[1] = fun;
clo91665[2] = kont91262;
clo91665[3] = foldl;
clo91665[4] = acc;
clo91665[5] = lst;
clo91665[6] = cdr;
void* f9126591382 = encode_clo(clo91665);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9126591382;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91530 = encode_clo(alloc_clo(lam91530_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91532 = arg_buffer[1];
//reading env and args
void* kont91262 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo91667 = alloc_clo(lam91530_fptr, 7);

//setting env list
clo91667[1] = fun;
clo91667[2] = kont91262;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo91667[3] = foldl;
clo91667[4] = car;
clo91667[5] = acc;
clo91667[6] = lst;
clo91667[7] = cdr;
void* f9126691380 = encode_clo(clo91667);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9126691380;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam91533_fptr() // lam91533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91534 = arg_buffer[1];
//reading env and args
void* a9117491395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91534))[3];
//not do dummy comment
void* a9117291391 = (decode_clo(env91534))[2];
//not do dummy comment
void* kont91267 = (decode_clo(env91534))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont91267;
arg_buffer[3] = a9117291391;
arg_buffer[4] = a9117491395;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91533 = encode_clo(alloc_clo(lam91533_fptr, 0));

void* lam91535_fptr() // lam91535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91536 = arg_buffer[1];
//reading env and args
void* a9117391393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91536))[5];
//not do dummy comment
void* a9117291391 = (decode_clo(env91536))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91536))[3];
//not do dummy comment
void* cons = (decode_clo(env91536))[2];
//not do dummy comment
void* kont91267 = (decode_clo(env91536))[1];

//creating new closure instance
void** clo91669 = alloc_clo(lam91533_fptr, 3);

//setting env list
clo91669[1] = kont91267;
clo91669[2] = a9117291391;
clo91669[3] = reverse_u45helper;
void* f9126891394 = encode_clo(clo91669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9126891394;
arg_buffer[3] = a9117391393;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91535 = encode_clo(alloc_clo(lam91535_fptr, 0));

void* lam91537_fptr() // lam91537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91538 = arg_buffer[1];
//reading env and args
void* a9117291391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91538))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91538))[5];
//not do dummy comment
void* lst2 = (decode_clo(env91538))[4];
//not do dummy comment
void* car = (decode_clo(env91538))[3];
//not do dummy comment
void* cons = (decode_clo(env91538))[2];
//not do dummy comment
void* kont91267 = (decode_clo(env91538))[1];

//creating new closure instance
void** clo91671 = alloc_clo(lam91535_fptr, 5);

//setting env list
clo91671[1] = kont91267;
clo91671[2] = cons;
clo91671[3] = lst2;
clo91671[4] = a9117291391;
clo91671[5] = reverse_u45helper;
void* f9126991392 = encode_clo(clo91671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9126991392;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91537 = encode_clo(alloc_clo(lam91537_fptr, 0));

void* lam91539_fptr() // lam91539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91540 = arg_buffer[1];
//reading env and args
void* a9117191389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91540))[7];
//not do dummy comment
void* lst = (decode_clo(env91540))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91540))[5];
//not do dummy comment
void* lst2 = (decode_clo(env91540))[4];
//not do dummy comment
void* car = (decode_clo(env91540))[3];
//not do dummy comment
void* cons = (decode_clo(env91540))[2];
//not do dummy comment
void* kont91267 = (decode_clo(env91540))[1];

//if-clause
bool if_guard91672 = is_true(a9117191389);
if(if_guard91672)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91267);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91267))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo91674 = alloc_clo(lam91537_fptr, 6);

//setting env list
clo91674[1] = kont91267;
clo91674[2] = cons;
clo91674[3] = car;
clo91674[4] = lst2;
clo91674[5] = reverse_u45helper;
clo91674[6] = lst;
void* f9127091390 = encode_clo(clo91674);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9127091390;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91539 = encode_clo(alloc_clo(lam91539_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91541 = arg_buffer[1];
//reading env and args
void* kont91267 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo91676 = alloc_clo(lam91539_fptr, 7);

//setting env list
clo91676[1] = kont91267;
clo91676[2] = cons;
clo91676[3] = car;
clo91676[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo91676[5] = reverse_u45helper;
clo91676[6] = lst;
clo91676[7] = cdr;
void* f9127191388 = encode_clo(clo91676);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9127191388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam91542_fptr() // lam91542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91543 = arg_buffer[1];
//reading env and args
void* a9117591397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91543))[3];
//not do dummy comment
void* lst = (decode_clo(env91543))[2];
//not do dummy comment
void* kont91272 = (decode_clo(env91543))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont91272;
arg_buffer[3] = lst;
arg_buffer[4] = a9117591397;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91542 = encode_clo(alloc_clo(lam91542_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91544 = arg_buffer[1];
//reading env and args
void* kont91272 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo91678 = alloc_clo(lam91542_fptr, 3);

//setting env list
clo91678[1] = kont91272;
clo91678[2] = lst;
clo91678[3] = reverse_u45helper;
void* f9127391396 = encode_clo(clo91678);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9127391396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam91545_fptr() // lam91545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91546 = arg_buffer[1];
//reading env and args
void* x9117891402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91274 = (decode_clo(env91546))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91274);
arg_buffer[2] = x9117891402;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91274))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91545 = encode_clo(alloc_clo(lam91545_fptr, 0));

void* lam91547_fptr() // lam91547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91548 = arg_buffer[1];
//reading env and args
void* a9118391411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91274 = (decode_clo(env91548))[4];
//not do dummy comment
void* a9117991404 = (decode_clo(env91548))[3];
//not do dummy comment
void* a9118191407 = (decode_clo(env91548))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env91548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont91274;
arg_buffer[3] = a9117991404;
arg_buffer[4] = a9118191407;
arg_buffer[5] = a9118391411;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91547 = encode_clo(alloc_clo(lam91547_fptr, 0));

void* lam91549_fptr() // lam91549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91550 = arg_buffer[1];
//reading env and args
void* a9118291409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91274 = (decode_clo(env91550))[6];
//not do dummy comment
void* a9117991404 = (decode_clo(env91550))[5];
//not do dummy comment
void* a9118191407 = (decode_clo(env91550))[4];
//not do dummy comment
void* cons = (decode_clo(env91550))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env91550))[2];
//not do dummy comment
void* lst2 = (decode_clo(env91550))[1];

//creating new closure instance
void** clo91680 = alloc_clo(lam91547_fptr, 4);

//setting env list
clo91680[1] = take_u45helper;
clo91680[2] = a9118191407;
clo91680[3] = a9117991404;
clo91680[4] = kont91274;
void* f9127691410 = encode_clo(clo91680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9127691410;
arg_buffer[3] = a9118291409;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91549 = encode_clo(alloc_clo(lam91549_fptr, 0));

void* lam91551_fptr() // lam91551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91552 = arg_buffer[1];
//reading env and args
void* a9118191407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91552))[7];
//not do dummy comment
void* kont91274 = (decode_clo(env91552))[6];
//not do dummy comment
void* a9117991404 = (decode_clo(env91552))[5];
//not do dummy comment
void* car = (decode_clo(env91552))[4];
//not do dummy comment
void* cons = (decode_clo(env91552))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env91552))[2];
//not do dummy comment
void* lst2 = (decode_clo(env91552))[1];

//creating new closure instance
void** clo91682 = alloc_clo(lam91549_fptr, 6);

//setting env list
clo91682[1] = lst2;
clo91682[2] = take_u45helper;
clo91682[3] = cons;
clo91682[4] = a9118191407;
clo91682[5] = a9117991404;
clo91682[6] = kont91274;
void* f9127791408 = encode_clo(clo91682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9127791408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91551 = encode_clo(alloc_clo(lam91551_fptr, 0));

void* lam91554_fptr() // lam91554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91555 = arg_buffer[1];
//reading env and args
void* a9117991404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91555))[8];
//not do dummy comment
void* kont91274 = (decode_clo(env91555))[7];
//not do dummy comment
void* cons = (decode_clo(env91555))[6];
//not do dummy comment
void* _u45 = (decode_clo(env91555))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env91555))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91555))[3];
//not do dummy comment
void* n = (decode_clo(env91555))[2];
//not do dummy comment
void* car = (decode_clo(env91555))[1];
mpz_t* mpzvar91683 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91683, "1", 10);
void* a9118091405 = encode_mpz(mpzvar91683);

//creating new closure instance
void** clo91685 = alloc_clo(lam91551_fptr, 7);

//setting env list
clo91685[1] = lst2;
clo91685[2] = take_u45helper;
clo91685[3] = cons;
clo91685[4] = car;
clo91685[5] = a9117991404;
clo91685[6] = kont91274;
clo91685[7] = lst;
void* f9127891406 = encode_clo(clo91685);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9127891406;
arg_buffer[3] = n;
arg_buffer[4] = a9118091405;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91554 = encode_clo(alloc_clo(lam91554_fptr, 0));

void* lam91556_fptr() // lam91556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91557 = arg_buffer[1];
//reading env and args
void* a9117791400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91557))[10];
//not do dummy comment
void* lst = (decode_clo(env91557))[9];
//not do dummy comment
void* kont91274 = (decode_clo(env91557))[8];
//not do dummy comment
void* reverse = (decode_clo(env91557))[7];
//not do dummy comment
void* cons = (decode_clo(env91557))[6];
//not do dummy comment
void* _u45 = (decode_clo(env91557))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env91557))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91557))[3];
//not do dummy comment
void* n = (decode_clo(env91557))[2];
//not do dummy comment
void* car = (decode_clo(env91557))[1];

//if-clause
bool if_guard91686 = is_true(a9117791400);
if(if_guard91686)
{

//creating new closure instance
void** clo91688 = alloc_clo(lam91545_fptr, 1);

//setting env list
clo91688[1] = kont91274;
void* f9127591401 = encode_clo(clo91688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9127591401;
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
void** clo91690 = alloc_clo(lam91554_fptr, 8);

//setting env list
clo91690[1] = car;
clo91690[2] = n;
clo91690[3] = lst2;
clo91690[4] = take_u45helper;
clo91690[5] = _u45;
clo91690[6] = cons;
clo91690[7] = kont91274;
clo91690[8] = lst;
void* f9127991403 = encode_clo(clo91690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9127991403;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91556 = encode_clo(alloc_clo(lam91556_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91559 = arg_buffer[1];
//reading env and args
void* kont91274 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar91691 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91691, "0", 10);
void* a9117691398 = encode_mpz(mpzvar91691);

//creating new closure instance
void** clo91693 = alloc_clo(lam91556_fptr, 10);

//setting env list
clo91693[1] = car;
clo91693[2] = n;
clo91693[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo91693[4] = take_u45helper;
clo91693[5] = _u45;
clo91693[6] = cons;
clo91693[7] = reverse;
clo91693[8] = kont91274;
clo91693[9] = lst;
clo91693[10] = cdr;
void* f9128091399 = encode_clo(clo91693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9128091399;
arg_buffer[3] = n;
arg_buffer[4] = a9117691398;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam91560_fptr() // lam91560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91561 = arg_buffer[1];
//reading env and args
void* a9118491413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91561))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env91561))[3];
//not do dummy comment
void* n = (decode_clo(env91561))[2];
//not do dummy comment
void* kont91281 = (decode_clo(env91561))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont91281;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9118491413;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91560 = encode_clo(alloc_clo(lam91560_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91562 = arg_buffer[1];
//reading env and args
void* kont91281 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo91695 = alloc_clo(lam91560_fptr, 4);

//setting env list
clo91695[1] = kont91281;
clo91695[2] = n;
clo91695[3] = take_u45helper;
clo91695[4] = lst;
void* f9128291412 = encode_clo(clo91695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9128291412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam91564_fptr() // lam91564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91565 = arg_buffer[1];
//reading env and args
void* a9118991421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9118791417 = (decode_clo(env91565))[3];
//not do dummy comment
void* _u43 = (decode_clo(env91565))[2];
//not do dummy comment
void* kont91283 = (decode_clo(env91565))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont91283;
arg_buffer[3] = a9118791417;
arg_buffer[4] = a9118991421;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91564 = encode_clo(alloc_clo(lam91564_fptr, 0));

void* lam91566_fptr() // lam91566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91567 = arg_buffer[1];
//reading env and args
void* a9118891419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env91567))[4];
//not do dummy comment
void* kont91283 = (decode_clo(env91567))[3];
//not do dummy comment
void* a9118791417 = (decode_clo(env91567))[2];
//not do dummy comment
void* length = (decode_clo(env91567))[1];

//creating new closure instance
void** clo91697 = alloc_clo(lam91564_fptr, 3);

//setting env list
clo91697[1] = kont91283;
clo91697[2] = _u43;
clo91697[3] = a9118791417;
void* f9128491420 = encode_clo(clo91697);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9128491420;
arg_buffer[3] = a9118891419;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91566 = encode_clo(alloc_clo(lam91566_fptr, 0));

void* lam91569_fptr() // lam91569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91570 = arg_buffer[1];
//reading env and args
void* a9118591415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91570))[5];
//not do dummy comment
void* lst = (decode_clo(env91570))[4];
//not do dummy comment
void* length = (decode_clo(env91570))[3];
//not do dummy comment
void* _u43 = (decode_clo(env91570))[2];
//not do dummy comment
void* kont91283 = (decode_clo(env91570))[1];

//if-clause
bool if_guard91698 = is_true(a9118591415);
if(if_guard91698)
{
mpz_t* mpzvar91699 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91699, "0", 10);
void* x9118691416 = encode_mpz(mpzvar91699);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91283);
arg_buffer[2] = x9118691416;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91283))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar91700 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91700, "1", 10);
void* a9118791417 = encode_mpz(mpzvar91700);

//creating new closure instance
void** clo91702 = alloc_clo(lam91566_fptr, 4);

//setting env list
clo91702[1] = length;
clo91702[2] = a9118791417;
clo91702[3] = kont91283;
clo91702[4] = _u43;
void* f9128591418 = encode_clo(clo91702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9128591418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91569 = encode_clo(alloc_clo(lam91569_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91571 = arg_buffer[1];
//reading env and args
void* kont91283 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo91704 = alloc_clo(lam91569_fptr, 5);

//setting env list
clo91704[1] = kont91283;
clo91704[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo91704[3] = length;
clo91704[4] = lst;
clo91704[5] = cdr;
void* f9128691414 = encode_clo(clo91704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9128691414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam91572_fptr() // lam91572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91573 = arg_buffer[1];
//reading env and args
void* x9119191425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91287 = (decode_clo(env91573))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91287);
arg_buffer[2] = x9119191425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91287))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91572 = encode_clo(alloc_clo(lam91572_fptr, 0));

void* lam91574_fptr() // lam91574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91575 = arg_buffer[1];
//reading env and args
void* a9119591433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9119391429 = (decode_clo(env91575))[3];
//not do dummy comment
void* kont91287 = (decode_clo(env91575))[2];
//not do dummy comment
void* cons = (decode_clo(env91575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont91287;
arg_buffer[3] = a9119391429;
arg_buffer[4] = a9119591433;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91574 = encode_clo(alloc_clo(lam91574_fptr, 0));

void* lam91576_fptr() // lam91576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91577 = arg_buffer[1];
//reading env and args
void* a9119491431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9119391429 = (decode_clo(env91577))[5];
//not do dummy comment
void* kont91287 = (decode_clo(env91577))[4];
//not do dummy comment
void* map = (decode_clo(env91577))[3];
//not do dummy comment
void* proc = (decode_clo(env91577))[2];
//not do dummy comment
void* cons = (decode_clo(env91577))[1];

//creating new closure instance
void** clo91706 = alloc_clo(lam91574_fptr, 3);

//setting env list
clo91706[1] = cons;
clo91706[2] = kont91287;
clo91706[3] = a9119391429;
void* f9128991432 = encode_clo(clo91706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9128991432;
arg_buffer[3] = proc;
arg_buffer[4] = a9119491431;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91576 = encode_clo(alloc_clo(lam91576_fptr, 0));

void* lam91578_fptr() // lam91578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91579 = arg_buffer[1];
//reading env and args
void* a9119391429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91579))[6];
//not do dummy comment
void* kont91287 = (decode_clo(env91579))[5];
//not do dummy comment
void* lst = (decode_clo(env91579))[4];
//not do dummy comment
void* map = (decode_clo(env91579))[3];
//not do dummy comment
void* proc = (decode_clo(env91579))[2];
//not do dummy comment
void* cons = (decode_clo(env91579))[1];

//creating new closure instance
void** clo91708 = alloc_clo(lam91576_fptr, 5);

//setting env list
clo91708[1] = cons;
clo91708[2] = proc;
clo91708[3] = map;
clo91708[4] = kont91287;
clo91708[5] = a9119391429;
void* f9129091430 = encode_clo(clo91708);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9129091430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91578 = encode_clo(alloc_clo(lam91578_fptr, 0));

void* lam91580_fptr() // lam91580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91581 = arg_buffer[1];
//reading env and args
void* a9119291427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91581))[6];
//not do dummy comment
void* kont91287 = (decode_clo(env91581))[5];
//not do dummy comment
void* lst = (decode_clo(env91581))[4];
//not do dummy comment
void* map = (decode_clo(env91581))[3];
//not do dummy comment
void* proc = (decode_clo(env91581))[2];
//not do dummy comment
void* cons = (decode_clo(env91581))[1];

//creating new closure instance
void** clo91710 = alloc_clo(lam91578_fptr, 6);

//setting env list
clo91710[1] = cons;
clo91710[2] = proc;
clo91710[3] = map;
clo91710[4] = lst;
clo91710[5] = kont91287;
clo91710[6] = cdr;
void* f9129191428 = encode_clo(clo91710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9129191428;
arg_buffer[3] = a9119291427;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91580 = encode_clo(alloc_clo(lam91580_fptr, 0));

void* lam91582_fptr() // lam91582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91583 = arg_buffer[1];
//reading env and args
void* a9119091423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91287 = (decode_clo(env91583))[8];
//not do dummy comment
void* lst = (decode_clo(env91583))[7];
//not do dummy comment
void* map = (decode_clo(env91583))[6];
//not do dummy comment
void* proc = (decode_clo(env91583))[5];
//not do dummy comment
void* car = (decode_clo(env91583))[4];
//not do dummy comment
void* cons = (decode_clo(env91583))[3];
//not do dummy comment
void* list = (decode_clo(env91583))[2];
//not do dummy comment
void* cdr = (decode_clo(env91583))[1];

//if-clause
bool if_guard91711 = is_true(a9119091423);
if(if_guard91711)
{

//creating new closure instance
void** clo91713 = alloc_clo(lam91572_fptr, 1);

//setting env list
clo91713[1] = kont91287;
void* f9128891424 = encode_clo(clo91713);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9128891424;
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
void** clo91715 = alloc_clo(lam91580_fptr, 6);

//setting env list
clo91715[1] = cons;
clo91715[2] = proc;
clo91715[3] = map;
clo91715[4] = lst;
clo91715[5] = kont91287;
clo91715[6] = cdr;
void* f9129291426 = encode_clo(clo91715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9129291426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91582 = encode_clo(alloc_clo(lam91582_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91584 = arg_buffer[1];
//reading env and args
void* kont91287 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo91717 = alloc_clo(lam91582_fptr, 8);

//setting env list
clo91717[1] = cdr;
clo91717[2] = list;
clo91717[3] = cons;
clo91717[4] = car;
clo91717[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo91717[6] = map;
clo91717[7] = lst;
clo91717[8] = kont91287;
void* f9129391422 = encode_clo(clo91717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9129391422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam91585_fptr() // lam91585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91586 = arg_buffer[1];
//reading env and args
void* x9119791437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91294 = (decode_clo(env91586))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91294);
arg_buffer[2] = x9119791437;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91294))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91585 = encode_clo(alloc_clo(lam91585_fptr, 0));

void* lam91587_fptr() // lam91587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91588 = arg_buffer[1];
//reading env and args
void* a9120291447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91294 = (decode_clo(env91588))[3];
//not do dummy comment
void* cons = (decode_clo(env91588))[2];
//not do dummy comment
void* a9120091443 = (decode_clo(env91588))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont91294;
arg_buffer[3] = a9120091443;
arg_buffer[4] = a9120291447;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91587 = encode_clo(alloc_clo(lam91587_fptr, 0));

void* lam91589_fptr() // lam91589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91590 = arg_buffer[1];
//reading env and args
void* a9120191445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env91590))[5];
//not do dummy comment
void* kont91294 = (decode_clo(env91590))[4];
//not do dummy comment
void* filter = (decode_clo(env91590))[3];
//not do dummy comment
void* cons = (decode_clo(env91590))[2];
//not do dummy comment
void* a9120091443 = (decode_clo(env91590))[1];

//creating new closure instance
void** clo91719 = alloc_clo(lam91587_fptr, 3);

//setting env list
clo91719[1] = a9120091443;
clo91719[2] = cons;
clo91719[3] = kont91294;
void* f9129691446 = encode_clo(clo91719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9129691446;
arg_buffer[3] = op;
arg_buffer[4] = a9120191445;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91589 = encode_clo(alloc_clo(lam91589_fptr, 0));

void* lam91591_fptr() // lam91591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91592 = arg_buffer[1];
//reading env and args
void* a9120091443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91592))[6];
//not do dummy comment
void* lst = (decode_clo(env91592))[5];
//not do dummy comment
void* op = (decode_clo(env91592))[4];
//not do dummy comment
void* kont91294 = (decode_clo(env91592))[3];
//not do dummy comment
void* filter = (decode_clo(env91592))[2];
//not do dummy comment
void* cons = (decode_clo(env91592))[1];

//creating new closure instance
void** clo91721 = alloc_clo(lam91589_fptr, 5);

//setting env list
clo91721[1] = a9120091443;
clo91721[2] = cons;
clo91721[3] = filter;
clo91721[4] = kont91294;
clo91721[5] = op;
void* f9129791444 = encode_clo(clo91721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9129791444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91591 = encode_clo(alloc_clo(lam91591_fptr, 0));

void* lam91593_fptr() // lam91593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91594 = arg_buffer[1];
//reading env and args
void* a9120391449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env91594))[3];
//not do dummy comment
void* kont91294 = (decode_clo(env91594))[2];
//not do dummy comment
void* filter = (decode_clo(env91594))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont91294;
arg_buffer[3] = op;
arg_buffer[4] = a9120391449;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91593 = encode_clo(alloc_clo(lam91593_fptr, 0));

void* lam91595_fptr() // lam91595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91596 = arg_buffer[1];
//reading env and args
void* a9119991441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91596))[7];
//not do dummy comment
void* lst = (decode_clo(env91596))[6];
//not do dummy comment
void* op = (decode_clo(env91596))[5];
//not do dummy comment
void* kont91294 = (decode_clo(env91596))[4];
//not do dummy comment
void* cons = (decode_clo(env91596))[3];
//not do dummy comment
void* filter = (decode_clo(env91596))[2];
//not do dummy comment
void* car = (decode_clo(env91596))[1];

//if-clause
bool if_guard91722 = is_true(a9119991441);
if(if_guard91722)
{

//creating new closure instance
void** clo91724 = alloc_clo(lam91591_fptr, 6);

//setting env list
clo91724[1] = cons;
clo91724[2] = filter;
clo91724[3] = kont91294;
clo91724[4] = op;
clo91724[5] = lst;
clo91724[6] = cdr;
void* f9129891442 = encode_clo(clo91724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9129891442;
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
void** clo91726 = alloc_clo(lam91593_fptr, 3);

//setting env list
clo91726[1] = filter;
clo91726[2] = kont91294;
clo91726[3] = op;
void* f9129991448 = encode_clo(clo91726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9129991448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91595 = encode_clo(alloc_clo(lam91595_fptr, 0));

void* lam91597_fptr() // lam91597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91598 = arg_buffer[1];
//reading env and args
void* a9119891439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91598))[7];
//not do dummy comment
void* lst = (decode_clo(env91598))[6];
//not do dummy comment
void* op = (decode_clo(env91598))[5];
//not do dummy comment
void* kont91294 = (decode_clo(env91598))[4];
//not do dummy comment
void* cons = (decode_clo(env91598))[3];
//not do dummy comment
void* filter = (decode_clo(env91598))[2];
//not do dummy comment
void* car = (decode_clo(env91598))[1];

//creating new closure instance
void** clo91728 = alloc_clo(lam91595_fptr, 7);

//setting env list
clo91728[1] = car;
clo91728[2] = filter;
clo91728[3] = cons;
clo91728[4] = kont91294;
clo91728[5] = op;
clo91728[6] = lst;
clo91728[7] = cdr;
void* f9130091440 = encode_clo(clo91728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9130091440;
arg_buffer[3] = a9119891439;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91597 = encode_clo(alloc_clo(lam91597_fptr, 0));

void* lam91599_fptr() // lam91599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91600 = arg_buffer[1];
//reading env and args
void* a9119691435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91600))[8];
//not do dummy comment
void* op = (decode_clo(env91600))[7];
//not do dummy comment
void* kont91294 = (decode_clo(env91600))[6];
//not do dummy comment
void* cons = (decode_clo(env91600))[5];
//not do dummy comment
void* list = (decode_clo(env91600))[4];
//not do dummy comment
void* cdr = (decode_clo(env91600))[3];
//not do dummy comment
void* filter = (decode_clo(env91600))[2];
//not do dummy comment
void* car = (decode_clo(env91600))[1];

//if-clause
bool if_guard91729 = is_true(a9119691435);
if(if_guard91729)
{

//creating new closure instance
void** clo91731 = alloc_clo(lam91585_fptr, 1);

//setting env list
clo91731[1] = kont91294;
void* f9129591436 = encode_clo(clo91731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9129591436;
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
void** clo91733 = alloc_clo(lam91597_fptr, 7);

//setting env list
clo91733[1] = car;
clo91733[2] = filter;
clo91733[3] = cons;
clo91733[4] = kont91294;
clo91733[5] = op;
clo91733[6] = lst;
clo91733[7] = cdr;
void* f9130191438 = encode_clo(clo91733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9130191438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91599 = encode_clo(alloc_clo(lam91599_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91601 = arg_buffer[1];
//reading env and args
void* kont91294 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo91735 = alloc_clo(lam91599_fptr, 8);

//setting env list
clo91735[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo91735[2] = filter;
clo91735[3] = cdr;
clo91735[4] = list;
clo91735[5] = cons;
clo91735[6] = kont91294;
clo91735[7] = op;
clo91735[8] = lst;
void* f9130291434 = encode_clo(clo91735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9130291434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam91602_fptr() // lam91602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91603 = arg_buffer[1];
//reading env and args
void* a9120891457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91303 = (decode_clo(env91603))[3];
//not do dummy comment
void* drop = (decode_clo(env91603))[2];
//not do dummy comment
void* a9120691454 = (decode_clo(env91603))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont91303;
arg_buffer[3] = a9120691454;
arg_buffer[4] = a9120891457;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91602 = encode_clo(alloc_clo(lam91602_fptr, 0));

void* lam91605_fptr() // lam91605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91606 = arg_buffer[1];
//reading env and args
void* a9120691454 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91303 = (decode_clo(env91606))[4];
//not do dummy comment
void* drop = (decode_clo(env91606))[3];
//not do dummy comment
void* n = (decode_clo(env91606))[2];
//not do dummy comment
void* _u45 = (decode_clo(env91606))[1];
mpz_t* mpzvar91736 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91736, "1", 10);
void* a9120791455 = encode_mpz(mpzvar91736);

//creating new closure instance
void** clo91738 = alloc_clo(lam91602_fptr, 3);

//setting env list
clo91738[1] = a9120691454;
clo91738[2] = drop;
clo91738[3] = kont91303;
void* f9130491456 = encode_clo(clo91738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9130491456;
arg_buffer[3] = n;
arg_buffer[4] = a9120791455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91605 = encode_clo(alloc_clo(lam91605_fptr, 0));

void* lam91607_fptr() // lam91607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91608 = arg_buffer[1];
//reading env and args
void* a9120591452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91608))[6];
//not do dummy comment
void* kont91303 = (decode_clo(env91608))[5];
//not do dummy comment
void* n = (decode_clo(env91608))[4];
//not do dummy comment
void* _u45 = (decode_clo(env91608))[3];
//not do dummy comment
void* lst = (decode_clo(env91608))[2];
//not do dummy comment
void* drop = (decode_clo(env91608))[1];

//if-clause
bool if_guard91739 = is_true(a9120591452);
if(if_guard91739)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91303);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91303))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo91741 = alloc_clo(lam91605_fptr, 4);

//setting env list
clo91741[1] = _u45;
clo91741[2] = n;
clo91741[3] = drop;
clo91741[4] = kont91303;
void* f9130591453 = encode_clo(clo91741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9130591453;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91607 = encode_clo(alloc_clo(lam91607_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91610 = arg_buffer[1];
//reading env and args
void* kont91303 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar91742 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar91742, "0", 10);
void* a9120491450 = encode_mpz(mpzvar91742);

//creating new closure instance
void** clo91744 = alloc_clo(lam91607_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo91744[1] = drop;
clo91744[2] = lst;
clo91744[3] = _u45;
clo91744[4] = n;
clo91744[5] = kont91303;
clo91744[6] = cdr;
void* f9130691451 = encode_clo(clo91744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9130691451;
arg_buffer[3] = n;
arg_buffer[4] = a9120491450;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam91611_fptr() // lam91611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91612 = arg_buffer[1];
//reading env and args
void* a9121291465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9121091461 = (decode_clo(env91612))[3];
//not do dummy comment
void* kont91307 = (decode_clo(env91612))[2];
//not do dummy comment
void* proc = (decode_clo(env91612))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont91307;
arg_buffer[3] = a9121091461;
arg_buffer[4] = a9121291465;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91611 = encode_clo(alloc_clo(lam91611_fptr, 0));

void* lam91613_fptr() // lam91613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91614 = arg_buffer[1];
//reading env and args
void* a9121191463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9121091461 = (decode_clo(env91614))[5];
//not do dummy comment
void* foldr = (decode_clo(env91614))[4];
//not do dummy comment
void* kont91307 = (decode_clo(env91614))[3];
//not do dummy comment
void* proc = (decode_clo(env91614))[2];
//not do dummy comment
void* acc = (decode_clo(env91614))[1];

//creating new closure instance
void** clo91746 = alloc_clo(lam91611_fptr, 3);

//setting env list
clo91746[1] = proc;
clo91746[2] = kont91307;
clo91746[3] = a9121091461;
void* f9130891464 = encode_clo(clo91746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9130891464;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9121191463;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91613 = encode_clo(alloc_clo(lam91613_fptr, 0));

void* lam91615_fptr() // lam91615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91616 = arg_buffer[1];
//reading env and args
void* a9121091461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91616))[6];
//not do dummy comment
void* kont91307 = (decode_clo(env91616))[5];
//not do dummy comment
void* foldr = (decode_clo(env91616))[4];
//not do dummy comment
void* lst = (decode_clo(env91616))[3];
//not do dummy comment
void* proc = (decode_clo(env91616))[2];
//not do dummy comment
void* acc = (decode_clo(env91616))[1];

//creating new closure instance
void** clo91748 = alloc_clo(lam91613_fptr, 5);

//setting env list
clo91748[1] = acc;
clo91748[2] = proc;
clo91748[3] = kont91307;
clo91748[4] = foldr;
clo91748[5] = a9121091461;
void* f9130991462 = encode_clo(clo91748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9130991462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91615 = encode_clo(alloc_clo(lam91615_fptr, 0));

void* lam91617_fptr() // lam91617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91618 = arg_buffer[1];
//reading env and args
void* a9120991459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91618))[7];
//not do dummy comment
void* kont91307 = (decode_clo(env91618))[6];
//not do dummy comment
void* car = (decode_clo(env91618))[5];
//not do dummy comment
void* foldr = (decode_clo(env91618))[4];
//not do dummy comment
void* lst = (decode_clo(env91618))[3];
//not do dummy comment
void* proc = (decode_clo(env91618))[2];
//not do dummy comment
void* acc = (decode_clo(env91618))[1];

//if-clause
bool if_guard91749 = is_true(a9120991459);
if(if_guard91749)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91307);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91307))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo91751 = alloc_clo(lam91615_fptr, 6);

//setting env list
clo91751[1] = acc;
clo91751[2] = proc;
clo91751[3] = lst;
clo91751[4] = foldr;
clo91751[5] = kont91307;
clo91751[6] = cdr;
void* f9131091460 = encode_clo(clo91751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9131091460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91617 = encode_clo(alloc_clo(lam91617_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91619 = arg_buffer[1];
//reading env and args
void* kont91307 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo91753 = alloc_clo(lam91617_fptr, 7);

//setting env list
clo91753[1] = acc;
clo91753[2] = proc;
clo91753[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo91753[4] = foldr;
clo91753[5] = car;
clo91753[6] = kont91307;
clo91753[7] = cdr;
void* f9131191458 = encode_clo(clo91753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9131191458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam91620_fptr() // lam91620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91621 = arg_buffer[1];
//reading env and args
void* a9121691473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9121491469 = (decode_clo(env91621))[3];
//not do dummy comment
void* kont91312 = (decode_clo(env91621))[2];
//not do dummy comment
void* cons = (decode_clo(env91621))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont91312;
arg_buffer[3] = a9121491469;
arg_buffer[4] = a9121691473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91620 = encode_clo(alloc_clo(lam91620_fptr, 0));

void* lam91622_fptr() // lam91622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91623 = arg_buffer[1];
//reading env and args
void* a9121591471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env91623))[5];
//not do dummy comment
void* a9121491469 = (decode_clo(env91623))[4];
//not do dummy comment
void* cons = (decode_clo(env91623))[3];
//not do dummy comment
void* lst2 = (decode_clo(env91623))[2];
//not do dummy comment
void* kont91312 = (decode_clo(env91623))[1];

//creating new closure instance
void** clo91755 = alloc_clo(lam91620_fptr, 3);

//setting env list
clo91755[1] = cons;
clo91755[2] = kont91312;
clo91755[3] = a9121491469;
void* f9131391472 = encode_clo(clo91755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9131391472;
arg_buffer[3] = a9121591471;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91622 = encode_clo(alloc_clo(lam91622_fptr, 0));

void* lam91624_fptr() // lam91624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91625 = arg_buffer[1];
//reading env and args
void* a9121491469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91625))[6];
//not do dummy comment
void* append = (decode_clo(env91625))[5];
//not do dummy comment
void* lst1 = (decode_clo(env91625))[4];
//not do dummy comment
void* cons = (decode_clo(env91625))[3];
//not do dummy comment
void* lst2 = (decode_clo(env91625))[2];
//not do dummy comment
void* kont91312 = (decode_clo(env91625))[1];

//creating new closure instance
void** clo91757 = alloc_clo(lam91622_fptr, 5);

//setting env list
clo91757[1] = kont91312;
clo91757[2] = lst2;
clo91757[3] = cons;
clo91757[4] = a9121491469;
clo91757[5] = append;
void* f9131491470 = encode_clo(clo91757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9131491470;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91624 = encode_clo(alloc_clo(lam91624_fptr, 0));

void* lam91626_fptr() // lam91626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91627 = arg_buffer[1];
//reading env and args
void* a9121391467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91627))[7];
//not do dummy comment
void* append = (decode_clo(env91627))[6];
//not do dummy comment
void* cons = (decode_clo(env91627))[5];
//not do dummy comment
void* lst2 = (decode_clo(env91627))[4];
//not do dummy comment
void* kont91312 = (decode_clo(env91627))[3];
//not do dummy comment
void* lst1 = (decode_clo(env91627))[2];
//not do dummy comment
void* car = (decode_clo(env91627))[1];

//if-clause
bool if_guard91758 = is_true(a9121391467);
if(if_guard91758)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91312);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91312))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo91760 = alloc_clo(lam91624_fptr, 6);

//setting env list
clo91760[1] = kont91312;
clo91760[2] = lst2;
clo91760[3] = cons;
clo91760[4] = lst1;
clo91760[5] = append;
clo91760[6] = cdr;
void* f9131591468 = encode_clo(clo91760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9131591468;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91626 = encode_clo(alloc_clo(lam91626_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91628 = arg_buffer[1];
//reading env and args
void* kont91312 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo91762 = alloc_clo(lam91626_fptr, 7);

//setting env list
clo91762[1] = car;
clo91762[2] = lst1;
clo91762[3] = kont91312;
clo91762[4] = lst2;
clo91762[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo91762[6] = append;
clo91762[7] = cdr;
void* f9131691466 = encode_clo(clo91762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9131691466;
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
void* _91629 = arg_buffer[1];
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

void* kont9131791474 = prim_car(lst);
void* lst91475 = prim_cdr(lst);
void* x9121791476 = apply_prim_hash(lst91475);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9131791474);
arg_buffer[2] = x9121791476;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9131791474))[0]);
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
void* _91630 = arg_buffer[1];
//reading env and args
void* kont91319 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9121891477 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91319);
arg_buffer[2] = x9121891477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91319))[0]);
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
void* _91631 = arg_buffer[1];
//reading env and args
void* kont91320 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9121991478 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91320);
arg_buffer[2] = x9121991478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91320))[0]);
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
void* _91632 = arg_buffer[1];
//reading env and args
void* kont91321 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9122091479 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91321);
arg_buffer[2] = x9122091479;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91321))[0]);
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
void* _91633 = arg_buffer[1];
//reading env and args
void* kont91322 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9122191480 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91322);
arg_buffer[2] = x9122191480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91322))[0]);
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
void* _91637 = arg_buffer[1];
//reading env and args
void* kont91323 = arg_buffer[2];
//Dummy comment
void* a9122291481 = encode_bool(false);

//if-clause
bool if_guard91763 = is_true(a9122291481);
if(if_guard91763)
{
void* x9122391482 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91323);
arg_buffer[2] = x9122391482;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91323))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x9122491483 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91323);
arg_buffer[2] = x9122491483;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91323))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam91638_fptr() // lam91638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91639 = arg_buffer[1];
//reading env and args
void* x9122591485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91324 = (decode_clo(env91639))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91324);
arg_buffer[2] = x9122591485;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91324))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91638 = encode_clo(alloc_clo(lam91638_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91640 = arg_buffer[1];
//reading env and args
void* kont91324 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo91765 = alloc_clo(lam91638_fptr, 1);

//setting env list
clo91765[1] = kont91324;
void* f9132591484 = encode_clo(clo91765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f9132591484;
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

