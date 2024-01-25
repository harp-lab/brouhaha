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
void* _23545 = arg_buffer[1];
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

void* kont2324223360 = prim_car(lst);
void* lst23361 = prim_cdr(lst);
void* x2313523362 = apply_prim__u43(lst23361);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2324223360);
arg_buffer[2] = x2313523362;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2324223360))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23546 = arg_buffer[1];
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

void* kont2324423363 = prim_car(lst);
void* lst23364 = prim_cdr(lst);
void* x2313623365 = apply_prim_max(lst23364);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2324423363);
arg_buffer[2] = x2313623365;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2324423363))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23547 = arg_buffer[1];
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

void* kont2324623366 = prim_car(lst);
void* lst23367 = prim_cdr(lst);
void* x2313723368 = apply_prim__u45(lst23367);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2324623366);
arg_buffer[2] = x2313723368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2324623366))[0]);
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
void* _23548 = arg_buffer[1];
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

void* kont2324823369 = prim_car(lst);
void* lst23370 = prim_cdr(lst);
void* x2313823371 = apply_prim__u42(lst23370);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2324823369);
arg_buffer[2] = x2313823371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2324823369))[0]);
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
void* _23549 = arg_buffer[1];
//reading env and args
void* kont23250 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2313923372 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23250);
arg_buffer[2] = x2313923372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23250))[0]);
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
void* _23550 = arg_buffer[1];
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

void* kont2325123373 = prim_car(lst);
void* lst23374 = prim_cdr(lst);
void* x2314023375 = apply_prim__u47(lst23374);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2325123373);
arg_buffer[2] = x2314023375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2325123373))[0]);
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
void* _23551 = arg_buffer[1];
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

void* kont2325323376 = prim_car(lst);
void* lst23377 = prim_cdr(lst);
void* x2314123378 = apply_prim__u61(lst23377);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2325323376);
arg_buffer[2] = x2314123378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2325323376))[0]);
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
void* _23552 = arg_buffer[1];
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

void* kont2325523379 = prim_car(lst);
void* lst23380 = prim_cdr(lst);
void* x2314223381 = apply_prim__u62(lst23380);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2325523379);
arg_buffer[2] = x2314223381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2325523379))[0]);
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
void* _23553 = arg_buffer[1];
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

void* kont2325723382 = prim_car(lst);
void* lst23383 = prim_cdr(lst);
void* x2314323384 = apply_prim__u60(lst23383);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2325723382);
arg_buffer[2] = x2314323384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2325723382))[0]);
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
void* _23554 = arg_buffer[1];
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

void* kont2325923385 = prim_car(lst);
void* lst23386 = prim_cdr(lst);
void* x2314423387 = apply_prim__u60_u61(lst23386);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2325923385);
arg_buffer[2] = x2314423387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2325923385))[0]);
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
void* _23555 = arg_buffer[1];
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

void* kont2326123388 = prim_car(lst);
void* lst23389 = prim_cdr(lst);
void* x2314523390 = apply_prim__u62_u61(lst23389);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2326123388);
arg_buffer[2] = x2314523390;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2326123388))[0]);
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
void* _23556 = arg_buffer[1];
//reading env and args
void* kont23263 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2314623391 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23263);
arg_buffer[2] = x2314623391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23263))[0]);
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
void* _23557 = arg_buffer[1];
//reading env and args
void* kont23264 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2314723392 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23264);
arg_buffer[2] = x2314723392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23264))[0]);
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
void* _23558 = arg_buffer[1];
//reading env and args
void* kont23265 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2314823393 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23265);
arg_buffer[2] = x2314823393;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23265))[0]);
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
void* _23559 = arg_buffer[1];
//reading env and args
void* kont23266 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2314923394 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23266);
arg_buffer[2] = x2314923394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23266))[0]);
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
void* _23560 = arg_buffer[1];
//reading env and args
void* kont23267 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2315023395 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23267);
arg_buffer[2] = x2315023395;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23267))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23561 = arg_buffer[1];
//reading env and args
void* kont23268 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2315123396 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23268);
arg_buffer[2] = x2315123396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23268))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23562 = arg_buffer[1];
//reading env and args
void* kont23269 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2315223397 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23269);
arg_buffer[2] = x2315223397;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23269))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam23563_fptr() // lam23563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23564 = arg_buffer[1];
//reading env and args
void* a2315523401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env23564))[3];
//not do dummy comment
void* kont23270 = (decode_clo(env23564))[2];
//not do dummy comment
void* a2315323398 = (decode_clo(env23564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont23270;
arg_buffer[3] = a2315323398;
arg_buffer[4] = a2315523401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23563 = encode_clo(alloc_clo(lam23563_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23567 = arg_buffer[1];
//reading env and args
void* kont23270 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar23721 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23721, "0", 10);
void* a2315323398 = encode_mpz(mpzvar23721);
mpz_t* mpzvar23722 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23722, "2", 10);
void* a2315423399 = encode_mpz(mpzvar23722);

//creating new closure instance
void** clo23724 = alloc_clo(lam23563_fptr, 3);

//setting env list
clo23724[1] = a2315323398;
clo23724[2] = kont23270;
clo23724[3] = equal_u63;
void* f2327123400 = encode_clo(clo23724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2327123400;
arg_buffer[3] = x;
arg_buffer[4] = a2315423399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam23568_fptr() // lam23568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23569 = arg_buffer[1];
//reading env and args
void* a2315823405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23272 = (decode_clo(env23569))[3];
//not do dummy comment
void* a2315623402 = (decode_clo(env23569))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env23569))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont23272;
arg_buffer[3] = a2315623402;
arg_buffer[4] = a2315823405;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23568 = encode_clo(alloc_clo(lam23568_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23572 = arg_buffer[1];
//reading env and args
void* kont23272 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar23725 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23725, "1", 10);
void* a2315623402 = encode_mpz(mpzvar23725);
mpz_t* mpzvar23726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23726, "2", 10);
void* a2315723403 = encode_mpz(mpzvar23726);

//creating new closure instance
void** clo23728 = alloc_clo(lam23568_fptr, 3);

//setting env list
clo23728[1] = equal_u63;
clo23728[2] = a2315623402;
clo23728[3] = kont23272;
void* f2327323404 = encode_clo(clo23728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2327323404;
arg_buffer[3] = x;
arg_buffer[4] = a2315723403;
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
void* _23573 = arg_buffer[1];
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

void* kont2327423406 = prim_car(x);
void* x23407 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2327423406);
arg_buffer[2] = x23407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2327423406))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23574 = arg_buffer[1];
//reading env and args
void* kont23276 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2315923408 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23276);
arg_buffer[2] = x2315923408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23276))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23575 = arg_buffer[1];
//reading env and args
void* kont23277 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2316023409 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23277);
arg_buffer[2] = x2316023409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23277))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam23578_fptr() // lam23578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23579 = arg_buffer[1];
//reading env and args
void* a2316623419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env23579))[3];
//not do dummy comment
void* kont23278 = (decode_clo(env23579))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23579))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont23278;
arg_buffer[3] = x;
arg_buffer[4] = a2316623419;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23578 = encode_clo(alloc_clo(lam23578_fptr, 0));

