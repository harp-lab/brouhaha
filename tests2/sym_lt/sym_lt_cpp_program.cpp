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
void* _56475 = arg_buffer[1];
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

void* kont5621256312 = prim_car(lst);
void* lst56313 = prim_cdr(lst);
void* x5612256314 = apply_prim__u43(lst56313);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5621256312);
arg_buffer[2] = x5612256314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5621256312))[0]);
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
void* _56476 = arg_buffer[1];
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

void* kont5621456315 = prim_car(lst);
void* lst56316 = prim_cdr(lst);
void* x5612356317 = apply_prim__u45(lst56316);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5621456315);
arg_buffer[2] = x5612356317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5621456315))[0]);
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
void* _56477 = arg_buffer[1];
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

void* kont5621656318 = prim_car(lst);
void* lst56319 = prim_cdr(lst);
void* x5612456320 = apply_prim__u42(lst56319);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5621656318);
arg_buffer[2] = x5612456320;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5621656318))[0]);
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
void* _56478 = arg_buffer[1];
//reading env and args
void* kont56218 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5612556321 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56218);
arg_buffer[2] = x5612556321;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56218))[0]);
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
void* _56479 = arg_buffer[1];
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

void* kont5621956322 = prim_car(lst);
void* lst56323 = prim_cdr(lst);
void* x5612656324 = apply_prim__u47(lst56323);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5621956322);
arg_buffer[2] = x5612656324;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5621956322))[0]);
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
void* _56480 = arg_buffer[1];
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

void* kont5622156325 = prim_car(lst);
void* lst56326 = prim_cdr(lst);
void* x5612756327 = apply_prim__u61(lst56326);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5622156325);
arg_buffer[2] = x5612756327;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5622156325))[0]);
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
void* _56481 = arg_buffer[1];
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

void* kont5622356328 = prim_car(lst);
void* lst56329 = prim_cdr(lst);
void* x5612856330 = apply_prim__u62(lst56329);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5622356328);
arg_buffer[2] = x5612856330;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5622356328))[0]);
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
void* _56482 = arg_buffer[1];
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

void* kont5622556331 = prim_car(lst);
void* lst56332 = prim_cdr(lst);
void* x5612956333 = apply_prim__u60(lst56332);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5622556331);
arg_buffer[2] = x5612956333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5622556331))[0]);
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
void* _56483 = arg_buffer[1];
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

void* kont5622756334 = prim_car(lst);
void* lst56335 = prim_cdr(lst);
void* x5613056336 = apply_prim__u60_u61(lst56335);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5622756334);
arg_buffer[2] = x5613056336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5622756334))[0]);
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
void* _56484 = arg_buffer[1];
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

void* kont5622956337 = prim_car(lst);
void* lst56338 = prim_cdr(lst);
void* x5613156339 = apply_prim__u62_u61(lst56338);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5622956337);
arg_buffer[2] = x5613156339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5622956337))[0]);
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
void* _56485 = arg_buffer[1];
//reading env and args
void* kont56231 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5613256340 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56231);
arg_buffer[2] = x5613256340;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56231))[0]);
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
void* _56486 = arg_buffer[1];
//reading env and args
void* kont56232 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5613356341 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56232);
arg_buffer[2] = x5613356341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56232))[0]);
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
void* _56487 = arg_buffer[1];
//reading env and args
void* kont56233 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5613456342 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56233);
arg_buffer[2] = x5613456342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56233))[0]);
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
void* _56488 = arg_buffer[1];
//reading env and args
void* kont56234 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5613556343 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56234);
arg_buffer[2] = x5613556343;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56234))[0]);
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
void* _56489 = arg_buffer[1];
//reading env and args
void* kont56235 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5613656344 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56235);
arg_buffer[2] = x5613656344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56235))[0]);
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
void* _56490 = arg_buffer[1];
//reading env and args
void* kont56236 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5613756345 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56236);
arg_buffer[2] = x5613756345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam56491_fptr() // lam56491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56492 = arg_buffer[1];
//reading env and args
void* a5614056349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env56492))[3];
//not do dummy comment
void* a5613856346 = (decode_clo(env56492))[2];
//not do dummy comment
void* kont56237 = (decode_clo(env56492))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont56237;
arg_buffer[3] = a5613856346;
arg_buffer[4] = a5614056349;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56491 = encode_clo(alloc_clo(lam56491_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56495 = arg_buffer[1];
//reading env and args
void* kont56237 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57137 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57137, "0", 10);
void* a5613856346 = encode_mpz(mpzvar57137);
mpz_t* mpzvar57138 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57138, "2", 10);
void* a5613956347 = encode_mpz(mpzvar57138);

//creating new closure instance
void** clo57140 = alloc_clo(lam56491_fptr, 3);

//setting env list
clo57140[1] = kont56237;
clo57140[2] = a5613856346;
clo57140[3] = equal_u63;
void* f5623856348 = encode_clo(clo57140);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5623856348;
arg_buffer[3] = x;
arg_buffer[4] = a5613956347;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam56496_fptr() // lam56496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56497 = arg_buffer[1];
//reading env and args
void* a5614356353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env56497))[3];
//not do dummy comment
void* a5614156350 = (decode_clo(env56497))[2];
//not do dummy comment
void* kont56239 = (decode_clo(env56497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont56239;
arg_buffer[3] = a5614156350;
arg_buffer[4] = a5614356353;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56496 = encode_clo(alloc_clo(lam56496_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56500 = arg_buffer[1];
//reading env and args
void* kont56239 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57141 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57141, "1", 10);
void* a5614156350 = encode_mpz(mpzvar57141);
mpz_t* mpzvar57142 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57142, "2", 10);
void* a5614256351 = encode_mpz(mpzvar57142);

//creating new closure instance
void** clo57144 = alloc_clo(lam56496_fptr, 3);

//setting env list
clo57144[1] = kont56239;
clo57144[2] = a5614156350;
clo57144[3] = equal_u63;
void* f5624056352 = encode_clo(clo57144);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5624056352;
arg_buffer[3] = x;
arg_buffer[4] = a5614256351;
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
void* _56501 = arg_buffer[1];
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

void* kont5624156354 = prim_car(x);
void* x56355 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5624156354);
arg_buffer[2] = x56355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5624156354))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam56504_fptr() // lam56504 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56505 = arg_buffer[1];
//reading env and args
void* a5614956365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56243 = (decode_clo(env56505))[3];
//not do dummy comment
void* x = (decode_clo(env56505))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56505))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont56243;
arg_buffer[3] = x;
arg_buffer[4] = a5614956365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56504 = encode_clo(alloc_clo(lam56504_fptr, 0));

