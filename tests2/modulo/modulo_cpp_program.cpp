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
void* _46252 = arg_buffer[1];
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

void* kont4599346093 = prim_car(lst);
void* lst46094 = prim_cdr(lst);
void* x4590746095 = apply_prim__u43(lst46094);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4599346093);
arg_buffer[2] = x4590746095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4599346093))[0]);
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
void* _46253 = arg_buffer[1];
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

void* kont4599546096 = prim_car(lst);
void* lst46097 = prim_cdr(lst);
void* x4590846098 = apply_prim__u45(lst46097);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4599546096);
arg_buffer[2] = x4590846098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4599546096))[0]);
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
void* _46254 = arg_buffer[1];
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

void* kont4599746099 = prim_car(lst);
void* lst46100 = prim_cdr(lst);
void* x4590946101 = apply_prim__u42(lst46100);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4599746099);
arg_buffer[2] = x4590946101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4599746099))[0]);
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
void* _46255 = arg_buffer[1];
//reading env and args
void* kont45999 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4591046102 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45999);
arg_buffer[2] = x4591046102;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45999))[0]);
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
void* _46256 = arg_buffer[1];
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

void* kont4600046103 = prim_car(lst);
void* lst46104 = prim_cdr(lst);
void* x4591146105 = apply_prim__u47(lst46104);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4600046103);
arg_buffer[2] = x4591146105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4600046103))[0]);
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
void* _46257 = arg_buffer[1];
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

void* kont4600246106 = prim_car(lst);
void* lst46107 = prim_cdr(lst);
void* x4591246108 = apply_prim__u61(lst46107);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4600246106);
arg_buffer[2] = x4591246108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4600246106))[0]);
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
void* _46258 = arg_buffer[1];
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

void* kont4600446109 = prim_car(lst);
void* lst46110 = prim_cdr(lst);
void* x4591346111 = apply_prim__u62(lst46110);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4600446109);
arg_buffer[2] = x4591346111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4600446109))[0]);
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
void* _46259 = arg_buffer[1];
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

void* kont4600646112 = prim_car(lst);
void* lst46113 = prim_cdr(lst);
void* x4591446114 = apply_prim__u60(lst46113);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4600646112);
arg_buffer[2] = x4591446114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4600646112))[0]);
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
void* _46260 = arg_buffer[1];
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

void* kont4600846115 = prim_car(lst);
void* lst46116 = prim_cdr(lst);
void* x4591546117 = apply_prim__u60_u61(lst46116);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4600846115);
arg_buffer[2] = x4591546117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4600846115))[0]);
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
void* _46261 = arg_buffer[1];
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

void* kont4601046118 = prim_car(lst);
void* lst46119 = prim_cdr(lst);
void* x4591646120 = apply_prim__u62_u61(lst46119);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4601046118);
arg_buffer[2] = x4591646120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4601046118))[0]);
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
void* _46262 = arg_buffer[1];
//reading env and args
void* kont46012 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4591746121 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46012);
arg_buffer[2] = x4591746121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46012))[0]);
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
void* _46263 = arg_buffer[1];
//reading env and args
void* kont46013 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4591846122 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46013);
arg_buffer[2] = x4591846122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46013))[0]);
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
void* _46264 = arg_buffer[1];
//reading env and args
void* kont46014 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4591946123 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46014);
arg_buffer[2] = x4591946123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46014))[0]);
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
void* _46265 = arg_buffer[1];
//reading env and args
void* kont46015 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4592046124 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46015);
arg_buffer[2] = x4592046124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46015))[0]);
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
void* _46266 = arg_buffer[1];
//reading env and args
void* kont46016 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4592146125 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46016);
arg_buffer[2] = x4592146125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46016))[0]);
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
void* _46267 = arg_buffer[1];
//reading env and args
void* kont46017 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4592246126 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46017);
arg_buffer[2] = x4592246126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46017))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam46268_fptr() // lam46268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46269 = arg_buffer[1];
//reading env and args
void* a4592546130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46018 = (decode_clo(env46269))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env46269))[2];
//not do dummy comment
void* a4592346127 = (decode_clo(env46269))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont46018;
arg_buffer[3] = a4592346127;
arg_buffer[4] = a4592546130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46268 = encode_clo(alloc_clo(lam46268_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46272 = arg_buffer[1];
//reading env and args
void* kont46018 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46686 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46686, "0", 10);
void* a4592346127 = encode_mpz(mpzvar46686);
mpz_t* mpzvar46687 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46687, "2", 10);
void* a4592446128 = encode_mpz(mpzvar46687);

//creating new closure instance
void** clo46689 = alloc_clo(lam46268_fptr, 3);

//setting env list
clo46689[1] = a4592346127;
clo46689[2] = equal_u63;
clo46689[3] = kont46018;
void* f4601946129 = encode_clo(clo46689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4601946129;
arg_buffer[3] = x;
arg_buffer[4] = a4592446128;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam46273_fptr() // lam46273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46274 = arg_buffer[1];
//reading env and args
void* a4592846134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4592646131 = (decode_clo(env46274))[3];
//not do dummy comment
void* kont46020 = (decode_clo(env46274))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env46274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont46020;
arg_buffer[3] = a4592646131;
arg_buffer[4] = a4592846134;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46273 = encode_clo(alloc_clo(lam46273_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46277 = arg_buffer[1];
//reading env and args
void* kont46020 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46690 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46690, "1", 10);
void* a4592646131 = encode_mpz(mpzvar46690);
mpz_t* mpzvar46691 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46691, "2", 10);
void* a4592746132 = encode_mpz(mpzvar46691);

//creating new closure instance
void** clo46693 = alloc_clo(lam46273_fptr, 3);

//setting env list
clo46693[1] = equal_u63;
clo46693[2] = kont46020;
clo46693[3] = a4592646131;
void* f4602146133 = encode_clo(clo46693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4602146133;
arg_buffer[3] = x;
arg_buffer[4] = a4592746132;
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
void* _46278 = arg_buffer[1];
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

void* kont4602246135 = prim_car(x);
void* x46136 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4602246135);
arg_buffer[2] = x46136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4602246135))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam46281_fptr() // lam46281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46282 = arg_buffer[1];
//reading env and args
void* a4593446146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46024 = (decode_clo(env46282))[3];
//not do dummy comment
void* x = (decode_clo(env46282))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46282))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont46024;
arg_buffer[3] = x;
arg_buffer[4] = a4593446146;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46281 = encode_clo(alloc_clo(lam46281_fptr, 0));

