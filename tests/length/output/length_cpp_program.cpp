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
void* _73502 = arg_buffer[1];
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

void* kont7323873339 = prim_car(lst);
void* lst73340 = prim_cdr(lst);
void* x7314973341 = apply_prim__u43(lst73340);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7323873339);
arg_buffer[2] = x7314973341;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7323873339))[0]);
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
void* _73503 = arg_buffer[1];
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

void* kont7324073342 = prim_car(lst);
void* lst73343 = prim_cdr(lst);
void* x7315073344 = apply_prim__u45(lst73343);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7324073342);
arg_buffer[2] = x7315073344;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7324073342))[0]);
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
void* _73504 = arg_buffer[1];
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

void* kont7324273345 = prim_car(lst);
void* lst73346 = prim_cdr(lst);
void* x7315173347 = apply_prim__u42(lst73346);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7324273345);
arg_buffer[2] = x7315173347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7324273345))[0]);
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
void* _73505 = arg_buffer[1];
//reading env and args
void* kont73244 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7315273348 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73244);
arg_buffer[2] = x7315273348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73244))[0]);
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
void* _73506 = arg_buffer[1];
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

void* kont7324573349 = prim_car(lst);
void* lst73350 = prim_cdr(lst);
void* x7315373351 = apply_prim__u47(lst73350);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7324573349);
arg_buffer[2] = x7315373351;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7324573349))[0]);
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
void* _73507 = arg_buffer[1];
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

void* kont7324773352 = prim_car(lst);
void* lst73353 = prim_cdr(lst);
void* x7315473354 = apply_prim__u61(lst73353);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7324773352);
arg_buffer[2] = x7315473354;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7324773352))[0]);
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
void* _73508 = arg_buffer[1];
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

void* kont7324973355 = prim_car(lst);
void* lst73356 = prim_cdr(lst);
void* x7315573357 = apply_prim__u62(lst73356);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7324973355);
arg_buffer[2] = x7315573357;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7324973355))[0]);
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
void* _73509 = arg_buffer[1];
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

void* kont7325173358 = prim_car(lst);
void* lst73359 = prim_cdr(lst);
void* x7315673360 = apply_prim__u60(lst73359);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7325173358);
arg_buffer[2] = x7315673360;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7325173358))[0]);
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
void* _73510 = arg_buffer[1];
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

void* kont7325373361 = prim_car(lst);
void* lst73362 = prim_cdr(lst);
void* x7315773363 = apply_prim__u60_u61(lst73362);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7325373361);
arg_buffer[2] = x7315773363;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7325373361))[0]);
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
void* _73511 = arg_buffer[1];
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

void* kont7325573364 = prim_car(lst);
void* lst73365 = prim_cdr(lst);
void* x7315873366 = apply_prim__u62_u61(lst73365);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7325573364);
arg_buffer[2] = x7315873366;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7325573364))[0]);
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
void* _73512 = arg_buffer[1];
//reading env and args
void* kont73257 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x7315973367 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73257);
arg_buffer[2] = x7315973367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73257))[0]);
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
void* _73513 = arg_buffer[1];
//reading env and args
void* kont73258 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7316073368 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73258);
arg_buffer[2] = x7316073368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73258))[0]);
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
void* _73514 = arg_buffer[1];
//reading env and args
void* kont73259 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x7316173369 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73259);
arg_buffer[2] = x7316173369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73259))[0]);
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
void* _73515 = arg_buffer[1];
//reading env and args
void* kont73260 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x7316273370 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73260);
arg_buffer[2] = x7316273370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73260))[0]);
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
void* _73516 = arg_buffer[1];
//reading env and args
void* kont73261 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7316373371 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73261);
arg_buffer[2] = x7316373371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73261))[0]);
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
void* _73517 = arg_buffer[1];
//reading env and args
void* kont73262 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x7316473372 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73262);
arg_buffer[2] = x7316473372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73262))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam73518_fptr() // lam73518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73519 = arg_buffer[1];
//reading env and args
void* a7316773376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env73519))[3];
//not do dummy comment
void* a7316573373 = (decode_clo(env73519))[2];
//not do dummy comment
void* kont73263 = (decode_clo(env73519))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont73263;
arg_buffer[3] = a7316573373;
arg_buffer[4] = a7316773376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73518 = encode_clo(alloc_clo(lam73518_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73522 = arg_buffer[1];
//reading env and args
void* kont73263 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar78420 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78420, "0", 10);
void* a7316573373 = encode_mpz(mpzvar78420);
mpz_t* mpzvar78421 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78421, "2", 10);
void* a7316673374 = encode_mpz(mpzvar78421);

//creating new closure instance
void** clo78423 = alloc_clo(lam73518_fptr, 3);

//setting env list
clo78423[1] = kont73263;
clo78423[2] = a7316573373;
clo78423[3] = equal_u63;
void* f7326473375 = encode_clo(clo78423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7326473375;
arg_buffer[3] = x;
arg_buffer[4] = a7316673374;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam73523_fptr() // lam73523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73524 = arg_buffer[1];
//reading env and args
void* a7317073380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env73524))[3];
//not do dummy comment
void* kont73265 = (decode_clo(env73524))[2];
//not do dummy comment
void* a7316873377 = (decode_clo(env73524))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont73265;
arg_buffer[3] = a7316873377;
arg_buffer[4] = a7317073380;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73523 = encode_clo(alloc_clo(lam73523_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73527 = arg_buffer[1];
//reading env and args
void* kont73265 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar78424 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78424, "1", 10);
void* a7316873377 = encode_mpz(mpzvar78424);
mpz_t* mpzvar78425 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78425, "2", 10);
void* a7316973378 = encode_mpz(mpzvar78425);

//creating new closure instance
void** clo78427 = alloc_clo(lam73523_fptr, 3);

//setting env list
clo78427[1] = a7316873377;
clo78427[2] = kont73265;
clo78427[3] = equal_u63;
void* f7326673379 = encode_clo(clo78427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f7326673379;
arg_buffer[3] = x;
arg_buffer[4] = a7316973378;
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
void* _73528 = arg_buffer[1];
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

void* kont7326773381 = prim_car(x);
void* x73382 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7326773381);
arg_buffer[2] = x73382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7326773381))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam73531_fptr() // lam73531 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73532 = arg_buffer[1];
//reading env and args
void* a7317673392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73269 = (decode_clo(env73532))[3];
//not do dummy comment
void* x = (decode_clo(env73532))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env73532))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont73269;
arg_buffer[3] = x;
arg_buffer[4] = a7317673392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73531 = encode_clo(alloc_clo(lam73531_fptr, 0));

