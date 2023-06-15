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
void* _52410 = arg_buffer[1];
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

void* kont5215252252 = prim_car(lst);
void* lst52253 = prim_cdr(lst);
void* x5206752254 = apply_prim__u43(lst52253);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5215252252);
arg_buffer[2] = x5206752254;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5215252252))[0]);
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
void* _52411 = arg_buffer[1];
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

void* kont5215452255 = prim_car(lst);
void* lst52256 = prim_cdr(lst);
void* x5206852257 = apply_prim__u45(lst52256);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5215452255);
arg_buffer[2] = x5206852257;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5215452255))[0]);
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
void* _52412 = arg_buffer[1];
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

void* kont5215652258 = prim_car(lst);
void* lst52259 = prim_cdr(lst);
void* x5206952260 = apply_prim__u42(lst52259);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5215652258);
arg_buffer[2] = x5206952260;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5215652258))[0]);
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
void* _52413 = arg_buffer[1];
//reading env and args
void* kont52158 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5207052261 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52158);
arg_buffer[2] = x5207052261;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52158))[0]);
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
void* _52414 = arg_buffer[1];
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

void* kont5215952262 = prim_car(lst);
void* lst52263 = prim_cdr(lst);
void* x5207152264 = apply_prim__u47(lst52263);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5215952262);
arg_buffer[2] = x5207152264;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5215952262))[0]);
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
void* _52415 = arg_buffer[1];
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

void* kont5216152265 = prim_car(lst);
void* lst52266 = prim_cdr(lst);
void* x5207252267 = apply_prim__u61(lst52266);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5216152265);
arg_buffer[2] = x5207252267;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5216152265))[0]);
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
void* _52416 = arg_buffer[1];
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

void* kont5216352268 = prim_car(lst);
void* lst52269 = prim_cdr(lst);
void* x5207352270 = apply_prim__u62(lst52269);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5216352268);
arg_buffer[2] = x5207352270;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5216352268))[0]);
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
void* _52417 = arg_buffer[1];
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

void* kont5216552271 = prim_car(lst);
void* lst52272 = prim_cdr(lst);
void* x5207452273 = apply_prim__u60(lst52272);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5216552271);
arg_buffer[2] = x5207452273;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5216552271))[0]);
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
void* _52418 = arg_buffer[1];
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

void* kont5216752274 = prim_car(lst);
void* lst52275 = prim_cdr(lst);
void* x5207552276 = apply_prim__u60_u61(lst52275);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5216752274);
arg_buffer[2] = x5207552276;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5216752274))[0]);
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
void* _52419 = arg_buffer[1];
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

void* kont5216952277 = prim_car(lst);
void* lst52278 = prim_cdr(lst);
void* x5207652279 = apply_prim__u62_u61(lst52278);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5216952277);
arg_buffer[2] = x5207652279;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5216952277))[0]);
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
void* _52420 = arg_buffer[1];
//reading env and args
void* kont52171 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5207752280 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52171);
arg_buffer[2] = x5207752280;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52171))[0]);
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
void* _52421 = arg_buffer[1];
//reading env and args
void* kont52172 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5207852281 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52172);
arg_buffer[2] = x5207852281;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52172))[0]);
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
void* _52422 = arg_buffer[1];
//reading env and args
void* kont52173 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5207952282 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52173);
arg_buffer[2] = x5207952282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52173))[0]);
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
void* _52423 = arg_buffer[1];
//reading env and args
void* kont52174 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5208052283 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52174);
arg_buffer[2] = x5208052283;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52174))[0]);
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
void* _52424 = arg_buffer[1];
//reading env and args
void* kont52175 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5208152284 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52175);
arg_buffer[2] = x5208152284;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52175))[0]);
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
void* _52425 = arg_buffer[1];
//reading env and args
void* kont52176 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5208252285 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52176);
arg_buffer[2] = x5208252285;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52176))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam52426_fptr() // lam52426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52427 = arg_buffer[1];
//reading env and args
void* a5208552289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env52427))[3];
//not do dummy comment
void* a5208352286 = (decode_clo(env52427))[2];
//not do dummy comment
void* kont52177 = (decode_clo(env52427))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont52177;
arg_buffer[3] = a5208352286;
arg_buffer[4] = a5208552289;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52426 = encode_clo(alloc_clo(lam52426_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52430 = arg_buffer[1];
//reading env and args
void* kont52177 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar52563 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52563, "0", 10);
void* a5208352286 = encode_mpz(mpzvar52563);
mpz_t* mpzvar52564 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52564, "2", 10);
void* a5208452287 = encode_mpz(mpzvar52564);

//creating new closure instance
void** clo52566 = alloc_clo(lam52426_fptr, 3);

//setting env list
clo52566[1] = kont52177;
clo52566[2] = a5208352286;
clo52566[3] = equal_u63;
void* f5217852288 = encode_clo(clo52566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5217852288;
arg_buffer[3] = x;
arg_buffer[4] = a5208452287;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam52431_fptr() // lam52431 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52432 = arg_buffer[1];
//reading env and args
void* a5208852293 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env52432))[3];
//not do dummy comment
void* a5208652290 = (decode_clo(env52432))[2];
//not do dummy comment
void* kont52179 = (decode_clo(env52432))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont52179;
arg_buffer[3] = a5208652290;
arg_buffer[4] = a5208852293;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52431 = encode_clo(alloc_clo(lam52431_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52435 = arg_buffer[1];
//reading env and args
void* kont52179 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar52567 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52567, "1", 10);
void* a5208652290 = encode_mpz(mpzvar52567);
mpz_t* mpzvar52568 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52568, "2", 10);
void* a5208752291 = encode_mpz(mpzvar52568);

//creating new closure instance
void** clo52570 = alloc_clo(lam52431_fptr, 3);

//setting env list
clo52570[1] = kont52179;
clo52570[2] = a5208652290;
clo52570[3] = equal_u63;
void* f5218052292 = encode_clo(clo52570);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5218052292;
arg_buffer[3] = x;
arg_buffer[4] = a5208752291;
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
void* _52436 = arg_buffer[1];
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

void* kont5218152294 = prim_car(x);
void* x52295 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5218152294);
arg_buffer[2] = x52295;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5218152294))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam52439_fptr() // lam52439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52440 = arg_buffer[1];
//reading env and args
void* a5209452305 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52183 = (decode_clo(env52440))[3];
//not do dummy comment
void* x = (decode_clo(env52440))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont52183;
arg_buffer[3] = x;
arg_buffer[4] = a5209452305;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52439 = encode_clo(alloc_clo(lam52439_fptr, 0));

