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
void* _13541 = arg_buffer[1];
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

void* kont1327413376 = prim_car(lst);
void* lst13377 = prim_cdr(lst);
void* x1318413378 = apply_prim__u43(lst13377);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1327413376);
arg_buffer[2] = x1318413378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1327413376))[0]);
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
void* _13542 = arg_buffer[1];
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

void* kont1327613379 = prim_car(lst);
void* lst13380 = prim_cdr(lst);
void* x1318513381 = apply_prim__u45(lst13380);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1327613379);
arg_buffer[2] = x1318513381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1327613379))[0]);
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
void* _13543 = arg_buffer[1];
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

void* kont1327813382 = prim_car(lst);
void* lst13383 = prim_cdr(lst);
void* x1318613384 = apply_prim__u42(lst13383);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1327813382);
arg_buffer[2] = x1318613384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1327813382))[0]);
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
void* _13544 = arg_buffer[1];
//reading env and args
void* kont13280 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1318713385 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13280);
arg_buffer[2] = x1318713385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13280))[0]);
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
void* _13545 = arg_buffer[1];
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

void* kont1328113386 = prim_car(lst);
void* lst13387 = prim_cdr(lst);
void* x1318813388 = apply_prim__u47(lst13387);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1328113386);
arg_buffer[2] = x1318813388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1328113386))[0]);
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
void* _13546 = arg_buffer[1];
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

void* kont1328313389 = prim_car(lst);
void* lst13390 = prim_cdr(lst);
void* x1318913391 = apply_prim__u61(lst13390);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1328313389);
arg_buffer[2] = x1318913391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1328313389))[0]);
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
void* _13547 = arg_buffer[1];
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

void* kont1328513392 = prim_car(lst);
void* lst13393 = prim_cdr(lst);
void* x1319013394 = apply_prim__u62(lst13393);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1328513392);
arg_buffer[2] = x1319013394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1328513392))[0]);
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
void* _13548 = arg_buffer[1];
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

void* kont1328713395 = prim_car(lst);
void* lst13396 = prim_cdr(lst);
void* x1319113397 = apply_prim__u60(lst13396);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1328713395);
arg_buffer[2] = x1319113397;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1328713395))[0]);
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
void* _13549 = arg_buffer[1];
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

void* kont1328913398 = prim_car(lst);
void* lst13399 = prim_cdr(lst);
void* x1319213400 = apply_prim__u60_u61(lst13399);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1328913398);
arg_buffer[2] = x1319213400;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1328913398))[0]);
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
void* _13550 = arg_buffer[1];
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

void* kont1329113401 = prim_car(lst);
void* lst13402 = prim_cdr(lst);
void* x1319313403 = apply_prim__u62_u61(lst13402);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1329113401);
arg_buffer[2] = x1319313403;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1329113401))[0]);
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
void* _13551 = arg_buffer[1];
//reading env and args
void* kont13293 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1319413404 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13293);
arg_buffer[2] = x1319413404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13293))[0]);
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
void* _13552 = arg_buffer[1];
//reading env and args
void* kont13294 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1319513405 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13294);
arg_buffer[2] = x1319513405;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13294))[0]);
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
void* _13553 = arg_buffer[1];
//reading env and args
void* kont13295 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1319613406 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13295);
arg_buffer[2] = x1319613406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13295))[0]);
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
void* _13554 = arg_buffer[1];
//reading env and args
void* kont13296 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1319713407 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13296);
arg_buffer[2] = x1319713407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13296))[0]);
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
void* _13555 = arg_buffer[1];
//reading env and args
void* kont13297 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1319813408 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13297);
arg_buffer[2] = x1319813408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13297))[0]);
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
void* _13556 = arg_buffer[1];
//reading env and args
void* kont13298 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1319913409 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13298);
arg_buffer[2] = x1319913409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13298))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam13557_fptr() // lam13557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13558 = arg_buffer[1];
//reading env and args
void* a1320213413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1320013410 = (decode_clo(env13558))[3];
//not do dummy comment
void* kont13299 = (decode_clo(env13558))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env13558))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13299;
arg_buffer[3] = a1320013410;
arg_buffer[4] = a1320213413;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13557 = encode_clo(alloc_clo(lam13557_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13561 = arg_buffer[1];
//reading env and args
void* kont13299 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar21765 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21765, "0", 10);
void* a1320013410 = encode_mpz(mpzvar21765);
mpz_t* mpzvar21766 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21766, "2", 10);
void* a1320113411 = encode_mpz(mpzvar21766);

//creating new closure instance
void** clo21768 = alloc_clo(lam13557_fptr, 3);

//setting env list
clo21768[1] = equal_u63;
clo21768[2] = kont13299;
clo21768[3] = a1320013410;
void* f1330013412 = encode_clo(clo21768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1330013412;
arg_buffer[3] = x;
arg_buffer[4] = a1320113411;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam13562_fptr() // lam13562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13563 = arg_buffer[1];
//reading env and args
void* a1320513417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13301 = (decode_clo(env13563))[3];
//not do dummy comment
void* a1320313414 = (decode_clo(env13563))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env13563))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13301;
arg_buffer[3] = a1320313414;
arg_buffer[4] = a1320513417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13562 = encode_clo(alloc_clo(lam13562_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13566 = arg_buffer[1];
//reading env and args
void* kont13301 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar21769 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21769, "1", 10);
void* a1320313414 = encode_mpz(mpzvar21769);
mpz_t* mpzvar21770 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21770, "2", 10);
void* a1320413415 = encode_mpz(mpzvar21770);

//creating new closure instance
void** clo21772 = alloc_clo(lam13562_fptr, 3);

//setting env list
clo21772[1] = equal_u63;
clo21772[2] = a1320313414;
clo21772[3] = kont13301;
void* f1330213416 = encode_clo(clo21772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1330213416;
arg_buffer[3] = x;
arg_buffer[4] = a1320413415;
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
void* _13567 = arg_buffer[1];
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

void* kont1330313418 = prim_car(x);
void* x13419 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1330313418);
arg_buffer[2] = x13419;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1330313418))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam13570_fptr() // lam13570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13571 = arg_buffer[1];
//reading env and args
void* a1321113429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13305 = (decode_clo(env13571))[3];
//not do dummy comment
void* x = (decode_clo(env13571))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env13571))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont13305;
arg_buffer[3] = x;
arg_buffer[4] = a1321113429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13570 = encode_clo(alloc_clo(lam13570_fptr, 0));

void* lam13572_fptr() // lam13572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13573 = arg_buffer[1];
//reading env and args
void* a1320913426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13573))[5];
//not do dummy comment
void* lst = (decode_clo(env13573))[4];
//not do dummy comment
void* kont13305 = (decode_clo(env13573))[3];
//not do dummy comment
void* x = (decode_clo(env13573))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env13573))[1];

