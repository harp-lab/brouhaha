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
void* _50598 = arg_buffer[1];
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

void* kont5033850438 = prim_car(lst);
void* lst50439 = prim_cdr(lst);
void* x5025150440 = apply_prim__u43(lst50439);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5033850438);
arg_buffer[2] = x5025150440;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5033850438))[0]);
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
void* _50599 = arg_buffer[1];
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

void* kont5034050441 = prim_car(lst);
void* lst50442 = prim_cdr(lst);
void* x5025250443 = apply_prim__u45(lst50442);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5034050441);
arg_buffer[2] = x5025250443;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5034050441))[0]);
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
void* _50600 = arg_buffer[1];
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

void* kont5034250444 = prim_car(lst);
void* lst50445 = prim_cdr(lst);
void* x5025350446 = apply_prim__u42(lst50445);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5034250444);
arg_buffer[2] = x5025350446;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5034250444))[0]);
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
void* _50601 = arg_buffer[1];
//reading env and args
void* kont50344 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5025450447 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50344);
arg_buffer[2] = x5025450447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50344))[0]);
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
void* _50602 = arg_buffer[1];
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

void* kont5034550448 = prim_car(lst);
void* lst50449 = prim_cdr(lst);
void* x5025550450 = apply_prim__u47(lst50449);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5034550448);
arg_buffer[2] = x5025550450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5034550448))[0]);
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
void* _50603 = arg_buffer[1];
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

void* kont5034750451 = prim_car(lst);
void* lst50452 = prim_cdr(lst);
void* x5025650453 = apply_prim__u61(lst50452);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5034750451);
arg_buffer[2] = x5025650453;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5034750451))[0]);
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
void* _50604 = arg_buffer[1];
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

void* kont5034950454 = prim_car(lst);
void* lst50455 = prim_cdr(lst);
void* x5025750456 = apply_prim__u62(lst50455);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5034950454);
arg_buffer[2] = x5025750456;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5034950454))[0]);
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
void* _50605 = arg_buffer[1];
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

void* kont5035150457 = prim_car(lst);
void* lst50458 = prim_cdr(lst);
void* x5025850459 = apply_prim__u60(lst50458);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5035150457);
arg_buffer[2] = x5025850459;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5035150457))[0]);
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
void* _50606 = arg_buffer[1];
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

void* kont5035350460 = prim_car(lst);
void* lst50461 = prim_cdr(lst);
void* x5025950462 = apply_prim__u60_u61(lst50461);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5035350460);
arg_buffer[2] = x5025950462;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5035350460))[0]);
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
void* _50607 = arg_buffer[1];
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

void* kont5035550463 = prim_car(lst);
void* lst50464 = prim_cdr(lst);
void* x5026050465 = apply_prim__u62_u61(lst50464);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5035550463);
arg_buffer[2] = x5026050465;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5035550463))[0]);
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
void* _50608 = arg_buffer[1];
//reading env and args
void* kont50357 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5026150466 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50357);
arg_buffer[2] = x5026150466;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50357))[0]);
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
void* _50609 = arg_buffer[1];
//reading env and args
void* kont50358 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5026250467 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50358);
arg_buffer[2] = x5026250467;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50358))[0]);
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
void* _50610 = arg_buffer[1];
//reading env and args
void* kont50359 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5026350468 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50359);
arg_buffer[2] = x5026350468;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50359))[0]);
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
void* _50611 = arg_buffer[1];
//reading env and args
void* kont50360 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5026450469 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50360);
arg_buffer[2] = x5026450469;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50360))[0]);
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
void* _50612 = arg_buffer[1];
//reading env and args
void* kont50361 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5026550470 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50361);
arg_buffer[2] = x5026550470;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50361))[0]);
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
void* _50613 = arg_buffer[1];
//reading env and args
void* kont50362 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5026650471 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50362);
arg_buffer[2] = x5026650471;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50362))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam50614_fptr() // lam50614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50615 = arg_buffer[1];
//reading env and args
void* a5026950475 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5026750472 = (decode_clo(env50615))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env50615))[2];
//not do dummy comment
void* kont50363 = (decode_clo(env50615))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50363;
arg_buffer[3] = a5026750472;
arg_buffer[4] = a5026950475;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50614 = encode_clo(alloc_clo(lam50614_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50618 = arg_buffer[1];
//reading env and args
void* kont50363 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50753 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50753, "0", 10);
void* a5026750472 = encode_mpz(mpzvar50753);
mpz_t* mpzvar50754 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50754, "2", 10);
void* a5026850473 = encode_mpz(mpzvar50754);

//creating new closure instance
void** clo50756 = alloc_clo(lam50614_fptr, 3);

//setting env list
clo50756[1] = kont50363;
clo50756[2] = equal_u63;
clo50756[3] = a5026750472;
void* f5036450474 = encode_clo(clo50756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5036450474;
arg_buffer[3] = x;
arg_buffer[4] = a5026850473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam50619_fptr() // lam50619 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50620 = arg_buffer[1];
//reading env and args
void* a5027250479 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env50620))[3];
//not do dummy comment
void* a5027050476 = (decode_clo(env50620))[2];
//not do dummy comment
void* kont50365 = (decode_clo(env50620))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50365;
arg_buffer[3] = a5027050476;
arg_buffer[4] = a5027250479;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50619 = encode_clo(alloc_clo(lam50619_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50623 = arg_buffer[1];
//reading env and args
void* kont50365 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar50757 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50757, "1", 10);
void* a5027050476 = encode_mpz(mpzvar50757);
mpz_t* mpzvar50758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50758, "2", 10);
void* a5027150477 = encode_mpz(mpzvar50758);

//creating new closure instance
void** clo50760 = alloc_clo(lam50619_fptr, 3);

//setting env list
clo50760[1] = kont50365;
clo50760[2] = a5027050476;
clo50760[3] = equal_u63;
void* f5036650478 = encode_clo(clo50760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5036650478;
arg_buffer[3] = x;
arg_buffer[4] = a5027150477;
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
void* _50624 = arg_buffer[1];
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

void* kont5036750480 = prim_car(x);
void* x50481 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5036750480);
arg_buffer[2] = x50481;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5036750480))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam50627_fptr() // lam50627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50628 = arg_buffer[1];
//reading env and args
void* a5027850491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50369 = (decode_clo(env50628))[3];
//not do dummy comment
void* x = (decode_clo(env50628))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50628))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont50369;
arg_buffer[3] = x;
arg_buffer[4] = a5027850491;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50627 = encode_clo(alloc_clo(lam50627_fptr, 0));

