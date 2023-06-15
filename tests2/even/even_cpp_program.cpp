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
void* _12343 = arg_buffer[1];
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

void* kont1208512185 = prim_car(lst);
void* lst12186 = prim_cdr(lst);
void* x1200012187 = apply_prim__u43(lst12186);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1208512185);
arg_buffer[2] = x1200012187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1208512185))[0]);
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
void* _12344 = arg_buffer[1];
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

void* kont1208712188 = prim_car(lst);
void* lst12189 = prim_cdr(lst);
void* x1200112190 = apply_prim__u45(lst12189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1208712188);
arg_buffer[2] = x1200112190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1208712188))[0]);
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
void* _12345 = arg_buffer[1];
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

void* kont1208912191 = prim_car(lst);
void* lst12192 = prim_cdr(lst);
void* x1200212193 = apply_prim__u42(lst12192);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1208912191);
arg_buffer[2] = x1200212193;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1208912191))[0]);
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
void* _12346 = arg_buffer[1];
//reading env and args
void* kont12091 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1200312194 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12091);
arg_buffer[2] = x1200312194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12091))[0]);
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
void* _12347 = arg_buffer[1];
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

void* kont1209212195 = prim_car(lst);
void* lst12196 = prim_cdr(lst);
void* x1200412197 = apply_prim__u47(lst12196);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1209212195);
arg_buffer[2] = x1200412197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1209212195))[0]);
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
void* _12348 = arg_buffer[1];
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

void* kont1209412198 = prim_car(lst);
void* lst12199 = prim_cdr(lst);
void* x1200512200 = apply_prim__u61(lst12199);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1209412198);
arg_buffer[2] = x1200512200;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1209412198))[0]);
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
void* _12349 = arg_buffer[1];
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

void* kont1209612201 = prim_car(lst);
void* lst12202 = prim_cdr(lst);
void* x1200612203 = apply_prim__u62(lst12202);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1209612201);
arg_buffer[2] = x1200612203;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1209612201))[0]);
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
void* _12350 = arg_buffer[1];
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

void* kont1209812204 = prim_car(lst);
void* lst12205 = prim_cdr(lst);
void* x1200712206 = apply_prim__u60(lst12205);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1209812204);
arg_buffer[2] = x1200712206;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1209812204))[0]);
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
void* _12351 = arg_buffer[1];
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

void* kont1210012207 = prim_car(lst);
void* lst12208 = prim_cdr(lst);
void* x1200812209 = apply_prim__u60_u61(lst12208);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1210012207);
arg_buffer[2] = x1200812209;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1210012207))[0]);
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
void* _12352 = arg_buffer[1];
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

void* kont1210212210 = prim_car(lst);
void* lst12211 = prim_cdr(lst);
void* x1200912212 = apply_prim__u62_u61(lst12211);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1210212210);
arg_buffer[2] = x1200912212;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1210212210))[0]);
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
void* _12353 = arg_buffer[1];
//reading env and args
void* kont12104 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1201012213 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12104);
arg_buffer[2] = x1201012213;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12104))[0]);
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
void* _12354 = arg_buffer[1];
//reading env and args
void* kont12105 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1201112214 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12105);
arg_buffer[2] = x1201112214;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12105))[0]);
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
void* _12355 = arg_buffer[1];
//reading env and args
void* kont12106 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1201212215 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12106);
arg_buffer[2] = x1201212215;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12106))[0]);
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
void* _12356 = arg_buffer[1];
//reading env and args
void* kont12107 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1201312216 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12107);
arg_buffer[2] = x1201312216;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12107))[0]);
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
void* _12357 = arg_buffer[1];
//reading env and args
void* kont12108 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1201412217 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12108);
arg_buffer[2] = x1201412217;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12108))[0]);
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
void* _12358 = arg_buffer[1];
//reading env and args
void* kont12109 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1201512218 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12109);
arg_buffer[2] = x1201512218;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12109))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam12359_fptr() // lam12359 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12360 = arg_buffer[1];
//reading env and args
void* a1201812222 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1201612219 = (decode_clo(env12360))[3];
//not do dummy comment
void* kont12110 = (decode_clo(env12360))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12360))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12110;
arg_buffer[3] = a1201612219;
arg_buffer[4] = a1201812222;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12359 = encode_clo(alloc_clo(lam12359_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12363 = arg_buffer[1];
//reading env and args
void* kont12110 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13056 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13056, "0", 10);
void* a1201612219 = encode_mpz(mpzvar13056);
mpz_t* mpzvar13057 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13057, "2", 10);
void* a1201712220 = encode_mpz(mpzvar13057);

//creating new closure instance
void** clo13059 = alloc_clo(lam12359_fptr, 3);

//setting env list
clo13059[1] = equal_u63;
clo13059[2] = kont12110;
clo13059[3] = a1201612219;
void* f1211112221 = encode_clo(clo13059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1211112221;
arg_buffer[3] = x;
arg_buffer[4] = a1201712220;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam12364_fptr() // lam12364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12365 = arg_buffer[1];
//reading env and args
void* a1202112226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1201912223 = (decode_clo(env12365))[3];
//not do dummy comment
void* kont12112 = (decode_clo(env12365))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12365))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont12112;
arg_buffer[3] = a1201912223;
arg_buffer[4] = a1202112226;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12364 = encode_clo(alloc_clo(lam12364_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12368 = arg_buffer[1];
//reading env and args
void* kont12112 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar13060 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13060, "1", 10);
void* a1201912223 = encode_mpz(mpzvar13060);
mpz_t* mpzvar13061 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13061, "2", 10);
void* a1202012224 = encode_mpz(mpzvar13061);

//creating new closure instance
void** clo13063 = alloc_clo(lam12364_fptr, 3);

//setting env list
clo13063[1] = equal_u63;
clo13063[2] = kont12112;
clo13063[3] = a1201912223;
void* f1211312225 = encode_clo(clo13063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1211312225;
arg_buffer[3] = x;
arg_buffer[4] = a1202012224;
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
void* _12369 = arg_buffer[1];
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

void* kont1211412227 = prim_car(x);
void* x12228 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1211412227);
arg_buffer[2] = x12228;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1211412227))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam12372_fptr() // lam12372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12373 = arg_buffer[1];
//reading env and args
void* a1202712238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env12373))[3];
//not do dummy comment
void* x = (decode_clo(env12373))[2];
//not do dummy comment
void* kont12116 = (decode_clo(env12373))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont12116;
arg_buffer[3] = x;
arg_buffer[4] = a1202712238;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12372 = encode_clo(alloc_clo(lam12372_fptr, 0));

