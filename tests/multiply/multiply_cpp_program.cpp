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
void* _89188 = arg_buffer[1];
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

void* kont8892389024 = prim_car(lst);
void* lst89025 = prim_cdr(lst);
void* x8883389026 = apply_prim__u43(lst89025);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8892389024);
arg_buffer[2] = x8883389026;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8892389024))[0]);
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
void* _89189 = arg_buffer[1];
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

void* kont8892589027 = prim_car(lst);
void* lst89028 = prim_cdr(lst);
void* x8883489029 = apply_prim__u45(lst89028);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8892589027);
arg_buffer[2] = x8883489029;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8892589027))[0]);
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
void* _89190 = arg_buffer[1];
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

void* kont8892789030 = prim_car(lst);
void* lst89031 = prim_cdr(lst);
void* x8883589032 = apply_prim__u42(lst89031);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8892789030);
arg_buffer[2] = x8883589032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8892789030))[0]);
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
void* _89191 = arg_buffer[1];
//reading env and args
void* kont88929 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8883689033 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88929);
arg_buffer[2] = x8883689033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88929))[0]);
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
void* _89192 = arg_buffer[1];
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

void* kont8893089034 = prim_car(lst);
void* lst89035 = prim_cdr(lst);
void* x8883789036 = apply_prim__u47(lst89035);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8893089034);
arg_buffer[2] = x8883789036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893089034))[0]);
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
void* _89193 = arg_buffer[1];
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

void* kont8893289037 = prim_car(lst);
void* lst89038 = prim_cdr(lst);
void* x8883889039 = apply_prim__u61(lst89038);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8893289037);
arg_buffer[2] = x8883889039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893289037))[0]);
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
void* _89194 = arg_buffer[1];
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

void* kont8893489040 = prim_car(lst);
void* lst89041 = prim_cdr(lst);
void* x8883989042 = apply_prim__u62(lst89041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8893489040);
arg_buffer[2] = x8883989042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893489040))[0]);
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
void* _89195 = arg_buffer[1];
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

void* kont8893689043 = prim_car(lst);
void* lst89044 = prim_cdr(lst);
void* x8884089045 = apply_prim__u60(lst89044);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8893689043);
arg_buffer[2] = x8884089045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893689043))[0]);
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
void* _89196 = arg_buffer[1];
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

void* kont8893889046 = prim_car(lst);
void* lst89047 = prim_cdr(lst);
void* x8884189048 = apply_prim__u60_u61(lst89047);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8893889046);
arg_buffer[2] = x8884189048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8893889046))[0]);
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
void* _89197 = arg_buffer[1];
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

void* kont8894089049 = prim_car(lst);
void* lst89050 = prim_cdr(lst);
void* x8884289051 = apply_prim__u62_u61(lst89050);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8894089049);
arg_buffer[2] = x8884289051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8894089049))[0]);
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
void* _89198 = arg_buffer[1];
//reading env and args
void* kont88942 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8884389052 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88942);
arg_buffer[2] = x8884389052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88942))[0]);
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
void* _89199 = arg_buffer[1];
//reading env and args
void* kont88943 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8884489053 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88943);
arg_buffer[2] = x8884489053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88943))[0]);
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
void* _89200 = arg_buffer[1];
//reading env and args
void* kont88944 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8884589054 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88944);
arg_buffer[2] = x8884589054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88944))[0]);
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
void* _89201 = arg_buffer[1];
//reading env and args
void* kont88945 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8884689055 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88945);
arg_buffer[2] = x8884689055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88945))[0]);
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
void* _89202 = arg_buffer[1];
//reading env and args
void* kont88946 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8884789056 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88946);
arg_buffer[2] = x8884789056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88946))[0]);
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
void* _89203 = arg_buffer[1];
//reading env and args
void* kont88947 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8884889057 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88947);
arg_buffer[2] = x8884889057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88947))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam89204_fptr() // lam89204 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89205 = arg_buffer[1];
//reading env and args
void* a8885189061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8884989058 = (decode_clo(env89205))[3];
//not do dummy comment
void* kont88948 = (decode_clo(env89205))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env89205))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont88948;
arg_buffer[3] = a8884989058;
arg_buffer[4] = a8885189061;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89204 = encode_clo(alloc_clo(lam89204_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89208 = arg_buffer[1];
//reading env and args
void* kont88948 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar90427 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90427, "0", 10);
void* a8884989058 = encode_mpz(mpzvar90427);
mpz_t* mpzvar90428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90428, "2", 10);
void* a8885089059 = encode_mpz(mpzvar90428);

//creating new closure instance
void** clo90430 = alloc_clo(lam89204_fptr, 3);

//setting env list
clo90430[1] = equal_u63;
clo90430[2] = kont88948;
clo90430[3] = a8884989058;
void* f8894989060 = encode_clo(clo90430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8894989060;
arg_buffer[3] = x;
arg_buffer[4] = a8885089059;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam89209_fptr() // lam89209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89210 = arg_buffer[1];
//reading env and args
void* a8885489065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env89210))[3];
//not do dummy comment
void* a8885289062 = (decode_clo(env89210))[2];
//not do dummy comment
void* kont88950 = (decode_clo(env89210))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont88950;
arg_buffer[3] = a8885289062;
arg_buffer[4] = a8885489065;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89209 = encode_clo(alloc_clo(lam89209_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89213 = arg_buffer[1];
//reading env and args
void* kont88950 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar90431 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90431, "1", 10);
void* a8885289062 = encode_mpz(mpzvar90431);
mpz_t* mpzvar90432 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90432, "2", 10);
void* a8885389063 = encode_mpz(mpzvar90432);

//creating new closure instance
void** clo90434 = alloc_clo(lam89209_fptr, 3);

//setting env list
clo90434[1] = kont88950;
clo90434[2] = a8885289062;
clo90434[3] = equal_u63;
void* f8895189064 = encode_clo(clo90434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8895189064;
arg_buffer[3] = x;
arg_buffer[4] = a8885389063;
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
void* _89214 = arg_buffer[1];
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

void* kont8895289066 = prim_car(x);
void* x89067 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8895289066);
arg_buffer[2] = x89067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8895289066))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam89217_fptr() // lam89217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89218 = arg_buffer[1];
//reading env and args
void* a8886089077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88954 = (decode_clo(env89218))[3];
//not do dummy comment
void* x = (decode_clo(env89218))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env89218))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont88954;
arg_buffer[3] = x;
arg_buffer[4] = a8886089077;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89217 = encode_clo(alloc_clo(lam89217_fptr, 0));