void* lam50629_fptr() // lam50629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50630 = arg_buffer[1];
//reading env and args
void* a5027650488 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50630))[5];
//not do dummy comment
void* x = (decode_clo(env50630))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env50630))[3];
//not do dummy comment
void* kont50369 = (decode_clo(env50630))[2];
//not do dummy comment
void* cdr = (decode_clo(env50630))[1];

//if-clause
bool if_guard50761 = is_true(a5027650488);
if(if_guard50761)
{
void* x5027750489 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50369);
arg_buffer[2] = x5027750489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50369))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50763 = alloc_clo(lam50627_fptr, 3);

//setting env list
clo50763[1] = member_u63;
clo50763[2] = x;
clo50763[3] = kont50369;
void* f5037050490 = encode_clo(clo50763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5037050490;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50629 = encode_clo(alloc_clo(lam50629_fptr, 0));

void* lam50631_fptr() // lam50631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50632 = arg_buffer[1];
//reading env and args
void* a5027550486 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50632))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env50632))[5];
//not do dummy comment
void* x = (decode_clo(env50632))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env50632))[3];
//not do dummy comment
void* kont50369 = (decode_clo(env50632))[2];
//not do dummy comment
void* cdr = (decode_clo(env50632))[1];

//creating new closure instance
void** clo50765 = alloc_clo(lam50629_fptr, 5);

//setting env list
clo50765[1] = cdr;
clo50765[2] = kont50369;
clo50765[3] = member_u63;
clo50765[4] = x;
clo50765[5] = lst;
void* f5037150487 = encode_clo(clo50765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5037150487;
arg_buffer[3] = a5027550486;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50631 = encode_clo(alloc_clo(lam50631_fptr, 0));

void* lam50633_fptr() // lam50633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50634 = arg_buffer[1];
//reading env and args
void* a5027350483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50634))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env50634))[6];
//not do dummy comment
void* x = (decode_clo(env50634))[5];
//not do dummy comment
void* car = (decode_clo(env50634))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env50634))[3];
//not do dummy comment
void* kont50369 = (decode_clo(env50634))[2];
//not do dummy comment
void* cdr = (decode_clo(env50634))[1];

//if-clause
bool if_guard50766 = is_true(a5027350483);
if(if_guard50766)
{
void* x5027450484 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50369);
arg_buffer[2] = x5027450484;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50369))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50768 = alloc_clo(lam50631_fptr, 6);

//setting env list
clo50768[1] = cdr;
clo50768[2] = kont50369;
clo50768[3] = member_u63;
clo50768[4] = x;
clo50768[5] = equal_u63;
clo50768[6] = lst;
void* f5037250485 = encode_clo(clo50768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5037250485;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50633 = encode_clo(alloc_clo(lam50633_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50635 = arg_buffer[1];
//reading env and args
void* kont50369 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50770 = alloc_clo(lam50633_fptr, 7);

//setting env list
clo50770[1] = cdr;
clo50770[2] = kont50369;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo50770[3] = member_u63;
clo50770[4] = car;
clo50770[5] = x;
clo50770[6] = equal_u63;
clo50770[7] = lst;
void* f5037350482 = encode_clo(clo50770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5037350482;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam50636_fptr() // lam50636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50637 = arg_buffer[1];
//reading env and args
void* a5028250499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5028150497 = (decode_clo(env50637))[4];
//not do dummy comment
void* kont50374 = (decode_clo(env50637))[3];
//not do dummy comment
void* fun = (decode_clo(env50637))[2];
//not do dummy comment
void* foldl = (decode_clo(env50637))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont50374;
arg_buffer[3] = fun;
arg_buffer[4] = a5028150497;
arg_buffer[5] = a5028250499;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50636 = encode_clo(alloc_clo(lam50636_fptr, 0));

void* lam50638_fptr() // lam50638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50639 = arg_buffer[1];
//reading env and args
void* a5028150497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50639))[5];
//not do dummy comment
void* lst = (decode_clo(env50639))[4];
//not do dummy comment
void* kont50374 = (decode_clo(env50639))[3];
//not do dummy comment
void* fun = (decode_clo(env50639))[2];
//not do dummy comment
void* foldl = (decode_clo(env50639))[1];

//creating new closure instance
void** clo50772 = alloc_clo(lam50636_fptr, 4);

//setting env list
clo50772[1] = foldl;
clo50772[2] = fun;
clo50772[3] = kont50374;
clo50772[4] = a5028150497;
void* f5037550498 = encode_clo(clo50772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5037550498;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50638 = encode_clo(alloc_clo(lam50638_fptr, 0));

void* lam50640_fptr() // lam50640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50641 = arg_buffer[1];
//reading env and args
void* a5028050495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50641))[6];
//not do dummy comment
void* lst = (decode_clo(env50641))[5];
//not do dummy comment
void* kont50374 = (decode_clo(env50641))[4];
//not do dummy comment
void* fun = (decode_clo(env50641))[3];
//not do dummy comment
void* acc = (decode_clo(env50641))[2];
//not do dummy comment
void* foldl = (decode_clo(env50641))[1];

//creating new closure instance
void** clo50774 = alloc_clo(lam50638_fptr, 5);

//setting env list
clo50774[1] = foldl;
clo50774[2] = fun;
clo50774[3] = kont50374;
clo50774[4] = lst;
clo50774[5] = cdr;
void* f5037650496 = encode_clo(clo50774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5037650496;
arg_buffer[3] = a5028050495;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50640 = encode_clo(alloc_clo(lam50640_fptr, 0));

void* lam50642_fptr() // lam50642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50643 = arg_buffer[1];
//reading env and args
void* a5027950493 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50643))[7];
//not do dummy comment
void* lst = (decode_clo(env50643))[6];
//not do dummy comment
void* kont50374 = (decode_clo(env50643))[5];
//not do dummy comment
void* fun = (decode_clo(env50643))[4];
//not do dummy comment
void* acc = (decode_clo(env50643))[3];
//not do dummy comment
void* car = (decode_clo(env50643))[2];
//not do dummy comment
void* foldl = (decode_clo(env50643))[1];

//if-clause
bool if_guard50775 = is_true(a5027950493);
if(if_guard50775)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50374);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50374))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50777 = alloc_clo(lam50640_fptr, 6);

