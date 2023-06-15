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
void* _51409 = arg_buffer[1];
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

void* kont5114751247 = prim_car(lst);
void* lst51248 = prim_cdr(lst);
void* x5105851249 = apply_prim__u43(lst51248);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5114751247);
arg_buffer[2] = x5105851249;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5114751247))[0]);
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
void* _51410 = arg_buffer[1];
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

void* kont5114951250 = prim_car(lst);
void* lst51251 = prim_cdr(lst);
void* x5105951252 = apply_prim__u45(lst51251);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5114951250);
arg_buffer[2] = x5105951252;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5114951250))[0]);
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
void* _51411 = arg_buffer[1];
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

void* kont5115151253 = prim_car(lst);
void* lst51254 = prim_cdr(lst);
void* x5106051255 = apply_prim__u42(lst51254);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5115151253);
arg_buffer[2] = x5106051255;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5115151253))[0]);
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
void* _51412 = arg_buffer[1];
//reading env and args
void* kont51153 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5106151256 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51153);
arg_buffer[2] = x5106151256;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51153))[0]);
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
void* _51413 = arg_buffer[1];
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

void* kont5115451257 = prim_car(lst);
void* lst51258 = prim_cdr(lst);
void* x5106251259 = apply_prim__u47(lst51258);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5115451257);
arg_buffer[2] = x5106251259;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5115451257))[0]);
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
void* _51414 = arg_buffer[1];
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

void* kont5115651260 = prim_car(lst);
void* lst51261 = prim_cdr(lst);
void* x5106351262 = apply_prim__u61(lst51261);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5115651260);
arg_buffer[2] = x5106351262;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5115651260))[0]);
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
void* _51415 = arg_buffer[1];
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

void* kont5115851263 = prim_car(lst);
void* lst51264 = prim_cdr(lst);
void* x5106451265 = apply_prim__u62(lst51264);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5115851263);
arg_buffer[2] = x5106451265;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5115851263))[0]);
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
void* _51416 = arg_buffer[1];
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

void* kont5116051266 = prim_car(lst);
void* lst51267 = prim_cdr(lst);
void* x5106551268 = apply_prim__u60(lst51267);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5116051266);
arg_buffer[2] = x5106551268;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5116051266))[0]);
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
void* _51417 = arg_buffer[1];
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

void* kont5116251269 = prim_car(lst);
void* lst51270 = prim_cdr(lst);
void* x5106651271 = apply_prim__u60_u61(lst51270);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5116251269);
arg_buffer[2] = x5106651271;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5116251269))[0]);
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
void* _51418 = arg_buffer[1];
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

void* kont5116451272 = prim_car(lst);
void* lst51273 = prim_cdr(lst);
void* x5106751274 = apply_prim__u62_u61(lst51273);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5116451272);
arg_buffer[2] = x5106751274;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5116451272))[0]);
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
void* _51419 = arg_buffer[1];
//reading env and args
void* kont51166 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5106851275 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51166);
arg_buffer[2] = x5106851275;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51166))[0]);
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
void* _51420 = arg_buffer[1];
//reading env and args
void* kont51167 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5106951276 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51167);
arg_buffer[2] = x5106951276;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51167))[0]);
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
void* _51421 = arg_buffer[1];
//reading env and args
void* kont51168 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5107051277 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51168);
arg_buffer[2] = x5107051277;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51168))[0]);
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
void* _51422 = arg_buffer[1];
//reading env and args
void* kont51169 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5107151278 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51169);
arg_buffer[2] = x5107151278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51169))[0]);
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
void* _51423 = arg_buffer[1];
//reading env and args
void* kont51170 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5107251279 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51170);
arg_buffer[2] = x5107251279;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51170))[0]);
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
void* _51424 = arg_buffer[1];
//reading env and args
void* kont51171 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5107351280 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51171);
arg_buffer[2] = x5107351280;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51171))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam51425_fptr() // lam51425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51426 = arg_buffer[1];
//reading env and args
void* a5107651284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51172 = (decode_clo(env51426))[3];
//not do dummy comment
void* a5107451281 = (decode_clo(env51426))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env51426))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51172;
arg_buffer[3] = a5107451281;
arg_buffer[4] = a5107651284;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51425 = encode_clo(alloc_clo(lam51425_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51429 = arg_buffer[1];
//reading env and args
void* kont51172 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar52106 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52106, "0", 10);
void* a5107451281 = encode_mpz(mpzvar52106);
mpz_t* mpzvar52107 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52107, "2", 10);
void* a5107551282 = encode_mpz(mpzvar52107);

//creating new closure instance
void** clo52109 = alloc_clo(lam51425_fptr, 3);

//setting env list
clo52109[1] = equal_u63;
clo52109[2] = a5107451281;
clo52109[3] = kont51172;
void* f5117351283 = encode_clo(clo52109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5117351283;
arg_buffer[3] = x;
arg_buffer[4] = a5107551282;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam51430_fptr() // lam51430 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51431 = arg_buffer[1];
//reading env and args
void* a5107951288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env51431))[3];
//not do dummy comment
void* a5107751285 = (decode_clo(env51431))[2];
//not do dummy comment
void* kont51174 = (decode_clo(env51431))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51174;
arg_buffer[3] = a5107751285;
arg_buffer[4] = a5107951288;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51430 = encode_clo(alloc_clo(lam51430_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51434 = arg_buffer[1];
//reading env and args
void* kont51174 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar52110 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52110, "1", 10);
void* a5107751285 = encode_mpz(mpzvar52110);
mpz_t* mpzvar52111 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52111, "2", 10);
void* a5107851286 = encode_mpz(mpzvar52111);

//creating new closure instance
void** clo52113 = alloc_clo(lam51430_fptr, 3);

//setting env list
clo52113[1] = kont51174;
clo52113[2] = a5107751285;
clo52113[3] = equal_u63;
void* f5117551287 = encode_clo(clo52113);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5117551287;
arg_buffer[3] = x;
arg_buffer[4] = a5107851286;
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
void* _51435 = arg_buffer[1];
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

void* kont5117651289 = prim_car(x);
void* x51290 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5117651289);
arg_buffer[2] = x51290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5117651289))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam51438_fptr() // lam51438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51439 = arg_buffer[1];
//reading env and args
void* a5108551300 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51178 = (decode_clo(env51439))[3];
//not do dummy comment
void* x = (decode_clo(env51439))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env51439))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont51178;
arg_buffer[3] = x;
arg_buffer[4] = a5108551300;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51438 = encode_clo(alloc_clo(lam51438_fptr, 0));

