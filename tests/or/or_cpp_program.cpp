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
void* _97627 = arg_buffer[1];
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

void* kont9735797459 = prim_car(lst);
void* lst97460 = prim_cdr(lst);
void* x9726497461 = apply_prim__u43(lst97460);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9735797459);
arg_buffer[2] = x9726497461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9735797459))[0]);
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
void* _97628 = arg_buffer[1];
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

void* kont9735997462 = prim_car(lst);
void* lst97463 = prim_cdr(lst);
void* x9726597464 = apply_prim__u45(lst97463);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9735997462);
arg_buffer[2] = x9726597464;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9735997462))[0]);
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
void* _97629 = arg_buffer[1];
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

void* kont9736197465 = prim_car(lst);
void* lst97466 = prim_cdr(lst);
void* x9726697467 = apply_prim__u42(lst97466);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9736197465);
arg_buffer[2] = x9726697467;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9736197465))[0]);
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
void* _97630 = arg_buffer[1];
//reading env and args
void* kont97363 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9726797468 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97363);
arg_buffer[2] = x9726797468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97363))[0]);
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
void* _97631 = arg_buffer[1];
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

void* kont9736497469 = prim_car(lst);
void* lst97470 = prim_cdr(lst);
void* x9726897471 = apply_prim__u47(lst97470);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9736497469);
arg_buffer[2] = x9726897471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9736497469))[0]);
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
void* _97632 = arg_buffer[1];
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

void* kont9736697472 = prim_car(lst);
void* lst97473 = prim_cdr(lst);
void* x9726997474 = apply_prim__u61(lst97473);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9736697472);
arg_buffer[2] = x9726997474;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9736697472))[0]);
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
void* _97633 = arg_buffer[1];
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

void* kont9736897475 = prim_car(lst);
void* lst97476 = prim_cdr(lst);
void* x9727097477 = apply_prim__u62(lst97476);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9736897475);
arg_buffer[2] = x9727097477;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9736897475))[0]);
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
void* _97634 = arg_buffer[1];
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

void* kont9737097478 = prim_car(lst);
void* lst97479 = prim_cdr(lst);
void* x9727197480 = apply_prim__u60(lst97479);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9737097478);
arg_buffer[2] = x9727197480;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9737097478))[0]);
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
void* _97635 = arg_buffer[1];
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

void* kont9737297481 = prim_car(lst);
void* lst97482 = prim_cdr(lst);
void* x9727297483 = apply_prim__u60_u61(lst97482);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9737297481);
arg_buffer[2] = x9727297483;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9737297481))[0]);
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
void* _97636 = arg_buffer[1];
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

void* kont9737497484 = prim_car(lst);
void* lst97485 = prim_cdr(lst);
void* x9727397486 = apply_prim__u62_u61(lst97485);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9737497484);
arg_buffer[2] = x9727397486;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9737497484))[0]);
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
void* _97637 = arg_buffer[1];
//reading env and args
void* kont97376 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9727497487 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97376);
arg_buffer[2] = x9727497487;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97376))[0]);
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
void* _97638 = arg_buffer[1];
//reading env and args
void* kont97377 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9727597488 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97377);
arg_buffer[2] = x9727597488;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97377))[0]);
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
void* _97639 = arg_buffer[1];
//reading env and args
void* kont97378 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9727697489 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97378);
arg_buffer[2] = x9727697489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97378))[0]);
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
void* _97640 = arg_buffer[1];
//reading env and args
void* kont97379 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9727797490 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97379);
arg_buffer[2] = x9727797490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97379))[0]);
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
void* _97641 = arg_buffer[1];
//reading env and args
void* kont97380 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9727897491 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97380);
arg_buffer[2] = x9727897491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97380))[0]);
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
void* _97642 = arg_buffer[1];
//reading env and args
void* kont97381 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9727997492 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97381);
arg_buffer[2] = x9727997492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97381))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam97643_fptr() // lam97643 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97644 = arg_buffer[1];
//reading env and args
void* a9728297496 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9728097493 = (decode_clo(env97644))[3];
//not do dummy comment
void* kont97382 = (decode_clo(env97644))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env97644))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont97382;
arg_buffer[3] = a9728097493;
arg_buffer[4] = a9728297496;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97643 = encode_clo(alloc_clo(lam97643_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97647 = arg_buffer[1];
//reading env and args
void* kont97382 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar99290 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99290, "0", 10);
void* a9728097493 = encode_mpz(mpzvar99290);
mpz_t* mpzvar99291 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99291, "2", 10);
void* a9728197494 = encode_mpz(mpzvar99291);

//creating new closure instance
void** clo99293 = alloc_clo(lam97643_fptr, 3);

//setting env list
clo99293[1] = equal_u63;
clo99293[2] = kont97382;
clo99293[3] = a9728097493;
void* f9738397495 = encode_clo(clo99293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9738397495;
arg_buffer[3] = x;
arg_buffer[4] = a9728197494;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam97648_fptr() // lam97648 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97649 = arg_buffer[1];
//reading env and args
void* a9728597500 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97384 = (decode_clo(env97649))[3];
//not do dummy comment
void* a9728397497 = (decode_clo(env97649))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env97649))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont97384;
arg_buffer[3] = a9728397497;
arg_buffer[4] = a9728597500;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97648 = encode_clo(alloc_clo(lam97648_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97652 = arg_buffer[1];
//reading env and args
void* kont97384 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar99294 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99294, "1", 10);
void* a9728397497 = encode_mpz(mpzvar99294);
mpz_t* mpzvar99295 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99295, "2", 10);
void* a9728497498 = encode_mpz(mpzvar99295);

//creating new closure instance
void** clo99297 = alloc_clo(lam97648_fptr, 3);

//setting env list
clo99297[1] = equal_u63;
clo99297[2] = a9728397497;
clo99297[3] = kont97384;
void* f9738597499 = encode_clo(clo99297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9738597499;
arg_buffer[3] = x;
arg_buffer[4] = a9728497498;
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
void* _97653 = arg_buffer[1];
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

void* kont9738697501 = prim_car(x);
void* x97502 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9738697501);
arg_buffer[2] = x97502;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9738697501))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam97656_fptr() // lam97656 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97657 = arg_buffer[1];
//reading env and args
void* a9729197512 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97388 = (decode_clo(env97657))[3];
//not do dummy comment
void* x = (decode_clo(env97657))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env97657))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont97388;
arg_buffer[3] = x;
arg_buffer[4] = a9729197512;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97656 = encode_clo(alloc_clo(lam97656_fptr, 0));

void* lam97658_fptr() // lam97658 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97659 = arg_buffer[1];
//reading env and args
void* a9728997509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97659))[5];
//not do dummy comment
void* lst = (decode_clo(env97659))[4];
//not do dummy comment
void* kont97388 = (decode_clo(env97659))[3];
//not do dummy comment
void* x = (decode_clo(env97659))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env97659))[1];

