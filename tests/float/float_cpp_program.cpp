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
void* _49581 = arg_buffer[1];
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

void* kont4931849418 = prim_car(lst);
void* lst49419 = prim_cdr(lst);
void* x4922849420 = apply_prim__u43(lst49419);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4931849418);
arg_buffer[2] = x4922849420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4931849418))[0]);
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
void* _49582 = arg_buffer[1];
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

void* kont4932049421 = prim_car(lst);
void* lst49422 = prim_cdr(lst);
void* x4922949423 = apply_prim__u45(lst49422);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4932049421);
arg_buffer[2] = x4922949423;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4932049421))[0]);
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
void* _49583 = arg_buffer[1];
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

void* kont4932249424 = prim_car(lst);
void* lst49425 = prim_cdr(lst);
void* x4923049426 = apply_prim__u42(lst49425);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4932249424);
arg_buffer[2] = x4923049426;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4932249424))[0]);
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
void* _49584 = arg_buffer[1];
//reading env and args
void* kont49324 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4923149427 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49324);
arg_buffer[2] = x4923149427;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49324))[0]);
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
void* _49585 = arg_buffer[1];
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

void* kont4932549428 = prim_car(lst);
void* lst49429 = prim_cdr(lst);
void* x4923249430 = apply_prim__u47(lst49429);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4932549428);
arg_buffer[2] = x4923249430;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4932549428))[0]);
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
void* _49586 = arg_buffer[1];
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

void* kont4932749431 = prim_car(lst);
void* lst49432 = prim_cdr(lst);
void* x4923349433 = apply_prim__u61(lst49432);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4932749431);
arg_buffer[2] = x4923349433;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4932749431))[0]);
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
void* _49587 = arg_buffer[1];
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

void* kont4932949434 = prim_car(lst);
void* lst49435 = prim_cdr(lst);
void* x4923449436 = apply_prim__u62(lst49435);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4932949434);
arg_buffer[2] = x4923449436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4932949434))[0]);
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
void* _49588 = arg_buffer[1];
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

void* kont4933149437 = prim_car(lst);
void* lst49438 = prim_cdr(lst);
void* x4923549439 = apply_prim__u60(lst49438);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4933149437);
arg_buffer[2] = x4923549439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4933149437))[0]);
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
void* _49589 = arg_buffer[1];
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

void* kont4933349440 = prim_car(lst);
void* lst49441 = prim_cdr(lst);
void* x4923649442 = apply_prim__u60_u61(lst49441);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4933349440);
arg_buffer[2] = x4923649442;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4933349440))[0]);
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
void* _49590 = arg_buffer[1];
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

void* kont4933549443 = prim_car(lst);
void* lst49444 = prim_cdr(lst);
void* x4923749445 = apply_prim__u62_u61(lst49444);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4933549443);
arg_buffer[2] = x4923749445;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4933549443))[0]);
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
void* _49591 = arg_buffer[1];
//reading env and args
void* kont49337 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4923849446 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49337);
arg_buffer[2] = x4923849446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49337))[0]);
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
void* _49592 = arg_buffer[1];
//reading env and args
void* kont49338 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4923949447 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49338);
arg_buffer[2] = x4923949447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49338))[0]);
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
void* _49593 = arg_buffer[1];
//reading env and args
void* kont49339 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4924049448 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49339);
arg_buffer[2] = x4924049448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49339))[0]);
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
void* _49594 = arg_buffer[1];
//reading env and args
void* kont49340 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4924149449 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49340);
arg_buffer[2] = x4924149449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49340))[0]);
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
void* _49595 = arg_buffer[1];
//reading env and args
void* kont49341 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4924249450 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49341);
arg_buffer[2] = x4924249450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49341))[0]);
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
void* _49596 = arg_buffer[1];
//reading env and args
void* kont49342 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4924349451 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49342);
arg_buffer[2] = x4924349451;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49342))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam49597_fptr() // lam49597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49598 = arg_buffer[1];
//reading env and args
void* a4924649455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49343 = (decode_clo(env49598))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env49598))[2];
//not do dummy comment
void* a4924449452 = (decode_clo(env49598))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont49343;
arg_buffer[3] = a4924449452;
arg_buffer[4] = a4924649455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49597 = encode_clo(alloc_clo(lam49597_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49601 = arg_buffer[1];
//reading env and args
void* kont49343 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50279 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50279, "0", 10);
void* a4924449452 = encode_mpz(mpzvar50279);
mpz_t* mpzvar50280 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50280, "2", 10);
void* a4924549453 = encode_mpz(mpzvar50280);

//creating new closure instance
void** clo50282 = alloc_clo(lam49597_fptr, 3);

//setting env list
clo50282[1] = a4924449452;
clo50282[2] = equal_u63;
clo50282[3] = kont49343;
void* f4934449454 = encode_clo(clo50282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4934449454;
arg_buffer[3] = x;
arg_buffer[4] = a4924549453;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam49602_fptr() // lam49602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49603 = arg_buffer[1];
//reading env and args
void* a4924949459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4924749456 = (decode_clo(env49603))[3];
//not do dummy comment
void* kont49345 = (decode_clo(env49603))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env49603))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont49345;
arg_buffer[3] = a4924749456;
arg_buffer[4] = a4924949459;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49602 = encode_clo(alloc_clo(lam49602_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49606 = arg_buffer[1];
//reading env and args
void* kont49345 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50283 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50283, "1", 10);
void* a4924749456 = encode_mpz(mpzvar50283);
mpz_t* mpzvar50284 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50284, "2", 10);
void* a4924849457 = encode_mpz(mpzvar50284);

//creating new closure instance
void** clo50286 = alloc_clo(lam49602_fptr, 3);

//setting env list
clo50286[1] = equal_u63;
clo50286[2] = kont49345;
clo50286[3] = a4924749456;
void* f4934649458 = encode_clo(clo50286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4934649458;
arg_buffer[3] = x;
arg_buffer[4] = a4924849457;
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
void* _49607 = arg_buffer[1];
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

void* kont4934749460 = prim_car(x);
void* x49461 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4934749460);
arg_buffer[2] = x49461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4934749460))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam49610_fptr() // lam49610 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49611 = arg_buffer[1];
//reading env and args
void* a4925549471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49349 = (decode_clo(env49611))[3];
//not do dummy comment
void* x = (decode_clo(env49611))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49611))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont49349;
arg_buffer[3] = x;
arg_buffer[4] = a4925549471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49610 = encode_clo(alloc_clo(lam49610_fptr, 0));