void* lam12374_fptr() // lam12374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12375 = arg_buffer[1];
//reading env and args
void* a1202512235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12375))[5];
//not do dummy comment
void* lst = (decode_clo(env12375))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env12375))[3];
//not do dummy comment
void* x = (decode_clo(env12375))[2];
//not do dummy comment
void* kont12116 = (decode_clo(env12375))[1];

//if-clause
bool if_guard13064 = is_true(a1202512235);
if(if_guard13064)
{
void* x1202612236 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12116);
arg_buffer[2] = x1202612236;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12116))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13066 = alloc_clo(lam12372_fptr, 3);

//setting env list
clo13066[1] = kont12116;
clo13066[2] = x;
clo13066[3] = member_u63;
void* f1211712237 = encode_clo(clo13066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1211712237;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12374 = encode_clo(alloc_clo(lam12374_fptr, 0));

void* lam12376_fptr() // lam12376 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12377 = arg_buffer[1];
//reading env and args
void* a1202412233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12377))[6];
//not do dummy comment
void* lst = (decode_clo(env12377))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env12377))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env12377))[3];
//not do dummy comment
void* x = (decode_clo(env12377))[2];
//not do dummy comment
void* kont12116 = (decode_clo(env12377))[1];

//creating new closure instance
void** clo13068 = alloc_clo(lam12374_fptr, 5);

//setting env list
clo13068[1] = kont12116;
clo13068[2] = x;
clo13068[3] = member_u63;
clo13068[4] = lst;
clo13068[5] = cdr;
void* f1211812234 = encode_clo(clo13068);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1211812234;
arg_buffer[3] = a1202412233;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12376 = encode_clo(alloc_clo(lam12376_fptr, 0));

void* lam12378_fptr() // lam12378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12379 = arg_buffer[1];
//reading env and args
void* a1202212230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12379))[7];
//not do dummy comment
void* lst = (decode_clo(env12379))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env12379))[5];
//not do dummy comment
void* car = (decode_clo(env12379))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env12379))[3];
//not do dummy comment
void* x = (decode_clo(env12379))[2];
//not do dummy comment
void* kont12116 = (decode_clo(env12379))[1];

//if-clause
bool if_guard13069 = is_true(a1202212230);
if(if_guard13069)
{
void* x1202312231 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12116);
arg_buffer[2] = x1202312231;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12116))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13071 = alloc_clo(lam12376_fptr, 6);

//setting env list
clo13071[1] = kont12116;
clo13071[2] = x;
clo13071[3] = member_u63;
clo13071[4] = equal_u63;
clo13071[5] = lst;
clo13071[6] = cdr;
void* f1211912232 = encode_clo(clo13071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1211912232;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12378 = encode_clo(alloc_clo(lam12378_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12380 = arg_buffer[1];
//reading env and args
void* kont12116 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13073 = alloc_clo(lam12378_fptr, 7);

//setting env list
clo13073[1] = kont12116;
clo13073[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo13073[3] = member_u63;
clo13073[4] = car;
clo13073[5] = equal_u63;
clo13073[6] = lst;
clo13073[7] = cdr;
void* f1212012229 = encode_clo(clo13073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1212012229;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam12381_fptr() // lam12381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12382 = arg_buffer[1];
//reading env and args
void* a1203112246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12121 = (decode_clo(env12382))[4];
//not do dummy comment
void* fun = (decode_clo(env12382))[3];
//not do dummy comment
void* a1203012244 = (decode_clo(env12382))[2];
//not do dummy comment
void* foldl = (decode_clo(env12382))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont12121;
arg_buffer[3] = fun;
arg_buffer[4] = a1203012244;
arg_buffer[5] = a1203112246;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12381 = encode_clo(alloc_clo(lam12381_fptr, 0));

void* lam12383_fptr() // lam12383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12384 = arg_buffer[1];
//reading env and args
void* a1203012244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12384))[5];
//not do dummy comment
void* fun = (decode_clo(env12384))[4];
//not do dummy comment
void* foldl = (decode_clo(env12384))[3];
//not do dummy comment
void* cdr = (decode_clo(env12384))[2];
//not do dummy comment
void* kont12121 = (decode_clo(env12384))[1];

//creating new closure instance
void** clo13075 = alloc_clo(lam12381_fptr, 4);

//setting env list
clo13075[1] = foldl;
clo13075[2] = a1203012244;
clo13075[3] = fun;
clo13075[4] = kont12121;
void* f1212212245 = encode_clo(clo13075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1212212245;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12383 = encode_clo(alloc_clo(lam12383_fptr, 0));

void* lam12385_fptr() // lam12385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12386 = arg_buffer[1];
//reading env and args
void* a1202912242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12386))[6];
//not do dummy comment
void* fun = (decode_clo(env12386))[5];
//not do dummy comment
void* acc = (decode_clo(env12386))[4];
//not do dummy comment
void* foldl = (decode_clo(env12386))[3];
//not do dummy comment
void* cdr = (decode_clo(env12386))[2];
//not do dummy comment
void* kont12121 = (decode_clo(env12386))[1];

//creating new closure instance
void** clo13077 = alloc_clo(lam12383_fptr, 5);

//setting env list
clo13077[1] = kont12121;
clo13077[2] = cdr;
clo13077[3] = foldl;
clo13077[4] = fun;
clo13077[5] = lst;
void* f1212312243 = encode_clo(clo13077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1212312243;
arg_buffer[3] = a1202912242;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12385 = encode_clo(alloc_clo(lam12385_fptr, 0));

void* lam12387_fptr() // lam12387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12388 = arg_buffer[1];
//reading env and args
void* a1202812240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12388))[7];
//not do dummy comment
void* fun = (decode_clo(env12388))[6];
//not do dummy comment
void* acc = (decode_clo(env12388))[5];
//not do dummy comment
void* car = (decode_clo(env12388))[4];
//not do dummy comment
void* foldl = (decode_clo(env12388))[3];
//not do dummy comment
void* cdr = (decode_clo(env12388))[2];
//not do dummy comment
void* kont12121 = (decode_clo(env12388))[1];

//if-clause
bool if_guard13078 = is_true(a1202812240);
if(if_guard13078)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12121);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12121))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13080 = alloc_clo(lam12385_fptr, 6);