//if-clause
bool if_guard21773 = is_true(a1320913426);
if(if_guard21773)
{
void* x1321013427 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13305);
arg_buffer[2] = x1321013427;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13305))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21775 = alloc_clo(lam13570_fptr, 3);

//setting env list
clo21775[1] = member_u63;
clo21775[2] = x;
clo21775[3] = kont13305;
void* f1330613428 = encode_clo(clo21775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1330613428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13572 = encode_clo(alloc_clo(lam13572_fptr, 0));

void* lam13574_fptr() // lam13574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13575 = arg_buffer[1];
//reading env and args
void* a1320813424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13575))[6];
//not do dummy comment
void* lst = (decode_clo(env13575))[5];
//not do dummy comment
void* x = (decode_clo(env13575))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env13575))[3];
//not do dummy comment
void* kont13305 = (decode_clo(env13575))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env13575))[1];

//creating new closure instance
void** clo21777 = alloc_clo(lam13572_fptr, 5);

//setting env list
clo21777[1] = member_u63;
clo21777[2] = x;
clo21777[3] = kont13305;
clo21777[4] = lst;
clo21777[5] = cdr;
void* f1330713425 = encode_clo(clo21777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1330713425;
arg_buffer[3] = a1320813424;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13574 = encode_clo(alloc_clo(lam13574_fptr, 0));

void* lam13576_fptr() // lam13576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13577 = arg_buffer[1];
//reading env and args
void* a1320613421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13577))[7];
//not do dummy comment
void* lst = (decode_clo(env13577))[6];
//not do dummy comment
void* x = (decode_clo(env13577))[5];
//not do dummy comment
void* car = (decode_clo(env13577))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env13577))[3];
//not do dummy comment
void* kont13305 = (decode_clo(env13577))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env13577))[1];

//if-clause
bool if_guard21778 = is_true(a1320613421);
if(if_guard21778)
{
void* x1320713422 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13305);
arg_buffer[2] = x1320713422;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13305))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21780 = alloc_clo(lam13574_fptr, 6);

//setting env list
clo21780[1] = equal_u63;
clo21780[2] = kont13305;
clo21780[3] = member_u63;
clo21780[4] = x;
clo21780[5] = lst;
clo21780[6] = cdr;
void* f1330813423 = encode_clo(clo21780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1330813423;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13576 = encode_clo(alloc_clo(lam13576_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13578 = arg_buffer[1];
//reading env and args
void* kont13305 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo21782 = alloc_clo(lam13576_fptr, 7);

//setting env list
clo21782[1] = equal_u63;
clo21782[2] = kont13305;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo21782[3] = member_u63;
clo21782[4] = car;
clo21782[5] = x;
clo21782[6] = lst;
clo21782[7] = cdr;
void* f1330913420 = encode_clo(clo21782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1330913420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam13579_fptr() // lam13579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13580 = arg_buffer[1];
//reading env and args
void* a1321513437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13310 = (decode_clo(env13580))[4];
//not do dummy comment
void* foldl = (decode_clo(env13580))[3];
//not do dummy comment
void* a1321413435 = (decode_clo(env13580))[2];
//not do dummy comment
void* fun = (decode_clo(env13580))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont13310;
arg_buffer[3] = fun;
arg_buffer[4] = a1321413435;
arg_buffer[5] = a1321513437;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13579 = encode_clo(alloc_clo(lam13579_fptr, 0));

void* lam13581_fptr() // lam13581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13582 = arg_buffer[1];
//reading env and args
void* a1321413435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13582))[5];
//not do dummy comment
void* lst = (decode_clo(env13582))[4];
//not do dummy comment
void* fun = (decode_clo(env13582))[3];
//not do dummy comment
void* kont13310 = (decode_clo(env13582))[2];
//not do dummy comment
void* foldl = (decode_clo(env13582))[1];

//creating new closure instance
void** clo21784 = alloc_clo(lam13579_fptr, 4);

//setting env list
clo21784[1] = fun;
clo21784[2] = a1321413435;
clo21784[3] = foldl;
clo21784[4] = kont13310;
void* f1331113436 = encode_clo(clo21784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1331113436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13581 = encode_clo(alloc_clo(lam13581_fptr, 0));

void* lam13583_fptr() // lam13583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13584 = arg_buffer[1];
//reading env and args
void* a1321313433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13584))[6];
//not do dummy comment
void* lst = (decode_clo(env13584))[5];
//not do dummy comment
void* fun = (decode_clo(env13584))[4];
//not do dummy comment
void* acc = (decode_clo(env13584))[3];
//not do dummy comment
void* kont13310 = (decode_clo(env13584))[2];
//not do dummy comment
void* foldl = (decode_clo(env13584))[1];

//creating new closure instance
void** clo21786 = alloc_clo(lam13581_fptr, 5);

//setting env list
clo21786[1] = foldl;
clo21786[2] = kont13310;
clo21786[3] = fun;
clo21786[4] = lst;
clo21786[5] = cdr;
void* f1331213434 = encode_clo(clo21786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1331213434;
arg_buffer[3] = a1321313433;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13583 = encode_clo(alloc_clo(lam13583_fptr, 0));

void* lam13585_fptr() // lam13585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13586 = arg_buffer[1];
//reading env and args
void* a1321213431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13586))[7];
//not do dummy comment
void* lst = (decode_clo(env13586))[6];
//not do dummy comment
void* fun = (decode_clo(env13586))[5];
//not do dummy comment
void* acc = (decode_clo(env13586))[4];
//not do dummy comment
void* foldl = (decode_clo(env13586))[3];
//not do dummy comment
void* kont13310 = (decode_clo(env13586))[2];
//not do dummy comment
void* car = (decode_clo(env13586))[1];

//if-clause
bool if_guard21787 = is_true(a1321213431);
if(if_guard21787)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13310);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13310))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21789 = alloc_clo(lam13583_fptr, 6);

//setting env list
clo21789[1] = foldl;
clo21789[2] = kont13310;
clo21789[3] = acc;
clo21789[4] = fun;
clo21789[5] = lst;
clo21789[6] = cdr;
void* f1331313432 = encode_clo(clo21789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1331313432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13585 = encode_clo(alloc_clo(lam13585_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13587 = arg_buffer[1];
//reading env and args
void* kont13310 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo21791 = alloc_clo(lam13585_fptr, 7);

//setting env list
clo21791[1] = car;
clo21791[2] = kont13310;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo21791[3] = foldl;
clo21791[4] = acc;
clo21791[5] = fun;
clo21791[6] = lst;
clo21791[7] = cdr;
void* f1331413430 = encode_clo(clo21791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1331413430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam13588_fptr() // lam13588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13589 = arg_buffer[1];
//reading env and args
void* a1321913445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1321713441 = (decode_clo(env13589))[3];
//not do dummy comment
void* kont13315 = (decode_clo(env13589))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13589))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13315;
arg_buffer[3] = a1321713441;
arg_buffer[4] = a1321913445;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13588 = encode_clo(alloc_clo(lam13588_fptr, 0));

void* lam13590_fptr() // lam13590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13591 = arg_buffer[1];
//reading env and args
void* a1321813443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1321713441 = (decode_clo(env13591))[5];
//not do dummy comment
void* kont13315 = (decode_clo(env13591))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13591))[3];
//not do dummy comment
void* lst2 = (decode_clo(env13591))[2];
//not do dummy comment
void* cons = (decode_clo(env13591))[1];