void* lam89219_fptr() // lam89219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89220 = arg_buffer[1];
//reading env and args
void* a8885889074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89220))[5];
//not do dummy comment
void* lst = (decode_clo(env89220))[4];
//not do dummy comment
void* kont88954 = (decode_clo(env89220))[3];
//not do dummy comment
void* x = (decode_clo(env89220))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env89220))[1];

//if-clause
bool if_guard90435 = is_true(a8885889074);
if(if_guard90435)
{
void* x8885989075 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88954);
arg_buffer[2] = x8885989075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90437 = alloc_clo(lam89217_fptr, 3);

//setting env list
clo90437[1] = member_u63;
clo90437[2] = x;
clo90437[3] = kont88954;
void* f8895589076 = encode_clo(clo90437);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8895589076;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89219 = encode_clo(alloc_clo(lam89219_fptr, 0));

void* lam89221_fptr() // lam89221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89222 = arg_buffer[1];
//reading env and args
void* a8885789072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89222))[6];
//not do dummy comment
void* lst = (decode_clo(env89222))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env89222))[4];
//not do dummy comment
void* kont88954 = (decode_clo(env89222))[3];
//not do dummy comment
void* x = (decode_clo(env89222))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env89222))[1];

//creating new closure instance
void** clo90439 = alloc_clo(lam89219_fptr, 5);

//setting env list
clo90439[1] = member_u63;
clo90439[2] = x;
clo90439[3] = kont88954;
clo90439[4] = lst;
clo90439[5] = cdr;
void* f8895689073 = encode_clo(clo90439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8895689073;
arg_buffer[3] = a8885789072;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89221 = encode_clo(alloc_clo(lam89221_fptr, 0));

void* lam89223_fptr() // lam89223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89224 = arg_buffer[1];
//reading env and args
void* a8885589069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89224))[7];
//not do dummy comment
void* lst = (decode_clo(env89224))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env89224))[5];
//not do dummy comment
void* kont88954 = (decode_clo(env89224))[4];
//not do dummy comment
void* x = (decode_clo(env89224))[3];
//not do dummy comment
void* car = (decode_clo(env89224))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env89224))[1];

//if-clause
bool if_guard90440 = is_true(a8885589069);
if(if_guard90440)
{
void* x8885689070 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88954);
arg_buffer[2] = x8885689070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90442 = alloc_clo(lam89221_fptr, 6);

//setting env list
clo90442[1] = member_u63;
clo90442[2] = x;
clo90442[3] = kont88954;
clo90442[4] = equal_u63;
clo90442[5] = lst;
clo90442[6] = cdr;
void* f8895789071 = encode_clo(clo90442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8895789071;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89223 = encode_clo(alloc_clo(lam89223_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89225 = arg_buffer[1];
//reading env and args
void* kont88954 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90444 = alloc_clo(lam89223_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo90444[1] = member_u63;
clo90444[2] = car;
clo90444[3] = x;
clo90444[4] = kont88954;
clo90444[5] = equal_u63;
clo90444[6] = lst;
clo90444[7] = cdr;
void* f8895889068 = encode_clo(clo90444);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8895889068;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam89226_fptr() // lam89226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89227 = arg_buffer[1];
//reading env and args
void* a8886489085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8886389083 = (decode_clo(env89227))[4];
//not do dummy comment
void* fun = (decode_clo(env89227))[3];
//not do dummy comment
void* kont88959 = (decode_clo(env89227))[2];
//not do dummy comment
void* foldl = (decode_clo(env89227))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont88959;
arg_buffer[3] = fun;
arg_buffer[4] = a8886389083;
arg_buffer[5] = a8886489085;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89226 = encode_clo(alloc_clo(lam89226_fptr, 0));

void* lam89228_fptr() // lam89228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89229 = arg_buffer[1];
//reading env and args
void* a8886389083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89229))[5];
//not do dummy comment
void* lst = (decode_clo(env89229))[4];
//not do dummy comment
void* fun = (decode_clo(env89229))[3];
//not do dummy comment
void* kont88959 = (decode_clo(env89229))[2];
//not do dummy comment
void* foldl = (decode_clo(env89229))[1];

//creating new closure instance
void** clo90446 = alloc_clo(lam89226_fptr, 4);

//setting env list
clo90446[1] = foldl;
clo90446[2] = kont88959;
clo90446[3] = fun;
clo90446[4] = a8886389083;
void* f8896089084 = encode_clo(clo90446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8896089084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89228 = encode_clo(alloc_clo(lam89228_fptr, 0));

void* lam89230_fptr() // lam89230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89231 = arg_buffer[1];
//reading env and args
void* a8886289081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89231))[6];
//not do dummy comment
void* lst = (decode_clo(env89231))[5];
//not do dummy comment
void* fun = (decode_clo(env89231))[4];
//not do dummy comment
void* acc = (decode_clo(env89231))[3];
//not do dummy comment
void* kont88959 = (decode_clo(env89231))[2];
//not do dummy comment
void* foldl = (decode_clo(env89231))[1];

//creating new closure instance
void** clo90448 = alloc_clo(lam89228_fptr, 5);

//setting env list
clo90448[1] = foldl;
clo90448[2] = kont88959;
clo90448[3] = fun;
clo90448[4] = lst;
clo90448[5] = cdr;
void* f8896189082 = encode_clo(clo90448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8896189082;
arg_buffer[3] = a8886289081;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89230 = encode_clo(alloc_clo(lam89230_fptr, 0));

void* lam89232_fptr() // lam89232 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89233 = arg_buffer[1];
//reading env and args
void* a8886189079 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89233))[7];
//not do dummy comment
void* lst = (decode_clo(env89233))[6];
//not do dummy comment
void* fun = (decode_clo(env89233))[5];
//not do dummy comment
void* acc = (decode_clo(env89233))[4];
//not do dummy comment
void* car = (decode_clo(env89233))[3];
//not do dummy comment
void* kont88959 = (decode_clo(env89233))[2];
//not do dummy comment
void* foldl = (decode_clo(env89233))[1];

//if-clause
bool if_guard90449 = is_true(a8886189079);
if(if_guard90449)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88959);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88959))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90451 = alloc_clo(lam89230_fptr, 6);