void* lam52441_fptr() // lam52441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52442 = arg_buffer[1];
//reading env and args
void* a5209252302 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52442))[5];
//not do dummy comment
void* kont52183 = (decode_clo(env52442))[4];
//not do dummy comment
void* lst = (decode_clo(env52442))[3];
//not do dummy comment
void* x = (decode_clo(env52442))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52442))[1];

//if-clause
bool if_guard52571 = is_true(a5209252302);
if(if_guard52571)
{
void* x5209352303 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52183);
arg_buffer[2] = x5209352303;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52183))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52573 = alloc_clo(lam52439_fptr, 3);

//setting env list
clo52573[1] = member_u63;
clo52573[2] = x;
clo52573[3] = kont52183;
void* f5218452304 = encode_clo(clo52573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5218452304;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52441 = encode_clo(alloc_clo(lam52441_fptr, 0));

void* lam52443_fptr() // lam52443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52444 = arg_buffer[1];
//reading env and args
void* a5209152300 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52444))[6];
//not do dummy comment
void* kont52183 = (decode_clo(env52444))[5];
//not do dummy comment
void* lst = (decode_clo(env52444))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env52444))[3];
//not do dummy comment
void* x = (decode_clo(env52444))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52444))[1];

//creating new closure instance
void** clo52575 = alloc_clo(lam52441_fptr, 5);

//setting env list
clo52575[1] = member_u63;
clo52575[2] = x;
clo52575[3] = lst;
clo52575[4] = kont52183;
clo52575[5] = cdr;
void* f5218552301 = encode_clo(clo52575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5218552301;
arg_buffer[3] = a5209152300;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52443 = encode_clo(alloc_clo(lam52443_fptr, 0));

void* lam52445_fptr() // lam52445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52446 = arg_buffer[1];
//reading env and args
void* a5208952297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52446))[7];
//not do dummy comment
void* kont52183 = (decode_clo(env52446))[6];
//not do dummy comment
void* lst = (decode_clo(env52446))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env52446))[4];
//not do dummy comment
void* x = (decode_clo(env52446))[3];
//not do dummy comment
void* car = (decode_clo(env52446))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52446))[1];

//if-clause
bool if_guard52576 = is_true(a5208952297);
if(if_guard52576)
{
void* x5209052298 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52183);
arg_buffer[2] = x5209052298;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52183))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52578 = alloc_clo(lam52443_fptr, 6);

//setting env list
clo52578[1] = member_u63;
clo52578[2] = x;
clo52578[3] = equal_u63;
clo52578[4] = lst;
clo52578[5] = kont52183;
clo52578[6] = cdr;
void* f5218652299 = encode_clo(clo52578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5218652299;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52445 = encode_clo(alloc_clo(lam52445_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52447 = arg_buffer[1];
//reading env and args
void* kont52183 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52580 = alloc_clo(lam52445_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo52580[1] = member_u63;
clo52580[2] = car;
clo52580[3] = x;
clo52580[4] = equal_u63;
clo52580[5] = lst;
clo52580[6] = kont52183;
clo52580[7] = cdr;
void* f5218752296 = encode_clo(clo52580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5218752296;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam52448_fptr() // lam52448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52449 = arg_buffer[1];
//reading env and args
void* a5209852313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5209752311 = (decode_clo(env52449))[4];
//not do dummy comment
void* kont52188 = (decode_clo(env52449))[3];
//not do dummy comment
void* fun = (decode_clo(env52449))[2];
//not do dummy comment
void* foldl = (decode_clo(env52449))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont52188;
arg_buffer[3] = fun;
arg_buffer[4] = a5209752311;
arg_buffer[5] = a5209852313;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52448 = encode_clo(alloc_clo(lam52448_fptr, 0));

void* lam52450_fptr() // lam52450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52451 = arg_buffer[1];
//reading env and args
void* a5209752311 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52451))[5];
//not do dummy comment
void* lst = (decode_clo(env52451))[4];
//not do dummy comment
void* kont52188 = (decode_clo(env52451))[3];
//not do dummy comment
void* fun = (decode_clo(env52451))[2];
//not do dummy comment
void* foldl = (decode_clo(env52451))[1];

//creating new closure instance
void** clo52582 = alloc_clo(lam52448_fptr, 4);

//setting env list
clo52582[1] = foldl;
clo52582[2] = fun;
clo52582[3] = kont52188;
clo52582[4] = a5209752311;
void* f5218952312 = encode_clo(clo52582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5218952312;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52450 = encode_clo(alloc_clo(lam52450_fptr, 0));

void* lam52452_fptr() // lam52452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52453 = arg_buffer[1];
//reading env and args
void* a5209652309 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52453))[6];
//not do dummy comment
void* lst = (decode_clo(env52453))[5];
//not do dummy comment
void* kont52188 = (decode_clo(env52453))[4];
//not do dummy comment
void* fun = (decode_clo(env52453))[3];
//not do dummy comment
void* acc = (decode_clo(env52453))[2];
//not do dummy comment
void* foldl = (decode_clo(env52453))[1];

//creating new closure instance
void** clo52584 = alloc_clo(lam52450_fptr, 5);

//setting env list
clo52584[1] = foldl;
clo52584[2] = fun;
clo52584[3] = kont52188;
clo52584[4] = lst;
clo52584[5] = cdr;
void* f5219052310 = encode_clo(clo52584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5219052310;
arg_buffer[3] = a5209652309;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52452 = encode_clo(alloc_clo(lam52452_fptr, 0));

void* lam52454_fptr() // lam52454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52455 = arg_buffer[1];
//reading env and args
void* a5209552307 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52455))[7];
//not do dummy comment
void* lst = (decode_clo(env52455))[6];
//not do dummy comment
void* kont52188 = (decode_clo(env52455))[5];
//not do dummy comment
void* fun = (decode_clo(env52455))[4];
//not do dummy comment
void* acc = (decode_clo(env52455))[3];
//not do dummy comment
void* car = (decode_clo(env52455))[2];
//not do dummy comment
void* foldl = (decode_clo(env52455))[1];

//if-clause
bool if_guard52585 = is_true(a5209552307);
if(if_guard52585)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52188);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52188))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52587 = alloc_clo(lam52452_fptr, 6);