void* lam23580_fptr() // lam23580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23581 = arg_buffer[1];
//reading env and args
void* a2316423416 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23581))[5];
//not do dummy comment
void* lst = (decode_clo(env23581))[4];
//not do dummy comment
void* x = (decode_clo(env23581))[3];
//not do dummy comment
void* kont23278 = (decode_clo(env23581))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23581))[1];

//if-clause
bool if_guard23729 = is_true(a2316423416);
if(if_guard23729)
{
void* x2316523417 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23278);
arg_buffer[2] = x2316523417;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23278))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23731 = alloc_clo(lam23578_fptr, 3);

//setting env list
clo23731[1] = member_u63;
clo23731[2] = kont23278;
clo23731[3] = x;
void* f2327923418 = encode_clo(clo23731);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2327923418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23580 = encode_clo(alloc_clo(lam23580_fptr, 0));

void* lam23582_fptr() // lam23582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23583 = arg_buffer[1];
//reading env and args
void* a2316323414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23583))[6];
//not do dummy comment
void* lst = (decode_clo(env23583))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env23583))[4];
//not do dummy comment
void* x = (decode_clo(env23583))[3];
//not do dummy comment
void* kont23278 = (decode_clo(env23583))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23583))[1];

//creating new closure instance
void** clo23733 = alloc_clo(lam23580_fptr, 5);

//setting env list
clo23733[1] = member_u63;
clo23733[2] = kont23278;
clo23733[3] = x;
clo23733[4] = lst;
clo23733[5] = cdr;
void* f2328023415 = encode_clo(clo23733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2328023415;
arg_buffer[3] = a2316323414;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23582 = encode_clo(alloc_clo(lam23582_fptr, 0));

void* lam23584_fptr() // lam23584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23585 = arg_buffer[1];
//reading env and args
void* a2316123411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23585))[7];
//not do dummy comment
void* lst = (decode_clo(env23585))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env23585))[5];
//not do dummy comment
void* x = (decode_clo(env23585))[4];
//not do dummy comment
void* kont23278 = (decode_clo(env23585))[3];
//not do dummy comment
void* car = (decode_clo(env23585))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23585))[1];

//if-clause
bool if_guard23734 = is_true(a2316123411);
if(if_guard23734)
{
void* x2316223412 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23278);
arg_buffer[2] = x2316223412;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23278))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23736 = alloc_clo(lam23582_fptr, 6);

//setting env list
clo23736[1] = member_u63;
clo23736[2] = kont23278;
clo23736[3] = x;
clo23736[4] = equal_u63;
clo23736[5] = lst;
clo23736[6] = cdr;
void* f2328123413 = encode_clo(clo23736);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2328123413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23584 = encode_clo(alloc_clo(lam23584_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23586 = arg_buffer[1];
//reading env and args
void* kont23278 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23738 = alloc_clo(lam23584_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo23738[1] = member_u63;
clo23738[2] = car;
clo23738[3] = kont23278;
clo23738[4] = x;
clo23738[5] = equal_u63;
clo23738[6] = lst;
clo23738[7] = cdr;
void* f2328223410 = encode_clo(clo23738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2328223410;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam23587_fptr() // lam23587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23588 = arg_buffer[1];
//reading env and args
void* a2317023427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23283 = (decode_clo(env23588))[4];
//not do dummy comment
void* fun = (decode_clo(env23588))[3];
//not do dummy comment
void* foldl = (decode_clo(env23588))[2];
//not do dummy comment
void* a2316923425 = (decode_clo(env23588))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont23283;
arg_buffer[3] = fun;
arg_buffer[4] = a2316923425;
arg_buffer[5] = a2317023427;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23587 = encode_clo(alloc_clo(lam23587_fptr, 0));

void* lam23589_fptr() // lam23589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23590 = arg_buffer[1];
//reading env and args
void* a2316923425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23590))[5];
//not do dummy comment
void* kont23283 = (decode_clo(env23590))[4];
//not do dummy comment
void* lst = (decode_clo(env23590))[3];
//not do dummy comment
void* fun = (decode_clo(env23590))[2];
//not do dummy comment
void* foldl = (decode_clo(env23590))[1];

//creating new closure instance
void** clo23740 = alloc_clo(lam23587_fptr, 4);

//setting env list
clo23740[1] = a2316923425;
clo23740[2] = foldl;
clo23740[3] = fun;
clo23740[4] = kont23283;
void* f2328423426 = encode_clo(clo23740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2328423426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23589 = encode_clo(alloc_clo(lam23589_fptr, 0));

void* lam23591_fptr() // lam23591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23592 = arg_buffer[1];
//reading env and args
void* a2316823423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23592))[6];
//not do dummy comment
void* kont23283 = (decode_clo(env23592))[5];
//not do dummy comment
void* lst = (decode_clo(env23592))[4];
//not do dummy comment
void* fun = (decode_clo(env23592))[3];
//not do dummy comment
void* acc = (decode_clo(env23592))[2];
//not do dummy comment
void* foldl = (decode_clo(env23592))[1];

//creating new closure instance
void** clo23742 = alloc_clo(lam23589_fptr, 5);

//setting env list
clo23742[1] = foldl;
clo23742[2] = fun;
clo23742[3] = lst;
clo23742[4] = kont23283;
clo23742[5] = cdr;
void* f2328523424 = encode_clo(clo23742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2328523424;
arg_buffer[3] = a2316823423;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23591 = encode_clo(alloc_clo(lam23591_fptr, 0));

void* lam23593_fptr() // lam23593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23594 = arg_buffer[1];
//reading env and args
void* a2316723421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23594))[7];
//not do dummy comment
void* kont23283 = (decode_clo(env23594))[6];
//not do dummy comment
void* lst = (decode_clo(env23594))[5];
//not do dummy comment
void* fun = (decode_clo(env23594))[4];
//not do dummy comment
void* acc = (decode_clo(env23594))[3];
//not do dummy comment
void* car = (decode_clo(env23594))[2];
//not do dummy comment
void* foldl = (decode_clo(env23594))[1];

//if-clause
bool if_guard23743 = is_true(a2316723421);
if(if_guard23743)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23283);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23283))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23745 = alloc_clo(lam23591_fptr, 6);

