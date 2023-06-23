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
void* _62212 = arg_buffer[1];
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

void* kont6191862027 = prim_car(lst);
void* lst62028 = prim_cdr(lst);
void* x6181562029 = apply_prim__u43(lst62028);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6191862027);
arg_buffer[2] = x6181562029;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6191862027))[0]);
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
void* _62213 = arg_buffer[1];
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

void* kont6192062030 = prim_car(lst);
void* lst62031 = prim_cdr(lst);
void* x6181662032 = apply_prim__u45(lst62031);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192062030);
arg_buffer[2] = x6181662032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192062030))[0]);
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
void* _62214 = arg_buffer[1];
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

void* kont6192262033 = prim_car(lst);
void* lst62034 = prim_cdr(lst);
void* x6181762035 = apply_prim__u42(lst62034);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192262033);
arg_buffer[2] = x6181762035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192262033))[0]);
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
void* _62215 = arg_buffer[1];
//reading env and args
void* kont61924 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6181862036 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61924);
arg_buffer[2] = x6181862036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61924))[0]);
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
void* _62216 = arg_buffer[1];
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

void* kont6192562037 = prim_car(lst);
void* lst62038 = prim_cdr(lst);
void* x6181962039 = apply_prim__u47(lst62038);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192562037);
arg_buffer[2] = x6181962039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192562037))[0]);
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
void* _62217 = arg_buffer[1];
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

void* kont6192762040 = prim_car(lst);
void* lst62041 = prim_cdr(lst);
void* x6182062042 = apply_prim__u61(lst62041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192762040);
arg_buffer[2] = x6182062042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192762040))[0]);
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
void* _62218 = arg_buffer[1];
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

void* kont6192962043 = prim_car(lst);
void* lst62044 = prim_cdr(lst);
void* x6182162045 = apply_prim__u62(lst62044);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192962043);
arg_buffer[2] = x6182162045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192962043))[0]);
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
void* _62219 = arg_buffer[1];
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

void* kont6193162046 = prim_car(lst);
void* lst62047 = prim_cdr(lst);
void* x6182262048 = apply_prim__u60(lst62047);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6193162046);
arg_buffer[2] = x6182262048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6193162046))[0]);
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
void* _62220 = arg_buffer[1];
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

void* kont6193362049 = prim_car(lst);
void* lst62050 = prim_cdr(lst);
void* x6182362051 = apply_prim__u60_u61(lst62050);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6193362049);
arg_buffer[2] = x6182362051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6193362049))[0]);
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
void* _62221 = arg_buffer[1];
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

void* kont6193562052 = prim_car(lst);
void* lst62053 = prim_cdr(lst);
void* x6182462054 = apply_prim__u62_u61(lst62053);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6193562052);
arg_buffer[2] = x6182462054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6193562052))[0]);
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
void* _62222 = arg_buffer[1];
//reading env and args
void* kont61937 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x6182562055 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61937);
arg_buffer[2] = x6182562055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61937))[0]);
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
void* _62223 = arg_buffer[1];
//reading env and args
void* kont61938 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6182662056 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61938);
arg_buffer[2] = x6182662056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61938))[0]);
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
void* _62224 = arg_buffer[1];
//reading env and args
void* kont61939 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6182762057 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61939);
arg_buffer[2] = x6182762057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61939))[0]);
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
void* _62225 = arg_buffer[1];
//reading env and args
void* kont61940 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6182862058 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61940);
arg_buffer[2] = x6182862058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61940))[0]);
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
void* _62226 = arg_buffer[1];
//reading env and args
void* kont61941 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6182962059 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61941);
arg_buffer[2] = x6182962059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61941))[0]);
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
void* _62227 = arg_buffer[1];
//reading env and args
void* kont61942 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6183062060 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61942);
arg_buffer[2] = x6183062060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61942))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam62228_fptr() // lam62228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62229 = arg_buffer[1];
//reading env and args
void* a6183362064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6183162061 = (decode_clo(env62229))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env62229))[2];
//not do dummy comment
void* kont61943 = (decode_clo(env62229))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont61943;
arg_buffer[3] = a6183162061;
arg_buffer[4] = a6183362064;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62228 = encode_clo(alloc_clo(lam62228_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62232 = arg_buffer[1];
//reading env and args
void* kont61943 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar72360 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72360, "0", 10);
void* a6183162061 = encode_mpz(mpzvar72360);
mpz_t* mpzvar72361 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72361, "2", 10);
void* a6183262062 = encode_mpz(mpzvar72361);

//creating new closure instance
void** clo72363 = alloc_clo(lam62228_fptr, 3);

//setting env list
clo72363[1] = kont61943;
clo72363[2] = equal_u63;
clo72363[3] = a6183162061;
void* f6194462063 = encode_clo(clo72363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6194462063;
arg_buffer[3] = x;
arg_buffer[4] = a6183262062;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam62233_fptr() // lam62233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62234 = arg_buffer[1];
//reading env and args
void* a6183662068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6183462065 = (decode_clo(env62234))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env62234))[2];
//not do dummy comment
void* kont61945 = (decode_clo(env62234))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont61945;
arg_buffer[3] = a6183462065;
arg_buffer[4] = a6183662068;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62233 = encode_clo(alloc_clo(lam62233_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62237 = arg_buffer[1];
//reading env and args
void* kont61945 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar72364 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72364, "1", 10);
void* a6183462065 = encode_mpz(mpzvar72364);
mpz_t* mpzvar72365 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72365, "2", 10);
void* a6183562066 = encode_mpz(mpzvar72365);

//creating new closure instance
void** clo72367 = alloc_clo(lam62233_fptr, 3);

//setting env list
clo72367[1] = kont61945;
clo72367[2] = equal_u63;
clo72367[3] = a6183462065;
void* f6194662067 = encode_clo(clo72367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6194662067;
arg_buffer[3] = x;
arg_buffer[4] = a6183562066;
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
void* _62238 = arg_buffer[1];
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

void* kont6194762069 = prim_car(x);
void* x62070 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6194762069);
arg_buffer[2] = x62070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6194762069))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam62241_fptr() // lam62241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62242 = arg_buffer[1];
//reading env and args
void* a6184262080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61949 = (decode_clo(env62242))[3];
//not do dummy comment
void* x = (decode_clo(env62242))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env62242))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont61949;
arg_buffer[3] = x;
arg_buffer[4] = a6184262080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62241 = encode_clo(alloc_clo(lam62241_fptr, 0));

void* lam62243_fptr() // lam62243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62244 = arg_buffer[1];
//reading env and args
void* a6184062077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62244))[5];
//not do dummy comment
void* kont61949 = (decode_clo(env62244))[4];
//not do dummy comment
void* lst = (decode_clo(env62244))[3];
//not do dummy comment
void* x = (decode_clo(env62244))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env62244))[1];

//if-clause
bool if_guard72368 = is_true(a6184062077);
if(if_guard72368)
{
void* x6184162078 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61949);
arg_buffer[2] = x6184162078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61949))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72370 = alloc_clo(lam62241_fptr, 3);

//setting env list
clo72370[1] = member_u63;
clo72370[2] = x;
clo72370[3] = kont61949;
void* f6195062079 = encode_clo(clo72370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6195062079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62243 = encode_clo(alloc_clo(lam62243_fptr, 0));

void* lam62245_fptr() // lam62245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62246 = arg_buffer[1];
//reading env and args
void* a6183962075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62246))[6];
//not do dummy comment
void* kont61949 = (decode_clo(env62246))[5];
//not do dummy comment
void* lst = (decode_clo(env62246))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env62246))[3];
//not do dummy comment
void* x = (decode_clo(env62246))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env62246))[1];

//creating new closure instance
void** clo72372 = alloc_clo(lam62243_fptr, 5);

