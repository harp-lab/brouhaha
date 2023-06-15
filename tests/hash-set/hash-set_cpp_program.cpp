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
void* _62181 = arg_buffer[1];
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

void* kont6191162013 = prim_car(lst);
void* lst62014 = prim_cdr(lst);
void* x6181862015 = apply_prim__u43(lst62014);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6191162013);
arg_buffer[2] = x6181862015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6191162013))[0]);
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
void* _62182 = arg_buffer[1];
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

void* kont6191362016 = prim_car(lst);
void* lst62017 = prim_cdr(lst);
void* x6181962018 = apply_prim__u45(lst62017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6191362016);
arg_buffer[2] = x6181962018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6191362016))[0]);
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
void* _62183 = arg_buffer[1];
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

void* kont6191562019 = prim_car(lst);
void* lst62020 = prim_cdr(lst);
void* x6182062021 = apply_prim__u42(lst62020);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6191562019);
arg_buffer[2] = x6182062021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6191562019))[0]);
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
void* _62184 = arg_buffer[1];
//reading env and args
void* kont61917 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6182162022 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61917);
arg_buffer[2] = x6182162022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61917))[0]);
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
void* _62185 = arg_buffer[1];
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

void* kont6191862023 = prim_car(lst);
void* lst62024 = prim_cdr(lst);
void* x6182262025 = apply_prim__u47(lst62024);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6191862023);
arg_buffer[2] = x6182262025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6191862023))[0]);
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
void* _62186 = arg_buffer[1];
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

void* kont6192062026 = prim_car(lst);
void* lst62027 = prim_cdr(lst);
void* x6182362028 = apply_prim__u61(lst62027);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192062026);
arg_buffer[2] = x6182362028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192062026))[0]);
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
void* _62187 = arg_buffer[1];
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

void* kont6192262029 = prim_car(lst);
void* lst62030 = prim_cdr(lst);
void* x6182462031 = apply_prim__u62(lst62030);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192262029);
arg_buffer[2] = x6182462031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192262029))[0]);
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
void* _62188 = arg_buffer[1];
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

void* kont6192462032 = prim_car(lst);
void* lst62033 = prim_cdr(lst);
void* x6182562034 = apply_prim__u60(lst62033);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192462032);
arg_buffer[2] = x6182562034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192462032))[0]);
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
void* _62189 = arg_buffer[1];
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

void* kont6192662035 = prim_car(lst);
void* lst62036 = prim_cdr(lst);
void* x6182662037 = apply_prim__u60_u61(lst62036);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192662035);
arg_buffer[2] = x6182662037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192662035))[0]);
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
void* _62190 = arg_buffer[1];
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

void* kont6192862038 = prim_car(lst);
void* lst62039 = prim_cdr(lst);
void* x6182762040 = apply_prim__u62_u61(lst62039);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6192862038);
arg_buffer[2] = x6182762040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6192862038))[0]);
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
void* _62191 = arg_buffer[1];
//reading env and args
void* kont61930 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x6182862041 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61930);
arg_buffer[2] = x6182862041;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61930))[0]);
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
void* _62192 = arg_buffer[1];
//reading env and args
void* kont61931 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6182962042 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61931);
arg_buffer[2] = x6182962042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61931))[0]);
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
void* _62193 = arg_buffer[1];
//reading env and args
void* kont61932 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6183062043 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61932);
arg_buffer[2] = x6183062043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61932))[0]);
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
void* _62194 = arg_buffer[1];
//reading env and args
void* kont61933 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6183162044 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61933);
arg_buffer[2] = x6183162044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61933))[0]);
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
void* _62195 = arg_buffer[1];
//reading env and args
void* kont61934 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6183262045 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61934);
arg_buffer[2] = x6183262045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61934))[0]);
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
void* _62196 = arg_buffer[1];
//reading env and args
void* kont61935 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6183362046 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61935);
arg_buffer[2] = x6183362046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61935))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam62197_fptr() // lam62197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62198 = arg_buffer[1];
//reading env and args
void* a6183662050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6183462047 = (decode_clo(env62198))[3];
//not do dummy comment
void* kont61936 = (decode_clo(env62198))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env62198))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont61936;
arg_buffer[3] = a6183462047;
arg_buffer[4] = a6183662050;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62197 = encode_clo(alloc_clo(lam62197_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62201 = arg_buffer[1];
//reading env and args
void* kont61936 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar63484 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63484, "0", 10);
void* a6183462047 = encode_mpz(mpzvar63484);
mpz_t* mpzvar63485 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63485, "2", 10);
void* a6183562048 = encode_mpz(mpzvar63485);

//creating new closure instance
void** clo63487 = alloc_clo(lam62197_fptr, 3);

//setting env list
clo63487[1] = equal_u63;
clo63487[2] = kont61936;
clo63487[3] = a6183462047;
void* f6193762049 = encode_clo(clo63487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6193762049;
arg_buffer[3] = x;
arg_buffer[4] = a6183562048;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam62202_fptr() // lam62202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62203 = arg_buffer[1];
//reading env and args
void* a6183962054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env62203))[3];
//not do dummy comment
void* kont61938 = (decode_clo(env62203))[2];
//not do dummy comment
void* a6183762051 = (decode_clo(env62203))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont61938;
arg_buffer[3] = a6183762051;
arg_buffer[4] = a6183962054;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62202 = encode_clo(alloc_clo(lam62202_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62206 = arg_buffer[1];
//reading env and args
void* kont61938 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar63488 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63488, "1", 10);
void* a6183762051 = encode_mpz(mpzvar63488);
mpz_t* mpzvar63489 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63489, "2", 10);
void* a6183862052 = encode_mpz(mpzvar63489);

//creating new closure instance
void** clo63491 = alloc_clo(lam62202_fptr, 3);

//setting env list
clo63491[1] = a6183762051;
clo63491[2] = kont61938;
clo63491[3] = equal_u63;
void* f6193962053 = encode_clo(clo63491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6193962053;
arg_buffer[3] = x;
arg_buffer[4] = a6183862052;
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
void* _62207 = arg_buffer[1];
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

void* kont6194062055 = prim_car(x);
void* x62056 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6194062055);
arg_buffer[2] = x62056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6194062055))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam62210_fptr() // lam62210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62211 = arg_buffer[1];
//reading env and args
void* a6184562066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env62211))[3];
//not do dummy comment
void* kont61942 = (decode_clo(env62211))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env62211))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont61942;
arg_buffer[3] = x;
arg_buffer[4] = a6184562066;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62210 = encode_clo(alloc_clo(lam62210_fptr, 0));

