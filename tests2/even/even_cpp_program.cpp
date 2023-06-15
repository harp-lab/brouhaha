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
void* _12198 = arg_buffer[1];
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

void* kont1193012034 = prim_car(lst);
void* lst12035 = prim_cdr(lst);
void* x1184312036 = apply_prim__u43(lst12035);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1193012034);
arg_buffer[2] = x1184312036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1193012034))[0]);
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
void* _12199 = arg_buffer[1];
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

void* kont1193212037 = prim_car(lst);
void* lst12038 = prim_cdr(lst);
void* x1184412039 = apply_prim__u45(lst12038);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1193212037);
arg_buffer[2] = x1184412039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1193212037))[0]);
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
void* _12200 = arg_buffer[1];
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

void* kont1193412040 = prim_car(lst);
void* lst12041 = prim_cdr(lst);
void* x1184512042 = apply_prim__u42(lst12041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1193412040);
arg_buffer[2] = x1184512042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1193412040))[0]);
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
void* _12201 = arg_buffer[1];
//reading env and args
void* kont11936 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1184612043 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11936);
arg_buffer[2] = x1184612043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11936))[0]);
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
void* _12202 = arg_buffer[1];
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

void* kont1193712044 = prim_car(lst);
void* lst12045 = prim_cdr(lst);
void* x1184712046 = apply_prim__u47(lst12045);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1193712044);
arg_buffer[2] = x1184712046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1193712044))[0]);
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
void* _12203 = arg_buffer[1];
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

void* kont1193912047 = prim_car(lst);
void* lst12048 = prim_cdr(lst);
void* x1184812049 = apply_prim__u61(lst12048);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1193912047);
arg_buffer[2] = x1184812049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1193912047))[0]);
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
void* _12204 = arg_buffer[1];
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

void* kont1194112050 = prim_car(lst);
void* lst12051 = prim_cdr(lst);
void* x1184912052 = apply_prim__u62(lst12051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1194112050);
arg_buffer[2] = x1184912052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1194112050))[0]);
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
void* _12205 = arg_buffer[1];
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

void* kont1194312053 = prim_car(lst);
void* lst12054 = prim_cdr(lst);
void* x1185012055 = apply_prim__u60(lst12054);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1194312053);
arg_buffer[2] = x1185012055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1194312053))[0]);
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
void* _12206 = arg_buffer[1];
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

void* kont1194512056 = prim_car(lst);
void* lst12057 = prim_cdr(lst);
void* x1185112058 = apply_prim__u60_u61(lst12057);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1194512056);
arg_buffer[2] = x1185112058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1194512056))[0]);
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
void* _12207 = arg_buffer[1];
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

void* kont1194712059 = prim_car(lst);
void* lst12060 = prim_cdr(lst);
void* x1185212061 = apply_prim__u62_u61(lst12060);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1194712059);
arg_buffer[2] = x1185212061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1194712059))[0]);
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
void* _12208 = arg_buffer[1];
//reading env and args
void* kont11949 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1185312062 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11949);
arg_buffer[2] = x1185312062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11949))[0]);
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
void* _12209 = arg_buffer[1];
//reading env and args
void* kont11950 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1185412063 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11950);
arg_buffer[2] = x1185412063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11950))[0]);
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
void* _12210 = arg_buffer[1];
//reading env and args
void* kont11951 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1185512064 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11951);
arg_buffer[2] = x1185512064;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11951))[0]);
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
void* _12211 = arg_buffer[1];
//reading env and args
void* kont11952 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1185612065 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11952);
arg_buffer[2] = x1185612065;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11952))[0]);
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
void* _12212 = arg_buffer[1];
//reading env and args
void* kont11953 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1185712066 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11953);
arg_buffer[2] = x1185712066;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11953))[0]);
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
void* _12213 = arg_buffer[1];
//reading env and args
void* kont11954 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1185812067 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11954);
arg_buffer[2] = x1185812067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam12214_fptr() // lam12214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12215 = arg_buffer[1];
//reading env and args
void* a1186112071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11955 = (decode_clo(env12215))[3];
//not do dummy comment
void* a1185912068 = (decode_clo(env12215))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12215))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont11955;
arg_buffer[3] = a1185912068;
arg_buffer[4] = a1186112071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12214 = encode_clo(alloc_clo(lam12214_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12218 = arg_buffer[1];
//reading env and args
void* kont11955 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12953 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12953, "0", 10);
void* a1185912068 = encode_mpz(mpzvar12953);
mpz_t* mpzvar12954 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12954, "2", 10);
void* a1186012069 = encode_mpz(mpzvar12954);

//creating new closure instance
void** clo12956 = alloc_clo(lam12214_fptr, 3);

//setting env list
clo12956[1] = equal_u63;
clo12956[2] = a1185912068;
clo12956[3] = kont11955;
void* f1195612070 = encode_clo(clo12956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1195612070;
arg_buffer[3] = x;
arg_buffer[4] = a1186012069;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam12219_fptr() // lam12219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12220 = arg_buffer[1];
//reading env and args
void* a1186412075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11957 = (decode_clo(env12220))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env12220))[2];
//not do dummy comment
void* a1186212072 = (decode_clo(env12220))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont11957;
arg_buffer[3] = a1186212072;
arg_buffer[4] = a1186412075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12219 = encode_clo(alloc_clo(lam12219_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12223 = arg_buffer[1];
//reading env and args
void* kont11957 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12957, "1", 10);
void* a1186212072 = encode_mpz(mpzvar12957);
mpz_t* mpzvar12958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12958, "2", 10);
void* a1186312073 = encode_mpz(mpzvar12958);

//creating new closure instance
void** clo12960 = alloc_clo(lam12219_fptr, 3);

//setting env list
clo12960[1] = a1186212072;
clo12960[2] = equal_u63;
clo12960[3] = kont11957;
void* f1195812074 = encode_clo(clo12960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1195812074;
arg_buffer[3] = x;
arg_buffer[4] = a1186312073;
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
void* _12224 = arg_buffer[1];
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

void* kont1195912076 = prim_car(x);
void* x12077 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1195912076);
arg_buffer[2] = x12077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1195912076))[0]);
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
void* _12225 = arg_buffer[1];
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

void* kont1196112078 = prim_car(lst);
void* lst12079 = prim_cdr(lst);
void* x1186512080 = apply_prim_and(lst12079);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1196112078);
arg_buffer[2] = x1186512080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1196112078))[0]);
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
void* _12226 = arg_buffer[1];
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

