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
void* _60454 = arg_buffer[1];
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

void* kont6018460286 = prim_car(lst);
void* lst60287 = prim_cdr(lst);
void* x6009160288 = apply_prim__u43(lst60287);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6018460286);
arg_buffer[2] = x6009160288;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6018460286))[0]);
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
void* _60455 = arg_buffer[1];
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

void* kont6018660289 = prim_car(lst);
void* lst60290 = prim_cdr(lst);
void* x6009260291 = apply_prim__u45(lst60290);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6018660289);
arg_buffer[2] = x6009260291;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6018660289))[0]);
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
void* _60456 = arg_buffer[1];
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

void* kont6018860292 = prim_car(lst);
void* lst60293 = prim_cdr(lst);
void* x6009360294 = apply_prim__u42(lst60293);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6018860292);
arg_buffer[2] = x6009360294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6018860292))[0]);
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
void* _60457 = arg_buffer[1];
//reading env and args
void* kont60190 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6009460295 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60190);
arg_buffer[2] = x6009460295;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60190))[0]);
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
void* _60458 = arg_buffer[1];
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

void* kont6019160296 = prim_car(lst);
void* lst60297 = prim_cdr(lst);
void* x6009560298 = apply_prim__u47(lst60297);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6019160296);
arg_buffer[2] = x6009560298;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6019160296))[0]);
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
void* _60459 = arg_buffer[1];
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

void* kont6019360299 = prim_car(lst);
void* lst60300 = prim_cdr(lst);
void* x6009660301 = apply_prim__u61(lst60300);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6019360299);
arg_buffer[2] = x6009660301;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6019360299))[0]);
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
void* _60460 = arg_buffer[1];
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

void* kont6019560302 = prim_car(lst);
void* lst60303 = prim_cdr(lst);
void* x6009760304 = apply_prim__u62(lst60303);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6019560302);
arg_buffer[2] = x6009760304;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6019560302))[0]);
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
void* _60461 = arg_buffer[1];
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

void* kont6019760305 = prim_car(lst);
void* lst60306 = prim_cdr(lst);
void* x6009860307 = apply_prim__u60(lst60306);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6019760305);
arg_buffer[2] = x6009860307;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6019760305))[0]);
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
void* _60462 = arg_buffer[1];
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

void* kont6019960308 = prim_car(lst);
void* lst60309 = prim_cdr(lst);
void* x6009960310 = apply_prim__u60_u61(lst60309);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6019960308);
arg_buffer[2] = x6009960310;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6019960308))[0]);
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
void* _60463 = arg_buffer[1];
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

void* kont6020160311 = prim_car(lst);
void* lst60312 = prim_cdr(lst);
void* x6010060313 = apply_prim__u62_u61(lst60312);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6020160311);
arg_buffer[2] = x6010060313;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6020160311))[0]);
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
void* _60464 = arg_buffer[1];
//reading env and args
void* kont60203 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x6010160314 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60203);
arg_buffer[2] = x6010160314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60203))[0]);
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
void* _60465 = arg_buffer[1];
//reading env and args
void* kont60204 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6010260315 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60204);
arg_buffer[2] = x6010260315;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60204))[0]);
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
void* _60466 = arg_buffer[1];
//reading env and args
void* kont60205 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6010360316 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60205);
arg_buffer[2] = x6010360316;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60205))[0]);
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
void* _60467 = arg_buffer[1];
//reading env and args
void* kont60206 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6010460317 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60206);
arg_buffer[2] = x6010460317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60206))[0]);
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
void* _60468 = arg_buffer[1];
//reading env and args
void* kont60207 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6010560318 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60207);
arg_buffer[2] = x6010560318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60207))[0]);
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
void* _60469 = arg_buffer[1];
//reading env and args
void* kont60208 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6010660319 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60208);
arg_buffer[2] = x6010660319;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60208))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam60470_fptr() // lam60470 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60471 = arg_buffer[1];
//reading env and args
void* a6010960323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6010760320 = (decode_clo(env60471))[3];
//not do dummy comment
void* kont60209 = (decode_clo(env60471))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env60471))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont60209;
arg_buffer[3] = a6010760320;
arg_buffer[4] = a6010960323;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60470 = encode_clo(alloc_clo(lam60470_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60474 = arg_buffer[1];
//reading env and args
void* kont60209 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar61681 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61681, "0", 10);
void* a6010760320 = encode_mpz(mpzvar61681);
mpz_t* mpzvar61682 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61682, "2", 10);
void* a6010860321 = encode_mpz(mpzvar61682);

//creating new closure instance
void** clo61684 = alloc_clo(lam60470_fptr, 3);

//setting env list
clo61684[1] = equal_u63;
clo61684[2] = kont60209;
clo61684[3] = a6010760320;
void* f6021060322 = encode_clo(clo61684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6021060322;
arg_buffer[3] = x;
arg_buffer[4] = a6010860321;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam60475_fptr() // lam60475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60476 = arg_buffer[1];
//reading env and args
void* a6011260327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60211 = (decode_clo(env60476))[3];
//not do dummy comment
void* a6011060324 = (decode_clo(env60476))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env60476))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont60211;
arg_buffer[3] = a6011060324;
arg_buffer[4] = a6011260327;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60475 = encode_clo(alloc_clo(lam60475_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60479 = arg_buffer[1];
//reading env and args
void* kont60211 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar61685 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61685, "1", 10);
void* a6011060324 = encode_mpz(mpzvar61685);
mpz_t* mpzvar61686 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61686, "2", 10);
void* a6011160325 = encode_mpz(mpzvar61686);

//creating new closure instance
void** clo61688 = alloc_clo(lam60475_fptr, 3);

//setting env list
clo61688[1] = equal_u63;
clo61688[2] = a6011060324;
clo61688[3] = kont60211;
void* f6021260326 = encode_clo(clo61688);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6021260326;
arg_buffer[3] = x;
arg_buffer[4] = a6011160325;
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
void* _60480 = arg_buffer[1];
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

void* kont6021360328 = prim_car(x);
void* x60329 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6021360328);
arg_buffer[2] = x60329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6021360328))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam60483_fptr() // lam60483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60484 = arg_buffer[1];
//reading env and args
void* a6011860339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60215 = (decode_clo(env60484))[3];
//not do dummy comment
void* x = (decode_clo(env60484))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env60484))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont60215;
arg_buffer[3] = x;
arg_buffer[4] = a6011860339;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60483 = encode_clo(alloc_clo(lam60483_fptr, 0));

void* lam60485_fptr() // lam60485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60486 = arg_buffer[1];
//reading env and args
void* a6011660336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60486))[5];
//not do dummy comment
void* lst = (decode_clo(env60486))[4];
//not do dummy comment
void* kont60215 = (decode_clo(env60486))[3];
//not do dummy comment
void* x = (decode_clo(env60486))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env60486))[1];

