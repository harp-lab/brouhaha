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
void* _13450 = arg_buffer[1];
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

void* kont1317313279 = prim_car(lst);
void* lst13280 = prim_cdr(lst);
void* x1308113281 = apply_prim__u43(lst13280);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1317313279);
arg_buffer[2] = x1308113281;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1317313279))[0]);
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
void* _13451 = arg_buffer[1];
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

void* kont1317513282 = prim_car(lst);
void* lst13283 = prim_cdr(lst);
void* x1308213284 = apply_prim__u45(lst13283);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1317513282);
arg_buffer[2] = x1308213284;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1317513282))[0]);
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
void* _13452 = arg_buffer[1];
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

void* kont1317713285 = prim_car(lst);
void* lst13286 = prim_cdr(lst);
void* x1308313287 = apply_prim__u42(lst13286);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1317713285);
arg_buffer[2] = x1308313287;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1317713285))[0]);
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
void* _13453 = arg_buffer[1];
//reading env and args
void* kont13179 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1308413288 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13179);
arg_buffer[2] = x1308413288;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13179))[0]);
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
void* _13454 = arg_buffer[1];
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

void* kont1318013289 = prim_car(lst);
void* lst13290 = prim_cdr(lst);
void* x1308513291 = apply_prim__u47(lst13290);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1318013289);
arg_buffer[2] = x1308513291;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1318013289))[0]);
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
void* _13455 = arg_buffer[1];
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

void* kont1318213292 = prim_car(lst);
void* lst13293 = prim_cdr(lst);
void* x1308613294 = apply_prim__u61(lst13293);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1318213292);
arg_buffer[2] = x1308613294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1318213292))[0]);
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
void* _13456 = arg_buffer[1];
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

void* kont1318413295 = prim_car(lst);
void* lst13296 = prim_cdr(lst);
void* x1308713297 = apply_prim__u62(lst13296);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1318413295);
arg_buffer[2] = x1308713297;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1318413295))[0]);
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
void* _13457 = arg_buffer[1];
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

void* kont1318613298 = prim_car(lst);
void* lst13299 = prim_cdr(lst);
void* x1308813300 = apply_prim__u60(lst13299);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1318613298);
arg_buffer[2] = x1308813300;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1318613298))[0]);
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
void* _13458 = arg_buffer[1];
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

void* kont1318813301 = prim_car(lst);
void* lst13302 = prim_cdr(lst);
void* x1308913303 = apply_prim__u60_u61(lst13302);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1318813301);
arg_buffer[2] = x1308913303;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1318813301))[0]);
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
void* _13459 = arg_buffer[1];
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

void* kont1319013304 = prim_car(lst);
void* lst13305 = prim_cdr(lst);
void* x1309013306 = apply_prim__u62_u61(lst13305);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1319013304);
arg_buffer[2] = x1309013306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1319013304))[0]);
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
void* _13460 = arg_buffer[1];
//reading env and args
void* kont13192 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1309113307 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13192);
arg_buffer[2] = x1309113307;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13192))[0]);
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
void* _13461 = arg_buffer[1];
//reading env and args
void* kont13193 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1309213308 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13193);
arg_buffer[2] = x1309213308;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13193))[0]);
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
void* _13462 = arg_buffer[1];
//reading env and args
void* kont13194 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1309313309 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13194);
arg_buffer[2] = x1309313309;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13194))[0]);
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
void* _13463 = arg_buffer[1];
//reading env and args
void* kont13195 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1309413310 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13195);
arg_buffer[2] = x1309413310;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13195))[0]);
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
void* _13464 = arg_buffer[1];
//reading env and args
void* kont13196 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1309513311 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13196);
arg_buffer[2] = x1309513311;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13196))[0]);
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
void* _13465 = arg_buffer[1];
//reading env and args
void* kont13197 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1309613312 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13197);
arg_buffer[2] = x1309613312;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13197))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam13466_fptr() // lam13466 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13467 = arg_buffer[1];
//reading env and args
void* a1309913316 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13198 = (decode_clo(env13467))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env13467))[2];
//not do dummy comment
void* a1309713313 = (decode_clo(env13467))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13198;
arg_buffer[3] = a1309713313;
arg_buffer[4] = a1309913316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13466 = encode_clo(alloc_clo(lam13466_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13470 = arg_buffer[1];
//reading env and args
void* kont13198 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22252 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22252, "0", 10);
void* a1309713313 = encode_mpz(mpzvar22252);
mpz_t* mpzvar22253 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22253, "2", 10);
void* a1309813314 = encode_mpz(mpzvar22253);

//creating new closure instance
void** clo22255 = alloc_clo(lam13466_fptr, 3);

//setting env list
clo22255[1] = a1309713313;
clo22255[2] = equal_u63;
clo22255[3] = kont13198;
void* f1319913315 = encode_clo(clo22255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1319913315;
arg_buffer[3] = x;
arg_buffer[4] = a1309813314;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam13471_fptr() // lam13471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13472 = arg_buffer[1];
//reading env and args
void* a1310213320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env13472))[3];
//not do dummy comment
void* kont13200 = (decode_clo(env13472))[2];
//not do dummy comment
void* a1310013317 = (decode_clo(env13472))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13200;
arg_buffer[3] = a1310013317;
arg_buffer[4] = a1310213320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13471 = encode_clo(alloc_clo(lam13471_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13475 = arg_buffer[1];
//reading env and args
void* kont13200 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22256 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22256, "1", 10);
void* a1310013317 = encode_mpz(mpzvar22256);
mpz_t* mpzvar22257 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22257, "2", 10);
void* a1310113318 = encode_mpz(mpzvar22257);

//creating new closure instance
void** clo22259 = alloc_clo(lam13471_fptr, 3);

//setting env list
clo22259[1] = a1310013317;
clo22259[2] = kont13200;
clo22259[3] = equal_u63;
void* f1320113319 = encode_clo(clo22259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1320113319;
arg_buffer[3] = x;
arg_buffer[4] = a1310113318;
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
void* _13476 = arg_buffer[1];
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

void* kont1320213321 = prim_car(x);
void* x13322 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1320213321);
arg_buffer[2] = x13322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1320213321))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13477 = arg_buffer[1];
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

void* kont1320413323 = prim_car(lst);
void* lst13324 = prim_cdr(lst);
void* x1310313325 = apply_prim_and(lst13324);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1320413323);
arg_buffer[2] = x1310313325;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1320413323))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13478 = arg_buffer[1];
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

void* kont1320613326 = prim_car(lst);
void* lst13327 = prim_cdr(lst);
void* x1310413328 = apply_prim_or(lst13327);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1320613326);
arg_buffer[2] = x1310413328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1320613326))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam13481_fptr() // lam13481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13482 = arg_buffer[1];
//reading env and args
void* a1311013338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13208 = (decode_clo(env13482))[3];
//not do dummy comment
void* x = (decode_clo(env13482))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env13482))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont13208;
arg_buffer[3] = x;
arg_buffer[4] = a1311013338;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13481 = encode_clo(alloc_clo(lam13481_fptr, 0));