//if-clause
bool if_guard99298 = is_true(a9728997509);
if(if_guard99298)
{
void* x9729097510 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97388);
arg_buffer[2] = x9729097510;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97388))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo99300 = alloc_clo(lam97656_fptr, 3);

//setting env list
clo99300[1] = member_u63;
clo99300[2] = x;
clo99300[3] = kont97388;
void* f9738997511 = encode_clo(clo99300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9738997511;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97658 = encode_clo(alloc_clo(lam97658_fptr, 0));

void* lam97660_fptr() // lam97660 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97661 = arg_buffer[1];
//reading env and args
void* a9728897507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97661))[6];
//not do dummy comment
void* lst = (decode_clo(env97661))[5];
//not do dummy comment
void* kont97388 = (decode_clo(env97661))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env97661))[3];
//not do dummy comment
void* x = (decode_clo(env97661))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env97661))[1];

//creating new closure instance
void** clo99302 = alloc_clo(lam97658_fptr, 5);

//setting env list
clo99302[1] = member_u63;
clo99302[2] = x;
clo99302[3] = kont97388;
clo99302[4] = lst;
clo99302[5] = cdr;
void* f9739097508 = encode_clo(clo99302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9739097508;
arg_buffer[3] = a9728897507;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97660 = encode_clo(alloc_clo(lam97660_fptr, 0));

void* lam97662_fptr() // lam97662 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97663 = arg_buffer[1];
//reading env and args
void* a9728697504 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97663))[7];
//not do dummy comment
void* lst = (decode_clo(env97663))[6];
//not do dummy comment
void* kont97388 = (decode_clo(env97663))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env97663))[4];
//not do dummy comment
void* x = (decode_clo(env97663))[3];
//not do dummy comment
void* car = (decode_clo(env97663))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env97663))[1];

//if-clause
bool if_guard99303 = is_true(a9728697504);
if(if_guard99303)
{
void* x9728797505 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97388);
arg_buffer[2] = x9728797505;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97388))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo99305 = alloc_clo(lam97660_fptr, 6);

//setting env list
clo99305[1] = member_u63;
clo99305[2] = x;
clo99305[3] = equal_u63;
clo99305[4] = kont97388;
clo99305[5] = lst;
clo99305[6] = cdr;
void* f9739197506 = encode_clo(clo99305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9739197506;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97662 = encode_clo(alloc_clo(lam97662_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97664 = arg_buffer[1];
//reading env and args
void* kont97388 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo99307 = alloc_clo(lam97662_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo99307[1] = member_u63;
clo99307[2] = car;
clo99307[3] = x;
clo99307[4] = equal_u63;
clo99307[5] = kont97388;
clo99307[6] = lst;
clo99307[7] = cdr;
void* f9739297503 = encode_clo(clo99307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9739297503;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam97665_fptr() // lam97665 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97666 = arg_buffer[1];
//reading env and args
void* a9729597520 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9729497518 = (decode_clo(env97666))[4];
//not do dummy comment
void* fun = (decode_clo(env97666))[3];
//not do dummy comment
void* kont97393 = (decode_clo(env97666))[2];
//not do dummy comment
void* foldl = (decode_clo(env97666))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont97393;
arg_buffer[3] = fun;
arg_buffer[4] = a9729497518;
arg_buffer[5] = a9729597520;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97665 = encode_clo(alloc_clo(lam97665_fptr, 0));

void* lam97667_fptr() // lam97667 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97668 = arg_buffer[1];
//reading env and args
void* a9729497518 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97668))[5];
//not do dummy comment
void* lst = (decode_clo(env97668))[4];
//not do dummy comment
void* fun = (decode_clo(env97668))[3];
//not do dummy comment
void* kont97393 = (decode_clo(env97668))[2];
//not do dummy comment
void* foldl = (decode_clo(env97668))[1];

//creating new closure instance
void** clo99309 = alloc_clo(lam97665_fptr, 4);

//setting env list
clo99309[1] = foldl;
clo99309[2] = kont97393;
clo99309[3] = fun;
clo99309[4] = a9729497518;
void* f9739497519 = encode_clo(clo99309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9739497519;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97667 = encode_clo(alloc_clo(lam97667_fptr, 0));

void* lam97669_fptr() // lam97669 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97670 = arg_buffer[1];
//reading env and args
void* a9729397516 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97670))[6];
//not do dummy comment
void* lst = (decode_clo(env97670))[5];
//not do dummy comment
void* fun = (decode_clo(env97670))[4];
//not do dummy comment
void* acc = (decode_clo(env97670))[3];
//not do dummy comment
void* kont97393 = (decode_clo(env97670))[2];
//not do dummy comment
void* foldl = (decode_clo(env97670))[1];

//creating new closure instance
void** clo99311 = alloc_clo(lam97667_fptr, 5);

//setting env list
clo99311[1] = foldl;
clo99311[2] = kont97393;
clo99311[3] = fun;
clo99311[4] = lst;
clo99311[5] = cdr;
void* f9739597517 = encode_clo(clo99311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9739597517;
arg_buffer[3] = a9729397516;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97669 = encode_clo(alloc_clo(lam97669_fptr, 0));

void* lam97671_fptr() // lam97671 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97672 = arg_buffer[1];
//reading env and args
void* a9729297514 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97672))[7];
//not do dummy comment
void* lst = (decode_clo(env97672))[6];
//not do dummy comment
void* fun = (decode_clo(env97672))[5];
//not do dummy comment
void* acc = (decode_clo(env97672))[4];
//not do dummy comment
void* kont97393 = (decode_clo(env97672))[3];
//not do dummy comment
void* car = (decode_clo(env97672))[2];
//not do dummy comment
void* foldl = (decode_clo(env97672))[1];

//if-clause
bool if_guard99312 = is_true(a9729297514);
if(if_guard99312)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97393);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97393))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo99314 = alloc_clo(lam97669_fptr, 6);