void* lam51440_fptr() // lam51440 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51441 = arg_buffer[1];
//reading env and args
void* a5108351297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51441))[5];
//not do dummy comment
void* kont51178 = (decode_clo(env51441))[4];
//not do dummy comment
void* lst = (decode_clo(env51441))[3];
//not do dummy comment
void* x = (decode_clo(env51441))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env51441))[1];

//if-clause
bool if_guard52114 = is_true(a5108351297);
if(if_guard52114)
{
void* x5108451298 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51178);
arg_buffer[2] = x5108451298;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51178))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52116 = alloc_clo(lam51438_fptr, 3);

//setting env list
clo52116[1] = member_u63;
clo52116[2] = x;
clo52116[3] = kont51178;
void* f5117951299 = encode_clo(clo52116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5117951299;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51440 = encode_clo(alloc_clo(lam51440_fptr, 0));

void* lam51442_fptr() // lam51442 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51443 = arg_buffer[1];
//reading env and args
void* a5108251295 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51443))[6];
//not do dummy comment
void* kont51178 = (decode_clo(env51443))[5];
//not do dummy comment
void* lst = (decode_clo(env51443))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env51443))[3];
//not do dummy comment
void* x = (decode_clo(env51443))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env51443))[1];

//creating new closure instance
void** clo52118 = alloc_clo(lam51440_fptr, 5);

//setting env list
clo52118[1] = member_u63;
clo52118[2] = x;
clo52118[3] = lst;
clo52118[4] = kont51178;
clo52118[5] = cdr;
void* f5118051296 = encode_clo(clo52118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5118051296;
arg_buffer[3] = a5108251295;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51442 = encode_clo(alloc_clo(lam51442_fptr, 0));

void* lam51444_fptr() // lam51444 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51445 = arg_buffer[1];
//reading env and args
void* a5108051292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51445))[7];
//not do dummy comment
void* kont51178 = (decode_clo(env51445))[6];
//not do dummy comment
void* lst = (decode_clo(env51445))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env51445))[4];
//not do dummy comment
void* x = (decode_clo(env51445))[3];
//not do dummy comment
void* car = (decode_clo(env51445))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env51445))[1];

//if-clause
bool if_guard52119 = is_true(a5108051292);
if(if_guard52119)
{
void* x5108151293 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51178);
arg_buffer[2] = x5108151293;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51178))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52121 = alloc_clo(lam51442_fptr, 6);

//setting env list
clo52121[1] = member_u63;
clo52121[2] = x;
clo52121[3] = equal_u63;
clo52121[4] = lst;
clo52121[5] = kont51178;
clo52121[6] = cdr;
void* f5118151294 = encode_clo(clo52121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5118151294;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51444 = encode_clo(alloc_clo(lam51444_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51446 = arg_buffer[1];
//reading env and args
void* kont51178 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52123 = alloc_clo(lam51444_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo52123[1] = member_u63;
clo52123[2] = car;
clo52123[3] = x;
clo52123[4] = equal_u63;
clo52123[5] = lst;
clo52123[6] = kont51178;
clo52123[7] = cdr;
void* f5118251291 = encode_clo(clo52123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5118251291;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam51447_fptr() // lam51447 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51448 = arg_buffer[1];
//reading env and args
void* a5108951308 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5108851306 = (decode_clo(env51448))[4];
//not do dummy comment
void* kont51183 = (decode_clo(env51448))[3];
//not do dummy comment
void* fun = (decode_clo(env51448))[2];
//not do dummy comment
void* foldl = (decode_clo(env51448))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont51183;
arg_buffer[3] = fun;
arg_buffer[4] = a5108851306;
arg_buffer[5] = a5108951308;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51447 = encode_clo(alloc_clo(lam51447_fptr, 0));

void* lam51449_fptr() // lam51449 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51450 = arg_buffer[1];
//reading env and args
void* a5108851306 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51450))[5];
//not do dummy comment
void* lst = (decode_clo(env51450))[4];
//not do dummy comment
void* kont51183 = (decode_clo(env51450))[3];
//not do dummy comment
void* fun = (decode_clo(env51450))[2];
//not do dummy comment
void* foldl = (decode_clo(env51450))[1];

//creating new closure instance
void** clo52125 = alloc_clo(lam51447_fptr, 4);

//setting env list
clo52125[1] = foldl;
clo52125[2] = fun;
clo52125[3] = kont51183;
clo52125[4] = a5108851306;
void* f5118451307 = encode_clo(clo52125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5118451307;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51449 = encode_clo(alloc_clo(lam51449_fptr, 0));

void* lam51451_fptr() // lam51451 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51452 = arg_buffer[1];
//reading env and args
void* a5108751304 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51452))[6];
//not do dummy comment
void* lst = (decode_clo(env51452))[5];
//not do dummy comment
void* kont51183 = (decode_clo(env51452))[4];
//not do dummy comment
void* fun = (decode_clo(env51452))[3];
//not do dummy comment
void* acc = (decode_clo(env51452))[2];
//not do dummy comment
void* foldl = (decode_clo(env51452))[1];

//creating new closure instance
void** clo52127 = alloc_clo(lam51449_fptr, 5);

//setting env list
clo52127[1] = foldl;
clo52127[2] = fun;
clo52127[3] = kont51183;
clo52127[4] = lst;
clo52127[5] = cdr;
void* f5118551305 = encode_clo(clo52127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5118551305;
arg_buffer[3] = a5108751304;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51451 = encode_clo(alloc_clo(lam51451_fptr, 0));

void* lam51453_fptr() // lam51453 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51454 = arg_buffer[1];
//reading env and args
void* a5108651302 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51454))[7];
//not do dummy comment
void* lst = (decode_clo(env51454))[6];
//not do dummy comment
void* kont51183 = (decode_clo(env51454))[5];
//not do dummy comment
void* fun = (decode_clo(env51454))[4];
//not do dummy comment
void* acc = (decode_clo(env51454))[3];
//not do dummy comment
void* car = (decode_clo(env51454))[2];
//not do dummy comment
void* foldl = (decode_clo(env51454))[1];

//if-clause
bool if_guard52128 = is_true(a5108651302);
if(if_guard52128)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51183);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51183))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52130 = alloc_clo(lam51451_fptr, 6);