//setting env list
clo90451[1] = foldl;
clo90451[2] = kont88959;
clo90451[3] = acc;
clo90451[4] = fun;
clo90451[5] = lst;
clo90451[6] = cdr;
void* f8896289080 = encode_clo(clo90451);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8896289080;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89232 = encode_clo(alloc_clo(lam89232_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89234 = arg_buffer[1];
//reading env and args
void* kont88959 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo90453 = alloc_clo(lam89232_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo90453[1] = foldl;
clo90453[2] = kont88959;
clo90453[3] = car;
clo90453[4] = acc;
clo90453[5] = fun;
clo90453[6] = lst;
clo90453[7] = cdr;
void* f8896389078 = encode_clo(clo90453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8896389078;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam89235_fptr() // lam89235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89236 = arg_buffer[1];
//reading env and args
void* a8886889093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8886689089 = (decode_clo(env89236))[3];
//not do dummy comment
void* kont88964 = (decode_clo(env89236))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env89236))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont88964;
arg_buffer[3] = a8886689089;
arg_buffer[4] = a8886889093;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89235 = encode_clo(alloc_clo(lam89235_fptr, 0));

void* lam89237_fptr() // lam89237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89238 = arg_buffer[1];
//reading env and args
void* a8886789091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8886689089 = (decode_clo(env89238))[5];
//not do dummy comment
void* kont88964 = (decode_clo(env89238))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env89238))[3];
//not do dummy comment
void* lst2 = (decode_clo(env89238))[2];
//not do dummy comment
void* cons = (decode_clo(env89238))[1];

//creating new closure instance
void** clo90455 = alloc_clo(lam89235_fptr, 3);

//setting env list
clo90455[1] = reverse_u45helper;
clo90455[2] = kont88964;
clo90455[3] = a8886689089;
void* f8896589092 = encode_clo(clo90455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8896589092;
arg_buffer[3] = a8886789091;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89237 = encode_clo(alloc_clo(lam89237_fptr, 0));

void* lam89239_fptr() // lam89239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89240 = arg_buffer[1];
//reading env and args
void* a8886689089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88964 = (decode_clo(env89240))[6];
//not do dummy comment
void* lst = (decode_clo(env89240))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env89240))[4];
//not do dummy comment
void* lst2 = (decode_clo(env89240))[3];
//not do dummy comment
void* car = (decode_clo(env89240))[2];
//not do dummy comment
void* cons = (decode_clo(env89240))[1];

//creating new closure instance
void** clo90457 = alloc_clo(lam89237_fptr, 5);

//setting env list
clo90457[1] = cons;
clo90457[2] = lst2;
clo90457[3] = reverse_u45helper;
clo90457[4] = kont88964;
clo90457[5] = a8886689089;
void* f8896689090 = encode_clo(clo90457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8896689090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89239 = encode_clo(alloc_clo(lam89239_fptr, 0));

void* lam89241_fptr() // lam89241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89242 = arg_buffer[1];
//reading env and args
void* a8886589087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89242))[7];
//not do dummy comment
void* kont88964 = (decode_clo(env89242))[6];
//not do dummy comment
void* lst = (decode_clo(env89242))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env89242))[4];
//not do dummy comment
void* lst2 = (decode_clo(env89242))[3];
//not do dummy comment
void* car = (decode_clo(env89242))[2];
//not do dummy comment
void* cons = (decode_clo(env89242))[1];

//if-clause
bool if_guard90458 = is_true(a8886589087);
if(if_guard90458)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88964);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88964))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90460 = alloc_clo(lam89239_fptr, 6);

//setting env list
clo90460[1] = cons;
clo90460[2] = car;
clo90460[3] = lst2;
clo90460[4] = reverse_u45helper;
clo90460[5] = lst;
clo90460[6] = kont88964;
void* f8896789088 = encode_clo(clo90460);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8896789088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89241 = encode_clo(alloc_clo(lam89241_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89243 = arg_buffer[1];
//reading env and args
void* kont88964 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90462 = alloc_clo(lam89241_fptr, 7);

//setting env list
clo90462[1] = cons;
clo90462[2] = car;
clo90462[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo90462[4] = reverse_u45helper;
clo90462[5] = lst;
clo90462[6] = kont88964;
clo90462[7] = cdr;
void* f8896889086 = encode_clo(clo90462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8896889086;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam89244_fptr() // lam89244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89245 = arg_buffer[1];
//reading env and args
void* a8886989095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env89245))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env89245))[2];
//not do dummy comment
void* kont88969 = (decode_clo(env89245))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont88969;
arg_buffer[3] = lst;
arg_buffer[4] = a8886989095;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89244 = encode_clo(alloc_clo(lam89244_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89246 = arg_buffer[1];
//reading env and args
void* kont88969 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo90464 = alloc_clo(lam89244_fptr, 3);

//setting env list
clo90464[1] = kont88969;
clo90464[2] = reverse_u45helper;
clo90464[3] = lst;
void* f8897089094 = encode_clo(clo90464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8897089094;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam89247_fptr() // lam89247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89248 = arg_buffer[1];
//reading env and args
void* x8887289100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88971 = (decode_clo(env89248))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88971);
arg_buffer[2] = x8887289100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89247 = encode_clo(alloc_clo(lam89247_fptr, 0));

void* lam89249_fptr() // lam89249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89250 = arg_buffer[1];
//reading env and args
void* a8887789109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8887589105 = (decode_clo(env89250))[4];
//not do dummy comment
void* kont88971 = (decode_clo(env89250))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env89250))[2];
//not do dummy comment
void* a8887389102 = (decode_clo(env89250))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont88971;
arg_buffer[3] = a8887389102;
arg_buffer[4] = a8887589105;
arg_buffer[5] = a8887789109;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89249 = encode_clo(alloc_clo(lam89249_fptr, 0));

void* lam89251_fptr() // lam89251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89252 = arg_buffer[1];
//reading env and args
void* a8887689107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8887589105 = (decode_clo(env89252))[6];
//not do dummy comment
void* kont88971 = (decode_clo(env89252))[5];
//not do dummy comment
void* a8887389102 = (decode_clo(env89252))[4];
//not do dummy comment
void* cons = (decode_clo(env89252))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env89252))[2];
//not do dummy comment
void* lst2 = (decode_clo(env89252))[1];

//creating new closure instance
void** clo90466 = alloc_clo(lam89249_fptr, 4);

//setting env list
clo90466[1] = a8887389102;
clo90466[2] = take_u45helper;
clo90466[3] = kont88971;
clo90466[4] = a8887589105;
void* f8897389108 = encode_clo(clo90466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8897389108;
arg_buffer[3] = a8887689107;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89251 = encode_clo(alloc_clo(lam89251_fptr, 0));

void* lam89253_fptr() // lam89253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89254 = arg_buffer[1];
//reading env and args
void* a8887589105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env89254))[7];
//not do dummy comment
void* kont88971 = (decode_clo(env89254))[6];
//not do dummy comment
void* cons = (decode_clo(env89254))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env89254))[4];
//not do dummy comment
void* lst2 = (decode_clo(env89254))[3];
//not do dummy comment
void* a8887389102 = (decode_clo(env89254))[2];
//not do dummy comment
void* car = (decode_clo(env89254))[1];

//creating new closure instance
void** clo90468 = alloc_clo(lam89251_fptr, 6);

