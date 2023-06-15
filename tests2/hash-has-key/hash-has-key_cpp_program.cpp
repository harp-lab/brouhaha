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
void* _39396 = arg_buffer[1];
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

void* kont3913139232 = prim_car(lst);
void* lst39233 = prim_cdr(lst);
void* x3904139234 = apply_prim__u43(lst39233);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3913139232);
arg_buffer[2] = x3904139234;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3913139232))[0]);
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
void* _39397 = arg_buffer[1];
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

void* kont3913339235 = prim_car(lst);
void* lst39236 = prim_cdr(lst);
void* x3904239237 = apply_prim__u45(lst39236);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3913339235);
arg_buffer[2] = x3904239237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3913339235))[0]);
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
void* _39398 = arg_buffer[1];
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

void* kont3913539238 = prim_car(lst);
void* lst39239 = prim_cdr(lst);
void* x3904339240 = apply_prim__u42(lst39239);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3913539238);
arg_buffer[2] = x3904339240;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3913539238))[0]);
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
void* _39399 = arg_buffer[1];
//reading env and args
void* kont39137 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3904439241 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39137);
arg_buffer[2] = x3904439241;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39137))[0]);
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
void* _39400 = arg_buffer[1];
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

void* kont3913839242 = prim_car(lst);
void* lst39243 = prim_cdr(lst);
void* x3904539244 = apply_prim__u47(lst39243);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3913839242);
arg_buffer[2] = x3904539244;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3913839242))[0]);
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
void* _39401 = arg_buffer[1];
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

void* kont3914039245 = prim_car(lst);
void* lst39246 = prim_cdr(lst);
void* x3904639247 = apply_prim__u61(lst39246);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3914039245);
arg_buffer[2] = x3904639247;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3914039245))[0]);
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
void* _39402 = arg_buffer[1];
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

void* kont3914239248 = prim_car(lst);
void* lst39249 = prim_cdr(lst);
void* x3904739250 = apply_prim__u62(lst39249);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3914239248);
arg_buffer[2] = x3904739250;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3914239248))[0]);
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
void* _39403 = arg_buffer[1];
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

void* kont3914439251 = prim_car(lst);
void* lst39252 = prim_cdr(lst);
void* x3904839253 = apply_prim__u60(lst39252);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3914439251);
arg_buffer[2] = x3904839253;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3914439251))[0]);
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
void* _39404 = arg_buffer[1];
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

void* kont3914639254 = prim_car(lst);
void* lst39255 = prim_cdr(lst);
void* x3904939256 = apply_prim__u60_u61(lst39255);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3914639254);
arg_buffer[2] = x3904939256;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3914639254))[0]);
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
void* _39405 = arg_buffer[1];
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

void* kont3914839257 = prim_car(lst);
void* lst39258 = prim_cdr(lst);
void* x3905039259 = apply_prim__u62_u61(lst39258);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3914839257);
arg_buffer[2] = x3905039259;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3914839257))[0]);
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
void* _39406 = arg_buffer[1];
//reading env and args
void* kont39150 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3905139260 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39150);
arg_buffer[2] = x3905139260;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39150))[0]);
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
void* _39407 = arg_buffer[1];
//reading env and args
void* kont39151 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3905239261 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39151);
arg_buffer[2] = x3905239261;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39151))[0]);
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
void* _39408 = arg_buffer[1];
//reading env and args
void* kont39152 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3905339262 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39152);
arg_buffer[2] = x3905339262;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39152))[0]);
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
void* _39409 = arg_buffer[1];
//reading env and args
void* kont39153 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3905439263 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39153);
arg_buffer[2] = x3905439263;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39153))[0]);
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
void* _39410 = arg_buffer[1];
//reading env and args
void* kont39154 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3905539264 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39154);
arg_buffer[2] = x3905539264;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39154))[0]);
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
void* _39411 = arg_buffer[1];
//reading env and args
void* kont39155 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3905639265 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39155);
arg_buffer[2] = x3905639265;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39155))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam39412_fptr() // lam39412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39413 = arg_buffer[1];
//reading env and args
void* a3905939269 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3905739266 = (decode_clo(env39413))[3];
//not do dummy comment
void* kont39156 = (decode_clo(env39413))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env39413))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39156;
arg_buffer[3] = a3905739266;
arg_buffer[4] = a3905939269;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39412 = encode_clo(alloc_clo(lam39412_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39416 = arg_buffer[1];
//reading env and args
void* kont39156 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40339 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40339, "0", 10);
void* a3905739266 = encode_mpz(mpzvar40339);
mpz_t* mpzvar40340 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40340, "2", 10);
void* a3905839267 = encode_mpz(mpzvar40340);

//creating new closure instance
void** clo40342 = alloc_clo(lam39412_fptr, 3);

//setting env list
clo40342[1] = equal_u63;
clo40342[2] = kont39156;
clo40342[3] = a3905739266;
void* f3915739268 = encode_clo(clo40342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3915739268;
arg_buffer[3] = x;
arg_buffer[4] = a3905839267;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam39417_fptr() // lam39417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39418 = arg_buffer[1];
//reading env and args
void* a3906239273 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env39418))[3];
//not do dummy comment
void* a3906039270 = (decode_clo(env39418))[2];
//not do dummy comment
void* kont39158 = (decode_clo(env39418))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39158;
arg_buffer[3] = a3906039270;
arg_buffer[4] = a3906239273;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39417 = encode_clo(alloc_clo(lam39417_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39421 = arg_buffer[1];
//reading env and args
void* kont39158 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar40343 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40343, "1", 10);
void* a3906039270 = encode_mpz(mpzvar40343);
mpz_t* mpzvar40344 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40344, "2", 10);
void* a3906139271 = encode_mpz(mpzvar40344);

//creating new closure instance
void** clo40346 = alloc_clo(lam39417_fptr, 3);

//setting env list
clo40346[1] = kont39158;
clo40346[2] = a3906039270;
clo40346[3] = equal_u63;
void* f3915939272 = encode_clo(clo40346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3915939272;
arg_buffer[3] = x;
arg_buffer[4] = a3906139271;
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
void* _39422 = arg_buffer[1];
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

void* kont3916039274 = prim_car(x);
void* x39275 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3916039274);
arg_buffer[2] = x39275;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3916039274))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam39425_fptr() // lam39425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39426 = arg_buffer[1];
//reading env and args
void* a3906839285 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39162 = (decode_clo(env39426))[3];
//not do dummy comment
void* x = (decode_clo(env39426))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39426))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont39162;
arg_buffer[3] = x;
arg_buffer[4] = a3906839285;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39425 = encode_clo(alloc_clo(lam39425_fptr, 0));