//creating new closure instance
void** clo21793 = alloc_clo(lam13588_fptr, 3);

//setting env list
clo21793[1] = reverse_u45helper;
clo21793[2] = kont13315;
clo21793[3] = a1321713441;
void* f1331613444 = encode_clo(clo21793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1331613444;
arg_buffer[3] = a1321813443;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13590 = encode_clo(alloc_clo(lam13590_fptr, 0));

void* lam13592_fptr() // lam13592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13593 = arg_buffer[1];
//reading env and args
void* a1321713441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13315 = (decode_clo(env13593))[6];
//not do dummy comment
void* lst = (decode_clo(env13593))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13593))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13593))[3];
//not do dummy comment
void* car = (decode_clo(env13593))[2];
//not do dummy comment
void* cons = (decode_clo(env13593))[1];

//creating new closure instance
void** clo21795 = alloc_clo(lam13590_fptr, 5);

//setting env list
clo21795[1] = cons;
clo21795[2] = lst2;
clo21795[3] = reverse_u45helper;
clo21795[4] = kont13315;
clo21795[5] = a1321713441;
void* f1331713442 = encode_clo(clo21795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1331713442;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13592 = encode_clo(alloc_clo(lam13592_fptr, 0));

void* lam13594_fptr() // lam13594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13595 = arg_buffer[1];
//reading env and args
void* a1321613439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13595))[7];
//not do dummy comment
void* kont13315 = (decode_clo(env13595))[6];
//not do dummy comment
void* lst = (decode_clo(env13595))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13595))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13595))[3];
//not do dummy comment
void* car = (decode_clo(env13595))[2];
//not do dummy comment
void* cons = (decode_clo(env13595))[1];

//if-clause
bool if_guard21796 = is_true(a1321613439);
if(if_guard21796)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13315);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13315))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21798 = alloc_clo(lam13592_fptr, 6);

//setting env list
clo21798[1] = cons;
clo21798[2] = car;
clo21798[3] = lst2;
clo21798[4] = reverse_u45helper;
clo21798[5] = lst;
clo21798[6] = kont13315;
void* f1331813440 = encode_clo(clo21798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1331813440;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13594 = encode_clo(alloc_clo(lam13594_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13596 = arg_buffer[1];
//reading env and args
void* kont13315 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo21800 = alloc_clo(lam13594_fptr, 7);

//setting env list
clo21800[1] = cons;
clo21800[2] = car;
clo21800[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo21800[4] = reverse_u45helper;
clo21800[5] = lst;
clo21800[6] = kont13315;
clo21800[7] = cdr;
void* f1331913438 = encode_clo(clo21800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1331913438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam13597_fptr() // lam13597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13598 = arg_buffer[1];
//reading env and args
void* a1322013447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13598))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13598))[2];
//not do dummy comment
void* kont13320 = (decode_clo(env13598))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13320;
arg_buffer[3] = lst;
arg_buffer[4] = a1322013447;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13597 = encode_clo(alloc_clo(lam13597_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13599 = arg_buffer[1];
//reading env and args
void* kont13320 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo21802 = alloc_clo(lam13597_fptr, 3);

//setting env list
clo21802[1] = kont13320;
clo21802[2] = reverse_u45helper;
clo21802[3] = lst;
void* f1332113446 = encode_clo(clo21802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1332113446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam13600_fptr() // lam13600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13601 = arg_buffer[1];
//reading env and args
void* x1322313452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13322 = (decode_clo(env13601))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13322);
arg_buffer[2] = x1322313452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13322))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13600 = encode_clo(alloc_clo(lam13600_fptr, 0));

void* lam13602_fptr() // lam13602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13603 = arg_buffer[1];
//reading env and args
void* a1322813461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1322613457 = (decode_clo(env13603))[4];
//not do dummy comment
void* kont13322 = (decode_clo(env13603))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13603))[2];
//not do dummy comment
void* a1322413454 = (decode_clo(env13603))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13322;
arg_buffer[3] = a1322413454;
arg_buffer[4] = a1322613457;
arg_buffer[5] = a1322813461;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13602 = encode_clo(alloc_clo(lam13602_fptr, 0));

void* lam13604_fptr() // lam13604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13605 = arg_buffer[1];
//reading env and args
void* a1322713459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1322613457 = (decode_clo(env13605))[6];
//not do dummy comment
void* kont13322 = (decode_clo(env13605))[5];
//not do dummy comment
void* a1322413454 = (decode_clo(env13605))[4];
//not do dummy comment
void* cons = (decode_clo(env13605))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13605))[2];
//not do dummy comment
void* lst2 = (decode_clo(env13605))[1];

//creating new closure instance
void** clo21804 = alloc_clo(lam13602_fptr, 4);

//setting env list
clo21804[1] = a1322413454;
clo21804[2] = take_u45helper;
clo21804[3] = kont13322;
clo21804[4] = a1322613457;
void* f1332413460 = encode_clo(clo21804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1332413460;
arg_buffer[3] = a1322713459;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13604 = encode_clo(alloc_clo(lam13604_fptr, 0));

void* lam13606_fptr() // lam13606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13607 = arg_buffer[1];
//reading env and args
void* a1322613457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13607))[7];
//not do dummy comment
void* kont13322 = (decode_clo(env13607))[6];
//not do dummy comment
void* cons = (decode_clo(env13607))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13607))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13607))[3];
//not do dummy comment
void* a1322413454 = (decode_clo(env13607))[2];
//not do dummy comment
void* car = (decode_clo(env13607))[1];

//creating new closure instance
void** clo21806 = alloc_clo(lam13604_fptr, 6);