void* lam49612_fptr() // lam49612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49613 = arg_buffer[1];
//reading env and args
void* a4925349468 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49613))[5];
//not do dummy comment
void* lst = (decode_clo(env49613))[4];
//not do dummy comment
void* kont49349 = (decode_clo(env49613))[3];
//not do dummy comment
void* x = (decode_clo(env49613))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49613))[1];

//if-clause
bool if_guard50287 = is_true(a4925349468);
if(if_guard50287)
{
void* x4925449469 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49349);
arg_buffer[2] = x4925449469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49349))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50289 = alloc_clo(lam49610_fptr, 3);

//setting env list
clo50289[1] = member_u63;
clo50289[2] = x;
clo50289[3] = kont49349;
void* f4935049470 = encode_clo(clo50289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4935049470;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49612 = encode_clo(alloc_clo(lam49612_fptr, 0));

void* lam49614_fptr() // lam49614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49615 = arg_buffer[1];
//reading env and args
void* a4925249466 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49615))[6];
//not do dummy comment
void* lst = (decode_clo(env49615))[5];
//not do dummy comment
void* kont49349 = (decode_clo(env49615))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env49615))[3];
//not do dummy comment
void* x = (decode_clo(env49615))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49615))[1];

//creating new closure instance
void** clo50291 = alloc_clo(lam49612_fptr, 5);

//setting env list
clo50291[1] = member_u63;
clo50291[2] = x;
clo50291[3] = kont49349;
clo50291[4] = lst;
clo50291[5] = cdr;
void* f4935149467 = encode_clo(clo50291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4935149467;
arg_buffer[3] = a4925249466;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49614 = encode_clo(alloc_clo(lam49614_fptr, 0));

void* lam49616_fptr() // lam49616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49617 = arg_buffer[1];
//reading env and args
void* a4925049463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49617))[7];
//not do dummy comment
void* lst = (decode_clo(env49617))[6];
//not do dummy comment
void* kont49349 = (decode_clo(env49617))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env49617))[4];
//not do dummy comment
void* x = (decode_clo(env49617))[3];
//not do dummy comment
void* car = (decode_clo(env49617))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49617))[1];

//if-clause
bool if_guard50292 = is_true(a4925049463);
if(if_guard50292)
{
void* x4925149464 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49349);
arg_buffer[2] = x4925149464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49349))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50294 = alloc_clo(lam49614_fptr, 6);

//setting env list
clo50294[1] = member_u63;
clo50294[2] = x;
clo50294[3] = equal_u63;
clo50294[4] = kont49349;
clo50294[5] = lst;
clo50294[6] = cdr;
void* f4935249465 = encode_clo(clo50294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4935249465;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49616 = encode_clo(alloc_clo(lam49616_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49618 = arg_buffer[1];
//reading env and args
void* kont49349 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50296 = alloc_clo(lam49616_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo50296[1] = member_u63;
clo50296[2] = car;
clo50296[3] = x;
clo50296[4] = equal_u63;
clo50296[5] = kont49349;
clo50296[6] = lst;
clo50296[7] = cdr;
void* f4935349462 = encode_clo(clo50296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4935349462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam49619_fptr() // lam49619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49620 = arg_buffer[1];
//reading env and args
void* a4925949479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4925849477 = (decode_clo(env49620))[4];
//not do dummy comment
void* fun = (decode_clo(env49620))[3];
//not do dummy comment
void* kont49354 = (decode_clo(env49620))[2];
//not do dummy comment
void* foldl = (decode_clo(env49620))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont49354;
arg_buffer[3] = fun;
arg_buffer[4] = a4925849477;
arg_buffer[5] = a4925949479;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49619 = encode_clo(alloc_clo(lam49619_fptr, 0));

void* lam49621_fptr() // lam49621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49622 = arg_buffer[1];
//reading env and args
void* a4925849477 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49622))[5];
//not do dummy comment
void* lst = (decode_clo(env49622))[4];
//not do dummy comment
void* fun = (decode_clo(env49622))[3];
//not do dummy comment
void* kont49354 = (decode_clo(env49622))[2];
//not do dummy comment
void* foldl = (decode_clo(env49622))[1];

//creating new closure instance
void** clo50298 = alloc_clo(lam49619_fptr, 4);

//setting env list
clo50298[1] = foldl;
clo50298[2] = kont49354;
clo50298[3] = fun;
clo50298[4] = a4925849477;
void* f4935549478 = encode_clo(clo50298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4935549478;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49621 = encode_clo(alloc_clo(lam49621_fptr, 0));

void* lam49623_fptr() // lam49623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49624 = arg_buffer[1];
//reading env and args
void* a4925749475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49624))[6];
//not do dummy comment
void* lst = (decode_clo(env49624))[5];
//not do dummy comment
void* fun = (decode_clo(env49624))[4];
//not do dummy comment
void* acc = (decode_clo(env49624))[3];
//not do dummy comment
void* kont49354 = (decode_clo(env49624))[2];
//not do dummy comment
void* foldl = (decode_clo(env49624))[1];

//creating new closure instance
void** clo50300 = alloc_clo(lam49621_fptr, 5);

//setting env list
clo50300[1] = foldl;
clo50300[2] = kont49354;
clo50300[3] = fun;
clo50300[4] = lst;
clo50300[5] = cdr;
void* f4935649476 = encode_clo(clo50300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4935649476;
arg_buffer[3] = a4925749475;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49623 = encode_clo(alloc_clo(lam49623_fptr, 0));

void* lam49625_fptr() // lam49625 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49626 = arg_buffer[1];
//reading env and args
void* a4925649473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49626))[7];
//not do dummy comment
void* lst = (decode_clo(env49626))[6];
//not do dummy comment
void* fun = (decode_clo(env49626))[5];
//not do dummy comment
void* acc = (decode_clo(env49626))[4];
//not do dummy comment
void* kont49354 = (decode_clo(env49626))[3];
//not do dummy comment
void* car = (decode_clo(env49626))[2];
//not do dummy comment
void* foldl = (decode_clo(env49626))[1];

//if-clause
bool if_guard50301 = is_true(a4925649473);
if(if_guard50301)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49354);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49354))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50303 = alloc_clo(lam49623_fptr, 6);

