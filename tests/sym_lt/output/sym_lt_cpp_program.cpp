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
void* _115462 = arg_buffer[1];
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

void* kont115199115299 = prim_car(lst);
void* lst115300 = prim_cdr(lst);
void* x115109115301 = apply_prim__u43(lst115300);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115199115299);
arg_buffer[2] = x115109115301;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115199115299))[0]);
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
void* _115463 = arg_buffer[1];
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

void* kont115201115302 = prim_car(lst);
void* lst115303 = prim_cdr(lst);
void* x115110115304 = apply_prim__u45(lst115303);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115201115302);
arg_buffer[2] = x115110115304;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115201115302))[0]);
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
void* _115464 = arg_buffer[1];
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

void* kont115203115305 = prim_car(lst);
void* lst115306 = prim_cdr(lst);
void* x115111115307 = apply_prim__u42(lst115306);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115203115305);
arg_buffer[2] = x115111115307;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115203115305))[0]);
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
void* _115465 = arg_buffer[1];
//reading env and args
void* kont115205 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x115112115308 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115205);
arg_buffer[2] = x115112115308;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115205))[0]);
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
void* _115466 = arg_buffer[1];
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

void* kont115206115309 = prim_car(lst);
void* lst115310 = prim_cdr(lst);
void* x115113115311 = apply_prim__u47(lst115310);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115206115309);
arg_buffer[2] = x115113115311;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115206115309))[0]);
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
void* _115467 = arg_buffer[1];
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

void* kont115208115312 = prim_car(lst);
void* lst115313 = prim_cdr(lst);
void* x115114115314 = apply_prim__u61(lst115313);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115208115312);
arg_buffer[2] = x115114115314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115208115312))[0]);
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
void* _115468 = arg_buffer[1];
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

void* kont115210115315 = prim_car(lst);
void* lst115316 = prim_cdr(lst);
void* x115115115317 = apply_prim__u62(lst115316);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115210115315);
arg_buffer[2] = x115115115317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115210115315))[0]);
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
void* _115469 = arg_buffer[1];
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

void* kont115212115318 = prim_car(lst);
void* lst115319 = prim_cdr(lst);
void* x115116115320 = apply_prim__u60(lst115319);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115212115318);
arg_buffer[2] = x115116115320;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115212115318))[0]);
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
void* _115470 = arg_buffer[1];
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

void* kont115214115321 = prim_car(lst);
void* lst115322 = prim_cdr(lst);
void* x115117115323 = apply_prim__u60_u61(lst115322);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115214115321);
arg_buffer[2] = x115117115323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115214115321))[0]);
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
void* _115471 = arg_buffer[1];
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

void* kont115216115324 = prim_car(lst);
void* lst115325 = prim_cdr(lst);
void* x115118115326 = apply_prim__u62_u61(lst115325);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115216115324);
arg_buffer[2] = x115118115326;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115216115324))[0]);
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
void* _115472 = arg_buffer[1];
//reading env and args
void* kont115218 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x115119115327 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115218);
arg_buffer[2] = x115119115327;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115218))[0]);
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
void* _115473 = arg_buffer[1];
//reading env and args
void* kont115219 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x115120115328 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115219);
arg_buffer[2] = x115120115328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115219))[0]);
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
void* _115474 = arg_buffer[1];
//reading env and args
void* kont115220 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x115121115329 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115220);
arg_buffer[2] = x115121115329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115220))[0]);
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
void* _115475 = arg_buffer[1];
//reading env and args
void* kont115221 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x115122115330 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115221);
arg_buffer[2] = x115122115330;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115221))[0]);
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
void* _115476 = arg_buffer[1];
//reading env and args
void* kont115222 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x115123115331 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115222);
arg_buffer[2] = x115123115331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115222))[0]);
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
void* _115477 = arg_buffer[1];
//reading env and args
void* kont115223 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x115124115332 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115223);
arg_buffer[2] = x115124115332;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115223))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam115478_fptr() // lam115478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115479 = arg_buffer[1];
//reading env and args
void* a115127115336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115125115333 = (decode_clo(env115479))[3];
//not do dummy comment
void* kont115224 = (decode_clo(env115479))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env115479))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont115224;
arg_buffer[3] = a115125115333;
arg_buffer[4] = a115127115336;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115478 = encode_clo(alloc_clo(lam115478_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115482 = arg_buffer[1];
//reading env and args
void* kont115224 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar116124 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116124, "0", 10);
void* a115125115333 = encode_mpz(mpzvar116124);
mpz_t* mpzvar116125 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116125, "2", 10);
void* a115126115334 = encode_mpz(mpzvar116125);

//creating new closure instance
void** clo116127 = alloc_clo(lam115478_fptr, 3);

//setting env list
clo116127[1] = equal_u63;
clo116127[2] = kont115224;
clo116127[3] = a115125115333;
void* f115225115335 = encode_clo(clo116127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f115225115335;
arg_buffer[3] = x;
arg_buffer[4] = a115126115334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam115483_fptr() // lam115483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115484 = arg_buffer[1];
//reading env and args
void* a115130115340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115128115337 = (decode_clo(env115484))[3];
//not do dummy comment
void* kont115226 = (decode_clo(env115484))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env115484))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont115226;
arg_buffer[3] = a115128115337;
arg_buffer[4] = a115130115340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115483 = encode_clo(alloc_clo(lam115483_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115487 = arg_buffer[1];
//reading env and args
void* kont115226 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar116128 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116128, "1", 10);
void* a115128115337 = encode_mpz(mpzvar116128);
mpz_t* mpzvar116129 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116129, "2", 10);
void* a115129115338 = encode_mpz(mpzvar116129);

//creating new closure instance
void** clo116131 = alloc_clo(lam115483_fptr, 3);

//setting env list
clo116131[1] = equal_u63;
clo116131[2] = kont115226;
clo116131[3] = a115128115337;
void* f115227115339 = encode_clo(clo116131);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f115227115339;
arg_buffer[3] = x;
arg_buffer[4] = a115129115338;
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
void* _115488 = arg_buffer[1];
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

void* kont115228115341 = prim_car(x);
void* x115342 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115228115341);
arg_buffer[2] = x115342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115228115341))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam115491_fptr() // lam115491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115492 = arg_buffer[1];
//reading env and args
void* a115136115352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115230 = (decode_clo(env115492))[3];
//not do dummy comment
void* x = (decode_clo(env115492))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env115492))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont115230;
arg_buffer[3] = x;
arg_buffer[4] = a115136115352;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115491 = encode_clo(alloc_clo(lam115491_fptr, 0));