//setting env list
clo21806[1] = lst2;
clo21806[2] = take_u45helper;
clo21806[3] = cons;
clo21806[4] = a1322413454;
clo21806[5] = kont13322;
clo21806[6] = a1322613457;
void* f1332513458 = encode_clo(clo21806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1332513458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13606 = encode_clo(alloc_clo(lam13606_fptr, 0));

void* lam13609_fptr() // lam13609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13610 = arg_buffer[1];
//reading env and args
void* a1322413454 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13610))[8];
//not do dummy comment
void* kont13322 = (decode_clo(env13610))[7];
//not do dummy comment
void* cons = (decode_clo(env13610))[6];
//not do dummy comment
void* _u45 = (decode_clo(env13610))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13610))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13610))[3];
//not do dummy comment
void* n = (decode_clo(env13610))[2];
//not do dummy comment
void* car = (decode_clo(env13610))[1];
mpz_t* mpzvar21807 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21807, "1", 10);
void* a1322513455 = encode_mpz(mpzvar21807);

//creating new closure instance
void** clo21809 = alloc_clo(lam13606_fptr, 7);

//setting env list
clo21809[1] = car;
clo21809[2] = a1322413454;
clo21809[3] = lst2;
clo21809[4] = take_u45helper;
clo21809[5] = cons;
clo21809[6] = kont13322;
clo21809[7] = lst;
void* f1332613456 = encode_clo(clo21809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1332613456;
arg_buffer[3] = n;
arg_buffer[4] = a1322513455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13609 = encode_clo(alloc_clo(lam13609_fptr, 0));

void* lam13611_fptr() // lam13611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13612 = arg_buffer[1];
//reading env and args
void* a1322213450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13612))[10];
//not do dummy comment
void* lst = (decode_clo(env13612))[9];
//not do dummy comment
void* reverse = (decode_clo(env13612))[8];
//not do dummy comment
void* kont13322 = (decode_clo(env13612))[7];
//not do dummy comment
void* cons = (decode_clo(env13612))[6];
//not do dummy comment
void* _u45 = (decode_clo(env13612))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13612))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13612))[3];
//not do dummy comment
void* n = (decode_clo(env13612))[2];
//not do dummy comment
void* car = (decode_clo(env13612))[1];

//if-clause
bool if_guard21810 = is_true(a1322213450);
if(if_guard21810)
{

//creating new closure instance
void** clo21812 = alloc_clo(lam13600_fptr, 1);

//setting env list
clo21812[1] = kont13322;
void* f1332313451 = encode_clo(clo21812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1332313451;
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
void** clo21814 = alloc_clo(lam13609_fptr, 8);

//setting env list
clo21814[1] = car;
clo21814[2] = n;
clo21814[3] = lst2;
clo21814[4] = take_u45helper;
clo21814[5] = _u45;
clo21814[6] = cons;
clo21814[7] = kont13322;
clo21814[8] = lst;
void* f1332713453 = encode_clo(clo21814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1332713453;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13611 = encode_clo(alloc_clo(lam13611_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13614 = arg_buffer[1];
//reading env and args
void* kont13322 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar21815 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21815, "0", 10);
void* a1322113448 = encode_mpz(mpzvar21815);

//creating new closure instance
void** clo21817 = alloc_clo(lam13611_fptr, 10);

//setting env list
clo21817[1] = car;
clo21817[2] = n;
clo21817[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo21817[4] = take_u45helper;
clo21817[5] = _u45;
clo21817[6] = cons;
clo21817[7] = kont13322;
clo21817[8] = reverse;
clo21817[9] = lst;
clo21817[10] = cdr;
void* f1332813449 = encode_clo(clo21817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1332813449;
arg_buffer[3] = n;
arg_buffer[4] = a1322113448;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam13615_fptr() // lam13615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13616 = arg_buffer[1];
//reading env and args
void* a1322913463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13329 = (decode_clo(env13616))[4];
//not do dummy comment
void* lst = (decode_clo(env13616))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13616))[2];
//not do dummy comment
void* n = (decode_clo(env13616))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13329;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1322913463;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13615 = encode_clo(alloc_clo(lam13615_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13617 = arg_buffer[1];
//reading env and args
void* kont13329 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo21819 = alloc_clo(lam13615_fptr, 4);

//setting env list
clo21819[1] = n;
clo21819[2] = take_u45helper;
clo21819[3] = lst;
clo21819[4] = kont13329;
void* f1333013462 = encode_clo(clo21819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1333013462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam13619_fptr() // lam13619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13620 = arg_buffer[1];
//reading env and args
void* a1323413471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13331 = (decode_clo(env13620))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13620))[2];
//not do dummy comment
void* a1323213467 = (decode_clo(env13620))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont13331;
arg_buffer[3] = a1323213467;
arg_buffer[4] = a1323413471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13619 = encode_clo(alloc_clo(lam13619_fptr, 0));

void* lam13621_fptr() // lam13621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13622 = arg_buffer[1];
//reading env and args
void* a1323313469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13331 = (decode_clo(env13622))[4];
//not do dummy comment
void* length = (decode_clo(env13622))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13622))[2];
//not do dummy comment
void* a1323213467 = (decode_clo(env13622))[1];

//creating new closure instance
void** clo21821 = alloc_clo(lam13619_fptr, 3);

//setting env list
clo21821[1] = a1323213467;
clo21821[2] = _u43;
clo21821[3] = kont13331;
void* f1333213470 = encode_clo(clo21821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1333213470;
arg_buffer[3] = a1323313469;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13621 = encode_clo(alloc_clo(lam13621_fptr, 0));

void* lam13624_fptr() // lam13624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13625 = arg_buffer[1];
//reading env and args
void* a1323013465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13625))[5];
//not do dummy comment
void* kont13331 = (decode_clo(env13625))[4];
//not do dummy comment
void* lst = (decode_clo(env13625))[3];
//not do dummy comment
void* length = (decode_clo(env13625))[2];
//not do dummy comment
void* _u43 = (decode_clo(env13625))[1];

//if-clause
bool if_guard21822 = is_true(a1323013465);
if(if_guard21822)
{
mpz_t* mpzvar21823 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21823, "0", 10);
void* x1323113466 = encode_mpz(mpzvar21823);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13331);
arg_buffer[2] = x1323113466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13331))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar21824 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21824, "1", 10);
void* a1323213467 = encode_mpz(mpzvar21824);

//creating new closure instance
void** clo21826 = alloc_clo(lam13621_fptr, 4);

//setting env list
clo21826[1] = a1323213467;
clo21826[2] = _u43;
clo21826[3] = length;
clo21826[4] = kont13331;
void* f1333313468 = encode_clo(clo21826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1333313468;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13624 = encode_clo(alloc_clo(lam13624_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13626 = arg_buffer[1];
//reading env and args
void* kont13331 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo21828 = alloc_clo(lam13624_fptr, 5);

//setting env list
clo21828[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo21828[2] = length;
clo21828[3] = lst;
clo21828[4] = kont13331;
clo21828[5] = cdr;
void* f1333413464 = encode_clo(clo21828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1333413464;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam13627_fptr() // lam13627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13628 = arg_buffer[1];
//reading env and args
void* x1323613475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13335 = (decode_clo(env13628))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13335);
arg_buffer[2] = x1323613475;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13335))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13627 = encode_clo(alloc_clo(lam13627_fptr, 0));

void* lam13629_fptr() // lam13629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13630 = arg_buffer[1];
//reading env and args
void* a1324013483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env13630))[3];
//not do dummy comment
void* kont13335 = (decode_clo(env13630))[2];
//not do dummy comment
void* a1323813479 = (decode_clo(env13630))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13335;
arg_buffer[3] = a1323813479;
arg_buffer[4] = a1324013483;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13629 = encode_clo(alloc_clo(lam13629_fptr, 0));