//setting env list
clo50303[1] = foldl;
clo50303[2] = kont49354;
clo50303[3] = acc;
clo50303[4] = fun;
clo50303[5] = lst;
clo50303[6] = cdr;
void* f4935749474 = encode_clo(clo50303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4935749474;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49625 = encode_clo(alloc_clo(lam49625_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49627 = arg_buffer[1];
//reading env and args
void* kont49354 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50305 = alloc_clo(lam49625_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo50305[1] = foldl;
clo50305[2] = car;
clo50305[3] = kont49354;
clo50305[4] = acc;
clo50305[5] = fun;
clo50305[6] = lst;
clo50305[7] = cdr;
void* f4935849472 = encode_clo(clo50305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4935849472;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam49628_fptr() // lam49628 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49629 = arg_buffer[1];
//reading env and args
void* a4926349487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49359 = (decode_clo(env49629))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49629))[2];
//not do dummy comment
void* a4926149483 = (decode_clo(env49629))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont49359;
arg_buffer[3] = a4926149483;
arg_buffer[4] = a4926349487;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49628 = encode_clo(alloc_clo(lam49628_fptr, 0));

void* lam49630_fptr() // lam49630 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49631 = arg_buffer[1];
//reading env and args
void* a4926249485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49359 = (decode_clo(env49631))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49631))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49631))[3];
//not do dummy comment
void* a4926149483 = (decode_clo(env49631))[2];
//not do dummy comment
void* cons = (decode_clo(env49631))[1];

//creating new closure instance
void** clo50307 = alloc_clo(lam49628_fptr, 3);

//setting env list
clo50307[1] = a4926149483;
clo50307[2] = reverse_u45helper;
clo50307[3] = kont49359;
void* f4936049486 = encode_clo(clo50307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4936049486;
arg_buffer[3] = a4926249485;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49630 = encode_clo(alloc_clo(lam49630_fptr, 0));

void* lam49632_fptr() // lam49632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49633 = arg_buffer[1];
//reading env and args
void* a4926149483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49359 = (decode_clo(env49633))[6];
//not do dummy comment
void* lst = (decode_clo(env49633))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49633))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49633))[3];
//not do dummy comment
void* car = (decode_clo(env49633))[2];
//not do dummy comment
void* cons = (decode_clo(env49633))[1];

//creating new closure instance
void** clo50309 = alloc_clo(lam49630_fptr, 5);

//setting env list
clo50309[1] = cons;
clo50309[2] = a4926149483;
clo50309[3] = lst2;
clo50309[4] = reverse_u45helper;
clo50309[5] = kont49359;
void* f4936149484 = encode_clo(clo50309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4936149484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49632 = encode_clo(alloc_clo(lam49632_fptr, 0));

void* lam49634_fptr() // lam49634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49635 = arg_buffer[1];
//reading env and args
void* a4926049481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49635))[7];
//not do dummy comment
void* kont49359 = (decode_clo(env49635))[6];
//not do dummy comment
void* lst = (decode_clo(env49635))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49635))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49635))[3];
//not do dummy comment
void* car = (decode_clo(env49635))[2];
//not do dummy comment
void* cons = (decode_clo(env49635))[1];

//if-clause
bool if_guard50310 = is_true(a4926049481);
if(if_guard50310)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49359);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49359))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50312 = alloc_clo(lam49632_fptr, 6);

//setting env list
clo50312[1] = cons;
clo50312[2] = car;
clo50312[3] = lst2;
clo50312[4] = reverse_u45helper;
clo50312[5] = lst;
clo50312[6] = kont49359;
void* f4936249482 = encode_clo(clo50312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4936249482;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49634 = encode_clo(alloc_clo(lam49634_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49636 = arg_buffer[1];
//reading env and args
void* kont49359 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50314 = alloc_clo(lam49634_fptr, 7);

//setting env list
clo50314[1] = cons;
clo50314[2] = car;
clo50314[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo50314[4] = reverse_u45helper;
clo50314[5] = lst;
clo50314[6] = kont49359;
clo50314[7] = cdr;
void* f4936349480 = encode_clo(clo50314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4936349480;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam49637_fptr() // lam49637 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49638 = arg_buffer[1];
//reading env and args
void* a4926449489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49638))[3];
//not do dummy comment
void* kont49364 = (decode_clo(env49638))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49638))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont49364;
arg_buffer[3] = lst;
arg_buffer[4] = a4926449489;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49637 = encode_clo(alloc_clo(lam49637_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49639 = arg_buffer[1];
//reading env and args
void* kont49364 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50316 = alloc_clo(lam49637_fptr, 3);

//setting env list
clo50316[1] = reverse_u45helper;
clo50316[2] = kont49364;
clo50316[3] = lst;
void* f4936549488 = encode_clo(clo50316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4936549488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam49640_fptr() // lam49640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49641 = arg_buffer[1];
//reading env and args
void* x4926749494 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49366 = (decode_clo(env49641))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49366);
arg_buffer[2] = x4926749494;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49366))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49640 = encode_clo(alloc_clo(lam49640_fptr, 0));

void* lam49642_fptr() // lam49642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49643 = arg_buffer[1];
//reading env and args
void* a4927249503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49366 = (decode_clo(env49643))[4];
//not do dummy comment
void* a4926849496 = (decode_clo(env49643))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49643))[2];
//not do dummy comment
void* a4927049499 = (decode_clo(env49643))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont49366;
arg_buffer[3] = a4926849496;
arg_buffer[4] = a4927049499;
arg_buffer[5] = a4927249503;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49642 = encode_clo(alloc_clo(lam49642_fptr, 0));

void* lam49644_fptr() // lam49644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49645 = arg_buffer[1];
//reading env and args
void* a4927149501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49366 = (decode_clo(env49645))[6];
//not do dummy comment
void* a4926849496 = (decode_clo(env49645))[5];
//not do dummy comment
void* a4927049499 = (decode_clo(env49645))[4];
//not do dummy comment
void* cons = (decode_clo(env49645))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49645))[2];
//not do dummy comment
void* lst2 = (decode_clo(env49645))[1];

//creating new closure instance
void** clo50318 = alloc_clo(lam49642_fptr, 4);

//setting env list
clo50318[1] = a4927049499;
clo50318[2] = take_u45helper;
clo50318[3] = a4926849496;
clo50318[4] = kont49366;
void* f4936849502 = encode_clo(clo50318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4936849502;
arg_buffer[3] = a4927149501;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49644 = encode_clo(alloc_clo(lam49644_fptr, 0));

void* lam49646_fptr() // lam49646 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49647 = arg_buffer[1];
//reading env and args
void* a4927049499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49647))[7];
//not do dummy comment
void* kont49366 = (decode_clo(env49647))[6];
//not do dummy comment
void* a4926849496 = (decode_clo(env49647))[5];
//not do dummy comment
void* car = (decode_clo(env49647))[4];
//not do dummy comment
void* cons = (decode_clo(env49647))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49647))[2];
//not do dummy comment
void* lst2 = (decode_clo(env49647))[1];