//setting env list
clo90468[1] = lst2;
clo90468[2] = take_u45helper;
clo90468[3] = cons;
clo90468[4] = a8887389102;
clo90468[5] = kont88971;
clo90468[6] = a8887589105;
void* f8897489106 = encode_clo(clo90468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8897489106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89253 = encode_clo(alloc_clo(lam89253_fptr, 0));

void* lam89256_fptr() // lam89256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89257 = arg_buffer[1];
//reading env and args
void* a8887389102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env89257))[8];
//not do dummy comment
void* kont88971 = (decode_clo(env89257))[7];
//not do dummy comment
void* cons = (decode_clo(env89257))[6];
//not do dummy comment
void* _u45 = (decode_clo(env89257))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env89257))[4];
//not do dummy comment
void* lst2 = (decode_clo(env89257))[3];
//not do dummy comment
void* n = (decode_clo(env89257))[2];
//not do dummy comment
void* car = (decode_clo(env89257))[1];
mpz_t* mpzvar90469 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90469, "1", 10);
void* a8887489103 = encode_mpz(mpzvar90469);

//creating new closure instance
void** clo90471 = alloc_clo(lam89253_fptr, 7);

//setting env list
clo90471[1] = car;
clo90471[2] = a8887389102;
clo90471[3] = lst2;
clo90471[4] = take_u45helper;
clo90471[5] = cons;
clo90471[6] = kont88971;
clo90471[7] = lst;
void* f8897589104 = encode_clo(clo90471);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8897589104;
arg_buffer[3] = n;
arg_buffer[4] = a8887489103;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89256 = encode_clo(alloc_clo(lam89256_fptr, 0));

void* lam89258_fptr() // lam89258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89259 = arg_buffer[1];
//reading env and args
void* a8887189098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89259))[10];
//not do dummy comment
void* lst = (decode_clo(env89259))[9];
//not do dummy comment
void* reverse = (decode_clo(env89259))[8];
//not do dummy comment
void* kont88971 = (decode_clo(env89259))[7];
//not do dummy comment
void* cons = (decode_clo(env89259))[6];
//not do dummy comment
void* _u45 = (decode_clo(env89259))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env89259))[4];
//not do dummy comment
void* lst2 = (decode_clo(env89259))[3];
//not do dummy comment
void* n = (decode_clo(env89259))[2];
//not do dummy comment
void* car = (decode_clo(env89259))[1];

//if-clause
bool if_guard90472 = is_true(a8887189098);
if(if_guard90472)
{

//creating new closure instance
void** clo90474 = alloc_clo(lam89247_fptr, 1);

//setting env list
clo90474[1] = kont88971;
void* f8897289099 = encode_clo(clo90474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8897289099;
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
void** clo90476 = alloc_clo(lam89256_fptr, 8);

//setting env list
clo90476[1] = car;
clo90476[2] = n;
clo90476[3] = lst2;
clo90476[4] = take_u45helper;
clo90476[5] = _u45;
clo90476[6] = cons;
clo90476[7] = kont88971;
clo90476[8] = lst;
void* f8897689101 = encode_clo(clo90476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8897689101;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89258 = encode_clo(alloc_clo(lam89258_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89261 = arg_buffer[1];
//reading env and args
void* kont88971 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar90477 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90477, "0", 10);
void* a8887089096 = encode_mpz(mpzvar90477);

//creating new closure instance
void** clo90479 = alloc_clo(lam89258_fptr, 10);

//setting env list
clo90479[1] = car;
clo90479[2] = n;
clo90479[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo90479[4] = take_u45helper;
clo90479[5] = _u45;
clo90479[6] = cons;
clo90479[7] = kont88971;
clo90479[8] = reverse;
clo90479[9] = lst;
clo90479[10] = cdr;
void* f8897789097 = encode_clo(clo90479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8897789097;
arg_buffer[3] = n;
arg_buffer[4] = a8887089096;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam89262_fptr() // lam89262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89263 = arg_buffer[1];
//reading env and args
void* a8887889111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88978 = (decode_clo(env89263))[4];
//not do dummy comment
void* lst = (decode_clo(env89263))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env89263))[2];
//not do dummy comment
void* n = (decode_clo(env89263))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont88978;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8887889111;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89262 = encode_clo(alloc_clo(lam89262_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89264 = arg_buffer[1];
//reading env and args
void* kont88978 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90481 = alloc_clo(lam89262_fptr, 4);

//setting env list
clo90481[1] = n;
clo90481[2] = take_u45helper;
clo90481[3] = lst;
clo90481[4] = kont88978;
void* f8897989110 = encode_clo(clo90481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8897989110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam89266_fptr() // lam89266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89267 = arg_buffer[1];
//reading env and args
void* a8888389119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88980 = (decode_clo(env89267))[3];
//not do dummy comment
void* _u43 = (decode_clo(env89267))[2];
//not do dummy comment
void* a8888189115 = (decode_clo(env89267))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont88980;
arg_buffer[3] = a8888189115;
arg_buffer[4] = a8888389119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89266 = encode_clo(alloc_clo(lam89266_fptr, 0));

void* lam89268_fptr() // lam89268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89269 = arg_buffer[1];
//reading env and args
void* a8888289117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88980 = (decode_clo(env89269))[4];
//not do dummy comment
void* length = (decode_clo(env89269))[3];
//not do dummy comment
void* _u43 = (decode_clo(env89269))[2];
//not do dummy comment
void* a8888189115 = (decode_clo(env89269))[1];

//creating new closure instance
void** clo90483 = alloc_clo(lam89266_fptr, 3);

//setting env list
clo90483[1] = a8888189115;
clo90483[2] = _u43;
clo90483[3] = kont88980;
void* f8898189118 = encode_clo(clo90483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8898189118;
arg_buffer[3] = a8888289117;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89268 = encode_clo(alloc_clo(lam89268_fptr, 0));

void* lam89271_fptr() // lam89271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89272 = arg_buffer[1];
//reading env and args
void* a8887989113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89272))[5];
//not do dummy comment
void* kont88980 = (decode_clo(env89272))[4];
//not do dummy comment
void* lst = (decode_clo(env89272))[3];
//not do dummy comment
void* length = (decode_clo(env89272))[2];
//not do dummy comment
void* _u43 = (decode_clo(env89272))[1];

//if-clause
bool if_guard90484 = is_true(a8887989113);
if(if_guard90484)
{
mpz_t* mpzvar90485 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90485, "0", 10);
void* x8888089114 = encode_mpz(mpzvar90485);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88980);
arg_buffer[2] = x8888089114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88980))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar90486 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90486, "1", 10);
void* a8888189115 = encode_mpz(mpzvar90486);

//creating new closure instance
void** clo90488 = alloc_clo(lam89268_fptr, 4);

//setting env list
clo90488[1] = a8888189115;
clo90488[2] = _u43;
clo90488[3] = length;
clo90488[4] = kont88980;
void* f8898289116 = encode_clo(clo90488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8898289116;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89271 = encode_clo(alloc_clo(lam89271_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89273 = arg_buffer[1];
//reading env and args
void* kont88980 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo90490 = alloc_clo(lam89271_fptr, 5);

//setting env list
clo90490[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo90490[2] = length;
clo90490[3] = lst;
clo90490[4] = kont88980;
clo90490[5] = cdr;
void* f8898389112 = encode_clo(clo90490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8898389112;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam89274_fptr() // lam89274 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89275 = arg_buffer[1];
//reading env and args
void* x8888589123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88984 = (decode_clo(env89275))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88984);
arg_buffer[2] = x8888589123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88984))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89274 = encode_clo(alloc_clo(lam89274_fptr, 0));

void* lam89276_fptr() // lam89276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89277 = arg_buffer[1];
//reading env and args
void* a8888989131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8888789127 = (decode_clo(env89277))[3];
//not do dummy comment
void* kont88984 = (decode_clo(env89277))[2];
//not do dummy comment
void* cons = (decode_clo(env89277))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont88984;
arg_buffer[3] = a8888789127;
arg_buffer[4] = a8888989131;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89276 = encode_clo(alloc_clo(lam89276_fptr, 0));

void* lam89278_fptr() // lam89278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89279 = arg_buffer[1];
//reading env and args
void* a8888889129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env89279))[5];
//not do dummy comment
void* a8888789127 = (decode_clo(env89279))[4];
//not do dummy comment
void* kont88984 = (decode_clo(env89279))[3];
//not do dummy comment
void* proc = (decode_clo(env89279))[2];
//not do dummy comment
void* cons = (decode_clo(env89279))[1];

//creating new closure instance
void** clo90492 = alloc_clo(lam89276_fptr, 3);

//setting env list
clo90492[1] = cons;
clo90492[2] = kont88984;
clo90492[3] = a8888789127;
void* f8898689130 = encode_clo(clo90492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8898689130;
arg_buffer[3] = proc;
arg_buffer[4] = a8888889129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89278 = encode_clo(alloc_clo(lam89278_fptr, 0));

void* lam89280_fptr() // lam89280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89281 = arg_buffer[1];
//reading env and args
void* a8888789127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89281))[6];
//not do dummy comment
void* lst = (decode_clo(env89281))[5];
//not do dummy comment
void* map = (decode_clo(env89281))[4];
//not do dummy comment
void* kont88984 = (decode_clo(env89281))[3];
//not do dummy comment
void* proc = (decode_clo(env89281))[2];
//not do dummy comment
void* cons = (decode_clo(env89281))[1];

//creating new closure instance
void** clo90494 = alloc_clo(lam89278_fptr, 5);

//setting env list
clo90494[1] = cons;
clo90494[2] = proc;
clo90494[3] = kont88984;
clo90494[4] = a8888789127;
clo90494[5] = map;
void* f8898789128 = encode_clo(clo90494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8898789128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89280 = encode_clo(alloc_clo(lam89280_fptr, 0));

void* lam89282_fptr() // lam89282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89283 = arg_buffer[1];
//reading env and args
void* a8888689125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89283))[6];
//not do dummy comment
void* lst = (decode_clo(env89283))[5];
//not do dummy comment
void* map = (decode_clo(env89283))[4];
//not do dummy comment
void* kont88984 = (decode_clo(env89283))[3];
//not do dummy comment
void* proc = (decode_clo(env89283))[2];
//not do dummy comment
void* cons = (decode_clo(env89283))[1];