//setting env list
clo13080[1] = kont12121;
clo13080[2] = cdr;
clo13080[3] = foldl;
clo13080[4] = acc;
clo13080[5] = fun;
clo13080[6] = lst;
void* f1212412241 = encode_clo(clo13080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1212412241;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12387 = encode_clo(alloc_clo(lam12387_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12389 = arg_buffer[1];
//reading env and args
void* kont12121 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13082 = alloc_clo(lam12387_fptr, 7);

//setting env list
clo13082[1] = kont12121;
clo13082[2] = cdr;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo13082[3] = foldl;
clo13082[4] = car;
clo13082[5] = acc;
clo13082[6] = fun;
clo13082[7] = lst;
void* f1212512239 = encode_clo(clo13082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1212512239;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam12390_fptr() // lam12390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12391 = arg_buffer[1];
//reading env and args
void* a1203512254 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1203312250 = (decode_clo(env12391))[3];
//not do dummy comment
void* kont12126 = (decode_clo(env12391))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12391))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12126;
arg_buffer[3] = a1203312250;
arg_buffer[4] = a1203512254;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12390 = encode_clo(alloc_clo(lam12390_fptr, 0));

void* lam12392_fptr() // lam12392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12393 = arg_buffer[1];
//reading env and args
void* a1203412252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1203312250 = (decode_clo(env12393))[5];
//not do dummy comment
void* kont12126 = (decode_clo(env12393))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12393))[3];
//not do dummy comment
void* lst2 = (decode_clo(env12393))[2];
//not do dummy comment
void* cons = (decode_clo(env12393))[1];

//creating new closure instance
void** clo13084 = alloc_clo(lam12390_fptr, 3);

//setting env list
clo13084[1] = reverse_u45helper;
clo13084[2] = kont12126;
clo13084[3] = a1203312250;
void* f1212712253 = encode_clo(clo13084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1212712253;
arg_buffer[3] = a1203412252;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12392 = encode_clo(alloc_clo(lam12392_fptr, 0));

void* lam12394_fptr() // lam12394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12395 = arg_buffer[1];
//reading env and args
void* a1203312250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12395))[6];
//not do dummy comment
void* kont12126 = (decode_clo(env12395))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12395))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12395))[3];
//not do dummy comment
void* car = (decode_clo(env12395))[2];
//not do dummy comment
void* cons = (decode_clo(env12395))[1];

//creating new closure instance
void** clo13086 = alloc_clo(lam12392_fptr, 5);

//setting env list
clo13086[1] = cons;
clo13086[2] = lst2;
clo13086[3] = reverse_u45helper;
clo13086[4] = kont12126;
clo13086[5] = a1203312250;
void* f1212812251 = encode_clo(clo13086);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1212812251;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12394 = encode_clo(alloc_clo(lam12394_fptr, 0));

void* lam12396_fptr() // lam12396 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12397 = arg_buffer[1];
//reading env and args
void* a1203212248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12397))[7];
//not do dummy comment
void* lst = (decode_clo(env12397))[6];
//not do dummy comment
void* kont12126 = (decode_clo(env12397))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12397))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12397))[3];
//not do dummy comment
void* car = (decode_clo(env12397))[2];
//not do dummy comment
void* cons = (decode_clo(env12397))[1];

//if-clause
bool if_guard13087 = is_true(a1203212248);
if(if_guard13087)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12126);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12126))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13089 = alloc_clo(lam12394_fptr, 6);

//setting env list
clo13089[1] = cons;
clo13089[2] = car;
clo13089[3] = lst2;
clo13089[4] = reverse_u45helper;
clo13089[5] = kont12126;
clo13089[6] = lst;
void* f1212912249 = encode_clo(clo13089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1212912249;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12396 = encode_clo(alloc_clo(lam12396_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12398 = arg_buffer[1];
//reading env and args
void* kont12126 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13091 = alloc_clo(lam12396_fptr, 7);

//setting env list
clo13091[1] = cons;
clo13091[2] = car;
clo13091[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo13091[4] = reverse_u45helper;
clo13091[5] = kont12126;
clo13091[6] = lst;
clo13091[7] = cdr;
void* f1213012247 = encode_clo(clo13091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1213012247;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam12399_fptr() // lam12399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12400 = arg_buffer[1];
//reading env and args
void* a1203612256 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12400))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12400))[2];
//not do dummy comment
void* kont12131 = (decode_clo(env12400))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont12131;
arg_buffer[3] = lst;
arg_buffer[4] = a1203612256;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12399 = encode_clo(alloc_clo(lam12399_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12401 = arg_buffer[1];
//reading env and args
void* kont12131 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13093 = alloc_clo(lam12399_fptr, 3);

//setting env list
clo13093[1] = kont12131;
clo13093[2] = reverse_u45helper;
clo13093[3] = lst;
void* f1213212255 = encode_clo(clo13093);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1213212255;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam12402_fptr() // lam12402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12403 = arg_buffer[1];
//reading env and args
void* x1203912261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12133 = (decode_clo(env12403))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12133);
arg_buffer[2] = x1203912261;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12133))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12402 = encode_clo(alloc_clo(lam12402_fptr, 0));

void* lam12404_fptr() // lam12404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12405 = arg_buffer[1];
//reading env and args
void* a1204412270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1204212266 = (decode_clo(env12405))[4];
//not do dummy comment
void* a1204012263 = (decode_clo(env12405))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12405))[2];
//not do dummy comment
void* kont12133 = (decode_clo(env12405))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12133;
arg_buffer[3] = a1204012263;
arg_buffer[4] = a1204212266;
arg_buffer[5] = a1204412270;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12404 = encode_clo(alloc_clo(lam12404_fptr, 0));

void* lam12406_fptr() // lam12406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12407 = arg_buffer[1];
//reading env and args
void* a1204312268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1204212266 = (decode_clo(env12407))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env12407))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12407))[4];
//not do dummy comment
void* kont12133 = (decode_clo(env12407))[3];
//not do dummy comment
void* cons = (decode_clo(env12407))[2];
//not do dummy comment
void* a1204012263 = (decode_clo(env12407))[1];

//creating new closure instance
void** clo13095 = alloc_clo(lam12404_fptr, 4);

//setting env list
clo13095[1] = kont12133;
clo13095[2] = take_u45helper;
clo13095[3] = a1204012263;
clo13095[4] = a1204212266;
void* f1213512269 = encode_clo(clo13095);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1213512269;
arg_buffer[3] = a1204312268;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12406 = encode_clo(alloc_clo(lam12406_fptr, 0));

