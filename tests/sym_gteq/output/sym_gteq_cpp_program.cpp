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
void* _114316 = arg_buffer[1];
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

void* kont114054114154 = prim_car(lst);
void* lst114155 = prim_cdr(lst);
void* x113965114156 = apply_prim__u43(lst114155);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114054114154);
arg_buffer[2] = x113965114156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114054114154))[0]);
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
void* _114317 = arg_buffer[1];
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

void* kont114056114157 = prim_car(lst);
void* lst114158 = prim_cdr(lst);
void* x113966114159 = apply_prim__u45(lst114158);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114056114157);
arg_buffer[2] = x113966114159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114056114157))[0]);
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
void* _114318 = arg_buffer[1];
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

void* kont114058114160 = prim_car(lst);
void* lst114161 = prim_cdr(lst);
void* x113967114162 = apply_prim__u42(lst114161);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114058114160);
arg_buffer[2] = x113967114162;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114058114160))[0]);
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
void* _114319 = arg_buffer[1];
//reading env and args
void* kont114060 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x113968114163 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114060);
arg_buffer[2] = x113968114163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114060))[0]);
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
void* _114320 = arg_buffer[1];
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

void* kont114061114164 = prim_car(lst);
void* lst114165 = prim_cdr(lst);
void* x113969114166 = apply_prim__u47(lst114165);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114061114164);
arg_buffer[2] = x113969114166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114061114164))[0]);
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
void* _114321 = arg_buffer[1];
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

void* kont114063114167 = prim_car(lst);
void* lst114168 = prim_cdr(lst);
void* x113970114169 = apply_prim__u61(lst114168);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114063114167);
arg_buffer[2] = x113970114169;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114063114167))[0]);
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
void* _114322 = arg_buffer[1];
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

void* kont114065114170 = prim_car(lst);
void* lst114171 = prim_cdr(lst);
void* x113971114172 = apply_prim__u62(lst114171);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114065114170);
arg_buffer[2] = x113971114172;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114065114170))[0]);
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
void* _114323 = arg_buffer[1];
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

void* kont114067114173 = prim_car(lst);
void* lst114174 = prim_cdr(lst);
void* x113972114175 = apply_prim__u60(lst114174);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114067114173);
arg_buffer[2] = x113972114175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114067114173))[0]);
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
void* _114324 = arg_buffer[1];
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

void* kont114069114176 = prim_car(lst);
void* lst114177 = prim_cdr(lst);
void* x113973114178 = apply_prim__u60_u61(lst114177);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114069114176);
arg_buffer[2] = x113973114178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114069114176))[0]);
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
void* _114325 = arg_buffer[1];
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

void* kont114071114179 = prim_car(lst);
void* lst114180 = prim_cdr(lst);
void* x113974114181 = apply_prim__u62_u61(lst114180);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114071114179);
arg_buffer[2] = x113974114181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114071114179))[0]);
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
void* _114326 = arg_buffer[1];
//reading env and args
void* kont114073 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x113975114182 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114073);
arg_buffer[2] = x113975114182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114073))[0]);
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
void* _114327 = arg_buffer[1];
//reading env and args
void* kont114074 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x113976114183 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114074);
arg_buffer[2] = x113976114183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114074))[0]);
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
void* _114328 = arg_buffer[1];
//reading env and args
void* kont114075 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x113977114184 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114075);
arg_buffer[2] = x113977114184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114075))[0]);
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
void* _114329 = arg_buffer[1];
//reading env and args
void* kont114076 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x113978114185 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114076);
arg_buffer[2] = x113978114185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114076))[0]);
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
void* _114330 = arg_buffer[1];
//reading env and args
void* kont114077 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x113979114186 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114077);
arg_buffer[2] = x113979114186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114077))[0]);
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
void* _114331 = arg_buffer[1];
//reading env and args
void* kont114078 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x113980114187 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114078);
arg_buffer[2] = x113980114187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114078))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam114332_fptr() // lam114332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114333 = arg_buffer[1];
//reading env and args
void* a113983114191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env114333))[3];
//not do dummy comment
void* a113981114188 = (decode_clo(env114333))[2];
//not do dummy comment
void* kont114079 = (decode_clo(env114333))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont114079;
arg_buffer[3] = a113981114188;
arg_buffer[4] = a113983114191;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114332 = encode_clo(alloc_clo(lam114332_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114336 = arg_buffer[1];
//reading env and args
void* kont114079 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar114977 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar114977, "0", 10);
void* a113981114188 = encode_mpz(mpzvar114977);
mpz_t* mpzvar114978 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar114978, "2", 10);
void* a113982114189 = encode_mpz(mpzvar114978);

//creating new closure instance
void** clo114980 = alloc_clo(lam114332_fptr, 3);

//setting env list
clo114980[1] = kont114079;
clo114980[2] = a113981114188;
clo114980[3] = equal_u63;
void* f114080114190 = encode_clo(clo114980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f114080114190;
arg_buffer[3] = x;
arg_buffer[4] = a113982114189;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam114337_fptr() // lam114337 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114338 = arg_buffer[1];
//reading env and args
void* a113986114195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a113984114192 = (decode_clo(env114338))[3];
//not do dummy comment
void* kont114081 = (decode_clo(env114338))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env114338))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont114081;
arg_buffer[3] = a113984114192;
arg_buffer[4] = a113986114195;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114337 = encode_clo(alloc_clo(lam114337_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114341 = arg_buffer[1];
//reading env and args
void* kont114081 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar114981 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar114981, "1", 10);
void* a113984114192 = encode_mpz(mpzvar114981);
mpz_t* mpzvar114982 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar114982, "2", 10);
void* a113985114193 = encode_mpz(mpzvar114982);

//creating new closure instance
void** clo114984 = alloc_clo(lam114337_fptr, 3);

//setting env list
clo114984[1] = equal_u63;
clo114984[2] = kont114081;
clo114984[3] = a113984114192;
void* f114082114194 = encode_clo(clo114984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f114082114194;
arg_buffer[3] = x;
arg_buffer[4] = a113985114193;
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
void* _114342 = arg_buffer[1];
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

void* kont114083114196 = prim_car(x);
void* x114197 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114083114196);
arg_buffer[2] = x114197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114083114196))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam114345_fptr() // lam114345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114346 = arg_buffer[1];
//reading env and args
void* a113992114207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114085 = (decode_clo(env114346))[3];
//not do dummy comment
void* x = (decode_clo(env114346))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env114346))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont114085;
arg_buffer[3] = x;
arg_buffer[4] = a113992114207;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114345 = encode_clo(alloc_clo(lam114345_fptr, 0));

