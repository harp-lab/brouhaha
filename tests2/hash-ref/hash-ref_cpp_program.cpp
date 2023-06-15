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
void* _41295 = arg_buffer[1];
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

void* kont4102041125 = prim_car(lst);
void* lst41126 = prim_cdr(lst);
void* x4092841127 = apply_prim__u43(lst41126);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4102041125);
arg_buffer[2] = x4092841127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4102041125))[0]);
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
void* _41296 = arg_buffer[1];
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

void* kont4102241128 = prim_car(lst);
void* lst41129 = prim_cdr(lst);
void* x4092941130 = apply_prim__u45(lst41129);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4102241128);
arg_buffer[2] = x4092941130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4102241128))[0]);
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
void* _41297 = arg_buffer[1];
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

void* kont4102441131 = prim_car(lst);
void* lst41132 = prim_cdr(lst);
void* x4093041133 = apply_prim__u42(lst41132);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4102441131);
arg_buffer[2] = x4093041133;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4102441131))[0]);
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
void* _41298 = arg_buffer[1];
//reading env and args
void* kont41026 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4093141134 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41026);
arg_buffer[2] = x4093141134;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41026))[0]);
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
void* _41299 = arg_buffer[1];
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

void* kont4102741135 = prim_car(lst);
void* lst41136 = prim_cdr(lst);
void* x4093241137 = apply_prim__u47(lst41136);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4102741135);
arg_buffer[2] = x4093241137;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4102741135))[0]);
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
void* _41300 = arg_buffer[1];
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

void* kont4102941138 = prim_car(lst);
void* lst41139 = prim_cdr(lst);
void* x4093341140 = apply_prim__u61(lst41139);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4102941138);
arg_buffer[2] = x4093341140;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4102941138))[0]);
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
void* _41301 = arg_buffer[1];
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

void* kont4103141141 = prim_car(lst);
void* lst41142 = prim_cdr(lst);
void* x4093441143 = apply_prim__u62(lst41142);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4103141141);
arg_buffer[2] = x4093441143;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4103141141))[0]);
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
void* _41302 = arg_buffer[1];
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

void* kont4103341144 = prim_car(lst);
void* lst41145 = prim_cdr(lst);
void* x4093541146 = apply_prim__u60(lst41145);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4103341144);
arg_buffer[2] = x4093541146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4103341144))[0]);
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
void* _41303 = arg_buffer[1];
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

void* kont4103541147 = prim_car(lst);
void* lst41148 = prim_cdr(lst);
void* x4093641149 = apply_prim__u60_u61(lst41148);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4103541147);
arg_buffer[2] = x4093641149;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4103541147))[0]);
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
void* _41304 = arg_buffer[1];
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

void* kont4103741150 = prim_car(lst);
void* lst41151 = prim_cdr(lst);
void* x4093741152 = apply_prim__u62_u61(lst41151);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4103741150);
arg_buffer[2] = x4093741152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4103741150))[0]);
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
void* _41305 = arg_buffer[1];
//reading env and args
void* kont41039 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4093841153 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41039);
arg_buffer[2] = x4093841153;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41039))[0]);
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
void* _41306 = arg_buffer[1];
//reading env and args
void* kont41040 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4093941154 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41040);
arg_buffer[2] = x4093941154;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41040))[0]);
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
void* _41307 = arg_buffer[1];
//reading env and args
void* kont41041 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4094041155 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41041);
arg_buffer[2] = x4094041155;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41041))[0]);
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
void* _41308 = arg_buffer[1];
//reading env and args
void* kont41042 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4094141156 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41042);
arg_buffer[2] = x4094141156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41042))[0]);
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
void* _41309 = arg_buffer[1];
//reading env and args
void* kont41043 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4094241157 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41043);
arg_buffer[2] = x4094241157;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41043))[0]);
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
void* _41310 = arg_buffer[1];
//reading env and args
void* kont41044 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4094341158 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41044);
arg_buffer[2] = x4094341158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41044))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam41311_fptr() // lam41311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41312 = arg_buffer[1];
//reading env and args
void* a4094641162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4094441159 = (decode_clo(env41312))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env41312))[2];
//not do dummy comment
void* kont41045 = (decode_clo(env41312))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41045;
arg_buffer[3] = a4094441159;
arg_buffer[4] = a4094641162;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41311 = encode_clo(alloc_clo(lam41311_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41315 = arg_buffer[1];
//reading env and args
void* kont41045 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42296 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42296, "0", 10);
void* a4094441159 = encode_mpz(mpzvar42296);
mpz_t* mpzvar42297 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42297, "2", 10);
void* a4094541160 = encode_mpz(mpzvar42297);

//creating new closure instance
void** clo42299 = alloc_clo(lam41311_fptr, 3);

//setting env list
clo42299[1] = kont41045;
clo42299[2] = equal_u63;
clo42299[3] = a4094441159;
void* f4104641161 = encode_clo(clo42299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4104641161;
arg_buffer[3] = x;
arg_buffer[4] = a4094541160;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam41316_fptr() // lam41316 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41317 = arg_buffer[1];
//reading env and args
void* a4094941166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41047 = (decode_clo(env41317))[3];
//not do dummy comment
void* a4094741163 = (decode_clo(env41317))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env41317))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont41047;
arg_buffer[3] = a4094741163;
arg_buffer[4] = a4094941166;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41316 = encode_clo(alloc_clo(lam41316_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41320 = arg_buffer[1];
//reading env and args
void* kont41047 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42300 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42300, "1", 10);
void* a4094741163 = encode_mpz(mpzvar42300);
mpz_t* mpzvar42301 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42301, "2", 10);
void* a4094841164 = encode_mpz(mpzvar42301);

//creating new closure instance
void** clo42303 = alloc_clo(lam41316_fptr, 3);

//setting env list
clo42303[1] = equal_u63;
clo42303[2] = a4094741163;
clo42303[3] = kont41047;
void* f4104841165 = encode_clo(clo42303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4104841165;
arg_buffer[3] = x;
arg_buffer[4] = a4094841164;
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
void* _41321 = arg_buffer[1];
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

void* kont4104941167 = prim_car(x);
void* x41168 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4104941167);
arg_buffer[2] = x41168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4104941167))[0]);
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
void* _41322 = arg_buffer[1];
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

void* kont4105141169 = prim_car(lst);
void* lst41170 = prim_cdr(lst);
void* x4095041171 = apply_prim_and(lst41170);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4105141169);
arg_buffer[2] = x4095041171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4105141169))[0]);
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
void* _41323 = arg_buffer[1];
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