//if-clause
bool if_guard61689 = is_true(a6011660336);
if(if_guard61689)
{
void* x6011760337 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60215);
arg_buffer[2] = x6011760337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60215))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61691 = alloc_clo(lam60483_fptr, 3);

//setting env list
clo61691[1] = member_u63;
clo61691[2] = x;
clo61691[3] = kont60215;
void* f6021660338 = encode_clo(clo61691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6021660338;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60485 = encode_clo(alloc_clo(lam60485_fptr, 0));

void* lam60487_fptr() // lam60487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60488 = arg_buffer[1];
//reading env and args
void* a6011560334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60488))[6];
//not do dummy comment
void* lst = (decode_clo(env60488))[5];
//not do dummy comment
void* kont60215 = (decode_clo(env60488))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env60488))[3];
//not do dummy comment
void* x = (decode_clo(env60488))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env60488))[1];

//creating new closure instance
void** clo61693 = alloc_clo(lam60485_fptr, 5);

//setting env list
clo61693[1] = member_u63;
clo61693[2] = x;
clo61693[3] = kont60215;
clo61693[4] = lst;
clo61693[5] = cdr;
void* f6021760335 = encode_clo(clo61693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f6021760335;
arg_buffer[3] = a6011560334;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60487 = encode_clo(alloc_clo(lam60487_fptr, 0));

void* lam60489_fptr() // lam60489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60490 = arg_buffer[1];
//reading env and args
void* a6011360331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60490))[7];
//not do dummy comment
void* lst = (decode_clo(env60490))[6];
//not do dummy comment
void* kont60215 = (decode_clo(env60490))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env60490))[4];
//not do dummy comment
void* x = (decode_clo(env60490))[3];
//not do dummy comment
void* car = (decode_clo(env60490))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env60490))[1];

//if-clause
bool if_guard61694 = is_true(a6011360331);
if(if_guard61694)
{
void* x6011460332 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60215);
arg_buffer[2] = x6011460332;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60215))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61696 = alloc_clo(lam60487_fptr, 6);

//setting env list
clo61696[1] = member_u63;
clo61696[2] = x;
clo61696[3] = equal_u63;
clo61696[4] = kont60215;
clo61696[5] = lst;
clo61696[6] = cdr;
void* f6021860333 = encode_clo(clo61696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6021860333;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60489 = encode_clo(alloc_clo(lam60489_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60491 = arg_buffer[1];
//reading env and args
void* kont60215 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61698 = alloc_clo(lam60489_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo61698[1] = member_u63;
clo61698[2] = car;
clo61698[3] = x;
clo61698[4] = equal_u63;
clo61698[5] = kont60215;
clo61698[6] = lst;
clo61698[7] = cdr;
void* f6021960330 = encode_clo(clo61698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6021960330;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam60492_fptr() // lam60492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60493 = arg_buffer[1];
//reading env and args
void* a6012260347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6012160345 = (decode_clo(env60493))[4];
//not do dummy comment
void* fun = (decode_clo(env60493))[3];
//not do dummy comment
void* kont60220 = (decode_clo(env60493))[2];
//not do dummy comment
void* foldl = (decode_clo(env60493))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont60220;
arg_buffer[3] = fun;
arg_buffer[4] = a6012160345;
arg_buffer[5] = a6012260347;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60492 = encode_clo(alloc_clo(lam60492_fptr, 0));

void* lam60494_fptr() // lam60494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60495 = arg_buffer[1];
//reading env and args
void* a6012160345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60495))[5];
//not do dummy comment
void* lst = (decode_clo(env60495))[4];
//not do dummy comment
void* fun = (decode_clo(env60495))[3];
//not do dummy comment
void* kont60220 = (decode_clo(env60495))[2];
//not do dummy comment
void* foldl = (decode_clo(env60495))[1];

//creating new closure instance
void** clo61700 = alloc_clo(lam60492_fptr, 4);

//setting env list
clo61700[1] = foldl;
clo61700[2] = kont60220;
clo61700[3] = fun;
clo61700[4] = a6012160345;
void* f6022160346 = encode_clo(clo61700);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6022160346;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60494 = encode_clo(alloc_clo(lam60494_fptr, 0));

void* lam60496_fptr() // lam60496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60497 = arg_buffer[1];
//reading env and args
void* a6012060343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60497))[6];
//not do dummy comment
void* lst = (decode_clo(env60497))[5];
//not do dummy comment
void* fun = (decode_clo(env60497))[4];
//not do dummy comment
void* acc = (decode_clo(env60497))[3];
//not do dummy comment
void* kont60220 = (decode_clo(env60497))[2];
//not do dummy comment
void* foldl = (decode_clo(env60497))[1];

//creating new closure instance
void** clo61702 = alloc_clo(lam60494_fptr, 5);

//setting env list
clo61702[1] = foldl;
clo61702[2] = kont60220;
clo61702[3] = fun;
clo61702[4] = lst;
clo61702[5] = cdr;
void* f6022260344 = encode_clo(clo61702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f6022260344;
arg_buffer[3] = a6012060343;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60496 = encode_clo(alloc_clo(lam60496_fptr, 0));

void* lam60498_fptr() // lam60498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60499 = arg_buffer[1];
//reading env and args
void* a6011960341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60499))[7];
//not do dummy comment
void* lst = (decode_clo(env60499))[6];
//not do dummy comment
void* fun = (decode_clo(env60499))[5];
//not do dummy comment
void* acc = (decode_clo(env60499))[4];
//not do dummy comment
void* kont60220 = (decode_clo(env60499))[3];
//not do dummy comment
void* car = (decode_clo(env60499))[2];
//not do dummy comment
void* foldl = (decode_clo(env60499))[1];

//if-clause
bool if_guard61703 = is_true(a6011960341);
if(if_guard61703)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60220);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60220))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61705 = alloc_clo(lam60496_fptr, 6);