void* lam56506_fptr() // lam56506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56507 = arg_buffer[1];
//reading env and args
void* a5614756362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56507))[5];
//not do dummy comment
void* kont56243 = (decode_clo(env56507))[4];
//not do dummy comment
void* lst = (decode_clo(env56507))[3];
//not do dummy comment
void* x = (decode_clo(env56507))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56507))[1];

//if-clause
bool if_guard57145 = is_true(a5614756362);
if(if_guard57145)
{
void* x5614856363 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56243);
arg_buffer[2] = x5614856363;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56243))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57147 = alloc_clo(lam56504_fptr, 3);

//setting env list
clo57147[1] = member_u63;
clo57147[2] = x;
clo57147[3] = kont56243;
void* f5624456364 = encode_clo(clo57147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5624456364;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56506 = encode_clo(alloc_clo(lam56506_fptr, 0));

void* lam56508_fptr() // lam56508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56509 = arg_buffer[1];
//reading env and args
void* a5614656360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56509))[6];
//not do dummy comment
void* kont56243 = (decode_clo(env56509))[5];
//not do dummy comment
void* lst = (decode_clo(env56509))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env56509))[3];
//not do dummy comment
void* x = (decode_clo(env56509))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56509))[1];

//creating new closure instance
void** clo57149 = alloc_clo(lam56506_fptr, 5);

//setting env list
clo57149[1] = member_u63;
clo57149[2] = x;
clo57149[3] = lst;
clo57149[4] = kont56243;
clo57149[5] = cdr;
void* f5624556361 = encode_clo(clo57149);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5624556361;
arg_buffer[3] = a5614656360;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56508 = encode_clo(alloc_clo(lam56508_fptr, 0));

void* lam56510_fptr() // lam56510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56511 = arg_buffer[1];
//reading env and args
void* a5614456357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56511))[7];
//not do dummy comment
void* kont56243 = (decode_clo(env56511))[6];
//not do dummy comment
void* lst = (decode_clo(env56511))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env56511))[4];
//not do dummy comment
void* x = (decode_clo(env56511))[3];
//not do dummy comment
void* car = (decode_clo(env56511))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56511))[1];

//if-clause
bool if_guard57150 = is_true(a5614456357);
if(if_guard57150)
{
void* x5614556358 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56243);
arg_buffer[2] = x5614556358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56243))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57152 = alloc_clo(lam56508_fptr, 6);

//setting env list
clo57152[1] = member_u63;
clo57152[2] = x;
clo57152[3] = equal_u63;
clo57152[4] = lst;
clo57152[5] = kont56243;
clo57152[6] = cdr;
void* f5624656359 = encode_clo(clo57152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5624656359;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56510 = encode_clo(alloc_clo(lam56510_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56512 = arg_buffer[1];
//reading env and args
void* kont56243 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57154 = alloc_clo(lam56510_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo57154[1] = member_u63;
clo57154[2] = car;
clo57154[3] = x;
clo57154[4] = equal_u63;
clo57154[5] = lst;
clo57154[6] = kont56243;
clo57154[7] = cdr;
void* f5624756356 = encode_clo(clo57154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5624756356;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam56513_fptr() // lam56513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56514 = arg_buffer[1];
//reading env and args
void* a5615356373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5615256371 = (decode_clo(env56514))[4];
//not do dummy comment
void* kont56248 = (decode_clo(env56514))[3];
//not do dummy comment
void* fun = (decode_clo(env56514))[2];
//not do dummy comment
void* foldl = (decode_clo(env56514))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont56248;
arg_buffer[3] = fun;
arg_buffer[4] = a5615256371;
arg_buffer[5] = a5615356373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56513 = encode_clo(alloc_clo(lam56513_fptr, 0));

void* lam56515_fptr() // lam56515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56516 = arg_buffer[1];
//reading env and args
void* a5615256371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56516))[5];
//not do dummy comment
void* lst = (decode_clo(env56516))[4];
//not do dummy comment
void* kont56248 = (decode_clo(env56516))[3];
//not do dummy comment
void* fun = (decode_clo(env56516))[2];
//not do dummy comment
void* foldl = (decode_clo(env56516))[1];

//creating new closure instance
void** clo57156 = alloc_clo(lam56513_fptr, 4);

//setting env list
clo57156[1] = foldl;
clo57156[2] = fun;
clo57156[3] = kont56248;
clo57156[4] = a5615256371;
void* f5624956372 = encode_clo(clo57156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5624956372;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56515 = encode_clo(alloc_clo(lam56515_fptr, 0));

void* lam56517_fptr() // lam56517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56518 = arg_buffer[1];
//reading env and args
void* a5615156369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56518))[6];
//not do dummy comment
void* lst = (decode_clo(env56518))[5];
//not do dummy comment
void* kont56248 = (decode_clo(env56518))[4];
//not do dummy comment
void* fun = (decode_clo(env56518))[3];
//not do dummy comment
void* acc = (decode_clo(env56518))[2];
//not do dummy comment
void* foldl = (decode_clo(env56518))[1];

//creating new closure instance
void** clo57158 = alloc_clo(lam56515_fptr, 5);

//setting env list
clo57158[1] = foldl;
clo57158[2] = fun;
clo57158[3] = kont56248;
clo57158[4] = lst;
clo57158[5] = cdr;
void* f5625056370 = encode_clo(clo57158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5625056370;
arg_buffer[3] = a5615156369;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56517 = encode_clo(alloc_clo(lam56517_fptr, 0));

void* lam56519_fptr() // lam56519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56520 = arg_buffer[1];
//reading env and args
void* a5615056367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56520))[7];
//not do dummy comment
void* lst = (decode_clo(env56520))[6];
//not do dummy comment
void* kont56248 = (decode_clo(env56520))[5];
//not do dummy comment
void* fun = (decode_clo(env56520))[4];
//not do dummy comment
void* acc = (decode_clo(env56520))[3];
//not do dummy comment
void* car = (decode_clo(env56520))[2];
//not do dummy comment
void* foldl = (decode_clo(env56520))[1];

//if-clause
bool if_guard57159 = is_true(a5615056367);
if(if_guard57159)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56248);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56248))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57161 = alloc_clo(lam56517_fptr, 6);

