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
void* _122513 = arg_buffer[1];
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

void* kont122250122350 = prim_car(lst);
void* lst122351 = prim_cdr(lst);
void* x122160122352 = apply_prim__u43(lst122351);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122250122350);
arg_buffer[2] = x122160122352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122250122350))[0]);
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
void* _122514 = arg_buffer[1];
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

void* kont122252122353 = prim_car(lst);
void* lst122354 = prim_cdr(lst);
void* x122161122355 = apply_prim__u45(lst122354);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122252122353);
arg_buffer[2] = x122161122355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122252122353))[0]);
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
void* _122515 = arg_buffer[1];
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

void* kont122254122356 = prim_car(lst);
void* lst122357 = prim_cdr(lst);
void* x122162122358 = apply_prim__u42(lst122357);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122254122356);
arg_buffer[2] = x122162122358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122254122356))[0]);
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
void* _122516 = arg_buffer[1];
//reading env and args
void* kont122256 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x122163122359 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122256);
arg_buffer[2] = x122163122359;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122256))[0]);
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
void* _122517 = arg_buffer[1];
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

void* kont122257122360 = prim_car(lst);
void* lst122361 = prim_cdr(lst);
void* x122164122362 = apply_prim__u47(lst122361);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122257122360);
arg_buffer[2] = x122164122362;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122257122360))[0]);
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
void* _122518 = arg_buffer[1];
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

void* kont122259122363 = prim_car(lst);
void* lst122364 = prim_cdr(lst);
void* x122165122365 = apply_prim__u61(lst122364);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122259122363);
arg_buffer[2] = x122165122365;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122259122363))[0]);
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
void* _122519 = arg_buffer[1];
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

void* kont122261122366 = prim_car(lst);
void* lst122367 = prim_cdr(lst);
void* x122166122368 = apply_prim__u62(lst122367);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122261122366);
arg_buffer[2] = x122166122368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122261122366))[0]);
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
void* _122520 = arg_buffer[1];
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

void* kont122263122369 = prim_car(lst);
void* lst122370 = prim_cdr(lst);
void* x122167122371 = apply_prim__u60(lst122370);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122263122369);
arg_buffer[2] = x122167122371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122263122369))[0]);
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
void* _122521 = arg_buffer[1];
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

void* kont122265122372 = prim_car(lst);
void* lst122373 = prim_cdr(lst);
void* x122168122374 = apply_prim__u60_u61(lst122373);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122265122372);
arg_buffer[2] = x122168122374;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122265122372))[0]);
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
void* _122522 = arg_buffer[1];
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

void* kont122267122375 = prim_car(lst);
void* lst122376 = prim_cdr(lst);
void* x122169122377 = apply_prim__u62_u61(lst122376);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122267122375);
arg_buffer[2] = x122169122377;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122267122375))[0]);
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
void* _122523 = arg_buffer[1];
//reading env and args
void* kont122269 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x122170122378 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122269);
arg_buffer[2] = x122170122378;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122269))[0]);
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
void* _122524 = arg_buffer[1];
//reading env and args
void* kont122270 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x122171122379 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122270);
arg_buffer[2] = x122171122379;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122270))[0]);
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
void* _122525 = arg_buffer[1];
//reading env and args
void* kont122271 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x122172122380 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122271);
arg_buffer[2] = x122172122380;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122271))[0]);
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
void* _122526 = arg_buffer[1];
//reading env and args
void* kont122272 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x122173122381 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122272);
arg_buffer[2] = x122173122381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122272))[0]);
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
void* _122527 = arg_buffer[1];
//reading env and args
void* kont122273 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x122174122382 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122273);
arg_buffer[2] = x122174122382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122273))[0]);
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
void* _122528 = arg_buffer[1];
//reading env and args
void* kont122274 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x122175122383 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122274);
arg_buffer[2] = x122175122383;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122274))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam122529_fptr() // lam122529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122530 = arg_buffer[1];
//reading env and args
void* a122178122387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env122530))[3];
//not do dummy comment
void* a122176122384 = (decode_clo(env122530))[2];
//not do dummy comment
void* kont122275 = (decode_clo(env122530))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont122275;
arg_buffer[3] = a122176122384;
arg_buffer[4] = a122178122387;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122529 = encode_clo(alloc_clo(lam122529_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122533 = arg_buffer[1];
//reading env and args
void* kont122275 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar123211 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123211, "0", 10);
void* a122176122384 = encode_mpz(mpzvar123211);
mpz_t* mpzvar123212 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123212, "2", 10);
void* a122177122385 = encode_mpz(mpzvar123212);

//creating new closure instance
void** clo123214 = alloc_clo(lam122529_fptr, 3);

//setting env list
clo123214[1] = kont122275;
clo123214[2] = a122176122384;
clo123214[3] = equal_u63;
void* f122276122386 = encode_clo(clo123214);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f122276122386;
arg_buffer[3] = x;
arg_buffer[4] = a122177122385;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam122534_fptr() // lam122534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122535 = arg_buffer[1];
//reading env and args
void* a122181122391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122277 = (decode_clo(env122535))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env122535))[2];
//not do dummy comment
void* a122179122388 = (decode_clo(env122535))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont122277;
arg_buffer[3] = a122179122388;
arg_buffer[4] = a122181122391;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122534 = encode_clo(alloc_clo(lam122534_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122538 = arg_buffer[1];
//reading env and args
void* kont122277 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar123215 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123215, "1", 10);
void* a122179122388 = encode_mpz(mpzvar123215);
mpz_t* mpzvar123216 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123216, "2", 10);
void* a122180122389 = encode_mpz(mpzvar123216);

//creating new closure instance
void** clo123218 = alloc_clo(lam122534_fptr, 3);

//setting env list
clo123218[1] = a122179122388;
clo123218[2] = equal_u63;
clo123218[3] = kont122277;
void* f122278122390 = encode_clo(clo123218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f122278122390;
arg_buffer[3] = x;
arg_buffer[4] = a122180122389;
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
void* _122539 = arg_buffer[1];
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

void* kont122279122392 = prim_car(x);
void* x122393 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122279122392);
arg_buffer[2] = x122393;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122279122392))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam122542_fptr() // lam122542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122543 = arg_buffer[1];
//reading env and args
void* a122187122403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122281 = (decode_clo(env122543))[3];
//not do dummy comment
void* x = (decode_clo(env122543))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env122543))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont122281;
arg_buffer[3] = x;
arg_buffer[4] = a122187122403;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122542 = encode_clo(alloc_clo(lam122542_fptr, 0));