//setting env list
clo72372[1] = member_u63;
clo72372[2] = x;
clo72372[3] = lst;
clo72372[4] = kont61949;
clo72372[5] = cdr;
void* f6195162076 = encode_clo(clo72372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f6195162076;
arg_buffer[3] = a6183962075;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62245 = encode_clo(alloc_clo(lam62245_fptr, 0));

void* lam62247_fptr() // lam62247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62248 = arg_buffer[1];
//reading env and args
void* a6183762072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62248))[7];
//not do dummy comment
void* kont61949 = (decode_clo(env62248))[6];
//not do dummy comment
void* lst = (decode_clo(env62248))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env62248))[4];
//not do dummy comment
void* x = (decode_clo(env62248))[3];
//not do dummy comment
void* car = (decode_clo(env62248))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env62248))[1];

//if-clause
bool if_guard72373 = is_true(a6183762072);
if(if_guard72373)
{
void* x6183862073 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61949);
arg_buffer[2] = x6183862073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61949))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72375 = alloc_clo(lam62245_fptr, 6);

//setting env list
clo72375[1] = member_u63;
clo72375[2] = x;
clo72375[3] = equal_u63;
clo72375[4] = lst;
clo72375[5] = kont61949;
clo72375[6] = cdr;
void* f6195262074 = encode_clo(clo72375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6195262074;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62247 = encode_clo(alloc_clo(lam62247_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62249 = arg_buffer[1];
//reading env and args
void* kont61949 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo72377 = alloc_clo(lam62247_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo72377[1] = member_u63;
clo72377[2] = car;
clo72377[3] = x;
clo72377[4] = equal_u63;
clo72377[5] = lst;
clo72377[6] = kont61949;
clo72377[7] = cdr;
void* f6195362071 = encode_clo(clo72377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6195362071;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam62250_fptr() // lam62250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62251 = arg_buffer[1];
//reading env and args
void* a6184662088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61954 = (decode_clo(env62251))[4];
//not do dummy comment
void* foldl = (decode_clo(env62251))[3];
//not do dummy comment
void* a6184562086 = (decode_clo(env62251))[2];
//not do dummy comment
void* fun = (decode_clo(env62251))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont61954;
arg_buffer[3] = fun;
arg_buffer[4] = a6184562086;
arg_buffer[5] = a6184662088;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62250 = encode_clo(alloc_clo(lam62250_fptr, 0));

void* lam62252_fptr() // lam62252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62253 = arg_buffer[1];
//reading env and args
void* a6184562086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62253))[5];
//not do dummy comment
void* lst = (decode_clo(env62253))[4];
//not do dummy comment
void* kont61954 = (decode_clo(env62253))[3];
//not do dummy comment
void* fun = (decode_clo(env62253))[2];
//not do dummy comment
void* foldl = (decode_clo(env62253))[1];

//creating new closure instance
void** clo72379 = alloc_clo(lam62250_fptr, 4);

//setting env list
clo72379[1] = fun;
clo72379[2] = a6184562086;
clo72379[3] = foldl;
clo72379[4] = kont61954;
void* f6195562087 = encode_clo(clo72379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6195562087;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62252 = encode_clo(alloc_clo(lam62252_fptr, 0));

void* lam62254_fptr() // lam62254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62255 = arg_buffer[1];
//reading env and args
void* a6184462084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62255))[6];
//not do dummy comment
void* lst = (decode_clo(env62255))[5];
//not do dummy comment
void* kont61954 = (decode_clo(env62255))[4];
//not do dummy comment
void* fun = (decode_clo(env62255))[3];
//not do dummy comment
void* acc = (decode_clo(env62255))[2];
//not do dummy comment
void* foldl = (decode_clo(env62255))[1];

//creating new closure instance
void** clo72381 = alloc_clo(lam62252_fptr, 5);

//setting env list
clo72381[1] = foldl;
clo72381[2] = fun;
clo72381[3] = kont61954;
clo72381[4] = lst;
clo72381[5] = cdr;
void* f6195662085 = encode_clo(clo72381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f6195662085;
arg_buffer[3] = a6184462084;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62254 = encode_clo(alloc_clo(lam62254_fptr, 0));

void* lam62256_fptr() // lam62256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62257 = arg_buffer[1];
//reading env and args
void* a6184362082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62257))[7];
//not do dummy comment
void* lst = (decode_clo(env62257))[6];
//not do dummy comment
void* kont61954 = (decode_clo(env62257))[5];
//not do dummy comment
void* fun = (decode_clo(env62257))[4];
//not do dummy comment
void* acc = (decode_clo(env62257))[3];
//not do dummy comment
void* car = (decode_clo(env62257))[2];
//not do dummy comment
void* foldl = (decode_clo(env62257))[1];

//if-clause
bool if_guard72382 = is_true(a6184362082);
if(if_guard72382)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61954);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72384 = alloc_clo(lam62254_fptr, 6);

//setting env list
clo72384[1] = foldl;
clo72384[2] = acc;
clo72384[3] = fun;
clo72384[4] = kont61954;
clo72384[5] = lst;
clo72384[6] = cdr;
void* f6195762083 = encode_clo(clo72384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6195762083;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62256 = encode_clo(alloc_clo(lam62256_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62258 = arg_buffer[1];
//reading env and args
void* kont61954 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo72386 = alloc_clo(lam62256_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo72386[1] = foldl;
clo72386[2] = car;
clo72386[3] = acc;
clo72386[4] = fun;
clo72386[5] = kont61954;
clo72386[6] = lst;
clo72386[7] = cdr;
void* f6195862081 = encode_clo(clo72386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6195862081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam62259_fptr() // lam62259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62260 = arg_buffer[1];
//reading env and args
void* a6185062096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6184862092 = (decode_clo(env62260))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62260))[2];
//not do dummy comment
void* kont61959 = (decode_clo(env62260))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont61959;
arg_buffer[3] = a6184862092;
arg_buffer[4] = a6185062096;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62259 = encode_clo(alloc_clo(lam62259_fptr, 0));

void* lam62261_fptr() // lam62261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62262 = arg_buffer[1];
//reading env and args
void* a6184962094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6184862092 = (decode_clo(env62262))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62262))[4];
//not do dummy comment
void* kont61959 = (decode_clo(env62262))[3];
//not do dummy comment
void* lst2 = (decode_clo(env62262))[2];
//not do dummy comment
void* cons = (decode_clo(env62262))[1];

//creating new closure instance
void** clo72388 = alloc_clo(lam62259_fptr, 3);

//setting env list
clo72388[1] = kont61959;
clo72388[2] = reverse_u45helper;
clo72388[3] = a6184862092;
void* f6196062095 = encode_clo(clo72388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6196062095;
arg_buffer[3] = a6184962094;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62261 = encode_clo(alloc_clo(lam62261_fptr, 0));

void* lam62263_fptr() // lam62263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62264 = arg_buffer[1];
//reading env and args
void* a6184862092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62264))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62264))[5];
//not do dummy comment
void* kont61959 = (decode_clo(env62264))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62264))[3];
//not do dummy comment
void* car = (decode_clo(env62264))[2];
//not do dummy comment
void* cons = (decode_clo(env62264))[1];

//creating new closure instance
void** clo72390 = alloc_clo(lam62261_fptr, 5);

//setting env list
clo72390[1] = cons;
clo72390[2] = lst2;
clo72390[3] = kont61959;
clo72390[4] = reverse_u45helper;
clo72390[5] = a6184862092;
void* f6196162093 = encode_clo(clo72390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6196162093;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62263 = encode_clo(alloc_clo(lam62263_fptr, 0));

void* lam62265_fptr() // lam62265 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62266 = arg_buffer[1];
//reading env and args
void* a6184762090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62266))[7];
//not do dummy comment
void* lst = (decode_clo(env62266))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62266))[5];
//not do dummy comment
void* kont61959 = (decode_clo(env62266))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62266))[3];
//not do dummy comment
void* car = (decode_clo(env62266))[2];
//not do dummy comment
void* cons = (decode_clo(env62266))[1];