void* lam13631_fptr() // lam13631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13632 = arg_buffer[1];
//reading env and args
void* a1323913481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env13632))[5];
//not do dummy comment
void* proc = (decode_clo(env13632))[4];
//not do dummy comment
void* cons = (decode_clo(env13632))[3];
//not do dummy comment
void* kont13335 = (decode_clo(env13632))[2];
//not do dummy comment
void* a1323813479 = (decode_clo(env13632))[1];

//creating new closure instance
void** clo21830 = alloc_clo(lam13629_fptr, 3);

//setting env list
clo21830[1] = a1323813479;
clo21830[2] = kont13335;
clo21830[3] = cons;
void* f1333713482 = encode_clo(clo21830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1333713482;
arg_buffer[3] = proc;
arg_buffer[4] = a1323913481;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13631 = encode_clo(alloc_clo(lam13631_fptr, 0));

void* lam13633_fptr() // lam13633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13634 = arg_buffer[1];
//reading env and args
void* a1323813479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13634))[6];
//not do dummy comment
void* lst = (decode_clo(env13634))[5];
//not do dummy comment
void* map = (decode_clo(env13634))[4];
//not do dummy comment
void* kont13335 = (decode_clo(env13634))[3];
//not do dummy comment
void* proc = (decode_clo(env13634))[2];
//not do dummy comment
void* cons = (decode_clo(env13634))[1];

//creating new closure instance
void** clo21832 = alloc_clo(lam13631_fptr, 5);

//setting env list
clo21832[1] = a1323813479;
clo21832[2] = kont13335;
clo21832[3] = cons;
clo21832[4] = proc;
clo21832[5] = map;
void* f1333813480 = encode_clo(clo21832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1333813480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13633 = encode_clo(alloc_clo(lam13633_fptr, 0));

void* lam13635_fptr() // lam13635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13636 = arg_buffer[1];
//reading env and args
void* a1323713477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13636))[6];
//not do dummy comment
void* lst = (decode_clo(env13636))[5];
//not do dummy comment
void* map = (decode_clo(env13636))[4];
//not do dummy comment
void* kont13335 = (decode_clo(env13636))[3];
//not do dummy comment
void* proc = (decode_clo(env13636))[2];
//not do dummy comment
void* cons = (decode_clo(env13636))[1];

//creating new closure instance
void** clo21834 = alloc_clo(lam13633_fptr, 6);

//setting env list
clo21834[1] = cons;
clo21834[2] = proc;
clo21834[3] = kont13335;
clo21834[4] = map;
clo21834[5] = lst;
clo21834[6] = cdr;
void* f1333913478 = encode_clo(clo21834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1333913478;
arg_buffer[3] = a1323713477;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13635 = encode_clo(alloc_clo(lam13635_fptr, 0));

void* lam13637_fptr() // lam13637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13638 = arg_buffer[1];
//reading env and args
void* a1323513473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13638))[8];
//not do dummy comment
void* map = (decode_clo(env13638))[7];
//not do dummy comment
void* kont13335 = (decode_clo(env13638))[6];
//not do dummy comment
void* proc = (decode_clo(env13638))[5];
//not do dummy comment
void* car = (decode_clo(env13638))[4];
//not do dummy comment
void* cons = (decode_clo(env13638))[3];
//not do dummy comment
void* list = (decode_clo(env13638))[2];
//not do dummy comment
void* cdr = (decode_clo(env13638))[1];

//if-clause
bool if_guard21835 = is_true(a1323513473);
if(if_guard21835)
{

//creating new closure instance
void** clo21837 = alloc_clo(lam13627_fptr, 1);

//setting env list
clo21837[1] = kont13335;
void* f1333613474 = encode_clo(clo21837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1333613474;
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
void** clo21839 = alloc_clo(lam13635_fptr, 6);

//setting env list
clo21839[1] = cons;
clo21839[2] = proc;
clo21839[3] = kont13335;
clo21839[4] = map;
clo21839[5] = lst;
clo21839[6] = cdr;
void* f1334013476 = encode_clo(clo21839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1334013476;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13637 = encode_clo(alloc_clo(lam13637_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13639 = arg_buffer[1];
//reading env and args
void* kont13335 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo21841 = alloc_clo(lam13637_fptr, 8);

//setting env list
clo21841[1] = cdr;
clo21841[2] = list;
clo21841[3] = cons;
clo21841[4] = car;
clo21841[5] = proc;
clo21841[6] = kont13335;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo21841[7] = map;
clo21841[8] = lst;
void* f1334113472 = encode_clo(clo21841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1334113472;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam13640_fptr() // lam13640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13641 = arg_buffer[1];
//reading env and args
void* x1324213487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13342 = (decode_clo(env13641))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13342);
arg_buffer[2] = x1324213487;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13342))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13640 = encode_clo(alloc_clo(lam13640_fptr, 0));

void* lam13642_fptr() // lam13642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13643 = arg_buffer[1];
//reading env and args
void* a1324713497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1324513493 = (decode_clo(env13643))[3];
//not do dummy comment
void* kont13342 = (decode_clo(env13643))[2];
//not do dummy comment
void* cons = (decode_clo(env13643))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13342;
arg_buffer[3] = a1324513493;
arg_buffer[4] = a1324713497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13642 = encode_clo(alloc_clo(lam13642_fptr, 0));

void* lam13644_fptr() // lam13644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13645 = arg_buffer[1];
//reading env and args
void* a1324613495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1324513493 = (decode_clo(env13645))[5];
//not do dummy comment
void* op = (decode_clo(env13645))[4];
//not do dummy comment
void* cons = (decode_clo(env13645))[3];
//not do dummy comment
void* kont13342 = (decode_clo(env13645))[2];
//not do dummy comment
void* filter = (decode_clo(env13645))[1];

//creating new closure instance
void** clo21843 = alloc_clo(lam13642_fptr, 3);

//setting env list
clo21843[1] = cons;
clo21843[2] = kont13342;
clo21843[3] = a1324513493;
void* f1334413496 = encode_clo(clo21843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1334413496;
arg_buffer[3] = op;
arg_buffer[4] = a1324613495;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13644 = encode_clo(alloc_clo(lam13644_fptr, 0));

void* lam13646_fptr() // lam13646 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13647 = arg_buffer[1];
//reading env and args
void* a1324513493 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13647))[6];
//not do dummy comment
void* lst = (decode_clo(env13647))[5];
//not do dummy comment
void* op = (decode_clo(env13647))[4];
//not do dummy comment
void* cons = (decode_clo(env13647))[3];
//not do dummy comment
void* kont13342 = (decode_clo(env13647))[2];
//not do dummy comment
void* filter = (decode_clo(env13647))[1];

//creating new closure instance
void** clo21845 = alloc_clo(lam13644_fptr, 5);

//setting env list
clo21845[1] = filter;
clo21845[2] = kont13342;
clo21845[3] = cons;
clo21845[4] = op;
clo21845[5] = a1324513493;
void* f1334513494 = encode_clo(clo21845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1334513494;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13646 = encode_clo(alloc_clo(lam13646_fptr, 0));

void* lam13648_fptr() // lam13648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13649 = arg_buffer[1];
//reading env and args
void* a1324813499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env13649))[3];
//not do dummy comment
void* kont13342 = (decode_clo(env13649))[2];
//not do dummy comment
void* filter = (decode_clo(env13649))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont13342;
arg_buffer[3] = op;
arg_buffer[4] = a1324813499;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13648 = encode_clo(alloc_clo(lam13648_fptr, 0));

void* lam13650_fptr() // lam13650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13651 = arg_buffer[1];
//reading env and args
void* a1324413491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13651))[7];
//not do dummy comment
void* lst = (decode_clo(env13651))[6];
//not do dummy comment
void* op = (decode_clo(env13651))[5];
//not do dummy comment
void* cons = (decode_clo(env13651))[4];
//not do dummy comment
void* kont13342 = (decode_clo(env13651))[3];
//not do dummy comment
void* filter = (decode_clo(env13651))[2];
//not do dummy comment
void* car = (decode_clo(env13651))[1];

