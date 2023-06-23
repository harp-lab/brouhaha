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
void* _111397 = arg_buffer[1];
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

void* kont111139111239 = prim_car(lst);
void* lst111240 = prim_cdr(lst);
void* x111054111241 = apply_prim__u43(lst111240);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111139111239);
arg_buffer[2] = x111054111241;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111139111239))[0]);
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
void* _111398 = arg_buffer[1];
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

void* kont111141111242 = prim_car(lst);
void* lst111243 = prim_cdr(lst);
void* x111055111244 = apply_prim__u45(lst111243);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111141111242);
arg_buffer[2] = x111055111244;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111141111242))[0]);
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
void* _111399 = arg_buffer[1];
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

void* kont111143111245 = prim_car(lst);
void* lst111246 = prim_cdr(lst);
void* x111056111247 = apply_prim__u42(lst111246);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111143111245);
arg_buffer[2] = x111056111247;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111143111245))[0]);
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
void* _111400 = arg_buffer[1];
//reading env and args
void* kont111145 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x111057111248 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111145);
arg_buffer[2] = x111057111248;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111145))[0]);
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
void* _111401 = arg_buffer[1];
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

void* kont111146111249 = prim_car(lst);
void* lst111250 = prim_cdr(lst);
void* x111058111251 = apply_prim__u47(lst111250);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111146111249);
arg_buffer[2] = x111058111251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111146111249))[0]);
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
void* _111402 = arg_buffer[1];
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

void* kont111148111252 = prim_car(lst);
void* lst111253 = prim_cdr(lst);
void* x111059111254 = apply_prim__u61(lst111253);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111148111252);
arg_buffer[2] = x111059111254;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111148111252))[0]);
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
void* _111403 = arg_buffer[1];
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

void* kont111150111255 = prim_car(lst);
void* lst111256 = prim_cdr(lst);
void* x111060111257 = apply_prim__u62(lst111256);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111150111255);
arg_buffer[2] = x111060111257;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111150111255))[0]);
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
void* _111404 = arg_buffer[1];
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

void* kont111152111258 = prim_car(lst);
void* lst111259 = prim_cdr(lst);
void* x111061111260 = apply_prim__u60(lst111259);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111152111258);
arg_buffer[2] = x111061111260;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111152111258))[0]);
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
void* _111405 = arg_buffer[1];
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

void* kont111154111261 = prim_car(lst);
void* lst111262 = prim_cdr(lst);
void* x111062111263 = apply_prim__u60_u61(lst111262);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111154111261);
arg_buffer[2] = x111062111263;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111154111261))[0]);
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
void* _111406 = arg_buffer[1];
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

void* kont111156111264 = prim_car(lst);
void* lst111265 = prim_cdr(lst);
void* x111063111266 = apply_prim__u62_u61(lst111265);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111156111264);
arg_buffer[2] = x111063111266;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111156111264))[0]);
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
void* _111407 = arg_buffer[1];
//reading env and args
void* kont111158 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x111064111267 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111158);
arg_buffer[2] = x111064111267;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111158))[0]);
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
void* _111408 = arg_buffer[1];
//reading env and args
void* kont111159 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x111065111268 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111159);
arg_buffer[2] = x111065111268;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111159))[0]);
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
void* _111409 = arg_buffer[1];
//reading env and args
void* kont111160 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x111066111269 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111160);
arg_buffer[2] = x111066111269;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111160))[0]);
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
void* _111410 = arg_buffer[1];
//reading env and args
void* kont111161 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x111067111270 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111161);
arg_buffer[2] = x111067111270;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111161))[0]);
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
void* _111411 = arg_buffer[1];
//reading env and args
void* kont111162 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x111068111271 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111162);
arg_buffer[2] = x111068111271;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111162))[0]);
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
void* _111412 = arg_buffer[1];
//reading env and args
void* kont111163 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x111069111272 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111163);
arg_buffer[2] = x111069111272;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111163))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam111413_fptr() // lam111413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111414 = arg_buffer[1];
//reading env and args
void* a111072111276 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111070111273 = (decode_clo(env111414))[3];
//not do dummy comment
void* kont111164 = (decode_clo(env111414))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env111414))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont111164;
arg_buffer[3] = a111070111273;
arg_buffer[4] = a111072111276;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111413 = encode_clo(alloc_clo(lam111413_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111417 = arg_buffer[1];
//reading env and args
void* kont111164 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar111550 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111550, "0", 10);
void* a111070111273 = encode_mpz(mpzvar111550);
mpz_t* mpzvar111551 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111551, "2", 10);
void* a111071111274 = encode_mpz(mpzvar111551);

//creating new closure instance
void** clo111553 = alloc_clo(lam111413_fptr, 3);

//setting env list
clo111553[1] = equal_u63;
clo111553[2] = kont111164;
clo111553[3] = a111070111273;
void* f111165111275 = encode_clo(clo111553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f111165111275;
arg_buffer[3] = x;
arg_buffer[4] = a111071111274;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam111418_fptr() // lam111418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111419 = arg_buffer[1];
//reading env and args
void* a111075111280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111073111277 = (decode_clo(env111419))[3];
//not do dummy comment
void* kont111166 = (decode_clo(env111419))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env111419))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont111166;
arg_buffer[3] = a111073111277;
arg_buffer[4] = a111075111280;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111418 = encode_clo(alloc_clo(lam111418_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111422 = arg_buffer[1];
//reading env and args
void* kont111166 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar111554 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111554, "1", 10);
void* a111073111277 = encode_mpz(mpzvar111554);
mpz_t* mpzvar111555 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111555, "2", 10);
void* a111074111278 = encode_mpz(mpzvar111555);

//creating new closure instance
void** clo111557 = alloc_clo(lam111418_fptr, 3);

//setting env list
clo111557[1] = equal_u63;
clo111557[2] = kont111166;
clo111557[3] = a111073111277;
void* f111167111279 = encode_clo(clo111557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f111167111279;
arg_buffer[3] = x;
arg_buffer[4] = a111074111278;
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
void* _111423 = arg_buffer[1];
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

void* kont111168111281 = prim_car(x);
void* x111282 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111168111281);
arg_buffer[2] = x111282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111168111281))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam111426_fptr() // lam111426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111427 = arg_buffer[1];
//reading env and args
void* a111081111292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111170 = (decode_clo(env111427))[3];
//not do dummy comment
void* x = (decode_clo(env111427))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env111427))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont111170;
arg_buffer[3] = x;
arg_buffer[4] = a111081111292;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111426 = encode_clo(alloc_clo(lam111426_fptr, 0));