void* lam13483_fptr() // lam13483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13484 = arg_buffer[1];
//reading env and args
void* a1310813335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13484))[5];
//not do dummy comment
void* kont13208 = (decode_clo(env13484))[4];
//not do dummy comment
void* lst = (decode_clo(env13484))[3];
//not do dummy comment
void* x = (decode_clo(env13484))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env13484))[1];

//if-clause
bool if_guard22260 = is_true(a1310813335);
if(if_guard22260)
{
void* x1310913336 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13208);
arg_buffer[2] = x1310913336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13208))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22262 = alloc_clo(lam13481_fptr, 3);

//setting env list
clo22262[1] = member_u63;
clo22262[2] = x;
clo22262[3] = kont13208;
void* f1320913337 = encode_clo(clo22262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1320913337;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13483 = encode_clo(alloc_clo(lam13483_fptr, 0));

void* lam13485_fptr() // lam13485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13486 = arg_buffer[1];
//reading env and args
void* a1310713333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13486))[6];
//not do dummy comment
void* kont13208 = (decode_clo(env13486))[5];
//not do dummy comment
void* lst = (decode_clo(env13486))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env13486))[3];
//not do dummy comment
void* x = (decode_clo(env13486))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env13486))[1];

//creating new closure instance
void** clo22264 = alloc_clo(lam13483_fptr, 5);

//setting env list
clo22264[1] = member_u63;
clo22264[2] = x;
clo22264[3] = lst;
clo22264[4] = kont13208;
clo22264[5] = cdr;
void* f1321013334 = encode_clo(clo22264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1321013334;
arg_buffer[3] = a1310713333;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13485 = encode_clo(alloc_clo(lam13485_fptr, 0));

void* lam13487_fptr() // lam13487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13488 = arg_buffer[1];
//reading env and args
void* a1310513330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13488))[7];
//not do dummy comment
void* kont13208 = (decode_clo(env13488))[6];
//not do dummy comment
void* lst = (decode_clo(env13488))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env13488))[4];
//not do dummy comment
void* x = (decode_clo(env13488))[3];
//not do dummy comment
void* car = (decode_clo(env13488))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env13488))[1];

//if-clause
bool if_guard22265 = is_true(a1310513330);
if(if_guard22265)
{
void* x1310613331 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13208);
arg_buffer[2] = x1310613331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13208))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22267 = alloc_clo(lam13485_fptr, 6);

//setting env list
clo22267[1] = member_u63;
clo22267[2] = x;
clo22267[3] = equal_u63;
clo22267[4] = lst;
clo22267[5] = kont13208;
clo22267[6] = cdr;
void* f1321113332 = encode_clo(clo22267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1321113332;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13487 = encode_clo(alloc_clo(lam13487_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13489 = arg_buffer[1];
//reading env and args
void* kont13208 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22269 = alloc_clo(lam13487_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo22269[1] = member_u63;
clo22269[2] = car;
clo22269[3] = x;
clo22269[4] = equal_u63;
clo22269[5] = lst;
clo22269[6] = kont13208;
clo22269[7] = cdr;
void* f1321213329 = encode_clo(clo22269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1321213329;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam13490_fptr() // lam13490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13491 = arg_buffer[1];
//reading env and args
void* a1311413346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13213 = (decode_clo(env13491))[4];
//not do dummy comment
void* a1311313344 = (decode_clo(env13491))[3];
//not do dummy comment
void* fun = (decode_clo(env13491))[2];
//not do dummy comment
void* foldl = (decode_clo(env13491))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont13213;
arg_buffer[3] = fun;
arg_buffer[4] = a1311313344;
arg_buffer[5] = a1311413346;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13490 = encode_clo(alloc_clo(lam13490_fptr, 0));

void* lam13492_fptr() // lam13492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13493 = arg_buffer[1];
//reading env and args
void* a1311313344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13493))[5];
//not do dummy comment
void* lst = (decode_clo(env13493))[4];
//not do dummy comment
void* kont13213 = (decode_clo(env13493))[3];
//not do dummy comment
void* fun = (decode_clo(env13493))[2];
//not do dummy comment
void* foldl = (decode_clo(env13493))[1];

//creating new closure instance
void** clo22271 = alloc_clo(lam13490_fptr, 4);

//setting env list
clo22271[1] = foldl;
clo22271[2] = fun;
clo22271[3] = a1311313344;
clo22271[4] = kont13213;
void* f1321413345 = encode_clo(clo22271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1321413345;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13492 = encode_clo(alloc_clo(lam13492_fptr, 0));

void* lam13494_fptr() // lam13494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13495 = arg_buffer[1];
//reading env and args
void* a1311213342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13495))[6];
//not do dummy comment
void* lst = (decode_clo(env13495))[5];
//not do dummy comment
void* kont13213 = (decode_clo(env13495))[4];
//not do dummy comment
void* fun = (decode_clo(env13495))[3];
//not do dummy comment
void* acc = (decode_clo(env13495))[2];
//not do dummy comment
void* foldl = (decode_clo(env13495))[1];

//creating new closure instance
void** clo22273 = alloc_clo(lam13492_fptr, 5);

//setting env list
clo22273[1] = foldl;
clo22273[2] = fun;
clo22273[3] = kont13213;
clo22273[4] = lst;
clo22273[5] = cdr;
void* f1321513343 = encode_clo(clo22273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1321513343;
arg_buffer[3] = a1311213342;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13494 = encode_clo(alloc_clo(lam13494_fptr, 0));

void* lam13496_fptr() // lam13496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13497 = arg_buffer[1];
//reading env and args
void* a1311113340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13497))[7];
//not do dummy comment
void* lst = (decode_clo(env13497))[6];
//not do dummy comment
void* kont13213 = (decode_clo(env13497))[5];
//not do dummy comment
void* fun = (decode_clo(env13497))[4];
//not do dummy comment
void* acc = (decode_clo(env13497))[3];
//not do dummy comment
void* car = (decode_clo(env13497))[2];
//not do dummy comment
void* foldl = (decode_clo(env13497))[1];

//if-clause
bool if_guard22274 = is_true(a1311113340);
if(if_guard22274)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13213);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13213))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22276 = alloc_clo(lam13494_fptr, 6);