//if-clause
bool if_guard72391 = is_true(a6184762090);
if(if_guard72391)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61959);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61959))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72393 = alloc_clo(lam62263_fptr, 6);

//setting env list
clo72393[1] = cons;
clo72393[2] = car;
clo72393[3] = lst2;
clo72393[4] = kont61959;
clo72393[5] = reverse_u45helper;
clo72393[6] = lst;
void* f6196262091 = encode_clo(clo72393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6196262091;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62265 = encode_clo(alloc_clo(lam62265_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62267 = arg_buffer[1];
//reading env and args
void* kont61959 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo72395 = alloc_clo(lam62265_fptr, 7);

//setting env list
clo72395[1] = cons;
clo72395[2] = car;
clo72395[3] = lst2;
clo72395[4] = kont61959;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo72395[5] = reverse_u45helper;
clo72395[6] = lst;
clo72395[7] = cdr;
void* f6196362089 = encode_clo(clo72395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6196362089;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam62268_fptr() // lam62268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62269 = arg_buffer[1];
//reading env and args
void* a6185162098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61964 = (decode_clo(env62269))[3];
//not do dummy comment
void* lst = (decode_clo(env62269))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62269))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont61964;
arg_buffer[3] = lst;
arg_buffer[4] = a6185162098;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62268 = encode_clo(alloc_clo(lam62268_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62270 = arg_buffer[1];
//reading env and args
void* kont61964 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo72397 = alloc_clo(lam62268_fptr, 3);

//setting env list
clo72397[1] = reverse_u45helper;
clo72397[2] = lst;
clo72397[3] = kont61964;
void* f6196562097 = encode_clo(clo72397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6196562097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam62271_fptr() // lam62271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62272 = arg_buffer[1];
//reading env and args
void* x6185462103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61966 = (decode_clo(env62272))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61966);
arg_buffer[2] = x6185462103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61966))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62271 = encode_clo(alloc_clo(lam62271_fptr, 0));

void* lam62273_fptr() // lam62273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62274 = arg_buffer[1];
//reading env and args
void* a6185962112 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6185762108 = (decode_clo(env62274))[4];
//not do dummy comment
void* kont61966 = (decode_clo(env62274))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env62274))[2];
//not do dummy comment
void* a6185562105 = (decode_clo(env62274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont61966;
arg_buffer[3] = a6185562105;
arg_buffer[4] = a6185762108;
arg_buffer[5] = a6185962112;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62273 = encode_clo(alloc_clo(lam62273_fptr, 0));

void* lam62275_fptr() // lam62275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62276 = arg_buffer[1];
//reading env and args
void* a6185862110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6185762108 = (decode_clo(env62276))[6];
//not do dummy comment
void* kont61966 = (decode_clo(env62276))[5];
//not do dummy comment
void* a6185562105 = (decode_clo(env62276))[4];
//not do dummy comment
void* cons = (decode_clo(env62276))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env62276))[2];
//not do dummy comment
void* lst2 = (decode_clo(env62276))[1];

//creating new closure instance
void** clo72399 = alloc_clo(lam62273_fptr, 4);

//setting env list
clo72399[1] = a6185562105;
clo72399[2] = take_u45helper;
clo72399[3] = kont61966;
clo72399[4] = a6185762108;
void* f6196862111 = encode_clo(clo72399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6196862111;
arg_buffer[3] = a6185862110;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62275 = encode_clo(alloc_clo(lam62275_fptr, 0));

void* lam62277_fptr() // lam62277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62278 = arg_buffer[1];
//reading env and args
void* a6185762108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61966 = (decode_clo(env62278))[7];
//not do dummy comment
void* lst = (decode_clo(env62278))[6];
//not do dummy comment
void* cons = (decode_clo(env62278))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env62278))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62278))[3];
//not do dummy comment
void* a6185562105 = (decode_clo(env62278))[2];
//not do dummy comment
void* car = (decode_clo(env62278))[1];

//creating new closure instance
void** clo72401 = alloc_clo(lam62275_fptr, 6);

//setting env list
clo72401[1] = lst2;
clo72401[2] = take_u45helper;
clo72401[3] = cons;
clo72401[4] = a6185562105;
clo72401[5] = kont61966;
clo72401[6] = a6185762108;
void* f6196962109 = encode_clo(clo72401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6196962109;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62277 = encode_clo(alloc_clo(lam62277_fptr, 0));

void* lam62280_fptr() // lam62280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62281 = arg_buffer[1];
//reading env and args
void* a6185562105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61966 = (decode_clo(env62281))[8];
//not do dummy comment
void* lst = (decode_clo(env62281))[7];
//not do dummy comment
void* cons = (decode_clo(env62281))[6];
//not do dummy comment
void* _u45 = (decode_clo(env62281))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env62281))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62281))[3];
//not do dummy comment
void* n = (decode_clo(env62281))[2];
//not do dummy comment
void* car = (decode_clo(env62281))[1];
mpz_t* mpzvar72402 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72402, "1", 10);
void* a6185662106 = encode_mpz(mpzvar72402);

//creating new closure instance
void** clo72404 = alloc_clo(lam62277_fptr, 7);

//setting env list
clo72404[1] = car;
clo72404[2] = a6185562105;
clo72404[3] = lst2;
clo72404[4] = take_u45helper;
clo72404[5] = cons;
clo72404[6] = lst;
clo72404[7] = kont61966;
void* f6197062107 = encode_clo(clo72404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6197062107;
arg_buffer[3] = n;
arg_buffer[4] = a6185662106;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62280 = encode_clo(alloc_clo(lam62280_fptr, 0));

void* lam62282_fptr() // lam62282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62283 = arg_buffer[1];
//reading env and args
void* a6185362101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62283))[10];
//not do dummy comment
void* kont61966 = (decode_clo(env62283))[9];
//not do dummy comment
void* lst = (decode_clo(env62283))[8];
//not do dummy comment
void* reverse = (decode_clo(env62283))[7];
//not do dummy comment
void* cons = (decode_clo(env62283))[6];
//not do dummy comment
void* _u45 = (decode_clo(env62283))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env62283))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62283))[3];
//not do dummy comment
void* n = (decode_clo(env62283))[2];
//not do dummy comment
void* car = (decode_clo(env62283))[1];