void* lam62212_fptr() // lam62212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62213 = arg_buffer[1];
//reading env and args
void* a6184362063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62213))[5];
//not do dummy comment
void* lst = (decode_clo(env62213))[4];
//not do dummy comment
void* x = (decode_clo(env62213))[3];
//not do dummy comment
void* kont61942 = (decode_clo(env62213))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env62213))[1];

//if-clause
bool if_guard63492 = is_true(a6184362063);
if(if_guard63492)
{
void* x6184462064 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61942);
arg_buffer[2] = x6184462064;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61942))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo63494 = alloc_clo(lam62210_fptr, 3);

//setting env list
clo63494[1] = member_u63;
clo63494[2] = kont61942;
clo63494[3] = x;
void* f6194362065 = encode_clo(clo63494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6194362065;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62212 = encode_clo(alloc_clo(lam62212_fptr, 0));

void* lam62214_fptr() // lam62214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62215 = arg_buffer[1];
//reading env and args
void* a6184262061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62215))[6];
//not do dummy comment
void* lst = (decode_clo(env62215))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env62215))[4];
//not do dummy comment
void* x = (decode_clo(env62215))[3];
//not do dummy comment
void* kont61942 = (decode_clo(env62215))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env62215))[1];

//creating new closure instance
void** clo63496 = alloc_clo(lam62212_fptr, 5);

//setting env list
clo63496[1] = member_u63;
clo63496[2] = kont61942;
clo63496[3] = x;
clo63496[4] = lst;
clo63496[5] = cdr;
void* f6194462062 = encode_clo(clo63496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f6194462062;
arg_buffer[3] = a6184262061;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62214 = encode_clo(alloc_clo(lam62214_fptr, 0));

void* lam62216_fptr() // lam62216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62217 = arg_buffer[1];
//reading env and args
void* a6184062058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62217))[7];
//not do dummy comment
void* lst = (decode_clo(env62217))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env62217))[5];
//not do dummy comment
void* x = (decode_clo(env62217))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env62217))[3];
//not do dummy comment
void* kont61942 = (decode_clo(env62217))[2];
//not do dummy comment
void* car = (decode_clo(env62217))[1];

//if-clause
bool if_guard63497 = is_true(a6184062058);
if(if_guard63497)
{
void* x6184162059 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61942);
arg_buffer[2] = x6184162059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61942))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo63499 = alloc_clo(lam62214_fptr, 6);

//setting env list
clo63499[1] = member_u63;
clo63499[2] = kont61942;
clo63499[3] = x;
clo63499[4] = equal_u63;
clo63499[5] = lst;
clo63499[6] = cdr;
void* f6194562060 = encode_clo(clo63499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6194562060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62216 = encode_clo(alloc_clo(lam62216_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62218 = arg_buffer[1];
//reading env and args
void* kont61942 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo63501 = alloc_clo(lam62216_fptr, 7);

//setting env list
clo63501[1] = car;
clo63501[2] = kont61942;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo63501[3] = member_u63;
clo63501[4] = x;
clo63501[5] = equal_u63;
clo63501[6] = lst;
clo63501[7] = cdr;
void* f6194662057 = encode_clo(clo63501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6194662057;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam62219_fptr() // lam62219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62220 = arg_buffer[1];
//reading env and args
void* a6184962074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61947 = (decode_clo(env62220))[4];
//not do dummy comment
void* fun = (decode_clo(env62220))[3];
//not do dummy comment
void* foldl = (decode_clo(env62220))[2];
//not do dummy comment
void* a6184862072 = (decode_clo(env62220))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont61947;
arg_buffer[3] = fun;
arg_buffer[4] = a6184862072;
arg_buffer[5] = a6184962074;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62219 = encode_clo(alloc_clo(lam62219_fptr, 0));

void* lam62221_fptr() // lam62221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62222 = arg_buffer[1];
//reading env and args
void* a6184862072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62222))[5];
//not do dummy comment
void* kont61947 = (decode_clo(env62222))[4];
//not do dummy comment
void* lst = (decode_clo(env62222))[3];
//not do dummy comment
void* fun = (decode_clo(env62222))[2];
//not do dummy comment
void* foldl = (decode_clo(env62222))[1];

//creating new closure instance
void** clo63503 = alloc_clo(lam62219_fptr, 4);

//setting env list
clo63503[1] = a6184862072;
clo63503[2] = foldl;
clo63503[3] = fun;
clo63503[4] = kont61947;
void* f6194862073 = encode_clo(clo63503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6194862073;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62221 = encode_clo(alloc_clo(lam62221_fptr, 0));

void* lam62223_fptr() // lam62223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62224 = arg_buffer[1];
//reading env and args
void* a6184762070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62224))[6];
//not do dummy comment
void* kont61947 = (decode_clo(env62224))[5];
//not do dummy comment
void* lst = (decode_clo(env62224))[4];
//not do dummy comment
void* fun = (decode_clo(env62224))[3];
//not do dummy comment
void* acc = (decode_clo(env62224))[2];
//not do dummy comment
void* foldl = (decode_clo(env62224))[1];

//creating new closure instance
void** clo63505 = alloc_clo(lam62221_fptr, 5);

//setting env list
clo63505[1] = foldl;
clo63505[2] = fun;
clo63505[3] = lst;
clo63505[4] = kont61947;
clo63505[5] = cdr;
void* f6194962071 = encode_clo(clo63505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f6194962071;
arg_buffer[3] = a6184762070;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62223 = encode_clo(alloc_clo(lam62223_fptr, 0));

void* lam62225_fptr() // lam62225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62226 = arg_buffer[1];
//reading env and args
void* a6184662068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62226))[7];
//not do dummy comment
void* kont61947 = (decode_clo(env62226))[6];
//not do dummy comment
void* lst = (decode_clo(env62226))[5];
//not do dummy comment
void* fun = (decode_clo(env62226))[4];
//not do dummy comment
void* acc = (decode_clo(env62226))[3];
//not do dummy comment
void* car = (decode_clo(env62226))[2];
//not do dummy comment
void* foldl = (decode_clo(env62226))[1];

//if-clause
bool if_guard63506 = is_true(a6184662068);
if(if_guard63506)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61947);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61947))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo63508 = alloc_clo(lam62223_fptr, 6);