void* lam12408_fptr() // lam12408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12409 = arg_buffer[1];
//reading env and args
void* a1204212266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12409))[7];
//not do dummy comment
void* car = (decode_clo(env12409))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env12409))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12409))[4];
//not do dummy comment
void* kont12133 = (decode_clo(env12409))[3];
//not do dummy comment
void* cons = (decode_clo(env12409))[2];
//not do dummy comment
void* a1204012263 = (decode_clo(env12409))[1];

//creating new closure instance
void** clo13097 = alloc_clo(lam12406_fptr, 6);

//setting env list
clo13097[1] = a1204012263;
clo13097[2] = cons;
clo13097[3] = kont12133;
clo13097[4] = lst2;
clo13097[5] = take_u45helper;
clo13097[6] = a1204212266;
void* f1213612267 = encode_clo(clo13097);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1213612267;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12408 = encode_clo(alloc_clo(lam12408_fptr, 0));

void* lam12411_fptr() // lam12411 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12412 = arg_buffer[1];
//reading env and args
void* a1204012263 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12412))[8];
//not do dummy comment
void* cons = (decode_clo(env12412))[7];
//not do dummy comment
void* _u45 = (decode_clo(env12412))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env12412))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12412))[4];
//not do dummy comment
void* kont12133 = (decode_clo(env12412))[3];
//not do dummy comment
void* n = (decode_clo(env12412))[2];
//not do dummy comment
void* car = (decode_clo(env12412))[1];
mpz_t* mpzvar13098 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13098, "1", 10);
void* a1204112264 = encode_mpz(mpzvar13098);

//creating new closure instance
void** clo13100 = alloc_clo(lam12408_fptr, 7);

//setting env list
clo13100[1] = a1204012263;
clo13100[2] = cons;
clo13100[3] = kont12133;
clo13100[4] = lst2;
clo13100[5] = take_u45helper;
clo13100[6] = car;
clo13100[7] = lst;
void* f1213712265 = encode_clo(clo13100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1213712265;
arg_buffer[3] = n;
arg_buffer[4] = a1204112264;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12411 = encode_clo(alloc_clo(lam12411_fptr, 0));

void* lam12413_fptr() // lam12413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12414 = arg_buffer[1];
//reading env and args
void* a1203812259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12414))[10];
//not do dummy comment
void* lst = (decode_clo(env12414))[9];
//not do dummy comment
void* reverse = (decode_clo(env12414))[8];
//not do dummy comment
void* cons = (decode_clo(env12414))[7];
//not do dummy comment
void* _u45 = (decode_clo(env12414))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env12414))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12414))[4];
//not do dummy comment
void* kont12133 = (decode_clo(env12414))[3];
//not do dummy comment
void* n = (decode_clo(env12414))[2];
//not do dummy comment
void* car = (decode_clo(env12414))[1];

//if-clause
bool if_guard13101 = is_true(a1203812259);
if(if_guard13101)
{

//creating new closure instance
void** clo13103 = alloc_clo(lam12402_fptr, 1);

//setting env list
clo13103[1] = kont12133;
void* f1213412260 = encode_clo(clo13103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1213412260;
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
void** clo13105 = alloc_clo(lam12411_fptr, 8);

//setting env list
clo13105[1] = car;
clo13105[2] = n;
clo13105[3] = kont12133;
clo13105[4] = lst2;
clo13105[5] = take_u45helper;
clo13105[6] = _u45;
clo13105[7] = cons;
clo13105[8] = lst;
void* f1213812262 = encode_clo(clo13105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1213812262;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12413 = encode_clo(alloc_clo(lam12413_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12416 = arg_buffer[1];
//reading env and args
void* kont12133 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar13106 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13106, "0", 10);
void* a1203712257 = encode_mpz(mpzvar13106);

//creating new closure instance
void** clo13108 = alloc_clo(lam12413_fptr, 10);

//setting env list
clo13108[1] = car;
clo13108[2] = n;
clo13108[3] = kont12133;
clo13108[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo13108[5] = take_u45helper;
clo13108[6] = _u45;
clo13108[7] = cons;
clo13108[8] = reverse;
clo13108[9] = lst;
clo13108[10] = cdr;
void* f1213912258 = encode_clo(clo13108);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1213912258;
arg_buffer[3] = n;
arg_buffer[4] = a1203712257;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam12417_fptr() // lam12417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12418 = arg_buffer[1];
//reading env and args
void* a1204512272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12140 = (decode_clo(env12418))[4];
//not do dummy comment
void* lst = (decode_clo(env12418))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12418))[2];
//not do dummy comment
void* n = (decode_clo(env12418))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont12140;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1204512272;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12417 = encode_clo(alloc_clo(lam12417_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12419 = arg_buffer[1];
//reading env and args
void* kont12140 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13110 = alloc_clo(lam12417_fptr, 4);

//setting env list
clo13110[1] = n;
clo13110[2] = take_u45helper;
clo13110[3] = lst;
clo13110[4] = kont12140;
void* f1214112271 = encode_clo(clo13110);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1214112271;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam12421_fptr() // lam12421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12422 = arg_buffer[1];
//reading env and args
void* a1205012280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12142 = (decode_clo(env12422))[3];
//not do dummy comment
void* _u43 = (decode_clo(env12422))[2];
//not do dummy comment
void* a1204812276 = (decode_clo(env12422))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont12142;
arg_buffer[3] = a1204812276;
arg_buffer[4] = a1205012280;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12421 = encode_clo(alloc_clo(lam12421_fptr, 0));

void* lam12423_fptr() // lam12423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12424 = arg_buffer[1];
//reading env and args
void* a1204912278 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env12424))[4];
//not do dummy comment
void* a1204812276 = (decode_clo(env12424))[3];
//not do dummy comment
void* kont12142 = (decode_clo(env12424))[2];
//not do dummy comment
void* length = (decode_clo(env12424))[1];

//creating new closure instance
void** clo13112 = alloc_clo(lam12421_fptr, 3);

//setting env list
clo13112[1] = a1204812276;
clo13112[2] = _u43;
clo13112[3] = kont12142;
void* f1214312279 = encode_clo(clo13112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1214312279;
arg_buffer[3] = a1204912278;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12423 = encode_clo(alloc_clo(lam12423_fptr, 0));

void* lam12426_fptr() // lam12426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12427 = arg_buffer[1];
//reading env and args
void* a1204612274 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12427))[5];
//not do dummy comment
void* lst = (decode_clo(env12427))[4];
//not do dummy comment
void* _u43 = (decode_clo(env12427))[3];
//not do dummy comment
void* kont12142 = (decode_clo(env12427))[2];
//not do dummy comment
void* length = (decode_clo(env12427))[1];

//if-clause
bool if_guard13113 = is_true(a1204612274);
if(if_guard13113)
{
mpz_t* mpzvar13114 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13114, "0", 10);
void* x1204712275 = encode_mpz(mpzvar13114);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12142);
arg_buffer[2] = x1204712275;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12142))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar13115 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13115, "1", 10);
void* a1204812276 = encode_mpz(mpzvar13115);