//if-clause
bool if_guard72405 = is_true(a6185362101);
if(if_guard72405)
{

//creating new closure instance
void** clo72407 = alloc_clo(lam62271_fptr, 1);

//setting env list
clo72407[1] = kont61966;
void* f6196762102 = encode_clo(clo72407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f6196762102;
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
void** clo72409 = alloc_clo(lam62280_fptr, 8);

//setting env list
clo72409[1] = car;
clo72409[2] = n;
clo72409[3] = lst2;
clo72409[4] = take_u45helper;
clo72409[5] = _u45;
clo72409[6] = cons;
clo72409[7] = lst;
clo72409[8] = kont61966;
void* f6197162104 = encode_clo(clo72409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6197162104;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62282 = encode_clo(alloc_clo(lam62282_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62285 = arg_buffer[1];
//reading env and args
void* kont61966 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar72410 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72410, "0", 10);
void* a6185262099 = encode_mpz(mpzvar72410);

//creating new closure instance
void** clo72412 = alloc_clo(lam62282_fptr, 10);

//setting env list
clo72412[1] = car;
clo72412[2] = n;
clo72412[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo72412[4] = take_u45helper;
clo72412[5] = _u45;
clo72412[6] = cons;
clo72412[7] = reverse;
clo72412[8] = lst;
clo72412[9] = kont61966;
clo72412[10] = cdr;
void* f6197262100 = encode_clo(clo72412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6197262100;
arg_buffer[3] = n;
arg_buffer[4] = a6185262099;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam62286_fptr() // lam62286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62287 = arg_buffer[1];
//reading env and args
void* a6186062114 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62287))[4];
//not do dummy comment
void* kont61973 = (decode_clo(env62287))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env62287))[2];
//not do dummy comment
void* n = (decode_clo(env62287))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont61973;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a6186062114;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62286 = encode_clo(alloc_clo(lam62286_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62288 = arg_buffer[1];
//reading env and args
void* kont61973 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo72414 = alloc_clo(lam62286_fptr, 4);

//setting env list
clo72414[1] = n;
clo72414[2] = take_u45helper;
clo72414[3] = kont61973;
clo72414[4] = lst;
void* f6197462113 = encode_clo(clo72414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6197462113;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam62290_fptr() // lam62290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62291 = arg_buffer[1];
//reading env and args
void* a6186562122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env62291))[3];
//not do dummy comment
void* a6186362118 = (decode_clo(env62291))[2];
//not do dummy comment
void* kont61975 = (decode_clo(env62291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont61975;
arg_buffer[3] = a6186362118;
arg_buffer[4] = a6186562122;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62290 = encode_clo(alloc_clo(lam62290_fptr, 0));

void* lam62292_fptr() // lam62292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62293 = arg_buffer[1];
//reading env and args
void* a6186462120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env62293))[4];
//not do dummy comment
void* _u43 = (decode_clo(env62293))[3];
//not do dummy comment
void* a6186362118 = (decode_clo(env62293))[2];
//not do dummy comment
void* kont61975 = (decode_clo(env62293))[1];

//creating new closure instance
void** clo72416 = alloc_clo(lam62290_fptr, 3);

//setting env list
clo72416[1] = kont61975;
clo72416[2] = a6186362118;
clo72416[3] = _u43;
void* f6197662121 = encode_clo(clo72416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f6197662121;
arg_buffer[3] = a6186462120;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62292 = encode_clo(alloc_clo(lam62292_fptr, 0));

void* lam62295_fptr() // lam62295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62296 = arg_buffer[1];
//reading env and args
void* a6186162116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62296))[5];
//not do dummy comment
void* lst = (decode_clo(env62296))[4];
//not do dummy comment
void* length = (decode_clo(env62296))[3];
//not do dummy comment
void* _u43 = (decode_clo(env62296))[2];
//not do dummy comment
void* kont61975 = (decode_clo(env62296))[1];

//if-clause
bool if_guard72417 = is_true(a6186162116);
if(if_guard72417)
{
mpz_t* mpzvar72418 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72418, "0", 10);
void* x6186262117 = encode_mpz(mpzvar72418);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61975);
arg_buffer[2] = x6186262117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar72419 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72419, "1", 10);
void* a6186362118 = encode_mpz(mpzvar72419);

//creating new closure instance
void** clo72421 = alloc_clo(lam62292_fptr, 4);

//setting env list
clo72421[1] = kont61975;
clo72421[2] = a6186362118;
clo72421[3] = _u43;
clo72421[4] = length;
void* f6197762119 = encode_clo(clo72421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6197762119;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62295 = encode_clo(alloc_clo(lam62295_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62297 = arg_buffer[1];
//reading env and args
void* kont61975 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo72423 = alloc_clo(lam62295_fptr, 5);

//setting env list
clo72423[1] = kont61975;
clo72423[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo72423[3] = length;
clo72423[4] = lst;
clo72423[5] = cdr;
void* f6197862115 = encode_clo(clo72423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6197862115;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam62298_fptr() // lam62298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62299 = arg_buffer[1];
//reading env and args
void* x6186762126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61979 = (decode_clo(env62299))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61979);
arg_buffer[2] = x6186762126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61979))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62298 = encode_clo(alloc_clo(lam62298_fptr, 0));

void* lam62300_fptr() // lam62300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62301 = arg_buffer[1];
//reading env and args
void* a6187162134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6186962130 = (decode_clo(env62301))[3];
//not do dummy comment
void* cons = (decode_clo(env62301))[2];
//not do dummy comment
void* kont61979 = (decode_clo(env62301))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont61979;
arg_buffer[3] = a6186962130;
arg_buffer[4] = a6187162134;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62300 = encode_clo(alloc_clo(lam62300_fptr, 0));

void* lam62302_fptr() // lam62302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62303 = arg_buffer[1];
//reading env and args
void* a6187062132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env62303))[5];
//not do dummy comment
void* a6186962130 = (decode_clo(env62303))[4];
//not do dummy comment
void* proc = (decode_clo(env62303))[3];
//not do dummy comment
void* cons = (decode_clo(env62303))[2];
//not do dummy comment
void* kont61979 = (decode_clo(env62303))[1];

//creating new closure instance
void** clo72425 = alloc_clo(lam62300_fptr, 3);

//setting env list
clo72425[1] = kont61979;
clo72425[2] = cons;
clo72425[3] = a6186962130;
void* f6198162133 = encode_clo(clo72425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f6198162133;
arg_buffer[3] = proc;
arg_buffer[4] = a6187062132;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62302 = encode_clo(alloc_clo(lam62302_fptr, 0));

void* lam62304_fptr() // lam62304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62305 = arg_buffer[1];
//reading env and args
void* a6186962130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62305))[6];
//not do dummy comment
void* lst = (decode_clo(env62305))[5];
//not do dummy comment
void* map = (decode_clo(env62305))[4];
//not do dummy comment
void* proc = (decode_clo(env62305))[3];
//not do dummy comment
void* cons = (decode_clo(env62305))[2];
//not do dummy comment
void* kont61979 = (decode_clo(env62305))[1];

//creating new closure instance
void** clo72427 = alloc_clo(lam62302_fptr, 5);

//setting env list
clo72427[1] = kont61979;
clo72427[2] = cons;
clo72427[3] = proc;
clo72427[4] = a6186962130;
clo72427[5] = map;
void* f6198262131 = encode_clo(clo72427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6198262131;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62304 = encode_clo(alloc_clo(lam62304_fptr, 0));

void* lam62306_fptr() // lam62306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62307 = arg_buffer[1];
//reading env and args
void* a6186862128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62307))[6];
//not do dummy comment
void* lst = (decode_clo(env62307))[5];
//not do dummy comment
void* map = (decode_clo(env62307))[4];
//not do dummy comment
void* proc = (decode_clo(env62307))[3];
//not do dummy comment
void* cons = (decode_clo(env62307))[2];
//not do dummy comment
void* kont61979 = (decode_clo(env62307))[1];

//creating new closure instance
void** clo72429 = alloc_clo(lam62304_fptr, 6);

//setting env list
clo72429[1] = kont61979;
clo72429[2] = cons;
clo72429[3] = proc;
clo72429[4] = map;
clo72429[5] = lst;
clo72429[6] = cdr;
void* f6198362129 = encode_clo(clo72429);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f6198362129;
arg_buffer[3] = a6186862128;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62306 = encode_clo(alloc_clo(lam62306_fptr, 0));

void* lam62308_fptr() // lam62308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62309 = arg_buffer[1];
//reading env and args
void* a6186662124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62309))[8];
//not do dummy comment
void* map = (decode_clo(env62309))[7];
//not do dummy comment
void* proc = (decode_clo(env62309))[6];
//not do dummy comment
void* car = (decode_clo(env62309))[5];
//not do dummy comment
void* cons = (decode_clo(env62309))[4];
//not do dummy comment
void* kont61979 = (decode_clo(env62309))[3];
//not do dummy comment
void* list = (decode_clo(env62309))[2];
//not do dummy comment
void* cdr = (decode_clo(env62309))[1];

