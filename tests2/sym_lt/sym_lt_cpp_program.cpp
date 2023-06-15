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
void* _58487 = arg_buffer[1];
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

void* kont5822458324 = prim_car(lst);
void* lst58325 = prim_cdr(lst);
void* x5813458326 = apply_prim__u43(lst58325);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5822458324);
arg_buffer[2] = x5813458326;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5822458324))[0]);
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
void* _58488 = arg_buffer[1];
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

void* kont5822658327 = prim_car(lst);
void* lst58328 = prim_cdr(lst);
void* x5813558329 = apply_prim__u45(lst58328);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5822658327);
arg_buffer[2] = x5813558329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5822658327))[0]);
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
void* _58489 = arg_buffer[1];
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

void* kont5822858330 = prim_car(lst);
void* lst58331 = prim_cdr(lst);
void* x5813658332 = apply_prim__u42(lst58331);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5822858330);
arg_buffer[2] = x5813658332;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5822858330))[0]);
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
void* _58490 = arg_buffer[1];
//reading env and args
void* kont58230 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5813758333 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58230);
arg_buffer[2] = x5813758333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58230))[0]);
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
void* _58491 = arg_buffer[1];
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

void* kont5823158334 = prim_car(lst);
void* lst58335 = prim_cdr(lst);
void* x5813858336 = apply_prim__u47(lst58335);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5823158334);
arg_buffer[2] = x5813858336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5823158334))[0]);
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
void* _58492 = arg_buffer[1];
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

void* kont5823358337 = prim_car(lst);
void* lst58338 = prim_cdr(lst);
void* x5813958339 = apply_prim__u61(lst58338);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5823358337);
arg_buffer[2] = x5813958339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5823358337))[0]);
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
void* _58493 = arg_buffer[1];
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

void* kont5823558340 = prim_car(lst);
void* lst58341 = prim_cdr(lst);
void* x5814058342 = apply_prim__u62(lst58341);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5823558340);
arg_buffer[2] = x5814058342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5823558340))[0]);
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
void* _58494 = arg_buffer[1];
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

void* kont5823758343 = prim_car(lst);
void* lst58344 = prim_cdr(lst);
void* x5814158345 = apply_prim__u60(lst58344);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5823758343);
arg_buffer[2] = x5814158345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5823758343))[0]);
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
void* _58495 = arg_buffer[1];
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

void* kont5823958346 = prim_car(lst);
void* lst58347 = prim_cdr(lst);
void* x5814258348 = apply_prim__u60_u61(lst58347);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5823958346);
arg_buffer[2] = x5814258348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5823958346))[0]);
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
void* _58496 = arg_buffer[1];
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

void* kont5824158349 = prim_car(lst);
void* lst58350 = prim_cdr(lst);
void* x5814358351 = apply_prim__u62_u61(lst58350);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5824158349);
arg_buffer[2] = x5814358351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5824158349))[0]);
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
void* _58497 = arg_buffer[1];
//reading env and args
void* kont58243 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5814458352 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58243);
arg_buffer[2] = x5814458352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58243))[0]);
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
void* _58498 = arg_buffer[1];
//reading env and args
void* kont58244 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5814558353 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58244);
arg_buffer[2] = x5814558353;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58244))[0]);
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
void* _58499 = arg_buffer[1];
//reading env and args
void* kont58245 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5814658354 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58245);
arg_buffer[2] = x5814658354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58245))[0]);
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
void* _58500 = arg_buffer[1];
//reading env and args
void* kont58246 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5814758355 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58246);
arg_buffer[2] = x5814758355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58246))[0]);
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
void* _58501 = arg_buffer[1];
//reading env and args
void* kont58247 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5814858356 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58247);
arg_buffer[2] = x5814858356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58247))[0]);
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
void* _58502 = arg_buffer[1];
//reading env and args
void* kont58248 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5814958357 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58248);
arg_buffer[2] = x5814958357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58248))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam58503_fptr() // lam58503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58504 = arg_buffer[1];
//reading env and args
void* a5815258361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5815058358 = (decode_clo(env58504))[3];
//not do dummy comment
void* kont58249 = (decode_clo(env58504))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env58504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58249;
arg_buffer[3] = a5815058358;
arg_buffer[4] = a5815258361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58503 = encode_clo(alloc_clo(lam58503_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58507 = arg_buffer[1];
//reading env and args
void* kont58249 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar59185 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59185, "0", 10);
void* a5815058358 = encode_mpz(mpzvar59185);
mpz_t* mpzvar59186 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59186, "2", 10);
void* a5815158359 = encode_mpz(mpzvar59186);

//creating new closure instance
void** clo59188 = alloc_clo(lam58503_fptr, 3);

//setting env list
clo59188[1] = equal_u63;
clo59188[2] = kont58249;
clo59188[3] = a5815058358;
void* f5825058360 = encode_clo(clo59188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5825058360;
arg_buffer[3] = x;
arg_buffer[4] = a5815158359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam58508_fptr() // lam58508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58509 = arg_buffer[1];
//reading env and args
void* a5815558365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5815358362 = (decode_clo(env58509))[3];
//not do dummy comment
void* kont58251 = (decode_clo(env58509))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env58509))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58251;
arg_buffer[3] = a5815358362;
arg_buffer[4] = a5815558365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58508 = encode_clo(alloc_clo(lam58508_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58512 = arg_buffer[1];
//reading env and args
void* kont58251 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar59189 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59189, "1", 10);
void* a5815358362 = encode_mpz(mpzvar59189);
mpz_t* mpzvar59190 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59190, "2", 10);
void* a5815458363 = encode_mpz(mpzvar59190);

//creating new closure instance
void** clo59192 = alloc_clo(lam58508_fptr, 3);

//setting env list
clo59192[1] = equal_u63;
clo59192[2] = kont58251;
clo59192[3] = a5815358362;
void* f5825258364 = encode_clo(clo59192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5825258364;
arg_buffer[3] = x;
arg_buffer[4] = a5815458363;
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
void* _58513 = arg_buffer[1];
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

void* kont5825358366 = prim_car(x);
void* x58367 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5825358366);
arg_buffer[2] = x58367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5825358366))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam58516_fptr() // lam58516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58517 = arg_buffer[1];
//reading env and args
void* a5816158377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58255 = (decode_clo(env58517))[3];
//not do dummy comment
void* x = (decode_clo(env58517))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58517))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont58255;
arg_buffer[3] = x;
arg_buffer[4] = a5816158377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58516 = encode_clo(alloc_clo(lam58516_fptr, 0));