//setting env list
clo61705[1] = foldl;
clo61705[2] = kont60220;
clo61705[3] = acc;
clo61705[4] = fun;
clo61705[5] = lst;
clo61705[6] = cdr;
void* f6022360342 = encode_clo(clo61705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6022360342;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60498 = encode_clo(alloc_clo(lam60498_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60500 = arg_buffer[1];
//reading env and args
void* kont60220 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo61707 = alloc_clo(lam60498_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo61707[1] = foldl;
clo61707[2] = car;
clo61707[3] = kont60220;
clo61707[4] = acc;
clo61707[5] = fun;
clo61707[6] = lst;
clo61707[7] = cdr;
void* f6022460340 = encode_clo(clo61707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6022460340;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam60501_fptr() // lam60501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60502 = arg_buffer[1];
//reading env and args
void* a6012660355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60225 = (decode_clo(env60502))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60502))[2];
//not do dummy comment
void* a6012460351 = (decode_clo(env60502))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont60225;
arg_buffer[3] = a6012460351;
arg_buffer[4] = a6012660355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60501 = encode_clo(alloc_clo(lam60501_fptr, 0));

void* lam60503_fptr() // lam60503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60504 = arg_buffer[1];
//reading env and args
void* a6012560353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60225 = (decode_clo(env60504))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60504))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60504))[3];
//not do dummy comment
void* cons = (decode_clo(env60504))[2];
//not do dummy comment
void* a6012460351 = (decode_clo(env60504))[1];

//creating new closure instance
void** clo61709 = alloc_clo(lam60501_fptr, 3);

//setting env list
clo61709[1] = a6012460351;
clo61709[2] = reverse_u45helper;
clo61709[3] = kont60225;
void* f6022660354 = encode_clo(clo61709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6022660354;
arg_buffer[3] = a6012560353;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60503 = encode_clo(alloc_clo(lam60503_fptr, 0));

void* lam60505_fptr() // lam60505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60506 = arg_buffer[1];
//reading env and args
void* a6012460351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60225 = (decode_clo(env60506))[6];
//not do dummy comment
void* lst = (decode_clo(env60506))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60506))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60506))[3];
//not do dummy comment
void* car = (decode_clo(env60506))[2];
//not do dummy comment
void* cons = (decode_clo(env60506))[1];

//creating new closure instance
void** clo61711 = alloc_clo(lam60503_fptr, 5);

//setting env list
clo61711[1] = a6012460351;
clo61711[2] = cons;
clo61711[3] = lst2;
clo61711[4] = reverse_u45helper;
clo61711[5] = kont60225;
void* f6022760352 = encode_clo(clo61711);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6022760352;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60505 = encode_clo(alloc_clo(lam60505_fptr, 0));

void* lam60507_fptr() // lam60507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60508 = arg_buffer[1];
//reading env and args
void* a6012360349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60508))[7];
//not do dummy comment
void* kont60225 = (decode_clo(env60508))[6];
//not do dummy comment
void* lst = (decode_clo(env60508))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60508))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60508))[3];
//not do dummy comment
void* car = (decode_clo(env60508))[2];
//not do dummy comment
void* cons = (decode_clo(env60508))[1];

//if-clause
bool if_guard61712 = is_true(a6012360349);
if(if_guard61712)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60225);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60225))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61714 = alloc_clo(lam60505_fptr, 6);

//setting env list
clo61714[1] = cons;
clo61714[2] = car;
clo61714[3] = lst2;
clo61714[4] = reverse_u45helper;
clo61714[5] = lst;
clo61714[6] = kont60225;
void* f6022860350 = encode_clo(clo61714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6022860350;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60507 = encode_clo(alloc_clo(lam60507_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60509 = arg_buffer[1];
//reading env and args
void* kont60225 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61716 = alloc_clo(lam60507_fptr, 7);

//setting env list
clo61716[1] = cons;
clo61716[2] = car;
clo61716[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo61716[4] = reverse_u45helper;
clo61716[5] = lst;
clo61716[6] = kont60225;
clo61716[7] = cdr;
void* f6022960348 = encode_clo(clo61716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6022960348;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam60510_fptr() // lam60510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60511 = arg_buffer[1];
//reading env and args
void* a6012760357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60511))[3];
//not do dummy comment
void* kont60230 = (decode_clo(env60511))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env60511))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont60230;
arg_buffer[3] = lst;
arg_buffer[4] = a6012760357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60510 = encode_clo(alloc_clo(lam60510_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60512 = arg_buffer[1];
//reading env and args
void* kont60230 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo61718 = alloc_clo(lam60510_fptr, 3);

//setting env list
clo61718[1] = reverse_u45helper;
clo61718[2] = kont60230;
clo61718[3] = lst;
void* f6023160356 = encode_clo(clo61718);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6023160356;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam60513_fptr() // lam60513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60514 = arg_buffer[1];
//reading env and args
void* x6013060362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60232 = (decode_clo(env60514))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60232);
arg_buffer[2] = x6013060362;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60232))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60513 = encode_clo(alloc_clo(lam60513_fptr, 0));

void* lam60515_fptr() // lam60515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60516 = arg_buffer[1];
//reading env and args
void* a6013560371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60232 = (decode_clo(env60516))[4];
//not do dummy comment
void* a6013360367 = (decode_clo(env60516))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env60516))[2];
//not do dummy comment
void* a6013160364 = (decode_clo(env60516))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont60232;
arg_buffer[3] = a6013160364;
arg_buffer[4] = a6013360367;
arg_buffer[5] = a6013560371;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60515 = encode_clo(alloc_clo(lam60515_fptr, 0));

void* lam60517_fptr() // lam60517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60518 = arg_buffer[1];
//reading env and args
void* a6013460369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60232 = (decode_clo(env60518))[6];
//not do dummy comment
void* cons = (decode_clo(env60518))[5];
//not do dummy comment
void* a6013360367 = (decode_clo(env60518))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env60518))[3];
//not do dummy comment
void* a6013160364 = (decode_clo(env60518))[2];
//not do dummy comment
void* lst2 = (decode_clo(env60518))[1];

//creating new closure instance
void** clo61720 = alloc_clo(lam60515_fptr, 4);

//setting env list
clo61720[1] = a6013160364;
clo61720[2] = take_u45helper;
clo61720[3] = a6013360367;
clo61720[4] = kont60232;
void* f6023460370 = encode_clo(clo61720);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6023460370;
arg_buffer[3] = a6013460369;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60517 = encode_clo(alloc_clo(lam60517_fptr, 0));

void* lam60519_fptr() // lam60519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60520 = arg_buffer[1];
//reading env and args
void* a6013360367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60520))[7];
//not do dummy comment
void* kont60232 = (decode_clo(env60520))[6];
//not do dummy comment
void* car = (decode_clo(env60520))[5];
//not do dummy comment
void* cons = (decode_clo(env60520))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env60520))[3];
//not do dummy comment
void* a6013160364 = (decode_clo(env60520))[2];
//not do dummy comment
void* lst2 = (decode_clo(env60520))[1];

//creating new closure instance
void** clo61722 = alloc_clo(lam60517_fptr, 6);

//setting env list
clo61722[1] = lst2;
clo61722[2] = a6013160364;
clo61722[3] = take_u45helper;
clo61722[4] = a6013360367;
clo61722[5] = cons;
clo61722[6] = kont60232;
void* f6023560368 = encode_clo(clo61722);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6023560368;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60519 = encode_clo(alloc_clo(lam60519_fptr, 0));