void* lam114347_fptr() // lam114347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114348 = arg_buffer[1];
//reading env and args
void* a113990114204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114348))[5];
//not do dummy comment
void* lst = (decode_clo(env114348))[4];
//not do dummy comment
void* kont114085 = (decode_clo(env114348))[3];
//not do dummy comment
void* x = (decode_clo(env114348))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env114348))[1];

//if-clause
bool if_guard114985 = is_true(a113990114204);
if(if_guard114985)
{
void* x113991114205 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114085);
arg_buffer[2] = x113991114205;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114085))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo114987 = alloc_clo(lam114345_fptr, 3);

//setting env list
clo114987[1] = member_u63;
clo114987[2] = x;
clo114987[3] = kont114085;
void* f114086114206 = encode_clo(clo114987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114086114206;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114347 = encode_clo(alloc_clo(lam114347_fptr, 0));

void* lam114349_fptr() // lam114349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114350 = arg_buffer[1];
//reading env and args
void* a113989114202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114350))[6];
//not do dummy comment
void* lst = (decode_clo(env114350))[5];
//not do dummy comment
void* kont114085 = (decode_clo(env114350))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env114350))[3];
//not do dummy comment
void* x = (decode_clo(env114350))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env114350))[1];

//creating new closure instance
void** clo114989 = alloc_clo(lam114347_fptr, 5);

//setting env list
clo114989[1] = member_u63;
clo114989[2] = x;
clo114989[3] = kont114085;
clo114989[4] = lst;
clo114989[5] = cdr;
void* f114087114203 = encode_clo(clo114989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f114087114203;
arg_buffer[3] = a113989114202;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114349 = encode_clo(alloc_clo(lam114349_fptr, 0));

void* lam114351_fptr() // lam114351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114352 = arg_buffer[1];
//reading env and args
void* a113987114199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114352))[7];
//not do dummy comment
void* lst = (decode_clo(env114352))[6];
//not do dummy comment
void* kont114085 = (decode_clo(env114352))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env114352))[4];
//not do dummy comment
void* x = (decode_clo(env114352))[3];
//not do dummy comment
void* car = (decode_clo(env114352))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env114352))[1];

//if-clause
bool if_guard114990 = is_true(a113987114199);
if(if_guard114990)
{
void* x113988114200 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114085);
arg_buffer[2] = x113988114200;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114085))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo114992 = alloc_clo(lam114349_fptr, 6);

//setting env list
clo114992[1] = member_u63;
clo114992[2] = x;
clo114992[3] = equal_u63;
clo114992[4] = kont114085;
clo114992[5] = lst;
clo114992[6] = cdr;
void* f114088114201 = encode_clo(clo114992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114088114201;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114351 = encode_clo(alloc_clo(lam114351_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114353 = arg_buffer[1];
//reading env and args
void* kont114085 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo114994 = alloc_clo(lam114351_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo114994[1] = member_u63;
clo114994[2] = car;
clo114994[3] = x;
clo114994[4] = equal_u63;
clo114994[5] = kont114085;
clo114994[6] = lst;
clo114994[7] = cdr;
void* f114089114198 = encode_clo(clo114994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114089114198;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam114354_fptr() // lam114354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114355 = arg_buffer[1];
//reading env and args
void* a113996114215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a113995114213 = (decode_clo(env114355))[4];
//not do dummy comment
void* foldl = (decode_clo(env114355))[3];
//not do dummy comment
void* kont114090 = (decode_clo(env114355))[2];
//not do dummy comment
void* fun = (decode_clo(env114355))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont114090;
arg_buffer[3] = fun;
arg_buffer[4] = a113995114213;
arg_buffer[5] = a113996114215;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114354 = encode_clo(alloc_clo(lam114354_fptr, 0));

void* lam114356_fptr() // lam114356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114357 = arg_buffer[1];
//reading env and args
void* a113995114213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114357))[5];
//not do dummy comment
void* lst = (decode_clo(env114357))[4];
//not do dummy comment
void* foldl = (decode_clo(env114357))[3];
//not do dummy comment
void* kont114090 = (decode_clo(env114357))[2];
//not do dummy comment
void* fun = (decode_clo(env114357))[1];

//creating new closure instance
void** clo114996 = alloc_clo(lam114354_fptr, 4);

//setting env list
clo114996[1] = fun;
clo114996[2] = kont114090;
clo114996[3] = foldl;
clo114996[4] = a113995114213;
void* f114091114214 = encode_clo(clo114996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114091114214;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114356 = encode_clo(alloc_clo(lam114356_fptr, 0));

void* lam114358_fptr() // lam114358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114359 = arg_buffer[1];
//reading env and args
void* a113994114211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114359))[6];
//not do dummy comment
void* lst = (decode_clo(env114359))[5];
//not do dummy comment
void* acc = (decode_clo(env114359))[4];
//not do dummy comment
void* foldl = (decode_clo(env114359))[3];
//not do dummy comment
void* kont114090 = (decode_clo(env114359))[2];
//not do dummy comment
void* fun = (decode_clo(env114359))[1];

//creating new closure instance
void** clo114998 = alloc_clo(lam114356_fptr, 5);

//setting env list
clo114998[1] = fun;
clo114998[2] = kont114090;
clo114998[3] = foldl;
clo114998[4] = lst;
clo114998[5] = cdr;
void* f114092114212 = encode_clo(clo114998);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f114092114212;
arg_buffer[3] = a113994114211;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114358 = encode_clo(alloc_clo(lam114358_fptr, 0));

void* lam114360_fptr() // lam114360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114361 = arg_buffer[1];
//reading env and args
void* a113993114209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114361))[7];
//not do dummy comment
void* lst = (decode_clo(env114361))[6];
//not do dummy comment
void* acc = (decode_clo(env114361))[5];
//not do dummy comment
void* car = (decode_clo(env114361))[4];
//not do dummy comment
void* foldl = (decode_clo(env114361))[3];
//not do dummy comment
void* kont114090 = (decode_clo(env114361))[2];
//not do dummy comment
void* fun = (decode_clo(env114361))[1];

//if-clause
bool if_guard114999 = is_true(a113993114209);
if(if_guard114999)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114090);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114090))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo115001 = alloc_clo(lam114358_fptr, 6);