void* kont1196312081 = prim_car(lst);
void* lst12082 = prim_cdr(lst);
void* x1186612083 = apply_prim_or(lst12082);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1196312081);
arg_buffer[2] = x1186612083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1196312081))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam12229_fptr() // lam12229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12230 = arg_buffer[1];
//reading env and args
void* a1187212093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env12230))[3];
//not do dummy comment
void* kont11965 = (decode_clo(env12230))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont11965;
arg_buffer[3] = x;
arg_buffer[4] = a1187212093;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12229 = encode_clo(alloc_clo(lam12229_fptr, 0));

void* lam12231_fptr() // lam12231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12232 = arg_buffer[1];
//reading env and args
void* a1187012090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12232))[5];
//not do dummy comment
void* lst = (decode_clo(env12232))[4];
//not do dummy comment
void* x = (decode_clo(env12232))[3];
//not do dummy comment
void* kont11965 = (decode_clo(env12232))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12232))[1];

//if-clause
bool if_guard12961 = is_true(a1187012090);
if(if_guard12961)
{
void* x1187112091 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11965);
arg_buffer[2] = x1187112091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12963 = alloc_clo(lam12229_fptr, 3);

//setting env list
clo12963[1] = member_u63;
clo12963[2] = kont11965;
clo12963[3] = x;
void* f1196612092 = encode_clo(clo12963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1196612092;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12231 = encode_clo(alloc_clo(lam12231_fptr, 0));

void* lam12233_fptr() // lam12233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12234 = arg_buffer[1];
//reading env and args
void* a1186912088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12234))[6];
//not do dummy comment
void* lst = (decode_clo(env12234))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env12234))[4];
//not do dummy comment
void* x = (decode_clo(env12234))[3];
//not do dummy comment
void* kont11965 = (decode_clo(env12234))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12234))[1];

//creating new closure instance
void** clo12965 = alloc_clo(lam12231_fptr, 5);

//setting env list
clo12965[1] = member_u63;
clo12965[2] = kont11965;
clo12965[3] = x;
clo12965[4] = lst;
clo12965[5] = cdr;
void* f1196712089 = encode_clo(clo12965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1196712089;
arg_buffer[3] = a1186912088;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12233 = encode_clo(alloc_clo(lam12233_fptr, 0));

void* lam12235_fptr() // lam12235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12236 = arg_buffer[1];
//reading env and args
void* a1186712085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12236))[7];
//not do dummy comment
void* lst = (decode_clo(env12236))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env12236))[5];
//not do dummy comment
void* x = (decode_clo(env12236))[4];
//not do dummy comment
void* car = (decode_clo(env12236))[3];
//not do dummy comment
void* kont11965 = (decode_clo(env12236))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12236))[1];

//if-clause
bool if_guard12966 = is_true(a1186712085);
if(if_guard12966)
{
void* x1186812086 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11965);
arg_buffer[2] = x1186812086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12968 = alloc_clo(lam12233_fptr, 6);

//setting env list
clo12968[1] = member_u63;
clo12968[2] = kont11965;
clo12968[3] = x;
clo12968[4] = equal_u63;
clo12968[5] = lst;
clo12968[6] = cdr;
void* f1196812087 = encode_clo(clo12968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1196812087;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12235 = encode_clo(alloc_clo(lam12235_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12237 = arg_buffer[1];
//reading env and args
void* kont11965 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12970 = alloc_clo(lam12235_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo12970[1] = member_u63;
clo12970[2] = kont11965;
clo12970[3] = car;
clo12970[4] = x;
clo12970[5] = equal_u63;
clo12970[6] = lst;
clo12970[7] = cdr;
void* f1196912084 = encode_clo(clo12970);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1196912084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam12238_fptr() // lam12238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12239 = arg_buffer[1];
//reading env and args
void* a1187612101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11970 = (decode_clo(env12239))[4];
//not do dummy comment
void* a1187512099 = (decode_clo(env12239))[3];
//not do dummy comment
void* fun = (decode_clo(env12239))[2];
//not do dummy comment
void* foldl = (decode_clo(env12239))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont11970;
arg_buffer[3] = fun;
arg_buffer[4] = a1187512099;
arg_buffer[5] = a1187612101;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12238 = encode_clo(alloc_clo(lam12238_fptr, 0));

void* lam12240_fptr() // lam12240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12241 = arg_buffer[1];
//reading env and args
void* a1187512099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12241))[5];
//not do dummy comment
void* kont11970 = (decode_clo(env12241))[4];
//not do dummy comment
void* lst = (decode_clo(env12241))[3];
//not do dummy comment
void* fun = (decode_clo(env12241))[2];
//not do dummy comment
void* foldl = (decode_clo(env12241))[1];

//creating new closure instance
void** clo12972 = alloc_clo(lam12238_fptr, 4);

//setting env list
clo12972[1] = foldl;
clo12972[2] = fun;
clo12972[3] = a1187512099;
clo12972[4] = kont11970;
void* f1197112100 = encode_clo(clo12972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1197112100;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12240 = encode_clo(alloc_clo(lam12240_fptr, 0));

void* lam12242_fptr() // lam12242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12243 = arg_buffer[1];
//reading env and args
void* a1187412097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12243))[6];
//not do dummy comment
void* kont11970 = (decode_clo(env12243))[5];
//not do dummy comment
void* lst = (decode_clo(env12243))[4];
//not do dummy comment
void* fun = (decode_clo(env12243))[3];
//not do dummy comment
void* acc = (decode_clo(env12243))[2];
//not do dummy comment
void* foldl = (decode_clo(env12243))[1];

//creating new closure instance
void** clo12974 = alloc_clo(lam12240_fptr, 5);

//setting env list
clo12974[1] = foldl;
clo12974[2] = fun;
clo12974[3] = lst;
clo12974[4] = kont11970;
clo12974[5] = cdr;
void* f1197212098 = encode_clo(clo12974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1197212098;
arg_buffer[3] = a1187412097;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12242 = encode_clo(alloc_clo(lam12242_fptr, 0));

void* lam12244_fptr() // lam12244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12245 = arg_buffer[1];
//reading env and args
void* a1187312095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12245))[7];
//not do dummy comment
void* kont11970 = (decode_clo(env12245))[6];
//not do dummy comment
void* lst = (decode_clo(env12245))[5];
//not do dummy comment
void* fun = (decode_clo(env12245))[4];
//not do dummy comment
void* acc = (decode_clo(env12245))[3];
//not do dummy comment
void* car = (decode_clo(env12245))[2];
//not do dummy comment
void* foldl = (decode_clo(env12245))[1];

