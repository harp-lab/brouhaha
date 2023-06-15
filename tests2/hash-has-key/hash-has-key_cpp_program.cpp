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
void* _41380 = arg_buffer[1];
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

void* kont4111541216 = prim_car(lst);
void* lst41217 = prim_cdr(lst);
void* x4102541218 = apply_prim__u43(lst41217);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4111541216);
arg_buffer[2] = x4102541218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4111541216))[0]);
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
void* _41381 = arg_buffer[1];
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

void* kont4111741219 = prim_car(lst);
void* lst41220 = prim_cdr(lst);
void* x4102641221 = apply_prim__u45(lst41220);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4111741219);
arg_buffer[2] = x4102641221;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4111741219))[0]);
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
void* _41382 = arg_buffer[1];
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

void* kont4111941222 = prim_car(lst);
void* lst41223 = prim_cdr(lst);
void* x4102741224 = apply_prim__u42(lst41223);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4111941222);
arg_buffer[2] = x4102741224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4111941222))[0]);
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
void* _41383 = arg_buffer[1];
//reading env and args
void* kont41121 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4102841225 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41121);
arg_buffer[2] = x4102841225;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41121))[0]);
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
void* _41384 = arg_buffer[1];
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

void* kont4112241226 = prim_car(lst);
void* lst41227 = prim_cdr(lst);
void* x4102941228 = apply_prim__u47(lst41227);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4112241226);
arg_buffer[2] = x4102941228;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4112241226))[0]);
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
void* _41385 = arg_buffer[1];
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

void* kont4112441229 = prim_car(lst);
void* lst41230 = prim_cdr(lst);
void* x4103041231 = apply_prim__u61(lst41230);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4112441229);
arg_buffer[2] = x4103041231;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4112441229))[0]);
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
void* _41386 = arg_buffer[1];
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

void* kont4112641232 = prim_car(lst);
void* lst41233 = prim_cdr(lst);
void* x4103141234 = apply_prim__u62(lst41233);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4112641232);
arg_buffer[2] = x4103141234;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4112641232))[0]);
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
void* _41387 = arg_buffer[1];
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

void* kont4112841235 = prim_car(lst);
void* lst41236 = prim_cdr(lst);
void* x4103241237 = apply_prim__u60(lst41236);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4112841235);
arg_buffer[2] = x4103241237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4112841235))[0]);
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
void* _41388 = arg_buffer[1];
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

void* kont4113041238 = prim_car(lst);
void* lst41239 = prim_cdr(lst);
void* x4103341240 = apply_prim__u60_u61(lst41239);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4113041238);
arg_buffer[2] = x4103341240;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4113041238))[0]);
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
void* _41389 = arg_buffer[1];
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

void* kont4113241241 = prim_car(lst);
void* lst41242 = prim_cdr(lst);
void* x4103441243 = apply_prim__u62_u61(lst41242);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4113241241);
arg_buffer[2] = x4103441243;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4113241241))[0]);
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
void* _41390 = arg_buffer[1];
//reading env and args
void* kont41134 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4103541244 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41134);
arg_buffer[2] = x4103541244;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41134))[0]);
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
void* _41391 = arg_buffer[1];
//reading env and args
void* kont41135 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4103641245 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41135);
arg_buffer[2] = x4103641245;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41135))[0]);
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
void* _41392 = arg_buffer[1];
//reading env and args
void* kont41136 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4103741246 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41136);
arg_buffer[2] = x4103741246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41136))[0]);
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
void* _41393 = arg_buffer[1];
//reading env and args
void* kont41137 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4103841247 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41137);
arg_buffer[2] = x4103841247;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41137))[0]);
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
void* _41394 = arg_buffer[1];
//reading env and args
void* kont41138 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4103941248 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41138);
arg_buffer[2] = x4103941248;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41138))[0]);
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
void* _41395 = arg_buffer[1];
//reading env and args
void* kont41139 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4104041249 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41139);
arg_buffer[2] = x4104041249;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41139))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam41396_fptr() // lam41396 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41397 = arg_buffer[1];
//reading env and args
void* a4104341253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41140 = (decode_clo(env41397))[3];
//not do dummy comment
void* a4104141250 = (decode_clo(env41397))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env41397))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41140;
arg_buffer[3] = a4104141250;
arg_buffer[4] = a4104341253;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41396 = encode_clo(alloc_clo(lam41396_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41400 = arg_buffer[1];
//reading env and args
void* kont41140 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42379 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42379, "0", 10);
void* a4104141250 = encode_mpz(mpzvar42379);
mpz_t* mpzvar42380 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42380, "2", 10);
void* a4104241251 = encode_mpz(mpzvar42380);

//creating new closure instance
void** clo42382 = alloc_clo(lam41396_fptr, 3);

//setting env list
clo42382[1] = equal_u63;
clo42382[2] = a4104141250;
clo42382[3] = kont41140;
void* f4114141252 = encode_clo(clo42382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4114141252;
arg_buffer[3] = x;
arg_buffer[4] = a4104241251;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam41401_fptr() // lam41401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41402 = arg_buffer[1];
//reading env and args
void* a4104641257 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env41402))[3];
//not do dummy comment
void* a4104441254 = (decode_clo(env41402))[2];
//not do dummy comment
void* kont41142 = (decode_clo(env41402))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41142;
arg_buffer[3] = a4104441254;
arg_buffer[4] = a4104641257;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41401 = encode_clo(alloc_clo(lam41401_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41405 = arg_buffer[1];
//reading env and args
void* kont41142 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42383 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42383, "1", 10);
void* a4104441254 = encode_mpz(mpzvar42383);
mpz_t* mpzvar42384 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42384, "2", 10);
void* a4104541255 = encode_mpz(mpzvar42384);

//creating new closure instance
void** clo42386 = alloc_clo(lam41401_fptr, 3);

//setting env list
clo42386[1] = kont41142;
clo42386[2] = a4104441254;
clo42386[3] = equal_u63;
void* f4114341256 = encode_clo(clo42386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4114341256;
arg_buffer[3] = x;
arg_buffer[4] = a4104541255;
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
void* _41406 = arg_buffer[1];
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

void* kont4114441258 = prim_car(x);
void* x41259 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4114441258);
arg_buffer[2] = x41259;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4114441258))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam41409_fptr() // lam41409 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41410 = arg_buffer[1];
//reading env and args
void* a4105241269 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41146 = (decode_clo(env41410))[3];
//not do dummy comment
void* x = (decode_clo(env41410))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41410))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont41146;
arg_buffer[3] = x;
arg_buffer[4] = a4105241269;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41409 = encode_clo(alloc_clo(lam41409_fptr, 0));