//setting env list
clo115001[1] = fun;
clo115001[2] = kont114090;
clo115001[3] = foldl;
clo115001[4] = acc;
clo115001[5] = lst;
clo115001[6] = cdr;
void* f114093114210 = encode_clo(clo115001);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114093114210;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114360 = encode_clo(alloc_clo(lam114360_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114362 = arg_buffer[1];
//reading env and args
void* kont114090 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo115003 = alloc_clo(lam114360_fptr, 7);

//setting env list
clo115003[1] = fun;
clo115003[2] = kont114090;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo115003[3] = foldl;
clo115003[4] = car;
clo115003[5] = acc;
clo115003[6] = lst;
clo115003[7] = cdr;
void* f114094114208 = encode_clo(clo115003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114094114208;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam114363_fptr() // lam114363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114364 = arg_buffer[1];
//reading env and args
void* a114000114223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env114364))[3];
//not do dummy comment
void* a113998114219 = (decode_clo(env114364))[2];
//not do dummy comment
void* kont114095 = (decode_clo(env114364))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont114095;
arg_buffer[3] = a113998114219;
arg_buffer[4] = a114000114223;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114363 = encode_clo(alloc_clo(lam114363_fptr, 0));

void* lam114365_fptr() // lam114365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114366 = arg_buffer[1];
//reading env and args
void* a113999114221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env114366))[5];
//not do dummy comment
void* a113998114219 = (decode_clo(env114366))[4];
//not do dummy comment
void* lst2 = (decode_clo(env114366))[3];
//not do dummy comment
void* cons = (decode_clo(env114366))[2];
//not do dummy comment
void* kont114095 = (decode_clo(env114366))[1];

//creating new closure instance
void** clo115005 = alloc_clo(lam114363_fptr, 3);

//setting env list
clo115005[1] = kont114095;
clo115005[2] = a113998114219;
clo115005[3] = reverse_u45helper;
void* f114096114222 = encode_clo(clo115005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f114096114222;
arg_buffer[3] = a113999114221;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114365 = encode_clo(alloc_clo(lam114365_fptr, 0));

void* lam114367_fptr() // lam114367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114368 = arg_buffer[1];
//reading env and args
void* a113998114219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env114368))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env114368))[5];
//not do dummy comment
void* lst2 = (decode_clo(env114368))[4];
//not do dummy comment
void* car = (decode_clo(env114368))[3];
//not do dummy comment
void* cons = (decode_clo(env114368))[2];
//not do dummy comment
void* kont114095 = (decode_clo(env114368))[1];

//creating new closure instance
void** clo115007 = alloc_clo(lam114365_fptr, 5);

//setting env list
clo115007[1] = kont114095;
clo115007[2] = cons;
clo115007[3] = lst2;
clo115007[4] = a113998114219;
clo115007[5] = reverse_u45helper;
void* f114097114220 = encode_clo(clo115007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114097114220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114367 = encode_clo(alloc_clo(lam114367_fptr, 0));

void* lam114369_fptr() // lam114369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114370 = arg_buffer[1];
//reading env and args
void* a113997114217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114370))[7];
//not do dummy comment
void* lst = (decode_clo(env114370))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env114370))[5];
//not do dummy comment
void* lst2 = (decode_clo(env114370))[4];
//not do dummy comment
void* car = (decode_clo(env114370))[3];
//not do dummy comment
void* cons = (decode_clo(env114370))[2];
//not do dummy comment
void* kont114095 = (decode_clo(env114370))[1];

//if-clause
bool if_guard115008 = is_true(a113997114217);
if(if_guard115008)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114095);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114095))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo115010 = alloc_clo(lam114367_fptr, 6);

//setting env list
clo115010[1] = kont114095;
clo115010[2] = cons;
clo115010[3] = car;
clo115010[4] = lst2;
clo115010[5] = reverse_u45helper;
clo115010[6] = lst;
void* f114098114218 = encode_clo(clo115010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114098114218;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114369 = encode_clo(alloc_clo(lam114369_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114371 = arg_buffer[1];
//reading env and args
void* kont114095 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo115012 = alloc_clo(lam114369_fptr, 7);

//setting env list
clo115012[1] = kont114095;
clo115012[2] = cons;
clo115012[3] = car;
clo115012[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo115012[5] = reverse_u45helper;
clo115012[6] = lst;
clo115012[7] = cdr;
void* f114099114216 = encode_clo(clo115012);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114099114216;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam114372_fptr() // lam114372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114373 = arg_buffer[1];
//reading env and args
void* a114001114225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env114373))[3];
//not do dummy comment
void* lst = (decode_clo(env114373))[2];
//not do dummy comment
void* kont114100 = (decode_clo(env114373))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont114100;
arg_buffer[3] = lst;
arg_buffer[4] = a114001114225;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114372 = encode_clo(alloc_clo(lam114372_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114374 = arg_buffer[1];
//reading env and args
void* kont114100 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo115014 = alloc_clo(lam114372_fptr, 3);

//setting env list
clo115014[1] = kont114100;
clo115014[2] = lst;
clo115014[3] = reverse_u45helper;
void* f114101114224 = encode_clo(clo115014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f114101114224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam114375_fptr() // lam114375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114376 = arg_buffer[1];
//reading env and args
void* x114004114230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114102 = (decode_clo(env114376))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114102);
arg_buffer[2] = x114004114230;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114102))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114375 = encode_clo(alloc_clo(lam114375_fptr, 0));

void* lam114377_fptr() // lam114377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114378 = arg_buffer[1];
//reading env and args
void* a114009114239 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114102 = (decode_clo(env114378))[4];
//not do dummy comment
void* a114005114232 = (decode_clo(env114378))[3];
//not do dummy comment
void* a114007114235 = (decode_clo(env114378))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env114378))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont114102;
arg_buffer[3] = a114005114232;
arg_buffer[4] = a114007114235;
arg_buffer[5] = a114009114239;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114377 = encode_clo(alloc_clo(lam114377_fptr, 0));

void* lam114379_fptr() // lam114379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114380 = arg_buffer[1];
//reading env and args
void* a114008114237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114102 = (decode_clo(env114380))[6];
//not do dummy comment
void* a114005114232 = (decode_clo(env114380))[5];
//not do dummy comment
void* a114007114235 = (decode_clo(env114380))[4];
//not do dummy comment
void* cons = (decode_clo(env114380))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env114380))[2];
//not do dummy comment
void* lst2 = (decode_clo(env114380))[1];

//creating new closure instance
void** clo115016 = alloc_clo(lam114377_fptr, 4);

//setting env list
clo115016[1] = take_u45helper;
clo115016[2] = a114007114235;
clo115016[3] = a114005114232;
clo115016[4] = kont114102;
void* f114104114238 = encode_clo(clo115016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f114104114238;
arg_buffer[3] = a114008114237;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114379 = encode_clo(alloc_clo(lam114379_fptr, 0));

void* lam114381_fptr() // lam114381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114382 = arg_buffer[1];
//reading env and args
void* a114007114235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env114382))[7];
//not do dummy comment
void* kont114102 = (decode_clo(env114382))[6];
//not do dummy comment
void* a114005114232 = (decode_clo(env114382))[5];
//not do dummy comment
void* car = (decode_clo(env114382))[4];
//not do dummy comment
void* cons = (decode_clo(env114382))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env114382))[2];
//not do dummy comment
void* lst2 = (decode_clo(env114382))[1];