//setting env list
clo50777[1] = foldl;
clo50777[2] = acc;
clo50777[3] = fun;
clo50777[4] = kont50374;
clo50777[5] = lst;
clo50777[6] = cdr;
void* f5037750494 = encode_clo(clo50777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5037750494;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50642 = encode_clo(alloc_clo(lam50642_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50644 = arg_buffer[1];
//reading env and args
void* kont50374 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50779 = alloc_clo(lam50642_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo50779[1] = foldl;
clo50779[2] = car;
clo50779[3] = acc;
clo50779[4] = fun;
clo50779[5] = kont50374;
clo50779[6] = lst;
clo50779[7] = cdr;
void* f5037850492 = encode_clo(clo50779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5037850492;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam50645_fptr() // lam50645 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50646 = arg_buffer[1];
//reading env and args
void* a5028650507 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5028450503 = (decode_clo(env50646))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50646))[2];
//not do dummy comment
void* kont50379 = (decode_clo(env50646))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50379;
arg_buffer[3] = a5028450503;
arg_buffer[4] = a5028650507;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50645 = encode_clo(alloc_clo(lam50645_fptr, 0));

void* lam50647_fptr() // lam50647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50648 = arg_buffer[1];
//reading env and args
void* a5028550505 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5028450503 = (decode_clo(env50648))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50648))[4];
//not do dummy comment
void* kont50379 = (decode_clo(env50648))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50648))[2];
//not do dummy comment
void* cons = (decode_clo(env50648))[1];

//creating new closure instance
void** clo50781 = alloc_clo(lam50645_fptr, 3);

//setting env list
clo50781[1] = kont50379;
clo50781[2] = reverse_u45helper;
clo50781[3] = a5028450503;
void* f5038050506 = encode_clo(clo50781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5038050506;
arg_buffer[3] = a5028550505;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50647 = encode_clo(alloc_clo(lam50647_fptr, 0));

void* lam50649_fptr() // lam50649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50650 = arg_buffer[1];
//reading env and args
void* a5028450503 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50650))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50650))[5];
//not do dummy comment
void* kont50379 = (decode_clo(env50650))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50650))[3];
//not do dummy comment
void* car = (decode_clo(env50650))[2];
//not do dummy comment
void* cons = (decode_clo(env50650))[1];

//creating new closure instance
void** clo50783 = alloc_clo(lam50647_fptr, 5);

//setting env list
clo50783[1] = cons;
clo50783[2] = lst2;
clo50783[3] = kont50379;
clo50783[4] = reverse_u45helper;
clo50783[5] = a5028450503;
void* f5038150504 = encode_clo(clo50783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5038150504;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50649 = encode_clo(alloc_clo(lam50649_fptr, 0));

void* lam50651_fptr() // lam50651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50652 = arg_buffer[1];
//reading env and args
void* a5028350501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50652))[7];
//not do dummy comment
void* lst = (decode_clo(env50652))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50652))[5];
//not do dummy comment
void* kont50379 = (decode_clo(env50652))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50652))[3];
//not do dummy comment
void* car = (decode_clo(env50652))[2];
//not do dummy comment
void* cons = (decode_clo(env50652))[1];

//if-clause
bool if_guard50784 = is_true(a5028350501);
if(if_guard50784)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50379);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50379))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50786 = alloc_clo(lam50649_fptr, 6);

//setting env list
clo50786[1] = cons;
clo50786[2] = car;
clo50786[3] = lst2;
clo50786[4] = kont50379;
clo50786[5] = reverse_u45helper;
clo50786[6] = lst;
void* f5038250502 = encode_clo(clo50786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5038250502;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50651 = encode_clo(alloc_clo(lam50651_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50653 = arg_buffer[1];
//reading env and args
void* kont50379 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50788 = alloc_clo(lam50651_fptr, 7);

//setting env list
clo50788[1] = cons;
clo50788[2] = car;
clo50788[3] = lst2;
clo50788[4] = kont50379;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo50788[5] = reverse_u45helper;
clo50788[6] = lst;
clo50788[7] = cdr;
void* f5038350500 = encode_clo(clo50788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5038350500;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam50654_fptr() // lam50654 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50655 = arg_buffer[1];
//reading env and args
void* a5028750509 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50655))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50655))[2];
//not do dummy comment
void* kont50384 = (decode_clo(env50655))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50384;
arg_buffer[3] = lst;
arg_buffer[4] = a5028750509;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50654 = encode_clo(alloc_clo(lam50654_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50656 = arg_buffer[1];
//reading env and args
void* kont50384 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50790 = alloc_clo(lam50654_fptr, 3);

//setting env list
clo50790[1] = kont50384;
clo50790[2] = reverse_u45helper;
clo50790[3] = lst;
void* f5038550508 = encode_clo(clo50790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5038550508;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam50657_fptr() // lam50657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50658 = arg_buffer[1];
//reading env and args
void* x5029050514 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50386 = (decode_clo(env50658))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50386);
arg_buffer[2] = x5029050514;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50386))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50657 = encode_clo(alloc_clo(lam50657_fptr, 0));

void* lam50659_fptr() // lam50659 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50660 = arg_buffer[1];
//reading env and args
void* a5029550523 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50386 = (decode_clo(env50660))[4];
//not do dummy comment
void* a5029150516 = (decode_clo(env50660))[3];
//not do dummy comment
void* a5029350519 = (decode_clo(env50660))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env50660))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50386;
arg_buffer[3] = a5029150516;
arg_buffer[4] = a5029350519;
arg_buffer[5] = a5029550523;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50659 = encode_clo(alloc_clo(lam50659_fptr, 0));

void* lam50661_fptr() // lam50661 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50662 = arg_buffer[1];
//reading env and args
void* a5029450521 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50386 = (decode_clo(env50662))[6];
//not do dummy comment
void* a5029150516 = (decode_clo(env50662))[5];
//not do dummy comment
void* a5029350519 = (decode_clo(env50662))[4];
//not do dummy comment
void* cons = (decode_clo(env50662))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50662))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50662))[1];

//creating new closure instance
void** clo50792 = alloc_clo(lam50659_fptr, 4);