void* lam60522_fptr() // lam60522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60523 = arg_buffer[1];
//reading env and args
void* a6013160364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60523))[8];
//not do dummy comment
void* kont60232 = (decode_clo(env60523))[7];
//not do dummy comment
void* cons = (decode_clo(env60523))[6];
//not do dummy comment
void* _u45 = (decode_clo(env60523))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env60523))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60523))[3];
//not do dummy comment
void* n = (decode_clo(env60523))[2];
//not do dummy comment
void* car = (decode_clo(env60523))[1];
mpz_t* mpzvar61723 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61723, "1", 10);
void* a6013260365 = encode_mpz(mpzvar61723);

//creating new closure instance
void** clo61725 = alloc_clo(lam60519_fptr, 7);

//setting env list
clo61725[1] = lst2;
clo61725[2] = a6013160364;
clo61725[3] = take_u45helper;
clo61725[4] = cons;
clo61725[5] = car;
clo61725[6] = kont60232;
clo61725[7] = lst;
void* f6023660366 = encode_clo(clo61725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6023660366;
arg_buffer[3] = n;
arg_buffer[4] = a6013260365;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60522 = encode_clo(alloc_clo(lam60522_fptr, 0));

void* lam60524_fptr() // lam60524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60525 = arg_buffer[1];
//reading env and args
void* a6012960360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60525))[10];
//not do dummy comment
void* lst = (decode_clo(env60525))[9];
//not do dummy comment
void* reverse = (decode_clo(env60525))[8];
//not do dummy comment
void* kont60232 = (decode_clo(env60525))[7];
//not do dummy comment
void* cons = (decode_clo(env60525))[6];
//not do dummy comment
void* _u45 = (decode_clo(env60525))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env60525))[4];
//not do dummy comment
void* lst2 = (decode_clo(env60525))[3];
//not do dummy comment
void* n = (decode_clo(env60525))[2];
//not do dummy comment
void* car = (decode_clo(env60525))[1];

//if-clause
bool if_guard61726 = is_true(a6012960360);
if(if_guard61726)
{

//creating new closure instance
void** clo61728 = alloc_clo(lam60513_fptr, 1);

//setting env list
clo61728[1] = kont60232;
void* f6023360361 = encode_clo(clo61728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f6023360361;
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
void** clo61730 = alloc_clo(lam60522_fptr, 8);

//setting env list
clo61730[1] = car;
clo61730[2] = n;
clo61730[3] = lst2;
clo61730[4] = take_u45helper;
clo61730[5] = _u45;
clo61730[6] = cons;
clo61730[7] = kont60232;
clo61730[8] = lst;
void* f6023760363 = encode_clo(clo61730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6023760363;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60524 = encode_clo(alloc_clo(lam60524_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60527 = arg_buffer[1];
//reading env and args
void* kont60232 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar61731 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61731, "0", 10);
void* a6012860358 = encode_mpz(mpzvar61731);

//creating new closure instance
void** clo61733 = alloc_clo(lam60524_fptr, 10);

//setting env list
clo61733[1] = car;
clo61733[2] = n;
clo61733[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo61733[4] = take_u45helper;
clo61733[5] = _u45;
clo61733[6] = cons;
clo61733[7] = kont60232;
clo61733[8] = reverse;
clo61733[9] = lst;
clo61733[10] = cdr;
void* f6023860359 = encode_clo(clo61733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6023860359;
arg_buffer[3] = n;
arg_buffer[4] = a6012860358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam60528_fptr() // lam60528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60529 = arg_buffer[1];
//reading env and args
void* a6013660373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60529))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env60529))[3];
//not do dummy comment
void* n = (decode_clo(env60529))[2];
//not do dummy comment
void* kont60239 = (decode_clo(env60529))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont60239;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a6013660373;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60528 = encode_clo(alloc_clo(lam60528_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60530 = arg_buffer[1];
//reading env and args
void* kont60239 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61735 = alloc_clo(lam60528_fptr, 4);

//setting env list
clo61735[1] = kont60239;
clo61735[2] = n;
clo61735[3] = take_u45helper;
clo61735[4] = lst;
void* f6024060372 = encode_clo(clo61735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6024060372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam60532_fptr() // lam60532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60533 = arg_buffer[1];
//reading env and args
void* a6014160381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60241 = (decode_clo(env60533))[3];
//not do dummy comment
void* _u43 = (decode_clo(env60533))[2];
//not do dummy comment
void* a6013960377 = (decode_clo(env60533))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont60241;
arg_buffer[3] = a6013960377;
arg_buffer[4] = a6014160381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60532 = encode_clo(alloc_clo(lam60532_fptr, 0));

void* lam60534_fptr() // lam60534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60535 = arg_buffer[1];
//reading env and args
void* a6014060379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60241 = (decode_clo(env60535))[4];
//not do dummy comment
void* length = (decode_clo(env60535))[3];
//not do dummy comment
void* _u43 = (decode_clo(env60535))[2];
//not do dummy comment
void* a6013960377 = (decode_clo(env60535))[1];

//creating new closure instance
void** clo61737 = alloc_clo(lam60532_fptr, 3);

//setting env list
clo61737[1] = a6013960377;
clo61737[2] = _u43;
clo61737[3] = kont60241;
void* f6024260380 = encode_clo(clo61737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f6024260380;
arg_buffer[3] = a6014060379;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60534 = encode_clo(alloc_clo(lam60534_fptr, 0));

void* lam60537_fptr() // lam60537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60538 = arg_buffer[1];
//reading env and args
void* a6013760375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60538))[5];
//not do dummy comment
void* kont60241 = (decode_clo(env60538))[4];
//not do dummy comment
void* lst = (decode_clo(env60538))[3];
//not do dummy comment
void* length = (decode_clo(env60538))[2];
//not do dummy comment
void* _u43 = (decode_clo(env60538))[1];

//if-clause
bool if_guard61738 = is_true(a6013760375);
if(if_guard61738)
{
mpz_t* mpzvar61739 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61739, "0", 10);
void* x6013860376 = encode_mpz(mpzvar61739);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60241);
arg_buffer[2] = x6013860376;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60241))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar61740 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61740, "1", 10);
void* a6013960377 = encode_mpz(mpzvar61740);

//creating new closure instance
void** clo61742 = alloc_clo(lam60534_fptr, 4);