void* kont4105341172 = prim_car(lst);
void* lst41173 = prim_cdr(lst);
void* x4095141174 = apply_prim_or(lst41173);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4105341172);
arg_buffer[2] = x4095141174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4105341172))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam41326_fptr() // lam41326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41327 = arg_buffer[1];
//reading env and args
void* a4095741184 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41055 = (decode_clo(env41327))[3];
//not do dummy comment
void* x = (decode_clo(env41327))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont41055;
arg_buffer[3] = x;
arg_buffer[4] = a4095741184;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41326 = encode_clo(alloc_clo(lam41326_fptr, 0));

void* lam41328_fptr() // lam41328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41329 = arg_buffer[1];
//reading env and args
void* a4095541181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41329))[5];
//not do dummy comment
void* lst = (decode_clo(env41329))[4];
//not do dummy comment
void* kont41055 = (decode_clo(env41329))[3];
//not do dummy comment
void* x = (decode_clo(env41329))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41329))[1];

//if-clause
bool if_guard42304 = is_true(a4095541181);
if(if_guard42304)
{
void* x4095641182 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41055);
arg_buffer[2] = x4095641182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41055))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42306 = alloc_clo(lam41326_fptr, 3);

//setting env list
clo42306[1] = member_u63;
clo42306[2] = x;
clo42306[3] = kont41055;
void* f4105641183 = encode_clo(clo42306);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4105641183;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41328 = encode_clo(alloc_clo(lam41328_fptr, 0));

void* lam41330_fptr() // lam41330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41331 = arg_buffer[1];
//reading env and args
void* a4095441179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41331))[6];
//not do dummy comment
void* lst = (decode_clo(env41331))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env41331))[4];
//not do dummy comment
void* kont41055 = (decode_clo(env41331))[3];
//not do dummy comment
void* x = (decode_clo(env41331))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41331))[1];

//creating new closure instance
void** clo42308 = alloc_clo(lam41328_fptr, 5);

//setting env list
clo42308[1] = member_u63;
clo42308[2] = x;
clo42308[3] = kont41055;
clo42308[4] = lst;
clo42308[5] = cdr;
void* f4105741180 = encode_clo(clo42308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4105741180;
arg_buffer[3] = a4095441179;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41330 = encode_clo(alloc_clo(lam41330_fptr, 0));

void* lam41332_fptr() // lam41332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41333 = arg_buffer[1];
//reading env and args
void* a4095241176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41333))[7];
//not do dummy comment
void* lst = (decode_clo(env41333))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env41333))[5];
//not do dummy comment
void* kont41055 = (decode_clo(env41333))[4];
//not do dummy comment
void* x = (decode_clo(env41333))[3];
//not do dummy comment
void* car = (decode_clo(env41333))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env41333))[1];

//if-clause
bool if_guard42309 = is_true(a4095241176);
if(if_guard42309)
{
void* x4095341177 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41055);
arg_buffer[2] = x4095341177;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41055))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42311 = alloc_clo(lam41330_fptr, 6);

//setting env list
clo42311[1] = member_u63;
clo42311[2] = x;
clo42311[3] = kont41055;
clo42311[4] = equal_u63;
clo42311[5] = lst;
clo42311[6] = cdr;
void* f4105841178 = encode_clo(clo42311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4105841178;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41332 = encode_clo(alloc_clo(lam41332_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41334 = arg_buffer[1];
//reading env and args
void* kont41055 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42313 = alloc_clo(lam41332_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo42313[1] = member_u63;
clo42313[2] = car;
clo42313[3] = x;
clo42313[4] = kont41055;
clo42313[5] = equal_u63;
clo42313[6] = lst;
clo42313[7] = cdr;
void* f4105941175 = encode_clo(clo42313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4105941175;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam41335_fptr() // lam41335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41336 = arg_buffer[1];
//reading env and args
void* a4096141192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4096041190 = (decode_clo(env41336))[4];
//not do dummy comment
void* fun = (decode_clo(env41336))[3];
//not do dummy comment
void* kont41060 = (decode_clo(env41336))[2];
//not do dummy comment
void* foldl = (decode_clo(env41336))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont41060;
arg_buffer[3] = fun;
arg_buffer[4] = a4096041190;
arg_buffer[5] = a4096141192;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41335 = encode_clo(alloc_clo(lam41335_fptr, 0));

void* lam41337_fptr() // lam41337 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41338 = arg_buffer[1];
//reading env and args
void* a4096041190 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41338))[5];
//not do dummy comment
void* lst = (decode_clo(env41338))[4];
//not do dummy comment
void* fun = (decode_clo(env41338))[3];
//not do dummy comment
void* kont41060 = (decode_clo(env41338))[2];
//not do dummy comment
void* foldl = (decode_clo(env41338))[1];

//creating new closure instance
void** clo42315 = alloc_clo(lam41335_fptr, 4);

//setting env list
clo42315[1] = foldl;
clo42315[2] = kont41060;
clo42315[3] = fun;
clo42315[4] = a4096041190;
void* f4106141191 = encode_clo(clo42315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4106141191;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41337 = encode_clo(alloc_clo(lam41337_fptr, 0));

void* lam41339_fptr() // lam41339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41340 = arg_buffer[1];
//reading env and args
void* a4095941188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41340))[6];
//not do dummy comment
void* lst = (decode_clo(env41340))[5];
//not do dummy comment
void* fun = (decode_clo(env41340))[4];
//not do dummy comment
void* acc = (decode_clo(env41340))[3];
//not do dummy comment
void* kont41060 = (decode_clo(env41340))[2];
//not do dummy comment
void* foldl = (decode_clo(env41340))[1];

//creating new closure instance
void** clo42317 = alloc_clo(lam41337_fptr, 5);

//setting env list
clo42317[1] = foldl;
clo42317[2] = kont41060;
clo42317[3] = fun;
clo42317[4] = lst;
clo42317[5] = cdr;
void* f4106241189 = encode_clo(clo42317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4106241189;
arg_buffer[3] = a4095941188;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41339 = encode_clo(alloc_clo(lam41339_fptr, 0));

void* lam41341_fptr() // lam41341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41342 = arg_buffer[1];
//reading env and args
void* a4095841186 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41342))[7];
//not do dummy comment
void* lst = (decode_clo(env41342))[6];
//not do dummy comment
void* fun = (decode_clo(env41342))[5];
//not do dummy comment
void* acc = (decode_clo(env41342))[4];
//not do dummy comment
void* car = (decode_clo(env41342))[3];
//not do dummy comment
void* kont41060 = (decode_clo(env41342))[2];
//not do dummy comment
void* foldl = (decode_clo(env41342))[1];

//if-clause
bool if_guard42318 = is_true(a4095841186);
if(if_guard42318)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41060);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41060))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42320 = alloc_clo(lam41339_fptr, 6);

