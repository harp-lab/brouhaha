#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.h"
using namespace std;

void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7410 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73347366 = prim_car(lst);
void* lst7367 = prim_cdr(lst);
void* x73117368 = apply_prim__u43(lst7367);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73347366);
arg_buffer[2] = x73117368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73347366))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _7411 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73367369 = prim_car(lst);
void* lst7370 = prim_cdr(lst);
void* x73127371 = apply_prim__u45(lst7370);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73367369);
arg_buffer[2] = x73127371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73367369))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _7412 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73387372 = prim_car(lst);
void* lst7373 = prim_cdr(lst);
void* x73137374 = apply_prim__u42(lst7373);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73387372);
arg_buffer[2] = x73137374;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73387372))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void* modulo_fptr() // modulo 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7413 = arg_buffer[1];
//reading env and args
void* kont7340 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x73147375 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7340);
arg_buffer[2] = x73147375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7340))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void* _u61_fptr() // = 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7414 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73417376 = prim_car(lst);
void* lst7377 = prim_cdr(lst);
void* x73157378 = apply_prim__u61(lst7377);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73417376);
arg_buffer[2] = x73157378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73417376))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _7415 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73437379 = prim_car(lst);
void* lst7380 = prim_cdr(lst);
void* x73167381 = apply_prim__u62(lst7380);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73437379);
arg_buffer[2] = x73167381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73437379))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _7416 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73457382 = prim_car(lst);
void* lst7383 = prim_cdr(lst);
void* x73177384 = apply_prim__u60(lst7383);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73457382);
arg_buffer[2] = x73177384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73457382))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _7417 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73477385 = prim_car(lst);
void* lst7386 = prim_cdr(lst);
void* x73187387 = apply_prim__u60_u61(lst7386);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73477385);
arg_buffer[2] = x73187387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73477385))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _7418 = arg_buffer[1];
//building cons cell

void* lst = encode_null();
for(int i = numArgs; i >= 2; i--)
{
lst = prim_cons(arg_buffer[i], lst);

}

void* kont73497388 = prim_car(lst);
void* lst7389 = prim_cdr(lst);
void* x73197390 = apply_prim__u62_u61(lst7389);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73497388);
arg_buffer[2] = x73197390;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73497388))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void* null_u63_fptr() // null? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7419 = arg_buffer[1];
//reading env and args
void* kont7351 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x73207391 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7351);
arg_buffer[2] = x73207391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7351))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void* equal_u63_fptr() // equal? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7420 = arg_buffer[1];
//reading env and args
void* kont7352 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x73217392 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7352);
arg_buffer[2] = x73217392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7352))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void* eq_u63_fptr() // eq? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7421 = arg_buffer[1];
//reading env and args
void* kont7353 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x73227393 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7353);
arg_buffer[2] = x73227393;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7353))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void* cons_fptr() // cons 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7422 = arg_buffer[1];
//reading env and args
void* kont7354 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x73237394 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7354);
arg_buffer[2] = x73237394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7354))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void* car_fptr() // car 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7423 = arg_buffer[1];
//reading env and args
void* kont7355 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x73247395 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7355);
arg_buffer[2] = x73247395;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7355))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7424 = arg_buffer[1];
//reading env and args
void* kont7356 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x73257396 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7356);
arg_buffer[2] = x73257396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7356))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam7425_fptr() // lam7425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7426 = arg_buffer[1];
//reading env and args
void* a73287400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7357 = (decode_clo(env7426))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env7426))[2];
//not do dummy comment
void* a73267397 = (decode_clo(env7426))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont7357;
arg_buffer[3] = a73267397;
arg_buffer[4] = a73287400;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7425 = encode_clo(alloc_clo(lam7425_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7429 = arg_buffer[1];
//reading env and args
void* kont7357 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8041 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8041, "0", 10);;
void* a73267397 = reinterpret_cast<void *>(encode_mpz(mpzvar8041));
mpz_t* mpzvar8042 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8042, "2", 10);;
void* a73277398 = reinterpret_cast<void *>(encode_mpz(mpzvar8042));

//creating new closure instance
void** clo8044 = alloc_clo(lam7425_fptr, 3);

//setting env list
clo8044[1] = a73267397;
clo8044[2] = equal_u63;
clo8044[3] = kont7357;
void* f73587399 = encode_clo(clo8044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f73587399;
arg_buffer[3] = x;
arg_buffer[4] = a73277398;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam7430_fptr() // lam7430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7431 = arg_buffer[1];
//reading env and args
void* a73317404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a73297401 = (decode_clo(env7431))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env7431))[2];
//not do dummy comment
void* kont7359 = (decode_clo(env7431))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont7359;
arg_buffer[3] = a73297401;
arg_buffer[4] = a73317404;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7430 = encode_clo(alloc_clo(lam7430_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7434 = arg_buffer[1];
//reading env and args
void* kont7359 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar8045 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8045, "1", 10);;
void* a73297401 = reinterpret_cast<void *>(encode_mpz(mpzvar8045));
mpz_t* mpzvar8046 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8046, "2", 10);;
void* a73307402 = reinterpret_cast<void *>(encode_mpz(mpzvar8046));

//creating new closure instance
void** clo8048 = alloc_clo(lam7430_fptr, 3);

//setting env list
clo8048[1] = kont7359;
clo8048[2] = equal_u63;
clo8048[3] = a73297401;
void* f73607403 = encode_clo(clo8048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f73607403;
arg_buffer[3] = x;
arg_buffer[4] = a73307402;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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
void* _7435 = arg_buffer[1];
//building cons cell

void* x = encode_null();
for(int i = numArgs; i >= 2; i--)
{
x = prim_cons(arg_buffer[i], x);

}

void* kont73617405 = prim_car(x);
void* x7406 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73617405);
arg_buffer[2] = x7406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73617405))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7437 = arg_buffer[1];
//reading env and args
void* kont7363 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar8049 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar8049, "5", 10);;
void* a73327407 = reinterpret_cast<void *>(encode_mpz(mpzvar8049));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont7363;
arg_buffer[3] = a73327407;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam7438_fptr() // lam7438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env7439 = arg_buffer[1];
//reading env and args
void* x73337409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7364 = (decode_clo(env7439))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7364);
arg_buffer[2] = x73337409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7364))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam7438 = encode_clo(alloc_clo(lam7438_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _7440 = arg_buffer[1];
//reading env and args
void* kont7364 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo8051 = alloc_clo(lam7438_fptr, 1);

//setting env list
clo8051[1] = kont7364;
void* f73657408 = encode_clo(clo8051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f73657408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call))[0]);
//assign buffer size to numArgs
// call next proc using a function pointer
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