//setting env list
clo23745[1] = foldl;
clo23745[2] = acc;
clo23745[3] = fun;
clo23745[4] = lst;
clo23745[5] = kont23283;
clo23745[6] = cdr;
void* f2328623422 = encode_clo(clo23745);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2328623422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23593 = encode_clo(alloc_clo(lam23593_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23595 = arg_buffer[1];
//reading env and args
void* kont23283 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo23747 = alloc_clo(lam23593_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo23747[1] = foldl;
clo23747[2] = car;
clo23747[3] = acc;
clo23747[4] = fun;
clo23747[5] = lst;
clo23747[6] = kont23283;
clo23747[7] = cdr;
void* f2328723420 = encode_clo(clo23747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2328723420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam23596_fptr() // lam23596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23597 = arg_buffer[1];
//reading env and args
void* a2317423435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2317223431 = (decode_clo(env23597))[3];
//not do dummy comment
void* kont23288 = (decode_clo(env23597))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23597))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont23288;
arg_buffer[3] = a2317223431;
arg_buffer[4] = a2317423435;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23596 = encode_clo(alloc_clo(lam23596_fptr, 0));

void* lam23598_fptr() // lam23598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23599 = arg_buffer[1];
//reading env and args
void* a2317323433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2317223431 = (decode_clo(env23599))[5];
//not do dummy comment
void* kont23288 = (decode_clo(env23599))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23599))[3];
//not do dummy comment
void* lst2 = (decode_clo(env23599))[2];
//not do dummy comment
void* cons = (decode_clo(env23599))[1];

//creating new closure instance
void** clo23749 = alloc_clo(lam23596_fptr, 3);

//setting env list
clo23749[1] = reverse_u45helper;
clo23749[2] = kont23288;
clo23749[3] = a2317223431;
void* f2328923434 = encode_clo(clo23749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2328923434;
arg_buffer[3] = a2317323433;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23598 = encode_clo(alloc_clo(lam23598_fptr, 0));

void* lam23600_fptr() // lam23600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23601 = arg_buffer[1];
//reading env and args
void* a2317223431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23601))[6];
//not do dummy comment
void* kont23288 = (decode_clo(env23601))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23601))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23601))[3];
//not do dummy comment
void* car = (decode_clo(env23601))[2];
//not do dummy comment
void* cons = (decode_clo(env23601))[1];

//creating new closure instance
void** clo23751 = alloc_clo(lam23598_fptr, 5);

//setting env list
clo23751[1] = cons;
clo23751[2] = lst2;
clo23751[3] = reverse_u45helper;
clo23751[4] = kont23288;
clo23751[5] = a2317223431;
void* f2329023432 = encode_clo(clo23751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2329023432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23600 = encode_clo(alloc_clo(lam23600_fptr, 0));

void* lam23602_fptr() // lam23602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23603 = arg_buffer[1];
//reading env and args
void* a2317123429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23603))[7];
//not do dummy comment
void* lst = (decode_clo(env23603))[6];
//not do dummy comment
void* kont23288 = (decode_clo(env23603))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23603))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23603))[3];
//not do dummy comment
void* car = (decode_clo(env23603))[2];
//not do dummy comment
void* cons = (decode_clo(env23603))[1];

//if-clause
bool if_guard23752 = is_true(a2317123429);
if(if_guard23752)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23288);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23288))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23754 = alloc_clo(lam23600_fptr, 6);

//setting env list
clo23754[1] = cons;
clo23754[2] = car;
clo23754[3] = lst2;
clo23754[4] = reverse_u45helper;
clo23754[5] = kont23288;
clo23754[6] = lst;
void* f2329123430 = encode_clo(clo23754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2329123430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23602 = encode_clo(alloc_clo(lam23602_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23604 = arg_buffer[1];
//reading env and args
void* kont23288 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23756 = alloc_clo(lam23602_fptr, 7);

//setting env list
clo23756[1] = cons;
clo23756[2] = car;
clo23756[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo23756[4] = reverse_u45helper;
clo23756[5] = kont23288;
clo23756[6] = lst;
clo23756[7] = cdr;
void* f2329223428 = encode_clo(clo23756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2329223428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam23605_fptr() // lam23605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23606 = arg_buffer[1];
//reading env and args
void* a2317523437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23606))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23606))[2];
//not do dummy comment
void* kont23293 = (decode_clo(env23606))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont23293;
arg_buffer[3] = lst;
arg_buffer[4] = a2317523437;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23605 = encode_clo(alloc_clo(lam23605_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23607 = arg_buffer[1];
//reading env and args
void* kont23293 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo23758 = alloc_clo(lam23605_fptr, 3);

//setting env list
clo23758[1] = kont23293;
clo23758[2] = reverse_u45helper;
clo23758[3] = lst;
void* f2329423436 = encode_clo(clo23758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2329423436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam23608_fptr() // lam23608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23609 = arg_buffer[1];
//reading env and args
void* x2317823442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23295 = (decode_clo(env23609))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23295);
arg_buffer[2] = x2317823442;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23295))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23608 = encode_clo(alloc_clo(lam23608_fptr, 0));

void* lam23610_fptr() // lam23610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23611 = arg_buffer[1];
//reading env and args
void* a2318323451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2317923444 = (decode_clo(env23611))[4];
//not do dummy comment
void* a2318123447 = (decode_clo(env23611))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env23611))[2];
//not do dummy comment
void* kont23295 = (decode_clo(env23611))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont23295;
arg_buffer[3] = a2317923444;
arg_buffer[4] = a2318123447;
arg_buffer[5] = a2318323451;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23610 = encode_clo(alloc_clo(lam23610_fptr, 0));

void* lam23612_fptr() // lam23612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23613 = arg_buffer[1];
//reading env and args
void* a2318223449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2317923444 = (decode_clo(env23613))[6];
//not do dummy comment
void* a2318123447 = (decode_clo(env23613))[5];
//not do dummy comment
void* kont23295 = (decode_clo(env23613))[4];
//not do dummy comment
void* cons = (decode_clo(env23613))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env23613))[2];
//not do dummy comment
void* lst2 = (decode_clo(env23613))[1];

//creating new closure instance
void** clo23760 = alloc_clo(lam23610_fptr, 4);

//setting env list
clo23760[1] = kont23295;
clo23760[2] = take_u45helper;
clo23760[3] = a2318123447;
clo23760[4] = a2317923444;
void* f2329723450 = encode_clo(clo23760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2329723450;
arg_buffer[3] = a2318223449;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23612 = encode_clo(alloc_clo(lam23612_fptr, 0));

void* lam23614_fptr() // lam23614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23615 = arg_buffer[1];
//reading env and args
void* a2318123447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2317923444 = (decode_clo(env23615))[7];
//not do dummy comment
void* lst = (decode_clo(env23615))[6];
//not do dummy comment
void* cons = (decode_clo(env23615))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23615))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23615))[3];
//not do dummy comment
void* kont23295 = (decode_clo(env23615))[2];
//not do dummy comment
void* car = (decode_clo(env23615))[1];

//creating new closure instance
void** clo23762 = alloc_clo(lam23612_fptr, 6);