void* lam39427_fptr() // lam39427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39428 = arg_buffer[1];
//reading env and args
void* a3906639282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39428))[5];
//not do dummy comment
void* lst = (decode_clo(env39428))[4];
//not do dummy comment
void* kont39162 = (decode_clo(env39428))[3];
//not do dummy comment
void* x = (decode_clo(env39428))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39428))[1];

//if-clause
bool if_guard40347 = is_true(a3906639282);
if(if_guard40347)
{
void* x3906739283 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39162);
arg_buffer[2] = x3906739283;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39162))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40349 = alloc_clo(lam39425_fptr, 3);

//setting env list
clo40349[1] = member_u63;
clo40349[2] = x;
clo40349[3] = kont39162;
void* f3916339284 = encode_clo(clo40349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3916339284;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39427 = encode_clo(alloc_clo(lam39427_fptr, 0));

void* lam39429_fptr() // lam39429 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39430 = arg_buffer[1];
//reading env and args
void* a3906539280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39430))[6];
//not do dummy comment
void* lst = (decode_clo(env39430))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env39430))[4];
//not do dummy comment
void* kont39162 = (decode_clo(env39430))[3];
//not do dummy comment
void* x = (decode_clo(env39430))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39430))[1];

//creating new closure instance
void** clo40351 = alloc_clo(lam39427_fptr, 5);

//setting env list
clo40351[1] = member_u63;
clo40351[2] = x;
clo40351[3] = kont39162;
clo40351[4] = lst;
clo40351[5] = cdr;
void* f3916439281 = encode_clo(clo40351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3916439281;
arg_buffer[3] = a3906539280;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39429 = encode_clo(alloc_clo(lam39429_fptr, 0));

void* lam39431_fptr() // lam39431 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39432 = arg_buffer[1];
//reading env and args
void* a3906339277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39432))[7];
//not do dummy comment
void* lst = (decode_clo(env39432))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env39432))[5];
//not do dummy comment
void* kont39162 = (decode_clo(env39432))[4];
//not do dummy comment
void* x = (decode_clo(env39432))[3];
//not do dummy comment
void* car = (decode_clo(env39432))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env39432))[1];

//if-clause
bool if_guard40352 = is_true(a3906339277);
if(if_guard40352)
{
void* x3906439278 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39162);
arg_buffer[2] = x3906439278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39162))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40354 = alloc_clo(lam39429_fptr, 6);

//setting env list
clo40354[1] = member_u63;
clo40354[2] = x;
clo40354[3] = kont39162;
clo40354[4] = equal_u63;
clo40354[5] = lst;
clo40354[6] = cdr;
void* f3916539279 = encode_clo(clo40354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3916539279;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39431 = encode_clo(alloc_clo(lam39431_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39433 = arg_buffer[1];
//reading env and args
void* kont39162 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40356 = alloc_clo(lam39431_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo40356[1] = member_u63;
clo40356[2] = car;
clo40356[3] = x;
clo40356[4] = kont39162;
clo40356[5] = equal_u63;
clo40356[6] = lst;
clo40356[7] = cdr;
void* f3916639276 = encode_clo(clo40356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3916639276;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam39434_fptr() // lam39434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39435 = arg_buffer[1];
//reading env and args
void* a3907239293 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3907139291 = (decode_clo(env39435))[4];
//not do dummy comment
void* fun = (decode_clo(env39435))[3];
//not do dummy comment
void* foldl = (decode_clo(env39435))[2];
//not do dummy comment
void* kont39167 = (decode_clo(env39435))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont39167;
arg_buffer[3] = fun;
arg_buffer[4] = a3907139291;
arg_buffer[5] = a3907239293;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39434 = encode_clo(alloc_clo(lam39434_fptr, 0));

void* lam39436_fptr() // lam39436 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39437 = arg_buffer[1];
//reading env and args
void* a3907139291 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39437))[5];
//not do dummy comment
void* lst = (decode_clo(env39437))[4];
//not do dummy comment
void* fun = (decode_clo(env39437))[3];
//not do dummy comment
void* foldl = (decode_clo(env39437))[2];
//not do dummy comment
void* kont39167 = (decode_clo(env39437))[1];

//creating new closure instance
void** clo40358 = alloc_clo(lam39434_fptr, 4);

//setting env list
clo40358[1] = kont39167;
clo40358[2] = foldl;
clo40358[3] = fun;
clo40358[4] = a3907139291;
void* f3916839292 = encode_clo(clo40358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3916839292;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39436 = encode_clo(alloc_clo(lam39436_fptr, 0));

void* lam39438_fptr() // lam39438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39439 = arg_buffer[1];
//reading env and args
void* a3907039289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39439))[6];
//not do dummy comment
void* lst = (decode_clo(env39439))[5];
//not do dummy comment
void* fun = (decode_clo(env39439))[4];
//not do dummy comment
void* acc = (decode_clo(env39439))[3];
//not do dummy comment
void* foldl = (decode_clo(env39439))[2];
//not do dummy comment
void* kont39167 = (decode_clo(env39439))[1];

//creating new closure instance
void** clo40360 = alloc_clo(lam39436_fptr, 5);

//setting env list
clo40360[1] = kont39167;
clo40360[2] = foldl;
clo40360[3] = fun;
clo40360[4] = lst;
clo40360[5] = cdr;
void* f3916939290 = encode_clo(clo40360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3916939290;
arg_buffer[3] = a3907039289;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39438 = encode_clo(alloc_clo(lam39438_fptr, 0));

void* lam39440_fptr() // lam39440 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39441 = arg_buffer[1];
//reading env and args
void* a3906939287 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39441))[7];
//not do dummy comment
void* lst = (decode_clo(env39441))[6];
//not do dummy comment
void* fun = (decode_clo(env39441))[5];
//not do dummy comment
void* acc = (decode_clo(env39441))[4];
//not do dummy comment
void* car = (decode_clo(env39441))[3];
//not do dummy comment
void* foldl = (decode_clo(env39441))[2];
//not do dummy comment
void* kont39167 = (decode_clo(env39441))[1];

//if-clause
bool if_guard40361 = is_true(a3906939287);
if(if_guard40361)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39167);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39167))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40363 = alloc_clo(lam39438_fptr, 6);