void* lam111428_fptr() // lam111428 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111429 = arg_buffer[1];
//reading env and args
void* a111079111289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111429))[5];
//not do dummy comment
void* lst = (decode_clo(env111429))[4];
//not do dummy comment
void* kont111170 = (decode_clo(env111429))[3];
//not do dummy comment
void* x = (decode_clo(env111429))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env111429))[1];

//if-clause
bool if_guard111558 = is_true(a111079111289);
if(if_guard111558)
{
void* x111080111290 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111170);
arg_buffer[2] = x111080111290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111170))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111560 = alloc_clo(lam111426_fptr, 3);

//setting env list
clo111560[1] = member_u63;
clo111560[2] = x;
clo111560[3] = kont111170;
void* f111171111291 = encode_clo(clo111560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111171111291;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111428 = encode_clo(alloc_clo(lam111428_fptr, 0));

void* lam111430_fptr() // lam111430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111431 = arg_buffer[1];
//reading env and args
void* a111078111287 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111431))[6];
//not do dummy comment
void* lst = (decode_clo(env111431))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env111431))[4];
//not do dummy comment
void* kont111170 = (decode_clo(env111431))[3];
//not do dummy comment
void* x = (decode_clo(env111431))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env111431))[1];

//creating new closure instance
void** clo111562 = alloc_clo(lam111428_fptr, 5);

//setting env list
clo111562[1] = member_u63;
clo111562[2] = x;
clo111562[3] = kont111170;
clo111562[4] = lst;
clo111562[5] = cdr;
void* f111172111288 = encode_clo(clo111562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f111172111288;
arg_buffer[3] = a111078111287;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111430 = encode_clo(alloc_clo(lam111430_fptr, 0));

void* lam111432_fptr() // lam111432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111433 = arg_buffer[1];
//reading env and args
void* a111076111284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111433))[7];
//not do dummy comment
void* lst = (decode_clo(env111433))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env111433))[5];
//not do dummy comment
void* kont111170 = (decode_clo(env111433))[4];
//not do dummy comment
void* x = (decode_clo(env111433))[3];
//not do dummy comment
void* car = (decode_clo(env111433))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env111433))[1];

//if-clause
bool if_guard111563 = is_true(a111076111284);
if(if_guard111563)
{
void* x111077111285 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111170);
arg_buffer[2] = x111077111285;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111170))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111565 = alloc_clo(lam111430_fptr, 6);

//setting env list
clo111565[1] = member_u63;
clo111565[2] = x;
clo111565[3] = kont111170;
clo111565[4] = equal_u63;
clo111565[5] = lst;
clo111565[6] = cdr;
void* f111173111286 = encode_clo(clo111565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111173111286;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111432 = encode_clo(alloc_clo(lam111432_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111434 = arg_buffer[1];
//reading env and args
void* kont111170 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111567 = alloc_clo(lam111432_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo111567[1] = member_u63;
clo111567[2] = car;
clo111567[3] = x;
clo111567[4] = kont111170;
clo111567[5] = equal_u63;
clo111567[6] = lst;
clo111567[7] = cdr;
void* f111174111283 = encode_clo(clo111567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111174111283;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam111435_fptr() // lam111435 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111436 = arg_buffer[1];
//reading env and args
void* a111085111300 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env111436))[4];
//not do dummy comment
void* kont111175 = (decode_clo(env111436))[3];
//not do dummy comment
void* fun = (decode_clo(env111436))[2];
//not do dummy comment
void* a111084111298 = (decode_clo(env111436))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont111175;
arg_buffer[3] = fun;
arg_buffer[4] = a111084111298;
arg_buffer[5] = a111085111300;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111435 = encode_clo(alloc_clo(lam111435_fptr, 0));

void* lam111437_fptr() // lam111437 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111438 = arg_buffer[1];
//reading env and args
void* a111084111298 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111438))[5];
//not do dummy comment
void* lst = (decode_clo(env111438))[4];
//not do dummy comment
void* fun = (decode_clo(env111438))[3];
//not do dummy comment
void* foldl = (decode_clo(env111438))[2];
//not do dummy comment
void* kont111175 = (decode_clo(env111438))[1];

//creating new closure instance
void** clo111569 = alloc_clo(lam111435_fptr, 4);

//setting env list
clo111569[1] = a111084111298;
clo111569[2] = fun;
clo111569[3] = kont111175;
clo111569[4] = foldl;
void* f111176111299 = encode_clo(clo111569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111176111299;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111437 = encode_clo(alloc_clo(lam111437_fptr, 0));

void* lam111439_fptr() // lam111439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111440 = arg_buffer[1];
//reading env and args
void* a111083111296 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111440))[6];
//not do dummy comment
void* lst = (decode_clo(env111440))[5];
//not do dummy comment
void* fun = (decode_clo(env111440))[4];
//not do dummy comment
void* acc = (decode_clo(env111440))[3];
//not do dummy comment
void* foldl = (decode_clo(env111440))[2];
//not do dummy comment
void* kont111175 = (decode_clo(env111440))[1];

//creating new closure instance
void** clo111571 = alloc_clo(lam111437_fptr, 5);

//setting env list
clo111571[1] = kont111175;
clo111571[2] = foldl;
clo111571[3] = fun;
clo111571[4] = lst;
clo111571[5] = cdr;
void* f111177111297 = encode_clo(clo111571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f111177111297;
arg_buffer[3] = a111083111296;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111439 = encode_clo(alloc_clo(lam111439_fptr, 0));

void* lam111441_fptr() // lam111441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111442 = arg_buffer[1];
//reading env and args
void* a111082111294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111442))[7];
//not do dummy comment
void* lst = (decode_clo(env111442))[6];
//not do dummy comment
void* fun = (decode_clo(env111442))[5];
//not do dummy comment
void* acc = (decode_clo(env111442))[4];
//not do dummy comment
void* car = (decode_clo(env111442))[3];
//not do dummy comment
void* foldl = (decode_clo(env111442))[2];
//not do dummy comment
void* kont111175 = (decode_clo(env111442))[1];

//if-clause
bool if_guard111572 = is_true(a111082111294);
if(if_guard111572)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111175);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111175))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111574 = alloc_clo(lam111439_fptr, 6);