//setting env list
clo50792[1] = take_u45helper;
clo50792[2] = a5029350519;
clo50792[3] = a5029150516;
clo50792[4] = kont50386;
void* f5038850522 = encode_clo(clo50792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5038850522;
arg_buffer[3] = a5029450521;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50661 = encode_clo(alloc_clo(lam50661_fptr, 0));

void* lam50663_fptr() // lam50663 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50664 = arg_buffer[1];
//reading env and args
void* a5029350519 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50386 = (decode_clo(env50664))[7];
//not do dummy comment
void* a5029150516 = (decode_clo(env50664))[6];
//not do dummy comment
void* lst = (decode_clo(env50664))[5];
//not do dummy comment
void* car = (decode_clo(env50664))[4];
//not do dummy comment
void* cons = (decode_clo(env50664))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50664))[2];
//not do dummy comment
void* lst2 = (decode_clo(env50664))[1];

//creating new closure instance
void** clo50794 = alloc_clo(lam50661_fptr, 6);

//setting env list
clo50794[1] = lst2;
clo50794[2] = take_u45helper;
clo50794[3] = cons;
clo50794[4] = a5029350519;
clo50794[5] = a5029150516;
clo50794[6] = kont50386;
void* f5038950520 = encode_clo(clo50794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5038950520;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50663 = encode_clo(alloc_clo(lam50663_fptr, 0));

void* lam50666_fptr() // lam50666 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50667 = arg_buffer[1];
//reading env and args
void* a5029150516 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50386 = (decode_clo(env50667))[8];
//not do dummy comment
void* lst = (decode_clo(env50667))[7];
//not do dummy comment
void* cons = (decode_clo(env50667))[6];
//not do dummy comment
void* _u45 = (decode_clo(env50667))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50667))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50667))[3];
//not do dummy comment
void* n = (decode_clo(env50667))[2];
//not do dummy comment
void* car = (decode_clo(env50667))[1];
mpz_t* mpzvar50795 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50795, "1", 10);
void* a5029250517 = encode_mpz(mpzvar50795);

//creating new closure instance
void** clo50797 = alloc_clo(lam50663_fptr, 7);

//setting env list
clo50797[1] = lst2;
clo50797[2] = take_u45helper;
clo50797[3] = cons;
clo50797[4] = car;
clo50797[5] = lst;
clo50797[6] = a5029150516;
clo50797[7] = kont50386;
void* f5039050518 = encode_clo(clo50797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5039050518;
arg_buffer[3] = n;
arg_buffer[4] = a5029250517;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50666 = encode_clo(alloc_clo(lam50666_fptr, 0));

void* lam50668_fptr() // lam50668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50669 = arg_buffer[1];
//reading env and args
void* a5028950512 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50669))[10];
//not do dummy comment
void* kont50386 = (decode_clo(env50669))[9];
//not do dummy comment
void* lst = (decode_clo(env50669))[8];
//not do dummy comment
void* reverse = (decode_clo(env50669))[7];
//not do dummy comment
void* cons = (decode_clo(env50669))[6];
//not do dummy comment
void* _u45 = (decode_clo(env50669))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50669))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50669))[3];
//not do dummy comment
void* n = (decode_clo(env50669))[2];
//not do dummy comment
void* car = (decode_clo(env50669))[1];

//if-clause
bool if_guard50798 = is_true(a5028950512);
if(if_guard50798)
{

//creating new closure instance
void** clo50800 = alloc_clo(lam50657_fptr, 1);

//setting env list
clo50800[1] = kont50386;
void* f5038750513 = encode_clo(clo50800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5038750513;
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
void** clo50802 = alloc_clo(lam50666_fptr, 8);

//setting env list
clo50802[1] = car;
clo50802[2] = n;
clo50802[3] = lst2;
clo50802[4] = take_u45helper;
clo50802[5] = _u45;
clo50802[6] = cons;
clo50802[7] = lst;
clo50802[8] = kont50386;
void* f5039150515 = encode_clo(clo50802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5039150515;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50668 = encode_clo(alloc_clo(lam50668_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50671 = arg_buffer[1];
//reading env and args
void* kont50386 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar50803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50803, "0", 10);
void* a5028850510 = encode_mpz(mpzvar50803);

//creating new closure instance
void** clo50805 = alloc_clo(lam50668_fptr, 10);

//setting env list
clo50805[1] = car;
clo50805[2] = n;
clo50805[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo50805[4] = take_u45helper;
clo50805[5] = _u45;
clo50805[6] = cons;
clo50805[7] = reverse;
clo50805[8] = lst;
clo50805[9] = kont50386;
clo50805[10] = cdr;
void* f5039250511 = encode_clo(clo50805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5039250511;
arg_buffer[3] = n;
arg_buffer[4] = a5028850510;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam50672_fptr() // lam50672 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50673 = arg_buffer[1];
//reading env and args
void* a5029650525 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50673))[4];
//not do dummy comment
void* kont50393 = (decode_clo(env50673))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50673))[2];
//not do dummy comment
void* n = (decode_clo(env50673))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50393;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5029650525;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50672 = encode_clo(alloc_clo(lam50672_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50674 = arg_buffer[1];
//reading env and args
void* kont50393 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50807 = alloc_clo(lam50672_fptr, 4);

//setting env list
clo50807[1] = n;
clo50807[2] = take_u45helper;
clo50807[3] = kont50393;
clo50807[4] = lst;
void* f5039450524 = encode_clo(clo50807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5039450524;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam50676_fptr() // lam50676 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50677 = arg_buffer[1];
//reading env and args
void* a5030150533 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5029950529 = (decode_clo(env50677))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50677))[2];
//not do dummy comment
void* kont50395 = (decode_clo(env50677))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont50395;
arg_buffer[3] = a5029950529;
arg_buffer[4] = a5030150533;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50676 = encode_clo(alloc_clo(lam50676_fptr, 0));

void* lam50678_fptr() // lam50678 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50679 = arg_buffer[1];
//reading env and args
void* a5030050531 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5029950529 = (decode_clo(env50679))[4];
//not do dummy comment
void* length = (decode_clo(env50679))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50679))[2];
//not do dummy comment
void* kont50395 = (decode_clo(env50679))[1];

//creating new closure instance
void** clo50809 = alloc_clo(lam50676_fptr, 3);

//setting env list
clo50809[1] = kont50395;
clo50809[2] = _u43;
clo50809[3] = a5029950529;
void* f5039650532 = encode_clo(clo50809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5039650532;
arg_buffer[3] = a5030050531;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50678 = encode_clo(alloc_clo(lam50678_fptr, 0));

void* lam50681_fptr() // lam50681 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50682 = arg_buffer[1];
//reading env and args
void* a5029750527 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50682))[5];
//not do dummy comment
void* lst = (decode_clo(env50682))[4];
//not do dummy comment
void* length = (decode_clo(env50682))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50682))[2];
//not do dummy comment
void* kont50395 = (decode_clo(env50682))[1];