void* lam115493_fptr() // lam115493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115494 = arg_buffer[1];
//reading env and args
void* a115134115349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115494))[5];
//not do dummy comment
void* lst = (decode_clo(env115494))[4];
//not do dummy comment
void* kont115230 = (decode_clo(env115494))[3];
//not do dummy comment
void* x = (decode_clo(env115494))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env115494))[1];

//if-clause
bool if_guard116132 = is_true(a115134115349);
if(if_guard116132)
{
void* x115135115350 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115230);
arg_buffer[2] = x115135115350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115230))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116134 = alloc_clo(lam115491_fptr, 3);

//setting env list
clo116134[1] = member_u63;
clo116134[2] = x;
clo116134[3] = kont115230;
void* f115231115351 = encode_clo(clo116134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115231115351;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115493 = encode_clo(alloc_clo(lam115493_fptr, 0));

void* lam115495_fptr() // lam115495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115496 = arg_buffer[1];
//reading env and args
void* a115133115347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115496))[6];
//not do dummy comment
void* lst = (decode_clo(env115496))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env115496))[4];
//not do dummy comment
void* kont115230 = (decode_clo(env115496))[3];
//not do dummy comment
void* x = (decode_clo(env115496))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env115496))[1];

//creating new closure instance
void** clo116136 = alloc_clo(lam115493_fptr, 5);

//setting env list
clo116136[1] = member_u63;
clo116136[2] = x;
clo116136[3] = kont115230;
clo116136[4] = lst;
clo116136[5] = cdr;
void* f115232115348 = encode_clo(clo116136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f115232115348;
arg_buffer[3] = a115133115347;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115495 = encode_clo(alloc_clo(lam115495_fptr, 0));

void* lam115497_fptr() // lam115497 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115498 = arg_buffer[1];
//reading env and args
void* a115131115344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115498))[7];
//not do dummy comment
void* lst = (decode_clo(env115498))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env115498))[5];
//not do dummy comment
void* kont115230 = (decode_clo(env115498))[4];
//not do dummy comment
void* x = (decode_clo(env115498))[3];
//not do dummy comment
void* car = (decode_clo(env115498))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env115498))[1];

//if-clause
bool if_guard116137 = is_true(a115131115344);
if(if_guard116137)
{
void* x115132115345 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115230);
arg_buffer[2] = x115132115345;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115230))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116139 = alloc_clo(lam115495_fptr, 6);

//setting env list
clo116139[1] = member_u63;
clo116139[2] = x;
clo116139[3] = kont115230;
clo116139[4] = equal_u63;
clo116139[5] = lst;
clo116139[6] = cdr;
void* f115233115346 = encode_clo(clo116139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115233115346;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115497 = encode_clo(alloc_clo(lam115497_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115499 = arg_buffer[1];
//reading env and args
void* kont115230 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116141 = alloc_clo(lam115497_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo116141[1] = member_u63;
clo116141[2] = car;
clo116141[3] = x;
clo116141[4] = kont115230;
clo116141[5] = equal_u63;
clo116141[6] = lst;
clo116141[7] = cdr;
void* f115234115343 = encode_clo(clo116141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115234115343;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam115500_fptr() // lam115500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115501 = arg_buffer[1];
//reading env and args
void* a115140115360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env115501))[4];
//not do dummy comment
void* kont115235 = (decode_clo(env115501))[3];
//not do dummy comment
void* a115139115358 = (decode_clo(env115501))[2];
//not do dummy comment
void* fun = (decode_clo(env115501))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont115235;
arg_buffer[3] = fun;
arg_buffer[4] = a115139115358;
arg_buffer[5] = a115140115360;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115500 = encode_clo(alloc_clo(lam115500_fptr, 0));

void* lam115502_fptr() // lam115502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115503 = arg_buffer[1];
//reading env and args
void* a115139115358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115503))[5];
//not do dummy comment
void* lst = (decode_clo(env115503))[4];
//not do dummy comment
void* fun = (decode_clo(env115503))[3];
//not do dummy comment
void* foldl = (decode_clo(env115503))[2];
//not do dummy comment
void* kont115235 = (decode_clo(env115503))[1];

//creating new closure instance
void** clo116143 = alloc_clo(lam115500_fptr, 4);

//setting env list
clo116143[1] = fun;
clo116143[2] = a115139115358;
clo116143[3] = kont115235;
clo116143[4] = foldl;
void* f115236115359 = encode_clo(clo116143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115236115359;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115502 = encode_clo(alloc_clo(lam115502_fptr, 0));

void* lam115504_fptr() // lam115504 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115505 = arg_buffer[1];
//reading env and args
void* a115138115356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115505))[6];
//not do dummy comment
void* lst = (decode_clo(env115505))[5];
//not do dummy comment
void* fun = (decode_clo(env115505))[4];
//not do dummy comment
void* acc = (decode_clo(env115505))[3];
//not do dummy comment
void* foldl = (decode_clo(env115505))[2];
//not do dummy comment
void* kont115235 = (decode_clo(env115505))[1];

//creating new closure instance
void** clo116145 = alloc_clo(lam115502_fptr, 5);

//setting env list
clo116145[1] = kont115235;
clo116145[2] = foldl;
clo116145[3] = fun;
clo116145[4] = lst;
clo116145[5] = cdr;
void* f115237115357 = encode_clo(clo116145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f115237115357;
arg_buffer[3] = a115138115356;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115504 = encode_clo(alloc_clo(lam115504_fptr, 0));

void* lam115506_fptr() // lam115506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115507 = arg_buffer[1];
//reading env and args
void* a115137115354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115507))[7];
//not do dummy comment
void* lst = (decode_clo(env115507))[6];
//not do dummy comment
void* fun = (decode_clo(env115507))[5];
//not do dummy comment
void* acc = (decode_clo(env115507))[4];
//not do dummy comment
void* car = (decode_clo(env115507))[3];
//not do dummy comment
void* foldl = (decode_clo(env115507))[2];
//not do dummy comment
void* kont115235 = (decode_clo(env115507))[1];

//if-clause
bool if_guard116146 = is_true(a115137115354);
if(if_guard116146)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115235);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115235))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116148 = alloc_clo(lam115504_fptr, 6);