//if-clause
bool if_guard72430 = is_true(a6186662124);
if(if_guard72430)
{

//creating new closure instance
void** clo72432 = alloc_clo(lam62298_fptr, 1);

//setting env list
clo72432[1] = kont61979;
void* f6198062125 = encode_clo(clo72432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6198062125;
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
void** clo72434 = alloc_clo(lam62306_fptr, 6);

//setting env list
clo72434[1] = kont61979;
clo72434[2] = cons;
clo72434[3] = proc;
clo72434[4] = map;
clo72434[5] = lst;
clo72434[6] = cdr;
void* f6198462127 = encode_clo(clo72434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6198462127;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62308 = encode_clo(alloc_clo(lam62308_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62310 = arg_buffer[1];
//reading env and args
void* kont61979 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo72436 = alloc_clo(lam62308_fptr, 8);

//setting env list
clo72436[1] = cdr;
clo72436[2] = list;
clo72436[3] = kont61979;
clo72436[4] = cons;
clo72436[5] = car;
clo72436[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo72436[7] = map;
clo72436[8] = lst;
void* f6198562123 = encode_clo(clo72436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6198562123;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam62311_fptr() // lam62311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62312 = arg_buffer[1];
//reading env and args
void* x6187362138 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61986 = (decode_clo(env62312))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61986);
arg_buffer[2] = x6187362138;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61986))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62311 = encode_clo(alloc_clo(lam62311_fptr, 0));

void* lam62313_fptr() // lam62313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62314 = arg_buffer[1];
//reading env and args
void* a6187862148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6187662144 = (decode_clo(env62314))[3];
//not do dummy comment
void* kont61986 = (decode_clo(env62314))[2];
//not do dummy comment
void* cons = (decode_clo(env62314))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont61986;
arg_buffer[3] = a6187662144;
arg_buffer[4] = a6187862148;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62313 = encode_clo(alloc_clo(lam62313_fptr, 0));

void* lam62315_fptr() // lam62315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62316 = arg_buffer[1];
//reading env and args
void* a6187762146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6187662144 = (decode_clo(env62316))[5];
//not do dummy comment
void* kont61986 = (decode_clo(env62316))[4];
//not do dummy comment
void* op = (decode_clo(env62316))[3];
//not do dummy comment
void* filter = (decode_clo(env62316))[2];
//not do dummy comment
void* cons = (decode_clo(env62316))[1];

//creating new closure instance
void** clo72438 = alloc_clo(lam62313_fptr, 3);

//setting env list
clo72438[1] = cons;
clo72438[2] = kont61986;
clo72438[3] = a6187662144;
void* f6198862147 = encode_clo(clo72438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f6198862147;
arg_buffer[3] = op;
arg_buffer[4] = a6187762146;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62315 = encode_clo(alloc_clo(lam62315_fptr, 0));

void* lam62317_fptr() // lam62317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62318 = arg_buffer[1];
//reading env and args
void* a6187662144 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62318))[6];
//not do dummy comment
void* lst = (decode_clo(env62318))[5];
//not do dummy comment
void* kont61986 = (decode_clo(env62318))[4];
//not do dummy comment
void* op = (decode_clo(env62318))[3];
//not do dummy comment
void* filter = (decode_clo(env62318))[2];
//not do dummy comment
void* cons = (decode_clo(env62318))[1];

//creating new closure instance
void** clo72440 = alloc_clo(lam62315_fptr, 5);

//setting env list
clo72440[1] = cons;
clo72440[2] = filter;
clo72440[3] = op;
clo72440[4] = kont61986;
clo72440[5] = a6187662144;
void* f6198962145 = encode_clo(clo72440);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6198962145;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62317 = encode_clo(alloc_clo(lam62317_fptr, 0));

void* lam62319_fptr() // lam62319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62320 = arg_buffer[1];
//reading env and args
void* a6187962150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61986 = (decode_clo(env62320))[3];
//not do dummy comment
void* op = (decode_clo(env62320))[2];
//not do dummy comment
void* filter = (decode_clo(env62320))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont61986;
arg_buffer[3] = op;
arg_buffer[4] = a6187962150;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62319 = encode_clo(alloc_clo(lam62319_fptr, 0));

void* lam62321_fptr() // lam62321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62322 = arg_buffer[1];
//reading env and args
void* a6187562142 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62322))[7];
//not do dummy comment
void* lst = (decode_clo(env62322))[6];
//not do dummy comment
void* kont61986 = (decode_clo(env62322))[5];
//not do dummy comment
void* op = (decode_clo(env62322))[4];
//not do dummy comment
void* cons = (decode_clo(env62322))[3];
//not do dummy comment
void* filter = (decode_clo(env62322))[2];
//not do dummy comment
void* car = (decode_clo(env62322))[1];

//if-clause
bool if_guard72441 = is_true(a6187562142);
if(if_guard72441)
{

//creating new closure instance
void** clo72443 = alloc_clo(lam62317_fptr, 6);

//setting env list
clo72443[1] = cons;
clo72443[2] = filter;
clo72443[3] = op;
clo72443[4] = kont61986;
clo72443[5] = lst;
clo72443[6] = cdr;
void* f6199062143 = encode_clo(clo72443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6199062143;
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
void** clo72445 = alloc_clo(lam62319_fptr, 3);

//setting env list
clo72445[1] = filter;
clo72445[2] = op;
clo72445[3] = kont61986;
void* f6199162149 = encode_clo(clo72445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6199162149;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62321 = encode_clo(alloc_clo(lam62321_fptr, 0));

void* lam62323_fptr() // lam62323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62324 = arg_buffer[1];
//reading env and args
void* a6187462140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62324))[7];
//not do dummy comment
void* lst = (decode_clo(env62324))[6];
//not do dummy comment
void* kont61986 = (decode_clo(env62324))[5];
//not do dummy comment
void* op = (decode_clo(env62324))[4];
//not do dummy comment
void* cons = (decode_clo(env62324))[3];
//not do dummy comment
void* filter = (decode_clo(env62324))[2];
//not do dummy comment
void* car = (decode_clo(env62324))[1];

//creating new closure instance
void** clo72447 = alloc_clo(lam62321_fptr, 7);

//setting env list
clo72447[1] = car;
clo72447[2] = filter;
clo72447[3] = cons;
clo72447[4] = op;
clo72447[5] = kont61986;
clo72447[6] = lst;
clo72447[7] = cdr;
void* f6199262141 = encode_clo(clo72447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f6199262141;
arg_buffer[3] = a6187462140;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62323 = encode_clo(alloc_clo(lam62323_fptr, 0));

void* lam62325_fptr() // lam62325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62326 = arg_buffer[1];
//reading env and args
void* a6187262136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62326))[8];
//not do dummy comment
void* kont61986 = (decode_clo(env62326))[7];
//not do dummy comment
void* op = (decode_clo(env62326))[6];
//not do dummy comment
void* cons = (decode_clo(env62326))[5];
//not do dummy comment
void* list = (decode_clo(env62326))[4];
//not do dummy comment
void* cdr = (decode_clo(env62326))[3];
//not do dummy comment
void* filter = (decode_clo(env62326))[2];
//not do dummy comment
void* car = (decode_clo(env62326))[1];

//if-clause
bool if_guard72448 = is_true(a6187262136);
if(if_guard72448)
{

//creating new closure instance
void** clo72450 = alloc_clo(lam62311_fptr, 1);

//setting env list
clo72450[1] = kont61986;
void* f6198762137 = encode_clo(clo72450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6198762137;
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
void** clo72452 = alloc_clo(lam62323_fptr, 7);

//setting env list
clo72452[1] = car;
clo72452[2] = filter;
clo72452[3] = cons;
clo72452[4] = op;
clo72452[5] = kont61986;
clo72452[6] = lst;
clo72452[7] = cdr;
void* f6199362139 = encode_clo(clo72452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6199362139;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62325 = encode_clo(alloc_clo(lam62325_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62327 = arg_buffer[1];
//reading env and args
void* kont61986 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo72454 = alloc_clo(lam62325_fptr, 8);

//setting env list
clo72454[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo72454[2] = filter;
clo72454[3] = cdr;
clo72454[4] = list;
clo72454[5] = cons;
clo72454[6] = op;
clo72454[7] = kont61986;
clo72454[8] = lst;
void* f6199462135 = encode_clo(clo72454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6199462135;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam62328_fptr() // lam62328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62329 = arg_buffer[1];
//reading env and args
void* a6188462158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env62329))[3];
//not do dummy comment
void* a6188262155 = (decode_clo(env62329))[2];
//not do dummy comment
void* kont61995 = (decode_clo(env62329))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont61995;
arg_buffer[3] = a6188262155;
arg_buffer[4] = a6188462158;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62328 = encode_clo(alloc_clo(lam62328_fptr, 0));

void* lam62331_fptr() // lam62331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62332 = arg_buffer[1];
//reading env and args
void* a6188262155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env62332))[4];
//not do dummy comment
void* n = (decode_clo(env62332))[3];
//not do dummy comment
void* _u45 = (decode_clo(env62332))[2];
//not do dummy comment
void* kont61995 = (decode_clo(env62332))[1];
mpz_t* mpzvar72455 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72455, "1", 10);
void* a6188362156 = encode_mpz(mpzvar72455);

//creating new closure instance
void** clo72457 = alloc_clo(lam62328_fptr, 3);

//setting env list
clo72457[1] = kont61995;
clo72457[2] = a6188262155;
clo72457[3] = drop;
void* f6199662157 = encode_clo(clo72457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6199662157;
arg_buffer[3] = n;
arg_buffer[4] = a6188362156;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62331 = encode_clo(alloc_clo(lam62331_fptr, 0));

void* lam62333_fptr() // lam62333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62334 = arg_buffer[1];
//reading env and args
void* a6188162153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62334))[6];
//not do dummy comment
void* n = (decode_clo(env62334))[5];
//not do dummy comment
void* lst = (decode_clo(env62334))[4];
//not do dummy comment
void* drop = (decode_clo(env62334))[3];
//not do dummy comment
void* _u45 = (decode_clo(env62334))[2];
//not do dummy comment
void* kont61995 = (decode_clo(env62334))[1];

//if-clause
bool if_guard72458 = is_true(a6188162153);
if(if_guard72458)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61995);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61995))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72460 = alloc_clo(lam62331_fptr, 4);