//if-clause
bool if_guard50810 = is_true(a5029750527);
if(if_guard50810)
{
mpz_t* mpzvar50811 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50811, "0", 10);
void* x5029850528 = encode_mpz(mpzvar50811);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50395);
arg_buffer[2] = x5029850528;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50395))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar50812 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50812, "1", 10);
void* a5029950529 = encode_mpz(mpzvar50812);

//creating new closure instance
void** clo50814 = alloc_clo(lam50678_fptr, 4);

//setting env list
clo50814[1] = kont50395;
clo50814[2] = _u43;
clo50814[3] = length;
clo50814[4] = a5029950529;
void* f5039750530 = encode_clo(clo50814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5039750530;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50681 = encode_clo(alloc_clo(lam50681_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50683 = arg_buffer[1];
//reading env and args
void* kont50395 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo50816 = alloc_clo(lam50681_fptr, 5);

//setting env list
clo50816[1] = kont50395;
clo50816[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo50816[3] = length;
clo50816[4] = lst;
clo50816[5] = cdr;
void* f5039850526 = encode_clo(clo50816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5039850526;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam50684_fptr() // lam50684 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50685 = arg_buffer[1];
//reading env and args
void* x5030350537 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50399 = (decode_clo(env50685))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50399);
arg_buffer[2] = x5030350537;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50399))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50684 = encode_clo(alloc_clo(lam50684_fptr, 0));

void* lam50686_fptr() // lam50686 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50687 = arg_buffer[1];
//reading env and args
void* a5030750545 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5030550541 = (decode_clo(env50687))[3];
//not do dummy comment
void* cons = (decode_clo(env50687))[2];
//not do dummy comment
void* kont50399 = (decode_clo(env50687))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50399;
arg_buffer[3] = a5030550541;
arg_buffer[4] = a5030750545;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50686 = encode_clo(alloc_clo(lam50686_fptr, 0));

void* lam50688_fptr() // lam50688 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50689 = arg_buffer[1];
//reading env and args
void* a5030650543 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env50689))[5];
//not do dummy comment
void* proc = (decode_clo(env50689))[4];
//not do dummy comment
void* a5030550541 = (decode_clo(env50689))[3];
//not do dummy comment
void* cons = (decode_clo(env50689))[2];
//not do dummy comment
void* kont50399 = (decode_clo(env50689))[1];

//creating new closure instance
void** clo50818 = alloc_clo(lam50686_fptr, 3);

//setting env list
clo50818[1] = kont50399;
clo50818[2] = cons;
clo50818[3] = a5030550541;
void* f5040150544 = encode_clo(clo50818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5040150544;
arg_buffer[3] = proc;
arg_buffer[4] = a5030650543;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50688 = encode_clo(alloc_clo(lam50688_fptr, 0));

void* lam50690_fptr() // lam50690 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50691 = arg_buffer[1];
//reading env and args
void* a5030550541 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50691))[6];
//not do dummy comment
void* lst = (decode_clo(env50691))[5];
//not do dummy comment
void* map = (decode_clo(env50691))[4];
//not do dummy comment
void* proc = (decode_clo(env50691))[3];
//not do dummy comment
void* cons = (decode_clo(env50691))[2];
//not do dummy comment
void* kont50399 = (decode_clo(env50691))[1];

//creating new closure instance
void** clo50820 = alloc_clo(lam50688_fptr, 5);

//setting env list
clo50820[1] = kont50399;
clo50820[2] = cons;
clo50820[3] = a5030550541;
clo50820[4] = proc;
clo50820[5] = map;
void* f5040250542 = encode_clo(clo50820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5040250542;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50690 = encode_clo(alloc_clo(lam50690_fptr, 0));

void* lam50692_fptr() // lam50692 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50693 = arg_buffer[1];
//reading env and args
void* a5030450539 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50693))[6];
//not do dummy comment
void* lst = (decode_clo(env50693))[5];
//not do dummy comment
void* map = (decode_clo(env50693))[4];
//not do dummy comment
void* proc = (decode_clo(env50693))[3];
//not do dummy comment
void* cons = (decode_clo(env50693))[2];
//not do dummy comment
void* kont50399 = (decode_clo(env50693))[1];

//creating new closure instance
void** clo50822 = alloc_clo(lam50690_fptr, 6);

//setting env list
clo50822[1] = kont50399;
clo50822[2] = cons;
clo50822[3] = proc;
clo50822[4] = map;
clo50822[5] = lst;
clo50822[6] = cdr;
void* f5040350540 = encode_clo(clo50822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5040350540;
arg_buffer[3] = a5030450539;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50692 = encode_clo(alloc_clo(lam50692_fptr, 0));

void* lam50694_fptr() // lam50694 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50695 = arg_buffer[1];
//reading env and args
void* a5030250535 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50695))[8];
//not do dummy comment
void* map = (decode_clo(env50695))[7];
//not do dummy comment
void* proc = (decode_clo(env50695))[6];
//not do dummy comment
void* car = (decode_clo(env50695))[5];
//not do dummy comment
void* list = (decode_clo(env50695))[4];
//not do dummy comment
void* cdr = (decode_clo(env50695))[3];
//not do dummy comment
void* cons = (decode_clo(env50695))[2];
//not do dummy comment
void* kont50399 = (decode_clo(env50695))[1];