//setting env list
clo99314[1] = foldl;
clo99314[2] = kont97393;
clo99314[3] = acc;
clo99314[4] = fun;
clo99314[5] = lst;
clo99314[6] = cdr;
void* f9739697515 = encode_clo(clo99314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9739697515;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97671 = encode_clo(alloc_clo(lam97671_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97673 = arg_buffer[1];
//reading env and args
void* kont97393 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo99316 = alloc_clo(lam97671_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo99316[1] = foldl;
clo99316[2] = car;
clo99316[3] = kont97393;
clo99316[4] = acc;
clo99316[5] = fun;
clo99316[6] = lst;
clo99316[7] = cdr;
void* f9739797513 = encode_clo(clo99316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9739797513;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam97674_fptr() // lam97674 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97675 = arg_buffer[1];
//reading env and args
void* a9729997528 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97398 = (decode_clo(env97675))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env97675))[2];
//not do dummy comment
void* a9729797524 = (decode_clo(env97675))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont97398;
arg_buffer[3] = a9729797524;
arg_buffer[4] = a9729997528;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97674 = encode_clo(alloc_clo(lam97674_fptr, 0));

void* lam97676_fptr() // lam97676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97677 = arg_buffer[1];
//reading env and args
void* a9729897526 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97398 = (decode_clo(env97677))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env97677))[4];
//not do dummy comment
void* lst2 = (decode_clo(env97677))[3];
//not do dummy comment
void* cons = (decode_clo(env97677))[2];
//not do dummy comment
void* a9729797524 = (decode_clo(env97677))[1];

//creating new closure instance
void** clo99318 = alloc_clo(lam97674_fptr, 3);

//setting env list
clo99318[1] = a9729797524;
clo99318[2] = reverse_u45helper;
clo99318[3] = kont97398;
void* f9739997527 = encode_clo(clo99318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9739997527;
arg_buffer[3] = a9729897526;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97676 = encode_clo(alloc_clo(lam97676_fptr, 0));

void* lam97678_fptr() // lam97678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97679 = arg_buffer[1];
//reading env and args
void* a9729797524 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97398 = (decode_clo(env97679))[6];
//not do dummy comment
void* lst = (decode_clo(env97679))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env97679))[4];
//not do dummy comment
void* lst2 = (decode_clo(env97679))[3];
//not do dummy comment
void* car = (decode_clo(env97679))[2];
//not do dummy comment
void* cons = (decode_clo(env97679))[1];

//creating new closure instance
void** clo99320 = alloc_clo(lam97676_fptr, 5);

//setting env list
clo99320[1] = a9729797524;
clo99320[2] = cons;
clo99320[3] = lst2;
clo99320[4] = reverse_u45helper;
clo99320[5] = kont97398;
void* f9740097525 = encode_clo(clo99320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9740097525;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97678 = encode_clo(alloc_clo(lam97678_fptr, 0));

void* lam97680_fptr() // lam97680 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97681 = arg_buffer[1];
//reading env and args
void* a9729697522 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97681))[7];
//not do dummy comment
void* kont97398 = (decode_clo(env97681))[6];
//not do dummy comment
void* lst = (decode_clo(env97681))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env97681))[4];
//not do dummy comment
void* lst2 = (decode_clo(env97681))[3];
//not do dummy comment
void* car = (decode_clo(env97681))[2];
//not do dummy comment
void* cons = (decode_clo(env97681))[1];

//if-clause
bool if_guard99321 = is_true(a9729697522);
if(if_guard99321)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97398);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97398))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo99323 = alloc_clo(lam97678_fptr, 6);

//setting env list
clo99323[1] = cons;
clo99323[2] = car;
clo99323[3] = lst2;
clo99323[4] = reverse_u45helper;
clo99323[5] = lst;
clo99323[6] = kont97398;
void* f9740197523 = encode_clo(clo99323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9740197523;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97680 = encode_clo(alloc_clo(lam97680_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97682 = arg_buffer[1];
//reading env and args
void* kont97398 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo99325 = alloc_clo(lam97680_fptr, 7);

//setting env list
clo99325[1] = cons;
clo99325[2] = car;
clo99325[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo99325[4] = reverse_u45helper;
clo99325[5] = lst;
clo99325[6] = kont97398;
clo99325[7] = cdr;
void* f9740297521 = encode_clo(clo99325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9740297521;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam97683_fptr() // lam97683 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97684 = arg_buffer[1];
//reading env and args
void* a9730097530 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env97684))[3];
//not do dummy comment
void* kont97403 = (decode_clo(env97684))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env97684))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont97403;
arg_buffer[3] = lst;
arg_buffer[4] = a9730097530;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97683 = encode_clo(alloc_clo(lam97683_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97685 = arg_buffer[1];
//reading env and args
void* kont97403 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo99327 = alloc_clo(lam97683_fptr, 3);

//setting env list
clo99327[1] = reverse_u45helper;
clo99327[2] = kont97403;
clo99327[3] = lst;
void* f9740497529 = encode_clo(clo99327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9740497529;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam97686_fptr() // lam97686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97687 = arg_buffer[1];
//reading env and args
void* x9730397535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97405 = (decode_clo(env97687))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97405);
arg_buffer[2] = x9730397535;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97405))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97686 = encode_clo(alloc_clo(lam97686_fptr, 0));

void* lam97688_fptr() // lam97688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97689 = arg_buffer[1];
//reading env and args
void* a9730897544 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97405 = (decode_clo(env97689))[4];
//not do dummy comment
void* a9730697540 = (decode_clo(env97689))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env97689))[2];
//not do dummy comment
void* a9730497537 = (decode_clo(env97689))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont97405;
arg_buffer[3] = a9730497537;
arg_buffer[4] = a9730697540;
arg_buffer[5] = a9730897544;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97688 = encode_clo(alloc_clo(lam97688_fptr, 0));

void* lam97690_fptr() // lam97690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97691 = arg_buffer[1];
//reading env and args
void* a9730797542 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97405 = (decode_clo(env97691))[6];
//not do dummy comment
void* cons = (decode_clo(env97691))[5];
//not do dummy comment
void* a9730697540 = (decode_clo(env97691))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env97691))[3];
//not do dummy comment
void* a9730497537 = (decode_clo(env97691))[2];
//not do dummy comment
void* lst2 = (decode_clo(env97691))[1];

//creating new closure instance
void** clo99329 = alloc_clo(lam97688_fptr, 4);

//setting env list
clo99329[1] = a9730497537;
clo99329[2] = take_u45helper;
clo99329[3] = a9730697540;
clo99329[4] = kont97405;
void* f9740797543 = encode_clo(clo99329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9740797543;
arg_buffer[3] = a9730797542;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97690 = encode_clo(alloc_clo(lam97690_fptr, 0));

void* lam97692_fptr() // lam97692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97693 = arg_buffer[1];
//reading env and args
void* a9730697540 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env97693))[7];
//not do dummy comment
void* kont97405 = (decode_clo(env97693))[6];
//not do dummy comment
void* car = (decode_clo(env97693))[5];
//not do dummy comment
void* cons = (decode_clo(env97693))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env97693))[3];
//not do dummy comment
void* a9730497537 = (decode_clo(env97693))[2];
//not do dummy comment
void* lst2 = (decode_clo(env97693))[1];

//creating new closure instance
void** clo99331 = alloc_clo(lam97690_fptr, 6);