//setting env list
clo72460[1] = kont61995;
clo72460[2] = _u45;
clo72460[3] = n;
clo72460[4] = drop;
void* f6199762154 = encode_clo(clo72460);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6199762154;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62333 = encode_clo(alloc_clo(lam62333_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62336 = arg_buffer[1];
//reading env and args
void* kont61995 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar72461 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72461, "0", 10);
void* a6188062151 = encode_mpz(mpzvar72461);

//creating new closure instance
void** clo72463 = alloc_clo(lam62333_fptr, 6);

//setting env list
clo72463[1] = kont61995;
clo72463[2] = _u45;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo72463[3] = drop;
clo72463[4] = lst;
clo72463[5] = n;
clo72463[6] = cdr;
void* f6199862152 = encode_clo(clo72463);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6199862152;
arg_buffer[3] = n;
arg_buffer[4] = a6188062151;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam62337_fptr() // lam62337 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62338 = arg_buffer[1];
//reading env and args
void* a6188862166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61999 = (decode_clo(env62338))[3];
//not do dummy comment
void* a6188662162 = (decode_clo(env62338))[2];
//not do dummy comment
void* proc = (decode_clo(env62338))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont61999;
arg_buffer[3] = a6188662162;
arg_buffer[4] = a6188862166;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62337 = encode_clo(alloc_clo(lam62337_fptr, 0));

void* lam62339_fptr() // lam62339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62340 = arg_buffer[1];
//reading env and args
void* a6188762164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61999 = (decode_clo(env62340))[5];
//not do dummy comment
void* foldr = (decode_clo(env62340))[4];
//not do dummy comment
void* a6188662162 = (decode_clo(env62340))[3];
//not do dummy comment
void* proc = (decode_clo(env62340))[2];
//not do dummy comment
void* acc = (decode_clo(env62340))[1];

//creating new closure instance
void** clo72465 = alloc_clo(lam62337_fptr, 3);

//setting env list
clo72465[1] = proc;
clo72465[2] = a6188662162;
clo72465[3] = kont61999;
void* f6200062165 = encode_clo(clo72465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f6200062165;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a6188762164;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62339 = encode_clo(alloc_clo(lam62339_fptr, 0));

void* lam62341_fptr() // lam62341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62342 = arg_buffer[1];
//reading env and args
void* a6188662162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62342))[6];
//not do dummy comment
void* kont61999 = (decode_clo(env62342))[5];
//not do dummy comment
void* foldr = (decode_clo(env62342))[4];
//not do dummy comment
void* lst = (decode_clo(env62342))[3];
//not do dummy comment
void* proc = (decode_clo(env62342))[2];
//not do dummy comment
void* acc = (decode_clo(env62342))[1];

//creating new closure instance
void** clo72467 = alloc_clo(lam62339_fptr, 5);

//setting env list
clo72467[1] = acc;
clo72467[2] = proc;
clo72467[3] = a6188662162;
clo72467[4] = foldr;
clo72467[5] = kont61999;
void* f6200162163 = encode_clo(clo72467);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6200162163;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62341 = encode_clo(alloc_clo(lam62341_fptr, 0));

void* lam62343_fptr() // lam62343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62344 = arg_buffer[1];
//reading env and args
void* a6188562160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62344))[7];
//not do dummy comment
void* kont61999 = (decode_clo(env62344))[6];
//not do dummy comment
void* car = (decode_clo(env62344))[5];
//not do dummy comment
void* foldr = (decode_clo(env62344))[4];
//not do dummy comment
void* lst = (decode_clo(env62344))[3];
//not do dummy comment
void* proc = (decode_clo(env62344))[2];
//not do dummy comment
void* acc = (decode_clo(env62344))[1];

//if-clause
bool if_guard72468 = is_true(a6188562160);
if(if_guard72468)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61999);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61999))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72470 = alloc_clo(lam62341_fptr, 6);