//setting env list
clo52587[1] = foldl;
clo52587[2] = acc;
clo52587[3] = fun;
clo52587[4] = kont52188;
clo52587[5] = lst;
clo52587[6] = cdr;
void* f5219152308 = encode_clo(clo52587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5219152308;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52454 = encode_clo(alloc_clo(lam52454_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52456 = arg_buffer[1];
//reading env and args
void* kont52188 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo52589 = alloc_clo(lam52454_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo52589[1] = foldl;
clo52589[2] = car;
clo52589[3] = acc;
clo52589[4] = fun;
clo52589[5] = kont52188;
clo52589[6] = lst;
clo52589[7] = cdr;
void* f5219252306 = encode_clo(clo52589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5219252306;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam52457_fptr() // lam52457 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52458 = arg_buffer[1];
//reading env and args
void* a5210252321 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52458))[3];
//not do dummy comment
void* a5210052317 = (decode_clo(env52458))[2];
//not do dummy comment
void* kont52193 = (decode_clo(env52458))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont52193;
arg_buffer[3] = a5210052317;
arg_buffer[4] = a5210252321;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52457 = encode_clo(alloc_clo(lam52457_fptr, 0));

void* lam52459_fptr() // lam52459 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52460 = arg_buffer[1];
//reading env and args
void* a5210152319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52460))[5];
//not do dummy comment
void* a5210052317 = (decode_clo(env52460))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52460))[3];
//not do dummy comment
void* kont52193 = (decode_clo(env52460))[2];
//not do dummy comment
void* cons = (decode_clo(env52460))[1];

//creating new closure instance
void** clo52591 = alloc_clo(lam52457_fptr, 3);

//setting env list
clo52591[1] = kont52193;
clo52591[2] = a5210052317;
clo52591[3] = reverse_u45helper;
void* f5219452320 = encode_clo(clo52591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5219452320;
arg_buffer[3] = a5210152319;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52459 = encode_clo(alloc_clo(lam52459_fptr, 0));

void* lam52461_fptr() // lam52461 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52462 = arg_buffer[1];
//reading env and args
void* a5210052317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52462))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52462))[5];
//not do dummy comment
void* lst2 = (decode_clo(env52462))[4];
//not do dummy comment
void* cons = (decode_clo(env52462))[3];
//not do dummy comment
void* kont52193 = (decode_clo(env52462))[2];
//not do dummy comment
void* car = (decode_clo(env52462))[1];

//creating new closure instance
void** clo52593 = alloc_clo(lam52459_fptr, 5);

//setting env list
clo52593[1] = cons;
clo52593[2] = kont52193;
clo52593[3] = lst2;
clo52593[4] = a5210052317;
clo52593[5] = reverse_u45helper;
void* f5219552318 = encode_clo(clo52593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5219552318;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52461 = encode_clo(alloc_clo(lam52461_fptr, 0));

void* lam52463_fptr() // lam52463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52464 = arg_buffer[1];
//reading env and args
void* a5209952315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52464))[7];
//not do dummy comment
void* lst = (decode_clo(env52464))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52464))[5];
//not do dummy comment
void* lst2 = (decode_clo(env52464))[4];
//not do dummy comment
void* cons = (decode_clo(env52464))[3];
//not do dummy comment
void* kont52193 = (decode_clo(env52464))[2];
//not do dummy comment
void* car = (decode_clo(env52464))[1];

//if-clause
bool if_guard52594 = is_true(a5209952315);
if(if_guard52594)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52193);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52193))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52596 = alloc_clo(lam52461_fptr, 6);

//setting env list
clo52596[1] = car;
clo52596[2] = kont52193;
clo52596[3] = cons;
clo52596[4] = lst2;
clo52596[5] = reverse_u45helper;
clo52596[6] = lst;
void* f5219652316 = encode_clo(clo52596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5219652316;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52463 = encode_clo(alloc_clo(lam52463_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52465 = arg_buffer[1];
//reading env and args
void* kont52193 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52598 = alloc_clo(lam52463_fptr, 7);

//setting env list
clo52598[1] = car;
clo52598[2] = kont52193;
clo52598[3] = cons;
clo52598[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo52598[5] = reverse_u45helper;
clo52598[6] = lst;
clo52598[7] = cdr;
void* f5219752314 = encode_clo(clo52598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5219752314;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam52466_fptr() // lam52466 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52467 = arg_buffer[1];
//reading env and args
void* a5210352323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52198 = (decode_clo(env52467))[3];
//not do dummy comment
void* lst = (decode_clo(env52467))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52467))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont52198;
arg_buffer[3] = lst;
arg_buffer[4] = a5210352323;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52466 = encode_clo(alloc_clo(lam52466_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52468 = arg_buffer[1];
//reading env and args
void* kont52198 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo52600 = alloc_clo(lam52466_fptr, 3);

//setting env list
clo52600[1] = reverse_u45helper;
clo52600[2] = lst;
clo52600[3] = kont52198;
void* f5219952322 = encode_clo(clo52600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5219952322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam52469_fptr() // lam52469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52470 = arg_buffer[1];
//reading env and args
void* x5210652328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52200 = (decode_clo(env52470))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52200);
arg_buffer[2] = x5210652328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52200))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52469 = encode_clo(alloc_clo(lam52469_fptr, 0));

void* lam52471_fptr() // lam52471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52472 = arg_buffer[1];
//reading env and args
void* a5211152337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52200 = (decode_clo(env52472))[4];
//not do dummy comment
void* a5210752330 = (decode_clo(env52472))[3];
//not do dummy comment
void* a5210952333 = (decode_clo(env52472))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env52472))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont52200;
arg_buffer[3] = a5210752330;
arg_buffer[4] = a5210952333;
arg_buffer[5] = a5211152337;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52471 = encode_clo(alloc_clo(lam52471_fptr, 0));

void* lam52473_fptr() // lam52473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52474 = arg_buffer[1];
//reading env and args
void* a5211052335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52200 = (decode_clo(env52474))[6];
//not do dummy comment
void* a5210752330 = (decode_clo(env52474))[5];
//not do dummy comment
void* a5210952333 = (decode_clo(env52474))[4];
//not do dummy comment
void* cons = (decode_clo(env52474))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52474))[2];
//not do dummy comment
void* lst2 = (decode_clo(env52474))[1];

//creating new closure instance
void** clo52602 = alloc_clo(lam52471_fptr, 4);