void* lam73533_fptr() // lam73533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73534 = arg_buffer[1];
//reading env and args
void* a7317473389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73534))[5];
//not do dummy comment
void* kont73269 = (decode_clo(env73534))[4];
//not do dummy comment
void* lst = (decode_clo(env73534))[3];
//not do dummy comment
void* x = (decode_clo(env73534))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env73534))[1];

//if-clause
bool if_guard78428 = is_true(a7317473389);
if(if_guard78428)
{
void* x7317573390 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73269);
arg_buffer[2] = x7317573390;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73269))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo78430 = alloc_clo(lam73531_fptr, 3);

//setting env list
clo78430[1] = member_u63;
clo78430[2] = x;
clo78430[3] = kont73269;
void* f7327073391 = encode_clo(clo78430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7327073391;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73533 = encode_clo(alloc_clo(lam73533_fptr, 0));

void* lam73535_fptr() // lam73535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73536 = arg_buffer[1];
//reading env and args
void* a7317373387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73536))[6];
//not do dummy comment
void* kont73269 = (decode_clo(env73536))[5];
//not do dummy comment
void* lst = (decode_clo(env73536))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env73536))[3];
//not do dummy comment
void* x = (decode_clo(env73536))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env73536))[1];

//creating new closure instance
void** clo78432 = alloc_clo(lam73533_fptr, 5);

//setting env list
clo78432[1] = member_u63;
clo78432[2] = x;
clo78432[3] = lst;
clo78432[4] = kont73269;
clo78432[5] = cdr;
void* f7327173388 = encode_clo(clo78432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f7327173388;
arg_buffer[3] = a7317373387;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73535 = encode_clo(alloc_clo(lam73535_fptr, 0));

void* lam73537_fptr() // lam73537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73538 = arg_buffer[1];
//reading env and args
void* a7317173384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73538))[7];
//not do dummy comment
void* kont73269 = (decode_clo(env73538))[6];
//not do dummy comment
void* lst = (decode_clo(env73538))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env73538))[4];
//not do dummy comment
void* x = (decode_clo(env73538))[3];
//not do dummy comment
void* car = (decode_clo(env73538))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env73538))[1];

//if-clause
bool if_guard78433 = is_true(a7317173384);
if(if_guard78433)
{
void* x7317273385 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73269);
arg_buffer[2] = x7317273385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73269))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo78435 = alloc_clo(lam73535_fptr, 6);

//setting env list
clo78435[1] = member_u63;
clo78435[2] = x;
clo78435[3] = equal_u63;
clo78435[4] = lst;
clo78435[5] = kont73269;
clo78435[6] = cdr;
void* f7327273386 = encode_clo(clo78435);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7327273386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73537 = encode_clo(alloc_clo(lam73537_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73539 = arg_buffer[1];
//reading env and args
void* kont73269 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo78437 = alloc_clo(lam73537_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo78437[1] = member_u63;
clo78437[2] = car;
clo78437[3] = x;
clo78437[4] = equal_u63;
clo78437[5] = lst;
clo78437[6] = kont73269;
clo78437[7] = cdr;
void* f7327373383 = encode_clo(clo78437);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7327373383;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam73540_fptr() // lam73540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73541 = arg_buffer[1];
//reading env and args
void* a7318073400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7317973398 = (decode_clo(env73541))[4];
//not do dummy comment
void* kont73274 = (decode_clo(env73541))[3];
//not do dummy comment
void* fun = (decode_clo(env73541))[2];
//not do dummy comment
void* foldl = (decode_clo(env73541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont73274;
arg_buffer[3] = fun;
arg_buffer[4] = a7317973398;
arg_buffer[5] = a7318073400;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73540 = encode_clo(alloc_clo(lam73540_fptr, 0));

void* lam73542_fptr() // lam73542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73543 = arg_buffer[1];
//reading env and args
void* a7317973398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73543))[5];
//not do dummy comment
void* lst = (decode_clo(env73543))[4];
//not do dummy comment
void* kont73274 = (decode_clo(env73543))[3];
//not do dummy comment
void* fun = (decode_clo(env73543))[2];
//not do dummy comment
void* foldl = (decode_clo(env73543))[1];

//creating new closure instance
void** clo78439 = alloc_clo(lam73540_fptr, 4);

//setting env list
clo78439[1] = foldl;
clo78439[2] = fun;
clo78439[3] = kont73274;
clo78439[4] = a7317973398;
void* f7327573399 = encode_clo(clo78439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7327573399;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73542 = encode_clo(alloc_clo(lam73542_fptr, 0));

void* lam73544_fptr() // lam73544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73545 = arg_buffer[1];
//reading env and args
void* a7317873396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73545))[6];
//not do dummy comment
void* lst = (decode_clo(env73545))[5];
//not do dummy comment
void* kont73274 = (decode_clo(env73545))[4];
//not do dummy comment
void* fun = (decode_clo(env73545))[3];
//not do dummy comment
void* acc = (decode_clo(env73545))[2];
//not do dummy comment
void* foldl = (decode_clo(env73545))[1];

//creating new closure instance
void** clo78441 = alloc_clo(lam73542_fptr, 5);

//setting env list
clo78441[1] = foldl;
clo78441[2] = fun;
clo78441[3] = kont73274;
clo78441[4] = lst;
clo78441[5] = cdr;
void* f7327673397 = encode_clo(clo78441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f7327673397;
arg_buffer[3] = a7317873396;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73544 = encode_clo(alloc_clo(lam73544_fptr, 0));

void* lam73546_fptr() // lam73546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73547 = arg_buffer[1];
//reading env and args
void* a7317773394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73547))[7];
//not do dummy comment
void* lst = (decode_clo(env73547))[6];
//not do dummy comment
void* kont73274 = (decode_clo(env73547))[5];
//not do dummy comment
void* fun = (decode_clo(env73547))[4];
//not do dummy comment
void* acc = (decode_clo(env73547))[3];
//not do dummy comment
void* car = (decode_clo(env73547))[2];
//not do dummy comment
void* foldl = (decode_clo(env73547))[1];

//if-clause
bool if_guard78442 = is_true(a7317773394);
if(if_guard78442)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73274);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73274))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo78444 = alloc_clo(lam73544_fptr, 6);