//creating new closure instance
void** clo115018 = alloc_clo(lam114379_fptr, 6);

//setting env list
clo115018[1] = lst2;
clo115018[2] = take_u45helper;
clo115018[3] = cons;
clo115018[4] = a114007114235;
clo115018[5] = a114005114232;
clo115018[6] = kont114102;
void* f114105114236 = encode_clo(clo115018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114105114236;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114381 = encode_clo(alloc_clo(lam114381_fptr, 0));

void* lam114384_fptr() // lam114384 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114385 = arg_buffer[1];
//reading env and args
void* a114005114232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env114385))[8];
//not do dummy comment
void* kont114102 = (decode_clo(env114385))[7];
//not do dummy comment
void* cons = (decode_clo(env114385))[6];
//not do dummy comment
void* _u45 = (decode_clo(env114385))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env114385))[4];
//not do dummy comment
void* lst2 = (decode_clo(env114385))[3];
//not do dummy comment
void* n = (decode_clo(env114385))[2];
//not do dummy comment
void* car = (decode_clo(env114385))[1];
mpz_t* mpzvar115019 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115019, "1", 10);
void* a114006114233 = encode_mpz(mpzvar115019);

//creating new closure instance
void** clo115021 = alloc_clo(lam114381_fptr, 7);

//setting env list
clo115021[1] = lst2;
clo115021[2] = take_u45helper;
clo115021[3] = cons;
clo115021[4] = car;
clo115021[5] = a114005114232;
clo115021[6] = kont114102;
clo115021[7] = lst;
void* f114106114234 = encode_clo(clo115021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f114106114234;
arg_buffer[3] = n;
arg_buffer[4] = a114006114233;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114384 = encode_clo(alloc_clo(lam114384_fptr, 0));

void* lam114386_fptr() // lam114386 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114387 = arg_buffer[1];
//reading env and args
void* a114003114228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114387))[10];
//not do dummy comment
void* lst = (decode_clo(env114387))[9];
//not do dummy comment
void* kont114102 = (decode_clo(env114387))[8];
//not do dummy comment
void* reverse = (decode_clo(env114387))[7];
//not do dummy comment
void* cons = (decode_clo(env114387))[6];
//not do dummy comment
void* _u45 = (decode_clo(env114387))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env114387))[4];
//not do dummy comment
void* lst2 = (decode_clo(env114387))[3];
//not do dummy comment
void* n = (decode_clo(env114387))[2];
//not do dummy comment
void* car = (decode_clo(env114387))[1];

//if-clause
bool if_guard115022 = is_true(a114003114228);
if(if_guard115022)
{

//creating new closure instance
void** clo115024 = alloc_clo(lam114375_fptr, 1);

//setting env list
clo115024[1] = kont114102;
void* f114103114229 = encode_clo(clo115024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f114103114229;
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
void** clo115026 = alloc_clo(lam114384_fptr, 8);

//setting env list
clo115026[1] = car;
clo115026[2] = n;
clo115026[3] = lst2;
clo115026[4] = take_u45helper;
clo115026[5] = _u45;
clo115026[6] = cons;
clo115026[7] = kont114102;
clo115026[8] = lst;
void* f114107114231 = encode_clo(clo115026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114107114231;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114386 = encode_clo(alloc_clo(lam114386_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114389 = arg_buffer[1];
//reading env and args
void* kont114102 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar115027 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115027, "0", 10);
void* a114002114226 = encode_mpz(mpzvar115027);

//creating new closure instance
void** clo115029 = alloc_clo(lam114386_fptr, 10);

//setting env list
clo115029[1] = car;
clo115029[2] = n;
clo115029[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo115029[4] = take_u45helper;
clo115029[5] = _u45;
clo115029[6] = cons;
clo115029[7] = reverse;
clo115029[8] = kont114102;
clo115029[9] = lst;
clo115029[10] = cdr;
void* f114108114227 = encode_clo(clo115029);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f114108114227;
arg_buffer[3] = n;
arg_buffer[4] = a114002114226;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam114390_fptr() // lam114390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114391 = arg_buffer[1];
//reading env and args
void* a114010114241 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env114391))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env114391))[3];
//not do dummy comment
void* kont114109 = (decode_clo(env114391))[2];
//not do dummy comment
void* n = (decode_clo(env114391))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont114109;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a114010114241;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114390 = encode_clo(alloc_clo(lam114390_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114392 = arg_buffer[1];
//reading env and args
void* kont114109 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo115031 = alloc_clo(lam114390_fptr, 4);

//setting env list
clo115031[1] = n;
clo115031[2] = kont114109;
clo115031[3] = take_u45helper;
clo115031[4] = lst;
void* f114110114240 = encode_clo(clo115031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f114110114240;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam114394_fptr() // lam114394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114395 = arg_buffer[1];
//reading env and args
void* a114015114249 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a114013114245 = (decode_clo(env114395))[3];
//not do dummy comment
void* _u43 = (decode_clo(env114395))[2];
//not do dummy comment
void* kont114111 = (decode_clo(env114395))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont114111;
arg_buffer[3] = a114013114245;
arg_buffer[4] = a114015114249;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114394 = encode_clo(alloc_clo(lam114394_fptr, 0));

void* lam114396_fptr() // lam114396 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114397 = arg_buffer[1];
//reading env and args
void* a114014114247 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env114397))[4];
//not do dummy comment
void* kont114111 = (decode_clo(env114397))[3];
//not do dummy comment
void* a114013114245 = (decode_clo(env114397))[2];
//not do dummy comment
void* length = (decode_clo(env114397))[1];

//creating new closure instance
void** clo115033 = alloc_clo(lam114394_fptr, 3);

//setting env list
clo115033[1] = kont114111;
clo115033[2] = _u43;
clo115033[3] = a114013114245;
void* f114112114248 = encode_clo(clo115033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f114112114248;
arg_buffer[3] = a114014114247;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114396 = encode_clo(alloc_clo(lam114396_fptr, 0));

void* lam114399_fptr() // lam114399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114400 = arg_buffer[1];
//reading env and args
void* a114011114243 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114400))[5];
//not do dummy comment
void* lst = (decode_clo(env114400))[4];
//not do dummy comment
void* length = (decode_clo(env114400))[3];
//not do dummy comment
void* _u43 = (decode_clo(env114400))[2];
//not do dummy comment
void* kont114111 = (decode_clo(env114400))[1];

//if-clause
bool if_guard115034 = is_true(a114011114243);
if(if_guard115034)
{
mpz_t* mpzvar115035 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115035, "0", 10);
void* x114012114244 = encode_mpz(mpzvar115035);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114111);
arg_buffer[2] = x114012114244;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114111))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar115036 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115036, "1", 10);
void* a114013114245 = encode_mpz(mpzvar115036);