//setting env list
clo22276[1] = foldl;
clo22276[2] = acc;
clo22276[3] = fun;
clo22276[4] = kont13213;
clo22276[5] = lst;
clo22276[6] = cdr;
void* f1321613341 = encode_clo(clo22276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1321613341;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13496 = encode_clo(alloc_clo(lam13496_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13498 = arg_buffer[1];
//reading env and args
void* kont13213 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22278 = alloc_clo(lam13496_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo22278[1] = foldl;
clo22278[2] = car;
clo22278[3] = acc;
clo22278[4] = fun;
clo22278[5] = kont13213;
clo22278[6] = lst;
clo22278[7] = cdr;
void* f1321713339 = encode_clo(clo22278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1321713339;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam13499_fptr() // lam13499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13500 = arg_buffer[1];
//reading env and args
void* a1311813354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13500))[3];
//not do dummy comment
void* kont13218 = (decode_clo(env13500))[2];
//not do dummy comment
void* a1311613350 = (decode_clo(env13500))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13218;
arg_buffer[3] = a1311613350;
arg_buffer[4] = a1311813354;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13499 = encode_clo(alloc_clo(lam13499_fptr, 0));

void* lam13501_fptr() // lam13501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13502 = arg_buffer[1];
//reading env and args
void* a1311713352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13502))[5];
//not do dummy comment
void* kont13218 = (decode_clo(env13502))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13502))[3];
//not do dummy comment
void* cons = (decode_clo(env13502))[2];
//not do dummy comment
void* a1311613350 = (decode_clo(env13502))[1];

//creating new closure instance
void** clo22280 = alloc_clo(lam13499_fptr, 3);

//setting env list
clo22280[1] = a1311613350;
clo22280[2] = kont13218;
clo22280[3] = reverse_u45helper;
void* f1321913353 = encode_clo(clo22280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1321913353;
arg_buffer[3] = a1311713352;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13501 = encode_clo(alloc_clo(lam13501_fptr, 0));

void* lam13503_fptr() // lam13503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13504 = arg_buffer[1];
//reading env and args
void* a1311613350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13504))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13504))[5];
//not do dummy comment
void* kont13218 = (decode_clo(env13504))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13504))[3];
//not do dummy comment
void* car = (decode_clo(env13504))[2];
//not do dummy comment
void* cons = (decode_clo(env13504))[1];

//creating new closure instance
void** clo22282 = alloc_clo(lam13501_fptr, 5);

//setting env list
clo22282[1] = a1311613350;
clo22282[2] = cons;
clo22282[3] = lst2;
clo22282[4] = kont13218;
clo22282[5] = reverse_u45helper;
void* f1322013351 = encode_clo(clo22282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1322013351;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13503 = encode_clo(alloc_clo(lam13503_fptr, 0));

void* lam13505_fptr() // lam13505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13506 = arg_buffer[1];
//reading env and args
void* a1311513348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13506))[7];
//not do dummy comment
void* lst = (decode_clo(env13506))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13506))[5];
//not do dummy comment
void* kont13218 = (decode_clo(env13506))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13506))[3];
//not do dummy comment
void* car = (decode_clo(env13506))[2];
//not do dummy comment
void* cons = (decode_clo(env13506))[1];

//if-clause
bool if_guard22283 = is_true(a1311513348);
if(if_guard22283)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13218);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13218))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22285 = alloc_clo(lam13503_fptr, 6);

//setting env list
clo22285[1] = cons;
clo22285[2] = car;
clo22285[3] = lst2;
clo22285[4] = kont13218;
clo22285[5] = reverse_u45helper;
clo22285[6] = lst;
void* f1322113349 = encode_clo(clo22285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1322113349;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13505 = encode_clo(alloc_clo(lam13505_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13507 = arg_buffer[1];
//reading env and args
void* kont13218 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22287 = alloc_clo(lam13505_fptr, 7);

//setting env list
clo22287[1] = cons;
clo22287[2] = car;
clo22287[3] = lst2;
clo22287[4] = kont13218;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo22287[5] = reverse_u45helper;
clo22287[6] = lst;
clo22287[7] = cdr;
void* f1322213347 = encode_clo(clo22287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1322213347;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam13508_fptr() // lam13508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13509 = arg_buffer[1];
//reading env and args
void* a1311913356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13223 = (decode_clo(env13509))[3];
//not do dummy comment
void* lst = (decode_clo(env13509))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env13509))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13223;
arg_buffer[3] = lst;
arg_buffer[4] = a1311913356;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13508 = encode_clo(alloc_clo(lam13508_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13510 = arg_buffer[1];
//reading env and args
void* kont13223 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22289 = alloc_clo(lam13508_fptr, 3);

//setting env list
clo22289[1] = reverse_u45helper;
clo22289[2] = lst;
clo22289[3] = kont13223;
void* f1322413355 = encode_clo(clo22289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1322413355;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam13511_fptr() // lam13511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13512 = arg_buffer[1];
//reading env and args
void* x1312213361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13225 = (decode_clo(env13512))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13225);
arg_buffer[2] = x1312213361;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13225))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13511 = encode_clo(alloc_clo(lam13511_fptr, 0));

void* lam13513_fptr() // lam13513 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13514 = arg_buffer[1];
//reading env and args
void* a1312713370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13225 = (decode_clo(env13514))[4];
//not do dummy comment
void* a1312513366 = (decode_clo(env13514))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13514))[2];
//not do dummy comment
void* a1312313363 = (decode_clo(env13514))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13225;
arg_buffer[3] = a1312313363;
arg_buffer[4] = a1312513366;
arg_buffer[5] = a1312713370;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13513 = encode_clo(alloc_clo(lam13513_fptr, 0));

void* lam13515_fptr() // lam13515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13516 = arg_buffer[1];
//reading env and args
void* a1312613368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13225 = (decode_clo(env13516))[6];
//not do dummy comment
void* cons = (decode_clo(env13516))[5];
//not do dummy comment
void* a1312513366 = (decode_clo(env13516))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env13516))[3];
//not do dummy comment
void* a1312313363 = (decode_clo(env13516))[2];
//not do dummy comment
void* lst2 = (decode_clo(env13516))[1];

//creating new closure instance
void** clo22291 = alloc_clo(lam13513_fptr, 4);

//setting env list
clo22291[1] = a1312313363;
clo22291[2] = take_u45helper;
clo22291[3] = a1312513366;
clo22291[4] = kont13225;
void* f1322713369 = encode_clo(clo22291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1322713369;
arg_buffer[3] = a1312613368;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13515 = encode_clo(alloc_clo(lam13515_fptr, 0));

void* lam13517_fptr() // lam13517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13518 = arg_buffer[1];
//reading env and args
void* a1312513366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13225 = (decode_clo(env13518))[7];
//not do dummy comment
void* lst = (decode_clo(env13518))[6];
//not do dummy comment
void* car = (decode_clo(env13518))[5];
//not do dummy comment
void* cons = (decode_clo(env13518))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env13518))[3];
//not do dummy comment
void* a1312313363 = (decode_clo(env13518))[2];
//not do dummy comment
void* lst2 = (decode_clo(env13518))[1];

//creating new closure instance
void** clo22293 = alloc_clo(lam13515_fptr, 6);

