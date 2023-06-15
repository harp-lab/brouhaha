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
void* _50364 = arg_buffer[1];
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

void* kont5009450196 = prim_car(lst);
void* lst50197 = prim_cdr(lst);
void* x5000150198 = apply_prim__u43(lst50197);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5009450196);
arg_buffer[2] = x5000150198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5009450196))[0]);
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
void* _50365 = arg_buffer[1];
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

void* kont5009650199 = prim_car(lst);
void* lst50200 = prim_cdr(lst);
void* x5000250201 = apply_prim__u45(lst50200);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5009650199);
arg_buffer[2] = x5000250201;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5009650199))[0]);
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
void* _50366 = arg_buffer[1];
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

void* kont5009850202 = prim_car(lst);
void* lst50203 = prim_cdr(lst);
void* x5000350204 = apply_prim__u42(lst50203);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5009850202);
arg_buffer[2] = x5000350204;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5009850202))[0]);
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
void* _50367 = arg_buffer[1];
//reading env and args
void* kont50100 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5000450205 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50100);
arg_buffer[2] = x5000450205;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50100))[0]);
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
void* _50368 = arg_buffer[1];
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

void* kont5010150206 = prim_car(lst);
void* lst50207 = prim_cdr(lst);
void* x5000550208 = apply_prim__u47(lst50207);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5010150206);
arg_buffer[2] = x5000550208;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5010150206))[0]);
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
void* _50369 = arg_buffer[1];
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

void* kont5010350209 = prim_car(lst);
void* lst50210 = prim_cdr(lst);
void* x5000650211 = apply_prim__u61(lst50210);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5010350209);
arg_buffer[2] = x5000650211;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5010350209))[0]);
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
void* _50370 = arg_buffer[1];
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

void* kont5010550212 = prim_car(lst);
void* lst50213 = prim_cdr(lst);
void* x5000750214 = apply_prim__u62(lst50213);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5010550212);
arg_buffer[2] = x5000750214;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5010550212))[0]);
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
void* _50371 = arg_buffer[1];
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

void* kont5010750215 = prim_car(lst);
void* lst50216 = prim_cdr(lst);
void* x5000850217 = apply_prim__u60(lst50216);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5010750215);
arg_buffer[2] = x5000850217;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5010750215))[0]);
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
void* _50372 = arg_buffer[1];
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

void* kont5010950218 = prim_car(lst);
void* lst50219 = prim_cdr(lst);
void* x5000950220 = apply_prim__u60_u61(lst50219);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5010950218);
arg_buffer[2] = x5000950220;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5010950218))[0]);
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
void* _50373 = arg_buffer[1];
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

void* kont5011150221 = prim_car(lst);
void* lst50222 = prim_cdr(lst);
void* x5001050223 = apply_prim__u62_u61(lst50222);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5011150221);
arg_buffer[2] = x5001050223;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5011150221))[0]);
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
void* _50374 = arg_buffer[1];
//reading env and args
void* kont50113 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5001150224 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50113);
arg_buffer[2] = x5001150224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50113))[0]);
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
void* _50375 = arg_buffer[1];
//reading env and args
void* kont50114 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5001250225 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50114);
arg_buffer[2] = x5001250225;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50114))[0]);
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
void* _50376 = arg_buffer[1];
//reading env and args
void* kont50115 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5001350226 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50115);
arg_buffer[2] = x5001350226;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50115))[0]);
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
void* _50377 = arg_buffer[1];
//reading env and args
void* kont50116 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5001450227 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50116);
arg_buffer[2] = x5001450227;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50116))[0]);
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
void* _50378 = arg_buffer[1];
//reading env and args
void* kont50117 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5001550228 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50117);
arg_buffer[2] = x5001550228;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50117))[0]);
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
void* _50379 = arg_buffer[1];
//reading env and args
void* kont50118 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5001650229 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50118);
arg_buffer[2] = x5001650229;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50118))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam50380_fptr() // lam50380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50381 = arg_buffer[1];
//reading env and args
void* a5001950233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5001750230 = (decode_clo(env50381))[3];
//not do dummy comment
void* kont50119 = (decode_clo(env50381))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env50381))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50119;
arg_buffer[3] = a5001750230;
arg_buffer[4] = a5001950233;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50380 = encode_clo(alloc_clo(lam50380_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50384 = arg_buffer[1];
//reading env and args
void* kont50119 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar51927 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51927, "0", 10);
void* a5001750230 = encode_mpz(mpzvar51927);
mpz_t* mpzvar51928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51928, "2", 10);
void* a5001850231 = encode_mpz(mpzvar51928);

//creating new closure instance
void** clo51930 = alloc_clo(lam50380_fptr, 3);

//setting env list
clo51930[1] = equal_u63;
clo51930[2] = kont50119;
clo51930[3] = a5001750230;
void* f5012050232 = encode_clo(clo51930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5012050232;
arg_buffer[3] = x;
arg_buffer[4] = a5001850231;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam50385_fptr() // lam50385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50386 = arg_buffer[1];
//reading env and args
void* a5002250237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env50386))[3];
//not do dummy comment
void* kont50121 = (decode_clo(env50386))[2];
//not do dummy comment
void* a5002050234 = (decode_clo(env50386))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50121;
arg_buffer[3] = a5002050234;
arg_buffer[4] = a5002250237;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50385 = encode_clo(alloc_clo(lam50385_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50389 = arg_buffer[1];
//reading env and args
void* kont50121 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar51931 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51931, "1", 10);
void* a5002050234 = encode_mpz(mpzvar51931);
mpz_t* mpzvar51932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51932, "2", 10);
void* a5002150235 = encode_mpz(mpzvar51932);

//creating new closure instance
void** clo51934 = alloc_clo(lam50385_fptr, 3);

//setting env list
clo51934[1] = a5002050234;
clo51934[2] = kont50121;
clo51934[3] = equal_u63;
void* f5012250236 = encode_clo(clo51934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5012250236;
arg_buffer[3] = x;
arg_buffer[4] = a5002150235;
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
void* _50390 = arg_buffer[1];
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

void* kont5012350238 = prim_car(x);
void* x50239 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5012350238);
arg_buffer[2] = x50239;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5012350238))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam50393_fptr() // lam50393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50394 = arg_buffer[1];
//reading env and args
void* a5002850249 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env50394))[3];
//not do dummy comment
void* kont50125 = (decode_clo(env50394))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50394))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont50125;
arg_buffer[3] = x;
arg_buffer[4] = a5002850249;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50393 = encode_clo(alloc_clo(lam50393_fptr, 0));

void* lam50395_fptr() // lam50395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50396 = arg_buffer[1];
//reading env and args
void* a5002650246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50396))[5];
//not do dummy comment
void* lst = (decode_clo(env50396))[4];
//not do dummy comment
void* x = (decode_clo(env50396))[3];
//not do dummy comment
void* kont50125 = (decode_clo(env50396))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50396))[1];