//setting env list
clo42320[1] = foldl;
clo42320[2] = kont41060;
clo42320[3] = acc;
clo42320[4] = fun;
clo42320[5] = lst;
clo42320[6] = cdr;
void* f4106341187 = encode_clo(clo42320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4106341187;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41341 = encode_clo(alloc_clo(lam41341_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41343 = arg_buffer[1];
//reading env and args
void* kont41060 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42322 = alloc_clo(lam41341_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo42322[1] = foldl;
clo42322[2] = kont41060;
clo42322[3] = car;
clo42322[4] = acc;
clo42322[5] = fun;
clo42322[6] = lst;
clo42322[7] = cdr;
void* f4106441185 = encode_clo(clo42322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4106441185;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam41344_fptr() // lam41344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41345 = arg_buffer[1];
//reading env and args
void* a4096541200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41065 = (decode_clo(env41345))[3];
//not do dummy comment
void* a4096341196 = (decode_clo(env41345))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41345))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41065;
arg_buffer[3] = a4096341196;
arg_buffer[4] = a4096541200;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41344 = encode_clo(alloc_clo(lam41344_fptr, 0));

void* lam41346_fptr() // lam41346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41347 = arg_buffer[1];
//reading env and args
void* a4096441198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41065 = (decode_clo(env41347))[5];
//not do dummy comment
void* a4096341196 = (decode_clo(env41347))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41347))[3];
//not do dummy comment
void* lst2 = (decode_clo(env41347))[2];
//not do dummy comment
void* cons = (decode_clo(env41347))[1];

//creating new closure instance
void** clo42324 = alloc_clo(lam41344_fptr, 3);

//setting env list
clo42324[1] = reverse_u45helper;
clo42324[2] = a4096341196;
clo42324[3] = kont41065;
void* f4106641199 = encode_clo(clo42324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4106641199;
arg_buffer[3] = a4096441198;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41346 = encode_clo(alloc_clo(lam41346_fptr, 0));

void* lam41348_fptr() // lam41348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41349 = arg_buffer[1];
//reading env and args
void* a4096341196 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41065 = (decode_clo(env41349))[6];
//not do dummy comment
void* lst = (decode_clo(env41349))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41349))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41349))[3];
//not do dummy comment
void* car = (decode_clo(env41349))[2];
//not do dummy comment
void* cons = (decode_clo(env41349))[1];

//creating new closure instance
void** clo42326 = alloc_clo(lam41346_fptr, 5);

//setting env list
clo42326[1] = cons;
clo42326[2] = lst2;
clo42326[3] = reverse_u45helper;
clo42326[4] = a4096341196;
clo42326[5] = kont41065;
void* f4106741197 = encode_clo(clo42326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4106741197;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41348 = encode_clo(alloc_clo(lam41348_fptr, 0));

void* lam41350_fptr() // lam41350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41351 = arg_buffer[1];
//reading env and args
void* a4096241194 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41351))[7];
//not do dummy comment
void* kont41065 = (decode_clo(env41351))[6];
//not do dummy comment
void* lst = (decode_clo(env41351))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41351))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41351))[3];
//not do dummy comment
void* car = (decode_clo(env41351))[2];
//not do dummy comment
void* cons = (decode_clo(env41351))[1];

//if-clause
bool if_guard42327 = is_true(a4096241194);
if(if_guard42327)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41065);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41065))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42329 = alloc_clo(lam41348_fptr, 6);

//setting env list
clo42329[1] = cons;
clo42329[2] = car;
clo42329[3] = lst2;
clo42329[4] = reverse_u45helper;
clo42329[5] = lst;
clo42329[6] = kont41065;
void* f4106841195 = encode_clo(clo42329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4106841195;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41350 = encode_clo(alloc_clo(lam41350_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41352 = arg_buffer[1];
//reading env and args
void* kont41065 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42331 = alloc_clo(lam41350_fptr, 7);

//setting env list
clo42331[1] = cons;
clo42331[2] = car;
clo42331[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo42331[4] = reverse_u45helper;
clo42331[5] = lst;
clo42331[6] = kont41065;
clo42331[7] = cdr;
void* f4106941193 = encode_clo(clo42331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4106941193;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam41353_fptr() // lam41353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41354 = arg_buffer[1];
//reading env and args
void* a4096641202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41354))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env41354))[2];
//not do dummy comment
void* kont41070 = (decode_clo(env41354))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont41070;
arg_buffer[3] = lst;
arg_buffer[4] = a4096641202;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41353 = encode_clo(alloc_clo(lam41353_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41355 = arg_buffer[1];
//reading env and args
void* kont41070 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42333 = alloc_clo(lam41353_fptr, 3);

//setting env list
clo42333[1] = kont41070;
clo42333[2] = reverse_u45helper;
clo42333[3] = lst;
void* f4107141201 = encode_clo(clo42333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4107141201;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam41356_fptr() // lam41356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41357 = arg_buffer[1];
//reading env and args
void* x4096941207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41072 = (decode_clo(env41357))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41072);
arg_buffer[2] = x4096941207;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41072))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41356 = encode_clo(alloc_clo(lam41356_fptr, 0));

void* lam41358_fptr() // lam41358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41359 = arg_buffer[1];
//reading env and args
void* a4097441216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4097041209 = (decode_clo(env41359))[4];
//not do dummy comment
void* a4097241212 = (decode_clo(env41359))[3];
//not do dummy comment
void* kont41072 = (decode_clo(env41359))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env41359))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41072;
arg_buffer[3] = a4097041209;
arg_buffer[4] = a4097241212;
arg_buffer[5] = a4097441216;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41358 = encode_clo(alloc_clo(lam41358_fptr, 0));

void* lam41360_fptr() // lam41360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41361 = arg_buffer[1];
//reading env and args
void* a4097341214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4097041209 = (decode_clo(env41361))[6];
//not do dummy comment
void* a4097241212 = (decode_clo(env41361))[5];
//not do dummy comment
void* kont41072 = (decode_clo(env41361))[4];
//not do dummy comment
void* cons = (decode_clo(env41361))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41361))[2];
//not do dummy comment
void* lst2 = (decode_clo(env41361))[1];

//creating new closure instance
void** clo42335 = alloc_clo(lam41358_fptr, 4);