void* lam58518_fptr() // lam58518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58519 = arg_buffer[1];
//reading env and args
void* a5815958374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58519))[5];
//not do dummy comment
void* lst = (decode_clo(env58519))[4];
//not do dummy comment
void* kont58255 = (decode_clo(env58519))[3];
//not do dummy comment
void* x = (decode_clo(env58519))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58519))[1];

//if-clause
bool if_guard59193 = is_true(a5815958374);
if(if_guard59193)
{
void* x5816058375 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58255);
arg_buffer[2] = x5816058375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58255))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59195 = alloc_clo(lam58516_fptr, 3);

//setting env list
clo59195[1] = member_u63;
clo59195[2] = x;
clo59195[3] = kont58255;
void* f5825658376 = encode_clo(clo59195);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5825658376;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58518 = encode_clo(alloc_clo(lam58518_fptr, 0));

void* lam58520_fptr() // lam58520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58521 = arg_buffer[1];
//reading env and args
void* a5815858372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58521))[6];
//not do dummy comment
void* lst = (decode_clo(env58521))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env58521))[4];
//not do dummy comment
void* kont58255 = (decode_clo(env58521))[3];
//not do dummy comment
void* x = (decode_clo(env58521))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58521))[1];

//creating new closure instance
void** clo59197 = alloc_clo(lam58518_fptr, 5);

//setting env list
clo59197[1] = member_u63;
clo59197[2] = x;
clo59197[3] = kont58255;
clo59197[4] = lst;
clo59197[5] = cdr;
void* f5825758373 = encode_clo(clo59197);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5825758373;
arg_buffer[3] = a5815858372;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58520 = encode_clo(alloc_clo(lam58520_fptr, 0));

void* lam58522_fptr() // lam58522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58523 = arg_buffer[1];
//reading env and args
void* a5815658369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58523))[7];
//not do dummy comment
void* lst = (decode_clo(env58523))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env58523))[5];
//not do dummy comment
void* kont58255 = (decode_clo(env58523))[4];
//not do dummy comment
void* x = (decode_clo(env58523))[3];
//not do dummy comment
void* car = (decode_clo(env58523))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env58523))[1];

//if-clause
bool if_guard59198 = is_true(a5815658369);
if(if_guard59198)
{
void* x5815758370 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58255);
arg_buffer[2] = x5815758370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58255))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59200 = alloc_clo(lam58520_fptr, 6);

//setting env list
clo59200[1] = member_u63;
clo59200[2] = x;
clo59200[3] = kont58255;
clo59200[4] = equal_u63;
clo59200[5] = lst;
clo59200[6] = cdr;
void* f5825858371 = encode_clo(clo59200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5825858371;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58522 = encode_clo(alloc_clo(lam58522_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58524 = arg_buffer[1];
//reading env and args
void* kont58255 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59202 = alloc_clo(lam58522_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo59202[1] = member_u63;
clo59202[2] = car;
clo59202[3] = x;
clo59202[4] = kont58255;
clo59202[5] = equal_u63;
clo59202[6] = lst;
clo59202[7] = cdr;
void* f5825958368 = encode_clo(clo59202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5825958368;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam58525_fptr() // lam58525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58526 = arg_buffer[1];
//reading env and args
void* a5816558385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env58526))[4];
//not do dummy comment
void* kont58260 = (decode_clo(env58526))[3];
//not do dummy comment
void* a5816458383 = (decode_clo(env58526))[2];
//not do dummy comment
void* fun = (decode_clo(env58526))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont58260;
arg_buffer[3] = fun;
arg_buffer[4] = a5816458383;
arg_buffer[5] = a5816558385;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58525 = encode_clo(alloc_clo(lam58525_fptr, 0));

void* lam58527_fptr() // lam58527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58528 = arg_buffer[1];
//reading env and args
void* a5816458383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58528))[5];
//not do dummy comment
void* lst = (decode_clo(env58528))[4];
//not do dummy comment
void* fun = (decode_clo(env58528))[3];
//not do dummy comment
void* foldl = (decode_clo(env58528))[2];
//not do dummy comment
void* kont58260 = (decode_clo(env58528))[1];

//creating new closure instance
void** clo59204 = alloc_clo(lam58525_fptr, 4);

//setting env list
clo59204[1] = fun;
clo59204[2] = a5816458383;
clo59204[3] = kont58260;
clo59204[4] = foldl;
void* f5826158384 = encode_clo(clo59204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5826158384;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58527 = encode_clo(alloc_clo(lam58527_fptr, 0));

void* lam58529_fptr() // lam58529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58530 = arg_buffer[1];
//reading env and args
void* a5816358381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58530))[6];
//not do dummy comment
void* lst = (decode_clo(env58530))[5];
//not do dummy comment
void* fun = (decode_clo(env58530))[4];
//not do dummy comment
void* acc = (decode_clo(env58530))[3];
//not do dummy comment
void* foldl = (decode_clo(env58530))[2];
//not do dummy comment
void* kont58260 = (decode_clo(env58530))[1];

//creating new closure instance
void** clo59206 = alloc_clo(lam58527_fptr, 5);

//setting env list
clo59206[1] = kont58260;
clo59206[2] = foldl;
clo59206[3] = fun;
clo59206[4] = lst;
clo59206[5] = cdr;
void* f5826258382 = encode_clo(clo59206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5826258382;
arg_buffer[3] = a5816358381;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58529 = encode_clo(alloc_clo(lam58529_fptr, 0));

void* lam58531_fptr() // lam58531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58532 = arg_buffer[1];
//reading env and args
void* a5816258379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58532))[7];
//not do dummy comment
void* lst = (decode_clo(env58532))[6];
//not do dummy comment
void* fun = (decode_clo(env58532))[5];
//not do dummy comment
void* acc = (decode_clo(env58532))[4];
//not do dummy comment
void* car = (decode_clo(env58532))[3];
//not do dummy comment
void* foldl = (decode_clo(env58532))[2];
//not do dummy comment
void* kont58260 = (decode_clo(env58532))[1];

//if-clause
bool if_guard59207 = is_true(a5816258379);
if(if_guard59207)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58260);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58260))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59209 = alloc_clo(lam58529_fptr, 6);