//creating new closure instance
void** clo115038 = alloc_clo(lam114396_fptr, 4);

//setting env list
clo115038[1] = length;
clo115038[2] = a114013114245;
clo115038[3] = kont114111;
clo115038[4] = _u43;
void* f114113114246 = encode_clo(clo115038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114113114246;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114399 = encode_clo(alloc_clo(lam114399_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114401 = arg_buffer[1];
//reading env and args
void* kont114111 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo115040 = alloc_clo(lam114399_fptr, 5);

//setting env list
clo115040[1] = kont114111;
clo115040[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo115040[3] = length;
clo115040[4] = lst;
clo115040[5] = cdr;
void* f114114114242 = encode_clo(clo115040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114114114242;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam114402_fptr() // lam114402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114403 = arg_buffer[1];
//reading env and args
void* x114017114253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114115 = (decode_clo(env114403))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114115);
arg_buffer[2] = x114017114253;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114115))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114402 = encode_clo(alloc_clo(lam114402_fptr, 0));

void* lam114404_fptr() // lam114404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114405 = arg_buffer[1];
//reading env and args
void* a114021114261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a114019114257 = (decode_clo(env114405))[3];
//not do dummy comment
void* kont114115 = (decode_clo(env114405))[2];
//not do dummy comment
void* cons = (decode_clo(env114405))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont114115;
arg_buffer[3] = a114019114257;
arg_buffer[4] = a114021114261;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114404 = encode_clo(alloc_clo(lam114404_fptr, 0));

void* lam114406_fptr() // lam114406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114407 = arg_buffer[1];
//reading env and args
void* a114020114259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a114019114257 = (decode_clo(env114407))[5];
//not do dummy comment
void* kont114115 = (decode_clo(env114407))[4];
//not do dummy comment
void* map = (decode_clo(env114407))[3];
//not do dummy comment
void* proc = (decode_clo(env114407))[2];
//not do dummy comment
void* cons = (decode_clo(env114407))[1];

//creating new closure instance
void** clo115042 = alloc_clo(lam114404_fptr, 3);

//setting env list
clo115042[1] = cons;
clo115042[2] = kont114115;
clo115042[3] = a114019114257;
void* f114117114260 = encode_clo(clo115042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f114117114260;
arg_buffer[3] = proc;
arg_buffer[4] = a114020114259;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114406 = encode_clo(alloc_clo(lam114406_fptr, 0));

void* lam114408_fptr() // lam114408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114409 = arg_buffer[1];
//reading env and args
void* a114019114257 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114409))[6];
//not do dummy comment
void* kont114115 = (decode_clo(env114409))[5];
//not do dummy comment
void* lst = (decode_clo(env114409))[4];
//not do dummy comment
void* map = (decode_clo(env114409))[3];
//not do dummy comment
void* proc = (decode_clo(env114409))[2];
//not do dummy comment
void* cons = (decode_clo(env114409))[1];

//creating new closure instance
void** clo115044 = alloc_clo(lam114406_fptr, 5);

//setting env list
clo115044[1] = cons;
clo115044[2] = proc;
clo115044[3] = map;
clo115044[4] = kont114115;
clo115044[5] = a114019114257;
void* f114118114258 = encode_clo(clo115044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114118114258;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114408 = encode_clo(alloc_clo(lam114408_fptr, 0));

void* lam114410_fptr() // lam114410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114411 = arg_buffer[1];
//reading env and args
void* a114018114255 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114411))[6];
//not do dummy comment
void* kont114115 = (decode_clo(env114411))[5];
//not do dummy comment
void* lst = (decode_clo(env114411))[4];
//not do dummy comment
void* map = (decode_clo(env114411))[3];
//not do dummy comment
void* proc = (decode_clo(env114411))[2];
//not do dummy comment
void* cons = (decode_clo(env114411))[1];

//creating new closure instance
void** clo115046 = alloc_clo(lam114408_fptr, 6);