//setting env list
clo52130[1] = foldl;
clo52130[2] = acc;
clo52130[3] = fun;
clo52130[4] = kont51183;
clo52130[5] = lst;
clo52130[6] = cdr;
void* f5118651303 = encode_clo(clo52130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5118651303;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51453 = encode_clo(alloc_clo(lam51453_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51455 = arg_buffer[1];
//reading env and args
void* kont51183 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo52132 = alloc_clo(lam51453_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo52132[1] = foldl;
clo52132[2] = car;
clo52132[3] = acc;
clo52132[4] = fun;
clo52132[5] = kont51183;
clo52132[6] = lst;
clo52132[7] = cdr;
void* f5118751301 = encode_clo(clo52132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5118751301;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam51456_fptr() // lam51456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51457 = arg_buffer[1];
//reading env and args
void* a5109351316 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51188 = (decode_clo(env51457))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51457))[2];
//not do dummy comment
void* a5109151312 = (decode_clo(env51457))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51188;
arg_buffer[3] = a5109151312;
arg_buffer[4] = a5109351316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51456 = encode_clo(alloc_clo(lam51456_fptr, 0));

void* lam51458_fptr() // lam51458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51459 = arg_buffer[1];
//reading env and args
void* a5109251314 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51188 = (decode_clo(env51459))[5];
//not do dummy comment
void* lst2 = (decode_clo(env51459))[4];
//not do dummy comment
void* cons = (decode_clo(env51459))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51459))[2];
//not do dummy comment
void* a5109151312 = (decode_clo(env51459))[1];

//creating new closure instance
void** clo52134 = alloc_clo(lam51456_fptr, 3);

//setting env list
clo52134[1] = a5109151312;
clo52134[2] = reverse_u45helper;
clo52134[3] = kont51188;
void* f5118951315 = encode_clo(clo52134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5118951315;
arg_buffer[3] = a5109251314;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51458 = encode_clo(alloc_clo(lam51458_fptr, 0));

void* lam51460_fptr() // lam51460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51461 = arg_buffer[1];
//reading env and args
void* a5109151312 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51461))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51461))[5];
//not do dummy comment
void* kont51188 = (decode_clo(env51461))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51461))[3];
//not do dummy comment
void* car = (decode_clo(env51461))[2];
//not do dummy comment
void* cons = (decode_clo(env51461))[1];

//creating new closure instance
void** clo52136 = alloc_clo(lam51458_fptr, 5);

//setting env list
clo52136[1] = a5109151312;
clo52136[2] = reverse_u45helper;
clo52136[3] = cons;
clo52136[4] = lst2;
clo52136[5] = kont51188;
void* f5119051313 = encode_clo(clo52136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5119051313;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51460 = encode_clo(alloc_clo(lam51460_fptr, 0));

void* lam51462_fptr() // lam51462 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51463 = arg_buffer[1];
//reading env and args
void* a5109051310 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51463))[7];
//not do dummy comment
void* lst = (decode_clo(env51463))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51463))[5];
//not do dummy comment
void* kont51188 = (decode_clo(env51463))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51463))[3];
//not do dummy comment
void* car = (decode_clo(env51463))[2];
//not do dummy comment
void* cons = (decode_clo(env51463))[1];

//if-clause
bool if_guard52137 = is_true(a5109051310);
if(if_guard52137)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51188);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51188))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52139 = alloc_clo(lam51460_fptr, 6);

//setting env list
clo52139[1] = cons;
clo52139[2] = car;
clo52139[3] = lst2;
clo52139[4] = kont51188;
clo52139[5] = reverse_u45helper;
clo52139[6] = lst;
void* f5119151311 = encode_clo(clo52139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5119151311;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51462 = encode_clo(alloc_clo(lam51462_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51464 = arg_buffer[1];
//reading env and args
void* kont51188 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52141 = alloc_clo(lam51462_fptr, 7);

//setting env list
clo52141[1] = cons;
clo52141[2] = car;
clo52141[3] = lst2;
clo52141[4] = kont51188;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo52141[5] = reverse_u45helper;
clo52141[6] = lst;
clo52141[7] = cdr;
void* f5119251309 = encode_clo(clo52141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5119251309;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam51465_fptr() // lam51465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51466 = arg_buffer[1];
//reading env and args
void* a5109451318 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51193 = (decode_clo(env51466))[3];
//not do dummy comment
void* lst = (decode_clo(env51466))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51466))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51193;
arg_buffer[3] = lst;
arg_buffer[4] = a5109451318;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51465 = encode_clo(alloc_clo(lam51465_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51467 = arg_buffer[1];
//reading env and args
void* kont51193 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo52143 = alloc_clo(lam51465_fptr, 3);

//setting env list
clo52143[1] = reverse_u45helper;
clo52143[2] = lst;
clo52143[3] = kont51193;
void* f5119451317 = encode_clo(clo52143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5119451317;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam51468_fptr() // lam51468 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51469 = arg_buffer[1];
//reading env and args
void* x5109751323 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51195 = (decode_clo(env51469))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51195);
arg_buffer[2] = x5109751323;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51195))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51468 = encode_clo(alloc_clo(lam51468_fptr, 0));

void* lam51470_fptr() // lam51470 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51471 = arg_buffer[1];
//reading env and args
void* a5110251332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51195 = (decode_clo(env51471))[4];
//not do dummy comment
void* a5109851325 = (decode_clo(env51471))[3];
//not do dummy comment
void* a5110051328 = (decode_clo(env51471))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env51471))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51195;
arg_buffer[3] = a5109851325;
arg_buffer[4] = a5110051328;
arg_buffer[5] = a5110251332;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51470 = encode_clo(alloc_clo(lam51470_fptr, 0));

void* lam51472_fptr() // lam51472 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51473 = arg_buffer[1];
//reading env and args
void* a5110151330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51195 = (decode_clo(env51473))[6];
//not do dummy comment
void* a5109851325 = (decode_clo(env51473))[5];
//not do dummy comment
void* a5110051328 = (decode_clo(env51473))[4];
//not do dummy comment
void* cons = (decode_clo(env51473))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51473))[2];
//not do dummy comment
void* lst2 = (decode_clo(env51473))[1];

//creating new closure instance
void** clo52145 = alloc_clo(lam51470_fptr, 4);

//setting env list
clo52145[1] = take_u45helper;
clo52145[2] = a5110051328;
clo52145[3] = a5109851325;
clo52145[4] = kont51195;
void* f5119751331 = encode_clo(clo52145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5119751331;
arg_buffer[3] = a5110151330;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51472 = encode_clo(alloc_clo(lam51472_fptr, 0));

void* lam51474_fptr() // lam51474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51475 = arg_buffer[1];
//reading env and args
void* a5110051328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51195 = (decode_clo(env51475))[7];
//not do dummy comment
void* car = (decode_clo(env51475))[6];
//not do dummy comment
void* cons = (decode_clo(env51475))[5];
//not do dummy comment
void* lst = (decode_clo(env51475))[4];
//not do dummy comment
void* a5109851325 = (decode_clo(env51475))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51475))[2];
//not do dummy comment
void* lst2 = (decode_clo(env51475))[1];