//creating new closure instance
void** clo50320 = alloc_clo(lam49644_fptr, 6);

//setting env list
clo50320[1] = lst2;
clo50320[2] = take_u45helper;
clo50320[3] = cons;
clo50320[4] = a4927049499;
clo50320[5] = a4926849496;
clo50320[6] = kont49366;
void* f4936949500 = encode_clo(clo50320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4936949500;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49646 = encode_clo(alloc_clo(lam49646_fptr, 0));

void* lam49649_fptr() // lam49649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49650 = arg_buffer[1];
//reading env and args
void* a4926849496 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49650))[8];
//not do dummy comment
void* kont49366 = (decode_clo(env49650))[7];
//not do dummy comment
void* cons = (decode_clo(env49650))[6];
//not do dummy comment
void* _u45 = (decode_clo(env49650))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env49650))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49650))[3];
//not do dummy comment
void* n = (decode_clo(env49650))[2];
//not do dummy comment
void* car = (decode_clo(env49650))[1];
mpz_t* mpzvar50321 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50321, "1", 10);
void* a4926949497 = encode_mpz(mpzvar50321);

//creating new closure instance
void** clo50323 = alloc_clo(lam49646_fptr, 7);

//setting env list
clo50323[1] = lst2;
clo50323[2] = take_u45helper;
clo50323[3] = cons;
clo50323[4] = car;
clo50323[5] = a4926849496;
clo50323[6] = kont49366;
clo50323[7] = lst;
void* f4937049498 = encode_clo(clo50323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4937049498;
arg_buffer[3] = n;
arg_buffer[4] = a4926949497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49649 = encode_clo(alloc_clo(lam49649_fptr, 0));

void* lam49651_fptr() // lam49651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49652 = arg_buffer[1];
//reading env and args
void* a4926649492 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49652))[10];
//not do dummy comment
void* lst = (decode_clo(env49652))[9];
//not do dummy comment
void* reverse = (decode_clo(env49652))[8];
//not do dummy comment
void* kont49366 = (decode_clo(env49652))[7];
//not do dummy comment
void* cons = (decode_clo(env49652))[6];
//not do dummy comment
void* _u45 = (decode_clo(env49652))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env49652))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49652))[3];
//not do dummy comment
void* n = (decode_clo(env49652))[2];
//not do dummy comment
void* car = (decode_clo(env49652))[1];

//if-clause
bool if_guard50324 = is_true(a4926649492);
if(if_guard50324)
{

//creating new closure instance
void** clo50326 = alloc_clo(lam49640_fptr, 1);

//setting env list
clo50326[1] = kont49366;
void* f4936749493 = encode_clo(clo50326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4936749493;
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
void** clo50328 = alloc_clo(lam49649_fptr, 8);

//setting env list
clo50328[1] = car;
clo50328[2] = n;
clo50328[3] = lst2;
clo50328[4] = take_u45helper;
clo50328[5] = _u45;
clo50328[6] = cons;
clo50328[7] = kont49366;
clo50328[8] = lst;
void* f4937149495 = encode_clo(clo50328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4937149495;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49651 = encode_clo(alloc_clo(lam49651_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49654 = arg_buffer[1];
//reading env and args
void* kont49366 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar50329 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50329, "0", 10);
void* a4926549490 = encode_mpz(mpzvar50329);

//creating new closure instance
void** clo50331 = alloc_clo(lam49651_fptr, 10);

//setting env list
clo50331[1] = car;
clo50331[2] = n;
clo50331[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo50331[4] = take_u45helper;
clo50331[5] = _u45;
clo50331[6] = cons;
clo50331[7] = kont49366;
clo50331[8] = reverse;
clo50331[9] = lst;
clo50331[10] = cdr;
void* f4937249491 = encode_clo(clo50331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4937249491;
arg_buffer[3] = n;
arg_buffer[4] = a4926549490;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam49655_fptr() // lam49655 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49656 = arg_buffer[1];
//reading env and args
void* a4927349505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49656))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env49656))[3];
//not do dummy comment
void* n = (decode_clo(env49656))[2];
//not do dummy comment
void* kont49373 = (decode_clo(env49656))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont49373;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4927349505;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49655 = encode_clo(alloc_clo(lam49655_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49657 = arg_buffer[1];
//reading env and args
void* kont49373 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50333 = alloc_clo(lam49655_fptr, 4);

//setting env list
clo50333[1] = kont49373;
clo50333[2] = n;
clo50333[3] = take_u45helper;
clo50333[4] = lst;
void* f4937449504 = encode_clo(clo50333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4937449504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam49659_fptr() // lam49659 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49660 = arg_buffer[1];
//reading env and args
void* a4927849513 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49375 = (decode_clo(env49660))[3];
//not do dummy comment
void* a4927649509 = (decode_clo(env49660))[2];
//not do dummy comment
void* _u43 = (decode_clo(env49660))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont49375;
arg_buffer[3] = a4927649509;
arg_buffer[4] = a4927849513;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49659 = encode_clo(alloc_clo(lam49659_fptr, 0));

void* lam49661_fptr() // lam49661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49662 = arg_buffer[1];
//reading env and args
void* a4927749511 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49375 = (decode_clo(env49662))[4];
//not do dummy comment
void* length = (decode_clo(env49662))[3];
//not do dummy comment
void* a4927649509 = (decode_clo(env49662))[2];
//not do dummy comment
void* _u43 = (decode_clo(env49662))[1];

//creating new closure instance
void** clo50335 = alloc_clo(lam49659_fptr, 3);

//setting env list
clo50335[1] = _u43;
clo50335[2] = a4927649509;
clo50335[3] = kont49375;
void* f4937649512 = encode_clo(clo50335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4937649512;
arg_buffer[3] = a4927749511;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49661 = encode_clo(alloc_clo(lam49661_fptr, 0));

void* lam49664_fptr() // lam49664 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49665 = arg_buffer[1];
//reading env and args
void* a4927449507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49665))[5];
//not do dummy comment
void* kont49375 = (decode_clo(env49665))[4];
//not do dummy comment
void* lst = (decode_clo(env49665))[3];
//not do dummy comment
void* length = (decode_clo(env49665))[2];
//not do dummy comment
void* _u43 = (decode_clo(env49665))[1];

//if-clause
bool if_guard50336 = is_true(a4927449507);
if(if_guard50336)
{
mpz_t* mpzvar50337 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50337, "0", 10);
void* x4927549508 = encode_mpz(mpzvar50337);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49375);
arg_buffer[2] = x4927549508;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49375))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar50338 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50338, "1", 10);
void* a4927649509 = encode_mpz(mpzvar50338);