//setting env list
clo42335[1] = take_u45helper;
clo42335[2] = kont41072;
clo42335[3] = a4097241212;
clo42335[4] = a4097041209;
void* f4107441215 = encode_clo(clo42335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4107441215;
arg_buffer[3] = a4097341214;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41360 = encode_clo(alloc_clo(lam41360_fptr, 0));

void* lam41362_fptr() // lam41362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41363 = arg_buffer[1];
//reading env and args
void* a4097241212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4097041209 = (decode_clo(env41363))[7];
//not do dummy comment
void* lst = (decode_clo(env41363))[6];
//not do dummy comment
void* kont41072 = (decode_clo(env41363))[5];
//not do dummy comment
void* car = (decode_clo(env41363))[4];
//not do dummy comment
void* cons = (decode_clo(env41363))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41363))[2];
//not do dummy comment
void* lst2 = (decode_clo(env41363))[1];

//creating new closure instance
void** clo42337 = alloc_clo(lam41360_fptr, 6);

//setting env list
clo42337[1] = lst2;
clo42337[2] = take_u45helper;
clo42337[3] = cons;
clo42337[4] = kont41072;
clo42337[5] = a4097241212;
clo42337[6] = a4097041209;
void* f4107541213 = encode_clo(clo42337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4107541213;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41362 = encode_clo(alloc_clo(lam41362_fptr, 0));

void* lam41365_fptr() // lam41365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41366 = arg_buffer[1];
//reading env and args
void* a4097041209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41366))[8];
//not do dummy comment
void* kont41072 = (decode_clo(env41366))[7];
//not do dummy comment
void* cons = (decode_clo(env41366))[6];
//not do dummy comment
void* _u45 = (decode_clo(env41366))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env41366))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41366))[3];
//not do dummy comment
void* n = (decode_clo(env41366))[2];
//not do dummy comment
void* car = (decode_clo(env41366))[1];
mpz_t* mpzvar42338 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42338, "1", 10);
void* a4097141210 = encode_mpz(mpzvar42338);

//creating new closure instance
void** clo42340 = alloc_clo(lam41362_fptr, 7);

//setting env list
clo42340[1] = lst2;
clo42340[2] = take_u45helper;
clo42340[3] = cons;
clo42340[4] = car;
clo42340[5] = kont41072;
clo42340[6] = lst;
clo42340[7] = a4097041209;
void* f4107641211 = encode_clo(clo42340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4107641211;
arg_buffer[3] = n;
arg_buffer[4] = a4097141210;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41365 = encode_clo(alloc_clo(lam41365_fptr, 0));

void* lam41367_fptr() // lam41367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41368 = arg_buffer[1];
//reading env and args
void* a4096841205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41368))[10];
//not do dummy comment
void* lst = (decode_clo(env41368))[9];
//not do dummy comment
void* reverse = (decode_clo(env41368))[8];
//not do dummy comment
void* kont41072 = (decode_clo(env41368))[7];
//not do dummy comment
void* cons = (decode_clo(env41368))[6];
//not do dummy comment
void* _u45 = (decode_clo(env41368))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env41368))[4];
//not do dummy comment
void* lst2 = (decode_clo(env41368))[3];
//not do dummy comment
void* n = (decode_clo(env41368))[2];
//not do dummy comment
void* car = (decode_clo(env41368))[1];

//if-clause
bool if_guard42341 = is_true(a4096841205);
if(if_guard42341)
{

//creating new closure instance
void** clo42343 = alloc_clo(lam41356_fptr, 1);

//setting env list
clo42343[1] = kont41072;
void* f4107341206 = encode_clo(clo42343);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4107341206;
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
void** clo42345 = alloc_clo(lam41365_fptr, 8);

//setting env list
clo42345[1] = car;
clo42345[2] = n;
clo42345[3] = lst2;
clo42345[4] = take_u45helper;
clo42345[5] = _u45;
clo42345[6] = cons;
clo42345[7] = kont41072;
clo42345[8] = lst;
void* f4107741208 = encode_clo(clo42345);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4107741208;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41367 = encode_clo(alloc_clo(lam41367_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41370 = arg_buffer[1];
//reading env and args
void* kont41072 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar42346 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42346, "0", 10);
void* a4096741203 = encode_mpz(mpzvar42346);

//creating new closure instance
void** clo42348 = alloc_clo(lam41367_fptr, 10);

//setting env list
clo42348[1] = car;
clo42348[2] = n;
clo42348[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo42348[4] = take_u45helper;
clo42348[5] = _u45;
clo42348[6] = cons;
clo42348[7] = kont41072;
clo42348[8] = reverse;
clo42348[9] = lst;
clo42348[10] = cdr;
void* f4107841204 = encode_clo(clo42348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4107841204;
arg_buffer[3] = n;
arg_buffer[4] = a4096741203;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam41371_fptr() // lam41371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41372 = arg_buffer[1];
//reading env and args
void* a4097541218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41079 = (decode_clo(env41372))[4];
//not do dummy comment
void* lst = (decode_clo(env41372))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env41372))[2];
//not do dummy comment
void* n = (decode_clo(env41372))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont41079;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4097541218;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41371 = encode_clo(alloc_clo(lam41371_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41373 = arg_buffer[1];
//reading env and args
void* kont41079 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42350 = alloc_clo(lam41371_fptr, 4);

//setting env list
clo42350[1] = n;
clo42350[2] = take_u45helper;
clo42350[3] = lst;
clo42350[4] = kont41079;
void* f4108041217 = encode_clo(clo42350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4108041217;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam41375_fptr() // lam41375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41376 = arg_buffer[1];
//reading env and args
void* a4098041226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4097841222 = (decode_clo(env41376))[3];
//not do dummy comment
void* kont41081 = (decode_clo(env41376))[2];
//not do dummy comment
void* _u43 = (decode_clo(env41376))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont41081;
arg_buffer[3] = a4097841222;
arg_buffer[4] = a4098041226;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41375 = encode_clo(alloc_clo(lam41375_fptr, 0));

void* lam41377_fptr() // lam41377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41378 = arg_buffer[1];
//reading env and args
void* a4097941224 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4097841222 = (decode_clo(env41378))[4];
//not do dummy comment
void* kont41081 = (decode_clo(env41378))[3];
//not do dummy comment
void* length = (decode_clo(env41378))[2];
//not do dummy comment
void* _u43 = (decode_clo(env41378))[1];

//creating new closure instance
void** clo42352 = alloc_clo(lam41375_fptr, 3);

//setting env list
clo42352[1] = _u43;
clo42352[2] = kont41081;
clo42352[3] = a4097841222;
void* f4108241225 = encode_clo(clo42352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4108241225;
arg_buffer[3] = a4097941224;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41377 = encode_clo(alloc_clo(lam41377_fptr, 0));

void* lam41380_fptr() // lam41380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41381 = arg_buffer[1];
//reading env and args
void* a4097641220 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41381))[5];
//not do dummy comment
void* kont41081 = (decode_clo(env41381))[4];
//not do dummy comment
void* lst = (decode_clo(env41381))[3];
//not do dummy comment
void* length = (decode_clo(env41381))[2];
//not do dummy comment
void* _u43 = (decode_clo(env41381))[1];

//if-clause
bool if_guard42353 = is_true(a4097641220);
if(if_guard42353)
{
mpz_t* mpzvar42354 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42354, "0", 10);
void* x4097741221 = encode_mpz(mpzvar42354);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41081);
arg_buffer[2] = x4097741221;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41081))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar42355 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42355, "1", 10);
void* a4097841222 = encode_mpz(mpzvar42355);