//setting env list
clo52602[1] = take_u45helper;
clo52602[2] = a5210952333;
clo52602[3] = a5210752330;
clo52602[4] = kont52200;
void* f5220252336 = encode_clo(clo52602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5220252336;
arg_buffer[3] = a5211052335;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52473 = encode_clo(alloc_clo(lam52473_fptr, 0));

void* lam52475_fptr() // lam52475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52476 = arg_buffer[1];
//reading env and args
void* a5210952333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5210752330 = (decode_clo(env52476))[7];
//not do dummy comment
void* car = (decode_clo(env52476))[6];
//not do dummy comment
void* cons = (decode_clo(env52476))[5];
//not do dummy comment
void* lst = (decode_clo(env52476))[4];
//not do dummy comment
void* kont52200 = (decode_clo(env52476))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52476))[2];
//not do dummy comment
void* lst2 = (decode_clo(env52476))[1];

//creating new closure instance
void** clo52604 = alloc_clo(lam52473_fptr, 6);

//setting env list
clo52604[1] = lst2;
clo52604[2] = take_u45helper;
clo52604[3] = cons;
clo52604[4] = a5210952333;
clo52604[5] = a5210752330;
clo52604[6] = kont52200;
void* f5220352334 = encode_clo(clo52604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5220352334;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52475 = encode_clo(alloc_clo(lam52475_fptr, 0));

void* lam52478_fptr() // lam52478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52479 = arg_buffer[1];
//reading env and args
void* a5210752330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env52479))[8];
//not do dummy comment
void* _u45 = (decode_clo(env52479))[7];
//not do dummy comment
void* lst = (decode_clo(env52479))[6];
//not do dummy comment
void* kont52200 = (decode_clo(env52479))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env52479))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52479))[3];
//not do dummy comment
void* n = (decode_clo(env52479))[2];
//not do dummy comment
void* car = (decode_clo(env52479))[1];
mpz_t* mpzvar52605 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52605, "1", 10);
void* a5210852331 = encode_mpz(mpzvar52605);

//creating new closure instance
void** clo52607 = alloc_clo(lam52475_fptr, 7);

//setting env list
clo52607[1] = lst2;
clo52607[2] = take_u45helper;
clo52607[3] = kont52200;
clo52607[4] = lst;
clo52607[5] = cons;
clo52607[6] = car;
clo52607[7] = a5210752330;
void* f5220452332 = encode_clo(clo52607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5220452332;
arg_buffer[3] = n;
arg_buffer[4] = a5210852331;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52478 = encode_clo(alloc_clo(lam52478_fptr, 0));

void* lam52480_fptr() // lam52480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52481 = arg_buffer[1];
//reading env and args
void* a5210552326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52481))[10];
//not do dummy comment
void* reverse = (decode_clo(env52481))[9];
//not do dummy comment
void* cons = (decode_clo(env52481))[8];
//not do dummy comment
void* _u45 = (decode_clo(env52481))[7];
//not do dummy comment
void* lst = (decode_clo(env52481))[6];
//not do dummy comment
void* kont52200 = (decode_clo(env52481))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env52481))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52481))[3];
//not do dummy comment
void* n = (decode_clo(env52481))[2];
//not do dummy comment
void* car = (decode_clo(env52481))[1];

//if-clause
bool if_guard52608 = is_true(a5210552326);
if(if_guard52608)
{

//creating new closure instance
void** clo52610 = alloc_clo(lam52469_fptr, 1);

//setting env list
clo52610[1] = kont52200;
void* f5220152327 = encode_clo(clo52610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5220152327;
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
void** clo52612 = alloc_clo(lam52478_fptr, 8);

//setting env list
clo52612[1] = car;
clo52612[2] = n;
clo52612[3] = lst2;
clo52612[4] = take_u45helper;
clo52612[5] = kont52200;
clo52612[6] = lst;
clo52612[7] = _u45;
clo52612[8] = cons;
void* f5220552329 = encode_clo(clo52612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5220552329;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52480 = encode_clo(alloc_clo(lam52480_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52483 = arg_buffer[1];
//reading env and args
void* kont52200 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar52613 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52613, "0", 10);
void* a5210452324 = encode_mpz(mpzvar52613);

//creating new closure instance
void** clo52615 = alloc_clo(lam52480_fptr, 10);

//setting env list
clo52615[1] = car;
clo52615[2] = n;
clo52615[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo52615[4] = take_u45helper;
clo52615[5] = kont52200;
clo52615[6] = lst;
clo52615[7] = _u45;
clo52615[8] = cons;
clo52615[9] = reverse;
clo52615[10] = cdr;
void* f5220652325 = encode_clo(clo52615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5220652325;
arg_buffer[3] = n;
arg_buffer[4] = a5210452324;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam52484_fptr() // lam52484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52485 = arg_buffer[1];
//reading env and args
void* a5211252339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52485))[4];
//not do dummy comment
void* kont52207 = (decode_clo(env52485))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52485))[2];
//not do dummy comment
void* n = (decode_clo(env52485))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont52207;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5211252339;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52484 = encode_clo(alloc_clo(lam52484_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52486 = arg_buffer[1];
//reading env and args
void* kont52207 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52617 = alloc_clo(lam52484_fptr, 4);

//setting env list
clo52617[1] = n;
clo52617[2] = take_u45helper;
clo52617[3] = kont52207;
clo52617[4] = lst;
void* f5220852338 = encode_clo(clo52617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5220852338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam52488_fptr() // lam52488 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52489 = arg_buffer[1];
//reading env and args
void* a5211752347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5211552343 = (decode_clo(env52489))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52489))[2];
//not do dummy comment
void* kont52209 = (decode_clo(env52489))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont52209;
arg_buffer[3] = a5211552343;
arg_buffer[4] = a5211752347;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52488 = encode_clo(alloc_clo(lam52488_fptr, 0));

void* lam52490_fptr() // lam52490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52491 = arg_buffer[1];
//reading env and args
void* a5211652345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5211552343 = (decode_clo(env52491))[4];
//not do dummy comment
void* length = (decode_clo(env52491))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52491))[2];
//not do dummy comment
void* kont52209 = (decode_clo(env52491))[1];

//creating new closure instance
void** clo52619 = alloc_clo(lam52488_fptr, 3);

//setting env list
clo52619[1] = kont52209;
clo52619[2] = _u43;
clo52619[3] = a5211552343;
void* f5221052346 = encode_clo(clo52619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5221052346;
arg_buffer[3] = a5211652345;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52490 = encode_clo(alloc_clo(lam52490_fptr, 0));

void* lam52493_fptr() // lam52493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52494 = arg_buffer[1];
//reading env and args
void* a5211352341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52494))[5];
//not do dummy comment
void* lst = (decode_clo(env52494))[4];
//not do dummy comment
void* length = (decode_clo(env52494))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52494))[2];
//not do dummy comment
void* kont52209 = (decode_clo(env52494))[1];