void* lam122544_fptr() // lam122544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122545 = arg_buffer[1];
//reading env and args
void* a122185122400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122545))[5];
//not do dummy comment
void* x = (decode_clo(env122545))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env122545))[3];
//not do dummy comment
void* lst = (decode_clo(env122545))[2];
//not do dummy comment
void* kont122281 = (decode_clo(env122545))[1];

//if-clause
bool if_guard123219 = is_true(a122185122400);
if(if_guard123219)
{
void* x122186122401 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122281);
arg_buffer[2] = x122186122401;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122281))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo123221 = alloc_clo(lam122542_fptr, 3);

//setting env list
clo123221[1] = member_u63;
clo123221[2] = x;
clo123221[3] = kont122281;
void* f122282122402 = encode_clo(clo123221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122282122402;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122544 = encode_clo(alloc_clo(lam122544_fptr, 0));

void* lam122546_fptr() // lam122546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122547 = arg_buffer[1];
//reading env and args
void* a122184122398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122547))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env122547))[5];
//not do dummy comment
void* x = (decode_clo(env122547))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env122547))[3];
//not do dummy comment
void* lst = (decode_clo(env122547))[2];
//not do dummy comment
void* kont122281 = (decode_clo(env122547))[1];

//creating new closure instance
void** clo123223 = alloc_clo(lam122544_fptr, 5);

//setting env list
clo123223[1] = kont122281;
clo123223[2] = lst;
clo123223[3] = member_u63;
clo123223[4] = x;
clo123223[5] = cdr;
void* f122283122399 = encode_clo(clo123223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f122283122399;
arg_buffer[3] = a122184122398;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122546 = encode_clo(alloc_clo(lam122546_fptr, 0));

void* lam122548_fptr() // lam122548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122549 = arg_buffer[1];
//reading env and args
void* a122182122395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122549))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env122549))[6];
//not do dummy comment
void* x = (decode_clo(env122549))[5];
//not do dummy comment
void* car = (decode_clo(env122549))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env122549))[3];
//not do dummy comment
void* lst = (decode_clo(env122549))[2];
//not do dummy comment
void* kont122281 = (decode_clo(env122549))[1];

//if-clause
bool if_guard123224 = is_true(a122182122395);
if(if_guard123224)
{
void* x122183122396 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122281);
arg_buffer[2] = x122183122396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122281))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo123226 = alloc_clo(lam122546_fptr, 6);

//setting env list
clo123226[1] = kont122281;
clo123226[2] = lst;
clo123226[3] = member_u63;
clo123226[4] = x;
clo123226[5] = equal_u63;
clo123226[6] = cdr;
void* f122284122397 = encode_clo(clo123226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122284122397;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122548 = encode_clo(alloc_clo(lam122548_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122550 = arg_buffer[1];
//reading env and args
void* kont122281 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo123228 = alloc_clo(lam122548_fptr, 7);

//setting env list
clo123228[1] = kont122281;
clo123228[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo123228[3] = member_u63;
clo123228[4] = car;
clo123228[5] = x;
clo123228[6] = equal_u63;
clo123228[7] = cdr;
void* f122285122394 = encode_clo(clo123228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122285122394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam122551_fptr() // lam122551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122552 = arg_buffer[1];
//reading env and args
void* a122191122411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122190122409 = (decode_clo(env122552))[4];
//not do dummy comment
void* kont122286 = (decode_clo(env122552))[3];
//not do dummy comment
void* fun = (decode_clo(env122552))[2];
//not do dummy comment
void* foldl = (decode_clo(env122552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont122286;
arg_buffer[3] = fun;
arg_buffer[4] = a122190122409;
arg_buffer[5] = a122191122411;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122551 = encode_clo(alloc_clo(lam122551_fptr, 0));

void* lam122553_fptr() // lam122553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122554 = arg_buffer[1];
//reading env and args
void* a122190122409 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122554))[5];
//not do dummy comment
void* lst = (decode_clo(env122554))[4];
//not do dummy comment
void* kont122286 = (decode_clo(env122554))[3];
//not do dummy comment
void* fun = (decode_clo(env122554))[2];
//not do dummy comment
void* foldl = (decode_clo(env122554))[1];

//creating new closure instance
void** clo123230 = alloc_clo(lam122551_fptr, 4);

//setting env list
clo123230[1] = foldl;
clo123230[2] = fun;
clo123230[3] = kont122286;
clo123230[4] = a122190122409;
void* f122287122410 = encode_clo(clo123230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122287122410;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122553 = encode_clo(alloc_clo(lam122553_fptr, 0));

void* lam122555_fptr() // lam122555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122556 = arg_buffer[1];
//reading env and args
void* a122189122407 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122556))[6];
//not do dummy comment
void* lst = (decode_clo(env122556))[5];
//not do dummy comment
void* kont122286 = (decode_clo(env122556))[4];
//not do dummy comment
void* fun = (decode_clo(env122556))[3];
//not do dummy comment
void* acc = (decode_clo(env122556))[2];
//not do dummy comment
void* foldl = (decode_clo(env122556))[1];

//creating new closure instance
void** clo123232 = alloc_clo(lam122553_fptr, 5);

//setting env list
clo123232[1] = foldl;
clo123232[2] = fun;
clo123232[3] = kont122286;
clo123232[4] = lst;
clo123232[5] = cdr;
void* f122288122408 = encode_clo(clo123232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f122288122408;
arg_buffer[3] = a122189122407;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122555 = encode_clo(alloc_clo(lam122555_fptr, 0));

void* lam122557_fptr() // lam122557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122558 = arg_buffer[1];
//reading env and args
void* a122188122405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122558))[7];
//not do dummy comment
void* lst = (decode_clo(env122558))[6];
//not do dummy comment
void* kont122286 = (decode_clo(env122558))[5];
//not do dummy comment
void* fun = (decode_clo(env122558))[4];
//not do dummy comment
void* acc = (decode_clo(env122558))[3];
//not do dummy comment
void* car = (decode_clo(env122558))[2];
//not do dummy comment
void* foldl = (decode_clo(env122558))[1];

//if-clause
bool if_guard123233 = is_true(a122188122405);
if(if_guard123233)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122286);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122286))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo123235 = alloc_clo(lam122555_fptr, 6);