//if-clause
bool if_guard50823 = is_true(a5030250535);
if(if_guard50823)
{

//creating new closure instance
void** clo50825 = alloc_clo(lam50684_fptr, 1);

//setting env list
clo50825[1] = kont50399;
void* f5040050536 = encode_clo(clo50825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5040050536;
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
void** clo50827 = alloc_clo(lam50692_fptr, 6);

//setting env list
clo50827[1] = kont50399;
clo50827[2] = cons;
clo50827[3] = proc;
clo50827[4] = map;
clo50827[5] = lst;
clo50827[6] = cdr;
void* f5040450538 = encode_clo(clo50827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5040450538;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50694 = encode_clo(alloc_clo(lam50694_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50696 = arg_buffer[1];
//reading env and args
void* kont50399 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50829 = alloc_clo(lam50694_fptr, 8);

//setting env list
clo50829[1] = kont50399;
clo50829[2] = cons;
clo50829[3] = cdr;
clo50829[4] = list;
clo50829[5] = car;
clo50829[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo50829[7] = map;
clo50829[8] = lst;
void* f5040550534 = encode_clo(clo50829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5040550534;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam50697_fptr() // lam50697 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50698 = arg_buffer[1];
//reading env and args
void* x5030950549 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50406 = (decode_clo(env50698))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50406);
arg_buffer[2] = x5030950549;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50406))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50697 = encode_clo(alloc_clo(lam50697_fptr, 0));

void* lam50699_fptr() // lam50699 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50700 = arg_buffer[1];
//reading env and args
void* a5031450559 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50406 = (decode_clo(env50700))[3];
//not do dummy comment
void* a5031250555 = (decode_clo(env50700))[2];
//not do dummy comment
void* cons = (decode_clo(env50700))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50406;
arg_buffer[3] = a5031250555;
arg_buffer[4] = a5031450559;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50699 = encode_clo(alloc_clo(lam50699_fptr, 0));

void* lam50701_fptr() // lam50701 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50702 = arg_buffer[1];
//reading env and args
void* a5031350557 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50406 = (decode_clo(env50702))[5];
//not do dummy comment
void* op = (decode_clo(env50702))[4];
//not do dummy comment
void* a5031250555 = (decode_clo(env50702))[3];
//not do dummy comment
void* filter = (decode_clo(env50702))[2];
//not do dummy comment
void* cons = (decode_clo(env50702))[1];

//creating new closure instance
void** clo50831 = alloc_clo(lam50699_fptr, 3);

//setting env list
clo50831[1] = cons;
clo50831[2] = a5031250555;
clo50831[3] = kont50406;
void* f5040850558 = encode_clo(clo50831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5040850558;
arg_buffer[3] = op;
arg_buffer[4] = a5031350557;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50701 = encode_clo(alloc_clo(lam50701_fptr, 0));

void* lam50703_fptr() // lam50703 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50704 = arg_buffer[1];
//reading env and args
void* a5031250555 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50704))[6];
//not do dummy comment
void* lst = (decode_clo(env50704))[5];
//not do dummy comment
void* kont50406 = (decode_clo(env50704))[4];
//not do dummy comment
void* op = (decode_clo(env50704))[3];
//not do dummy comment
void* filter = (decode_clo(env50704))[2];
//not do dummy comment
void* cons = (decode_clo(env50704))[1];

//creating new closure instance
void** clo50833 = alloc_clo(lam50701_fptr, 5);

//setting env list
clo50833[1] = cons;
clo50833[2] = filter;
clo50833[3] = a5031250555;
clo50833[4] = op;
clo50833[5] = kont50406;
void* f5040950556 = encode_clo(clo50833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5040950556;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50703 = encode_clo(alloc_clo(lam50703_fptr, 0));

void* lam50705_fptr() // lam50705 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50706 = arg_buffer[1];
//reading env and args
void* a5031550561 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50406 = (decode_clo(env50706))[3];
//not do dummy comment
void* op = (decode_clo(env50706))[2];
//not do dummy comment
void* filter = (decode_clo(env50706))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont50406;
arg_buffer[3] = op;
arg_buffer[4] = a5031550561;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50705 = encode_clo(alloc_clo(lam50705_fptr, 0));

void* lam50707_fptr() // lam50707 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50708 = arg_buffer[1];
//reading env and args
void* a5031150553 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50708))[7];
//not do dummy comment
void* lst = (decode_clo(env50708))[6];
//not do dummy comment
void* kont50406 = (decode_clo(env50708))[5];
//not do dummy comment
void* op = (decode_clo(env50708))[4];
//not do dummy comment
void* cons = (decode_clo(env50708))[3];
//not do dummy comment
void* filter = (decode_clo(env50708))[2];
//not do dummy comment
void* car = (decode_clo(env50708))[1];

//if-clause
bool if_guard50834 = is_true(a5031150553);
if(if_guard50834)
{

//creating new closure instance
void** clo50836 = alloc_clo(lam50703_fptr, 6);

//setting env list
clo50836[1] = cons;
clo50836[2] = filter;
clo50836[3] = op;
clo50836[4] = kont50406;
clo50836[5] = lst;
clo50836[6] = cdr;
void* f5041050554 = encode_clo(clo50836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5041050554;
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
void** clo50838 = alloc_clo(lam50705_fptr, 3);

//setting env list
clo50838[1] = filter;
clo50838[2] = op;
clo50838[3] = kont50406;
void* f5041150560 = encode_clo(clo50838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5041150560;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50707 = encode_clo(alloc_clo(lam50707_fptr, 0));

void* lam50709_fptr() // lam50709 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50710 = arg_buffer[1];
//reading env and args
void* a5031050551 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50710))[7];
//not do dummy comment
void* lst = (decode_clo(env50710))[6];
//not do dummy comment
void* kont50406 = (decode_clo(env50710))[5];
//not do dummy comment
void* op = (decode_clo(env50710))[4];
//not do dummy comment
void* cons = (decode_clo(env50710))[3];
//not do dummy comment
void* filter = (decode_clo(env50710))[2];
//not do dummy comment
void* car = (decode_clo(env50710))[1];

//creating new closure instance
void** clo50840 = alloc_clo(lam50707_fptr, 7);

//setting env list
clo50840[1] = car;
clo50840[2] = filter;
clo50840[3] = cons;
clo50840[4] = op;
clo50840[5] = kont50406;
clo50840[6] = lst;
clo50840[7] = cdr;
void* f5041250552 = encode_clo(clo50840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5041250552;
arg_buffer[3] = a5031050551;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50709 = encode_clo(alloc_clo(lam50709_fptr, 0));

void* lam50711_fptr() // lam50711 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50712 = arg_buffer[1];
//reading env and args
void* a5030850547 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50712))[8];
//not do dummy comment
void* kont50406 = (decode_clo(env50712))[7];
//not do dummy comment
void* op = (decode_clo(env50712))[6];
//not do dummy comment
void* cons = (decode_clo(env50712))[5];
//not do dummy comment
void* list = (decode_clo(env50712))[4];
//not do dummy comment
void* cdr = (decode_clo(env50712))[3];
//not do dummy comment
void* filter = (decode_clo(env50712))[2];
//not do dummy comment
void* car = (decode_clo(env50712))[1];

//if-clause
bool if_guard50841 = is_true(a5030850547);
if(if_guard50841)
{

//creating new closure instance
void** clo50843 = alloc_clo(lam50697_fptr, 1);

//setting env list
clo50843[1] = kont50406;
void* f5040750548 = encode_clo(clo50843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5040750548;
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
void** clo50845 = alloc_clo(lam50709_fptr, 7);

//setting env list
clo50845[1] = car;
clo50845[2] = filter;
clo50845[3] = cons;
clo50845[4] = op;
clo50845[5] = kont50406;
clo50845[6] = lst;
clo50845[7] = cdr;
void* f5041350550 = encode_clo(clo50845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5041350550;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50711 = encode_clo(alloc_clo(lam50711_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50713 = arg_buffer[1];
//reading env and args
void* kont50406 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50847 = alloc_clo(lam50711_fptr, 8);

//setting env list
clo50847[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo50847[2] = filter;
clo50847[3] = cdr;
clo50847[4] = list;
clo50847[5] = cons;
clo50847[6] = op;
clo50847[7] = kont50406;
clo50847[8] = lst;
void* f5041450546 = encode_clo(clo50847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5041450546;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam50714_fptr() // lam50714 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50715 = arg_buffer[1];
//reading env and args
void* a5032050569 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env50715))[3];
//not do dummy comment
void* a5031850566 = (decode_clo(env50715))[2];
//not do dummy comment
void* kont50415 = (decode_clo(env50715))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont50415;
arg_buffer[3] = a5031850566;
arg_buffer[4] = a5032050569;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50714 = encode_clo(alloc_clo(lam50714_fptr, 0));

void* lam50717_fptr() // lam50717 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50718 = arg_buffer[1];
//reading env and args
void* a5031850566 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env50718))[4];
//not do dummy comment
void* n = (decode_clo(env50718))[3];
//not do dummy comment
void* kont50415 = (decode_clo(env50718))[2];
//not do dummy comment
void* _u45 = (decode_clo(env50718))[1];
mpz_t* mpzvar50848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50848, "1", 10);
void* a5031950567 = encode_mpz(mpzvar50848);

//creating new closure instance
void** clo50850 = alloc_clo(lam50714_fptr, 3);

//setting env list
clo50850[1] = kont50415;
clo50850[2] = a5031850566;
clo50850[3] = drop;
void* f5041650568 = encode_clo(clo50850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5041650568;
arg_buffer[3] = n;
arg_buffer[4] = a5031950567;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50717 = encode_clo(alloc_clo(lam50717_fptr, 0));

void* lam50719_fptr() // lam50719 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50720 = arg_buffer[1];
//reading env and args
void* a5031750564 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50720))[6];
//not do dummy comment
void* n = (decode_clo(env50720))[5];
//not do dummy comment
void* kont50415 = (decode_clo(env50720))[4];
//not do dummy comment
void* _u45 = (decode_clo(env50720))[3];
//not do dummy comment
void* lst = (decode_clo(env50720))[2];
//not do dummy comment
void* drop = (decode_clo(env50720))[1];

//if-clause
bool if_guard50851 = is_true(a5031750564);
if(if_guard50851)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50415);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50415))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50853 = alloc_clo(lam50717_fptr, 4);