//creating new closure instance
void** clo52147 = alloc_clo(lam51472_fptr, 6);

//setting env list
clo52147[1] = lst2;
clo52147[2] = take_u45helper;
clo52147[3] = cons;
clo52147[4] = a5110051328;
clo52147[5] = a5109851325;
clo52147[6] = kont51195;
void* f5119851329 = encode_clo(clo52147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5119851329;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51474 = encode_clo(alloc_clo(lam51474_fptr, 0));

void* lam51477_fptr() // lam51477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51478 = arg_buffer[1];
//reading env and args
void* a5109851325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51195 = (decode_clo(env51478))[8];
//not do dummy comment
void* lst = (decode_clo(env51478))[7];
//not do dummy comment
void* cons = (decode_clo(env51478))[6];
//not do dummy comment
void* _u45 = (decode_clo(env51478))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env51478))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51478))[3];
//not do dummy comment
void* n = (decode_clo(env51478))[2];
//not do dummy comment
void* car = (decode_clo(env51478))[1];
mpz_t* mpzvar52148 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52148, "1", 10);
void* a5109951326 = encode_mpz(mpzvar52148);

//creating new closure instance
void** clo52150 = alloc_clo(lam51474_fptr, 7);

//setting env list
clo52150[1] = lst2;
clo52150[2] = take_u45helper;
clo52150[3] = a5109851325;
clo52150[4] = lst;
clo52150[5] = cons;
clo52150[6] = car;
clo52150[7] = kont51195;
void* f5119951327 = encode_clo(clo52150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5119951327;
arg_buffer[3] = n;
arg_buffer[4] = a5109951326;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51477 = encode_clo(alloc_clo(lam51477_fptr, 0));

void* lam51479_fptr() // lam51479 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51480 = arg_buffer[1];
//reading env and args
void* a5109651321 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51480))[10];
//not do dummy comment
void* kont51195 = (decode_clo(env51480))[9];
//not do dummy comment
void* lst = (decode_clo(env51480))[8];
//not do dummy comment
void* reverse = (decode_clo(env51480))[7];
//not do dummy comment
void* cons = (decode_clo(env51480))[6];
//not do dummy comment
void* _u45 = (decode_clo(env51480))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env51480))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51480))[3];
//not do dummy comment
void* n = (decode_clo(env51480))[2];
//not do dummy comment
void* car = (decode_clo(env51480))[1];

//if-clause
bool if_guard52151 = is_true(a5109651321);
if(if_guard52151)
{

//creating new closure instance
void** clo52153 = alloc_clo(lam51468_fptr, 1);

//setting env list
clo52153[1] = kont51195;
void* f5119651322 = encode_clo(clo52153);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5119651322;
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
void** clo52155 = alloc_clo(lam51477_fptr, 8);

//setting env list
clo52155[1] = car;
clo52155[2] = n;
clo52155[3] = lst2;
clo52155[4] = take_u45helper;
clo52155[5] = _u45;
clo52155[6] = cons;
clo52155[7] = lst;
clo52155[8] = kont51195;
void* f5120051324 = encode_clo(clo52155);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5120051324;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51479 = encode_clo(alloc_clo(lam51479_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51482 = arg_buffer[1];
//reading env and args
void* kont51195 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar52156 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52156, "0", 10);
void* a5109551319 = encode_mpz(mpzvar52156);

//creating new closure instance
void** clo52158 = alloc_clo(lam51479_fptr, 10);

//setting env list
clo52158[1] = car;
clo52158[2] = n;
clo52158[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo52158[4] = take_u45helper;
clo52158[5] = _u45;
clo52158[6] = cons;
clo52158[7] = reverse;
clo52158[8] = lst;
clo52158[9] = kont51195;
clo52158[10] = cdr;
void* f5120151320 = encode_clo(clo52158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5120151320;
arg_buffer[3] = n;
arg_buffer[4] = a5109551319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam51483_fptr() // lam51483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51484 = arg_buffer[1];
//reading env and args
void* a5110351334 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51484))[4];
//not do dummy comment
void* kont51202 = (decode_clo(env51484))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51484))[2];
//not do dummy comment
void* n = (decode_clo(env51484))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51202;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5110351334;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51483 = encode_clo(alloc_clo(lam51483_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51485 = arg_buffer[1];
//reading env and args
void* kont51202 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52160 = alloc_clo(lam51483_fptr, 4);

//setting env list
clo52160[1] = n;
clo52160[2] = take_u45helper;
clo52160[3] = kont51202;
clo52160[4] = lst;
void* f5120351333 = encode_clo(clo52160);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5120351333;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam51487_fptr() // lam51487 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51488 = arg_buffer[1];
//reading env and args
void* a5110851342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5110651338 = (decode_clo(env51488))[3];
//not do dummy comment
void* _u43 = (decode_clo(env51488))[2];
//not do dummy comment
void* kont51204 = (decode_clo(env51488))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont51204;
arg_buffer[3] = a5110651338;
arg_buffer[4] = a5110851342;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51487 = encode_clo(alloc_clo(lam51487_fptr, 0));

void* lam51489_fptr() // lam51489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51490 = arg_buffer[1];
//reading env and args
void* a5110751340 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5110651338 = (decode_clo(env51490))[4];
//not do dummy comment
void* length = (decode_clo(env51490))[3];
//not do dummy comment
void* _u43 = (decode_clo(env51490))[2];
//not do dummy comment
void* kont51204 = (decode_clo(env51490))[1];

//creating new closure instance
void** clo52162 = alloc_clo(lam51487_fptr, 3);

//setting env list
clo52162[1] = kont51204;
clo52162[2] = _u43;
clo52162[3] = a5110651338;
void* f5120551341 = encode_clo(clo52162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5120551341;
arg_buffer[3] = a5110751340;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51489 = encode_clo(alloc_clo(lam51489_fptr, 0));

void* lam51492_fptr() // lam51492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51493 = arg_buffer[1];
//reading env and args
void* a5110451336 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51493))[5];
//not do dummy comment
void* lst = (decode_clo(env51493))[4];
//not do dummy comment
void* length = (decode_clo(env51493))[3];
//not do dummy comment
void* _u43 = (decode_clo(env51493))[2];
//not do dummy comment
void* kont51204 = (decode_clo(env51493))[1];

//if-clause
bool if_guard52163 = is_true(a5110451336);
if(if_guard52163)
{
mpz_t* mpzvar52164 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52164, "0", 10);
void* x5110551337 = encode_mpz(mpzvar52164);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51204);
arg_buffer[2] = x5110551337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51204))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar52165 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52165, "1", 10);
void* a5110651338 = encode_mpz(mpzvar52165);