//setting env list
clo123235[1] = foldl;
clo123235[2] = acc;
clo123235[3] = fun;
clo123235[4] = kont122286;
clo123235[5] = lst;
clo123235[6] = cdr;
void* f122289122406 = encode_clo(clo123235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122289122406;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122557 = encode_clo(alloc_clo(lam122557_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122559 = arg_buffer[1];
//reading env and args
void* kont122286 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo123237 = alloc_clo(lam122557_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo123237[1] = foldl;
clo123237[2] = car;
clo123237[3] = acc;
clo123237[4] = fun;
clo123237[5] = kont122286;
clo123237[6] = lst;
clo123237[7] = cdr;
void* f122290122404 = encode_clo(clo123237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122290122404;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam122560_fptr() // lam122560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122561 = arg_buffer[1];
//reading env and args
void* a122195122419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env122561))[3];
//not do dummy comment
void* a122193122415 = (decode_clo(env122561))[2];
//not do dummy comment
void* kont122291 = (decode_clo(env122561))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont122291;
arg_buffer[3] = a122193122415;
arg_buffer[4] = a122195122419;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122560 = encode_clo(alloc_clo(lam122560_fptr, 0));

void* lam122562_fptr() // lam122562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122563 = arg_buffer[1];
//reading env and args
void* a122194122417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env122563))[5];
//not do dummy comment
void* a122193122415 = (decode_clo(env122563))[4];
//not do dummy comment
void* lst2 = (decode_clo(env122563))[3];
//not do dummy comment
void* cons = (decode_clo(env122563))[2];
//not do dummy comment
void* kont122291 = (decode_clo(env122563))[1];

//creating new closure instance
void** clo123239 = alloc_clo(lam122560_fptr, 3);

//setting env list
clo123239[1] = kont122291;
clo123239[2] = a122193122415;
clo123239[3] = reverse_u45helper;
void* f122292122418 = encode_clo(clo123239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f122292122418;
arg_buffer[3] = a122194122417;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122562 = encode_clo(alloc_clo(lam122562_fptr, 0));

void* lam122564_fptr() // lam122564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122565 = arg_buffer[1];
//reading env and args
void* a122193122415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env122565))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env122565))[5];
//not do dummy comment
void* lst2 = (decode_clo(env122565))[4];
//not do dummy comment
void* car = (decode_clo(env122565))[3];
//not do dummy comment
void* cons = (decode_clo(env122565))[2];
//not do dummy comment
void* kont122291 = (decode_clo(env122565))[1];

//creating new closure instance
void** clo123241 = alloc_clo(lam122562_fptr, 5);

//setting env list
clo123241[1] = kont122291;
clo123241[2] = cons;
clo123241[3] = lst2;
clo123241[4] = a122193122415;
clo123241[5] = reverse_u45helper;
void* f122293122416 = encode_clo(clo123241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122293122416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122564 = encode_clo(alloc_clo(lam122564_fptr, 0));

void* lam122566_fptr() // lam122566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122567 = arg_buffer[1];
//reading env and args
void* a122192122413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122567))[7];
//not do dummy comment
void* lst = (decode_clo(env122567))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env122567))[5];
//not do dummy comment
void* lst2 = (decode_clo(env122567))[4];
//not do dummy comment
void* car = (decode_clo(env122567))[3];
//not do dummy comment
void* cons = (decode_clo(env122567))[2];
//not do dummy comment
void* kont122291 = (decode_clo(env122567))[1];

//if-clause
bool if_guard123242 = is_true(a122192122413);
if(if_guard123242)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122291);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122291))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo123244 = alloc_clo(lam122564_fptr, 6);

//setting env list
clo123244[1] = kont122291;
clo123244[2] = cons;
clo123244[3] = car;
clo123244[4] = lst2;
clo123244[5] = reverse_u45helper;
clo123244[6] = lst;
void* f122294122414 = encode_clo(clo123244);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122294122414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122566 = encode_clo(alloc_clo(lam122566_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122568 = arg_buffer[1];
//reading env and args
void* kont122291 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo123246 = alloc_clo(lam122566_fptr, 7);

//setting env list
clo123246[1] = kont122291;
clo123246[2] = cons;
clo123246[3] = car;
clo123246[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo123246[5] = reverse_u45helper;
clo123246[6] = lst;
clo123246[7] = cdr;
void* f122295122412 = encode_clo(clo123246);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122295122412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam122569_fptr() // lam122569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122570 = arg_buffer[1];
//reading env and args
void* a122196122421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122296 = (decode_clo(env122570))[3];
//not do dummy comment
void* lst = (decode_clo(env122570))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env122570))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont122296;
arg_buffer[3] = lst;
arg_buffer[4] = a122196122421;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122569 = encode_clo(alloc_clo(lam122569_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122571 = arg_buffer[1];
//reading env and args
void* kont122296 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo123248 = alloc_clo(lam122569_fptr, 3);

//setting env list
clo123248[1] = reverse_u45helper;
clo123248[2] = lst;
clo123248[3] = kont122296;
void* f122297122420 = encode_clo(clo123248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f122297122420;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam122572_fptr() // lam122572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122573 = arg_buffer[1];
//reading env and args
void* x122199122426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122298 = (decode_clo(env122573))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122298);
arg_buffer[2] = x122199122426;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122298))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122572 = encode_clo(alloc_clo(lam122572_fptr, 0));

void* lam122574_fptr() // lam122574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122575 = arg_buffer[1];
//reading env and args
void* a122204122435 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122298 = (decode_clo(env122575))[4];
//not do dummy comment
void* a122200122428 = (decode_clo(env122575))[3];
//not do dummy comment
void* a122202122431 = (decode_clo(env122575))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env122575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont122298;
arg_buffer[3] = a122200122428;
arg_buffer[4] = a122202122431;
arg_buffer[5] = a122204122435;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122574 = encode_clo(alloc_clo(lam122574_fptr, 0));

void* lam122576_fptr() // lam122576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122577 = arg_buffer[1];
//reading env and args
void* a122203122433 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122298 = (decode_clo(env122577))[6];
//not do dummy comment
void* a122200122428 = (decode_clo(env122577))[5];
//not do dummy comment
void* a122202122431 = (decode_clo(env122577))[4];
//not do dummy comment
void* cons = (decode_clo(env122577))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env122577))[2];
//not do dummy comment
void* lst2 = (decode_clo(env122577))[1];

//creating new closure instance
void** clo123250 = alloc_clo(lam122574_fptr, 4);

//setting env list
clo123250[1] = take_u45helper;
clo123250[2] = a122202122431;
clo123250[3] = a122200122428;
clo123250[4] = kont122298;
void* f122300122434 = encode_clo(clo123250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f122300122434;
arg_buffer[3] = a122203122433;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122576 = encode_clo(alloc_clo(lam122576_fptr, 0));

void* lam122578_fptr() // lam122578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122579 = arg_buffer[1];
//reading env and args
void* a122202122431 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env122579))[7];
//not do dummy comment
void* kont122298 = (decode_clo(env122579))[6];
//not do dummy comment
void* a122200122428 = (decode_clo(env122579))[5];
//not do dummy comment
void* car = (decode_clo(env122579))[4];
//not do dummy comment
void* cons = (decode_clo(env122579))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env122579))[2];
//not do dummy comment
void* lst2 = (decode_clo(env122579))[1];