void* lam41411_fptr() // lam41411 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41412 = arg_buffer[1];
//reading env and args
void* a4105041266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41412))[5];
//not do dummy comment
void* x = (decode_clo(env41412))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env41412))[3];
//not do dummy comment
void* kont41146 = (decode_clo(env41412))[2];
//not do dummy comment
void* cdr = (decode_clo(env41412))[1];

//if-clause
bool if_guard42387 = is_true(a4105041266);
if(if_guard42387)
{
void* x4105141267 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41146);
arg_buffer[2] = x4105141267;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41146))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42389 = alloc_clo(lam41409_fptr, 3);

//setting env list
clo42389[1] = member_u63;
clo42389[2] = x;
clo42389[3] = kont41146;
void* f4114741268 = encode_clo(clo42389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4114741268;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41411 = encode_clo(alloc_clo(lam41411_fptr, 0));

void* lam41413_fptr() // lam41413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41414 = arg_buffer[1];
//reading env and args
void* a4104941264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41414))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env41414))[5];
//not do dummy comment
void* x = (decode_clo(env41414))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env41414))[3];
//not do dummy comment
void* kont41146 = (decode_clo(env41414))[2];
//not do dummy comment
void* cdr = (decode_clo(env41414))[1];

//creating new closure instance
void** clo42391 = alloc_clo(lam41411_fptr, 5);

//setting env list
clo42391[1] = cdr;
clo42391[2] = kont41146;
clo42391[3] = member_u63;
clo42391[4] = x;
clo42391[5] = lst;
void* f4114841265 = encode_clo(clo42391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4114841265;
arg_buffer[3] = a4104941264;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41413 = encode_clo(alloc_clo(lam41413_fptr, 0));

void* lam41415_fptr() // lam41415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41416 = arg_buffer[1];
//reading env and args
void* a4104741261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41416))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env41416))[6];
//not do dummy comment
void* x = (decode_clo(env41416))[5];
//not do dummy comment
void* car = (decode_clo(env41416))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env41416))[3];
//not do dummy comment
void* kont41146 = (decode_clo(env41416))[2];
//not do dummy comment
void* cdr = (decode_clo(env41416))[1];

//if-clause
bool if_guard42392 = is_true(a4104741261);
if(if_guard42392)
{
void* x4104841262 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41146);
arg_buffer[2] = x4104841262;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41146))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42394 = alloc_clo(lam41413_fptr, 6);

//setting env list
clo42394[1] = cdr;
clo42394[2] = kont41146;
clo42394[3] = member_u63;
clo42394[4] = x;
clo42394[5] = equal_u63;
clo42394[6] = lst;
void* f4114941263 = encode_clo(clo42394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4114941263;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41415 = encode_clo(alloc_clo(lam41415_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41417 = arg_buffer[1];
//reading env and args
void* kont41146 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42396 = alloc_clo(lam41415_fptr, 7);

//setting env list
clo42396[1] = cdr;
clo42396[2] = kont41146;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo42396[3] = member_u63;
clo42396[4] = car;
clo42396[5] = x;
clo42396[6] = equal_u63;
clo42396[7] = lst;
void* f4115041260 = encode_clo(clo42396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4115041260;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam41418_fptr() // lam41418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41419 = arg_buffer[1];
//reading env and args
void* a4105641277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4105541275 = (decode_clo(env41419))[4];
//not do dummy comment
void* kont41151 = (decode_clo(env41419))[3];
//not do dummy comment
void* fun = (decode_clo(env41419))[2];
//not do dummy comment
void* foldl = (decode_clo(env41419))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont41151;
arg_buffer[3] = fun;
arg_buffer[4] = a4105541275;
arg_buffer[5] = a4105641277;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41418 = encode_clo(alloc_clo(lam41418_fptr, 0));

void* lam41420_fptr() // lam41420 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41421 = arg_buffer[1];
//reading env and args
void* a4105541275 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41421))[5];
//not do dummy comment
void* lst = (decode_clo(env41421))[4];
//not do dummy comment
void* kont41151 = (decode_clo(env41421))[3];
//not do dummy comment
void* fun = (decode_clo(env41421))[2];
//not do dummy comment
void* foldl = (decode_clo(env41421))[1];

//creating new closure instance
void** clo42398 = alloc_clo(lam41418_fptr, 4);

//setting env list
clo42398[1] = foldl;
clo42398[2] = fun;
clo42398[3] = kont41151;
clo42398[4] = a4105541275;
void* f4115241276 = encode_clo(clo42398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4115241276;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41420 = encode_clo(alloc_clo(lam41420_fptr, 0));

void* lam41422_fptr() // lam41422 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41423 = arg_buffer[1];
//reading env and args
void* a4105441273 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41423))[6];
//not do dummy comment
void* lst = (decode_clo(env41423))[5];
//not do dummy comment
void* kont41151 = (decode_clo(env41423))[4];
//not do dummy comment
void* fun = (decode_clo(env41423))[3];
//not do dummy comment
void* acc = (decode_clo(env41423))[2];
//not do dummy comment
void* foldl = (decode_clo(env41423))[1];

//creating new closure instance
void** clo42400 = alloc_clo(lam41420_fptr, 5);

//setting env list
clo42400[1] = foldl;
clo42400[2] = fun;
clo42400[3] = kont41151;
clo42400[4] = lst;
clo42400[5] = cdr;
void* f4115341274 = encode_clo(clo42400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4115341274;
arg_buffer[3] = a4105441273;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41422 = encode_clo(alloc_clo(lam41422_fptr, 0));

void* lam41424_fptr() // lam41424 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41425 = arg_buffer[1];
//reading env and args
void* a4105341271 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41425))[7];
//not do dummy comment
void* lst = (decode_clo(env41425))[6];
//not do dummy comment
void* kont41151 = (decode_clo(env41425))[5];
//not do dummy comment
void* fun = (decode_clo(env41425))[4];
//not do dummy comment
void* acc = (decode_clo(env41425))[3];
//not do dummy comment
void* car = (decode_clo(env41425))[2];
//not do dummy comment
void* foldl = (decode_clo(env41425))[1];

//if-clause
bool if_guard42401 = is_true(a4105341271);
if(if_guard42401)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41151);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41151))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42403 = alloc_clo(lam41422_fptr, 6);