//setting env list
clo40363[1] = kont39167;
clo40363[2] = foldl;
clo40363[3] = acc;
clo40363[4] = fun;
clo40363[5] = lst;
clo40363[6] = cdr;
void* f3917039288 = encode_clo(clo40363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3917039288;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39440 = encode_clo(alloc_clo(lam39440_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39442 = arg_buffer[1];
//reading env and args
void* kont39167 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo40365 = alloc_clo(lam39440_fptr, 7);

//setting env list
clo40365[1] = kont39167;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo40365[2] = foldl;
clo40365[3] = car;
clo40365[4] = acc;
clo40365[5] = fun;
clo40365[6] = lst;
clo40365[7] = cdr;
void* f3917139286 = encode_clo(clo40365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3917139286;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam39443_fptr() // lam39443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39444 = arg_buffer[1];
//reading env and args
void* a3907639301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3907439297 = (decode_clo(env39444))[3];
//not do dummy comment
void* kont39172 = (decode_clo(env39444))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39444))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39172;
arg_buffer[3] = a3907439297;
arg_buffer[4] = a3907639301;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39443 = encode_clo(alloc_clo(lam39443_fptr, 0));

void* lam39445_fptr() // lam39445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39446 = arg_buffer[1];
//reading env and args
void* a3907539299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3907439297 = (decode_clo(env39446))[5];
//not do dummy comment
void* kont39172 = (decode_clo(env39446))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39446))[3];
//not do dummy comment
void* lst2 = (decode_clo(env39446))[2];
//not do dummy comment
void* cons = (decode_clo(env39446))[1];

//creating new closure instance
void** clo40367 = alloc_clo(lam39443_fptr, 3);

//setting env list
clo40367[1] = reverse_u45helper;
clo40367[2] = kont39172;
clo40367[3] = a3907439297;
void* f3917339300 = encode_clo(clo40367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3917339300;
arg_buffer[3] = a3907539299;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39445 = encode_clo(alloc_clo(lam39445_fptr, 0));

void* lam39447_fptr() // lam39447 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39448 = arg_buffer[1];
//reading env and args
void* a3907439297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39172 = (decode_clo(env39448))[6];
//not do dummy comment
void* lst = (decode_clo(env39448))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39448))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39448))[3];
//not do dummy comment
void* car = (decode_clo(env39448))[2];
//not do dummy comment
void* cons = (decode_clo(env39448))[1];

//creating new closure instance
void** clo40369 = alloc_clo(lam39445_fptr, 5);

//setting env list
clo40369[1] = cons;
clo40369[2] = lst2;
clo40369[3] = reverse_u45helper;
clo40369[4] = kont39172;
clo40369[5] = a3907439297;
void* f3917439298 = encode_clo(clo40369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3917439298;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39447 = encode_clo(alloc_clo(lam39447_fptr, 0));

void* lam39449_fptr() // lam39449 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39450 = arg_buffer[1];
//reading env and args
void* a3907339295 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39450))[7];
//not do dummy comment
void* kont39172 = (decode_clo(env39450))[6];
//not do dummy comment
void* lst = (decode_clo(env39450))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39450))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39450))[3];
//not do dummy comment
void* car = (decode_clo(env39450))[2];
//not do dummy comment
void* cons = (decode_clo(env39450))[1];

//if-clause
bool if_guard40370 = is_true(a3907339295);
if(if_guard40370)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39172);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39172))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40372 = alloc_clo(lam39447_fptr, 6);

//setting env list
clo40372[1] = cons;
clo40372[2] = car;
clo40372[3] = lst2;
clo40372[4] = reverse_u45helper;
clo40372[5] = lst;
clo40372[6] = kont39172;
void* f3917539296 = encode_clo(clo40372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3917539296;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39449 = encode_clo(alloc_clo(lam39449_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39451 = arg_buffer[1];
//reading env and args
void* kont39172 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40374 = alloc_clo(lam39449_fptr, 7);

//setting env list
clo40374[1] = cons;
clo40374[2] = car;
clo40374[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo40374[4] = reverse_u45helper;
clo40374[5] = lst;
clo40374[6] = kont39172;
clo40374[7] = cdr;
void* f3917639294 = encode_clo(clo40374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3917639294;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam39452_fptr() // lam39452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39453 = arg_buffer[1];
//reading env and args
void* a3907739303 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39453))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env39453))[2];
//not do dummy comment
void* kont39177 = (decode_clo(env39453))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39177;
arg_buffer[3] = lst;
arg_buffer[4] = a3907739303;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39452 = encode_clo(alloc_clo(lam39452_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39454 = arg_buffer[1];
//reading env and args
void* kont39177 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40376 = alloc_clo(lam39452_fptr, 3);

//setting env list
clo40376[1] = kont39177;
clo40376[2] = reverse_u45helper;
clo40376[3] = lst;
void* f3917839302 = encode_clo(clo40376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3917839302;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam39455_fptr() // lam39455 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39456 = arg_buffer[1];
//reading env and args
void* x3908039308 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39179 = (decode_clo(env39456))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39179);
arg_buffer[2] = x3908039308;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39179))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39455 = encode_clo(alloc_clo(lam39455_fptr, 0));

void* lam39457_fptr() // lam39457 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39458 = arg_buffer[1];
//reading env and args
void* a3908539317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3908339313 = (decode_clo(env39458))[4];
//not do dummy comment
void* kont39179 = (decode_clo(env39458))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39458))[2];
//not do dummy comment
void* a3908139310 = (decode_clo(env39458))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39179;
arg_buffer[3] = a3908139310;
arg_buffer[4] = a3908339313;
arg_buffer[5] = a3908539317;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39457 = encode_clo(alloc_clo(lam39457_fptr, 0));

void* lam39459_fptr() // lam39459 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39460 = arg_buffer[1];
//reading env and args
void* a3908439315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3908339313 = (decode_clo(env39460))[6];
//not do dummy comment
void* kont39179 = (decode_clo(env39460))[5];
//not do dummy comment
void* a3908139310 = (decode_clo(env39460))[4];
//not do dummy comment
void* cons = (decode_clo(env39460))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39460))[2];
//not do dummy comment
void* lst2 = (decode_clo(env39460))[1];

//creating new closure instance
void** clo40378 = alloc_clo(lam39457_fptr, 4);

//setting env list
clo40378[1] = a3908139310;
clo40378[2] = take_u45helper;
clo40378[3] = kont39179;
clo40378[4] = a3908339313;
void* f3918139316 = encode_clo(clo40378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3918139316;
arg_buffer[3] = a3908439315;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39459 = encode_clo(alloc_clo(lam39459_fptr, 0));

void* lam39461_fptr() // lam39461 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39462 = arg_buffer[1];
//reading env and args
void* a3908339313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39462))[7];
//not do dummy comment
void* kont39179 = (decode_clo(env39462))[6];
//not do dummy comment
void* cons = (decode_clo(env39462))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env39462))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39462))[3];
//not do dummy comment
void* a3908139310 = (decode_clo(env39462))[2];
//not do dummy comment
void* car = (decode_clo(env39462))[1];