//if-clause
bool if_guard52620 = is_true(a5211352341);
if(if_guard52620)
{
mpz_t* mpzvar52621 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52621, "0", 10);
void* x5211452342 = encode_mpz(mpzvar52621);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52209);
arg_buffer[2] = x5211452342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52209))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar52622 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52622, "1", 10);
void* a5211552343 = encode_mpz(mpzvar52622);

//creating new closure instance
void** clo52624 = alloc_clo(lam52490_fptr, 4);

//setting env list
clo52624[1] = kont52209;
clo52624[2] = _u43;
clo52624[3] = length;
clo52624[4] = a5211552343;
void* f5221152344 = encode_clo(clo52624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5221152344;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52493 = encode_clo(alloc_clo(lam52493_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52495 = arg_buffer[1];
//reading env and args
void* kont52209 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo52626 = alloc_clo(lam52493_fptr, 5);

//setting env list
clo52626[1] = kont52209;
clo52626[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo52626[3] = length;
clo52626[4] = lst;
clo52626[5] = cdr;
void* f5221252340 = encode_clo(clo52626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5221252340;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam52496_fptr() // lam52496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52497 = arg_buffer[1];
//reading env and args
void* x5211952351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52213 = (decode_clo(env52497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52213);
arg_buffer[2] = x5211952351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52213))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52496 = encode_clo(alloc_clo(lam52496_fptr, 0));

void* lam52498_fptr() // lam52498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52499 = arg_buffer[1];
//reading env and args
void* a5212352359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52213 = (decode_clo(env52499))[3];
//not do dummy comment
void* cons = (decode_clo(env52499))[2];
//not do dummy comment
void* a5212152355 = (decode_clo(env52499))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52213;
arg_buffer[3] = a5212152355;
arg_buffer[4] = a5212352359;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52498 = encode_clo(alloc_clo(lam52498_fptr, 0));

void* lam52500_fptr() // lam52500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52501 = arg_buffer[1];
//reading env and args
void* a5212252357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52213 = (decode_clo(env52501))[5];
//not do dummy comment
void* map = (decode_clo(env52501))[4];
//not do dummy comment
void* proc = (decode_clo(env52501))[3];
//not do dummy comment
void* cons = (decode_clo(env52501))[2];
//not do dummy comment
void* a5212152355 = (decode_clo(env52501))[1];

//creating new closure instance
void** clo52628 = alloc_clo(lam52498_fptr, 3);

//setting env list
clo52628[1] = a5212152355;
clo52628[2] = cons;
clo52628[3] = kont52213;
void* f5221552358 = encode_clo(clo52628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5221552358;
arg_buffer[3] = proc;
arg_buffer[4] = a5212252357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52500 = encode_clo(alloc_clo(lam52500_fptr, 0));

void* lam52502_fptr() // lam52502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52503 = arg_buffer[1];
//reading env and args
void* a5212152355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52503))[6];
//not do dummy comment
void* kont52213 = (decode_clo(env52503))[5];
//not do dummy comment
void* lst = (decode_clo(env52503))[4];
//not do dummy comment
void* map = (decode_clo(env52503))[3];
//not do dummy comment
void* proc = (decode_clo(env52503))[2];
//not do dummy comment
void* cons = (decode_clo(env52503))[1];

//creating new closure instance
void** clo52630 = alloc_clo(lam52500_fptr, 5);

//setting env list
clo52630[1] = a5212152355;
clo52630[2] = cons;
clo52630[3] = proc;
clo52630[4] = map;
clo52630[5] = kont52213;
void* f5221652356 = encode_clo(clo52630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5221652356;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52502 = encode_clo(alloc_clo(lam52502_fptr, 0));

void* lam52504_fptr() // lam52504 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52505 = arg_buffer[1];
//reading env and args
void* a5212052353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52505))[6];
//not do dummy comment
void* kont52213 = (decode_clo(env52505))[5];
//not do dummy comment
void* lst = (decode_clo(env52505))[4];
//not do dummy comment
void* map = (decode_clo(env52505))[3];
//not do dummy comment
void* proc = (decode_clo(env52505))[2];
//not do dummy comment
void* cons = (decode_clo(env52505))[1];

//creating new closure instance
void** clo52632 = alloc_clo(lam52502_fptr, 6);

//setting env list
clo52632[1] = cons;
clo52632[2] = proc;
clo52632[3] = map;
clo52632[4] = lst;
clo52632[5] = kont52213;
clo52632[6] = cdr;
void* f5221752354 = encode_clo(clo52632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5221752354;
arg_buffer[3] = a5212052353;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52504 = encode_clo(alloc_clo(lam52504_fptr, 0));

void* lam52506_fptr() // lam52506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52507 = arg_buffer[1];
//reading env and args
void* a5211852349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52213 = (decode_clo(env52507))[8];
//not do dummy comment
void* lst = (decode_clo(env52507))[7];
//not do dummy comment
void* map = (decode_clo(env52507))[6];
//not do dummy comment
void* proc = (decode_clo(env52507))[5];
//not do dummy comment
void* car = (decode_clo(env52507))[4];
//not do dummy comment
void* cons = (decode_clo(env52507))[3];
//not do dummy comment
void* list = (decode_clo(env52507))[2];
//not do dummy comment
void* cdr = (decode_clo(env52507))[1];

//if-clause
bool if_guard52633 = is_true(a5211852349);
if(if_guard52633)
{

//creating new closure instance
void** clo52635 = alloc_clo(lam52496_fptr, 1);

//setting env list
clo52635[1] = kont52213;
void* f5221452350 = encode_clo(clo52635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5221452350;
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
void** clo52637 = alloc_clo(lam52504_fptr, 6);

//setting env list
clo52637[1] = cons;
clo52637[2] = proc;
clo52637[3] = map;
clo52637[4] = lst;
clo52637[5] = kont52213;
clo52637[6] = cdr;
void* f5221852352 = encode_clo(clo52637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5221852352;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52506 = encode_clo(alloc_clo(lam52506_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52508 = arg_buffer[1];
//reading env and args
void* kont52213 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52639 = alloc_clo(lam52506_fptr, 8);

//setting env list
clo52639[1] = cdr;
clo52639[2] = list;
clo52639[3] = cons;
clo52639[4] = car;
clo52639[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo52639[6] = map;
clo52639[7] = lst;
clo52639[8] = kont52213;
void* f5221952348 = encode_clo(clo52639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5221952348;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam52509_fptr() // lam52509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52510 = arg_buffer[1];
//reading env and args
void* x5212552363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52220 = (decode_clo(env52510))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52220);
arg_buffer[2] = x5212552363;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52220))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52509 = encode_clo(alloc_clo(lam52509_fptr, 0));

void* lam52511_fptr() // lam52511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52512 = arg_buffer[1];
//reading env and args
void* a5213052373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52220 = (decode_clo(env52512))[3];
//not do dummy comment
void* a5212852369 = (decode_clo(env52512))[2];
//not do dummy comment
void* cons = (decode_clo(env52512))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52220;
arg_buffer[3] = a5212852369;
arg_buffer[4] = a5213052373;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52511 = encode_clo(alloc_clo(lam52511_fptr, 0));

void* lam52513_fptr() // lam52513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52514 = arg_buffer[1];
//reading env and args
void* a5212952371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env52514))[5];
//not do dummy comment
void* kont52220 = (decode_clo(env52514))[4];
//not do dummy comment
void* cons = (decode_clo(env52514))[3];
//not do dummy comment
void* a5212852369 = (decode_clo(env52514))[2];
//not do dummy comment
void* filter = (decode_clo(env52514))[1];

//creating new closure instance
void** clo52641 = alloc_clo(lam52511_fptr, 3);

//setting env list
clo52641[1] = cons;
clo52641[2] = a5212852369;
clo52641[3] = kont52220;
void* f5222252372 = encode_clo(clo52641);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5222252372;
arg_buffer[3] = op;
arg_buffer[4] = a5212952371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52513 = encode_clo(alloc_clo(lam52513_fptr, 0));

void* lam52515_fptr() // lam52515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52516 = arg_buffer[1];
//reading env and args
void* a5212852369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52516))[6];
//not do dummy comment
void* lst = (decode_clo(env52516))[5];
//not do dummy comment
void* op = (decode_clo(env52516))[4];
//not do dummy comment
void* kont52220 = (decode_clo(env52516))[3];
//not do dummy comment
void* filter = (decode_clo(env52516))[2];
//not do dummy comment
void* cons = (decode_clo(env52516))[1];

//creating new closure instance
void** clo52643 = alloc_clo(lam52513_fptr, 5);

//setting env list
clo52643[1] = filter;
clo52643[2] = a5212852369;
clo52643[3] = cons;
clo52643[4] = kont52220;
clo52643[5] = op;
void* f5222352370 = encode_clo(clo52643);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5222352370;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52515 = encode_clo(alloc_clo(lam52515_fptr, 0));

void* lam52517_fptr() // lam52517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52518 = arg_buffer[1];
//reading env and args
void* a5213152375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env52518))[3];
//not do dummy comment
void* kont52220 = (decode_clo(env52518))[2];
//not do dummy comment
void* filter = (decode_clo(env52518))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont52220;
arg_buffer[3] = op;
arg_buffer[4] = a5213152375;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52517 = encode_clo(alloc_clo(lam52517_fptr, 0));

void* lam52519_fptr() // lam52519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52520 = arg_buffer[1];
//reading env and args
void* a5212752367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52520))[7];
//not do dummy comment
void* lst = (decode_clo(env52520))[6];
//not do dummy comment
void* op = (decode_clo(env52520))[5];
//not do dummy comment
void* kont52220 = (decode_clo(env52520))[4];
//not do dummy comment
void* cons = (decode_clo(env52520))[3];
//not do dummy comment
void* filter = (decode_clo(env52520))[2];
//not do dummy comment
void* car = (decode_clo(env52520))[1];

