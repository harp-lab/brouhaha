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
void* _42459 = arg_buffer[1];
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

void* kont4219642297 = prim_car(lst);
void* lst42298 = prim_cdr(lst);
void* x4210842299 = apply_prim__u43(lst42298);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4219642297);
arg_buffer[2] = x4210842299;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4219642297))[0]);
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
void* _42460 = arg_buffer[1];
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

void* kont4219842300 = prim_car(lst);
void* lst42301 = prim_cdr(lst);
void* x4210942302 = apply_prim__u45(lst42301);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4219842300);
arg_buffer[2] = x4210942302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4219842300))[0]);
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
void* _42461 = arg_buffer[1];
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

void* kont4220042303 = prim_car(lst);
void* lst42304 = prim_cdr(lst);
void* x4211042305 = apply_prim__u42(lst42304);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4220042303);
arg_buffer[2] = x4211042305;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4220042303))[0]);
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
void* _42462 = arg_buffer[1];
//reading env and args
void* kont42202 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4211142306 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42202);
arg_buffer[2] = x4211142306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42202))[0]);
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
void* _42463 = arg_buffer[1];
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

void* kont4220342307 = prim_car(lst);
void* lst42308 = prim_cdr(lst);
void* x4211242309 = apply_prim__u47(lst42308);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4220342307);
arg_buffer[2] = x4211242309;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4220342307))[0]);
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
void* _42464 = arg_buffer[1];
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

void* kont4220542310 = prim_car(lst);
void* lst42311 = prim_cdr(lst);
void* x4211342312 = apply_prim__u61(lst42311);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4220542310);
arg_buffer[2] = x4211342312;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4220542310))[0]);
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
void* _42465 = arg_buffer[1];
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

void* kont4220742313 = prim_car(lst);
void* lst42314 = prim_cdr(lst);
void* x4211442315 = apply_prim__u62(lst42314);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4220742313);
arg_buffer[2] = x4211442315;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4220742313))[0]);
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
void* _42466 = arg_buffer[1];
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

void* kont4220942316 = prim_car(lst);
void* lst42317 = prim_cdr(lst);
void* x4211542318 = apply_prim__u60(lst42317);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4220942316);
arg_buffer[2] = x4211542318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4220942316))[0]);
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
void* _42467 = arg_buffer[1];
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

void* kont4221142319 = prim_car(lst);
void* lst42320 = prim_cdr(lst);
void* x4211642321 = apply_prim__u60_u61(lst42320);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4221142319);
arg_buffer[2] = x4211642321;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4221142319))[0]);
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
void* _42468 = arg_buffer[1];
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

void* kont4221342322 = prim_car(lst);
void* lst42323 = prim_cdr(lst);
void* x4211742324 = apply_prim__u62_u61(lst42323);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4221342322);
arg_buffer[2] = x4211742324;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4221342322))[0]);
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
void* _42469 = arg_buffer[1];
//reading env and args
void* kont42215 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4211842325 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42215);
arg_buffer[2] = x4211842325;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42215))[0]);
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
void* _42470 = arg_buffer[1];
//reading env and args
void* kont42216 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4211942326 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42216);
arg_buffer[2] = x4211942326;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42216))[0]);
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
void* _42471 = arg_buffer[1];
//reading env and args
void* kont42217 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4212042327 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42217);
arg_buffer[2] = x4212042327;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42217))[0]);
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
void* _42472 = arg_buffer[1];
//reading env and args
void* kont42218 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4212142328 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42218);
arg_buffer[2] = x4212142328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42218))[0]);
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
void* _42473 = arg_buffer[1];
//reading env and args
void* kont42219 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4212242329 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42219);
arg_buffer[2] = x4212242329;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42219))[0]);
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
void* _42474 = arg_buffer[1];
//reading env and args
void* kont42220 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4212342330 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42220);
arg_buffer[2] = x4212342330;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42220))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam42475_fptr() // lam42475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42476 = arg_buffer[1];
//reading env and args
void* a4212642334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env42476))[3];
//not do dummy comment
void* a4212442331 = (decode_clo(env42476))[2];
//not do dummy comment
void* kont42221 = (decode_clo(env42476))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42221;
arg_buffer[3] = a4212442331;
arg_buffer[4] = a4212642334;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42475 = encode_clo(alloc_clo(lam42475_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42479 = arg_buffer[1];
//reading env and args
void* kont42221 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49096 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49096, "0", 10);
void* a4212442331 = encode_mpz(mpzvar49096);
mpz_t* mpzvar49097 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49097, "2", 10);
void* a4212542332 = encode_mpz(mpzvar49097);

//creating new closure instance
void** clo49099 = alloc_clo(lam42475_fptr, 3);

//setting env list
clo49099[1] = kont42221;
clo49099[2] = a4212442331;
clo49099[3] = equal_u63;
void* f4222242333 = encode_clo(clo49099);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4222242333;
arg_buffer[3] = x;
arg_buffer[4] = a4212542332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam42480_fptr() // lam42480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42481 = arg_buffer[1];
//reading env and args
void* a4212942338 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env42481))[3];
//not do dummy comment
void* a4212742335 = (decode_clo(env42481))[2];
//not do dummy comment
void* kont42223 = (decode_clo(env42481))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont42223;
arg_buffer[3] = a4212742335;
arg_buffer[4] = a4212942338;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42480 = encode_clo(alloc_clo(lam42480_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42484 = arg_buffer[1];
//reading env and args
void* kont42223 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49100 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49100, "1", 10);
void* a4212742335 = encode_mpz(mpzvar49100);
mpz_t* mpzvar49101 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49101, "2", 10);
void* a4212842336 = encode_mpz(mpzvar49101);

//creating new closure instance
void** clo49103 = alloc_clo(lam42480_fptr, 3);

//setting env list
clo49103[1] = kont42223;
clo49103[2] = a4212742335;
clo49103[3] = equal_u63;
void* f4222442337 = encode_clo(clo49103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4222442337;
arg_buffer[3] = x;
arg_buffer[4] = a4212842336;
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
void* _42485 = arg_buffer[1];
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

void* kont4222542339 = prim_car(x);
void* x42340 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4222542339);
arg_buffer[2] = x42340;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4222542339))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam42488_fptr() // lam42488 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42489 = arg_buffer[1];
//reading env and args
void* a4213542350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42227 = (decode_clo(env42489))[3];
//not do dummy comment
void* x = (decode_clo(env42489))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42489))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont42227;
arg_buffer[3] = x;
arg_buffer[4] = a4213542350;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42488 = encode_clo(alloc_clo(lam42488_fptr, 0));