//creating new closure instance
void** clo52167 = alloc_clo(lam51489_fptr, 4);

//setting env list
clo52167[1] = kont51204;
clo52167[2] = _u43;
clo52167[3] = length;
clo52167[4] = a5110651338;
void* f5120651339 = encode_clo(clo52167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5120651339;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51492 = encode_clo(alloc_clo(lam51492_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51494 = arg_buffer[1];
//reading env and args
void* kont51204 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo52169 = alloc_clo(lam51492_fptr, 5);

//setting env list
clo52169[1] = kont51204;
clo52169[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo52169[3] = length;
clo52169[4] = lst;
clo52169[5] = cdr;
void* f5120751335 = encode_clo(clo52169);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5120751335;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam51495_fptr() // lam51495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51496 = arg_buffer[1];
//reading env and args
void* x5111051346 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51208 = (decode_clo(env51496))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51208);
arg_buffer[2] = x5111051346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51208))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51495 = encode_clo(alloc_clo(lam51495_fptr, 0));

void* lam51497_fptr() // lam51497 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51498 = arg_buffer[1];
//reading env and args
void* a5111451354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5111251350 = (decode_clo(env51498))[3];
//not do dummy comment
void* cons = (decode_clo(env51498))[2];
//not do dummy comment
void* kont51208 = (decode_clo(env51498))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51208;
arg_buffer[3] = a5111251350;
arg_buffer[4] = a5111451354;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51497 = encode_clo(alloc_clo(lam51497_fptr, 0));

void* lam51499_fptr() // lam51499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51500 = arg_buffer[1];
//reading env and args
void* a5111351352 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env51500))[5];
//not do dummy comment
void* proc = (decode_clo(env51500))[4];
//not do dummy comment
void* a5111251350 = (decode_clo(env51500))[3];
//not do dummy comment
void* cons = (decode_clo(env51500))[2];
//not do dummy comment
void* kont51208 = (decode_clo(env51500))[1];

//creating new closure instance
void** clo52171 = alloc_clo(lam51497_fptr, 3);

//setting env list
clo52171[1] = kont51208;
clo52171[2] = cons;
clo52171[3] = a5111251350;
void* f5121051353 = encode_clo(clo52171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5121051353;
arg_buffer[3] = proc;
arg_buffer[4] = a5111351352;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51499 = encode_clo(alloc_clo(lam51499_fptr, 0));

void* lam51501_fptr() // lam51501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51502 = arg_buffer[1];
//reading env and args
void* a5111251350 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51502))[6];
//not do dummy comment
void* lst = (decode_clo(env51502))[5];
//not do dummy comment
void* map = (decode_clo(env51502))[4];
//not do dummy comment
void* proc = (decode_clo(env51502))[3];
//not do dummy comment
void* cons = (decode_clo(env51502))[2];
//not do dummy comment
void* kont51208 = (decode_clo(env51502))[1];

//creating new closure instance
void** clo52173 = alloc_clo(lam51499_fptr, 5);

//setting env list
clo52173[1] = kont51208;
clo52173[2] = cons;
clo52173[3] = a5111251350;
clo52173[4] = proc;
clo52173[5] = map;
void* f5121151351 = encode_clo(clo52173);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5121151351;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51501 = encode_clo(alloc_clo(lam51501_fptr, 0));

void* lam51503_fptr() // lam51503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51504 = arg_buffer[1];
//reading env and args
void* a5111151348 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51504))[6];
//not do dummy comment
void* lst = (decode_clo(env51504))[5];
//not do dummy comment
void* map = (decode_clo(env51504))[4];
//not do dummy comment
void* proc = (decode_clo(env51504))[3];
//not do dummy comment
void* cons = (decode_clo(env51504))[2];
//not do dummy comment
void* kont51208 = (decode_clo(env51504))[1];

//creating new closure instance
void** clo52175 = alloc_clo(lam51501_fptr, 6);

//setting env list
clo52175[1] = kont51208;
clo52175[2] = cons;
clo52175[3] = proc;
clo52175[4] = map;
clo52175[5] = lst;
clo52175[6] = cdr;
void* f5121251349 = encode_clo(clo52175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5121251349;
arg_buffer[3] = a5111151348;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51503 = encode_clo(alloc_clo(lam51503_fptr, 0));

void* lam51505_fptr() // lam51505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51506 = arg_buffer[1];
//reading env and args
void* a5110951344 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51506))[8];
//not do dummy comment
void* map = (decode_clo(env51506))[7];
//not do dummy comment
void* proc = (decode_clo(env51506))[6];
//not do dummy comment
void* car = (decode_clo(env51506))[5];
//not do dummy comment
void* cons = (decode_clo(env51506))[4];
//not do dummy comment
void* kont51208 = (decode_clo(env51506))[3];
//not do dummy comment
void* list = (decode_clo(env51506))[2];
//not do dummy comment
void* cdr = (decode_clo(env51506))[1];