//setting env list
clo22293[1] = lst2;
clo22293[2] = a1312313363;
clo22293[3] = take_u45helper;
clo22293[4] = a1312513366;
clo22293[5] = cons;
clo22293[6] = kont13225;
void* f1322813367 = encode_clo(clo22293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1322813367;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13517 = encode_clo(alloc_clo(lam13517_fptr, 0));

void* lam13520_fptr() // lam13520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13521 = arg_buffer[1];
//reading env and args
void* a1312313363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13225 = (decode_clo(env13521))[8];
//not do dummy comment
void* lst = (decode_clo(env13521))[7];
//not do dummy comment
void* cons = (decode_clo(env13521))[6];
//not do dummy comment
void* _u45 = (decode_clo(env13521))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13521))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13521))[3];
//not do dummy comment
void* n = (decode_clo(env13521))[2];
//not do dummy comment
void* car = (decode_clo(env13521))[1];
mpz_t* mpzvar22294 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22294, "1", 10);
void* a1312413364 = encode_mpz(mpzvar22294);

//creating new closure instance
void** clo22296 = alloc_clo(lam13517_fptr, 7);

//setting env list
clo22296[1] = lst2;
clo22296[2] = a1312313363;
clo22296[3] = take_u45helper;
clo22296[4] = cons;
clo22296[5] = car;
clo22296[6] = lst;
clo22296[7] = kont13225;
void* f1322913365 = encode_clo(clo22296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1322913365;
arg_buffer[3] = n;
arg_buffer[4] = a1312413364;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13520 = encode_clo(alloc_clo(lam13520_fptr, 0));

void* lam13522_fptr() // lam13522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13523 = arg_buffer[1];
//reading env and args
void* a1312113359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13523))[10];
//not do dummy comment
void* kont13225 = (decode_clo(env13523))[9];
//not do dummy comment
void* lst = (decode_clo(env13523))[8];
//not do dummy comment
void* reverse = (decode_clo(env13523))[7];
//not do dummy comment
void* cons = (decode_clo(env13523))[6];
//not do dummy comment
void* _u45 = (decode_clo(env13523))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env13523))[4];
//not do dummy comment
void* lst2 = (decode_clo(env13523))[3];
//not do dummy comment
void* n = (decode_clo(env13523))[2];
//not do dummy comment
void* car = (decode_clo(env13523))[1];

//if-clause
bool if_guard22297 = is_true(a1312113359);
if(if_guard22297)
{

//creating new closure instance
void** clo22299 = alloc_clo(lam13511_fptr, 1);

//setting env list
clo22299[1] = kont13225;
void* f1322613360 = encode_clo(clo22299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1322613360;
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
void** clo22301 = alloc_clo(lam13520_fptr, 8);

//setting env list
clo22301[1] = car;
clo22301[2] = n;
clo22301[3] = lst2;
clo22301[4] = take_u45helper;
clo22301[5] = _u45;
clo22301[6] = cons;
clo22301[7] = lst;
clo22301[8] = kont13225;
void* f1323013362 = encode_clo(clo22301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1323013362;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13522 = encode_clo(alloc_clo(lam13522_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13525 = arg_buffer[1];
//reading env and args
void* kont13225 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar22302 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22302, "0", 10);
void* a1312013357 = encode_mpz(mpzvar22302);

//creating new closure instance
void** clo22304 = alloc_clo(lam13522_fptr, 10);

//setting env list
clo22304[1] = car;
clo22304[2] = n;
clo22304[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo22304[4] = take_u45helper;
clo22304[5] = _u45;
clo22304[6] = cons;
clo22304[7] = reverse;
clo22304[8] = lst;
clo22304[9] = kont13225;
clo22304[10] = cdr;
void* f1323113358 = encode_clo(clo22304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1323113358;
arg_buffer[3] = n;
arg_buffer[4] = a1312013357;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam13526_fptr() // lam13526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13527 = arg_buffer[1];
//reading env and args
void* a1312813372 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13527))[4];
//not do dummy comment
void* kont13232 = (decode_clo(env13527))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env13527))[2];
//not do dummy comment
void* n = (decode_clo(env13527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont13232;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1312813372;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13526 = encode_clo(alloc_clo(lam13526_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13528 = arg_buffer[1];
//reading env and args
void* kont13232 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22306 = alloc_clo(lam13526_fptr, 4);

//setting env list
clo22306[1] = n;
clo22306[2] = take_u45helper;
clo22306[3] = kont13232;
clo22306[4] = lst;
void* f1323313371 = encode_clo(clo22306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1323313371;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam13530_fptr() // lam13530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13531 = arg_buffer[1];
//reading env and args
void* a1313313380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13234 = (decode_clo(env13531))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13531))[2];
//not do dummy comment
void* a1313113376 = (decode_clo(env13531))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont13234;
arg_buffer[3] = a1313113376;
arg_buffer[4] = a1313313380;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13530 = encode_clo(alloc_clo(lam13530_fptr, 0));

void* lam13532_fptr() // lam13532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13533 = arg_buffer[1];
//reading env and args
void* a1313213378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env13533))[4];
//not do dummy comment
void* kont13234 = (decode_clo(env13533))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13533))[2];
//not do dummy comment
void* a1313113376 = (decode_clo(env13533))[1];

//creating new closure instance
void** clo22308 = alloc_clo(lam13530_fptr, 3);

//setting env list
clo22308[1] = a1313113376;
clo22308[2] = _u43;
clo22308[3] = kont13234;
void* f1323513379 = encode_clo(clo22308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1323513379;
arg_buffer[3] = a1313213378;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13532 = encode_clo(alloc_clo(lam13532_fptr, 0));

void* lam13535_fptr() // lam13535 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13536 = arg_buffer[1];
//reading env and args
void* a1312913374 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13536))[5];
//not do dummy comment
void* lst = (decode_clo(env13536))[4];
//not do dummy comment
void* length = (decode_clo(env13536))[3];
//not do dummy comment
void* _u43 = (decode_clo(env13536))[2];
//not do dummy comment
void* kont13234 = (decode_clo(env13536))[1];

//if-clause
bool if_guard22309 = is_true(a1312913374);
if(if_guard22309)
{
mpz_t* mpzvar22310 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22310, "0", 10);
void* x1313013375 = encode_mpz(mpzvar22310);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13234);
arg_buffer[2] = x1313013375;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13234))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar22311 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22311, "1", 10);
void* a1313113376 = encode_mpz(mpzvar22311);

//creating new closure instance
void** clo22313 = alloc_clo(lam13532_fptr, 4);