//setting env list
clo99331[1] = lst2;
clo99331[2] = a9730497537;
clo99331[3] = take_u45helper;
clo99331[4] = a9730697540;
clo99331[5] = cons;
clo99331[6] = kont97405;
void* f9740897541 = encode_clo(clo99331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9740897541;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97692 = encode_clo(alloc_clo(lam97692_fptr, 0));

void* lam97695_fptr() // lam97695 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97696 = arg_buffer[1];
//reading env and args
void* a9730497537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env97696))[8];
//not do dummy comment
void* kont97405 = (decode_clo(env97696))[7];
//not do dummy comment
void* cons = (decode_clo(env97696))[6];
//not do dummy comment
void* _u45 = (decode_clo(env97696))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env97696))[4];
//not do dummy comment
void* lst2 = (decode_clo(env97696))[3];
//not do dummy comment
void* n = (decode_clo(env97696))[2];
//not do dummy comment
void* car = (decode_clo(env97696))[1];
mpz_t* mpzvar99332 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99332, "1", 10);
void* a9730597538 = encode_mpz(mpzvar99332);

//creating new closure instance
void** clo99334 = alloc_clo(lam97692_fptr, 7);

//setting env list
clo99334[1] = lst2;
clo99334[2] = a9730497537;
clo99334[3] = take_u45helper;
clo99334[4] = cons;
clo99334[5] = car;
clo99334[6] = kont97405;
clo99334[7] = lst;
void* f9740997539 = encode_clo(clo99334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9740997539;
arg_buffer[3] = n;
arg_buffer[4] = a9730597538;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97695 = encode_clo(alloc_clo(lam97695_fptr, 0));

void* lam97697_fptr() // lam97697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97698 = arg_buffer[1];
//reading env and args
void* a9730297533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97698))[10];
//not do dummy comment
void* lst = (decode_clo(env97698))[9];
//not do dummy comment
void* reverse = (decode_clo(env97698))[8];
//not do dummy comment
void* kont97405 = (decode_clo(env97698))[7];
//not do dummy comment
void* cons = (decode_clo(env97698))[6];
//not do dummy comment
void* _u45 = (decode_clo(env97698))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env97698))[4];
//not do dummy comment
void* lst2 = (decode_clo(env97698))[3];
//not do dummy comment
void* n = (decode_clo(env97698))[2];
//not do dummy comment
void* car = (decode_clo(env97698))[1];

//if-clause
bool if_guard99335 = is_true(a9730297533);
if(if_guard99335)
{

//creating new closure instance
void** clo99337 = alloc_clo(lam97686_fptr, 1);

//setting env list
clo99337[1] = kont97405;
void* f9740697534 = encode_clo(clo99337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9740697534;
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
void** clo99339 = alloc_clo(lam97695_fptr, 8);

//setting env list
clo99339[1] = car;
clo99339[2] = n;
clo99339[3] = lst2;
clo99339[4] = take_u45helper;
clo99339[5] = _u45;
clo99339[6] = cons;
clo99339[7] = kont97405;
clo99339[8] = lst;
void* f9741097536 = encode_clo(clo99339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9741097536;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97697 = encode_clo(alloc_clo(lam97697_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97700 = arg_buffer[1];
//reading env and args
void* kont97405 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar99340 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99340, "0", 10);
void* a9730197531 = encode_mpz(mpzvar99340);

//creating new closure instance
void** clo99342 = alloc_clo(lam97697_fptr, 10);

//setting env list
clo99342[1] = car;
clo99342[2] = n;
clo99342[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo99342[4] = take_u45helper;
clo99342[5] = _u45;
clo99342[6] = cons;
clo99342[7] = kont97405;
clo99342[8] = reverse;
clo99342[9] = lst;
clo99342[10] = cdr;
void* f9741197532 = encode_clo(clo99342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9741197532;
arg_buffer[3] = n;
arg_buffer[4] = a9730197531;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam97701_fptr() // lam97701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97702 = arg_buffer[1];
//reading env and args
void* a9730997546 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env97702))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env97702))[3];
//not do dummy comment
void* n = (decode_clo(env97702))[2];
//not do dummy comment
void* kont97412 = (decode_clo(env97702))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont97412;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9730997546;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97701 = encode_clo(alloc_clo(lam97701_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97703 = arg_buffer[1];
//reading env and args
void* kont97412 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo99344 = alloc_clo(lam97701_fptr, 4);

//setting env list
clo99344[1] = kont97412;
clo99344[2] = n;
clo99344[3] = take_u45helper;
clo99344[4] = lst;
void* f9741397545 = encode_clo(clo99344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9741397545;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam97705_fptr() // lam97705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97706 = arg_buffer[1];
//reading env and args
void* a9731497554 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97414 = (decode_clo(env97706))[3];
//not do dummy comment
void* _u43 = (decode_clo(env97706))[2];
//not do dummy comment
void* a9731297550 = (decode_clo(env97706))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont97414;
arg_buffer[3] = a9731297550;
arg_buffer[4] = a9731497554;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97705 = encode_clo(alloc_clo(lam97705_fptr, 0));

void* lam97707_fptr() // lam97707 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97708 = arg_buffer[1];
//reading env and args
void* a9731397552 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97414 = (decode_clo(env97708))[4];
//not do dummy comment
void* length = (decode_clo(env97708))[3];
//not do dummy comment
void* _u43 = (decode_clo(env97708))[2];
//not do dummy comment
void* a9731297550 = (decode_clo(env97708))[1];

//creating new closure instance
void** clo99346 = alloc_clo(lam97705_fptr, 3);

//setting env list
clo99346[1] = a9731297550;
clo99346[2] = _u43;
clo99346[3] = kont97414;
void* f9741597553 = encode_clo(clo99346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9741597553;
arg_buffer[3] = a9731397552;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97707 = encode_clo(alloc_clo(lam97707_fptr, 0));

void* lam97710_fptr() // lam97710 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97711 = arg_buffer[1];
//reading env and args
void* a9731097548 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97711))[5];
//not do dummy comment
void* kont97414 = (decode_clo(env97711))[4];
//not do dummy comment
void* lst = (decode_clo(env97711))[3];
//not do dummy comment
void* length = (decode_clo(env97711))[2];
//not do dummy comment
void* _u43 = (decode_clo(env97711))[1];

//if-clause
bool if_guard99347 = is_true(a9731097548);
if(if_guard99347)
{
mpz_t* mpzvar99348 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99348, "0", 10);
void* x9731197549 = encode_mpz(mpzvar99348);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97414);
arg_buffer[2] = x9731197549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97414))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar99349 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99349, "1", 10);
void* a9731297550 = encode_mpz(mpzvar99349);

//creating new closure instance
void** clo99351 = alloc_clo(lam97707_fptr, 4);