//setting env list
clo78444[1] = foldl;
clo78444[2] = acc;
clo78444[3] = fun;
clo78444[4] = kont73274;
clo78444[5] = lst;
clo78444[6] = cdr;
void* f7327773395 = encode_clo(clo78444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7327773395;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73546 = encode_clo(alloc_clo(lam73546_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73548 = arg_buffer[1];
//reading env and args
void* kont73274 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo78446 = alloc_clo(lam73546_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo78446[1] = foldl;
clo78446[2] = car;
clo78446[3] = acc;
clo78446[4] = fun;
clo78446[5] = kont73274;
clo78446[6] = lst;
clo78446[7] = cdr;
void* f7327873393 = encode_clo(clo78446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7327873393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam73549_fptr() // lam73549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73550 = arg_buffer[1];
//reading env and args
void* a7318473408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env73550))[3];
//not do dummy comment
void* a7318273404 = (decode_clo(env73550))[2];
//not do dummy comment
void* kont73279 = (decode_clo(env73550))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont73279;
arg_buffer[3] = a7318273404;
arg_buffer[4] = a7318473408;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73549 = encode_clo(alloc_clo(lam73549_fptr, 0));

void* lam73551_fptr() // lam73551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73552 = arg_buffer[1];
//reading env and args
void* a7318373406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env73552))[5];
//not do dummy comment
void* a7318273404 = (decode_clo(env73552))[4];
//not do dummy comment
void* kont73279 = (decode_clo(env73552))[3];
//not do dummy comment
void* lst2 = (decode_clo(env73552))[2];
//not do dummy comment
void* cons = (decode_clo(env73552))[1];

//creating new closure instance
void** clo78448 = alloc_clo(lam73549_fptr, 3);

//setting env list
clo78448[1] = kont73279;
clo78448[2] = a7318273404;
clo78448[3] = reverse_u45helper;
void* f7328073407 = encode_clo(clo78448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7328073407;
arg_buffer[3] = a7318373406;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73551 = encode_clo(alloc_clo(lam73551_fptr, 0));

void* lam73553_fptr() // lam73553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73554 = arg_buffer[1];
//reading env and args
void* a7318273404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env73554))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env73554))[5];
//not do dummy comment
void* kont73279 = (decode_clo(env73554))[4];
//not do dummy comment
void* lst2 = (decode_clo(env73554))[3];
//not do dummy comment
void* car = (decode_clo(env73554))[2];
//not do dummy comment
void* cons = (decode_clo(env73554))[1];

//creating new closure instance
void** clo78450 = alloc_clo(lam73551_fptr, 5);

//setting env list
clo78450[1] = cons;
clo78450[2] = lst2;
clo78450[3] = kont73279;
clo78450[4] = a7318273404;
clo78450[5] = reverse_u45helper;
void* f7328173405 = encode_clo(clo78450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7328173405;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73553 = encode_clo(alloc_clo(lam73553_fptr, 0));

void* lam73555_fptr() // lam73555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73556 = arg_buffer[1];
//reading env and args
void* a7318173402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73556))[7];
//not do dummy comment
void* lst = (decode_clo(env73556))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env73556))[5];
//not do dummy comment
void* kont73279 = (decode_clo(env73556))[4];
//not do dummy comment
void* lst2 = (decode_clo(env73556))[3];
//not do dummy comment
void* car = (decode_clo(env73556))[2];
//not do dummy comment
void* cons = (decode_clo(env73556))[1];

//if-clause
bool if_guard78451 = is_true(a7318173402);
if(if_guard78451)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73279);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73279))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo78453 = alloc_clo(lam73553_fptr, 6);

//setting env list
clo78453[1] = cons;
clo78453[2] = car;
clo78453[3] = lst2;
clo78453[4] = kont73279;
clo78453[5] = reverse_u45helper;
clo78453[6] = lst;
void* f7328273403 = encode_clo(clo78453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7328273403;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73555 = encode_clo(alloc_clo(lam73555_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73557 = arg_buffer[1];
//reading env and args
void* kont73279 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo78455 = alloc_clo(lam73555_fptr, 7);

//setting env list
clo78455[1] = cons;
clo78455[2] = car;
clo78455[3] = lst2;
clo78455[4] = kont73279;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo78455[5] = reverse_u45helper;
clo78455[6] = lst;
clo78455[7] = cdr;
void* f7328373401 = encode_clo(clo78455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7328373401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam73558_fptr() // lam73558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73559 = arg_buffer[1];
//reading env and args
void* a7318573410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73284 = (decode_clo(env73559))[3];
//not do dummy comment
void* lst = (decode_clo(env73559))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env73559))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont73284;
arg_buffer[3] = lst;
arg_buffer[4] = a7318573410;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73558 = encode_clo(alloc_clo(lam73558_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73560 = arg_buffer[1];
//reading env and args
void* kont73284 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo78457 = alloc_clo(lam73558_fptr, 3);

//setting env list
clo78457[1] = reverse_u45helper;
clo78457[2] = lst;
clo78457[3] = kont73284;
void* f7328573409 = encode_clo(clo78457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7328573409;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam73561_fptr() // lam73561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73562 = arg_buffer[1];
//reading env and args
void* x7318873415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73286 = (decode_clo(env73562))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73286);
arg_buffer[2] = x7318873415;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73286))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73561 = encode_clo(alloc_clo(lam73561_fptr, 0));

void* lam73563_fptr() // lam73563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73564 = arg_buffer[1];
//reading env and args
void* a7319373424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73286 = (decode_clo(env73564))[4];
//not do dummy comment
void* a7318973417 = (decode_clo(env73564))[3];
//not do dummy comment
void* a7319173420 = (decode_clo(env73564))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env73564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont73286;
arg_buffer[3] = a7318973417;
arg_buffer[4] = a7319173420;
arg_buffer[5] = a7319373424;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73563 = encode_clo(alloc_clo(lam73563_fptr, 0));

void* lam73565_fptr() // lam73565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73566 = arg_buffer[1];
//reading env and args
void* a7319273422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73286 = (decode_clo(env73566))[6];
//not do dummy comment
void* a7318973417 = (decode_clo(env73566))[5];
//not do dummy comment
void* a7319173420 = (decode_clo(env73566))[4];
//not do dummy comment
void* cons = (decode_clo(env73566))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env73566))[2];
//not do dummy comment
void* lst2 = (decode_clo(env73566))[1];

//creating new closure instance
void** clo78459 = alloc_clo(lam73563_fptr, 4);

//setting env list
clo78459[1] = take_u45helper;
clo78459[2] = a7319173420;
clo78459[3] = a7318973417;
clo78459[4] = kont73286;
void* f7328873423 = encode_clo(clo78459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f7328873423;
arg_buffer[3] = a7319273422;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73565 = encode_clo(alloc_clo(lam73565_fptr, 0));

void* lam73567_fptr() // lam73567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73568 = arg_buffer[1];
//reading env and args
void* a7319173420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73286 = (decode_clo(env73568))[7];
//not do dummy comment
void* lst = (decode_clo(env73568))[6];
//not do dummy comment
void* a7318973417 = (decode_clo(env73568))[5];
//not do dummy comment
void* car = (decode_clo(env73568))[4];
//not do dummy comment
void* cons = (decode_clo(env73568))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env73568))[2];
//not do dummy comment
void* lst2 = (decode_clo(env73568))[1];

