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
void* _49440 = arg_buffer[1];
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

void* kont4918249282 = prim_car(lst);
void* lst49283 = prim_cdr(lst);
void* x4909749284 = apply_prim__u43(lst49283);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4918249282);
arg_buffer[2] = x4909749284;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4918249282))[0]);
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
void* _49441 = arg_buffer[1];
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

void* kont4918449285 = prim_car(lst);
void* lst49286 = prim_cdr(lst);
void* x4909849287 = apply_prim__u45(lst49286);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4918449285);
arg_buffer[2] = x4909849287;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4918449285))[0]);
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
void* _49442 = arg_buffer[1];
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

void* kont4918649288 = prim_car(lst);
void* lst49289 = prim_cdr(lst);
void* x4909949290 = apply_prim__u42(lst49289);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4918649288);
arg_buffer[2] = x4909949290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4918649288))[0]);
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
void* _49443 = arg_buffer[1];
//reading env and args
void* kont49188 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4910049291 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49188);
arg_buffer[2] = x4910049291;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49188))[0]);
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
void* _49444 = arg_buffer[1];
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

void* kont4918949292 = prim_car(lst);
void* lst49293 = prim_cdr(lst);
void* x4910149294 = apply_prim__u47(lst49293);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4918949292);
arg_buffer[2] = x4910149294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4918949292))[0]);
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
void* _49445 = arg_buffer[1];
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

void* kont4919149295 = prim_car(lst);
void* lst49296 = prim_cdr(lst);
void* x4910249297 = apply_prim__u61(lst49296);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4919149295);
arg_buffer[2] = x4910249297;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4919149295))[0]);
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
void* _49446 = arg_buffer[1];
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

void* kont4919349298 = prim_car(lst);
void* lst49299 = prim_cdr(lst);
void* x4910349300 = apply_prim__u62(lst49299);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4919349298);
arg_buffer[2] = x4910349300;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4919349298))[0]);
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
void* _49447 = arg_buffer[1];
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

void* kont4919549301 = prim_car(lst);
void* lst49302 = prim_cdr(lst);
void* x4910449303 = apply_prim__u60(lst49302);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4919549301);
arg_buffer[2] = x4910449303;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4919549301))[0]);
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
void* _49448 = arg_buffer[1];
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

void* kont4919749304 = prim_car(lst);
void* lst49305 = prim_cdr(lst);
void* x4910549306 = apply_prim__u60_u61(lst49305);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4919749304);
arg_buffer[2] = x4910549306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4919749304))[0]);
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
void* _49449 = arg_buffer[1];
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

void* kont4919949307 = prim_car(lst);
void* lst49308 = prim_cdr(lst);
void* x4910649309 = apply_prim__u62_u61(lst49308);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4919949307);
arg_buffer[2] = x4910649309;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4919949307))[0]);
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
void* _49450 = arg_buffer[1];
//reading env and args
void* kont49201 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4910749310 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49201);
arg_buffer[2] = x4910749310;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49201))[0]);
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
void* _49451 = arg_buffer[1];
//reading env and args
void* kont49202 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4910849311 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49202);
arg_buffer[2] = x4910849311;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49202))[0]);
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
void* _49452 = arg_buffer[1];
//reading env and args
void* kont49203 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4910949312 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49203);
arg_buffer[2] = x4910949312;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49203))[0]);
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
void* _49453 = arg_buffer[1];
//reading env and args
void* kont49204 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4911049313 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49204);
arg_buffer[2] = x4911049313;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49204))[0]);
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
void* _49454 = arg_buffer[1];
//reading env and args
void* kont49205 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4911149314 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49205);
arg_buffer[2] = x4911149314;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49205))[0]);
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
void* _49455 = arg_buffer[1];
//reading env and args
void* kont49206 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4911249315 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49206);
arg_buffer[2] = x4911249315;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49206))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam49456_fptr() // lam49456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49457 = arg_buffer[1];
//reading env and args
void* a4911549319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49207 = (decode_clo(env49457))[3];
//not do dummy comment
void* a4911349316 = (decode_clo(env49457))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env49457))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont49207;
arg_buffer[3] = a4911349316;
arg_buffer[4] = a4911549319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49456 = encode_clo(alloc_clo(lam49456_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49460 = arg_buffer[1];
//reading env and args
void* kont49207 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49873, "0", 10);
void* a4911349316 = encode_mpz(mpzvar49873);
mpz_t* mpzvar49874 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49874, "2", 10);
void* a4911449317 = encode_mpz(mpzvar49874);

//creating new closure instance
void** clo49876 = alloc_clo(lam49456_fptr, 3);

//setting env list
clo49876[1] = equal_u63;
clo49876[2] = a4911349316;
clo49876[3] = kont49207;
void* f4920849318 = encode_clo(clo49876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4920849318;
arg_buffer[3] = x;
arg_buffer[4] = a4911449317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam49461_fptr() // lam49461 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49462 = arg_buffer[1];
//reading env and args
void* a4911849323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env49462))[3];
//not do dummy comment
void* a4911649320 = (decode_clo(env49462))[2];
//not do dummy comment
void* kont49209 = (decode_clo(env49462))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont49209;
arg_buffer[3] = a4911649320;
arg_buffer[4] = a4911849323;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49461 = encode_clo(alloc_clo(lam49461_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49465 = arg_buffer[1];
//reading env and args
void* kont49209 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar49877 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49877, "1", 10);
void* a4911649320 = encode_mpz(mpzvar49877);
mpz_t* mpzvar49878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49878, "2", 10);
void* a4911749321 = encode_mpz(mpzvar49878);

//creating new closure instance
void** clo49880 = alloc_clo(lam49461_fptr, 3);

//setting env list
clo49880[1] = kont49209;
clo49880[2] = a4911649320;
clo49880[3] = equal_u63;
void* f4921049322 = encode_clo(clo49880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4921049322;
arg_buffer[3] = x;
arg_buffer[4] = a4911749321;
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
void* _49466 = arg_buffer[1];
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

void* kont4921149324 = prim_car(x);
void* x49325 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4921149324);
arg_buffer[2] = x49325;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4921149324))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam49469_fptr() // lam49469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49470 = arg_buffer[1];
//reading env and args
void* a4912449335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49213 = (decode_clo(env49470))[3];
//not do dummy comment
void* x = (decode_clo(env49470))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49470))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont49213;
arg_buffer[3] = x;
arg_buffer[4] = a4912449335;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49469 = encode_clo(alloc_clo(lam49469_fptr, 0));