//setting env list
clo61742[1] = a6013960377;
clo61742[2] = _u43;
clo61742[3] = length;
clo61742[4] = kont60241;
void* f6024360378 = encode_clo(clo61742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6024360378;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60537 = encode_clo(alloc_clo(lam60537_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60539 = arg_buffer[1];
//reading env and args
void* kont60241 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo61744 = alloc_clo(lam60537_fptr, 5);

//setting env list
clo61744[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo61744[2] = length;
clo61744[3] = lst;
clo61744[4] = kont60241;
clo61744[5] = cdr;
void* f6024460374 = encode_clo(clo61744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6024460374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam60540_fptr() // lam60540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60541 = arg_buffer[1];
//reading env and args
void* x6014360385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60245 = (decode_clo(env60541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60245);
arg_buffer[2] = x6014360385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60540 = encode_clo(alloc_clo(lam60540_fptr, 0));

void* lam60542_fptr() // lam60542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60543 = arg_buffer[1];
//reading env and args
void* a6014760393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env60543))[3];
//not do dummy comment
void* kont60245 = (decode_clo(env60543))[2];
//not do dummy comment
void* a6014560389 = (decode_clo(env60543))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont60245;
arg_buffer[3] = a6014560389;
arg_buffer[4] = a6014760393;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60542 = encode_clo(alloc_clo(lam60542_fptr, 0));

void* lam60544_fptr() // lam60544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60545 = arg_buffer[1];
//reading env and args
void* a6014660391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env60545))[5];
//not do dummy comment
void* cons = (decode_clo(env60545))[4];
//not do dummy comment
void* a6014560389 = (decode_clo(env60545))[3];
//not do dummy comment
void* kont60245 = (decode_clo(env60545))[2];
//not do dummy comment
void* map = (decode_clo(env60545))[1];

//creating new closure instance
void** clo61746 = alloc_clo(lam60542_fptr, 3);

//setting env list
clo61746[1] = a6014560389;
clo61746[2] = kont60245;
clo61746[3] = cons;
void* f6024760392 = encode_clo(clo61746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f6024760392;
arg_buffer[3] = proc;
arg_buffer[4] = a6014660391;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60544 = encode_clo(alloc_clo(lam60544_fptr, 0));

void* lam60546_fptr() // lam60546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60547 = arg_buffer[1];
//reading env and args
void* a6014560389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60547))[6];
//not do dummy comment
void* lst = (decode_clo(env60547))[5];
//not do dummy comment
void* proc = (decode_clo(env60547))[4];
//not do dummy comment
void* cons = (decode_clo(env60547))[3];
//not do dummy comment
void* kont60245 = (decode_clo(env60547))[2];
//not do dummy comment
void* map = (decode_clo(env60547))[1];

//creating new closure instance
void** clo61748 = alloc_clo(lam60544_fptr, 5);

//setting env list
clo61748[1] = map;
clo61748[2] = kont60245;
clo61748[3] = a6014560389;
clo61748[4] = cons;
clo61748[5] = proc;
void* f6024860390 = encode_clo(clo61748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6024860390;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60546 = encode_clo(alloc_clo(lam60546_fptr, 0));

void* lam60548_fptr() // lam60548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60549 = arg_buffer[1];
//reading env and args
void* a6014460387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60549))[6];
//not do dummy comment
void* lst = (decode_clo(env60549))[5];
//not do dummy comment
void* proc = (decode_clo(env60549))[4];
//not do dummy comment
void* cons = (decode_clo(env60549))[3];
//not do dummy comment
void* kont60245 = (decode_clo(env60549))[2];
//not do dummy comment
void* map = (decode_clo(env60549))[1];

//creating new closure instance
void** clo61750 = alloc_clo(lam60546_fptr, 6);

//setting env list
clo61750[1] = map;
clo61750[2] = kont60245;
clo61750[3] = cons;
clo61750[4] = proc;
clo61750[5] = lst;
clo61750[6] = cdr;
void* f6024960388 = encode_clo(clo61750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f6024960388;
arg_buffer[3] = a6014460387;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60548 = encode_clo(alloc_clo(lam60548_fptr, 0));

void* lam60550_fptr() // lam60550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60551 = arg_buffer[1];
//reading env and args
void* a6014260383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60551))[8];
//not do dummy comment
void* proc = (decode_clo(env60551))[7];
//not do dummy comment
void* car = (decode_clo(env60551))[6];
//not do dummy comment
void* cons = (decode_clo(env60551))[5];
//not do dummy comment
void* list = (decode_clo(env60551))[4];
//not do dummy comment
void* cdr = (decode_clo(env60551))[3];
//not do dummy comment
void* kont60245 = (decode_clo(env60551))[2];
//not do dummy comment
void* map = (decode_clo(env60551))[1];