//setting env list
clo116148[1] = kont115235;
clo116148[2] = foldl;
clo116148[3] = acc;
clo116148[4] = fun;
clo116148[5] = lst;
clo116148[6] = cdr;
void* f115238115355 = encode_clo(clo116148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115238115355;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115506 = encode_clo(alloc_clo(lam115506_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115508 = arg_buffer[1];
//reading env and args
void* kont115235 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo116150 = alloc_clo(lam115506_fptr, 7);

//setting env list
clo116150[1] = kont115235;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo116150[2] = foldl;
clo116150[3] = car;
clo116150[4] = acc;
clo116150[5] = fun;
clo116150[6] = lst;
clo116150[7] = cdr;
void* f115239115353 = encode_clo(clo116150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115239115353;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam115509_fptr() // lam115509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115510 = arg_buffer[1];
//reading env and args
void* a115144115368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115142115364 = (decode_clo(env115510))[3];
//not do dummy comment
void* kont115240 = (decode_clo(env115510))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env115510))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont115240;
arg_buffer[3] = a115142115364;
arg_buffer[4] = a115144115368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115509 = encode_clo(alloc_clo(lam115509_fptr, 0));

void* lam115511_fptr() // lam115511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115512 = arg_buffer[1];
//reading env and args
void* a115143115366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115142115364 = (decode_clo(env115512))[5];
//not do dummy comment
void* kont115240 = (decode_clo(env115512))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env115512))[3];
//not do dummy comment
void* lst2 = (decode_clo(env115512))[2];
//not do dummy comment
void* cons = (decode_clo(env115512))[1];

//creating new closure instance
void** clo116152 = alloc_clo(lam115509_fptr, 3);

//setting env list
clo116152[1] = reverse_u45helper;
clo116152[2] = kont115240;
clo116152[3] = a115142115364;
void* f115241115367 = encode_clo(clo116152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f115241115367;
arg_buffer[3] = a115143115366;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115511 = encode_clo(alloc_clo(lam115511_fptr, 0));

void* lam115513_fptr() // lam115513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115514 = arg_buffer[1];
//reading env and args
void* a115142115364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env115514))[6];
//not do dummy comment
void* lst2 = (decode_clo(env115514))[5];
//not do dummy comment
void* car = (decode_clo(env115514))[4];
//not do dummy comment
void* cons = (decode_clo(env115514))[3];
//not do dummy comment
void* lst = (decode_clo(env115514))[2];
//not do dummy comment
void* kont115240 = (decode_clo(env115514))[1];

//creating new closure instance
void** clo116154 = alloc_clo(lam115511_fptr, 5);

//setting env list
clo116154[1] = cons;
clo116154[2] = lst2;
clo116154[3] = reverse_u45helper;
clo116154[4] = kont115240;
clo116154[5] = a115142115364;
void* f115242115365 = encode_clo(clo116154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115242115365;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115513 = encode_clo(alloc_clo(lam115513_fptr, 0));

void* lam115515_fptr() // lam115515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115516 = arg_buffer[1];
//reading env and args
void* a115141115362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115516))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env115516))[6];
//not do dummy comment
void* lst2 = (decode_clo(env115516))[5];
//not do dummy comment
void* car = (decode_clo(env115516))[4];
//not do dummy comment
void* cons = (decode_clo(env115516))[3];
//not do dummy comment
void* lst = (decode_clo(env115516))[2];
//not do dummy comment
void* kont115240 = (decode_clo(env115516))[1];

//if-clause
bool if_guard116155 = is_true(a115141115362);
if(if_guard116155)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115240);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115240))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116157 = alloc_clo(lam115513_fptr, 6);

//setting env list
clo116157[1] = kont115240;
clo116157[2] = lst;
clo116157[3] = cons;
clo116157[4] = car;
clo116157[5] = lst2;
clo116157[6] = reverse_u45helper;
void* f115243115363 = encode_clo(clo116157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115243115363;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115515 = encode_clo(alloc_clo(lam115515_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115517 = arg_buffer[1];
//reading env and args
void* kont115240 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116159 = alloc_clo(lam115515_fptr, 7);

//setting env list
clo116159[1] = kont115240;
clo116159[2] = lst;
clo116159[3] = cons;
clo116159[4] = car;
clo116159[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo116159[6] = reverse_u45helper;
clo116159[7] = cdr;
void* f115244115361 = encode_clo(clo116159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115244115361;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam115518_fptr() // lam115518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115519 = arg_buffer[1];
//reading env and args
void* a115145115370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env115519))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env115519))[2];
//not do dummy comment
void* kont115245 = (decode_clo(env115519))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont115245;
arg_buffer[3] = lst;
arg_buffer[4] = a115145115370;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115518 = encode_clo(alloc_clo(lam115518_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115520 = arg_buffer[1];
//reading env and args
void* kont115245 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo116161 = alloc_clo(lam115518_fptr, 3);

//setting env list
clo116161[1] = kont115245;
clo116161[2] = reverse_u45helper;
clo116161[3] = lst;
void* f115246115369 = encode_clo(clo116161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f115246115369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam115521_fptr() // lam115521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115522 = arg_buffer[1];
//reading env and args
void* x115148115375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115247 = (decode_clo(env115522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115247);
arg_buffer[2] = x115148115375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115247))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115521 = encode_clo(alloc_clo(lam115521_fptr, 0));

void* lam115523_fptr() // lam115523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115524 = arg_buffer[1];
//reading env and args
void* a115153115384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115151115380 = (decode_clo(env115524))[4];
//not do dummy comment
void* kont115247 = (decode_clo(env115524))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env115524))[2];
//not do dummy comment
void* a115149115377 = (decode_clo(env115524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont115247;
arg_buffer[3] = a115149115377;
arg_buffer[4] = a115151115380;
arg_buffer[5] = a115153115384;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115523 = encode_clo(alloc_clo(lam115523_fptr, 0));

void* lam115525_fptr() // lam115525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115526 = arg_buffer[1];
//reading env and args
void* a115152115382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115151115380 = (decode_clo(env115526))[6];
//not do dummy comment
void* kont115247 = (decode_clo(env115526))[5];
//not do dummy comment
void* a115149115377 = (decode_clo(env115526))[4];
//not do dummy comment
void* cons = (decode_clo(env115526))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env115526))[2];
//not do dummy comment
void* lst2 = (decode_clo(env115526))[1];

//creating new closure instance
void** clo116163 = alloc_clo(lam115523_fptr, 4);

//setting env list
clo116163[1] = a115149115377;
clo116163[2] = take_u45helper;
clo116163[3] = kont115247;
clo116163[4] = a115151115380;
void* f115249115383 = encode_clo(clo116163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f115249115383;
arg_buffer[3] = a115152115382;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115525 = encode_clo(alloc_clo(lam115525_fptr, 0));

void* lam115527_fptr() // lam115527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115528 = arg_buffer[1];
//reading env and args
void* a115151115380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env115528))[7];
//not do dummy comment
void* kont115247 = (decode_clo(env115528))[6];
//not do dummy comment
void* cons = (decode_clo(env115528))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env115528))[4];
//not do dummy comment
void* lst2 = (decode_clo(env115528))[3];
//not do dummy comment
void* a115149115377 = (decode_clo(env115528))[2];
//not do dummy comment
void* car = (decode_clo(env115528))[1];