void* lam49471_fptr() // lam49471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49472 = arg_buffer[1];
//reading env and args
void* a4912249332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49472))[5];
//not do dummy comment
void* kont49213 = (decode_clo(env49472))[4];
//not do dummy comment
void* lst = (decode_clo(env49472))[3];
//not do dummy comment
void* x = (decode_clo(env49472))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49472))[1];

//if-clause
bool if_guard49881 = is_true(a4912249332);
if(if_guard49881)
{
void* x4912349333 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49213);
arg_buffer[2] = x4912349333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49213))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49883 = alloc_clo(lam49469_fptr, 3);

//setting env list
clo49883[1] = member_u63;
clo49883[2] = x;
clo49883[3] = kont49213;
void* f4921449334 = encode_clo(clo49883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4921449334;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49471 = encode_clo(alloc_clo(lam49471_fptr, 0));

void* lam49473_fptr() // lam49473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49474 = arg_buffer[1];
//reading env and args
void* a4912149330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49474))[6];
//not do dummy comment
void* kont49213 = (decode_clo(env49474))[5];
//not do dummy comment
void* lst = (decode_clo(env49474))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env49474))[3];
//not do dummy comment
void* x = (decode_clo(env49474))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49474))[1];

//creating new closure instance
void** clo49885 = alloc_clo(lam49471_fptr, 5);

//setting env list
clo49885[1] = member_u63;
clo49885[2] = x;
clo49885[3] = lst;
clo49885[4] = kont49213;
clo49885[5] = cdr;
void* f4921549331 = encode_clo(clo49885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4921549331;
arg_buffer[3] = a4912149330;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49473 = encode_clo(alloc_clo(lam49473_fptr, 0));

void* lam49475_fptr() // lam49475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49476 = arg_buffer[1];
//reading env and args
void* a4911949327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49476))[7];
//not do dummy comment
void* kont49213 = (decode_clo(env49476))[6];
//not do dummy comment
void* lst = (decode_clo(env49476))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env49476))[4];
//not do dummy comment
void* x = (decode_clo(env49476))[3];
//not do dummy comment
void* car = (decode_clo(env49476))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env49476))[1];

//if-clause
bool if_guard49886 = is_true(a4911949327);
if(if_guard49886)
{
void* x4912049328 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49213);
arg_buffer[2] = x4912049328;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49213))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49888 = alloc_clo(lam49473_fptr, 6);

//setting env list
clo49888[1] = member_u63;
clo49888[2] = x;
clo49888[3] = equal_u63;
clo49888[4] = lst;
clo49888[5] = kont49213;
clo49888[6] = cdr;
void* f4921649329 = encode_clo(clo49888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4921649329;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49475 = encode_clo(alloc_clo(lam49475_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49477 = arg_buffer[1];
//reading env and args
void* kont49213 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49890 = alloc_clo(lam49475_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo49890[1] = member_u63;
clo49890[2] = car;
clo49890[3] = x;
clo49890[4] = equal_u63;
clo49890[5] = lst;
clo49890[6] = kont49213;
clo49890[7] = cdr;
void* f4921749326 = encode_clo(clo49890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4921749326;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam49478_fptr() // lam49478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49479 = arg_buffer[1];
//reading env and args
void* a4912849343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4912749341 = (decode_clo(env49479))[4];
//not do dummy comment
void* kont49218 = (decode_clo(env49479))[3];
//not do dummy comment
void* fun = (decode_clo(env49479))[2];
//not do dummy comment
void* foldl = (decode_clo(env49479))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont49218;
arg_buffer[3] = fun;
arg_buffer[4] = a4912749341;
arg_buffer[5] = a4912849343;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49478 = encode_clo(alloc_clo(lam49478_fptr, 0));

void* lam49480_fptr() // lam49480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49481 = arg_buffer[1];
//reading env and args
void* a4912749341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49481))[5];
//not do dummy comment
void* lst = (decode_clo(env49481))[4];
//not do dummy comment
void* kont49218 = (decode_clo(env49481))[3];
//not do dummy comment
void* fun = (decode_clo(env49481))[2];
//not do dummy comment
void* foldl = (decode_clo(env49481))[1];

//creating new closure instance
void** clo49892 = alloc_clo(lam49478_fptr, 4);

//setting env list
clo49892[1] = foldl;
clo49892[2] = fun;
clo49892[3] = kont49218;
clo49892[4] = a4912749341;
void* f4921949342 = encode_clo(clo49892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4921949342;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49480 = encode_clo(alloc_clo(lam49480_fptr, 0));

void* lam49482_fptr() // lam49482 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49483 = arg_buffer[1];
//reading env and args
void* a4912649339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49483))[6];
//not do dummy comment
void* lst = (decode_clo(env49483))[5];
//not do dummy comment
void* kont49218 = (decode_clo(env49483))[4];
//not do dummy comment
void* fun = (decode_clo(env49483))[3];
//not do dummy comment
void* acc = (decode_clo(env49483))[2];
//not do dummy comment
void* foldl = (decode_clo(env49483))[1];

//creating new closure instance
void** clo49894 = alloc_clo(lam49480_fptr, 5);

//setting env list
clo49894[1] = foldl;
clo49894[2] = fun;
clo49894[3] = kont49218;
clo49894[4] = lst;
clo49894[5] = cdr;
void* f4922049340 = encode_clo(clo49894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4922049340;
arg_buffer[3] = a4912649339;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49482 = encode_clo(alloc_clo(lam49482_fptr, 0));

void* lam49484_fptr() // lam49484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49485 = arg_buffer[1];
//reading env and args
void* a4912549337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49485))[7];
//not do dummy comment
void* lst = (decode_clo(env49485))[6];
//not do dummy comment
void* kont49218 = (decode_clo(env49485))[5];
//not do dummy comment
void* fun = (decode_clo(env49485))[4];
//not do dummy comment
void* acc = (decode_clo(env49485))[3];
//not do dummy comment
void* car = (decode_clo(env49485))[2];
//not do dummy comment
void* foldl = (decode_clo(env49485))[1];

//if-clause
bool if_guard49895 = is_true(a4912549337);
if(if_guard49895)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49218);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49218))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49897 = alloc_clo(lam49482_fptr, 6);