//creating new closure instance
void** clo78461 = alloc_clo(lam73565_fptr, 6);

//setting env list
clo78461[1] = lst2;
clo78461[2] = take_u45helper;
clo78461[3] = cons;
clo78461[4] = a7319173420;
clo78461[5] = a7318973417;
clo78461[6] = kont73286;
void* f7328973421 = encode_clo(clo78461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7328973421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73567 = encode_clo(alloc_clo(lam73567_fptr, 0));

void* lam73570_fptr() // lam73570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73571 = arg_buffer[1];
//reading env and args
void* a7318973417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73286 = (decode_clo(env73571))[8];
//not do dummy comment
void* lst = (decode_clo(env73571))[7];
//not do dummy comment
void* cons = (decode_clo(env73571))[6];
//not do dummy comment
void* _u45 = (decode_clo(env73571))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env73571))[4];
//not do dummy comment
void* lst2 = (decode_clo(env73571))[3];
//not do dummy comment
void* n = (decode_clo(env73571))[2];
//not do dummy comment
void* car = (decode_clo(env73571))[1];
mpz_t* mpzvar78462 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78462, "1", 10);
void* a7319073418 = encode_mpz(mpzvar78462);

//creating new closure instance
void** clo78464 = alloc_clo(lam73567_fptr, 7);

//setting env list
clo78464[1] = lst2;
clo78464[2] = take_u45helper;
clo78464[3] = cons;
clo78464[4] = car;
clo78464[5] = a7318973417;
clo78464[6] = lst;
clo78464[7] = kont73286;
void* f7329073419 = encode_clo(clo78464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7329073419;
arg_buffer[3] = n;
arg_buffer[4] = a7319073418;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73570 = encode_clo(alloc_clo(lam73570_fptr, 0));

void* lam73572_fptr() // lam73572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73573 = arg_buffer[1];
//reading env and args
void* a7318773413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73573))[10];
//not do dummy comment
void* kont73286 = (decode_clo(env73573))[9];
//not do dummy comment
void* lst = (decode_clo(env73573))[8];
//not do dummy comment
void* reverse = (decode_clo(env73573))[7];
//not do dummy comment
void* cons = (decode_clo(env73573))[6];
//not do dummy comment
void* _u45 = (decode_clo(env73573))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env73573))[4];
//not do dummy comment
void* lst2 = (decode_clo(env73573))[3];
//not do dummy comment
void* n = (decode_clo(env73573))[2];
//not do dummy comment
void* car = (decode_clo(env73573))[1];

//if-clause
bool if_guard78465 = is_true(a7318773413);
if(if_guard78465)
{

//creating new closure instance
void** clo78467 = alloc_clo(lam73561_fptr, 1);

//setting env list
clo78467[1] = kont73286;
void* f7328773414 = encode_clo(clo78467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f7328773414;
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
void** clo78469 = alloc_clo(lam73570_fptr, 8);

//setting env list
clo78469[1] = car;
clo78469[2] = n;
clo78469[3] = lst2;
clo78469[4] = take_u45helper;
clo78469[5] = _u45;
clo78469[6] = cons;
clo78469[7] = lst;
clo78469[8] = kont73286;
void* f7329173416 = encode_clo(clo78469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7329173416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73572 = encode_clo(alloc_clo(lam73572_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73575 = arg_buffer[1];
//reading env and args
void* kont73286 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar78470 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78470, "0", 10);
void* a7318673411 = encode_mpz(mpzvar78470);

//creating new closure instance
void** clo78472 = alloc_clo(lam73572_fptr, 10);

//setting env list
clo78472[1] = car;
clo78472[2] = n;
clo78472[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo78472[4] = take_u45helper;
clo78472[5] = _u45;
clo78472[6] = cons;
clo78472[7] = reverse;
clo78472[8] = lst;
clo78472[9] = kont73286;
clo78472[10] = cdr;
void* f7329273412 = encode_clo(clo78472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7329273412;
arg_buffer[3] = n;
arg_buffer[4] = a7318673411;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam73576_fptr() // lam73576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73577 = arg_buffer[1];
//reading env and args
void* a7319473426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env73577))[4];
//not do dummy comment
void* kont73293 = (decode_clo(env73577))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env73577))[2];
//not do dummy comment
void* n = (decode_clo(env73577))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont73293;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a7319473426;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73576 = encode_clo(alloc_clo(lam73576_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73578 = arg_buffer[1];
//reading env and args
void* kont73293 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo78474 = alloc_clo(lam73576_fptr, 4);

//setting env list
clo78474[1] = n;
clo78474[2] = take_u45helper;
clo78474[3] = kont73293;
clo78474[4] = lst;
void* f7329473425 = encode_clo(clo78474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7329473425;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam73580_fptr() // lam73580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73581 = arg_buffer[1];
//reading env and args
void* a7319973434 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7319773430 = (decode_clo(env73581))[3];
//not do dummy comment
void* _u43 = (decode_clo(env73581))[2];
//not do dummy comment
void* kont73295 = (decode_clo(env73581))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont73295;
arg_buffer[3] = a7319773430;
arg_buffer[4] = a7319973434;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73580 = encode_clo(alloc_clo(lam73580_fptr, 0));

void* lam73582_fptr() // lam73582 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73583 = arg_buffer[1];
//reading env and args
void* a7319873432 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7319773430 = (decode_clo(env73583))[4];
//not do dummy comment
void* length = (decode_clo(env73583))[3];
//not do dummy comment
void* _u43 = (decode_clo(env73583))[2];
//not do dummy comment
void* kont73295 = (decode_clo(env73583))[1];

//creating new closure instance
void** clo78476 = alloc_clo(lam73580_fptr, 3);

//setting env list
clo78476[1] = kont73295;
clo78476[2] = _u43;
clo78476[3] = a7319773430;
void* f7329673433 = encode_clo(clo78476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f7329673433;
arg_buffer[3] = a7319873432;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73582 = encode_clo(alloc_clo(lam73582_fptr, 0));

void* lam73585_fptr() // lam73585 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73586 = arg_buffer[1];
//reading env and args
void* a7319573428 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73586))[5];
//not do dummy comment
void* lst = (decode_clo(env73586))[4];
//not do dummy comment
void* length = (decode_clo(env73586))[3];
//not do dummy comment
void* _u43 = (decode_clo(env73586))[2];
//not do dummy comment
void* kont73295 = (decode_clo(env73586))[1];

//if-clause
bool if_guard78477 = is_true(a7319573428);
if(if_guard78477)
{
mpz_t* mpzvar78478 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78478, "0", 10);
void* x7319673429 = encode_mpz(mpzvar78478);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73295);
arg_buffer[2] = x7319673429;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73295))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar78479 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78479, "1", 10);
void* a7319773430 = encode_mpz(mpzvar78479);