//setting env list
clo42403[1] = foldl;
clo42403[2] = acc;
clo42403[3] = fun;
clo42403[4] = kont41151;
clo42403[5] = lst;
clo42403[6] = cdr;
void* f4115441272 = encode_clo(clo42403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4115441272;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41424 = encode_clo(alloc_clo(lam41424_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41426 = arg_buffer[1];
//reading env and args
void* kont41151 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42405 = alloc_clo(lam41424_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo42405[1] = foldl;
clo42405[2] = car;
clo42405[3] = acc;
clo42405[4] = fun;
clo42405[5] = kont41151;
clo42405[6] = lst;
clo42405[7] = cdr;
void* f4115541270 = encode_clo(clo42405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4115541270;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam41427_fptr() // lam41427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41428 = arg_buffer[1];
//reading env and args
void* a4106041285 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41156 = (decode_clo(env41428))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41428))[2];
//not do dummy comment
void* a4105841281 = (decode_clo(env41428))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41156;
arg_buffer[3] = a4105841281;
arg_buffer[4] = a4106041285;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41427 = encode_clo(alloc_clo(lam41427_fptr, 0));

void* lam41429_fptr() // lam41429 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41430 = arg_buffer[1];
//reading env and args
void* a4105941283 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41156 = (decode_clo(env41430))[5];
//not do dummy comment
void* lst2 = (decode_clo(env41430))[4];
//not do dummy comment
void* cons = (decode_clo(env41430))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41430))[2];
//not do dummy comment
void* a4105841281 = (decode_clo(env41430))[1];

//creating new closure instance
void** clo42407 = alloc_clo(lam41427_fptr, 3);

//setting env list
clo42407[1] = a4105841281;
clo42407[2] = reverse_u45helper;
clo42407[3] = kont41156;
void* f4115741284 = encode_clo(clo42407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4115741284;
arg_buffer[3] = a4105941283;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41429 = encode_clo(alloc_clo(lam41429_fptr, 0));

void* lam41431_fptr() // lam41431 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41432 = arg_buffer[1];
//reading env and args
void* a4105841281 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41432))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41432))[5];
//not do dummy comment
void* kont41156 = (decode_clo(env41432))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41432))[3];
//not do dummy comment
void* car = (decode_clo(env41432))[2];
//not do dummy comment
void* cons = (decode_clo(env41432))[1];

//creating new closure instance
void** clo42409 = alloc_clo(lam41429_fptr, 5);

//setting env list
clo42409[1] = a4105841281;
clo42409[2] = reverse_u45helper;
clo42409[3] = cons;
clo42409[4] = lst2;
clo42409[5] = kont41156;
void* f4115841282 = encode_clo(clo42409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4115841282;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41431 = encode_clo(alloc_clo(lam41431_fptr, 0));

void* lam41433_fptr() // lam41433 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41434 = arg_buffer[1];
//reading env and args
void* a4105741279 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41434))[7];
//not do dummy comment
void* lst = (decode_clo(env41434))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41434))[5];
//not do dummy comment
void* kont41156 = (decode_clo(env41434))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41434))[3];
//not do dummy comment
void* car = (decode_clo(env41434))[2];
//not do dummy comment
void* cons = (decode_clo(env41434))[1];

//if-clause
bool if_guard42410 = is_true(a4105741279);
if(if_guard42410)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41156);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41156))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42412 = alloc_clo(lam41431_fptr, 6);

//setting env list
clo42412[1] = cons;
clo42412[2] = car;
clo42412[3] = lst2;
clo42412[4] = kont41156;
clo42412[5] = reverse_u45helper;
clo42412[6] = lst;
void* f4115941280 = encode_clo(clo42412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4115941280;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41433 = encode_clo(alloc_clo(lam41433_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41435 = arg_buffer[1];
//reading env and args
void* kont41156 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42414 = alloc_clo(lam41433_fptr, 7);

//setting env list
clo42414[1] = cons;
clo42414[2] = car;
clo42414[3] = lst2;
clo42414[4] = kont41156;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo42414[5] = reverse_u45helper;
clo42414[6] = lst;
clo42414[7] = cdr;
void* f4116041278 = encode_clo(clo42414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4116041278;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam41436_fptr() // lam41436 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41437 = arg_buffer[1];
//reading env and args
void* a4106141287 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41437))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41437))[2];
//not do dummy comment
void* kont41161 = (decode_clo(env41437))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41161;
arg_buffer[3] = lst;
arg_buffer[4] = a4106141287;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41436 = encode_clo(alloc_clo(lam41436_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41438 = arg_buffer[1];
//reading env and args
void* kont41161 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42416 = alloc_clo(lam41436_fptr, 3);

//setting env list
clo42416[1] = kont41161;
clo42416[2] = reverse_u45helper;
clo42416[3] = lst;
void* f4116241286 = encode_clo(clo42416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4116241286;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam41439_fptr() // lam41439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41440 = arg_buffer[1];
//reading env and args
void* x4106441292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41163 = (decode_clo(env41440))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41163);
arg_buffer[2] = x4106441292;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41163))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41439 = encode_clo(alloc_clo(lam41439_fptr, 0));

void* lam41441_fptr() // lam41441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41442 = arg_buffer[1];
//reading env and args
void* a4106941301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41163 = (decode_clo(env41442))[4];
//not do dummy comment
void* a4106541294 = (decode_clo(env41442))[3];
//not do dummy comment
void* a4106741297 = (decode_clo(env41442))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env41442))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41163;
arg_buffer[3] = a4106541294;
arg_buffer[4] = a4106741297;
arg_buffer[5] = a4106941301;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41441 = encode_clo(alloc_clo(lam41441_fptr, 0));

void* lam41443_fptr() // lam41443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41444 = arg_buffer[1];
//reading env and args
void* a4106841299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41163 = (decode_clo(env41444))[6];
//not do dummy comment
void* a4106541294 = (decode_clo(env41444))[5];
//not do dummy comment
void* a4106741297 = (decode_clo(env41444))[4];
//not do dummy comment
void* cons = (decode_clo(env41444))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41444))[2];
//not do dummy comment
void* lst2 = (decode_clo(env41444))[1];

//creating new closure instance
void** clo42418 = alloc_clo(lam41441_fptr, 4);

//setting env list
clo42418[1] = take_u45helper;
clo42418[2] = a4106741297;
clo42418[3] = a4106541294;
clo42418[4] = kont41163;
void* f4116541300 = encode_clo(clo42418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4116541300;
arg_buffer[3] = a4106841299;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41443 = encode_clo(alloc_clo(lam41443_fptr, 0));

void* lam41445_fptr() // lam41445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41446 = arg_buffer[1];
//reading env and args
void* a4106741297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41163 = (decode_clo(env41446))[7];
//not do dummy comment
void* car = (decode_clo(env41446))[6];
//not do dummy comment
void* cons = (decode_clo(env41446))[5];
//not do dummy comment
void* lst = (decode_clo(env41446))[4];
//not do dummy comment
void* a4106541294 = (decode_clo(env41446))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41446))[2];
//not do dummy comment
void* lst2 = (decode_clo(env41446))[1];