//creating new closure instance
void** clo90496 = alloc_clo(lam89280_fptr, 6);

//setting env list
clo90496[1] = cons;
clo90496[2] = proc;
clo90496[3] = kont88984;
clo90496[4] = map;
clo90496[5] = lst;
clo90496[6] = cdr;
void* f8898889126 = encode_clo(clo90496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8898889126;
arg_buffer[3] = a8888689125;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89282 = encode_clo(alloc_clo(lam89282_fptr, 0));

void* lam89284_fptr() // lam89284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89285 = arg_buffer[1];
//reading env and args
void* a8888489121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env89285))[8];
//not do dummy comment
void* map = (decode_clo(env89285))[7];
//not do dummy comment
void* kont88984 = (decode_clo(env89285))[6];
//not do dummy comment
void* proc = (decode_clo(env89285))[5];
//not do dummy comment
void* car = (decode_clo(env89285))[4];
//not do dummy comment
void* cons = (decode_clo(env89285))[3];
//not do dummy comment
void* list = (decode_clo(env89285))[2];
//not do dummy comment
void* cdr = (decode_clo(env89285))[1];

//if-clause
bool if_guard90497 = is_true(a8888489121);
if(if_guard90497)
{

//creating new closure instance
void** clo90499 = alloc_clo(lam89274_fptr, 1);

//setting env list
clo90499[1] = kont88984;
void* f8898589122 = encode_clo(clo90499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8898589122;
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
void** clo90501 = alloc_clo(lam89282_fptr, 6);

//setting env list
clo90501[1] = cons;
clo90501[2] = proc;
clo90501[3] = kont88984;
clo90501[4] = map;
clo90501[5] = lst;
clo90501[6] = cdr;
void* f8898989124 = encode_clo(clo90501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8898989124;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89284 = encode_clo(alloc_clo(lam89284_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89286 = arg_buffer[1];
//reading env and args
void* kont88984 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90503 = alloc_clo(lam89284_fptr, 8);

//setting env list
clo90503[1] = cdr;
clo90503[2] = list;
clo90503[3] = cons;
clo90503[4] = car;
clo90503[5] = proc;
clo90503[6] = kont88984;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo90503[7] = map;
clo90503[8] = lst;
void* f8899089120 = encode_clo(clo90503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8899089120;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam89287_fptr() // lam89287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89288 = arg_buffer[1];
//reading env and args
void* x8889189135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont88991 = (decode_clo(env89288))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont88991);
arg_buffer[2] = x8889189135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont88991))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89287 = encode_clo(alloc_clo(lam89287_fptr, 0));

void* lam89289_fptr() // lam89289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89290 = arg_buffer[1];
//reading env and args
void* a8889689145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8889489141 = (decode_clo(env89290))[3];
//not do dummy comment
void* cons = (decode_clo(env89290))[2];
//not do dummy comment
void* kont88991 = (decode_clo(env89290))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont88991;
arg_buffer[3] = a8889489141;
arg_buffer[4] = a8889689145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89289 = encode_clo(alloc_clo(lam89289_fptr, 0));

void* lam89291_fptr() // lam89291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89292 = arg_buffer[1];
//reading env and args
void* a8889589143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8889489141 = (decode_clo(env89292))[5];
//not do dummy comment
void* op = (decode_clo(env89292))[4];
//not do dummy comment
void* filter = (decode_clo(env89292))[3];
//not do dummy comment
void* cons = (decode_clo(env89292))[2];
//not do dummy comment
void* kont88991 = (decode_clo(env89292))[1];

//creating new closure instance
void** clo90505 = alloc_clo(lam89289_fptr, 3);

//setting env list
clo90505[1] = kont88991;
clo90505[2] = cons;
clo90505[3] = a8889489141;
void* f8899389144 = encode_clo(clo90505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8899389144;
arg_buffer[3] = op;
arg_buffer[4] = a8889589143;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89291 = encode_clo(alloc_clo(lam89291_fptr, 0));

void* lam89293_fptr() // lam89293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89294 = arg_buffer[1];
//reading env and args
void* a8889489141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89294))[6];
//not do dummy comment
void* lst = (decode_clo(env89294))[5];
//not do dummy comment
void* op = (decode_clo(env89294))[4];
//not do dummy comment
void* filter = (decode_clo(env89294))[3];
//not do dummy comment
void* cons = (decode_clo(env89294))[2];
//not do dummy comment
void* kont88991 = (decode_clo(env89294))[1];

//creating new closure instance
void** clo90507 = alloc_clo(lam89291_fptr, 5);

//setting env list
clo90507[1] = kont88991;
clo90507[2] = cons;
clo90507[3] = filter;
clo90507[4] = op;
clo90507[5] = a8889489141;
void* f8899489142 = encode_clo(clo90507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8899489142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89293 = encode_clo(alloc_clo(lam89293_fptr, 0));

void* lam89295_fptr() // lam89295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89296 = arg_buffer[1];
//reading env and args
void* a8889789147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env89296))[3];
//not do dummy comment
void* filter = (decode_clo(env89296))[2];
//not do dummy comment
void* kont88991 = (decode_clo(env89296))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont88991;
arg_buffer[3] = op;
arg_buffer[4] = a8889789147;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89295 = encode_clo(alloc_clo(lam89295_fptr, 0));

void* lam89297_fptr() // lam89297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89298 = arg_buffer[1];
//reading env and args
void* a8889389139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89298))[7];
//not do dummy comment
void* lst = (decode_clo(env89298))[6];
//not do dummy comment
void* op = (decode_clo(env89298))[5];
//not do dummy comment
void* filter = (decode_clo(env89298))[4];
//not do dummy comment
void* car = (decode_clo(env89298))[3];
//not do dummy comment
void* cons = (decode_clo(env89298))[2];
//not do dummy comment
void* kont88991 = (decode_clo(env89298))[1];