void* lam42490_fptr() // lam42490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42491 = arg_buffer[1];
//reading env and args
void* a4213342347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42491))[5];
//not do dummy comment
void* lst = (decode_clo(env42491))[4];
//not do dummy comment
void* kont42227 = (decode_clo(env42491))[3];
//not do dummy comment
void* x = (decode_clo(env42491))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42491))[1];

//if-clause
bool if_guard49104 = is_true(a4213342347);
if(if_guard49104)
{
void* x4213442348 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42227);
arg_buffer[2] = x4213442348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42227))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49106 = alloc_clo(lam42488_fptr, 3);

//setting env list
clo49106[1] = member_u63;
clo49106[2] = x;
clo49106[3] = kont42227;
void* f4222842349 = encode_clo(clo49106);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4222842349;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42490 = encode_clo(alloc_clo(lam42490_fptr, 0));

void* lam42492_fptr() // lam42492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42493 = arg_buffer[1];
//reading env and args
void* a4213242345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42493))[6];
//not do dummy comment
void* lst = (decode_clo(env42493))[5];
//not do dummy comment
void* kont42227 = (decode_clo(env42493))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env42493))[3];
//not do dummy comment
void* x = (decode_clo(env42493))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42493))[1];

//creating new closure instance
void** clo49108 = alloc_clo(lam42490_fptr, 5);

//setting env list
clo49108[1] = member_u63;
clo49108[2] = x;
clo49108[3] = kont42227;
clo49108[4] = lst;
clo49108[5] = cdr;
void* f4222942346 = encode_clo(clo49108);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4222942346;
arg_buffer[3] = a4213242345;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42492 = encode_clo(alloc_clo(lam42492_fptr, 0));

void* lam42494_fptr() // lam42494 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42495 = arg_buffer[1];
//reading env and args
void* a4213042342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42495))[7];
//not do dummy comment
void* lst = (decode_clo(env42495))[6];
//not do dummy comment
void* kont42227 = (decode_clo(env42495))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env42495))[4];
//not do dummy comment
void* x = (decode_clo(env42495))[3];
//not do dummy comment
void* car = (decode_clo(env42495))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env42495))[1];

//if-clause
bool if_guard49109 = is_true(a4213042342);
if(if_guard49109)
{
void* x4213142343 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42227);
arg_buffer[2] = x4213142343;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42227))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49111 = alloc_clo(lam42492_fptr, 6);

//setting env list
clo49111[1] = member_u63;
clo49111[2] = x;
clo49111[3] = equal_u63;
clo49111[4] = kont42227;
clo49111[5] = lst;
clo49111[6] = cdr;
void* f4223042344 = encode_clo(clo49111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4223042344;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42494 = encode_clo(alloc_clo(lam42494_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42496 = arg_buffer[1];
//reading env and args
void* kont42227 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49113 = alloc_clo(lam42494_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo49113[1] = member_u63;
clo49113[2] = car;
clo49113[3] = x;
clo49113[4] = equal_u63;
clo49113[5] = kont42227;
clo49113[6] = lst;
clo49113[7] = cdr;
void* f4223142341 = encode_clo(clo49113);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4223142341;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam42497_fptr() // lam42497 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42498 = arg_buffer[1];
//reading env and args
void* a4213942358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4213842356 = (decode_clo(env42498))[4];
//not do dummy comment
void* foldl = (decode_clo(env42498))[3];
//not do dummy comment
void* kont42232 = (decode_clo(env42498))[2];
//not do dummy comment
void* fun = (decode_clo(env42498))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont42232;
arg_buffer[3] = fun;
arg_buffer[4] = a4213842356;
arg_buffer[5] = a4213942358;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42497 = encode_clo(alloc_clo(lam42497_fptr, 0));

void* lam42499_fptr() // lam42499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42500 = arg_buffer[1];
//reading env and args
void* a4213842356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42500))[5];
//not do dummy comment
void* lst = (decode_clo(env42500))[4];
//not do dummy comment
void* foldl = (decode_clo(env42500))[3];
//not do dummy comment
void* kont42232 = (decode_clo(env42500))[2];
//not do dummy comment
void* fun = (decode_clo(env42500))[1];

//creating new closure instance
void** clo49115 = alloc_clo(lam42497_fptr, 4);

//setting env list
clo49115[1] = fun;
clo49115[2] = kont42232;
clo49115[3] = foldl;
clo49115[4] = a4213842356;
void* f4223342357 = encode_clo(clo49115);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4223342357;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42499 = encode_clo(alloc_clo(lam42499_fptr, 0));

void* lam42501_fptr() // lam42501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42502 = arg_buffer[1];
//reading env and args
void* a4213742354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42502))[6];
//not do dummy comment
void* lst = (decode_clo(env42502))[5];
//not do dummy comment
void* acc = (decode_clo(env42502))[4];
//not do dummy comment
void* foldl = (decode_clo(env42502))[3];
//not do dummy comment
void* kont42232 = (decode_clo(env42502))[2];
//not do dummy comment
void* fun = (decode_clo(env42502))[1];

//creating new closure instance
void** clo49117 = alloc_clo(lam42499_fptr, 5);

//setting env list
clo49117[1] = fun;
clo49117[2] = kont42232;
clo49117[3] = foldl;
clo49117[4] = lst;
clo49117[5] = cdr;
void* f4223442355 = encode_clo(clo49117);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4223442355;
arg_buffer[3] = a4213742354;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42501 = encode_clo(alloc_clo(lam42501_fptr, 0));

void* lam42503_fptr() // lam42503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42504 = arg_buffer[1];
//reading env and args
void* a4213642352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42504))[7];
//not do dummy comment
void* lst = (decode_clo(env42504))[6];
//not do dummy comment
void* acc = (decode_clo(env42504))[5];
//not do dummy comment
void* car = (decode_clo(env42504))[4];
//not do dummy comment
void* foldl = (decode_clo(env42504))[3];
//not do dummy comment
void* kont42232 = (decode_clo(env42504))[2];
//not do dummy comment
void* fun = (decode_clo(env42504))[1];

//if-clause
bool if_guard49118 = is_true(a4213642352);
if(if_guard49118)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42232);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42232))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49120 = alloc_clo(lam42501_fptr, 6);