//setting env list
clo23762[1] = lst2;
clo23762[2] = take_u45helper;
clo23762[3] = cons;
clo23762[4] = kont23295;
clo23762[5] = a2318123447;
clo23762[6] = a2317923444;
void* f2329823448 = encode_clo(clo23762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2329823448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23614 = encode_clo(alloc_clo(lam23614_fptr, 0));

void* lam23617_fptr() // lam23617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23618 = arg_buffer[1];
//reading env and args
void* a2317923444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23618))[8];
//not do dummy comment
void* cons = (decode_clo(env23618))[7];
//not do dummy comment
void* _u45 = (decode_clo(env23618))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env23618))[5];
//not do dummy comment
void* lst2 = (decode_clo(env23618))[4];
//not do dummy comment
void* kont23295 = (decode_clo(env23618))[3];
//not do dummy comment
void* n = (decode_clo(env23618))[2];
//not do dummy comment
void* car = (decode_clo(env23618))[1];
mpz_t* mpzvar23763 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23763, "1", 10);
void* a2318023445 = encode_mpz(mpzvar23763);

//creating new closure instance
void** clo23765 = alloc_clo(lam23614_fptr, 7);

//setting env list
clo23765[1] = car;
clo23765[2] = kont23295;
clo23765[3] = lst2;
clo23765[4] = take_u45helper;
clo23765[5] = cons;
clo23765[6] = lst;
clo23765[7] = a2317923444;
void* f2329923446 = encode_clo(clo23765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2329923446;
arg_buffer[3] = n;
arg_buffer[4] = a2318023445;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23617 = encode_clo(alloc_clo(lam23617_fptr, 0));

void* lam23619_fptr() // lam23619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23620 = arg_buffer[1];
//reading env and args
void* a2317723440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23620))[10];
//not do dummy comment
void* lst = (decode_clo(env23620))[9];
//not do dummy comment
void* reverse = (decode_clo(env23620))[8];
//not do dummy comment
void* cons = (decode_clo(env23620))[7];
//not do dummy comment
void* _u45 = (decode_clo(env23620))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env23620))[5];
//not do dummy comment
void* lst2 = (decode_clo(env23620))[4];
//not do dummy comment
void* kont23295 = (decode_clo(env23620))[3];
//not do dummy comment
void* n = (decode_clo(env23620))[2];
//not do dummy comment
void* car = (decode_clo(env23620))[1];

//if-clause
bool if_guard23766 = is_true(a2317723440);
if(if_guard23766)
{

//creating new closure instance
void** clo23768 = alloc_clo(lam23608_fptr, 1);

//setting env list
clo23768[1] = kont23295;
void* f2329623441 = encode_clo(clo23768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2329623441;
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
void** clo23770 = alloc_clo(lam23617_fptr, 8);

//setting env list
clo23770[1] = car;
clo23770[2] = n;
clo23770[3] = kont23295;
clo23770[4] = lst2;
clo23770[5] = take_u45helper;
clo23770[6] = _u45;
clo23770[7] = cons;
clo23770[8] = lst;
void* f2330023443 = encode_clo(clo23770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2330023443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23619 = encode_clo(alloc_clo(lam23619_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23622 = arg_buffer[1];
//reading env and args
void* kont23295 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar23771 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23771, "0", 10);
void* a2317623438 = encode_mpz(mpzvar23771);

//creating new closure instance
void** clo23773 = alloc_clo(lam23619_fptr, 10);

//setting env list
clo23773[1] = car;
clo23773[2] = n;
clo23773[3] = kont23295;
clo23773[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo23773[5] = take_u45helper;
clo23773[6] = _u45;
clo23773[7] = cons;
clo23773[8] = reverse;
clo23773[9] = lst;
clo23773[10] = cdr;
void* f2330123439 = encode_clo(clo23773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2330123439;
arg_buffer[3] = n;
arg_buffer[4] = a2317623438;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam23623_fptr() // lam23623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23624 = arg_buffer[1];
//reading env and args
void* a2318423453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env23624))[4];
//not do dummy comment
void* n = (decode_clo(env23624))[3];
//not do dummy comment
void* lst = (decode_clo(env23624))[2];
//not do dummy comment
void* kont23302 = (decode_clo(env23624))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont23302;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2318423453;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23623 = encode_clo(alloc_clo(lam23623_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23625 = arg_buffer[1];
//reading env and args
void* kont23302 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23775 = alloc_clo(lam23623_fptr, 4);

//setting env list
clo23775[1] = kont23302;
clo23775[2] = lst;
clo23775[3] = n;
clo23775[4] = take_u45helper;
void* f2330323452 = encode_clo(clo23775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2330323452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam23627_fptr() // lam23627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23628 = arg_buffer[1];
//reading env and args
void* a2318923461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23304 = (decode_clo(env23628))[3];
//not do dummy comment
void* _u43 = (decode_clo(env23628))[2];
//not do dummy comment
void* a2318723457 = (decode_clo(env23628))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont23304;
arg_buffer[3] = a2318723457;
arg_buffer[4] = a2318923461;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23627 = encode_clo(alloc_clo(lam23627_fptr, 0));

void* lam23629_fptr() // lam23629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23630 = arg_buffer[1];
//reading env and args
void* a2318823459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env23630))[4];
//not do dummy comment
void* kont23304 = (decode_clo(env23630))[3];
//not do dummy comment
void* _u43 = (decode_clo(env23630))[2];
//not do dummy comment
void* a2318723457 = (decode_clo(env23630))[1];

//creating new closure instance
void** clo23777 = alloc_clo(lam23627_fptr, 3);

//setting env list
clo23777[1] = a2318723457;
clo23777[2] = _u43;
clo23777[3] = kont23304;
void* f2330523460 = encode_clo(clo23777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2330523460;
arg_buffer[3] = a2318823459;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23629 = encode_clo(alloc_clo(lam23629_fptr, 0));

void* lam23632_fptr() // lam23632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23633 = arg_buffer[1];
//reading env and args
void* a2318523455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23633))[5];
//not do dummy comment
void* lst = (decode_clo(env23633))[4];
//not do dummy comment
void* length = (decode_clo(env23633))[3];
//not do dummy comment
void* kont23304 = (decode_clo(env23633))[2];
//not do dummy comment
void* _u43 = (decode_clo(env23633))[1];

//if-clause
bool if_guard23778 = is_true(a2318523455);
if(if_guard23778)
{
mpz_t* mpzvar23779 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23779, "0", 10);
void* x2318623456 = encode_mpz(mpzvar23779);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23304);
arg_buffer[2] = x2318623456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23304))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar23780 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23780, "1", 10);
void* a2318723457 = encode_mpz(mpzvar23780);

//creating new closure instance
void** clo23782 = alloc_clo(lam23629_fptr, 4);