//creating new closure instance
void** clo40380 = alloc_clo(lam39459_fptr, 6);

//setting env list
clo40380[1] = lst2;
clo40380[2] = take_u45helper;
clo40380[3] = cons;
clo40380[4] = a3908139310;
clo40380[5] = kont39179;
clo40380[6] = a3908339313;
void* f3918239314 = encode_clo(clo40380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3918239314;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39461 = encode_clo(alloc_clo(lam39461_fptr, 0));

void* lam39464_fptr() // lam39464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39465 = arg_buffer[1];
//reading env and args
void* a3908139310 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39465))[8];
//not do dummy comment
void* kont39179 = (decode_clo(env39465))[7];
//not do dummy comment
void* cons = (decode_clo(env39465))[6];
//not do dummy comment
void* _u45 = (decode_clo(env39465))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env39465))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39465))[3];
//not do dummy comment
void* n = (decode_clo(env39465))[2];
//not do dummy comment
void* car = (decode_clo(env39465))[1];
mpz_t* mpzvar40381 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40381, "1", 10);
void* a3908239311 = encode_mpz(mpzvar40381);

//creating new closure instance
void** clo40383 = alloc_clo(lam39461_fptr, 7);

//setting env list
clo40383[1] = car;
clo40383[2] = a3908139310;
clo40383[3] = lst2;
clo40383[4] = take_u45helper;
clo40383[5] = cons;
clo40383[6] = kont39179;
clo40383[7] = lst;
void* f3918339312 = encode_clo(clo40383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3918339312;
arg_buffer[3] = n;
arg_buffer[4] = a3908239311;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39464 = encode_clo(alloc_clo(lam39464_fptr, 0));

void* lam39466_fptr() // lam39466 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39467 = arg_buffer[1];
//reading env and args
void* a3907939306 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39467))[10];
//not do dummy comment
void* lst = (decode_clo(env39467))[9];
//not do dummy comment
void* reverse = (decode_clo(env39467))[8];
//not do dummy comment
void* kont39179 = (decode_clo(env39467))[7];
//not do dummy comment
void* cons = (decode_clo(env39467))[6];
//not do dummy comment
void* _u45 = (decode_clo(env39467))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env39467))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39467))[3];
//not do dummy comment
void* n = (decode_clo(env39467))[2];
//not do dummy comment
void* car = (decode_clo(env39467))[1];

//if-clause
bool if_guard40384 = is_true(a3907939306);
if(if_guard40384)
{

//creating new closure instance
void** clo40386 = alloc_clo(lam39455_fptr, 1);

//setting env list
clo40386[1] = kont39179;
void* f3918039307 = encode_clo(clo40386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3918039307;
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
void** clo40388 = alloc_clo(lam39464_fptr, 8);

//setting env list
clo40388[1] = car;
clo40388[2] = n;
clo40388[3] = lst2;
clo40388[4] = take_u45helper;
clo40388[5] = _u45;
clo40388[6] = cons;
clo40388[7] = kont39179;
clo40388[8] = lst;
void* f3918439309 = encode_clo(clo40388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3918439309;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39466 = encode_clo(alloc_clo(lam39466_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39469 = arg_buffer[1];
//reading env and args
void* kont39179 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar40389 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40389, "0", 10);
void* a3907839304 = encode_mpz(mpzvar40389);

//creating new closure instance
void** clo40391 = alloc_clo(lam39466_fptr, 10);

//setting env list
clo40391[1] = car;
clo40391[2] = n;
clo40391[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo40391[4] = take_u45helper;
clo40391[5] = _u45;
clo40391[6] = cons;
clo40391[7] = kont39179;
clo40391[8] = reverse;
clo40391[9] = lst;
clo40391[10] = cdr;
void* f3918539305 = encode_clo(clo40391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3918539305;
arg_buffer[3] = n;
arg_buffer[4] = a3907839304;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam39470_fptr() // lam39470 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39471 = arg_buffer[1];
//reading env and args
void* a3908639319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39186 = (decode_clo(env39471))[4];
//not do dummy comment
void* lst = (decode_clo(env39471))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env39471))[2];
//not do dummy comment
void* n = (decode_clo(env39471))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39186;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3908639319;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39470 = encode_clo(alloc_clo(lam39470_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39472 = arg_buffer[1];
//reading env and args
void* kont39186 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40393 = alloc_clo(lam39470_fptr, 4);

//setting env list
clo40393[1] = n;
clo40393[2] = take_u45helper;
clo40393[3] = lst;
clo40393[4] = kont39186;
void* f3918739318 = encode_clo(clo40393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3918739318;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam39474_fptr() // lam39474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39475 = arg_buffer[1];
//reading env and args
void* a3909139327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39188 = (decode_clo(env39475))[3];
//not do dummy comment
void* _u43 = (decode_clo(env39475))[2];
//not do dummy comment
void* a3908939323 = (decode_clo(env39475))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont39188;
arg_buffer[3] = a3908939323;
arg_buffer[4] = a3909139327;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39474 = encode_clo(alloc_clo(lam39474_fptr, 0));

void* lam39476_fptr() // lam39476 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39477 = arg_buffer[1];
//reading env and args
void* a3909039325 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39188 = (decode_clo(env39477))[4];
//not do dummy comment
void* length = (decode_clo(env39477))[3];
//not do dummy comment
void* _u43 = (decode_clo(env39477))[2];
//not do dummy comment
void* a3908939323 = (decode_clo(env39477))[1];

//creating new closure instance
void** clo40395 = alloc_clo(lam39474_fptr, 3);

//setting env list
clo40395[1] = a3908939323;
clo40395[2] = _u43;
clo40395[3] = kont39188;
void* f3918939326 = encode_clo(clo40395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3918939326;
arg_buffer[3] = a3909039325;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39476 = encode_clo(alloc_clo(lam39476_fptr, 0));

void* lam39479_fptr() // lam39479 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39480 = arg_buffer[1];
//reading env and args
void* a3908739321 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39480))[5];
//not do dummy comment
void* kont39188 = (decode_clo(env39480))[4];
//not do dummy comment
void* lst = (decode_clo(env39480))[3];
//not do dummy comment
void* length = (decode_clo(env39480))[2];
//not do dummy comment
void* _u43 = (decode_clo(env39480))[1];

//if-clause
bool if_guard40396 = is_true(a3908739321);
if(if_guard40396)
{
mpz_t* mpzvar40397 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40397, "0", 10);
void* x3908839322 = encode_mpz(mpzvar40397);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39188);
arg_buffer[2] = x3908839322;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39188))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar40398 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40398, "1", 10);
void* a3908939323 = encode_mpz(mpzvar40398);

//creating new closure instance
void** clo40400 = alloc_clo(lam39476_fptr, 4);

//setting env list
clo40400[1] = a3908939323;
clo40400[2] = _u43;
clo40400[3] = length;
clo40400[4] = kont39188;
void* f3919039324 = encode_clo(clo40400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3919039324;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39479 = encode_clo(alloc_clo(lam39479_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39481 = arg_buffer[1];
//reading env and args
void* kont39188 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo40402 = alloc_clo(lam39479_fptr, 5);

//setting env list
clo40402[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo40402[2] = length;
clo40402[3] = lst;
clo40402[4] = kont39188;
clo40402[5] = cdr;
void* f3919139320 = encode_clo(clo40402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3919139320;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam39482_fptr() // lam39482 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39483 = arg_buffer[1];
//reading env and args
void* x3909339331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39192 = (decode_clo(env39483))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39192);
arg_buffer[2] = x3909339331;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39192))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39482 = encode_clo(alloc_clo(lam39482_fptr, 0));

void* lam39484_fptr() // lam39484 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39485 = arg_buffer[1];
//reading env and args
void* a3909739339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3909539335 = (decode_clo(env39485))[3];
//not do dummy comment
void* kont39192 = (decode_clo(env39485))[2];
//not do dummy comment
void* cons = (decode_clo(env39485))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39192;
arg_buffer[3] = a3909539335;
arg_buffer[4] = a3909739339;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39484 = encode_clo(alloc_clo(lam39484_fptr, 0));

void* lam39486_fptr() // lam39486 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39487 = arg_buffer[1];
//reading env and args
void* a3909639337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env39487))[5];
//not do dummy comment
void* a3909539335 = (decode_clo(env39487))[4];
//not do dummy comment
void* kont39192 = (decode_clo(env39487))[3];
//not do dummy comment
void* proc = (decode_clo(env39487))[2];
//not do dummy comment
void* cons = (decode_clo(env39487))[1];

//creating new closure instance
void** clo40404 = alloc_clo(lam39484_fptr, 3);

//setting env list
clo40404[1] = cons;
clo40404[2] = kont39192;
clo40404[3] = a3909539335;
void* f3919439338 = encode_clo(clo40404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3919439338;
arg_buffer[3] = proc;
arg_buffer[4] = a3909639337;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39486 = encode_clo(alloc_clo(lam39486_fptr, 0));

void* lam39488_fptr() // lam39488 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39489 = arg_buffer[1];
//reading env and args
void* a3909539335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39489))[6];
//not do dummy comment
void* lst = (decode_clo(env39489))[5];
//not do dummy comment
void* map = (decode_clo(env39489))[4];
//not do dummy comment
void* kont39192 = (decode_clo(env39489))[3];
//not do dummy comment
void* proc = (decode_clo(env39489))[2];
//not do dummy comment
void* cons = (decode_clo(env39489))[1];

//creating new closure instance
void** clo40406 = alloc_clo(lam39486_fptr, 5);

//setting env list
clo40406[1] = cons;
clo40406[2] = proc;
clo40406[3] = kont39192;
clo40406[4] = a3909539335;
clo40406[5] = map;
void* f3919539336 = encode_clo(clo40406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3919539336;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39488 = encode_clo(alloc_clo(lam39488_fptr, 0));

void* lam39490_fptr() // lam39490 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39491 = arg_buffer[1];
//reading env and args
void* a3909439333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39491))[6];
//not do dummy comment
void* lst = (decode_clo(env39491))[5];
//not do dummy comment
void* map = (decode_clo(env39491))[4];
//not do dummy comment
void* kont39192 = (decode_clo(env39491))[3];
//not do dummy comment
void* proc = (decode_clo(env39491))[2];
//not do dummy comment
void* cons = (decode_clo(env39491))[1];