//setting env list
clo49897[1] = foldl;
clo49897[2] = acc;
clo49897[3] = fun;
clo49897[4] = kont49218;
clo49897[5] = lst;
clo49897[6] = cdr;
void* f4922149338 = encode_clo(clo49897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4922149338;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49484 = encode_clo(alloc_clo(lam49484_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49486 = arg_buffer[1];
//reading env and args
void* kont49218 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49899 = alloc_clo(lam49484_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo49899[1] = foldl;
clo49899[2] = car;
clo49899[3] = acc;
clo49899[4] = fun;
clo49899[5] = kont49218;
clo49899[6] = lst;
clo49899[7] = cdr;
void* f4922249336 = encode_clo(clo49899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4922249336;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam49487_fptr() // lam49487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49488 = arg_buffer[1];
//reading env and args
void* a4913249351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49223 = (decode_clo(env49488))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49488))[2];
//not do dummy comment
void* a4913049347 = (decode_clo(env49488))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont49223;
arg_buffer[3] = a4913049347;
arg_buffer[4] = a4913249351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49487 = encode_clo(alloc_clo(lam49487_fptr, 0));

void* lam49489_fptr() // lam49489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49490 = arg_buffer[1];
//reading env and args
void* a4913149349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49223 = (decode_clo(env49490))[5];
//not do dummy comment
void* lst2 = (decode_clo(env49490))[4];
//not do dummy comment
void* cons = (decode_clo(env49490))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49490))[2];
//not do dummy comment
void* a4913049347 = (decode_clo(env49490))[1];

//creating new closure instance
void** clo49901 = alloc_clo(lam49487_fptr, 3);

//setting env list
clo49901[1] = a4913049347;
clo49901[2] = reverse_u45helper;
clo49901[3] = kont49223;
void* f4922449350 = encode_clo(clo49901);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4922449350;
arg_buffer[3] = a4913149349;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49489 = encode_clo(alloc_clo(lam49489_fptr, 0));

void* lam49491_fptr() // lam49491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49492 = arg_buffer[1];
//reading env and args
void* a4913049347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49492))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49492))[5];
//not do dummy comment
void* kont49223 = (decode_clo(env49492))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49492))[3];
//not do dummy comment
void* car = (decode_clo(env49492))[2];
//not do dummy comment
void* cons = (decode_clo(env49492))[1];

//creating new closure instance
void** clo49903 = alloc_clo(lam49489_fptr, 5);

//setting env list
clo49903[1] = a4913049347;
clo49903[2] = reverse_u45helper;
clo49903[3] = cons;
clo49903[4] = lst2;
clo49903[5] = kont49223;
void* f4922549348 = encode_clo(clo49903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4922549348;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49491 = encode_clo(alloc_clo(lam49491_fptr, 0));

void* lam49493_fptr() // lam49493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49494 = arg_buffer[1];
//reading env and args
void* a4912949345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49494))[7];
//not do dummy comment
void* lst = (decode_clo(env49494))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49494))[5];
//not do dummy comment
void* kont49223 = (decode_clo(env49494))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49494))[3];
//not do dummy comment
void* car = (decode_clo(env49494))[2];
//not do dummy comment
void* cons = (decode_clo(env49494))[1];

//if-clause
bool if_guard49904 = is_true(a4912949345);
if(if_guard49904)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49223);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49223))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49906 = alloc_clo(lam49491_fptr, 6);

//setting env list
clo49906[1] = cons;
clo49906[2] = car;
clo49906[3] = lst2;
clo49906[4] = kont49223;
clo49906[5] = reverse_u45helper;
clo49906[6] = lst;
void* f4922649346 = encode_clo(clo49906);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4922649346;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49493 = encode_clo(alloc_clo(lam49493_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49495 = arg_buffer[1];
//reading env and args
void* kont49223 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49908 = alloc_clo(lam49493_fptr, 7);

//setting env list
clo49908[1] = cons;
clo49908[2] = car;
clo49908[3] = lst2;
clo49908[4] = kont49223;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo49908[5] = reverse_u45helper;
clo49908[6] = lst;
clo49908[7] = cdr;
void* f4922749344 = encode_clo(clo49908);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4922749344;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam49496_fptr() // lam49496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49497 = arg_buffer[1];
//reading env and args
void* a4913349353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49228 = (decode_clo(env49497))[3];
//not do dummy comment
void* lst = (decode_clo(env49497))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env49497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont49228;
arg_buffer[3] = lst;
arg_buffer[4] = a4913349353;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49496 = encode_clo(alloc_clo(lam49496_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49498 = arg_buffer[1];
//reading env and args
void* kont49228 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49910 = alloc_clo(lam49496_fptr, 3);

//setting env list
clo49910[1] = reverse_u45helper;
clo49910[2] = lst;
clo49910[3] = kont49228;
void* f4922949352 = encode_clo(clo49910);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4922949352;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam49499_fptr() // lam49499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49500 = arg_buffer[1];
//reading env and args
void* x4913649358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49230 = (decode_clo(env49500))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49230);
arg_buffer[2] = x4913649358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49230))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49499 = encode_clo(alloc_clo(lam49499_fptr, 0));

void* lam49501_fptr() // lam49501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49502 = arg_buffer[1];
//reading env and args
void* a4914149367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49230 = (decode_clo(env49502))[4];
//not do dummy comment
void* a4913749360 = (decode_clo(env49502))[3];
//not do dummy comment
void* a4913949363 = (decode_clo(env49502))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env49502))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont49230;
arg_buffer[3] = a4913749360;
arg_buffer[4] = a4913949363;
arg_buffer[5] = a4914149367;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49501 = encode_clo(alloc_clo(lam49501_fptr, 0));

void* lam49503_fptr() // lam49503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49504 = arg_buffer[1];
//reading env and args
void* a4914049365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49230 = (decode_clo(env49504))[6];
//not do dummy comment
void* a4913749360 = (decode_clo(env49504))[5];
//not do dummy comment
void* a4913949363 = (decode_clo(env49504))[4];
//not do dummy comment
void* cons = (decode_clo(env49504))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49504))[2];
//not do dummy comment
void* lst2 = (decode_clo(env49504))[1];

//creating new closure instance
void** clo49912 = alloc_clo(lam49501_fptr, 4);

//setting env list
clo49912[1] = take_u45helper;
clo49912[2] = a4913949363;
clo49912[3] = a4913749360;
clo49912[4] = kont49230;
void* f4923249366 = encode_clo(clo49912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4923249366;
arg_buffer[3] = a4914049365;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49503 = encode_clo(alloc_clo(lam49503_fptr, 0));

void* lam49505_fptr() // lam49505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49506 = arg_buffer[1];
//reading env and args
void* a4913949363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49230 = (decode_clo(env49506))[7];
//not do dummy comment
void* car = (decode_clo(env49506))[6];
//not do dummy comment
void* cons = (decode_clo(env49506))[5];
//not do dummy comment
void* lst = (decode_clo(env49506))[4];
//not do dummy comment
void* a4913749360 = (decode_clo(env49506))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49506))[2];
//not do dummy comment
void* lst2 = (decode_clo(env49506))[1];