//setting env list
clo63508[1] = foldl;
clo63508[2] = acc;
clo63508[3] = fun;
clo63508[4] = lst;
clo63508[5] = kont61947;
clo63508[6] = cdr;
void* f6195062069 = encode_clo(clo63508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6195062069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62225 = encode_clo(alloc_clo(lam62225_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62227 = arg_buffer[1];
//reading env and args
void* kont61947 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo63510 = alloc_clo(lam62225_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo63510[1] = foldl;
clo63510[2] = car;
clo63510[3] = acc;
clo63510[4] = fun;
clo63510[5] = lst;
clo63510[6] = kont61947;
clo63510[7] = cdr;
void* f6195162067 = encode_clo(clo63510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6195162067;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam62228_fptr() // lam62228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62229 = arg_buffer[1];
//reading env and args
void* a6185362082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6185162078 = (decode_clo(env62229))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62229))[2];
//not do dummy comment
void* kont61952 = (decode_clo(env62229))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont61952;
arg_buffer[3] = a6185162078;
arg_buffer[4] = a6185362082;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62228 = encode_clo(alloc_clo(lam62228_fptr, 0));

void* lam62230_fptr() // lam62230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62231 = arg_buffer[1];
//reading env and args
void* a6185262080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6185162078 = (decode_clo(env62231))[5];
//not do dummy comment
void* lst2 = (decode_clo(env62231))[4];
//not do dummy comment
void* cons = (decode_clo(env62231))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62231))[2];
//not do dummy comment
void* kont61952 = (decode_clo(env62231))[1];

//creating new closure instance
void** clo63512 = alloc_clo(lam62228_fptr, 3);

//setting env list
clo63512[1] = kont61952;
clo63512[2] = reverse_u45helper;
clo63512[3] = a6185162078;
void* f6195362081 = encode_clo(clo63512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6195362081;
arg_buffer[3] = a6185262080;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62230 = encode_clo(alloc_clo(lam62230_fptr, 0));

void* lam62232_fptr() // lam62232 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62233 = arg_buffer[1];
//reading env and args
void* a6185162078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62233))[6];
//not do dummy comment
void* lst2 = (decode_clo(env62233))[5];
//not do dummy comment
void* car = (decode_clo(env62233))[4];
//not do dummy comment
void* cons = (decode_clo(env62233))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62233))[2];
//not do dummy comment
void* kont61952 = (decode_clo(env62233))[1];

//creating new closure instance
void** clo63514 = alloc_clo(lam62230_fptr, 5);

//setting env list
clo63514[1] = kont61952;
clo63514[2] = reverse_u45helper;
clo63514[3] = cons;
clo63514[4] = lst2;
clo63514[5] = a6185162078;
void* f6195462079 = encode_clo(clo63514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6195462079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62232 = encode_clo(alloc_clo(lam62232_fptr, 0));

void* lam62234_fptr() // lam62234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62235 = arg_buffer[1];
//reading env and args
void* a6185062076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62235))[7];
//not do dummy comment
void* lst = (decode_clo(env62235))[6];
//not do dummy comment
void* lst2 = (decode_clo(env62235))[5];
//not do dummy comment
void* car = (decode_clo(env62235))[4];
//not do dummy comment
void* cons = (decode_clo(env62235))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62235))[2];
//not do dummy comment
void* kont61952 = (decode_clo(env62235))[1];

//if-clause
bool if_guard63515 = is_true(a6185062076);
if(if_guard63515)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61952);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61952))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo63517 = alloc_clo(lam62232_fptr, 6);

//setting env list
clo63517[1] = kont61952;
clo63517[2] = reverse_u45helper;
clo63517[3] = cons;
clo63517[4] = car;
clo63517[5] = lst2;
clo63517[6] = lst;
void* f6195562077 = encode_clo(clo63517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6195562077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62234 = encode_clo(alloc_clo(lam62234_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62236 = arg_buffer[1];
//reading env and args
void* kont61952 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo63519 = alloc_clo(lam62234_fptr, 7);

//setting env list
clo63519[1] = kont61952;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo63519[2] = reverse_u45helper;
clo63519[3] = cons;
clo63519[4] = car;
clo63519[5] = lst2;
clo63519[6] = lst;
clo63519[7] = cdr;
void* f6195662075 = encode_clo(clo63519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6195662075;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam62237_fptr() // lam62237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62238 = arg_buffer[1];
//reading env and args
void* a6185462084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62238))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env62238))[2];
//not do dummy comment
void* kont61957 = (decode_clo(env62238))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont61957;
arg_buffer[3] = lst;
arg_buffer[4] = a6185462084;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62237 = encode_clo(alloc_clo(lam62237_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62239 = arg_buffer[1];
//reading env and args
void* kont61957 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo63521 = alloc_clo(lam62237_fptr, 3);

//setting env list
clo63521[1] = kont61957;
clo63521[2] = reverse_u45helper;
clo63521[3] = lst;
void* f6195862083 = encode_clo(clo63521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6195862083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam62240_fptr() // lam62240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62241 = arg_buffer[1];
//reading env and args
void* x6185762089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61959 = (decode_clo(env62241))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61959);
arg_buffer[2] = x6185762089;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61959))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62240 = encode_clo(alloc_clo(lam62240_fptr, 0));

void* lam62242_fptr() // lam62242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62243 = arg_buffer[1];
//reading env and args
void* a6186262098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6185862091 = (decode_clo(env62243))[4];
//not do dummy comment
void* a6186062094 = (decode_clo(env62243))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env62243))[2];
//not do dummy comment
void* kont61959 = (decode_clo(env62243))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont61959;
arg_buffer[3] = a6185862091;
arg_buffer[4] = a6186062094;
arg_buffer[5] = a6186262098;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62242 = encode_clo(alloc_clo(lam62242_fptr, 0));

void* lam62244_fptr() // lam62244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62245 = arg_buffer[1];
//reading env and args
void* a6186162096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6185862091 = (decode_clo(env62245))[6];
//not do dummy comment
void* a6186062094 = (decode_clo(env62245))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env62245))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62245))[3];
//not do dummy comment
void* cons = (decode_clo(env62245))[2];
//not do dummy comment
void* kont61959 = (decode_clo(env62245))[1];

//creating new closure instance
void** clo63523 = alloc_clo(lam62242_fptr, 4);

//setting env list
clo63523[1] = kont61959;
clo63523[2] = take_u45helper;
clo63523[3] = a6186062094;
clo63523[4] = a6185862091;
void* f6196162097 = encode_clo(clo63523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6196162097;
arg_buffer[3] = a6186162096;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62244 = encode_clo(alloc_clo(lam62244_fptr, 0));

void* lam62246_fptr() // lam62246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62247 = arg_buffer[1];
//reading env and args
void* a6186062094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6185862091 = (decode_clo(env62247))[7];
//not do dummy comment
void* lst = (decode_clo(env62247))[6];
//not do dummy comment
void* car = (decode_clo(env62247))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env62247))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62247))[3];
//not do dummy comment
void* cons = (decode_clo(env62247))[2];
//not do dummy comment
void* kont61959 = (decode_clo(env62247))[1];