//creating new closure instance
void** clo40408 = alloc_clo(lam39488_fptr, 6);

//setting env list
clo40408[1] = cons;
clo40408[2] = proc;
clo40408[3] = kont39192;
clo40408[4] = map;
clo40408[5] = lst;
clo40408[6] = cdr;
void* f3919639334 = encode_clo(clo40408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3919639334;
arg_buffer[3] = a3909439333;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39490 = encode_clo(alloc_clo(lam39490_fptr, 0));

void* lam39492_fptr() // lam39492 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39493 = arg_buffer[1];
//reading env and args
void* a3909239329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39493))[8];
//not do dummy comment
void* map = (decode_clo(env39493))[7];
//not do dummy comment
void* kont39192 = (decode_clo(env39493))[6];
//not do dummy comment
void* proc = (decode_clo(env39493))[5];
//not do dummy comment
void* car = (decode_clo(env39493))[4];
//not do dummy comment
void* cons = (decode_clo(env39493))[3];
//not do dummy comment
void* list = (decode_clo(env39493))[2];
//not do dummy comment
void* cdr = (decode_clo(env39493))[1];

//if-clause
bool if_guard40409 = is_true(a3909239329);
if(if_guard40409)
{

//creating new closure instance
void** clo40411 = alloc_clo(lam39482_fptr, 1);

//setting env list
clo40411[1] = kont39192;
void* f3919339330 = encode_clo(clo40411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3919339330;
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
void** clo40413 = alloc_clo(lam39490_fptr, 6);

//setting env list
clo40413[1] = cons;
clo40413[2] = proc;
clo40413[3] = kont39192;
clo40413[4] = map;
clo40413[5] = lst;
clo40413[6] = cdr;
void* f3919739332 = encode_clo(clo40413);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3919739332;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39492 = encode_clo(alloc_clo(lam39492_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39494 = arg_buffer[1];
//reading env and args
void* kont39192 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40415 = alloc_clo(lam39492_fptr, 8);

//setting env list
clo40415[1] = cdr;
clo40415[2] = list;
clo40415[3] = cons;
clo40415[4] = car;
clo40415[5] = proc;
clo40415[6] = kont39192;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo40415[7] = map;
clo40415[8] = lst;
void* f3919839328 = encode_clo(clo40415);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3919839328;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam39495_fptr() // lam39495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39496 = arg_buffer[1];
//reading env and args
void* x3909939343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39199 = (decode_clo(env39496))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39199);
arg_buffer[2] = x3909939343;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39199))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39495 = encode_clo(alloc_clo(lam39495_fptr, 0));

void* lam39497_fptr() // lam39497 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39498 = arg_buffer[1];
//reading env and args
void* a3910439353 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3910239349 = (decode_clo(env39498))[3];
//not do dummy comment
void* kont39199 = (decode_clo(env39498))[2];
//not do dummy comment
void* cons = (decode_clo(env39498))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39199;
arg_buffer[3] = a3910239349;
arg_buffer[4] = a3910439353;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39497 = encode_clo(alloc_clo(lam39497_fptr, 0));

void* lam39499_fptr() // lam39499 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39500 = arg_buffer[1];
//reading env and args
void* a3910339351 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3910239349 = (decode_clo(env39500))[5];
//not do dummy comment
void* op = (decode_clo(env39500))[4];
//not do dummy comment
void* filter = (decode_clo(env39500))[3];
//not do dummy comment
void* kont39199 = (decode_clo(env39500))[2];
//not do dummy comment
void* cons = (decode_clo(env39500))[1];

//creating new closure instance
void** clo40417 = alloc_clo(lam39497_fptr, 3);

//setting env list
clo40417[1] = cons;
clo40417[2] = kont39199;
clo40417[3] = a3910239349;
void* f3920139352 = encode_clo(clo40417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3920139352;
arg_buffer[3] = op;
arg_buffer[4] = a3910339351;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39499 = encode_clo(alloc_clo(lam39499_fptr, 0));

void* lam39501_fptr() // lam39501 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39502 = arg_buffer[1];
//reading env and args
void* a3910239349 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39502))[6];
//not do dummy comment
void* lst = (decode_clo(env39502))[5];
//not do dummy comment
void* op = (decode_clo(env39502))[4];
//not do dummy comment
void* filter = (decode_clo(env39502))[3];
//not do dummy comment
void* kont39199 = (decode_clo(env39502))[2];
//not do dummy comment
void* cons = (decode_clo(env39502))[1];