//if-clause
bool if_guard61751 = is_true(a6014260383);
if(if_guard61751)
{

//creating new closure instance
void** clo61753 = alloc_clo(lam60540_fptr, 1);

//setting env list
clo61753[1] = kont60245;
void* f6024660384 = encode_clo(clo61753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6024660384;
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
void** clo61755 = alloc_clo(lam60548_fptr, 6);

//setting env list
clo61755[1] = map;
clo61755[2] = kont60245;
clo61755[3] = cons;
clo61755[4] = proc;
clo61755[5] = lst;
clo61755[6] = cdr;
void* f6025060386 = encode_clo(clo61755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6025060386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60550 = encode_clo(alloc_clo(lam60550_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60552 = arg_buffer[1];
//reading env and args
void* kont60245 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61757 = alloc_clo(lam60550_fptr, 8);

//setting env list
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo61757[1] = map;
clo61757[2] = kont60245;
clo61757[3] = cdr;
clo61757[4] = list;
clo61757[5] = cons;
clo61757[6] = car;
clo61757[7] = proc;
clo61757[8] = lst;
void* f6025160382 = encode_clo(clo61757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6025160382;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam60553_fptr() // lam60553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60554 = arg_buffer[1];
//reading env and args
void* x6014960397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60252 = (decode_clo(env60554))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60252);
arg_buffer[2] = x6014960397;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60252))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60553 = encode_clo(alloc_clo(lam60553_fptr, 0));

void* lam60555_fptr() // lam60555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60556 = arg_buffer[1];
//reading env and args
void* a6015460407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6015260403 = (decode_clo(env60556))[3];
//not do dummy comment
void* kont60252 = (decode_clo(env60556))[2];
//not do dummy comment
void* cons = (decode_clo(env60556))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont60252;
arg_buffer[3] = a6015260403;
arg_buffer[4] = a6015460407;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60555 = encode_clo(alloc_clo(lam60555_fptr, 0));

void* lam60557_fptr() // lam60557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60558 = arg_buffer[1];
//reading env and args
void* a6015360405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6015260403 = (decode_clo(env60558))[5];
//not do dummy comment
void* op = (decode_clo(env60558))[4];
//not do dummy comment
void* kont60252 = (decode_clo(env60558))[3];
//not do dummy comment
void* filter = (decode_clo(env60558))[2];
//not do dummy comment
void* cons = (decode_clo(env60558))[1];

//creating new closure instance
void** clo61759 = alloc_clo(lam60555_fptr, 3);

//setting env list
clo61759[1] = cons;
clo61759[2] = kont60252;
clo61759[3] = a6015260403;
void* f6025460406 = encode_clo(clo61759);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f6025460406;
arg_buffer[3] = op;
arg_buffer[4] = a6015360405;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60557 = encode_clo(alloc_clo(lam60557_fptr, 0));

void* lam60559_fptr() // lam60559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60560 = arg_buffer[1];
//reading env and args
void* a6015260403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60560))[6];
//not do dummy comment
void* lst = (decode_clo(env60560))[5];
//not do dummy comment
void* op = (decode_clo(env60560))[4];
//not do dummy comment
void* kont60252 = (decode_clo(env60560))[3];
//not do dummy comment
void* filter = (decode_clo(env60560))[2];
//not do dummy comment
void* cons = (decode_clo(env60560))[1];

//creating new closure instance
void** clo61761 = alloc_clo(lam60557_fptr, 5);

//setting env list
clo61761[1] = cons;
clo61761[2] = filter;
clo61761[3] = kont60252;
clo61761[4] = op;
clo61761[5] = a6015260403;
void* f6025560404 = encode_clo(clo61761);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6025560404;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60559 = encode_clo(alloc_clo(lam60559_fptr, 0));

void* lam60561_fptr() // lam60561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60562 = arg_buffer[1];
//reading env and args
void* a6015560409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env60562))[3];
//not do dummy comment
void* kont60252 = (decode_clo(env60562))[2];
//not do dummy comment
void* filter = (decode_clo(env60562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont60252;
arg_buffer[3] = op;
arg_buffer[4] = a6015560409;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60561 = encode_clo(alloc_clo(lam60561_fptr, 0));

void* lam60563_fptr() // lam60563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60564 = arg_buffer[1];
//reading env and args
void* a6015160401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60564))[7];
//not do dummy comment
void* lst = (decode_clo(env60564))[6];
//not do dummy comment
void* op = (decode_clo(env60564))[5];
//not do dummy comment
void* kont60252 = (decode_clo(env60564))[4];
//not do dummy comment
void* cons = (decode_clo(env60564))[3];
//not do dummy comment
void* filter = (decode_clo(env60564))[2];
//not do dummy comment
void* car = (decode_clo(env60564))[1];

//if-clause
bool if_guard61762 = is_true(a6015160401);
if(if_guard61762)
{

//creating new closure instance
void** clo61764 = alloc_clo(lam60559_fptr, 6);

//setting env list
clo61764[1] = cons;
clo61764[2] = filter;
clo61764[3] = kont60252;
clo61764[4] = op;
clo61764[5] = lst;
clo61764[6] = cdr;
void* f6025660402 = encode_clo(clo61764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6025660402;
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
void** clo61766 = alloc_clo(lam60561_fptr, 3);

//setting env list
clo61766[1] = filter;
clo61766[2] = kont60252;
clo61766[3] = op;
void* f6025760408 = encode_clo(clo61766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6025760408;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60563 = encode_clo(alloc_clo(lam60563_fptr, 0));

void* lam60565_fptr() // lam60565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60566 = arg_buffer[1];
//reading env and args
void* a6015060399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60566))[7];
//not do dummy comment
void* lst = (decode_clo(env60566))[6];
//not do dummy comment
void* op = (decode_clo(env60566))[5];
//not do dummy comment
void* kont60252 = (decode_clo(env60566))[4];
//not do dummy comment
void* cons = (decode_clo(env60566))[3];
//not do dummy comment
void* filter = (decode_clo(env60566))[2];
//not do dummy comment
void* car = (decode_clo(env60566))[1];

//creating new closure instance
void** clo61768 = alloc_clo(lam60563_fptr, 7);

//setting env list
clo61768[1] = car;
clo61768[2] = filter;
clo61768[3] = cons;
clo61768[4] = kont60252;
clo61768[5] = op;
clo61768[6] = lst;
clo61768[7] = cdr;
void* f6025860400 = encode_clo(clo61768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f6025860400;
arg_buffer[3] = a6015060399;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60565 = encode_clo(alloc_clo(lam60565_fptr, 0));

void* lam60567_fptr() // lam60567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60568 = arg_buffer[1];
//reading env and args
void* a6014860395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env60568))[8];
//not do dummy comment
void* op = (decode_clo(env60568))[7];
//not do dummy comment
void* kont60252 = (decode_clo(env60568))[6];
//not do dummy comment
void* cons = (decode_clo(env60568))[5];
//not do dummy comment
void* list = (decode_clo(env60568))[4];
//not do dummy comment
void* cdr = (decode_clo(env60568))[3];
//not do dummy comment
void* filter = (decode_clo(env60568))[2];
//not do dummy comment
void* car = (decode_clo(env60568))[1];

//if-clause
bool if_guard61769 = is_true(a6014860395);
if(if_guard61769)
{

//creating new closure instance
void** clo61771 = alloc_clo(lam60553_fptr, 1);

//setting env list
clo61771[1] = kont60252;
void* f6025360396 = encode_clo(clo61771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6025360396;
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
void** clo61773 = alloc_clo(lam60565_fptr, 7);

//setting env list
clo61773[1] = car;
clo61773[2] = filter;
clo61773[3] = cons;
clo61773[4] = kont60252;
clo61773[5] = op;
clo61773[6] = lst;
clo61773[7] = cdr;
void* f6025960398 = encode_clo(clo61773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6025960398;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60567 = encode_clo(alloc_clo(lam60567_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60569 = arg_buffer[1];
//reading env and args
void* kont60252 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61775 = alloc_clo(lam60567_fptr, 8);

//setting env list
clo61775[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo61775[2] = filter;
clo61775[3] = cdr;
clo61775[4] = list;
clo61775[5] = cons;
clo61775[6] = kont60252;
clo61775[7] = op;
clo61775[8] = lst;
void* f6026060394 = encode_clo(clo61775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6026060394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam60570_fptr() // lam60570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60571 = arg_buffer[1];
//reading env and args
void* a6016060417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env60571))[3];
//not do dummy comment
void* kont60261 = (decode_clo(env60571))[2];
//not do dummy comment
void* a6015860414 = (decode_clo(env60571))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont60261;
arg_buffer[3] = a6015860414;
arg_buffer[4] = a6016060417;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60570 = encode_clo(alloc_clo(lam60570_fptr, 0));

void* lam60573_fptr() // lam60573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60574 = arg_buffer[1];
//reading env and args
void* a6015860414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env60574))[4];
//not do dummy comment
void* kont60261 = (decode_clo(env60574))[3];
//not do dummy comment
void* n = (decode_clo(env60574))[2];
//not do dummy comment
void* _u45 = (decode_clo(env60574))[1];
mpz_t* mpzvar61776 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61776, "1", 10);
void* a6015960415 = encode_mpz(mpzvar61776);

//creating new closure instance
void** clo61778 = alloc_clo(lam60570_fptr, 3);

//setting env list
clo61778[1] = a6015860414;
clo61778[2] = kont60261;
clo61778[3] = drop;
void* f6026260416 = encode_clo(clo61778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6026260416;
arg_buffer[3] = n;
arg_buffer[4] = a6015960415;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60573 = encode_clo(alloc_clo(lam60573_fptr, 0));

void* lam60575_fptr() // lam60575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60576 = arg_buffer[1];
//reading env and args
void* a6015760412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60576))[6];
//not do dummy comment
void* kont60261 = (decode_clo(env60576))[5];
//not do dummy comment
void* n = (decode_clo(env60576))[4];
//not do dummy comment
void* _u45 = (decode_clo(env60576))[3];
//not do dummy comment
void* lst = (decode_clo(env60576))[2];
//not do dummy comment
void* drop = (decode_clo(env60576))[1];

//if-clause
bool if_guard61779 = is_true(a6015760412);
if(if_guard61779)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60261);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60261))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61781 = alloc_clo(lam60573_fptr, 4);