//creating new closure instance
void** clo116165 = alloc_clo(lam115525_fptr, 6);

//setting env list
clo116165[1] = lst2;
clo116165[2] = take_u45helper;
clo116165[3] = cons;
clo116165[4] = a115149115377;
clo116165[5] = kont115247;
clo116165[6] = a115151115380;
void* f115250115381 = encode_clo(clo116165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115250115381;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115527 = encode_clo(alloc_clo(lam115527_fptr, 0));

void* lam115530_fptr() // lam115530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115531 = arg_buffer[1];
//reading env and args
void* a115149115377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env115531))[8];
//not do dummy comment
void* kont115247 = (decode_clo(env115531))[7];
//not do dummy comment
void* cons = (decode_clo(env115531))[6];
//not do dummy comment
void* _u45 = (decode_clo(env115531))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env115531))[4];
//not do dummy comment
void* lst2 = (decode_clo(env115531))[3];
//not do dummy comment
void* n = (decode_clo(env115531))[2];
//not do dummy comment
void* car = (decode_clo(env115531))[1];
mpz_t* mpzvar116166 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116166, "1", 10);
void* a115150115378 = encode_mpz(mpzvar116166);

//creating new closure instance
void** clo116168 = alloc_clo(lam115527_fptr, 7);

//setting env list
clo116168[1] = car;
clo116168[2] = a115149115377;
clo116168[3] = lst2;
clo116168[4] = take_u45helper;
clo116168[5] = cons;
clo116168[6] = kont115247;
clo116168[7] = lst;
void* f115251115379 = encode_clo(clo116168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f115251115379;
arg_buffer[3] = n;
arg_buffer[4] = a115150115378;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115530 = encode_clo(alloc_clo(lam115530_fptr, 0));

void* lam115532_fptr() // lam115532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115533 = arg_buffer[1];
//reading env and args
void* a115147115373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115533))[10];
//not do dummy comment
void* lst = (decode_clo(env115533))[9];
//not do dummy comment
void* reverse = (decode_clo(env115533))[8];
//not do dummy comment
void* kont115247 = (decode_clo(env115533))[7];
//not do dummy comment
void* cons = (decode_clo(env115533))[6];
//not do dummy comment
void* _u45 = (decode_clo(env115533))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env115533))[4];
//not do dummy comment
void* lst2 = (decode_clo(env115533))[3];
//not do dummy comment
void* n = (decode_clo(env115533))[2];
//not do dummy comment
void* car = (decode_clo(env115533))[1];