//if-clause
bool if_guard21846 = is_true(a1324413491);
if(if_guard21846)
{

//creating new closure instance
void** clo21848 = alloc_clo(lam13646_fptr, 6);

//setting env list
clo21848[1] = filter;
clo21848[2] = kont13342;
clo21848[3] = cons;
clo21848[4] = op;
clo21848[5] = lst;
clo21848[6] = cdr;
void* f1334613492 = encode_clo(clo21848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1334613492;
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
void** clo21850 = alloc_clo(lam13648_fptr, 3);

//setting env list
clo21850[1] = filter;
clo21850[2] = kont13342;
clo21850[3] = op;
void* f1334713498 = encode_clo(clo21850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1334713498;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13650 = encode_clo(alloc_clo(lam13650_fptr, 0));

void* lam13652_fptr() // lam13652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13653 = arg_buffer[1];
//reading env and args
void* a1324313489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13653))[7];
//not do dummy comment
void* lst = (decode_clo(env13653))[6];
//not do dummy comment
void* op = (decode_clo(env13653))[5];
//not do dummy comment
void* cons = (decode_clo(env13653))[4];
//not do dummy comment
void* kont13342 = (decode_clo(env13653))[3];
//not do dummy comment
void* filter = (decode_clo(env13653))[2];
//not do dummy comment
void* car = (decode_clo(env13653))[1];

//creating new closure instance
void** clo21852 = alloc_clo(lam13650_fptr, 7);

//setting env list
clo21852[1] = car;
clo21852[2] = filter;
clo21852[3] = kont13342;
clo21852[4] = cons;
clo21852[5] = op;
clo21852[6] = lst;
clo21852[7] = cdr;
void* f1334813490 = encode_clo(clo21852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1334813490;
arg_buffer[3] = a1324313489;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13652 = encode_clo(alloc_clo(lam13652_fptr, 0));

void* lam13654_fptr() // lam13654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13655 = arg_buffer[1];
//reading env and args
void* a1324113485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13655))[8];
//not do dummy comment
void* op = (decode_clo(env13655))[7];
//not do dummy comment
void* cons = (decode_clo(env13655))[6];
//not do dummy comment
void* list = (decode_clo(env13655))[5];
//not do dummy comment
void* cdr = (decode_clo(env13655))[4];
//not do dummy comment
void* kont13342 = (decode_clo(env13655))[3];
//not do dummy comment
void* filter = (decode_clo(env13655))[2];
//not do dummy comment
void* car = (decode_clo(env13655))[1];

//if-clause
bool if_guard21853 = is_true(a1324113485);
if(if_guard21853)
{

//creating new closure instance
void** clo21855 = alloc_clo(lam13640_fptr, 1);

//setting env list
clo21855[1] = kont13342;
void* f1334313486 = encode_clo(clo21855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1334313486;
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
void** clo21857 = alloc_clo(lam13652_fptr, 7);

//setting env list
clo21857[1] = car;
clo21857[2] = filter;
clo21857[3] = kont13342;
clo21857[4] = cons;
clo21857[5] = op;
clo21857[6] = lst;
clo21857[7] = cdr;
void* f1334913488 = encode_clo(clo21857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1334913488;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13654 = encode_clo(alloc_clo(lam13654_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13656 = arg_buffer[1];
//reading env and args
void* kont13342 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo21859 = alloc_clo(lam13654_fptr, 8);

//setting env list
clo21859[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo21859[2] = filter;
clo21859[3] = kont13342;
clo21859[4] = cdr;
clo21859[5] = list;
clo21859[6] = cons;
clo21859[7] = op;
clo21859[8] = lst;
void* f1335013484 = encode_clo(clo21859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1335013484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam13657_fptr() // lam13657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13658 = arg_buffer[1];
//reading env and args
void* a1325313507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env13658))[3];
//not do dummy comment
void* kont13351 = (decode_clo(env13658))[2];
//not do dummy comment
void* a1325113504 = (decode_clo(env13658))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont13351;
arg_buffer[3] = a1325113504;
arg_buffer[4] = a1325313507;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13657 = encode_clo(alloc_clo(lam13657_fptr, 0));

void* lam13660_fptr() // lam13660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13661 = arg_buffer[1];
//reading env and args
void* a1325113504 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env13661))[4];
//not do dummy comment
void* kont13351 = (decode_clo(env13661))[3];
//not do dummy comment
void* n = (decode_clo(env13661))[2];
//not do dummy comment
void* _u45 = (decode_clo(env13661))[1];
mpz_t* mpzvar21860 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21860, "1", 10);
void* a1325213505 = encode_mpz(mpzvar21860);

//creating new closure instance
void** clo21862 = alloc_clo(lam13657_fptr, 3);

//setting env list
clo21862[1] = a1325113504;
clo21862[2] = kont13351;
clo21862[3] = drop;
void* f1335213506 = encode_clo(clo21862);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1335213506;
arg_buffer[3] = n;
arg_buffer[4] = a1325213505;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13660 = encode_clo(alloc_clo(lam13660_fptr, 0));

void* lam13662_fptr() // lam13662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13663 = arg_buffer[1];
//reading env and args
void* a1325013502 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13663))[6];
//not do dummy comment
void* kont13351 = (decode_clo(env13663))[5];
//not do dummy comment
void* n = (decode_clo(env13663))[4];
//not do dummy comment
void* _u45 = (decode_clo(env13663))[3];
//not do dummy comment
void* lst = (decode_clo(env13663))[2];
//not do dummy comment
void* drop = (decode_clo(env13663))[1];