//setting env list
clo59209[1] = kont58260;
clo59209[2] = foldl;
clo59209[3] = acc;
clo59209[4] = fun;
clo59209[5] = lst;
clo59209[6] = cdr;
void* f5826358380 = encode_clo(clo59209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5826358380;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58531 = encode_clo(alloc_clo(lam58531_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58533 = arg_buffer[1];
//reading env and args
void* kont58260 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo59211 = alloc_clo(lam58531_fptr, 7);

//setting env list
clo59211[1] = kont58260;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo59211[2] = foldl;
clo59211[3] = car;
clo59211[4] = acc;
clo59211[5] = fun;
clo59211[6] = lst;
clo59211[7] = cdr;
void* f5826458378 = encode_clo(clo59211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5826458378;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam58534_fptr() // lam58534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58535 = arg_buffer[1];
//reading env and args
void* a5816958393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5816758389 = (decode_clo(env58535))[3];
//not do dummy comment
void* kont58265 = (decode_clo(env58535))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58535))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58265;
arg_buffer[3] = a5816758389;
arg_buffer[4] = a5816958393;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58534 = encode_clo(alloc_clo(lam58534_fptr, 0));

void* lam58536_fptr() // lam58536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58537 = arg_buffer[1];
//reading env and args
void* a5816858391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5816758389 = (decode_clo(env58537))[5];
//not do dummy comment
void* kont58265 = (decode_clo(env58537))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58537))[3];
//not do dummy comment
void* lst2 = (decode_clo(env58537))[2];
//not do dummy comment
void* cons = (decode_clo(env58537))[1];

//creating new closure instance
void** clo59213 = alloc_clo(lam58534_fptr, 3);

//setting env list
clo59213[1] = reverse_u45helper;
clo59213[2] = kont58265;
clo59213[3] = a5816758389;
void* f5826658392 = encode_clo(clo59213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5826658392;
arg_buffer[3] = a5816858391;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58536 = encode_clo(alloc_clo(lam58536_fptr, 0));

void* lam58538_fptr() // lam58538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58539 = arg_buffer[1];
//reading env and args
void* a5816758389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58539))[6];
//not do dummy comment
void* lst2 = (decode_clo(env58539))[5];
//not do dummy comment
void* car = (decode_clo(env58539))[4];
//not do dummy comment
void* cons = (decode_clo(env58539))[3];
//not do dummy comment
void* kont58265 = (decode_clo(env58539))[2];
//not do dummy comment
void* lst = (decode_clo(env58539))[1];

//creating new closure instance
void** clo59215 = alloc_clo(lam58536_fptr, 5);

//setting env list
clo59215[1] = cons;
clo59215[2] = lst2;
clo59215[3] = reverse_u45helper;
clo59215[4] = kont58265;
clo59215[5] = a5816758389;
void* f5826758390 = encode_clo(clo59215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5826758390;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58538 = encode_clo(alloc_clo(lam58538_fptr, 0));

void* lam58540_fptr() // lam58540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58541 = arg_buffer[1];
//reading env and args
void* a5816658387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58541))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58541))[6];
//not do dummy comment
void* lst2 = (decode_clo(env58541))[5];
//not do dummy comment
void* car = (decode_clo(env58541))[4];
//not do dummy comment
void* cons = (decode_clo(env58541))[3];
//not do dummy comment
void* kont58265 = (decode_clo(env58541))[2];
//not do dummy comment
void* lst = (decode_clo(env58541))[1];

//if-clause
bool if_guard59216 = is_true(a5816658387);
if(if_guard59216)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58265);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58265))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59218 = alloc_clo(lam58538_fptr, 6);

//setting env list
clo59218[1] = lst;
clo59218[2] = kont58265;
clo59218[3] = cons;
clo59218[4] = car;
clo59218[5] = lst2;
clo59218[6] = reverse_u45helper;
void* f5826858388 = encode_clo(clo59218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5826858388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58540 = encode_clo(alloc_clo(lam58540_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58542 = arg_buffer[1];
//reading env and args
void* kont58265 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59220 = alloc_clo(lam58540_fptr, 7);

//setting env list
clo59220[1] = lst;
clo59220[2] = kont58265;
clo59220[3] = cons;
clo59220[4] = car;
clo59220[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo59220[6] = reverse_u45helper;
clo59220[7] = cdr;
void* f5826958386 = encode_clo(clo59220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5826958386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam58543_fptr() // lam58543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58544 = arg_buffer[1];
//reading env and args
void* a5817058395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58544))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env58544))[2];
//not do dummy comment
void* kont58270 = (decode_clo(env58544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58270;
arg_buffer[3] = lst;
arg_buffer[4] = a5817058395;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58543 = encode_clo(alloc_clo(lam58543_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58545 = arg_buffer[1];
//reading env and args
void* kont58270 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo59222 = alloc_clo(lam58543_fptr, 3);

//setting env list
clo59222[1] = kont58270;
clo59222[2] = reverse_u45helper;
clo59222[3] = lst;
void* f5827158394 = encode_clo(clo59222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5827158394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam58546_fptr() // lam58546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58547 = arg_buffer[1];
//reading env and args
void* x5817358400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58272 = (decode_clo(env58547))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58272);
arg_buffer[2] = x5817358400;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58272))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58546 = encode_clo(alloc_clo(lam58546_fptr, 0));

void* lam58548_fptr() // lam58548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58549 = arg_buffer[1];
//reading env and args
void* a5817858409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5817658405 = (decode_clo(env58549))[4];
//not do dummy comment
void* kont58272 = (decode_clo(env58549))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env58549))[2];
//not do dummy comment
void* a5817458402 = (decode_clo(env58549))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58272;
arg_buffer[3] = a5817458402;
arg_buffer[4] = a5817658405;
arg_buffer[5] = a5817858409;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58548 = encode_clo(alloc_clo(lam58548_fptr, 0));

void* lam58550_fptr() // lam58550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58551 = arg_buffer[1];
//reading env and args
void* a5817758407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5817658405 = (decode_clo(env58551))[6];
//not do dummy comment
void* kont58272 = (decode_clo(env58551))[5];
//not do dummy comment
void* a5817458402 = (decode_clo(env58551))[4];
//not do dummy comment
void* cons = (decode_clo(env58551))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env58551))[2];
//not do dummy comment
void* lst2 = (decode_clo(env58551))[1];

//creating new closure instance
void** clo59224 = alloc_clo(lam58548_fptr, 4);

//setting env list
clo59224[1] = a5817458402;
clo59224[2] = take_u45helper;
clo59224[3] = kont58272;
clo59224[4] = a5817658405;
void* f5827458408 = encode_clo(clo59224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5827458408;
arg_buffer[3] = a5817758407;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58550 = encode_clo(alloc_clo(lam58550_fptr, 0));

void* lam58552_fptr() // lam58552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58553 = arg_buffer[1];
//reading env and args
void* a5817658405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58553))[7];
//not do dummy comment
void* kont58272 = (decode_clo(env58553))[6];
//not do dummy comment
void* cons = (decode_clo(env58553))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env58553))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58553))[3];
//not do dummy comment
void* a5817458402 = (decode_clo(env58553))[2];
//not do dummy comment
void* car = (decode_clo(env58553))[1];