//creating new closure instance
void** clo78481 = alloc_clo(lam73582_fptr, 4);

//setting env list
clo78481[1] = kont73295;
clo78481[2] = _u43;
clo78481[3] = length;
clo78481[4] = a7319773430;
void* f7329773431 = encode_clo(clo78481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7329773431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73585 = encode_clo(alloc_clo(lam73585_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73587 = arg_buffer[1];
//reading env and args
void* kont73295 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo78483 = alloc_clo(lam73585_fptr, 5);

//setting env list
clo78483[1] = kont73295;
clo78483[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo78483[3] = length;
clo78483[4] = lst;
clo78483[5] = cdr;
void* f7329873427 = encode_clo(clo78483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7329873427;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam73588_fptr() // lam73588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73589 = arg_buffer[1];
//reading env and args
void* x7320173438 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73299 = (decode_clo(env73589))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73299);
arg_buffer[2] = x7320173438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73299))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73588 = encode_clo(alloc_clo(lam73588_fptr, 0));

void* lam73590_fptr() // lam73590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73591 = arg_buffer[1];
//reading env and args
void* a7320573446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73299 = (decode_clo(env73591))[3];
//not do dummy comment
void* cons = (decode_clo(env73591))[2];
//not do dummy comment
void* a7320373442 = (decode_clo(env73591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont73299;
arg_buffer[3] = a7320373442;
arg_buffer[4] = a7320573446;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73590 = encode_clo(alloc_clo(lam73590_fptr, 0));

void* lam73592_fptr() // lam73592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73593 = arg_buffer[1];
//reading env and args
void* a7320473444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env73593))[5];
//not do dummy comment
void* proc = (decode_clo(env73593))[4];
//not do dummy comment
void* kont73299 = (decode_clo(env73593))[3];
//not do dummy comment
void* cons = (decode_clo(env73593))[2];
//not do dummy comment
void* a7320373442 = (decode_clo(env73593))[1];

//creating new closure instance
void** clo78485 = alloc_clo(lam73590_fptr, 3);

//setting env list
clo78485[1] = a7320373442;
clo78485[2] = cons;
clo78485[3] = kont73299;
void* f7330173445 = encode_clo(clo78485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f7330173445;
arg_buffer[3] = proc;
arg_buffer[4] = a7320473444;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73592 = encode_clo(alloc_clo(lam73592_fptr, 0));

void* lam73594_fptr() // lam73594 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73595 = arg_buffer[1];
//reading env and args
void* a7320373442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73595))[6];
//not do dummy comment
void* lst = (decode_clo(env73595))[5];
//not do dummy comment
void* map = (decode_clo(env73595))[4];
//not do dummy comment
void* proc = (decode_clo(env73595))[3];
//not do dummy comment
void* cons = (decode_clo(env73595))[2];
//not do dummy comment
void* kont73299 = (decode_clo(env73595))[1];

//creating new closure instance
void** clo78487 = alloc_clo(lam73592_fptr, 5);

//setting env list
clo78487[1] = a7320373442;
clo78487[2] = cons;
clo78487[3] = kont73299;
clo78487[4] = proc;
clo78487[5] = map;
void* f7330273443 = encode_clo(clo78487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7330273443;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73594 = encode_clo(alloc_clo(lam73594_fptr, 0));

void* lam73596_fptr() // lam73596 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73597 = arg_buffer[1];
//reading env and args
void* a7320273440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73597))[6];
//not do dummy comment
void* lst = (decode_clo(env73597))[5];
//not do dummy comment
void* map = (decode_clo(env73597))[4];
//not do dummy comment
void* proc = (decode_clo(env73597))[3];
//not do dummy comment
void* cons = (decode_clo(env73597))[2];
//not do dummy comment
void* kont73299 = (decode_clo(env73597))[1];

//creating new closure instance
void** clo78489 = alloc_clo(lam73594_fptr, 6);

//setting env list
clo78489[1] = kont73299;
clo78489[2] = cons;
clo78489[3] = proc;
clo78489[4] = map;
clo78489[5] = lst;
clo78489[6] = cdr;
void* f7330373441 = encode_clo(clo78489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f7330373441;
arg_buffer[3] = a7320273440;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73596 = encode_clo(alloc_clo(lam73596_fptr, 0));

void* lam73598_fptr() // lam73598 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73599 = arg_buffer[1];
//reading env and args
void* a7320073436 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env73599))[8];
//not do dummy comment
void* map = (decode_clo(env73599))[7];
//not do dummy comment
void* proc = (decode_clo(env73599))[6];
//not do dummy comment
void* car = (decode_clo(env73599))[5];
//not do dummy comment
void* cons = (decode_clo(env73599))[4];
//not do dummy comment
void* kont73299 = (decode_clo(env73599))[3];
//not do dummy comment
void* list = (decode_clo(env73599))[2];
//not do dummy comment
void* cdr = (decode_clo(env73599))[1];