//setting env list
clo22313[1] = a1313113376;
clo22313[2] = _u43;
clo22313[3] = kont13234;
clo22313[4] = length;
void* f1323613377 = encode_clo(clo22313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1323613377;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13535 = encode_clo(alloc_clo(lam13535_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13537 = arg_buffer[1];
//reading env and args
void* kont13234 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22315 = alloc_clo(lam13535_fptr, 5);

//setting env list
clo22315[1] = kont13234;
clo22315[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo22315[3] = length;
clo22315[4] = lst;
clo22315[5] = cdr;
void* f1323713373 = encode_clo(clo22315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1323713373;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam13538_fptr() // lam13538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13539 = arg_buffer[1];
//reading env and args
void* x1313513384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13238 = (decode_clo(env13539))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13238);
arg_buffer[2] = x1313513384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13238))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13538 = encode_clo(alloc_clo(lam13538_fptr, 0));

void* lam13540_fptr() // lam13540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13541 = arg_buffer[1];
//reading env and args
void* a1313913392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1313713388 = (decode_clo(env13541))[3];
//not do dummy comment
void* cons = (decode_clo(env13541))[2];
//not do dummy comment
void* kont13238 = (decode_clo(env13541))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13238;
arg_buffer[3] = a1313713388;
arg_buffer[4] = a1313913392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13540 = encode_clo(alloc_clo(lam13540_fptr, 0));

void* lam13542_fptr() // lam13542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13543 = arg_buffer[1];
//reading env and args
void* a1313813390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env13543))[5];
//not do dummy comment
void* cons = (decode_clo(env13543))[4];
//not do dummy comment
void* kont13238 = (decode_clo(env13543))[3];
//not do dummy comment
void* map = (decode_clo(env13543))[2];
//not do dummy comment
void* a1313713388 = (decode_clo(env13543))[1];

//creating new closure instance
void** clo22317 = alloc_clo(lam13540_fptr, 3);

//setting env list
clo22317[1] = kont13238;
clo22317[2] = cons;
clo22317[3] = a1313713388;
void* f1324013391 = encode_clo(clo22317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1324013391;
arg_buffer[3] = proc;
arg_buffer[4] = a1313813390;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13542 = encode_clo(alloc_clo(lam13542_fptr, 0));

void* lam13544_fptr() // lam13544 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13545 = arg_buffer[1];
//reading env and args
void* a1313713388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13545))[6];
//not do dummy comment
void* lst = (decode_clo(env13545))[5];
//not do dummy comment
void* map = (decode_clo(env13545))[4];
//not do dummy comment
void* proc = (decode_clo(env13545))[3];
//not do dummy comment
void* cons = (decode_clo(env13545))[2];
//not do dummy comment
void* kont13238 = (decode_clo(env13545))[1];

//creating new closure instance
void** clo22319 = alloc_clo(lam13542_fptr, 5);

//setting env list
clo22319[1] = a1313713388;
clo22319[2] = map;
clo22319[3] = kont13238;
clo22319[4] = cons;
clo22319[5] = proc;
void* f1324113389 = encode_clo(clo22319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1324113389;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13544 = encode_clo(alloc_clo(lam13544_fptr, 0));

void* lam13546_fptr() // lam13546 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13547 = arg_buffer[1];
//reading env and args
void* a1313613386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13547))[6];
//not do dummy comment
void* lst = (decode_clo(env13547))[5];
//not do dummy comment
void* map = (decode_clo(env13547))[4];
//not do dummy comment
void* proc = (decode_clo(env13547))[3];
//not do dummy comment
void* cons = (decode_clo(env13547))[2];
//not do dummy comment
void* kont13238 = (decode_clo(env13547))[1];

//creating new closure instance
void** clo22321 = alloc_clo(lam13544_fptr, 6);

//setting env list
clo22321[1] = kont13238;
clo22321[2] = cons;
clo22321[3] = proc;
clo22321[4] = map;
clo22321[5] = lst;
clo22321[6] = cdr;
void* f1324213387 = encode_clo(clo22321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1324213387;
arg_buffer[3] = a1313613386;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13546 = encode_clo(alloc_clo(lam13546_fptr, 0));

void* lam13548_fptr() // lam13548 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13549 = arg_buffer[1];
//reading env and args
void* a1313413382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13549))[8];
//not do dummy comment
void* map = (decode_clo(env13549))[7];
//not do dummy comment
void* proc = (decode_clo(env13549))[6];
//not do dummy comment
void* car = (decode_clo(env13549))[5];
//not do dummy comment
void* cons = (decode_clo(env13549))[4];
//not do dummy comment
void* kont13238 = (decode_clo(env13549))[3];
//not do dummy comment
void* list = (decode_clo(env13549))[2];
//not do dummy comment
void* cdr = (decode_clo(env13549))[1];