//creating new closure instance
void** clo123252 = alloc_clo(lam122576_fptr, 6);

//setting env list
clo123252[1] = lst2;
clo123252[2] = take_u45helper;
clo123252[3] = cons;
clo123252[4] = a122202122431;
clo123252[5] = a122200122428;
clo123252[6] = kont122298;
void* f122301122432 = encode_clo(clo123252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122301122432;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122578 = encode_clo(alloc_clo(lam122578_fptr, 0));

void* lam122581_fptr() // lam122581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122582 = arg_buffer[1];
//reading env and args
void* a122200122428 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env122582))[8];
//not do dummy comment
void* kont122298 = (decode_clo(env122582))[7];
//not do dummy comment
void* cons = (decode_clo(env122582))[6];
//not do dummy comment
void* _u45 = (decode_clo(env122582))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env122582))[4];
//not do dummy comment
void* lst2 = (decode_clo(env122582))[3];
//not do dummy comment
void* n = (decode_clo(env122582))[2];
//not do dummy comment
void* car = (decode_clo(env122582))[1];
mpz_t* mpzvar123253 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123253, "1", 10);
void* a122201122429 = encode_mpz(mpzvar123253);

//creating new closure instance
void** clo123255 = alloc_clo(lam122578_fptr, 7);

//setting env list
clo123255[1] = lst2;
clo123255[2] = take_u45helper;
clo123255[3] = cons;
clo123255[4] = car;
clo123255[5] = a122200122428;
clo123255[6] = kont122298;
clo123255[7] = lst;
void* f122302122430 = encode_clo(clo123255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f122302122430;
arg_buffer[3] = n;
arg_buffer[4] = a122201122429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122581 = encode_clo(alloc_clo(lam122581_fptr, 0));

void* lam122583_fptr() // lam122583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122584 = arg_buffer[1];
//reading env and args
void* a122198122424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122584))[10];
//not do dummy comment
void* lst = (decode_clo(env122584))[9];
//not do dummy comment
void* kont122298 = (decode_clo(env122584))[8];
//not do dummy comment
void* reverse = (decode_clo(env122584))[7];
//not do dummy comment
void* cons = (decode_clo(env122584))[6];
//not do dummy comment
void* _u45 = (decode_clo(env122584))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env122584))[4];
//not do dummy comment
void* lst2 = (decode_clo(env122584))[3];
//not do dummy comment
void* n = (decode_clo(env122584))[2];
//not do dummy comment
void* car = (decode_clo(env122584))[1];

//if-clause
bool if_guard123256 = is_true(a122198122424);
if(if_guard123256)
{

//creating new closure instance
void** clo123258 = alloc_clo(lam122572_fptr, 1);

//setting env list
clo123258[1] = kont122298;
void* f122299122425 = encode_clo(clo123258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f122299122425;
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
void** clo123260 = alloc_clo(lam122581_fptr, 8);

//setting env list
clo123260[1] = car;
clo123260[2] = n;
clo123260[3] = lst2;
clo123260[4] = take_u45helper;
clo123260[5] = _u45;
clo123260[6] = cons;
clo123260[7] = kont122298;
clo123260[8] = lst;
void* f122303122427 = encode_clo(clo123260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122303122427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122583 = encode_clo(alloc_clo(lam122583_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122586 = arg_buffer[1];
//reading env and args
void* kont122298 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar123261 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123261, "0", 10);
void* a122197122422 = encode_mpz(mpzvar123261);

//creating new closure instance
void** clo123263 = alloc_clo(lam122583_fptr, 10);

//setting env list
clo123263[1] = car;
clo123263[2] = n;
clo123263[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo123263[4] = take_u45helper;
clo123263[5] = _u45;
clo123263[6] = cons;
clo123263[7] = reverse;
clo123263[8] = kont122298;
clo123263[9] = lst;
clo123263[10] = cdr;
void* f122304122423 = encode_clo(clo123263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f122304122423;
arg_buffer[3] = n;
arg_buffer[4] = a122197122422;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam122587_fptr() // lam122587 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122588 = arg_buffer[1];
//reading env and args
void* a122205122437 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env122588))[4];
//not do dummy comment
void* n = (decode_clo(env122588))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env122588))[2];
//not do dummy comment
void* kont122305 = (decode_clo(env122588))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont122305;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a122205122437;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122587 = encode_clo(alloc_clo(lam122587_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122589 = arg_buffer[1];
//reading env and args
void* kont122305 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo123265 = alloc_clo(lam122587_fptr, 4);

//setting env list
clo123265[1] = kont122305;
clo123265[2] = take_u45helper;
clo123265[3] = n;
clo123265[4] = lst;
void* f122306122436 = encode_clo(clo123265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f122306122436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam122591_fptr() // lam122591 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122592 = arg_buffer[1];
//reading env and args
void* a122210122445 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122208122441 = (decode_clo(env122592))[3];
//not do dummy comment
void* _u43 = (decode_clo(env122592))[2];
//not do dummy comment
void* kont122307 = (decode_clo(env122592))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont122307;
arg_buffer[3] = a122208122441;
arg_buffer[4] = a122210122445;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122591 = encode_clo(alloc_clo(lam122591_fptr, 0));

void* lam122593_fptr() // lam122593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122594 = arg_buffer[1];
//reading env and args
void* a122209122443 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122208122441 = (decode_clo(env122594))[4];
//not do dummy comment
void* length = (decode_clo(env122594))[3];
//not do dummy comment
void* _u43 = (decode_clo(env122594))[2];
//not do dummy comment
void* kont122307 = (decode_clo(env122594))[1];

//creating new closure instance
void** clo123267 = alloc_clo(lam122591_fptr, 3);

//setting env list
clo123267[1] = kont122307;
clo123267[2] = _u43;
clo123267[3] = a122208122441;
void* f122308122444 = encode_clo(clo123267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f122308122444;
arg_buffer[3] = a122209122443;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122593 = encode_clo(alloc_clo(lam122593_fptr, 0));

void* lam122596_fptr() // lam122596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122597 = arg_buffer[1];
//reading env and args
void* a122206122439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122597))[5];
//not do dummy comment
void* lst = (decode_clo(env122597))[4];
//not do dummy comment
void* length = (decode_clo(env122597))[3];
//not do dummy comment
void* _u43 = (decode_clo(env122597))[2];
//not do dummy comment
void* kont122307 = (decode_clo(env122597))[1];

//if-clause
bool if_guard123268 = is_true(a122206122439);
if(if_guard123268)
{
mpz_t* mpzvar123269 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123269, "0", 10);
void* x122207122440 = encode_mpz(mpzvar123269);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122307);
arg_buffer[2] = x122207122440;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122307))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar123270 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123270, "1", 10);
void* a122208122441 = encode_mpz(mpzvar123270);