//setting env list
clo57161[1] = foldl;
clo57161[2] = acc;
clo57161[3] = fun;
clo57161[4] = kont56248;
clo57161[5] = lst;
clo57161[6] = cdr;
void* f5625156368 = encode_clo(clo57161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5625156368;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56519 = encode_clo(alloc_clo(lam56519_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56521 = arg_buffer[1];
//reading env and args
void* kont56248 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57163 = alloc_clo(lam56519_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo57163[1] = foldl;
clo57163[2] = car;
clo57163[3] = acc;
clo57163[4] = fun;
clo57163[5] = kont56248;
clo57163[6] = lst;
clo57163[7] = cdr;
void* f5625256366 = encode_clo(clo57163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5625256366;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam56522_fptr() // lam56522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56523 = arg_buffer[1];
//reading env and args
void* a5615756381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56523))[3];
//not do dummy comment
void* a5615556377 = (decode_clo(env56523))[2];
//not do dummy comment
void* kont56253 = (decode_clo(env56523))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont56253;
arg_buffer[3] = a5615556377;
arg_buffer[4] = a5615756381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56522 = encode_clo(alloc_clo(lam56522_fptr, 0));

void* lam56524_fptr() // lam56524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56525 = arg_buffer[1];
//reading env and args
void* a5615656379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56525))[5];
//not do dummy comment
void* a5615556377 = (decode_clo(env56525))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56525))[3];
//not do dummy comment
void* kont56253 = (decode_clo(env56525))[2];
//not do dummy comment
void* cons = (decode_clo(env56525))[1];

//creating new closure instance
void** clo57165 = alloc_clo(lam56522_fptr, 3);

//setting env list
clo57165[1] = kont56253;
clo57165[2] = a5615556377;
clo57165[3] = reverse_u45helper;
void* f5625456380 = encode_clo(clo57165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5625456380;
arg_buffer[3] = a5615656379;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56524 = encode_clo(alloc_clo(lam56524_fptr, 0));

void* lam56526_fptr() // lam56526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56527 = arg_buffer[1];
//reading env and args
void* a5615556377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56527))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56527))[5];
//not do dummy comment
void* lst2 = (decode_clo(env56527))[4];
//not do dummy comment
void* cons = (decode_clo(env56527))[3];
//not do dummy comment
void* kont56253 = (decode_clo(env56527))[2];
//not do dummy comment
void* car = (decode_clo(env56527))[1];

//creating new closure instance
void** clo57167 = alloc_clo(lam56524_fptr, 5);

//setting env list
clo57167[1] = cons;
clo57167[2] = kont56253;
clo57167[3] = lst2;
clo57167[4] = a5615556377;
clo57167[5] = reverse_u45helper;
void* f5625556378 = encode_clo(clo57167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5625556378;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56526 = encode_clo(alloc_clo(lam56526_fptr, 0));

void* lam56528_fptr() // lam56528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56529 = arg_buffer[1];
//reading env and args
void* a5615456375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56529))[7];
//not do dummy comment
void* lst = (decode_clo(env56529))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56529))[5];
//not do dummy comment
void* lst2 = (decode_clo(env56529))[4];
//not do dummy comment
void* cons = (decode_clo(env56529))[3];
//not do dummy comment
void* kont56253 = (decode_clo(env56529))[2];
//not do dummy comment
void* car = (decode_clo(env56529))[1];

//if-clause
bool if_guard57168 = is_true(a5615456375);
if(if_guard57168)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56253);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56253))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57170 = alloc_clo(lam56526_fptr, 6);

//setting env list
clo57170[1] = car;
clo57170[2] = kont56253;
clo57170[3] = cons;
clo57170[4] = lst2;
clo57170[5] = reverse_u45helper;
clo57170[6] = lst;
void* f5625656376 = encode_clo(clo57170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5625656376;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56528 = encode_clo(alloc_clo(lam56528_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56530 = arg_buffer[1];
//reading env and args
void* kont56253 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57172 = alloc_clo(lam56528_fptr, 7);

//setting env list
clo57172[1] = car;
clo57172[2] = kont56253;
clo57172[3] = cons;
clo57172[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo57172[5] = reverse_u45helper;
clo57172[6] = lst;
clo57172[7] = cdr;
void* f5625756374 = encode_clo(clo57172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5625756374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam56531_fptr() // lam56531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56532 = arg_buffer[1];
//reading env and args
void* a5615856383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56258 = (decode_clo(env56532))[3];
//not do dummy comment
void* lst = (decode_clo(env56532))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont56258;
arg_buffer[3] = lst;
arg_buffer[4] = a5615856383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56531 = encode_clo(alloc_clo(lam56531_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56533 = arg_buffer[1];
//reading env and args
void* kont56258 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57174 = alloc_clo(lam56531_fptr, 3);

//setting env list
clo57174[1] = reverse_u45helper;
clo57174[2] = lst;
clo57174[3] = kont56258;
void* f5625956382 = encode_clo(clo57174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5625956382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam56534_fptr() // lam56534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56535 = arg_buffer[1];
//reading env and args
void* x5616156388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56260 = (decode_clo(env56535))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56260);
arg_buffer[2] = x5616156388;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56260))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56534 = encode_clo(alloc_clo(lam56534_fptr, 0));

void* lam56536_fptr() // lam56536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56537 = arg_buffer[1];
//reading env and args
void* a5616656397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56260 = (decode_clo(env56537))[4];
//not do dummy comment
void* a5616256390 = (decode_clo(env56537))[3];
//not do dummy comment
void* a5616456393 = (decode_clo(env56537))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env56537))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont56260;
arg_buffer[3] = a5616256390;
arg_buffer[4] = a5616456393;
arg_buffer[5] = a5616656397;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56536 = encode_clo(alloc_clo(lam56536_fptr, 0));

void* lam56538_fptr() // lam56538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56539 = arg_buffer[1];
//reading env and args
void* a5616556395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56260 = (decode_clo(env56539))[6];
//not do dummy comment
void* a5616256390 = (decode_clo(env56539))[5];
//not do dummy comment
void* a5616456393 = (decode_clo(env56539))[4];
//not do dummy comment
void* cons = (decode_clo(env56539))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56539))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56539))[1];

//creating new closure instance
void** clo57176 = alloc_clo(lam56536_fptr, 4);

//setting env list
clo57176[1] = take_u45helper;
clo57176[2] = a5616456393;
clo57176[3] = a5616256390;
clo57176[4] = kont56260;
void* f5626256396 = encode_clo(clo57176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5626256396;
arg_buffer[3] = a5616556395;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56538 = encode_clo(alloc_clo(lam56538_fptr, 0));

void* lam56540_fptr() // lam56540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56541 = arg_buffer[1];
//reading env and args
void* a5616456393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5616256390 = (decode_clo(env56541))[7];
//not do dummy comment
void* car = (decode_clo(env56541))[6];
//not do dummy comment
void* cons = (decode_clo(env56541))[5];
//not do dummy comment
void* lst = (decode_clo(env56541))[4];
//not do dummy comment
void* kont56260 = (decode_clo(env56541))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56541))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56541))[1];