//setting env list
clo49120[1] = fun;
clo49120[2] = kont42232;
clo49120[3] = foldl;
clo49120[4] = acc;
clo49120[5] = lst;
clo49120[6] = cdr;
void* f4223542353 = encode_clo(clo49120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4223542353;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42503 = encode_clo(alloc_clo(lam42503_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42505 = arg_buffer[1];
//reading env and args
void* kont42232 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49122 = alloc_clo(lam42503_fptr, 7);

//setting env list
clo49122[1] = fun;
clo49122[2] = kont42232;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo49122[3] = foldl;
clo49122[4] = car;
clo49122[5] = acc;
clo49122[6] = lst;
clo49122[7] = cdr;
void* f4223642351 = encode_clo(clo49122);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4223642351;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam42506_fptr() // lam42506 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42507 = arg_buffer[1];
//reading env and args
void* a4214342366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42507))[3];
//not do dummy comment
void* a4214142362 = (decode_clo(env42507))[2];
//not do dummy comment
void* kont42237 = (decode_clo(env42507))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42237;
arg_buffer[3] = a4214142362;
arg_buffer[4] = a4214342366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42506 = encode_clo(alloc_clo(lam42506_fptr, 0));

void* lam42508_fptr() // lam42508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42509 = arg_buffer[1];
//reading env and args
void* a4214242364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42509))[5];
//not do dummy comment
void* cons = (decode_clo(env42509))[4];
//not do dummy comment
void* kont42237 = (decode_clo(env42509))[3];
//not do dummy comment
void* a4214142362 = (decode_clo(env42509))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42509))[1];

//creating new closure instance
void** clo49124 = alloc_clo(lam42506_fptr, 3);

//setting env list
clo49124[1] = kont42237;
clo49124[2] = a4214142362;
clo49124[3] = reverse_u45helper;
void* f4223842365 = encode_clo(clo49124);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4223842365;
arg_buffer[3] = a4214242364;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42508 = encode_clo(alloc_clo(lam42508_fptr, 0));

void* lam42510_fptr() // lam42510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42511 = arg_buffer[1];
//reading env and args
void* a4214142362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42511))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42511))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42511))[4];
//not do dummy comment
void* car = (decode_clo(env42511))[3];
//not do dummy comment
void* cons = (decode_clo(env42511))[2];
//not do dummy comment
void* kont42237 = (decode_clo(env42511))[1];

//creating new closure instance
void** clo49126 = alloc_clo(lam42508_fptr, 5);

//setting env list
clo49126[1] = lst2;
clo49126[2] = a4214142362;
clo49126[3] = kont42237;
clo49126[4] = cons;
clo49126[5] = reverse_u45helper;
void* f4223942363 = encode_clo(clo49126);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4223942363;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42510 = encode_clo(alloc_clo(lam42510_fptr, 0));

void* lam42512_fptr() // lam42512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42513 = arg_buffer[1];
//reading env and args
void* a4214042360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42513))[7];
//not do dummy comment
void* lst = (decode_clo(env42513))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42513))[5];
//not do dummy comment
void* lst2 = (decode_clo(env42513))[4];
//not do dummy comment
void* car = (decode_clo(env42513))[3];
//not do dummy comment
void* cons = (decode_clo(env42513))[2];
//not do dummy comment
void* kont42237 = (decode_clo(env42513))[1];

//if-clause
bool if_guard49127 = is_true(a4214042360);
if(if_guard49127)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42237);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42237))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49129 = alloc_clo(lam42510_fptr, 6);

//setting env list
clo49129[1] = kont42237;
clo49129[2] = cons;
clo49129[3] = car;
clo49129[4] = lst2;
clo49129[5] = reverse_u45helper;
clo49129[6] = lst;
void* f4224042361 = encode_clo(clo49129);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4224042361;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42512 = encode_clo(alloc_clo(lam42512_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42514 = arg_buffer[1];
//reading env and args
void* kont42237 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49131 = alloc_clo(lam42512_fptr, 7);

//setting env list
clo49131[1] = kont42237;
clo49131[2] = cons;
clo49131[3] = car;
clo49131[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo49131[5] = reverse_u45helper;
clo49131[6] = lst;
clo49131[7] = cdr;
void* f4224142359 = encode_clo(clo49131);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4224142359;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam42515_fptr() // lam42515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42516 = arg_buffer[1];
//reading env and args
void* a4214442368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env42516))[3];
//not do dummy comment
void* lst = (decode_clo(env42516))[2];
//not do dummy comment
void* kont42242 = (decode_clo(env42516))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont42242;
arg_buffer[3] = lst;
arg_buffer[4] = a4214442368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42515 = encode_clo(alloc_clo(lam42515_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42517 = arg_buffer[1];
//reading env and args
void* kont42242 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49133 = alloc_clo(lam42515_fptr, 3);

//setting env list
clo49133[1] = kont42242;
clo49133[2] = lst;
clo49133[3] = reverse_u45helper;
void* f4224342367 = encode_clo(clo49133);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4224342367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam42518_fptr() // lam42518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42519 = arg_buffer[1];
//reading env and args
void* x4214742373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42244 = (decode_clo(env42519))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42244);
arg_buffer[2] = x4214742373;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42244))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42518 = encode_clo(alloc_clo(lam42518_fptr, 0));

void* lam42520_fptr() // lam42520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42521 = arg_buffer[1];
//reading env and args
void* a4215242382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42244 = (decode_clo(env42521))[4];
//not do dummy comment
void* a4214842375 = (decode_clo(env42521))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42521))[2];
//not do dummy comment
void* a4215042378 = (decode_clo(env42521))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42244;
arg_buffer[3] = a4214842375;
arg_buffer[4] = a4215042378;
arg_buffer[5] = a4215242382;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42520 = encode_clo(alloc_clo(lam42520_fptr, 0));

void* lam42522_fptr() // lam42522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42523 = arg_buffer[1];
//reading env and args
void* a4215142380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42244 = (decode_clo(env42523))[6];
//not do dummy comment
void* a4214842375 = (decode_clo(env42523))[5];
//not do dummy comment
void* cons = (decode_clo(env42523))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env42523))[3];
//not do dummy comment
void* a4215042378 = (decode_clo(env42523))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42523))[1];

//creating new closure instance
void** clo49135 = alloc_clo(lam42520_fptr, 4);

//setting env list
clo49135[1] = a4215042378;
clo49135[2] = take_u45helper;
clo49135[3] = a4214842375;
clo49135[4] = kont42244;
void* f4224642381 = encode_clo(clo49135);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4224642381;
arg_buffer[3] = a4215142380;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42522 = encode_clo(alloc_clo(lam42522_fptr, 0));

void* lam42524_fptr() // lam42524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42525 = arg_buffer[1];
//reading env and args
void* a4215042378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42525))[7];
//not do dummy comment
void* kont42244 = (decode_clo(env42525))[6];
//not do dummy comment
void* a4214842375 = (decode_clo(env42525))[5];
//not do dummy comment
void* car = (decode_clo(env42525))[4];
//not do dummy comment
void* cons = (decode_clo(env42525))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env42525))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42525))[1];