//if-clause
bool if_guard51935 = is_true(a5002650246);
if(if_guard51935)
{
void* x5002750247 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50125);
arg_buffer[2] = x5002750247;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50125))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51937 = alloc_clo(lam50393_fptr, 3);

//setting env list
clo51937[1] = member_u63;
clo51937[2] = kont50125;
clo51937[3] = x;
void* f5012650248 = encode_clo(clo51937);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5012650248;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50395 = encode_clo(alloc_clo(lam50395_fptr, 0));

void* lam50397_fptr() // lam50397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50398 = arg_buffer[1];
//reading env and args
void* a5002550244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50398))[6];
//not do dummy comment
void* lst = (decode_clo(env50398))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env50398))[4];
//not do dummy comment
void* x = (decode_clo(env50398))[3];
//not do dummy comment
void* kont50125 = (decode_clo(env50398))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env50398))[1];

//creating new closure instance
void** clo51939 = alloc_clo(lam50395_fptr, 5);

//setting env list
clo51939[1] = member_u63;
clo51939[2] = kont50125;
clo51939[3] = x;
clo51939[4] = lst;
clo51939[5] = cdr;
void* f5012750245 = encode_clo(clo51939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5012750245;
arg_buffer[3] = a5002550244;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50397 = encode_clo(alloc_clo(lam50397_fptr, 0));

void* lam50399_fptr() // lam50399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50400 = arg_buffer[1];
//reading env and args
void* a5002350241 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50400))[7];
//not do dummy comment
void* lst = (decode_clo(env50400))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env50400))[5];
//not do dummy comment
void* x = (decode_clo(env50400))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env50400))[3];
//not do dummy comment
void* kont50125 = (decode_clo(env50400))[2];
//not do dummy comment
void* car = (decode_clo(env50400))[1];

//if-clause
bool if_guard51940 = is_true(a5002350241);
if(if_guard51940)
{
void* x5002450242 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50125);
arg_buffer[2] = x5002450242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50125))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51942 = alloc_clo(lam50397_fptr, 6);

//setting env list
clo51942[1] = member_u63;
clo51942[2] = kont50125;
clo51942[3] = x;
clo51942[4] = equal_u63;
clo51942[5] = lst;
clo51942[6] = cdr;
void* f5012850243 = encode_clo(clo51942);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5012850243;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50399 = encode_clo(alloc_clo(lam50399_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50401 = arg_buffer[1];
//reading env and args
void* kont50125 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51944 = alloc_clo(lam50399_fptr, 7);

//setting env list
clo51944[1] = car;
clo51944[2] = kont50125;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo51944[3] = member_u63;
clo51944[4] = x;
clo51944[5] = equal_u63;
clo51944[6] = lst;
clo51944[7] = cdr;
void* f5012950240 = encode_clo(clo51944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5012950240;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam50402_fptr() // lam50402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50403 = arg_buffer[1];
//reading env and args
void* a5003250257 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50130 = (decode_clo(env50403))[4];
//not do dummy comment
void* fun = (decode_clo(env50403))[3];
//not do dummy comment
void* foldl = (decode_clo(env50403))[2];
//not do dummy comment
void* a5003150255 = (decode_clo(env50403))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont50130;
arg_buffer[3] = fun;
arg_buffer[4] = a5003150255;
arg_buffer[5] = a5003250257;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50402 = encode_clo(alloc_clo(lam50402_fptr, 0));

void* lam50404_fptr() // lam50404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50405 = arg_buffer[1];
//reading env and args
void* a5003150255 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50405))[5];
//not do dummy comment
void* kont50130 = (decode_clo(env50405))[4];
//not do dummy comment
void* lst = (decode_clo(env50405))[3];
//not do dummy comment
void* fun = (decode_clo(env50405))[2];
//not do dummy comment
void* foldl = (decode_clo(env50405))[1];

//creating new closure instance
void** clo51946 = alloc_clo(lam50402_fptr, 4);

//setting env list
clo51946[1] = a5003150255;
clo51946[2] = foldl;
clo51946[3] = fun;
clo51946[4] = kont50130;
void* f5013150256 = encode_clo(clo51946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5013150256;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50404 = encode_clo(alloc_clo(lam50404_fptr, 0));

void* lam50406_fptr() // lam50406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50407 = arg_buffer[1];
//reading env and args
void* a5003050253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50407))[6];
//not do dummy comment
void* kont50130 = (decode_clo(env50407))[5];
//not do dummy comment
void* lst = (decode_clo(env50407))[4];
//not do dummy comment
void* fun = (decode_clo(env50407))[3];
//not do dummy comment
void* acc = (decode_clo(env50407))[2];
//not do dummy comment
void* foldl = (decode_clo(env50407))[1];

//creating new closure instance
void** clo51948 = alloc_clo(lam50404_fptr, 5);

//setting env list
clo51948[1] = foldl;
clo51948[2] = fun;
clo51948[3] = lst;
clo51948[4] = kont50130;
clo51948[5] = cdr;
void* f5013250254 = encode_clo(clo51948);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5013250254;
arg_buffer[3] = a5003050253;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50406 = encode_clo(alloc_clo(lam50406_fptr, 0));

void* lam50408_fptr() // lam50408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50409 = arg_buffer[1];
//reading env and args
void* a5002950251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50409))[7];
//not do dummy comment
void* kont50130 = (decode_clo(env50409))[6];
//not do dummy comment
void* lst = (decode_clo(env50409))[5];
//not do dummy comment
void* fun = (decode_clo(env50409))[4];
//not do dummy comment
void* acc = (decode_clo(env50409))[3];
//not do dummy comment
void* car = (decode_clo(env50409))[2];
//not do dummy comment
void* foldl = (decode_clo(env50409))[1];

//if-clause
bool if_guard51949 = is_true(a5002950251);
if(if_guard51949)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50130);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50130))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51951 = alloc_clo(lam50406_fptr, 6);