//if-clause
bool if_guard12975 = is_true(a1187312095);
if(if_guard12975)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11970);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11970))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12977 = alloc_clo(lam12242_fptr, 6);

//setting env list
clo12977[1] = foldl;
clo12977[2] = acc;
clo12977[3] = fun;
clo12977[4] = lst;
clo12977[5] = kont11970;
clo12977[6] = cdr;
void* f1197312096 = encode_clo(clo12977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1197312096;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12244 = encode_clo(alloc_clo(lam12244_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12246 = arg_buffer[1];
//reading env and args
void* kont11970 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo12979 = alloc_clo(lam12244_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo12979[1] = foldl;
clo12979[2] = car;
clo12979[3] = acc;
clo12979[4] = fun;
clo12979[5] = lst;
clo12979[6] = kont11970;
clo12979[7] = cdr;
void* f1197412094 = encode_clo(clo12979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1197412094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam12247_fptr() // lam12247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12248 = arg_buffer[1];
//reading env and args
void* a1188012109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12248))[3];
//not do dummy comment
void* kont11975 = (decode_clo(env12248))[2];
//not do dummy comment
void* a1187812105 = (decode_clo(env12248))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont11975;
arg_buffer[3] = a1187812105;
arg_buffer[4] = a1188012109;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12247 = encode_clo(alloc_clo(lam12247_fptr, 0));

void* lam12249_fptr() // lam12249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12250 = arg_buffer[1];
//reading env and args
void* a1187912107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12250))[5];
//not do dummy comment
void* kont11975 = (decode_clo(env12250))[4];
//not do dummy comment
void* a1187812105 = (decode_clo(env12250))[3];
//not do dummy comment
void* lst2 = (decode_clo(env12250))[2];
//not do dummy comment
void* cons = (decode_clo(env12250))[1];

//creating new closure instance
void** clo12981 = alloc_clo(lam12247_fptr, 3);

//setting env list
clo12981[1] = a1187812105;
clo12981[2] = kont11975;
clo12981[3] = reverse_u45helper;
void* f1197612108 = encode_clo(clo12981);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1197612108;
arg_buffer[3] = a1187912107;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12249 = encode_clo(alloc_clo(lam12249_fptr, 0));

void* lam12251_fptr() // lam12251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12252 = arg_buffer[1];
//reading env and args
void* a1187812105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12252))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12252))[5];
//not do dummy comment
void* kont11975 = (decode_clo(env12252))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12252))[3];
//not do dummy comment
void* car = (decode_clo(env12252))[2];
//not do dummy comment
void* cons = (decode_clo(env12252))[1];

//creating new closure instance
void** clo12983 = alloc_clo(lam12249_fptr, 5);

//setting env list
clo12983[1] = cons;
clo12983[2] = lst2;
clo12983[3] = a1187812105;
clo12983[4] = kont11975;
clo12983[5] = reverse_u45helper;
void* f1197712106 = encode_clo(clo12983);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1197712106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12251 = encode_clo(alloc_clo(lam12251_fptr, 0));

void* lam12253_fptr() // lam12253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12254 = arg_buffer[1];
//reading env and args
void* a1187712103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12254))[7];
//not do dummy comment
void* lst = (decode_clo(env12254))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12254))[5];
//not do dummy comment
void* kont11975 = (decode_clo(env12254))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12254))[3];
//not do dummy comment
void* car = (decode_clo(env12254))[2];
//not do dummy comment
void* cons = (decode_clo(env12254))[1];

//if-clause
bool if_guard12984 = is_true(a1187712103);
if(if_guard12984)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11975);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12986 = alloc_clo(lam12251_fptr, 6);

//setting env list
clo12986[1] = cons;
clo12986[2] = car;
clo12986[3] = lst2;
clo12986[4] = kont11975;
clo12986[5] = reverse_u45helper;
clo12986[6] = lst;
void* f1197812104 = encode_clo(clo12986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1197812104;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12253 = encode_clo(alloc_clo(lam12253_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12255 = arg_buffer[1];
//reading env and args
void* kont11975 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12988 = alloc_clo(lam12253_fptr, 7);

//setting env list
clo12988[1] = cons;
clo12988[2] = car;
clo12988[3] = lst2;
clo12988[4] = kont11975;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo12988[5] = reverse_u45helper;
clo12988[6] = lst;
clo12988[7] = cdr;
void* f1197912102 = encode_clo(clo12988);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1197912102;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam12256_fptr() // lam12256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12257 = arg_buffer[1];
//reading env and args
void* a1188112111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12257))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12257))[2];
//not do dummy comment
void* kont11980 = (decode_clo(env12257))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont11980;
arg_buffer[3] = lst;
arg_buffer[4] = a1188112111;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12256 = encode_clo(alloc_clo(lam12256_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12258 = arg_buffer[1];
//reading env and args
void* kont11980 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo12990 = alloc_clo(lam12256_fptr, 3);

//setting env list
clo12990[1] = kont11980;
clo12990[2] = reverse_u45helper;
clo12990[3] = lst;
void* f1198112110 = encode_clo(clo12990);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1198112110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam12259_fptr() // lam12259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12260 = arg_buffer[1];
//reading env and args
void* x1188412116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11982 = (decode_clo(env12260))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11982);
arg_buffer[2] = x1188412116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11982))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12259 = encode_clo(alloc_clo(lam12259_fptr, 0));

void* lam12261_fptr() // lam12261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12262 = arg_buffer[1];
//reading env and args
void* a1188912125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1188512118 = (decode_clo(env12262))[4];
//not do dummy comment
void* a1188712121 = (decode_clo(env12262))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12262))[2];
//not do dummy comment
void* kont11982 = (decode_clo(env12262))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont11982;
arg_buffer[3] = a1188512118;
arg_buffer[4] = a1188712121;
arg_buffer[5] = a1188912125;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12261 = encode_clo(alloc_clo(lam12261_fptr, 0));

void* lam12263_fptr() // lam12263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12264 = arg_buffer[1];
//reading env and args
void* a1188812123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1188512118 = (decode_clo(env12264))[6];
//not do dummy comment
void* a1188712121 = (decode_clo(env12264))[5];
//not do dummy comment
void* cons = (decode_clo(env12264))[4];
//not do dummy comment
void* kont11982 = (decode_clo(env12264))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12264))[2];
//not do dummy comment
void* lst2 = (decode_clo(env12264))[1];