//setting env list
clo115046[1] = cons;
clo115046[2] = proc;
clo115046[3] = map;
clo115046[4] = lst;
clo115046[5] = kont114115;
clo115046[6] = cdr;
void* f114119114256 = encode_clo(clo115046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f114119114256;
arg_buffer[3] = a114018114255;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114410 = encode_clo(alloc_clo(lam114410_fptr, 0));

void* lam114412_fptr() // lam114412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114413 = arg_buffer[1];
//reading env and args
void* a114016114251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114115 = (decode_clo(env114413))[8];
//not do dummy comment
void* lst = (decode_clo(env114413))[7];
//not do dummy comment
void* map = (decode_clo(env114413))[6];
//not do dummy comment
void* proc = (decode_clo(env114413))[5];
//not do dummy comment
void* car = (decode_clo(env114413))[4];
//not do dummy comment
void* cons = (decode_clo(env114413))[3];
//not do dummy comment
void* list = (decode_clo(env114413))[2];
//not do dummy comment
void* cdr = (decode_clo(env114413))[1];

//if-clause
bool if_guard115047 = is_true(a114016114251);
if(if_guard115047)
{

//creating new closure instance
void** clo115049 = alloc_clo(lam114402_fptr, 1);

//setting env list
clo115049[1] = kont114115;
void* f114116114252 = encode_clo(clo115049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f114116114252;
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
void** clo115051 = alloc_clo(lam114410_fptr, 6);

//setting env list
clo115051[1] = cons;
clo115051[2] = proc;
clo115051[3] = map;
clo115051[4] = lst;
clo115051[5] = kont114115;
clo115051[6] = cdr;
void* f114120114254 = encode_clo(clo115051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114120114254;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114412 = encode_clo(alloc_clo(lam114412_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114414 = arg_buffer[1];
//reading env and args
void* kont114115 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo115053 = alloc_clo(lam114412_fptr, 8);

//setting env list
clo115053[1] = cdr;
clo115053[2] = list;
clo115053[3] = cons;
clo115053[4] = car;
clo115053[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo115053[6] = map;
clo115053[7] = lst;
clo115053[8] = kont114115;
void* f114121114250 = encode_clo(clo115053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114121114250;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam114415_fptr() // lam114415 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114416 = arg_buffer[1];
//reading env and args
void* x114023114265 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114122 = (decode_clo(env114416))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114122);
arg_buffer[2] = x114023114265;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114122))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114415 = encode_clo(alloc_clo(lam114415_fptr, 0));

void* lam114417_fptr() // lam114417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114418 = arg_buffer[1];
//reading env and args
void* a114028114275 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114122 = (decode_clo(env114418))[3];
//not do dummy comment
void* cons = (decode_clo(env114418))[2];
//not do dummy comment
void* a114026114271 = (decode_clo(env114418))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont114122;
arg_buffer[3] = a114026114271;
arg_buffer[4] = a114028114275;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114417 = encode_clo(alloc_clo(lam114417_fptr, 0));

void* lam114419_fptr() // lam114419 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114420 = arg_buffer[1];
//reading env and args
void* a114027114273 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env114420))[5];
//not do dummy comment
void* kont114122 = (decode_clo(env114420))[4];
//not do dummy comment
void* filter = (decode_clo(env114420))[3];
//not do dummy comment
void* cons = (decode_clo(env114420))[2];
//not do dummy comment
void* a114026114271 = (decode_clo(env114420))[1];

//creating new closure instance
void** clo115055 = alloc_clo(lam114417_fptr, 3);

//setting env list
clo115055[1] = a114026114271;
clo115055[2] = cons;
clo115055[3] = kont114122;
void* f114124114274 = encode_clo(clo115055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f114124114274;
arg_buffer[3] = op;
arg_buffer[4] = a114027114273;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114419 = encode_clo(alloc_clo(lam114419_fptr, 0));

void* lam114421_fptr() // lam114421 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114422 = arg_buffer[1];
//reading env and args
void* a114026114271 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114422))[6];
//not do dummy comment
void* lst = (decode_clo(env114422))[5];
//not do dummy comment
void* op = (decode_clo(env114422))[4];
//not do dummy comment
void* kont114122 = (decode_clo(env114422))[3];
//not do dummy comment
void* filter = (decode_clo(env114422))[2];
//not do dummy comment
void* cons = (decode_clo(env114422))[1];

//creating new closure instance
void** clo115057 = alloc_clo(lam114419_fptr, 5);

//setting env list
clo115057[1] = a114026114271;
clo115057[2] = cons;
clo115057[3] = filter;
clo115057[4] = kont114122;
clo115057[5] = op;
void* f114125114272 = encode_clo(clo115057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114125114272;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114421 = encode_clo(alloc_clo(lam114421_fptr, 0));

void* lam114423_fptr() // lam114423 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114424 = arg_buffer[1];
//reading env and args
void* a114029114277 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env114424))[3];
//not do dummy comment
void* kont114122 = (decode_clo(env114424))[2];
//not do dummy comment
void* filter = (decode_clo(env114424))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont114122;
arg_buffer[3] = op;
arg_buffer[4] = a114029114277;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114423 = encode_clo(alloc_clo(lam114423_fptr, 0));

void* lam114425_fptr() // lam114425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114426 = arg_buffer[1];
//reading env and args
void* a114025114269 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114426))[7];
//not do dummy comment
void* lst = (decode_clo(env114426))[6];
//not do dummy comment
void* op = (decode_clo(env114426))[5];
//not do dummy comment
void* kont114122 = (decode_clo(env114426))[4];
//not do dummy comment
void* cons = (decode_clo(env114426))[3];
//not do dummy comment
void* filter = (decode_clo(env114426))[2];
//not do dummy comment
void* car = (decode_clo(env114426))[1];

//if-clause
bool if_guard115058 = is_true(a114025114269);
if(if_guard115058)
{

//creating new closure instance
void** clo115060 = alloc_clo(lam114421_fptr, 6);

//setting env list
clo115060[1] = cons;
clo115060[2] = filter;
clo115060[3] = kont114122;
clo115060[4] = op;
clo115060[5] = lst;
clo115060[6] = cdr;
void* f114126114270 = encode_clo(clo115060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114126114270;
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
void** clo115062 = alloc_clo(lam114423_fptr, 3);

//setting env list
clo115062[1] = filter;
clo115062[2] = kont114122;
clo115062[3] = op;
void* f114127114276 = encode_clo(clo115062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114127114276;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114425 = encode_clo(alloc_clo(lam114425_fptr, 0));

void* lam114427_fptr() // lam114427 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114428 = arg_buffer[1];
//reading env and args
void* a114024114267 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114428))[7];
//not do dummy comment
void* lst = (decode_clo(env114428))[6];
//not do dummy comment
void* op = (decode_clo(env114428))[5];
//not do dummy comment
void* kont114122 = (decode_clo(env114428))[4];
//not do dummy comment
void* cons = (decode_clo(env114428))[3];
//not do dummy comment
void* filter = (decode_clo(env114428))[2];
//not do dummy comment
void* car = (decode_clo(env114428))[1];

//creating new closure instance
void** clo115064 = alloc_clo(lam114425_fptr, 7);

//setting env list
clo115064[1] = car;
clo115064[2] = filter;
clo115064[3] = cons;
clo115064[4] = kont114122;
clo115064[5] = op;
clo115064[6] = lst;
clo115064[7] = cdr;
void* f114128114268 = encode_clo(clo115064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f114128114268;
arg_buffer[3] = a114024114267;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114427 = encode_clo(alloc_clo(lam114427_fptr, 0));

void* lam114429_fptr() // lam114429 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114430 = arg_buffer[1];
//reading env and args
void* a114022114263 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env114430))[8];
//not do dummy comment
void* op = (decode_clo(env114430))[7];
//not do dummy comment
void* kont114122 = (decode_clo(env114430))[6];
//not do dummy comment
void* cons = (decode_clo(env114430))[5];
//not do dummy comment
void* list = (decode_clo(env114430))[4];
//not do dummy comment
void* cdr = (decode_clo(env114430))[3];
//not do dummy comment
void* filter = (decode_clo(env114430))[2];
//not do dummy comment
void* car = (decode_clo(env114430))[1];