//creating new closure instance
void** clo42420 = alloc_clo(lam41443_fptr, 6);

//setting env list
clo42420[1] = lst2;
clo42420[2] = take_u45helper;
clo42420[3] = cons;
clo42420[4] = a4106741297;
clo42420[5] = a4106541294;
clo42420[6] = kont41163;
void* f4116641298 = encode_clo(clo42420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4116641298;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41445 = encode_clo(alloc_clo(lam41445_fptr, 0));

void* lam41448_fptr() // lam41448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41449 = arg_buffer[1];
//reading env and args
void* a4106541294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41163 = (decode_clo(env41449))[8];
//not do dummy comment
void* lst = (decode_clo(env41449))[7];
//not do dummy comment
void* cons = (decode_clo(env41449))[6];
//not do dummy comment
void* _u45 = (decode_clo(env41449))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env41449))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41449))[3];
//not do dummy comment
void* n = (decode_clo(env41449))[2];
//not do dummy comment
void* car = (decode_clo(env41449))[1];
mpz_t* mpzvar42421 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42421, "1", 10);
void* a4106641295 = encode_mpz(mpzvar42421);

//creating new closure instance
void** clo42423 = alloc_clo(lam41445_fptr, 7);

//setting env list
clo42423[1] = lst2;
clo42423[2] = take_u45helper;
clo42423[3] = a4106541294;
clo42423[4] = lst;
clo42423[5] = cons;
clo42423[6] = car;
clo42423[7] = kont41163;
void* f4116741296 = encode_clo(clo42423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4116741296;
arg_buffer[3] = n;
arg_buffer[4] = a4106641295;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41448 = encode_clo(alloc_clo(lam41448_fptr, 0));

void* lam41450_fptr() // lam41450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41451 = arg_buffer[1];
//reading env and args
void* a4106341290 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41451))[10];
//not do dummy comment
void* kont41163 = (decode_clo(env41451))[9];
//not do dummy comment
void* lst = (decode_clo(env41451))[8];
//not do dummy comment
void* reverse = (decode_clo(env41451))[7];
//not do dummy comment
void* cons = (decode_clo(env41451))[6];
//not do dummy comment
void* _u45 = (decode_clo(env41451))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env41451))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41451))[3];
//not do dummy comment
void* n = (decode_clo(env41451))[2];
//not do dummy comment
void* car = (decode_clo(env41451))[1];

//if-clause
bool if_guard42424 = is_true(a4106341290);
if(if_guard42424)
{

//creating new closure instance
void** clo42426 = alloc_clo(lam41439_fptr, 1);

//setting env list
clo42426[1] = kont41163;
void* f4116441291 = encode_clo(clo42426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4116441291;
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
void** clo42428 = alloc_clo(lam41448_fptr, 8);

//setting env list
clo42428[1] = car;
clo42428[2] = n;
clo42428[3] = lst2;
clo42428[4] = take_u45helper;
clo42428[5] = _u45;
clo42428[6] = cons;
clo42428[7] = lst;
clo42428[8] = kont41163;
void* f4116841293 = encode_clo(clo42428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4116841293;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41450 = encode_clo(alloc_clo(lam41450_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41453 = arg_buffer[1];
//reading env and args
void* kont41163 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar42429 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42429, "0", 10);
void* a4106241288 = encode_mpz(mpzvar42429);

//creating new closure instance
void** clo42431 = alloc_clo(lam41450_fptr, 10);

//setting env list
clo42431[1] = car;
clo42431[2] = n;
clo42431[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo42431[4] = take_u45helper;
clo42431[5] = _u45;
clo42431[6] = cons;
clo42431[7] = reverse;
clo42431[8] = lst;
clo42431[9] = kont41163;
clo42431[10] = cdr;
void* f4116941289 = encode_clo(clo42431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4116941289;
arg_buffer[3] = n;
arg_buffer[4] = a4106241288;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam41454_fptr() // lam41454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41455 = arg_buffer[1];
//reading env and args
void* a4107041303 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41455))[4];
//not do dummy comment
void* kont41170 = (decode_clo(env41455))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41455))[2];
//not do dummy comment
void* n = (decode_clo(env41455))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41170;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4107041303;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41454 = encode_clo(alloc_clo(lam41454_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41456 = arg_buffer[1];
//reading env and args
void* kont41170 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42433 = alloc_clo(lam41454_fptr, 4);

//setting env list
clo42433[1] = n;
clo42433[2] = take_u45helper;
clo42433[3] = kont41170;
clo42433[4] = lst;
void* f4117141302 = encode_clo(clo42433);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4117141302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam41458_fptr() // lam41458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41459 = arg_buffer[1];
//reading env and args
void* a4107541311 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4107341307 = (decode_clo(env41459))[3];
//not do dummy comment
void* _u43 = (decode_clo(env41459))[2];
//not do dummy comment
void* kont41172 = (decode_clo(env41459))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont41172;
arg_buffer[3] = a4107341307;
arg_buffer[4] = a4107541311;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41458 = encode_clo(alloc_clo(lam41458_fptr, 0));

void* lam41460_fptr() // lam41460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41461 = arg_buffer[1];
//reading env and args
void* a4107441309 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4107341307 = (decode_clo(env41461))[4];
//not do dummy comment
void* length = (decode_clo(env41461))[3];
//not do dummy comment
void* _u43 = (decode_clo(env41461))[2];
//not do dummy comment
void* kont41172 = (decode_clo(env41461))[1];

//creating new closure instance
void** clo42435 = alloc_clo(lam41458_fptr, 3);

//setting env list
clo42435[1] = kont41172;
clo42435[2] = _u43;
clo42435[3] = a4107341307;
void* f4117341310 = encode_clo(clo42435);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4117341310;
arg_buffer[3] = a4107441309;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41460 = encode_clo(alloc_clo(lam41460_fptr, 0));

void* lam41463_fptr() // lam41463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41464 = arg_buffer[1];
//reading env and args
void* a4107141305 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41464))[5];
//not do dummy comment
void* lst = (decode_clo(env41464))[4];
//not do dummy comment
void* length = (decode_clo(env41464))[3];
//not do dummy comment
void* _u43 = (decode_clo(env41464))[2];
//not do dummy comment
void* kont41172 = (decode_clo(env41464))[1];

//if-clause
bool if_guard42436 = is_true(a4107141305);
if(if_guard42436)
{
mpz_t* mpzvar42437 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42437, "0", 10);
void* x4107241306 = encode_mpz(mpzvar42437);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41172);
arg_buffer[2] = x4107241306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41172))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar42438 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42438, "1", 10);
void* a4107341307 = encode_mpz(mpzvar42438);