//setting env list
clo50853[1] = _u45;
clo50853[2] = kont50415;
clo50853[3] = n;
clo50853[4] = drop;
void* f5041750565 = encode_clo(clo50853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5041750565;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50719 = encode_clo(alloc_clo(lam50719_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50722 = arg_buffer[1];
//reading env and args
void* kont50415 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar50854 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar50854, "0", 10);
void* a5031650562 = encode_mpz(mpzvar50854);

//creating new closure instance
void** clo50856 = alloc_clo(lam50719_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo50856[1] = drop;
clo50856[2] = lst;
clo50856[3] = _u45;
clo50856[4] = kont50415;
clo50856[5] = n;
clo50856[6] = cdr;
void* f5041850563 = encode_clo(clo50856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5041850563;
arg_buffer[3] = n;
arg_buffer[4] = a5031650562;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam50723_fptr() // lam50723 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50724 = arg_buffer[1];
//reading env and args
void* a5032450577 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50419 = (decode_clo(env50724))[3];
//not do dummy comment
void* proc = (decode_clo(env50724))[2];
//not do dummy comment
void* a5032250573 = (decode_clo(env50724))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont50419;
arg_buffer[3] = a5032250573;
arg_buffer[4] = a5032450577;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50723 = encode_clo(alloc_clo(lam50723_fptr, 0));

void* lam50725_fptr() // lam50725 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50726 = arg_buffer[1];
//reading env and args
void* a5032350575 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50419 = (decode_clo(env50726))[5];
//not do dummy comment
void* foldr = (decode_clo(env50726))[4];
//not do dummy comment
void* a5032250573 = (decode_clo(env50726))[3];
//not do dummy comment
void* proc = (decode_clo(env50726))[2];
//not do dummy comment
void* acc = (decode_clo(env50726))[1];

//creating new closure instance
void** clo50858 = alloc_clo(lam50723_fptr, 3);

//setting env list
clo50858[1] = a5032250573;
clo50858[2] = proc;
clo50858[3] = kont50419;
void* f5042050576 = encode_clo(clo50858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5042050576;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5032350575;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50725 = encode_clo(alloc_clo(lam50725_fptr, 0));

void* lam50727_fptr() // lam50727 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50728 = arg_buffer[1];
//reading env and args
void* a5032250573 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50728))[6];
//not do dummy comment
void* kont50419 = (decode_clo(env50728))[5];
//not do dummy comment
void* foldr = (decode_clo(env50728))[4];
//not do dummy comment
void* lst = (decode_clo(env50728))[3];
//not do dummy comment
void* proc = (decode_clo(env50728))[2];
//not do dummy comment
void* acc = (decode_clo(env50728))[1];

//creating new closure instance
void** clo50860 = alloc_clo(lam50725_fptr, 5);

//setting env list
clo50860[1] = acc;
clo50860[2] = proc;
clo50860[3] = a5032250573;
clo50860[4] = foldr;
clo50860[5] = kont50419;
void* f5042150574 = encode_clo(clo50860);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5042150574;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50727 = encode_clo(alloc_clo(lam50727_fptr, 0));

void* lam50729_fptr() // lam50729 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50730 = arg_buffer[1];
//reading env and args
void* a5032150571 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50730))[7];
//not do dummy comment
void* kont50419 = (decode_clo(env50730))[6];
//not do dummy comment
void* car = (decode_clo(env50730))[5];
//not do dummy comment
void* foldr = (decode_clo(env50730))[4];
//not do dummy comment
void* lst = (decode_clo(env50730))[3];
//not do dummy comment
void* proc = (decode_clo(env50730))[2];
//not do dummy comment
void* acc = (decode_clo(env50730))[1];

//if-clause
bool if_guard50861 = is_true(a5032150571);
if(if_guard50861)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50419);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50419))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50863 = alloc_clo(lam50727_fptr, 6);