void* lam46283_fptr() // lam46283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46284 = arg_buffer[1];
//reading env and args
void* a4593246143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46284))[5];
//not do dummy comment
void* lst = (decode_clo(env46284))[4];
//not do dummy comment
void* kont46024 = (decode_clo(env46284))[3];
//not do dummy comment
void* x = (decode_clo(env46284))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46284))[1];

//if-clause
bool if_guard46694 = is_true(a4593246143);
if(if_guard46694)
{
void* x4593346144 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46024);
arg_buffer[2] = x4593346144;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46024))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46696 = alloc_clo(lam46281_fptr, 3);

//setting env list
clo46696[1] = member_u63;
clo46696[2] = x;
clo46696[3] = kont46024;
void* f4602546145 = encode_clo(clo46696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4602546145;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46283 = encode_clo(alloc_clo(lam46283_fptr, 0));

void* lam46285_fptr() // lam46285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46286 = arg_buffer[1];
//reading env and args
void* a4593146141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46286))[6];
//not do dummy comment
void* lst = (decode_clo(env46286))[5];
//not do dummy comment
void* x = (decode_clo(env46286))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env46286))[3];
//not do dummy comment
void* kont46024 = (decode_clo(env46286))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env46286))[1];

//creating new closure instance
void** clo46698 = alloc_clo(lam46283_fptr, 5);

//setting env list
clo46698[1] = member_u63;
clo46698[2] = x;
clo46698[3] = kont46024;
clo46698[4] = lst;
clo46698[5] = cdr;
void* f4602646142 = encode_clo(clo46698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4602646142;
arg_buffer[3] = a4593146141;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46285 = encode_clo(alloc_clo(lam46285_fptr, 0));

void* lam46287_fptr() // lam46287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46288 = arg_buffer[1];
//reading env and args
void* a4592946138 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46288))[7];
//not do dummy comment
void* lst = (decode_clo(env46288))[6];
//not do dummy comment
void* x = (decode_clo(env46288))[5];
//not do dummy comment
void* car = (decode_clo(env46288))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env46288))[3];
//not do dummy comment
void* kont46024 = (decode_clo(env46288))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env46288))[1];

//if-clause
bool if_guard46699 = is_true(a4592946138);
if(if_guard46699)
{
void* x4593046139 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46024);
arg_buffer[2] = x4593046139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46024))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46701 = alloc_clo(lam46285_fptr, 6);

//setting env list
clo46701[1] = equal_u63;
clo46701[2] = kont46024;
clo46701[3] = member_u63;
clo46701[4] = x;
clo46701[5] = lst;
clo46701[6] = cdr;
void* f4602746140 = encode_clo(clo46701);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4602746140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46287 = encode_clo(alloc_clo(lam46287_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46289 = arg_buffer[1];
//reading env and args
void* kont46024 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46703 = alloc_clo(lam46287_fptr, 7);

//setting env list
clo46703[1] = equal_u63;
clo46703[2] = kont46024;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo46703[3] = member_u63;
clo46703[4] = car;
clo46703[5] = x;
clo46703[6] = lst;
clo46703[7] = cdr;
void* f4602846137 = encode_clo(clo46703);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4602846137;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam46290_fptr() // lam46290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46291 = arg_buffer[1];
//reading env and args
void* a4593846154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4593746152 = (decode_clo(env46291))[4];
//not do dummy comment
void* fun = (decode_clo(env46291))[3];
//not do dummy comment
void* kont46029 = (decode_clo(env46291))[2];
//not do dummy comment
void* foldl = (decode_clo(env46291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont46029;
arg_buffer[3] = fun;
arg_buffer[4] = a4593746152;
arg_buffer[5] = a4593846154;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46290 = encode_clo(alloc_clo(lam46290_fptr, 0));

void* lam46292_fptr() // lam46292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46293 = arg_buffer[1];
//reading env and args
void* a4593746152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46293))[5];
//not do dummy comment
void* lst = (decode_clo(env46293))[4];
//not do dummy comment
void* fun = (decode_clo(env46293))[3];
//not do dummy comment
void* kont46029 = (decode_clo(env46293))[2];
//not do dummy comment
void* foldl = (decode_clo(env46293))[1];

//creating new closure instance
void** clo46705 = alloc_clo(lam46290_fptr, 4);

//setting env list
clo46705[1] = foldl;
clo46705[2] = kont46029;
clo46705[3] = fun;
clo46705[4] = a4593746152;
void* f4603046153 = encode_clo(clo46705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4603046153;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46292 = encode_clo(alloc_clo(lam46292_fptr, 0));

void* lam46294_fptr() // lam46294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46295 = arg_buffer[1];
//reading env and args
void* a4593646150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46295))[6];
//not do dummy comment
void* lst = (decode_clo(env46295))[5];
//not do dummy comment
void* fun = (decode_clo(env46295))[4];
//not do dummy comment
void* acc = (decode_clo(env46295))[3];
//not do dummy comment
void* kont46029 = (decode_clo(env46295))[2];
//not do dummy comment
void* foldl = (decode_clo(env46295))[1];

//creating new closure instance
void** clo46707 = alloc_clo(lam46292_fptr, 5);

//setting env list
clo46707[1] = foldl;
clo46707[2] = kont46029;
clo46707[3] = fun;
clo46707[4] = lst;
clo46707[5] = cdr;
void* f4603146151 = encode_clo(clo46707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4603146151;
arg_buffer[3] = a4593646150;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46294 = encode_clo(alloc_clo(lam46294_fptr, 0));

void* lam46296_fptr() // lam46296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46297 = arg_buffer[1];
//reading env and args
void* a4593546148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46297))[7];
//not do dummy comment
void* lst = (decode_clo(env46297))[6];
//not do dummy comment
void* fun = (decode_clo(env46297))[5];
//not do dummy comment
void* acc = (decode_clo(env46297))[4];
//not do dummy comment
void* foldl = (decode_clo(env46297))[3];
//not do dummy comment
void* kont46029 = (decode_clo(env46297))[2];
//not do dummy comment
void* car = (decode_clo(env46297))[1];

//if-clause
bool if_guard46708 = is_true(a4593546148);
if(if_guard46708)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46029);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46029))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46710 = alloc_clo(lam46294_fptr, 6);