//setting env list
clo51951[1] = foldl;
clo51951[2] = acc;
clo51951[3] = fun;
clo51951[4] = lst;
clo51951[5] = kont50130;
clo51951[6] = cdr;
void* f5013350252 = encode_clo(clo51951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5013350252;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50408 = encode_clo(alloc_clo(lam50408_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50410 = arg_buffer[1];
//reading env and args
void* kont50130 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo51953 = alloc_clo(lam50408_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo51953[1] = foldl;
clo51953[2] = car;
clo51953[3] = acc;
clo51953[4] = fun;
clo51953[5] = lst;
clo51953[6] = kont50130;
clo51953[7] = cdr;
void* f5013450250 = encode_clo(clo51953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5013450250;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam50411_fptr() // lam50411 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50412 = arg_buffer[1];
//reading env and args
void* a5003650265 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5003450261 = (decode_clo(env50412))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50412))[2];
//not do dummy comment
void* kont50135 = (decode_clo(env50412))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50135;
arg_buffer[3] = a5003450261;
arg_buffer[4] = a5003650265;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50411 = encode_clo(alloc_clo(lam50411_fptr, 0));

void* lam50413_fptr() // lam50413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50414 = arg_buffer[1];
//reading env and args
void* a5003550263 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5003450261 = (decode_clo(env50414))[5];
//not do dummy comment
void* lst2 = (decode_clo(env50414))[4];
//not do dummy comment
void* cons = (decode_clo(env50414))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50414))[2];
//not do dummy comment
void* kont50135 = (decode_clo(env50414))[1];

//creating new closure instance
void** clo51955 = alloc_clo(lam50411_fptr, 3);

//setting env list
clo51955[1] = kont50135;
clo51955[2] = reverse_u45helper;
clo51955[3] = a5003450261;
void* f5013650264 = encode_clo(clo51955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5013650264;
arg_buffer[3] = a5003550263;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50413 = encode_clo(alloc_clo(lam50413_fptr, 0));

void* lam50415_fptr() // lam50415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50416 = arg_buffer[1];
//reading env and args
void* a5003450261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50416))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50416))[5];
//not do dummy comment
void* car = (decode_clo(env50416))[4];
//not do dummy comment
void* cons = (decode_clo(env50416))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50416))[2];
//not do dummy comment
void* kont50135 = (decode_clo(env50416))[1];

//creating new closure instance
void** clo51957 = alloc_clo(lam50413_fptr, 5);

//setting env list
clo51957[1] = kont50135;
clo51957[2] = reverse_u45helper;
clo51957[3] = cons;
clo51957[4] = lst2;
clo51957[5] = a5003450261;
void* f5013750262 = encode_clo(clo51957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5013750262;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50415 = encode_clo(alloc_clo(lam50415_fptr, 0));

void* lam50417_fptr() // lam50417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50418 = arg_buffer[1];
//reading env and args
void* a5003350259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50418))[7];
//not do dummy comment
void* lst = (decode_clo(env50418))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50418))[5];
//not do dummy comment
void* car = (decode_clo(env50418))[4];
//not do dummy comment
void* cons = (decode_clo(env50418))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50418))[2];
//not do dummy comment
void* kont50135 = (decode_clo(env50418))[1];

//if-clause
bool if_guard51958 = is_true(a5003350259);
if(if_guard51958)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50135);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50135))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo51960 = alloc_clo(lam50415_fptr, 6);

//setting env list
clo51960[1] = kont50135;
clo51960[2] = reverse_u45helper;
clo51960[3] = cons;
clo51960[4] = car;
clo51960[5] = lst2;
clo51960[6] = lst;
void* f5013850260 = encode_clo(clo51960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5013850260;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50417 = encode_clo(alloc_clo(lam50417_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50419 = arg_buffer[1];
//reading env and args
void* kont50135 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51962 = alloc_clo(lam50417_fptr, 7);

//setting env list
clo51962[1] = kont50135;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo51962[2] = reverse_u45helper;
clo51962[3] = cons;
clo51962[4] = car;
clo51962[5] = lst2;
clo51962[6] = lst;
clo51962[7] = cdr;
void* f5013950258 = encode_clo(clo51962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5013950258;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam50420_fptr() // lam50420 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50421 = arg_buffer[1];
//reading env and args
void* a5003750267 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50421))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env50421))[2];
//not do dummy comment
void* kont50140 = (decode_clo(env50421))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont50140;
arg_buffer[3] = lst;
arg_buffer[4] = a5003750267;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50420 = encode_clo(alloc_clo(lam50420_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50422 = arg_buffer[1];
//reading env and args
void* kont50140 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo51964 = alloc_clo(lam50420_fptr, 3);

//setting env list
clo51964[1] = kont50140;
clo51964[2] = reverse_u45helper;
clo51964[3] = lst;
void* f5014150266 = encode_clo(clo51964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5014150266;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam50423_fptr() // lam50423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50424 = arg_buffer[1];
//reading env and args
void* x5004050272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50142 = (decode_clo(env50424))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50142);
arg_buffer[2] = x5004050272;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50142))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50423 = encode_clo(alloc_clo(lam50423_fptr, 0));

void* lam50425_fptr() // lam50425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50426 = arg_buffer[1];
//reading env and args
void* a5004550281 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5004150274 = (decode_clo(env50426))[4];
//not do dummy comment
void* a5004350277 = (decode_clo(env50426))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50426))[2];
//not do dummy comment
void* kont50142 = (decode_clo(env50426))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50142;
arg_buffer[3] = a5004150274;
arg_buffer[4] = a5004350277;
arg_buffer[5] = a5004550281;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50425 = encode_clo(alloc_clo(lam50425_fptr, 0));

void* lam50427_fptr() // lam50427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50428 = arg_buffer[1];
//reading env and args
void* a5004450279 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5004150274 = (decode_clo(env50428))[6];
//not do dummy comment
void* a5004350277 = (decode_clo(env50428))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50428))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50428))[3];
//not do dummy comment
void* kont50142 = (decode_clo(env50428))[2];
//not do dummy comment
void* cons = (decode_clo(env50428))[1];

//creating new closure instance
void** clo51966 = alloc_clo(lam50425_fptr, 4);

//setting env list
clo51966[1] = kont50142;
clo51966[2] = take_u45helper;
clo51966[3] = a5004350277;
clo51966[4] = a5004150274;
void* f5014450280 = encode_clo(clo51966);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5014450280;
arg_buffer[3] = a5004450279;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50427 = encode_clo(alloc_clo(lam50427_fptr, 0));

void* lam50429_fptr() // lam50429 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50430 = arg_buffer[1];
//reading env and args
void* a5004350277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5004150274 = (decode_clo(env50430))[7];
//not do dummy comment
void* lst = (decode_clo(env50430))[6];
//not do dummy comment
void* car = (decode_clo(env50430))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env50430))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50430))[3];
//not do dummy comment
void* kont50142 = (decode_clo(env50430))[2];
//not do dummy comment
void* cons = (decode_clo(env50430))[1];

//creating new closure instance
void** clo51968 = alloc_clo(lam50427_fptr, 6);