//if-clause
bool if_guard22322 = is_true(a1313413382);
if(if_guard22322)
{

//creating new closure instance
void** clo22324 = alloc_clo(lam13538_fptr, 1);

//setting env list
clo22324[1] = kont13238;
void* f1323913383 = encode_clo(clo22324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1323913383;
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
void** clo22326 = alloc_clo(lam13546_fptr, 6);

//setting env list
clo22326[1] = kont13238;
clo22326[2] = cons;
clo22326[3] = proc;
clo22326[4] = map;
clo22326[5] = lst;
clo22326[6] = cdr;
void* f1324313385 = encode_clo(clo22326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1324313385;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13548 = encode_clo(alloc_clo(lam13548_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13550 = arg_buffer[1];
//reading env and args
void* kont13238 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22328 = alloc_clo(lam13548_fptr, 8);

//setting env list
clo22328[1] = cdr;
clo22328[2] = list;
clo22328[3] = kont13238;
clo22328[4] = cons;
clo22328[5] = car;
clo22328[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo22328[7] = map;
clo22328[8] = lst;
void* f1324413381 = encode_clo(clo22328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1324413381;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam13551_fptr() // lam13551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13552 = arg_buffer[1];
//reading env and args
void* x1314113396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13245 = (decode_clo(env13552))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13245);
arg_buffer[2] = x1314113396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13551 = encode_clo(alloc_clo(lam13551_fptr, 0));

void* lam13553_fptr() // lam13553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13554 = arg_buffer[1];
//reading env and args
void* a1314613406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1314413402 = (decode_clo(env13554))[3];
//not do dummy comment
void* kont13245 = (decode_clo(env13554))[2];
//not do dummy comment
void* cons = (decode_clo(env13554))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13245;
arg_buffer[3] = a1314413402;
arg_buffer[4] = a1314613406;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13553 = encode_clo(alloc_clo(lam13553_fptr, 0));

void* lam13555_fptr() // lam13555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13556 = arg_buffer[1];
//reading env and args
void* a1314513404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1314413402 = (decode_clo(env13556))[5];
//not do dummy comment
void* kont13245 = (decode_clo(env13556))[4];
//not do dummy comment
void* op = (decode_clo(env13556))[3];
//not do dummy comment
void* filter = (decode_clo(env13556))[2];
//not do dummy comment
void* cons = (decode_clo(env13556))[1];

//creating new closure instance
void** clo22330 = alloc_clo(lam13553_fptr, 3);

//setting env list
clo22330[1] = cons;
clo22330[2] = kont13245;
clo22330[3] = a1314413402;
void* f1324713405 = encode_clo(clo22330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1324713405;
arg_buffer[3] = op;
arg_buffer[4] = a1314513404;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13555 = encode_clo(alloc_clo(lam13555_fptr, 0));

void* lam13557_fptr() // lam13557 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13558 = arg_buffer[1];
//reading env and args
void* a1314413402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13558))[6];
//not do dummy comment
void* lst = (decode_clo(env13558))[5];
//not do dummy comment
void* kont13245 = (decode_clo(env13558))[4];
//not do dummy comment
void* op = (decode_clo(env13558))[3];
//not do dummy comment
void* filter = (decode_clo(env13558))[2];
//not do dummy comment
void* cons = (decode_clo(env13558))[1];

//creating new closure instance
void** clo22332 = alloc_clo(lam13555_fptr, 5);

//setting env list
clo22332[1] = cons;
clo22332[2] = filter;
clo22332[3] = op;
clo22332[4] = kont13245;
clo22332[5] = a1314413402;
void* f1324813403 = encode_clo(clo22332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1324813403;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13557 = encode_clo(alloc_clo(lam13557_fptr, 0));

void* lam13559_fptr() // lam13559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13560 = arg_buffer[1];
//reading env and args
void* a1314713408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13245 = (decode_clo(env13560))[3];
//not do dummy comment
void* op = (decode_clo(env13560))[2];
//not do dummy comment
void* filter = (decode_clo(env13560))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont13245;
arg_buffer[3] = op;
arg_buffer[4] = a1314713408;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13559 = encode_clo(alloc_clo(lam13559_fptr, 0));

void* lam13561_fptr() // lam13561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13562 = arg_buffer[1];
//reading env and args
void* a1314313400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13562))[7];
//not do dummy comment
void* lst = (decode_clo(env13562))[6];
//not do dummy comment
void* kont13245 = (decode_clo(env13562))[5];
//not do dummy comment
void* op = (decode_clo(env13562))[4];
//not do dummy comment
void* cons = (decode_clo(env13562))[3];
//not do dummy comment
void* filter = (decode_clo(env13562))[2];
//not do dummy comment
void* car = (decode_clo(env13562))[1];

//if-clause
bool if_guard22333 = is_true(a1314313400);
if(if_guard22333)
{

//creating new closure instance
void** clo22335 = alloc_clo(lam13557_fptr, 6);

//setting env list
clo22335[1] = cons;
clo22335[2] = filter;
clo22335[3] = op;
clo22335[4] = kont13245;
clo22335[5] = lst;
clo22335[6] = cdr;
void* f1324913401 = encode_clo(clo22335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1324913401;
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
void** clo22337 = alloc_clo(lam13559_fptr, 3);

//setting env list
clo22337[1] = filter;
clo22337[2] = op;
clo22337[3] = kont13245;
void* f1325013407 = encode_clo(clo22337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1325013407;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13561 = encode_clo(alloc_clo(lam13561_fptr, 0));

void* lam13563_fptr() // lam13563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13564 = arg_buffer[1];
//reading env and args
void* a1314213398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13564))[7];
//not do dummy comment
void* lst = (decode_clo(env13564))[6];
//not do dummy comment
void* kont13245 = (decode_clo(env13564))[5];
//not do dummy comment
void* op = (decode_clo(env13564))[4];
//not do dummy comment
void* cons = (decode_clo(env13564))[3];
//not do dummy comment
void* filter = (decode_clo(env13564))[2];
//not do dummy comment
void* car = (decode_clo(env13564))[1];

//creating new closure instance
void** clo22339 = alloc_clo(lam13561_fptr, 7);

//setting env list
clo22339[1] = car;
clo22339[2] = filter;
clo22339[3] = cons;
clo22339[4] = op;
clo22339[5] = kont13245;
clo22339[6] = lst;
clo22339[7] = cdr;
void* f1325113399 = encode_clo(clo22339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1325113399;
arg_buffer[3] = a1314213398;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13563 = encode_clo(alloc_clo(lam13563_fptr, 0));

void* lam13565_fptr() // lam13565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13566 = arg_buffer[1];
//reading env and args
void* a1314013394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env13566))[8];
//not do dummy comment
void* kont13245 = (decode_clo(env13566))[7];
//not do dummy comment
void* op = (decode_clo(env13566))[6];
//not do dummy comment
void* cons = (decode_clo(env13566))[5];
//not do dummy comment
void* list = (decode_clo(env13566))[4];
//not do dummy comment
void* cdr = (decode_clo(env13566))[3];
//not do dummy comment
void* filter = (decode_clo(env13566))[2];
//not do dummy comment
void* car = (decode_clo(env13566))[1];

//if-clause
bool if_guard22340 = is_true(a1314013394);
if(if_guard22340)
{

//creating new closure instance
void** clo22342 = alloc_clo(lam13551_fptr, 1);

//setting env list
clo22342[1] = kont13245;
void* f1324613395 = encode_clo(clo22342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1324613395;
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
void** clo22344 = alloc_clo(lam13563_fptr, 7);

//setting env list
clo22344[1] = car;
clo22344[2] = filter;
clo22344[3] = cons;
clo22344[4] = op;
clo22344[5] = kont13245;
clo22344[6] = lst;
clo22344[7] = cdr;
void* f1325213397 = encode_clo(clo22344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1325213397;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13565 = encode_clo(alloc_clo(lam13565_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13567 = arg_buffer[1];
//reading env and args
void* kont13245 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22346 = alloc_clo(lam13565_fptr, 8);

//setting env list
clo22346[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo22346[2] = filter;
clo22346[3] = cdr;
clo22346[4] = list;
clo22346[5] = cons;
clo22346[6] = op;
clo22346[7] = kont13245;
clo22346[8] = lst;
void* f1325313393 = encode_clo(clo22346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1325313393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam13568_fptr() // lam13568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13569 = arg_buffer[1];
//reading env and args
void* a1315213416 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env13569))[3];
//not do dummy comment
void* a1315013413 = (decode_clo(env13569))[2];
//not do dummy comment
void* kont13254 = (decode_clo(env13569))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont13254;
arg_buffer[3] = a1315013413;
arg_buffer[4] = a1315213416;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13568 = encode_clo(alloc_clo(lam13568_fptr, 0));

void* lam13571_fptr() // lam13571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13572 = arg_buffer[1];
//reading env and args
void* a1315013413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env13572))[4];
//not do dummy comment
void* n = (decode_clo(env13572))[3];
//not do dummy comment
void* kont13254 = (decode_clo(env13572))[2];
//not do dummy comment
void* _u45 = (decode_clo(env13572))[1];
mpz_t* mpzvar22347 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22347, "1", 10);
void* a1315113414 = encode_mpz(mpzvar22347);

//creating new closure instance
void** clo22349 = alloc_clo(lam13568_fptr, 3);

//setting env list
clo22349[1] = kont13254;
clo22349[2] = a1315013413;
clo22349[3] = drop;
void* f1325513415 = encode_clo(clo22349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1325513415;
arg_buffer[3] = n;
arg_buffer[4] = a1315113414;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13571 = encode_clo(alloc_clo(lam13571_fptr, 0));

void* lam13573_fptr() // lam13573 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13574 = arg_buffer[1];
//reading env and args
void* a1314913411 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13574))[6];
//not do dummy comment
void* n = (decode_clo(env13574))[5];
//not do dummy comment
void* lst = (decode_clo(env13574))[4];
//not do dummy comment
void* drop = (decode_clo(env13574))[3];
//not do dummy comment
void* kont13254 = (decode_clo(env13574))[2];
//not do dummy comment
void* _u45 = (decode_clo(env13574))[1];

//if-clause
bool if_guard22350 = is_true(a1314913411);
if(if_guard22350)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13254);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13254))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22352 = alloc_clo(lam13571_fptr, 4);

//setting env list
clo22352[1] = _u45;
clo22352[2] = kont13254;
clo22352[3] = n;
clo22352[4] = drop;
void* f1325613412 = encode_clo(clo22352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1325613412;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13573 = encode_clo(alloc_clo(lam13573_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13576 = arg_buffer[1];
//reading env and args
void* kont13254 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar22353 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22353, "0", 10);
void* a1314813409 = encode_mpz(mpzvar22353);

//creating new closure instance
void** clo22355 = alloc_clo(lam13573_fptr, 6);

//setting env list
clo22355[1] = _u45;
clo22355[2] = kont13254;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo22355[3] = drop;
clo22355[4] = lst;
clo22355[5] = n;
clo22355[6] = cdr;
void* f1325713410 = encode_clo(clo22355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1325713410;
arg_buffer[3] = n;
arg_buffer[4] = a1314813409;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam13577_fptr() // lam13577 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13578 = arg_buffer[1];
//reading env and args
void* a1315613424 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13258 = (decode_clo(env13578))[3];
//not do dummy comment
void* a1315413420 = (decode_clo(env13578))[2];
//not do dummy comment
void* proc = (decode_clo(env13578))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont13258;
arg_buffer[3] = a1315413420;
arg_buffer[4] = a1315613424;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13577 = encode_clo(alloc_clo(lam13577_fptr, 0));

void* lam13579_fptr() // lam13579 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13580 = arg_buffer[1];
//reading env and args
void* a1315513422 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13258 = (decode_clo(env13580))[5];
//not do dummy comment
void* foldr = (decode_clo(env13580))[4];
//not do dummy comment
void* a1315413420 = (decode_clo(env13580))[3];
//not do dummy comment
void* proc = (decode_clo(env13580))[2];
//not do dummy comment
void* acc = (decode_clo(env13580))[1];

//creating new closure instance
void** clo22357 = alloc_clo(lam13577_fptr, 3);

//setting env list
clo22357[1] = proc;
clo22357[2] = a1315413420;
clo22357[3] = kont13258;
void* f1325913423 = encode_clo(clo22357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1325913423;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1315513422;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13579 = encode_clo(alloc_clo(lam13579_fptr, 0));

void* lam13581_fptr() // lam13581 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13582 = arg_buffer[1];
//reading env and args
void* a1315413420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13582))[6];
//not do dummy comment
void* kont13258 = (decode_clo(env13582))[5];
//not do dummy comment
void* foldr = (decode_clo(env13582))[4];
//not do dummy comment
void* lst = (decode_clo(env13582))[3];
//not do dummy comment
void* proc = (decode_clo(env13582))[2];
//not do dummy comment
void* acc = (decode_clo(env13582))[1];

//creating new closure instance
void** clo22359 = alloc_clo(lam13579_fptr, 5);

//setting env list
clo22359[1] = acc;
clo22359[2] = proc;
clo22359[3] = a1315413420;
clo22359[4] = foldr;
clo22359[5] = kont13258;
void* f1326013421 = encode_clo(clo22359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1326013421;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13581 = encode_clo(alloc_clo(lam13581_fptr, 0));

void* lam13583_fptr() // lam13583 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13584 = arg_buffer[1];
//reading env and args
void* a1315313418 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13584))[7];
//not do dummy comment
void* kont13258 = (decode_clo(env13584))[6];
//not do dummy comment
void* car = (decode_clo(env13584))[5];
//not do dummy comment
void* foldr = (decode_clo(env13584))[4];
//not do dummy comment
void* lst = (decode_clo(env13584))[3];
//not do dummy comment
void* proc = (decode_clo(env13584))[2];
//not do dummy comment
void* acc = (decode_clo(env13584))[1];

//if-clause
bool if_guard22360 = is_true(a1315313418);
if(if_guard22360)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13258);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13258))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22362 = alloc_clo(lam13581_fptr, 6);