//creating new closure instance
void** clo42357 = alloc_clo(lam41377_fptr, 4);

//setting env list
clo42357[1] = _u43;
clo42357[2] = length;
clo42357[3] = kont41081;
clo42357[4] = a4097841222;
void* f4108341223 = encode_clo(clo42357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4108341223;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41380 = encode_clo(alloc_clo(lam41380_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41382 = arg_buffer[1];
//reading env and args
void* kont41081 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42359 = alloc_clo(lam41380_fptr, 5);

//setting env list
clo42359[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo42359[2] = length;
clo42359[3] = lst;
clo42359[4] = kont41081;
clo42359[5] = cdr;
void* f4108441219 = encode_clo(clo42359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4108441219;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam41383_fptr() // lam41383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41384 = arg_buffer[1];
//reading env and args
void* x4098241230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41085 = (decode_clo(env41384))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41085);
arg_buffer[2] = x4098241230;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41085))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41383 = encode_clo(alloc_clo(lam41383_fptr, 0));

void* lam41385_fptr() // lam41385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41386 = arg_buffer[1];
//reading env and args
void* a4098641238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41085 = (decode_clo(env41386))[3];
//not do dummy comment
void* a4098441234 = (decode_clo(env41386))[2];
//not do dummy comment
void* cons = (decode_clo(env41386))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41085;
arg_buffer[3] = a4098441234;
arg_buffer[4] = a4098641238;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41385 = encode_clo(alloc_clo(lam41385_fptr, 0));

void* lam41387_fptr() // lam41387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41388 = arg_buffer[1];
//reading env and args
void* a4098541236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env41388))[5];
//not do dummy comment
void* kont41085 = (decode_clo(env41388))[4];
//not do dummy comment
void* proc = (decode_clo(env41388))[3];
//not do dummy comment
void* a4098441234 = (decode_clo(env41388))[2];
//not do dummy comment
void* cons = (decode_clo(env41388))[1];

//creating new closure instance
void** clo42361 = alloc_clo(lam41385_fptr, 3);

//setting env list
clo42361[1] = cons;
clo42361[2] = a4098441234;
clo42361[3] = kont41085;
void* f4108741237 = encode_clo(clo42361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4108741237;
arg_buffer[3] = proc;
arg_buffer[4] = a4098541236;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41387 = encode_clo(alloc_clo(lam41387_fptr, 0));

void* lam41389_fptr() // lam41389 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41390 = arg_buffer[1];
//reading env and args
void* a4098441234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41390))[6];
//not do dummy comment
void* lst = (decode_clo(env41390))[5];
//not do dummy comment
void* map = (decode_clo(env41390))[4];
//not do dummy comment
void* kont41085 = (decode_clo(env41390))[3];
//not do dummy comment
void* proc = (decode_clo(env41390))[2];
//not do dummy comment
void* cons = (decode_clo(env41390))[1];

//creating new closure instance
void** clo42363 = alloc_clo(lam41387_fptr, 5);

//setting env list
clo42363[1] = cons;
clo42363[2] = a4098441234;
clo42363[3] = proc;
clo42363[4] = kont41085;
clo42363[5] = map;
void* f4108841235 = encode_clo(clo42363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4108841235;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41389 = encode_clo(alloc_clo(lam41389_fptr, 0));

void* lam41391_fptr() // lam41391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41392 = arg_buffer[1];
//reading env and args
void* a4098341232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41392))[6];
//not do dummy comment
void* lst = (decode_clo(env41392))[5];
//not do dummy comment
void* map = (decode_clo(env41392))[4];
//not do dummy comment
void* kont41085 = (decode_clo(env41392))[3];
//not do dummy comment
void* proc = (decode_clo(env41392))[2];
//not do dummy comment
void* cons = (decode_clo(env41392))[1];

//creating new closure instance
void** clo42365 = alloc_clo(lam41389_fptr, 6);

//setting env list
clo42365[1] = cons;
clo42365[2] = proc;
clo42365[3] = kont41085;
clo42365[4] = map;
clo42365[5] = lst;
clo42365[6] = cdr;
void* f4108941233 = encode_clo(clo42365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4108941233;
arg_buffer[3] = a4098341232;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41391 = encode_clo(alloc_clo(lam41391_fptr, 0));

void* lam41393_fptr() // lam41393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41394 = arg_buffer[1];
//reading env and args
void* a4098141228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41394))[8];
//not do dummy comment
void* map = (decode_clo(env41394))[7];
//not do dummy comment
void* kont41085 = (decode_clo(env41394))[6];
//not do dummy comment
void* proc = (decode_clo(env41394))[5];
//not do dummy comment
void* car = (decode_clo(env41394))[4];
//not do dummy comment
void* cons = (decode_clo(env41394))[3];
//not do dummy comment
void* list = (decode_clo(env41394))[2];
//not do dummy comment
void* cdr = (decode_clo(env41394))[1];