//creating new closure instance
void** clo50340 = alloc_clo(lam49661_fptr, 4);

//setting env list
clo50340[1] = _u43;
clo50340[2] = a4927649509;
clo50340[3] = length;
clo50340[4] = kont49375;
void* f4937749510 = encode_clo(clo50340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4937749510;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49664 = encode_clo(alloc_clo(lam49664_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49666 = arg_buffer[1];
//reading env and args
void* kont49375 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50342 = alloc_clo(lam49664_fptr, 5);

//setting env list
clo50342[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo50342[2] = length;
clo50342[3] = lst;
clo50342[4] = kont49375;
clo50342[5] = cdr;
void* f4937849506 = encode_clo(clo50342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4937849506;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam49667_fptr() // lam49667 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49668 = arg_buffer[1];
//reading env and args
void* x4928049517 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49379 = (decode_clo(env49668))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49379);
arg_buffer[2] = x4928049517;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49379))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49667 = encode_clo(alloc_clo(lam49667_fptr, 0));

void* lam49669_fptr() // lam49669 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49670 = arg_buffer[1];
//reading env and args
void* a4928449525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4928249521 = (decode_clo(env49670))[3];
//not do dummy comment
void* kont49379 = (decode_clo(env49670))[2];
//not do dummy comment
void* cons = (decode_clo(env49670))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49379;
arg_buffer[3] = a4928249521;
arg_buffer[4] = a4928449525;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49669 = encode_clo(alloc_clo(lam49669_fptr, 0));

void* lam49671_fptr() // lam49671 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49672 = arg_buffer[1];
//reading env and args
void* a4928349523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4928249521 = (decode_clo(env49672))[5];
//not do dummy comment
void* proc = (decode_clo(env49672))[4];
//not do dummy comment
void* cons = (decode_clo(env49672))[3];
//not do dummy comment
void* map = (decode_clo(env49672))[2];
//not do dummy comment
void* kont49379 = (decode_clo(env49672))[1];

//creating new closure instance
void** clo50344 = alloc_clo(lam49669_fptr, 3);

//setting env list
clo50344[1] = cons;
clo50344[2] = kont49379;
clo50344[3] = a4928249521;
void* f4938149524 = encode_clo(clo50344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4938149524;
arg_buffer[3] = proc;
arg_buffer[4] = a4928349523;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49671 = encode_clo(alloc_clo(lam49671_fptr, 0));

void* lam49673_fptr() // lam49673 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49674 = arg_buffer[1];
//reading env and args
void* a4928249521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49674))[6];
//not do dummy comment
void* lst = (decode_clo(env49674))[5];
//not do dummy comment
void* proc = (decode_clo(env49674))[4];
//not do dummy comment
void* cons = (decode_clo(env49674))[3];
//not do dummy comment
void* map = (decode_clo(env49674))[2];
//not do dummy comment
void* kont49379 = (decode_clo(env49674))[1];

//creating new closure instance
void** clo50346 = alloc_clo(lam49671_fptr, 5);

//setting env list
clo50346[1] = kont49379;
clo50346[2] = map;
clo50346[3] = cons;
clo50346[4] = proc;
clo50346[5] = a4928249521;
void* f4938249522 = encode_clo(clo50346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4938249522;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49673 = encode_clo(alloc_clo(lam49673_fptr, 0));

void* lam49675_fptr() // lam49675 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49676 = arg_buffer[1];
//reading env and args
void* a4928149519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49676))[6];
//not do dummy comment
void* lst = (decode_clo(env49676))[5];
//not do dummy comment
void* proc = (decode_clo(env49676))[4];
//not do dummy comment
void* cons = (decode_clo(env49676))[3];
//not do dummy comment
void* map = (decode_clo(env49676))[2];
//not do dummy comment
void* kont49379 = (decode_clo(env49676))[1];

//creating new closure instance
void** clo50348 = alloc_clo(lam49673_fptr, 6);

//setting env list
clo50348[1] = kont49379;
clo50348[2] = map;
clo50348[3] = cons;
clo50348[4] = proc;
clo50348[5] = lst;
clo50348[6] = cdr;
void* f4938349520 = encode_clo(clo50348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4938349520;
arg_buffer[3] = a4928149519;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49675 = encode_clo(alloc_clo(lam49675_fptr, 0));

void* lam49677_fptr() // lam49677 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49678 = arg_buffer[1];
//reading env and args
void* a4927949515 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49678))[8];
//not do dummy comment
void* proc = (decode_clo(env49678))[7];
//not do dummy comment
void* car = (decode_clo(env49678))[6];
//not do dummy comment
void* cons = (decode_clo(env49678))[5];
//not do dummy comment
void* list = (decode_clo(env49678))[4];
//not do dummy comment
void* cdr = (decode_clo(env49678))[3];
//not do dummy comment
void* map = (decode_clo(env49678))[2];
//not do dummy comment
void* kont49379 = (decode_clo(env49678))[1];