//creating new closure instance
void** clo13117 = alloc_clo(lam12423_fptr, 4);

//setting env list
clo13117[1] = length;
clo13117[2] = kont12142;
clo13117[3] = a1204812276;
clo13117[4] = _u43;
void* f1214412277 = encode_clo(clo13117);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1214412277;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12426 = encode_clo(alloc_clo(lam12426_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12428 = arg_buffer[1];
//reading env and args
void* kont12142 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13119 = alloc_clo(lam12426_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo13119[1] = length;
clo13119[2] = kont12142;
clo13119[3] = _u43;
clo13119[4] = lst;
clo13119[5] = cdr;
void* f1214512273 = encode_clo(clo13119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1214512273;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam12429_fptr() // lam12429 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12430 = arg_buffer[1];
//reading env and args
void* x1205212284 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12146 = (decode_clo(env12430))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12146);
arg_buffer[2] = x1205212284;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12146))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12429 = encode_clo(alloc_clo(lam12429_fptr, 0));

void* lam12431_fptr() // lam12431 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12432 = arg_buffer[1];
//reading env and args
void* a1205612292 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1205412288 = (decode_clo(env12432))[3];
//not do dummy comment
void* kont12146 = (decode_clo(env12432))[2];
//not do dummy comment
void* cons = (decode_clo(env12432))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12146;
arg_buffer[3] = a1205412288;
arg_buffer[4] = a1205612292;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12431 = encode_clo(alloc_clo(lam12431_fptr, 0));

void* lam12433_fptr() // lam12433 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12434 = arg_buffer[1];
//reading env and args
void* a1205512290 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env12434))[5];
//not do dummy comment
void* a1205412288 = (decode_clo(env12434))[4];
//not do dummy comment
void* kont12146 = (decode_clo(env12434))[3];
//not do dummy comment
void* proc = (decode_clo(env12434))[2];
//not do dummy comment
void* cons = (decode_clo(env12434))[1];

//creating new closure instance
void** clo13121 = alloc_clo(lam12431_fptr, 3);

//setting env list
clo13121[1] = cons;
clo13121[2] = kont12146;
clo13121[3] = a1205412288;
void* f1214812291 = encode_clo(clo13121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1214812291;
arg_buffer[3] = proc;
arg_buffer[4] = a1205512290;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12433 = encode_clo(alloc_clo(lam12433_fptr, 0));

void* lam12435_fptr() // lam12435 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12436 = arg_buffer[1];
//reading env and args
void* a1205412288 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12436))[6];
//not do dummy comment
void* lst = (decode_clo(env12436))[5];
//not do dummy comment
void* map = (decode_clo(env12436))[4];
//not do dummy comment
void* kont12146 = (decode_clo(env12436))[3];
//not do dummy comment
void* proc = (decode_clo(env12436))[2];
//not do dummy comment
void* cons = (decode_clo(env12436))[1];

//creating new closure instance
void** clo13123 = alloc_clo(lam12433_fptr, 5);

//setting env list
clo13123[1] = cons;
clo13123[2] = proc;
clo13123[3] = kont12146;
clo13123[4] = a1205412288;
clo13123[5] = map;
void* f1214912289 = encode_clo(clo13123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1214912289;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12435 = encode_clo(alloc_clo(lam12435_fptr, 0));

void* lam12437_fptr() // lam12437 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12438 = arg_buffer[1];
//reading env and args
void* a1205312286 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12438))[6];
//not do dummy comment
void* lst = (decode_clo(env12438))[5];
//not do dummy comment
void* map = (decode_clo(env12438))[4];
//not do dummy comment
void* kont12146 = (decode_clo(env12438))[3];
//not do dummy comment
void* proc = (decode_clo(env12438))[2];
//not do dummy comment
void* cons = (decode_clo(env12438))[1];

//creating new closure instance
void** clo13125 = alloc_clo(lam12435_fptr, 6);

//setting env list
clo13125[1] = cons;
clo13125[2] = proc;
clo13125[3] = kont12146;
clo13125[4] = map;
clo13125[5] = lst;
clo13125[6] = cdr;
void* f1215012287 = encode_clo(clo13125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1215012287;
arg_buffer[3] = a1205312286;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12437 = encode_clo(alloc_clo(lam12437_fptr, 0));

void* lam12439_fptr() // lam12439 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12440 = arg_buffer[1];
//reading env and args
void* a1205112282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12440))[8];
//not do dummy comment
void* map = (decode_clo(env12440))[7];
//not do dummy comment
void* kont12146 = (decode_clo(env12440))[6];
//not do dummy comment
void* proc = (decode_clo(env12440))[5];
//not do dummy comment
void* car = (decode_clo(env12440))[4];
//not do dummy comment
void* cons = (decode_clo(env12440))[3];
//not do dummy comment
void* list = (decode_clo(env12440))[2];
//not do dummy comment
void* cdr = (decode_clo(env12440))[1];

//if-clause
bool if_guard13126 = is_true(a1205112282);
if(if_guard13126)
{

//creating new closure instance
void** clo13128 = alloc_clo(lam12429_fptr, 1);

//setting env list
clo13128[1] = kont12146;
void* f1214712283 = encode_clo(clo13128);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1214712283;
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
void** clo13130 = alloc_clo(lam12437_fptr, 6);

//setting env list
clo13130[1] = cons;
clo13130[2] = proc;
clo13130[3] = kont12146;
clo13130[4] = map;
clo13130[5] = lst;
clo13130[6] = cdr;
void* f1215112285 = encode_clo(clo13130);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1215112285;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12439 = encode_clo(alloc_clo(lam12439_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12441 = arg_buffer[1];
//reading env and args
void* kont12146 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13132 = alloc_clo(lam12439_fptr, 8);

//setting env list
clo13132[1] = cdr;
clo13132[2] = list;
clo13132[3] = cons;
clo13132[4] = car;
clo13132[5] = proc;
clo13132[6] = kont12146;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo13132[7] = map;
clo13132[8] = lst;
void* f1215212281 = encode_clo(clo13132);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1215212281;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam12442_fptr() // lam12442 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12443 = arg_buffer[1];
//reading env and args
void* x1205812296 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12153 = (decode_clo(env12443))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12153);
arg_buffer[2] = x1205812296;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12153))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12442 = encode_clo(alloc_clo(lam12442_fptr, 0));