//setting env list
clo111574[1] = kont111175;
clo111574[2] = foldl;
clo111574[3] = acc;
clo111574[4] = fun;
clo111574[5] = lst;
clo111574[6] = cdr;
void* f111178111295 = encode_clo(clo111574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111178111295;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111441 = encode_clo(alloc_clo(lam111441_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111443 = arg_buffer[1];
//reading env and args
void* kont111175 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo111576 = alloc_clo(lam111441_fptr, 7);

//setting env list
clo111576[1] = kont111175;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo111576[2] = foldl;
clo111576[3] = car;
clo111576[4] = acc;
clo111576[5] = fun;
clo111576[6] = lst;
clo111576[7] = cdr;
void* f111179111293 = encode_clo(clo111576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111179111293;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam111444_fptr() // lam111444 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111445 = arg_buffer[1];
//reading env and args
void* a111089111308 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111087111304 = (decode_clo(env111445))[3];
//not do dummy comment
void* kont111180 = (decode_clo(env111445))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env111445))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont111180;
arg_buffer[3] = a111087111304;
arg_buffer[4] = a111089111308;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111444 = encode_clo(alloc_clo(lam111444_fptr, 0));

void* lam111446_fptr() // lam111446 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111447 = arg_buffer[1];
//reading env and args
void* a111088111306 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111087111304 = (decode_clo(env111447))[5];
//not do dummy comment
void* kont111180 = (decode_clo(env111447))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env111447))[3];
//not do dummy comment
void* lst2 = (decode_clo(env111447))[2];
//not do dummy comment
void* cons = (decode_clo(env111447))[1];

//creating new closure instance
void** clo111578 = alloc_clo(lam111444_fptr, 3);

//setting env list
clo111578[1] = reverse_u45helper;
clo111578[2] = kont111180;
clo111578[3] = a111087111304;
void* f111181111307 = encode_clo(clo111578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f111181111307;
arg_buffer[3] = a111088111306;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111446 = encode_clo(alloc_clo(lam111446_fptr, 0));

void* lam111448_fptr() // lam111448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111449 = arg_buffer[1];
//reading env and args
void* a111087111304 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env111449))[6];
//not do dummy comment
void* lst2 = (decode_clo(env111449))[5];
//not do dummy comment
void* car = (decode_clo(env111449))[4];
//not do dummy comment
void* cons = (decode_clo(env111449))[3];
//not do dummy comment
void* lst = (decode_clo(env111449))[2];
//not do dummy comment
void* kont111180 = (decode_clo(env111449))[1];

//creating new closure instance
void** clo111580 = alloc_clo(lam111446_fptr, 5);

//setting env list
clo111580[1] = cons;
clo111580[2] = lst2;
clo111580[3] = reverse_u45helper;
clo111580[4] = kont111180;
clo111580[5] = a111087111304;
void* f111182111305 = encode_clo(clo111580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111182111305;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111448 = encode_clo(alloc_clo(lam111448_fptr, 0));

void* lam111450_fptr() // lam111450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111451 = arg_buffer[1];
//reading env and args
void* a111086111302 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111451))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env111451))[6];
//not do dummy comment
void* lst2 = (decode_clo(env111451))[5];
//not do dummy comment
void* car = (decode_clo(env111451))[4];
//not do dummy comment
void* cons = (decode_clo(env111451))[3];
//not do dummy comment
void* lst = (decode_clo(env111451))[2];
//not do dummy comment
void* kont111180 = (decode_clo(env111451))[1];

//if-clause
bool if_guard111581 = is_true(a111086111302);
if(if_guard111581)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111180);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111180))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111583 = alloc_clo(lam111448_fptr, 6);

//setting env list
clo111583[1] = kont111180;
clo111583[2] = lst;
clo111583[3] = cons;
clo111583[4] = car;
clo111583[5] = lst2;
clo111583[6] = reverse_u45helper;
void* f111183111303 = encode_clo(clo111583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111183111303;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111450 = encode_clo(alloc_clo(lam111450_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111452 = arg_buffer[1];
//reading env and args
void* kont111180 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111585 = alloc_clo(lam111450_fptr, 7);

//setting env list
clo111585[1] = kont111180;
clo111585[2] = lst;
clo111585[3] = cons;
clo111585[4] = car;
clo111585[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo111585[6] = reverse_u45helper;
clo111585[7] = cdr;
void* f111184111301 = encode_clo(clo111585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111184111301;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam111453_fptr() // lam111453 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111454 = arg_buffer[1];
//reading env and args
void* a111090111310 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111454))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env111454))[2];
//not do dummy comment
void* kont111185 = (decode_clo(env111454))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont111185;
arg_buffer[3] = lst;
arg_buffer[4] = a111090111310;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111453 = encode_clo(alloc_clo(lam111453_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111455 = arg_buffer[1];
//reading env and args
void* kont111185 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo111587 = alloc_clo(lam111453_fptr, 3);

//setting env list
clo111587[1] = kont111185;
clo111587[2] = reverse_u45helper;
clo111587[3] = lst;
void* f111186111309 = encode_clo(clo111587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111186111309;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam111456_fptr() // lam111456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111457 = arg_buffer[1];
//reading env and args
void* x111093111315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111187 = (decode_clo(env111457))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111187);
arg_buffer[2] = x111093111315;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111187))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111456 = encode_clo(alloc_clo(lam111456_fptr, 0));

void* lam111458_fptr() // lam111458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111459 = arg_buffer[1];
//reading env and args
void* a111098111324 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111096111320 = (decode_clo(env111459))[4];
//not do dummy comment
void* kont111187 = (decode_clo(env111459))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env111459))[2];
//not do dummy comment
void* a111094111317 = (decode_clo(env111459))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont111187;
arg_buffer[3] = a111094111317;
arg_buffer[4] = a111096111320;
arg_buffer[5] = a111098111324;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111458 = encode_clo(alloc_clo(lam111458_fptr, 0));

void* lam111460_fptr() // lam111460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111461 = arg_buffer[1];
//reading env and args
void* a111097111322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111096111320 = (decode_clo(env111461))[6];
//not do dummy comment
void* kont111187 = (decode_clo(env111461))[5];
//not do dummy comment
void* a111094111317 = (decode_clo(env111461))[4];
//not do dummy comment
void* cons = (decode_clo(env111461))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env111461))[2];
//not do dummy comment
void* lst2 = (decode_clo(env111461))[1];

//creating new closure instance
void** clo111589 = alloc_clo(lam111458_fptr, 4);