//creating new closure instance
void** clo63525 = alloc_clo(lam62244_fptr, 6);

//setting env list
clo63525[1] = kont61959;
clo63525[2] = cons;
clo63525[3] = lst2;
clo63525[4] = take_u45helper;
clo63525[5] = a6186062094;
clo63525[6] = a6185862091;
void* f6196262095 = encode_clo(clo63525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6196262095;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62246 = encode_clo(alloc_clo(lam62246_fptr, 0));

void* lam62249_fptr() // lam62249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62250 = arg_buffer[1];
//reading env and args
void* a6185862091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62250))[8];
//not do dummy comment
void* _u45 = (decode_clo(env62250))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env62250))[6];
//not do dummy comment
void* lst2 = (decode_clo(env62250))[5];
//not do dummy comment
void* n = (decode_clo(env62250))[4];
//not do dummy comment
void* car = (decode_clo(env62250))[3];
//not do dummy comment
void* cons = (decode_clo(env62250))[2];
//not do dummy comment
void* kont61959 = (decode_clo(env62250))[1];
mpz_t* mpzvar63526 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63526, "1", 10);
void* a6185962092 = encode_mpz(mpzvar63526);

//creating new closure instance
void** clo63528 = alloc_clo(lam62246_fptr, 7);

//setting env list
clo63528[1] = kont61959;
clo63528[2] = cons;
clo63528[3] = lst2;
clo63528[4] = take_u45helper;
clo63528[5] = car;
clo63528[6] = lst;
clo63528[7] = a6185862091;
void* f6196362093 = encode_clo(clo63528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6196362093;
arg_buffer[3] = n;
arg_buffer[4] = a6185962092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62249 = encode_clo(alloc_clo(lam62249_fptr, 0));

void* lam62251_fptr() // lam62251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62252 = arg_buffer[1];
//reading env and args
void* a6185662087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62252))[10];
//not do dummy comment
void* lst = (decode_clo(env62252))[9];
//not do dummy comment
void* reverse = (decode_clo(env62252))[8];
//not do dummy comment
void* _u45 = (decode_clo(env62252))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env62252))[6];
//not do dummy comment
void* lst2 = (decode_clo(env62252))[5];
//not do dummy comment
void* n = (decode_clo(env62252))[4];
//not do dummy comment
void* car = (decode_clo(env62252))[3];
//not do dummy comment
void* cons = (decode_clo(env62252))[2];
//not do dummy comment
void* kont61959 = (decode_clo(env62252))[1];

//if-clause
bool if_guard63529 = is_true(a6185662087);
if(if_guard63529)
{

//creating new closure instance
void** clo63531 = alloc_clo(lam62240_fptr, 1);

//setting env list
clo63531[1] = kont61959;
void* f6196062088 = encode_clo(clo63531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f6196062088;
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
void** clo63533 = alloc_clo(lam62249_fptr, 8);

//setting env list
clo63533[1] = kont61959;
clo63533[2] = cons;
clo63533[3] = car;
clo63533[4] = n;
clo63533[5] = lst2;
clo63533[6] = take_u45helper;
clo63533[7] = _u45;
clo63533[8] = lst;
void* f6196462090 = encode_clo(clo63533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6196462090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62251 = encode_clo(alloc_clo(lam62251_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62254 = arg_buffer[1];
//reading env and args
void* kont61959 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar63534 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63534, "0", 10);
void* a6185562085 = encode_mpz(mpzvar63534);

//creating new closure instance
void** clo63536 = alloc_clo(lam62251_fptr, 10);

//setting env list
clo63536[1] = kont61959;
clo63536[2] = cons;
clo63536[3] = car;
clo63536[4] = n;
clo63536[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo63536[6] = take_u45helper;
clo63536[7] = _u45;
clo63536[8] = reverse;
clo63536[9] = lst;
clo63536[10] = cdr;
void* f6196562086 = encode_clo(clo63536);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6196562086;
arg_buffer[3] = n;
arg_buffer[4] = a6185562085;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam62255_fptr() // lam62255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62256 = arg_buffer[1];
//reading env and args
void* a6186362100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62256))[4];
//not do dummy comment
void* kont61966 = (decode_clo(env62256))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env62256))[2];
//not do dummy comment
void* n = (decode_clo(env62256))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont61966;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a6186362100;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62255 = encode_clo(alloc_clo(lam62255_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62257 = arg_buffer[1];
//reading env and args
void* kont61966 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo63538 = alloc_clo(lam62255_fptr, 4);

//setting env list
clo63538[1] = n;
clo63538[2] = take_u45helper;
clo63538[3] = kont61966;
clo63538[4] = lst;
void* f6196762099 = encode_clo(clo63538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6196762099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam62259_fptr() // lam62259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62260 = arg_buffer[1];
//reading env and args
void* a6186862108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61968 = (decode_clo(env62260))[3];
//not do dummy comment
void* _u43 = (decode_clo(env62260))[2];
//not do dummy comment
void* a6186662104 = (decode_clo(env62260))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont61968;
arg_buffer[3] = a6186662104;
arg_buffer[4] = a6186862108;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a6186762106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env62262))[4];
//not do dummy comment
void* kont61968 = (decode_clo(env62262))[3];
//not do dummy comment
void* _u43 = (decode_clo(env62262))[2];
//not do dummy comment
void* a6186662104 = (decode_clo(env62262))[1];

//creating new closure instance
void** clo63540 = alloc_clo(lam62259_fptr, 3);

//setting env list
clo63540[1] = a6186662104;
clo63540[2] = _u43;
clo63540[3] = kont61968;
void* f6196962107 = encode_clo(clo63540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f6196962107;
arg_buffer[3] = a6186762106;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62261 = encode_clo(alloc_clo(lam62261_fptr, 0));

void* lam62264_fptr() // lam62264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62265 = arg_buffer[1];
//reading env and args
void* a6186462102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62265))[5];
//not do dummy comment
void* lst = (decode_clo(env62265))[4];
//not do dummy comment
void* length = (decode_clo(env62265))[3];
//not do dummy comment
void* kont61968 = (decode_clo(env62265))[2];
//not do dummy comment
void* _u43 = (decode_clo(env62265))[1];

//if-clause
bool if_guard63541 = is_true(a6186462102);
if(if_guard63541)
{
mpz_t* mpzvar63542 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63542, "0", 10);
void* x6186562103 = encode_mpz(mpzvar63542);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61968);
arg_buffer[2] = x6186562103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61968))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar63543 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63543, "1", 10);
void* a6186662104 = encode_mpz(mpzvar63543);