//if-clause
bool if_guard116169 = is_true(a115147115373);
if(if_guard116169)
{

//creating new closure instance
void** clo116171 = alloc_clo(lam115521_fptr, 1);

//setting env list
clo116171[1] = kont115247;
void* f115248115374 = encode_clo(clo116171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f115248115374;
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
void** clo116173 = alloc_clo(lam115530_fptr, 8);

//setting env list
clo116173[1] = car;
clo116173[2] = n;
clo116173[3] = lst2;
clo116173[4] = take_u45helper;
clo116173[5] = _u45;
clo116173[6] = cons;
clo116173[7] = kont115247;
clo116173[8] = lst;
void* f115252115376 = encode_clo(clo116173);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115252115376;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115532 = encode_clo(alloc_clo(lam115532_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115535 = arg_buffer[1];
//reading env and args
void* kont115247 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar116174 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116174, "0", 10);
void* a115146115371 = encode_mpz(mpzvar116174);

//creating new closure instance
void** clo116176 = alloc_clo(lam115532_fptr, 10);

//setting env list
clo116176[1] = car;
clo116176[2] = n;
clo116176[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo116176[4] = take_u45helper;
clo116176[5] = _u45;
clo116176[6] = cons;
clo116176[7] = kont115247;
clo116176[8] = reverse;
clo116176[9] = lst;
clo116176[10] = cdr;
void* f115253115372 = encode_clo(clo116176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f115253115372;
arg_buffer[3] = n;
arg_buffer[4] = a115146115371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam115536_fptr() // lam115536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115537 = arg_buffer[1];
//reading env and args
void* a115154115386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115254 = (decode_clo(env115537))[4];
//not do dummy comment
void* lst = (decode_clo(env115537))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env115537))[2];
//not do dummy comment
void* n = (decode_clo(env115537))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont115254;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a115154115386;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115536 = encode_clo(alloc_clo(lam115536_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115538 = arg_buffer[1];
//reading env and args
void* kont115254 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116178 = alloc_clo(lam115536_fptr, 4);

//setting env list
clo116178[1] = n;
clo116178[2] = take_u45helper;
clo116178[3] = lst;
clo116178[4] = kont115254;
void* f115255115385 = encode_clo(clo116178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f115255115385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam115540_fptr() // lam115540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115541 = arg_buffer[1];
//reading env and args
void* a115159115394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115256 = (decode_clo(env115541))[3];
//not do dummy comment
void* _u43 = (decode_clo(env115541))[2];
//not do dummy comment
void* a115157115390 = (decode_clo(env115541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont115256;
arg_buffer[3] = a115157115390;
arg_buffer[4] = a115159115394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115540 = encode_clo(alloc_clo(lam115540_fptr, 0));

void* lam115542_fptr() // lam115542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115543 = arg_buffer[1];
//reading env and args
void* a115158115392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115256 = (decode_clo(env115543))[4];
//not do dummy comment
void* length = (decode_clo(env115543))[3];
//not do dummy comment
void* _u43 = (decode_clo(env115543))[2];
//not do dummy comment
void* a115157115390 = (decode_clo(env115543))[1];

//creating new closure instance
void** clo116180 = alloc_clo(lam115540_fptr, 3);

//setting env list
clo116180[1] = a115157115390;
clo116180[2] = _u43;
clo116180[3] = kont115256;
void* f115257115393 = encode_clo(clo116180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f115257115393;
arg_buffer[3] = a115158115392;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115542 = encode_clo(alloc_clo(lam115542_fptr, 0));

void* lam115545_fptr() // lam115545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115546 = arg_buffer[1];
//reading env and args
void* a115155115388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115546))[5];
//not do dummy comment
void* length = (decode_clo(env115546))[4];
//not do dummy comment
void* _u43 = (decode_clo(env115546))[3];
//not do dummy comment
void* lst = (decode_clo(env115546))[2];
//not do dummy comment
void* kont115256 = (decode_clo(env115546))[1];

//if-clause
bool if_guard116181 = is_true(a115155115388);
if(if_guard116181)
{
mpz_t* mpzvar116182 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116182, "0", 10);
void* x115156115389 = encode_mpz(mpzvar116182);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115256);
arg_buffer[2] = x115156115389;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115256))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar116183 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116183, "1", 10);
void* a115157115390 = encode_mpz(mpzvar116183);

//creating new closure instance
void** clo116185 = alloc_clo(lam115542_fptr, 4);

//setting env list
clo116185[1] = a115157115390;
clo116185[2] = _u43;
clo116185[3] = length;
clo116185[4] = kont115256;
void* f115258115391 = encode_clo(clo116185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115258115391;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115545 = encode_clo(alloc_clo(lam115545_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115547 = arg_buffer[1];
//reading env and args
void* kont115256 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo116187 = alloc_clo(lam115545_fptr, 5);

//setting env list
clo116187[1] = kont115256;
clo116187[2] = lst;
clo116187[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo116187[4] = length;
clo116187[5] = cdr;
void* f115259115387 = encode_clo(clo116187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115259115387;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam115548_fptr() // lam115548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115549 = arg_buffer[1];
//reading env and args
void* x115161115398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115260 = (decode_clo(env115549))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115260);
arg_buffer[2] = x115161115398;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115260))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115548 = encode_clo(alloc_clo(lam115548_fptr, 0));

void* lam115550_fptr() // lam115550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115551 = arg_buffer[1];
//reading env and args
void* a115165115406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115163115402 = (decode_clo(env115551))[3];
//not do dummy comment
void* kont115260 = (decode_clo(env115551))[2];
//not do dummy comment
void* cons = (decode_clo(env115551))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont115260;
arg_buffer[3] = a115163115402;
arg_buffer[4] = a115165115406;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115550 = encode_clo(alloc_clo(lam115550_fptr, 0));

void* lam115552_fptr() // lam115552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115553 = arg_buffer[1];
//reading env and args
void* a115164115404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env115553))[5];
//not do dummy comment
void* a115163115402 = (decode_clo(env115553))[4];
//not do dummy comment
void* kont115260 = (decode_clo(env115553))[3];
//not do dummy comment
void* proc = (decode_clo(env115553))[2];
//not do dummy comment
void* cons = (decode_clo(env115553))[1];

//creating new closure instance
void** clo116189 = alloc_clo(lam115550_fptr, 3);

//setting env list
clo116189[1] = cons;
clo116189[2] = kont115260;
clo116189[3] = a115163115402;
void* f115262115405 = encode_clo(clo116189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f115262115405;
arg_buffer[3] = proc;
arg_buffer[4] = a115164115404;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115552 = encode_clo(alloc_clo(lam115552_fptr, 0));

void* lam115554_fptr() // lam115554 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115555 = arg_buffer[1];
//reading env and args
void* a115163115402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115555))[6];
//not do dummy comment
void* lst = (decode_clo(env115555))[5];
//not do dummy comment
void* map = (decode_clo(env115555))[4];
//not do dummy comment
void* kont115260 = (decode_clo(env115555))[3];
//not do dummy comment
void* proc = (decode_clo(env115555))[2];
//not do dummy comment
void* cons = (decode_clo(env115555))[1];

//creating new closure instance
void** clo116191 = alloc_clo(lam115552_fptr, 5);

//setting env list
clo116191[1] = cons;
clo116191[2] = proc;
clo116191[3] = kont115260;
clo116191[4] = a115163115402;
clo116191[5] = map;
void* f115263115403 = encode_clo(clo116191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115263115403;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115554 = encode_clo(alloc_clo(lam115554_fptr, 0));

void* lam115556_fptr() // lam115556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115557 = arg_buffer[1];
//reading env and args
void* a115162115400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115557))[6];
//not do dummy comment
void* lst = (decode_clo(env115557))[5];
//not do dummy comment
void* map = (decode_clo(env115557))[4];
//not do dummy comment
void* kont115260 = (decode_clo(env115557))[3];
//not do dummy comment
void* proc = (decode_clo(env115557))[2];
//not do dummy comment
void* cons = (decode_clo(env115557))[1];

//creating new closure instance
void** clo116193 = alloc_clo(lam115554_fptr, 6);

//setting env list
clo116193[1] = cons;
clo116193[2] = proc;
clo116193[3] = kont115260;
clo116193[4] = map;
clo116193[5] = lst;
clo116193[6] = cdr;
void* f115264115401 = encode_clo(clo116193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f115264115401;
arg_buffer[3] = a115162115400;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115556 = encode_clo(alloc_clo(lam115556_fptr, 0));

void* lam115558_fptr() // lam115558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115559 = arg_buffer[1];
//reading env and args
void* a115160115396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env115559))[8];
//not do dummy comment
void* map = (decode_clo(env115559))[7];
//not do dummy comment
void* kont115260 = (decode_clo(env115559))[6];
//not do dummy comment
void* proc = (decode_clo(env115559))[5];
//not do dummy comment
void* car = (decode_clo(env115559))[4];
//not do dummy comment
void* cons = (decode_clo(env115559))[3];
//not do dummy comment
void* list = (decode_clo(env115559))[2];
//not do dummy comment
void* cdr = (decode_clo(env115559))[1];