//creating new closure instance
void** clo49914 = alloc_clo(lam49503_fptr, 6);

//setting env list
clo49914[1] = lst2;
clo49914[2] = take_u45helper;
clo49914[3] = cons;
clo49914[4] = a4913949363;
clo49914[5] = a4913749360;
clo49914[6] = kont49230;
void* f4923349364 = encode_clo(clo49914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4923349364;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49505 = encode_clo(alloc_clo(lam49505_fptr, 0));

void* lam49508_fptr() // lam49508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49509 = arg_buffer[1];
//reading env and args
void* a4913749360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49230 = (decode_clo(env49509))[8];
//not do dummy comment
void* lst = (decode_clo(env49509))[7];
//not do dummy comment
void* cons = (decode_clo(env49509))[6];
//not do dummy comment
void* _u45 = (decode_clo(env49509))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env49509))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49509))[3];
//not do dummy comment
void* n = (decode_clo(env49509))[2];
//not do dummy comment
void* car = (decode_clo(env49509))[1];
mpz_t* mpzvar49915 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49915, "1", 10);
void* a4913849361 = encode_mpz(mpzvar49915);

//creating new closure instance
void** clo49917 = alloc_clo(lam49505_fptr, 7);

//setting env list
clo49917[1] = lst2;
clo49917[2] = take_u45helper;
clo49917[3] = a4913749360;
clo49917[4] = lst;
clo49917[5] = cons;
clo49917[6] = car;
clo49917[7] = kont49230;
void* f4923449362 = encode_clo(clo49917);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4923449362;
arg_buffer[3] = n;
arg_buffer[4] = a4913849361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49508 = encode_clo(alloc_clo(lam49508_fptr, 0));

void* lam49510_fptr() // lam49510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49511 = arg_buffer[1];
//reading env and args
void* a4913549356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49511))[10];
//not do dummy comment
void* kont49230 = (decode_clo(env49511))[9];
//not do dummy comment
void* lst = (decode_clo(env49511))[8];
//not do dummy comment
void* reverse = (decode_clo(env49511))[7];
//not do dummy comment
void* cons = (decode_clo(env49511))[6];
//not do dummy comment
void* _u45 = (decode_clo(env49511))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env49511))[4];
//not do dummy comment
void* lst2 = (decode_clo(env49511))[3];
//not do dummy comment
void* n = (decode_clo(env49511))[2];
//not do dummy comment
void* car = (decode_clo(env49511))[1];