//creating new closure instance
void** clo42440 = alloc_clo(lam41460_fptr, 4);

//setting env list
clo42440[1] = kont41172;
clo42440[2] = _u43;
clo42440[3] = length;
clo42440[4] = a4107341307;
void* f4117441308 = encode_clo(clo42440);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4117441308;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41463 = encode_clo(alloc_clo(lam41463_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41465 = arg_buffer[1];
//reading env and args
void* kont41172 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42442 = alloc_clo(lam41463_fptr, 5);

//setting env list
clo42442[1] = kont41172;
clo42442[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo42442[3] = length;
clo42442[4] = lst;
clo42442[5] = cdr;
void* f4117541304 = encode_clo(clo42442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4117541304;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam41466_fptr() // lam41466 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41467 = arg_buffer[1];
//reading env and args
void* x4107741315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41176 = (decode_clo(env41467))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41176);
arg_buffer[2] = x4107741315;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41176))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41466 = encode_clo(alloc_clo(lam41466_fptr, 0));

void* lam41468_fptr() // lam41468 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41469 = arg_buffer[1];
//reading env and args
void* a4108141323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4107941319 = (decode_clo(env41469))[3];
//not do dummy comment
void* cons = (decode_clo(env41469))[2];
//not do dummy comment
void* kont41176 = (decode_clo(env41469))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41176;
arg_buffer[3] = a4107941319;
arg_buffer[4] = a4108141323;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41468 = encode_clo(alloc_clo(lam41468_fptr, 0));

void* lam41470_fptr() // lam41470 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41471 = arg_buffer[1];
//reading env and args
void* a4108041321 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env41471))[5];
//not do dummy comment
void* proc = (decode_clo(env41471))[4];
//not do dummy comment
void* a4107941319 = (decode_clo(env41471))[3];
//not do dummy comment
void* cons = (decode_clo(env41471))[2];
//not do dummy comment
void* kont41176 = (decode_clo(env41471))[1];

//creating new closure instance
void** clo42444 = alloc_clo(lam41468_fptr, 3);

//setting env list
clo42444[1] = kont41176;
clo42444[2] = cons;
clo42444[3] = a4107941319;
void* f4117841322 = encode_clo(clo42444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4117841322;
arg_buffer[3] = proc;
arg_buffer[4] = a4108041321;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41470 = encode_clo(alloc_clo(lam41470_fptr, 0));

void* lam41472_fptr() // lam41472 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41473 = arg_buffer[1];
//reading env and args
void* a4107941319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41473))[6];
//not do dummy comment
void* lst = (decode_clo(env41473))[5];
//not do dummy comment
void* map = (decode_clo(env41473))[4];
//not do dummy comment
void* proc = (decode_clo(env41473))[3];
//not do dummy comment
void* cons = (decode_clo(env41473))[2];
//not do dummy comment
void* kont41176 = (decode_clo(env41473))[1];

//creating new closure instance
void** clo42446 = alloc_clo(lam41470_fptr, 5);

//setting env list
clo42446[1] = kont41176;
clo42446[2] = cons;
clo42446[3] = a4107941319;
clo42446[4] = proc;
clo42446[5] = map;
void* f4117941320 = encode_clo(clo42446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4117941320;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41472 = encode_clo(alloc_clo(lam41472_fptr, 0));

void* lam41474_fptr() // lam41474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41475 = arg_buffer[1];
//reading env and args
void* a4107841317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41475))[6];
//not do dummy comment
void* lst = (decode_clo(env41475))[5];
//not do dummy comment
void* map = (decode_clo(env41475))[4];
//not do dummy comment
void* proc = (decode_clo(env41475))[3];
//not do dummy comment
void* cons = (decode_clo(env41475))[2];
//not do dummy comment
void* kont41176 = (decode_clo(env41475))[1];

//creating new closure instance
void** clo42448 = alloc_clo(lam41472_fptr, 6);

//setting env list
clo42448[1] = kont41176;
clo42448[2] = cons;
clo42448[3] = proc;
clo42448[4] = map;
clo42448[5] = lst;
clo42448[6] = cdr;
void* f4118041318 = encode_clo(clo42448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4118041318;
arg_buffer[3] = a4107841317;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41474 = encode_clo(alloc_clo(lam41474_fptr, 0));

void* lam41476_fptr() // lam41476 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41477 = arg_buffer[1];
//reading env and args
void* a4107641313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41477))[8];
//not do dummy comment
void* map = (decode_clo(env41477))[7];
//not do dummy comment
void* proc = (decode_clo(env41477))[6];
//not do dummy comment
void* car = (decode_clo(env41477))[5];
//not do dummy comment
void* list = (decode_clo(env41477))[4];
//not do dummy comment
void* cdr = (decode_clo(env41477))[3];
//not do dummy comment
void* cons = (decode_clo(env41477))[2];
//not do dummy comment
void* kont41176 = (decode_clo(env41477))[1];