//if-clause
bool if_guard116194 = is_true(a115160115396);
if(if_guard116194)
{

//creating new closure instance
void** clo116196 = alloc_clo(lam115548_fptr, 1);

//setting env list
clo116196[1] = kont115260;
void* f115261115397 = encode_clo(clo116196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f115261115397;
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
void** clo116198 = alloc_clo(lam115556_fptr, 6);

//setting env list
clo116198[1] = cons;
clo116198[2] = proc;
clo116198[3] = kont115260;
clo116198[4] = map;
clo116198[5] = lst;
clo116198[6] = cdr;
void* f115265115399 = encode_clo(clo116198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115265115399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115558 = encode_clo(alloc_clo(lam115558_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115560 = arg_buffer[1];
//reading env and args
void* kont115260 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116200 = alloc_clo(lam115558_fptr, 8);

//setting env list
clo116200[1] = cdr;
clo116200[2] = list;
clo116200[3] = cons;
clo116200[4] = car;
clo116200[5] = proc;
clo116200[6] = kont115260;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo116200[7] = map;
clo116200[8] = lst;
void* f115266115395 = encode_clo(clo116200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115266115395;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam115561_fptr() // lam115561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115562 = arg_buffer[1];
//reading env and args
void* x115167115410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115267 = (decode_clo(env115562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115267);
arg_buffer[2] = x115167115410;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115267))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115561 = encode_clo(alloc_clo(lam115561_fptr, 0));

void* lam115563_fptr() // lam115563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115564 = arg_buffer[1];
//reading env and args
void* a115172115420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115170115416 = (decode_clo(env115564))[3];
//not do dummy comment
void* cons = (decode_clo(env115564))[2];
//not do dummy comment
void* kont115267 = (decode_clo(env115564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont115267;
arg_buffer[3] = a115170115416;
arg_buffer[4] = a115172115420;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115563 = encode_clo(alloc_clo(lam115563_fptr, 0));

void* lam115565_fptr() // lam115565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115566 = arg_buffer[1];
//reading env and args
void* a115171115418 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115170115416 = (decode_clo(env115566))[5];
//not do dummy comment
void* op = (decode_clo(env115566))[4];
//not do dummy comment
void* filter = (decode_clo(env115566))[3];
//not do dummy comment
void* cons = (decode_clo(env115566))[2];
//not do dummy comment
void* kont115267 = (decode_clo(env115566))[1];

//creating new closure instance
void** clo116202 = alloc_clo(lam115563_fptr, 3);

//setting env list
clo116202[1] = kont115267;
clo116202[2] = cons;
clo116202[3] = a115170115416;
void* f115269115419 = encode_clo(clo116202);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f115269115419;
arg_buffer[3] = op;
arg_buffer[4] = a115171115418;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115565 = encode_clo(alloc_clo(lam115565_fptr, 0));

void* lam115567_fptr() // lam115567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115568 = arg_buffer[1];
//reading env and args
void* a115170115416 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115568))[6];
//not do dummy comment
void* lst = (decode_clo(env115568))[5];
//not do dummy comment
void* op = (decode_clo(env115568))[4];
//not do dummy comment
void* filter = (decode_clo(env115568))[3];
//not do dummy comment
void* cons = (decode_clo(env115568))[2];
//not do dummy comment
void* kont115267 = (decode_clo(env115568))[1];

//creating new closure instance
void** clo116204 = alloc_clo(lam115565_fptr, 5);

//setting env list
clo116204[1] = kont115267;
clo116204[2] = cons;
clo116204[3] = filter;
clo116204[4] = op;
clo116204[5] = a115170115416;
void* f115270115417 = encode_clo(clo116204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115270115417;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115567 = encode_clo(alloc_clo(lam115567_fptr, 0));

void* lam115569_fptr() // lam115569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115570 = arg_buffer[1];
//reading env and args
void* a115173115422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env115570))[3];
//not do dummy comment
void* filter = (decode_clo(env115570))[2];
//not do dummy comment
void* kont115267 = (decode_clo(env115570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont115267;
arg_buffer[3] = op;
arg_buffer[4] = a115173115422;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115569 = encode_clo(alloc_clo(lam115569_fptr, 0));

void* lam115571_fptr() // lam115571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115572 = arg_buffer[1];
//reading env and args
void* a115169115414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115572))[7];
//not do dummy comment
void* lst = (decode_clo(env115572))[6];
//not do dummy comment
void* op = (decode_clo(env115572))[5];
//not do dummy comment
void* cons = (decode_clo(env115572))[4];
//not do dummy comment
void* kont115267 = (decode_clo(env115572))[3];
//not do dummy comment
void* filter = (decode_clo(env115572))[2];
//not do dummy comment
void* car = (decode_clo(env115572))[1];

//if-clause
bool if_guard116205 = is_true(a115169115414);
if(if_guard116205)
{

//creating new closure instance
void** clo116207 = alloc_clo(lam115567_fptr, 6);

//setting env list
clo116207[1] = kont115267;
clo116207[2] = cons;
clo116207[3] = filter;
clo116207[4] = op;
clo116207[5] = lst;
clo116207[6] = cdr;
void* f115271115415 = encode_clo(clo116207);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115271115415;
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
void** clo116209 = alloc_clo(lam115569_fptr, 3);

//setting env list
clo116209[1] = kont115267;
clo116209[2] = filter;
clo116209[3] = op;
void* f115272115421 = encode_clo(clo116209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115272115421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115571 = encode_clo(alloc_clo(lam115571_fptr, 0));

void* lam115573_fptr() // lam115573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115574 = arg_buffer[1];
//reading env and args
void* a115168115412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115574))[7];
//not do dummy comment
void* lst = (decode_clo(env115574))[6];
//not do dummy comment
void* op = (decode_clo(env115574))[5];
//not do dummy comment
void* cons = (decode_clo(env115574))[4];
//not do dummy comment
void* kont115267 = (decode_clo(env115574))[3];
//not do dummy comment
void* filter = (decode_clo(env115574))[2];
//not do dummy comment
void* car = (decode_clo(env115574))[1];

//creating new closure instance
void** clo116211 = alloc_clo(lam115571_fptr, 7);

//setting env list
clo116211[1] = car;
clo116211[2] = filter;
clo116211[3] = kont115267;
clo116211[4] = cons;
clo116211[5] = op;
clo116211[6] = lst;
clo116211[7] = cdr;
void* f115273115413 = encode_clo(clo116211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f115273115413;
arg_buffer[3] = a115168115412;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115573 = encode_clo(alloc_clo(lam115573_fptr, 0));

void* lam115575_fptr() // lam115575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115576 = arg_buffer[1];
//reading env and args
void* a115166115408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env115576))[8];
//not do dummy comment
void* op = (decode_clo(env115576))[7];
//not do dummy comment
void* cons = (decode_clo(env115576))[6];
//not do dummy comment
void* kont115267 = (decode_clo(env115576))[5];
//not do dummy comment
void* list = (decode_clo(env115576))[4];
//not do dummy comment
void* cdr = (decode_clo(env115576))[3];
//not do dummy comment
void* filter = (decode_clo(env115576))[2];
//not do dummy comment
void* car = (decode_clo(env115576))[1];

//if-clause
bool if_guard116212 = is_true(a115166115408);
if(if_guard116212)
{

//creating new closure instance
void** clo116214 = alloc_clo(lam115561_fptr, 1);

//setting env list
clo116214[1] = kont115267;
void* f115268115409 = encode_clo(clo116214);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f115268115409;
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
void** clo116216 = alloc_clo(lam115573_fptr, 7);

//setting env list
clo116216[1] = car;
clo116216[2] = filter;
clo116216[3] = kont115267;
clo116216[4] = cons;
clo116216[5] = op;
clo116216[6] = lst;
clo116216[7] = cdr;
void* f115274115411 = encode_clo(clo116216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115274115411;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115575 = encode_clo(alloc_clo(lam115575_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115577 = arg_buffer[1];
//reading env and args
void* kont115267 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116218 = alloc_clo(lam115575_fptr, 8);

//setting env list
clo116218[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo116218[2] = filter;
clo116218[3] = cdr;
clo116218[4] = list;
clo116218[5] = kont115267;
clo116218[6] = cons;
clo116218[7] = op;
clo116218[8] = lst;
void* f115275115407 = encode_clo(clo116218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115275115407;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam115578_fptr() // lam115578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115579 = arg_buffer[1];
//reading env and args
void* a115178115430 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env115579))[3];
//not do dummy comment
void* kont115276 = (decode_clo(env115579))[2];
//not do dummy comment
void* a115176115427 = (decode_clo(env115579))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont115276;
arg_buffer[3] = a115176115427;
arg_buffer[4] = a115178115430;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115578 = encode_clo(alloc_clo(lam115578_fptr, 0));

void* lam115581_fptr() // lam115581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115582 = arg_buffer[1];
//reading env and args
void* a115176115427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env115582))[4];
//not do dummy comment
void* kont115276 = (decode_clo(env115582))[3];
//not do dummy comment
void* n = (decode_clo(env115582))[2];
//not do dummy comment
void* _u45 = (decode_clo(env115582))[1];
mpz_t* mpzvar116219 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116219, "1", 10);
void* a115177115428 = encode_mpz(mpzvar116219);

//creating new closure instance
void** clo116221 = alloc_clo(lam115578_fptr, 3);

//setting env list
clo116221[1] = a115176115427;
clo116221[2] = kont115276;
clo116221[3] = drop;
void* f115277115429 = encode_clo(clo116221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f115277115429;
arg_buffer[3] = n;
arg_buffer[4] = a115177115428;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115581 = encode_clo(alloc_clo(lam115581_fptr, 0));

void* lam115583_fptr() // lam115583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115584 = arg_buffer[1];
//reading env and args
void* a115175115425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115584))[6];
//not do dummy comment
void* kont115276 = (decode_clo(env115584))[5];
//not do dummy comment
void* n = (decode_clo(env115584))[4];
//not do dummy comment
void* _u45 = (decode_clo(env115584))[3];
//not do dummy comment
void* lst = (decode_clo(env115584))[2];
//not do dummy comment
void* drop = (decode_clo(env115584))[1];

//if-clause
bool if_guard116222 = is_true(a115175115425);
if(if_guard116222)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115276);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115276))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116224 = alloc_clo(lam115581_fptr, 4);