//setting env list
clo99351[1] = a9731297550;
clo99351[2] = _u43;
clo99351[3] = length;
clo99351[4] = kont97414;
void* f9741697551 = encode_clo(clo99351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9741697551;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97710 = encode_clo(alloc_clo(lam97710_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97712 = arg_buffer[1];
//reading env and args
void* kont97414 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo99353 = alloc_clo(lam97710_fptr, 5);

//setting env list
clo99353[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo99353[2] = length;
clo99353[3] = lst;
clo99353[4] = kont97414;
clo99353[5] = cdr;
void* f9741797547 = encode_clo(clo99353);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9741797547;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam97713_fptr() // lam97713 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97714 = arg_buffer[1];
//reading env and args
void* x9731697558 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97418 = (decode_clo(env97714))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97418);
arg_buffer[2] = x9731697558;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97418))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97713 = encode_clo(alloc_clo(lam97713_fptr, 0));

void* lam97715_fptr() // lam97715 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97716 = arg_buffer[1];
//reading env and args
void* a9732097566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env97716))[3];
//not do dummy comment
void* kont97418 = (decode_clo(env97716))[2];
//not do dummy comment
void* a9731897562 = (decode_clo(env97716))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont97418;
arg_buffer[3] = a9731897562;
arg_buffer[4] = a9732097566;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97715 = encode_clo(alloc_clo(lam97715_fptr, 0));

void* lam97717_fptr() // lam97717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97718 = arg_buffer[1];
//reading env and args
void* a9731997564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env97718))[5];
//not do dummy comment
void* cons = (decode_clo(env97718))[4];
//not do dummy comment
void* a9731897562 = (decode_clo(env97718))[3];
//not do dummy comment
void* kont97418 = (decode_clo(env97718))[2];
//not do dummy comment
void* map = (decode_clo(env97718))[1];

//creating new closure instance
void** clo99355 = alloc_clo(lam97715_fptr, 3);

//setting env list
clo99355[1] = a9731897562;
clo99355[2] = kont97418;
clo99355[3] = cons;
void* f9742097565 = encode_clo(clo99355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9742097565;
arg_buffer[3] = proc;
arg_buffer[4] = a9731997564;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97717 = encode_clo(alloc_clo(lam97717_fptr, 0));

void* lam97719_fptr() // lam97719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97720 = arg_buffer[1];
//reading env and args
void* a9731897562 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97720))[6];
//not do dummy comment
void* lst = (decode_clo(env97720))[5];
//not do dummy comment
void* proc = (decode_clo(env97720))[4];
//not do dummy comment
void* cons = (decode_clo(env97720))[3];
//not do dummy comment
void* kont97418 = (decode_clo(env97720))[2];
//not do dummy comment
void* map = (decode_clo(env97720))[1];

//creating new closure instance
void** clo99357 = alloc_clo(lam97717_fptr, 5);

//setting env list
clo99357[1] = map;
clo99357[2] = kont97418;
clo99357[3] = a9731897562;
clo99357[4] = cons;
clo99357[5] = proc;
void* f9742197563 = encode_clo(clo99357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9742197563;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97719 = encode_clo(alloc_clo(lam97719_fptr, 0));

void* lam97721_fptr() // lam97721 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97722 = arg_buffer[1];
//reading env and args
void* a9731797560 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97722))[6];
//not do dummy comment
void* lst = (decode_clo(env97722))[5];
//not do dummy comment
void* proc = (decode_clo(env97722))[4];
//not do dummy comment
void* cons = (decode_clo(env97722))[3];
//not do dummy comment
void* kont97418 = (decode_clo(env97722))[2];
//not do dummy comment
void* map = (decode_clo(env97722))[1];

//creating new closure instance
void** clo99359 = alloc_clo(lam97719_fptr, 6);

//setting env list
clo99359[1] = map;
clo99359[2] = kont97418;
clo99359[3] = cons;
clo99359[4] = proc;
clo99359[5] = lst;
clo99359[6] = cdr;
void* f9742297561 = encode_clo(clo99359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9742297561;
arg_buffer[3] = a9731797560;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97721 = encode_clo(alloc_clo(lam97721_fptr, 0));

void* lam97723_fptr() // lam97723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97724 = arg_buffer[1];
//reading env and args
void* a9731597556 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env97724))[8];
//not do dummy comment
void* proc = (decode_clo(env97724))[7];
//not do dummy comment
void* car = (decode_clo(env97724))[6];
//not do dummy comment
void* cons = (decode_clo(env97724))[5];
//not do dummy comment
void* list = (decode_clo(env97724))[4];
//not do dummy comment
void* cdr = (decode_clo(env97724))[3];
//not do dummy comment
void* kont97418 = (decode_clo(env97724))[2];
//not do dummy comment
void* map = (decode_clo(env97724))[1];

//if-clause
bool if_guard99360 = is_true(a9731597556);
if(if_guard99360)
{

//creating new closure instance
void** clo99362 = alloc_clo(lam97713_fptr, 1);

//setting env list
clo99362[1] = kont97418;
void* f9741997557 = encode_clo(clo99362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9741997557;
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
void** clo99364 = alloc_clo(lam97721_fptr, 6);

//setting env list
clo99364[1] = map;
clo99364[2] = kont97418;
clo99364[3] = cons;
clo99364[4] = proc;
clo99364[5] = lst;
clo99364[6] = cdr;
void* f9742397559 = encode_clo(clo99364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9742397559;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97723 = encode_clo(alloc_clo(lam97723_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97725 = arg_buffer[1];
//reading env and args
void* kont97418 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo99366 = alloc_clo(lam97723_fptr, 8);

//setting env list
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo99366[1] = map;
clo99366[2] = kont97418;
clo99366[3] = cdr;
clo99366[4] = list;
clo99366[5] = cons;
clo99366[6] = car;
clo99366[7] = proc;
clo99366[8] = lst;
void* f9742497555 = encode_clo(clo99366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9742497555;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam97726_fptr() // lam97726 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97727 = arg_buffer[1];
//reading env and args
void* x9732297570 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97425 = (decode_clo(env97727))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97425);
arg_buffer[2] = x9732297570;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97425))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97726 = encode_clo(alloc_clo(lam97726_fptr, 0));

void* lam97728_fptr() // lam97728 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97729 = arg_buffer[1];
//reading env and args
void* a9732797580 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9732597576 = (decode_clo(env97729))[3];
//not do dummy comment
void* kont97425 = (decode_clo(env97729))[2];
//not do dummy comment
void* cons = (decode_clo(env97729))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont97425;
arg_buffer[3] = a9732597576;
arg_buffer[4] = a9732797580;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97728 = encode_clo(alloc_clo(lam97728_fptr, 0));

void* lam97730_fptr() // lam97730 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97731 = arg_buffer[1];
//reading env and args
void* a9732697578 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9732597576 = (decode_clo(env97731))[5];
//not do dummy comment
void* op = (decode_clo(env97731))[4];
//not do dummy comment
void* kont97425 = (decode_clo(env97731))[3];
//not do dummy comment
void* filter = (decode_clo(env97731))[2];
//not do dummy comment
void* cons = (decode_clo(env97731))[1];

//creating new closure instance
void** clo99368 = alloc_clo(lam97728_fptr, 3);

//setting env list
clo99368[1] = cons;
clo99368[2] = kont97425;
clo99368[3] = a9732597576;
void* f9742797579 = encode_clo(clo99368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9742797579;
arg_buffer[3] = op;
arg_buffer[4] = a9732697578;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97730 = encode_clo(alloc_clo(lam97730_fptr, 0));

void* lam97732_fptr() // lam97732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97733 = arg_buffer[1];
//reading env and args
void* a9732597576 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97733))[6];
//not do dummy comment
void* lst = (decode_clo(env97733))[5];
//not do dummy comment
void* op = (decode_clo(env97733))[4];
//not do dummy comment
void* kont97425 = (decode_clo(env97733))[3];
//not do dummy comment
void* filter = (decode_clo(env97733))[2];
//not do dummy comment
void* cons = (decode_clo(env97733))[1];

//creating new closure instance
void** clo99370 = alloc_clo(lam97730_fptr, 5);

//setting env list
clo99370[1] = cons;
clo99370[2] = filter;
clo99370[3] = kont97425;
clo99370[4] = op;
clo99370[5] = a9732597576;
void* f9742897577 = encode_clo(clo99370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9742897577;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97732 = encode_clo(alloc_clo(lam97732_fptr, 0));

void* lam97734_fptr() // lam97734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97735 = arg_buffer[1];
//reading env and args
void* a9732897582 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env97735))[3];
//not do dummy comment
void* kont97425 = (decode_clo(env97735))[2];
//not do dummy comment
void* filter = (decode_clo(env97735))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont97425;
arg_buffer[3] = op;
arg_buffer[4] = a9732897582;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97734 = encode_clo(alloc_clo(lam97734_fptr, 0));

void* lam97736_fptr() // lam97736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97737 = arg_buffer[1];
//reading env and args
void* a9732497574 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97737))[7];
//not do dummy comment
void* lst = (decode_clo(env97737))[6];
//not do dummy comment
void* op = (decode_clo(env97737))[5];
//not do dummy comment
void* kont97425 = (decode_clo(env97737))[4];
//not do dummy comment
void* cons = (decode_clo(env97737))[3];
//not do dummy comment
void* filter = (decode_clo(env97737))[2];
//not do dummy comment
void* car = (decode_clo(env97737))[1];