//if-clause
bool if_guard50349 = is_true(a4927949515);
if(if_guard50349)
{

//creating new closure instance
void** clo50351 = alloc_clo(lam49667_fptr, 1);

//setting env list
clo50351[1] = kont49379;
void* f4938049516 = encode_clo(clo50351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4938049516;
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
void** clo50353 = alloc_clo(lam49675_fptr, 6);

//setting env list
clo50353[1] = kont49379;
clo50353[2] = map;
clo50353[3] = cons;
clo50353[4] = proc;
clo50353[5] = lst;
clo50353[6] = cdr;
void* f4938449518 = encode_clo(clo50353);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4938449518;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49677 = encode_clo(alloc_clo(lam49677_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49679 = arg_buffer[1];
//reading env and args
void* kont49379 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50355 = alloc_clo(lam49677_fptr, 8);

//setting env list
clo50355[1] = kont49379;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo50355[2] = map;
clo50355[3] = cdr;
clo50355[4] = list;
clo50355[5] = cons;
clo50355[6] = car;
clo50355[7] = proc;
clo50355[8] = lst;
void* f4938549514 = encode_clo(clo50355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4938549514;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam49680_fptr() // lam49680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49681 = arg_buffer[1];
//reading env and args
void* x4928649529 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49386 = (decode_clo(env49681))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49386);
arg_buffer[2] = x4928649529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49386))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49680 = encode_clo(alloc_clo(lam49680_fptr, 0));

void* lam49682_fptr() // lam49682 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49683 = arg_buffer[1];
//reading env and args
void* a4929149539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4928949535 = (decode_clo(env49683))[3];
//not do dummy comment
void* kont49386 = (decode_clo(env49683))[2];
//not do dummy comment
void* cons = (decode_clo(env49683))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49386;
arg_buffer[3] = a4928949535;
arg_buffer[4] = a4929149539;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49682 = encode_clo(alloc_clo(lam49682_fptr, 0));

void* lam49684_fptr() // lam49684 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49685 = arg_buffer[1];
//reading env and args
void* a4929049537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4928949535 = (decode_clo(env49685))[5];
//not do dummy comment
void* op = (decode_clo(env49685))[4];
//not do dummy comment
void* kont49386 = (decode_clo(env49685))[3];
//not do dummy comment
void* filter = (decode_clo(env49685))[2];
//not do dummy comment
void* cons = (decode_clo(env49685))[1];

//creating new closure instance
void** clo50357 = alloc_clo(lam49682_fptr, 3);

//setting env list
clo50357[1] = cons;
clo50357[2] = kont49386;
clo50357[3] = a4928949535;
void* f4938849538 = encode_clo(clo50357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4938849538;
arg_buffer[3] = op;
arg_buffer[4] = a4929049537;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49684 = encode_clo(alloc_clo(lam49684_fptr, 0));

void* lam49686_fptr() // lam49686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49687 = arg_buffer[1];
//reading env and args
void* a4928949535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49687))[6];
//not do dummy comment
void* lst = (decode_clo(env49687))[5];
//not do dummy comment
void* op = (decode_clo(env49687))[4];
//not do dummy comment
void* kont49386 = (decode_clo(env49687))[3];
//not do dummy comment
void* filter = (decode_clo(env49687))[2];
//not do dummy comment
void* cons = (decode_clo(env49687))[1];

//creating new closure instance
void** clo50359 = alloc_clo(lam49684_fptr, 5);

//setting env list
clo50359[1] = cons;
clo50359[2] = filter;
clo50359[3] = kont49386;
clo50359[4] = op;
clo50359[5] = a4928949535;
void* f4938949536 = encode_clo(clo50359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4938949536;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49686 = encode_clo(alloc_clo(lam49686_fptr, 0));

void* lam49688_fptr() // lam49688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49689 = arg_buffer[1];
//reading env and args
void* a4929249541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env49689))[3];
//not do dummy comment
void* kont49386 = (decode_clo(env49689))[2];
//not do dummy comment
void* filter = (decode_clo(env49689))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont49386;
arg_buffer[3] = op;
arg_buffer[4] = a4929249541;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49688 = encode_clo(alloc_clo(lam49688_fptr, 0));

void* lam49690_fptr() // lam49690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49691 = arg_buffer[1];
//reading env and args
void* a4928849533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49691))[7];
//not do dummy comment
void* lst = (decode_clo(env49691))[6];
//not do dummy comment
void* op = (decode_clo(env49691))[5];
//not do dummy comment
void* kont49386 = (decode_clo(env49691))[4];
//not do dummy comment
void* cons = (decode_clo(env49691))[3];
//not do dummy comment
void* filter = (decode_clo(env49691))[2];
//not do dummy comment
void* car = (decode_clo(env49691))[1];

//if-clause
bool if_guard50360 = is_true(a4928849533);
if(if_guard50360)
{

//creating new closure instance
void** clo50362 = alloc_clo(lam49686_fptr, 6);

//setting env list
clo50362[1] = cons;
clo50362[2] = filter;
clo50362[3] = kont49386;
clo50362[4] = op;
clo50362[5] = lst;
clo50362[6] = cdr;
void* f4939049534 = encode_clo(clo50362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4939049534;
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
void** clo50364 = alloc_clo(lam49688_fptr, 3);

//setting env list
clo50364[1] = filter;
clo50364[2] = kont49386;
clo50364[3] = op;
void* f4939149540 = encode_clo(clo50364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4939149540;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49690 = encode_clo(alloc_clo(lam49690_fptr, 0));

void* lam49692_fptr() // lam49692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49693 = arg_buffer[1];
//reading env and args
void* a4928749531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49693))[7];
//not do dummy comment
void* lst = (decode_clo(env49693))[6];
//not do dummy comment
void* op = (decode_clo(env49693))[5];
//not do dummy comment
void* kont49386 = (decode_clo(env49693))[4];
//not do dummy comment
void* cons = (decode_clo(env49693))[3];
//not do dummy comment
void* filter = (decode_clo(env49693))[2];
//not do dummy comment
void* car = (decode_clo(env49693))[1];

//creating new closure instance
void** clo50366 = alloc_clo(lam49690_fptr, 7);

//setting env list
clo50366[1] = car;
clo50366[2] = filter;
clo50366[3] = cons;
clo50366[4] = kont49386;
clo50366[5] = op;
clo50366[6] = lst;
clo50366[7] = cdr;
void* f4939249532 = encode_clo(clo50366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4939249532;
arg_buffer[3] = a4928749531;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49692 = encode_clo(alloc_clo(lam49692_fptr, 0));

void* lam49694_fptr() // lam49694 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49695 = arg_buffer[1];
//reading env and args
void* a4928549527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49695))[8];
//not do dummy comment
void* op = (decode_clo(env49695))[7];
//not do dummy comment
void* kont49386 = (decode_clo(env49695))[6];
//not do dummy comment
void* cons = (decode_clo(env49695))[5];
//not do dummy comment
void* list = (decode_clo(env49695))[4];
//not do dummy comment
void* cdr = (decode_clo(env49695))[3];
//not do dummy comment
void* filter = (decode_clo(env49695))[2];
//not do dummy comment
void* car = (decode_clo(env49695))[1];