//setting env list
clo61781[1] = _u45;
clo61781[2] = n;
clo61781[3] = kont60261;
clo61781[4] = drop;
void* f6026360413 = encode_clo(clo61781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6026360413;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60575 = encode_clo(alloc_clo(lam60575_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60578 = arg_buffer[1];
//reading env and args
void* kont60261 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar61782 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61782, "0", 10);
void* a6015660410 = encode_mpz(mpzvar61782);

//creating new closure instance
void** clo61784 = alloc_clo(lam60575_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo61784[1] = drop;
clo61784[2] = lst;
clo61784[3] = _u45;
clo61784[4] = n;
clo61784[5] = kont60261;
clo61784[6] = cdr;
void* f6026460411 = encode_clo(clo61784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6026460411;
arg_buffer[3] = n;
arg_buffer[4] = a6015660410;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam60579_fptr() // lam60579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60580 = arg_buffer[1];
//reading env and args
void* a6016460425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6016260421 = (decode_clo(env60580))[3];
//not do dummy comment
void* kont60265 = (decode_clo(env60580))[2];
//not do dummy comment
void* proc = (decode_clo(env60580))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont60265;
arg_buffer[3] = a6016260421;
arg_buffer[4] = a6016460425;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60579 = encode_clo(alloc_clo(lam60579_fptr, 0));

void* lam60581_fptr() // lam60581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60582 = arg_buffer[1];
//reading env and args
void* a6016360423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env60582))[5];
//not do dummy comment
void* a6016260421 = (decode_clo(env60582))[4];
//not do dummy comment
void* kont60265 = (decode_clo(env60582))[3];
//not do dummy comment
void* proc = (decode_clo(env60582))[2];
//not do dummy comment
void* acc = (decode_clo(env60582))[1];

//creating new closure instance
void** clo61786 = alloc_clo(lam60579_fptr, 3);

//setting env list
clo61786[1] = proc;
clo61786[2] = kont60265;
clo61786[3] = a6016260421;
void* f6026660424 = encode_clo(clo61786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f6026660424;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a6016360423;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60581 = encode_clo(alloc_clo(lam60581_fptr, 0));

void* lam60583_fptr() // lam60583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60584 = arg_buffer[1];
//reading env and args
void* a6016260421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60584))[6];
//not do dummy comment
void* kont60265 = (decode_clo(env60584))[5];
//not do dummy comment
void* foldr = (decode_clo(env60584))[4];
//not do dummy comment
void* lst = (decode_clo(env60584))[3];
//not do dummy comment
void* proc = (decode_clo(env60584))[2];
//not do dummy comment
void* acc = (decode_clo(env60584))[1];

//creating new closure instance
void** clo61788 = alloc_clo(lam60581_fptr, 5);

//setting env list
clo61788[1] = acc;
clo61788[2] = proc;
clo61788[3] = kont60265;
clo61788[4] = a6016260421;
clo61788[5] = foldr;
void* f6026760422 = encode_clo(clo61788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6026760422;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60583 = encode_clo(alloc_clo(lam60583_fptr, 0));

void* lam60585_fptr() // lam60585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60586 = arg_buffer[1];
//reading env and args
void* a6016160419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60586))[7];
//not do dummy comment
void* kont60265 = (decode_clo(env60586))[6];
//not do dummy comment
void* car = (decode_clo(env60586))[5];
//not do dummy comment
void* foldr = (decode_clo(env60586))[4];
//not do dummy comment
void* lst = (decode_clo(env60586))[3];
//not do dummy comment
void* proc = (decode_clo(env60586))[2];
//not do dummy comment
void* acc = (decode_clo(env60586))[1];

//if-clause
bool if_guard61789 = is_true(a6016160419);
if(if_guard61789)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60265);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60265))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61791 = alloc_clo(lam60583_fptr, 6);