//if-clause
bool if_guard52644 = is_true(a5212752367);
if(if_guard52644)
{

//creating new closure instance
void** clo52646 = alloc_clo(lam52515_fptr, 6);

//setting env list
clo52646[1] = cons;
clo52646[2] = filter;
clo52646[3] = kont52220;
clo52646[4] = op;
clo52646[5] = lst;
clo52646[6] = cdr;
void* f5222452368 = encode_clo(clo52646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5222452368;
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
void** clo52648 = alloc_clo(lam52517_fptr, 3);

//setting env list
clo52648[1] = filter;
clo52648[2] = kont52220;
clo52648[3] = op;
void* f5222552374 = encode_clo(clo52648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5222552374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52519 = encode_clo(alloc_clo(lam52519_fptr, 0));

void* lam52521_fptr() // lam52521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52522 = arg_buffer[1];
//reading env and args
void* a5212652365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52522))[7];
//not do dummy comment
void* lst = (decode_clo(env52522))[6];
//not do dummy comment
void* op = (decode_clo(env52522))[5];
//not do dummy comment
void* kont52220 = (decode_clo(env52522))[4];
//not do dummy comment
void* cons = (decode_clo(env52522))[3];
//not do dummy comment
void* filter = (decode_clo(env52522))[2];
//not do dummy comment
void* car = (decode_clo(env52522))[1];

//creating new closure instance
void** clo52650 = alloc_clo(lam52519_fptr, 7);

//setting env list
clo52650[1] = car;
clo52650[2] = filter;
clo52650[3] = cons;
clo52650[4] = kont52220;
clo52650[5] = op;
clo52650[6] = lst;
clo52650[7] = cdr;
void* f5222652366 = encode_clo(clo52650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5222652366;
arg_buffer[3] = a5212652365;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52521 = encode_clo(alloc_clo(lam52521_fptr, 0));

void* lam52523_fptr() // lam52523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52524 = arg_buffer[1];
//reading env and args
void* a5212452361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52524))[8];
//not do dummy comment
void* op = (decode_clo(env52524))[7];
//not do dummy comment
void* kont52220 = (decode_clo(env52524))[6];
//not do dummy comment
void* cons = (decode_clo(env52524))[5];
//not do dummy comment
void* list = (decode_clo(env52524))[4];
//not do dummy comment
void* cdr = (decode_clo(env52524))[3];
//not do dummy comment
void* filter = (decode_clo(env52524))[2];
//not do dummy comment
void* car = (decode_clo(env52524))[1];