//if-clause
bool if_guard42366 = is_true(a4098141228);
if(if_guard42366)
{

//creating new closure instance
void** clo42368 = alloc_clo(lam41383_fptr, 1);

//setting env list
clo42368[1] = kont41085;
void* f4108641229 = encode_clo(clo42368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4108641229;
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
void** clo42370 = alloc_clo(lam41391_fptr, 6);

//setting env list
clo42370[1] = cons;
clo42370[2] = proc;
clo42370[3] = kont41085;
clo42370[4] = map;
clo42370[5] = lst;
clo42370[6] = cdr;
void* f4109041231 = encode_clo(clo42370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4109041231;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41393 = encode_clo(alloc_clo(lam41393_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41395 = arg_buffer[1];
//reading env and args
void* kont41085 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42372 = alloc_clo(lam41393_fptr, 8);

//setting env list
clo42372[1] = cdr;
clo42372[2] = list;
clo42372[3] = cons;
clo42372[4] = car;
clo42372[5] = proc;
clo42372[6] = kont41085;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo42372[7] = map;
clo42372[8] = lst;
void* f4109141227 = encode_clo(clo42372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4109141227;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam41396_fptr() // lam41396 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41397 = arg_buffer[1];
//reading env and args
void* x4098841242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41092 = (decode_clo(env41397))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41092);
arg_buffer[2] = x4098841242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41092))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41396 = encode_clo(alloc_clo(lam41396_fptr, 0));

void* lam41398_fptr() // lam41398 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41399 = arg_buffer[1];
//reading env and args
void* a4099341252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4099141248 = (decode_clo(env41399))[3];
//not do dummy comment
void* cons = (decode_clo(env41399))[2];
//not do dummy comment
void* kont41092 = (decode_clo(env41399))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41092;
arg_buffer[3] = a4099141248;
arg_buffer[4] = a4099341252;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41398 = encode_clo(alloc_clo(lam41398_fptr, 0));

void* lam41400_fptr() // lam41400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41401 = arg_buffer[1];
//reading env and args
void* a4099241250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env41401))[5];
//not do dummy comment
void* a4099141248 = (decode_clo(env41401))[4];
//not do dummy comment
void* filter = (decode_clo(env41401))[3];
//not do dummy comment
void* cons = (decode_clo(env41401))[2];
//not do dummy comment
void* kont41092 = (decode_clo(env41401))[1];

//creating new closure instance
void** clo42374 = alloc_clo(lam41398_fptr, 3);

//setting env list
clo42374[1] = kont41092;
clo42374[2] = cons;
clo42374[3] = a4099141248;
void* f4109441251 = encode_clo(clo42374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4109441251;
arg_buffer[3] = op;
arg_buffer[4] = a4099241250;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41400 = encode_clo(alloc_clo(lam41400_fptr, 0));

void* lam41402_fptr() // lam41402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41403 = arg_buffer[1];
//reading env and args
void* a4099141248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41403))[6];
//not do dummy comment
void* lst = (decode_clo(env41403))[5];
//not do dummy comment
void* op = (decode_clo(env41403))[4];
//not do dummy comment
void* filter = (decode_clo(env41403))[3];
//not do dummy comment
void* cons = (decode_clo(env41403))[2];
//not do dummy comment
void* kont41092 = (decode_clo(env41403))[1];

//creating new closure instance
void** clo42376 = alloc_clo(lam41400_fptr, 5);

//setting env list
clo42376[1] = kont41092;
clo42376[2] = cons;
clo42376[3] = filter;
clo42376[4] = a4099141248;
clo42376[5] = op;
void* f4109541249 = encode_clo(clo42376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4109541249;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41402 = encode_clo(alloc_clo(lam41402_fptr, 0));

void* lam41404_fptr() // lam41404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41405 = arg_buffer[1];
//reading env and args
void* a4099441254 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env41405))[3];
//not do dummy comment
void* filter = (decode_clo(env41405))[2];
//not do dummy comment
void* kont41092 = (decode_clo(env41405))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont41092;
arg_buffer[3] = op;
arg_buffer[4] = a4099441254;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41404 = encode_clo(alloc_clo(lam41404_fptr, 0));

void* lam41406_fptr() // lam41406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41407 = arg_buffer[1];
//reading env and args
void* a4099041246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41407))[7];
//not do dummy comment
void* lst = (decode_clo(env41407))[6];
//not do dummy comment
void* op = (decode_clo(env41407))[5];
//not do dummy comment
void* filter = (decode_clo(env41407))[4];
//not do dummy comment
void* car = (decode_clo(env41407))[3];
//not do dummy comment
void* cons = (decode_clo(env41407))[2];
//not do dummy comment
void* kont41092 = (decode_clo(env41407))[1];

//if-clause
bool if_guard42377 = is_true(a4099041246);
if(if_guard42377)
{

//creating new closure instance
void** clo42379 = alloc_clo(lam41402_fptr, 6);

//setting env list
clo42379[1] = kont41092;
clo42379[2] = cons;
clo42379[3] = filter;
clo42379[4] = op;
clo42379[5] = lst;
clo42379[6] = cdr;
void* f4109641247 = encode_clo(clo42379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4109641247;
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
void** clo42381 = alloc_clo(lam41404_fptr, 3);

//setting env list
clo42381[1] = kont41092;
clo42381[2] = filter;
clo42381[3] = op;
void* f4109741253 = encode_clo(clo42381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4109741253;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41406 = encode_clo(alloc_clo(lam41406_fptr, 0));

void* lam41408_fptr() // lam41408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41409 = arg_buffer[1];
//reading env and args
void* a4098941244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41409))[7];
//not do dummy comment
void* lst = (decode_clo(env41409))[6];
//not do dummy comment
void* op = (decode_clo(env41409))[5];
//not do dummy comment
void* filter = (decode_clo(env41409))[4];
//not do dummy comment
void* car = (decode_clo(env41409))[3];
//not do dummy comment
void* cons = (decode_clo(env41409))[2];
//not do dummy comment
void* kont41092 = (decode_clo(env41409))[1];

//creating new closure instance
void** clo42383 = alloc_clo(lam41406_fptr, 7);

//setting env list
clo42383[1] = kont41092;
clo42383[2] = cons;
clo42383[3] = car;
clo42383[4] = filter;
clo42383[5] = op;
clo42383[6] = lst;
clo42383[7] = cdr;
void* f4109841245 = encode_clo(clo42383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4109841245;
arg_buffer[3] = a4098941244;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41408 = encode_clo(alloc_clo(lam41408_fptr, 0));

void* lam41410_fptr() // lam41410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41411 = arg_buffer[1];
//reading env and args
void* a4098741240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env41411))[8];
//not do dummy comment
void* op = (decode_clo(env41411))[7];
//not do dummy comment
void* list = (decode_clo(env41411))[6];
//not do dummy comment
void* cdr = (decode_clo(env41411))[5];
//not do dummy comment
void* filter = (decode_clo(env41411))[4];
//not do dummy comment
void* car = (decode_clo(env41411))[3];
//not do dummy comment
void* cons = (decode_clo(env41411))[2];
//not do dummy comment
void* kont41092 = (decode_clo(env41411))[1];