//creating new closure instance
void** clo57178 = alloc_clo(lam56538_fptr, 6);

//setting env list
clo57178[1] = lst2;
clo57178[2] = take_u45helper;
clo57178[3] = cons;
clo57178[4] = a5616456393;
clo57178[5] = a5616256390;
clo57178[6] = kont56260;
void* f5626356394 = encode_clo(clo57178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5626356394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56540 = encode_clo(alloc_clo(lam56540_fptr, 0));

void* lam56543_fptr() // lam56543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56544 = arg_buffer[1];
//reading env and args
void* a5616256390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env56544))[8];
//not do dummy comment
void* _u45 = (decode_clo(env56544))[7];
//not do dummy comment
void* lst = (decode_clo(env56544))[6];
//not do dummy comment
void* kont56260 = (decode_clo(env56544))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56544))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56544))[3];
//not do dummy comment
void* n = (decode_clo(env56544))[2];
//not do dummy comment
void* car = (decode_clo(env56544))[1];
mpz_t* mpzvar57179 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57179, "1", 10);
void* a5616356391 = encode_mpz(mpzvar57179);

//creating new closure instance
void** clo57181 = alloc_clo(lam56540_fptr, 7);

//setting env list
clo57181[1] = lst2;
clo57181[2] = take_u45helper;
clo57181[3] = kont56260;
clo57181[4] = lst;
clo57181[5] = cons;
clo57181[6] = car;
clo57181[7] = a5616256390;
void* f5626456392 = encode_clo(clo57181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5626456392;
arg_buffer[3] = n;
arg_buffer[4] = a5616356391;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56543 = encode_clo(alloc_clo(lam56543_fptr, 0));

void* lam56545_fptr() // lam56545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56546 = arg_buffer[1];
//reading env and args
void* a5616056386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56546))[10];
//not do dummy comment
void* reverse = (decode_clo(env56546))[9];
//not do dummy comment
void* cons = (decode_clo(env56546))[8];
//not do dummy comment
void* _u45 = (decode_clo(env56546))[7];
//not do dummy comment
void* lst = (decode_clo(env56546))[6];
//not do dummy comment
void* kont56260 = (decode_clo(env56546))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56546))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56546))[3];
//not do dummy comment
void* n = (decode_clo(env56546))[2];
//not do dummy comment
void* car = (decode_clo(env56546))[1];

//if-clause
bool if_guard57182 = is_true(a5616056386);
if(if_guard57182)
{

//creating new closure instance
void** clo57184 = alloc_clo(lam56534_fptr, 1);

//setting env list
clo57184[1] = kont56260;
void* f5626156387 = encode_clo(clo57184);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5626156387;
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
void** clo57186 = alloc_clo(lam56543_fptr, 8);

//setting env list
clo57186[1] = car;
clo57186[2] = n;
clo57186[3] = lst2;
clo57186[4] = take_u45helper;
clo57186[5] = kont56260;
clo57186[6] = lst;
clo57186[7] = _u45;
clo57186[8] = cons;
void* f5626556389 = encode_clo(clo57186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5626556389;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56545 = encode_clo(alloc_clo(lam56545_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56548 = arg_buffer[1];
//reading env and args
void* kont56260 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar57187 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57187, "0", 10);
void* a5615956384 = encode_mpz(mpzvar57187);

//creating new closure instance
void** clo57189 = alloc_clo(lam56545_fptr, 10);

//setting env list
clo57189[1] = car;
clo57189[2] = n;
clo57189[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo57189[4] = take_u45helper;
clo57189[5] = kont56260;
clo57189[6] = lst;
clo57189[7] = _u45;
clo57189[8] = cons;
clo57189[9] = reverse;
clo57189[10] = cdr;
void* f5626656385 = encode_clo(clo57189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5626656385;
arg_buffer[3] = n;
arg_buffer[4] = a5615956384;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam56549_fptr() // lam56549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56550 = arg_buffer[1];
//reading env and args
void* a5616756399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56550))[4];
//not do dummy comment
void* kont56267 = (decode_clo(env56550))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56550))[2];
//not do dummy comment
void* n = (decode_clo(env56550))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont56267;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5616756399;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56549 = encode_clo(alloc_clo(lam56549_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56551 = arg_buffer[1];
//reading env and args
void* kont56267 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57191 = alloc_clo(lam56549_fptr, 4);

//setting env list
clo57191[1] = n;
clo57191[2] = take_u45helper;
clo57191[3] = kont56267;
clo57191[4] = lst;
void* f5626856398 = encode_clo(clo57191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5626856398;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam56553_fptr() // lam56553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56554 = arg_buffer[1];
//reading env and args
void* a5617256407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5617056403 = (decode_clo(env56554))[3];
//not do dummy comment
void* _u43 = (decode_clo(env56554))[2];
//not do dummy comment
void* kont56269 = (decode_clo(env56554))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont56269;
arg_buffer[3] = a5617056403;
arg_buffer[4] = a5617256407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56553 = encode_clo(alloc_clo(lam56553_fptr, 0));

void* lam56555_fptr() // lam56555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56556 = arg_buffer[1];
//reading env and args
void* a5617156405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5617056403 = (decode_clo(env56556))[4];
//not do dummy comment
void* length = (decode_clo(env56556))[3];
//not do dummy comment
void* _u43 = (decode_clo(env56556))[2];
//not do dummy comment
void* kont56269 = (decode_clo(env56556))[1];

//creating new closure instance
void** clo57193 = alloc_clo(lam56553_fptr, 3);

//setting env list
clo57193[1] = kont56269;
clo57193[2] = _u43;
clo57193[3] = a5617056403;
void* f5627056406 = encode_clo(clo57193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5627056406;
arg_buffer[3] = a5617156405;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56555 = encode_clo(alloc_clo(lam56555_fptr, 0));

void* lam56558_fptr() // lam56558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56559 = arg_buffer[1];
//reading env and args
void* a5616856401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56559))[5];
//not do dummy comment
void* lst = (decode_clo(env56559))[4];
//not do dummy comment
void* length = (decode_clo(env56559))[3];
//not do dummy comment
void* _u43 = (decode_clo(env56559))[2];
//not do dummy comment
void* kont56269 = (decode_clo(env56559))[1];

//if-clause
bool if_guard57194 = is_true(a5616856401);
if(if_guard57194)
{
mpz_t* mpzvar57195 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57195, "0", 10);
void* x5616956402 = encode_mpz(mpzvar57195);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56269);
arg_buffer[2] = x5616956402;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56269))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar57196 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57196, "1", 10);
void* a5617056403 = encode_mpz(mpzvar57196);