//if-clause
bool if_guard49918 = is_true(a4913549356);
if(if_guard49918)
{

//creating new closure instance
void** clo49920 = alloc_clo(lam49499_fptr, 1);

//setting env list
clo49920[1] = kont49230;
void* f4923149357 = encode_clo(clo49920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4923149357;
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
void** clo49922 = alloc_clo(lam49508_fptr, 8);

//setting env list
clo49922[1] = car;
clo49922[2] = n;
clo49922[3] = lst2;
clo49922[4] = take_u45helper;
clo49922[5] = _u45;
clo49922[6] = cons;
clo49922[7] = lst;
clo49922[8] = kont49230;
void* f4923549359 = encode_clo(clo49922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4923549359;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49510 = encode_clo(alloc_clo(lam49510_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49513 = arg_buffer[1];
//reading env and args
void* kont49230 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar49923 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49923, "0", 10);
void* a4913449354 = encode_mpz(mpzvar49923);

//creating new closure instance
void** clo49925 = alloc_clo(lam49510_fptr, 10);

//setting env list
clo49925[1] = car;
clo49925[2] = n;
clo49925[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo49925[4] = take_u45helper;
clo49925[5] = _u45;
clo49925[6] = cons;
clo49925[7] = reverse;
clo49925[8] = lst;
clo49925[9] = kont49230;
clo49925[10] = cdr;
void* f4923649355 = encode_clo(clo49925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4923649355;
arg_buffer[3] = n;
arg_buffer[4] = a4913449354;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam49514_fptr() // lam49514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49515 = arg_buffer[1];
//reading env and args
void* a4914249369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49515))[4];
//not do dummy comment
void* kont49237 = (decode_clo(env49515))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env49515))[2];
//not do dummy comment
void* n = (decode_clo(env49515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont49237;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4914249369;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49514 = encode_clo(alloc_clo(lam49514_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49516 = arg_buffer[1];
//reading env and args
void* kont49237 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49927 = alloc_clo(lam49514_fptr, 4);

//setting env list
clo49927[1] = n;
clo49927[2] = take_u45helper;
clo49927[3] = kont49237;
clo49927[4] = lst;
void* f4923849368 = encode_clo(clo49927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4923849368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam49518_fptr() // lam49518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49519 = arg_buffer[1];
//reading env and args
void* a4914749377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4914549373 = (decode_clo(env49519))[3];
//not do dummy comment
void* _u43 = (decode_clo(env49519))[2];
//not do dummy comment
void* kont49239 = (decode_clo(env49519))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont49239;
arg_buffer[3] = a4914549373;
arg_buffer[4] = a4914749377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49518 = encode_clo(alloc_clo(lam49518_fptr, 0));

void* lam49520_fptr() // lam49520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49521 = arg_buffer[1];
//reading env and args
void* a4914649375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4914549373 = (decode_clo(env49521))[4];
//not do dummy comment
void* length = (decode_clo(env49521))[3];
//not do dummy comment
void* _u43 = (decode_clo(env49521))[2];
//not do dummy comment
void* kont49239 = (decode_clo(env49521))[1];

//creating new closure instance
void** clo49929 = alloc_clo(lam49518_fptr, 3);

//setting env list
clo49929[1] = kont49239;
clo49929[2] = _u43;
clo49929[3] = a4914549373;
void* f4924049376 = encode_clo(clo49929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4924049376;
arg_buffer[3] = a4914649375;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49520 = encode_clo(alloc_clo(lam49520_fptr, 0));

void* lam49523_fptr() // lam49523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49524 = arg_buffer[1];
//reading env and args
void* a4914349371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49524))[5];
//not do dummy comment
void* lst = (decode_clo(env49524))[4];
//not do dummy comment
void* length = (decode_clo(env49524))[3];
//not do dummy comment
void* _u43 = (decode_clo(env49524))[2];
//not do dummy comment
void* kont49239 = (decode_clo(env49524))[1];

//if-clause
bool if_guard49930 = is_true(a4914349371);
if(if_guard49930)
{
mpz_t* mpzvar49931 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49931, "0", 10);
void* x4914449372 = encode_mpz(mpzvar49931);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49239);
arg_buffer[2] = x4914449372;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49239))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar49932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49932, "1", 10);
void* a4914549373 = encode_mpz(mpzvar49932);

//creating new closure instance
void** clo49934 = alloc_clo(lam49520_fptr, 4);

//setting env list
clo49934[1] = kont49239;
clo49934[2] = _u43;
clo49934[3] = length;
clo49934[4] = a4914549373;
void* f4924149374 = encode_clo(clo49934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4924149374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49523 = encode_clo(alloc_clo(lam49523_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49525 = arg_buffer[1];
//reading env and args
void* kont49239 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo49936 = alloc_clo(lam49523_fptr, 5);

//setting env list
clo49936[1] = kont49239;
clo49936[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo49936[3] = length;
clo49936[4] = lst;
clo49936[5] = cdr;
void* f4924249370 = encode_clo(clo49936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4924249370;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam49526_fptr() // lam49526 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49527 = arg_buffer[1];
//reading env and args
void* x4914949381 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49243 = (decode_clo(env49527))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49243);
arg_buffer[2] = x4914949381;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49243))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49526 = encode_clo(alloc_clo(lam49526_fptr, 0));

void* lam49528_fptr() // lam49528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49529 = arg_buffer[1];
//reading env and args
void* a4915349389 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4915149385 = (decode_clo(env49529))[3];
//not do dummy comment
void* cons = (decode_clo(env49529))[2];
//not do dummy comment
void* kont49243 = (decode_clo(env49529))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49243;
arg_buffer[3] = a4915149385;
arg_buffer[4] = a4915349389;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49528 = encode_clo(alloc_clo(lam49528_fptr, 0));

void* lam49530_fptr() // lam49530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49531 = arg_buffer[1];
//reading env and args
void* a4915249387 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env49531))[5];
//not do dummy comment
void* proc = (decode_clo(env49531))[4];
//not do dummy comment
void* a4915149385 = (decode_clo(env49531))[3];
//not do dummy comment
void* cons = (decode_clo(env49531))[2];
//not do dummy comment
void* kont49243 = (decode_clo(env49531))[1];

//creating new closure instance
void** clo49938 = alloc_clo(lam49528_fptr, 3);

//setting env list
clo49938[1] = kont49243;
clo49938[2] = cons;
clo49938[3] = a4915149385;
void* f4924549388 = encode_clo(clo49938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4924549388;
arg_buffer[3] = proc;
arg_buffer[4] = a4915249387;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49530 = encode_clo(alloc_clo(lam49530_fptr, 0));

void* lam49532_fptr() // lam49532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49533 = arg_buffer[1];
//reading env and args
void* a4915149385 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49533))[6];
//not do dummy comment
void* lst = (decode_clo(env49533))[5];
//not do dummy comment
void* map = (decode_clo(env49533))[4];
//not do dummy comment
void* proc = (decode_clo(env49533))[3];
//not do dummy comment
void* cons = (decode_clo(env49533))[2];
//not do dummy comment
void* kont49243 = (decode_clo(env49533))[1];

//creating new closure instance
void** clo49940 = alloc_clo(lam49530_fptr, 5);

//setting env list
clo49940[1] = kont49243;
clo49940[2] = cons;
clo49940[3] = a4915149385;
clo49940[4] = proc;
clo49940[5] = map;
void* f4924649386 = encode_clo(clo49940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4924649386;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49532 = encode_clo(alloc_clo(lam49532_fptr, 0));

void* lam49534_fptr() // lam49534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49535 = arg_buffer[1];
//reading env and args
void* a4915049383 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49535))[6];
//not do dummy comment
void* lst = (decode_clo(env49535))[5];
//not do dummy comment
void* map = (decode_clo(env49535))[4];
//not do dummy comment
void* proc = (decode_clo(env49535))[3];
//not do dummy comment
void* cons = (decode_clo(env49535))[2];
//not do dummy comment
void* kont49243 = (decode_clo(env49535))[1];

//creating new closure instance
void** clo49942 = alloc_clo(lam49532_fptr, 6);

//setting env list
clo49942[1] = kont49243;
clo49942[2] = cons;
clo49942[3] = proc;
clo49942[4] = map;
clo49942[5] = lst;
clo49942[6] = cdr;
void* f4924749384 = encode_clo(clo49942);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4924749384;
arg_buffer[3] = a4915049383;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49534 = encode_clo(alloc_clo(lam49534_fptr, 0));

void* lam49536_fptr() // lam49536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49537 = arg_buffer[1];
//reading env and args
void* a4914849379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49537))[8];
//not do dummy comment
void* map = (decode_clo(env49537))[7];
//not do dummy comment
void* proc = (decode_clo(env49537))[6];
//not do dummy comment
void* car = (decode_clo(env49537))[5];
//not do dummy comment
void* cons = (decode_clo(env49537))[4];
//not do dummy comment
void* kont49243 = (decode_clo(env49537))[3];
//not do dummy comment
void* list = (decode_clo(env49537))[2];
//not do dummy comment
void* cdr = (decode_clo(env49537))[1];