//setting env list
clo46710[1] = foldl;
clo46710[2] = kont46029;
clo46710[3] = acc;
clo46710[4] = fun;
clo46710[5] = lst;
clo46710[6] = cdr;
void* f4603246149 = encode_clo(clo46710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4603246149;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46296 = encode_clo(alloc_clo(lam46296_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46298 = arg_buffer[1];
//reading env and args
void* kont46029 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46712 = alloc_clo(lam46296_fptr, 7);

//setting env list
clo46712[1] = car;
clo46712[2] = kont46029;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo46712[3] = foldl;
clo46712[4] = acc;
clo46712[5] = fun;
clo46712[6] = lst;
clo46712[7] = cdr;
void* f4603346147 = encode_clo(clo46712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4603346147;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam46299_fptr() // lam46299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46300 = arg_buffer[1];
//reading env and args
void* a4594246162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46034 = (decode_clo(env46300))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46300))[2];
//not do dummy comment
void* a4594046158 = (decode_clo(env46300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont46034;
arg_buffer[3] = a4594046158;
arg_buffer[4] = a4594246162;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46299 = encode_clo(alloc_clo(lam46299_fptr, 0));

void* lam46301_fptr() // lam46301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46302 = arg_buffer[1];
//reading env and args
void* a4594146160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46034 = (decode_clo(env46302))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46302))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46302))[3];
//not do dummy comment
void* cons = (decode_clo(env46302))[2];
//not do dummy comment
void* a4594046158 = (decode_clo(env46302))[1];

//creating new closure instance
void** clo46714 = alloc_clo(lam46299_fptr, 3);

//setting env list
clo46714[1] = a4594046158;
clo46714[2] = reverse_u45helper;
clo46714[3] = kont46034;
void* f4603546161 = encode_clo(clo46714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4603546161;
arg_buffer[3] = a4594146160;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46301 = encode_clo(alloc_clo(lam46301_fptr, 0));

void* lam46303_fptr() // lam46303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46304 = arg_buffer[1];
//reading env and args
void* a4594046158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46034 = (decode_clo(env46304))[6];
//not do dummy comment
void* lst = (decode_clo(env46304))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46304))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46304))[3];
//not do dummy comment
void* car = (decode_clo(env46304))[2];
//not do dummy comment
void* cons = (decode_clo(env46304))[1];

//creating new closure instance
void** clo46716 = alloc_clo(lam46301_fptr, 5);

//setting env list
clo46716[1] = a4594046158;
clo46716[2] = cons;
clo46716[3] = lst2;
clo46716[4] = reverse_u45helper;
clo46716[5] = kont46034;
void* f4603646159 = encode_clo(clo46716);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4603646159;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46303 = encode_clo(alloc_clo(lam46303_fptr, 0));

void* lam46305_fptr() // lam46305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46306 = arg_buffer[1];
//reading env and args
void* a4593946156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46306))[7];
//not do dummy comment
void* kont46034 = (decode_clo(env46306))[6];
//not do dummy comment
void* lst = (decode_clo(env46306))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46306))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46306))[3];
//not do dummy comment
void* car = (decode_clo(env46306))[2];
//not do dummy comment
void* cons = (decode_clo(env46306))[1];

//if-clause
bool if_guard46717 = is_true(a4593946156);
if(if_guard46717)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46034);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46034))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46719 = alloc_clo(lam46303_fptr, 6);

//setting env list
clo46719[1] = cons;
clo46719[2] = car;
clo46719[3] = lst2;
clo46719[4] = reverse_u45helper;
clo46719[5] = lst;
clo46719[6] = kont46034;
void* f4603746157 = encode_clo(clo46719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4603746157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46305 = encode_clo(alloc_clo(lam46305_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46307 = arg_buffer[1];
//reading env and args
void* kont46034 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46721 = alloc_clo(lam46305_fptr, 7);

//setting env list
clo46721[1] = cons;
clo46721[2] = car;
clo46721[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo46721[4] = reverse_u45helper;
clo46721[5] = lst;
clo46721[6] = kont46034;
clo46721[7] = cdr;
void* f4603846155 = encode_clo(clo46721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4603846155;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam46308_fptr() // lam46308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46309 = arg_buffer[1];
//reading env and args
void* a4594346164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46309))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46309))[2];
//not do dummy comment
void* kont46039 = (decode_clo(env46309))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont46039;
arg_buffer[3] = lst;
arg_buffer[4] = a4594346164;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46308 = encode_clo(alloc_clo(lam46308_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46310 = arg_buffer[1];
//reading env and args
void* kont46039 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46723 = alloc_clo(lam46308_fptr, 3);

//setting env list
clo46723[1] = kont46039;
clo46723[2] = reverse_u45helper;
clo46723[3] = lst;
void* f4604046163 = encode_clo(clo46723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4604046163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam46311_fptr() // lam46311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46312 = arg_buffer[1];
//reading env and args
void* x4594646169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46041 = (decode_clo(env46312))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46041);
arg_buffer[2] = x4594646169;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46041))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46311 = encode_clo(alloc_clo(lam46311_fptr, 0));

void* lam46313_fptr() // lam46313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46314 = arg_buffer[1];
//reading env and args
void* a4595146178 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46041 = (decode_clo(env46314))[4];
//not do dummy comment
void* a4594746171 = (decode_clo(env46314))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46314))[2];
//not do dummy comment
void* a4594946174 = (decode_clo(env46314))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont46041;
arg_buffer[3] = a4594746171;
arg_buffer[4] = a4594946174;
arg_buffer[5] = a4595146178;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46313 = encode_clo(alloc_clo(lam46313_fptr, 0));

void* lam46315_fptr() // lam46315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46316 = arg_buffer[1];
//reading env and args
void* a4595046176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46041 = (decode_clo(env46316))[6];
//not do dummy comment
void* a4594746171 = (decode_clo(env46316))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env46316))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46316))[3];
//not do dummy comment
void* cons = (decode_clo(env46316))[2];
//not do dummy comment
void* a4594946174 = (decode_clo(env46316))[1];

//creating new closure instance
void** clo46725 = alloc_clo(lam46313_fptr, 4);

//setting env list
clo46725[1] = a4594946174;
clo46725[2] = take_u45helper;
clo46725[3] = a4594746171;
clo46725[4] = kont46041;
void* f4604346177 = encode_clo(clo46725);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4604346177;
arg_buffer[3] = a4595046176;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46315 = encode_clo(alloc_clo(lam46315_fptr, 0));