//setting env list
clo22362[1] = acc;
clo22362[2] = proc;
clo22362[3] = lst;
clo22362[4] = foldr;
clo22362[5] = kont13258;
clo22362[6] = cdr;
void* f1326113419 = encode_clo(clo22362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1326113419;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13583 = encode_clo(alloc_clo(lam13583_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13585 = arg_buffer[1];
//reading env and args
void* kont13258 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22364 = alloc_clo(lam13583_fptr, 7);

//setting env list
clo22364[1] = acc;
clo22364[2] = proc;
clo22364[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo22364[4] = foldr;
clo22364[5] = car;
clo22364[6] = kont13258;
clo22364[7] = cdr;
void* f1326213417 = encode_clo(clo22364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1326213417;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam13586_fptr() // lam13586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13587 = arg_buffer[1];
//reading env and args
void* a1316013432 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13263 = (decode_clo(env13587))[3];
//not do dummy comment
void* a1315813428 = (decode_clo(env13587))[2];
//not do dummy comment
void* cons = (decode_clo(env13587))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont13263;
arg_buffer[3] = a1315813428;
arg_buffer[4] = a1316013432;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13586 = encode_clo(alloc_clo(lam13586_fptr, 0));

void* lam13588_fptr() // lam13588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13589 = arg_buffer[1];
//reading env and args
void* a1315913430 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst2 = (decode_clo(env13589))[5];
//not do dummy comment
void* a1315813428 = (decode_clo(env13589))[4];
//not do dummy comment
void* cons = (decode_clo(env13589))[3];
//not do dummy comment
void* append = (decode_clo(env13589))[2];
//not do dummy comment
void* kont13263 = (decode_clo(env13589))[1];

//creating new closure instance
void** clo22366 = alloc_clo(lam13586_fptr, 3);

//setting env list
clo22366[1] = cons;
clo22366[2] = a1315813428;
clo22366[3] = kont13263;
void* f1326413431 = encode_clo(clo22366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1326413431;
arg_buffer[3] = a1315913430;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13588 = encode_clo(alloc_clo(lam13588_fptr, 0));

void* lam13590_fptr() // lam13590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13591 = arg_buffer[1];
//reading env and args
void* a1315813428 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13591))[6];
//not do dummy comment
void* lst2 = (decode_clo(env13591))[5];
//not do dummy comment
void* lst1 = (decode_clo(env13591))[4];
//not do dummy comment
void* cons = (decode_clo(env13591))[3];
//not do dummy comment
void* append = (decode_clo(env13591))[2];
//not do dummy comment
void* kont13263 = (decode_clo(env13591))[1];

//creating new closure instance
void** clo22368 = alloc_clo(lam13588_fptr, 5);

//setting env list
clo22368[1] = kont13263;
clo22368[2] = append;
clo22368[3] = cons;
clo22368[4] = a1315813428;
clo22368[5] = lst2;
void* f1326513429 = encode_clo(clo22368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1326513429;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13590 = encode_clo(alloc_clo(lam13590_fptr, 0));

void* lam13592_fptr() // lam13592 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13593 = arg_buffer[1];
//reading env and args
void* a1315713426 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env13593))[7];
//not do dummy comment
void* lst2 = (decode_clo(env13593))[6];
//not do dummy comment
void* cons = (decode_clo(env13593))[5];
//not do dummy comment
void* append = (decode_clo(env13593))[4];
//not do dummy comment
void* kont13263 = (decode_clo(env13593))[3];
//not do dummy comment
void* lst1 = (decode_clo(env13593))[2];
//not do dummy comment
void* car = (decode_clo(env13593))[1];

//if-clause
bool if_guard22369 = is_true(a1315713426);
if(if_guard22369)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13263);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13263))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22371 = alloc_clo(lam13590_fptr, 6);