//creating new closure instance
void** clo12992 = alloc_clo(lam12261_fptr, 4);

//setting env list
clo12992[1] = kont11982;
clo12992[2] = take_u45helper;
clo12992[3] = a1188712121;
clo12992[4] = a1188512118;
void* f1198412124 = encode_clo(clo12992);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1198412124;
arg_buffer[3] = a1188812123;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12263 = encode_clo(alloc_clo(lam12263_fptr, 0));

void* lam12265_fptr() // lam12265 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12266 = arg_buffer[1];
//reading env and args
void* a1188712121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12266))[7];
//not do dummy comment
void* a1188512118 = (decode_clo(env12266))[6];
//not do dummy comment
void* car = (decode_clo(env12266))[5];
//not do dummy comment
void* cons = (decode_clo(env12266))[4];
//not do dummy comment
void* kont11982 = (decode_clo(env12266))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12266))[2];
//not do dummy comment
void* lst2 = (decode_clo(env12266))[1];

//creating new closure instance
void** clo12994 = alloc_clo(lam12263_fptr, 6);

//setting env list
clo12994[1] = lst2;
clo12994[2] = take_u45helper;
clo12994[3] = kont11982;
clo12994[4] = cons;
clo12994[5] = a1188712121;
clo12994[6] = a1188512118;
void* f1198512122 = encode_clo(clo12994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1198512122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12265 = encode_clo(alloc_clo(lam12265_fptr, 0));

void* lam12268_fptr() // lam12268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12269 = arg_buffer[1];
//reading env and args
void* a1188512118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12269))[8];
//not do dummy comment
void* cons = (decode_clo(env12269))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env12269))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12269))[5];
//not do dummy comment
void* n = (decode_clo(env12269))[4];
//not do dummy comment
void* car = (decode_clo(env12269))[3];
//not do dummy comment
void* _u45 = (decode_clo(env12269))[2];
//not do dummy comment
void* kont11982 = (decode_clo(env12269))[1];
mpz_t* mpzvar12995 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12995, "1", 10);
void* a1188612119 = encode_mpz(mpzvar12995);

//creating new closure instance
void** clo12997 = alloc_clo(lam12265_fptr, 7);

//setting env list
clo12997[1] = lst2;
clo12997[2] = take_u45helper;
clo12997[3] = kont11982;
clo12997[4] = cons;
clo12997[5] = car;
clo12997[6] = a1188512118;
clo12997[7] = lst;
void* f1198612120 = encode_clo(clo12997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1198612120;
arg_buffer[3] = n;
arg_buffer[4] = a1188612119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12268 = encode_clo(alloc_clo(lam12268_fptr, 0));

void* lam12270_fptr() // lam12270 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12271 = arg_buffer[1];
//reading env and args
void* a1188312114 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12271))[10];
//not do dummy comment
void* lst = (decode_clo(env12271))[9];
//not do dummy comment
void* reverse = (decode_clo(env12271))[8];
//not do dummy comment
void* cons = (decode_clo(env12271))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env12271))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12271))[5];
//not do dummy comment
void* n = (decode_clo(env12271))[4];
//not do dummy comment
void* car = (decode_clo(env12271))[3];
//not do dummy comment
void* _u45 = (decode_clo(env12271))[2];
//not do dummy comment
void* kont11982 = (decode_clo(env12271))[1];

//if-clause
bool if_guard12998 = is_true(a1188312114);
if(if_guard12998)
{

//creating new closure instance
void** clo13000 = alloc_clo(lam12259_fptr, 1);

//setting env list
clo13000[1] = kont11982;
void* f1198312115 = encode_clo(clo13000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1198312115;
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
void** clo13002 = alloc_clo(lam12268_fptr, 8);

//setting env list
clo13002[1] = kont11982;
clo13002[2] = _u45;
clo13002[3] = car;
clo13002[4] = n;
clo13002[5] = lst2;
clo13002[6] = take_u45helper;
clo13002[7] = cons;
clo13002[8] = lst;
void* f1198712117 = encode_clo(clo13002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1198712117;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12270 = encode_clo(alloc_clo(lam12270_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12273 = arg_buffer[1];
//reading env and args
void* kont11982 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar13003 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13003, "0", 10);
void* a1188212112 = encode_mpz(mpzvar13003);

//creating new closure instance
void** clo13005 = alloc_clo(lam12270_fptr, 10);

//setting env list
clo13005[1] = kont11982;
clo13005[2] = _u45;
clo13005[3] = car;
clo13005[4] = n;
clo13005[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo13005[6] = take_u45helper;
clo13005[7] = cons;
clo13005[8] = reverse;
clo13005[9] = lst;
clo13005[10] = cdr;
void* f1198812113 = encode_clo(clo13005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1198812113;
arg_buffer[3] = n;
arg_buffer[4] = a1188212112;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam12274_fptr() // lam12274 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12275 = arg_buffer[1];
//reading env and args
void* a1189012127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12275))[4];
//not do dummy comment
void* kont11989 = (decode_clo(env12275))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12275))[2];
//not do dummy comment
void* n = (decode_clo(env12275))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont11989;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1189012127;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12274 = encode_clo(alloc_clo(lam12274_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12276 = arg_buffer[1];
//reading env and args
void* kont11989 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13007 = alloc_clo(lam12274_fptr, 4);

//setting env list
clo13007[1] = n;
clo13007[2] = take_u45helper;
clo13007[3] = kont11989;
clo13007[4] = lst;
void* f1199012126 = encode_clo(clo13007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1199012126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam12278_fptr() // lam12278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12279 = arg_buffer[1];
//reading env and args
void* a1189512135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1189312131 = (decode_clo(env12279))[3];
//not do dummy comment
void* kont11991 = (decode_clo(env12279))[2];
//not do dummy comment
void* _u43 = (decode_clo(env12279))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont11991;
arg_buffer[3] = a1189312131;
arg_buffer[4] = a1189512135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12278 = encode_clo(alloc_clo(lam12278_fptr, 0));

void* lam12280_fptr() // lam12280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12281 = arg_buffer[1];
//reading env and args
void* a1189412133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1189312131 = (decode_clo(env12281))[4];
//not do dummy comment
void* length = (decode_clo(env12281))[3];
//not do dummy comment
void* kont11991 = (decode_clo(env12281))[2];
//not do dummy comment
void* _u43 = (decode_clo(env12281))[1];

//creating new closure instance
void** clo13009 = alloc_clo(lam12278_fptr, 3);

//setting env list
clo13009[1] = _u43;
clo13009[2] = kont11991;
clo13009[3] = a1189312131;
void* f1199212134 = encode_clo(clo13009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1199212134;
arg_buffer[3] = a1189412133;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12280 = encode_clo(alloc_clo(lam12280_fptr, 0));

void* lam12283_fptr() // lam12283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12284 = arg_buffer[1];
//reading env and args
void* a1189112129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12284))[5];
//not do dummy comment
void* lst = (decode_clo(env12284))[4];
//not do dummy comment
void* length = (decode_clo(env12284))[3];
//not do dummy comment
void* kont11991 = (decode_clo(env12284))[2];
//not do dummy comment
void* _u43 = (decode_clo(env12284))[1];

//if-clause
bool if_guard13010 = is_true(a1189112129);
if(if_guard13010)
{
mpz_t* mpzvar13011 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13011, "0", 10);
void* x1189212130 = encode_mpz(mpzvar13011);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11991);
arg_buffer[2] = x1189212130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11991))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar13012 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13012, "1", 10);
void* a1189312131 = encode_mpz(mpzvar13012);