//setting env list
clo111589[1] = a111094111317;
clo111589[2] = take_u45helper;
clo111589[3] = kont111187;
clo111589[4] = a111096111320;
void* f111189111323 = encode_clo(clo111589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f111189111323;
arg_buffer[3] = a111097111322;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111460 = encode_clo(alloc_clo(lam111460_fptr, 0));

void* lam111462_fptr() // lam111462 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111463 = arg_buffer[1];
//reading env and args
void* a111096111320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111463))[7];
//not do dummy comment
void* kont111187 = (decode_clo(env111463))[6];
//not do dummy comment
void* cons = (decode_clo(env111463))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env111463))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111463))[3];
//not do dummy comment
void* car = (decode_clo(env111463))[2];
//not do dummy comment
void* a111094111317 = (decode_clo(env111463))[1];

//creating new closure instance
void** clo111591 = alloc_clo(lam111460_fptr, 6);

//setting env list
clo111591[1] = lst2;
clo111591[2] = take_u45helper;
clo111591[3] = cons;
clo111591[4] = a111094111317;
clo111591[5] = kont111187;
clo111591[6] = a111096111320;
void* f111190111321 = encode_clo(clo111591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111190111321;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111462 = encode_clo(alloc_clo(lam111462_fptr, 0));

void* lam111465_fptr() // lam111465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111466 = arg_buffer[1];
//reading env and args
void* a111094111317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111466))[8];
//not do dummy comment
void* kont111187 = (decode_clo(env111466))[7];
//not do dummy comment
void* cons = (decode_clo(env111466))[6];
//not do dummy comment
void* _u45 = (decode_clo(env111466))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env111466))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111466))[3];
//not do dummy comment
void* n = (decode_clo(env111466))[2];
//not do dummy comment
void* car = (decode_clo(env111466))[1];
mpz_t* mpzvar111592 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111592, "1", 10);
void* a111095111318 = encode_mpz(mpzvar111592);

//creating new closure instance
void** clo111594 = alloc_clo(lam111462_fptr, 7);

//setting env list
clo111594[1] = a111094111317;
clo111594[2] = car;
clo111594[3] = lst2;
clo111594[4] = take_u45helper;
clo111594[5] = cons;
clo111594[6] = kont111187;
clo111594[7] = lst;
void* f111191111319 = encode_clo(clo111594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f111191111319;
arg_buffer[3] = n;
arg_buffer[4] = a111095111318;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111465 = encode_clo(alloc_clo(lam111465_fptr, 0));

void* lam111467_fptr() // lam111467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111468 = arg_buffer[1];
//reading env and args
void* a111092111313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111468))[10];
//not do dummy comment
void* lst = (decode_clo(env111468))[9];
//not do dummy comment
void* reverse = (decode_clo(env111468))[8];
//not do dummy comment
void* kont111187 = (decode_clo(env111468))[7];
//not do dummy comment
void* cons = (decode_clo(env111468))[6];
//not do dummy comment
void* _u45 = (decode_clo(env111468))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env111468))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111468))[3];
//not do dummy comment
void* n = (decode_clo(env111468))[2];
//not do dummy comment
void* car = (decode_clo(env111468))[1];

//if-clause
bool if_guard111595 = is_true(a111092111313);
if(if_guard111595)
{

//creating new closure instance
void** clo111597 = alloc_clo(lam111456_fptr, 1);

//setting env list
clo111597[1] = kont111187;
void* f111188111314 = encode_clo(clo111597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f111188111314;
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
void** clo111599 = alloc_clo(lam111465_fptr, 8);

//setting env list
clo111599[1] = car;
clo111599[2] = n;
clo111599[3] = lst2;
clo111599[4] = take_u45helper;
clo111599[5] = _u45;
clo111599[6] = cons;
clo111599[7] = kont111187;
clo111599[8] = lst;
void* f111192111316 = encode_clo(clo111599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111192111316;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111467 = encode_clo(alloc_clo(lam111467_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111470 = arg_buffer[1];
//reading env and args
void* kont111187 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar111600 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111600, "0", 10);
void* a111091111311 = encode_mpz(mpzvar111600);

//creating new closure instance
void** clo111602 = alloc_clo(lam111467_fptr, 10);

//setting env list
clo111602[1] = car;
clo111602[2] = n;
clo111602[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo111602[4] = take_u45helper;
clo111602[5] = _u45;
clo111602[6] = cons;
clo111602[7] = kont111187;
clo111602[8] = reverse;
clo111602[9] = lst;
clo111602[10] = cdr;
void* f111193111312 = encode_clo(clo111602);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f111193111312;
arg_buffer[3] = n;
arg_buffer[4] = a111091111311;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam111471_fptr() // lam111471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111472 = arg_buffer[1];
//reading env and args
void* a111099111326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111194 = (decode_clo(env111472))[4];
//not do dummy comment
void* lst = (decode_clo(env111472))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env111472))[2];
//not do dummy comment
void* n = (decode_clo(env111472))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont111194;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a111099111326;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111471 = encode_clo(alloc_clo(lam111471_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111473 = arg_buffer[1];
//reading env and args
void* kont111194 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111604 = alloc_clo(lam111471_fptr, 4);

//setting env list
clo111604[1] = n;
clo111604[2] = take_u45helper;
clo111604[3] = lst;
clo111604[4] = kont111194;
void* f111195111325 = encode_clo(clo111604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111195111325;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam111475_fptr() // lam111475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111476 = arg_buffer[1];
//reading env and args
void* a111104111334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111196 = (decode_clo(env111476))[3];
//not do dummy comment
void* _u43 = (decode_clo(env111476))[2];
//not do dummy comment
void* a111102111330 = (decode_clo(env111476))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont111196;
arg_buffer[3] = a111102111330;
arg_buffer[4] = a111104111334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111475 = encode_clo(alloc_clo(lam111475_fptr, 0));

void* lam111477_fptr() // lam111477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111478 = arg_buffer[1];
//reading env and args
void* a111103111332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111196 = (decode_clo(env111478))[4];
//not do dummy comment
void* length = (decode_clo(env111478))[3];
//not do dummy comment
void* _u43 = (decode_clo(env111478))[2];
//not do dummy comment
void* a111102111330 = (decode_clo(env111478))[1];

//creating new closure instance
void** clo111606 = alloc_clo(lam111475_fptr, 3);

//setting env list
clo111606[1] = a111102111330;
clo111606[2] = _u43;
clo111606[3] = kont111196;
void* f111197111333 = encode_clo(clo111606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f111197111333;
arg_buffer[3] = a111103111332;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111477 = encode_clo(alloc_clo(lam111477_fptr, 0));

void* lam111480_fptr() // lam111480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111481 = arg_buffer[1];
//reading env and args
void* a111100111328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111481))[5];
//not do dummy comment
void* length = (decode_clo(env111481))[4];
//not do dummy comment
void* _u43 = (decode_clo(env111481))[3];
//not do dummy comment
void* lst = (decode_clo(env111481))[2];
//not do dummy comment
void* kont111196 = (decode_clo(env111481))[1];

//if-clause
bool if_guard111607 = is_true(a111100111328);
if(if_guard111607)
{
mpz_t* mpzvar111608 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111608, "0", 10);
void* x111101111329 = encode_mpz(mpzvar111608);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111196);
arg_buffer[2] = x111101111329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111196))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar111609 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111609, "1", 10);
void* a111102111330 = encode_mpz(mpzvar111609);

//creating new closure instance
void** clo111611 = alloc_clo(lam111477_fptr, 4);

//setting env list
clo111611[1] = a111102111330;
clo111611[2] = _u43;
clo111611[3] = length;
clo111611[4] = kont111196;
void* f111198111331 = encode_clo(clo111611);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111198111331;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111480 = encode_clo(alloc_clo(lam111480_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111482 = arg_buffer[1];
//reading env and args
void* kont111196 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo111613 = alloc_clo(lam111480_fptr, 5);

//setting env list
clo111613[1] = kont111196;
clo111613[2] = lst;
clo111613[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo111613[4] = length;
clo111613[5] = cdr;
void* f111199111327 = encode_clo(clo111613);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111199111327;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam111483_fptr() // lam111483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111484 = arg_buffer[1];
//reading env and args
void* x111106111338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111200 = (decode_clo(env111484))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111200);
arg_buffer[2] = x111106111338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111200))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111483 = encode_clo(alloc_clo(lam111483_fptr, 0));

void* lam111485_fptr() // lam111485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111486 = arg_buffer[1];
//reading env and args
void* a111110111346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111108111342 = (decode_clo(env111486))[3];
//not do dummy comment
void* kont111200 = (decode_clo(env111486))[2];
//not do dummy comment
void* cons = (decode_clo(env111486))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont111200;
arg_buffer[3] = a111108111342;
arg_buffer[4] = a111110111346;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111485 = encode_clo(alloc_clo(lam111485_fptr, 0));

void* lam111487_fptr() // lam111487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111488 = arg_buffer[1];
//reading env and args
void* a111109111344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env111488))[5];
//not do dummy comment
void* a111108111342 = (decode_clo(env111488))[4];
//not do dummy comment
void* kont111200 = (decode_clo(env111488))[3];
//not do dummy comment
void* proc = (decode_clo(env111488))[2];
//not do dummy comment
void* cons = (decode_clo(env111488))[1];