//if-clause
bool if_guard52176 = is_true(a5110951344);
if(if_guard52176)
{

//creating new closure instance
void** clo52178 = alloc_clo(lam51495_fptr, 1);

//setting env list
clo52178[1] = kont51208;
void* f5120951345 = encode_clo(clo52178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5120951345;
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
void** clo52180 = alloc_clo(lam51503_fptr, 6);

//setting env list
clo52180[1] = kont51208;
clo52180[2] = cons;
clo52180[3] = proc;
clo52180[4] = map;
clo52180[5] = lst;
clo52180[6] = cdr;
void* f5121351347 = encode_clo(clo52180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5121351347;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51505 = encode_clo(alloc_clo(lam51505_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51507 = arg_buffer[1];
//reading env and args
void* kont51208 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52182 = alloc_clo(lam51505_fptr, 8);

//setting env list
clo52182[1] = cdr;
clo52182[2] = list;
clo52182[3] = kont51208;
clo52182[4] = cons;
clo52182[5] = car;
clo52182[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo52182[7] = map;
clo52182[8] = lst;
void* f5121451343 = encode_clo(clo52182);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5121451343;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam51508_fptr() // lam51508 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51509 = arg_buffer[1];
//reading env and args
void* x5111651358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51215 = (decode_clo(env51509))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51215);
arg_buffer[2] = x5111651358;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51215))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51508 = encode_clo(alloc_clo(lam51508_fptr, 0));

void* lam51510_fptr() // lam51510 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51511 = arg_buffer[1];
//reading env and args
void* a5112151368 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51215 = (decode_clo(env51511))[3];
//not do dummy comment
void* a5111951364 = (decode_clo(env51511))[2];
//not do dummy comment
void* cons = (decode_clo(env51511))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51215;
arg_buffer[3] = a5111951364;
arg_buffer[4] = a5112151368;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51510 = encode_clo(alloc_clo(lam51510_fptr, 0));

void* lam51512_fptr() // lam51512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51513 = arg_buffer[1];
//reading env and args
void* a5112051366 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51215 = (decode_clo(env51513))[5];
//not do dummy comment
void* op = (decode_clo(env51513))[4];
//not do dummy comment
void* a5111951364 = (decode_clo(env51513))[3];
//not do dummy comment
void* filter = (decode_clo(env51513))[2];
//not do dummy comment
void* cons = (decode_clo(env51513))[1];

//creating new closure instance
void** clo52184 = alloc_clo(lam51510_fptr, 3);

//setting env list
clo52184[1] = cons;
clo52184[2] = a5111951364;
clo52184[3] = kont51215;
void* f5121751367 = encode_clo(clo52184);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5121751367;
arg_buffer[3] = op;
arg_buffer[4] = a5112051366;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51512 = encode_clo(alloc_clo(lam51512_fptr, 0));

void* lam51514_fptr() // lam51514 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51515 = arg_buffer[1];
//reading env and args
void* a5111951364 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51515))[6];
//not do dummy comment
void* lst = (decode_clo(env51515))[5];
//not do dummy comment
void* kont51215 = (decode_clo(env51515))[4];
//not do dummy comment
void* op = (decode_clo(env51515))[3];
//not do dummy comment
void* filter = (decode_clo(env51515))[2];
//not do dummy comment
void* cons = (decode_clo(env51515))[1];

//creating new closure instance
void** clo52186 = alloc_clo(lam51512_fptr, 5);

//setting env list
clo52186[1] = cons;
clo52186[2] = filter;
clo52186[3] = a5111951364;
clo52186[4] = op;
clo52186[5] = kont51215;
void* f5121851365 = encode_clo(clo52186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5121851365;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51514 = encode_clo(alloc_clo(lam51514_fptr, 0));

void* lam51516_fptr() // lam51516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51517 = arg_buffer[1];
//reading env and args
void* a5112251370 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51215 = (decode_clo(env51517))[3];
//not do dummy comment
void* op = (decode_clo(env51517))[2];
//not do dummy comment
void* filter = (decode_clo(env51517))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont51215;
arg_buffer[3] = op;
arg_buffer[4] = a5112251370;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51516 = encode_clo(alloc_clo(lam51516_fptr, 0));

void* lam51518_fptr() // lam51518 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51519 = arg_buffer[1];
//reading env and args
void* a5111851362 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51519))[7];
//not do dummy comment
void* lst = (decode_clo(env51519))[6];
//not do dummy comment
void* kont51215 = (decode_clo(env51519))[5];
//not do dummy comment
void* op = (decode_clo(env51519))[4];
//not do dummy comment
void* cons = (decode_clo(env51519))[3];
//not do dummy comment
void* filter = (decode_clo(env51519))[2];
//not do dummy comment
void* car = (decode_clo(env51519))[1];

//if-clause
bool if_guard52187 = is_true(a5111851362);
if(if_guard52187)
{

//creating new closure instance
void** clo52189 = alloc_clo(lam51514_fptr, 6);

//setting env list
clo52189[1] = cons;
clo52189[2] = filter;
clo52189[3] = op;
clo52189[4] = kont51215;
clo52189[5] = lst;
clo52189[6] = cdr;
void* f5121951363 = encode_clo(clo52189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5121951363;
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
void** clo52191 = alloc_clo(lam51516_fptr, 3);

//setting env list
clo52191[1] = filter;
clo52191[2] = op;
clo52191[3] = kont51215;
void* f5122051369 = encode_clo(clo52191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5122051369;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51518 = encode_clo(alloc_clo(lam51518_fptr, 0));

void* lam51520_fptr() // lam51520 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51521 = arg_buffer[1];
//reading env and args
void* a5111751360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51521))[7];
//not do dummy comment
void* lst = (decode_clo(env51521))[6];
//not do dummy comment
void* kont51215 = (decode_clo(env51521))[5];
//not do dummy comment
void* op = (decode_clo(env51521))[4];
//not do dummy comment
void* cons = (decode_clo(env51521))[3];
//not do dummy comment
void* filter = (decode_clo(env51521))[2];
//not do dummy comment
void* car = (decode_clo(env51521))[1];

//creating new closure instance
void** clo52193 = alloc_clo(lam51518_fptr, 7);

//setting env list
clo52193[1] = car;
clo52193[2] = filter;
clo52193[3] = cons;
clo52193[4] = op;
clo52193[5] = kont51215;
clo52193[6] = lst;
clo52193[7] = cdr;
void* f5122151361 = encode_clo(clo52193);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5122151361;
arg_buffer[3] = a5111751360;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51520 = encode_clo(alloc_clo(lam51520_fptr, 0));

void* lam51522_fptr() // lam51522 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51523 = arg_buffer[1];
//reading env and args
void* a5111551356 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51523))[8];
//not do dummy comment
void* kont51215 = (decode_clo(env51523))[7];
//not do dummy comment
void* op = (decode_clo(env51523))[6];
//not do dummy comment
void* cons = (decode_clo(env51523))[5];
//not do dummy comment
void* list = (decode_clo(env51523))[4];
//not do dummy comment
void* cdr = (decode_clo(env51523))[3];
//not do dummy comment
void* filter = (decode_clo(env51523))[2];
//not do dummy comment
void* car = (decode_clo(env51523))[1];