//setting env list
clo51968[1] = cons;
clo51968[2] = kont50142;
clo51968[3] = lst2;
clo51968[4] = take_u45helper;
clo51968[5] = a5004350277;
clo51968[6] = a5004150274;
void* f5014550278 = encode_clo(clo51968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5014550278;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50429 = encode_clo(alloc_clo(lam50429_fptr, 0));

void* lam50432_fptr() // lam50432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50433 = arg_buffer[1];
//reading env and args
void* a5004150274 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50433))[8];
//not do dummy comment
void* _u45 = (decode_clo(env50433))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env50433))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50433))[5];
//not do dummy comment
void* n = (decode_clo(env50433))[4];
//not do dummy comment
void* car = (decode_clo(env50433))[3];
//not do dummy comment
void* kont50142 = (decode_clo(env50433))[2];
//not do dummy comment
void* cons = (decode_clo(env50433))[1];
mpz_t* mpzvar51969 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51969, "1", 10);
void* a5004250275 = encode_mpz(mpzvar51969);

//creating new closure instance
void** clo51971 = alloc_clo(lam50429_fptr, 7);

//setting env list
clo51971[1] = cons;
clo51971[2] = kont50142;
clo51971[3] = lst2;
clo51971[4] = take_u45helper;
clo51971[5] = car;
clo51971[6] = lst;
clo51971[7] = a5004150274;
void* f5014650276 = encode_clo(clo51971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5014650276;
arg_buffer[3] = n;
arg_buffer[4] = a5004250275;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50432 = encode_clo(alloc_clo(lam50432_fptr, 0));

void* lam50434_fptr() // lam50434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50435 = arg_buffer[1];
//reading env and args
void* a5003950270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50435))[10];
//not do dummy comment
void* lst = (decode_clo(env50435))[9];
//not do dummy comment
void* reverse = (decode_clo(env50435))[8];
//not do dummy comment
void* _u45 = (decode_clo(env50435))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env50435))[6];
//not do dummy comment
void* lst2 = (decode_clo(env50435))[5];
//not do dummy comment
void* n = (decode_clo(env50435))[4];
//not do dummy comment
void* car = (decode_clo(env50435))[3];
//not do dummy comment
void* kont50142 = (decode_clo(env50435))[2];
//not do dummy comment
void* cons = (decode_clo(env50435))[1];

//if-clause
bool if_guard51972 = is_true(a5003950270);
if(if_guard51972)
{

//creating new closure instance
void** clo51974 = alloc_clo(lam50423_fptr, 1);

//setting env list
clo51974[1] = kont50142;
void* f5014350271 = encode_clo(clo51974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5014350271;
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
void** clo51976 = alloc_clo(lam50432_fptr, 8);

//setting env list
clo51976[1] = cons;
clo51976[2] = kont50142;
clo51976[3] = car;
clo51976[4] = n;
clo51976[5] = lst2;
clo51976[6] = take_u45helper;
clo51976[7] = _u45;
clo51976[8] = lst;
void* f5014750273 = encode_clo(clo51976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5014750273;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50434 = encode_clo(alloc_clo(lam50434_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50437 = arg_buffer[1];
//reading env and args
void* kont50142 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar51977 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51977, "0", 10);
void* a5003850268 = encode_mpz(mpzvar51977);

//creating new closure instance
void** clo51979 = alloc_clo(lam50434_fptr, 10);

//setting env list
clo51979[1] = cons;
clo51979[2] = kont50142;
clo51979[3] = car;
clo51979[4] = n;
clo51979[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo51979[6] = take_u45helper;
clo51979[7] = _u45;
clo51979[8] = reverse;
clo51979[9] = lst;
clo51979[10] = cdr;
void* f5014850269 = encode_clo(clo51979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5014850269;
arg_buffer[3] = n;
arg_buffer[4] = a5003850268;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam50438_fptr() // lam50438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50439 = arg_buffer[1];
//reading env and args
void* a5004650283 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50439))[4];
//not do dummy comment
void* kont50149 = (decode_clo(env50439))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env50439))[2];
//not do dummy comment
void* n = (decode_clo(env50439))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont50149;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5004650283;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50438 = encode_clo(alloc_clo(lam50438_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50440 = arg_buffer[1];
//reading env and args
void* kont50149 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo51981 = alloc_clo(lam50438_fptr, 4);

//setting env list
clo51981[1] = n;
clo51981[2] = take_u45helper;
clo51981[3] = kont50149;
clo51981[4] = lst;
void* f5015050282 = encode_clo(clo51981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5015050282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam50442_fptr() // lam50442 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50443 = arg_buffer[1];
//reading env and args
void* a5005150291 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50151 = (decode_clo(env50443))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50443))[2];
//not do dummy comment
void* a5004950287 = (decode_clo(env50443))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont50151;
arg_buffer[3] = a5004950287;
arg_buffer[4] = a5005150291;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50442 = encode_clo(alloc_clo(lam50442_fptr, 0));

void* lam50444_fptr() // lam50444 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50445 = arg_buffer[1];
//reading env and args
void* a5005050289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env50445))[4];
//not do dummy comment
void* kont50151 = (decode_clo(env50445))[3];
//not do dummy comment
void* _u43 = (decode_clo(env50445))[2];
//not do dummy comment
void* a5004950287 = (decode_clo(env50445))[1];

//creating new closure instance
void** clo51983 = alloc_clo(lam50442_fptr, 3);

//setting env list
clo51983[1] = a5004950287;
clo51983[2] = _u43;
clo51983[3] = kont50151;
void* f5015250290 = encode_clo(clo51983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5015250290;
arg_buffer[3] = a5005050289;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50444 = encode_clo(alloc_clo(lam50444_fptr, 0));

void* lam50447_fptr() // lam50447 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50448 = arg_buffer[1];
//reading env and args
void* a5004750285 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50448))[5];
//not do dummy comment
void* lst = (decode_clo(env50448))[4];
//not do dummy comment
void* length = (decode_clo(env50448))[3];
//not do dummy comment
void* kont50151 = (decode_clo(env50448))[2];
//not do dummy comment
void* _u43 = (decode_clo(env50448))[1];

//if-clause
bool if_guard51984 = is_true(a5004750285);
if(if_guard51984)
{
mpz_t* mpzvar51985 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51985, "0", 10);
void* x5004850286 = encode_mpz(mpzvar51985);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50151);
arg_buffer[2] = x5004850286;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50151))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar51986 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar51986, "1", 10);
void* a5004950287 = encode_mpz(mpzvar51986);

//creating new closure instance
void** clo51988 = alloc_clo(lam50444_fptr, 4);