//if-clause
bool if_guard50367 = is_true(a4928549527);
if(if_guard50367)
{

//creating new closure instance
void** clo50369 = alloc_clo(lam49680_fptr, 1);

//setting env list
clo50369[1] = kont49386;
void* f4938749528 = encode_clo(clo50369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4938749528;
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
void** clo50371 = alloc_clo(lam49692_fptr, 7);

//setting env list
clo50371[1] = car;
clo50371[2] = filter;
clo50371[3] = cons;
clo50371[4] = kont49386;
clo50371[5] = op;
clo50371[6] = lst;
clo50371[7] = cdr;
void* f4939349530 = encode_clo(clo50371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4939349530;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49694 = encode_clo(alloc_clo(lam49694_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49696 = arg_buffer[1];
//reading env and args
void* kont49386 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50373 = alloc_clo(lam49694_fptr, 8);

//setting env list
clo50373[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo50373[2] = filter;
clo50373[3] = cdr;
clo50373[4] = list;
clo50373[5] = cons;
clo50373[6] = kont49386;
clo50373[7] = op;
clo50373[8] = lst;
void* f4939449526 = encode_clo(clo50373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4939449526;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam49697_fptr() // lam49697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49698 = arg_buffer[1];
//reading env and args
void* a4929749549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env49698))[3];
//not do dummy comment
void* kont49395 = (decode_clo(env49698))[2];
//not do dummy comment
void* a4929549546 = (decode_clo(env49698))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont49395;
arg_buffer[3] = a4929549546;
arg_buffer[4] = a4929749549;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49697 = encode_clo(alloc_clo(lam49697_fptr, 0));

void* lam49700_fptr() // lam49700 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49701 = arg_buffer[1];
//reading env and args
void* a4929549546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env49701))[4];
//not do dummy comment
void* kont49395 = (decode_clo(env49701))[3];
//not do dummy comment
void* n = (decode_clo(env49701))[2];
//not do dummy comment
void* _u45 = (decode_clo(env49701))[1];
mpz_t* mpzvar50374 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50374, "1", 10);
void* a4929649547 = encode_mpz(mpzvar50374);

//creating new closure instance
void** clo50376 = alloc_clo(lam49697_fptr, 3);

//setting env list
clo50376[1] = a4929549546;
clo50376[2] = kont49395;
clo50376[3] = drop;
void* f4939649548 = encode_clo(clo50376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4939649548;
arg_buffer[3] = n;
arg_buffer[4] = a4929649547;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49700 = encode_clo(alloc_clo(lam49700_fptr, 0));

void* lam49702_fptr() // lam49702 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49703 = arg_buffer[1];
//reading env and args
void* a4929449544 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49703))[6];
//not do dummy comment
void* kont49395 = (decode_clo(env49703))[5];
//not do dummy comment
void* n = (decode_clo(env49703))[4];
//not do dummy comment
void* _u45 = (decode_clo(env49703))[3];
//not do dummy comment
void* lst = (decode_clo(env49703))[2];
//not do dummy comment
void* drop = (decode_clo(env49703))[1];

//if-clause
bool if_guard50377 = is_true(a4929449544);
if(if_guard50377)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49395);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49395))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50379 = alloc_clo(lam49700_fptr, 4);

//setting env list
clo50379[1] = _u45;
clo50379[2] = n;
clo50379[3] = kont49395;
clo50379[4] = drop;
void* f4939749545 = encode_clo(clo50379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4939749545;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49702 = encode_clo(alloc_clo(lam49702_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49705 = arg_buffer[1];
//reading env and args
void* kont49395 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar50380 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50380, "0", 10);
void* a4929349542 = encode_mpz(mpzvar50380);

//creating new closure instance
void** clo50382 = alloc_clo(lam49702_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo50382[1] = drop;
clo50382[2] = lst;
clo50382[3] = _u45;
clo50382[4] = n;
clo50382[5] = kont49395;
clo50382[6] = cdr;
void* f4939849543 = encode_clo(clo50382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4939849543;
arg_buffer[3] = n;
arg_buffer[4] = a4929349542;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam49706_fptr() // lam49706 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49707 = arg_buffer[1];
//reading env and args
void* a4930149557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4929949553 = (decode_clo(env49707))[3];
//not do dummy comment
void* kont49399 = (decode_clo(env49707))[2];
//not do dummy comment
void* proc = (decode_clo(env49707))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont49399;
arg_buffer[3] = a4929949553;
arg_buffer[4] = a4930149557;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49706 = encode_clo(alloc_clo(lam49706_fptr, 0));

void* lam49708_fptr() // lam49708 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49709 = arg_buffer[1];
//reading env and args
void* a4930049555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4929949553 = (decode_clo(env49709))[5];
//not do dummy comment
void* foldr = (decode_clo(env49709))[4];
//not do dummy comment
void* kont49399 = (decode_clo(env49709))[3];
//not do dummy comment
void* proc = (decode_clo(env49709))[2];
//not do dummy comment
void* acc = (decode_clo(env49709))[1];

//creating new closure instance
void** clo50384 = alloc_clo(lam49706_fptr, 3);

//setting env list
clo50384[1] = proc;
clo50384[2] = kont49399;
clo50384[3] = a4929949553;
void* f4940049556 = encode_clo(clo50384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4940049556;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4930049555;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49708 = encode_clo(alloc_clo(lam49708_fptr, 0));

void* lam49710_fptr() // lam49710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49711 = arg_buffer[1];
//reading env and args
void* a4929949553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49711))[6];
//not do dummy comment
void* kont49399 = (decode_clo(env49711))[5];
//not do dummy comment
void* foldr = (decode_clo(env49711))[4];
//not do dummy comment
void* lst = (decode_clo(env49711))[3];
//not do dummy comment
void* proc = (decode_clo(env49711))[2];
//not do dummy comment
void* acc = (decode_clo(env49711))[1];

//creating new closure instance
void** clo50386 = alloc_clo(lam49708_fptr, 5);

//setting env list
clo50386[1] = acc;
clo50386[2] = proc;
clo50386[3] = kont49399;
clo50386[4] = foldr;
clo50386[5] = a4929949553;
void* f4940149554 = encode_clo(clo50386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4940149554;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49710 = encode_clo(alloc_clo(lam49710_fptr, 0));

void* lam49712_fptr() // lam49712 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49713 = arg_buffer[1];
//reading env and args
void* a4929849551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49713))[7];
//not do dummy comment
void* kont49399 = (decode_clo(env49713))[6];
//not do dummy comment
void* car = (decode_clo(env49713))[5];
//not do dummy comment
void* foldr = (decode_clo(env49713))[4];
//not do dummy comment
void* lst = (decode_clo(env49713))[3];
//not do dummy comment
void* proc = (decode_clo(env49713))[2];
//not do dummy comment
void* acc = (decode_clo(env49713))[1];

//if-clause
bool if_guard50387 = is_true(a4929849551);
if(if_guard50387)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49399);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49399))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50389 = alloc_clo(lam49710_fptr, 6);