//creating new closure instance
void** clo63545 = alloc_clo(lam62261_fptr, 4);

//setting env list
clo63545[1] = a6186662104;
clo63545[2] = _u43;
clo63545[3] = kont61968;
clo63545[4] = length;
void* f6197062105 = encode_clo(clo63545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6197062105;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62264 = encode_clo(alloc_clo(lam62264_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62266 = arg_buffer[1];
//reading env and args
void* kont61968 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo63547 = alloc_clo(lam62264_fptr, 5);

//setting env list
clo63547[1] = _u43;
clo63547[2] = kont61968;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo63547[3] = length;
clo63547[4] = lst;
clo63547[5] = cdr;
void* f6197162101 = encode_clo(clo63547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6197162101;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam62267_fptr() // lam62267 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62268 = arg_buffer[1];
//reading env and args
void* x6187062112 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61972 = (decode_clo(env62268))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61972);
arg_buffer[2] = x6187062112;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61972))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62267 = encode_clo(alloc_clo(lam62267_fptr, 0));

void* lam62269_fptr() // lam62269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62270 = arg_buffer[1];
//reading env and args
void* a6187462120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env62270))[3];
//not do dummy comment
void* kont61972 = (decode_clo(env62270))[2];
//not do dummy comment
void* a6187262116 = (decode_clo(env62270))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont61972;
arg_buffer[3] = a6187262116;
arg_buffer[4] = a6187462120;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62269 = encode_clo(alloc_clo(lam62269_fptr, 0));

void* lam62271_fptr() // lam62271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62272 = arg_buffer[1];
//reading env and args
void* a6187362118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env62272))[5];
//not do dummy comment
void* cons = (decode_clo(env62272))[4];
//not do dummy comment
void* proc = (decode_clo(env62272))[3];
//not do dummy comment
void* kont61972 = (decode_clo(env62272))[2];
//not do dummy comment
void* a6187262116 = (decode_clo(env62272))[1];

//creating new closure instance
void** clo63549 = alloc_clo(lam62269_fptr, 3);

//setting env list
clo63549[1] = a6187262116;
clo63549[2] = kont61972;
clo63549[3] = cons;
void* f6197462119 = encode_clo(clo63549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f6197462119;
arg_buffer[3] = proc;
arg_buffer[4] = a6187362118;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a6187262116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62274))[6];
//not do dummy comment
void* lst = (decode_clo(env62274))[5];
//not do dummy comment
void* map = (decode_clo(env62274))[4];
//not do dummy comment
void* cons = (decode_clo(env62274))[3];
//not do dummy comment
void* proc = (decode_clo(env62274))[2];
//not do dummy comment
void* kont61972 = (decode_clo(env62274))[1];

//creating new closure instance
void** clo63551 = alloc_clo(lam62271_fptr, 5);

//setting env list
clo63551[1] = a6187262116;
clo63551[2] = kont61972;
clo63551[3] = proc;
clo63551[4] = cons;
clo63551[5] = map;
void* f6197562117 = encode_clo(clo63551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6197562117;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a6187162114 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62276))[6];
//not do dummy comment
void* lst = (decode_clo(env62276))[5];
//not do dummy comment
void* map = (decode_clo(env62276))[4];
//not do dummy comment
void* cons = (decode_clo(env62276))[3];
//not do dummy comment
void* proc = (decode_clo(env62276))[2];
//not do dummy comment
void* kont61972 = (decode_clo(env62276))[1];

//creating new closure instance
void** clo63553 = alloc_clo(lam62273_fptr, 6);

//setting env list
clo63553[1] = kont61972;
clo63553[2] = proc;
clo63553[3] = cons;
clo63553[4] = map;
clo63553[5] = lst;
clo63553[6] = cdr;
void* f6197662115 = encode_clo(clo63553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f6197662115;
arg_buffer[3] = a6187162114;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a6186962110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env62278))[8];
//not do dummy comment
void* map = (decode_clo(env62278))[7];
//not do dummy comment
void* car = (decode_clo(env62278))[6];
//not do dummy comment
void* cons = (decode_clo(env62278))[5];
//not do dummy comment
void* list = (decode_clo(env62278))[4];
//not do dummy comment
void* cdr = (decode_clo(env62278))[3];
//not do dummy comment
void* proc = (decode_clo(env62278))[2];
//not do dummy comment
void* kont61972 = (decode_clo(env62278))[1];