//setting env list
clo51988[1] = a5004950287;
clo51988[2] = _u43;
clo51988[3] = kont50151;
clo51988[4] = length;
void* f5015350288 = encode_clo(clo51988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5015350288;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50447 = encode_clo(alloc_clo(lam50447_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50449 = arg_buffer[1];
//reading env and args
void* kont50151 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo51990 = alloc_clo(lam50447_fptr, 5);

//setting env list
clo51990[1] = _u43;
clo51990[2] = kont50151;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo51990[3] = length;
clo51990[4] = lst;
clo51990[5] = cdr;
void* f5015450284 = encode_clo(clo51990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5015450284;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam50450_fptr() // lam50450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50451 = arg_buffer[1];
//reading env and args
void* x5005350295 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50155 = (decode_clo(env50451))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50155);
arg_buffer[2] = x5005350295;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50155))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50450 = encode_clo(alloc_clo(lam50450_fptr, 0));

void* lam50452_fptr() // lam50452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50453 = arg_buffer[1];
//reading env and args
void* a5005750303 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env50453))[3];
//not do dummy comment
void* kont50155 = (decode_clo(env50453))[2];
//not do dummy comment
void* a5005550299 = (decode_clo(env50453))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50155;
arg_buffer[3] = a5005550299;
arg_buffer[4] = a5005750303;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50452 = encode_clo(alloc_clo(lam50452_fptr, 0));

void* lam50454_fptr() // lam50454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50455 = arg_buffer[1];
//reading env and args
void* a5005650301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env50455))[5];
//not do dummy comment
void* cons = (decode_clo(env50455))[4];
//not do dummy comment
void* proc = (decode_clo(env50455))[3];
//not do dummy comment
void* kont50155 = (decode_clo(env50455))[2];
//not do dummy comment
void* a5005550299 = (decode_clo(env50455))[1];

//creating new closure instance
void** clo51992 = alloc_clo(lam50452_fptr, 3);

//setting env list
clo51992[1] = a5005550299;
clo51992[2] = kont50155;
clo51992[3] = cons;
void* f5015750302 = encode_clo(clo51992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5015750302;
arg_buffer[3] = proc;
arg_buffer[4] = a5005650301;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50454 = encode_clo(alloc_clo(lam50454_fptr, 0));

void* lam50456_fptr() // lam50456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50457 = arg_buffer[1];
//reading env and args
void* a5005550299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50457))[6];
//not do dummy comment
void* lst = (decode_clo(env50457))[5];
//not do dummy comment
void* map = (decode_clo(env50457))[4];
//not do dummy comment
void* cons = (decode_clo(env50457))[3];
//not do dummy comment
void* proc = (decode_clo(env50457))[2];
//not do dummy comment
void* kont50155 = (decode_clo(env50457))[1];

//creating new closure instance
void** clo51994 = alloc_clo(lam50454_fptr, 5);

//setting env list
clo51994[1] = a5005550299;
clo51994[2] = kont50155;
clo51994[3] = proc;
clo51994[4] = cons;
clo51994[5] = map;
void* f5015850300 = encode_clo(clo51994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5015850300;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50456 = encode_clo(alloc_clo(lam50456_fptr, 0));

void* lam50458_fptr() // lam50458 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50459 = arg_buffer[1];
//reading env and args
void* a5005450297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50459))[6];
//not do dummy comment
void* lst = (decode_clo(env50459))[5];
//not do dummy comment
void* map = (decode_clo(env50459))[4];
//not do dummy comment
void* cons = (decode_clo(env50459))[3];
//not do dummy comment
void* proc = (decode_clo(env50459))[2];
//not do dummy comment
void* kont50155 = (decode_clo(env50459))[1];

//creating new closure instance
void** clo51996 = alloc_clo(lam50456_fptr, 6);

//setting env list
clo51996[1] = kont50155;
clo51996[2] = proc;
clo51996[3] = cons;
clo51996[4] = map;
clo51996[5] = lst;
clo51996[6] = cdr;
void* f5015950298 = encode_clo(clo51996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5015950298;
arg_buffer[3] = a5005450297;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50458 = encode_clo(alloc_clo(lam50458_fptr, 0));

void* lam50460_fptr() // lam50460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50461 = arg_buffer[1];
//reading env and args
void* a5005250293 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env50461))[8];
//not do dummy comment
void* map = (decode_clo(env50461))[7];
//not do dummy comment
void* car = (decode_clo(env50461))[6];
//not do dummy comment
void* cons = (decode_clo(env50461))[5];
//not do dummy comment
void* list = (decode_clo(env50461))[4];
//not do dummy comment
void* cdr = (decode_clo(env50461))[3];
//not do dummy comment
void* proc = (decode_clo(env50461))[2];
//not do dummy comment
void* kont50155 = (decode_clo(env50461))[1];