//if-clause
bool if_guard99371 = is_true(a9732497574);
if(if_guard99371)
{

//creating new closure instance
void** clo99373 = alloc_clo(lam97732_fptr, 6);

//setting env list
clo99373[1] = cons;
clo99373[2] = filter;
clo99373[3] = kont97425;
clo99373[4] = op;
clo99373[5] = lst;
clo99373[6] = cdr;
void* f9742997575 = encode_clo(clo99373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9742997575;
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
void** clo99375 = alloc_clo(lam97734_fptr, 3);

//setting env list
clo99375[1] = filter;
clo99375[2] = kont97425;
clo99375[3] = op;
void* f9743097581 = encode_clo(clo99375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9743097581;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97736 = encode_clo(alloc_clo(lam97736_fptr, 0));

void* lam97738_fptr() // lam97738 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97739 = arg_buffer[1];
//reading env and args
void* a9732397572 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97739))[7];
//not do dummy comment
void* lst = (decode_clo(env97739))[6];
//not do dummy comment
void* op = (decode_clo(env97739))[5];
//not do dummy comment
void* kont97425 = (decode_clo(env97739))[4];
//not do dummy comment
void* cons = (decode_clo(env97739))[3];
//not do dummy comment
void* filter = (decode_clo(env97739))[2];
//not do dummy comment
void* car = (decode_clo(env97739))[1];

//creating new closure instance
void** clo99377 = alloc_clo(lam97736_fptr, 7);

//setting env list
clo99377[1] = car;
clo99377[2] = filter;
clo99377[3] = cons;
clo99377[4] = kont97425;
clo99377[5] = op;
clo99377[6] = lst;
clo99377[7] = cdr;
void* f9743197573 = encode_clo(clo99377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9743197573;
arg_buffer[3] = a9732397572;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97738 = encode_clo(alloc_clo(lam97738_fptr, 0));

void* lam97740_fptr() // lam97740 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97741 = arg_buffer[1];
//reading env and args
void* a9732197568 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env97741))[8];
//not do dummy comment
void* op = (decode_clo(env97741))[7];
//not do dummy comment
void* kont97425 = (decode_clo(env97741))[6];
//not do dummy comment
void* cons = (decode_clo(env97741))[5];
//not do dummy comment
void* list = (decode_clo(env97741))[4];
//not do dummy comment
void* cdr = (decode_clo(env97741))[3];
//not do dummy comment
void* filter = (decode_clo(env97741))[2];
//not do dummy comment
void* car = (decode_clo(env97741))[1];

//if-clause
bool if_guard99378 = is_true(a9732197568);
if(if_guard99378)
{

//creating new closure instance
void** clo99380 = alloc_clo(lam97726_fptr, 1);

//setting env list
clo99380[1] = kont97425;
void* f9742697569 = encode_clo(clo99380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9742697569;
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
void** clo99382 = alloc_clo(lam97738_fptr, 7);

//setting env list
clo99382[1] = car;
clo99382[2] = filter;
clo99382[3] = cons;
clo99382[4] = kont97425;
clo99382[5] = op;
clo99382[6] = lst;
clo99382[7] = cdr;
void* f9743297571 = encode_clo(clo99382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9743297571;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97740 = encode_clo(alloc_clo(lam97740_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97742 = arg_buffer[1];
//reading env and args
void* kont97425 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo99384 = alloc_clo(lam97740_fptr, 8);

//setting env list
clo99384[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo99384[2] = filter;
clo99384[3] = cdr;
clo99384[4] = list;
clo99384[5] = cons;
clo99384[6] = kont97425;
clo99384[7] = op;
clo99384[8] = lst;
void* f9743397567 = encode_clo(clo99384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9743397567;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam97743_fptr() // lam97743 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97744 = arg_buffer[1];
//reading env and args
void* a9733397590 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env97744))[3];
//not do dummy comment
void* kont97434 = (decode_clo(env97744))[2];
//not do dummy comment
void* a9733197587 = (decode_clo(env97744))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont97434;
arg_buffer[3] = a9733197587;
arg_buffer[4] = a9733397590;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97743 = encode_clo(alloc_clo(lam97743_fptr, 0));

void* lam97746_fptr() // lam97746 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97747 = arg_buffer[1];
//reading env and args
void* a9733197587 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env97747))[4];
//not do dummy comment
void* kont97434 = (decode_clo(env97747))[3];
//not do dummy comment
void* n = (decode_clo(env97747))[2];
//not do dummy comment
void* _u45 = (decode_clo(env97747))[1];
mpz_t* mpzvar99385 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99385, "1", 10);
void* a9733297588 = encode_mpz(mpzvar99385);

//creating new closure instance
void** clo99387 = alloc_clo(lam97743_fptr, 3);

//setting env list
clo99387[1] = a9733197587;
clo99387[2] = kont97434;
clo99387[3] = drop;
void* f9743597589 = encode_clo(clo99387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9743597589;
arg_buffer[3] = n;
arg_buffer[4] = a9733297588;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97746 = encode_clo(alloc_clo(lam97746_fptr, 0));

void* lam97748_fptr() // lam97748 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97749 = arg_buffer[1];
//reading env and args
void* a9733097585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97749))[6];
//not do dummy comment
void* kont97434 = (decode_clo(env97749))[5];
//not do dummy comment
void* n = (decode_clo(env97749))[4];
//not do dummy comment
void* _u45 = (decode_clo(env97749))[3];
//not do dummy comment
void* lst = (decode_clo(env97749))[2];
//not do dummy comment
void* drop = (decode_clo(env97749))[1];

//if-clause
bool if_guard99388 = is_true(a9733097585);
if(if_guard99388)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97434);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97434))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo99390 = alloc_clo(lam97746_fptr, 4);