//creating new closure instance
void** clo13014 = alloc_clo(lam12280_fptr, 4);

//setting env list
clo13014[1] = _u43;
clo13014[2] = kont11991;
clo13014[3] = length;
clo13014[4] = a1189312131;
void* f1199312132 = encode_clo(clo13014);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1199312132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12283 = encode_clo(alloc_clo(lam12283_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12285 = arg_buffer[1];
//reading env and args
void* kont11991 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo13016 = alloc_clo(lam12283_fptr, 5);

//setting env list
clo13016[1] = _u43;
clo13016[2] = kont11991;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo13016[3] = length;
clo13016[4] = lst;
clo13016[5] = cdr;
void* f1199412128 = encode_clo(clo13016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1199412128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam12286_fptr() // lam12286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12287 = arg_buffer[1];
//reading env and args
void* x1189712139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11995 = (decode_clo(env12287))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11995);
arg_buffer[2] = x1189712139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11995))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12286 = encode_clo(alloc_clo(lam12286_fptr, 0));

void* lam12288_fptr() // lam12288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12289 = arg_buffer[1];
//reading env and args
void* a1190112147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1189912143 = (decode_clo(env12289))[3];
//not do dummy comment
void* kont11995 = (decode_clo(env12289))[2];
//not do dummy comment
void* cons = (decode_clo(env12289))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont11995;
arg_buffer[3] = a1189912143;
arg_buffer[4] = a1190112147;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12288 = encode_clo(alloc_clo(lam12288_fptr, 0));

void* lam12290_fptr() // lam12290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12291 = arg_buffer[1];
//reading env and args
void* a1190012145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1189912143 = (decode_clo(env12291))[5];
//not do dummy comment
void* map = (decode_clo(env12291))[4];
//not do dummy comment
void* proc = (decode_clo(env12291))[3];
//not do dummy comment
void* kont11995 = (decode_clo(env12291))[2];
//not do dummy comment
void* cons = (decode_clo(env12291))[1];

//creating new closure instance
void** clo13018 = alloc_clo(lam12288_fptr, 3);

//setting env list
clo13018[1] = cons;
clo13018[2] = kont11995;
clo13018[3] = a1189912143;
void* f1199712146 = encode_clo(clo13018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1199712146;
arg_buffer[3] = proc;
arg_buffer[4] = a1190012145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12290 = encode_clo(alloc_clo(lam12290_fptr, 0));

void* lam12292_fptr() // lam12292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12293 = arg_buffer[1];
//reading env and args
void* a1189912143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12293))[6];
//not do dummy comment
void* lst = (decode_clo(env12293))[5];
//not do dummy comment
void* map = (decode_clo(env12293))[4];
//not do dummy comment
void* proc = (decode_clo(env12293))[3];
//not do dummy comment
void* kont11995 = (decode_clo(env12293))[2];
//not do dummy comment
void* cons = (decode_clo(env12293))[1];

//creating new closure instance
void** clo13020 = alloc_clo(lam12290_fptr, 5);

//setting env list
clo13020[1] = cons;
clo13020[2] = kont11995;
clo13020[3] = proc;
clo13020[4] = map;
clo13020[5] = a1189912143;
void* f1199812144 = encode_clo(clo13020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1199812144;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12292 = encode_clo(alloc_clo(lam12292_fptr, 0));

void* lam12294_fptr() // lam12294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12295 = arg_buffer[1];
//reading env and args
void* a1189812141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12295))[6];
//not do dummy comment
void* lst = (decode_clo(env12295))[5];
//not do dummy comment
void* map = (decode_clo(env12295))[4];
//not do dummy comment
void* proc = (decode_clo(env12295))[3];
//not do dummy comment
void* kont11995 = (decode_clo(env12295))[2];
//not do dummy comment
void* cons = (decode_clo(env12295))[1];

//creating new closure instance
void** clo13022 = alloc_clo(lam12292_fptr, 6);

//setting env list
clo13022[1] = cons;
clo13022[2] = kont11995;
clo13022[3] = proc;
clo13022[4] = map;
clo13022[5] = lst;
clo13022[6] = cdr;
void* f1199912142 = encode_clo(clo13022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1199912142;
arg_buffer[3] = a1189812141;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12294 = encode_clo(alloc_clo(lam12294_fptr, 0));

void* lam12296_fptr() // lam12296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12297 = arg_buffer[1];
//reading env and args
void* a1189612137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12297))[8];
//not do dummy comment
void* map = (decode_clo(env12297))[7];
//not do dummy comment
void* proc = (decode_clo(env12297))[6];
//not do dummy comment
void* kont11995 = (decode_clo(env12297))[5];
//not do dummy comment
void* car = (decode_clo(env12297))[4];
//not do dummy comment
void* cons = (decode_clo(env12297))[3];
//not do dummy comment
void* list = (decode_clo(env12297))[2];
//not do dummy comment
void* cdr = (decode_clo(env12297))[1];