//setting env list
clo23782[1] = a2318723457;
clo23782[2] = _u43;
clo23782[3] = kont23304;
clo23782[4] = length;
void* f2330623458 = encode_clo(clo23782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2330623458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23632 = encode_clo(alloc_clo(lam23632_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23634 = arg_buffer[1];
//reading env and args
void* kont23304 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo23784 = alloc_clo(lam23632_fptr, 5);

//setting env list
clo23784[1] = _u43;
clo23784[2] = kont23304;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo23784[3] = length;
clo23784[4] = lst;
clo23784[5] = cdr;
void* f2330723454 = encode_clo(clo23784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2330723454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam23635_fptr() // lam23635 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23636 = arg_buffer[1];
//reading env and args
void* x2319123465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23308 = (decode_clo(env23636))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23308);
arg_buffer[2] = x2319123465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23308))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23635 = encode_clo(alloc_clo(lam23635_fptr, 0));

void* lam23637_fptr() // lam23637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23638 = arg_buffer[1];
//reading env and args
void* a2319523473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23308 = (decode_clo(env23638))[3];
//not do dummy comment
void* a2319323469 = (decode_clo(env23638))[2];
//not do dummy comment
void* cons = (decode_clo(env23638))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont23308;
arg_buffer[3] = a2319323469;
arg_buffer[4] = a2319523473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23637 = encode_clo(alloc_clo(lam23637_fptr, 0));

void* lam23639_fptr() // lam23639 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23640 = arg_buffer[1];
//reading env and args
void* a2319423471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env23640))[5];
//not do dummy comment
void* kont23308 = (decode_clo(env23640))[4];
//not do dummy comment
void* cons = (decode_clo(env23640))[3];
//not do dummy comment
void* proc = (decode_clo(env23640))[2];
//not do dummy comment
void* a2319323469 = (decode_clo(env23640))[1];

//creating new closure instance
void** clo23786 = alloc_clo(lam23637_fptr, 3);

//setting env list
clo23786[1] = cons;
clo23786[2] = a2319323469;
clo23786[3] = kont23308;
void* f2331023472 = encode_clo(clo23786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2331023472;
arg_buffer[3] = proc;
arg_buffer[4] = a2319423471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23639 = encode_clo(alloc_clo(lam23639_fptr, 0));

void* lam23641_fptr() // lam23641 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23642 = arg_buffer[1];
//reading env and args
void* a2319323469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23642))[6];
//not do dummy comment
void* lst = (decode_clo(env23642))[5];
//not do dummy comment
void* map = (decode_clo(env23642))[4];
//not do dummy comment
void* kont23308 = (decode_clo(env23642))[3];
//not do dummy comment
void* proc = (decode_clo(env23642))[2];
//not do dummy comment
void* cons = (decode_clo(env23642))[1];

//creating new closure instance
void** clo23788 = alloc_clo(lam23639_fptr, 5);

//setting env list
clo23788[1] = a2319323469;
clo23788[2] = proc;
clo23788[3] = cons;
clo23788[4] = kont23308;
clo23788[5] = map;
void* f2331123470 = encode_clo(clo23788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2331123470;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23641 = encode_clo(alloc_clo(lam23641_fptr, 0));

void* lam23643_fptr() // lam23643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23644 = arg_buffer[1];
//reading env and args
void* a2319223467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23644))[6];
//not do dummy comment
void* lst = (decode_clo(env23644))[5];
//not do dummy comment
void* map = (decode_clo(env23644))[4];
//not do dummy comment
void* kont23308 = (decode_clo(env23644))[3];
//not do dummy comment
void* proc = (decode_clo(env23644))[2];
//not do dummy comment
void* cons = (decode_clo(env23644))[1];

//creating new closure instance
void** clo23790 = alloc_clo(lam23641_fptr, 6);

//setting env list
clo23790[1] = cons;
clo23790[2] = proc;
clo23790[3] = kont23308;
clo23790[4] = map;
clo23790[5] = lst;
clo23790[6] = cdr;
void* f2331223468 = encode_clo(clo23790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2331223468;
arg_buffer[3] = a2319223467;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23643 = encode_clo(alloc_clo(lam23643_fptr, 0));

void* lam23645_fptr() // lam23645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23646 = arg_buffer[1];
//reading env and args
void* a2319023463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23646))[8];
//not do dummy comment
void* map = (decode_clo(env23646))[7];
//not do dummy comment
void* kont23308 = (decode_clo(env23646))[6];
//not do dummy comment
void* proc = (decode_clo(env23646))[5];
//not do dummy comment
void* car = (decode_clo(env23646))[4];
//not do dummy comment
void* cons = (decode_clo(env23646))[3];
//not do dummy comment
void* list = (decode_clo(env23646))[2];
//not do dummy comment
void* cdr = (decode_clo(env23646))[1];