//if-clause
bool if_guard49943 = is_true(a4914849379);
if(if_guard49943)
{

//creating new closure instance
void** clo49945 = alloc_clo(lam49526_fptr, 1);

//setting env list
clo49945[1] = kont49243;
void* f4924449380 = encode_clo(clo49945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4924449380;
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
void** clo49947 = alloc_clo(lam49534_fptr, 6);

//setting env list
clo49947[1] = kont49243;
clo49947[2] = cons;
clo49947[3] = proc;
clo49947[4] = map;
clo49947[5] = lst;
clo49947[6] = cdr;
void* f4924849382 = encode_clo(clo49947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4924849382;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49536 = encode_clo(alloc_clo(lam49536_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49538 = arg_buffer[1];
//reading env and args
void* kont49243 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49949 = alloc_clo(lam49536_fptr, 8);

//setting env list
clo49949[1] = cdr;
clo49949[2] = list;
clo49949[3] = kont49243;
clo49949[4] = cons;
clo49949[5] = car;
clo49949[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo49949[7] = map;
clo49949[8] = lst;
void* f4924949378 = encode_clo(clo49949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4924949378;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam49539_fptr() // lam49539 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49540 = arg_buffer[1];
//reading env and args
void* x4915549393 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49250 = (decode_clo(env49540))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49250);
arg_buffer[2] = x4915549393;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49250))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49539 = encode_clo(alloc_clo(lam49539_fptr, 0));

void* lam49541_fptr() // lam49541 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49542 = arg_buffer[1];
//reading env and args
void* a4916049403 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49250 = (decode_clo(env49542))[3];
//not do dummy comment
void* a4915849399 = (decode_clo(env49542))[2];
//not do dummy comment
void* cons = (decode_clo(env49542))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49250;
arg_buffer[3] = a4915849399;
arg_buffer[4] = a4916049403;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49541 = encode_clo(alloc_clo(lam49541_fptr, 0));

void* lam49543_fptr() // lam49543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49544 = arg_buffer[1];
//reading env and args
void* a4915949401 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49250 = (decode_clo(env49544))[5];
//not do dummy comment
void* op = (decode_clo(env49544))[4];
//not do dummy comment
void* a4915849399 = (decode_clo(env49544))[3];
//not do dummy comment
void* filter = (decode_clo(env49544))[2];
//not do dummy comment
void* cons = (decode_clo(env49544))[1];

//creating new closure instance
void** clo49951 = alloc_clo(lam49541_fptr, 3);

//setting env list
clo49951[1] = cons;
clo49951[2] = a4915849399;
clo49951[3] = kont49250;
void* f4925249402 = encode_clo(clo49951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4925249402;
arg_buffer[3] = op;
arg_buffer[4] = a4915949401;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49543 = encode_clo(alloc_clo(lam49543_fptr, 0));

void* lam49545_fptr() // lam49545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49546 = arg_buffer[1];
//reading env and args
void* a4915849399 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49546))[6];
//not do dummy comment
void* lst = (decode_clo(env49546))[5];
//not do dummy comment
void* kont49250 = (decode_clo(env49546))[4];
//not do dummy comment
void* op = (decode_clo(env49546))[3];
//not do dummy comment
void* filter = (decode_clo(env49546))[2];
//not do dummy comment
void* cons = (decode_clo(env49546))[1];

//creating new closure instance
void** clo49953 = alloc_clo(lam49543_fptr, 5);

//setting env list
clo49953[1] = cons;
clo49953[2] = filter;
clo49953[3] = a4915849399;
clo49953[4] = op;
clo49953[5] = kont49250;
void* f4925349400 = encode_clo(clo49953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4925349400;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49545 = encode_clo(alloc_clo(lam49545_fptr, 0));

void* lam49547_fptr() // lam49547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49548 = arg_buffer[1];
//reading env and args
void* a4916149405 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49250 = (decode_clo(env49548))[3];
//not do dummy comment
void* op = (decode_clo(env49548))[2];
//not do dummy comment
void* filter = (decode_clo(env49548))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont49250;
arg_buffer[3] = op;
arg_buffer[4] = a4916149405;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49547 = encode_clo(alloc_clo(lam49547_fptr, 0));

void* lam49549_fptr() // lam49549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49550 = arg_buffer[1];
//reading env and args
void* a4915749397 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49550))[7];
//not do dummy comment
void* lst = (decode_clo(env49550))[6];
//not do dummy comment
void* kont49250 = (decode_clo(env49550))[5];
//not do dummy comment
void* op = (decode_clo(env49550))[4];
//not do dummy comment
void* cons = (decode_clo(env49550))[3];
//not do dummy comment
void* filter = (decode_clo(env49550))[2];
//not do dummy comment
void* car = (decode_clo(env49550))[1];

//if-clause
bool if_guard49954 = is_true(a4915749397);
if(if_guard49954)
{

//creating new closure instance
void** clo49956 = alloc_clo(lam49545_fptr, 6);

//setting env list
clo49956[1] = cons;
clo49956[2] = filter;
clo49956[3] = op;
clo49956[4] = kont49250;
clo49956[5] = lst;
clo49956[6] = cdr;
void* f4925449398 = encode_clo(clo49956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4925449398;
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
void** clo49958 = alloc_clo(lam49547_fptr, 3);

//setting env list
clo49958[1] = filter;
clo49958[2] = op;
clo49958[3] = kont49250;
void* f4925549404 = encode_clo(clo49958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4925549404;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49549 = encode_clo(alloc_clo(lam49549_fptr, 0));

void* lam49551_fptr() // lam49551 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49552 = arg_buffer[1];
//reading env and args
void* a4915649395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49552))[7];
//not do dummy comment
void* lst = (decode_clo(env49552))[6];
//not do dummy comment
void* kont49250 = (decode_clo(env49552))[5];
//not do dummy comment
void* op = (decode_clo(env49552))[4];
//not do dummy comment
void* cons = (decode_clo(env49552))[3];
//not do dummy comment
void* filter = (decode_clo(env49552))[2];
//not do dummy comment
void* car = (decode_clo(env49552))[1];

//creating new closure instance
void** clo49960 = alloc_clo(lam49549_fptr, 7);

//setting env list
clo49960[1] = car;
clo49960[2] = filter;
clo49960[3] = cons;
clo49960[4] = op;
clo49960[5] = kont49250;
clo49960[6] = lst;
clo49960[7] = cdr;
void* f4925649396 = encode_clo(clo49960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4925649396;
arg_buffer[3] = a4915649395;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49551 = encode_clo(alloc_clo(lam49551_fptr, 0));

void* lam49553_fptr() // lam49553 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49554 = arg_buffer[1];
//reading env and args
void* a4915449391 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env49554))[8];
//not do dummy comment
void* kont49250 = (decode_clo(env49554))[7];
//not do dummy comment
void* op = (decode_clo(env49554))[6];
//not do dummy comment
void* cons = (decode_clo(env49554))[5];
//not do dummy comment
void* list = (decode_clo(env49554))[4];
//not do dummy comment
void* cdr = (decode_clo(env49554))[3];
//not do dummy comment
void* filter = (decode_clo(env49554))[2];
//not do dummy comment
void* car = (decode_clo(env49554))[1];

//if-clause
bool if_guard49961 = is_true(a4915449391);
if(if_guard49961)
{

//creating new closure instance
void** clo49963 = alloc_clo(lam49539_fptr, 1);

//setting env list
clo49963[1] = kont49250;
void* f4925149392 = encode_clo(clo49963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4925149392;
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
void** clo49965 = alloc_clo(lam49551_fptr, 7);

//setting env list
clo49965[1] = car;
clo49965[2] = filter;
clo49965[3] = cons;
clo49965[4] = op;
clo49965[5] = kont49250;
clo49965[6] = lst;
clo49965[7] = cdr;
void* f4925749394 = encode_clo(clo49965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4925749394;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49553 = encode_clo(alloc_clo(lam49553_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49555 = arg_buffer[1];
//reading env and args
void* kont49250 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49967 = alloc_clo(lam49553_fptr, 8);

//setting env list
clo49967[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo49967[2] = filter;
clo49967[3] = cdr;
clo49967[4] = list;
clo49967[5] = cons;
clo49967[6] = op;
clo49967[7] = kont49250;
clo49967[8] = lst;
void* f4925849390 = encode_clo(clo49967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4925849390;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam49556_fptr() // lam49556 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49557 = arg_buffer[1];
//reading env and args
void* a4916649413 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env49557))[3];
//not do dummy comment
void* a4916449410 = (decode_clo(env49557))[2];
//not do dummy comment
void* kont49259 = (decode_clo(env49557))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont49259;
arg_buffer[3] = a4916449410;
arg_buffer[4] = a4916649413;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49556 = encode_clo(alloc_clo(lam49556_fptr, 0));

void* lam49559_fptr() // lam49559 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49560 = arg_buffer[1];
//reading env and args
void* a4916449410 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env49560))[4];
//not do dummy comment
void* n = (decode_clo(env49560))[3];
//not do dummy comment
void* kont49259 = (decode_clo(env49560))[2];
//not do dummy comment
void* _u45 = (decode_clo(env49560))[1];
mpz_t* mpzvar49968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49968, "1", 10);
void* a4916549411 = encode_mpz(mpzvar49968);

//creating new closure instance
void** clo49970 = alloc_clo(lam49556_fptr, 3);

//setting env list
clo49970[1] = kont49259;
clo49970[2] = a4916449410;
clo49970[3] = drop;
void* f4926049412 = encode_clo(clo49970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4926049412;
arg_buffer[3] = n;
arg_buffer[4] = a4916549411;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49559 = encode_clo(alloc_clo(lam49559_fptr, 0));

void* lam49561_fptr() // lam49561 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49562 = arg_buffer[1];
//reading env and args
void* a4916349408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49562))[6];
//not do dummy comment
void* n = (decode_clo(env49562))[5];
//not do dummy comment
void* lst = (decode_clo(env49562))[4];
//not do dummy comment
void* drop = (decode_clo(env49562))[3];
//not do dummy comment
void* kont49259 = (decode_clo(env49562))[2];
//not do dummy comment
void* _u45 = (decode_clo(env49562))[1];

//if-clause
bool if_guard49971 = is_true(a4916349408);
if(if_guard49971)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49259);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49259))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49973 = alloc_clo(lam49559_fptr, 4);