//setting env list
clo99390[1] = _u45;
clo99390[2] = n;
clo99390[3] = kont97434;
clo99390[4] = drop;
void* f9743697586 = encode_clo(clo99390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9743697586;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97748 = encode_clo(alloc_clo(lam97748_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97751 = arg_buffer[1];
//reading env and args
void* kont97434 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar99391 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99391, "0", 10);
void* a9732997583 = encode_mpz(mpzvar99391);

//creating new closure instance
void** clo99393 = alloc_clo(lam97748_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo99393[1] = drop;
clo99393[2] = lst;
clo99393[3] = _u45;
clo99393[4] = n;
clo99393[5] = kont97434;
clo99393[6] = cdr;
void* f9743797584 = encode_clo(clo99393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9743797584;
arg_buffer[3] = n;
arg_buffer[4] = a9732997583;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam97752_fptr() // lam97752 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97753 = arg_buffer[1];
//reading env and args
void* a9733797598 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9733597594 = (decode_clo(env97753))[3];
//not do dummy comment
void* kont97438 = (decode_clo(env97753))[2];
//not do dummy comment
void* proc = (decode_clo(env97753))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont97438;
arg_buffer[3] = a9733597594;
arg_buffer[4] = a9733797598;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97752 = encode_clo(alloc_clo(lam97752_fptr, 0));

void* lam97754_fptr() // lam97754 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97755 = arg_buffer[1];
//reading env and args
void* a9733697596 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env97755))[5];
//not do dummy comment
void* a9733597594 = (decode_clo(env97755))[4];
//not do dummy comment
void* kont97438 = (decode_clo(env97755))[3];
//not do dummy comment
void* proc = (decode_clo(env97755))[2];
//not do dummy comment
void* acc = (decode_clo(env97755))[1];

//creating new closure instance
void** clo99395 = alloc_clo(lam97752_fptr, 3);

//setting env list
clo99395[1] = proc;
clo99395[2] = kont97438;
clo99395[3] = a9733597594;
void* f9743997597 = encode_clo(clo99395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9743997597;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9733697596;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97754 = encode_clo(alloc_clo(lam97754_fptr, 0));

void* lam97756_fptr() // lam97756 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97757 = arg_buffer[1];
//reading env and args
void* a9733597594 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97757))[6];
//not do dummy comment
void* kont97438 = (decode_clo(env97757))[5];
//not do dummy comment
void* foldr = (decode_clo(env97757))[4];
//not do dummy comment
void* lst = (decode_clo(env97757))[3];
//not do dummy comment
void* proc = (decode_clo(env97757))[2];
//not do dummy comment
void* acc = (decode_clo(env97757))[1];

//creating new closure instance
void** clo99397 = alloc_clo(lam97754_fptr, 5);

//setting env list
clo99397[1] = acc;
clo99397[2] = proc;
clo99397[3] = kont97438;
clo99397[4] = a9733597594;
clo99397[5] = foldr;
void* f9744097595 = encode_clo(clo99397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9744097595;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97756 = encode_clo(alloc_clo(lam97756_fptr, 0));

void* lam97758_fptr() // lam97758 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97759 = arg_buffer[1];
//reading env and args
void* a9733497592 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97759))[7];
//not do dummy comment
void* kont97438 = (decode_clo(env97759))[6];
//not do dummy comment
void* car = (decode_clo(env97759))[5];
//not do dummy comment
void* foldr = (decode_clo(env97759))[4];
//not do dummy comment
void* lst = (decode_clo(env97759))[3];
//not do dummy comment
void* proc = (decode_clo(env97759))[2];
//not do dummy comment
void* acc = (decode_clo(env97759))[1];

//if-clause
bool if_guard99398 = is_true(a9733497592);
if(if_guard99398)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97438);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97438))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo99400 = alloc_clo(lam97756_fptr, 6);