//creating new closure instance
void** clo57198 = alloc_clo(lam56555_fptr, 4);

//setting env list
clo57198[1] = kont56269;
clo57198[2] = _u43;
clo57198[3] = length;
clo57198[4] = a5617056403;
void* f5627156404 = encode_clo(clo57198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5627156404;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56558 = encode_clo(alloc_clo(lam56558_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56560 = arg_buffer[1];
//reading env and args
void* kont56269 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57200 = alloc_clo(lam56558_fptr, 5);

//setting env list
clo57200[1] = kont56269;
clo57200[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo57200[3] = length;
clo57200[4] = lst;
clo57200[5] = cdr;
void* f5627256400 = encode_clo(clo57200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5627256400;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam56561_fptr() // lam56561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56562 = arg_buffer[1];
//reading env and args
void* x5617456411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56273 = (decode_clo(env56562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56273);
arg_buffer[2] = x5617456411;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56273))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56561 = encode_clo(alloc_clo(lam56561_fptr, 0));

void* lam56563_fptr() // lam56563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56564 = arg_buffer[1];
//reading env and args
void* a5617856419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56273 = (decode_clo(env56564))[3];
//not do dummy comment
void* cons = (decode_clo(env56564))[2];
//not do dummy comment
void* a5617656415 = (decode_clo(env56564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont56273;
arg_buffer[3] = a5617656415;
arg_buffer[4] = a5617856419;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56563 = encode_clo(alloc_clo(lam56563_fptr, 0));

void* lam56565_fptr() // lam56565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56566 = arg_buffer[1];
//reading env and args
void* a5617756417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56273 = (decode_clo(env56566))[5];
//not do dummy comment
void* map = (decode_clo(env56566))[4];
//not do dummy comment
void* proc = (decode_clo(env56566))[3];
//not do dummy comment
void* cons = (decode_clo(env56566))[2];
//not do dummy comment
void* a5617656415 = (decode_clo(env56566))[1];

//creating new closure instance
void** clo57202 = alloc_clo(lam56563_fptr, 3);

//setting env list
clo57202[1] = a5617656415;
clo57202[2] = cons;
clo57202[3] = kont56273;
void* f5627556418 = encode_clo(clo57202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5627556418;
arg_buffer[3] = proc;
arg_buffer[4] = a5617756417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56565 = encode_clo(alloc_clo(lam56565_fptr, 0));

void* lam56567_fptr() // lam56567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56568 = arg_buffer[1];
//reading env and args
void* a5617656415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56568))[6];
//not do dummy comment
void* kont56273 = (decode_clo(env56568))[5];
//not do dummy comment
void* lst = (decode_clo(env56568))[4];
//not do dummy comment
void* map = (decode_clo(env56568))[3];
//not do dummy comment
void* proc = (decode_clo(env56568))[2];
//not do dummy comment
void* cons = (decode_clo(env56568))[1];

//creating new closure instance
void** clo57204 = alloc_clo(lam56565_fptr, 5);

//setting env list
clo57204[1] = a5617656415;
clo57204[2] = cons;
clo57204[3] = proc;
clo57204[4] = map;
clo57204[5] = kont56273;
void* f5627656416 = encode_clo(clo57204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5627656416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56567 = encode_clo(alloc_clo(lam56567_fptr, 0));

void* lam56569_fptr() // lam56569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56570 = arg_buffer[1];
//reading env and args
void* a5617556413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56570))[6];
//not do dummy comment
void* kont56273 = (decode_clo(env56570))[5];
//not do dummy comment
void* lst = (decode_clo(env56570))[4];
//not do dummy comment
void* map = (decode_clo(env56570))[3];
//not do dummy comment
void* proc = (decode_clo(env56570))[2];
//not do dummy comment
void* cons = (decode_clo(env56570))[1];

//creating new closure instance
void** clo57206 = alloc_clo(lam56567_fptr, 6);

//setting env list
clo57206[1] = cons;
clo57206[2] = proc;
clo57206[3] = map;
clo57206[4] = lst;
clo57206[5] = kont56273;
clo57206[6] = cdr;
void* f5627756414 = encode_clo(clo57206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5627756414;
arg_buffer[3] = a5617556413;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56569 = encode_clo(alloc_clo(lam56569_fptr, 0));

void* lam56571_fptr() // lam56571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56572 = arg_buffer[1];
//reading env and args
void* a5617356409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56273 = (decode_clo(env56572))[8];
//not do dummy comment
void* lst = (decode_clo(env56572))[7];
//not do dummy comment
void* map = (decode_clo(env56572))[6];
//not do dummy comment
void* proc = (decode_clo(env56572))[5];
//not do dummy comment
void* car = (decode_clo(env56572))[4];
//not do dummy comment
void* cons = (decode_clo(env56572))[3];
//not do dummy comment
void* list = (decode_clo(env56572))[2];
//not do dummy comment
void* cdr = (decode_clo(env56572))[1];

//if-clause
bool if_guard57207 = is_true(a5617356409);
if(if_guard57207)
{

//creating new closure instance
void** clo57209 = alloc_clo(lam56561_fptr, 1);

//setting env list
clo57209[1] = kont56273;
void* f5627456410 = encode_clo(clo57209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5627456410;
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
void** clo57211 = alloc_clo(lam56569_fptr, 6);

//setting env list
clo57211[1] = cons;
clo57211[2] = proc;
clo57211[3] = map;
clo57211[4] = lst;
clo57211[5] = kont56273;
clo57211[6] = cdr;
void* f5627856412 = encode_clo(clo57211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5627856412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56571 = encode_clo(alloc_clo(lam56571_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56573 = arg_buffer[1];
//reading env and args
void* kont56273 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57213 = alloc_clo(lam56571_fptr, 8);

//setting env list
clo57213[1] = cdr;
clo57213[2] = list;
clo57213[3] = cons;
clo57213[4] = car;
clo57213[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo57213[6] = map;
clo57213[7] = lst;
clo57213[8] = kont56273;
void* f5627956408 = encode_clo(clo57213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5627956408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam56574_fptr() // lam56574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56575 = arg_buffer[1];
//reading env and args
void* x5618056423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56280 = (decode_clo(env56575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56280);
arg_buffer[2] = x5618056423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56280))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56574 = encode_clo(alloc_clo(lam56574_fptr, 0));

void* lam56576_fptr() // lam56576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56577 = arg_buffer[1];
//reading env and args
void* a5618556433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56280 = (decode_clo(env56577))[3];
//not do dummy comment
void* a5618356429 = (decode_clo(env56577))[2];
//not do dummy comment
void* cons = (decode_clo(env56577))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont56280;
arg_buffer[3] = a5618356429;
arg_buffer[4] = a5618556433;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56576 = encode_clo(alloc_clo(lam56576_fptr, 0));

void* lam56578_fptr() // lam56578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56579 = arg_buffer[1];
//reading env and args
void* a5618456431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env56579))[5];
//not do dummy comment
void* kont56280 = (decode_clo(env56579))[4];
//not do dummy comment
void* cons = (decode_clo(env56579))[3];
//not do dummy comment
void* a5618356429 = (decode_clo(env56579))[2];
//not do dummy comment
void* filter = (decode_clo(env56579))[1];

//creating new closure instance
void** clo57215 = alloc_clo(lam56576_fptr, 3);

//setting env list
clo57215[1] = cons;
clo57215[2] = a5618356429;
clo57215[3] = kont56280;
void* f5628256432 = encode_clo(clo57215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5628256432;
arg_buffer[3] = op;
arg_buffer[4] = a5618456431;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56578 = encode_clo(alloc_clo(lam56578_fptr, 0));

void* lam56580_fptr() // lam56580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56581 = arg_buffer[1];
//reading env and args
void* a5618356429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56581))[6];
//not do dummy comment
void* lst = (decode_clo(env56581))[5];
//not do dummy comment
void* op = (decode_clo(env56581))[4];
//not do dummy comment
void* kont56280 = (decode_clo(env56581))[3];
//not do dummy comment
void* filter = (decode_clo(env56581))[2];
//not do dummy comment
void* cons = (decode_clo(env56581))[1];

//creating new closure instance
void** clo57217 = alloc_clo(lam56578_fptr, 5);

//setting env list
clo57217[1] = filter;
clo57217[2] = a5618356429;
clo57217[3] = cons;
clo57217[4] = kont56280;
clo57217[5] = op;
void* f5628356430 = encode_clo(clo57217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5628356430;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56580 = encode_clo(alloc_clo(lam56580_fptr, 0));

void* lam56582_fptr() // lam56582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56583 = arg_buffer[1];
//reading env and args
void* a5618656435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env56583))[3];
//not do dummy comment
void* kont56280 = (decode_clo(env56583))[2];
//not do dummy comment
void* filter = (decode_clo(env56583))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont56280;
arg_buffer[3] = op;
arg_buffer[4] = a5618656435;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56582 = encode_clo(alloc_clo(lam56582_fptr, 0));

void* lam56584_fptr() // lam56584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56585 = arg_buffer[1];
//reading env and args
void* a5618256427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56585))[7];
//not do dummy comment
void* lst = (decode_clo(env56585))[6];
//not do dummy comment
void* op = (decode_clo(env56585))[5];
//not do dummy comment
void* kont56280 = (decode_clo(env56585))[4];
//not do dummy comment
void* cons = (decode_clo(env56585))[3];
//not do dummy comment
void* filter = (decode_clo(env56585))[2];
//not do dummy comment
void* car = (decode_clo(env56585))[1];

//if-clause
bool if_guard57218 = is_true(a5618256427);
if(if_guard57218)
{

//creating new closure instance
void** clo57220 = alloc_clo(lam56580_fptr, 6);

//setting env list
clo57220[1] = cons;
clo57220[2] = filter;
clo57220[3] = kont56280;
clo57220[4] = op;
clo57220[5] = lst;
clo57220[6] = cdr;
void* f5628456428 = encode_clo(clo57220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5628456428;
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
void** clo57222 = alloc_clo(lam56582_fptr, 3);

//setting env list
clo57222[1] = filter;
clo57222[2] = kont56280;
clo57222[3] = op;
void* f5628556434 = encode_clo(clo57222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5628556434;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56584 = encode_clo(alloc_clo(lam56584_fptr, 0));

void* lam56586_fptr() // lam56586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56587 = arg_buffer[1];
//reading env and args
void* a5618156425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56587))[7];
//not do dummy comment
void* lst = (decode_clo(env56587))[6];
//not do dummy comment
void* op = (decode_clo(env56587))[5];
//not do dummy comment
void* kont56280 = (decode_clo(env56587))[4];
//not do dummy comment
void* cons = (decode_clo(env56587))[3];
//not do dummy comment
void* filter = (decode_clo(env56587))[2];
//not do dummy comment
void* car = (decode_clo(env56587))[1];

//creating new closure instance
void** clo57224 = alloc_clo(lam56584_fptr, 7);

//setting env list
clo57224[1] = car;
clo57224[2] = filter;
clo57224[3] = cons;
clo57224[4] = kont56280;
clo57224[5] = op;
clo57224[6] = lst;
clo57224[7] = cdr;
void* f5628656426 = encode_clo(clo57224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5628656426;
arg_buffer[3] = a5618156425;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56586 = encode_clo(alloc_clo(lam56586_fptr, 0));

void* lam56588_fptr() // lam56588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56589 = arg_buffer[1];
//reading env and args
void* a5617956421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56589))[8];
//not do dummy comment
void* op = (decode_clo(env56589))[7];
//not do dummy comment
void* kont56280 = (decode_clo(env56589))[6];
//not do dummy comment
void* cons = (decode_clo(env56589))[5];
//not do dummy comment
void* list = (decode_clo(env56589))[4];
//not do dummy comment
void* cdr = (decode_clo(env56589))[3];
//not do dummy comment
void* filter = (decode_clo(env56589))[2];
//not do dummy comment
void* car = (decode_clo(env56589))[1];

//if-clause
bool if_guard57225 = is_true(a5617956421);
if(if_guard57225)
{

//creating new closure instance
void** clo57227 = alloc_clo(lam56574_fptr, 1);

//setting env list
clo57227[1] = kont56280;
void* f5628156422 = encode_clo(clo57227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5628156422;
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
void** clo57229 = alloc_clo(lam56586_fptr, 7);

//setting env list
clo57229[1] = car;
clo57229[2] = filter;
clo57229[3] = cons;
clo57229[4] = kont56280;
clo57229[5] = op;
clo57229[6] = lst;
clo57229[7] = cdr;
void* f5628756424 = encode_clo(clo57229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5628756424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56588 = encode_clo(alloc_clo(lam56588_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56590 = arg_buffer[1];
//reading env and args
void* kont56280 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57231 = alloc_clo(lam56588_fptr, 8);

//setting env list
clo57231[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo57231[2] = filter;
clo57231[3] = cdr;
clo57231[4] = list;
clo57231[5] = cons;
clo57231[6] = kont56280;
clo57231[7] = op;
clo57231[8] = lst;
void* f5628856420 = encode_clo(clo57231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5628856420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam56591_fptr() // lam56591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56592 = arg_buffer[1];
//reading env and args
void* a5619156443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56289 = (decode_clo(env56592))[3];
//not do dummy comment
void* drop = (decode_clo(env56592))[2];
//not do dummy comment
void* a5618956440 = (decode_clo(env56592))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont56289;
arg_buffer[3] = a5618956440;
arg_buffer[4] = a5619156443;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56591 = encode_clo(alloc_clo(lam56591_fptr, 0));

void* lam56594_fptr() // lam56594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56595 = arg_buffer[1];
//reading env and args
void* a5618956440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56289 = (decode_clo(env56595))[4];
//not do dummy comment
void* drop = (decode_clo(env56595))[3];
//not do dummy comment
void* n = (decode_clo(env56595))[2];
//not do dummy comment
void* _u45 = (decode_clo(env56595))[1];
mpz_t* mpzvar57232 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57232, "1", 10);
void* a5619056441 = encode_mpz(mpzvar57232);

//creating new closure instance
void** clo57234 = alloc_clo(lam56591_fptr, 3);

//setting env list
clo57234[1] = a5618956440;
clo57234[2] = drop;
clo57234[3] = kont56289;
void* f5629056442 = encode_clo(clo57234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5629056442;
arg_buffer[3] = n;
arg_buffer[4] = a5619056441;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56594 = encode_clo(alloc_clo(lam56594_fptr, 0));

void* lam56596_fptr() // lam56596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56597 = arg_buffer[1];
//reading env and args
void* a5618856438 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56597))[6];
//not do dummy comment
void* kont56289 = (decode_clo(env56597))[5];
//not do dummy comment
void* n = (decode_clo(env56597))[4];
//not do dummy comment
void* _u45 = (decode_clo(env56597))[3];
//not do dummy comment
void* lst = (decode_clo(env56597))[2];
//not do dummy comment
void* drop = (decode_clo(env56597))[1];

//if-clause
bool if_guard57235 = is_true(a5618856438);
if(if_guard57235)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56289);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56289))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57237 = alloc_clo(lam56594_fptr, 4);

//setting env list
clo57237[1] = _u45;
clo57237[2] = n;
clo57237[3] = drop;
clo57237[4] = kont56289;
void* f5629156439 = encode_clo(clo57237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5629156439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56596 = encode_clo(alloc_clo(lam56596_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56599 = arg_buffer[1];
//reading env and args
void* kont56289 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar57238 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57238, "0", 10);
void* a5618756436 = encode_mpz(mpzvar57238);

//creating new closure instance
void** clo57240 = alloc_clo(lam56596_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo57240[1] = drop;
clo57240[2] = lst;
clo57240[3] = _u45;
clo57240[4] = n;
clo57240[5] = kont56289;
clo57240[6] = cdr;
void* f5629256437 = encode_clo(clo57240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5629256437;
arg_buffer[3] = n;
arg_buffer[4] = a5618756436;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam56600_fptr() // lam56600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56601 = arg_buffer[1];
//reading env and args
void* a5619556451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56293 = (decode_clo(env56601))[3];
//not do dummy comment
void* proc = (decode_clo(env56601))[2];
//not do dummy comment
void* a5619356447 = (decode_clo(env56601))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont56293;
arg_buffer[3] = a5619356447;
arg_buffer[4] = a5619556451;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56600 = encode_clo(alloc_clo(lam56600_fptr, 0));

void* lam56602_fptr() // lam56602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56603 = arg_buffer[1];
//reading env and args
void* a5619456449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env56603))[5];
//not do dummy comment
void* kont56293 = (decode_clo(env56603))[4];
//not do dummy comment
void* a5619356447 = (decode_clo(env56603))[3];
//not do dummy comment
void* proc = (decode_clo(env56603))[2];
//not do dummy comment
void* acc = (decode_clo(env56603))[1];

//creating new closure instance
void** clo57242 = alloc_clo(lam56600_fptr, 3);

//setting env list
clo57242[1] = a5619356447;
clo57242[2] = proc;
clo57242[3] = kont56293;
void* f5629456450 = encode_clo(clo57242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5629456450;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5619456449;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56602 = encode_clo(alloc_clo(lam56602_fptr, 0));

void* lam56604_fptr() // lam56604 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56605 = arg_buffer[1];
//reading env and args
void* a5619356447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56605))[6];
//not do dummy comment
void* kont56293 = (decode_clo(env56605))[5];
//not do dummy comment
void* foldr = (decode_clo(env56605))[4];
//not do dummy comment
void* lst = (decode_clo(env56605))[3];
//not do dummy comment
void* proc = (decode_clo(env56605))[2];
//not do dummy comment
void* acc = (decode_clo(env56605))[1];

//creating new closure instance
void** clo57244 = alloc_clo(lam56602_fptr, 5);

//setting env list
clo57244[1] = acc;
clo57244[2] = proc;
clo57244[3] = a5619356447;
clo57244[4] = kont56293;
clo57244[5] = foldr;
void* f5629556448 = encode_clo(clo57244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5629556448;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56604 = encode_clo(alloc_clo(lam56604_fptr, 0));

void* lam56606_fptr() // lam56606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56607 = arg_buffer[1];
//reading env and args
void* a5619256445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56607))[7];
//not do dummy comment
void* kont56293 = (decode_clo(env56607))[6];
//not do dummy comment
void* car = (decode_clo(env56607))[5];
//not do dummy comment
void* foldr = (decode_clo(env56607))[4];
//not do dummy comment
void* lst = (decode_clo(env56607))[3];
//not do dummy comment
void* proc = (decode_clo(env56607))[2];
//not do dummy comment
void* acc = (decode_clo(env56607))[1];

//if-clause
bool if_guard57245 = is_true(a5619256445);
if(if_guard57245)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56293);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56293))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57247 = alloc_clo(lam56604_fptr, 6);

//setting env list
clo57247[1] = acc;
clo57247[2] = proc;
clo57247[3] = lst;
clo57247[4] = foldr;
clo57247[5] = kont56293;
clo57247[6] = cdr;
void* f5629656446 = encode_clo(clo57247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5629656446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56606 = encode_clo(alloc_clo(lam56606_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56608 = arg_buffer[1];
//reading env and args
void* kont56293 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57249 = alloc_clo(lam56606_fptr, 7);

//setting env list
clo57249[1] = acc;
clo57249[2] = proc;
clo57249[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo57249[4] = foldr;
clo57249[5] = car;
clo57249[6] = kont56293;
clo57249[7] = cdr;
void* f5629756444 = encode_clo(clo57249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5629756444;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam56609_fptr() // lam56609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56610 = arg_buffer[1];
//reading env and args
void* a5619956459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5619756455 = (decode_clo(env56610))[3];
//not do dummy comment
void* kont56298 = (decode_clo(env56610))[2];
//not do dummy comment
void* cons = (decode_clo(env56610))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont56298;
arg_buffer[3] = a5619756455;
arg_buffer[4] = a5619956459;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56609 = encode_clo(alloc_clo(lam56609_fptr, 0));

void* lam56611_fptr() // lam56611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56612 = arg_buffer[1];
//reading env and args
void* a5619856457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5619756455 = (decode_clo(env56612))[5];
//not do dummy comment
void* append = (decode_clo(env56612))[4];
//not do dummy comment
void* kont56298 = (decode_clo(env56612))[3];
//not do dummy comment
void* lst2 = (decode_clo(env56612))[2];
//not do dummy comment
void* cons = (decode_clo(env56612))[1];

//creating new closure instance
void** clo57251 = alloc_clo(lam56609_fptr, 3);

//setting env list
clo57251[1] = cons;
clo57251[2] = kont56298;
clo57251[3] = a5619756455;
void* f5629956458 = encode_clo(clo57251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5629956458;
arg_buffer[3] = a5619856457;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56611 = encode_clo(alloc_clo(lam56611_fptr, 0));

void* lam56613_fptr() // lam56613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56614 = arg_buffer[1];
//reading env and args
void* a5619756455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56614))[6];
//not do dummy comment
void* append = (decode_clo(env56614))[5];
//not do dummy comment
void* kont56298 = (decode_clo(env56614))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56614))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56614))[2];
//not do dummy comment
void* cons = (decode_clo(env56614))[1];

//creating new closure instance
void** clo57253 = alloc_clo(lam56611_fptr, 5);

//setting env list
clo57253[1] = cons;
clo57253[2] = lst2;
clo57253[3] = kont56298;
clo57253[4] = append;
clo57253[5] = a5619756455;
void* f5630056456 = encode_clo(clo57253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5630056456;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56613 = encode_clo(alloc_clo(lam56613_fptr, 0));

void* lam56615_fptr() // lam56615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56616 = arg_buffer[1];
//reading env and args
void* a5619656453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56616))[7];
//not do dummy comment
void* append = (decode_clo(env56616))[6];
//not do dummy comment
void* kont56298 = (decode_clo(env56616))[5];
//not do dummy comment
void* lst2 = (decode_clo(env56616))[4];
//not do dummy comment
void* cons = (decode_clo(env56616))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56616))[2];
//not do dummy comment
void* car = (decode_clo(env56616))[1];

//if-clause
bool if_guard57254 = is_true(a5619656453);
if(if_guard57254)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56298);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56298))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57256 = alloc_clo(lam56613_fptr, 6);