//creating new closure instance
void** clo49137 = alloc_clo(lam42522_fptr, 6);

//setting env list
clo49137[1] = lst2;
clo49137[2] = a4215042378;
clo49137[3] = take_u45helper;
clo49137[4] = cons;
clo49137[5] = a4214842375;
clo49137[6] = kont42244;
void* f4224742379 = encode_clo(clo49137);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4224742379;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42524 = encode_clo(alloc_clo(lam42524_fptr, 0));

void* lam42527_fptr() // lam42527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42528 = arg_buffer[1];
//reading env and args
void* a4214842375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42528))[8];
//not do dummy comment
void* kont42244 = (decode_clo(env42528))[7];
//not do dummy comment
void* cons = (decode_clo(env42528))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42528))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42528))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42528))[3];
//not do dummy comment
void* n = (decode_clo(env42528))[2];
//not do dummy comment
void* car = (decode_clo(env42528))[1];
mpz_t* mpzvar49138 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49138, "1", 10);
void* a4214942376 = encode_mpz(mpzvar49138);

//creating new closure instance
void** clo49140 = alloc_clo(lam42524_fptr, 7);

//setting env list
clo49140[1] = lst2;
clo49140[2] = take_u45helper;
clo49140[3] = cons;
clo49140[4] = car;
clo49140[5] = a4214842375;
clo49140[6] = kont42244;
clo49140[7] = lst;
void* f4224842377 = encode_clo(clo49140);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4224842377;
arg_buffer[3] = n;
arg_buffer[4] = a4214942376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42527 = encode_clo(alloc_clo(lam42527_fptr, 0));

void* lam42529_fptr() // lam42529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42530 = arg_buffer[1];
//reading env and args
void* a4214642371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42530))[10];
//not do dummy comment
void* lst = (decode_clo(env42530))[9];
//not do dummy comment
void* kont42244 = (decode_clo(env42530))[8];
//not do dummy comment
void* reverse = (decode_clo(env42530))[7];
//not do dummy comment
void* cons = (decode_clo(env42530))[6];
//not do dummy comment
void* _u45 = (decode_clo(env42530))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env42530))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42530))[3];
//not do dummy comment
void* n = (decode_clo(env42530))[2];
//not do dummy comment
void* car = (decode_clo(env42530))[1];

//if-clause
bool if_guard49141 = is_true(a4214642371);
if(if_guard49141)
{

//creating new closure instance
void** clo49143 = alloc_clo(lam42518_fptr, 1);

//setting env list
clo49143[1] = kont42244;
void* f4224542372 = encode_clo(clo49143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4224542372;
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
void** clo49145 = alloc_clo(lam42527_fptr, 8);

//setting env list
clo49145[1] = car;
clo49145[2] = n;
clo49145[3] = lst2;
clo49145[4] = take_u45helper;
clo49145[5] = _u45;
clo49145[6] = cons;
clo49145[7] = kont42244;
clo49145[8] = lst;
void* f4224942374 = encode_clo(clo49145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4224942374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42529 = encode_clo(alloc_clo(lam42529_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42532 = arg_buffer[1];
//reading env and args
void* kont42244 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar49146 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49146, "0", 10);
void* a4214542369 = encode_mpz(mpzvar49146);

//creating new closure instance
void** clo49148 = alloc_clo(lam42529_fptr, 10);

//setting env list
clo49148[1] = car;
clo49148[2] = n;
clo49148[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo49148[4] = take_u45helper;
clo49148[5] = _u45;
clo49148[6] = cons;
clo49148[7] = reverse;
clo49148[8] = kont42244;
clo49148[9] = lst;
clo49148[10] = cdr;
void* f4225042370 = encode_clo(clo49148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4225042370;
arg_buffer[3] = n;
arg_buffer[4] = a4214542369;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam42533_fptr() // lam42533 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42534 = arg_buffer[1];
//reading env and args
void* a4215342384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42534))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env42534))[3];
//not do dummy comment
void* n = (decode_clo(env42534))[2];
//not do dummy comment
void* kont42251 = (decode_clo(env42534))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont42251;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4215342384;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42533 = encode_clo(alloc_clo(lam42533_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42535 = arg_buffer[1];
//reading env and args
void* kont42251 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49150 = alloc_clo(lam42533_fptr, 4);

//setting env list
clo49150[1] = kont42251;
clo49150[2] = n;
clo49150[3] = take_u45helper;
clo49150[4] = lst;
void* f4225242383 = encode_clo(clo49150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4225242383;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam42537_fptr() // lam42537 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42538 = arg_buffer[1];
//reading env and args
void* a4215842392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4215642388 = (decode_clo(env42538))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42538))[2];
//not do dummy comment
void* kont42253 = (decode_clo(env42538))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont42253;
arg_buffer[3] = a4215642388;
arg_buffer[4] = a4215842392;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42537 = encode_clo(alloc_clo(lam42537_fptr, 0));

void* lam42539_fptr() // lam42539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42540 = arg_buffer[1];
//reading env and args
void* a4215742390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env42540))[4];
//not do dummy comment
void* a4215642388 = (decode_clo(env42540))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42540))[2];
//not do dummy comment
void* kont42253 = (decode_clo(env42540))[1];

//creating new closure instance
void** clo49152 = alloc_clo(lam42537_fptr, 3);

//setting env list
clo49152[1] = kont42253;
clo49152[2] = _u43;
clo49152[3] = a4215642388;
void* f4225442391 = encode_clo(clo49152);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4225442391;
arg_buffer[3] = a4215742390;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42539 = encode_clo(alloc_clo(lam42539_fptr, 0));

void* lam42542_fptr() // lam42542 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42543 = arg_buffer[1];
//reading env and args
void* a4215442386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42543))[5];
//not do dummy comment
void* lst = (decode_clo(env42543))[4];
//not do dummy comment
void* length = (decode_clo(env42543))[3];
//not do dummy comment
void* _u43 = (decode_clo(env42543))[2];
//not do dummy comment
void* kont42253 = (decode_clo(env42543))[1];

//if-clause
bool if_guard49153 = is_true(a4215442386);
if(if_guard49153)
{
mpz_t* mpzvar49154 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49154, "0", 10);
void* x4215542387 = encode_mpz(mpzvar49154);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42253);
arg_buffer[2] = x4215542387;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42253))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar49155 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49155, "1", 10);
void* a4215642388 = encode_mpz(mpzvar49155);