//creating new closure instance
void** clo40419 = alloc_clo(lam39499_fptr, 5);

//setting env list
clo40419[1] = cons;
clo40419[2] = kont39199;
clo40419[3] = filter;
clo40419[4] = op;
clo40419[5] = a3910239349;
void* f3920239350 = encode_clo(clo40419);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3920239350;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39501 = encode_clo(alloc_clo(lam39501_fptr, 0));

void* lam39503_fptr() // lam39503 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39504 = arg_buffer[1];
//reading env and args
void* a3910539355 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env39504))[3];
//not do dummy comment
void* filter = (decode_clo(env39504))[2];
//not do dummy comment
void* kont39199 = (decode_clo(env39504))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont39199;
arg_buffer[3] = op;
arg_buffer[4] = a3910539355;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39503 = encode_clo(alloc_clo(lam39503_fptr, 0));

void* lam39505_fptr() // lam39505 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39506 = arg_buffer[1];
//reading env and args
void* a3910139347 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39506))[7];
//not do dummy comment
void* lst = (decode_clo(env39506))[6];
//not do dummy comment
void* op = (decode_clo(env39506))[5];
//not do dummy comment
void* filter = (decode_clo(env39506))[4];
//not do dummy comment
void* car = (decode_clo(env39506))[3];
//not do dummy comment
void* kont39199 = (decode_clo(env39506))[2];
//not do dummy comment
void* cons = (decode_clo(env39506))[1];

//if-clause
bool if_guard40420 = is_true(a3910139347);
if(if_guard40420)
{

//creating new closure instance
void** clo40422 = alloc_clo(lam39501_fptr, 6);

//setting env list
clo40422[1] = cons;
clo40422[2] = kont39199;
clo40422[3] = filter;
clo40422[4] = op;
clo40422[5] = lst;
clo40422[6] = cdr;
void* f3920339348 = encode_clo(clo40422);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3920339348;
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
void** clo40424 = alloc_clo(lam39503_fptr, 3);

//setting env list
clo40424[1] = kont39199;
clo40424[2] = filter;
clo40424[3] = op;
void* f3920439354 = encode_clo(clo40424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3920439354;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39505 = encode_clo(alloc_clo(lam39505_fptr, 0));

void* lam39507_fptr() // lam39507 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39508 = arg_buffer[1];
//reading env and args
void* a3910039345 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39508))[7];
//not do dummy comment
void* lst = (decode_clo(env39508))[6];
//not do dummy comment
void* op = (decode_clo(env39508))[5];
//not do dummy comment
void* filter = (decode_clo(env39508))[4];
//not do dummy comment
void* car = (decode_clo(env39508))[3];
//not do dummy comment
void* kont39199 = (decode_clo(env39508))[2];
//not do dummy comment
void* cons = (decode_clo(env39508))[1];

//creating new closure instance
void** clo40426 = alloc_clo(lam39505_fptr, 7);

//setting env list
clo40426[1] = cons;
clo40426[2] = kont39199;
clo40426[3] = car;
clo40426[4] = filter;
clo40426[5] = op;
clo40426[6] = lst;
clo40426[7] = cdr;
void* f3920539346 = encode_clo(clo40426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3920539346;
arg_buffer[3] = a3910039345;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39507 = encode_clo(alloc_clo(lam39507_fptr, 0));

void* lam39509_fptr() // lam39509 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39510 = arg_buffer[1];
//reading env and args
void* a3909839341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env39510))[8];
//not do dummy comment
void* op = (decode_clo(env39510))[7];
//not do dummy comment
void* list = (decode_clo(env39510))[6];
//not do dummy comment
void* cdr = (decode_clo(env39510))[5];
//not do dummy comment
void* filter = (decode_clo(env39510))[4];
//not do dummy comment
void* car = (decode_clo(env39510))[3];
//not do dummy comment
void* kont39199 = (decode_clo(env39510))[2];
//not do dummy comment
void* cons = (decode_clo(env39510))[1];

//if-clause
bool if_guard40427 = is_true(a3909839341);
if(if_guard40427)
{

//creating new closure instance
void** clo40429 = alloc_clo(lam39495_fptr, 1);

//setting env list
clo40429[1] = kont39199;
void* f3920039342 = encode_clo(clo40429);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3920039342;
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
void** clo40431 = alloc_clo(lam39507_fptr, 7);

//setting env list
clo40431[1] = cons;
clo40431[2] = kont39199;
clo40431[3] = car;
clo40431[4] = filter;
clo40431[5] = op;
clo40431[6] = lst;
clo40431[7] = cdr;
void* f3920639344 = encode_clo(clo40431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3920639344;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39509 = encode_clo(alloc_clo(lam39509_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39511 = arg_buffer[1];
//reading env and args
void* kont39199 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40433 = alloc_clo(lam39509_fptr, 8);

//setting env list
clo40433[1] = cons;
clo40433[2] = kont39199;
clo40433[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo40433[4] = filter;
clo40433[5] = cdr;
clo40433[6] = list;
clo40433[7] = op;
clo40433[8] = lst;
void* f3920739340 = encode_clo(clo40433);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3920739340;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam39512_fptr() // lam39512 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39513 = arg_buffer[1];
//reading env and args
void* a3911039363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env39513))[3];
//not do dummy comment
void* kont39208 = (decode_clo(env39513))[2];
//not do dummy comment
void* a3910839360 = (decode_clo(env39513))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont39208;
arg_buffer[3] = a3910839360;
arg_buffer[4] = a3911039363;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39512 = encode_clo(alloc_clo(lam39512_fptr, 0));

void* lam39515_fptr() // lam39515 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39516 = arg_buffer[1];
//reading env and args
void* a3910839360 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env39516))[4];
//not do dummy comment
void* kont39208 = (decode_clo(env39516))[3];
//not do dummy comment
void* n = (decode_clo(env39516))[2];
//not do dummy comment
void* _u45 = (decode_clo(env39516))[1];
mpz_t* mpzvar40434 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40434, "1", 10);
void* a3910939361 = encode_mpz(mpzvar40434);