//creating new closure instance
void** clo59226 = alloc_clo(lam58550_fptr, 6);

//setting env list
clo59226[1] = lst2;
clo59226[2] = take_u45helper;
clo59226[3] = cons;
clo59226[4] = a5817458402;
clo59226[5] = kont58272;
clo59226[6] = a5817658405;
void* f5827558406 = encode_clo(clo59226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5827558406;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58552 = encode_clo(alloc_clo(lam58552_fptr, 0));

void* lam58555_fptr() // lam58555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58556 = arg_buffer[1];
//reading env and args
void* a5817458402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58556))[8];
//not do dummy comment
void* kont58272 = (decode_clo(env58556))[7];
//not do dummy comment
void* cons = (decode_clo(env58556))[6];
//not do dummy comment
void* _u45 = (decode_clo(env58556))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env58556))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58556))[3];
//not do dummy comment
void* n = (decode_clo(env58556))[2];
//not do dummy comment
void* car = (decode_clo(env58556))[1];
mpz_t* mpzvar59227 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59227, "1", 10);
void* a5817558403 = encode_mpz(mpzvar59227);

//creating new closure instance
void** clo59229 = alloc_clo(lam58552_fptr, 7);

//setting env list
clo59229[1] = car;
clo59229[2] = a5817458402;
clo59229[3] = lst2;
clo59229[4] = take_u45helper;
clo59229[5] = cons;
clo59229[6] = kont58272;
clo59229[7] = lst;
void* f5827658404 = encode_clo(clo59229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5827658404;
arg_buffer[3] = n;
arg_buffer[4] = a5817558403;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58555 = encode_clo(alloc_clo(lam58555_fptr, 0));

void* lam58557_fptr() // lam58557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58558 = arg_buffer[1];
//reading env and args
void* a5817258398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58558))[10];
//not do dummy comment
void* lst = (decode_clo(env58558))[9];
//not do dummy comment
void* reverse = (decode_clo(env58558))[8];
//not do dummy comment
void* kont58272 = (decode_clo(env58558))[7];
//not do dummy comment
void* cons = (decode_clo(env58558))[6];
//not do dummy comment
void* _u45 = (decode_clo(env58558))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env58558))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58558))[3];
//not do dummy comment
void* n = (decode_clo(env58558))[2];
//not do dummy comment
void* car = (decode_clo(env58558))[1];