//if-clause
bool if_guard42449 = is_true(a4107641313);
if(if_guard42449)
{

//creating new closure instance
void** clo42451 = alloc_clo(lam41466_fptr, 1);

//setting env list
clo42451[1] = kont41176;
void* f4117741314 = encode_clo(clo42451);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4117741314;
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
void** clo42453 = alloc_clo(lam41474_fptr, 6);

//setting env list
clo42453[1] = kont41176;
clo42453[2] = cons;
clo42453[3] = proc;
clo42453[4] = map;
clo42453[5] = lst;
clo42453[6] = cdr;
void* f4118141316 = encode_clo(clo42453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4118141316;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41476 = encode_clo(alloc_clo(lam41476_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41478 = arg_buffer[1];
//reading env and args
void* kont41176 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42455 = alloc_clo(lam41476_fptr, 8);

//setting env list
clo42455[1] = kont41176;
clo42455[2] = cons;
clo42455[3] = cdr;
clo42455[4] = list;
clo42455[5] = car;
clo42455[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo42455[7] = map;
clo42455[8] = lst;
void* f4118241312 = encode_clo(clo42455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4118241312;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam41479_fptr() // lam41479 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41480 = arg_buffer[1];
//reading env and args
void* x4108341327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41183 = (decode_clo(env41480))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41183);
arg_buffer[2] = x4108341327;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41183))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41479 = encode_clo(alloc_clo(lam41479_fptr, 0));

void* lam41481_fptr() // lam41481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41482 = arg_buffer[1];
//reading env and args
void* a4108841337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41183 = (decode_clo(env41482))[3];
//not do dummy comment
void* a4108641333 = (decode_clo(env41482))[2];
//not do dummy comment
void* cons = (decode_clo(env41482))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41183;
arg_buffer[3] = a4108641333;
arg_buffer[4] = a4108841337;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41481 = encode_clo(alloc_clo(lam41481_fptr, 0));

void* lam41483_fptr() // lam41483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41484 = arg_buffer[1];
//reading env and args
void* a4108741335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41183 = (decode_clo(env41484))[5];
//not do dummy comment
void* op = (decode_clo(env41484))[4];
//not do dummy comment
void* a4108641333 = (decode_clo(env41484))[3];
//not do dummy comment
void* filter = (decode_clo(env41484))[2];
//not do dummy comment
void* cons = (decode_clo(env41484))[1];

//creating new closure instance
void** clo42457 = alloc_clo(lam41481_fptr, 3);

//setting env list
clo42457[1] = cons;
clo42457[2] = a4108641333;
clo42457[3] = kont41183;
void* f4118541336 = encode_clo(clo42457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4118541336;
arg_buffer[3] = op;
arg_buffer[4] = a4108741335;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41483 = encode_clo(alloc_clo(lam41483_fptr, 0));

void* lam41485_fptr() // lam41485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41486 = arg_buffer[1];
//reading env and args
void* a4108641333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41486))[6];
//not do dummy comment
void* lst = (decode_clo(env41486))[5];
//not do dummy comment
void* kont41183 = (decode_clo(env41486))[4];
//not do dummy comment
void* op = (decode_clo(env41486))[3];
//not do dummy comment
void* filter = (decode_clo(env41486))[2];
//not do dummy comment
void* cons = (decode_clo(env41486))[1];

//creating new closure instance
void** clo42459 = alloc_clo(lam41483_fptr, 5);

//setting env list
clo42459[1] = cons;
clo42459[2] = filter;
clo42459[3] = a4108641333;
clo42459[4] = op;
clo42459[5] = kont41183;
void* f4118641334 = encode_clo(clo42459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4118641334;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41485 = encode_clo(alloc_clo(lam41485_fptr, 0));

void* lam41487_fptr() // lam41487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41488 = arg_buffer[1];
//reading env and args
void* a4108941339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41183 = (decode_clo(env41488))[3];
//not do dummy comment
void* op = (decode_clo(env41488))[2];
//not do dummy comment
void* filter = (decode_clo(env41488))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont41183;
arg_buffer[3] = op;
arg_buffer[4] = a4108941339;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41487 = encode_clo(alloc_clo(lam41487_fptr, 0));

void* lam41489_fptr() // lam41489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41490 = arg_buffer[1];
//reading env and args
void* a4108541331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41490))[7];
//not do dummy comment
void* lst = (decode_clo(env41490))[6];
//not do dummy comment
void* kont41183 = (decode_clo(env41490))[5];
//not do dummy comment
void* op = (decode_clo(env41490))[4];
//not do dummy comment
void* cons = (decode_clo(env41490))[3];
//not do dummy comment
void* filter = (decode_clo(env41490))[2];
//not do dummy comment
void* car = (decode_clo(env41490))[1];

//if-clause
bool if_guard42460 = is_true(a4108541331);
if(if_guard42460)
{

//creating new closure instance
void** clo42462 = alloc_clo(lam41485_fptr, 6);

//setting env list
clo42462[1] = cons;
clo42462[2] = filter;
clo42462[3] = op;
clo42462[4] = kont41183;
clo42462[5] = lst;
clo42462[6] = cdr;
void* f4118741332 = encode_clo(clo42462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4118741332;
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
void** clo42464 = alloc_clo(lam41487_fptr, 3);

//setting env list
clo42464[1] = filter;
clo42464[2] = op;
clo42464[3] = kont41183;
void* f4118841338 = encode_clo(clo42464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4118841338;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41489 = encode_clo(alloc_clo(lam41489_fptr, 0));

void* lam41491_fptr() // lam41491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41492 = arg_buffer[1];
//reading env and args
void* a4108441329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41492))[7];
//not do dummy comment
void* lst = (decode_clo(env41492))[6];
//not do dummy comment
void* kont41183 = (decode_clo(env41492))[5];
//not do dummy comment
void* op = (decode_clo(env41492))[4];
//not do dummy comment
void* cons = (decode_clo(env41492))[3];
//not do dummy comment
void* filter = (decode_clo(env41492))[2];
//not do dummy comment
void* car = (decode_clo(env41492))[1];

//creating new closure instance
void** clo42466 = alloc_clo(lam41489_fptr, 7);

//setting env list
clo42466[1] = car;
clo42466[2] = filter;
clo42466[3] = cons;
clo42466[4] = op;
clo42466[5] = kont41183;
clo42466[6] = lst;
clo42466[7] = cdr;
void* f4118941330 = encode_clo(clo42466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4118941330;
arg_buffer[3] = a4108441329;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41491 = encode_clo(alloc_clo(lam41491_fptr, 0));

void* lam41493_fptr() // lam41493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41494 = arg_buffer[1];
//reading env and args
void* a4108241325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41494))[8];
//not do dummy comment
void* kont41183 = (decode_clo(env41494))[7];
//not do dummy comment
void* op = (decode_clo(env41494))[6];
//not do dummy comment
void* cons = (decode_clo(env41494))[5];
//not do dummy comment
void* list = (decode_clo(env41494))[4];
//not do dummy comment
void* cdr = (decode_clo(env41494))[3];
//not do dummy comment
void* filter = (decode_clo(env41494))[2];
//not do dummy comment
void* car = (decode_clo(env41494))[1];

//if-clause
bool if_guard42467 = is_true(a4108241325);
if(if_guard42467)
{

//creating new closure instance
void** clo42469 = alloc_clo(lam41479_fptr, 1);

//setting env list
clo42469[1] = kont41183;
void* f4118441326 = encode_clo(clo42469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4118441326;
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
void** clo42471 = alloc_clo(lam41491_fptr, 7);

//setting env list
clo42471[1] = car;
clo42471[2] = filter;
clo42471[3] = cons;
clo42471[4] = op;
clo42471[5] = kont41183;
clo42471[6] = lst;
clo42471[7] = cdr;
void* f4119041328 = encode_clo(clo42471);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4119041328;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41493 = encode_clo(alloc_clo(lam41493_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41495 = arg_buffer[1];
//reading env and args
void* kont41183 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42473 = alloc_clo(lam41493_fptr, 8);

//setting env list
clo42473[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo42473[2] = filter;
clo42473[3] = cdr;
clo42473[4] = list;
clo42473[5] = cons;
clo42473[6] = op;
clo42473[7] = kont41183;
clo42473[8] = lst;
void* f4119141324 = encode_clo(clo42473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4119141324;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam41496_fptr() // lam41496 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41497 = arg_buffer[1];
//reading env and args
void* a4109441347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env41497))[3];
//not do dummy comment
void* a4109241344 = (decode_clo(env41497))[2];
//not do dummy comment
void* kont41192 = (decode_clo(env41497))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont41192;
arg_buffer[3] = a4109241344;
arg_buffer[4] = a4109441347;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41496 = encode_clo(alloc_clo(lam41496_fptr, 0));

void* lam41499_fptr() // lam41499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41500 = arg_buffer[1];
//reading env and args
void* a4109241344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env41500))[4];
//not do dummy comment
void* n = (decode_clo(env41500))[3];
//not do dummy comment
void* kont41192 = (decode_clo(env41500))[2];
//not do dummy comment
void* _u45 = (decode_clo(env41500))[1];
mpz_t* mpzvar42474 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42474, "1", 10);
void* a4109341345 = encode_mpz(mpzvar42474);

//creating new closure instance
void** clo42476 = alloc_clo(lam41496_fptr, 3);

//setting env list
clo42476[1] = kont41192;
clo42476[2] = a4109241344;
clo42476[3] = drop;
void* f4119341346 = encode_clo(clo42476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4119341346;
arg_buffer[3] = n;
arg_buffer[4] = a4109341345;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41499 = encode_clo(alloc_clo(lam41499_fptr, 0));

void* lam41501_fptr() // lam41501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41502 = arg_buffer[1];
//reading env and args
void* a4109141342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41502))[6];
//not do dummy comment
void* n = (decode_clo(env41502))[5];
//not do dummy comment
void* kont41192 = (decode_clo(env41502))[4];
//not do dummy comment
void* _u45 = (decode_clo(env41502))[3];
//not do dummy comment
void* lst = (decode_clo(env41502))[2];
//not do dummy comment
void* drop = (decode_clo(env41502))[1];

//if-clause
bool if_guard42477 = is_true(a4109141342);
if(if_guard42477)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41192);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41192))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42479 = alloc_clo(lam41499_fptr, 4);