//creating new closure instance
void** clo40436 = alloc_clo(lam39512_fptr, 3);

//setting env list
clo40436[1] = a3910839360;
clo40436[2] = kont39208;
clo40436[3] = drop;
void* f3920939362 = encode_clo(clo40436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3920939362;
arg_buffer[3] = n;
arg_buffer[4] = a3910939361;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39515 = encode_clo(alloc_clo(lam39515_fptr, 0));

void* lam39517_fptr() // lam39517 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39518 = arg_buffer[1];
//reading env and args
void* a3910739358 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39518))[6];
//not do dummy comment
void* kont39208 = (decode_clo(env39518))[5];
//not do dummy comment
void* n = (decode_clo(env39518))[4];
//not do dummy comment
void* _u45 = (decode_clo(env39518))[3];
//not do dummy comment
void* lst = (decode_clo(env39518))[2];
//not do dummy comment
void* drop = (decode_clo(env39518))[1];

//if-clause
bool if_guard40437 = is_true(a3910739358);
if(if_guard40437)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39208);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39208))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40439 = alloc_clo(lam39515_fptr, 4);

//setting env list
clo40439[1] = _u45;
clo40439[2] = n;
clo40439[3] = kont39208;
clo40439[4] = drop;
void* f3921039359 = encode_clo(clo40439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3921039359;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39517 = encode_clo(alloc_clo(lam39517_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39520 = arg_buffer[1];
//reading env and args
void* kont39208 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar40440 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40440, "0", 10);
void* a3910639356 = encode_mpz(mpzvar40440);

//creating new closure instance
void** clo40442 = alloc_clo(lam39517_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo40442[1] = drop;
clo40442[2] = lst;
clo40442[3] = _u45;
clo40442[4] = n;
clo40442[5] = kont39208;
clo40442[6] = cdr;
void* f3921139357 = encode_clo(clo40442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3921139357;
arg_buffer[3] = n;
arg_buffer[4] = a3910639356;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam39521_fptr() // lam39521 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39522 = arg_buffer[1];
//reading env and args
void* a3911439371 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3911239367 = (decode_clo(env39522))[3];
//not do dummy comment
void* proc = (decode_clo(env39522))[2];
//not do dummy comment
void* kont39212 = (decode_clo(env39522))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont39212;
arg_buffer[3] = a3911239367;
arg_buffer[4] = a3911439371;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39521 = encode_clo(alloc_clo(lam39521_fptr, 0));

void* lam39523_fptr() // lam39523 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39524 = arg_buffer[1];
//reading env and args
void* a3911339369 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env39524))[5];
//not do dummy comment
void* a3911239367 = (decode_clo(env39524))[4];
//not do dummy comment
void* proc = (decode_clo(env39524))[3];
//not do dummy comment
void* kont39212 = (decode_clo(env39524))[2];
//not do dummy comment
void* acc = (decode_clo(env39524))[1];

//creating new closure instance
void** clo40444 = alloc_clo(lam39521_fptr, 3);

//setting env list
clo40444[1] = kont39212;
clo40444[2] = proc;
clo40444[3] = a3911239367;
void* f3921339370 = encode_clo(clo40444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3921339370;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3911339369;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39523 = encode_clo(alloc_clo(lam39523_fptr, 0));

void* lam39525_fptr() // lam39525 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39526 = arg_buffer[1];
//reading env and args
void* a3911239367 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39526))[6];
//not do dummy comment
void* foldr = (decode_clo(env39526))[5];
//not do dummy comment
void* lst = (decode_clo(env39526))[4];
//not do dummy comment
void* proc = (decode_clo(env39526))[3];
//not do dummy comment
void* kont39212 = (decode_clo(env39526))[2];
//not do dummy comment
void* acc = (decode_clo(env39526))[1];

//creating new closure instance
void** clo40446 = alloc_clo(lam39523_fptr, 5);

//setting env list
clo40446[1] = acc;
clo40446[2] = kont39212;
clo40446[3] = proc;
clo40446[4] = a3911239367;
clo40446[5] = foldr;
void* f3921439368 = encode_clo(clo40446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3921439368;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39525 = encode_clo(alloc_clo(lam39525_fptr, 0));

void* lam39527_fptr() // lam39527 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39528 = arg_buffer[1];
//reading env and args
void* a3911139365 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env39528))[7];
//not do dummy comment
void* car = (decode_clo(env39528))[6];
//not do dummy comment
void* foldr = (decode_clo(env39528))[5];
//not do dummy comment
void* lst = (decode_clo(env39528))[4];
//not do dummy comment
void* proc = (decode_clo(env39528))[3];
//not do dummy comment
void* kont39212 = (decode_clo(env39528))[2];
//not do dummy comment
void* acc = (decode_clo(env39528))[1];

//if-clause
bool if_guard40447 = is_true(a3911139365);
if(if_guard40447)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39212);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39212))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40449 = alloc_clo(lam39525_fptr, 6);