//if-clause
bool if_guard13023 = is_true(a1189612137);
if(if_guard13023)
{

//creating new closure instance
void** clo13025 = alloc_clo(lam12286_fptr, 1);

//setting env list
clo13025[1] = kont11995;
void* f1199612138 = encode_clo(clo13025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1199612138;
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
void** clo13027 = alloc_clo(lam12294_fptr, 6);

//setting env list
clo13027[1] = cons;
clo13027[2] = kont11995;
clo13027[3] = proc;
clo13027[4] = map;
clo13027[5] = lst;
clo13027[6] = cdr;
void* f1200012140 = encode_clo(clo13027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1200012140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12296 = encode_clo(alloc_clo(lam12296_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12298 = arg_buffer[1];
//reading env and args
void* kont11995 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13029 = alloc_clo(lam12296_fptr, 8);

//setting env list
clo13029[1] = cdr;
clo13029[2] = list;
clo13029[3] = cons;
clo13029[4] = car;
clo13029[5] = kont11995;
clo13029[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo13029[7] = map;
clo13029[8] = lst;
void* f1200112136 = encode_clo(clo13029);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1200112136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam12299_fptr() // lam12299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12300 = arg_buffer[1];
//reading env and args
void* x1190312151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12002 = (decode_clo(env12300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12002);
arg_buffer[2] = x1190312151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12002))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12299 = encode_clo(alloc_clo(lam12299_fptr, 0));

void* lam12301_fptr() // lam12301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12302 = arg_buffer[1];
//reading env and args
void* a1190812161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12002 = (decode_clo(env12302))[3];
//not do dummy comment
void* cons = (decode_clo(env12302))[2];
//not do dummy comment
void* a1190612157 = (decode_clo(env12302))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12002;
arg_buffer[3] = a1190612157;
arg_buffer[4] = a1190812161;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12301 = encode_clo(alloc_clo(lam12301_fptr, 0));

void* lam12303_fptr() // lam12303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12304 = arg_buffer[1];
//reading env and args
void* a1190712159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12002 = (decode_clo(env12304))[5];
//not do dummy comment
void* op = (decode_clo(env12304))[4];
//not do dummy comment
void* filter = (decode_clo(env12304))[3];
//not do dummy comment
void* cons = (decode_clo(env12304))[2];
//not do dummy comment
void* a1190612157 = (decode_clo(env12304))[1];

//creating new closure instance
void** clo13031 = alloc_clo(lam12301_fptr, 3);

//setting env list
clo13031[1] = a1190612157;
clo13031[2] = cons;
clo13031[3] = kont12002;
void* f1200412160 = encode_clo(clo13031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1200412160;
arg_buffer[3] = op;
arg_buffer[4] = a1190712159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12303 = encode_clo(alloc_clo(lam12303_fptr, 0));

void* lam12305_fptr() // lam12305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12306 = arg_buffer[1];
//reading env and args
void* a1190612157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12306))[6];
//not do dummy comment
void* kont12002 = (decode_clo(env12306))[5];
//not do dummy comment
void* lst = (decode_clo(env12306))[4];
//not do dummy comment
void* op = (decode_clo(env12306))[3];
//not do dummy comment
void* filter = (decode_clo(env12306))[2];
//not do dummy comment
void* cons = (decode_clo(env12306))[1];

//creating new closure instance
void** clo13033 = alloc_clo(lam12303_fptr, 5);

//setting env list
clo13033[1] = a1190612157;
clo13033[2] = cons;
clo13033[3] = filter;
clo13033[4] = op;
clo13033[5] = kont12002;
void* f1200512158 = encode_clo(clo13033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1200512158;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12305 = encode_clo(alloc_clo(lam12305_fptr, 0));

void* lam12307_fptr() // lam12307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12308 = arg_buffer[1];
//reading env and args
void* a1190912163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12002 = (decode_clo(env12308))[3];
//not do dummy comment
void* op = (decode_clo(env12308))[2];
//not do dummy comment
void* filter = (decode_clo(env12308))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont12002;
arg_buffer[3] = op;
arg_buffer[4] = a1190912163;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12307 = encode_clo(alloc_clo(lam12307_fptr, 0));

void* lam12309_fptr() // lam12309 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12310 = arg_buffer[1];
//reading env and args
void* a1190512155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12310))[7];
//not do dummy comment
void* kont12002 = (decode_clo(env12310))[6];
//not do dummy comment
void* lst = (decode_clo(env12310))[5];
//not do dummy comment
void* op = (decode_clo(env12310))[4];
//not do dummy comment
void* cons = (decode_clo(env12310))[3];
//not do dummy comment
void* filter = (decode_clo(env12310))[2];
//not do dummy comment
void* car = (decode_clo(env12310))[1];

//if-clause
bool if_guard13034 = is_true(a1190512155);
if(if_guard13034)
{

//creating new closure instance
void** clo13036 = alloc_clo(lam12305_fptr, 6);

//setting env list
clo13036[1] = cons;
clo13036[2] = filter;
clo13036[3] = op;
clo13036[4] = lst;
clo13036[5] = kont12002;
clo13036[6] = cdr;
void* f1200612156 = encode_clo(clo13036);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1200612156;
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
void** clo13038 = alloc_clo(lam12307_fptr, 3);

//setting env list
clo13038[1] = filter;
clo13038[2] = op;
clo13038[3] = kont12002;
void* f1200712162 = encode_clo(clo13038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1200712162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12309 = encode_clo(alloc_clo(lam12309_fptr, 0));

void* lam12311_fptr() // lam12311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12312 = arg_buffer[1];
//reading env and args
void* a1190412153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12312))[7];
//not do dummy comment
void* kont12002 = (decode_clo(env12312))[6];
//not do dummy comment
void* lst = (decode_clo(env12312))[5];
//not do dummy comment
void* op = (decode_clo(env12312))[4];
//not do dummy comment
void* cons = (decode_clo(env12312))[3];
//not do dummy comment
void* filter = (decode_clo(env12312))[2];
//not do dummy comment
void* car = (decode_clo(env12312))[1];

//creating new closure instance
void** clo13040 = alloc_clo(lam12309_fptr, 7);

//setting env list
clo13040[1] = car;
clo13040[2] = filter;
clo13040[3] = cons;
clo13040[4] = op;
clo13040[5] = lst;
clo13040[6] = kont12002;
clo13040[7] = cdr;
void* f1200812154 = encode_clo(clo13040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1200812154;
arg_buffer[3] = a1190412153;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12311 = encode_clo(alloc_clo(lam12311_fptr, 0));

void* lam12313_fptr() // lam12313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12314 = arg_buffer[1];
//reading env and args
void* a1190212149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12002 = (decode_clo(env12314))[8];
//not do dummy comment
void* lst = (decode_clo(env12314))[7];
//not do dummy comment
void* op = (decode_clo(env12314))[6];
//not do dummy comment
void* cons = (decode_clo(env12314))[5];
//not do dummy comment
void* list = (decode_clo(env12314))[4];
//not do dummy comment
void* cdr = (decode_clo(env12314))[3];
//not do dummy comment
void* filter = (decode_clo(env12314))[2];
//not do dummy comment
void* car = (decode_clo(env12314))[1];

//if-clause
bool if_guard13041 = is_true(a1190212149);
if(if_guard13041)
{

//creating new closure instance
void** clo13043 = alloc_clo(lam12299_fptr, 1);

//setting env list
clo13043[1] = kont12002;
void* f1200312150 = encode_clo(clo13043);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1200312150;
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
void** clo13045 = alloc_clo(lam12311_fptr, 7);

//setting env list
clo13045[1] = car;
clo13045[2] = filter;
clo13045[3] = cons;
clo13045[4] = op;
clo13045[5] = lst;
clo13045[6] = kont12002;
clo13045[7] = cdr;
void* f1200912152 = encode_clo(clo13045);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1200912152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12313 = encode_clo(alloc_clo(lam12313_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12315 = arg_buffer[1];
//reading env and args
void* kont12002 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13047 = alloc_clo(lam12313_fptr, 8);

//setting env list
clo13047[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo13047[2] = filter;
clo13047[3] = cdr;
clo13047[4] = list;
clo13047[5] = cons;
clo13047[6] = op;
clo13047[7] = lst;
clo13047[8] = kont12002;
void* f1201012148 = encode_clo(clo13047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1201012148;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam12316_fptr() // lam12316 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12317 = arg_buffer[1];
//reading env and args
void* a1191412171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12317))[3];
//not do dummy comment
void* a1191212168 = (decode_clo(env12317))[2];
//not do dummy comment
void* kont12011 = (decode_clo(env12317))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont12011;
arg_buffer[3] = a1191212168;
arg_buffer[4] = a1191412171;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12316 = encode_clo(alloc_clo(lam12316_fptr, 0));

void* lam12319_fptr() // lam12319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12320 = arg_buffer[1];
//reading env and args
void* a1191212168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env12320))[4];
//not do dummy comment
void* kont12011 = (decode_clo(env12320))[3];
//not do dummy comment
void* n = (decode_clo(env12320))[2];
//not do dummy comment
void* _u45 = (decode_clo(env12320))[1];
mpz_t* mpzvar13048 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13048, "1", 10);
void* a1191312169 = encode_mpz(mpzvar13048);

//creating new closure instance
void** clo13050 = alloc_clo(lam12316_fptr, 3);

//setting env list
clo13050[1] = kont12011;
clo13050[2] = a1191212168;
clo13050[3] = drop;
void* f1201212170 = encode_clo(clo13050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1201212170;
arg_buffer[3] = n;
arg_buffer[4] = a1191312169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12319 = encode_clo(alloc_clo(lam12319_fptr, 0));

void* lam12321_fptr() // lam12321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12322 = arg_buffer[1];
//reading env and args
void* a1191112166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12322))[6];
//not do dummy comment
void* kont12011 = (decode_clo(env12322))[5];
//not do dummy comment
void* n = (decode_clo(env12322))[4];
//not do dummy comment
void* _u45 = (decode_clo(env12322))[3];
//not do dummy comment
void* lst = (decode_clo(env12322))[2];
//not do dummy comment
void* drop = (decode_clo(env12322))[1];

//if-clause
bool if_guard13051 = is_true(a1191112166);
if(if_guard13051)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12011);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12011))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13053 = alloc_clo(lam12319_fptr, 4);