//setting env list
clo116224[1] = _u45;
clo116224[2] = n;
clo116224[3] = kont115276;
clo116224[4] = drop;
void* f115278115426 = encode_clo(clo116224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115278115426;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115583 = encode_clo(alloc_clo(lam115583_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115586 = arg_buffer[1];
//reading env and args
void* kont115276 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar116225 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116225, "0", 10);
void* a115174115423 = encode_mpz(mpzvar116225);

//creating new closure instance
void** clo116227 = alloc_clo(lam115583_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo116227[1] = drop;
clo116227[2] = lst;
clo116227[3] = _u45;
clo116227[4] = n;
clo116227[5] = kont115276;
clo116227[6] = cdr;
void* f115279115424 = encode_clo(clo116227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f115279115424;
arg_buffer[3] = n;
arg_buffer[4] = a115174115423;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam115587_fptr() // lam115587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115588 = arg_buffer[1];
//reading env and args
void* a115182115438 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a115180115434 = (decode_clo(env115588))[3];
//not do dummy comment
void* proc = (decode_clo(env115588))[2];
//not do dummy comment
void* kont115280 = (decode_clo(env115588))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont115280;
arg_buffer[3] = a115180115434;
arg_buffer[4] = a115182115438;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115587 = encode_clo(alloc_clo(lam115587_fptr, 0));

void* lam115589_fptr() // lam115589 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115590 = arg_buffer[1];
//reading env and args
void* a115181115436 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env115590))[5];
//not do dummy comment
void* a115180115434 = (decode_clo(env115590))[4];
//not do dummy comment
void* kont115280 = (decode_clo(env115590))[3];
//not do dummy comment
void* proc = (decode_clo(env115590))[2];
//not do dummy comment
void* acc = (decode_clo(env115590))[1];

//creating new closure instance
void** clo116229 = alloc_clo(lam115587_fptr, 3);

//setting env list
clo116229[1] = kont115280;
clo116229[2] = proc;
clo116229[3] = a115180115434;
void* f115281115437 = encode_clo(clo116229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f115281115437;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a115181115436;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115589 = encode_clo(alloc_clo(lam115589_fptr, 0));

void* lam115591_fptr() // lam115591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115592 = arg_buffer[1];
//reading env and args
void* a115180115434 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115592))[6];
//not do dummy comment
void* kont115280 = (decode_clo(env115592))[5];
//not do dummy comment
void* foldr = (decode_clo(env115592))[4];
//not do dummy comment
void* lst = (decode_clo(env115592))[3];
//not do dummy comment
void* proc = (decode_clo(env115592))[2];
//not do dummy comment
void* acc = (decode_clo(env115592))[1];

//creating new closure instance
void** clo116231 = alloc_clo(lam115589_fptr, 5);

//setting env list
clo116231[1] = acc;
clo116231[2] = proc;
clo116231[3] = kont115280;
clo116231[4] = a115180115434;
clo116231[5] = foldr;
void* f115282115435 = encode_clo(clo116231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115282115435;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115591 = encode_clo(alloc_clo(lam115591_fptr, 0));

void* lam115593_fptr() // lam115593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115594 = arg_buffer[1];
//reading env and args
void* a115179115432 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115594))[7];
//not do dummy comment
void* kont115280 = (decode_clo(env115594))[6];
//not do dummy comment
void* car = (decode_clo(env115594))[5];
//not do dummy comment
void* foldr = (decode_clo(env115594))[4];
//not do dummy comment
void* lst = (decode_clo(env115594))[3];
//not do dummy comment
void* proc = (decode_clo(env115594))[2];
//not do dummy comment
void* acc = (decode_clo(env115594))[1];

//if-clause
bool if_guard116232 = is_true(a115179115432);
if(if_guard116232)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115280);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115280))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116234 = alloc_clo(lam115591_fptr, 6);