//creating new closure instance
void** clo123272 = alloc_clo(lam122593_fptr, 4);

//setting env list
clo123272[1] = kont122307;
clo123272[2] = _u43;
clo123272[3] = length;
clo123272[4] = a122208122441;
void* f122309122442 = encode_clo(clo123272);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122309122442;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122596 = encode_clo(alloc_clo(lam122596_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122598 = arg_buffer[1];
//reading env and args
void* kont122307 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo123274 = alloc_clo(lam122596_fptr, 5);

//setting env list
clo123274[1] = kont122307;
clo123274[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo123274[3] = length;
clo123274[4] = lst;
clo123274[5] = cdr;
void* f122310122438 = encode_clo(clo123274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122310122438;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam122599_fptr() // lam122599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122600 = arg_buffer[1];
//reading env and args
void* x122212122449 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122311 = (decode_clo(env122600))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122311);
arg_buffer[2] = x122212122449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122311))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122599 = encode_clo(alloc_clo(lam122599_fptr, 0));

void* lam122601_fptr() // lam122601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122602 = arg_buffer[1];
//reading env and args
void* a122216122457 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122214122453 = (decode_clo(env122602))[3];
//not do dummy comment
void* kont122311 = (decode_clo(env122602))[2];
//not do dummy comment
void* cons = (decode_clo(env122602))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont122311;
arg_buffer[3] = a122214122453;
arg_buffer[4] = a122216122457;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122601 = encode_clo(alloc_clo(lam122601_fptr, 0));

void* lam122603_fptr() // lam122603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122604 = arg_buffer[1];
//reading env and args
void* a122215122455 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122214122453 = (decode_clo(env122604))[5];
//not do dummy comment
void* kont122311 = (decode_clo(env122604))[4];
//not do dummy comment
void* map = (decode_clo(env122604))[3];
//not do dummy comment
void* proc = (decode_clo(env122604))[2];
//not do dummy comment
void* cons = (decode_clo(env122604))[1];

//creating new closure instance
void** clo123276 = alloc_clo(lam122601_fptr, 3);

//setting env list
clo123276[1] = cons;
clo123276[2] = kont122311;
clo123276[3] = a122214122453;
void* f122313122456 = encode_clo(clo123276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f122313122456;
arg_buffer[3] = proc;
arg_buffer[4] = a122215122455;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122603 = encode_clo(alloc_clo(lam122603_fptr, 0));

void* lam122605_fptr() // lam122605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122606 = arg_buffer[1];
//reading env and args
void* a122214122453 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122606))[6];
//not do dummy comment
void* kont122311 = (decode_clo(env122606))[5];
//not do dummy comment
void* lst = (decode_clo(env122606))[4];
//not do dummy comment
void* map = (decode_clo(env122606))[3];
//not do dummy comment
void* proc = (decode_clo(env122606))[2];
//not do dummy comment
void* cons = (decode_clo(env122606))[1];

//creating new closure instance
void** clo123278 = alloc_clo(lam122603_fptr, 5);

//setting env list
clo123278[1] = cons;
clo123278[2] = proc;
clo123278[3] = map;
clo123278[4] = kont122311;
clo123278[5] = a122214122453;
void* f122314122454 = encode_clo(clo123278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122314122454;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122605 = encode_clo(alloc_clo(lam122605_fptr, 0));

void* lam122607_fptr() // lam122607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122608 = arg_buffer[1];
//reading env and args
void* a122213122451 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122608))[6];
//not do dummy comment
void* kont122311 = (decode_clo(env122608))[5];
//not do dummy comment
void* lst = (decode_clo(env122608))[4];
//not do dummy comment
void* map = (decode_clo(env122608))[3];
//not do dummy comment
void* proc = (decode_clo(env122608))[2];
//not do dummy comment
void* cons = (decode_clo(env122608))[1];

//creating new closure instance
void** clo123280 = alloc_clo(lam122605_fptr, 6);