//if-clause
bool if_guard52651 = is_true(a5212452361);
if(if_guard52651)
{

//creating new closure instance
void** clo52653 = alloc_clo(lam52509_fptr, 1);

//setting env list
clo52653[1] = kont52220;
void* f5222152362 = encode_clo(clo52653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5222152362;
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
void** clo52655 = alloc_clo(lam52521_fptr, 7);

//setting env list
clo52655[1] = car;
clo52655[2] = filter;
clo52655[3] = cons;
clo52655[4] = kont52220;
clo52655[5] = op;
clo52655[6] = lst;
clo52655[7] = cdr;
void* f5222752364 = encode_clo(clo52655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5222752364;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52523 = encode_clo(alloc_clo(lam52523_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52525 = arg_buffer[1];
//reading env and args
void* kont52220 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52657 = alloc_clo(lam52523_fptr, 8);

//setting env list
clo52657[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo52657[2] = filter;
clo52657[3] = cdr;
clo52657[4] = list;
clo52657[5] = cons;
clo52657[6] = kont52220;
clo52657[7] = op;
clo52657[8] = lst;
void* f5222852360 = encode_clo(clo52657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5222852360;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam52526_fptr() // lam52526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52527 = arg_buffer[1];
//reading env and args
void* a5213652383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52229 = (decode_clo(env52527))[3];
//not do dummy comment
void* drop = (decode_clo(env52527))[2];
//not do dummy comment
void* a5213452380 = (decode_clo(env52527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont52229;
arg_buffer[3] = a5213452380;
arg_buffer[4] = a5213652383;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52526 = encode_clo(alloc_clo(lam52526_fptr, 0));

void* lam52529_fptr() // lam52529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52530 = arg_buffer[1];
//reading env and args
void* a5213452380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52229 = (decode_clo(env52530))[4];
//not do dummy comment
void* drop = (decode_clo(env52530))[3];
//not do dummy comment
void* n = (decode_clo(env52530))[2];
//not do dummy comment
void* _u45 = (decode_clo(env52530))[1];
mpz_t* mpzvar52658 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52658, "1", 10);
void* a5213552381 = encode_mpz(mpzvar52658);

//creating new closure instance
void** clo52660 = alloc_clo(lam52526_fptr, 3);

//setting env list
clo52660[1] = a5213452380;
clo52660[2] = drop;
clo52660[3] = kont52229;
void* f5223052382 = encode_clo(clo52660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5223052382;
arg_buffer[3] = n;
arg_buffer[4] = a5213552381;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52529 = encode_clo(alloc_clo(lam52529_fptr, 0));

void* lam52531_fptr() // lam52531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52532 = arg_buffer[1];
//reading env and args
void* a5213352378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52532))[6];
//not do dummy comment
void* kont52229 = (decode_clo(env52532))[5];
//not do dummy comment
void* n = (decode_clo(env52532))[4];
//not do dummy comment
void* _u45 = (decode_clo(env52532))[3];
//not do dummy comment
void* lst = (decode_clo(env52532))[2];
//not do dummy comment
void* drop = (decode_clo(env52532))[1];

//if-clause
bool if_guard52661 = is_true(a5213352378);
if(if_guard52661)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52229);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52229))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52663 = alloc_clo(lam52529_fptr, 4);

//setting env list
clo52663[1] = _u45;
clo52663[2] = n;
clo52663[3] = drop;
clo52663[4] = kont52229;
void* f5223152379 = encode_clo(clo52663);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5223152379;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52531 = encode_clo(alloc_clo(lam52531_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52534 = arg_buffer[1];
//reading env and args
void* kont52229 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar52664 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52664, "0", 10);
void* a5213252376 = encode_mpz(mpzvar52664);

//creating new closure instance
void** clo52666 = alloc_clo(lam52531_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo52666[1] = drop;
clo52666[2] = lst;
clo52666[3] = _u45;
clo52666[4] = n;
clo52666[5] = kont52229;
clo52666[6] = cdr;
void* f5223252377 = encode_clo(clo52666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5223252377;
arg_buffer[3] = n;
arg_buffer[4] = a5213252376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam52535_fptr() // lam52535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52536 = arg_buffer[1];
//reading env and args
void* a5214052391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52233 = (decode_clo(env52536))[3];
//not do dummy comment
void* proc = (decode_clo(env52536))[2];
//not do dummy comment
void* a5213852387 = (decode_clo(env52536))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont52233;
arg_buffer[3] = a5213852387;
arg_buffer[4] = a5214052391;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52535 = encode_clo(alloc_clo(lam52535_fptr, 0));

void* lam52537_fptr() // lam52537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52538 = arg_buffer[1];
//reading env and args
void* a5213952389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env52538))[5];
//not do dummy comment
void* kont52233 = (decode_clo(env52538))[4];
//not do dummy comment
void* a5213852387 = (decode_clo(env52538))[3];
//not do dummy comment
void* proc = (decode_clo(env52538))[2];
//not do dummy comment
void* acc = (decode_clo(env52538))[1];

//creating new closure instance
void** clo52668 = alloc_clo(lam52535_fptr, 3);

//setting env list
clo52668[1] = a5213852387;
clo52668[2] = proc;
clo52668[3] = kont52233;
void* f5223452390 = encode_clo(clo52668);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5223452390;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5213952389;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52537 = encode_clo(alloc_clo(lam52537_fptr, 0));

void* lam52539_fptr() // lam52539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52540 = arg_buffer[1];
//reading env and args
void* a5213852387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52540))[6];
//not do dummy comment
void* kont52233 = (decode_clo(env52540))[5];
//not do dummy comment
void* foldr = (decode_clo(env52540))[4];
//not do dummy comment
void* lst = (decode_clo(env52540))[3];
//not do dummy comment
void* proc = (decode_clo(env52540))[2];
//not do dummy comment
void* acc = (decode_clo(env52540))[1];

//creating new closure instance
void** clo52670 = alloc_clo(lam52537_fptr, 5);

//setting env list
clo52670[1] = acc;
clo52670[2] = proc;
clo52670[3] = a5213852387;
clo52670[4] = kont52233;
clo52670[5] = foldr;
void* f5223552388 = encode_clo(clo52670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5223552388;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52539 = encode_clo(alloc_clo(lam52539_fptr, 0));

void* lam52541_fptr() // lam52541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52542 = arg_buffer[1];
//reading env and args
void* a5213752385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52542))[7];
//not do dummy comment
void* kont52233 = (decode_clo(env52542))[6];
//not do dummy comment
void* car = (decode_clo(env52542))[5];
//not do dummy comment
void* foldr = (decode_clo(env52542))[4];
//not do dummy comment
void* lst = (decode_clo(env52542))[3];
//not do dummy comment
void* proc = (decode_clo(env52542))[2];
//not do dummy comment
void* acc = (decode_clo(env52542))[1];

//if-clause
bool if_guard52671 = is_true(a5213752385);
if(if_guard52671)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52233);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52233))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52673 = alloc_clo(lam52539_fptr, 6);