void* lam12444_fptr() // lam12444 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12445 = arg_buffer[1];
//reading env and args
void* a1206312306 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12153 = (decode_clo(env12445))[3];
//not do dummy comment
void* a1206112302 = (decode_clo(env12445))[2];
//not do dummy comment
void* cons = (decode_clo(env12445))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12153;
arg_buffer[3] = a1206112302;
arg_buffer[4] = a1206312306;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12444 = encode_clo(alloc_clo(lam12444_fptr, 0));

void* lam12446_fptr() // lam12446 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12447 = arg_buffer[1];
//reading env and args
void* a1206212304 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12153 = (decode_clo(env12447))[5];
//not do dummy comment
void* a1206112302 = (decode_clo(env12447))[4];
//not do dummy comment
void* op = (decode_clo(env12447))[3];
//not do dummy comment
void* filter = (decode_clo(env12447))[2];
//not do dummy comment
void* cons = (decode_clo(env12447))[1];

//creating new closure instance
void** clo13134 = alloc_clo(lam12444_fptr, 3);

//setting env list
clo13134[1] = cons;
clo13134[2] = a1206112302;
clo13134[3] = kont12153;
void* f1215512305 = encode_clo(clo13134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1215512305;
arg_buffer[3] = op;
arg_buffer[4] = a1206212304;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12446 = encode_clo(alloc_clo(lam12446_fptr, 0));

void* lam12448_fptr() // lam12448 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12449 = arg_buffer[1];
//reading env and args
void* a1206112302 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12449))[6];
//not do dummy comment
void* op = (decode_clo(env12449))[5];
//not do dummy comment
void* filter = (decode_clo(env12449))[4];
//not do dummy comment
void* cons = (decode_clo(env12449))[3];
//not do dummy comment
void* kont12153 = (decode_clo(env12449))[2];
//not do dummy comment
void* cdr = (decode_clo(env12449))[1];

//creating new closure instance
void** clo13136 = alloc_clo(lam12446_fptr, 5);

//setting env list
clo13136[1] = cons;
clo13136[2] = filter;
clo13136[3] = op;
clo13136[4] = a1206112302;
clo13136[5] = kont12153;
void* f1215612303 = encode_clo(clo13136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1215612303;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12448 = encode_clo(alloc_clo(lam12448_fptr, 0));

void* lam12450_fptr() // lam12450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12451 = arg_buffer[1];
//reading env and args
void* a1206412308 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12153 = (decode_clo(env12451))[3];
//not do dummy comment
void* op = (decode_clo(env12451))[2];
//not do dummy comment
void* filter = (decode_clo(env12451))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont12153;
arg_buffer[3] = op;
arg_buffer[4] = a1206412308;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12450 = encode_clo(alloc_clo(lam12450_fptr, 0));

void* lam12452_fptr() // lam12452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12453 = arg_buffer[1];
//reading env and args
void* a1206012300 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12453))[7];
//not do dummy comment
void* op = (decode_clo(env12453))[6];
//not do dummy comment
void* cons = (decode_clo(env12453))[5];
//not do dummy comment
void* kont12153 = (decode_clo(env12453))[4];
//not do dummy comment
void* cdr = (decode_clo(env12453))[3];
//not do dummy comment
void* filter = (decode_clo(env12453))[2];
//not do dummy comment
void* car = (decode_clo(env12453))[1];

//if-clause
bool if_guard13137 = is_true(a1206012300);
if(if_guard13137)
{

//creating new closure instance
void** clo13139 = alloc_clo(lam12448_fptr, 6);

//setting env list
clo13139[1] = cdr;
clo13139[2] = kont12153;
clo13139[3] = cons;
clo13139[4] = filter;
clo13139[5] = op;
clo13139[6] = lst;
void* f1215712301 = encode_clo(clo13139);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1215712301;
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
void** clo13141 = alloc_clo(lam12450_fptr, 3);

//setting env list
clo13141[1] = filter;
clo13141[2] = op;
clo13141[3] = kont12153;
void* f1215812307 = encode_clo(clo13141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1215812307;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12452 = encode_clo(alloc_clo(lam12452_fptr, 0));

void* lam12454_fptr() // lam12454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12455 = arg_buffer[1];
//reading env and args
void* a1205912298 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12455))[7];
//not do dummy comment
void* op = (decode_clo(env12455))[6];
//not do dummy comment
void* cons = (decode_clo(env12455))[5];
//not do dummy comment
void* kont12153 = (decode_clo(env12455))[4];
//not do dummy comment
void* cdr = (decode_clo(env12455))[3];
//not do dummy comment
void* filter = (decode_clo(env12455))[2];
//not do dummy comment
void* car = (decode_clo(env12455))[1];

//creating new closure instance
void** clo13143 = alloc_clo(lam12452_fptr, 7);

//setting env list
clo13143[1] = car;
clo13143[2] = filter;
clo13143[3] = cdr;
clo13143[4] = kont12153;
clo13143[5] = cons;
clo13143[6] = op;
clo13143[7] = lst;
void* f1215912299 = encode_clo(clo13143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1215912299;
arg_buffer[3] = a1205912298;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12454 = encode_clo(alloc_clo(lam12454_fptr, 0));

void* lam12456_fptr() // lam12456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12457 = arg_buffer[1];
//reading env and args
void* a1205712294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12457))[8];
//not do dummy comment
void* op = (decode_clo(env12457))[7];
//not do dummy comment
void* cons = (decode_clo(env12457))[6];
//not do dummy comment
void* kont12153 = (decode_clo(env12457))[5];
//not do dummy comment
void* list = (decode_clo(env12457))[4];
//not do dummy comment
void* cdr = (decode_clo(env12457))[3];
//not do dummy comment
void* filter = (decode_clo(env12457))[2];
//not do dummy comment
void* car = (decode_clo(env12457))[1];