//creating new closure instance
void** clo111615 = alloc_clo(lam111485_fptr, 3);

//setting env list
clo111615[1] = cons;
clo111615[2] = kont111200;
clo111615[3] = a111108111342;
void* f111202111345 = encode_clo(clo111615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f111202111345;
arg_buffer[3] = proc;
arg_buffer[4] = a111109111344;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111487 = encode_clo(alloc_clo(lam111487_fptr, 0));

void* lam111489_fptr() // lam111489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111490 = arg_buffer[1];
//reading env and args
void* a111108111342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111490))[6];
//not do dummy comment
void* lst = (decode_clo(env111490))[5];
//not do dummy comment
void* map = (decode_clo(env111490))[4];
//not do dummy comment
void* kont111200 = (decode_clo(env111490))[3];
//not do dummy comment
void* proc = (decode_clo(env111490))[2];
//not do dummy comment
void* cons = (decode_clo(env111490))[1];

//creating new closure instance
void** clo111617 = alloc_clo(lam111487_fptr, 5);

//setting env list
clo111617[1] = cons;
clo111617[2] = proc;
clo111617[3] = kont111200;
clo111617[4] = a111108111342;
clo111617[5] = map;
void* f111203111343 = encode_clo(clo111617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111203111343;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111489 = encode_clo(alloc_clo(lam111489_fptr, 0));

void* lam111491_fptr() // lam111491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111492 = arg_buffer[1];
//reading env and args
void* a111107111340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111492))[6];
//not do dummy comment
void* lst = (decode_clo(env111492))[5];
//not do dummy comment
void* map = (decode_clo(env111492))[4];
//not do dummy comment
void* kont111200 = (decode_clo(env111492))[3];
//not do dummy comment
void* proc = (decode_clo(env111492))[2];
//not do dummy comment
void* cons = (decode_clo(env111492))[1];

//creating new closure instance
void** clo111619 = alloc_clo(lam111489_fptr, 6);

//setting env list
clo111619[1] = cons;
clo111619[2] = proc;
clo111619[3] = kont111200;
clo111619[4] = map;
clo111619[5] = lst;
clo111619[6] = cdr;
void* f111204111341 = encode_clo(clo111619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f111204111341;
arg_buffer[3] = a111107111340;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111491 = encode_clo(alloc_clo(lam111491_fptr, 0));

void* lam111493_fptr() // lam111493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111494 = arg_buffer[1];
//reading env and args
void* a111105111336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111494))[8];
//not do dummy comment
void* map = (decode_clo(env111494))[7];
//not do dummy comment
void* kont111200 = (decode_clo(env111494))[6];
//not do dummy comment
void* proc = (decode_clo(env111494))[5];
//not do dummy comment
void* car = (decode_clo(env111494))[4];
//not do dummy comment
void* cons = (decode_clo(env111494))[3];
//not do dummy comment
void* list = (decode_clo(env111494))[2];
//not do dummy comment
void* cdr = (decode_clo(env111494))[1];