//if-clause
bool if_guard21863 = is_true(a1325013502);
if(if_guard21863)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13351);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13351))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21865 = alloc_clo(lam13660_fptr, 4);

//setting env list
clo21865[1] = _u45;
clo21865[2] = n;
clo21865[3] = kont13351;
clo21865[4] = drop;
void* f1335313503 = encode_clo(clo21865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1335313503;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13662 = encode_clo(alloc_clo(lam13662_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13665 = arg_buffer[1];
//reading env and args
void* kont13351 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar21866 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21866, "0", 10);
void* a1324913500 = encode_mpz(mpzvar21866);

//creating new closure instance
void** clo21868 = alloc_clo(lam13662_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo21868[1] = drop;
clo21868[2] = lst;
clo21868[3] = _u45;
clo21868[4] = n;
clo21868[5] = kont13351;
clo21868[6] = cdr;
void* f1335413501 = encode_clo(clo21868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1335413501;
arg_buffer[3] = n;
arg_buffer[4] = a1324913500;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam13666_fptr() // lam13666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13667 = arg_buffer[1];
//reading env and args
void* a1325713515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1325513511 = (decode_clo(env13667))[3];
//not do dummy comment
void* kont13355 = (decode_clo(env13667))[2];
//not do dummy comment
void* proc = (decode_clo(env13667))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont13355;
arg_buffer[3] = a1325513511;
arg_buffer[4] = a1325713515;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13666 = encode_clo(alloc_clo(lam13666_fptr, 0));

void* lam13668_fptr() // lam13668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13669 = arg_buffer[1];
//reading env and args
void* a1325613513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env13669))[5];
//not do dummy comment
void* a1325513511 = (decode_clo(env13669))[4];
//not do dummy comment
void* kont13355 = (decode_clo(env13669))[3];
//not do dummy comment
void* proc = (decode_clo(env13669))[2];
//not do dummy comment
void* acc = (decode_clo(env13669))[1];

//creating new closure instance
void** clo21870 = alloc_clo(lam13666_fptr, 3);

//setting env list
clo21870[1] = proc;
clo21870[2] = kont13355;
clo21870[3] = a1325513511;
void* f1335613514 = encode_clo(clo21870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1335613514;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1325613513;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13668 = encode_clo(alloc_clo(lam13668_fptr, 0));

void* lam13670_fptr() // lam13670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13671 = arg_buffer[1];
//reading env and args
void* a1325513511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13671))[6];
//not do dummy comment
void* kont13355 = (decode_clo(env13671))[5];
//not do dummy comment
void* foldr = (decode_clo(env13671))[4];
//not do dummy comment
void* lst = (decode_clo(env13671))[3];
//not do dummy comment
void* proc = (decode_clo(env13671))[2];
//not do dummy comment
void* acc = (decode_clo(env13671))[1];

//creating new closure instance
void** clo21872 = alloc_clo(lam13668_fptr, 5);

//setting env list
clo21872[1] = acc;
clo21872[2] = proc;
clo21872[3] = kont13355;
clo21872[4] = a1325513511;
clo21872[5] = foldr;
void* f1335713512 = encode_clo(clo21872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1335713512;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13670 = encode_clo(alloc_clo(lam13670_fptr, 0));

void* lam13672_fptr() // lam13672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13673 = arg_buffer[1];
//reading env and args
void* a1325413509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13673))[7];
//not do dummy comment
void* kont13355 = (decode_clo(env13673))[6];
//not do dummy comment
void* car = (decode_clo(env13673))[5];
//not do dummy comment
void* foldr = (decode_clo(env13673))[4];
//not do dummy comment
void* lst = (decode_clo(env13673))[3];
//not do dummy comment
void* proc = (decode_clo(env13673))[2];
//not do dummy comment
void* acc = (decode_clo(env13673))[1];

//if-clause
bool if_guard21873 = is_true(a1325413509);
if(if_guard21873)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13355);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13355))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21875 = alloc_clo(lam13670_fptr, 6);

//setting env list
clo21875[1] = acc;
clo21875[2] = proc;
clo21875[3] = lst;
clo21875[4] = foldr;
clo21875[5] = kont13355;
clo21875[6] = cdr;
void* f1335813510 = encode_clo(clo21875);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1335813510;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13672 = encode_clo(alloc_clo(lam13672_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13674 = arg_buffer[1];
//reading env and args
void* kont13355 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo21877 = alloc_clo(lam13672_fptr, 7);

//setting env list
clo21877[1] = acc;
clo21877[2] = proc;
clo21877[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo21877[4] = foldr;
clo21877[5] = car;
clo21877[6] = kont13355;
clo21877[7] = cdr;
void* f1335913508 = encode_clo(clo21877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1335913508;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam13675_fptr() // lam13675 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13676 = arg_buffer[1];
//reading env and args
void* a1326113523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13360 = (decode_clo(env13676))[3];
//not do dummy comment
void* cons = (decode_clo(env13676))[2];
//not do dummy comment
void* a1325913519 = (decode_clo(env13676))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13360;
arg_buffer[3] = a1325913519;
arg_buffer[4] = a1326113523;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13675 = encode_clo(alloc_clo(lam13675_fptr, 0));

void* lam13677_fptr() // lam13677 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13678 = arg_buffer[1];
//reading env and args
void* a1326013521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env13678))[5];
//not do dummy comment
void* lst2 = (decode_clo(env13678))[4];
//not do dummy comment
void* kont13360 = (decode_clo(env13678))[3];
//not do dummy comment
void* cons = (decode_clo(env13678))[2];
//not do dummy comment
void* a1325913519 = (decode_clo(env13678))[1];

//creating new closure instance
void** clo21879 = alloc_clo(lam13675_fptr, 3);

//setting env list
clo21879[1] = a1325913519;
clo21879[2] = cons;
clo21879[3] = kont13360;
void* f1336113522 = encode_clo(clo21879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1336113522;
arg_buffer[3] = a1326013521;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13677 = encode_clo(alloc_clo(lam13677_fptr, 0));

void* lam13679_fptr() // lam13679 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13680 = arg_buffer[1];
//reading env and args
void* a1325913519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13680))[6];
//not do dummy comment
void* append = (decode_clo(env13680))[5];
//not do dummy comment
void* lst2 = (decode_clo(env13680))[4];
//not do dummy comment
void* lst1 = (decode_clo(env13680))[3];
//not do dummy comment
void* cons = (decode_clo(env13680))[2];
//not do dummy comment
void* kont13360 = (decode_clo(env13680))[1];

//creating new closure instance
void** clo21881 = alloc_clo(lam13677_fptr, 5);

//setting env list
clo21881[1] = a1325913519;
clo21881[2] = cons;
clo21881[3] = kont13360;
clo21881[4] = lst2;
clo21881[5] = append;
void* f1336213520 = encode_clo(clo21881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1336213520;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13679 = encode_clo(alloc_clo(lam13679_fptr, 0));

void* lam13681_fptr() // lam13681 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13682 = arg_buffer[1];
//reading env and args
void* a1325813517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13682))[7];
//not do dummy comment
void* append = (decode_clo(env13682))[6];
//not do dummy comment
void* lst2 = (decode_clo(env13682))[5];
//not do dummy comment
void* cons = (decode_clo(env13682))[4];
//not do dummy comment
void* kont13360 = (decode_clo(env13682))[3];
//not do dummy comment
void* lst1 = (decode_clo(env13682))[2];
//not do dummy comment
void* car = (decode_clo(env13682))[1];