//setting env list
clo123280[1] = cons;
clo123280[2] = proc;
clo123280[3] = map;
clo123280[4] = lst;
clo123280[5] = kont122311;
clo123280[6] = cdr;
void* f122315122452 = encode_clo(clo123280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f122315122452;
arg_buffer[3] = a122213122451;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122607 = encode_clo(alloc_clo(lam122607_fptr, 0));

void* lam122609_fptr() // lam122609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122610 = arg_buffer[1];
//reading env and args
void* a122211122447 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122311 = (decode_clo(env122610))[8];
//not do dummy comment
void* lst = (decode_clo(env122610))[7];
//not do dummy comment
void* map = (decode_clo(env122610))[6];
//not do dummy comment
void* proc = (decode_clo(env122610))[5];
//not do dummy comment
void* car = (decode_clo(env122610))[4];
//not do dummy comment
void* cons = (decode_clo(env122610))[3];
//not do dummy comment
void* list = (decode_clo(env122610))[2];
//not do dummy comment
void* cdr = (decode_clo(env122610))[1];

//if-clause
bool if_guard123281 = is_true(a122211122447);
if(if_guard123281)
{

//creating new closure instance
void** clo123283 = alloc_clo(lam122599_fptr, 1);

//setting env list
clo123283[1] = kont122311;
void* f122312122448 = encode_clo(clo123283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f122312122448;
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
void** clo123285 = alloc_clo(lam122607_fptr, 6);

//setting env list
clo123285[1] = cons;
clo123285[2] = proc;
clo123285[3] = map;
clo123285[4] = lst;
clo123285[5] = kont122311;
clo123285[6] = cdr;
void* f122316122450 = encode_clo(clo123285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122316122450;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122609 = encode_clo(alloc_clo(lam122609_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122611 = arg_buffer[1];
//reading env and args
void* kont122311 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo123287 = alloc_clo(lam122609_fptr, 8);

//setting env list
clo123287[1] = cdr;
clo123287[2] = list;
clo123287[3] = cons;
clo123287[4] = car;
clo123287[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo123287[6] = map;
clo123287[7] = lst;
clo123287[8] = kont122311;
void* f122317122446 = encode_clo(clo123287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122317122446;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam122612_fptr() // lam122612 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122613 = arg_buffer[1];
//reading env and args
void* x122218122461 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122318 = (decode_clo(env122613))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122318);
arg_buffer[2] = x122218122461;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122318))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122612 = encode_clo(alloc_clo(lam122612_fptr, 0));

void* lam122614_fptr() // lam122614 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122615 = arg_buffer[1];
//reading env and args
void* a122223122471 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122318 = (decode_clo(env122615))[3];
//not do dummy comment
void* cons = (decode_clo(env122615))[2];
//not do dummy comment
void* a122221122467 = (decode_clo(env122615))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont122318;
arg_buffer[3] = a122221122467;
arg_buffer[4] = a122223122471;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122614 = encode_clo(alloc_clo(lam122614_fptr, 0));

void* lam122616_fptr() // lam122616 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122617 = arg_buffer[1];
//reading env and args
void* a122222122469 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env122617))[5];
//not do dummy comment
void* kont122318 = (decode_clo(env122617))[4];
//not do dummy comment
void* filter = (decode_clo(env122617))[3];
//not do dummy comment
void* cons = (decode_clo(env122617))[2];
//not do dummy comment
void* a122221122467 = (decode_clo(env122617))[1];

//creating new closure instance
void** clo123289 = alloc_clo(lam122614_fptr, 3);

//setting env list
clo123289[1] = a122221122467;
clo123289[2] = cons;
clo123289[3] = kont122318;
void* f122320122470 = encode_clo(clo123289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f122320122470;
arg_buffer[3] = op;
arg_buffer[4] = a122222122469;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122616 = encode_clo(alloc_clo(lam122616_fptr, 0));

void* lam122618_fptr() // lam122618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122619 = arg_buffer[1];
//reading env and args
void* a122221122467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122619))[6];
//not do dummy comment
void* lst = (decode_clo(env122619))[5];
//not do dummy comment
void* op = (decode_clo(env122619))[4];
//not do dummy comment
void* kont122318 = (decode_clo(env122619))[3];
//not do dummy comment
void* filter = (decode_clo(env122619))[2];
//not do dummy comment
void* cons = (decode_clo(env122619))[1];

//creating new closure instance
void** clo123291 = alloc_clo(lam122616_fptr, 5);

//setting env list
clo123291[1] = a122221122467;
clo123291[2] = cons;
clo123291[3] = filter;
clo123291[4] = kont122318;
clo123291[5] = op;
void* f122321122468 = encode_clo(clo123291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122321122468;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122618 = encode_clo(alloc_clo(lam122618_fptr, 0));

void* lam122620_fptr() // lam122620 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122621 = arg_buffer[1];
//reading env and args
void* a122224122473 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env122621))[3];
//not do dummy comment
void* kont122318 = (decode_clo(env122621))[2];
//not do dummy comment
void* filter = (decode_clo(env122621))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont122318;
arg_buffer[3] = op;
arg_buffer[4] = a122224122473;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122620 = encode_clo(alloc_clo(lam122620_fptr, 0));

void* lam122622_fptr() // lam122622 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122623 = arg_buffer[1];
//reading env and args
void* a122220122465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122623))[7];
//not do dummy comment
void* lst = (decode_clo(env122623))[6];
//not do dummy comment
void* op = (decode_clo(env122623))[5];
//not do dummy comment
void* kont122318 = (decode_clo(env122623))[4];
//not do dummy comment
void* cons = (decode_clo(env122623))[3];
//not do dummy comment
void* filter = (decode_clo(env122623))[2];
//not do dummy comment
void* car = (decode_clo(env122623))[1];

//if-clause
bool if_guard123292 = is_true(a122220122465);
if(if_guard123292)
{

//creating new closure instance
void** clo123294 = alloc_clo(lam122618_fptr, 6);

//setting env list
clo123294[1] = cons;
clo123294[2] = filter;
clo123294[3] = kont122318;
clo123294[4] = op;
clo123294[5] = lst;
clo123294[6] = cdr;
void* f122322122466 = encode_clo(clo123294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122322122466;
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
void** clo123296 = alloc_clo(lam122620_fptr, 3);

//setting env list
clo123296[1] = filter;
clo123296[2] = kont122318;
clo123296[3] = op;
void* f122323122472 = encode_clo(clo123296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122323122472;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122622 = encode_clo(alloc_clo(lam122622_fptr, 0));

void* lam122624_fptr() // lam122624 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122625 = arg_buffer[1];
//reading env and args
void* a122219122463 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122625))[7];
//not do dummy comment
void* lst = (decode_clo(env122625))[6];
//not do dummy comment
void* op = (decode_clo(env122625))[5];
//not do dummy comment
void* kont122318 = (decode_clo(env122625))[4];
//not do dummy comment
void* cons = (decode_clo(env122625))[3];
//not do dummy comment
void* filter = (decode_clo(env122625))[2];
//not do dummy comment
void* car = (decode_clo(env122625))[1];

//creating new closure instance
void** clo123298 = alloc_clo(lam122622_fptr, 7);

//setting env list
clo123298[1] = car;
clo123298[2] = filter;
clo123298[3] = cons;
clo123298[4] = kont122318;
clo123298[5] = op;
clo123298[6] = lst;
clo123298[7] = cdr;
void* f122324122464 = encode_clo(clo123298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f122324122464;
arg_buffer[3] = a122219122463;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122624 = encode_clo(alloc_clo(lam122624_fptr, 0));

void* lam122626_fptr() // lam122626 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122627 = arg_buffer[1];
//reading env and args
void* a122217122459 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env122627))[8];
//not do dummy comment
void* op = (decode_clo(env122627))[7];
//not do dummy comment
void* kont122318 = (decode_clo(env122627))[6];
//not do dummy comment
void* cons = (decode_clo(env122627))[5];
//not do dummy comment
void* list = (decode_clo(env122627))[4];
//not do dummy comment
void* cdr = (decode_clo(env122627))[3];
//not do dummy comment
void* filter = (decode_clo(env122627))[2];
//not do dummy comment
void* car = (decode_clo(env122627))[1];