//if-clause
bool if_guard63554 = is_true(a6186962110);
if(if_guard63554)
{

//creating new closure instance
void** clo63556 = alloc_clo(lam62267_fptr, 1);

//setting env list
clo63556[1] = kont61972;
void* f6197362111 = encode_clo(clo63556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6197362111;
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
void** clo63558 = alloc_clo(lam62275_fptr, 6);

//setting env list
clo63558[1] = kont61972;
clo63558[2] = proc;
clo63558[3] = cons;
clo63558[4] = map;
clo63558[5] = lst;
clo63558[6] = cdr;
void* f6197762113 = encode_clo(clo63558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6197762113;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62277 = encode_clo(alloc_clo(lam62277_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62279 = arg_buffer[1];
//reading env and args
void* kont61972 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo63560 = alloc_clo(lam62277_fptr, 8);

//setting env list
clo63560[1] = kont61972;
clo63560[2] = proc;
clo63560[3] = cdr;
clo63560[4] = list;
clo63560[5] = cons;
clo63560[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo63560[7] = map;
clo63560[8] = lst;
void* f6197862109 = encode_clo(clo63560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6197862109;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam62280_fptr() // lam62280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62281 = arg_buffer[1];
//reading env and args
void* x6187662124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61979 = (decode_clo(env62281))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61979);
arg_buffer[2] = x6187662124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61979))[0]);
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
void* a6188162134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61979 = (decode_clo(env62283))[3];
//not do dummy comment
void* a6187962130 = (decode_clo(env62283))[2];
//not do dummy comment
void* cons = (decode_clo(env62283))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont61979;
arg_buffer[3] = a6187962130;
arg_buffer[4] = a6188162134;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62282 = encode_clo(alloc_clo(lam62282_fptr, 0));

void* lam62284_fptr() // lam62284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62285 = arg_buffer[1];
//reading env and args
void* a6188062132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61979 = (decode_clo(env62285))[5];
//not do dummy comment
void* op = (decode_clo(env62285))[4];
//not do dummy comment
void* a6187962130 = (decode_clo(env62285))[3];
//not do dummy comment
void* filter = (decode_clo(env62285))[2];
//not do dummy comment
void* cons = (decode_clo(env62285))[1];

//creating new closure instance
void** clo63562 = alloc_clo(lam62282_fptr, 3);

//setting env list
clo63562[1] = cons;
clo63562[2] = a6187962130;
clo63562[3] = kont61979;
void* f6198162133 = encode_clo(clo63562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f6198162133;
arg_buffer[3] = op;
arg_buffer[4] = a6188062132;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62284 = encode_clo(alloc_clo(lam62284_fptr, 0));

void* lam62286_fptr() // lam62286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62287 = arg_buffer[1];
//reading env and args
void* a6187962130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62287))[6];
//not do dummy comment
void* kont61979 = (decode_clo(env62287))[5];
//not do dummy comment
void* lst = (decode_clo(env62287))[4];
//not do dummy comment
void* op = (decode_clo(env62287))[3];
//not do dummy comment
void* filter = (decode_clo(env62287))[2];
//not do dummy comment
void* cons = (decode_clo(env62287))[1];

//creating new closure instance
void** clo63564 = alloc_clo(lam62284_fptr, 5);

//setting env list
clo63564[1] = cons;
clo63564[2] = filter;
clo63564[3] = a6187962130;
clo63564[4] = op;
clo63564[5] = kont61979;
void* f6198262131 = encode_clo(clo63564);



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

void* lam62286 = encode_clo(alloc_clo(lam62286_fptr, 0));

void* lam62288_fptr() // lam62288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62289 = arg_buffer[1];
//reading env and args
void* a6188262136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61979 = (decode_clo(env62289))[3];
//not do dummy comment
void* op = (decode_clo(env62289))[2];
//not do dummy comment
void* filter = (decode_clo(env62289))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont61979;
arg_buffer[3] = op;
arg_buffer[4] = a6188262136;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62288 = encode_clo(alloc_clo(lam62288_fptr, 0));

void* lam62290_fptr() // lam62290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62291 = arg_buffer[1];
//reading env and args
void* a6187862128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62291))[7];
//not do dummy comment
void* kont61979 = (decode_clo(env62291))[6];
//not do dummy comment
void* lst = (decode_clo(env62291))[5];
//not do dummy comment
void* op = (decode_clo(env62291))[4];
//not do dummy comment
void* cons = (decode_clo(env62291))[3];
//not do dummy comment
void* filter = (decode_clo(env62291))[2];
//not do dummy comment
void* car = (decode_clo(env62291))[1];