//setting env list
clo72470[1] = acc;
clo72470[2] = proc;
clo72470[3] = lst;
clo72470[4] = foldr;
clo72470[5] = kont61999;
clo72470[6] = cdr;
void* f6200262161 = encode_clo(clo72470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6200262161;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62343 = encode_clo(alloc_clo(lam62343_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62345 = arg_buffer[1];
//reading env and args
void* kont61999 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo72472 = alloc_clo(lam62343_fptr, 7);

//setting env list
clo72472[1] = acc;
clo72472[2] = proc;
clo72472[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo72472[4] = foldr;
clo72472[5] = car;
clo72472[6] = kont61999;
clo72472[7] = cdr;
void* f6200362159 = encode_clo(clo72472);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6200362159;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam62346_fptr() // lam62346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62347 = arg_buffer[1];
//reading env and args
void* a6189262174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont62004 = (decode_clo(env62347))[3];
//not do dummy comment
void* cons = (decode_clo(env62347))[2];
//not do dummy comment
void* a6189062170 = (decode_clo(env62347))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont62004;
arg_buffer[3] = a6189062170;
arg_buffer[4] = a6189262174;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62346 = encode_clo(alloc_clo(lam62346_fptr, 0));

void* lam62348_fptr() // lam62348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62349 = arg_buffer[1];
//reading env and args
void* a6189162172 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst2 = (decode_clo(env62349))[5];
//not do dummy comment
void* append = (decode_clo(env62349))[4];
//not do dummy comment
void* kont62004 = (decode_clo(env62349))[3];
//not do dummy comment
void* cons = (decode_clo(env62349))[2];
//not do dummy comment
void* a6189062170 = (decode_clo(env62349))[1];

//creating new closure instance
void** clo72474 = alloc_clo(lam62346_fptr, 3);

//setting env list
clo72474[1] = a6189062170;
clo72474[2] = cons;
clo72474[3] = kont62004;
void* f6200562173 = encode_clo(clo72474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f6200562173;
arg_buffer[3] = a6189162172;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62348 = encode_clo(alloc_clo(lam62348_fptr, 0));

void* lam62350_fptr() // lam62350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62351 = arg_buffer[1];
//reading env and args
void* a6189062170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62351))[6];
//not do dummy comment
void* lst2 = (decode_clo(env62351))[5];
//not do dummy comment
void* lst1 = (decode_clo(env62351))[4];
//not do dummy comment
void* cons = (decode_clo(env62351))[3];
//not do dummy comment
void* append = (decode_clo(env62351))[2];
//not do dummy comment
void* kont62004 = (decode_clo(env62351))[1];

//creating new closure instance
void** clo72476 = alloc_clo(lam62348_fptr, 5);

//setting env list
clo72476[1] = a6189062170;
clo72476[2] = cons;
clo72476[3] = kont62004;
clo72476[4] = append;
clo72476[5] = lst2;
void* f6200662171 = encode_clo(clo72476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6200662171;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62350 = encode_clo(alloc_clo(lam62350_fptr, 0));

void* lam62352_fptr() // lam62352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62353 = arg_buffer[1];
//reading env and args
void* a6188962168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62353))[7];
//not do dummy comment
void* lst2 = (decode_clo(env62353))[6];
//not do dummy comment
void* cons = (decode_clo(env62353))[5];
//not do dummy comment
void* append = (decode_clo(env62353))[4];
//not do dummy comment
void* kont62004 = (decode_clo(env62353))[3];
//not do dummy comment
void* lst1 = (decode_clo(env62353))[2];
//not do dummy comment
void* car = (decode_clo(env62353))[1];

//if-clause
bool if_guard72477 = is_true(a6188962168);
if(if_guard72477)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62004);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62004))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72479 = alloc_clo(lam62350_fptr, 6);

//setting env list
clo72479[1] = kont62004;
clo72479[2] = append;
clo72479[3] = cons;
clo72479[4] = lst1;
clo72479[5] = lst2;
clo72479[6] = cdr;
void* f6200762169 = encode_clo(clo72479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6200762169;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62352 = encode_clo(alloc_clo(lam62352_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62354 = arg_buffer[1];
//reading env and args
void* kont62004 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo72481 = alloc_clo(lam62352_fptr, 7);

//setting env list
clo72481[1] = car;
clo72481[2] = lst1;
clo72481[3] = kont62004;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo72481[4] = append;
clo72481[5] = cons;
clo72481[6] = lst2;
clo72481[7] = cdr;
void* f6200862167 = encode_clo(clo72481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6200862167;
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
void* _62355 = arg_buffer[1];
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

void* kont6200962175 = prim_car(lst);
void* lst62176 = prim_cdr(lst);
void* x6189362177 = apply_prim_hash(lst62176);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6200962175);
arg_buffer[2] = x6189362177;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6200962175))[0]);
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
void* _62356 = arg_buffer[1];
//reading env and args
void* kont62011 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6189462178 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62011);
arg_buffer[2] = x6189462178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62011))[0]);
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
void* _62357 = arg_buffer[1];
//reading env and args
void* kont62012 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x6189562179 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62012);
arg_buffer[2] = x6189562179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62012))[0]);
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
void* _62358 = arg_buffer[1];
//reading env and args
void* kont62013 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6189662180 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62013);
arg_buffer[2] = x6189662180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62013))[0]);
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
void* _62359 = arg_buffer[1];
//reading env and args
void* kont62014 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x6189762181 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62014);
arg_buffer[2] = x6189762181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62014))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam62360_fptr() // lam62360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62361 = arg_buffer[1];
//reading env and args
void* a6190562197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont62015 = (decode_clo(env62361))[3];
//not do dummy comment
void* cons = (decode_clo(env62361))[2];
//not do dummy comment
void* a6190062187 = (decode_clo(env62361))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont62015;
arg_buffer[3] = a6190062187;
arg_buffer[4] = a6190562197;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62360 = encode_clo(alloc_clo(lam62360_fptr, 0));

void* lam62362_fptr() // lam62362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62363 = arg_buffer[1];
//reading env and args
void* a6190462195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6190162189 = (decode_clo(env62363))[4];
//not do dummy comment
void* kont62015 = (decode_clo(env62363))[3];
//not do dummy comment
void* cons = (decode_clo(env62363))[2];
//not do dummy comment
void* a6190062187 = (decode_clo(env62363))[1];

//creating new closure instance
void** clo72483 = alloc_clo(lam62360_fptr, 3);

//setting env list
clo72483[1] = a6190062187;
clo72483[2] = cons;
clo72483[3] = kont62015;
void* f6201662196 = encode_clo(clo72483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6201662196;
arg_buffer[3] = a6190162189;
arg_buffer[4] = a6190462195;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62362 = encode_clo(alloc_clo(lam62362_fptr, 0));

void* lam62364_fptr() // lam62364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62365 = arg_buffer[1];
//reading env and args
void* a6190362193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6190162189 = (decode_clo(env62365))[6];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62365))[5];
//not do dummy comment
void* cons = (decode_clo(env62365))[4];
//not do dummy comment
void* a6190062187 = (decode_clo(env62365))[3];
//not do dummy comment
void* a6190262191 = (decode_clo(env62365))[2];
//not do dummy comment
void* kont62015 = (decode_clo(env62365))[1];

//creating new closure instance
void** clo72485 = alloc_clo(lam62362_fptr, 4);

//setting env list
clo72485[1] = a6190062187;
clo72485[2] = cons;
clo72485[3] = kont62015;
clo72485[4] = a6190162189;
void* f6201762194 = encode_clo(clo72485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(interleave_u45direct);
arg_buffer[2] = f6201762194;
arg_buffer[3] = a6190262191;
arg_buffer[4] = a6190362193;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(interleave_u45direct))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62364 = encode_clo(alloc_clo(lam62364_fptr, 0));

void* lam62366_fptr() // lam62366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62367 = arg_buffer[1];
//reading env and args
void* a6190262191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62367))[7];
//not do dummy comment
void* a6190162189 = (decode_clo(env62367))[6];
//not do dummy comment
void* kont62015 = (decode_clo(env62367))[5];
//not do dummy comment
void* cons = (decode_clo(env62367))[4];
//not do dummy comment
void* a6190062187 = (decode_clo(env62367))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62367))[2];
//not do dummy comment
void* lst2 = (decode_clo(env62367))[1];

//creating new closure instance
void** clo72487 = alloc_clo(lam62364_fptr, 6);

//setting env list
clo72487[1] = kont62015;
clo72487[2] = a6190262191;
clo72487[3] = a6190062187;
clo72487[4] = cons;
clo72487[5] = interleave_u45direct;
clo72487[6] = a6190162189;
void* f6201862192 = encode_clo(clo72487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6201862192;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62366 = encode_clo(alloc_clo(lam62366_fptr, 0));

void* lam62368_fptr() // lam62368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62369 = arg_buffer[1];
//reading env and args
void* a6190162189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62369))[7];
//not do dummy comment
void* kont62015 = (decode_clo(env62369))[6];
//not do dummy comment
void* lst1 = (decode_clo(env62369))[5];
//not do dummy comment
void* cons = (decode_clo(env62369))[4];
//not do dummy comment
void* a6190062187 = (decode_clo(env62369))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62369))[2];
//not do dummy comment
void* lst2 = (decode_clo(env62369))[1];