//setting env list
clo61791[1] = acc;
clo61791[2] = proc;
clo61791[3] = lst;
clo61791[4] = foldr;
clo61791[5] = kont60265;
clo61791[6] = cdr;
void* f6026860420 = encode_clo(clo61791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6026860420;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60585 = encode_clo(alloc_clo(lam60585_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60587 = arg_buffer[1];
//reading env and args
void* kont60265 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo61793 = alloc_clo(lam60585_fptr, 7);

//setting env list
clo61793[1] = acc;
clo61793[2] = proc;
clo61793[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo61793[4] = foldr;
clo61793[5] = car;
clo61793[6] = kont60265;
clo61793[7] = cdr;
void* f6026960418 = encode_clo(clo61793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6026960418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam60588_fptr() // lam60588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60589 = arg_buffer[1];
//reading env and args
void* a6016860433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6016660429 = (decode_clo(env60589))[3];
//not do dummy comment
void* kont60270 = (decode_clo(env60589))[2];
//not do dummy comment
void* cons = (decode_clo(env60589))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont60270;
arg_buffer[3] = a6016660429;
arg_buffer[4] = a6016860433;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60588 = encode_clo(alloc_clo(lam60588_fptr, 0));

void* lam60590_fptr() // lam60590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60591 = arg_buffer[1];
//reading env and args
void* a6016760431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env60591))[5];
//not do dummy comment
void* lst2 = (decode_clo(env60591))[4];
//not do dummy comment
void* a6016660429 = (decode_clo(env60591))[3];
//not do dummy comment
void* kont60270 = (decode_clo(env60591))[2];
//not do dummy comment
void* cons = (decode_clo(env60591))[1];

//creating new closure instance
void** clo61795 = alloc_clo(lam60588_fptr, 3);

//setting env list
clo61795[1] = cons;
clo61795[2] = kont60270;
clo61795[3] = a6016660429;
void* f6027160432 = encode_clo(clo61795);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f6027160432;
arg_buffer[3] = a6016760431;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60590 = encode_clo(alloc_clo(lam60590_fptr, 0));

void* lam60592_fptr() // lam60592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60593 = arg_buffer[1];
//reading env and args
void* a6016660429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60593))[6];
//not do dummy comment
void* append = (decode_clo(env60593))[5];
//not do dummy comment
void* lst2 = (decode_clo(env60593))[4];
//not do dummy comment
void* lst1 = (decode_clo(env60593))[3];
//not do dummy comment
void* kont60270 = (decode_clo(env60593))[2];
//not do dummy comment
void* cons = (decode_clo(env60593))[1];

//creating new closure instance
void** clo61797 = alloc_clo(lam60590_fptr, 5);

//setting env list
clo61797[1] = cons;
clo61797[2] = kont60270;
clo61797[3] = a6016660429;
clo61797[4] = lst2;
clo61797[5] = append;
void* f6027260430 = encode_clo(clo61797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6027260430;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60592 = encode_clo(alloc_clo(lam60592_fptr, 0));

void* lam60594_fptr() // lam60594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60595 = arg_buffer[1];
//reading env and args
void* a6016560427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env60595))[7];
//not do dummy comment
void* append = (decode_clo(env60595))[6];
//not do dummy comment
void* lst2 = (decode_clo(env60595))[5];
//not do dummy comment
void* lst1 = (decode_clo(env60595))[4];
//not do dummy comment
void* car = (decode_clo(env60595))[3];
//not do dummy comment
void* kont60270 = (decode_clo(env60595))[2];
//not do dummy comment
void* cons = (decode_clo(env60595))[1];

//if-clause
bool if_guard61798 = is_true(a6016560427);
if(if_guard61798)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60270);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60270))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo61800 = alloc_clo(lam60592_fptr, 6);

//setting env list
clo61800[1] = cons;
clo61800[2] = kont60270;
clo61800[3] = lst1;
clo61800[4] = lst2;
clo61800[5] = append;
clo61800[6] = cdr;
void* f6027360428 = encode_clo(clo61800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6027360428;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam60594 = encode_clo(alloc_clo(lam60594_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60596 = arg_buffer[1];
//reading env and args
void* kont60270 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo61802 = alloc_clo(lam60594_fptr, 7);

//setting env list
clo61802[1] = cons;
clo61802[2] = kont60270;
clo61802[3] = car;
clo61802[4] = lst1;
clo61802[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo61802[6] = append;
clo61802[7] = cdr;
void* f6027460426 = encode_clo(clo61802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6027460426;
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
void* _60597 = arg_buffer[1];
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

void* kont6027560434 = prim_car(lst);
void* lst60435 = prim_cdr(lst);
void* x6016960436 = apply_prim_hash(lst60435);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6027560434);
arg_buffer[2] = x6016960436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6027560434))[0]);
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
void* _60598 = arg_buffer[1];
//reading env and args
void* kont60277 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6017060437 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60277);
arg_buffer[2] = x6017060437;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60277))[0]);
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
void* _60599 = arg_buffer[1];
//reading env and args
void* kont60278 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x6017160438 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60278);
arg_buffer[2] = x6017160438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60278))[0]);
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
void* _60600 = arg_buffer[1];
//reading env and args
void* kont60279 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6017260439 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60279);
arg_buffer[2] = x6017260439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60279))[0]);
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
void* _60601 = arg_buffer[1];
//reading env and args
void* kont60280 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x6017360440 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60280);
arg_buffer[2] = x6017360440;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60280))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam60603_fptr() // lam60603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60604 = arg_buffer[1];
//reading env and args
void* a6018160450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env60604))[2];
//not do dummy comment
void* kont60281 = (decode_clo(env60604))[1];
void* a6018260451 = encode_str(new(GC) std::string("work"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont60281;
arg_buffer[3] = a6018160450;
arg_buffer[4] = a6018260451;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60603 = encode_clo(alloc_clo(lam60603_fptr, 0));

void* lam60607_fptr() // lam60607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60608 = arg_buffer[1];
//reading env and args
void* a6017860446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env60608))[3];
//not do dummy comment
void* hash_u45set = (decode_clo(env60608))[2];
//not do dummy comment
void* kont60281 = (decode_clo(env60608))[1];
void* a6017960447 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar61803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61803, "90", 10);
void* a6018060448 = encode_mpz(mpzvar61803);

//creating new closure instance
void** clo61805 = alloc_clo(lam60603_fptr, 2);

//setting env list
clo61805[1] = kont60281;
clo61805[2] = hash_u45ref;
void* f6028260449 = encode_clo(clo61805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45set);
arg_buffer[2] = f6028260449;
arg_buffer[3] = a6017860446;
arg_buffer[4] = a6017960447;
arg_buffer[5] = a6018060448;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60607 = encode_clo(alloc_clo(lam60607_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60613 = arg_buffer[1];
//reading env and args
void* kont60281 = arg_buffer[2];
//Dummy comment
void* a6017460441 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar61806 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61806, "80", 10);
void* a6017560442 = encode_mpz(mpzvar61806);
mpz_t* mpzvar61807 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar61807, "10", 10);
void* a6017660443 = encode_mpz(mpzvar61807);
void* a6017760444 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo61809 = alloc_clo(lam60607_fptr, 3);

//setting env list
clo61809[1] = kont60281;
clo61809[2] = hash_u45set;
clo61809[3] = hash_u45ref;
void* f6028360445 = encode_clo(clo61809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f6028360445;
arg_buffer[3] = a6017460441;
arg_buffer[4] = a6017560442;
arg_buffer[5] = a6017660443;
arg_buffer[6] = a6017760444;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam60614_fptr() // lam60614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env60615 = arg_buffer[1];
//reading env and args
void* x6018360453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont60284 = (decode_clo(env60615))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont60284);
arg_buffer[2] = x6018360453;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont60284))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam60614 = encode_clo(alloc_clo(lam60614_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _60616 = arg_buffer[1];
//reading env and args
void* kont60284 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo61811 = alloc_clo(lam60614_fptr, 1);

//setting env list
clo61811[1] = kont60284;
void* f6028560452 = encode_clo(clo61811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f6028560452;
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