//if-clause
bool if_guard52194 = is_true(a5111551356);
if(if_guard52194)
{

//creating new closure instance
void** clo52196 = alloc_clo(lam51508_fptr, 1);

//setting env list
clo52196[1] = kont51215;
void* f5121651357 = encode_clo(clo52196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5121651357;
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
void** clo52198 = alloc_clo(lam51520_fptr, 7);

//setting env list
clo52198[1] = car;
clo52198[2] = filter;
clo52198[3] = cons;
clo52198[4] = op;
clo52198[5] = kont51215;
clo52198[6] = lst;
clo52198[7] = cdr;
void* f5122251359 = encode_clo(clo52198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5122251359;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51522 = encode_clo(alloc_clo(lam51522_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51524 = arg_buffer[1];
//reading env and args
void* kont51215 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52200 = alloc_clo(lam51522_fptr, 8);

//setting env list
clo52200[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo52200[2] = filter;
clo52200[3] = cdr;
clo52200[4] = list;
clo52200[5] = cons;
clo52200[6] = op;
clo52200[7] = kont51215;
clo52200[8] = lst;
void* f5122351355 = encode_clo(clo52200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5122351355;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam51525_fptr() // lam51525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51526 = arg_buffer[1];
//reading env and args
void* a5112751378 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env51526))[3];
//not do dummy comment
void* a5112551375 = (decode_clo(env51526))[2];
//not do dummy comment
void* kont51224 = (decode_clo(env51526))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont51224;
arg_buffer[3] = a5112551375;
arg_buffer[4] = a5112751378;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51525 = encode_clo(alloc_clo(lam51525_fptr, 0));

void* lam51528_fptr() // lam51528 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51529 = arg_buffer[1];
//reading env and args
void* a5112551375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env51529))[4];
//not do dummy comment
void* n = (decode_clo(env51529))[3];
//not do dummy comment
void* _u45 = (decode_clo(env51529))[2];
//not do dummy comment
void* kont51224 = (decode_clo(env51529))[1];
mpz_t* mpzvar52201 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52201, "1", 10);
void* a5112651376 = encode_mpz(mpzvar52201);

//creating new closure instance
void** clo52203 = alloc_clo(lam51525_fptr, 3);

//setting env list
clo52203[1] = kont51224;
clo52203[2] = a5112551375;
clo52203[3] = drop;
void* f5122551377 = encode_clo(clo52203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5122551377;
arg_buffer[3] = n;
arg_buffer[4] = a5112651376;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51528 = encode_clo(alloc_clo(lam51528_fptr, 0));

void* lam51530_fptr() // lam51530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51531 = arg_buffer[1];
//reading env and args
void* a5112451373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51531))[6];
//not do dummy comment
void* n = (decode_clo(env51531))[5];
//not do dummy comment
void* lst = (decode_clo(env51531))[4];
//not do dummy comment
void* drop = (decode_clo(env51531))[3];
//not do dummy comment
void* _u45 = (decode_clo(env51531))[2];
//not do dummy comment
void* kont51224 = (decode_clo(env51531))[1];

//if-clause
bool if_guard52204 = is_true(a5112451373);
if(if_guard52204)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51224);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51224))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52206 = alloc_clo(lam51528_fptr, 4);

//setting env list
clo52206[1] = kont51224;
clo52206[2] = _u45;
clo52206[3] = n;
clo52206[4] = drop;
void* f5122651374 = encode_clo(clo52206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5122651374;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51530 = encode_clo(alloc_clo(lam51530_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51533 = arg_buffer[1];
//reading env and args
void* kont51224 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar52207 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52207, "0", 10);
void* a5112351371 = encode_mpz(mpzvar52207);

//creating new closure instance
void** clo52209 = alloc_clo(lam51530_fptr, 6);

//setting env list
clo52209[1] = kont51224;
clo52209[2] = _u45;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo52209[3] = drop;
clo52209[4] = lst;
clo52209[5] = n;
clo52209[6] = cdr;
void* f5122751372 = encode_clo(clo52209);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5122751372;
arg_buffer[3] = n;
arg_buffer[4] = a5112351371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam51534_fptr() // lam51534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51535 = arg_buffer[1];
//reading env and args
void* a5113151386 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51228 = (decode_clo(env51535))[3];
//not do dummy comment
void* proc = (decode_clo(env51535))[2];
//not do dummy comment
void* a5112951382 = (decode_clo(env51535))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont51228;
arg_buffer[3] = a5112951382;
arg_buffer[4] = a5113151386;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51534 = encode_clo(alloc_clo(lam51534_fptr, 0));

void* lam51536_fptr() // lam51536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51537 = arg_buffer[1];
//reading env and args
void* a5113051384 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51228 = (decode_clo(env51537))[5];
//not do dummy comment
void* foldr = (decode_clo(env51537))[4];
//not do dummy comment
void* a5112951382 = (decode_clo(env51537))[3];
//not do dummy comment
void* proc = (decode_clo(env51537))[2];
//not do dummy comment
void* acc = (decode_clo(env51537))[1];

//creating new closure instance
void** clo52211 = alloc_clo(lam51534_fptr, 3);

//setting env list
clo52211[1] = a5112951382;
clo52211[2] = proc;
clo52211[3] = kont51228;
void* f5122951385 = encode_clo(clo52211);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5122951385;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5113051384;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51536 = encode_clo(alloc_clo(lam51536_fptr, 0));

void* lam51538_fptr() // lam51538 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51539 = arg_buffer[1];
//reading env and args
void* a5112951382 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51539))[6];
//not do dummy comment
void* kont51228 = (decode_clo(env51539))[5];
//not do dummy comment
void* foldr = (decode_clo(env51539))[4];
//not do dummy comment
void* lst = (decode_clo(env51539))[3];
//not do dummy comment
void* proc = (decode_clo(env51539))[2];
//not do dummy comment
void* acc = (decode_clo(env51539))[1];

//creating new closure instance
void** clo52213 = alloc_clo(lam51536_fptr, 5);

//setting env list
clo52213[1] = acc;
clo52213[2] = proc;
clo52213[3] = a5112951382;
clo52213[4] = foldr;
clo52213[5] = kont51228;
void* f5123051383 = encode_clo(clo52213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5123051383;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51538 = encode_clo(alloc_clo(lam51538_fptr, 0));

void* lam51540_fptr() // lam51540 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51541 = arg_buffer[1];
//reading env and args
void* a5112851380 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51541))[7];
//not do dummy comment
void* kont51228 = (decode_clo(env51541))[6];
//not do dummy comment
void* car = (decode_clo(env51541))[5];
//not do dummy comment
void* foldr = (decode_clo(env51541))[4];
//not do dummy comment
void* lst = (decode_clo(env51541))[3];
//not do dummy comment
void* proc = (decode_clo(env51541))[2];
//not do dummy comment
void* acc = (decode_clo(env51541))[1];

//if-clause
bool if_guard52214 = is_true(a5112851380);
if(if_guard52214)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51228);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51228))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52216 = alloc_clo(lam51538_fptr, 6);