//if-clause
bool if_guard21882 = is_true(a1325813517);
if(if_guard21882)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13360);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13360))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo21884 = alloc_clo(lam13679_fptr, 6);

//setting env list
clo21884[1] = kont13360;
clo21884[2] = cons;
clo21884[3] = lst1;
clo21884[4] = lst2;
clo21884[5] = append;
clo21884[6] = cdr;
void* f1336313518 = encode_clo(clo21884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1336313518;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13681 = encode_clo(alloc_clo(lam13681_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13683 = arg_buffer[1];
//reading env and args
void* kont13360 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo21886 = alloc_clo(lam13681_fptr, 7);

//setting env list
clo21886[1] = car;
clo21886[2] = lst1;
clo21886[3] = kont13360;
clo21886[4] = cons;
clo21886[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo21886[6] = append;
clo21886[7] = cdr;
void* f1336413516 = encode_clo(clo21886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1336413516;
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
void* _13684 = arg_buffer[1];
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

void* kont1336513524 = prim_car(lst);
void* lst13525 = prim_cdr(lst);
void* x1326213526 = apply_prim_hash(lst13525);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1336513524);
arg_buffer[2] = x1326213526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1336513524))[0]);
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
void* _13685 = arg_buffer[1];
//reading env and args
void* kont13367 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1326313527 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13367);
arg_buffer[2] = x1326313527;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13367))[0]);
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
void* _13686 = arg_buffer[1];
//reading env and args
void* kont13368 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1326413528 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13368);
arg_buffer[2] = x1326413528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13368))[0]);
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
void* _13687 = arg_buffer[1];
//reading env and args
void* kont13369 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1326513529 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13369);
arg_buffer[2] = x1326513529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13369))[0]);
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
void* _13688 = arg_buffer[1];
//reading env and args
void* kont13370 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1326613530 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13370);
arg_buffer[2] = x1326613530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13370))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam13690_fptr() // lam13690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13691 = arg_buffer[1];
//reading env and args
void* a1327213539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env13691))[3];
//not do dummy comment
void* kont13371 = (decode_clo(env13691))[2];
//not do dummy comment
void* n = (decode_clo(env13691))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont13371;
arg_buffer[3] = n;
arg_buffer[4] = a1327213539;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13690 = encode_clo(alloc_clo(lam13690_fptr, 0));

void* lam13692_fptr() // lam13692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13693 = arg_buffer[1];
//reading env and args
void* a1327113537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env13693))[4];
//not do dummy comment
void* fact = (decode_clo(env13693))[3];
//not do dummy comment
void* kont13371 = (decode_clo(env13693))[2];
//not do dummy comment
void* n = (decode_clo(env13693))[1];

//creating new closure instance
void** clo21888 = alloc_clo(lam13690_fptr, 3);

//setting env list
clo21888[1] = n;
clo21888[2] = kont13371;
clo21888[3] = _u42;
void* f1337213538 = encode_clo(clo21888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = f1337213538;
arg_buffer[3] = a1327113537;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13692 = encode_clo(alloc_clo(lam13692_fptr, 0));

void* lam13695_fptr() // lam13695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13696 = arg_buffer[1];
//reading env and args
void* a1326813533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env13696))[5];
//not do dummy comment
void* fact = (decode_clo(env13696))[4];
//not do dummy comment
void* kont13371 = (decode_clo(env13696))[3];
//not do dummy comment
void* n = (decode_clo(env13696))[2];
//not do dummy comment
void* _u45 = (decode_clo(env13696))[1];

//if-clause
bool if_guard21889 = is_true(a1326813533);
if(if_guard21889)
{
mpz_t* mpzvar21890 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21890, "1", 10);
void* x1326913534 = encode_mpz(mpzvar21890);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13371);
arg_buffer[2] = x1326913534;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13371))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar21891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21891, "1", 10);
void* a1327013535 = encode_mpz(mpzvar21891);

//creating new closure instance
void** clo21893 = alloc_clo(lam13692_fptr, 4);

//setting env list
clo21893[1] = n;
clo21893[2] = kont13371;
clo21893[3] = fact;
clo21893[4] = _u42;
void* f1337313536 = encode_clo(clo21893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1337313536;
arg_buffer[3] = n;
arg_buffer[4] = a1327013535;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13695 = encode_clo(alloc_clo(lam13695_fptr, 0));

void* fact_fptr() // fact 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13698 = arg_buffer[1];
//reading env and args
void* kont13371 = arg_buffer[2];
void* n = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar21894 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21894, "0", 10);
void* a1326713531 = encode_mpz(mpzvar21894);

//creating new closure instance
void** clo21896 = alloc_clo(lam13695_fptr, 5);

//setting env list
clo21896[1] = _u45;
clo21896[2] = n;
clo21896[3] = kont13371;
void* fact = encode_clo(alloc_clo(fact_fptr, 0));

clo21896[4] = fact;
clo21896[5] = _u42;
void* f1337413532 = encode_clo(clo21896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1337413532;
arg_buffer[3] = a1326713531;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* fact = encode_clo(alloc_clo(fact_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13700 = arg_buffer[1];
//reading env and args
void* kont13375 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar21897 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar21897, "5", 10);
void* a1327313540 = encode_mpz(mpzvar21897);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = kont13375;
arg_buffer[3] = a1327313540;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
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