//if-clause
bool if_guard42384 = is_true(a4098741240);
if(if_guard42384)
{

//creating new closure instance
void** clo42386 = alloc_clo(lam41396_fptr, 1);

//setting env list
clo42386[1] = kont41092;
void* f4109341241 = encode_clo(clo42386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4109341241;
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
void** clo42388 = alloc_clo(lam41408_fptr, 7);

//setting env list
clo42388[1] = kont41092;
clo42388[2] = cons;
clo42388[3] = car;
clo42388[4] = filter;
clo42388[5] = op;
clo42388[6] = lst;
clo42388[7] = cdr;
void* f4109941243 = encode_clo(clo42388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4109941243;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41410 = encode_clo(alloc_clo(lam41410_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41412 = arg_buffer[1];
//reading env and args
void* kont41092 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42390 = alloc_clo(lam41410_fptr, 8);

//setting env list
clo42390[1] = kont41092;
clo42390[2] = cons;
clo42390[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo42390[4] = filter;
clo42390[5] = cdr;
clo42390[6] = list;
clo42390[7] = op;
clo42390[8] = lst;
void* f4110041239 = encode_clo(clo42390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4110041239;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam41413_fptr() // lam41413 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41414 = arg_buffer[1];
//reading env and args
void* a4099941262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env41414))[3];
//not do dummy comment
void* a4099741259 = (decode_clo(env41414))[2];
//not do dummy comment
void* kont41101 = (decode_clo(env41414))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont41101;
arg_buffer[3] = a4099741259;
arg_buffer[4] = a4099941262;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41413 = encode_clo(alloc_clo(lam41413_fptr, 0));

void* lam41416_fptr() // lam41416 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41417 = arg_buffer[1];
//reading env and args
void* a4099741259 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env41417))[4];
//not do dummy comment
void* kont41101 = (decode_clo(env41417))[3];
//not do dummy comment
void* n = (decode_clo(env41417))[2];
//not do dummy comment
void* _u45 = (decode_clo(env41417))[1];
mpz_t* mpzvar42391 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42391, "1", 10);
void* a4099841260 = encode_mpz(mpzvar42391);

//creating new closure instance
void** clo42393 = alloc_clo(lam41413_fptr, 3);

//setting env list
clo42393[1] = kont41101;
clo42393[2] = a4099741259;
clo42393[3] = drop;
void* f4110241261 = encode_clo(clo42393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4110241261;
arg_buffer[3] = n;
arg_buffer[4] = a4099841260;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41416 = encode_clo(alloc_clo(lam41416_fptr, 0));

void* lam41418_fptr() // lam41418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41419 = arg_buffer[1];
//reading env and args
void* a4099641257 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41419))[6];
//not do dummy comment
void* kont41101 = (decode_clo(env41419))[5];
//not do dummy comment
void* n = (decode_clo(env41419))[4];
//not do dummy comment
void* _u45 = (decode_clo(env41419))[3];
//not do dummy comment
void* lst = (decode_clo(env41419))[2];
//not do dummy comment
void* drop = (decode_clo(env41419))[1];

//if-clause
bool if_guard42394 = is_true(a4099641257);
if(if_guard42394)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41101);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41101))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42396 = alloc_clo(lam41416_fptr, 4);

//setting env list
clo42396[1] = _u45;
clo42396[2] = n;
clo42396[3] = kont41101;
clo42396[4] = drop;
void* f4110341258 = encode_clo(clo42396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4110341258;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41418 = encode_clo(alloc_clo(lam41418_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41421 = arg_buffer[1];
//reading env and args
void* kont41101 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar42397 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42397, "0", 10);
void* a4099541255 = encode_mpz(mpzvar42397);

//creating new closure instance
void** clo42399 = alloc_clo(lam41418_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo42399[1] = drop;
clo42399[2] = lst;
clo42399[3] = _u45;
clo42399[4] = n;
clo42399[5] = kont41101;
clo42399[6] = cdr;
void* f4110441256 = encode_clo(clo42399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4110441256;
arg_buffer[3] = n;
arg_buffer[4] = a4099541255;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam41422_fptr() // lam41422 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41423 = arg_buffer[1];
//reading env and args
void* a4100341270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4100141266 = (decode_clo(env41423))[3];
//not do dummy comment
void* proc = (decode_clo(env41423))[2];
//not do dummy comment
void* kont41105 = (decode_clo(env41423))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont41105;
arg_buffer[3] = a4100141266;
arg_buffer[4] = a4100341270;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a4100241268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env41425))[5];
//not do dummy comment
void* a4100141266 = (decode_clo(env41425))[4];
//not do dummy comment
void* proc = (decode_clo(env41425))[3];
//not do dummy comment
void* acc = (decode_clo(env41425))[2];
//not do dummy comment
void* kont41105 = (decode_clo(env41425))[1];

//creating new closure instance
void** clo42401 = alloc_clo(lam41422_fptr, 3);

//setting env list
clo42401[1] = kont41105;
clo42401[2] = proc;
clo42401[3] = a4100141266;
void* f4110641269 = encode_clo(clo42401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4110641269;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4100241268;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41424 = encode_clo(alloc_clo(lam41424_fptr, 0));

void* lam41426_fptr() // lam41426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41427 = arg_buffer[1];
//reading env and args
void* a4100141266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41427))[6];
//not do dummy comment
void* foldr = (decode_clo(env41427))[5];
//not do dummy comment
void* lst = (decode_clo(env41427))[4];
//not do dummy comment
void* proc = (decode_clo(env41427))[3];
//not do dummy comment
void* acc = (decode_clo(env41427))[2];
//not do dummy comment
void* kont41105 = (decode_clo(env41427))[1];

//creating new closure instance
void** clo42403 = alloc_clo(lam41424_fptr, 5);

//setting env list
clo42403[1] = kont41105;
clo42403[2] = acc;
clo42403[3] = proc;
clo42403[4] = a4100141266;
clo42403[5] = foldr;
void* f4110741267 = encode_clo(clo42403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4110741267;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41426 = encode_clo(alloc_clo(lam41426_fptr, 0));

void* lam41428_fptr() // lam41428 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41429 = arg_buffer[1];
//reading env and args
void* a4100041264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env41429))[7];
//not do dummy comment
void* car = (decode_clo(env41429))[6];
//not do dummy comment
void* foldr = (decode_clo(env41429))[5];
//not do dummy comment
void* lst = (decode_clo(env41429))[4];
//not do dummy comment
void* proc = (decode_clo(env41429))[3];
//not do dummy comment
void* acc = (decode_clo(env41429))[2];
//not do dummy comment
void* kont41105 = (decode_clo(env41429))[1];

//if-clause
bool if_guard42404 = is_true(a4100041264);
if(if_guard42404)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41105);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41105))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42406 = alloc_clo(lam41426_fptr, 6);