//setting env list
clo52673[1] = acc;
clo52673[2] = proc;
clo52673[3] = lst;
clo52673[4] = foldr;
clo52673[5] = kont52233;
clo52673[6] = cdr;
void* f5223652386 = encode_clo(clo52673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5223652386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52541 = encode_clo(alloc_clo(lam52541_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52543 = arg_buffer[1];
//reading env and args
void* kont52233 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo52675 = alloc_clo(lam52541_fptr, 7);

//setting env list
clo52675[1] = acc;
clo52675[2] = proc;
clo52675[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo52675[4] = foldr;
clo52675[5] = car;
clo52675[6] = kont52233;
clo52675[7] = cdr;
void* f5223752384 = encode_clo(clo52675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5223752384;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam52544_fptr() // lam52544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52545 = arg_buffer[1];
//reading env and args
void* a5214452399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5214252395 = (decode_clo(env52545))[3];
//not do dummy comment
void* kont52238 = (decode_clo(env52545))[2];
//not do dummy comment
void* cons = (decode_clo(env52545))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52238;
arg_buffer[3] = a5214252395;
arg_buffer[4] = a5214452399;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52544 = encode_clo(alloc_clo(lam52544_fptr, 0));

void* lam52546_fptr() // lam52546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52547 = arg_buffer[1];
//reading env and args
void* a5214352397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5214252395 = (decode_clo(env52547))[5];
//not do dummy comment
void* append = (decode_clo(env52547))[4];
//not do dummy comment
void* kont52238 = (decode_clo(env52547))[3];
//not do dummy comment
void* lst2 = (decode_clo(env52547))[2];
//not do dummy comment
void* cons = (decode_clo(env52547))[1];

//creating new closure instance
void** clo52677 = alloc_clo(lam52544_fptr, 3);

//setting env list
clo52677[1] = cons;
clo52677[2] = kont52238;
clo52677[3] = a5214252395;
void* f5223952398 = encode_clo(clo52677);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5223952398;
arg_buffer[3] = a5214352397;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52546 = encode_clo(alloc_clo(lam52546_fptr, 0));

void* lam52548_fptr() // lam52548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52549 = arg_buffer[1];
//reading env and args
void* a5214252395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52549))[6];
//not do dummy comment
void* append = (decode_clo(env52549))[5];
//not do dummy comment
void* kont52238 = (decode_clo(env52549))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52549))[3];
//not do dummy comment
void* lst1 = (decode_clo(env52549))[2];
//not do dummy comment
void* cons = (decode_clo(env52549))[1];

//creating new closure instance
void** clo52679 = alloc_clo(lam52546_fptr, 5);

//setting env list
clo52679[1] = cons;
clo52679[2] = lst2;
clo52679[3] = kont52238;
clo52679[4] = append;
clo52679[5] = a5214252395;
void* f5224052396 = encode_clo(clo52679);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5224052396;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52548 = encode_clo(alloc_clo(lam52548_fptr, 0));

void* lam52550_fptr() // lam52550 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52551 = arg_buffer[1];
//reading env and args
void* a5214152393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52551))[7];
//not do dummy comment
void* append = (decode_clo(env52551))[6];
//not do dummy comment
void* kont52238 = (decode_clo(env52551))[5];
//not do dummy comment
void* lst2 = (decode_clo(env52551))[4];
//not do dummy comment
void* cons = (decode_clo(env52551))[3];
//not do dummy comment
void* lst1 = (decode_clo(env52551))[2];
//not do dummy comment
void* car = (decode_clo(env52551))[1];

//if-clause
bool if_guard52680 = is_true(a5214152393);
if(if_guard52680)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52238);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52238))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52682 = alloc_clo(lam52548_fptr, 6);

//setting env list
clo52682[1] = cons;
clo52682[2] = lst1;
clo52682[3] = lst2;
clo52682[4] = kont52238;
clo52682[5] = append;
clo52682[6] = cdr;
void* f5224152394 = encode_clo(clo52682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5224152394;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52550 = encode_clo(alloc_clo(lam52550_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52552 = arg_buffer[1];
//reading env and args
void* kont52238 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52684 = alloc_clo(lam52550_fptr, 7);

//setting env list
clo52684[1] = car;
clo52684[2] = lst1;
clo52684[3] = cons;
clo52684[4] = lst2;
clo52684[5] = kont52238;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo52684[6] = append;
clo52684[7] = cdr;
void* f5224252392 = encode_clo(clo52684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5224252392;
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
void* _52553 = arg_buffer[1];
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

void* kont5224352400 = prim_car(lst);
void* lst52401 = prim_cdr(lst);
void* x5214552402 = apply_prim_hash(lst52401);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5224352400);
arg_buffer[2] = x5214552402;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5224352400))[0]);
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
void* _52554 = arg_buffer[1];
//reading env and args
void* kont52245 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5214652403 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52245);
arg_buffer[2] = x5214652403;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52245))[0]);
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
void* _52555 = arg_buffer[1];
//reading env and args
void* kont52246 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5214752404 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52246);
arg_buffer[2] = x5214752404;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52246))[0]);
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
void* _52556 = arg_buffer[1];
//reading env and args
void* kont52247 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5214852405 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52247);
arg_buffer[2] = x5214852405;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52247))[0]);
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
void* _52557 = arg_buffer[1];
//reading env and args
void* kont52248 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5214952406 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52248);
arg_buffer[2] = x5214952406;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52248))[0]);
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
void* _52559 = arg_buffer[1];
//reading env and args
void* kont52249 = arg_buffer[2];
//Dummy comment
void* x5215052407 = encode_str(new(GC) std::string("random"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52249);
arg_buffer[2] = x5215052407;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52249))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam52560_fptr() // lam52560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52561 = arg_buffer[1];
//reading env and args
void* x5215152409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52250 = (decode_clo(env52561))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52250);
arg_buffer[2] = x5215152409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52250))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52560 = encode_clo(alloc_clo(lam52560_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52562 = arg_buffer[1];
//reading env and args
void* kont52250 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo52686 = alloc_clo(lam52560_fptr, 1);

//setting env list
clo52686[1] = kont52250;
void* f5225152408 = encode_clo(clo52686);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5225152408;
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