//if-clause
bool if_guard78490 = is_true(a7320073436);
if(if_guard78490)
{

//creating new closure instance
void** clo78492 = alloc_clo(lam73588_fptr, 1);

//setting env list
clo78492[1] = kont73299;
void* f7330073437 = encode_clo(clo78492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7330073437;
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
void** clo78494 = alloc_clo(lam73596_fptr, 6);

//setting env list
clo78494[1] = kont73299;
clo78494[2] = cons;
clo78494[3] = proc;
clo78494[4] = map;
clo78494[5] = lst;
clo78494[6] = cdr;
void* f7330473439 = encode_clo(clo78494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7330473439;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73598 = encode_clo(alloc_clo(lam73598_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73600 = arg_buffer[1];
//reading env and args
void* kont73299 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo78496 = alloc_clo(lam73598_fptr, 8);

//setting env list
clo78496[1] = cdr;
clo78496[2] = list;
clo78496[3] = kont73299;
clo78496[4] = cons;
clo78496[5] = car;
clo78496[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo78496[7] = map;
clo78496[8] = lst;
void* f7330573435 = encode_clo(clo78496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7330573435;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam73601_fptr() // lam73601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73602 = arg_buffer[1];
//reading env and args
void* x7320773450 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73306 = (decode_clo(env73602))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73306);
arg_buffer[2] = x7320773450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73306))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73601 = encode_clo(alloc_clo(lam73601_fptr, 0));

void* lam73603_fptr() // lam73603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73604 = arg_buffer[1];
//reading env and args
void* a7321273460 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73306 = (decode_clo(env73604))[3];
//not do dummy comment
void* a7321073456 = (decode_clo(env73604))[2];
//not do dummy comment
void* cons = (decode_clo(env73604))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont73306;
arg_buffer[3] = a7321073456;
arg_buffer[4] = a7321273460;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73603 = encode_clo(alloc_clo(lam73603_fptr, 0));

void* lam73605_fptr() // lam73605 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73606 = arg_buffer[1];
//reading env and args
void* a7321173458 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73306 = (decode_clo(env73606))[5];
//not do dummy comment
void* op = (decode_clo(env73606))[4];
//not do dummy comment
void* a7321073456 = (decode_clo(env73606))[3];
//not do dummy comment
void* filter = (decode_clo(env73606))[2];
//not do dummy comment
void* cons = (decode_clo(env73606))[1];

//creating new closure instance
void** clo78498 = alloc_clo(lam73603_fptr, 3);

//setting env list
clo78498[1] = cons;
clo78498[2] = a7321073456;
clo78498[3] = kont73306;
void* f7330873459 = encode_clo(clo78498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f7330873459;
arg_buffer[3] = op;
arg_buffer[4] = a7321173458;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73605 = encode_clo(alloc_clo(lam73605_fptr, 0));

void* lam73607_fptr() // lam73607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73608 = arg_buffer[1];
//reading env and args
void* a7321073456 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73608))[6];
//not do dummy comment
void* lst = (decode_clo(env73608))[5];
//not do dummy comment
void* kont73306 = (decode_clo(env73608))[4];
//not do dummy comment
void* op = (decode_clo(env73608))[3];
//not do dummy comment
void* filter = (decode_clo(env73608))[2];
//not do dummy comment
void* cons = (decode_clo(env73608))[1];

//creating new closure instance
void** clo78500 = alloc_clo(lam73605_fptr, 5);

//setting env list
clo78500[1] = cons;
clo78500[2] = filter;
clo78500[3] = a7321073456;
clo78500[4] = op;
clo78500[5] = kont73306;
void* f7330973457 = encode_clo(clo78500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7330973457;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73607 = encode_clo(alloc_clo(lam73607_fptr, 0));

void* lam73609_fptr() // lam73609 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73610 = arg_buffer[1];
//reading env and args
void* a7321373462 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73306 = (decode_clo(env73610))[3];
//not do dummy comment
void* op = (decode_clo(env73610))[2];
//not do dummy comment
void* filter = (decode_clo(env73610))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont73306;
arg_buffer[3] = op;
arg_buffer[4] = a7321373462;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73609 = encode_clo(alloc_clo(lam73609_fptr, 0));

void* lam73611_fptr() // lam73611 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73612 = arg_buffer[1];
//reading env and args
void* a7320973454 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73612))[7];
//not do dummy comment
void* lst = (decode_clo(env73612))[6];
//not do dummy comment
void* kont73306 = (decode_clo(env73612))[5];
//not do dummy comment
void* op = (decode_clo(env73612))[4];
//not do dummy comment
void* cons = (decode_clo(env73612))[3];
//not do dummy comment
void* filter = (decode_clo(env73612))[2];
//not do dummy comment
void* car = (decode_clo(env73612))[1];

//if-clause
bool if_guard78501 = is_true(a7320973454);
if(if_guard78501)
{

//creating new closure instance
void** clo78503 = alloc_clo(lam73607_fptr, 6);

//setting env list
clo78503[1] = cons;
clo78503[2] = filter;
clo78503[3] = op;
clo78503[4] = kont73306;
clo78503[5] = lst;
clo78503[6] = cdr;
void* f7331073455 = encode_clo(clo78503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7331073455;
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
void** clo78505 = alloc_clo(lam73609_fptr, 3);

//setting env list
clo78505[1] = filter;
clo78505[2] = op;
clo78505[3] = kont73306;
void* f7331173461 = encode_clo(clo78505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7331173461;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73611 = encode_clo(alloc_clo(lam73611_fptr, 0));

void* lam73613_fptr() // lam73613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73614 = arg_buffer[1];
//reading env and args
void* a7320873452 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73614))[7];
//not do dummy comment
void* lst = (decode_clo(env73614))[6];
//not do dummy comment
void* kont73306 = (decode_clo(env73614))[5];
//not do dummy comment
void* op = (decode_clo(env73614))[4];
//not do dummy comment
void* cons = (decode_clo(env73614))[3];
//not do dummy comment
void* filter = (decode_clo(env73614))[2];
//not do dummy comment
void* car = (decode_clo(env73614))[1];

//creating new closure instance
void** clo78507 = alloc_clo(lam73611_fptr, 7);

//setting env list
clo78507[1] = car;
clo78507[2] = filter;
clo78507[3] = cons;
clo78507[4] = op;
clo78507[5] = kont73306;
clo78507[6] = lst;
clo78507[7] = cdr;
void* f7331273453 = encode_clo(clo78507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f7331273453;
arg_buffer[3] = a7320873452;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73613 = encode_clo(alloc_clo(lam73613_fptr, 0));

void* lam73615_fptr() // lam73615 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73616 = arg_buffer[1];
//reading env and args
void* a7320673448 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env73616))[8];
//not do dummy comment
void* kont73306 = (decode_clo(env73616))[7];
//not do dummy comment
void* op = (decode_clo(env73616))[6];
//not do dummy comment
void* cons = (decode_clo(env73616))[5];
//not do dummy comment
void* list = (decode_clo(env73616))[4];
//not do dummy comment
void* cdr = (decode_clo(env73616))[3];
//not do dummy comment
void* filter = (decode_clo(env73616))[2];
//not do dummy comment
void* car = (decode_clo(env73616))[1];

//if-clause
bool if_guard78508 = is_true(a7320673448);
if(if_guard78508)
{

//creating new closure instance
void** clo78510 = alloc_clo(lam73601_fptr, 1);

//setting env list
clo78510[1] = kont73306;
void* f7330773449 = encode_clo(clo78510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7330773449;
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
void** clo78512 = alloc_clo(lam73613_fptr, 7);

//setting env list
clo78512[1] = car;
clo78512[2] = filter;
clo78512[3] = cons;
clo78512[4] = op;
clo78512[5] = kont73306;
clo78512[6] = lst;
clo78512[7] = cdr;
void* f7331373451 = encode_clo(clo78512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7331373451;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73615 = encode_clo(alloc_clo(lam73615_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73617 = arg_buffer[1];
//reading env and args
void* kont73306 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo78514 = alloc_clo(lam73615_fptr, 8);

//setting env list
clo78514[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo78514[2] = filter;
clo78514[3] = cdr;
clo78514[4] = list;
clo78514[5] = cons;
clo78514[6] = op;
clo78514[7] = kont73306;
clo78514[8] = lst;
void* f7331473447 = encode_clo(clo78514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7331473447;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam73618_fptr() // lam73618 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73619 = arg_buffer[1];
//reading env and args
void* a7321873470 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env73619))[3];
//not do dummy comment
void* a7321673467 = (decode_clo(env73619))[2];
//not do dummy comment
void* kont73315 = (decode_clo(env73619))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont73315;
arg_buffer[3] = a7321673467;
arg_buffer[4] = a7321873470;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73618 = encode_clo(alloc_clo(lam73618_fptr, 0));

void* lam73621_fptr() // lam73621 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73622 = arg_buffer[1];
//reading env and args
void* a7321673467 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env73622))[4];
//not do dummy comment
void* n = (decode_clo(env73622))[3];
//not do dummy comment
void* kont73315 = (decode_clo(env73622))[2];
//not do dummy comment
void* _u45 = (decode_clo(env73622))[1];
mpz_t* mpzvar78515 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78515, "1", 10);
void* a7321773468 = encode_mpz(mpzvar78515);

//creating new closure instance
void** clo78517 = alloc_clo(lam73618_fptr, 3);

//setting env list
clo78517[1] = kont73315;
clo78517[2] = a7321673467;
clo78517[3] = drop;
void* f7331673469 = encode_clo(clo78517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f7331673469;
arg_buffer[3] = n;
arg_buffer[4] = a7321773468;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73621 = encode_clo(alloc_clo(lam73621_fptr, 0));

void* lam73623_fptr() // lam73623 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73624 = arg_buffer[1];
//reading env and args
void* a7321573465 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73624))[6];
//not do dummy comment
void* n = (decode_clo(env73624))[5];
//not do dummy comment
void* lst = (decode_clo(env73624))[4];
//not do dummy comment
void* drop = (decode_clo(env73624))[3];
//not do dummy comment
void* kont73315 = (decode_clo(env73624))[2];
//not do dummy comment
void* _u45 = (decode_clo(env73624))[1];

//if-clause
bool if_guard78518 = is_true(a7321573465);
if(if_guard78518)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73315);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73315))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo78520 = alloc_clo(lam73621_fptr, 4);