//creating new closure instance
void** clo72489 = alloc_clo(lam62366_fptr, 7);

//setting env list
clo72489[1] = lst2;
clo72489[2] = interleave_u45direct;
clo72489[3] = a6190062187;
clo72489[4] = cons;
clo72489[5] = kont62015;
clo72489[6] = a6190162189;
clo72489[7] = cdr;
void* f6201962190 = encode_clo(clo72489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6201962190;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62368 = encode_clo(alloc_clo(lam62368_fptr, 0));

void* lam62370_fptr() // lam62370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62371 = arg_buffer[1];
//reading env and args
void* a6190062187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62371))[7];
//not do dummy comment
void* kont62015 = (decode_clo(env62371))[6];
//not do dummy comment
void* cons = (decode_clo(env62371))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62371))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62371))[3];
//not do dummy comment
void* lst1 = (decode_clo(env62371))[2];
//not do dummy comment
void* car = (decode_clo(env62371))[1];

//creating new closure instance
void** clo72491 = alloc_clo(lam62368_fptr, 7);

//setting env list
clo72491[1] = lst2;
clo72491[2] = interleave_u45direct;
clo72491[3] = a6190062187;
clo72491[4] = cons;
clo72491[5] = lst1;
clo72491[6] = kont62015;
clo72491[7] = cdr;
void* f6202062188 = encode_clo(clo72491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6202062188;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62370 = encode_clo(alloc_clo(lam62370_fptr, 0));

void* lam62372_fptr() // lam62372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62373 = arg_buffer[1];
//reading env and args
void* a6189962185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62373))[7];
//not do dummy comment
void* kont62015 = (decode_clo(env62373))[6];
//not do dummy comment
void* cons = (decode_clo(env62373))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62373))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62373))[3];
//not do dummy comment
void* lst1 = (decode_clo(env62373))[2];
//not do dummy comment
void* car = (decode_clo(env62373))[1];

//if-clause
bool if_guard72492 = is_true(a6189962185);
if(if_guard72492)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62015);
arg_buffer[2] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62015))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72494 = alloc_clo(lam62370_fptr, 7);

//setting env list
clo72494[1] = car;
clo72494[2] = lst1;
clo72494[3] = lst2;
clo72494[4] = interleave_u45direct;
clo72494[5] = cons;
clo72494[6] = kont62015;
clo72494[7] = cdr;
void* f6202162186 = encode_clo(clo72494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6202162186;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62372 = encode_clo(alloc_clo(lam62372_fptr, 0));

void* lam62374_fptr() // lam62374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62375 = arg_buffer[1];
//reading env and args
void* a6189862183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62375))[8];
//not do dummy comment
void* kont62015 = (decode_clo(env62375))[7];
//not do dummy comment
void* null_u63 = (decode_clo(env62375))[6];
//not do dummy comment
void* cons = (decode_clo(env62375))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62375))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62375))[3];
//not do dummy comment
void* lst1 = (decode_clo(env62375))[2];
//not do dummy comment
void* car = (decode_clo(env62375))[1];

//if-clause
bool if_guard72495 = is_true(a6189862183);
if(if_guard72495)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62015);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62015))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo72497 = alloc_clo(lam62372_fptr, 7);

//setting env list
clo72497[1] = car;
clo72497[2] = lst1;
clo72497[3] = lst2;
clo72497[4] = interleave_u45direct;
clo72497[5] = cons;
clo72497[6] = kont62015;
clo72497[7] = cdr;
void* f6202262184 = encode_clo(clo72497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6202262184;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62374 = encode_clo(alloc_clo(lam62374_fptr, 0));

void* interleave_u45direct_fptr() // interleave-direct 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62376 = arg_buffer[1];
//reading env and args
void* kont62015 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo72499 = alloc_clo(lam62374_fptr, 8);

//setting env list
clo72499[1] = car;
clo72499[2] = lst1;
clo72499[3] = lst2;
void* interleave_u45direct = encode_clo(alloc_clo(interleave_u45direct_fptr, 0));

clo72499[4] = interleave_u45direct;
clo72499[5] = cons;
clo72499[6] = null_u63;
clo72499[7] = kont62015;
clo72499[8] = cdr;
void* f6202362182 = encode_clo(clo72499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6202362182;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* interleave_u45direct = encode_clo(alloc_clo(interleave_u45direct_fptr, 0));

void* lam62377_fptr() // lam62377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62378 = arg_buffer[1];
//reading env and args
void* a6191762211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6191262205 = (decode_clo(env62378))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62378))[2];
//not do dummy comment
void* kont62024 = (decode_clo(env62378))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(interleave_u45direct);
arg_buffer[2] = kont62024;
arg_buffer[3] = a6191262205;
arg_buffer[4] = a6191762211;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(interleave_u45direct))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62377 = encode_clo(alloc_clo(lam62377_fptr, 0));

void* lam62383_fptr() // lam62383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62384 = arg_buffer[1];
//reading env and args
void* a6191262205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env62384))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env62384))[2];
//not do dummy comment
void* kont62024 = (decode_clo(env62384))[1];
mpz_t* mpzvar72500 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72500, "7", 10);
void* a6191362206 = encode_mpz(mpzvar72500);
mpz_t* mpzvar72501 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72501, "8", 10);
void* a6191462207 = encode_mpz(mpzvar72501);
mpz_t* mpzvar72502 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72502, "9", 10);
void* a6191562208 = encode_mpz(mpzvar72502);
mpz_t* mpzvar72503 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72503, "10", 10);
void* a6191662209 = encode_mpz(mpzvar72503);

//creating new closure instance
void** clo72505 = alloc_clo(lam62377_fptr, 3);

//setting env list
clo72505[1] = kont62024;
clo72505[2] = interleave_u45direct;
clo72505[3] = a6191262205;
void* f6202562210 = encode_clo(clo72505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6202562210;
arg_buffer[3] = a6191362206;
arg_buffer[4] = a6191462207;
arg_buffer[5] = a6191562208;
arg_buffer[6] = a6191662209;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62383 = encode_clo(alloc_clo(lam62383_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62391 = arg_buffer[1];
//reading env and args
void* kont62024 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar72506 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72506, "1", 10);
void* a6190662198 = encode_mpz(mpzvar72506);
mpz_t* mpzvar72507 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72507, "2", 10);
void* a6190762199 = encode_mpz(mpzvar72507);
mpz_t* mpzvar72508 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72508, "3", 10);
void* a6190862200 = encode_mpz(mpzvar72508);
mpz_t* mpzvar72509 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72509, "4", 10);
void* a6190962201 = encode_mpz(mpzvar72509);
mpz_t* mpzvar72510 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72510, "5", 10);
void* a6191062202 = encode_mpz(mpzvar72510);
mpz_t* mpzvar72511 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar72511, "6", 10);
void* a6191162203 = encode_mpz(mpzvar72511);

//creating new closure instance
void** clo72513 = alloc_clo(lam62383_fptr, 3);

//setting env list
clo72513[1] = kont62024;
clo72513[2] = interleave_u45direct;
clo72513[3] = list;
void* f6202662204 = encode_clo(clo72513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6202662204;
arg_buffer[3] = a6190662198;
arg_buffer[4] = a6190762199;
arg_buffer[5] = a6190862200;
arg_buffer[6] = a6190962201;
arg_buffer[7] = a6191062202;
arg_buffer[8] = a6191162203;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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