//setting env list
clo57256[1] = cons;
clo57256[2] = lst1;
clo57256[3] = lst2;
clo57256[4] = kont56298;
clo57256[5] = append;
clo57256[6] = cdr;
void* f5630156454 = encode_clo(clo57256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5630156454;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56615 = encode_clo(alloc_clo(lam56615_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56617 = arg_buffer[1];
//reading env and args
void* kont56298 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57258 = alloc_clo(lam56615_fptr, 7);

//setting env list
clo57258[1] = car;
clo57258[2] = lst1;
clo57258[3] = cons;
clo57258[4] = lst2;
clo57258[5] = kont56298;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo57258[6] = append;
clo57258[7] = cdr;
void* f5630256452 = encode_clo(clo57258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5630256452;
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
void* _56618 = arg_buffer[1];
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

void* kont5630356460 = prim_car(lst);
void* lst56461 = prim_cdr(lst);
void* x5620056462 = apply_prim_hash(lst56461);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5630356460);
arg_buffer[2] = x5620056462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5630356460))[0]);
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
void* _56619 = arg_buffer[1];
//reading env and args
void* kont56305 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5620156463 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56305);
arg_buffer[2] = x5620156463;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56305))[0]);
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
void* _56620 = arg_buffer[1];
//reading env and args
void* kont56306 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5620256464 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56306);
arg_buffer[2] = x5620256464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56306))[0]);
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
void* _56621 = arg_buffer[1];
//reading env and args
void* kont56307 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5620356465 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56307);
arg_buffer[2] = x5620356465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56307))[0]);
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
void* _56622 = arg_buffer[1];
//reading env and args
void* kont56308 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5620456466 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56308);
arg_buffer[2] = x5620456466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56308))[0]);
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
void* _56629 = arg_buffer[1];
//reading env and args
void* kont56309 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar57259 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57259, "1", 10);
void* a5620556467 = encode_mpz(mpzvar57259);
mpz_t* mpzvar57260 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57260, "2", 10);
void* a5620656468 = encode_mpz(mpzvar57260);
mpz_t* mpzvar57261 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57261, "3", 10);
void* a5620756469 = encode_mpz(mpzvar57261);
mpz_t* mpzvar57262 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57262, "4", 10);
void* a5620856470 = encode_mpz(mpzvar57262);
mpz_t* mpzvar57263 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57263, "5", 10);
void* a5620956471 = encode_mpz(mpzvar57263);
mpz_t* mpzvar57264 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57264, "100", 10);
void* a5621056472 = encode_mpz(mpzvar57264);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60);
arg_buffer[2] = kont56309;
arg_buffer[3] = a5620556467;
arg_buffer[4] = a5620656468;
arg_buffer[5] = a5620756469;
arg_buffer[6] = a5620856470;
arg_buffer[7] = a5620956471;
arg_buffer[8] = a5621056472;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam56630_fptr() // lam56630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56631 = arg_buffer[1];
//reading env and args
void* x5621156474 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont56310 = (decode_clo(env56631))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont56310);
arg_buffer[2] = x5621156474;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont56310))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56630 = encode_clo(alloc_clo(lam56630_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56632 = arg_buffer[1];
//reading env and args
void* kont56310 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo57266 = alloc_clo(lam56630_fptr, 1);

//setting env list
clo57266[1] = kont56310;
void* f5631156473 = encode_clo(clo57266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5631156473;
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