//if-clause
bool if_guard111620 = is_true(a111105111336);
if(if_guard111620)
{

//creating new closure instance
void** clo111622 = alloc_clo(lam111483_fptr, 1);

//setting env list
clo111622[1] = kont111200;
void* f111201111337 = encode_clo(clo111622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111201111337;
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
void** clo111624 = alloc_clo(lam111491_fptr, 6);

//setting env list
clo111624[1] = cons;
clo111624[2] = proc;
clo111624[3] = kont111200;
clo111624[4] = map;
clo111624[5] = lst;
clo111624[6] = cdr;
void* f111205111339 = encode_clo(clo111624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111205111339;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111493 = encode_clo(alloc_clo(lam111493_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111495 = arg_buffer[1];
//reading env and args
void* kont111200 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111626 = alloc_clo(lam111493_fptr, 8);

//setting env list
clo111626[1] = cdr;
clo111626[2] = list;
clo111626[3] = cons;
clo111626[4] = car;
clo111626[5] = proc;
clo111626[6] = kont111200;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo111626[7] = map;
clo111626[8] = lst;
void* f111206111335 = encode_clo(clo111626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111206111335;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam111496_fptr() // lam111496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111497 = arg_buffer[1];
//reading env and args
void* x111112111350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111207 = (decode_clo(env111497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111207);
arg_buffer[2] = x111112111350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111207))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111496 = encode_clo(alloc_clo(lam111496_fptr, 0));

void* lam111498_fptr() // lam111498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111499 = arg_buffer[1];
//reading env and args
void* a111117111360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111115111356 = (decode_clo(env111499))[3];
//not do dummy comment
void* cons = (decode_clo(env111499))[2];
//not do dummy comment
void* kont111207 = (decode_clo(env111499))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont111207;
arg_buffer[3] = a111115111356;
arg_buffer[4] = a111117111360;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111498 = encode_clo(alloc_clo(lam111498_fptr, 0));

void* lam111500_fptr() // lam111500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111501 = arg_buffer[1];
//reading env and args
void* a111116111358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111115111356 = (decode_clo(env111501))[5];
//not do dummy comment
void* op = (decode_clo(env111501))[4];
//not do dummy comment
void* filter = (decode_clo(env111501))[3];
//not do dummy comment
void* cons = (decode_clo(env111501))[2];
//not do dummy comment
void* kont111207 = (decode_clo(env111501))[1];

//creating new closure instance
void** clo111628 = alloc_clo(lam111498_fptr, 3);

//setting env list
clo111628[1] = kont111207;
clo111628[2] = cons;
clo111628[3] = a111115111356;
void* f111209111359 = encode_clo(clo111628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f111209111359;
arg_buffer[3] = op;
arg_buffer[4] = a111116111358;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111500 = encode_clo(alloc_clo(lam111500_fptr, 0));

void* lam111502_fptr() // lam111502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111503 = arg_buffer[1];
//reading env and args
void* a111115111356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111503))[6];
//not do dummy comment
void* lst = (decode_clo(env111503))[5];
//not do dummy comment
void* op = (decode_clo(env111503))[4];
//not do dummy comment
void* filter = (decode_clo(env111503))[3];
//not do dummy comment
void* cons = (decode_clo(env111503))[2];
//not do dummy comment
void* kont111207 = (decode_clo(env111503))[1];

//creating new closure instance
void** clo111630 = alloc_clo(lam111500_fptr, 5);

//setting env list
clo111630[1] = kont111207;
clo111630[2] = cons;
clo111630[3] = filter;
clo111630[4] = op;
clo111630[5] = a111115111356;
void* f111210111357 = encode_clo(clo111630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111210111357;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111502 = encode_clo(alloc_clo(lam111502_fptr, 0));

void* lam111504_fptr() // lam111504 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111505 = arg_buffer[1];
//reading env and args
void* a111118111362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env111505))[3];
//not do dummy comment
void* filter = (decode_clo(env111505))[2];
//not do dummy comment
void* kont111207 = (decode_clo(env111505))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont111207;
arg_buffer[3] = op;
arg_buffer[4] = a111118111362;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111504 = encode_clo(alloc_clo(lam111504_fptr, 0));

void* lam111506_fptr() // lam111506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111507 = arg_buffer[1];
//reading env and args
void* a111114111354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111507))[7];
//not do dummy comment
void* lst = (decode_clo(env111507))[6];
//not do dummy comment
void* op = (decode_clo(env111507))[5];
//not do dummy comment
void* cons = (decode_clo(env111507))[4];
//not do dummy comment
void* kont111207 = (decode_clo(env111507))[3];
//not do dummy comment
void* filter = (decode_clo(env111507))[2];
//not do dummy comment
void* car = (decode_clo(env111507))[1];

//if-clause
bool if_guard111631 = is_true(a111114111354);
if(if_guard111631)
{

//creating new closure instance
void** clo111633 = alloc_clo(lam111502_fptr, 6);

//setting env list
clo111633[1] = kont111207;
clo111633[2] = cons;
clo111633[3] = filter;
clo111633[4] = op;
clo111633[5] = lst;
clo111633[6] = cdr;
void* f111211111355 = encode_clo(clo111633);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111211111355;
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
void** clo111635 = alloc_clo(lam111504_fptr, 3);

//setting env list
clo111635[1] = kont111207;
clo111635[2] = filter;
clo111635[3] = op;
void* f111212111361 = encode_clo(clo111635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111212111361;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111506 = encode_clo(alloc_clo(lam111506_fptr, 0));

void* lam111508_fptr() // lam111508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111509 = arg_buffer[1];
//reading env and args
void* a111113111352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111509))[7];
//not do dummy comment
void* lst = (decode_clo(env111509))[6];
//not do dummy comment
void* op = (decode_clo(env111509))[5];
//not do dummy comment
void* cons = (decode_clo(env111509))[4];
//not do dummy comment
void* kont111207 = (decode_clo(env111509))[3];
//not do dummy comment
void* filter = (decode_clo(env111509))[2];
//not do dummy comment
void* car = (decode_clo(env111509))[1];

//creating new closure instance
void** clo111637 = alloc_clo(lam111506_fptr, 7);

//setting env list
clo111637[1] = car;
clo111637[2] = filter;
clo111637[3] = kont111207;
clo111637[4] = cons;
clo111637[5] = op;
clo111637[6] = lst;
clo111637[7] = cdr;
void* f111213111353 = encode_clo(clo111637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f111213111353;
arg_buffer[3] = a111113111352;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111508 = encode_clo(alloc_clo(lam111508_fptr, 0));

void* lam111510_fptr() // lam111510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111511 = arg_buffer[1];
//reading env and args
void* a111111111348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env111511))[8];
//not do dummy comment
void* op = (decode_clo(env111511))[7];
//not do dummy comment
void* cons = (decode_clo(env111511))[6];
//not do dummy comment
void* kont111207 = (decode_clo(env111511))[5];
//not do dummy comment
void* list = (decode_clo(env111511))[4];
//not do dummy comment
void* cdr = (decode_clo(env111511))[3];
//not do dummy comment
void* filter = (decode_clo(env111511))[2];
//not do dummy comment
void* car = (decode_clo(env111511))[1];