//setting env list
clo22371[1] = kont13263;
clo22371[2] = append;
clo22371[3] = cons;
clo22371[4] = lst1;
clo22371[5] = lst2;
clo22371[6] = cdr;
void* f1326613427 = encode_clo(clo22371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1326613427;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13592 = encode_clo(alloc_clo(lam13592_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13594 = arg_buffer[1];
//reading env and args
void* kont13263 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22373 = alloc_clo(lam13592_fptr, 7);

//setting env list
clo22373[1] = car;
clo22373[2] = lst1;
clo22373[3] = kont13263;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo22373[4] = append;
clo22373[5] = cons;
clo22373[6] = lst2;
clo22373[7] = cdr;
void* f1326713425 = encode_clo(clo22373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1326713425;
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
void* _13595 = arg_buffer[1];
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

void* kont1326813433 = prim_car(lst);
void* lst13434 = prim_cdr(lst);
void* x1316113435 = apply_prim_hash(lst13434);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1326813433);
arg_buffer[2] = x1316113435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1326813433))[0]);
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
void* _13596 = arg_buffer[1];
//reading env and args
void* kont13270 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1316213436 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13270);
arg_buffer[2] = x1316213436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13270))[0]);
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
void* _13597 = arg_buffer[1];
//reading env and args
void* kont13271 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1316313437 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13271);
arg_buffer[2] = x1316313437;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13271))[0]);
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
void* _13598 = arg_buffer[1];
//reading env and args
void* kont13272 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1316413438 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13272);
arg_buffer[2] = x1316413438;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13272))[0]);
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
void* _13599 = arg_buffer[1];
//reading env and args
void* kont13273 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1316513439 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13273);
arg_buffer[2] = x1316513439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13273))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam13601_fptr() // lam13601 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13602 = arg_buffer[1];
//reading env and args
void* a1317113448 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13274 = (decode_clo(env13602))[3];
//not do dummy comment
void* _u42 = (decode_clo(env13602))[2];
//not do dummy comment
void* n = (decode_clo(env13602))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont13274;
arg_buffer[3] = n;
arg_buffer[4] = a1317113448;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13601 = encode_clo(alloc_clo(lam13601_fptr, 0));

void* lam13603_fptr() // lam13603 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13604 = arg_buffer[1];
//reading env and args
void* a1317013446 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13274 = (decode_clo(env13604))[4];
//not do dummy comment
void* _u42 = (decode_clo(env13604))[3];
//not do dummy comment
void* fact = (decode_clo(env13604))[2];
//not do dummy comment
void* n = (decode_clo(env13604))[1];

//creating new closure instance
void** clo22375 = alloc_clo(lam13601_fptr, 3);

//setting env list
clo22375[1] = n;
clo22375[2] = _u42;
clo22375[3] = kont13274;
void* f1327513447 = encode_clo(clo22375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = f1327513447;
arg_buffer[3] = a1317013446;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam13603 = encode_clo(alloc_clo(lam13603_fptr, 0));

void* lam13606_fptr() // lam13606 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env13607 = arg_buffer[1];
//reading env and args
void* a1316713442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13274 = (decode_clo(env13607))[5];
//not do dummy comment
void* _u42 = (decode_clo(env13607))[4];
//not do dummy comment
void* fact = (decode_clo(env13607))[3];
//not do dummy comment
void* n = (decode_clo(env13607))[2];
//not do dummy comment
void* _u45 = (decode_clo(env13607))[1];

//if-clause
bool if_guard22376 = is_true(a1316713442);
if(if_guard22376)
{
mpz_t* mpzvar22377 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22377, "1", 10);
void* x1316813443 = encode_mpz(mpzvar22377);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13274);
arg_buffer[2] = x1316813443;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13274))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar22378 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22378, "1", 10);
void* a1316913444 = encode_mpz(mpzvar22378);

//creating new closure instance
void** clo22380 = alloc_clo(lam13603_fptr, 4);

//setting env list
clo22380[1] = n;
clo22380[2] = fact;
clo22380[3] = _u42;
clo22380[4] = kont13274;
void* f1327613445 = encode_clo(clo22380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1327613445;
arg_buffer[3] = n;
arg_buffer[4] = a1316913444;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam13606 = encode_clo(alloc_clo(lam13606_fptr, 0));

void* fact_fptr() // fact 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13609 = arg_buffer[1];
//reading env and args
void* kont13274 = arg_buffer[2];
void* n = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22381 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22381, "0", 10);
void* a1316613440 = encode_mpz(mpzvar22381);

//creating new closure instance
void** clo22383 = alloc_clo(lam13606_fptr, 5);

//setting env list
clo22383[1] = _u45;
clo22383[2] = n;
void* fact = encode_clo(alloc_clo(fact_fptr, 0));

clo22383[3] = fact;
clo22383[4] = _u42;
clo22383[5] = kont13274;
void* f1327713441 = encode_clo(clo22383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1327713441;
arg_buffer[3] = a1316613440;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* fact = encode_clo(alloc_clo(fact_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _13611 = arg_buffer[1];
//reading env and args
void* kont13278 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar22384 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22384, "5", 10);
void* a1317213449 = encode_mpz(mpzvar22384);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = kont13278;
arg_buffer[3] = a1317213449;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
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