//if-clause
bool if_guard59230 = is_true(a5817258398);
if(if_guard59230)
{

//creating new closure instance
void** clo59232 = alloc_clo(lam58546_fptr, 1);

//setting env list
clo59232[1] = kont58272;
void* f5827358399 = encode_clo(clo59232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5827358399;
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
void** clo59234 = alloc_clo(lam58555_fptr, 8);

//setting env list
clo59234[1] = car;
clo59234[2] = n;
clo59234[3] = lst2;
clo59234[4] = take_u45helper;
clo59234[5] = _u45;
clo59234[6] = cons;
clo59234[7] = kont58272;
clo59234[8] = lst;
void* f5827758401 = encode_clo(clo59234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5827758401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58557 = encode_clo(alloc_clo(lam58557_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58560 = arg_buffer[1];
//reading env and args
void* kont58272 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar59235 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59235, "0", 10);
void* a5817158396 = encode_mpz(mpzvar59235);

//creating new closure instance
void** clo59237 = alloc_clo(lam58557_fptr, 10);

//setting env list
clo59237[1] = car;
clo59237[2] = n;
clo59237[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo59237[4] = take_u45helper;
clo59237[5] = _u45;
clo59237[6] = cons;
clo59237[7] = kont58272;
clo59237[8] = reverse;
clo59237[9] = lst;
clo59237[10] = cdr;
void* f5827858397 = encode_clo(clo59237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5827858397;
arg_buffer[3] = n;
arg_buffer[4] = a5817158396;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam58561_fptr() // lam58561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58562 = arg_buffer[1];
//reading env and args
void* a5817958411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58279 = (decode_clo(env58562))[4];
//not do dummy comment
void* lst = (decode_clo(env58562))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env58562))[2];
//not do dummy comment
void* n = (decode_clo(env58562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58279;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5817958411;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58561 = encode_clo(alloc_clo(lam58561_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58563 = arg_buffer[1];
//reading env and args
void* kont58279 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59239 = alloc_clo(lam58561_fptr, 4);

//setting env list
clo59239[1] = n;
clo59239[2] = take_u45helper;
clo59239[3] = lst;
clo59239[4] = kont58279;
void* f5828058410 = encode_clo(clo59239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5828058410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam58565_fptr() // lam58565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58566 = arg_buffer[1];
//reading env and args
void* a5818458419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58281 = (decode_clo(env58566))[3];
//not do dummy comment
void* _u43 = (decode_clo(env58566))[2];
//not do dummy comment
void* a5818258415 = (decode_clo(env58566))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont58281;
arg_buffer[3] = a5818258415;
arg_buffer[4] = a5818458419;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58565 = encode_clo(alloc_clo(lam58565_fptr, 0));

void* lam58567_fptr() // lam58567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58568 = arg_buffer[1];
//reading env and args
void* a5818358417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58281 = (decode_clo(env58568))[4];
//not do dummy comment
void* length = (decode_clo(env58568))[3];
//not do dummy comment
void* _u43 = (decode_clo(env58568))[2];
//not do dummy comment
void* a5818258415 = (decode_clo(env58568))[1];

//creating new closure instance
void** clo59241 = alloc_clo(lam58565_fptr, 3);

//setting env list
clo59241[1] = a5818258415;
clo59241[2] = _u43;
clo59241[3] = kont58281;
void* f5828258418 = encode_clo(clo59241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5828258418;
arg_buffer[3] = a5818358417;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58567 = encode_clo(alloc_clo(lam58567_fptr, 0));

void* lam58570_fptr() // lam58570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58571 = arg_buffer[1];
//reading env and args
void* a5818058413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58571))[5];
//not do dummy comment
void* length = (decode_clo(env58571))[4];
//not do dummy comment
void* _u43 = (decode_clo(env58571))[3];
//not do dummy comment
void* kont58281 = (decode_clo(env58571))[2];
//not do dummy comment
void* lst = (decode_clo(env58571))[1];

//if-clause
bool if_guard59242 = is_true(a5818058413);
if(if_guard59242)
{
mpz_t* mpzvar59243 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59243, "0", 10);
void* x5818158414 = encode_mpz(mpzvar59243);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58281);
arg_buffer[2] = x5818158414;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58281))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar59244 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59244, "1", 10);
void* a5818258415 = encode_mpz(mpzvar59244);

//creating new closure instance
void** clo59246 = alloc_clo(lam58567_fptr, 4);

//setting env list
clo59246[1] = a5818258415;
clo59246[2] = _u43;
clo59246[3] = length;
clo59246[4] = kont58281;
void* f5828358416 = encode_clo(clo59246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5828358416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58570 = encode_clo(alloc_clo(lam58570_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58572 = arg_buffer[1];
//reading env and args
void* kont58281 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo59248 = alloc_clo(lam58570_fptr, 5);

//setting env list
clo59248[1] = lst;
clo59248[2] = kont58281;
clo59248[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo59248[4] = length;
clo59248[5] = cdr;
void* f5828458412 = encode_clo(clo59248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5828458412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam58573_fptr() // lam58573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58574 = arg_buffer[1];
//reading env and args
void* x5818658423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58285 = (decode_clo(env58574))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58285);
arg_buffer[2] = x5818658423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58285))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58573 = encode_clo(alloc_clo(lam58573_fptr, 0));

void* lam58575_fptr() // lam58575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58576 = arg_buffer[1];
//reading env and args
void* a5819058431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5818858427 = (decode_clo(env58576))[3];
//not do dummy comment
void* kont58285 = (decode_clo(env58576))[2];
//not do dummy comment
void* cons = (decode_clo(env58576))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58285;
arg_buffer[3] = a5818858427;
arg_buffer[4] = a5819058431;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58575 = encode_clo(alloc_clo(lam58575_fptr, 0));

void* lam58577_fptr() // lam58577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58578 = arg_buffer[1];
//reading env and args
void* a5818958429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env58578))[5];
//not do dummy comment
void* a5818858427 = (decode_clo(env58578))[4];
//not do dummy comment
void* kont58285 = (decode_clo(env58578))[3];
//not do dummy comment
void* proc = (decode_clo(env58578))[2];
//not do dummy comment
void* cons = (decode_clo(env58578))[1];

//creating new closure instance
void** clo59250 = alloc_clo(lam58575_fptr, 3);

//setting env list
clo59250[1] = cons;
clo59250[2] = kont58285;
clo59250[3] = a5818858427;
void* f5828758430 = encode_clo(clo59250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5828758430;
arg_buffer[3] = proc;
arg_buffer[4] = a5818958429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58577 = encode_clo(alloc_clo(lam58577_fptr, 0));

void* lam58579_fptr() // lam58579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58580 = arg_buffer[1];
//reading env and args
void* a5818858427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58580))[6];
//not do dummy comment
void* lst = (decode_clo(env58580))[5];
//not do dummy comment
void* map = (decode_clo(env58580))[4];
//not do dummy comment
void* kont58285 = (decode_clo(env58580))[3];
//not do dummy comment
void* proc = (decode_clo(env58580))[2];
//not do dummy comment
void* cons = (decode_clo(env58580))[1];

//creating new closure instance
void** clo59252 = alloc_clo(lam58577_fptr, 5);

//setting env list
clo59252[1] = cons;
clo59252[2] = proc;
clo59252[3] = kont58285;
clo59252[4] = a5818858427;
clo59252[5] = map;
void* f5828858428 = encode_clo(clo59252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5828858428;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58579 = encode_clo(alloc_clo(lam58579_fptr, 0));

void* lam58581_fptr() // lam58581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58582 = arg_buffer[1];
//reading env and args
void* a5818758425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58582))[6];
//not do dummy comment
void* lst = (decode_clo(env58582))[5];
//not do dummy comment
void* map = (decode_clo(env58582))[4];
//not do dummy comment
void* kont58285 = (decode_clo(env58582))[3];
//not do dummy comment
void* proc = (decode_clo(env58582))[2];
//not do dummy comment
void* cons = (decode_clo(env58582))[1];

//creating new closure instance
void** clo59254 = alloc_clo(lam58579_fptr, 6);

//setting env list
clo59254[1] = cons;
clo59254[2] = proc;
clo59254[3] = kont58285;
clo59254[4] = map;
clo59254[5] = lst;
clo59254[6] = cdr;
void* f5828958426 = encode_clo(clo59254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5828958426;
arg_buffer[3] = a5818758425;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58581 = encode_clo(alloc_clo(lam58581_fptr, 0));

void* lam58583_fptr() // lam58583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58584 = arg_buffer[1];
//reading env and args
void* a5818558421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58584))[8];
//not do dummy comment
void* map = (decode_clo(env58584))[7];
//not do dummy comment
void* kont58285 = (decode_clo(env58584))[6];
//not do dummy comment
void* proc = (decode_clo(env58584))[5];
//not do dummy comment
void* car = (decode_clo(env58584))[4];
//not do dummy comment
void* cons = (decode_clo(env58584))[3];
//not do dummy comment
void* list = (decode_clo(env58584))[2];
//not do dummy comment
void* cdr = (decode_clo(env58584))[1];

//if-clause
bool if_guard59255 = is_true(a5818558421);
if(if_guard59255)
{

//creating new closure instance
void** clo59257 = alloc_clo(lam58573_fptr, 1);

//setting env list
clo59257[1] = kont58285;
void* f5828658422 = encode_clo(clo59257);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5828658422;
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
void** clo59259 = alloc_clo(lam58581_fptr, 6);

//setting env list
clo59259[1] = cons;
clo59259[2] = proc;
clo59259[3] = kont58285;
clo59259[4] = map;
clo59259[5] = lst;
clo59259[6] = cdr;
void* f5829058424 = encode_clo(clo59259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5829058424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58583 = encode_clo(alloc_clo(lam58583_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58585 = arg_buffer[1];
//reading env and args
void* kont58285 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59261 = alloc_clo(lam58583_fptr, 8);

//setting env list
clo59261[1] = cdr;
clo59261[2] = list;
clo59261[3] = cons;
clo59261[4] = car;
clo59261[5] = proc;
clo59261[6] = kont58285;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo59261[7] = map;
clo59261[8] = lst;
void* f5829158420 = encode_clo(clo59261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5829158420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam58586_fptr() // lam58586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58587 = arg_buffer[1];
//reading env and args
void* x5819258435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58292 = (decode_clo(env58587))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58292);
arg_buffer[2] = x5819258435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58292))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58586 = encode_clo(alloc_clo(lam58586_fptr, 0));

void* lam58588_fptr() // lam58588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58589 = arg_buffer[1];
//reading env and args
void* a5819758445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5819558441 = (decode_clo(env58589))[3];
//not do dummy comment
void* cons = (decode_clo(env58589))[2];
//not do dummy comment
void* kont58292 = (decode_clo(env58589))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58292;
arg_buffer[3] = a5819558441;
arg_buffer[4] = a5819758445;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58588 = encode_clo(alloc_clo(lam58588_fptr, 0));

void* lam58590_fptr() // lam58590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58591 = arg_buffer[1];
//reading env and args
void* a5819658443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5819558441 = (decode_clo(env58591))[5];
//not do dummy comment
void* op = (decode_clo(env58591))[4];
//not do dummy comment
void* filter = (decode_clo(env58591))[3];
//not do dummy comment
void* cons = (decode_clo(env58591))[2];
//not do dummy comment
void* kont58292 = (decode_clo(env58591))[1];

//creating new closure instance
void** clo59263 = alloc_clo(lam58588_fptr, 3);

//setting env list
clo59263[1] = kont58292;
clo59263[2] = cons;
clo59263[3] = a5819558441;
void* f5829458444 = encode_clo(clo59263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5829458444;
arg_buffer[3] = op;
arg_buffer[4] = a5819658443;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58590 = encode_clo(alloc_clo(lam58590_fptr, 0));

void* lam58592_fptr() // lam58592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58593 = arg_buffer[1];
//reading env and args
void* a5819558441 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58593))[6];
//not do dummy comment
void* lst = (decode_clo(env58593))[5];
//not do dummy comment
void* op = (decode_clo(env58593))[4];
//not do dummy comment
void* filter = (decode_clo(env58593))[3];
//not do dummy comment
void* cons = (decode_clo(env58593))[2];
//not do dummy comment
void* kont58292 = (decode_clo(env58593))[1];

//creating new closure instance
void** clo59265 = alloc_clo(lam58590_fptr, 5);

//setting env list
clo59265[1] = kont58292;
clo59265[2] = cons;
clo59265[3] = filter;
clo59265[4] = op;
clo59265[5] = a5819558441;
void* f5829558442 = encode_clo(clo59265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5829558442;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58592 = encode_clo(alloc_clo(lam58592_fptr, 0));

void* lam58594_fptr() // lam58594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58595 = arg_buffer[1];
//reading env and args
void* a5819858447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env58595))[3];
//not do dummy comment
void* filter = (decode_clo(env58595))[2];
//not do dummy comment
void* kont58292 = (decode_clo(env58595))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont58292;
arg_buffer[3] = op;
arg_buffer[4] = a5819858447;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58594 = encode_clo(alloc_clo(lam58594_fptr, 0));

void* lam58596_fptr() // lam58596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58597 = arg_buffer[1];
//reading env and args
void* a5819458439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58597))[7];
//not do dummy comment
void* lst = (decode_clo(env58597))[6];
//not do dummy comment
void* op = (decode_clo(env58597))[5];
//not do dummy comment
void* cons = (decode_clo(env58597))[4];
//not do dummy comment
void* kont58292 = (decode_clo(env58597))[3];
//not do dummy comment
void* filter = (decode_clo(env58597))[2];
//not do dummy comment
void* car = (decode_clo(env58597))[1];