//if-clause
bool if_guard115065 = is_true(a114022114263);
if(if_guard115065)
{

//creating new closure instance
void** clo115067 = alloc_clo(lam114415_fptr, 1);

//setting env list
clo115067[1] = kont114122;
void* f114123114264 = encode_clo(clo115067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f114123114264;
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
void** clo115069 = alloc_clo(lam114427_fptr, 7);

//setting env list
clo115069[1] = car;
clo115069[2] = filter;
clo115069[3] = cons;
clo115069[4] = kont114122;
clo115069[5] = op;
clo115069[6] = lst;
clo115069[7] = cdr;
void* f114129114266 = encode_clo(clo115069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114129114266;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114429 = encode_clo(alloc_clo(lam114429_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114431 = arg_buffer[1];
//reading env and args
void* kont114122 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo115071 = alloc_clo(lam114429_fptr, 8);

//setting env list
clo115071[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo115071[2] = filter;
clo115071[3] = cdr;
clo115071[4] = list;
clo115071[5] = cons;
clo115071[6] = kont114122;
clo115071[7] = op;
clo115071[8] = lst;
void* f114130114262 = encode_clo(clo115071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114130114262;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam114432_fptr() // lam114432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114433 = arg_buffer[1];
//reading env and args
void* a114034114285 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114131 = (decode_clo(env114433))[3];
//not do dummy comment
void* drop = (decode_clo(env114433))[2];
//not do dummy comment
void* a114032114282 = (decode_clo(env114433))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont114131;
arg_buffer[3] = a114032114282;
arg_buffer[4] = a114034114285;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114432 = encode_clo(alloc_clo(lam114432_fptr, 0));

void* lam114435_fptr() // lam114435 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114436 = arg_buffer[1];
//reading env and args
void* a114032114282 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114131 = (decode_clo(env114436))[4];
//not do dummy comment
void* drop = (decode_clo(env114436))[3];
//not do dummy comment
void* n = (decode_clo(env114436))[2];
//not do dummy comment
void* _u45 = (decode_clo(env114436))[1];
mpz_t* mpzvar115072 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115072, "1", 10);
void* a114033114283 = encode_mpz(mpzvar115072);

//creating new closure instance
void** clo115074 = alloc_clo(lam114432_fptr, 3);

//setting env list
clo115074[1] = a114032114282;
clo115074[2] = drop;
clo115074[3] = kont114131;
void* f114132114284 = encode_clo(clo115074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f114132114284;
arg_buffer[3] = n;
arg_buffer[4] = a114033114283;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114435 = encode_clo(alloc_clo(lam114435_fptr, 0));

void* lam114437_fptr() // lam114437 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114438 = arg_buffer[1];
//reading env and args
void* a114031114280 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114438))[6];
//not do dummy comment
void* kont114131 = (decode_clo(env114438))[5];
//not do dummy comment
void* n = (decode_clo(env114438))[4];
//not do dummy comment
void* _u45 = (decode_clo(env114438))[3];
//not do dummy comment
void* lst = (decode_clo(env114438))[2];
//not do dummy comment
void* drop = (decode_clo(env114438))[1];

//if-clause
bool if_guard115075 = is_true(a114031114280);
if(if_guard115075)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114131);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114131))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo115077 = alloc_clo(lam114435_fptr, 4);

//setting env list
clo115077[1] = _u45;
clo115077[2] = n;
clo115077[3] = drop;
clo115077[4] = kont114131;
void* f114133114281 = encode_clo(clo115077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114133114281;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114437 = encode_clo(alloc_clo(lam114437_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114440 = arg_buffer[1];
//reading env and args
void* kont114131 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar115078 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115078, "0", 10);
void* a114030114278 = encode_mpz(mpzvar115078);

//creating new closure instance
void** clo115080 = alloc_clo(lam114437_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo115080[1] = drop;
clo115080[2] = lst;
clo115080[3] = _u45;
clo115080[4] = n;
clo115080[5] = kont114131;
clo115080[6] = cdr;
void* f114134114279 = encode_clo(clo115080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f114134114279;
arg_buffer[3] = n;
arg_buffer[4] = a114030114278;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam114441_fptr() // lam114441 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114442 = arg_buffer[1];
//reading env and args
void* a114038114293 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a114036114289 = (decode_clo(env114442))[3];
//not do dummy comment
void* kont114135 = (decode_clo(env114442))[2];
//not do dummy comment
void* proc = (decode_clo(env114442))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont114135;
arg_buffer[3] = a114036114289;
arg_buffer[4] = a114038114293;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114441 = encode_clo(alloc_clo(lam114441_fptr, 0));

void* lam114443_fptr() // lam114443 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114444 = arg_buffer[1];
//reading env and args
void* a114037114291 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a114036114289 = (decode_clo(env114444))[5];
//not do dummy comment
void* foldr = (decode_clo(env114444))[4];
//not do dummy comment
void* kont114135 = (decode_clo(env114444))[3];
//not do dummy comment
void* proc = (decode_clo(env114444))[2];
//not do dummy comment
void* acc = (decode_clo(env114444))[1];

//creating new closure instance
void** clo115082 = alloc_clo(lam114441_fptr, 3);

//setting env list
clo115082[1] = proc;
clo115082[2] = kont114135;
clo115082[3] = a114036114289;
void* f114136114292 = encode_clo(clo115082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f114136114292;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a114037114291;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114443 = encode_clo(alloc_clo(lam114443_fptr, 0));

void* lam114445_fptr() // lam114445 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114446 = arg_buffer[1];
//reading env and args
void* a114036114289 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114446))[6];
//not do dummy comment
void* kont114135 = (decode_clo(env114446))[5];
//not do dummy comment
void* foldr = (decode_clo(env114446))[4];
//not do dummy comment
void* lst = (decode_clo(env114446))[3];
//not do dummy comment
void* proc = (decode_clo(env114446))[2];
//not do dummy comment
void* acc = (decode_clo(env114446))[1];

//creating new closure instance
void** clo115084 = alloc_clo(lam114443_fptr, 5);

//setting env list
clo115084[1] = acc;
clo115084[2] = proc;
clo115084[3] = kont114135;
clo115084[4] = foldr;
clo115084[5] = a114036114289;
void* f114137114290 = encode_clo(clo115084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114137114290;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114445 = encode_clo(alloc_clo(lam114445_fptr, 0));

void* lam114447_fptr() // lam114447 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114448 = arg_buffer[1];
//reading env and args
void* a114035114287 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114448))[7];
//not do dummy comment
void* kont114135 = (decode_clo(env114448))[6];
//not do dummy comment
void* car = (decode_clo(env114448))[5];
//not do dummy comment
void* foldr = (decode_clo(env114448))[4];
//not do dummy comment
void* lst = (decode_clo(env114448))[3];
//not do dummy comment
void* proc = (decode_clo(env114448))[2];
//not do dummy comment
void* acc = (decode_clo(env114448))[1];

//if-clause
bool if_guard115085 = is_true(a114035114287);
if(if_guard115085)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114135);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114135))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo115087 = alloc_clo(lam114445_fptr, 6);

//setting env list
clo115087[1] = acc;
clo115087[2] = proc;
clo115087[3] = lst;
clo115087[4] = foldr;
clo115087[5] = kont114135;
clo115087[6] = cdr;
void* f114138114288 = encode_clo(clo115087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114138114288;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114447 = encode_clo(alloc_clo(lam114447_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114449 = arg_buffer[1];
//reading env and args
void* kont114135 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo115089 = alloc_clo(lam114447_fptr, 7);

//setting env list
clo115089[1] = acc;
clo115089[2] = proc;
clo115089[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo115089[4] = foldr;
clo115089[5] = car;
clo115089[6] = kont114135;
clo115089[7] = cdr;
void* f114139114286 = encode_clo(clo115089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114139114286;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam114450_fptr() // lam114450 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114451 = arg_buffer[1];
//reading env and args
void* a114042114301 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a114040114297 = (decode_clo(env114451))[3];
//not do dummy comment
void* kont114140 = (decode_clo(env114451))[2];
//not do dummy comment
void* cons = (decode_clo(env114451))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont114140;
arg_buffer[3] = a114040114297;
arg_buffer[4] = a114042114301;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114450 = encode_clo(alloc_clo(lam114450_fptr, 0));

void* lam114452_fptr() // lam114452 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114453 = arg_buffer[1];
//reading env and args
void* a114041114299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env114453))[5];
//not do dummy comment
void* a114040114297 = (decode_clo(env114453))[4];
//not do dummy comment
void* cons = (decode_clo(env114453))[3];
//not do dummy comment
void* lst2 = (decode_clo(env114453))[2];
//not do dummy comment
void* kont114140 = (decode_clo(env114453))[1];

//creating new closure instance
void** clo115091 = alloc_clo(lam114450_fptr, 3);

//setting env list
clo115091[1] = cons;
clo115091[2] = kont114140;
clo115091[3] = a114040114297;
void* f114141114300 = encode_clo(clo115091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f114141114300;
arg_buffer[3] = a114041114299;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114452 = encode_clo(alloc_clo(lam114452_fptr, 0));

void* lam114454_fptr() // lam114454 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114455 = arg_buffer[1];
//reading env and args
void* a114040114297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114455))[6];
//not do dummy comment
void* append = (decode_clo(env114455))[5];
//not do dummy comment
void* lst1 = (decode_clo(env114455))[4];
//not do dummy comment
void* cons = (decode_clo(env114455))[3];
//not do dummy comment
void* lst2 = (decode_clo(env114455))[2];
//not do dummy comment
void* kont114140 = (decode_clo(env114455))[1];

//creating new closure instance
void** clo115093 = alloc_clo(lam114452_fptr, 5);

//setting env list
clo115093[1] = kont114140;
clo115093[2] = lst2;
clo115093[3] = cons;
clo115093[4] = a114040114297;
clo115093[5] = append;
void* f114142114298 = encode_clo(clo115093);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f114142114298;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114454 = encode_clo(alloc_clo(lam114454_fptr, 0));

void* lam114456_fptr() // lam114456 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114457 = arg_buffer[1];
//reading env and args
void* a114039114295 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env114457))[7];
//not do dummy comment
void* append = (decode_clo(env114457))[6];
//not do dummy comment
void* cons = (decode_clo(env114457))[5];
//not do dummy comment
void* lst2 = (decode_clo(env114457))[4];
//not do dummy comment
void* kont114140 = (decode_clo(env114457))[3];
//not do dummy comment
void* lst1 = (decode_clo(env114457))[2];
//not do dummy comment
void* car = (decode_clo(env114457))[1];

//if-clause
bool if_guard115094 = is_true(a114039114295);
if(if_guard115094)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114140);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114140))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo115096 = alloc_clo(lam114454_fptr, 6);