//if-clause
bool if_guard90508 = is_true(a8889389139);
if(if_guard90508)
{

//creating new closure instance
void** clo90510 = alloc_clo(lam89293_fptr, 6);

//setting env list
clo90510[1] = kont88991;
clo90510[2] = cons;
clo90510[3] = filter;
clo90510[4] = op;
clo90510[5] = lst;
clo90510[6] = cdr;
void* f8899589140 = encode_clo(clo90510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8899589140;
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
void** clo90512 = alloc_clo(lam89295_fptr, 3);

//setting env list
clo90512[1] = kont88991;
clo90512[2] = filter;
clo90512[3] = op;
void* f8899689146 = encode_clo(clo90512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8899689146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89297 = encode_clo(alloc_clo(lam89297_fptr, 0));

void* lam89299_fptr() // lam89299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89300 = arg_buffer[1];
//reading env and args
void* a8889289137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89300))[7];
//not do dummy comment
void* lst = (decode_clo(env89300))[6];
//not do dummy comment
void* op = (decode_clo(env89300))[5];
//not do dummy comment
void* filter = (decode_clo(env89300))[4];
//not do dummy comment
void* car = (decode_clo(env89300))[3];
//not do dummy comment
void* cons = (decode_clo(env89300))[2];
//not do dummy comment
void* kont88991 = (decode_clo(env89300))[1];

//creating new closure instance
void** clo90514 = alloc_clo(lam89297_fptr, 7);

//setting env list
clo90514[1] = kont88991;
clo90514[2] = cons;
clo90514[3] = car;
clo90514[4] = filter;
clo90514[5] = op;
clo90514[6] = lst;
clo90514[7] = cdr;
void* f8899789138 = encode_clo(clo90514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8899789138;
arg_buffer[3] = a8889289137;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89299 = encode_clo(alloc_clo(lam89299_fptr, 0));

void* lam89301_fptr() // lam89301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89302 = arg_buffer[1];
//reading env and args
void* a8889089133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env89302))[8];
//not do dummy comment
void* op = (decode_clo(env89302))[7];
//not do dummy comment
void* list = (decode_clo(env89302))[6];
//not do dummy comment
void* cdr = (decode_clo(env89302))[5];
//not do dummy comment
void* filter = (decode_clo(env89302))[4];
//not do dummy comment
void* car = (decode_clo(env89302))[3];
//not do dummy comment
void* cons = (decode_clo(env89302))[2];
//not do dummy comment
void* kont88991 = (decode_clo(env89302))[1];