//setting env list
clo52216[1] = acc;
clo52216[2] = proc;
clo52216[3] = lst;
clo52216[4] = foldr;
clo52216[5] = kont51228;
clo52216[6] = cdr;
void* f5123151381 = encode_clo(clo52216);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5123151381;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51540 = encode_clo(alloc_clo(lam51540_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51542 = arg_buffer[1];
//reading env and args
void* kont51228 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo52218 = alloc_clo(lam51540_fptr, 7);

//setting env list
clo52218[1] = acc;
clo52218[2] = proc;
clo52218[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo52218[4] = foldr;
clo52218[5] = car;
clo52218[6] = kont51228;
clo52218[7] = cdr;
void* f5123251379 = encode_clo(clo52218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5123251379;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam51543_fptr() // lam51543 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51544 = arg_buffer[1];
//reading env and args
void* a5113551394 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5113351390 = (decode_clo(env51544))[3];
//not do dummy comment
void* kont51233 = (decode_clo(env51544))[2];
//not do dummy comment
void* cons = (decode_clo(env51544))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51233;
arg_buffer[3] = a5113351390;
arg_buffer[4] = a5113551394;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51543 = encode_clo(alloc_clo(lam51543_fptr, 0));

void* lam51545_fptr() // lam51545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51546 = arg_buffer[1];
//reading env and args
void* a5113451392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5113351390 = (decode_clo(env51546))[5];
//not do dummy comment
void* lst2 = (decode_clo(env51546))[4];
//not do dummy comment
void* cons = (decode_clo(env51546))[3];
//not do dummy comment
void* append = (decode_clo(env51546))[2];
//not do dummy comment
void* kont51233 = (decode_clo(env51546))[1];

//creating new closure instance
void** clo52220 = alloc_clo(lam51543_fptr, 3);

//setting env list
clo52220[1] = cons;
clo52220[2] = kont51233;
clo52220[3] = a5113351390;
void* f5123451393 = encode_clo(clo52220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5123451393;
arg_buffer[3] = a5113451392;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51545 = encode_clo(alloc_clo(lam51545_fptr, 0));

void* lam51547_fptr() // lam51547 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51548 = arg_buffer[1];
//reading env and args
void* a5113351390 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51548))[6];
//not do dummy comment
void* lst2 = (decode_clo(env51548))[5];
//not do dummy comment
void* lst1 = (decode_clo(env51548))[4];
//not do dummy comment
void* cons = (decode_clo(env51548))[3];
//not do dummy comment
void* append = (decode_clo(env51548))[2];
//not do dummy comment
void* kont51233 = (decode_clo(env51548))[1];

//creating new closure instance
void** clo52222 = alloc_clo(lam51545_fptr, 5);

//setting env list
clo52222[1] = kont51233;
clo52222[2] = append;
clo52222[3] = cons;
clo52222[4] = lst2;
clo52222[5] = a5113351390;
void* f5123551391 = encode_clo(clo52222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5123551391;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51547 = encode_clo(alloc_clo(lam51547_fptr, 0));

void* lam51549_fptr() // lam51549 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51550 = arg_buffer[1];
//reading env and args
void* a5113251388 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51550))[7];
//not do dummy comment
void* lst2 = (decode_clo(env51550))[6];
//not do dummy comment
void* cons = (decode_clo(env51550))[5];
//not do dummy comment
void* append = (decode_clo(env51550))[4];
//not do dummy comment
void* kont51233 = (decode_clo(env51550))[3];
//not do dummy comment
void* lst1 = (decode_clo(env51550))[2];
//not do dummy comment
void* car = (decode_clo(env51550))[1];

//if-clause
bool if_guard52223 = is_true(a5113251388);
if(if_guard52223)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51233);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51233))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52225 = alloc_clo(lam51547_fptr, 6);

//setting env list
clo52225[1] = kont51233;
clo52225[2] = append;
clo52225[3] = cons;
clo52225[4] = lst1;
clo52225[5] = lst2;
clo52225[6] = cdr;
void* f5123651389 = encode_clo(clo52225);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5123651389;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51549 = encode_clo(alloc_clo(lam51549_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51551 = arg_buffer[1];
//reading env and args
void* kont51233 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52227 = alloc_clo(lam51549_fptr, 7);

//setting env list
clo52227[1] = car;
clo52227[2] = lst1;
clo52227[3] = kont51233;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo52227[4] = append;
clo52227[5] = cons;
clo52227[6] = lst2;
clo52227[7] = cdr;
void* f5123751387 = encode_clo(clo52227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5123751387;
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
void* _51552 = arg_buffer[1];
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

void* kont5123851395 = prim_car(lst);
void* lst51396 = prim_cdr(lst);
void* x5113651397 = apply_prim_hash(lst51396);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5123851395);
arg_buffer[2] = x5113651397;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5123851395))[0]);
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
void* _51553 = arg_buffer[1];
//reading env and args
void* kont51240 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5113751398 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51240);
arg_buffer[2] = x5113751398;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51240))[0]);
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
void* _51554 = arg_buffer[1];
//reading env and args
void* kont51241 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5113851399 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51241);
arg_buffer[2] = x5113851399;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51241))[0]);
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
void* _51555 = arg_buffer[1];
//reading env and args
void* kont51242 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5113951400 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51242);
arg_buffer[2] = x5113951400;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51242))[0]);
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
void* _51556 = arg_buffer[1];
//reading env and args
void* kont51243 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5114051401 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51243);
arg_buffer[2] = x5114051401;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51243))[0]);
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
void* _51562 = arg_buffer[1];
//reading env and args
void* kont51244 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar52228 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52228, "100", 10);
void* a5114151402 = encode_mpz(mpzvar52228);
mpz_t* mpzvar52229 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52229, "100", 10);
void* a5114251403 = encode_mpz(mpzvar52229);
mpz_t* mpzvar52230 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52230, "100", 10);
void* a5114351404 = encode_mpz(mpzvar52230);
mpz_t* mpzvar52231 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52231, "100", 10);
void* a5114451405 = encode_mpz(mpzvar52231);
mpz_t* mpzvar52232 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52232, "100", 10);
void* a5114551406 = encode_mpz(mpzvar52232);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = kont51244;
arg_buffer[3] = a5114151402;
arg_buffer[4] = a5114251403;
arg_buffer[5] = a5114351404;
arg_buffer[6] = a5114451405;
arg_buffer[7] = a5114551406;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam51563_fptr() // lam51563 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51564 = arg_buffer[1];
//reading env and args
void* x5114651408 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51245 = (decode_clo(env51564))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51245);
arg_buffer[2] = x5114651408;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51245))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51563 = encode_clo(alloc_clo(lam51563_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51565 = arg_buffer[1];
//reading env and args
void* kont51245 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo52234 = alloc_clo(lam51563_fptr, 1);

//setting env list
clo52234[1] = kont51245;
void* f5124651407 = encode_clo(clo52234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5124651407;
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