void* lam46317_fptr() // lam46317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46318 = arg_buffer[1];
//reading env and args
void* a4594946174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46318))[7];
//not do dummy comment
void* kont46041 = (decode_clo(env46318))[6];
//not do dummy comment
void* a4594746171 = (decode_clo(env46318))[5];
//not do dummy comment
void* car = (decode_clo(env46318))[4];
//not do dummy comment
void* cons = (decode_clo(env46318))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46318))[2];
//not do dummy comment
void* lst2 = (decode_clo(env46318))[1];

//creating new closure instance
void** clo46727 = alloc_clo(lam46315_fptr, 6);

//setting env list
clo46727[1] = a4594946174;
clo46727[2] = cons;
clo46727[3] = lst2;
clo46727[4] = take_u45helper;
clo46727[5] = a4594746171;
clo46727[6] = kont46041;
void* f4604446175 = encode_clo(clo46727);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4604446175;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46317 = encode_clo(alloc_clo(lam46317_fptr, 0));

void* lam46320_fptr() // lam46320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46321 = arg_buffer[1];
//reading env and args
void* a4594746171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46321))[8];
//not do dummy comment
void* kont46041 = (decode_clo(env46321))[7];
//not do dummy comment
void* cons = (decode_clo(env46321))[6];
//not do dummy comment
void* _u45 = (decode_clo(env46321))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env46321))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46321))[3];
//not do dummy comment
void* n = (decode_clo(env46321))[2];
//not do dummy comment
void* car = (decode_clo(env46321))[1];
mpz_t* mpzvar46728 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46728, "1", 10);
void* a4594846172 = encode_mpz(mpzvar46728);

//creating new closure instance
void** clo46730 = alloc_clo(lam46317_fptr, 7);

//setting env list
clo46730[1] = lst2;
clo46730[2] = take_u45helper;
clo46730[3] = cons;
clo46730[4] = car;
clo46730[5] = a4594746171;
clo46730[6] = kont46041;
clo46730[7] = lst;
void* f4604546173 = encode_clo(clo46730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4604546173;
arg_buffer[3] = n;
arg_buffer[4] = a4594846172;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46320 = encode_clo(alloc_clo(lam46320_fptr, 0));

void* lam46322_fptr() // lam46322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46323 = arg_buffer[1];
//reading env and args
void* a4594546167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46323))[10];
//not do dummy comment
void* lst = (decode_clo(env46323))[9];
//not do dummy comment
void* reverse = (decode_clo(env46323))[8];
//not do dummy comment
void* kont46041 = (decode_clo(env46323))[7];
//not do dummy comment
void* cons = (decode_clo(env46323))[6];
//not do dummy comment
void* _u45 = (decode_clo(env46323))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env46323))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46323))[3];
//not do dummy comment
void* n = (decode_clo(env46323))[2];
//not do dummy comment
void* car = (decode_clo(env46323))[1];