//if-clause
bool if_guard111638 = is_true(a111111111348);
if(if_guard111638)
{

//creating new closure instance
void** clo111640 = alloc_clo(lam111496_fptr, 1);

//setting env list
clo111640[1] = kont111207;
void* f111208111349 = encode_clo(clo111640);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f111208111349;
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
void** clo111642 = alloc_clo(lam111508_fptr, 7);

//setting env list
clo111642[1] = car;
clo111642[2] = filter;
clo111642[3] = kont111207;
clo111642[4] = cons;
clo111642[5] = op;
clo111642[6] = lst;
clo111642[7] = cdr;
void* f111214111351 = encode_clo(clo111642);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111214111351;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111510 = encode_clo(alloc_clo(lam111510_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111512 = arg_buffer[1];
//reading env and args
void* kont111207 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111644 = alloc_clo(lam111510_fptr, 8);

//setting env list
clo111644[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo111644[2] = filter;
clo111644[3] = cdr;
clo111644[4] = list;
clo111644[5] = kont111207;
clo111644[6] = cons;
clo111644[7] = op;
clo111644[8] = lst;
void* f111215111347 = encode_clo(clo111644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111215111347;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam111513_fptr() // lam111513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111514 = arg_buffer[1];
//reading env and args
void* a111123111370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env111514))[3];
//not do dummy comment
void* kont111216 = (decode_clo(env111514))[2];
//not do dummy comment
void* a111121111367 = (decode_clo(env111514))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont111216;
arg_buffer[3] = a111121111367;
arg_buffer[4] = a111123111370;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111513 = encode_clo(alloc_clo(lam111513_fptr, 0));

void* lam111516_fptr() // lam111516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111517 = arg_buffer[1];
//reading env and args
void* a111121111367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env111517))[4];
//not do dummy comment
void* kont111216 = (decode_clo(env111517))[3];
//not do dummy comment
void* n = (decode_clo(env111517))[2];
//not do dummy comment
void* _u45 = (decode_clo(env111517))[1];
mpz_t* mpzvar111645 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111645, "1", 10);
void* a111122111368 = encode_mpz(mpzvar111645);

//creating new closure instance
void** clo111647 = alloc_clo(lam111513_fptr, 3);

//setting env list
clo111647[1] = a111121111367;
clo111647[2] = kont111216;
clo111647[3] = drop;
void* f111217111369 = encode_clo(clo111647);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f111217111369;
arg_buffer[3] = n;
arg_buffer[4] = a111122111368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111516 = encode_clo(alloc_clo(lam111516_fptr, 0));

void* lam111518_fptr() // lam111518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111519 = arg_buffer[1];
//reading env and args
void* a111120111365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111519))[6];
//not do dummy comment
void* kont111216 = (decode_clo(env111519))[5];
//not do dummy comment
void* n = (decode_clo(env111519))[4];
//not do dummy comment
void* _u45 = (decode_clo(env111519))[3];
//not do dummy comment
void* lst = (decode_clo(env111519))[2];
//not do dummy comment
void* drop = (decode_clo(env111519))[1];

//if-clause
bool if_guard111648 = is_true(a111120111365);
if(if_guard111648)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111216);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111216))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111650 = alloc_clo(lam111516_fptr, 4);

//setting env list
clo111650[1] = _u45;
clo111650[2] = n;
clo111650[3] = kont111216;
clo111650[4] = drop;
void* f111218111366 = encode_clo(clo111650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111218111366;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111518 = encode_clo(alloc_clo(lam111518_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111521 = arg_buffer[1];
//reading env and args
void* kont111216 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar111651 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar111651, "0", 10);
void* a111119111363 = encode_mpz(mpzvar111651);

//creating new closure instance
void** clo111653 = alloc_clo(lam111518_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo111653[1] = drop;
clo111653[2] = lst;
clo111653[3] = _u45;
clo111653[4] = n;
clo111653[5] = kont111216;
clo111653[6] = cdr;
void* f111219111364 = encode_clo(clo111653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f111219111364;
arg_buffer[3] = n;
arg_buffer[4] = a111119111363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam111522_fptr() // lam111522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111523 = arg_buffer[1];
//reading env and args
void* a111127111378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a111125111374 = (decode_clo(env111523))[3];
//not do dummy comment
void* proc = (decode_clo(env111523))[2];
//not do dummy comment
void* kont111220 = (decode_clo(env111523))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont111220;
arg_buffer[3] = a111125111374;
arg_buffer[4] = a111127111378;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111522 = encode_clo(alloc_clo(lam111522_fptr, 0));

void* lam111524_fptr() // lam111524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111525 = arg_buffer[1];
//reading env and args
void* a111126111376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env111525))[5];
//not do dummy comment
void* a111125111374 = (decode_clo(env111525))[4];
//not do dummy comment
void* kont111220 = (decode_clo(env111525))[3];
//not do dummy comment
void* proc = (decode_clo(env111525))[2];
//not do dummy comment
void* acc = (decode_clo(env111525))[1];

//creating new closure instance
void** clo111655 = alloc_clo(lam111522_fptr, 3);

//setting env list
clo111655[1] = kont111220;
clo111655[2] = proc;
clo111655[3] = a111125111374;
void* f111221111377 = encode_clo(clo111655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f111221111377;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a111126111376;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111524 = encode_clo(alloc_clo(lam111524_fptr, 0));

void* lam111526_fptr() // lam111526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111527 = arg_buffer[1];
//reading env and args
void* a111125111374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111527))[6];
//not do dummy comment
void* kont111220 = (decode_clo(env111527))[5];
//not do dummy comment
void* foldr = (decode_clo(env111527))[4];
//not do dummy comment
void* lst = (decode_clo(env111527))[3];
//not do dummy comment
void* proc = (decode_clo(env111527))[2];
//not do dummy comment
void* acc = (decode_clo(env111527))[1];

//creating new closure instance
void** clo111657 = alloc_clo(lam111524_fptr, 5);

//setting env list
clo111657[1] = acc;
clo111657[2] = proc;
clo111657[3] = kont111220;
clo111657[4] = a111125111374;
clo111657[5] = foldr;
void* f111222111375 = encode_clo(clo111657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111222111375;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111526 = encode_clo(alloc_clo(lam111526_fptr, 0));

void* lam111528_fptr() // lam111528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111529 = arg_buffer[1];
//reading env and args
void* a111124111372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111529))[7];
//not do dummy comment
void* kont111220 = (decode_clo(env111529))[6];
//not do dummy comment
void* car = (decode_clo(env111529))[5];
//not do dummy comment
void* foldr = (decode_clo(env111529))[4];
//not do dummy comment
void* lst = (decode_clo(env111529))[3];
//not do dummy comment
void* proc = (decode_clo(env111529))[2];
//not do dummy comment
void* acc = (decode_clo(env111529))[1];