//setting env list
clo99400[1] = acc;
clo99400[2] = proc;
clo99400[3] = lst;
clo99400[4] = foldr;
clo99400[5] = kont97438;
clo99400[6] = cdr;
void* f9744197593 = encode_clo(clo99400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9744197593;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97758 = encode_clo(alloc_clo(lam97758_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97760 = arg_buffer[1];
//reading env and args
void* kont97438 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo99402 = alloc_clo(lam97758_fptr, 7);

//setting env list
clo99402[1] = acc;
clo99402[2] = proc;
clo99402[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo99402[4] = foldr;
clo99402[5] = car;
clo99402[6] = kont97438;
clo99402[7] = cdr;
void* f9744297591 = encode_clo(clo99402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9744297591;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam97761_fptr() // lam97761 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97762 = arg_buffer[1];
//reading env and args
void* a9734197606 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9733997602 = (decode_clo(env97762))[3];
//not do dummy comment
void* kont97443 = (decode_clo(env97762))[2];
//not do dummy comment
void* cons = (decode_clo(env97762))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont97443;
arg_buffer[3] = a9733997602;
arg_buffer[4] = a9734197606;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97761 = encode_clo(alloc_clo(lam97761_fptr, 0));

void* lam97763_fptr() // lam97763 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97764 = arg_buffer[1];
//reading env and args
void* a9734097604 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env97764))[5];
//not do dummy comment
void* lst2 = (decode_clo(env97764))[4];
//not do dummy comment
void* a9733997602 = (decode_clo(env97764))[3];
//not do dummy comment
void* kont97443 = (decode_clo(env97764))[2];
//not do dummy comment
void* cons = (decode_clo(env97764))[1];

//creating new closure instance
void** clo99404 = alloc_clo(lam97761_fptr, 3);

//setting env list
clo99404[1] = cons;
clo99404[2] = kont97443;
clo99404[3] = a9733997602;
void* f9744497605 = encode_clo(clo99404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9744497605;
arg_buffer[3] = a9734097604;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97763 = encode_clo(alloc_clo(lam97763_fptr, 0));

void* lam97765_fptr() // lam97765 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97766 = arg_buffer[1];
//reading env and args
void* a9733997602 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97766))[6];
//not do dummy comment
void* append = (decode_clo(env97766))[5];
//not do dummy comment
void* lst2 = (decode_clo(env97766))[4];
//not do dummy comment
void* lst1 = (decode_clo(env97766))[3];
//not do dummy comment
void* kont97443 = (decode_clo(env97766))[2];
//not do dummy comment
void* cons = (decode_clo(env97766))[1];

//creating new closure instance
void** clo99406 = alloc_clo(lam97763_fptr, 5);

//setting env list
clo99406[1] = cons;
clo99406[2] = kont97443;
clo99406[3] = a9733997602;
clo99406[4] = lst2;
clo99406[5] = append;
void* f9744597603 = encode_clo(clo99406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9744597603;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97765 = encode_clo(alloc_clo(lam97765_fptr, 0));

void* lam97767_fptr() // lam97767 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97768 = arg_buffer[1];
//reading env and args
void* a9733897600 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env97768))[7];
//not do dummy comment
void* append = (decode_clo(env97768))[6];
//not do dummy comment
void* lst2 = (decode_clo(env97768))[5];
//not do dummy comment
void* lst1 = (decode_clo(env97768))[4];
//not do dummy comment
void* car = (decode_clo(env97768))[3];
//not do dummy comment
void* kont97443 = (decode_clo(env97768))[2];
//not do dummy comment
void* cons = (decode_clo(env97768))[1];

//if-clause
bool if_guard99407 = is_true(a9733897600);
if(if_guard99407)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97443);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97443))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo99409 = alloc_clo(lam97765_fptr, 6);

//setting env list
clo99409[1] = cons;
clo99409[2] = kont97443;
clo99409[3] = lst1;
clo99409[4] = lst2;
clo99409[5] = append;
clo99409[6] = cdr;
void* f9744697601 = encode_clo(clo99409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9744697601;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97767 = encode_clo(alloc_clo(lam97767_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97769 = arg_buffer[1];
//reading env and args
void* kont97443 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo99411 = alloc_clo(lam97767_fptr, 7);

//setting env list
clo99411[1] = cons;
clo99411[2] = kont97443;
clo99411[3] = car;
clo99411[4] = lst1;
clo99411[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo99411[6] = append;
clo99411[7] = cdr;
void* f9744797599 = encode_clo(clo99411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9744797599;
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
void* _97770 = arg_buffer[1];
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

void* kont9744897607 = prim_car(lst);
void* lst97608 = prim_cdr(lst);
void* x9734297609 = apply_prim_hash(lst97608);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9744897607);
arg_buffer[2] = x9734297609;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9744897607))[0]);
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
void* _97771 = arg_buffer[1];
//reading env and args
void* kont97450 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9734397610 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97450);
arg_buffer[2] = x9734397610;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97450))[0]);
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
void* _97772 = arg_buffer[1];
//reading env and args
void* kont97451 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9734497611 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97451);
arg_buffer[2] = x9734497611;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97451))[0]);
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
void* _97773 = arg_buffer[1];
//reading env and args
void* kont97452 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9734597612 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97452);
arg_buffer[2] = x9734597612;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97452))[0]);
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
void* _97774 = arg_buffer[1];
//reading env and args
void* kont97453 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9734697613 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97453);
arg_buffer[2] = x9734697613;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97453))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam97779_fptr() // lam97779 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97780 = arg_buffer[1];
//reading env and args
void* a9735397622 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env97780))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env97780))[2];
//not do dummy comment
void* kont97454 = (decode_clo(env97780))[1];

//if-clause
bool if_guard99412 = is_true(a9735397622);
if(if_guard99412)
{
mpz_t* mpzvar99413 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99413, "3", 10);
void* a9735497623 = encode_mpz(mpzvar99413);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont97454;
arg_buffer[3] = a9735497623;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar99414 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99414, "2", 10);
void* a9735597624 = encode_mpz(mpzvar99414);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont97454;
arg_buffer[3] = a9735597624;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97779 = encode_clo(alloc_clo(lam97779_fptr, 0));

void* lam97782_fptr() // lam97782 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97783 = arg_buffer[1];
//reading env and args
void* a9734997617 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env97783))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env97783))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env97783))[2];
//not do dummy comment
void* kont97454 = (decode_clo(env97783))[1];

//if-clause
bool if_guard99415 = is_true(a9734997617);
if(if_guard99415)
{
mpz_t* mpzvar99416 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99416, "1", 10);
void* a9735097618 = encode_mpz(mpzvar99416);
mpz_t* mpzvar99417 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99417, "2", 10);
void* a9735197619 = encode_mpz(mpzvar99417);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont97454;
arg_buffer[3] = a9735097618;
arg_buffer[4] = a9735197619;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar99418 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99418, "3", 10);
void* a9735297620 = encode_mpz(mpzvar99418);

//creating new closure instance
void** clo99420 = alloc_clo(lam97779_fptr, 3);

//setting env list
clo99420[1] = kont97454;
clo99420[2] = even_u63;
clo99420[3] = odd_u63;
void* f9745597621 = encode_clo(clo99420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f9745597621;
arg_buffer[3] = a9735297620;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam97782 = encode_clo(alloc_clo(lam97782_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97786 = arg_buffer[1];
//reading env and args
void* kont97454 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar99421 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99421, "1", 10);
void* a9734797614 = encode_mpz(mpzvar99421);
mpz_t* mpzvar99422 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar99422, "2", 10);
void* a9734897615 = encode_mpz(mpzvar99422);

//creating new closure instance
void** clo99424 = alloc_clo(lam97782_fptr, 4);

//setting env list
clo99424[1] = kont97454;
clo99424[2] = equal_u63;
clo99424[3] = even_u63;
clo99424[4] = odd_u63;
void* f9745697616 = encode_clo(clo99424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9745697616;
arg_buffer[3] = a9734797614;
arg_buffer[4] = a9734897615;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam97787_fptr() // lam97787 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env97788 = arg_buffer[1];
//reading env and args
void* x9735697626 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont97457 = (decode_clo(env97788))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont97457);
arg_buffer[2] = x9735697626;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont97457))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam97787 = encode_clo(alloc_clo(lam97787_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _97789 = arg_buffer[1];
//reading env and args
void* kont97457 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo99426 = alloc_clo(lam97787_fptr, 1);

//setting env list
clo99426[1] = kont97457;
void* f9745897625 = encode_clo(clo99426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f9745897625;
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