//setting env list
clo50863[1] = acc;
clo50863[2] = proc;
clo50863[3] = lst;
clo50863[4] = foldr;
clo50863[5] = kont50419;
clo50863[6] = cdr;
void* f5042250572 = encode_clo(clo50863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5042250572;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50729 = encode_clo(alloc_clo(lam50729_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50731 = arg_buffer[1];
//reading env and args
void* kont50419 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo50865 = alloc_clo(lam50729_fptr, 7);

//setting env list
clo50865[1] = acc;
clo50865[2] = proc;
clo50865[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo50865[4] = foldr;
clo50865[5] = car;
clo50865[6] = kont50419;
clo50865[7] = cdr;
void* f5042350570 = encode_clo(clo50865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5042350570;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam50732_fptr() // lam50732 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50733 = arg_buffer[1];
//reading env and args
void* a5032850585 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5032650581 = (decode_clo(env50733))[3];
//not do dummy comment
void* kont50424 = (decode_clo(env50733))[2];
//not do dummy comment
void* cons = (decode_clo(env50733))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50424;
arg_buffer[3] = a5032650581;
arg_buffer[4] = a5032850585;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50732 = encode_clo(alloc_clo(lam50732_fptr, 0));

void* lam50734_fptr() // lam50734 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50735 = arg_buffer[1];
//reading env and args
void* a5032750583 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5032650581 = (decode_clo(env50735))[5];
//not do dummy comment
void* kont50424 = (decode_clo(env50735))[4];
//not do dummy comment
void* append = (decode_clo(env50735))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50735))[2];
//not do dummy comment
void* cons = (decode_clo(env50735))[1];

//creating new closure instance
void** clo50867 = alloc_clo(lam50732_fptr, 3);

//setting env list
clo50867[1] = cons;
clo50867[2] = kont50424;
clo50867[3] = a5032650581;
void* f5042550584 = encode_clo(clo50867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5042550584;
arg_buffer[3] = a5032750583;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50734 = encode_clo(alloc_clo(lam50734_fptr, 0));

void* lam50736_fptr() // lam50736 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50737 = arg_buffer[1];
//reading env and args
void* a5032650581 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50737))[6];
//not do dummy comment
void* kont50424 = (decode_clo(env50737))[5];
//not do dummy comment
void* append = (decode_clo(env50737))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50737))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50737))[2];
//not do dummy comment
void* cons = (decode_clo(env50737))[1];

//creating new closure instance
void** clo50869 = alloc_clo(lam50734_fptr, 5);

//setting env list
clo50869[1] = cons;
clo50869[2] = lst2;
clo50869[3] = append;
clo50869[4] = kont50424;
clo50869[5] = a5032650581;
void* f5042650582 = encode_clo(clo50869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5042650582;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50736 = encode_clo(alloc_clo(lam50736_fptr, 0));

void* lam50738_fptr() // lam50738 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50739 = arg_buffer[1];
//reading env and args
void* a5032550579 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50739))[7];
//not do dummy comment
void* kont50424 = (decode_clo(env50739))[6];
//not do dummy comment
void* append = (decode_clo(env50739))[5];
//not do dummy comment
void* lst2 = (decode_clo(env50739))[4];
//not do dummy comment
void* cons = (decode_clo(env50739))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50739))[2];
//not do dummy comment
void* car = (decode_clo(env50739))[1];

//if-clause
bool if_guard50870 = is_true(a5032550579);
if(if_guard50870)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50424);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50424))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo50872 = alloc_clo(lam50736_fptr, 6);

//setting env list
clo50872[1] = cons;
clo50872[2] = lst1;
clo50872[3] = lst2;
clo50872[4] = append;
clo50872[5] = kont50424;
clo50872[6] = cdr;
void* f5042750580 = encode_clo(clo50872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5042750580;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50738 = encode_clo(alloc_clo(lam50738_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50740 = arg_buffer[1];
//reading env and args
void* kont50424 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo50874 = alloc_clo(lam50738_fptr, 7);

//setting env list
clo50874[1] = car;
clo50874[2] = lst1;
clo50874[3] = cons;
clo50874[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo50874[5] = append;
clo50874[6] = kont50424;
clo50874[7] = cdr;
void* f5042850578 = encode_clo(clo50874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5042850578;
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
void* _50741 = arg_buffer[1];
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

void* kont5042950586 = prim_car(lst);
void* lst50587 = prim_cdr(lst);
void* x5032950588 = apply_prim_hash(lst50587);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5042950586);
arg_buffer[2] = x5032950588;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5042950586))[0]);
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
void* _50742 = arg_buffer[1];
//reading env and args
void* kont50431 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5033050589 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50431);
arg_buffer[2] = x5033050589;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50431))[0]);
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
void* _50743 = arg_buffer[1];
//reading env and args
void* kont50432 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5033150590 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50432);
arg_buffer[2] = x5033150590;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50432))[0]);
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
void* _50744 = arg_buffer[1];
//reading env and args
void* kont50433 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5033250591 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50433);
arg_buffer[2] = x5033250591;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50433))[0]);
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
void* _50745 = arg_buffer[1];
//reading env and args
void* kont50434 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5033350592 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50434);
arg_buffer[2] = x5033350592;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50434))[0]);
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
void* _50749 = arg_buffer[1];
//reading env and args
void* kont50435 = arg_buffer[2];
//Dummy comment
void* a5033450593 = encode_bool(false);

//if-clause
bool if_guard50875 = is_true(a5033450593);
if(if_guard50875)
{
void* x5033550594 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50435);
arg_buffer[2] = x5033550594;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50435))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x5033650595 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50435);
arg_buffer[2] = x5033650595;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50435))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam50750_fptr() // lam50750 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50751 = arg_buffer[1];
//reading env and args
void* x5033750597 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50436 = (decode_clo(env50751))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50436);
arg_buffer[2] = x5033750597;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50436))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50750 = encode_clo(alloc_clo(lam50750_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50752 = arg_buffer[1];
//reading env and args
void* kont50436 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo50877 = alloc_clo(lam50750_fptr, 1);

//setting env list
clo50877[1] = kont50436;
void* f5043750596 = encode_clo(clo50877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5043750596;
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