//if-clause
bool if_guard90515 = is_true(a8889089133);
if(if_guard90515)
{

//creating new closure instance
void** clo90517 = alloc_clo(lam89287_fptr, 1);

//setting env list
clo90517[1] = kont88991;
void* f8899289134 = encode_clo(clo90517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8899289134;
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
void** clo90519 = alloc_clo(lam89299_fptr, 7);

//setting env list
clo90519[1] = kont88991;
clo90519[2] = cons;
clo90519[3] = car;
clo90519[4] = filter;
clo90519[5] = op;
clo90519[6] = lst;
clo90519[7] = cdr;
void* f8899889136 = encode_clo(clo90519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8899889136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89301 = encode_clo(alloc_clo(lam89301_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89303 = arg_buffer[1];
//reading env and args
void* kont88991 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90521 = alloc_clo(lam89301_fptr, 8);

//setting env list
clo90521[1] = kont88991;
clo90521[2] = cons;
clo90521[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo90521[4] = filter;
clo90521[5] = cdr;
clo90521[6] = list;
clo90521[7] = op;
clo90521[8] = lst;
void* f8899989132 = encode_clo(clo90521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8899989132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam89304_fptr() // lam89304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89305 = arg_buffer[1];
//reading env and args
void* a8890289155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env89305))[3];
//not do dummy comment
void* kont89000 = (decode_clo(env89305))[2];
//not do dummy comment
void* a8890089152 = (decode_clo(env89305))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont89000;
arg_buffer[3] = a8890089152;
arg_buffer[4] = a8890289155;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89304 = encode_clo(alloc_clo(lam89304_fptr, 0));

void* lam89307_fptr() // lam89307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89308 = arg_buffer[1];
//reading env and args
void* a8890089152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env89308))[4];
//not do dummy comment
void* kont89000 = (decode_clo(env89308))[3];
//not do dummy comment
void* n = (decode_clo(env89308))[2];
//not do dummy comment
void* _u45 = (decode_clo(env89308))[1];
mpz_t* mpzvar90522 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90522, "1", 10);
void* a8890189153 = encode_mpz(mpzvar90522);

//creating new closure instance
void** clo90524 = alloc_clo(lam89304_fptr, 3);

//setting env list
clo90524[1] = a8890089152;
clo90524[2] = kont89000;
clo90524[3] = drop;
void* f8900189154 = encode_clo(clo90524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8900189154;
arg_buffer[3] = n;
arg_buffer[4] = a8890189153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89307 = encode_clo(alloc_clo(lam89307_fptr, 0));

void* lam89309_fptr() // lam89309 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89310 = arg_buffer[1];
//reading env and args
void* a8889989150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89310))[6];
//not do dummy comment
void* kont89000 = (decode_clo(env89310))[5];
//not do dummy comment
void* n = (decode_clo(env89310))[4];
//not do dummy comment
void* _u45 = (decode_clo(env89310))[3];
//not do dummy comment
void* lst = (decode_clo(env89310))[2];
//not do dummy comment
void* drop = (decode_clo(env89310))[1];

//if-clause
bool if_guard90525 = is_true(a8889989150);
if(if_guard90525)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89000);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89000))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90527 = alloc_clo(lam89307_fptr, 4);

//setting env list
clo90527[1] = _u45;
clo90527[2] = n;
clo90527[3] = kont89000;
clo90527[4] = drop;
void* f8900289151 = encode_clo(clo90527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8900289151;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89309 = encode_clo(alloc_clo(lam89309_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89312 = arg_buffer[1];
//reading env and args
void* kont89000 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar90528 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90528, "0", 10);
void* a8889889148 = encode_mpz(mpzvar90528);

//creating new closure instance
void** clo90530 = alloc_clo(lam89309_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo90530[1] = drop;
clo90530[2] = lst;
clo90530[3] = _u45;
clo90530[4] = n;
clo90530[5] = kont89000;
clo90530[6] = cdr;
void* f8900389149 = encode_clo(clo90530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8900389149;
arg_buffer[3] = n;
arg_buffer[4] = a8889889148;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam89313_fptr() // lam89313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89314 = arg_buffer[1];
//reading env and args
void* a8890689163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8890489159 = (decode_clo(env89314))[3];
//not do dummy comment
void* proc = (decode_clo(env89314))[2];
//not do dummy comment
void* kont89004 = (decode_clo(env89314))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont89004;
arg_buffer[3] = a8890489159;
arg_buffer[4] = a8890689163;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89313 = encode_clo(alloc_clo(lam89313_fptr, 0));

void* lam89315_fptr() // lam89315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89316 = arg_buffer[1];
//reading env and args
void* a8890589161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env89316))[5];
//not do dummy comment
void* a8890489159 = (decode_clo(env89316))[4];
//not do dummy comment
void* proc = (decode_clo(env89316))[3];
//not do dummy comment
void* acc = (decode_clo(env89316))[2];
//not do dummy comment
void* kont89004 = (decode_clo(env89316))[1];

//creating new closure instance
void** clo90532 = alloc_clo(lam89313_fptr, 3);

//setting env list
clo90532[1] = kont89004;
clo90532[2] = proc;
clo90532[3] = a8890489159;
void* f8900589162 = encode_clo(clo90532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8900589162;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8890589161;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89315 = encode_clo(alloc_clo(lam89315_fptr, 0));

void* lam89317_fptr() // lam89317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89318 = arg_buffer[1];
//reading env and args
void* a8890489159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89318))[6];
//not do dummy comment
void* foldr = (decode_clo(env89318))[5];
//not do dummy comment
void* lst = (decode_clo(env89318))[4];
//not do dummy comment
void* proc = (decode_clo(env89318))[3];
//not do dummy comment
void* acc = (decode_clo(env89318))[2];
//not do dummy comment
void* kont89004 = (decode_clo(env89318))[1];

//creating new closure instance
void** clo90534 = alloc_clo(lam89315_fptr, 5);

//setting env list
clo90534[1] = kont89004;
clo90534[2] = acc;
clo90534[3] = proc;
clo90534[4] = a8890489159;
clo90534[5] = foldr;
void* f8900689160 = encode_clo(clo90534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8900689160;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89317 = encode_clo(alloc_clo(lam89317_fptr, 0));

void* lam89319_fptr() // lam89319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89320 = arg_buffer[1];
//reading env and args
void* a8890389157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env89320))[7];
//not do dummy comment
void* car = (decode_clo(env89320))[6];
//not do dummy comment
void* foldr = (decode_clo(env89320))[5];
//not do dummy comment
void* lst = (decode_clo(env89320))[4];
//not do dummy comment
void* proc = (decode_clo(env89320))[3];
//not do dummy comment
void* acc = (decode_clo(env89320))[2];
//not do dummy comment
void* kont89004 = (decode_clo(env89320))[1];

//if-clause
bool if_guard90535 = is_true(a8890389157);
if(if_guard90535)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89004);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89004))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90537 = alloc_clo(lam89317_fptr, 6);