//setting env list
clo49973[1] = _u45;
clo49973[2] = kont49259;
clo49973[3] = n;
clo49973[4] = drop;
void* f4926149409 = encode_clo(clo49973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4926149409;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49561 = encode_clo(alloc_clo(lam49561_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49564 = arg_buffer[1];
//reading env and args
void* kont49259 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar49974 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49974, "0", 10);
void* a4916249406 = encode_mpz(mpzvar49974);

//creating new closure instance
void** clo49976 = alloc_clo(lam49561_fptr, 6);

//setting env list
clo49976[1] = _u45;
clo49976[2] = kont49259;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo49976[3] = drop;
clo49976[4] = lst;
clo49976[5] = n;
clo49976[6] = cdr;
void* f4926249407 = encode_clo(clo49976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4926249407;
arg_buffer[3] = n;
arg_buffer[4] = a4916249406;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam49565_fptr() // lam49565 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49566 = arg_buffer[1];
//reading env and args
void* a4917049421 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49263 = (decode_clo(env49566))[3];
//not do dummy comment
void* proc = (decode_clo(env49566))[2];
//not do dummy comment
void* a4916849417 = (decode_clo(env49566))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont49263;
arg_buffer[3] = a4916849417;
arg_buffer[4] = a4917049421;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49565 = encode_clo(alloc_clo(lam49565_fptr, 0));

void* lam49567_fptr() // lam49567 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49568 = arg_buffer[1];
//reading env and args
void* a4916949419 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49263 = (decode_clo(env49568))[5];
//not do dummy comment
void* foldr = (decode_clo(env49568))[4];
//not do dummy comment
void* a4916849417 = (decode_clo(env49568))[3];
//not do dummy comment
void* proc = (decode_clo(env49568))[2];
//not do dummy comment
void* acc = (decode_clo(env49568))[1];

//creating new closure instance
void** clo49978 = alloc_clo(lam49565_fptr, 3);

//setting env list
clo49978[1] = a4916849417;
clo49978[2] = proc;
clo49978[3] = kont49263;
void* f4926449420 = encode_clo(clo49978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4926449420;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4916949419;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49567 = encode_clo(alloc_clo(lam49567_fptr, 0));

void* lam49569_fptr() // lam49569 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49570 = arg_buffer[1];
//reading env and args
void* a4916849417 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49570))[6];
//not do dummy comment
void* kont49263 = (decode_clo(env49570))[5];
//not do dummy comment
void* foldr = (decode_clo(env49570))[4];
//not do dummy comment
void* lst = (decode_clo(env49570))[3];
//not do dummy comment
void* proc = (decode_clo(env49570))[2];
//not do dummy comment
void* acc = (decode_clo(env49570))[1];

//creating new closure instance
void** clo49980 = alloc_clo(lam49567_fptr, 5);

//setting env list
clo49980[1] = acc;
clo49980[2] = proc;
clo49980[3] = a4916849417;
clo49980[4] = foldr;
clo49980[5] = kont49263;
void* f4926549418 = encode_clo(clo49980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4926549418;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49569 = encode_clo(alloc_clo(lam49569_fptr, 0));

void* lam49571_fptr() // lam49571 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49572 = arg_buffer[1];
//reading env and args
void* a4916749415 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49572))[7];
//not do dummy comment
void* kont49263 = (decode_clo(env49572))[6];
//not do dummy comment
void* car = (decode_clo(env49572))[5];
//not do dummy comment
void* foldr = (decode_clo(env49572))[4];
//not do dummy comment
void* lst = (decode_clo(env49572))[3];
//not do dummy comment
void* proc = (decode_clo(env49572))[2];
//not do dummy comment
void* acc = (decode_clo(env49572))[1];

//if-clause
bool if_guard49981 = is_true(a4916749415);
if(if_guard49981)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49263);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49263))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49983 = alloc_clo(lam49569_fptr, 6);