//if-clause
bool if_guard51997 = is_true(a5005250293);
if(if_guard51997)
{

//creating new closure instance
void** clo51999 = alloc_clo(lam50450_fptr, 1);

//setting env list
clo51999[1] = kont50155;
void* f5015650294 = encode_clo(clo51999);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5015650294;
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
void** clo52001 = alloc_clo(lam50458_fptr, 6);

//setting env list
clo52001[1] = kont50155;
clo52001[2] = proc;
clo52001[3] = cons;
clo52001[4] = map;
clo52001[5] = lst;
clo52001[6] = cdr;
void* f5016050296 = encode_clo(clo52001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5016050296;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50460 = encode_clo(alloc_clo(lam50460_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50462 = arg_buffer[1];
//reading env and args
void* kont50155 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52003 = alloc_clo(lam50460_fptr, 8);

//setting env list
clo52003[1] = kont50155;
clo52003[2] = proc;
clo52003[3] = cdr;
clo52003[4] = list;
clo52003[5] = cons;
clo52003[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo52003[7] = map;
clo52003[8] = lst;
void* f5016150292 = encode_clo(clo52003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5016150292;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam50463_fptr() // lam50463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50464 = arg_buffer[1];
//reading env and args
void* x5005950307 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50162 = (decode_clo(env50464))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50162);
arg_buffer[2] = x5005950307;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50162))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50463 = encode_clo(alloc_clo(lam50463_fptr, 0));

void* lam50465_fptr() // lam50465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50466 = arg_buffer[1];
//reading env and args
void* a5006450317 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50162 = (decode_clo(env50466))[3];
//not do dummy comment
void* a5006250313 = (decode_clo(env50466))[2];
//not do dummy comment
void* cons = (decode_clo(env50466))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50162;
arg_buffer[3] = a5006250313;
arg_buffer[4] = a5006450317;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50465 = encode_clo(alloc_clo(lam50465_fptr, 0));

void* lam50467_fptr() // lam50467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50468 = arg_buffer[1];
//reading env and args
void* a5006350315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50162 = (decode_clo(env50468))[5];
//not do dummy comment
void* op = (decode_clo(env50468))[4];
//not do dummy comment
void* a5006250313 = (decode_clo(env50468))[3];
//not do dummy comment
void* filter = (decode_clo(env50468))[2];
//not do dummy comment
void* cons = (decode_clo(env50468))[1];

//creating new closure instance
void** clo52005 = alloc_clo(lam50465_fptr, 3);

//setting env list
clo52005[1] = cons;
clo52005[2] = a5006250313;
clo52005[3] = kont50162;
void* f5016450316 = encode_clo(clo52005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5016450316;
arg_buffer[3] = op;
arg_buffer[4] = a5006350315;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50467 = encode_clo(alloc_clo(lam50467_fptr, 0));

void* lam50469_fptr() // lam50469 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50470 = arg_buffer[1];
//reading env and args
void* a5006250313 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50470))[6];
//not do dummy comment
void* kont50162 = (decode_clo(env50470))[5];
//not do dummy comment
void* lst = (decode_clo(env50470))[4];
//not do dummy comment
void* op = (decode_clo(env50470))[3];
//not do dummy comment
void* filter = (decode_clo(env50470))[2];
//not do dummy comment
void* cons = (decode_clo(env50470))[1];

//creating new closure instance
void** clo52007 = alloc_clo(lam50467_fptr, 5);

//setting env list
clo52007[1] = cons;
clo52007[2] = filter;
clo52007[3] = a5006250313;
clo52007[4] = op;
clo52007[5] = kont50162;
void* f5016550314 = encode_clo(clo52007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5016550314;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50469 = encode_clo(alloc_clo(lam50469_fptr, 0));

void* lam50471_fptr() // lam50471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50472 = arg_buffer[1];
//reading env and args
void* a5006550319 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50162 = (decode_clo(env50472))[3];
//not do dummy comment
void* op = (decode_clo(env50472))[2];
//not do dummy comment
void* filter = (decode_clo(env50472))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont50162;
arg_buffer[3] = op;
arg_buffer[4] = a5006550319;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50471 = encode_clo(alloc_clo(lam50471_fptr, 0));

void* lam50473_fptr() // lam50473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50474 = arg_buffer[1];
//reading env and args
void* a5006150311 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50474))[7];
//not do dummy comment
void* kont50162 = (decode_clo(env50474))[6];
//not do dummy comment
void* lst = (decode_clo(env50474))[5];
//not do dummy comment
void* op = (decode_clo(env50474))[4];
//not do dummy comment
void* cons = (decode_clo(env50474))[3];
//not do dummy comment
void* filter = (decode_clo(env50474))[2];
//not do dummy comment
void* car = (decode_clo(env50474))[1];

//if-clause
bool if_guard52008 = is_true(a5006150311);
if(if_guard52008)
{

//creating new closure instance
void** clo52010 = alloc_clo(lam50469_fptr, 6);

//setting env list
clo52010[1] = cons;
clo52010[2] = filter;
clo52010[3] = op;
clo52010[4] = lst;
clo52010[5] = kont50162;
clo52010[6] = cdr;
void* f5016650312 = encode_clo(clo52010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5016650312;
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
void** clo52012 = alloc_clo(lam50471_fptr, 3);

//setting env list
clo52012[1] = filter;
clo52012[2] = op;
clo52012[3] = kont50162;
void* f5016750318 = encode_clo(clo52012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5016750318;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50473 = encode_clo(alloc_clo(lam50473_fptr, 0));

void* lam50475_fptr() // lam50475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50476 = arg_buffer[1];
//reading env and args
void* a5006050309 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50476))[7];
//not do dummy comment
void* kont50162 = (decode_clo(env50476))[6];
//not do dummy comment
void* lst = (decode_clo(env50476))[5];
//not do dummy comment
void* op = (decode_clo(env50476))[4];
//not do dummy comment
void* cons = (decode_clo(env50476))[3];
//not do dummy comment
void* filter = (decode_clo(env50476))[2];
//not do dummy comment
void* car = (decode_clo(env50476))[1];

//creating new closure instance
void** clo52014 = alloc_clo(lam50473_fptr, 7);

//setting env list
clo52014[1] = car;
clo52014[2] = filter;
clo52014[3] = cons;
clo52014[4] = op;
clo52014[5] = lst;
clo52014[6] = kont50162;
clo52014[7] = cdr;
void* f5016850310 = encode_clo(clo52014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5016850310;
arg_buffer[3] = a5006050309;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50475 = encode_clo(alloc_clo(lam50475_fptr, 0));

void* lam50477_fptr() // lam50477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50478 = arg_buffer[1];
//reading env and args
void* a5005850305 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50162 = (decode_clo(env50478))[8];
//not do dummy comment
void* lst = (decode_clo(env50478))[7];
//not do dummy comment
void* op = (decode_clo(env50478))[6];
//not do dummy comment
void* cons = (decode_clo(env50478))[5];
//not do dummy comment
void* list = (decode_clo(env50478))[4];
//not do dummy comment
void* cdr = (decode_clo(env50478))[3];
//not do dummy comment
void* filter = (decode_clo(env50478))[2];
//not do dummy comment
void* car = (decode_clo(env50478))[1];

//if-clause
bool if_guard52015 = is_true(a5005850305);
if(if_guard52015)
{

//creating new closure instance
void** clo52017 = alloc_clo(lam50463_fptr, 1);

//setting env list
clo52017[1] = kont50162;
void* f5016350306 = encode_clo(clo52017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5016350306;
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
void** clo52019 = alloc_clo(lam50475_fptr, 7);

//setting env list
clo52019[1] = car;
clo52019[2] = filter;
clo52019[3] = cons;
clo52019[4] = op;
clo52019[5] = lst;
clo52019[6] = kont50162;
clo52019[7] = cdr;
void* f5016950308 = encode_clo(clo52019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5016950308;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50477 = encode_clo(alloc_clo(lam50477_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50479 = arg_buffer[1];
//reading env and args
void* kont50162 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52021 = alloc_clo(lam50477_fptr, 8);

//setting env list
clo52021[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo52021[2] = filter;
clo52021[3] = cdr;
clo52021[4] = list;
clo52021[5] = cons;
clo52021[6] = op;
clo52021[7] = lst;
clo52021[8] = kont50162;
void* f5017050304 = encode_clo(clo52021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5017050304;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam50480_fptr() // lam50480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50481 = arg_buffer[1];
//reading env and args
void* a5007050327 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50171 = (decode_clo(env50481))[3];
//not do dummy comment
void* a5006850324 = (decode_clo(env50481))[2];
//not do dummy comment
void* drop = (decode_clo(env50481))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont50171;
arg_buffer[3] = a5006850324;
arg_buffer[4] = a5007050327;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50480 = encode_clo(alloc_clo(lam50480_fptr, 0));

void* lam50483_fptr() // lam50483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50484 = arg_buffer[1];
//reading env and args
void* a5006850324 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env50484))[4];
//not do dummy comment
void* kont50171 = (decode_clo(env50484))[3];
//not do dummy comment
void* n = (decode_clo(env50484))[2];
//not do dummy comment
void* _u45 = (decode_clo(env50484))[1];
mpz_t* mpzvar52022 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52022, "1", 10);
void* a5006950325 = encode_mpz(mpzvar52022);

//creating new closure instance
void** clo52024 = alloc_clo(lam50480_fptr, 3);

//setting env list
clo52024[1] = drop;
clo52024[2] = a5006850324;
clo52024[3] = kont50171;
void* f5017250326 = encode_clo(clo52024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5017250326;
arg_buffer[3] = n;
arg_buffer[4] = a5006950325;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50483 = encode_clo(alloc_clo(lam50483_fptr, 0));

void* lam50485_fptr() // lam50485 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50486 = arg_buffer[1];
//reading env and args
void* a5006750322 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50486))[6];
//not do dummy comment
void* kont50171 = (decode_clo(env50486))[5];
//not do dummy comment
void* n = (decode_clo(env50486))[4];
//not do dummy comment
void* _u45 = (decode_clo(env50486))[3];
//not do dummy comment
void* lst = (decode_clo(env50486))[2];
//not do dummy comment
void* drop = (decode_clo(env50486))[1];

//if-clause
bool if_guard52025 = is_true(a5006750322);
if(if_guard52025)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50171);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50171))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52027 = alloc_clo(lam50483_fptr, 4);

//setting env list
clo52027[1] = _u45;
clo52027[2] = n;
clo52027[3] = kont50171;
clo52027[4] = drop;
void* f5017350323 = encode_clo(clo52027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5017350323;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50485 = encode_clo(alloc_clo(lam50485_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50488 = arg_buffer[1];
//reading env and args
void* kont50171 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar52028 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52028, "0", 10);
void* a5006650320 = encode_mpz(mpzvar52028);

//creating new closure instance
void** clo52030 = alloc_clo(lam50485_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo52030[1] = drop;
clo52030[2] = lst;
clo52030[3] = _u45;
clo52030[4] = n;
clo52030[5] = kont50171;
clo52030[6] = cdr;
void* f5017450321 = encode_clo(clo52030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5017450321;
arg_buffer[3] = n;
arg_buffer[4] = a5006650320;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam50489_fptr() // lam50489 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50490 = arg_buffer[1];
//reading env and args
void* a5007450335 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50175 = (decode_clo(env50490))[3];
//not do dummy comment
void* proc = (decode_clo(env50490))[2];
//not do dummy comment
void* a5007250331 = (decode_clo(env50490))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont50175;
arg_buffer[3] = a5007250331;
arg_buffer[4] = a5007450335;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50489 = encode_clo(alloc_clo(lam50489_fptr, 0));

void* lam50491_fptr() // lam50491 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50492 = arg_buffer[1];
//reading env and args
void* a5007350333 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env50492))[5];
//not do dummy comment
void* kont50175 = (decode_clo(env50492))[4];
//not do dummy comment
void* proc = (decode_clo(env50492))[3];
//not do dummy comment
void* acc = (decode_clo(env50492))[2];
//not do dummy comment
void* a5007250331 = (decode_clo(env50492))[1];

//creating new closure instance
void** clo52032 = alloc_clo(lam50489_fptr, 3);

//setting env list
clo52032[1] = a5007250331;
clo52032[2] = proc;
clo52032[3] = kont50175;
void* f5017650334 = encode_clo(clo52032);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5017650334;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5007350333;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50491 = encode_clo(alloc_clo(lam50491_fptr, 0));

void* lam50493_fptr() // lam50493 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50494 = arg_buffer[1];
//reading env and args
void* a5007250331 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50494))[6];
//not do dummy comment
void* kont50175 = (decode_clo(env50494))[5];
//not do dummy comment
void* foldr = (decode_clo(env50494))[4];
//not do dummy comment
void* lst = (decode_clo(env50494))[3];
//not do dummy comment
void* proc = (decode_clo(env50494))[2];
//not do dummy comment
void* acc = (decode_clo(env50494))[1];

//creating new closure instance
void** clo52034 = alloc_clo(lam50491_fptr, 5);

//setting env list
clo52034[1] = a5007250331;
clo52034[2] = acc;
clo52034[3] = proc;
clo52034[4] = kont50175;
clo52034[5] = foldr;
void* f5017750332 = encode_clo(clo52034);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5017750332;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50493 = encode_clo(alloc_clo(lam50493_fptr, 0));

void* lam50495_fptr() // lam50495 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50496 = arg_buffer[1];
//reading env and args
void* a5007150329 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50496))[7];
//not do dummy comment
void* car = (decode_clo(env50496))[6];
//not do dummy comment
void* kont50175 = (decode_clo(env50496))[5];
//not do dummy comment
void* foldr = (decode_clo(env50496))[4];
//not do dummy comment
void* lst = (decode_clo(env50496))[3];
//not do dummy comment
void* proc = (decode_clo(env50496))[2];
//not do dummy comment
void* acc = (decode_clo(env50496))[1];

//if-clause
bool if_guard52035 = is_true(a5007150329);
if(if_guard52035)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50175);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50175))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52037 = alloc_clo(lam50493_fptr, 6);