//setting env list
clo13053[1] = _u45;
clo13053[2] = n;
clo13053[3] = kont12011;
clo13053[4] = drop;
void* f1201312167 = encode_clo(clo13053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1201312167;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12321 = encode_clo(alloc_clo(lam12321_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12324 = arg_buffer[1];
//reading env and args
void* kont12011 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar13054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13054, "0", 10);
void* a1191012164 = encode_mpz(mpzvar13054);

//creating new closure instance
void** clo13056 = alloc_clo(lam12321_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo13056[1] = drop;
clo13056[2] = lst;
clo13056[3] = _u45;
clo13056[4] = n;
clo13056[5] = kont12011;
clo13056[6] = cdr;
void* f1201412165 = encode_clo(clo13056);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1201412165;
arg_buffer[3] = n;
arg_buffer[4] = a1191012164;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam12325_fptr() // lam12325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12326 = arg_buffer[1];
//reading env and args
void* a1191812179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env12326))[3];
//not do dummy comment
void* kont12015 = (decode_clo(env12326))[2];
//not do dummy comment
void* a1191612175 = (decode_clo(env12326))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont12015;
arg_buffer[3] = a1191612175;
arg_buffer[4] = a1191812179;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12325 = encode_clo(alloc_clo(lam12325_fptr, 0));

void* lam12327_fptr() // lam12327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12328 = arg_buffer[1];
//reading env and args
void* a1191712177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env12328))[5];
//not do dummy comment
void* kont12015 = (decode_clo(env12328))[4];
//not do dummy comment
void* a1191612175 = (decode_clo(env12328))[3];
//not do dummy comment
void* proc = (decode_clo(env12328))[2];
//not do dummy comment
void* acc = (decode_clo(env12328))[1];

//creating new closure instance
void** clo13058 = alloc_clo(lam12325_fptr, 3);

//setting env list
clo13058[1] = a1191612175;
clo13058[2] = kont12015;
clo13058[3] = proc;
void* f1201612178 = encode_clo(clo13058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1201612178;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1191712177;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12327 = encode_clo(alloc_clo(lam12327_fptr, 0));

void* lam12329_fptr() // lam12329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12330 = arg_buffer[1];
//reading env and args
void* a1191612175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12015 = (decode_clo(env12330))[6];
//not do dummy comment
void* cdr = (decode_clo(env12330))[5];
//not do dummy comment
void* foldr = (decode_clo(env12330))[4];
//not do dummy comment
void* lst = (decode_clo(env12330))[3];
//not do dummy comment
void* proc = (decode_clo(env12330))[2];
//not do dummy comment
void* acc = (decode_clo(env12330))[1];

//creating new closure instance
void** clo13060 = alloc_clo(lam12327_fptr, 5);

//setting env list
clo13060[1] = acc;
clo13060[2] = proc;
clo13060[3] = a1191612175;
clo13060[4] = kont12015;
clo13060[5] = foldr;
void* f1201712176 = encode_clo(clo13060);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1201712176;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12329 = encode_clo(alloc_clo(lam12329_fptr, 0));

void* lam12331_fptr() // lam12331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12332 = arg_buffer[1];
//reading env and args
void* a1191512173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env12332))[7];
//not do dummy comment
void* kont12015 = (decode_clo(env12332))[6];
//not do dummy comment
void* cdr = (decode_clo(env12332))[5];
//not do dummy comment
void* foldr = (decode_clo(env12332))[4];
//not do dummy comment
void* lst = (decode_clo(env12332))[3];
//not do dummy comment
void* proc = (decode_clo(env12332))[2];
//not do dummy comment
void* acc = (decode_clo(env12332))[1];