//setting env list
clo78520[1] = _u45;
clo78520[2] = kont73315;
clo78520[3] = n;
clo78520[4] = drop;
void* f7331773466 = encode_clo(clo78520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7331773466;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73623 = encode_clo(alloc_clo(lam73623_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73626 = arg_buffer[1];
//reading env and args
void* kont73315 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar78521 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78521, "0", 10);
void* a7321473463 = encode_mpz(mpzvar78521);

//creating new closure instance
void** clo78523 = alloc_clo(lam73623_fptr, 6);

//setting env list
clo78523[1] = _u45;
clo78523[2] = kont73315;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo78523[3] = drop;
clo78523[4] = lst;
clo78523[5] = n;
clo78523[6] = cdr;
void* f7331873464 = encode_clo(clo78523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f7331873464;
arg_buffer[3] = n;
arg_buffer[4] = a7321473463;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam73627_fptr() // lam73627 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73628 = arg_buffer[1];
//reading env and args
void* a7322273478 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73319 = (decode_clo(env73628))[3];
//not do dummy comment
void* proc = (decode_clo(env73628))[2];
//not do dummy comment
void* a7322073474 = (decode_clo(env73628))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont73319;
arg_buffer[3] = a7322073474;
arg_buffer[4] = a7322273478;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73627 = encode_clo(alloc_clo(lam73627_fptr, 0));

void* lam73629_fptr() // lam73629 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73630 = arg_buffer[1];
//reading env and args
void* a7322173476 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73319 = (decode_clo(env73630))[5];
//not do dummy comment
void* foldr = (decode_clo(env73630))[4];
//not do dummy comment
void* a7322073474 = (decode_clo(env73630))[3];
//not do dummy comment
void* proc = (decode_clo(env73630))[2];
//not do dummy comment
void* acc = (decode_clo(env73630))[1];

//creating new closure instance
void** clo78525 = alloc_clo(lam73627_fptr, 3);

//setting env list
clo78525[1] = a7322073474;
clo78525[2] = proc;
clo78525[3] = kont73319;
void* f7332073477 = encode_clo(clo78525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f7332073477;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a7322173476;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73629 = encode_clo(alloc_clo(lam73629_fptr, 0));

void* lam73631_fptr() // lam73631 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73632 = arg_buffer[1];
//reading env and args
void* a7322073474 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73632))[6];
//not do dummy comment
void* kont73319 = (decode_clo(env73632))[5];
//not do dummy comment
void* foldr = (decode_clo(env73632))[4];
//not do dummy comment
void* lst = (decode_clo(env73632))[3];
//not do dummy comment
void* proc = (decode_clo(env73632))[2];
//not do dummy comment
void* acc = (decode_clo(env73632))[1];

//creating new closure instance
void** clo78527 = alloc_clo(lam73629_fptr, 5);

//setting env list
clo78527[1] = acc;
clo78527[2] = proc;
clo78527[3] = a7322073474;
clo78527[4] = foldr;
clo78527[5] = kont73319;
void* f7332173475 = encode_clo(clo78527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7332173475;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73631 = encode_clo(alloc_clo(lam73631_fptr, 0));

void* lam73633_fptr() // lam73633 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73634 = arg_buffer[1];
//reading env and args
void* a7321973472 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73634))[7];
//not do dummy comment
void* kont73319 = (decode_clo(env73634))[6];
//not do dummy comment
void* car = (decode_clo(env73634))[5];
//not do dummy comment
void* foldr = (decode_clo(env73634))[4];
//not do dummy comment
void* lst = (decode_clo(env73634))[3];
//not do dummy comment
void* proc = (decode_clo(env73634))[2];
//not do dummy comment
void* acc = (decode_clo(env73634))[1];

//if-clause
bool if_guard78528 = is_true(a7321973472);
if(if_guard78528)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73319);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73319))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo78530 = alloc_clo(lam73631_fptr, 6);