//if-clause
bool if_guard46731 = is_true(a4594546167);
if(if_guard46731)
{

//creating new closure instance
void** clo46733 = alloc_clo(lam46311_fptr, 1);

//setting env list
clo46733[1] = kont46041;
void* f4604246168 = encode_clo(clo46733);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4604246168;
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
void** clo46735 = alloc_clo(lam46320_fptr, 8);

//setting env list
clo46735[1] = car;
clo46735[2] = n;
clo46735[3] = lst2;
clo46735[4] = take_u45helper;
clo46735[5] = _u45;
clo46735[6] = cons;
clo46735[7] = kont46041;
clo46735[8] = lst;
void* f4604646170 = encode_clo(clo46735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4604646170;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46322 = encode_clo(alloc_clo(lam46322_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46325 = arg_buffer[1];
//reading env and args
void* kont46041 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar46736 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46736, "0", 10);
void* a4594446165 = encode_mpz(mpzvar46736);

//creating new closure instance
void** clo46738 = alloc_clo(lam46322_fptr, 10);

//setting env list
clo46738[1] = car;
clo46738[2] = n;
clo46738[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo46738[4] = take_u45helper;
clo46738[5] = _u45;
clo46738[6] = cons;
clo46738[7] = kont46041;
clo46738[8] = reverse;
clo46738[9] = lst;
clo46738[10] = cdr;
void* f4604746166 = encode_clo(clo46738);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4604746166;
arg_buffer[3] = n;
arg_buffer[4] = a4594446165;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam46326_fptr() // lam46326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46327 = arg_buffer[1];
//reading env and args
void* a4595246180 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46048 = (decode_clo(env46327))[4];
//not do dummy comment
void* lst = (decode_clo(env46327))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46327))[2];
//not do dummy comment
void* n = (decode_clo(env46327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont46048;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4595246180;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46326 = encode_clo(alloc_clo(lam46326_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46328 = arg_buffer[1];
//reading env and args
void* kont46048 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46740 = alloc_clo(lam46326_fptr, 4);

//setting env list
clo46740[1] = n;
clo46740[2] = take_u45helper;
clo46740[3] = lst;
clo46740[4] = kont46048;
void* f4604946179 = encode_clo(clo46740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4604946179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam46330_fptr() // lam46330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46331 = arg_buffer[1];
//reading env and args
void* a4595746188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46050 = (decode_clo(env46331))[3];
//not do dummy comment
void* a4595546184 = (decode_clo(env46331))[2];
//not do dummy comment
void* _u43 = (decode_clo(env46331))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont46050;
arg_buffer[3] = a4595546184;
arg_buffer[4] = a4595746188;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46330 = encode_clo(alloc_clo(lam46330_fptr, 0));

void* lam46332_fptr() // lam46332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46333 = arg_buffer[1];
//reading env and args
void* a4595646186 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46050 = (decode_clo(env46333))[4];
//not do dummy comment
void* length = (decode_clo(env46333))[3];
//not do dummy comment
void* a4595546184 = (decode_clo(env46333))[2];
//not do dummy comment
void* _u43 = (decode_clo(env46333))[1];

//creating new closure instance
void** clo46742 = alloc_clo(lam46330_fptr, 3);

//setting env list
clo46742[1] = _u43;
clo46742[2] = a4595546184;
clo46742[3] = kont46050;
void* f4605146187 = encode_clo(clo46742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4605146187;
arg_buffer[3] = a4595646186;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46332 = encode_clo(alloc_clo(lam46332_fptr, 0));

void* lam46335_fptr() // lam46335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46336 = arg_buffer[1];
//reading env and args
void* a4595346182 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46336))[5];
//not do dummy comment
void* kont46050 = (decode_clo(env46336))[4];
//not do dummy comment
void* lst = (decode_clo(env46336))[3];
//not do dummy comment
void* length = (decode_clo(env46336))[2];
//not do dummy comment
void* _u43 = (decode_clo(env46336))[1];

//if-clause
bool if_guard46743 = is_true(a4595346182);
if(if_guard46743)
{
mpz_t* mpzvar46744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46744, "0", 10);
void* x4595446183 = encode_mpz(mpzvar46744);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46050);
arg_buffer[2] = x4595446183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46050))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar46745 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46745, "1", 10);
void* a4595546184 = encode_mpz(mpzvar46745);

//creating new closure instance
void** clo46747 = alloc_clo(lam46332_fptr, 4);

//setting env list
clo46747[1] = _u43;
clo46747[2] = a4595546184;
clo46747[3] = length;
clo46747[4] = kont46050;
void* f4605246185 = encode_clo(clo46747);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4605246185;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46335 = encode_clo(alloc_clo(lam46335_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46337 = arg_buffer[1];
//reading env and args
void* kont46050 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46749 = alloc_clo(lam46335_fptr, 5);

//setting env list
clo46749[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo46749[2] = length;
clo46749[3] = lst;
clo46749[4] = kont46050;
clo46749[5] = cdr;
void* f4605346181 = encode_clo(clo46749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4605346181;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam46338_fptr() // lam46338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46339 = arg_buffer[1];
//reading env and args
void* x4595946192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46054 = (decode_clo(env46339))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46054);
arg_buffer[2] = x4595946192;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46054))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46338 = encode_clo(alloc_clo(lam46338_fptr, 0));

void* lam46340_fptr() // lam46340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46341 = arg_buffer[1];
//reading env and args
void* a4596346200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4596146196 = (decode_clo(env46341))[3];
//not do dummy comment
void* kont46054 = (decode_clo(env46341))[2];
//not do dummy comment
void* cons = (decode_clo(env46341))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46054;
arg_buffer[3] = a4596146196;
arg_buffer[4] = a4596346200;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46340 = encode_clo(alloc_clo(lam46340_fptr, 0));

void* lam46342_fptr() // lam46342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46343 = arg_buffer[1];
//reading env and args
void* a4596246198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4596146196 = (decode_clo(env46343))[5];
//not do dummy comment
void* map = (decode_clo(env46343))[4];
//not do dummy comment
void* kont46054 = (decode_clo(env46343))[3];
//not do dummy comment
void* proc = (decode_clo(env46343))[2];
//not do dummy comment
void* cons = (decode_clo(env46343))[1];

//creating new closure instance
void** clo46751 = alloc_clo(lam46340_fptr, 3);

//setting env list
clo46751[1] = cons;
clo46751[2] = kont46054;
clo46751[3] = a4596146196;
void* f4605646199 = encode_clo(clo46751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4605646199;
arg_buffer[3] = proc;
arg_buffer[4] = a4596246198;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46342 = encode_clo(alloc_clo(lam46342_fptr, 0));

void* lam46344_fptr() // lam46344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46345 = arg_buffer[1];
//reading env and args
void* a4596146196 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46345))[6];
//not do dummy comment
void* lst = (decode_clo(env46345))[5];
//not do dummy comment
void* map = (decode_clo(env46345))[4];
//not do dummy comment
void* kont46054 = (decode_clo(env46345))[3];
//not do dummy comment
void* proc = (decode_clo(env46345))[2];
//not do dummy comment
void* cons = (decode_clo(env46345))[1];

//creating new closure instance
void** clo46753 = alloc_clo(lam46342_fptr, 5);

//setting env list
clo46753[1] = cons;
clo46753[2] = proc;
clo46753[3] = kont46054;
clo46753[4] = map;
clo46753[5] = a4596146196;
void* f4605746197 = encode_clo(clo46753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4605746197;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46344 = encode_clo(alloc_clo(lam46344_fptr, 0));

void* lam46346_fptr() // lam46346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46347 = arg_buffer[1];
//reading env and args
void* a4596046194 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46347))[6];
//not do dummy comment
void* lst = (decode_clo(env46347))[5];
//not do dummy comment
void* map = (decode_clo(env46347))[4];
//not do dummy comment
void* kont46054 = (decode_clo(env46347))[3];
//not do dummy comment
void* proc = (decode_clo(env46347))[2];
//not do dummy comment
void* cons = (decode_clo(env46347))[1];

//creating new closure instance
void** clo46755 = alloc_clo(lam46344_fptr, 6);

//setting env list
clo46755[1] = cons;
clo46755[2] = proc;
clo46755[3] = kont46054;
clo46755[4] = map;
clo46755[5] = lst;
clo46755[6] = cdr;
void* f4605846195 = encode_clo(clo46755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4605846195;
arg_buffer[3] = a4596046194;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46346 = encode_clo(alloc_clo(lam46346_fptr, 0));

void* lam46348_fptr() // lam46348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46349 = arg_buffer[1];
//reading env and args
void* a4595846190 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46349))[8];
//not do dummy comment
void* map = (decode_clo(env46349))[7];
//not do dummy comment
void* kont46054 = (decode_clo(env46349))[6];
//not do dummy comment
void* proc = (decode_clo(env46349))[5];
//not do dummy comment
void* car = (decode_clo(env46349))[4];
//not do dummy comment
void* cons = (decode_clo(env46349))[3];
//not do dummy comment
void* list = (decode_clo(env46349))[2];
//not do dummy comment
void* cdr = (decode_clo(env46349))[1];