//if-clause
bool if_guard111658 = is_true(a111124111372);
if(if_guard111658)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111220);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111220))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111660 = alloc_clo(lam111526_fptr, 6);

//setting env list
clo111660[1] = acc;
clo111660[2] = proc;
clo111660[3] = lst;
clo111660[4] = foldr;
clo111660[5] = kont111220;
clo111660[6] = cdr;
void* f111223111373 = encode_clo(clo111660);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111223111373;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111528 = encode_clo(alloc_clo(lam111528_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111530 = arg_buffer[1];
//reading env and args
void* kont111220 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo111662 = alloc_clo(lam111528_fptr, 7);

//setting env list
clo111662[1] = acc;
clo111662[2] = proc;
clo111662[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo111662[4] = foldr;
clo111662[5] = car;
clo111662[6] = kont111220;
clo111662[7] = cdr;
void* f111224111371 = encode_clo(clo111662);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111224111371;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam111531_fptr() // lam111531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111532 = arg_buffer[1];
//reading env and args
void* a111131111386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111225 = (decode_clo(env111532))[3];
//not do dummy comment
void* cons = (decode_clo(env111532))[2];
//not do dummy comment
void* a111129111382 = (decode_clo(env111532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont111225;
arg_buffer[3] = a111129111382;
arg_buffer[4] = a111131111386;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111531 = encode_clo(alloc_clo(lam111531_fptr, 0));

void* lam111533_fptr() // lam111533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111534 = arg_buffer[1];
//reading env and args
void* a111130111384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111225 = (decode_clo(env111534))[5];
//not do dummy comment
void* append = (decode_clo(env111534))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111534))[3];
//not do dummy comment
void* cons = (decode_clo(env111534))[2];
//not do dummy comment
void* a111129111382 = (decode_clo(env111534))[1];

//creating new closure instance
void** clo111664 = alloc_clo(lam111531_fptr, 3);

//setting env list
clo111664[1] = a111129111382;
clo111664[2] = cons;
clo111664[3] = kont111225;
void* f111226111385 = encode_clo(clo111664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f111226111385;
arg_buffer[3] = a111130111384;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111533 = encode_clo(alloc_clo(lam111533_fptr, 0));

void* lam111535_fptr() // lam111535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111536 = arg_buffer[1];
//reading env and args
void* a111129111382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111536))[6];
//not do dummy comment
void* kont111225 = (decode_clo(env111536))[5];
//not do dummy comment
void* append = (decode_clo(env111536))[4];
//not do dummy comment
void* lst2 = (decode_clo(env111536))[3];
//not do dummy comment
void* lst1 = (decode_clo(env111536))[2];
//not do dummy comment
void* cons = (decode_clo(env111536))[1];

//creating new closure instance
void** clo111666 = alloc_clo(lam111533_fptr, 5);

//setting env list
clo111666[1] = a111129111382;
clo111666[2] = cons;
clo111666[3] = lst2;
clo111666[4] = append;
clo111666[5] = kont111225;
void* f111227111383 = encode_clo(clo111666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f111227111383;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111535 = encode_clo(alloc_clo(lam111535_fptr, 0));

void* lam111537_fptr() // lam111537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111538 = arg_buffer[1];
//reading env and args
void* a111128111380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env111538))[7];
//not do dummy comment
void* kont111225 = (decode_clo(env111538))[6];
//not do dummy comment
void* append = (decode_clo(env111538))[5];
//not do dummy comment
void* lst2 = (decode_clo(env111538))[4];
//not do dummy comment
void* cons = (decode_clo(env111538))[3];
//not do dummy comment
void* lst1 = (decode_clo(env111538))[2];
//not do dummy comment
void* car = (decode_clo(env111538))[1];

//if-clause
bool if_guard111667 = is_true(a111128111380);
if(if_guard111667)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111225);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111225))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo111669 = alloc_clo(lam111535_fptr, 6);

//setting env list
clo111669[1] = cons;
clo111669[2] = lst1;
clo111669[3] = lst2;
clo111669[4] = append;
clo111669[5] = kont111225;
clo111669[6] = cdr;
void* f111228111381 = encode_clo(clo111669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f111228111381;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam111537 = encode_clo(alloc_clo(lam111537_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111539 = arg_buffer[1];
//reading env and args
void* kont111225 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo111671 = alloc_clo(lam111537_fptr, 7);

//setting env list
clo111671[1] = car;
clo111671[2] = lst1;
clo111671[3] = cons;
clo111671[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo111671[5] = append;
clo111671[6] = kont111225;
clo111671[7] = cdr;
void* f111229111379 = encode_clo(clo111671);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f111229111379;
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
void* _111540 = arg_buffer[1];
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

void* kont111230111387 = prim_car(lst);
void* lst111388 = prim_cdr(lst);
void* x111132111389 = apply_prim_hash(lst111388);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111230111387);
arg_buffer[2] = x111132111389;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111230111387))[0]);
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
void* _111541 = arg_buffer[1];
//reading env and args
void* kont111232 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x111133111390 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111232);
arg_buffer[2] = x111133111390;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111232))[0]);
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
void* _111542 = arg_buffer[1];
//reading env and args
void* kont111233 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x111134111391 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111233);
arg_buffer[2] = x111134111391;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111233))[0]);
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
void* _111543 = arg_buffer[1];
//reading env and args
void* kont111234 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x111135111392 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111234);
arg_buffer[2] = x111135111392;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111234))[0]);
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
void* _111544 = arg_buffer[1];
//reading env and args
void* kont111235 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x111136111393 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111235);
arg_buffer[2] = x111136111393;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111235))[0]);
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
void* _111546 = arg_buffer[1];
//reading env and args
void* kont111236 = arg_buffer[2];
//Dummy comment
void* x111137111394 = encode_str(new(GC) std::string("random"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111236);
arg_buffer[2] = x111137111394;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111236))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam111547_fptr() // lam111547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env111548 = arg_buffer[1];
//reading env and args
void* x111138111396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont111237 = (decode_clo(env111548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont111237);
arg_buffer[2] = x111138111396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont111237))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam111547 = encode_clo(alloc_clo(lam111547_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _111549 = arg_buffer[1];
//reading env and args
void* kont111237 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo111673 = alloc_clo(lam111547_fptr, 1);

//setting env list
clo111673[1] = kont111237;
void* f111238111395 = encode_clo(clo111673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f111238111395;
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