//if-clause
bool if_guard13144 = is_true(a1205712294);
if(if_guard13144)
{

//creating new closure instance
void** clo13146 = alloc_clo(lam12442_fptr, 1);

//setting env list
clo13146[1] = kont12153;
void* f1215412295 = encode_clo(clo13146);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1215412295;
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
void** clo13148 = alloc_clo(lam12454_fptr, 7);

//setting env list
clo13148[1] = car;
clo13148[2] = filter;
clo13148[3] = cdr;
clo13148[4] = kont12153;
clo13148[5] = cons;
clo13148[6] = op;
clo13148[7] = lst;
void* f1216012297 = encode_clo(clo13148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1216012297;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12456 = encode_clo(alloc_clo(lam12456_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12458 = arg_buffer[1];
//reading env and args
void* kont12153 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13150 = alloc_clo(lam12456_fptr, 8);

//setting env list
clo13150[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo13150[2] = filter;
clo13150[3] = cdr;
clo13150[4] = list;
clo13150[5] = kont12153;
clo13150[6] = cons;
clo13150[7] = op;
clo13150[8] = lst;
void* f1216112293 = encode_clo(clo13150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1216112293;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam12459_fptr() // lam12459 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12460 = arg_buffer[1];
//reading env and args
void* a1206912316 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1206712313 = (decode_clo(env12460))[3];
//not do dummy comment
void* drop = (decode_clo(env12460))[2];
//not do dummy comment
void* kont12162 = (decode_clo(env12460))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont12162;
arg_buffer[3] = a1206712313;
arg_buffer[4] = a1206912316;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12459 = encode_clo(alloc_clo(lam12459_fptr, 0));

void* lam12462_fptr() // lam12462 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12463 = arg_buffer[1];
//reading env and args
void* a1206712313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12463))[4];
//not do dummy comment
void* kont12162 = (decode_clo(env12463))[3];
//not do dummy comment
void* n = (decode_clo(env12463))[2];
//not do dummy comment
void* _u45 = (decode_clo(env12463))[1];
mpz_t* mpzvar13151 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13151, "1", 10);
void* a1206812314 = encode_mpz(mpzvar13151);

//creating new closure instance
void** clo13153 = alloc_clo(lam12459_fptr, 3);

//setting env list
clo13153[1] = kont12162;
clo13153[2] = drop;
clo13153[3] = a1206712313;
void* f1216312315 = encode_clo(clo13153);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1216312315;
arg_buffer[3] = n;
arg_buffer[4] = a1206812314;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12462 = encode_clo(alloc_clo(lam12462_fptr, 0));

void* lam12464_fptr() // lam12464 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12465 = arg_buffer[1];
//reading env and args
void* a1206612311 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12465))[6];
//not do dummy comment
void* kont12162 = (decode_clo(env12465))[5];
//not do dummy comment
void* n = (decode_clo(env12465))[4];
//not do dummy comment
void* _u45 = (decode_clo(env12465))[3];
//not do dummy comment
void* lst = (decode_clo(env12465))[2];
//not do dummy comment
void* drop = (decode_clo(env12465))[1];

//if-clause
bool if_guard13154 = is_true(a1206612311);
if(if_guard13154)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12162);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12162))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13156 = alloc_clo(lam12462_fptr, 4);

//setting env list
clo13156[1] = _u45;
clo13156[2] = n;
clo13156[3] = kont12162;
clo13156[4] = drop;
void* f1216412312 = encode_clo(clo13156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1216412312;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12464 = encode_clo(alloc_clo(lam12464_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12467 = arg_buffer[1];
//reading env and args
void* kont12162 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar13157 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13157, "0", 10);
void* a1206512309 = encode_mpz(mpzvar13157);

//creating new closure instance
void** clo13159 = alloc_clo(lam12464_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo13159[1] = drop;
clo13159[2] = lst;
clo13159[3] = _u45;
clo13159[4] = n;
clo13159[5] = kont12162;
clo13159[6] = cdr;
void* f1216512310 = encode_clo(clo13159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1216512310;
arg_buffer[3] = n;
arg_buffer[4] = a1206512309;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam12468_fptr() // lam12468 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12469 = arg_buffer[1];
//reading env and args
void* a1207312324 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1207112320 = (decode_clo(env12469))[3];
//not do dummy comment
void* proc = (decode_clo(env12469))[2];
//not do dummy comment
void* kont12166 = (decode_clo(env12469))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont12166;
arg_buffer[3] = a1207112320;
arg_buffer[4] = a1207312324;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12468 = encode_clo(alloc_clo(lam12468_fptr, 0));

void* lam12470_fptr() // lam12470 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12471 = arg_buffer[1];
//reading env and args
void* a1207212322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env12471))[5];
//not do dummy comment
void* a1207112320 = (decode_clo(env12471))[4];
//not do dummy comment
void* kont12166 = (decode_clo(env12471))[3];
//not do dummy comment
void* proc = (decode_clo(env12471))[2];
//not do dummy comment
void* acc = (decode_clo(env12471))[1];

//creating new closure instance
void** clo13161 = alloc_clo(lam12468_fptr, 3);

//setting env list
clo13161[1] = kont12166;
clo13161[2] = proc;
clo13161[3] = a1207112320;
void* f1216712323 = encode_clo(clo13161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1216712323;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1207212322;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12470 = encode_clo(alloc_clo(lam12470_fptr, 0));

void* lam12472_fptr() // lam12472 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12473 = arg_buffer[1];
//reading env and args
void* a1207112320 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12473))[6];
//not do dummy comment
void* kont12166 = (decode_clo(env12473))[5];
//not do dummy comment
void* foldr = (decode_clo(env12473))[4];
//not do dummy comment
void* lst = (decode_clo(env12473))[3];
//not do dummy comment
void* proc = (decode_clo(env12473))[2];
//not do dummy comment
void* acc = (decode_clo(env12473))[1];

//creating new closure instance
void** clo13163 = alloc_clo(lam12470_fptr, 5);

//setting env list
clo13163[1] = acc;
clo13163[2] = proc;
clo13163[3] = kont12166;
clo13163[4] = a1207112320;
clo13163[5] = foldr;
void* f1216812321 = encode_clo(clo13163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1216812321;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12472 = encode_clo(alloc_clo(lam12472_fptr, 0));

void* lam12474_fptr() // lam12474 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12475 = arg_buffer[1];
//reading env and args
void* a1207012318 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12475))[7];
//not do dummy comment
void* foldr = (decode_clo(env12475))[6];
//not do dummy comment
void* lst = (decode_clo(env12475))[5];
//not do dummy comment
void* proc = (decode_clo(env12475))[4];
//not do dummy comment
void* acc = (decode_clo(env12475))[3];
//not do dummy comment
void* kont12166 = (decode_clo(env12475))[2];
//not do dummy comment
void* car = (decode_clo(env12475))[1];