//if-clause
bool if_guard46756 = is_true(a4595846190);
if(if_guard46756)
{

//creating new closure instance
void** clo46758 = alloc_clo(lam46338_fptr, 1);

//setting env list
clo46758[1] = kont46054;
void* f4605546191 = encode_clo(clo46758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4605546191;
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
void** clo46760 = alloc_clo(lam46346_fptr, 6);

//setting env list
clo46760[1] = cons;
clo46760[2] = proc;
clo46760[3] = kont46054;
clo46760[4] = map;
clo46760[5] = lst;
clo46760[6] = cdr;
void* f4605946193 = encode_clo(clo46760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4605946193;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46348 = encode_clo(alloc_clo(lam46348_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46350 = arg_buffer[1];
//reading env and args
void* kont46054 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46762 = alloc_clo(lam46348_fptr, 8);

//setting env list
clo46762[1] = cdr;
clo46762[2] = list;
clo46762[3] = cons;
clo46762[4] = car;
clo46762[5] = proc;
clo46762[6] = kont46054;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo46762[7] = map;
clo46762[8] = lst;
void* f4606046189 = encode_clo(clo46762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4606046189;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam46351_fptr() // lam46351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46352 = arg_buffer[1];
//reading env and args
void* x4596546204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46061 = (decode_clo(env46352))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46061);
arg_buffer[2] = x4596546204;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46061))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46351 = encode_clo(alloc_clo(lam46351_fptr, 0));

void* lam46353_fptr() // lam46353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46354 = arg_buffer[1];
//reading env and args
void* a4597046214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4596846210 = (decode_clo(env46354))[3];
//not do dummy comment
void* kont46061 = (decode_clo(env46354))[2];
//not do dummy comment
void* cons = (decode_clo(env46354))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46061;
arg_buffer[3] = a4596846210;
arg_buffer[4] = a4597046214;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46353 = encode_clo(alloc_clo(lam46353_fptr, 0));

void* lam46355_fptr() // lam46355 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46356 = arg_buffer[1];
//reading env and args
void* a4596946212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4596846210 = (decode_clo(env46356))[5];
//not do dummy comment
void* op = (decode_clo(env46356))[4];
//not do dummy comment
void* cons = (decode_clo(env46356))[3];
//not do dummy comment
void* filter = (decode_clo(env46356))[2];
//not do dummy comment
void* kont46061 = (decode_clo(env46356))[1];

//creating new closure instance
void** clo46764 = alloc_clo(lam46353_fptr, 3);

//setting env list
clo46764[1] = cons;
clo46764[2] = kont46061;
clo46764[3] = a4596846210;
void* f4606346213 = encode_clo(clo46764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4606346213;
arg_buffer[3] = op;
arg_buffer[4] = a4596946212;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46355 = encode_clo(alloc_clo(lam46355_fptr, 0));

void* lam46357_fptr() // lam46357 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46358 = arg_buffer[1];
//reading env and args
void* a4596846210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46358))[6];
//not do dummy comment
void* lst = (decode_clo(env46358))[5];
//not do dummy comment
void* op = (decode_clo(env46358))[4];
//not do dummy comment
void* cons = (decode_clo(env46358))[3];
//not do dummy comment
void* filter = (decode_clo(env46358))[2];
//not do dummy comment
void* kont46061 = (decode_clo(env46358))[1];

//creating new closure instance
void** clo46766 = alloc_clo(lam46355_fptr, 5);

//setting env list
clo46766[1] = kont46061;
clo46766[2] = filter;
clo46766[3] = cons;
clo46766[4] = op;
clo46766[5] = a4596846210;
void* f4606446211 = encode_clo(clo46766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4606446211;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46357 = encode_clo(alloc_clo(lam46357_fptr, 0));

void* lam46359_fptr() // lam46359 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46360 = arg_buffer[1];
//reading env and args
void* a4597146216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env46360))[3];
//not do dummy comment
void* filter = (decode_clo(env46360))[2];
//not do dummy comment
void* kont46061 = (decode_clo(env46360))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont46061;
arg_buffer[3] = op;
arg_buffer[4] = a4597146216;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46359 = encode_clo(alloc_clo(lam46359_fptr, 0));

void* lam46361_fptr() // lam46361 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46362 = arg_buffer[1];
//reading env and args
void* a4596746208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46362))[7];
//not do dummy comment
void* lst = (decode_clo(env46362))[6];
//not do dummy comment
void* op = (decode_clo(env46362))[5];
//not do dummy comment
void* cons = (decode_clo(env46362))[4];
//not do dummy comment
void* filter = (decode_clo(env46362))[3];
//not do dummy comment
void* car = (decode_clo(env46362))[2];
//not do dummy comment
void* kont46061 = (decode_clo(env46362))[1];

//if-clause
bool if_guard46767 = is_true(a4596746208);
if(if_guard46767)
{

//creating new closure instance
void** clo46769 = alloc_clo(lam46357_fptr, 6);

//setting env list
clo46769[1] = kont46061;
clo46769[2] = filter;
clo46769[3] = cons;
clo46769[4] = op;
clo46769[5] = lst;
clo46769[6] = cdr;
void* f4606546209 = encode_clo(clo46769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4606546209;
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
void** clo46771 = alloc_clo(lam46359_fptr, 3);

//setting env list
clo46771[1] = kont46061;
clo46771[2] = filter;
clo46771[3] = op;
void* f4606646215 = encode_clo(clo46771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4606646215;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46361 = encode_clo(alloc_clo(lam46361_fptr, 0));

void* lam46363_fptr() // lam46363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46364 = arg_buffer[1];
//reading env and args
void* a4596646206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46364))[7];
//not do dummy comment
void* lst = (decode_clo(env46364))[6];
//not do dummy comment
void* op = (decode_clo(env46364))[5];
//not do dummy comment
void* cons = (decode_clo(env46364))[4];
//not do dummy comment
void* filter = (decode_clo(env46364))[3];
//not do dummy comment
void* car = (decode_clo(env46364))[2];
//not do dummy comment
void* kont46061 = (decode_clo(env46364))[1];

//creating new closure instance
void** clo46773 = alloc_clo(lam46361_fptr, 7);

//setting env list
clo46773[1] = kont46061;
clo46773[2] = car;
clo46773[3] = filter;
clo46773[4] = cons;
clo46773[5] = op;
clo46773[6] = lst;
clo46773[7] = cdr;
void* f4606746207 = encode_clo(clo46773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4606746207;
arg_buffer[3] = a4596646206;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46363 = encode_clo(alloc_clo(lam46363_fptr, 0));

void* lam46365_fptr() // lam46365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46366 = arg_buffer[1];
//reading env and args
void* a4596446202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46366))[8];
//not do dummy comment
void* op = (decode_clo(env46366))[7];
//not do dummy comment
void* cons = (decode_clo(env46366))[6];
//not do dummy comment
void* list = (decode_clo(env46366))[5];
//not do dummy comment
void* cdr = (decode_clo(env46366))[4];
//not do dummy comment
void* filter = (decode_clo(env46366))[3];
//not do dummy comment
void* car = (decode_clo(env46366))[2];
//not do dummy comment
void* kont46061 = (decode_clo(env46366))[1];