//setting env list
clo50389[1] = acc;
clo50389[2] = proc;
clo50389[3] = lst;
clo50389[4] = foldr;
clo50389[5] = kont49399;
clo50389[6] = cdr;
void* f4940249552 = encode_clo(clo50389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4940249552;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49712 = encode_clo(alloc_clo(lam49712_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49714 = arg_buffer[1];
//reading env and args
void* kont49399 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50391 = alloc_clo(lam49712_fptr, 7);

//setting env list
clo50391[1] = acc;
clo50391[2] = proc;
clo50391[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo50391[4] = foldr;
clo50391[5] = car;
clo50391[6] = kont49399;
clo50391[7] = cdr;
void* f4940349550 = encode_clo(clo50391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4940349550;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam49715_fptr() // lam49715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49716 = arg_buffer[1];
//reading env and args
void* a4930549565 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4930349561 = (decode_clo(env49716))[3];
//not do dummy comment
void* cons = (decode_clo(env49716))[2];
//not do dummy comment
void* kont49404 = (decode_clo(env49716))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49404;
arg_buffer[3] = a4930349561;
arg_buffer[4] = a4930549565;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49715 = encode_clo(alloc_clo(lam49715_fptr, 0));

void* lam49717_fptr() // lam49717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49718 = arg_buffer[1];
//reading env and args
void* a4930449563 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env49718))[5];
//not do dummy comment
void* a4930349561 = (decode_clo(env49718))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49718))[3];
//not do dummy comment
void* cons = (decode_clo(env49718))[2];
//not do dummy comment
void* kont49404 = (decode_clo(env49718))[1];

//creating new closure instance
void** clo50393 = alloc_clo(lam49715_fptr, 3);

//setting env list
clo50393[1] = kont49404;
clo50393[2] = cons;
clo50393[3] = a4930349561;
void* f4940549564 = encode_clo(clo50393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4940549564;
arg_buffer[3] = a4930449563;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49717 = encode_clo(alloc_clo(lam49717_fptr, 0));

void* lam49719_fptr() // lam49719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49720 = arg_buffer[1];
//reading env and args
void* a4930349561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49720))[6];
//not do dummy comment
void* append = (decode_clo(env49720))[5];
//not do dummy comment
void* lst2 = (decode_clo(env49720))[4];
//not do dummy comment
void* lst1 = (decode_clo(env49720))[3];
//not do dummy comment
void* cons = (decode_clo(env49720))[2];
//not do dummy comment
void* kont49404 = (decode_clo(env49720))[1];

//creating new closure instance
void** clo50395 = alloc_clo(lam49717_fptr, 5);

//setting env list
clo50395[1] = kont49404;
clo50395[2] = cons;
clo50395[3] = lst2;
clo50395[4] = a4930349561;
clo50395[5] = append;
void* f4940649562 = encode_clo(clo50395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4940649562;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49719 = encode_clo(alloc_clo(lam49719_fptr, 0));

void* lam49721_fptr() // lam49721 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49722 = arg_buffer[1];
//reading env and args
void* a4930249559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49722))[7];
//not do dummy comment
void* append = (decode_clo(env49722))[6];
//not do dummy comment
void* lst2 = (decode_clo(env49722))[5];
//not do dummy comment
void* lst1 = (decode_clo(env49722))[4];
//not do dummy comment
void* car = (decode_clo(env49722))[3];
//not do dummy comment
void* cons = (decode_clo(env49722))[2];
//not do dummy comment
void* kont49404 = (decode_clo(env49722))[1];

//if-clause
bool if_guard50396 = is_true(a4930249559);
if(if_guard50396)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49404);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49404))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50398 = alloc_clo(lam49719_fptr, 6);

//setting env list
clo50398[1] = kont49404;
clo50398[2] = cons;
clo50398[3] = lst1;
clo50398[4] = lst2;
clo50398[5] = append;
clo50398[6] = cdr;
void* f4940749560 = encode_clo(clo50398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4940749560;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49721 = encode_clo(alloc_clo(lam49721_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49723 = arg_buffer[1];
//reading env and args
void* kont49404 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50400 = alloc_clo(lam49721_fptr, 7);

//setting env list
clo50400[1] = kont49404;
clo50400[2] = cons;
clo50400[3] = car;
clo50400[4] = lst1;
clo50400[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo50400[6] = append;
clo50400[7] = cdr;
void* f4940849558 = encode_clo(clo50400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4940849558;
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
void* _49724 = arg_buffer[1];
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

void* kont4940949566 = prim_car(lst);
void* lst49567 = prim_cdr(lst);
void* x4930649568 = apply_prim_hash(lst49567);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4940949566);
arg_buffer[2] = x4930649568;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4940949566))[0]);
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
void* _49725 = arg_buffer[1];
//reading env and args
void* kont49411 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4930749569 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49411);
arg_buffer[2] = x4930749569;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49411))[0]);
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
void* _49726 = arg_buffer[1];
//reading env and args
void* kont49412 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4930849570 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49412);
arg_buffer[2] = x4930849570;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49412))[0]);
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
void* _49727 = arg_buffer[1];
//reading env and args
void* kont49413 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4930949571 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49413);
arg_buffer[2] = x4930949571;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49413))[0]);
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
void* _49728 = arg_buffer[1];
//reading env and args
void* kont49414 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4931049572 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49414);
arg_buffer[2] = x4931049572;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49414))[0]);
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
void* _49735 = arg_buffer[1];
//reading env and args
void* kont49415 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar50401 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar50401, "10.3", 10);
void* a4931149573 = encode_mpf(mpfvar50401);
mpf_t* mpfvar50402 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar50402, "2.4", 10);
void* a4931249574 = encode_mpf(mpfvar50402);
mpz_t* mpzvar50403 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50403, "3", 10);
void* a4931349575 = encode_mpz(mpzvar50403);
mpf_t* mpfvar50404 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar50404, "4.5", 10);
void* a4931449576 = encode_mpf(mpfvar50404);
mpz_t* mpzvar50405 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50405, "5", 10);
void* a4931549577 = encode_mpz(mpzvar50405);
mpf_t* mpfvar50406 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar50406, "6.7", 10);
void* a4931649578 = encode_mpf(mpfvar50406);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont49415;
arg_buffer[3] = a4931149573;
arg_buffer[4] = a4931249574;
arg_buffer[5] = a4931349575;
arg_buffer[6] = a4931449576;
arg_buffer[7] = a4931549577;
arg_buffer[8] = a4931649578;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam49736_fptr() // lam49736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49737 = arg_buffer[1];
//reading env and args
void* x4931749580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49416 = (decode_clo(env49737))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49416);
arg_buffer[2] = x4931749580;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49416))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49736 = encode_clo(alloc_clo(lam49736_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49738 = arg_buffer[1];
//reading env and args
void* kont49416 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo50408 = alloc_clo(lam49736_fptr, 1);

//setting env list
clo50408[1] = kont49416;
void* f4941749579 = encode_clo(clo50408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4941749579;
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