//if-clause
bool if_guard123299 = is_true(a122217122459);
if(if_guard123299)
{

//creating new closure instance
void** clo123301 = alloc_clo(lam122612_fptr, 1);

//setting env list
clo123301[1] = kont122318;
void* f122319122460 = encode_clo(clo123301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f122319122460;
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
void** clo123303 = alloc_clo(lam122624_fptr, 7);

//setting env list
clo123303[1] = car;
clo123303[2] = filter;
clo123303[3] = cons;
clo123303[4] = kont122318;
clo123303[5] = op;
clo123303[6] = lst;
clo123303[7] = cdr;
void* f122325122462 = encode_clo(clo123303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122325122462;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122626 = encode_clo(alloc_clo(lam122626_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122628 = arg_buffer[1];
//reading env and args
void* kont122318 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo123305 = alloc_clo(lam122626_fptr, 8);

//setting env list
clo123305[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo123305[2] = filter;
clo123305[3] = cdr;
clo123305[4] = list;
clo123305[5] = cons;
clo123305[6] = kont122318;
clo123305[7] = op;
clo123305[8] = lst;
void* f122326122458 = encode_clo(clo123305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122326122458;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam122629_fptr() // lam122629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122630 = arg_buffer[1];
//reading env and args
void* a122229122481 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122327 = (decode_clo(env122630))[3];
//not do dummy comment
void* drop = (decode_clo(env122630))[2];
//not do dummy comment
void* a122227122478 = (decode_clo(env122630))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont122327;
arg_buffer[3] = a122227122478;
arg_buffer[4] = a122229122481;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122629 = encode_clo(alloc_clo(lam122629_fptr, 0));

void* lam122632_fptr() // lam122632 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122633 = arg_buffer[1];
//reading env and args
void* a122227122478 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122327 = (decode_clo(env122633))[4];
//not do dummy comment
void* drop = (decode_clo(env122633))[3];
//not do dummy comment
void* n = (decode_clo(env122633))[2];
//not do dummy comment
void* _u45 = (decode_clo(env122633))[1];
mpz_t* mpzvar123306 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123306, "1", 10);
void* a122228122479 = encode_mpz(mpzvar123306);

//creating new closure instance
void** clo123308 = alloc_clo(lam122629_fptr, 3);

//setting env list
clo123308[1] = a122227122478;
clo123308[2] = drop;
clo123308[3] = kont122327;
void* f122328122480 = encode_clo(clo123308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f122328122480;
arg_buffer[3] = n;
arg_buffer[4] = a122228122479;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122632 = encode_clo(alloc_clo(lam122632_fptr, 0));

void* lam122634_fptr() // lam122634 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122635 = arg_buffer[1];
//reading env and args
void* a122226122476 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122635))[6];
//not do dummy comment
void* kont122327 = (decode_clo(env122635))[5];
//not do dummy comment
void* n = (decode_clo(env122635))[4];
//not do dummy comment
void* _u45 = (decode_clo(env122635))[3];
//not do dummy comment
void* lst = (decode_clo(env122635))[2];
//not do dummy comment
void* drop = (decode_clo(env122635))[1];

//if-clause
bool if_guard123309 = is_true(a122226122476);
if(if_guard123309)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122327);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122327))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo123311 = alloc_clo(lam122632_fptr, 4);

//setting env list
clo123311[1] = _u45;
clo123311[2] = n;
clo123311[3] = drop;
clo123311[4] = kont122327;
void* f122329122477 = encode_clo(clo123311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122329122477;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122634 = encode_clo(alloc_clo(lam122634_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122637 = arg_buffer[1];
//reading env and args
void* kont122327 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar123312 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123312, "0", 10);
void* a122225122474 = encode_mpz(mpzvar123312);

//creating new closure instance
void** clo123314 = alloc_clo(lam122634_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo123314[1] = drop;
clo123314[2] = lst;
clo123314[3] = _u45;
clo123314[4] = n;
clo123314[5] = kont122327;
clo123314[6] = cdr;
void* f122330122475 = encode_clo(clo123314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f122330122475;
arg_buffer[3] = n;
arg_buffer[4] = a122225122474;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam122638_fptr() // lam122638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122639 = arg_buffer[1];
//reading env and args
void* a122233122489 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122231122485 = (decode_clo(env122639))[3];
//not do dummy comment
void* kont122331 = (decode_clo(env122639))[2];
//not do dummy comment
void* proc = (decode_clo(env122639))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont122331;
arg_buffer[3] = a122231122485;
arg_buffer[4] = a122233122489;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122638 = encode_clo(alloc_clo(lam122638_fptr, 0));

void* lam122640_fptr() // lam122640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122641 = arg_buffer[1];
//reading env and args
void* a122232122487 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122231122485 = (decode_clo(env122641))[5];
//not do dummy comment
void* foldr = (decode_clo(env122641))[4];
//not do dummy comment
void* kont122331 = (decode_clo(env122641))[3];
//not do dummy comment
void* proc = (decode_clo(env122641))[2];
//not do dummy comment
void* acc = (decode_clo(env122641))[1];

//creating new closure instance
void** clo123316 = alloc_clo(lam122638_fptr, 3);

//setting env list
clo123316[1] = proc;
clo123316[2] = kont122331;
clo123316[3] = a122231122485;
void* f122332122488 = encode_clo(clo123316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f122332122488;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a122232122487;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122640 = encode_clo(alloc_clo(lam122640_fptr, 0));

void* lam122642_fptr() // lam122642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122643 = arg_buffer[1];
//reading env and args
void* a122231122485 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122643))[6];
//not do dummy comment
void* kont122331 = (decode_clo(env122643))[5];
//not do dummy comment
void* foldr = (decode_clo(env122643))[4];
//not do dummy comment
void* lst = (decode_clo(env122643))[3];
//not do dummy comment
void* proc = (decode_clo(env122643))[2];
//not do dummy comment
void* acc = (decode_clo(env122643))[1];

//creating new closure instance
void** clo123318 = alloc_clo(lam122640_fptr, 5);

//setting env list
clo123318[1] = acc;
clo123318[2] = proc;
clo123318[3] = kont122331;
clo123318[4] = foldr;
clo123318[5] = a122231122485;
void* f122333122486 = encode_clo(clo123318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122333122486;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122642 = encode_clo(alloc_clo(lam122642_fptr, 0));

void* lam122644_fptr() // lam122644 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122645 = arg_buffer[1];
//reading env and args
void* a122230122483 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122645))[7];
//not do dummy comment
void* kont122331 = (decode_clo(env122645))[6];
//not do dummy comment
void* car = (decode_clo(env122645))[5];
//not do dummy comment
void* foldr = (decode_clo(env122645))[4];
//not do dummy comment
void* lst = (decode_clo(env122645))[3];
//not do dummy comment
void* proc = (decode_clo(env122645))[2];
//not do dummy comment
void* acc = (decode_clo(env122645))[1];

//if-clause
bool if_guard123319 = is_true(a122230122483);
if(if_guard123319)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122331);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122331))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo123321 = alloc_clo(lam122642_fptr, 6);

//setting env list
clo123321[1] = acc;
clo123321[2] = proc;
clo123321[3] = lst;
clo123321[4] = foldr;
clo123321[5] = kont122331;
clo123321[6] = cdr;
void* f122334122484 = encode_clo(clo123321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122334122484;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122644 = encode_clo(alloc_clo(lam122644_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122646 = arg_buffer[1];
//reading env and args
void* kont122331 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo123323 = alloc_clo(lam122644_fptr, 7);

//setting env list
clo123323[1] = acc;
clo123323[2] = proc;
clo123323[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo123323[4] = foldr;
clo123323[5] = car;
clo123323[6] = kont122331;
clo123323[7] = cdr;
void* f122335122482 = encode_clo(clo123323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122335122482;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam122647_fptr() // lam122647 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122648 = arg_buffer[1];
//reading env and args
void* a122237122497 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a122235122493 = (decode_clo(env122648))[3];
//not do dummy comment
void* kont122336 = (decode_clo(env122648))[2];
//not do dummy comment
void* cons = (decode_clo(env122648))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont122336;
arg_buffer[3] = a122235122493;
arg_buffer[4] = a122237122497;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122647 = encode_clo(alloc_clo(lam122647_fptr, 0));

void* lam122649_fptr() // lam122649 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122650 = arg_buffer[1];
//reading env and args
void* a122236122495 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122336 = (decode_clo(env122650))[5];
//not do dummy comment
void* lst2 = (decode_clo(env122650))[4];
//not do dummy comment
void* cons = (decode_clo(env122650))[3];
//not do dummy comment
void* append = (decode_clo(env122650))[2];
//not do dummy comment
void* a122235122493 = (decode_clo(env122650))[1];

//creating new closure instance
void** clo123325 = alloc_clo(lam122647_fptr, 3);

//setting env list
clo123325[1] = cons;
clo123325[2] = kont122336;
clo123325[3] = a122235122493;
void* f122337122496 = encode_clo(clo123325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f122337122496;
arg_buffer[3] = a122236122495;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122649 = encode_clo(alloc_clo(lam122649_fptr, 0));

void* lam122651_fptr() // lam122651 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122652 = arg_buffer[1];
//reading env and args
void* a122235122493 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122652))[6];
//not do dummy comment
void* append = (decode_clo(env122652))[5];
//not do dummy comment
void* kont122336 = (decode_clo(env122652))[4];
//not do dummy comment
void* lst2 = (decode_clo(env122652))[3];
//not do dummy comment
void* lst1 = (decode_clo(env122652))[2];
//not do dummy comment
void* cons = (decode_clo(env122652))[1];

//creating new closure instance
void** clo123327 = alloc_clo(lam122649_fptr, 5);

//setting env list
clo123327[1] = a122235122493;
clo123327[2] = append;
clo123327[3] = cons;
clo123327[4] = lst2;
clo123327[5] = kont122336;
void* f122338122494 = encode_clo(clo123327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f122338122494;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122651 = encode_clo(alloc_clo(lam122651_fptr, 0));

void* lam122653_fptr() // lam122653 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122654 = arg_buffer[1];
//reading env and args
void* a122234122491 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env122654))[7];
//not do dummy comment
void* append = (decode_clo(env122654))[6];
//not do dummy comment
void* kont122336 = (decode_clo(env122654))[5];
//not do dummy comment
void* lst2 = (decode_clo(env122654))[4];
//not do dummy comment
void* cons = (decode_clo(env122654))[3];
//not do dummy comment
void* lst1 = (decode_clo(env122654))[2];
//not do dummy comment
void* car = (decode_clo(env122654))[1];

//if-clause
bool if_guard123328 = is_true(a122234122491);
if(if_guard123328)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122336);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122336))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo123330 = alloc_clo(lam122651_fptr, 6);

//setting env list
clo123330[1] = cons;
clo123330[2] = lst1;
clo123330[3] = lst2;
clo123330[4] = kont122336;
clo123330[5] = append;
clo123330[6] = cdr;
void* f122339122492 = encode_clo(clo123330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f122339122492;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam122653 = encode_clo(alloc_clo(lam122653_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122655 = arg_buffer[1];
//reading env and args
void* kont122336 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo123332 = alloc_clo(lam122653_fptr, 7);

//setting env list
clo123332[1] = car;
clo123332[2] = lst1;
clo123332[3] = cons;
clo123332[4] = lst2;
clo123332[5] = kont122336;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo123332[6] = append;
clo123332[7] = cdr;
void* f122340122490 = encode_clo(clo123332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f122340122490;
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
void* _122656 = arg_buffer[1];
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

void* kont122341122498 = prim_car(lst);
void* lst122499 = prim_cdr(lst);
void* x122238122500 = apply_prim_hash(lst122499);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122341122498);
arg_buffer[2] = x122238122500;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122341122498))[0]);
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
void* _122657 = arg_buffer[1];
//reading env and args
void* kont122343 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x122239122501 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122343);
arg_buffer[2] = x122239122501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122343))[0]);
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
void* _122658 = arg_buffer[1];
//reading env and args
void* kont122344 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x122240122502 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122344);
arg_buffer[2] = x122240122502;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122344))[0]);
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
void* _122659 = arg_buffer[1];
//reading env and args
void* kont122345 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x122241122503 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122345);
arg_buffer[2] = x122241122503;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122345))[0]);
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
void* _122660 = arg_buffer[1];
//reading env and args
void* kont122346 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x122242122504 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122346);
arg_buffer[2] = x122242122504;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122346))[0]);
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
void* _122667 = arg_buffer[1];
//reading env and args
void* kont122347 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar123333 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123333, "1", 10);
void* a122243122505 = encode_mpz(mpzvar123333);
mpz_t* mpzvar123334 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123334, "2", 10);
void* a122244122506 = encode_mpz(mpzvar123334);
mpz_t* mpzvar123335 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123335, "3", 10);
void* a122245122507 = encode_mpz(mpzvar123335);
mpz_t* mpzvar123336 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123336, "4", 10);
void* a122246122508 = encode_mpz(mpzvar123336);
mpz_t* mpzvar123337 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123337, "5", 10);
void* a122247122509 = encode_mpz(mpzvar123337);
mpz_t* mpzvar123338 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar123338, "100", 10);
void* a122248122510 = encode_mpz(mpzvar123338);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60_u61);
arg_buffer[2] = kont122347;
arg_buffer[3] = a122243122505;
arg_buffer[4] = a122244122506;
arg_buffer[5] = a122245122507;
arg_buffer[6] = a122246122508;
arg_buffer[7] = a122247122509;
arg_buffer[8] = a122248122510;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam122668_fptr() // lam122668 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env122669 = arg_buffer[1];
//reading env and args
void* x122249122512 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont122348 = (decode_clo(env122669))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont122348);
arg_buffer[2] = x122249122512;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont122348))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam122668 = encode_clo(alloc_clo(lam122668_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _122670 = arg_buffer[1];
//reading env and args
void* kont122348 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo123340 = alloc_clo(lam122668_fptr, 1);

//setting env list
clo123340[1] = kont122348;
void* f122349122511 = encode_clo(clo123340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f122349122511;
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