//setting env list
clo115096[1] = kont114140;
clo115096[2] = lst2;
clo115096[3] = cons;
clo115096[4] = lst1;
clo115096[5] = append;
clo115096[6] = cdr;
void* f114143114296 = encode_clo(clo115096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f114143114296;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam114456 = encode_clo(alloc_clo(lam114456_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114458 = arg_buffer[1];
//reading env and args
void* kont114140 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo115098 = alloc_clo(lam114456_fptr, 7);

//setting env list
clo115098[1] = car;
clo115098[2] = lst1;
clo115098[3] = kont114140;
clo115098[4] = lst2;
clo115098[5] = cons;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo115098[6] = append;
clo115098[7] = cdr;
void* f114144114294 = encode_clo(clo115098);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f114144114294;
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
void* _114459 = arg_buffer[1];
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

void* kont114145114302 = prim_car(lst);
void* lst114303 = prim_cdr(lst);
void* x114043114304 = apply_prim_hash(lst114303);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114145114302);
arg_buffer[2] = x114043114304;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114145114302))[0]);
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
void* _114460 = arg_buffer[1];
//reading env and args
void* kont114147 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x114044114305 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114147);
arg_buffer[2] = x114044114305;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114147))[0]);
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
void* _114461 = arg_buffer[1];
//reading env and args
void* kont114148 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x114045114306 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114148);
arg_buffer[2] = x114045114306;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114148))[0]);
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
void* _114462 = arg_buffer[1];
//reading env and args
void* kont114149 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x114046114307 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114149);
arg_buffer[2] = x114046114307;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114149))[0]);
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
void* _114463 = arg_buffer[1];
//reading env and args
void* kont114150 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x114047114308 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114150);
arg_buffer[2] = x114047114308;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114150))[0]);
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
void* _114469 = arg_buffer[1];
//reading env and args
void* kont114151 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar115099 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115099, "100", 10);
void* a114048114309 = encode_mpz(mpzvar115099);
mpz_t* mpzvar115100 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115100, "90", 10);
void* a114049114310 = encode_mpz(mpzvar115100);
mpz_t* mpzvar115101 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115101, "80", 10);
void* a114050114311 = encode_mpz(mpzvar115101);
mpz_t* mpzvar115102 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115102, "70", 10);
void* a114051114312 = encode_mpz(mpzvar115102);
mpz_t* mpzvar115103 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar115103, "60", 10);
void* a114052114313 = encode_mpz(mpzvar115103);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62_u61);
arg_buffer[2] = kont114151;
arg_buffer[3] = a114048114309;
arg_buffer[4] = a114049114310;
arg_buffer[5] = a114050114311;
arg_buffer[6] = a114051114312;
arg_buffer[7] = a114052114313;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam114470_fptr() // lam114470 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env114471 = arg_buffer[1];
//reading env and args
void* x114053114315 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont114152 = (decode_clo(env114471))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont114152);
arg_buffer[2] = x114053114315;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont114152))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam114470 = encode_clo(alloc_clo(lam114470_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _114472 = arg_buffer[1];
//reading env and args
void* kont114152 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo115105 = alloc_clo(lam114470_fptr, 1);

//setting env list
clo115105[1] = kont114152;
void* f114153114314 = encode_clo(clo115105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f114153114314;
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