//if-clause
bool if_guard46774 = is_true(a4596446202);
if(if_guard46774)
{

//creating new closure instance
void** clo46776 = alloc_clo(lam46351_fptr, 1);

//setting env list
clo46776[1] = kont46061;
void* f4606246203 = encode_clo(clo46776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4606246203;
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
void** clo46778 = alloc_clo(lam46363_fptr, 7);

//setting env list
clo46778[1] = kont46061;
clo46778[2] = car;
clo46778[3] = filter;
clo46778[4] = cons;
clo46778[5] = op;
clo46778[6] = lst;
clo46778[7] = cdr;
void* f4606846205 = encode_clo(clo46778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4606846205;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46365 = encode_clo(alloc_clo(lam46365_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46367 = arg_buffer[1];
//reading env and args
void* kont46061 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46780 = alloc_clo(lam46365_fptr, 8);

//setting env list
clo46780[1] = kont46061;
clo46780[2] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo46780[3] = filter;
clo46780[4] = cdr;
clo46780[5] = list;
clo46780[6] = cons;
clo46780[7] = op;
clo46780[8] = lst;
void* f4606946201 = encode_clo(clo46780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4606946201;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam46368_fptr() // lam46368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46369 = arg_buffer[1];
//reading env and args
void* a4597646224 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env46369))[3];
//not do dummy comment
void* kont46070 = (decode_clo(env46369))[2];
//not do dummy comment
void* a4597446221 = (decode_clo(env46369))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont46070;
arg_buffer[3] = a4597446221;
arg_buffer[4] = a4597646224;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46368 = encode_clo(alloc_clo(lam46368_fptr, 0));

void* lam46371_fptr() // lam46371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46372 = arg_buffer[1];
//reading env and args
void* a4597446221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env46372))[4];
//not do dummy comment
void* kont46070 = (decode_clo(env46372))[3];
//not do dummy comment
void* n = (decode_clo(env46372))[2];
//not do dummy comment
void* _u45 = (decode_clo(env46372))[1];
mpz_t* mpzvar46781 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46781, "1", 10);
void* a4597546222 = encode_mpz(mpzvar46781);

//creating new closure instance
void** clo46783 = alloc_clo(lam46368_fptr, 3);

//setting env list
clo46783[1] = a4597446221;
clo46783[2] = kont46070;
clo46783[3] = drop;
void* f4607146223 = encode_clo(clo46783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4607146223;
arg_buffer[3] = n;
arg_buffer[4] = a4597546222;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46371 = encode_clo(alloc_clo(lam46371_fptr, 0));

void* lam46373_fptr() // lam46373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46374 = arg_buffer[1];
//reading env and args
void* a4597346219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46374))[6];
//not do dummy comment
void* kont46070 = (decode_clo(env46374))[5];
//not do dummy comment
void* n = (decode_clo(env46374))[4];
//not do dummy comment
void* _u45 = (decode_clo(env46374))[3];
//not do dummy comment
void* lst = (decode_clo(env46374))[2];
//not do dummy comment
void* drop = (decode_clo(env46374))[1];

//if-clause
bool if_guard46784 = is_true(a4597346219);
if(if_guard46784)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46070);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46070))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46786 = alloc_clo(lam46371_fptr, 4);

//setting env list
clo46786[1] = _u45;
clo46786[2] = n;
clo46786[3] = kont46070;
clo46786[4] = drop;
void* f4607246220 = encode_clo(clo46786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4607246220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46373 = encode_clo(alloc_clo(lam46373_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46376 = arg_buffer[1];
//reading env and args
void* kont46070 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar46787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46787, "0", 10);
void* a4597246217 = encode_mpz(mpzvar46787);

//creating new closure instance
void** clo46789 = alloc_clo(lam46373_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo46789[1] = drop;
clo46789[2] = lst;
clo46789[3] = _u45;
clo46789[4] = n;
clo46789[5] = kont46070;
clo46789[6] = cdr;
void* f4607346218 = encode_clo(clo46789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4607346218;
arg_buffer[3] = n;
arg_buffer[4] = a4597246217;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam46377_fptr() // lam46377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46378 = arg_buffer[1];
//reading env and args
void* a4598046232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4597846228 = (decode_clo(env46378))[3];
//not do dummy comment
void* kont46074 = (decode_clo(env46378))[2];
//not do dummy comment
void* proc = (decode_clo(env46378))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont46074;
arg_buffer[3] = a4597846228;
arg_buffer[4] = a4598046232;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46377 = encode_clo(alloc_clo(lam46377_fptr, 0));

void* lam46379_fptr() // lam46379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46380 = arg_buffer[1];
//reading env and args
void* a4597946230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46074 = (decode_clo(env46380))[5];
//not do dummy comment
void* foldr = (decode_clo(env46380))[4];
//not do dummy comment
void* a4597846228 = (decode_clo(env46380))[3];
//not do dummy comment
void* proc = (decode_clo(env46380))[2];
//not do dummy comment
void* acc = (decode_clo(env46380))[1];

//creating new closure instance
void** clo46791 = alloc_clo(lam46377_fptr, 3);

//setting env list
clo46791[1] = proc;
clo46791[2] = kont46074;
clo46791[3] = a4597846228;
void* f4607546231 = encode_clo(clo46791);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4607546231;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4597946230;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46379 = encode_clo(alloc_clo(lam46379_fptr, 0));

void* lam46381_fptr() // lam46381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46382 = arg_buffer[1];
//reading env and args
void* a4597846228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46382))[6];
//not do dummy comment
void* kont46074 = (decode_clo(env46382))[5];
//not do dummy comment
void* foldr = (decode_clo(env46382))[4];
//not do dummy comment
void* lst = (decode_clo(env46382))[3];
//not do dummy comment
void* proc = (decode_clo(env46382))[2];
//not do dummy comment
void* acc = (decode_clo(env46382))[1];

//creating new closure instance
void** clo46793 = alloc_clo(lam46379_fptr, 5);

//setting env list
clo46793[1] = acc;
clo46793[2] = proc;
clo46793[3] = a4597846228;
clo46793[4] = foldr;
clo46793[5] = kont46074;
void* f4607646229 = encode_clo(clo46793);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4607646229;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46381 = encode_clo(alloc_clo(lam46381_fptr, 0));

void* lam46383_fptr() // lam46383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46384 = arg_buffer[1];
//reading env and args
void* a4597746226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46384))[7];
//not do dummy comment
void* kont46074 = (decode_clo(env46384))[6];
//not do dummy comment
void* car = (decode_clo(env46384))[5];
//not do dummy comment
void* foldr = (decode_clo(env46384))[4];
//not do dummy comment
void* lst = (decode_clo(env46384))[3];
//not do dummy comment
void* proc = (decode_clo(env46384))[2];
//not do dummy comment
void* acc = (decode_clo(env46384))[1];