//if-clause
bool if_guard23791 = is_true(a2319023463);
if(if_guard23791)
{

//creating new closure instance
void** clo23793 = alloc_clo(lam23635_fptr, 1);

//setting env list
clo23793[1] = kont23308;
void* f2330923464 = encode_clo(clo23793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2330923464;
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
void** clo23795 = alloc_clo(lam23643_fptr, 6);

//setting env list
clo23795[1] = cons;
clo23795[2] = proc;
clo23795[3] = kont23308;
clo23795[4] = map;
clo23795[5] = lst;
clo23795[6] = cdr;
void* f2331323466 = encode_clo(clo23795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2331323466;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23645 = encode_clo(alloc_clo(lam23645_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23647 = arg_buffer[1];
//reading env and args
void* kont23308 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23797 = alloc_clo(lam23645_fptr, 8);

//setting env list
clo23797[1] = cdr;
clo23797[2] = list;
clo23797[3] = cons;
clo23797[4] = car;
clo23797[5] = proc;
clo23797[6] = kont23308;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo23797[7] = map;
clo23797[8] = lst;
void* f2331423462 = encode_clo(clo23797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2331423462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam23648_fptr() // lam23648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23649 = arg_buffer[1];
//reading env and args
void* x2319723477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23315 = (decode_clo(env23649))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23315);
arg_buffer[2] = x2319723477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23315))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23648 = encode_clo(alloc_clo(lam23648_fptr, 0));

void* lam23650_fptr() // lam23650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23651 = arg_buffer[1];
//reading env and args
void* a2320223487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23315 = (decode_clo(env23651))[3];
//not do dummy comment
void* a2320023483 = (decode_clo(env23651))[2];
//not do dummy comment
void* cons = (decode_clo(env23651))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont23315;
arg_buffer[3] = a2320023483;
arg_buffer[4] = a2320223487;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23650 = encode_clo(alloc_clo(lam23650_fptr, 0));

void* lam23652_fptr() // lam23652 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23653 = arg_buffer[1];
//reading env and args
void* a2320123485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23315 = (decode_clo(env23653))[5];
//not do dummy comment
void* op = (decode_clo(env23653))[4];
//not do dummy comment
void* a2320023483 = (decode_clo(env23653))[3];
//not do dummy comment
void* filter = (decode_clo(env23653))[2];
//not do dummy comment
void* cons = (decode_clo(env23653))[1];

//creating new closure instance
void** clo23799 = alloc_clo(lam23650_fptr, 3);

//setting env list
clo23799[1] = cons;
clo23799[2] = a2320023483;
clo23799[3] = kont23315;
void* f2331723486 = encode_clo(clo23799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2331723486;
arg_buffer[3] = op;
arg_buffer[4] = a2320123485;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23652 = encode_clo(alloc_clo(lam23652_fptr, 0));

void* lam23654_fptr() // lam23654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23655 = arg_buffer[1];
//reading env and args
void* a2320023483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23655))[6];
//not do dummy comment
void* kont23315 = (decode_clo(env23655))[5];
//not do dummy comment
void* lst = (decode_clo(env23655))[4];
//not do dummy comment
void* op = (decode_clo(env23655))[3];
//not do dummy comment
void* filter = (decode_clo(env23655))[2];
//not do dummy comment
void* cons = (decode_clo(env23655))[1];

//creating new closure instance
void** clo23801 = alloc_clo(lam23652_fptr, 5);

//setting env list
clo23801[1] = cons;
clo23801[2] = filter;
clo23801[3] = a2320023483;
clo23801[4] = op;
clo23801[5] = kont23315;
void* f2331823484 = encode_clo(clo23801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2331823484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23654 = encode_clo(alloc_clo(lam23654_fptr, 0));

void* lam23656_fptr() // lam23656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23657 = arg_buffer[1];
//reading env and args
void* a2320323489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23315 = (decode_clo(env23657))[3];
//not do dummy comment
void* op = (decode_clo(env23657))[2];
//not do dummy comment
void* filter = (decode_clo(env23657))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont23315;
arg_buffer[3] = op;
arg_buffer[4] = a2320323489;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23656 = encode_clo(alloc_clo(lam23656_fptr, 0));

void* lam23658_fptr() // lam23658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23659 = arg_buffer[1];
//reading env and args
void* a2319923481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23659))[7];
//not do dummy comment
void* kont23315 = (decode_clo(env23659))[6];
//not do dummy comment
void* lst = (decode_clo(env23659))[5];
//not do dummy comment
void* op = (decode_clo(env23659))[4];
//not do dummy comment
void* cons = (decode_clo(env23659))[3];
//not do dummy comment
void* filter = (decode_clo(env23659))[2];
//not do dummy comment
void* car = (decode_clo(env23659))[1];

//if-clause
bool if_guard23802 = is_true(a2319923481);
if(if_guard23802)
{

//creating new closure instance
void** clo23804 = alloc_clo(lam23654_fptr, 6);

//setting env list
clo23804[1] = cons;
clo23804[2] = filter;
clo23804[3] = op;
clo23804[4] = lst;
clo23804[5] = kont23315;
clo23804[6] = cdr;
void* f2331923482 = encode_clo(clo23804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2331923482;
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
void** clo23806 = alloc_clo(lam23656_fptr, 3);

//setting env list
clo23806[1] = filter;
clo23806[2] = op;
clo23806[3] = kont23315;
void* f2332023488 = encode_clo(clo23806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2332023488;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23658 = encode_clo(alloc_clo(lam23658_fptr, 0));

void* lam23660_fptr() // lam23660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23661 = arg_buffer[1];
//reading env and args
void* a2319823479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23661))[7];
//not do dummy comment
void* kont23315 = (decode_clo(env23661))[6];
//not do dummy comment
void* lst = (decode_clo(env23661))[5];
//not do dummy comment
void* op = (decode_clo(env23661))[4];
//not do dummy comment
void* cons = (decode_clo(env23661))[3];
//not do dummy comment
void* filter = (decode_clo(env23661))[2];
//not do dummy comment
void* car = (decode_clo(env23661))[1];

//creating new closure instance
void** clo23808 = alloc_clo(lam23658_fptr, 7);

//setting env list
clo23808[1] = car;
clo23808[2] = filter;
clo23808[3] = cons;
clo23808[4] = op;
clo23808[5] = lst;
clo23808[6] = kont23315;
clo23808[7] = cdr;
void* f2332123480 = encode_clo(clo23808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2332123480;
arg_buffer[3] = a2319823479;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23660 = encode_clo(alloc_clo(lam23660_fptr, 0));

void* lam23662_fptr() // lam23662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23663 = arg_buffer[1];
//reading env and args
void* a2319623475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23315 = (decode_clo(env23663))[8];
//not do dummy comment
void* lst = (decode_clo(env23663))[7];
//not do dummy comment
void* op = (decode_clo(env23663))[6];
//not do dummy comment
void* cons = (decode_clo(env23663))[5];
//not do dummy comment
void* list = (decode_clo(env23663))[4];
//not do dummy comment
void* cdr = (decode_clo(env23663))[3];
//not do dummy comment
void* filter = (decode_clo(env23663))[2];
//not do dummy comment
void* car = (decode_clo(env23663))[1];

//if-clause
bool if_guard23809 = is_true(a2319623475);
if(if_guard23809)
{

//creating new closure instance
void** clo23811 = alloc_clo(lam23648_fptr, 1);

//setting env list
clo23811[1] = kont23315;
void* f2331623476 = encode_clo(clo23811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2331623476;
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
void** clo23813 = alloc_clo(lam23660_fptr, 7);

//setting env list
clo23813[1] = car;
clo23813[2] = filter;
clo23813[3] = cons;
clo23813[4] = op;
clo23813[5] = lst;
clo23813[6] = kont23315;
clo23813[7] = cdr;
void* f2332223478 = encode_clo(clo23813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2332223478;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23662 = encode_clo(alloc_clo(lam23662_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23664 = arg_buffer[1];
//reading env and args
void* kont23315 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23815 = alloc_clo(lam23662_fptr, 8);

//setting env list
clo23815[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo23815[2] = filter;
clo23815[3] = cdr;
clo23815[4] = list;
clo23815[5] = cons;
clo23815[6] = op;
clo23815[7] = lst;
clo23815[8] = kont23315;
void* f2332323474 = encode_clo(clo23815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2332323474;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam23665_fptr() // lam23665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23666 = arg_buffer[1];
//reading env and args
void* a2320823497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23324 = (decode_clo(env23666))[3];
//not do dummy comment
void* a2320623494 = (decode_clo(env23666))[2];
//not do dummy comment
void* drop = (decode_clo(env23666))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont23324;
arg_buffer[3] = a2320623494;
arg_buffer[4] = a2320823497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23665 = encode_clo(alloc_clo(lam23665_fptr, 0));

void* lam23668_fptr() // lam23668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23669 = arg_buffer[1];
//reading env and args
void* a2320623494 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env23669))[4];
//not do dummy comment
void* kont23324 = (decode_clo(env23669))[3];
//not do dummy comment
void* n = (decode_clo(env23669))[2];
//not do dummy comment
void* _u45 = (decode_clo(env23669))[1];
mpz_t* mpzvar23816 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23816, "1", 10);
void* a2320723495 = encode_mpz(mpzvar23816);

//creating new closure instance
void** clo23818 = alloc_clo(lam23665_fptr, 3);

//setting env list
clo23818[1] = drop;
clo23818[2] = a2320623494;
clo23818[3] = kont23324;
void* f2332523496 = encode_clo(clo23818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2332523496;
arg_buffer[3] = n;
arg_buffer[4] = a2320723495;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23668 = encode_clo(alloc_clo(lam23668_fptr, 0));

void* lam23670_fptr() // lam23670 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23671 = arg_buffer[1];
//reading env and args
void* a2320523492 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23671))[6];
//not do dummy comment
void* kont23324 = (decode_clo(env23671))[5];
//not do dummy comment
void* n = (decode_clo(env23671))[4];
//not do dummy comment
void* _u45 = (decode_clo(env23671))[3];
//not do dummy comment
void* lst = (decode_clo(env23671))[2];
//not do dummy comment
void* drop = (decode_clo(env23671))[1];

//if-clause
bool if_guard23819 = is_true(a2320523492);
if(if_guard23819)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23324);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23324))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23821 = alloc_clo(lam23668_fptr, 4);

//setting env list
clo23821[1] = _u45;
clo23821[2] = n;
clo23821[3] = kont23324;
clo23821[4] = drop;
void* f2332623493 = encode_clo(clo23821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2332623493;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23670 = encode_clo(alloc_clo(lam23670_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23673 = arg_buffer[1];
//reading env and args
void* kont23324 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar23822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23822, "0", 10);
void* a2320423490 = encode_mpz(mpzvar23822);

//creating new closure instance
void** clo23824 = alloc_clo(lam23670_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo23824[1] = drop;
clo23824[2] = lst;
clo23824[3] = _u45;
clo23824[4] = n;
clo23824[5] = kont23324;
clo23824[6] = cdr;
void* f2332723491 = encode_clo(clo23824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2332723491;
arg_buffer[3] = n;
arg_buffer[4] = a2320423490;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam23674_fptr() // lam23674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23675 = arg_buffer[1];
//reading env and args
void* a2321223505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23328 = (decode_clo(env23675))[3];
//not do dummy comment
void* proc = (decode_clo(env23675))[2];
//not do dummy comment
void* a2321023501 = (decode_clo(env23675))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont23328;
arg_buffer[3] = a2321023501;
arg_buffer[4] = a2321223505;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23674 = encode_clo(alloc_clo(lam23674_fptr, 0));

void* lam23676_fptr() // lam23676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23677 = arg_buffer[1];
//reading env and args
void* a2321123503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env23677))[5];
//not do dummy comment
void* kont23328 = (decode_clo(env23677))[4];
//not do dummy comment
void* proc = (decode_clo(env23677))[3];
//not do dummy comment
void* acc = (decode_clo(env23677))[2];
//not do dummy comment
void* a2321023501 = (decode_clo(env23677))[1];

//creating new closure instance
void** clo23826 = alloc_clo(lam23674_fptr, 3);

//setting env list
clo23826[1] = a2321023501;
clo23826[2] = proc;
clo23826[3] = kont23328;
void* f2332923504 = encode_clo(clo23826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2332923504;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2321123503;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23676 = encode_clo(alloc_clo(lam23676_fptr, 0));

void* lam23678_fptr() // lam23678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23679 = arg_buffer[1];
//reading env and args
void* a2321023501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23679))[6];
//not do dummy comment
void* kont23328 = (decode_clo(env23679))[5];
//not do dummy comment
void* foldr = (decode_clo(env23679))[4];
//not do dummy comment
void* lst = (decode_clo(env23679))[3];
//not do dummy comment
void* proc = (decode_clo(env23679))[2];
//not do dummy comment
void* acc = (decode_clo(env23679))[1];

//creating new closure instance
void** clo23828 = alloc_clo(lam23676_fptr, 5);

//setting env list
clo23828[1] = a2321023501;
clo23828[2] = acc;
clo23828[3] = proc;
clo23828[4] = kont23328;
clo23828[5] = foldr;
void* f2333023502 = encode_clo(clo23828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2333023502;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23678 = encode_clo(alloc_clo(lam23678_fptr, 0));

void* lam23680_fptr() // lam23680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23681 = arg_buffer[1];
//reading env and args
void* a2320923499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23681))[7];
//not do dummy comment
void* car = (decode_clo(env23681))[6];
//not do dummy comment
void* kont23328 = (decode_clo(env23681))[5];
//not do dummy comment
void* foldr = (decode_clo(env23681))[4];
//not do dummy comment
void* lst = (decode_clo(env23681))[3];
//not do dummy comment
void* proc = (decode_clo(env23681))[2];
//not do dummy comment
void* acc = (decode_clo(env23681))[1];

//if-clause
bool if_guard23829 = is_true(a2320923499);
if(if_guard23829)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23328);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23328))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23831 = alloc_clo(lam23678_fptr, 6);