//setting env list
clo42479[1] = _u45;
clo42479[2] = kont41192;
clo42479[3] = n;
clo42479[4] = drop;
void* f4119441343 = encode_clo(clo42479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4119441343;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41501 = encode_clo(alloc_clo(lam41501_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41504 = arg_buffer[1];
//reading env and args
void* kont41192 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar42480 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42480, "0", 10);
void* a4109041340 = encode_mpz(mpzvar42480);

//creating new closure instance
void** clo42482 = alloc_clo(lam41501_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo42482[1] = drop;
clo42482[2] = lst;
clo42482[3] = _u45;
clo42482[4] = kont41192;
clo42482[5] = n;
clo42482[6] = cdr;
void* f4119541341 = encode_clo(clo42482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4119541341;
arg_buffer[3] = n;
arg_buffer[4] = a4109041340;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam41505_fptr() // lam41505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41506 = arg_buffer[1];
//reading env and args
void* a4109841355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41196 = (decode_clo(env41506))[3];
//not do dummy comment
void* proc = (decode_clo(env41506))[2];
//not do dummy comment
void* a4109641351 = (decode_clo(env41506))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont41196;
arg_buffer[3] = a4109641351;
arg_buffer[4] = a4109841355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41505 = encode_clo(alloc_clo(lam41505_fptr, 0));

void* lam41507_fptr() // lam41507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41508 = arg_buffer[1];
//reading env and args
void* a4109741353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41196 = (decode_clo(env41508))[5];
//not do dummy comment
void* foldr = (decode_clo(env41508))[4];
//not do dummy comment
void* a4109641351 = (decode_clo(env41508))[3];
//not do dummy comment
void* proc = (decode_clo(env41508))[2];
//not do dummy comment
void* acc = (decode_clo(env41508))[1];

//creating new closure instance
void** clo42484 = alloc_clo(lam41505_fptr, 3);

//setting env list
clo42484[1] = a4109641351;
clo42484[2] = proc;
clo42484[3] = kont41196;
void* f4119741354 = encode_clo(clo42484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4119741354;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4109741353;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41507 = encode_clo(alloc_clo(lam41507_fptr, 0));

void* lam41509_fptr() // lam41509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41510 = arg_buffer[1];
//reading env and args
void* a4109641351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41510))[6];
//not do dummy comment
void* kont41196 = (decode_clo(env41510))[5];
//not do dummy comment
void* foldr = (decode_clo(env41510))[4];
//not do dummy comment
void* lst = (decode_clo(env41510))[3];
//not do dummy comment
void* proc = (decode_clo(env41510))[2];
//not do dummy comment
void* acc = (decode_clo(env41510))[1];

//creating new closure instance
void** clo42486 = alloc_clo(lam41507_fptr, 5);

//setting env list
clo42486[1] = acc;
clo42486[2] = proc;
clo42486[3] = a4109641351;
clo42486[4] = foldr;
clo42486[5] = kont41196;
void* f4119841352 = encode_clo(clo42486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4119841352;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41509 = encode_clo(alloc_clo(lam41509_fptr, 0));

void* lam41511_fptr() // lam41511 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41512 = arg_buffer[1];
//reading env and args
void* a4109541349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41512))[7];
//not do dummy comment
void* kont41196 = (decode_clo(env41512))[6];
//not do dummy comment
void* car = (decode_clo(env41512))[5];
//not do dummy comment
void* foldr = (decode_clo(env41512))[4];
//not do dummy comment
void* lst = (decode_clo(env41512))[3];
//not do dummy comment
void* proc = (decode_clo(env41512))[2];
//not do dummy comment
void* acc = (decode_clo(env41512))[1];

//if-clause
bool if_guard42487 = is_true(a4109541349);
if(if_guard42487)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41196);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41196))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42489 = alloc_clo(lam41509_fptr, 6);