//if-clause
bool if_guard59266 = is_true(a5819458439);
if(if_guard59266)
{

//creating new closure instance
void** clo59268 = alloc_clo(lam58592_fptr, 6);

//setting env list
clo59268[1] = kont58292;
clo59268[2] = cons;
clo59268[3] = filter;
clo59268[4] = op;
clo59268[5] = lst;
clo59268[6] = cdr;
void* f5829658440 = encode_clo(clo59268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5829658440;
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
void** clo59270 = alloc_clo(lam58594_fptr, 3);

//setting env list
clo59270[1] = kont58292;
clo59270[2] = filter;
clo59270[3] = op;
void* f5829758446 = encode_clo(clo59270);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5829758446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58596 = encode_clo(alloc_clo(lam58596_fptr, 0));

void* lam58598_fptr() // lam58598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58599 = arg_buffer[1];
//reading env and args
void* a5819358437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58599))[7];
//not do dummy comment
void* lst = (decode_clo(env58599))[6];
//not do dummy comment
void* op = (decode_clo(env58599))[5];
//not do dummy comment
void* cons = (decode_clo(env58599))[4];
//not do dummy comment
void* kont58292 = (decode_clo(env58599))[3];
//not do dummy comment
void* filter = (decode_clo(env58599))[2];
//not do dummy comment
void* car = (decode_clo(env58599))[1];

//creating new closure instance
void** clo59272 = alloc_clo(lam58596_fptr, 7);

//setting env list
clo59272[1] = car;
clo59272[2] = filter;
clo59272[3] = kont58292;
clo59272[4] = cons;
clo59272[5] = op;
clo59272[6] = lst;
clo59272[7] = cdr;
void* f5829858438 = encode_clo(clo59272);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5829858438;
arg_buffer[3] = a5819358437;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58598 = encode_clo(alloc_clo(lam58598_fptr, 0));

void* lam58600_fptr() // lam58600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58601 = arg_buffer[1];
//reading env and args
void* a5819158433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env58601))[8];
//not do dummy comment
void* op = (decode_clo(env58601))[7];
//not do dummy comment
void* cons = (decode_clo(env58601))[6];
//not do dummy comment
void* kont58292 = (decode_clo(env58601))[5];
//not do dummy comment
void* list = (decode_clo(env58601))[4];
//not do dummy comment
void* cdr = (decode_clo(env58601))[3];
//not do dummy comment
void* filter = (decode_clo(env58601))[2];
//not do dummy comment
void* car = (decode_clo(env58601))[1];