//setting env list
clo49983[1] = acc;
clo49983[2] = proc;
clo49983[3] = lst;
clo49983[4] = foldr;
clo49983[5] = kont49263;
clo49983[6] = cdr;
void* f4926649416 = encode_clo(clo49983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4926649416;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49571 = encode_clo(alloc_clo(lam49571_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49573 = arg_buffer[1];
//reading env and args
void* kont49263 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo49985 = alloc_clo(lam49571_fptr, 7);

//setting env list
clo49985[1] = acc;
clo49985[2] = proc;
clo49985[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo49985[4] = foldr;
clo49985[5] = car;
clo49985[6] = kont49263;
clo49985[7] = cdr;
void* f4926749414 = encode_clo(clo49985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4926749414;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam49574_fptr() // lam49574 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49575 = arg_buffer[1];
//reading env and args
void* a4917449429 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4917249425 = (decode_clo(env49575))[3];
//not do dummy comment
void* kont49268 = (decode_clo(env49575))[2];
//not do dummy comment
void* cons = (decode_clo(env49575))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont49268;
arg_buffer[3] = a4917249425;
arg_buffer[4] = a4917449429;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49574 = encode_clo(alloc_clo(lam49574_fptr, 0));

void* lam49576_fptr() // lam49576 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49577 = arg_buffer[1];
//reading env and args
void* a4917349427 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4917249425 = (decode_clo(env49577))[5];
//not do dummy comment
void* lst2 = (decode_clo(env49577))[4];
//not do dummy comment
void* cons = (decode_clo(env49577))[3];
//not do dummy comment
void* append = (decode_clo(env49577))[2];
//not do dummy comment
void* kont49268 = (decode_clo(env49577))[1];

//creating new closure instance
void** clo49987 = alloc_clo(lam49574_fptr, 3);

//setting env list
clo49987[1] = cons;
clo49987[2] = kont49268;
clo49987[3] = a4917249425;
void* f4926949428 = encode_clo(clo49987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4926949428;
arg_buffer[3] = a4917349427;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49576 = encode_clo(alloc_clo(lam49576_fptr, 0));

void* lam49578_fptr() // lam49578 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49579 = arg_buffer[1];
//reading env and args
void* a4917249425 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49579))[6];
//not do dummy comment
void* lst2 = (decode_clo(env49579))[5];
//not do dummy comment
void* lst1 = (decode_clo(env49579))[4];
//not do dummy comment
void* cons = (decode_clo(env49579))[3];
//not do dummy comment
void* append = (decode_clo(env49579))[2];
//not do dummy comment
void* kont49268 = (decode_clo(env49579))[1];

//creating new closure instance
void** clo49989 = alloc_clo(lam49576_fptr, 5);

//setting env list
clo49989[1] = kont49268;
clo49989[2] = append;
clo49989[3] = cons;
clo49989[4] = lst2;
clo49989[5] = a4917249425;
void* f4927049426 = encode_clo(clo49989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4927049426;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49578 = encode_clo(alloc_clo(lam49578_fptr, 0));

void* lam49580_fptr() // lam49580 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49581 = arg_buffer[1];
//reading env and args
void* a4917149423 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env49581))[7];
//not do dummy comment
void* lst2 = (decode_clo(env49581))[6];
//not do dummy comment
void* cons = (decode_clo(env49581))[5];
//not do dummy comment
void* append = (decode_clo(env49581))[4];
//not do dummy comment
void* kont49268 = (decode_clo(env49581))[3];
//not do dummy comment
void* lst1 = (decode_clo(env49581))[2];
//not do dummy comment
void* car = (decode_clo(env49581))[1];

//if-clause
bool if_guard49990 = is_true(a4917149423);
if(if_guard49990)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49268);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49268))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo49992 = alloc_clo(lam49578_fptr, 6);

//setting env list
clo49992[1] = kont49268;
clo49992[2] = append;
clo49992[3] = cons;
clo49992[4] = lst1;
clo49992[5] = lst2;
clo49992[6] = cdr;
void* f4927149424 = encode_clo(clo49992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4927149424;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam49580 = encode_clo(alloc_clo(lam49580_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49582 = arg_buffer[1];
//reading env and args
void* kont49268 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo49994 = alloc_clo(lam49580_fptr, 7);

//setting env list
clo49994[1] = car;
clo49994[2] = lst1;
clo49994[3] = kont49268;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo49994[4] = append;
clo49994[5] = cons;
clo49994[6] = lst2;
clo49994[7] = cdr;
void* f4927249422 = encode_clo(clo49994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4927249422;
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
void* _49583 = arg_buffer[1];
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

void* kont4927349430 = prim_car(lst);
void* lst49431 = prim_cdr(lst);
void* x4917549432 = apply_prim_hash(lst49431);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4927349430);
arg_buffer[2] = x4917549432;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4927349430))[0]);
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
void* _49584 = arg_buffer[1];
//reading env and args
void* kont49275 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4917649433 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49275);
arg_buffer[2] = x4917649433;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49275))[0]);
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
void* _49585 = arg_buffer[1];
//reading env and args
void* kont49276 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4917749434 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49276);
arg_buffer[2] = x4917749434;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49276))[0]);
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
void* _49586 = arg_buffer[1];
//reading env and args
void* kont49277 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4917849435 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49277);
arg_buffer[2] = x4917849435;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49277))[0]);
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
void* _49587 = arg_buffer[1];
//reading env and args
void* kont49278 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4917949436 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49278);
arg_buffer[2] = x4917949436;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49278))[0]);
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
void* _49589 = arg_buffer[1];
//reading env and args
void* kont49279 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar49995 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar49995, "1", 10);
void* a4918049437 = encode_mpz(mpzvar49995);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = kont49279;
arg_buffer[3] = a4918049437;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam49590_fptr() // lam49590 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env49591 = arg_buffer[1];
//reading env and args
void* x4918149439 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont49280 = (decode_clo(env49591))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont49280);
arg_buffer[2] = x4918149439;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont49280))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam49590 = encode_clo(alloc_clo(lam49590_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _49592 = arg_buffer[1];
//reading env and args
void* kont49280 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo49997 = alloc_clo(lam49590_fptr, 1);

//setting env list
clo49997[1] = kont49280;
void* f4928149438 = encode_clo(clo49997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4928149438;
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