//setting env list
clo78530[1] = acc;
clo78530[2] = proc;
clo78530[3] = lst;
clo78530[4] = foldr;
clo78530[5] = kont73319;
clo78530[6] = cdr;
void* f7332273473 = encode_clo(clo78530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7332273473;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73633 = encode_clo(alloc_clo(lam73633_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73635 = arg_buffer[1];
//reading env and args
void* kont73319 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo78532 = alloc_clo(lam73633_fptr, 7);

//setting env list
clo78532[1] = acc;
clo78532[2] = proc;
clo78532[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo78532[4] = foldr;
clo78532[5] = car;
clo78532[6] = kont73319;
clo78532[7] = cdr;
void* f7332373471 = encode_clo(clo78532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7332373471;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam73636_fptr() // lam73636 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73637 = arg_buffer[1];
//reading env and args
void* a7322673486 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7322473482 = (decode_clo(env73637))[3];
//not do dummy comment
void* kont73324 = (decode_clo(env73637))[2];
//not do dummy comment
void* cons = (decode_clo(env73637))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont73324;
arg_buffer[3] = a7322473482;
arg_buffer[4] = a7322673486;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73636 = encode_clo(alloc_clo(lam73636_fptr, 0));

void* lam73638_fptr() // lam73638 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73639 = arg_buffer[1];
//reading env and args
void* a7322573484 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a7322473482 = (decode_clo(env73639))[5];
//not do dummy comment
void* lst2 = (decode_clo(env73639))[4];
//not do dummy comment
void* cons = (decode_clo(env73639))[3];
//not do dummy comment
void* append = (decode_clo(env73639))[2];
//not do dummy comment
void* kont73324 = (decode_clo(env73639))[1];

//creating new closure instance
void** clo78534 = alloc_clo(lam73636_fptr, 3);

//setting env list
clo78534[1] = cons;
clo78534[2] = kont73324;
clo78534[3] = a7322473482;
void* f7332573485 = encode_clo(clo78534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f7332573485;
arg_buffer[3] = a7322573484;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73638 = encode_clo(alloc_clo(lam73638_fptr, 0));

void* lam73640_fptr() // lam73640 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73641 = arg_buffer[1];
//reading env and args
void* a7322473482 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73641))[6];
//not do dummy comment
void* lst2 = (decode_clo(env73641))[5];
//not do dummy comment
void* lst1 = (decode_clo(env73641))[4];
//not do dummy comment
void* cons = (decode_clo(env73641))[3];
//not do dummy comment
void* append = (decode_clo(env73641))[2];
//not do dummy comment
void* kont73324 = (decode_clo(env73641))[1];

//creating new closure instance
void** clo78536 = alloc_clo(lam73638_fptr, 5);

//setting env list
clo78536[1] = kont73324;
clo78536[2] = append;
clo78536[3] = cons;
clo78536[4] = lst2;
clo78536[5] = a7322473482;
void* f7332673483 = encode_clo(clo78536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f7332673483;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73640 = encode_clo(alloc_clo(lam73640_fptr, 0));

void* lam73642_fptr() // lam73642 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73643 = arg_buffer[1];
//reading env and args
void* a7322373480 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env73643))[7];
//not do dummy comment
void* lst2 = (decode_clo(env73643))[6];
//not do dummy comment
void* cons = (decode_clo(env73643))[5];
//not do dummy comment
void* append = (decode_clo(env73643))[4];
//not do dummy comment
void* kont73324 = (decode_clo(env73643))[3];
//not do dummy comment
void* lst1 = (decode_clo(env73643))[2];
//not do dummy comment
void* car = (decode_clo(env73643))[1];

//if-clause
bool if_guard78537 = is_true(a7322373480);
if(if_guard78537)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73324);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73324))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo78539 = alloc_clo(lam73640_fptr, 6);

//setting env list
clo78539[1] = kont73324;
clo78539[2] = append;
clo78539[3] = cons;
clo78539[4] = lst1;
clo78539[5] = lst2;
clo78539[6] = cdr;
void* f7332773481 = encode_clo(clo78539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f7332773481;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam73642 = encode_clo(alloc_clo(lam73642_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73644 = arg_buffer[1];
//reading env and args
void* kont73324 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo78541 = alloc_clo(lam73642_fptr, 7);

//setting env list
clo78541[1] = car;
clo78541[2] = lst1;
clo78541[3] = kont73324;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo78541[4] = append;
clo78541[5] = cons;
clo78541[6] = lst2;
clo78541[7] = cdr;
void* f7332873479 = encode_clo(clo78541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f7332873479;
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
void* _73645 = arg_buffer[1];
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

void* kont7332973487 = prim_car(lst);
void* lst73488 = prim_cdr(lst);
void* x7322773489 = apply_prim_hash(lst73488);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7332973487);
arg_buffer[2] = x7322773489;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7332973487))[0]);
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
void* _73646 = arg_buffer[1];
//reading env and args
void* kont73331 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7322873490 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73331);
arg_buffer[2] = x7322873490;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73331))[0]);
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
void* _73647 = arg_buffer[1];
//reading env and args
void* kont73332 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x7322973491 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73332);
arg_buffer[2] = x7322973491;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73332))[0]);
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
void* _73648 = arg_buffer[1];
//reading env and args
void* kont73333 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x7323073492 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73333);
arg_buffer[2] = x7323073492;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73333))[0]);
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
void* _73649 = arg_buffer[1];
//reading env and args
void* kont73334 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x7323173493 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73334);
arg_buffer[2] = x7323173493;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73334))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam73650_fptr() // lam73650 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73651 = arg_buffer[1];
//reading env and args
void* a7323673499 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73335 = (decode_clo(env73651))[2];
//not do dummy comment
void* length = (decode_clo(env73651))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = kont73335;
arg_buffer[3] = a7323673499;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73650 = encode_clo(alloc_clo(lam73650_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73656 = arg_buffer[1];
//reading env and args
void* kont73335 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar78542 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78542, "1", 10);
void* a7323273494 = encode_mpz(mpzvar78542);
mpz_t* mpzvar78543 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78543, "2", 10);
void* a7323373495 = encode_mpz(mpzvar78543);
mpz_t* mpzvar78544 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78544, "3", 10);
void* a7323473496 = encode_mpz(mpzvar78544);
mpz_t* mpzvar78545 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar78545, "4", 10);
void* a7323573497 = encode_mpz(mpzvar78545);

//creating new closure instance
void** clo78547 = alloc_clo(lam73650_fptr, 2);

//setting env list
clo78547[1] = length;
clo78547[2] = kont73335;
void* f7333673498 = encode_clo(clo78547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f7333673498;
arg_buffer[3] = a7323273494;
arg_buffer[4] = a7323373495;
arg_buffer[5] = a7323473496;
arg_buffer[6] = a7323573497;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam73657_fptr() // lam73657 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env73658 = arg_buffer[1];
//reading env and args
void* x7323773501 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont73337 = (decode_clo(env73658))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont73337);
arg_buffer[2] = x7323773501;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont73337))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam73657 = encode_clo(alloc_clo(lam73657_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _73659 = arg_buffer[1];
//reading env and args
void* kont73337 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo78549 = alloc_clo(lam73657_fptr, 1);

//setting env list
clo78549[1] = kont73337;
void* f7333873500 = encode_clo(clo78549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f7333873500;
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