//if-clause
bool if_guard59273 = is_true(a5819158433);
if(if_guard59273)
{

//creating new closure instance
void** clo59275 = alloc_clo(lam58586_fptr, 1);

//setting env list
clo59275[1] = kont58292;
void* f5829358434 = encode_clo(clo59275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5829358434;
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
void** clo59277 = alloc_clo(lam58598_fptr, 7);

//setting env list
clo59277[1] = car;
clo59277[2] = filter;
clo59277[3] = kont58292;
clo59277[4] = cons;
clo59277[5] = op;
clo59277[6] = lst;
clo59277[7] = cdr;
void* f5829958436 = encode_clo(clo59277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5829958436;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58600 = encode_clo(alloc_clo(lam58600_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58602 = arg_buffer[1];
//reading env and args
void* kont58292 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59279 = alloc_clo(lam58600_fptr, 8);

//setting env list
clo59279[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo59279[2] = filter;
clo59279[3] = cdr;
clo59279[4] = list;
clo59279[5] = kont58292;
clo59279[6] = cons;
clo59279[7] = op;
clo59279[8] = lst;
void* f5830058432 = encode_clo(clo59279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5830058432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam58603_fptr() // lam58603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58604 = arg_buffer[1];
//reading env and args
void* a5820358455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env58604))[3];
//not do dummy comment
void* kont58301 = (decode_clo(env58604))[2];
//not do dummy comment
void* a5820158452 = (decode_clo(env58604))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont58301;
arg_buffer[3] = a5820158452;
arg_buffer[4] = a5820358455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58603 = encode_clo(alloc_clo(lam58603_fptr, 0));

void* lam58606_fptr() // lam58606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58607 = arg_buffer[1];
//reading env and args
void* a5820158452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env58607))[4];
//not do dummy comment
void* kont58301 = (decode_clo(env58607))[3];
//not do dummy comment
void* n = (decode_clo(env58607))[2];
//not do dummy comment
void* _u45 = (decode_clo(env58607))[1];
mpz_t* mpzvar59280 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59280, "1", 10);
void* a5820258453 = encode_mpz(mpzvar59280);

//creating new closure instance
void** clo59282 = alloc_clo(lam58603_fptr, 3);

//setting env list
clo59282[1] = a5820158452;
clo59282[2] = kont58301;
clo59282[3] = drop;
void* f5830258454 = encode_clo(clo59282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5830258454;
arg_buffer[3] = n;
arg_buffer[4] = a5820258453;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58606 = encode_clo(alloc_clo(lam58606_fptr, 0));

void* lam58608_fptr() // lam58608 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58609 = arg_buffer[1];
//reading env and args
void* a5820058450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58609))[6];
//not do dummy comment
void* kont58301 = (decode_clo(env58609))[5];
//not do dummy comment
void* n = (decode_clo(env58609))[4];
//not do dummy comment
void* _u45 = (decode_clo(env58609))[3];
//not do dummy comment
void* lst = (decode_clo(env58609))[2];
//not do dummy comment
void* drop = (decode_clo(env58609))[1];

//if-clause
bool if_guard59283 = is_true(a5820058450);
if(if_guard59283)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58301);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58301))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59285 = alloc_clo(lam58606_fptr, 4);

//setting env list
clo59285[1] = _u45;
clo59285[2] = n;
clo59285[3] = kont58301;
clo59285[4] = drop;
void* f5830358451 = encode_clo(clo59285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5830358451;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58608 = encode_clo(alloc_clo(lam58608_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58611 = arg_buffer[1];
//reading env and args
void* kont58301 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar59286 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59286, "0", 10);
void* a5819958448 = encode_mpz(mpzvar59286);

//creating new closure instance
void** clo59288 = alloc_clo(lam58608_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo59288[1] = drop;
clo59288[2] = lst;
clo59288[3] = _u45;
clo59288[4] = n;
clo59288[5] = kont58301;
clo59288[6] = cdr;
void* f5830458449 = encode_clo(clo59288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5830458449;
arg_buffer[3] = n;
arg_buffer[4] = a5819958448;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam58612_fptr() // lam58612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58613 = arg_buffer[1];
//reading env and args
void* a5820758463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5820558459 = (decode_clo(env58613))[3];
//not do dummy comment
void* proc = (decode_clo(env58613))[2];
//not do dummy comment
void* kont58305 = (decode_clo(env58613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont58305;
arg_buffer[3] = a5820558459;
arg_buffer[4] = a5820758463;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58612 = encode_clo(alloc_clo(lam58612_fptr, 0));

void* lam58614_fptr() // lam58614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58615 = arg_buffer[1];
//reading env and args
void* a5820658461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env58615))[5];
//not do dummy comment
void* a5820558459 = (decode_clo(env58615))[4];
//not do dummy comment
void* kont58305 = (decode_clo(env58615))[3];
//not do dummy comment
void* proc = (decode_clo(env58615))[2];
//not do dummy comment
void* acc = (decode_clo(env58615))[1];

//creating new closure instance
void** clo59290 = alloc_clo(lam58612_fptr, 3);

//setting env list
clo59290[1] = kont58305;
clo59290[2] = proc;
clo59290[3] = a5820558459;
void* f5830658462 = encode_clo(clo59290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5830658462;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5820658461;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58614 = encode_clo(alloc_clo(lam58614_fptr, 0));

void* lam58616_fptr() // lam58616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58617 = arg_buffer[1];
//reading env and args
void* a5820558459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58617))[6];
//not do dummy comment
void* kont58305 = (decode_clo(env58617))[5];
//not do dummy comment
void* foldr = (decode_clo(env58617))[4];
//not do dummy comment
void* lst = (decode_clo(env58617))[3];
//not do dummy comment
void* proc = (decode_clo(env58617))[2];
//not do dummy comment
void* acc = (decode_clo(env58617))[1];

//creating new closure instance
void** clo59292 = alloc_clo(lam58614_fptr, 5);

//setting env list
clo59292[1] = acc;
clo59292[2] = proc;
clo59292[3] = kont58305;
clo59292[4] = a5820558459;
clo59292[5] = foldr;
void* f5830758460 = encode_clo(clo59292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5830758460;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58616 = encode_clo(alloc_clo(lam58616_fptr, 0));

void* lam58618_fptr() // lam58618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58619 = arg_buffer[1];
//reading env and args
void* a5820458457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58619))[7];
//not do dummy comment
void* kont58305 = (decode_clo(env58619))[6];
//not do dummy comment
void* car = (decode_clo(env58619))[5];
//not do dummy comment
void* foldr = (decode_clo(env58619))[4];
//not do dummy comment
void* lst = (decode_clo(env58619))[3];
//not do dummy comment
void* proc = (decode_clo(env58619))[2];
//not do dummy comment
void* acc = (decode_clo(env58619))[1];

//if-clause
bool if_guard59293 = is_true(a5820458457);
if(if_guard59293)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58305);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58305))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59295 = alloc_clo(lam58616_fptr, 6);