//setting env list
clo42406[1] = kont41105;
clo42406[2] = acc;
clo42406[3] = proc;
clo42406[4] = lst;
clo42406[5] = foldr;
clo42406[6] = cdr;
void* f4110841265 = encode_clo(clo42406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4110841265;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41428 = encode_clo(alloc_clo(lam41428_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41430 = arg_buffer[1];
//reading env and args
void* kont41105 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42408 = alloc_clo(lam41428_fptr, 7);

//setting env list
clo42408[1] = kont41105;
clo42408[2] = acc;
clo42408[3] = proc;
clo42408[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo42408[5] = foldr;
clo42408[6] = car;
clo42408[7] = cdr;
void* f4110941263 = encode_clo(clo42408);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4110941263;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam41431_fptr() // lam41431 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41432 = arg_buffer[1];
//reading env and args
void* a4100741278 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41110 = (decode_clo(env41432))[3];
//not do dummy comment
void* a4100541274 = (decode_clo(env41432))[2];
//not do dummy comment
void* cons = (decode_clo(env41432))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont41110;
arg_buffer[3] = a4100541274;
arg_buffer[4] = a4100741278;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a4100641276 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41110 = (decode_clo(env41434))[5];
//not do dummy comment
void* a4100541274 = (decode_clo(env41434))[4];
//not do dummy comment
void* append = (decode_clo(env41434))[3];
//not do dummy comment
void* lst2 = (decode_clo(env41434))[2];
//not do dummy comment
void* cons = (decode_clo(env41434))[1];

//creating new closure instance
void** clo42410 = alloc_clo(lam41431_fptr, 3);

//setting env list
clo42410[1] = cons;
clo42410[2] = a4100541274;
clo42410[3] = kont41110;
void* f4111141277 = encode_clo(clo42410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4111141277;
arg_buffer[3] = a4100641276;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41433 = encode_clo(alloc_clo(lam41433_fptr, 0));

void* lam41435_fptr() // lam41435 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41436 = arg_buffer[1];
//reading env and args
void* a4100541274 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env41436))[6];
//not do dummy comment
void* lst2 = (decode_clo(env41436))[5];
//not do dummy comment
void* lst1 = (decode_clo(env41436))[4];
//not do dummy comment
void* cons = (decode_clo(env41436))[3];
//not do dummy comment
void* kont41110 = (decode_clo(env41436))[2];
//not do dummy comment
void* cdr = (decode_clo(env41436))[1];

//creating new closure instance
void** clo42412 = alloc_clo(lam41433_fptr, 5);

//setting env list
clo42412[1] = cons;
clo42412[2] = lst2;
clo42412[3] = append;
clo42412[4] = a4100541274;
clo42412[5] = kont41110;
void* f4111241275 = encode_clo(clo42412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4111241275;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41435 = encode_clo(alloc_clo(lam41435_fptr, 0));

void* lam41437_fptr() // lam41437 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41438 = arg_buffer[1];
//reading env and args
void* a4100441272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env41438))[7];
//not do dummy comment
void* lst2 = (decode_clo(env41438))[6];
//not do dummy comment
void* cons = (decode_clo(env41438))[5];
//not do dummy comment
void* kont41110 = (decode_clo(env41438))[4];
//not do dummy comment
void* cdr = (decode_clo(env41438))[3];
//not do dummy comment
void* lst1 = (decode_clo(env41438))[2];
//not do dummy comment
void* car = (decode_clo(env41438))[1];

//if-clause
bool if_guard42413 = is_true(a4100441272);
if(if_guard42413)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41110);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41110))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42415 = alloc_clo(lam41435_fptr, 6);

//setting env list
clo42415[1] = cdr;
clo42415[2] = kont41110;
clo42415[3] = cons;
clo42415[4] = lst1;
clo42415[5] = lst2;
clo42415[6] = append;
void* f4111341273 = encode_clo(clo42415);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4111341273;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam41437 = encode_clo(alloc_clo(lam41437_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41439 = arg_buffer[1];
//reading env and args
void* kont41110 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42417 = alloc_clo(lam41437_fptr, 7);

//setting env list
clo42417[1] = car;
clo42417[2] = lst1;
clo42417[3] = cdr;
clo42417[4] = kont41110;
clo42417[5] = cons;
clo42417[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo42417[7] = append;
void* f4111441271 = encode_clo(clo42417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4111441271;
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
void* _41440 = arg_buffer[1];
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

void* kont4111541279 = prim_car(lst);
void* lst41280 = prim_cdr(lst);
void* x4100841281 = apply_prim_hash(lst41280);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4111541279);
arg_buffer[2] = x4100841281;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4111541279))[0]);
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
void* _41441 = arg_buffer[1];
//reading env and args
void* kont41117 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4100941282 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41117);
arg_buffer[2] = x4100941282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41117))[0]);
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
void* _41442 = arg_buffer[1];
//reading env and args
void* kont41118 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4101041283 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41118);
arg_buffer[2] = x4101041283;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41118))[0]);
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
void* _41443 = arg_buffer[1];
//reading env and args
void* kont41119 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4101141284 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41119);
arg_buffer[2] = x4101141284;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41119))[0]);
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
void* _41444 = arg_buffer[1];
//reading env and args
void* kont41120 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4101241285 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41120);
arg_buffer[2] = x4101241285;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41120))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam41446_fptr() // lam41446 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41447 = arg_buffer[1];
//reading env and args
void* a4101741291 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env41447))[2];
//not do dummy comment
void* kont41121 = (decode_clo(env41447))[1];
mpz_t* mpzvar42418 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42418, "10", 10);
void* a4101841292 = encode_mpz(mpzvar42418);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont41121;
arg_buffer[3] = a4101741291;
arg_buffer[4] = a4101841292;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41446 = encode_clo(alloc_clo(lam41446_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41452 = arg_buffer[1];
//reading env and args
void* kont41121 = arg_buffer[2];
//Dummy comment
void* a4101341286 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar42419 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42419, "80", 10);
void* a4101441287 = encode_mpz(mpzvar42419);
mpz_t* mpzvar42420 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42420, "10", 10);
void* a4101541288 = encode_mpz(mpzvar42420);
void* a4101641289 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo42422 = alloc_clo(lam41446_fptr, 2);

//setting env list
clo42422[1] = kont41121;
clo42422[2] = hash_u45ref;
void* f4112241290 = encode_clo(clo42422);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4112241290;
arg_buffer[3] = a4101341286;
arg_buffer[4] = a4101441287;
arg_buffer[5] = a4101541288;
arg_buffer[6] = a4101641289;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam41453_fptr() // lam41453 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env41454 = arg_buffer[1];
//reading env and args
void* x4101941294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont41123 = (decode_clo(env41454))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont41123);
arg_buffer[2] = x4101941294;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont41123))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam41453 = encode_clo(alloc_clo(lam41453_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _41455 = arg_buffer[1];
//reading env and args
void* kont41123 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo42424 = alloc_clo(lam41453_fptr, 1);

//setting env list
clo42424[1] = kont41123;
void* f4112441293 = encode_clo(clo42424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4112441293;
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