//creating new closure instance
void** clo49157 = alloc_clo(lam42539_fptr, 4);

//setting env list
clo49157[1] = kont42253;
clo49157[2] = _u43;
clo49157[3] = a4215642388;
clo49157[4] = length;
void* f4225542389 = encode_clo(clo49157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4225542389;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42542 = encode_clo(alloc_clo(lam42542_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42544 = arg_buffer[1];
//reading env and args
void* kont42253 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49159 = alloc_clo(lam42542_fptr, 5);

//setting env list
clo49159[1] = kont42253;
clo49159[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo49159[3] = length;
clo49159[4] = lst;
clo49159[5] = cdr;
void* f4225642385 = encode_clo(clo49159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4225642385;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam42545_fptr() // lam42545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42546 = arg_buffer[1];
//reading env and args
void* x4216042396 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42257 = (decode_clo(env42546))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42257);
arg_buffer[2] = x4216042396;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42257))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42545 = encode_clo(alloc_clo(lam42545_fptr, 0));

void* lam42547_fptr() // lam42547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42548 = arg_buffer[1];
//reading env and args
void* a4216442404 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4216242400 = (decode_clo(env42548))[3];
//not do dummy comment
void* kont42257 = (decode_clo(env42548))[2];
//not do dummy comment
void* cons = (decode_clo(env42548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42257;
arg_buffer[3] = a4216242400;
arg_buffer[4] = a4216442404;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42547 = encode_clo(alloc_clo(lam42547_fptr, 0));

void* lam42549_fptr() // lam42549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42550 = arg_buffer[1];
//reading env and args
void* a4216342402 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4216242400 = (decode_clo(env42550))[5];
//not do dummy comment
void* kont42257 = (decode_clo(env42550))[4];
//not do dummy comment
void* map = (decode_clo(env42550))[3];
//not do dummy comment
void* proc = (decode_clo(env42550))[2];
//not do dummy comment
void* cons = (decode_clo(env42550))[1];

//creating new closure instance
void** clo49161 = alloc_clo(lam42547_fptr, 3);

//setting env list
clo49161[1] = cons;
clo49161[2] = kont42257;
clo49161[3] = a4216242400;
void* f4225942403 = encode_clo(clo49161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4225942403;
arg_buffer[3] = proc;
arg_buffer[4] = a4216342402;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42549 = encode_clo(alloc_clo(lam42549_fptr, 0));

void* lam42551_fptr() // lam42551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42552 = arg_buffer[1];
//reading env and args
void* a4216242400 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42552))[6];
//not do dummy comment
void* kont42257 = (decode_clo(env42552))[5];
//not do dummy comment
void* lst = (decode_clo(env42552))[4];
//not do dummy comment
void* map = (decode_clo(env42552))[3];
//not do dummy comment
void* proc = (decode_clo(env42552))[2];
//not do dummy comment
void* cons = (decode_clo(env42552))[1];

//creating new closure instance
void** clo49163 = alloc_clo(lam42549_fptr, 5);

//setting env list
clo49163[1] = cons;
clo49163[2] = proc;
clo49163[3] = map;
clo49163[4] = kont42257;
clo49163[5] = a4216242400;
void* f4226042401 = encode_clo(clo49163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4226042401;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42551 = encode_clo(alloc_clo(lam42551_fptr, 0));

void* lam42553_fptr() // lam42553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42554 = arg_buffer[1];
//reading env and args
void* a4216142398 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42554))[6];
//not do dummy comment
void* kont42257 = (decode_clo(env42554))[5];
//not do dummy comment
void* lst = (decode_clo(env42554))[4];
//not do dummy comment
void* map = (decode_clo(env42554))[3];
//not do dummy comment
void* proc = (decode_clo(env42554))[2];
//not do dummy comment
void* cons = (decode_clo(env42554))[1];

//creating new closure instance
void** clo49165 = alloc_clo(lam42551_fptr, 6);

//setting env list
clo49165[1] = cons;
clo49165[2] = proc;
clo49165[3] = map;
clo49165[4] = lst;
clo49165[5] = kont42257;
clo49165[6] = cdr;
void* f4226142399 = encode_clo(clo49165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4226142399;
arg_buffer[3] = a4216142398;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42553 = encode_clo(alloc_clo(lam42553_fptr, 0));

void* lam42555_fptr() // lam42555 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42556 = arg_buffer[1];
//reading env and args
void* a4215942394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42257 = (decode_clo(env42556))[8];
//not do dummy comment
void* lst = (decode_clo(env42556))[7];
//not do dummy comment
void* map = (decode_clo(env42556))[6];
//not do dummy comment
void* proc = (decode_clo(env42556))[5];
//not do dummy comment
void* car = (decode_clo(env42556))[4];
//not do dummy comment
void* cons = (decode_clo(env42556))[3];
//not do dummy comment
void* list = (decode_clo(env42556))[2];
//not do dummy comment
void* cdr = (decode_clo(env42556))[1];

//if-clause
bool if_guard49166 = is_true(a4215942394);
if(if_guard49166)
{

//creating new closure instance
void** clo49168 = alloc_clo(lam42545_fptr, 1);

//setting env list
clo49168[1] = kont42257;
void* f4225842395 = encode_clo(clo49168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4225842395;
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
void** clo49170 = alloc_clo(lam42553_fptr, 6);

//setting env list
clo49170[1] = cons;
clo49170[2] = proc;
clo49170[3] = map;
clo49170[4] = lst;
clo49170[5] = kont42257;
clo49170[6] = cdr;
void* f4226242397 = encode_clo(clo49170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4226242397;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42555 = encode_clo(alloc_clo(lam42555_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42557 = arg_buffer[1];
//reading env and args
void* kont42257 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49172 = alloc_clo(lam42555_fptr, 8);

//setting env list
clo49172[1] = cdr;
clo49172[2] = list;
clo49172[3] = cons;
clo49172[4] = car;
clo49172[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo49172[6] = map;
clo49172[7] = lst;
clo49172[8] = kont42257;
void* f4226342393 = encode_clo(clo49172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4226342393;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam42558_fptr() // lam42558 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42559 = arg_buffer[1];
//reading env and args
void* x4216642408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42264 = (decode_clo(env42559))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42264);
arg_buffer[2] = x4216642408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42264))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42558 = encode_clo(alloc_clo(lam42558_fptr, 0));

void* lam42560_fptr() // lam42560 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42561 = arg_buffer[1];
//reading env and args
void* a4217142418 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4216942414 = (decode_clo(env42561))[3];
//not do dummy comment
void* kont42264 = (decode_clo(env42561))[2];
//not do dummy comment
void* cons = (decode_clo(env42561))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42264;
arg_buffer[3] = a4216942414;
arg_buffer[4] = a4217142418;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42560 = encode_clo(alloc_clo(lam42560_fptr, 0));

void* lam42562_fptr() // lam42562 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42563 = arg_buffer[1];
//reading env and args
void* a4217042416 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4216942414 = (decode_clo(env42563))[5];
//not do dummy comment
void* op = (decode_clo(env42563))[4];
//not do dummy comment
void* kont42264 = (decode_clo(env42563))[3];
//not do dummy comment
void* filter = (decode_clo(env42563))[2];
//not do dummy comment
void* cons = (decode_clo(env42563))[1];

//creating new closure instance
void** clo49174 = alloc_clo(lam42560_fptr, 3);

//setting env list
clo49174[1] = cons;
clo49174[2] = kont42264;
clo49174[3] = a4216942414;
void* f4226642417 = encode_clo(clo49174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4226642417;
arg_buffer[3] = op;
arg_buffer[4] = a4217042416;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42562 = encode_clo(alloc_clo(lam42562_fptr, 0));

void* lam42564_fptr() // lam42564 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42565 = arg_buffer[1];
//reading env and args
void* a4216942414 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42565))[6];
//not do dummy comment
void* lst = (decode_clo(env42565))[5];
//not do dummy comment
void* op = (decode_clo(env42565))[4];
//not do dummy comment
void* kont42264 = (decode_clo(env42565))[3];
//not do dummy comment
void* filter = (decode_clo(env42565))[2];
//not do dummy comment
void* cons = (decode_clo(env42565))[1];

//creating new closure instance
void** clo49176 = alloc_clo(lam42562_fptr, 5);

//setting env list
clo49176[1] = cons;
clo49176[2] = filter;
clo49176[3] = kont42264;
clo49176[4] = op;
clo49176[5] = a4216942414;
void* f4226742415 = encode_clo(clo49176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4226742415;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42564 = encode_clo(alloc_clo(lam42564_fptr, 0));

void* lam42566_fptr() // lam42566 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42567 = arg_buffer[1];
//reading env and args
void* a4217242420 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env42567))[3];
//not do dummy comment
void* kont42264 = (decode_clo(env42567))[2];
//not do dummy comment
void* filter = (decode_clo(env42567))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont42264;
arg_buffer[3] = op;
arg_buffer[4] = a4217242420;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42566 = encode_clo(alloc_clo(lam42566_fptr, 0));

void* lam42568_fptr() // lam42568 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42569 = arg_buffer[1];
//reading env and args
void* a4216842412 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42569))[7];
//not do dummy comment
void* lst = (decode_clo(env42569))[6];
//not do dummy comment
void* op = (decode_clo(env42569))[5];
//not do dummy comment
void* kont42264 = (decode_clo(env42569))[4];
//not do dummy comment
void* cons = (decode_clo(env42569))[3];
//not do dummy comment
void* filter = (decode_clo(env42569))[2];
//not do dummy comment
void* car = (decode_clo(env42569))[1];

//if-clause
bool if_guard49177 = is_true(a4216842412);
if(if_guard49177)
{

//creating new closure instance
void** clo49179 = alloc_clo(lam42564_fptr, 6);

//setting env list
clo49179[1] = cons;
clo49179[2] = filter;
clo49179[3] = kont42264;
clo49179[4] = op;
clo49179[5] = lst;
clo49179[6] = cdr;
void* f4226842413 = encode_clo(clo49179);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4226842413;
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
void** clo49181 = alloc_clo(lam42566_fptr, 3);

//setting env list
clo49181[1] = filter;
clo49181[2] = kont42264;
clo49181[3] = op;
void* f4226942419 = encode_clo(clo49181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4226942419;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42568 = encode_clo(alloc_clo(lam42568_fptr, 0));

void* lam42570_fptr() // lam42570 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42571 = arg_buffer[1];
//reading env and args
void* a4216742410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42571))[7];
//not do dummy comment
void* lst = (decode_clo(env42571))[6];
//not do dummy comment
void* op = (decode_clo(env42571))[5];
//not do dummy comment
void* kont42264 = (decode_clo(env42571))[4];
//not do dummy comment
void* cons = (decode_clo(env42571))[3];
//not do dummy comment
void* filter = (decode_clo(env42571))[2];
//not do dummy comment
void* car = (decode_clo(env42571))[1];

//creating new closure instance
void** clo49183 = alloc_clo(lam42568_fptr, 7);

//setting env list
clo49183[1] = car;
clo49183[2] = filter;
clo49183[3] = cons;
clo49183[4] = kont42264;
clo49183[5] = op;
clo49183[6] = lst;
clo49183[7] = cdr;
void* f4227042411 = encode_clo(clo49183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4227042411;
arg_buffer[3] = a4216742410;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42570 = encode_clo(alloc_clo(lam42570_fptr, 0));

void* lam42572_fptr() // lam42572 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42573 = arg_buffer[1];
//reading env and args
void* a4216542406 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env42573))[8];
//not do dummy comment
void* op = (decode_clo(env42573))[7];
//not do dummy comment
void* kont42264 = (decode_clo(env42573))[6];
//not do dummy comment
void* cons = (decode_clo(env42573))[5];
//not do dummy comment
void* list = (decode_clo(env42573))[4];
//not do dummy comment
void* cdr = (decode_clo(env42573))[3];
//not do dummy comment
void* filter = (decode_clo(env42573))[2];
//not do dummy comment
void* car = (decode_clo(env42573))[1];

//if-clause
bool if_guard49184 = is_true(a4216542406);
if(if_guard49184)
{

//creating new closure instance
void** clo49186 = alloc_clo(lam42558_fptr, 1);

//setting env list
clo49186[1] = kont42264;
void* f4226542407 = encode_clo(clo49186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4226542407;
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
void** clo49188 = alloc_clo(lam42570_fptr, 7);

//setting env list
clo49188[1] = car;
clo49188[2] = filter;
clo49188[3] = cons;
clo49188[4] = kont42264;
clo49188[5] = op;
clo49188[6] = lst;
clo49188[7] = cdr;
void* f4227142409 = encode_clo(clo49188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4227142409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42572 = encode_clo(alloc_clo(lam42572_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42574 = arg_buffer[1];
//reading env and args
void* kont42264 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49190 = alloc_clo(lam42572_fptr, 8);

//setting env list
clo49190[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo49190[2] = filter;
clo49190[3] = cdr;
clo49190[4] = list;
clo49190[5] = cons;
clo49190[6] = kont42264;
clo49190[7] = op;
clo49190[8] = lst;
void* f4227242405 = encode_clo(clo49190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4227242405;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam42575_fptr() // lam42575 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42576 = arg_buffer[1];
//reading env and args
void* a4217742428 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42273 = (decode_clo(env42576))[3];
//not do dummy comment
void* drop = (decode_clo(env42576))[2];
//not do dummy comment
void* a4217542425 = (decode_clo(env42576))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont42273;
arg_buffer[3] = a4217542425;
arg_buffer[4] = a4217742428;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42575 = encode_clo(alloc_clo(lam42575_fptr, 0));

void* lam42578_fptr() // lam42578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42579 = arg_buffer[1];
//reading env and args
void* a4217542425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42273 = (decode_clo(env42579))[4];
//not do dummy comment
void* drop = (decode_clo(env42579))[3];
//not do dummy comment
void* n = (decode_clo(env42579))[2];
//not do dummy comment
void* _u45 = (decode_clo(env42579))[1];
mpz_t* mpzvar49191 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49191, "1", 10);
void* a4217642426 = encode_mpz(mpzvar49191);

//creating new closure instance
void** clo49193 = alloc_clo(lam42575_fptr, 3);

//setting env list
clo49193[1] = a4217542425;
clo49193[2] = drop;
clo49193[3] = kont42273;
void* f4227442427 = encode_clo(clo49193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4227442427;
arg_buffer[3] = n;
arg_buffer[4] = a4217642426;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42578 = encode_clo(alloc_clo(lam42578_fptr, 0));

void* lam42580_fptr() // lam42580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42581 = arg_buffer[1];
//reading env and args
void* a4217442423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42581))[6];
//not do dummy comment
void* kont42273 = (decode_clo(env42581))[5];
//not do dummy comment
void* n = (decode_clo(env42581))[4];
//not do dummy comment
void* _u45 = (decode_clo(env42581))[3];
//not do dummy comment
void* lst = (decode_clo(env42581))[2];
//not do dummy comment
void* drop = (decode_clo(env42581))[1];

//if-clause
bool if_guard49194 = is_true(a4217442423);
if(if_guard49194)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42273);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42273))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49196 = alloc_clo(lam42578_fptr, 4);

//setting env list
clo49196[1] = _u45;
clo49196[2] = n;
clo49196[3] = drop;
clo49196[4] = kont42273;
void* f4227542424 = encode_clo(clo49196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4227542424;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42580 = encode_clo(alloc_clo(lam42580_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42583 = arg_buffer[1];
//reading env and args
void* kont42273 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar49197 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49197, "0", 10);
void* a4217342421 = encode_mpz(mpzvar49197);

//creating new closure instance
void** clo49199 = alloc_clo(lam42580_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo49199[1] = drop;
clo49199[2] = lst;
clo49199[3] = _u45;
clo49199[4] = n;
clo49199[5] = kont42273;
clo49199[6] = cdr;
void* f4227642422 = encode_clo(clo49199);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4227642422;
arg_buffer[3] = n;
arg_buffer[4] = a4217342421;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam42584_fptr() // lam42584 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42585 = arg_buffer[1];
//reading env and args
void* a4218142436 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4217942432 = (decode_clo(env42585))[3];
//not do dummy comment
void* kont42277 = (decode_clo(env42585))[2];
//not do dummy comment
void* proc = (decode_clo(env42585))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont42277;
arg_buffer[3] = a4217942432;
arg_buffer[4] = a4218142436;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42584 = encode_clo(alloc_clo(lam42584_fptr, 0));

void* lam42586_fptr() // lam42586 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42587 = arg_buffer[1];
//reading env and args
void* a4218042434 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4217942432 = (decode_clo(env42587))[5];
//not do dummy comment
void* foldr = (decode_clo(env42587))[4];
//not do dummy comment
void* kont42277 = (decode_clo(env42587))[3];
//not do dummy comment
void* proc = (decode_clo(env42587))[2];
//not do dummy comment
void* acc = (decode_clo(env42587))[1];

//creating new closure instance
void** clo49201 = alloc_clo(lam42584_fptr, 3);

//setting env list
clo49201[1] = proc;
clo49201[2] = kont42277;
clo49201[3] = a4217942432;
void* f4227842435 = encode_clo(clo49201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4227842435;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4218042434;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42586 = encode_clo(alloc_clo(lam42586_fptr, 0));

void* lam42588_fptr() // lam42588 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42589 = arg_buffer[1];
//reading env and args
void* a4217942432 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42589))[6];
//not do dummy comment
void* kont42277 = (decode_clo(env42589))[5];
//not do dummy comment
void* foldr = (decode_clo(env42589))[4];
//not do dummy comment
void* lst = (decode_clo(env42589))[3];
//not do dummy comment
void* proc = (decode_clo(env42589))[2];
//not do dummy comment
void* acc = (decode_clo(env42589))[1];

//creating new closure instance
void** clo49203 = alloc_clo(lam42586_fptr, 5);

//setting env list
clo49203[1] = acc;
clo49203[2] = proc;
clo49203[3] = kont42277;
clo49203[4] = foldr;
clo49203[5] = a4217942432;
void* f4227942433 = encode_clo(clo49203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4227942433;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42588 = encode_clo(alloc_clo(lam42588_fptr, 0));

void* lam42590_fptr() // lam42590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42591 = arg_buffer[1];
//reading env and args
void* a4217842430 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42591))[7];
//not do dummy comment
void* kont42277 = (decode_clo(env42591))[6];
//not do dummy comment
void* car = (decode_clo(env42591))[5];
//not do dummy comment
void* foldr = (decode_clo(env42591))[4];
//not do dummy comment
void* lst = (decode_clo(env42591))[3];
//not do dummy comment
void* proc = (decode_clo(env42591))[2];
//not do dummy comment
void* acc = (decode_clo(env42591))[1];

//if-clause
bool if_guard49204 = is_true(a4217842430);
if(if_guard49204)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42277);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42277))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49206 = alloc_clo(lam42588_fptr, 6);

//setting env list
clo49206[1] = acc;
clo49206[2] = proc;
clo49206[3] = lst;
clo49206[4] = foldr;
clo49206[5] = kont42277;
clo49206[6] = cdr;
void* f4228042431 = encode_clo(clo49206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4228042431;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42590 = encode_clo(alloc_clo(lam42590_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42592 = arg_buffer[1];
//reading env and args
void* kont42277 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49208 = alloc_clo(lam42590_fptr, 7);

//setting env list
clo49208[1] = acc;
clo49208[2] = proc;
clo49208[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo49208[4] = foldr;
clo49208[5] = car;
clo49208[6] = kont42277;
clo49208[7] = cdr;
void* f4228142429 = encode_clo(clo49208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4228142429;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam42593_fptr() // lam42593 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42594 = arg_buffer[1];
//reading env and args
void* a4218542444 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4218342440 = (decode_clo(env42594))[3];
//not do dummy comment
void* kont42282 = (decode_clo(env42594))[2];
//not do dummy comment
void* cons = (decode_clo(env42594))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont42282;
arg_buffer[3] = a4218342440;
arg_buffer[4] = a4218542444;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42593 = encode_clo(alloc_clo(lam42593_fptr, 0));

void* lam42595_fptr() // lam42595 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42596 = arg_buffer[1];
//reading env and args
void* a4218442442 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env42596))[5];
//not do dummy comment
void* a4218342440 = (decode_clo(env42596))[4];
//not do dummy comment
void* cons = (decode_clo(env42596))[3];
//not do dummy comment
void* kont42282 = (decode_clo(env42596))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42596))[1];

//creating new closure instance
void** clo49210 = alloc_clo(lam42593_fptr, 3);

//setting env list
clo49210[1] = cons;
clo49210[2] = kont42282;
clo49210[3] = a4218342440;
void* f4228342443 = encode_clo(clo49210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4228342443;
arg_buffer[3] = a4218442442;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42595 = encode_clo(alloc_clo(lam42595_fptr, 0));

void* lam42597_fptr() // lam42597 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42598 = arg_buffer[1];
//reading env and args
void* a4218342440 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42598))[6];
//not do dummy comment
void* append = (decode_clo(env42598))[5];
//not do dummy comment
void* lst1 = (decode_clo(env42598))[4];
//not do dummy comment
void* cons = (decode_clo(env42598))[3];
//not do dummy comment
void* kont42282 = (decode_clo(env42598))[2];
//not do dummy comment
void* lst2 = (decode_clo(env42598))[1];

//creating new closure instance
void** clo49212 = alloc_clo(lam42595_fptr, 5);

//setting env list
clo49212[1] = lst2;
clo49212[2] = kont42282;
clo49212[3] = cons;
clo49212[4] = a4218342440;
clo49212[5] = append;
void* f4228442441 = encode_clo(clo49212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4228442441;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42597 = encode_clo(alloc_clo(lam42597_fptr, 0));

void* lam42599_fptr() // lam42599 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42600 = arg_buffer[1];
//reading env and args
void* a4218242438 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env42600))[7];
//not do dummy comment
void* append = (decode_clo(env42600))[6];
//not do dummy comment
void* cons = (decode_clo(env42600))[5];
//not do dummy comment
void* kont42282 = (decode_clo(env42600))[4];
//not do dummy comment
void* lst2 = (decode_clo(env42600))[3];
//not do dummy comment
void* lst1 = (decode_clo(env42600))[2];
//not do dummy comment
void* car = (decode_clo(env42600))[1];

//if-clause
bool if_guard49213 = is_true(a4218242438);
if(if_guard49213)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42282);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42282))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49215 = alloc_clo(lam42597_fptr, 6);