//setting env list
clo59295[1] = acc;
clo59295[2] = proc;
clo59295[3] = lst;
clo59295[4] = foldr;
clo59295[5] = kont58305;
clo59295[6] = cdr;
void* f5830858458 = encode_clo(clo59295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5830858458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58618 = encode_clo(alloc_clo(lam58618_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58620 = arg_buffer[1];
//reading env and args
void* kont58305 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo59297 = alloc_clo(lam58618_fptr, 7);

//setting env list
clo59297[1] = acc;
clo59297[2] = proc;
clo59297[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo59297[4] = foldr;
clo59297[5] = car;
clo59297[6] = kont58305;
clo59297[7] = cdr;
void* f5830958456 = encode_clo(clo59297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5830958456;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam58621_fptr() // lam58621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58622 = arg_buffer[1];
//reading env and args
void* a5821158471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58310 = (decode_clo(env58622))[3];
//not do dummy comment
void* cons = (decode_clo(env58622))[2];
//not do dummy comment
void* a5820958467 = (decode_clo(env58622))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58310;
arg_buffer[3] = a5820958467;
arg_buffer[4] = a5821158471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58621 = encode_clo(alloc_clo(lam58621_fptr, 0));

void* lam58623_fptr() // lam58623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58624 = arg_buffer[1];
//reading env and args
void* a5821058469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58310 = (decode_clo(env58624))[5];
//not do dummy comment
void* append = (decode_clo(env58624))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58624))[3];
//not do dummy comment
void* cons = (decode_clo(env58624))[2];
//not do dummy comment
void* a5820958467 = (decode_clo(env58624))[1];

//creating new closure instance
void** clo59299 = alloc_clo(lam58621_fptr, 3);

//setting env list
clo59299[1] = a5820958467;
clo59299[2] = cons;
clo59299[3] = kont58310;
void* f5831158470 = encode_clo(clo59299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5831158470;
arg_buffer[3] = a5821058469;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58623 = encode_clo(alloc_clo(lam58623_fptr, 0));

void* lam58625_fptr() // lam58625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58626 = arg_buffer[1];
//reading env and args
void* a5820958467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58626))[6];
//not do dummy comment
void* kont58310 = (decode_clo(env58626))[5];
//not do dummy comment
void* append = (decode_clo(env58626))[4];
//not do dummy comment
void* lst2 = (decode_clo(env58626))[3];
//not do dummy comment
void* lst1 = (decode_clo(env58626))[2];
//not do dummy comment
void* cons = (decode_clo(env58626))[1];

//creating new closure instance
void** clo59301 = alloc_clo(lam58623_fptr, 5);

//setting env list
clo59301[1] = a5820958467;
clo59301[2] = cons;
clo59301[3] = lst2;
clo59301[4] = append;
clo59301[5] = kont58310;
void* f5831258468 = encode_clo(clo59301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5831258468;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58625 = encode_clo(alloc_clo(lam58625_fptr, 0));

void* lam58627_fptr() // lam58627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58628 = arg_buffer[1];
//reading env and args
void* a5820858465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env58628))[7];
//not do dummy comment
void* kont58310 = (decode_clo(env58628))[6];
//not do dummy comment
void* append = (decode_clo(env58628))[5];
//not do dummy comment
void* lst2 = (decode_clo(env58628))[4];
//not do dummy comment
void* cons = (decode_clo(env58628))[3];
//not do dummy comment
void* lst1 = (decode_clo(env58628))[2];
//not do dummy comment
void* car = (decode_clo(env58628))[1];

//if-clause
bool if_guard59302 = is_true(a5820858465);
if(if_guard59302)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58310);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58310))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo59304 = alloc_clo(lam58625_fptr, 6);

//setting env list
clo59304[1] = cons;
clo59304[2] = lst1;
clo59304[3] = lst2;
clo59304[4] = append;
clo59304[5] = kont58310;
clo59304[6] = cdr;
void* f5831358466 = encode_clo(clo59304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5831358466;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam58627 = encode_clo(alloc_clo(lam58627_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58629 = arg_buffer[1];
//reading env and args
void* kont58310 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo59306 = alloc_clo(lam58627_fptr, 7);

//setting env list
clo59306[1] = car;
clo59306[2] = lst1;
clo59306[3] = cons;
clo59306[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo59306[5] = append;
clo59306[6] = kont58310;
clo59306[7] = cdr;
void* f5831458464 = encode_clo(clo59306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5831458464;
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
void* _58630 = arg_buffer[1];
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

void* kont5831558472 = prim_car(lst);
void* lst58473 = prim_cdr(lst);
void* x5821258474 = apply_prim_hash(lst58473);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5831558472);
arg_buffer[2] = x5821258474;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5831558472))[0]);
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
void* _58631 = arg_buffer[1];
//reading env and args
void* kont58317 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5821358475 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58317);
arg_buffer[2] = x5821358475;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58317))[0]);
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
void* _58632 = arg_buffer[1];
//reading env and args
void* kont58318 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5821458476 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58318);
arg_buffer[2] = x5821458476;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58318))[0]);
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
void* _58633 = arg_buffer[1];
//reading env and args
void* kont58319 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5821558477 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58319);
arg_buffer[2] = x5821558477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58319))[0]);
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
void* _58634 = arg_buffer[1];
//reading env and args
void* kont58320 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5821658478 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58320);
arg_buffer[2] = x5821658478;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58320))[0]);
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
void* _58641 = arg_buffer[1];
//reading env and args
void* kont58321 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar59307 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59307, "1", 10);
void* a5821758479 = encode_mpz(mpzvar59307);
mpz_t* mpzvar59308 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59308, "2", 10);
void* a5821858480 = encode_mpz(mpzvar59308);
mpz_t* mpzvar59309 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59309, "3", 10);
void* a5821958481 = encode_mpz(mpzvar59309);
mpz_t* mpzvar59310 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59310, "4", 10);
void* a5822058482 = encode_mpz(mpzvar59310);
mpz_t* mpzvar59311 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59311, "5", 10);
void* a5822158483 = encode_mpz(mpzvar59311);
mpz_t* mpzvar59312 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar59312, "100", 10);
void* a5822258484 = encode_mpz(mpzvar59312);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60);
arg_buffer[2] = kont58321;
arg_buffer[3] = a5821758479;
arg_buffer[4] = a5821858480;
arg_buffer[5] = a5821958481;
arg_buffer[6] = a5822058482;
arg_buffer[7] = a5822158483;
arg_buffer[8] = a5822258484;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam58642_fptr() // lam58642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env58643 = arg_buffer[1];
//reading env and args
void* x5822358486 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58322 = (decode_clo(env58643))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58322);
arg_buffer[2] = x5822358486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58322))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam58642 = encode_clo(alloc_clo(lam58642_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _58644 = arg_buffer[1];
//reading env and args
void* kont58322 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo59314 = alloc_clo(lam58642_fptr, 1);

//setting env list
clo59314[1] = kont58322;
void* f5832358485 = encode_clo(clo59314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5832358485;
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