//if-clause
bool if_guard63565 = is_true(a6187862128);
if(if_guard63565)
{

//creating new closure instance
void** clo63567 = alloc_clo(lam62286_fptr, 6);

//setting env list
clo63567[1] = cons;
clo63567[2] = filter;
clo63567[3] = op;
clo63567[4] = lst;
clo63567[5] = kont61979;
clo63567[6] = cdr;
void* f6198362129 = encode_clo(clo63567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6198362129;
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
void** clo63569 = alloc_clo(lam62288_fptr, 3);

//setting env list
clo63569[1] = filter;
clo63569[2] = op;
clo63569[3] = kont61979;
void* f6198462135 = encode_clo(clo63569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6198462135;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62290 = encode_clo(alloc_clo(lam62290_fptr, 0));

void* lam62292_fptr() // lam62292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62293 = arg_buffer[1];
//reading env and args
void* a6187762126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62293))[7];
//not do dummy comment
void* kont61979 = (decode_clo(env62293))[6];
//not do dummy comment
void* lst = (decode_clo(env62293))[5];
//not do dummy comment
void* op = (decode_clo(env62293))[4];
//not do dummy comment
void* cons = (decode_clo(env62293))[3];
//not do dummy comment
void* filter = (decode_clo(env62293))[2];
//not do dummy comment
void* car = (decode_clo(env62293))[1];

//creating new closure instance
void** clo63571 = alloc_clo(lam62290_fptr, 7);

//setting env list
clo63571[1] = car;
clo63571[2] = filter;
clo63571[3] = cons;
clo63571[4] = op;
clo63571[5] = lst;
clo63571[6] = kont61979;
clo63571[7] = cdr;
void* f6198562127 = encode_clo(clo63571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f6198562127;
arg_buffer[3] = a6187762126;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62292 = encode_clo(alloc_clo(lam62292_fptr, 0));

void* lam62294_fptr() // lam62294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62295 = arg_buffer[1];
//reading env and args
void* a6187562122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61979 = (decode_clo(env62295))[8];
//not do dummy comment
void* lst = (decode_clo(env62295))[7];
//not do dummy comment
void* op = (decode_clo(env62295))[6];
//not do dummy comment
void* cons = (decode_clo(env62295))[5];
//not do dummy comment
void* list = (decode_clo(env62295))[4];
//not do dummy comment
void* cdr = (decode_clo(env62295))[3];
//not do dummy comment
void* filter = (decode_clo(env62295))[2];
//not do dummy comment
void* car = (decode_clo(env62295))[1];

//if-clause
bool if_guard63572 = is_true(a6187562122);
if(if_guard63572)
{

//creating new closure instance
void** clo63574 = alloc_clo(lam62280_fptr, 1);

//setting env list
clo63574[1] = kont61979;
void* f6198062123 = encode_clo(clo63574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6198062123;
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
void** clo63576 = alloc_clo(lam62292_fptr, 7);

//setting env list
clo63576[1] = car;
clo63576[2] = filter;
clo63576[3] = cons;
clo63576[4] = op;
clo63576[5] = lst;
clo63576[6] = kont61979;
clo63576[7] = cdr;
void* f6198662125 = encode_clo(clo63576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6198662125;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62294 = encode_clo(alloc_clo(lam62294_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62296 = arg_buffer[1];
//reading env and args
void* kont61979 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo63578 = alloc_clo(lam62294_fptr, 8);

//setting env list
clo63578[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo63578[2] = filter;
clo63578[3] = cdr;
clo63578[4] = list;
clo63578[5] = cons;
clo63578[6] = op;
clo63578[7] = lst;
clo63578[8] = kont61979;
void* f6198762121 = encode_clo(clo63578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6198762121;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam62297_fptr() // lam62297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62298 = arg_buffer[1];
//reading env and args
void* a6188762144 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61988 = (decode_clo(env62298))[3];
//not do dummy comment
void* a6188562141 = (decode_clo(env62298))[2];
//not do dummy comment
void* drop = (decode_clo(env62298))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont61988;
arg_buffer[3] = a6188562141;
arg_buffer[4] = a6188762144;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62297 = encode_clo(alloc_clo(lam62297_fptr, 0));

void* lam62300_fptr() // lam62300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62301 = arg_buffer[1];
//reading env and args
void* a6188562141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env62301))[4];
//not do dummy comment
void* kont61988 = (decode_clo(env62301))[3];
//not do dummy comment
void* n = (decode_clo(env62301))[2];
//not do dummy comment
void* _u45 = (decode_clo(env62301))[1];
mpz_t* mpzvar63579 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63579, "1", 10);
void* a6188662142 = encode_mpz(mpzvar63579);

//creating new closure instance
void** clo63581 = alloc_clo(lam62297_fptr, 3);

//setting env list
clo63581[1] = drop;
clo63581[2] = a6188562141;
clo63581[3] = kont61988;
void* f6198962143 = encode_clo(clo63581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6198962143;
arg_buffer[3] = n;
arg_buffer[4] = a6188662142;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a6188462139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62303))[6];
//not do dummy comment
void* kont61988 = (decode_clo(env62303))[5];
//not do dummy comment
void* n = (decode_clo(env62303))[4];
//not do dummy comment
void* _u45 = (decode_clo(env62303))[3];
//not do dummy comment
void* lst = (decode_clo(env62303))[2];
//not do dummy comment
void* drop = (decode_clo(env62303))[1];

//if-clause
bool if_guard63582 = is_true(a6188462139);
if(if_guard63582)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61988);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61988))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo63584 = alloc_clo(lam62300_fptr, 4);

//setting env list
clo63584[1] = _u45;
clo63584[2] = n;
clo63584[3] = kont61988;
clo63584[4] = drop;
void* f6199062140 = encode_clo(clo63584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6199062140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62302 = encode_clo(alloc_clo(lam62302_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62305 = arg_buffer[1];
//reading env and args
void* kont61988 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar63585 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63585, "0", 10);
void* a6188362137 = encode_mpz(mpzvar63585);

//creating new closure instance
void** clo63587 = alloc_clo(lam62302_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo63587[1] = drop;
clo63587[2] = lst;
clo63587[3] = _u45;
clo63587[4] = n;
clo63587[5] = kont61988;
clo63587[6] = cdr;
void* f6199162138 = encode_clo(clo63587);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6199162138;
arg_buffer[3] = n;
arg_buffer[4] = a6188362137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam62306_fptr() // lam62306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62307 = arg_buffer[1];
//reading env and args
void* a6189162152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont61992 = (decode_clo(env62307))[3];
//not do dummy comment
void* proc = (decode_clo(env62307))[2];
//not do dummy comment
void* a6188962148 = (decode_clo(env62307))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont61992;
arg_buffer[3] = a6188962148;
arg_buffer[4] = a6189162152;
arg_buffer[0] = reinterpret_cast<void*>(4);
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
void* a6189062150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env62309))[5];
//not do dummy comment
void* kont61992 = (decode_clo(env62309))[4];
//not do dummy comment
void* acc = (decode_clo(env62309))[3];
//not do dummy comment
void* proc = (decode_clo(env62309))[2];
//not do dummy comment
void* a6188962148 = (decode_clo(env62309))[1];

//creating new closure instance
void** clo63589 = alloc_clo(lam62306_fptr, 3);

//setting env list
clo63589[1] = a6188962148;
clo63589[2] = proc;
clo63589[3] = kont61992;
void* f6199362151 = encode_clo(clo63589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f6199362151;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a6189062150;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62308 = encode_clo(alloc_clo(lam62308_fptr, 0));

void* lam62310_fptr() // lam62310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62311 = arg_buffer[1];
//reading env and args
void* a6188962148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62311))[6];
//not do dummy comment
void* kont61992 = (decode_clo(env62311))[5];
//not do dummy comment
void* foldr = (decode_clo(env62311))[4];
//not do dummy comment
void* lst = (decode_clo(env62311))[3];
//not do dummy comment
void* proc = (decode_clo(env62311))[2];
//not do dummy comment
void* acc = (decode_clo(env62311))[1];

//creating new closure instance
void** clo63591 = alloc_clo(lam62308_fptr, 5);

//setting env list
clo63591[1] = a6188962148;
clo63591[2] = proc;
clo63591[3] = acc;
clo63591[4] = kont61992;
clo63591[5] = foldr;
void* f6199462149 = encode_clo(clo63591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6199462149;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62310 = encode_clo(alloc_clo(lam62310_fptr, 0));

void* lam62312_fptr() // lam62312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62313 = arg_buffer[1];
//reading env and args
void* a6188862146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62313))[7];
//not do dummy comment
void* car = (decode_clo(env62313))[6];
//not do dummy comment
void* kont61992 = (decode_clo(env62313))[5];
//not do dummy comment
void* foldr = (decode_clo(env62313))[4];
//not do dummy comment
void* lst = (decode_clo(env62313))[3];
//not do dummy comment
void* proc = (decode_clo(env62313))[2];
//not do dummy comment
void* acc = (decode_clo(env62313))[1];

//if-clause
bool if_guard63592 = is_true(a6188862146);
if(if_guard63592)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61992);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61992))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo63594 = alloc_clo(lam62310_fptr, 6);