//setting env list
clo23831[1] = acc;
clo23831[2] = proc;
clo23831[3] = lst;
clo23831[4] = foldr;
clo23831[5] = kont23328;
clo23831[6] = cdr;
void* f2333123500 = encode_clo(clo23831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2333123500;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23680 = encode_clo(alloc_clo(lam23680_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23682 = arg_buffer[1];
//reading env and args
void* kont23328 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo23833 = alloc_clo(lam23680_fptr, 7);

//setting env list
clo23833[1] = acc;
clo23833[2] = proc;
clo23833[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo23833[4] = foldr;
clo23833[5] = kont23328;
clo23833[6] = car;
clo23833[7] = cdr;
void* f2333223498 = encode_clo(clo23833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2333223498;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam23683_fptr() // lam23683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23684 = arg_buffer[1];
//reading env and args
void* a2321623513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env23684))[3];
//not do dummy comment
void* kont23333 = (decode_clo(env23684))[2];
//not do dummy comment
void* a2321423509 = (decode_clo(env23684))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont23333;
arg_buffer[3] = a2321423509;
arg_buffer[4] = a2321623513;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23683 = encode_clo(alloc_clo(lam23683_fptr, 0));

void* lam23685_fptr() // lam23685 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23686 = arg_buffer[1];
//reading env and args
void* a2321523511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env23686))[5];
//not do dummy comment
void* lst2 = (decode_clo(env23686))[4];
//not do dummy comment
void* cons = (decode_clo(env23686))[3];
//not do dummy comment
void* kont23333 = (decode_clo(env23686))[2];
//not do dummy comment
void* a2321423509 = (decode_clo(env23686))[1];

//creating new closure instance
void** clo23835 = alloc_clo(lam23683_fptr, 3);

//setting env list
clo23835[1] = a2321423509;
clo23835[2] = kont23333;
clo23835[3] = cons;
void* f2333423512 = encode_clo(clo23835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2333423512;
arg_buffer[3] = a2321523511;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23685 = encode_clo(alloc_clo(lam23685_fptr, 0));

void* lam23687_fptr() // lam23687 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23688 = arg_buffer[1];
//reading env and args
void* a2321423509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23688))[6];
//not do dummy comment
void* kont23333 = (decode_clo(env23688))[5];
//not do dummy comment
void* append = (decode_clo(env23688))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23688))[3];
//not do dummy comment
void* lst1 = (decode_clo(env23688))[2];
//not do dummy comment
void* cons = (decode_clo(env23688))[1];

//creating new closure instance
void** clo23837 = alloc_clo(lam23685_fptr, 5);