//if-clause
bool if_guard46794 = is_true(a4597746226);
if(if_guard46794)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46074);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46074))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46796 = alloc_clo(lam46381_fptr, 6);

//setting env list
clo46796[1] = acc;
clo46796[2] = proc;
clo46796[3] = lst;
clo46796[4] = foldr;
clo46796[5] = kont46074;
clo46796[6] = cdr;
void* f4607746227 = encode_clo(clo46796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4607746227;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46383 = encode_clo(alloc_clo(lam46383_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46385 = arg_buffer[1];
//reading env and args
void* kont46074 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46798 = alloc_clo(lam46383_fptr, 7);

//setting env list
clo46798[1] = acc;
clo46798[2] = proc;
clo46798[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo46798[4] = foldr;
clo46798[5] = car;
clo46798[6] = kont46074;
clo46798[7] = cdr;
void* f4607846225 = encode_clo(clo46798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4607846225;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam46386_fptr() // lam46386 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46387 = arg_buffer[1];
//reading env and args
void* a4598446240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4598246236 = (decode_clo(env46387))[3];
//not do dummy comment
void* cons = (decode_clo(env46387))[2];
//not do dummy comment
void* kont46079 = (decode_clo(env46387))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46079;
arg_buffer[3] = a4598246236;
arg_buffer[4] = a4598446240;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46386 = encode_clo(alloc_clo(lam46386_fptr, 0));

void* lam46388_fptr() // lam46388 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46389 = arg_buffer[1];
//reading env and args
void* a4598346238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env46389))[5];
//not do dummy comment
void* cons = (decode_clo(env46389))[4];
//not do dummy comment
void* kont46079 = (decode_clo(env46389))[3];
//not do dummy comment
void* a4598246236 = (decode_clo(env46389))[2];
//not do dummy comment
void* lst2 = (decode_clo(env46389))[1];

//creating new closure instance
void** clo46800 = alloc_clo(lam46386_fptr, 3);

//setting env list
clo46800[1] = kont46079;
clo46800[2] = cons;
clo46800[3] = a4598246236;
void* f4608046239 = encode_clo(clo46800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4608046239;
arg_buffer[3] = a4598346238;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46388 = encode_clo(alloc_clo(lam46388_fptr, 0));

void* lam46390_fptr() // lam46390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46391 = arg_buffer[1];
//reading env and args
void* a4598246236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46391))[6];
//not do dummy comment
void* append = (decode_clo(env46391))[5];
//not do dummy comment
void* lst2 = (decode_clo(env46391))[4];
//not do dummy comment
void* lst1 = (decode_clo(env46391))[3];
//not do dummy comment
void* cons = (decode_clo(env46391))[2];
//not do dummy comment
void* kont46079 = (decode_clo(env46391))[1];

//creating new closure instance
void** clo46802 = alloc_clo(lam46388_fptr, 5);

//setting env list
clo46802[1] = lst2;
clo46802[2] = a4598246236;
clo46802[3] = kont46079;
clo46802[4] = cons;
clo46802[5] = append;
void* f4608146237 = encode_clo(clo46802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4608146237;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46390 = encode_clo(alloc_clo(lam46390_fptr, 0));

void* lam46392_fptr() // lam46392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46393 = arg_buffer[1];
//reading env and args
void* a4598146234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46393))[7];
//not do dummy comment
void* append = (decode_clo(env46393))[6];
//not do dummy comment
void* lst2 = (decode_clo(env46393))[5];
//not do dummy comment
void* cons = (decode_clo(env46393))[4];
//not do dummy comment
void* kont46079 = (decode_clo(env46393))[3];
//not do dummy comment
void* lst1 = (decode_clo(env46393))[2];
//not do dummy comment
void* car = (decode_clo(env46393))[1];

//if-clause
bool if_guard46803 = is_true(a4598146234);
if(if_guard46803)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46079);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46079))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46805 = alloc_clo(lam46390_fptr, 6);

//setting env list
clo46805[1] = kont46079;
clo46805[2] = cons;
clo46805[3] = lst1;
clo46805[4] = lst2;
clo46805[5] = append;
clo46805[6] = cdr;
void* f4608246235 = encode_clo(clo46805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4608246235;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46392 = encode_clo(alloc_clo(lam46392_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46394 = arg_buffer[1];
//reading env and args
void* kont46079 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46807 = alloc_clo(lam46392_fptr, 7);

//setting env list
clo46807[1] = car;
clo46807[2] = lst1;
clo46807[3] = kont46079;
clo46807[4] = cons;
clo46807[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo46807[6] = append;
clo46807[7] = cdr;
void* f4608346233 = encode_clo(clo46807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4608346233;
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
void* _46395 = arg_buffer[1];
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

void* kont4608446241 = prim_car(lst);
void* lst46242 = prim_cdr(lst);
void* x4598546243 = apply_prim_hash(lst46242);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4608446241);
arg_buffer[2] = x4598546243;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4608446241))[0]);
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
void* _46396 = arg_buffer[1];
//reading env and args
void* kont46086 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4598646244 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46086);
arg_buffer[2] = x4598646244;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46086))[0]);
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
void* _46397 = arg_buffer[1];
//reading env and args
void* kont46087 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4598746245 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46087);
arg_buffer[2] = x4598746245;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46087))[0]);
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
void* _46398 = arg_buffer[1];
//reading env and args
void* kont46088 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4598846246 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46088);
arg_buffer[2] = x4598846246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46088))[0]);
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
void* _46399 = arg_buffer[1];
//reading env and args
void* kont46089 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4598946247 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46089);
arg_buffer[2] = x4598946247;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46089))[0]);
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
void* _46402 = arg_buffer[1];
//reading env and args
void* kont46090 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar46808 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46808, "28", 10);
void* a4599046248 = encode_mpz(mpzvar46808);
mpz_t* mpzvar46809 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46809, "8", 10);
void* a4599146249 = encode_mpz(mpzvar46809);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = kont46090;
arg_buffer[3] = a4599046248;
arg_buffer[4] = a4599146249;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam46403_fptr() // lam46403 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46404 = arg_buffer[1];
//reading env and args
void* x4599246251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46091 = (decode_clo(env46404))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46091);
arg_buffer[2] = x4599246251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46091))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46403 = encode_clo(alloc_clo(lam46403_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46405 = arg_buffer[1];
//reading env and args
void* kont46091 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo46811 = alloc_clo(lam46403_fptr, 1);

//setting env list
clo46811[1] = kont46091;
void* f4609246250 = encode_clo(clo46811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4609246250;
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