//setting env list
clo40449[1] = acc;
clo40449[2] = kont39212;
clo40449[3] = proc;
clo40449[4] = lst;
clo40449[5] = foldr;
clo40449[6] = cdr;
void* f3921539366 = encode_clo(clo40449);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3921539366;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39527 = encode_clo(alloc_clo(lam39527_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39529 = arg_buffer[1];
//reading env and args
void* kont39212 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo40451 = alloc_clo(lam39527_fptr, 7);

//setting env list
clo40451[1] = acc;
clo40451[2] = kont39212;
clo40451[3] = proc;
clo40451[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo40451[5] = foldr;
clo40451[6] = car;
clo40451[7] = cdr;
void* f3921639364 = encode_clo(clo40451);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3921639364;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam39530_fptr() // lam39530 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39531 = arg_buffer[1];
//reading env and args
void* a3911839379 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39217 = (decode_clo(env39531))[3];
//not do dummy comment
void* cons = (decode_clo(env39531))[2];
//not do dummy comment
void* a3911639375 = (decode_clo(env39531))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39217;
arg_buffer[3] = a3911639375;
arg_buffer[4] = a3911839379;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39530 = encode_clo(alloc_clo(lam39530_fptr, 0));

void* lam39532_fptr() // lam39532 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39533 = arg_buffer[1];
//reading env and args
void* a3911739377 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39217 = (decode_clo(env39533))[5];
//not do dummy comment
void* append = (decode_clo(env39533))[4];
//not do dummy comment
void* lst2 = (decode_clo(env39533))[3];
//not do dummy comment
void* cons = (decode_clo(env39533))[2];
//not do dummy comment
void* a3911639375 = (decode_clo(env39533))[1];

//creating new closure instance
void** clo40453 = alloc_clo(lam39530_fptr, 3);

//setting env list
clo40453[1] = a3911639375;
clo40453[2] = cons;
clo40453[3] = kont39217;
void* f3921839378 = encode_clo(clo40453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3921839378;
arg_buffer[3] = a3911739377;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39532 = encode_clo(alloc_clo(lam39532_fptr, 0));

void* lam39534_fptr() // lam39534 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39535 = arg_buffer[1];
//reading env and args
void* a3911639375 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env39535))[6];
//not do dummy comment
void* lst2 = (decode_clo(env39535))[5];
//not do dummy comment
void* lst1 = (decode_clo(env39535))[4];
//not do dummy comment
void* cons = (decode_clo(env39535))[3];
//not do dummy comment
void* kont39217 = (decode_clo(env39535))[2];
//not do dummy comment
void* cdr = (decode_clo(env39535))[1];

//creating new closure instance
void** clo40455 = alloc_clo(lam39532_fptr, 5);

//setting env list
clo40455[1] = a3911639375;
clo40455[2] = cons;
clo40455[3] = lst2;
clo40455[4] = append;
clo40455[5] = kont39217;
void* f3921939376 = encode_clo(clo40455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3921939376;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39534 = encode_clo(alloc_clo(lam39534_fptr, 0));

void* lam39536_fptr() // lam39536 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39537 = arg_buffer[1];
//reading env and args
void* a3911539373 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env39537))[7];
//not do dummy comment
void* lst2 = (decode_clo(env39537))[6];
//not do dummy comment
void* cons = (decode_clo(env39537))[5];
//not do dummy comment
void* kont39217 = (decode_clo(env39537))[4];
//not do dummy comment
void* cdr = (decode_clo(env39537))[3];
//not do dummy comment
void* lst1 = (decode_clo(env39537))[2];
//not do dummy comment
void* car = (decode_clo(env39537))[1];

//if-clause
bool if_guard40456 = is_true(a3911539373);
if(if_guard40456)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39217);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39217))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo40458 = alloc_clo(lam39534_fptr, 6);

//setting env list
clo40458[1] = cdr;
clo40458[2] = kont39217;
clo40458[3] = cons;
clo40458[4] = lst1;
clo40458[5] = lst2;
clo40458[6] = append;
void* f3922039374 = encode_clo(clo40458);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3922039374;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam39536 = encode_clo(alloc_clo(lam39536_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39538 = arg_buffer[1];
//reading env and args
void* kont39217 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo40460 = alloc_clo(lam39536_fptr, 7);

//setting env list
clo40460[1] = car;
clo40460[2] = lst1;
clo40460[3] = cdr;
clo40460[4] = kont39217;
clo40460[5] = cons;
clo40460[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo40460[7] = append;
void* f3922139372 = encode_clo(clo40460);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3922139372;
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
void* _39539 = arg_buffer[1];
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

void* kont3922239380 = prim_car(lst);
void* lst39381 = prim_cdr(lst);
void* x3911939382 = apply_prim_hash(lst39381);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3922239380);
arg_buffer[2] = x3911939382;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3922239380))[0]);
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
void* _39540 = arg_buffer[1];
//reading env and args
void* kont39224 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3912039383 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39224);
arg_buffer[2] = x3912039383;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39224))[0]);
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
void* _39541 = arg_buffer[1];
//reading env and args
void* kont39225 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3912139384 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39225);
arg_buffer[2] = x3912139384;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39225))[0]);
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
void* _39542 = arg_buffer[1];
//reading env and args
void* kont39226 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3912239385 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39226);
arg_buffer[2] = x3912239385;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39226))[0]);
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
void* _39543 = arg_buffer[1];
//reading env and args
void* kont39227 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3912339386 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39227);
arg_buffer[2] = x3912339386;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39227))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam39545_fptr() // lam39545 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39546 = arg_buffer[1];
//reading env and args
void* a3912839392 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env39546))[2];
//not do dummy comment
void* kont39228 = (decode_clo(env39546))[1];
mpz_t* mpzvar40461 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40461, "5", 10);
void* a3912939393 = encode_mpz(mpzvar40461);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45has_u45key_u63);
arg_buffer[2] = kont39228;
arg_buffer[3] = a3912839392;
arg_buffer[4] = a3912939393;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39545 = encode_clo(alloc_clo(lam39545_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39551 = arg_buffer[1];
//reading env and args
void* kont39228 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar40462 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40462, "100", 10);
void* a3912439387 = encode_mpz(mpzvar40462);
mpz_t* mpzvar40463 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40463, "80", 10);
void* a3912539388 = encode_mpz(mpzvar40463);
mpz_t* mpzvar40464 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40464, "10", 10);
void* a3912639389 = encode_mpz(mpzvar40464);
mpz_t* mpzvar40465 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar40465, "2", 10);
void* a3912739390 = encode_mpz(mpzvar40465);

//creating new closure instance
void** clo40467 = alloc_clo(lam39545_fptr, 2);

//setting env list
clo40467[1] = kont39228;
clo40467[2] = hash_u45has_u45key_u63;
void* f3922939391 = encode_clo(clo40467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f3922939391;
arg_buffer[3] = a3912439387;
arg_buffer[4] = a3912539388;
arg_buffer[5] = a3912639389;
arg_buffer[6] = a3912739390;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam39552_fptr() // lam39552 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env39553 = arg_buffer[1];
//reading env and args
void* x3913039395 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39230 = (decode_clo(env39553))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39230);
arg_buffer[2] = x3913039395;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39230))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam39552 = encode_clo(alloc_clo(lam39552_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _39554 = arg_buffer[1];
//reading env and args
void* kont39230 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo40469 = alloc_clo(lam39552_fptr, 1);

//setting env list
clo40469[1] = kont39230;
void* f3923139394 = encode_clo(clo40469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3923139394;
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