//if-clause
bool if_guard13061 = is_true(a1191512173);
if(if_guard13061)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12015);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12015))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13063 = alloc_clo(lam12329_fptr, 6);

//setting env list
clo13063[1] = acc;
clo13063[2] = proc;
clo13063[3] = lst;
clo13063[4] = foldr;
clo13063[5] = cdr;
clo13063[6] = kont12015;
void* f1201812174 = encode_clo(clo13063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1201812174;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12331 = encode_clo(alloc_clo(lam12331_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12333 = arg_buffer[1];
//reading env and args
void* kont12015 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo13065 = alloc_clo(lam12331_fptr, 7);

//setting env list
clo13065[1] = acc;
clo13065[2] = proc;
clo13065[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo13065[4] = foldr;
clo13065[5] = cdr;
clo13065[6] = kont12015;
clo13065[7] = car;
void* f1201912172 = encode_clo(clo13065);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1201912172;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam12334_fptr() // lam12334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12335 = arg_buffer[1];
//reading env and args
void* a1192212187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12020 = (decode_clo(env12335))[3];
//not do dummy comment
void* a1192012183 = (decode_clo(env12335))[2];
//not do dummy comment
void* cons = (decode_clo(env12335))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont12020;
arg_buffer[3] = a1192012183;
arg_buffer[4] = a1192212187;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12334 = encode_clo(alloc_clo(lam12334_fptr, 0));

void* lam12336_fptr() // lam12336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12337 = arg_buffer[1];
//reading env and args
void* a1192112185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12020 = (decode_clo(env12337))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12337))[4];
//not do dummy comment
void* cons = (decode_clo(env12337))[3];
//not do dummy comment
void* append = (decode_clo(env12337))[2];
//not do dummy comment
void* a1192012183 = (decode_clo(env12337))[1];

//creating new closure instance
void** clo13067 = alloc_clo(lam12334_fptr, 3);

//setting env list
clo13067[1] = cons;
clo13067[2] = a1192012183;
clo13067[3] = kont12020;
void* f1202112186 = encode_clo(clo13067);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1202112186;
arg_buffer[3] = a1192112185;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12336 = encode_clo(alloc_clo(lam12336_fptr, 0));

void* lam12338_fptr() // lam12338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12339 = arg_buffer[1];
//reading env and args
void* a1192012183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12339))[6];
//not do dummy comment
void* kont12020 = (decode_clo(env12339))[5];
//not do dummy comment
void* append = (decode_clo(env12339))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12339))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12339))[2];
//not do dummy comment
void* cons = (decode_clo(env12339))[1];

//creating new closure instance
void** clo13069 = alloc_clo(lam12336_fptr, 5);

//setting env list
clo13069[1] = a1192012183;
clo13069[2] = append;
clo13069[3] = cons;
clo13069[4] = lst2;
clo13069[5] = kont12020;
void* f1202212184 = encode_clo(clo13069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1202212184;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12338 = encode_clo(alloc_clo(lam12338_fptr, 0));

void* lam12340_fptr() // lam12340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12341 = arg_buffer[1];
//reading env and args
void* a1191912181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12341))[7];
//not do dummy comment
void* kont12020 = (decode_clo(env12341))[6];
//not do dummy comment
void* append = (decode_clo(env12341))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12341))[4];
//not do dummy comment
void* cons = (decode_clo(env12341))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12341))[2];
//not do dummy comment
void* car = (decode_clo(env12341))[1];

//if-clause
bool if_guard13070 = is_true(a1191912181);
if(if_guard13070)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12020);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12020))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo13072 = alloc_clo(lam12338_fptr, 6);

//setting env list
clo13072[1] = cons;
clo13072[2] = lst1;
clo13072[3] = lst2;
clo13072[4] = append;
clo13072[5] = kont12020;
clo13072[6] = cdr;
void* f1202312182 = encode_clo(clo13072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1202312182;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12340 = encode_clo(alloc_clo(lam12340_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12342 = arg_buffer[1];
//reading env and args
void* kont12020 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo13074 = alloc_clo(lam12340_fptr, 7);

//setting env list
clo13074[1] = car;
clo13074[2] = lst1;
clo13074[3] = cons;
clo13074[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo13074[5] = append;
clo13074[6] = kont12020;
clo13074[7] = cdr;
void* f1202412180 = encode_clo(clo13074);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1202412180;
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

void* kont1202512188 = prim_car(lst);
void* lst12189 = prim_cdr(lst);
void* x1192312190 = apply_prim_hash(lst12189);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1202512188);
arg_buffer[2] = x1192312190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1202512188))[0]);
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
void* _12344 = arg_buffer[1];
//reading env and args
void* kont12027 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1192412191 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12027);
arg_buffer[2] = x1192412191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12027))[0]);
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
void* _12345 = arg_buffer[1];
//reading env and args
void* kont12028 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1192512192 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12028);
arg_buffer[2] = x1192512192;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12028))[0]);
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
void* _12346 = arg_buffer[1];
//reading env and args
void* kont12029 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1192612193 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12029);
arg_buffer[2] = x1192612193;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12029))[0]);
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
void* _12347 = arg_buffer[1];
//reading env and args
void* kont12030 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1192712194 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12030);
arg_buffer[2] = x1192712194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12030))[0]);
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
void* _12349 = arg_buffer[1];
//reading env and args
void* kont12031 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar13075 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar13075, "5", 10);
void* a1192812195 = encode_mpz(mpzvar13075);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont12031;
arg_buffer[3] = a1192812195;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam12350_fptr() // lam12350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12351 = arg_buffer[1];
//reading env and args
void* x1192912197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont12032 = (decode_clo(env12351))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont12032);
arg_buffer[2] = x1192912197;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont12032))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12350 = encode_clo(alloc_clo(lam12350_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12352 = arg_buffer[1];
//reading env and args
void* kont12032 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo13077 = alloc_clo(lam12350_fptr, 1);

//setting env list
clo13077[1] = kont12032;
void* f1203312196 = encode_clo(clo13077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1203312196;
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