//setting env list
clo52037[1] = acc;
clo52037[2] = proc;
clo52037[3] = lst;
clo52037[4] = foldr;
clo52037[5] = kont50175;
clo52037[6] = cdr;
void* f5017850330 = encode_clo(clo52037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5017850330;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50495 = encode_clo(alloc_clo(lam50495_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50497 = arg_buffer[1];
//reading env and args
void* kont50175 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo52039 = alloc_clo(lam50495_fptr, 7);

//setting env list
clo52039[1] = acc;
clo52039[2] = proc;
clo52039[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo52039[4] = foldr;
clo52039[5] = kont50175;
clo52039[6] = car;
clo52039[7] = cdr;
void* f5017950328 = encode_clo(clo52039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5017950328;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam50498_fptr() // lam50498 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50499 = arg_buffer[1];
//reading env and args
void* a5007850343 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5007650339 = (decode_clo(env50499))[3];
//not do dummy comment
void* kont50180 = (decode_clo(env50499))[2];
//not do dummy comment
void* cons = (decode_clo(env50499))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont50180;
arg_buffer[3] = a5007650339;
arg_buffer[4] = a5007850343;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50498 = encode_clo(alloc_clo(lam50498_fptr, 0));

void* lam50500_fptr() // lam50500 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50501 = arg_buffer[1];
//reading env and args
void* a5007750341 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5007650339 = (decode_clo(env50501))[5];
//not do dummy comment
void* kont50180 = (decode_clo(env50501))[4];
//not do dummy comment
void* append = (decode_clo(env50501))[3];
//not do dummy comment
void* lst2 = (decode_clo(env50501))[2];
//not do dummy comment
void* cons = (decode_clo(env50501))[1];

//creating new closure instance
void** clo52041 = alloc_clo(lam50498_fptr, 3);

//setting env list
clo52041[1] = cons;
clo52041[2] = kont50180;
clo52041[3] = a5007650339;
void* f5018150342 = encode_clo(clo52041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5018150342;
arg_buffer[3] = a5007750341;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50500 = encode_clo(alloc_clo(lam50500_fptr, 0));

void* lam50502_fptr() // lam50502 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50503 = arg_buffer[1];
//reading env and args
void* a5007650339 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50503))[6];
//not do dummy comment
void* kont50180 = (decode_clo(env50503))[5];
//not do dummy comment
void* append = (decode_clo(env50503))[4];
//not do dummy comment
void* lst2 = (decode_clo(env50503))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50503))[2];
//not do dummy comment
void* cons = (decode_clo(env50503))[1];

//creating new closure instance
void** clo52043 = alloc_clo(lam50500_fptr, 5);

//setting env list
clo52043[1] = cons;
clo52043[2] = lst2;
clo52043[3] = append;
clo52043[4] = kont50180;
clo52043[5] = a5007650339;
void* f5018250340 = encode_clo(clo52043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5018250340;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50502 = encode_clo(alloc_clo(lam50502_fptr, 0));

void* lam50504_fptr() // lam50504 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50505 = arg_buffer[1];
//reading env and args
void* a5007550337 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env50505))[7];
//not do dummy comment
void* kont50180 = (decode_clo(env50505))[6];
//not do dummy comment
void* append = (decode_clo(env50505))[5];
//not do dummy comment
void* lst2 = (decode_clo(env50505))[4];
//not do dummy comment
void* cons = (decode_clo(env50505))[3];
//not do dummy comment
void* lst1 = (decode_clo(env50505))[2];
//not do dummy comment
void* car = (decode_clo(env50505))[1];

//if-clause
bool if_guard52044 = is_true(a5007550337);
if(if_guard52044)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50180);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50180))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52046 = alloc_clo(lam50502_fptr, 6);