//setting env list
clo42489[1] = acc;
clo42489[2] = proc;
clo42489[3] = lst;
clo42489[4] = foldr;
clo42489[5] = kont41196;
clo42489[6] = cdr;
void* f4119941350 = encode_clo(clo42489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4119941350;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41511 = encode_clo(alloc_clo(lam41511_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41513 = arg_buffer[1];
//reading env and args
void* kont41196 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42491 = alloc_clo(lam41511_fptr, 7);

//setting env list
clo42491[1] = acc;
clo42491[2] = proc;
clo42491[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo42491[4] = foldr;
clo42491[5] = car;
clo42491[6] = kont41196;
clo42491[7] = cdr;
void* f4120041348 = encode_clo(clo42491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4120041348;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam41514_fptr() // lam41514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41515 = arg_buffer[1];
//reading env and args
void* a4110241363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4110041359 = (decode_clo(env41515))[3];
//not do dummy comment
void* kont41201 = (decode_clo(env41515))[2];
//not do dummy comment
void* cons = (decode_clo(env41515))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41201;
arg_buffer[3] = a4110041359;
arg_buffer[4] = a4110241363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41514 = encode_clo(alloc_clo(lam41514_fptr, 0));

void* lam41516_fptr() // lam41516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41517 = arg_buffer[1];
//reading env and args
void* a4110141361 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4110041359 = (decode_clo(env41517))[5];
//not do dummy comment
void* kont41201 = (decode_clo(env41517))[4];
//not do dummy comment
void* append = (decode_clo(env41517))[3];
//not do dummy comment
void* lst2 = (decode_clo(env41517))[2];
//not do dummy comment
void* cons = (decode_clo(env41517))[1];

//creating new closure instance
void** clo42493 = alloc_clo(lam41514_fptr, 3);

//setting env list
clo42493[1] = cons;
clo42493[2] = kont41201;
clo42493[3] = a4110041359;
void* f4120241362 = encode_clo(clo42493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4120241362;
arg_buffer[3] = a4110141361;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41516 = encode_clo(alloc_clo(lam41516_fptr, 0));

void* lam41518_fptr() // lam41518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41519 = arg_buffer[1];
//reading env and args
void* a4110041359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41519))[6];
//not do dummy comment
void* kont41201 = (decode_clo(env41519))[5];
//not do dummy comment
void* append = (decode_clo(env41519))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41519))[3];
//not do dummy comment
void* lst1 = (decode_clo(env41519))[2];
//not do dummy comment
void* cons = (decode_clo(env41519))[1];

//creating new closure instance
void** clo42495 = alloc_clo(lam41516_fptr, 5);

//setting env list
clo42495[1] = cons;
clo42495[2] = lst2;
clo42495[3] = append;
clo42495[4] = kont41201;
clo42495[5] = a4110041359;
void* f4120341360 = encode_clo(clo42495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4120341360;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41518 = encode_clo(alloc_clo(lam41518_fptr, 0));

void* lam41520_fptr() // lam41520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41521 = arg_buffer[1];
//reading env and args
void* a4109941357 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41521))[7];
//not do dummy comment
void* kont41201 = (decode_clo(env41521))[6];
//not do dummy comment
void* append = (decode_clo(env41521))[5];
//not do dummy comment
void* lst2 = (decode_clo(env41521))[4];
//not do dummy comment
void* cons = (decode_clo(env41521))[3];
//not do dummy comment
void* lst1 = (decode_clo(env41521))[2];
//not do dummy comment
void* car = (decode_clo(env41521))[1];

//if-clause
bool if_guard42496 = is_true(a4109941357);
if(if_guard42496)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41201);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41201))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42498 = alloc_clo(lam41518_fptr, 6);

//setting env list
clo42498[1] = cons;
clo42498[2] = lst1;
clo42498[3] = lst2;
clo42498[4] = append;
clo42498[5] = kont41201;
clo42498[6] = cdr;
void* f4120441358 = encode_clo(clo42498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4120441358;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41520 = encode_clo(alloc_clo(lam41520_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41522 = arg_buffer[1];
//reading env and args
void* kont41201 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42500 = alloc_clo(lam41520_fptr, 7);

//setting env list
clo42500[1] = car;
clo42500[2] = lst1;
clo42500[3] = cons;
clo42500[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo42500[5] = append;
clo42500[6] = kont41201;
clo42500[7] = cdr;
void* f4120541356 = encode_clo(clo42500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4120541356;
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
void* _41523 = arg_buffer[1];
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

void* kont4120641364 = prim_car(lst);
void* lst41365 = prim_cdr(lst);
void* x4110341366 = apply_prim_hash(lst41365);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4120641364);
arg_buffer[2] = x4110341366;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4120641364))[0]);
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
void* _41524 = arg_buffer[1];
//reading env and args
void* kont41208 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4110441367 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41208);
arg_buffer[2] = x4110441367;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41208))[0]);
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
void* _41525 = arg_buffer[1];
//reading env and args
void* kont41209 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4110541368 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41209);
arg_buffer[2] = x4110541368;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41209))[0]);
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
void* _41526 = arg_buffer[1];
//reading env and args
void* kont41210 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4110641369 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41210);
arg_buffer[2] = x4110641369;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41210))[0]);
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
void* _41527 = arg_buffer[1];
//reading env and args
void* kont41211 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4110741370 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41211);
arg_buffer[2] = x4110741370;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41211))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam41529_fptr() // lam41529 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41530 = arg_buffer[1];
//reading env and args
void* a4111241376 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41212 = (decode_clo(env41530))[2];
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env41530))[1];
mpz_t* mpzvar42501 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42501, "5", 10);
void* a4111341377 = encode_mpz(mpzvar42501);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45has_u45key_u63);
arg_buffer[2] = kont41212;
arg_buffer[3] = a4111241376;
arg_buffer[4] = a4111341377;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41529 = encode_clo(alloc_clo(lam41529_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41535 = arg_buffer[1];
//reading env and args
void* kont41212 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar42502 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42502, "100", 10);
void* a4110841371 = encode_mpz(mpzvar42502);
mpz_t* mpzvar42503 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42503, "80", 10);
void* a4110941372 = encode_mpz(mpzvar42503);
mpz_t* mpzvar42504 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42504, "10", 10);
void* a4111041373 = encode_mpz(mpzvar42504);
mpz_t* mpzvar42505 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42505, "2", 10);
void* a4111141374 = encode_mpz(mpzvar42505);

//creating new closure instance
void** clo42507 = alloc_clo(lam41529_fptr, 2);

//setting env list
clo42507[1] = hash_u45has_u45key_u63;
clo42507[2] = kont41212;
void* f4121341375 = encode_clo(clo42507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4121341375;
arg_buffer[3] = a4110841371;
arg_buffer[4] = a4110941372;
arg_buffer[5] = a4111041373;
arg_buffer[6] = a4111141374;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam41536_fptr() // lam41536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41537 = arg_buffer[1];
//reading env and args
void* x4111441379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41214 = (decode_clo(env41537))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41214);
arg_buffer[2] = x4111441379;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41214))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41536 = encode_clo(alloc_clo(lam41536_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41538 = arg_buffer[1];
//reading env and args
void* kont41214 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo42509 = alloc_clo(lam41536_fptr, 1);

//setting env list
clo42509[1] = kont41214;
void* f4121541378 = encode_clo(clo42509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4121541378;
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