//setting env list
clo49215[1] = lst2;
clo49215[2] = kont42282;
clo49215[3] = cons;
clo49215[4] = lst1;
clo49215[5] = append;
clo49215[6] = cdr;
void* f4228542439 = encode_clo(clo49215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4228542439;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam42599 = encode_clo(alloc_clo(lam42599_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42601 = arg_buffer[1];
//reading env and args
void* kont42282 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49217 = alloc_clo(lam42599_fptr, 7);

//setting env list
clo49217[1] = car;
clo49217[2] = lst1;
clo49217[3] = lst2;
clo49217[4] = kont42282;
clo49217[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo49217[6] = append;
clo49217[7] = cdr;
void* f4228642437 = encode_clo(clo49217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4228642437;
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
void* _42602 = arg_buffer[1];
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

void* kont4228742445 = prim_car(lst);
void* lst42446 = prim_cdr(lst);
void* x4218642447 = apply_prim_hash(lst42446);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4228742445);
arg_buffer[2] = x4218642447;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4228742445))[0]);
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
void* _42603 = arg_buffer[1];
//reading env and args
void* kont42289 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4218742448 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42289);
arg_buffer[2] = x4218742448;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42289))[0]);
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
void* _42604 = arg_buffer[1];
//reading env and args
void* kont42290 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4218842449 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42290);
arg_buffer[2] = x4218842449;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42290))[0]);
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
void* _42605 = arg_buffer[1];
//reading env and args
void* kont42291 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4218942450 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42291);
arg_buffer[2] = x4218942450;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42291))[0]);
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
void* _42606 = arg_buffer[1];
//reading env and args
void* kont42292 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4219042451 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42292);
arg_buffer[2] = x4219042451;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42292))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam42607_fptr() // lam42607 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42608 = arg_buffer[1];
//reading env and args
void* a4219442456 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env42608))[3];
//not do dummy comment
void* kont42293 = (decode_clo(env42608))[2];
//not do dummy comment
void* filter = (decode_clo(env42608))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont42293;
arg_buffer[3] = odd_u63;
arg_buffer[4] = a4219442456;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42607 = encode_clo(alloc_clo(lam42607_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42612 = arg_buffer[1];
//reading env and args
void* kont42293 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar49218 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49218, "1", 10);
void* a4219142452 = encode_mpz(mpzvar49218);
mpz_t* mpzvar49219 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49219, "2", 10);
void* a4219242453 = encode_mpz(mpzvar49219);
mpz_t* mpzvar49220 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49220, "3", 10);
void* a4219342454 = encode_mpz(mpzvar49220);

//creating new closure instance
void** clo49222 = alloc_clo(lam42607_fptr, 3);

//setting env list
clo49222[1] = filter;
clo49222[2] = kont42293;
clo49222[3] = odd_u63;
void* f4229442455 = encode_clo(clo49222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4229442455;
arg_buffer[3] = a4219142452;
arg_buffer[4] = a4219242453;
arg_buffer[5] = a4219342454;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam42613_fptr() // lam42613 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env42614 = arg_buffer[1];
//reading env and args
void* x4219542458 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont42295 = (decode_clo(env42614))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont42295);
arg_buffer[2] = x4219542458;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont42295))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam42613 = encode_clo(alloc_clo(lam42613_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _42615 = arg_buffer[1];
//reading env and args
void* kont42295 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo49224 = alloc_clo(lam42613_fptr, 1);

//setting env list
clo49224[1] = kont42295;
void* f4229642457 = encode_clo(clo49224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4229642457;
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