//setting env list
clo23837[1] = a2321423509;
clo23837[2] = kont23333;
clo23837[3] = cons;
clo23837[4] = lst2;
clo23837[5] = append;
void* f2333523510 = encode_clo(clo23837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2333523510;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23687 = encode_clo(alloc_clo(lam23687_fptr, 0));

void* lam23689_fptr() // lam23689 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23690 = arg_buffer[1];
//reading env and args
void* a2321323507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23690))[7];
//not do dummy comment
void* kont23333 = (decode_clo(env23690))[6];
//not do dummy comment
void* append = (decode_clo(env23690))[5];
//not do dummy comment
void* lst2 = (decode_clo(env23690))[4];
//not do dummy comment
void* cons = (decode_clo(env23690))[3];
//not do dummy comment
void* lst1 = (decode_clo(env23690))[2];
//not do dummy comment
void* car = (decode_clo(env23690))[1];

//if-clause
bool if_guard23838 = is_true(a2321323507);
if(if_guard23838)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23333);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23333))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo23840 = alloc_clo(lam23687_fptr, 6);

//setting env list
clo23840[1] = cons;
clo23840[2] = lst1;
clo23840[3] = lst2;
clo23840[4] = append;
clo23840[5] = kont23333;
clo23840[6] = cdr;
void* f2333623508 = encode_clo(clo23840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2333623508;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23689 = encode_clo(alloc_clo(lam23689_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23691 = arg_buffer[1];
//reading env and args
void* kont23333 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23842 = alloc_clo(lam23689_fptr, 7);

//setting env list
clo23842[1] = car;
clo23842[2] = lst1;
clo23842[3] = cons;
clo23842[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo23842[5] = append;
clo23842[6] = kont23333;
clo23842[7] = cdr;
void* f2333723506 = encode_clo(clo23842);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2333723506;
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
void* _23692 = arg_buffer[1];
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

void* kont2333823514 = prim_car(lst);
void* lst23515 = prim_cdr(lst);
void* x2321723516 = apply_prim_hash(lst23515);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2333823514);
arg_buffer[2] = x2321723516;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2333823514))[0]);
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
void* _23693 = arg_buffer[1];
//reading env and args
void* kont23340 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2321823517 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23340);
arg_buffer[2] = x2321823517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23340))[0]);
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
void* _23694 = arg_buffer[1];
//reading env and args
void* kont23341 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2321923518 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23341);
arg_buffer[2] = x2321923518;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23341))[0]);
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
void* _23695 = arg_buffer[1];
//reading env and args
void* kont23342 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2322023519 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23342);
arg_buffer[2] = x2322023519;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23342))[0]);
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
void* _23696 = arg_buffer[1];
//reading env and args
void* kont23343 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2322123520 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23343);
arg_buffer[2] = x2322123520;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23343))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23697 = arg_buffer[1];
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

void* kont2334423521 = prim_car(lst);
void* lst23522 = prim_cdr(lst);
void* x2322223523 = apply_prim_set(lst23522);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2334423521);
arg_buffer[2] = x2322223523;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2334423521))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23698 = arg_buffer[1];
//reading env and args
void* kont23346 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2322323524 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23346);
arg_buffer[2] = x2322323524;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23346))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23699 = arg_buffer[1];
//reading env and args
void* kont23347 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2322423525 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23347);
arg_buffer[2] = x2322423525;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23347))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23700 = arg_buffer[1];
//reading env and args
void* kont23348 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2322523526 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23348);
arg_buffer[2] = x2322523526;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23348))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23701 = arg_buffer[1];
//reading env and args
void* kont23349 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2322623527 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23349);
arg_buffer[2] = x2322623527;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23349))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23702 = arg_buffer[1];
//reading env and args
void* kont23350 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2322723528 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23350);
arg_buffer[2] = x2322723528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23350))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23703 = arg_buffer[1];
//reading env and args
void* kont23351 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2322823529 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23351);
arg_buffer[2] = x2322823529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23351))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23704 = arg_buffer[1];
//reading env and args
void* kont23352 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2322923530 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23352);
arg_buffer[2] = x2322923530;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23352))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23705 = arg_buffer[1];
//reading env and args
void* kont23353 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2323023531 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23353);
arg_buffer[2] = x2323023531;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23353))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23706 = arg_buffer[1];
//reading env and args
void* kont23354 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2323123532 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23354);
arg_buffer[2] = x2323123532;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23354))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23707 = arg_buffer[1];
//reading env and args
void* kont23355 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2323223533 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23355);
arg_buffer[2] = x2323223533;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23355))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam23710_fptr() // lam23710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23711 = arg_buffer[1];
//reading env and args
void* a2323323535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23356 = (decode_clo(env23711))[1];

//if-clause
bool if_guard23843 = is_true(a2323323535);
if(if_guard23843)
{
mpz_t* mpzvar23844 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23844, "1", 10);
void* x2323423536 = encode_mpz(mpzvar23844);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23356);
arg_buffer[2] = x2323423536;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23356))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar23845 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23845, "2", 10);
void* x2323523537 = encode_mpz(mpzvar23845);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23356);
arg_buffer[2] = x2323523537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23356))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23710 = encode_clo(alloc_clo(lam23710_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23712 = arg_buffer[1];
//reading env and args
void* kont23356 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo23847 = alloc_clo(lam23710_fptr, 1);

//setting env list
clo23847[1] = kont23356;
void* f2335723534 = encode_clo(clo23847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = f2335723534;
arg_buffer[3] = op;
arg_buffer[4] = lst;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam23713_fptr() // lam23713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23714 = arg_buffer[1];
//reading env and args
void* a2324123544 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2323623538 = (decode_clo(env23714))[3];
//not do dummy comment
void* call = (decode_clo(env23714))[2];
//not do dummy comment
void* kont23358 = (decode_clo(env23714))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont23358;
arg_buffer[3] = a2323623538;
arg_buffer[4] = a2324123544;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23713 = encode_clo(alloc_clo(lam23713_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23720 = arg_buffer[1];
//reading env and args
void* kont23358 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar23848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23848, "1", 10);
void* a2323623538 = encode_mpz(mpzvar23848);
mpz_t* mpzvar23849 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23849, "1", 10);
void* a2323723539 = encode_mpz(mpzvar23849);
mpz_t* mpzvar23850 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23850, "2", 10);
void* a2323823540 = encode_mpz(mpzvar23850);
mpz_t* mpzvar23851 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23851, "3", 10);
void* a2323923541 = encode_mpz(mpzvar23851);
mpz_t* mpzvar23852 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar23852, "4", 10);
void* a2324023542 = encode_mpz(mpzvar23852);

//creating new closure instance
void** clo23854 = alloc_clo(lam23713_fptr, 3);

//setting env list
clo23854[1] = kont23358;
clo23854[2] = call;
clo23854[3] = a2323623538;
void* f2335923543 = encode_clo(clo23854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2335923543;
arg_buffer[3] = a2323723539;
arg_buffer[4] = a2323823540;
arg_buffer[5] = a2323923541;
arg_buffer[6] = a2324023542;
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