//setting env list
clo52046[1] = cons;
clo52046[2] = lst1;
clo52046[3] = lst2;
clo52046[4] = append;
clo52046[5] = kont50180;
clo52046[6] = cdr;
void* f5018350338 = encode_clo(clo52046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5018350338;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50504 = encode_clo(alloc_clo(lam50504_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50506 = arg_buffer[1];
//reading env and args
void* kont50180 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52048 = alloc_clo(lam50504_fptr, 7);

//setting env list
clo52048[1] = car;
clo52048[2] = lst1;
clo52048[3] = cons;
clo52048[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo52048[5] = append;
clo52048[6] = kont50180;
clo52048[7] = cdr;
void* f5018450336 = encode_clo(clo52048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5018450336;
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
void* _50507 = arg_buffer[1];
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

void* kont5018550344 = prim_car(lst);
void* lst50345 = prim_cdr(lst);
void* x5007950346 = apply_prim_hash(lst50345);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5018550344);
arg_buffer[2] = x5007950346;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5018550344))[0]);
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
void* _50508 = arg_buffer[1];
//reading env and args
void* kont50187 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5008050347 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50187);
arg_buffer[2] = x5008050347;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50187))[0]);
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
void* _50509 = arg_buffer[1];
//reading env and args
void* kont50188 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5008150348 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50188);
arg_buffer[2] = x5008150348;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50188))[0]);
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
void* _50510 = arg_buffer[1];
//reading env and args
void* kont50189 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5008250349 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50189);
arg_buffer[2] = x5008250349;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50189))[0]);
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
void* _50511 = arg_buffer[1];
//reading env and args
void* kont50190 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5008350350 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50190);
arg_buffer[2] = x5008350350;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50190))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam50516_fptr() // lam50516 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50517 = arg_buffer[1];
//reading env and args
void* a5009050359 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env50517))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env50517))[2];
//not do dummy comment
void* kont50191 = (decode_clo(env50517))[1];

//if-clause
bool if_guard52049 = is_true(a5009050359);
if(if_guard52049)
{
mpz_t* mpzvar52050 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52050, "3", 10);
void* a5009150360 = encode_mpz(mpzvar52050);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont50191;
arg_buffer[3] = a5009150360;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar52051 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52051, "2", 10);
void* a5009250361 = encode_mpz(mpzvar52051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont50191;
arg_buffer[3] = a5009250361;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50516 = encode_clo(alloc_clo(lam50516_fptr, 0));

void* lam50519_fptr() // lam50519 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50520 = arg_buffer[1];
//reading env and args
void* a5008650354 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env50520))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env50520))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env50520))[2];
//not do dummy comment
void* kont50191 = (decode_clo(env50520))[1];

//if-clause
bool if_guard52052 = is_true(a5008650354);
if(if_guard52052)
{
mpz_t* mpzvar52053 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52053, "1", 10);
void* a5008750355 = encode_mpz(mpzvar52053);
mpz_t* mpzvar52054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52054, "2", 10);
void* a5008850356 = encode_mpz(mpzvar52054);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont50191;
arg_buffer[3] = a5008750355;
arg_buffer[4] = a5008850356;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar52055 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52055, "3", 10);
void* a5008950357 = encode_mpz(mpzvar52055);

//creating new closure instance
void** clo52057 = alloc_clo(lam50516_fptr, 3);

//setting env list
clo52057[1] = kont50191;
clo52057[2] = even_u63;
clo52057[3] = odd_u63;
void* f5019250358 = encode_clo(clo52057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f5019250358;
arg_buffer[3] = a5008950357;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam50519 = encode_clo(alloc_clo(lam50519_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50523 = arg_buffer[1];
//reading env and args
void* kont50191 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar52058 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52058, "1", 10);
void* a5008450351 = encode_mpz(mpzvar52058);
mpz_t* mpzvar52059 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52059, "2", 10);
void* a5008550352 = encode_mpz(mpzvar52059);

//creating new closure instance
void** clo52061 = alloc_clo(lam50519_fptr, 4);

//setting env list
clo52061[1] = kont50191;
clo52061[2] = equal_u63;
clo52061[3] = even_u63;
clo52061[4] = odd_u63;
void* f5019350353 = encode_clo(clo52061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5019350353;
arg_buffer[3] = a5008450351;
arg_buffer[4] = a5008550352;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam50524_fptr() // lam50524 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env50525 = arg_buffer[1];
//reading env and args
void* x5009350363 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont50194 = (decode_clo(env50525))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50194);
arg_buffer[2] = x5009350363;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50194))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam50524 = encode_clo(alloc_clo(lam50524_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _50526 = arg_buffer[1];
//reading env and args
void* kont50194 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo52063 = alloc_clo(lam50524_fptr, 1);

//setting env list
clo52063[1] = kont50194;
void* f5019550362 = encode_clo(clo52063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5019550362;
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