//if-clause
bool if_guard13164 = is_true(a1207012318);
if(if_guard13164)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12166);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12166))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13166 = alloc_clo(lam12472_fptr, 6);

//setting env list
clo13166[1] = acc;
clo13166[2] = proc;
clo13166[3] = lst;
clo13166[4] = foldr;
clo13166[5] = kont12166;
clo13166[6] = cdr;
void* f1216912319 = encode_clo(clo13166);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1216912319;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12474 = encode_clo(alloc_clo(lam12474_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12476 = arg_buffer[1];
//reading env and args
void* kont12166 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13168 = alloc_clo(lam12474_fptr, 7);

//setting env list
clo13168[1] = car;
clo13168[2] = kont12166;
clo13168[3] = acc;
clo13168[4] = proc;
clo13168[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo13168[6] = foldr;
clo13168[7] = cdr;
void* f1217012317 = encode_clo(clo13168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1217012317;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam12477_fptr() // lam12477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12478 = arg_buffer[1];
//reading env and args
void* a1207712332 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12171 = (decode_clo(env12478))[3];
//not do dummy comment
void* cons = (decode_clo(env12478))[2];
//not do dummy comment
void* a1207512328 = (decode_clo(env12478))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12171;
arg_buffer[3] = a1207512328;
arg_buffer[4] = a1207712332;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12477 = encode_clo(alloc_clo(lam12477_fptr, 0));

void* lam12479_fptr() // lam12479 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12480 = arg_buffer[1];
//reading env and args
void* a1207612330 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12171 = (decode_clo(env12480))[5];
//not do dummy comment
void* append = (decode_clo(env12480))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12480))[3];
//not do dummy comment
void* cons = (decode_clo(env12480))[2];
//not do dummy comment
void* a1207512328 = (decode_clo(env12480))[1];

//creating new closure instance
void** clo13170 = alloc_clo(lam12477_fptr, 3);

//setting env list
clo13170[1] = a1207512328;
clo13170[2] = cons;
clo13170[3] = kont12171;
void* f1217212331 = encode_clo(clo13170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1217212331;
arg_buffer[3] = a1207612330;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12479 = encode_clo(alloc_clo(lam12479_fptr, 0));

void* lam12481_fptr() // lam12481 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12482 = arg_buffer[1];
//reading env and args
void* a1207512328 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12482))[6];
//not do dummy comment
void* kont12171 = (decode_clo(env12482))[5];
//not do dummy comment
void* append = (decode_clo(env12482))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12482))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12482))[2];
//not do dummy comment
void* cons = (decode_clo(env12482))[1];

//creating new closure instance
void** clo13172 = alloc_clo(lam12479_fptr, 5);

//setting env list
clo13172[1] = a1207512328;
clo13172[2] = cons;
clo13172[3] = lst2;
clo13172[4] = append;
clo13172[5] = kont12171;
void* f1217312329 = encode_clo(clo13172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1217312329;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12481 = encode_clo(alloc_clo(lam12481_fptr, 0));

void* lam12483_fptr() // lam12483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12484 = arg_buffer[1];
//reading env and args
void* a1207412326 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12484))[7];
//not do dummy comment
void* kont12171 = (decode_clo(env12484))[6];
//not do dummy comment
void* append = (decode_clo(env12484))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12484))[4];
//not do dummy comment
void* cons = (decode_clo(env12484))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12484))[2];
//not do dummy comment
void* car = (decode_clo(env12484))[1];

//if-clause
bool if_guard13173 = is_true(a1207412326);
if(if_guard13173)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12171);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12171))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13175 = alloc_clo(lam12481_fptr, 6);

//setting env list
clo13175[1] = cons;
clo13175[2] = lst1;
clo13175[3] = lst2;
clo13175[4] = append;
clo13175[5] = kont12171;
clo13175[6] = cdr;
void* f1217412327 = encode_clo(clo13175);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1217412327;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12483 = encode_clo(alloc_clo(lam12483_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12485 = arg_buffer[1];
//reading env and args
void* kont12171 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13177 = alloc_clo(lam12483_fptr, 7);

//setting env list
clo13177[1] = car;
clo13177[2] = lst1;
clo13177[3] = cons;
clo13177[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo13177[5] = append;
clo13177[6] = kont12171;
clo13177[7] = cdr;
void* f1217512325 = encode_clo(clo13177);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1217512325;
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
void* _12486 = arg_buffer[1];
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

void* kont1217612333 = prim_car(lst);
void* lst12334 = prim_cdr(lst);
void* x1207812335 = apply_prim_hash(lst12334);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1217612333);
arg_buffer[2] = x1207812335;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1217612333))[0]);
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
void* _12487 = arg_buffer[1];
//reading env and args
void* kont12178 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1207912336 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12178);
arg_buffer[2] = x1207912336;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12178))[0]);
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
void* _12488 = arg_buffer[1];
//reading env and args
void* kont12179 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1208012337 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12179);
arg_buffer[2] = x1208012337;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12179))[0]);
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
void* _12489 = arg_buffer[1];
//reading env and args
void* kont12180 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1208112338 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12180);
arg_buffer[2] = x1208112338;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12180))[0]);
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
void* _12490 = arg_buffer[1];
//reading env and args
void* kont12181 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1208212339 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12181);
arg_buffer[2] = x1208212339;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12181))[0]);
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
void* _12492 = arg_buffer[1];
//reading env and args
void* kont12182 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar13178 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13178, "5", 10);
void* a1208312340 = encode_mpz(mpzvar13178);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont12182;
arg_buffer[3] = a1208312340;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam12493_fptr() // lam12493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12494 = arg_buffer[1];
//reading env and args
void* x1208412342 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12183 = (decode_clo(env12494))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12183);
arg_buffer[2] = x1208412342;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12183))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12493 = encode_clo(alloc_clo(lam12493_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12495 = arg_buffer[1];
//reading env and args
void* kont12183 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo13180 = alloc_clo(lam12493_fptr, 1);

//setting env list
clo13180[1] = kont12183;
void* f1218412341 = encode_clo(clo13180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1218412341;
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