//setting env list
clo90537[1] = kont89004;
clo90537[2] = acc;
clo90537[3] = proc;
clo90537[4] = lst;
clo90537[5] = foldr;
clo90537[6] = cdr;
void* f8900789158 = encode_clo(clo90537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8900789158;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89319 = encode_clo(alloc_clo(lam89319_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89321 = arg_buffer[1];
//reading env and args
void* kont89004 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo90539 = alloc_clo(lam89319_fptr, 7);

//setting env list
clo90539[1] = kont89004;
clo90539[2] = acc;
clo90539[3] = proc;
clo90539[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo90539[5] = foldr;
clo90539[6] = car;
clo90539[7] = cdr;
void* f8900889156 = encode_clo(clo90539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8900889156;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam89322_fptr() // lam89322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89323 = arg_buffer[1];
//reading env and args
void* a8891089171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont89009 = (decode_clo(env89323))[3];
//not do dummy comment
void* cons = (decode_clo(env89323))[2];
//not do dummy comment
void* a8890889167 = (decode_clo(env89323))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont89009;
arg_buffer[3] = a8890889167;
arg_buffer[4] = a8891089171;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89322 = encode_clo(alloc_clo(lam89322_fptr, 0));

void* lam89324_fptr() // lam89324 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89325 = arg_buffer[1];
//reading env and args
void* a8890989169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont89009 = (decode_clo(env89325))[5];
//not do dummy comment
void* append = (decode_clo(env89325))[4];
//not do dummy comment
void* lst2 = (decode_clo(env89325))[3];
//not do dummy comment
void* cons = (decode_clo(env89325))[2];
//not do dummy comment
void* a8890889167 = (decode_clo(env89325))[1];

//creating new closure instance
void** clo90541 = alloc_clo(lam89322_fptr, 3);

//setting env list
clo90541[1] = a8890889167;
clo90541[2] = cons;
clo90541[3] = kont89009;
void* f8901089170 = encode_clo(clo90541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8901089170;
arg_buffer[3] = a8890989169;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89324 = encode_clo(alloc_clo(lam89324_fptr, 0));

void* lam89326_fptr() // lam89326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89327 = arg_buffer[1];
//reading env and args
void* a8890889167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env89327))[6];
//not do dummy comment
void* lst2 = (decode_clo(env89327))[5];
//not do dummy comment
void* lst1 = (decode_clo(env89327))[4];
//not do dummy comment
void* cons = (decode_clo(env89327))[3];
//not do dummy comment
void* kont89009 = (decode_clo(env89327))[2];
//not do dummy comment
void* cdr = (decode_clo(env89327))[1];

//creating new closure instance
void** clo90543 = alloc_clo(lam89324_fptr, 5);

//setting env list
clo90543[1] = a8890889167;
clo90543[2] = cons;
clo90543[3] = lst2;
clo90543[4] = append;
clo90543[5] = kont89009;
void* f8901189168 = encode_clo(clo90543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8901189168;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89326 = encode_clo(alloc_clo(lam89326_fptr, 0));

void* lam89328_fptr() // lam89328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89329 = arg_buffer[1];
//reading env and args
void* a8890789165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env89329))[7];
//not do dummy comment
void* lst2 = (decode_clo(env89329))[6];
//not do dummy comment
void* cons = (decode_clo(env89329))[5];
//not do dummy comment
void* kont89009 = (decode_clo(env89329))[4];
//not do dummy comment
void* cdr = (decode_clo(env89329))[3];
//not do dummy comment
void* lst1 = (decode_clo(env89329))[2];
//not do dummy comment
void* car = (decode_clo(env89329))[1];

//if-clause
bool if_guard90544 = is_true(a8890789165);
if(if_guard90544)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89009);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89009))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo90546 = alloc_clo(lam89326_fptr, 6);

//setting env list
clo90546[1] = cdr;
clo90546[2] = kont89009;
clo90546[3] = cons;
clo90546[4] = lst1;
clo90546[5] = lst2;
clo90546[6] = append;
void* f8901289166 = encode_clo(clo90546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8901289166;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam89328 = encode_clo(alloc_clo(lam89328_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89330 = arg_buffer[1];
//reading env and args
void* kont89009 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo90548 = alloc_clo(lam89328_fptr, 7);

//setting env list
clo90548[1] = car;
clo90548[2] = lst1;
clo90548[3] = cdr;
clo90548[4] = kont89009;
clo90548[5] = cons;
clo90548[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo90548[7] = append;
void* f8901389164 = encode_clo(clo90548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8901389164;
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
void* _89331 = arg_buffer[1];
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

void* kont8901489172 = prim_car(lst);
void* lst89173 = prim_cdr(lst);
void* x8891189174 = apply_prim_hash(lst89173);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8901489172);
arg_buffer[2] = x8891189174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8901489172))[0]);
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
void* _89332 = arg_buffer[1];
//reading env and args
void* kont89016 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8891289175 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89016);
arg_buffer[2] = x8891289175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89016))[0]);
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
void* _89333 = arg_buffer[1];
//reading env and args
void* kont89017 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8891389176 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89017);
arg_buffer[2] = x8891389176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89017))[0]);
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
void* _89334 = arg_buffer[1];
//reading env and args
void* kont89018 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8891489177 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89018);
arg_buffer[2] = x8891489177;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89018))[0]);
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
void* _89335 = arg_buffer[1];
//reading env and args
void* kont89019 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8891589178 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89019);
arg_buffer[2] = x8891589178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89019))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam89336_fptr() // lam89336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89337 = arg_buffer[1];
//reading env and args
void* a8892189185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env89337))[4];
//not do dummy comment
void* a8891689179 = (decode_clo(env89337))[3];
//not do dummy comment
void* kont89020 = (decode_clo(env89337))[2];
//not do dummy comment
void* a8891789180 = (decode_clo(env89337))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont89020;
arg_buffer[3] = a8891689179;
arg_buffer[4] = a8891789180;
arg_buffer[5] = a8892189185;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89336 = encode_clo(alloc_clo(lam89336_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89343 = arg_buffer[1];
//reading env and args
void* kont89020 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar90549 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90549, "1", 10);
void* a8891689179 = encode_mpz(mpzvar90549);
mpz_t* mpzvar90550 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90550, "2", 10);
void* a8891789180 = encode_mpz(mpzvar90550);
mpz_t* mpzvar90551 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90551, "3", 10);
void* a8891889181 = encode_mpz(mpzvar90551);
mpz_t* mpzvar90552 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90552, "4", 10);
void* a8891989182 = encode_mpz(mpzvar90552);
mpz_t* mpzvar90553 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar90553, "5", 10);
void* a8892089183 = encode_mpz(mpzvar90553);

//creating new closure instance
void** clo90555 = alloc_clo(lam89336_fptr, 4);

//setting env list
clo90555[1] = a8891789180;
clo90555[2] = kont89020;
clo90555[3] = a8891689179;
clo90555[4] = _u42;
void* f8902189184 = encode_clo(clo90555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = f8902189184;
arg_buffer[3] = a8891889181;
arg_buffer[4] = a8891989182;
arg_buffer[5] = a8892089183;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam89344_fptr() // lam89344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env89345 = arg_buffer[1];
//reading env and args
void* x8892289187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont89022 = (decode_clo(env89345))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89022);
arg_buffer[2] = x8892289187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89022))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam89344 = encode_clo(alloc_clo(lam89344_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _89346 = arg_buffer[1];
//reading env and args
void* kont89022 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo90557 = alloc_clo(lam89344_fptr, 1);

//setting env list
clo90557[1] = kont89022;
void* f8902389186 = encode_clo(clo90557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8902389186;
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