//setting env list
clo116234[1] = acc;
clo116234[2] = proc;
clo116234[3] = lst;
clo116234[4] = foldr;
clo116234[5] = kont115280;
clo116234[6] = cdr;
void* f115283115433 = encode_clo(clo116234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115283115433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115593 = encode_clo(alloc_clo(lam115593_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115595 = arg_buffer[1];
//reading env and args
void* kont115280 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo116236 = alloc_clo(lam115593_fptr, 7);

//setting env list
clo116236[1] = acc;
clo116236[2] = proc;
clo116236[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo116236[4] = foldr;
clo116236[5] = car;
clo116236[6] = kont115280;
clo116236[7] = cdr;
void* f115284115431 = encode_clo(clo116236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115284115431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam115596_fptr() // lam115596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115597 = arg_buffer[1];
//reading env and args
void* a115186115446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115285 = (decode_clo(env115597))[3];
//not do dummy comment
void* cons = (decode_clo(env115597))[2];
//not do dummy comment
void* a115184115442 = (decode_clo(env115597))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont115285;
arg_buffer[3] = a115184115442;
arg_buffer[4] = a115186115446;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115596 = encode_clo(alloc_clo(lam115596_fptr, 0));

void* lam115598_fptr() // lam115598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115599 = arg_buffer[1];
//reading env and args
void* a115185115444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115285 = (decode_clo(env115599))[5];
//not do dummy comment
void* append = (decode_clo(env115599))[4];
//not do dummy comment
void* lst2 = (decode_clo(env115599))[3];
//not do dummy comment
void* cons = (decode_clo(env115599))[2];
//not do dummy comment
void* a115184115442 = (decode_clo(env115599))[1];

//creating new closure instance
void** clo116238 = alloc_clo(lam115596_fptr, 3);

//setting env list
clo116238[1] = a115184115442;
clo116238[2] = cons;
clo116238[3] = kont115285;
void* f115286115445 = encode_clo(clo116238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f115286115445;
arg_buffer[3] = a115185115444;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115598 = encode_clo(alloc_clo(lam115598_fptr, 0));

void* lam115600_fptr() // lam115600 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115601 = arg_buffer[1];
//reading env and args
void* a115184115442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115601))[6];
//not do dummy comment
void* kont115285 = (decode_clo(env115601))[5];
//not do dummy comment
void* append = (decode_clo(env115601))[4];
//not do dummy comment
void* lst2 = (decode_clo(env115601))[3];
//not do dummy comment
void* lst1 = (decode_clo(env115601))[2];
//not do dummy comment
void* cons = (decode_clo(env115601))[1];

//creating new closure instance
void** clo116240 = alloc_clo(lam115598_fptr, 5);

//setting env list
clo116240[1] = a115184115442;
clo116240[2] = cons;
clo116240[3] = lst2;
clo116240[4] = append;
clo116240[5] = kont115285;
void* f115287115443 = encode_clo(clo116240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f115287115443;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115600 = encode_clo(alloc_clo(lam115600_fptr, 0));

void* lam115602_fptr() // lam115602 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115603 = arg_buffer[1];
//reading env and args
void* a115183115440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env115603))[7];
//not do dummy comment
void* kont115285 = (decode_clo(env115603))[6];
//not do dummy comment
void* append = (decode_clo(env115603))[5];
//not do dummy comment
void* lst2 = (decode_clo(env115603))[4];
//not do dummy comment
void* cons = (decode_clo(env115603))[3];
//not do dummy comment
void* lst1 = (decode_clo(env115603))[2];
//not do dummy comment
void* car = (decode_clo(env115603))[1];

//if-clause
bool if_guard116241 = is_true(a115183115440);
if(if_guard116241)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115285);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115285))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo116243 = alloc_clo(lam115600_fptr, 6);

//setting env list
clo116243[1] = cons;
clo116243[2] = lst1;
clo116243[3] = lst2;
clo116243[4] = append;
clo116243[5] = kont115285;
clo116243[6] = cdr;
void* f115288115441 = encode_clo(clo116243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f115288115441;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam115602 = encode_clo(alloc_clo(lam115602_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115604 = arg_buffer[1];
//reading env and args
void* kont115285 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo116245 = alloc_clo(lam115602_fptr, 7);

//setting env list
clo116245[1] = car;
clo116245[2] = lst1;
clo116245[3] = cons;
clo116245[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo116245[5] = append;
clo116245[6] = kont115285;
clo116245[7] = cdr;
void* f115289115439 = encode_clo(clo116245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f115289115439;
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
void* _115605 = arg_buffer[1];
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

void* kont115290115447 = prim_car(lst);
void* lst115448 = prim_cdr(lst);
void* x115187115449 = apply_prim_hash(lst115448);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115290115447);
arg_buffer[2] = x115187115449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115290115447))[0]);
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
void* _115606 = arg_buffer[1];
//reading env and args
void* kont115292 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x115188115450 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115292);
arg_buffer[2] = x115188115450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115292))[0]);
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
void* _115607 = arg_buffer[1];
//reading env and args
void* kont115293 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x115189115451 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115293);
arg_buffer[2] = x115189115451;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115293))[0]);
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
void* _115608 = arg_buffer[1];
//reading env and args
void* kont115294 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x115190115452 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115294);
arg_buffer[2] = x115190115452;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115294))[0]);
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
void* _115609 = arg_buffer[1];
//reading env and args
void* kont115295 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x115191115453 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115295);
arg_buffer[2] = x115191115453;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115295))[0]);
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
void* _115616 = arg_buffer[1];
//reading env and args
void* kont115296 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar116246 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116246, "1", 10);
void* a115192115454 = encode_mpz(mpzvar116246);
mpz_t* mpzvar116247 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116247, "2", 10);
void* a115193115455 = encode_mpz(mpzvar116247);
mpz_t* mpzvar116248 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116248, "3", 10);
void* a115194115456 = encode_mpz(mpzvar116248);
mpz_t* mpzvar116249 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116249, "4", 10);
void* a115195115457 = encode_mpz(mpzvar116249);
mpz_t* mpzvar116250 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116250, "5", 10);
void* a115196115458 = encode_mpz(mpzvar116250);
mpz_t* mpzvar116251 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar116251, "100", 10);
void* a115197115459 = encode_mpz(mpzvar116251);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60);
arg_buffer[2] = kont115296;
arg_buffer[3] = a115192115454;
arg_buffer[4] = a115193115455;
arg_buffer[5] = a115194115456;
arg_buffer[6] = a115195115457;
arg_buffer[7] = a115196115458;
arg_buffer[8] = a115197115459;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam115617_fptr() // lam115617 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env115618 = arg_buffer[1];
//reading env and args
void* x115198115461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont115297 = (decode_clo(env115618))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont115297);
arg_buffer[2] = x115198115461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont115297))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam115617 = encode_clo(alloc_clo(lam115617_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _115619 = arg_buffer[1];
//reading env and args
void* kont115297 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo116253 = alloc_clo(lam115617_fptr, 1);

//setting env list
clo116253[1] = kont115297;
void* f115298115460 = encode_clo(clo116253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f115298115460;
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