//setting env list
clo63594[1] = acc;
clo63594[2] = proc;
clo63594[3] = lst;
clo63594[4] = foldr;
clo63594[5] = kont61992;
clo63594[6] = cdr;
void* f6199562147 = encode_clo(clo63594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6199562147;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62312 = encode_clo(alloc_clo(lam62312_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62314 = arg_buffer[1];
//reading env and args
void* kont61992 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo63596 = alloc_clo(lam62312_fptr, 7);

//setting env list
clo63596[1] = acc;
clo63596[2] = proc;
clo63596[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo63596[4] = foldr;
clo63596[5] = kont61992;
clo63596[6] = car;
clo63596[7] = cdr;
void* f6199662145 = encode_clo(clo63596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6199662145;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam62315_fptr() // lam62315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62316 = arg_buffer[1];
//reading env and args
void* a6189562160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6189362156 = (decode_clo(env62316))[3];
//not do dummy comment
void* kont61997 = (decode_clo(env62316))[2];
//not do dummy comment
void* cons = (decode_clo(env62316))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont61997;
arg_buffer[3] = a6189362156;
arg_buffer[4] = a6189562160;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a6189462158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6189362156 = (decode_clo(env62318))[5];
//not do dummy comment
void* kont61997 = (decode_clo(env62318))[4];
//not do dummy comment
void* append = (decode_clo(env62318))[3];
//not do dummy comment
void* lst2 = (decode_clo(env62318))[2];
//not do dummy comment
void* cons = (decode_clo(env62318))[1];

//creating new closure instance
void** clo63598 = alloc_clo(lam62315_fptr, 3);

//setting env list
clo63598[1] = cons;
clo63598[2] = kont61997;
clo63598[3] = a6189362156;
void* f6199862159 = encode_clo(clo63598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f6199862159;
arg_buffer[3] = a6189462158;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a6189362156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62320))[6];
//not do dummy comment
void* kont61997 = (decode_clo(env62320))[5];
//not do dummy comment
void* append = (decode_clo(env62320))[4];
//not do dummy comment
void* lst2 = (decode_clo(env62320))[3];
//not do dummy comment
void* lst1 = (decode_clo(env62320))[2];
//not do dummy comment
void* cons = (decode_clo(env62320))[1];

//creating new closure instance
void** clo63600 = alloc_clo(lam62317_fptr, 5);

//setting env list
clo63600[1] = cons;
clo63600[2] = lst2;
clo63600[3] = append;
clo63600[4] = kont61997;
clo63600[5] = a6189362156;
void* f6199962157 = encode_clo(clo63600);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6199962157;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a6189262154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env62322))[7];
//not do dummy comment
void* kont61997 = (decode_clo(env62322))[6];
//not do dummy comment
void* append = (decode_clo(env62322))[5];
//not do dummy comment
void* lst2 = (decode_clo(env62322))[4];
//not do dummy comment
void* cons = (decode_clo(env62322))[3];
//not do dummy comment
void* lst1 = (decode_clo(env62322))[2];
//not do dummy comment
void* car = (decode_clo(env62322))[1];

//if-clause
bool if_guard63601 = is_true(a6189262154);
if(if_guard63601)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont61997);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont61997))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo63603 = alloc_clo(lam62319_fptr, 6);

//setting env list
clo63603[1] = cons;
clo63603[2] = lst1;
clo63603[3] = lst2;
clo63603[4] = append;
clo63603[5] = kont61997;
clo63603[6] = cdr;
void* f6200062155 = encode_clo(clo63603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6200062155;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam62321 = encode_clo(alloc_clo(lam62321_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62323 = arg_buffer[1];
//reading env and args
void* kont61997 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo63605 = alloc_clo(lam62321_fptr, 7);

//setting env list
clo63605[1] = car;
clo63605[2] = lst1;
clo63605[3] = cons;
clo63605[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo63605[5] = append;
clo63605[6] = kont61997;
clo63605[7] = cdr;
void* f6200162153 = encode_clo(clo63605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6200162153;
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
void* _62324 = arg_buffer[1];
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

void* kont6200262161 = prim_car(lst);
void* lst62162 = prim_cdr(lst);
void* x6189662163 = apply_prim_hash(lst62162);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6200262161);
arg_buffer[2] = x6189662163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6200262161))[0]);
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
void* _62325 = arg_buffer[1];
//reading env and args
void* kont62004 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6189762164 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62004);
arg_buffer[2] = x6189762164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62004))[0]);
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
void* _62326 = arg_buffer[1];
//reading env and args
void* kont62005 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x6189862165 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62005);
arg_buffer[2] = x6189862165;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62005))[0]);
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
void* _62327 = arg_buffer[1];
//reading env and args
void* kont62006 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6189962166 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62006);
arg_buffer[2] = x6189962166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62006))[0]);
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
void* _62328 = arg_buffer[1];
//reading env and args
void* kont62007 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x6190062167 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62007);
arg_buffer[2] = x6190062167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62007))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam62330_fptr() // lam62330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62331 = arg_buffer[1];
//reading env and args
void* a6190862177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env62331))[2];
//not do dummy comment
void* kont62008 = (decode_clo(env62331))[1];
void* a6190962178 = encode_str(new(GC) std::string("work"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45ref);
arg_buffer[2] = kont62008;
arg_buffer[3] = a6190862177;
arg_buffer[4] = a6190962178;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45ref))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62330 = encode_clo(alloc_clo(lam62330_fptr, 0));

void* lam62334_fptr() // lam62334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62335 = arg_buffer[1];
//reading env and args
void* a6190562173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45ref = (decode_clo(env62335))[3];
//not do dummy comment
void* hash_u45set = (decode_clo(env62335))[2];
//not do dummy comment
void* kont62008 = (decode_clo(env62335))[1];
void* a6190662174 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar63606 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63606, "90", 10);
void* a6190762175 = encode_mpz(mpzvar63606);

//creating new closure instance
void** clo63608 = alloc_clo(lam62330_fptr, 2);

//setting env list
clo63608[1] = kont62008;
clo63608[2] = hash_u45ref;
void* f6200962176 = encode_clo(clo63608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45set);
arg_buffer[2] = f6200962176;
arg_buffer[3] = a6190562173;
arg_buffer[4] = a6190662174;
arg_buffer[5] = a6190762175;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45set))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62334 = encode_clo(alloc_clo(lam62334_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62340 = arg_buffer[1];
//reading env and args
void* kont62008 = arg_buffer[2];
//Dummy comment
void* a6190162168 = encode_str(new(GC) std::string("work"));
mpz_t* mpzvar63609 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63609, "80", 10);
void* a6190262169 = encode_mpz(mpzvar63609);
mpz_t* mpzvar63610 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar63610, "10", 10);
void* a6190362170 = encode_mpz(mpzvar63610);
void* a6190462171 = encode_str(new(GC) std::string("lmao"));

//creating new closure instance
void** clo63612 = alloc_clo(lam62334_fptr, 3);

//setting env list
clo63612[1] = kont62008;
clo63612[2] = hash_u45set;
clo63612[3] = hash_u45ref;
void* f6201062172 = encode_clo(clo63612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f6201062172;
arg_buffer[3] = a6190162168;
arg_buffer[4] = a6190262169;
arg_buffer[5] = a6190362170;
arg_buffer[6] = a6190462171;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam62341_fptr() // lam62341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env62342 = arg_buffer[1];
//reading env and args
void* x6191062180 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont62011 = (decode_clo(env62342))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont62011);
arg_buffer[2] = x6191062180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont62011))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam62341 = encode_clo(alloc_clo(lam62341_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _62343 = arg_buffer[1];
//reading env and args
void* kont62011 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo63614 = alloc_clo(lam62341_fptr, 1);

//setting env list
clo63614[1] = kont62011;
void* f6201262179 = encode_clo(clo63614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f6201262179;
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

