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
void* _65191 = arg_buffer[1];
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

void* kont6489765006 = prim_car(lst);
void* lst65007 = prim_cdr(lst);
void* x6479465008 = apply_prim__u43(lst65007);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6489765006);
arg_buffer[2] = x6479465008;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6489765006))[0]);
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
void* _65192 = arg_buffer[1];
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

void* kont6489965009 = prim_car(lst);
void* lst65010 = prim_cdr(lst);
void* x6479565011 = apply_prim__u45(lst65010);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6489965009);
arg_buffer[2] = x6479565011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6489965009))[0]);
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
void* _65193 = arg_buffer[1];
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

void* kont6490165012 = prim_car(lst);
void* lst65013 = prim_cdr(lst);
void* x6479665014 = apply_prim__u42(lst65013);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6490165012);
arg_buffer[2] = x6479665014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6490165012))[0]);
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
void* _65194 = arg_buffer[1];
//reading env and args
void* kont64903 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6479765015 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64903);
arg_buffer[2] = x6479765015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64903))[0]);
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
void* _65195 = arg_buffer[1];
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

void* kont6490465016 = prim_car(lst);
void* lst65017 = prim_cdr(lst);
void* x6479865018 = apply_prim__u47(lst65017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6490465016);
arg_buffer[2] = x6479865018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6490465016))[0]);
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
void* _65196 = arg_buffer[1];
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

void* kont6490665019 = prim_car(lst);
void* lst65020 = prim_cdr(lst);
void* x6479965021 = apply_prim__u61(lst65020);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6490665019);
arg_buffer[2] = x6479965021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6490665019))[0]);
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
void* _65197 = arg_buffer[1];
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

void* kont6490865022 = prim_car(lst);
void* lst65023 = prim_cdr(lst);
void* x6480065024 = apply_prim__u62(lst65023);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6490865022);
arg_buffer[2] = x6480065024;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6490865022))[0]);
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
void* _65198 = arg_buffer[1];
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

void* kont6491065025 = prim_car(lst);
void* lst65026 = prim_cdr(lst);
void* x6480165027 = apply_prim__u60(lst65026);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6491065025);
arg_buffer[2] = x6480165027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6491065025))[0]);
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
void* _65199 = arg_buffer[1];
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

void* kont6491265028 = prim_car(lst);
void* lst65029 = prim_cdr(lst);
void* x6480265030 = apply_prim__u60_u61(lst65029);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6491265028);
arg_buffer[2] = x6480265030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6491265028))[0]);
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
void* _65200 = arg_buffer[1];
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

void* kont6491465031 = prim_car(lst);
void* lst65032 = prim_cdr(lst);
void* x6480365033 = apply_prim__u62_u61(lst65032);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6491465031);
arg_buffer[2] = x6480365033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6491465031))[0]);
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
void* _65201 = arg_buffer[1];
//reading env and args
void* kont64916 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x6480465034 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64916);
arg_buffer[2] = x6480465034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64916))[0]);
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
void* _65202 = arg_buffer[1];
//reading env and args
void* kont64917 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6480565035 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64917);
arg_buffer[2] = x6480565035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64917))[0]);
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
void* _65203 = arg_buffer[1];
//reading env and args
void* kont64918 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6480665036 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64918);
arg_buffer[2] = x6480665036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64918))[0]);
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
void* _65204 = arg_buffer[1];
//reading env and args
void* kont64919 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6480765037 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64919);
arg_buffer[2] = x6480765037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64919))[0]);
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
void* _65205 = arg_buffer[1];
//reading env and args
void* kont64920 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6480865038 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64920);
arg_buffer[2] = x6480865038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64920))[0]);
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
void* _65206 = arg_buffer[1];
//reading env and args
void* kont64921 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6480965039 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64921);
arg_buffer[2] = x6480965039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64921))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam65207_fptr() // lam65207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65208 = arg_buffer[1];
//reading env and args
void* a6481265043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64922 = (decode_clo(env65208))[3];
//not do dummy comment
void* a6481065040 = (decode_clo(env65208))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env65208))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont64922;
arg_buffer[3] = a6481065040;
arg_buffer[4] = a6481265043;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65207 = encode_clo(alloc_clo(lam65207_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65211 = arg_buffer[1];
//reading env and args
void* kont64922 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar76051 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76051, "0", 10);
void* a6481065040 = encode_mpz(mpzvar76051);
mpz_t* mpzvar76052 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76052, "2", 10);
void* a6481165041 = encode_mpz(mpzvar76052);

//creating new closure instance
void** clo76054 = alloc_clo(lam65207_fptr, 3);

//setting env list
clo76054[1] = equal_u63;
clo76054[2] = a6481065040;
clo76054[3] = kont64922;
void* f6492365042 = encode_clo(clo76054);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6492365042;
arg_buffer[3] = x;
arg_buffer[4] = a6481165041;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam65212_fptr() // lam65212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65213 = arg_buffer[1];
//reading env and args
void* a6481565047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64924 = (decode_clo(env65213))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env65213))[2];
//not do dummy comment
void* a6481365044 = (decode_clo(env65213))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont64924;
arg_buffer[3] = a6481365044;
arg_buffer[4] = a6481565047;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65212 = encode_clo(alloc_clo(lam65212_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65216 = arg_buffer[1];
//reading env and args
void* kont64924 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar76055 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76055, "1", 10);
void* a6481365044 = encode_mpz(mpzvar76055);
mpz_t* mpzvar76056 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76056, "2", 10);
void* a6481465045 = encode_mpz(mpzvar76056);

//creating new closure instance
void** clo76058 = alloc_clo(lam65212_fptr, 3);

//setting env list
clo76058[1] = a6481365044;
clo76058[2] = equal_u63;
clo76058[3] = kont64924;
void* f6492565046 = encode_clo(clo76058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6492565046;
arg_buffer[3] = x;
arg_buffer[4] = a6481465045;
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
void* _65217 = arg_buffer[1];
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

void* kont6492665048 = prim_car(x);
void* x65049 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6492665048);
arg_buffer[2] = x65049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6492665048))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam65220_fptr() // lam65220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65221 = arg_buffer[1];
//reading env and args
void* a6482165059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64928 = (decode_clo(env65221))[3];
//not do dummy comment
void* x = (decode_clo(env65221))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env65221))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont64928;
arg_buffer[3] = x;
arg_buffer[4] = a6482165059;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65220 = encode_clo(alloc_clo(lam65220_fptr, 0));

void* lam65222_fptr() // lam65222 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65223 = arg_buffer[1];
//reading env and args
void* a6481965056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65223))[5];
//not do dummy comment
void* lst = (decode_clo(env65223))[4];
//not do dummy comment
void* kont64928 = (decode_clo(env65223))[3];
//not do dummy comment
void* x = (decode_clo(env65223))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env65223))[1];

//if-clause
bool if_guard76059 = is_true(a6481965056);
if(if_guard76059)
{
void* x6482065057 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64928);
arg_buffer[2] = x6482065057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64928))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76061 = alloc_clo(lam65220_fptr, 3);

//setting env list
clo76061[1] = member_u63;
clo76061[2] = x;
clo76061[3] = kont64928;
void* f6492965058 = encode_clo(clo76061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6492965058;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65222 = encode_clo(alloc_clo(lam65222_fptr, 0));

void* lam65224_fptr() // lam65224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65225 = arg_buffer[1];
//reading env and args
void* a6481865054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65225))[6];
//not do dummy comment
void* lst = (decode_clo(env65225))[5];
//not do dummy comment
void* kont64928 = (decode_clo(env65225))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env65225))[3];
//not do dummy comment
void* x = (decode_clo(env65225))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env65225))[1];

//creating new closure instance
void** clo76063 = alloc_clo(lam65222_fptr, 5);

//setting env list
clo76063[1] = member_u63;
clo76063[2] = x;
clo76063[3] = kont64928;
clo76063[4] = lst;
clo76063[5] = cdr;
void* f6493065055 = encode_clo(clo76063);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f6493065055;
arg_buffer[3] = a6481865054;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65224 = encode_clo(alloc_clo(lam65224_fptr, 0));

void* lam65226_fptr() // lam65226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65227 = arg_buffer[1];
//reading env and args
void* a6481665051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65227))[7];
//not do dummy comment
void* lst = (decode_clo(env65227))[6];
//not do dummy comment
void* kont64928 = (decode_clo(env65227))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env65227))[4];
//not do dummy comment
void* x = (decode_clo(env65227))[3];
//not do dummy comment
void* car = (decode_clo(env65227))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env65227))[1];

//if-clause
bool if_guard76064 = is_true(a6481665051);
if(if_guard76064)
{
void* x6481765052 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64928);
arg_buffer[2] = x6481765052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64928))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76066 = alloc_clo(lam65224_fptr, 6);

//setting env list
clo76066[1] = member_u63;
clo76066[2] = x;
clo76066[3] = equal_u63;
clo76066[4] = kont64928;
clo76066[5] = lst;
clo76066[6] = cdr;
void* f6493165053 = encode_clo(clo76066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6493165053;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65226 = encode_clo(alloc_clo(lam65226_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65228 = arg_buffer[1];
//reading env and args
void* kont64928 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76068 = alloc_clo(lam65226_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo76068[1] = member_u63;
clo76068[2] = car;
clo76068[3] = x;
clo76068[4] = equal_u63;
clo76068[5] = kont64928;
clo76068[6] = lst;
clo76068[7] = cdr;
void* f6493265050 = encode_clo(clo76068);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6493265050;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam65229_fptr() // lam65229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65230 = arg_buffer[1];
//reading env and args
void* a6482565067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6482465065 = (decode_clo(env65230))[4];
//not do dummy comment
void* fun = (decode_clo(env65230))[3];
//not do dummy comment
void* kont64933 = (decode_clo(env65230))[2];
//not do dummy comment
void* foldl = (decode_clo(env65230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont64933;
arg_buffer[3] = fun;
arg_buffer[4] = a6482465065;
arg_buffer[5] = a6482565067;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65229 = encode_clo(alloc_clo(lam65229_fptr, 0));

void* lam65231_fptr() // lam65231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65232 = arg_buffer[1];
//reading env and args
void* a6482465065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65232))[5];
//not do dummy comment
void* lst = (decode_clo(env65232))[4];
//not do dummy comment
void* fun = (decode_clo(env65232))[3];
//not do dummy comment
void* kont64933 = (decode_clo(env65232))[2];
//not do dummy comment
void* foldl = (decode_clo(env65232))[1];

//creating new closure instance
void** clo76070 = alloc_clo(lam65229_fptr, 4);

//setting env list
clo76070[1] = foldl;
clo76070[2] = kont64933;
clo76070[3] = fun;
clo76070[4] = a6482465065;
void* f6493465066 = encode_clo(clo76070);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6493465066;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65231 = encode_clo(alloc_clo(lam65231_fptr, 0));

void* lam65233_fptr() // lam65233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65234 = arg_buffer[1];
//reading env and args
void* a6482365063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65234))[6];
//not do dummy comment
void* lst = (decode_clo(env65234))[5];
//not do dummy comment
void* fun = (decode_clo(env65234))[4];
//not do dummy comment
void* acc = (decode_clo(env65234))[3];
//not do dummy comment
void* kont64933 = (decode_clo(env65234))[2];
//not do dummy comment
void* foldl = (decode_clo(env65234))[1];

//creating new closure instance
void** clo76072 = alloc_clo(lam65231_fptr, 5);

//setting env list
clo76072[1] = foldl;
clo76072[2] = kont64933;
clo76072[3] = fun;
clo76072[4] = lst;
clo76072[5] = cdr;
void* f6493565064 = encode_clo(clo76072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f6493565064;
arg_buffer[3] = a6482365063;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65233 = encode_clo(alloc_clo(lam65233_fptr, 0));

void* lam65235_fptr() // lam65235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65236 = arg_buffer[1];
//reading env and args
void* a6482265061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65236))[7];
//not do dummy comment
void* lst = (decode_clo(env65236))[6];
//not do dummy comment
void* fun = (decode_clo(env65236))[5];
//not do dummy comment
void* acc = (decode_clo(env65236))[4];
//not do dummy comment
void* kont64933 = (decode_clo(env65236))[3];
//not do dummy comment
void* car = (decode_clo(env65236))[2];
//not do dummy comment
void* foldl = (decode_clo(env65236))[1];

//if-clause
bool if_guard76073 = is_true(a6482265061);
if(if_guard76073)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64933);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64933))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76075 = alloc_clo(lam65233_fptr, 6);

//setting env list
clo76075[1] = foldl;
clo76075[2] = kont64933;
clo76075[3] = acc;
clo76075[4] = fun;
clo76075[5] = lst;
clo76075[6] = cdr;
void* f6493665062 = encode_clo(clo76075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6493665062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65235 = encode_clo(alloc_clo(lam65235_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65237 = arg_buffer[1];
//reading env and args
void* kont64933 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo76077 = alloc_clo(lam65235_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo76077[1] = foldl;
clo76077[2] = car;
clo76077[3] = kont64933;
clo76077[4] = acc;
clo76077[5] = fun;
clo76077[6] = lst;
clo76077[7] = cdr;
void* f6493765060 = encode_clo(clo76077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6493765060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam65238_fptr() // lam65238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65239 = arg_buffer[1];
//reading env and args
void* a6482965075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64938 = (decode_clo(env65239))[3];
//not do dummy comment
void* a6482765071 = (decode_clo(env65239))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env65239))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont64938;
arg_buffer[3] = a6482765071;
arg_buffer[4] = a6482965075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65238 = encode_clo(alloc_clo(lam65238_fptr, 0));

void* lam65240_fptr() // lam65240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65241 = arg_buffer[1];
//reading env and args
void* a6482865073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64938 = (decode_clo(env65241))[5];
//not do dummy comment
void* a6482765071 = (decode_clo(env65241))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env65241))[3];
//not do dummy comment
void* lst2 = (decode_clo(env65241))[2];
//not do dummy comment
void* cons = (decode_clo(env65241))[1];

//creating new closure instance
void** clo76079 = alloc_clo(lam65238_fptr, 3);

//setting env list
clo76079[1] = reverse_u45helper;
clo76079[2] = a6482765071;
clo76079[3] = kont64938;
void* f6493965074 = encode_clo(clo76079);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6493965074;
arg_buffer[3] = a6482865073;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65240 = encode_clo(alloc_clo(lam65240_fptr, 0));

void* lam65242_fptr() // lam65242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65243 = arg_buffer[1];
//reading env and args
void* a6482765071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64938 = (decode_clo(env65243))[6];
//not do dummy comment
void* lst = (decode_clo(env65243))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env65243))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65243))[3];
//not do dummy comment
void* car = (decode_clo(env65243))[2];
//not do dummy comment
void* cons = (decode_clo(env65243))[1];

//creating new closure instance
void** clo76081 = alloc_clo(lam65240_fptr, 5);

//setting env list
clo76081[1] = cons;
clo76081[2] = lst2;
clo76081[3] = reverse_u45helper;
clo76081[4] = a6482765071;
clo76081[5] = kont64938;
void* f6494065072 = encode_clo(clo76081);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6494065072;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65242 = encode_clo(alloc_clo(lam65242_fptr, 0));

void* lam65244_fptr() // lam65244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65245 = arg_buffer[1];
//reading env and args
void* a6482665069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65245))[7];
//not do dummy comment
void* kont64938 = (decode_clo(env65245))[6];
//not do dummy comment
void* lst = (decode_clo(env65245))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env65245))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65245))[3];
//not do dummy comment
void* car = (decode_clo(env65245))[2];
//not do dummy comment
void* cons = (decode_clo(env65245))[1];

//if-clause
bool if_guard76082 = is_true(a6482665069);
if(if_guard76082)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64938);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64938))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76084 = alloc_clo(lam65242_fptr, 6);

//setting env list
clo76084[1] = cons;
clo76084[2] = car;
clo76084[3] = lst2;
clo76084[4] = reverse_u45helper;
clo76084[5] = lst;
clo76084[6] = kont64938;
void* f6494165070 = encode_clo(clo76084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6494165070;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65244 = encode_clo(alloc_clo(lam65244_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65246 = arg_buffer[1];
//reading env and args
void* kont64938 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76086 = alloc_clo(lam65244_fptr, 7);

//setting env list
clo76086[1] = cons;
clo76086[2] = car;
clo76086[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo76086[4] = reverse_u45helper;
clo76086[5] = lst;
clo76086[6] = kont64938;
clo76086[7] = cdr;
void* f6494265068 = encode_clo(clo76086);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6494265068;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam65247_fptr() // lam65247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65248 = arg_buffer[1];
//reading env and args
void* a6483065077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env65248))[3];
//not do dummy comment
void* kont64943 = (decode_clo(env65248))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env65248))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont64943;
arg_buffer[3] = lst;
arg_buffer[4] = a6483065077;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65247 = encode_clo(alloc_clo(lam65247_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65249 = arg_buffer[1];
//reading env and args
void* kont64943 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo76088 = alloc_clo(lam65247_fptr, 3);

//setting env list
clo76088[1] = reverse_u45helper;
clo76088[2] = kont64943;
clo76088[3] = lst;
void* f6494465076 = encode_clo(clo76088);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6494465076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam65250_fptr() // lam65250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65251 = arg_buffer[1];
//reading env and args
void* x6483365082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64945 = (decode_clo(env65251))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64945);
arg_buffer[2] = x6483365082;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64945))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65250 = encode_clo(alloc_clo(lam65250_fptr, 0));

void* lam65252_fptr() // lam65252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65253 = arg_buffer[1];
//reading env and args
void* a6483865091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6483465084 = (decode_clo(env65253))[4];
//not do dummy comment
void* a6483665087 = (decode_clo(env65253))[3];
//not do dummy comment
void* kont64945 = (decode_clo(env65253))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env65253))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont64945;
arg_buffer[3] = a6483465084;
arg_buffer[4] = a6483665087;
arg_buffer[5] = a6483865091;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65252 = encode_clo(alloc_clo(lam65252_fptr, 0));

void* lam65254_fptr() // lam65254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65255 = arg_buffer[1];
//reading env and args
void* a6483765089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6483465084 = (decode_clo(env65255))[6];
//not do dummy comment
void* a6483665087 = (decode_clo(env65255))[5];
//not do dummy comment
void* kont64945 = (decode_clo(env65255))[4];
//not do dummy comment
void* cons = (decode_clo(env65255))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env65255))[2];
//not do dummy comment
void* lst2 = (decode_clo(env65255))[1];

//creating new closure instance
void** clo76090 = alloc_clo(lam65252_fptr, 4);

//setting env list
clo76090[1] = take_u45helper;
clo76090[2] = kont64945;
clo76090[3] = a6483665087;
clo76090[4] = a6483465084;
void* f6494765090 = encode_clo(clo76090);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6494765090;
arg_buffer[3] = a6483765089;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65254 = encode_clo(alloc_clo(lam65254_fptr, 0));

void* lam65256_fptr() // lam65256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65257 = arg_buffer[1];
//reading env and args
void* a6483665087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6483465084 = (decode_clo(env65257))[7];
//not do dummy comment
void* lst = (decode_clo(env65257))[6];
//not do dummy comment
void* kont64945 = (decode_clo(env65257))[5];
//not do dummy comment
void* car = (decode_clo(env65257))[4];
//not do dummy comment
void* cons = (decode_clo(env65257))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env65257))[2];
//not do dummy comment
void* lst2 = (decode_clo(env65257))[1];

//creating new closure instance
void** clo76092 = alloc_clo(lam65254_fptr, 6);

//setting env list
clo76092[1] = lst2;
clo76092[2] = take_u45helper;
clo76092[3] = cons;
clo76092[4] = kont64945;
clo76092[5] = a6483665087;
clo76092[6] = a6483465084;
void* f6494865088 = encode_clo(clo76092);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6494865088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65256 = encode_clo(alloc_clo(lam65256_fptr, 0));

void* lam65259_fptr() // lam65259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65260 = arg_buffer[1];
//reading env and args
void* a6483465084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env65260))[8];
//not do dummy comment
void* kont64945 = (decode_clo(env65260))[7];
//not do dummy comment
void* cons = (decode_clo(env65260))[6];
//not do dummy comment
void* _u45 = (decode_clo(env65260))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env65260))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65260))[3];
//not do dummy comment
void* n = (decode_clo(env65260))[2];
//not do dummy comment
void* car = (decode_clo(env65260))[1];
mpz_t* mpzvar76093 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76093, "1", 10);
void* a6483565085 = encode_mpz(mpzvar76093);

//creating new closure instance
void** clo76095 = alloc_clo(lam65256_fptr, 7);

//setting env list
clo76095[1] = lst2;
clo76095[2] = take_u45helper;
clo76095[3] = cons;
clo76095[4] = car;
clo76095[5] = kont64945;
clo76095[6] = lst;
clo76095[7] = a6483465084;
void* f6494965086 = encode_clo(clo76095);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6494965086;
arg_buffer[3] = n;
arg_buffer[4] = a6483565085;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65259 = encode_clo(alloc_clo(lam65259_fptr, 0));

void* lam65261_fptr() // lam65261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65262 = arg_buffer[1];
//reading env and args
void* a6483265080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65262))[10];
//not do dummy comment
void* lst = (decode_clo(env65262))[9];
//not do dummy comment
void* reverse = (decode_clo(env65262))[8];
//not do dummy comment
void* kont64945 = (decode_clo(env65262))[7];
//not do dummy comment
void* cons = (decode_clo(env65262))[6];
//not do dummy comment
void* _u45 = (decode_clo(env65262))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env65262))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65262))[3];
//not do dummy comment
void* n = (decode_clo(env65262))[2];
//not do dummy comment
void* car = (decode_clo(env65262))[1];

//if-clause
bool if_guard76096 = is_true(a6483265080);
if(if_guard76096)
{

//creating new closure instance
void** clo76098 = alloc_clo(lam65250_fptr, 1);

//setting env list
clo76098[1] = kont64945;
void* f6494665081 = encode_clo(clo76098);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f6494665081;
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
void** clo76100 = alloc_clo(lam65259_fptr, 8);

//setting env list
clo76100[1] = car;
clo76100[2] = n;
clo76100[3] = lst2;
clo76100[4] = take_u45helper;
clo76100[5] = _u45;
clo76100[6] = cons;
clo76100[7] = kont64945;
clo76100[8] = lst;
void* f6495065083 = encode_clo(clo76100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6495065083;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65261 = encode_clo(alloc_clo(lam65261_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65264 = arg_buffer[1];
//reading env and args
void* kont64945 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar76101 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76101, "0", 10);
void* a6483165078 = encode_mpz(mpzvar76101);

//creating new closure instance
void** clo76103 = alloc_clo(lam65261_fptr, 10);

//setting env list
clo76103[1] = car;
clo76103[2] = n;
clo76103[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo76103[4] = take_u45helper;
clo76103[5] = _u45;
clo76103[6] = cons;
clo76103[7] = kont64945;
clo76103[8] = reverse;
clo76103[9] = lst;
clo76103[10] = cdr;
void* f6495165079 = encode_clo(clo76103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6495165079;
arg_buffer[3] = n;
arg_buffer[4] = a6483165078;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam65265_fptr() // lam65265 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65266 = arg_buffer[1];
//reading env and args
void* a6483965093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env65266))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env65266))[3];
//not do dummy comment
void* n = (decode_clo(env65266))[2];
//not do dummy comment
void* kont64952 = (decode_clo(env65266))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont64952;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a6483965093;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65265 = encode_clo(alloc_clo(lam65265_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65267 = arg_buffer[1];
//reading env and args
void* kont64952 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76105 = alloc_clo(lam65265_fptr, 4);

//setting env list
clo76105[1] = kont64952;
clo76105[2] = n;
clo76105[3] = take_u45helper;
clo76105[4] = lst;
void* f6495365092 = encode_clo(clo76105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6495365092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam65269_fptr() // lam65269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65270 = arg_buffer[1];
//reading env and args
void* a6484465101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6484265097 = (decode_clo(env65270))[3];
//not do dummy comment
void* kont64954 = (decode_clo(env65270))[2];
//not do dummy comment
void* _u43 = (decode_clo(env65270))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont64954;
arg_buffer[3] = a6484265097;
arg_buffer[4] = a6484465101;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65269 = encode_clo(alloc_clo(lam65269_fptr, 0));

void* lam65271_fptr() // lam65271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65272 = arg_buffer[1];
//reading env and args
void* a6484365099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6484265097 = (decode_clo(env65272))[4];
//not do dummy comment
void* kont64954 = (decode_clo(env65272))[3];
//not do dummy comment
void* length = (decode_clo(env65272))[2];
//not do dummy comment
void* _u43 = (decode_clo(env65272))[1];

//creating new closure instance
void** clo76107 = alloc_clo(lam65269_fptr, 3);

//setting env list
clo76107[1] = _u43;
clo76107[2] = kont64954;
clo76107[3] = a6484265097;
void* f6495565100 = encode_clo(clo76107);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f6495565100;
arg_buffer[3] = a6484365099;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65271 = encode_clo(alloc_clo(lam65271_fptr, 0));

void* lam65274_fptr() // lam65274 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65275 = arg_buffer[1];
//reading env and args
void* a6484065095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65275))[5];
//not do dummy comment
void* kont64954 = (decode_clo(env65275))[4];
//not do dummy comment
void* lst = (decode_clo(env65275))[3];
//not do dummy comment
void* length = (decode_clo(env65275))[2];
//not do dummy comment
void* _u43 = (decode_clo(env65275))[1];

//if-clause
bool if_guard76108 = is_true(a6484065095);
if(if_guard76108)
{
mpz_t* mpzvar76109 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76109, "0", 10);
void* x6484165096 = encode_mpz(mpzvar76109);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64954);
arg_buffer[2] = x6484165096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar76110 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76110, "1", 10);
void* a6484265097 = encode_mpz(mpzvar76110);

//creating new closure instance
void** clo76112 = alloc_clo(lam65271_fptr, 4);

//setting env list
clo76112[1] = _u43;
clo76112[2] = length;
clo76112[3] = kont64954;
clo76112[4] = a6484265097;
void* f6495665098 = encode_clo(clo76112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6495665098;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65274 = encode_clo(alloc_clo(lam65274_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65276 = arg_buffer[1];
//reading env and args
void* kont64954 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo76114 = alloc_clo(lam65274_fptr, 5);

//setting env list
clo76114[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo76114[2] = length;
clo76114[3] = lst;
clo76114[4] = kont64954;
clo76114[5] = cdr;
void* f6495765094 = encode_clo(clo76114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6495765094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam65277_fptr() // lam65277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65278 = arg_buffer[1];
//reading env and args
void* x6484665105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64958 = (decode_clo(env65278))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64958);
arg_buffer[2] = x6484665105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64958))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65277 = encode_clo(alloc_clo(lam65277_fptr, 0));

void* lam65279_fptr() // lam65279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65280 = arg_buffer[1];
//reading env and args
void* a6485065113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64958 = (decode_clo(env65280))[3];
//not do dummy comment
void* a6484865109 = (decode_clo(env65280))[2];
//not do dummy comment
void* cons = (decode_clo(env65280))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont64958;
arg_buffer[3] = a6484865109;
arg_buffer[4] = a6485065113;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65279 = encode_clo(alloc_clo(lam65279_fptr, 0));

void* lam65281_fptr() // lam65281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65282 = arg_buffer[1];
//reading env and args
void* a6484965111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env65282))[5];
//not do dummy comment
void* a6484865109 = (decode_clo(env65282))[4];
//not do dummy comment
void* cons = (decode_clo(env65282))[3];
//not do dummy comment
void* map = (decode_clo(env65282))[2];
//not do dummy comment
void* kont64958 = (decode_clo(env65282))[1];

//creating new closure instance
void** clo76116 = alloc_clo(lam65279_fptr, 3);

//setting env list
clo76116[1] = cons;
clo76116[2] = a6484865109;
clo76116[3] = kont64958;
void* f6496065112 = encode_clo(clo76116);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f6496065112;
arg_buffer[3] = proc;
arg_buffer[4] = a6484965111;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65281 = encode_clo(alloc_clo(lam65281_fptr, 0));

void* lam65283_fptr() // lam65283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65284 = arg_buffer[1];
//reading env and args
void* a6484865109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65284))[6];
//not do dummy comment
void* lst = (decode_clo(env65284))[5];
//not do dummy comment
void* proc = (decode_clo(env65284))[4];
//not do dummy comment
void* cons = (decode_clo(env65284))[3];
//not do dummy comment
void* map = (decode_clo(env65284))[2];
//not do dummy comment
void* kont64958 = (decode_clo(env65284))[1];

//creating new closure instance
void** clo76118 = alloc_clo(lam65281_fptr, 5);

//setting env list
clo76118[1] = kont64958;
clo76118[2] = map;
clo76118[3] = cons;
clo76118[4] = a6484865109;
clo76118[5] = proc;
void* f6496165110 = encode_clo(clo76118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6496165110;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65283 = encode_clo(alloc_clo(lam65283_fptr, 0));

void* lam65285_fptr() // lam65285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65286 = arg_buffer[1];
//reading env and args
void* a6484765107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65286))[6];
//not do dummy comment
void* lst = (decode_clo(env65286))[5];
//not do dummy comment
void* proc = (decode_clo(env65286))[4];
//not do dummy comment
void* cons = (decode_clo(env65286))[3];
//not do dummy comment
void* map = (decode_clo(env65286))[2];
//not do dummy comment
void* kont64958 = (decode_clo(env65286))[1];

//creating new closure instance
void** clo76120 = alloc_clo(lam65283_fptr, 6);

//setting env list
clo76120[1] = kont64958;
clo76120[2] = map;
clo76120[3] = cons;
clo76120[4] = proc;
clo76120[5] = lst;
clo76120[6] = cdr;
void* f6496265108 = encode_clo(clo76120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f6496265108;
arg_buffer[3] = a6484765107;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65285 = encode_clo(alloc_clo(lam65285_fptr, 0));

void* lam65287_fptr() // lam65287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65288 = arg_buffer[1];
//reading env and args
void* a6484565103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env65288))[8];
//not do dummy comment
void* proc = (decode_clo(env65288))[7];
//not do dummy comment
void* car = (decode_clo(env65288))[6];
//not do dummy comment
void* cons = (decode_clo(env65288))[5];
//not do dummy comment
void* list = (decode_clo(env65288))[4];
//not do dummy comment
void* cdr = (decode_clo(env65288))[3];
//not do dummy comment
void* map = (decode_clo(env65288))[2];
//not do dummy comment
void* kont64958 = (decode_clo(env65288))[1];

//if-clause
bool if_guard76121 = is_true(a6484565103);
if(if_guard76121)
{

//creating new closure instance
void** clo76123 = alloc_clo(lam65277_fptr, 1);

//setting env list
clo76123[1] = kont64958;
void* f6495965104 = encode_clo(clo76123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6495965104;
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
void** clo76125 = alloc_clo(lam65285_fptr, 6);

//setting env list
clo76125[1] = kont64958;
clo76125[2] = map;
clo76125[3] = cons;
clo76125[4] = proc;
clo76125[5] = lst;
clo76125[6] = cdr;
void* f6496365106 = encode_clo(clo76125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6496365106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65287 = encode_clo(alloc_clo(lam65287_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65289 = arg_buffer[1];
//reading env and args
void* kont64958 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76127 = alloc_clo(lam65287_fptr, 8);

//setting env list
clo76127[1] = kont64958;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo76127[2] = map;
clo76127[3] = cdr;
clo76127[4] = list;
clo76127[5] = cons;
clo76127[6] = car;
clo76127[7] = proc;
clo76127[8] = lst;
void* f6496465102 = encode_clo(clo76127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6496465102;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam65290_fptr() // lam65290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65291 = arg_buffer[1];
//reading env and args
void* x6485265117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64965 = (decode_clo(env65291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64965);
arg_buffer[2] = x6485265117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65290 = encode_clo(alloc_clo(lam65290_fptr, 0));

void* lam65292_fptr() // lam65292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65293 = arg_buffer[1];
//reading env and args
void* a6485765127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6485565123 = (decode_clo(env65293))[3];
//not do dummy comment
void* kont64965 = (decode_clo(env65293))[2];
//not do dummy comment
void* cons = (decode_clo(env65293))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont64965;
arg_buffer[3] = a6485565123;
arg_buffer[4] = a6485765127;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65292 = encode_clo(alloc_clo(lam65292_fptr, 0));

void* lam65294_fptr() // lam65294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65295 = arg_buffer[1];
//reading env and args
void* a6485665125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env65295))[5];
//not do dummy comment
void* a6485565123 = (decode_clo(env65295))[4];
//not do dummy comment
void* kont64965 = (decode_clo(env65295))[3];
//not do dummy comment
void* filter = (decode_clo(env65295))[2];
//not do dummy comment
void* cons = (decode_clo(env65295))[1];

//creating new closure instance
void** clo76129 = alloc_clo(lam65292_fptr, 3);

//setting env list
clo76129[1] = cons;
clo76129[2] = kont64965;
clo76129[3] = a6485565123;
void* f6496765126 = encode_clo(clo76129);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f6496765126;
arg_buffer[3] = op;
arg_buffer[4] = a6485665125;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65294 = encode_clo(alloc_clo(lam65294_fptr, 0));

void* lam65296_fptr() // lam65296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65297 = arg_buffer[1];
//reading env and args
void* a6485565123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65297))[6];
//not do dummy comment
void* lst = (decode_clo(env65297))[5];
//not do dummy comment
void* op = (decode_clo(env65297))[4];
//not do dummy comment
void* kont64965 = (decode_clo(env65297))[3];
//not do dummy comment
void* filter = (decode_clo(env65297))[2];
//not do dummy comment
void* cons = (decode_clo(env65297))[1];

//creating new closure instance
void** clo76131 = alloc_clo(lam65294_fptr, 5);

//setting env list
clo76131[1] = cons;
clo76131[2] = filter;
clo76131[3] = kont64965;
clo76131[4] = a6485565123;
clo76131[5] = op;
void* f6496865124 = encode_clo(clo76131);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6496865124;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65296 = encode_clo(alloc_clo(lam65296_fptr, 0));

void* lam65298_fptr() // lam65298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65299 = arg_buffer[1];
//reading env and args
void* a6485865129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env65299))[3];
//not do dummy comment
void* kont64965 = (decode_clo(env65299))[2];
//not do dummy comment
void* filter = (decode_clo(env65299))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont64965;
arg_buffer[3] = op;
arg_buffer[4] = a6485865129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65298 = encode_clo(alloc_clo(lam65298_fptr, 0));

void* lam65300_fptr() // lam65300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65301 = arg_buffer[1];
//reading env and args
void* a6485465121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65301))[7];
//not do dummy comment
void* lst = (decode_clo(env65301))[6];
//not do dummy comment
void* op = (decode_clo(env65301))[5];
//not do dummy comment
void* kont64965 = (decode_clo(env65301))[4];
//not do dummy comment
void* cons = (decode_clo(env65301))[3];
//not do dummy comment
void* filter = (decode_clo(env65301))[2];
//not do dummy comment
void* car = (decode_clo(env65301))[1];

//if-clause
bool if_guard76132 = is_true(a6485465121);
if(if_guard76132)
{

//creating new closure instance
void** clo76134 = alloc_clo(lam65296_fptr, 6);

//setting env list
clo76134[1] = cons;
clo76134[2] = filter;
clo76134[3] = kont64965;
clo76134[4] = op;
clo76134[5] = lst;
clo76134[6] = cdr;
void* f6496965122 = encode_clo(clo76134);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6496965122;
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
void** clo76136 = alloc_clo(lam65298_fptr, 3);

//setting env list
clo76136[1] = filter;
clo76136[2] = kont64965;
clo76136[3] = op;
void* f6497065128 = encode_clo(clo76136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6497065128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65300 = encode_clo(alloc_clo(lam65300_fptr, 0));

void* lam65302_fptr() // lam65302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65303 = arg_buffer[1];
//reading env and args
void* a6485365119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65303))[7];
//not do dummy comment
void* lst = (decode_clo(env65303))[6];
//not do dummy comment
void* op = (decode_clo(env65303))[5];
//not do dummy comment
void* kont64965 = (decode_clo(env65303))[4];
//not do dummy comment
void* cons = (decode_clo(env65303))[3];
//not do dummy comment
void* filter = (decode_clo(env65303))[2];
//not do dummy comment
void* car = (decode_clo(env65303))[1];

//creating new closure instance
void** clo76138 = alloc_clo(lam65300_fptr, 7);

//setting env list
clo76138[1] = car;
clo76138[2] = filter;
clo76138[3] = cons;
clo76138[4] = kont64965;
clo76138[5] = op;
clo76138[6] = lst;
clo76138[7] = cdr;
void* f6497165120 = encode_clo(clo76138);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f6497165120;
arg_buffer[3] = a6485365119;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65302 = encode_clo(alloc_clo(lam65302_fptr, 0));

void* lam65304_fptr() // lam65304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65305 = arg_buffer[1];
//reading env and args
void* a6485165115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env65305))[8];
//not do dummy comment
void* op = (decode_clo(env65305))[7];
//not do dummy comment
void* kont64965 = (decode_clo(env65305))[6];
//not do dummy comment
void* cons = (decode_clo(env65305))[5];
//not do dummy comment
void* list = (decode_clo(env65305))[4];
//not do dummy comment
void* cdr = (decode_clo(env65305))[3];
//not do dummy comment
void* filter = (decode_clo(env65305))[2];
//not do dummy comment
void* car = (decode_clo(env65305))[1];

//if-clause
bool if_guard76139 = is_true(a6485165115);
if(if_guard76139)
{

//creating new closure instance
void** clo76141 = alloc_clo(lam65290_fptr, 1);

//setting env list
clo76141[1] = kont64965;
void* f6496665116 = encode_clo(clo76141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6496665116;
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
void** clo76143 = alloc_clo(lam65302_fptr, 7);

//setting env list
clo76143[1] = car;
clo76143[2] = filter;
clo76143[3] = cons;
clo76143[4] = kont64965;
clo76143[5] = op;
clo76143[6] = lst;
clo76143[7] = cdr;
void* f6497265118 = encode_clo(clo76143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6497265118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65304 = encode_clo(alloc_clo(lam65304_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65306 = arg_buffer[1];
//reading env and args
void* kont64965 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76145 = alloc_clo(lam65304_fptr, 8);

//setting env list
clo76145[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo76145[2] = filter;
clo76145[3] = cdr;
clo76145[4] = list;
clo76145[5] = cons;
clo76145[6] = kont64965;
clo76145[7] = op;
clo76145[8] = lst;
void* f6497365114 = encode_clo(clo76145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6497365114;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam65307_fptr() // lam65307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65308 = arg_buffer[1];
//reading env and args
void* a6486365137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env65308))[3];
//not do dummy comment
void* a6486165134 = (decode_clo(env65308))[2];
//not do dummy comment
void* kont64974 = (decode_clo(env65308))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont64974;
arg_buffer[3] = a6486165134;
arg_buffer[4] = a6486365137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65307 = encode_clo(alloc_clo(lam65307_fptr, 0));

void* lam65310_fptr() // lam65310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65311 = arg_buffer[1];
//reading env and args
void* a6486165134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env65311))[4];
//not do dummy comment
void* kont64974 = (decode_clo(env65311))[3];
//not do dummy comment
void* n = (decode_clo(env65311))[2];
//not do dummy comment
void* _u45 = (decode_clo(env65311))[1];
mpz_t* mpzvar76146 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76146, "1", 10);
void* a6486265135 = encode_mpz(mpzvar76146);

//creating new closure instance
void** clo76148 = alloc_clo(lam65307_fptr, 3);

//setting env list
clo76148[1] = kont64974;
clo76148[2] = a6486165134;
clo76148[3] = drop;
void* f6497565136 = encode_clo(clo76148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6497565136;
arg_buffer[3] = n;
arg_buffer[4] = a6486265135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65310 = encode_clo(alloc_clo(lam65310_fptr, 0));

void* lam65312_fptr() // lam65312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65313 = arg_buffer[1];
//reading env and args
void* a6486065132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65313))[6];
//not do dummy comment
void* kont64974 = (decode_clo(env65313))[5];
//not do dummy comment
void* n = (decode_clo(env65313))[4];
//not do dummy comment
void* _u45 = (decode_clo(env65313))[3];
//not do dummy comment
void* lst = (decode_clo(env65313))[2];
//not do dummy comment
void* drop = (decode_clo(env65313))[1];

//if-clause
bool if_guard76149 = is_true(a6486065132);
if(if_guard76149)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64974);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64974))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76151 = alloc_clo(lam65310_fptr, 4);

//setting env list
clo76151[1] = _u45;
clo76151[2] = n;
clo76151[3] = kont64974;
clo76151[4] = drop;
void* f6497665133 = encode_clo(clo76151);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6497665133;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65312 = encode_clo(alloc_clo(lam65312_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65315 = arg_buffer[1];
//reading env and args
void* kont64974 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar76152 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76152, "0", 10);
void* a6485965130 = encode_mpz(mpzvar76152);

//creating new closure instance
void** clo76154 = alloc_clo(lam65312_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo76154[1] = drop;
clo76154[2] = lst;
clo76154[3] = _u45;
clo76154[4] = n;
clo76154[5] = kont64974;
clo76154[6] = cdr;
void* f6497765131 = encode_clo(clo76154);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6497765131;
arg_buffer[3] = n;
arg_buffer[4] = a6485965130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam65316_fptr() // lam65316 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65317 = arg_buffer[1];
//reading env and args
void* a6486765145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont64978 = (decode_clo(env65317))[3];
//not do dummy comment
void* proc = (decode_clo(env65317))[2];
//not do dummy comment
void* a6486565141 = (decode_clo(env65317))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont64978;
arg_buffer[3] = a6486565141;
arg_buffer[4] = a6486765145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65316 = encode_clo(alloc_clo(lam65316_fptr, 0));

void* lam65318_fptr() // lam65318 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65319 = arg_buffer[1];
//reading env and args
void* a6486665143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env65319))[5];
//not do dummy comment
void* kont64978 = (decode_clo(env65319))[4];
//not do dummy comment
void* a6486565141 = (decode_clo(env65319))[3];
//not do dummy comment
void* proc = (decode_clo(env65319))[2];
//not do dummy comment
void* acc = (decode_clo(env65319))[1];

//creating new closure instance
void** clo76156 = alloc_clo(lam65316_fptr, 3);

//setting env list
clo76156[1] = a6486565141;
clo76156[2] = proc;
clo76156[3] = kont64978;
void* f6497965144 = encode_clo(clo76156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f6497965144;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a6486665143;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65318 = encode_clo(alloc_clo(lam65318_fptr, 0));

void* lam65320_fptr() // lam65320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65321 = arg_buffer[1];
//reading env and args
void* a6486565141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65321))[6];
//not do dummy comment
void* kont64978 = (decode_clo(env65321))[5];
//not do dummy comment
void* foldr = (decode_clo(env65321))[4];
//not do dummy comment
void* lst = (decode_clo(env65321))[3];
//not do dummy comment
void* proc = (decode_clo(env65321))[2];
//not do dummy comment
void* acc = (decode_clo(env65321))[1];

//creating new closure instance
void** clo76158 = alloc_clo(lam65318_fptr, 5);

//setting env list
clo76158[1] = acc;
clo76158[2] = proc;
clo76158[3] = a6486565141;
clo76158[4] = kont64978;
clo76158[5] = foldr;
void* f6498065142 = encode_clo(clo76158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6498065142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65320 = encode_clo(alloc_clo(lam65320_fptr, 0));

void* lam65322_fptr() // lam65322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65323 = arg_buffer[1];
//reading env and args
void* a6486465139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65323))[7];
//not do dummy comment
void* kont64978 = (decode_clo(env65323))[6];
//not do dummy comment
void* car = (decode_clo(env65323))[5];
//not do dummy comment
void* foldr = (decode_clo(env65323))[4];
//not do dummy comment
void* lst = (decode_clo(env65323))[3];
//not do dummy comment
void* proc = (decode_clo(env65323))[2];
//not do dummy comment
void* acc = (decode_clo(env65323))[1];

//if-clause
bool if_guard76159 = is_true(a6486465139);
if(if_guard76159)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64978);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64978))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76161 = alloc_clo(lam65320_fptr, 6);

//setting env list
clo76161[1] = acc;
clo76161[2] = proc;
clo76161[3] = lst;
clo76161[4] = foldr;
clo76161[5] = kont64978;
clo76161[6] = cdr;
void* f6498165140 = encode_clo(clo76161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6498165140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65322 = encode_clo(alloc_clo(lam65322_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65324 = arg_buffer[1];
//reading env and args
void* kont64978 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo76163 = alloc_clo(lam65322_fptr, 7);

//setting env list
clo76163[1] = acc;
clo76163[2] = proc;
clo76163[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo76163[4] = foldr;
clo76163[5] = car;
clo76163[6] = kont64978;
clo76163[7] = cdr;
void* f6498265138 = encode_clo(clo76163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6498265138;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam65325_fptr() // lam65325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65326 = arg_buffer[1];
//reading env and args
void* a6487165153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6486965149 = (decode_clo(env65326))[3];
//not do dummy comment
void* cons = (decode_clo(env65326))[2];
//not do dummy comment
void* kont64983 = (decode_clo(env65326))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont64983;
arg_buffer[3] = a6486965149;
arg_buffer[4] = a6487165153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65325 = encode_clo(alloc_clo(lam65325_fptr, 0));

void* lam65327_fptr() // lam65327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65328 = arg_buffer[1];
//reading env and args
void* a6487065151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6486965149 = (decode_clo(env65328))[5];
//not do dummy comment
void* append = (decode_clo(env65328))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65328))[3];
//not do dummy comment
void* cons = (decode_clo(env65328))[2];
//not do dummy comment
void* kont64983 = (decode_clo(env65328))[1];

//creating new closure instance
void** clo76165 = alloc_clo(lam65325_fptr, 3);

//setting env list
clo76165[1] = kont64983;
clo76165[2] = cons;
clo76165[3] = a6486965149;
void* f6498465152 = encode_clo(clo76165);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f6498465152;
arg_buffer[3] = a6487065151;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65327 = encode_clo(alloc_clo(lam65327_fptr, 0));

void* lam65329_fptr() // lam65329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65330 = arg_buffer[1];
//reading env and args
void* a6486965149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65330))[6];
//not do dummy comment
void* append = (decode_clo(env65330))[5];
//not do dummy comment
void* lst2 = (decode_clo(env65330))[4];
//not do dummy comment
void* lst1 = (decode_clo(env65330))[3];
//not do dummy comment
void* cons = (decode_clo(env65330))[2];
//not do dummy comment
void* kont64983 = (decode_clo(env65330))[1];

//creating new closure instance
void** clo76167 = alloc_clo(lam65327_fptr, 5);

//setting env list
clo76167[1] = kont64983;
clo76167[2] = cons;
clo76167[3] = lst2;
clo76167[4] = append;
clo76167[5] = a6486965149;
void* f6498565150 = encode_clo(clo76167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6498565150;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65329 = encode_clo(alloc_clo(lam65329_fptr, 0));

void* lam65331_fptr() // lam65331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65332 = arg_buffer[1];
//reading env and args
void* a6486865147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65332))[7];
//not do dummy comment
void* append = (decode_clo(env65332))[6];
//not do dummy comment
void* lst2 = (decode_clo(env65332))[5];
//not do dummy comment
void* lst1 = (decode_clo(env65332))[4];
//not do dummy comment
void* car = (decode_clo(env65332))[3];
//not do dummy comment
void* cons = (decode_clo(env65332))[2];
//not do dummy comment
void* kont64983 = (decode_clo(env65332))[1];

//if-clause
bool if_guard76168 = is_true(a6486865147);
if(if_guard76168)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64983);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64983))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76170 = alloc_clo(lam65329_fptr, 6);

//setting env list
clo76170[1] = kont64983;
clo76170[2] = cons;
clo76170[3] = lst1;
clo76170[4] = lst2;
clo76170[5] = append;
clo76170[6] = cdr;
void* f6498665148 = encode_clo(clo76170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6498665148;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65331 = encode_clo(alloc_clo(lam65331_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65333 = arg_buffer[1];
//reading env and args
void* kont64983 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76172 = alloc_clo(lam65331_fptr, 7);

//setting env list
clo76172[1] = kont64983;
clo76172[2] = cons;
clo76172[3] = car;
clo76172[4] = lst1;
clo76172[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo76172[6] = append;
clo76172[7] = cdr;
void* f6498765146 = encode_clo(clo76172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6498765146;
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
void* _65334 = arg_buffer[1];
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

void* kont6498865154 = prim_car(lst);
void* lst65155 = prim_cdr(lst);
void* x6487265156 = apply_prim_hash(lst65155);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6498865154);
arg_buffer[2] = x6487265156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6498865154))[0]);
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
void* _65335 = arg_buffer[1];
//reading env and args
void* kont64990 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6487365157 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64990);
arg_buffer[2] = x6487365157;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64990))[0]);
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
void* _65336 = arg_buffer[1];
//reading env and args
void* kont64991 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x6487465158 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64991);
arg_buffer[2] = x6487465158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64991))[0]);
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
void* _65337 = arg_buffer[1];
//reading env and args
void* kont64992 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6487565159 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64992);
arg_buffer[2] = x6487565159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64992))[0]);
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
void* _65338 = arg_buffer[1];
//reading env and args
void* kont64993 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x6487665160 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64993);
arg_buffer[2] = x6487665160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64993))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam65339_fptr() // lam65339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65340 = arg_buffer[1];
//reading env and args
void* a6488465176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6487965166 = (decode_clo(env65340))[3];
//not do dummy comment
void* kont64994 = (decode_clo(env65340))[2];
//not do dummy comment
void* cons = (decode_clo(env65340))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont64994;
arg_buffer[3] = a6487965166;
arg_buffer[4] = a6488465176;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65339 = encode_clo(alloc_clo(lam65339_fptr, 0));

void* lam65341_fptr() // lam65341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65342 = arg_buffer[1];
//reading env and args
void* a6488365174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6487965166 = (decode_clo(env65342))[4];
//not do dummy comment
void* a6488065168 = (decode_clo(env65342))[3];
//not do dummy comment
void* kont64994 = (decode_clo(env65342))[2];
//not do dummy comment
void* cons = (decode_clo(env65342))[1];

//creating new closure instance
void** clo76174 = alloc_clo(lam65339_fptr, 3);

//setting env list
clo76174[1] = cons;
clo76174[2] = kont64994;
clo76174[3] = a6487965166;
void* f6499565175 = encode_clo(clo76174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6499565175;
arg_buffer[3] = a6488065168;
arg_buffer[4] = a6488365174;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65341 = encode_clo(alloc_clo(lam65341_fptr, 0));

void* lam65343_fptr() // lam65343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65344 = arg_buffer[1];
//reading env and args
void* a6488265172 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6487965166 = (decode_clo(env65344))[6];
//not do dummy comment
void* a6488065168 = (decode_clo(env65344))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65344))[4];
//not do dummy comment
void* cons = (decode_clo(env65344))[3];
//not do dummy comment
void* a6488165170 = (decode_clo(env65344))[2];
//not do dummy comment
void* kont64994 = (decode_clo(env65344))[1];

//creating new closure instance
void** clo76176 = alloc_clo(lam65341_fptr, 4);

//setting env list
clo76176[1] = cons;
clo76176[2] = kont64994;
clo76176[3] = a6488065168;
clo76176[4] = a6487965166;
void* f6499665173 = encode_clo(clo76176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(interleave_u45direct);
arg_buffer[2] = f6499665173;
arg_buffer[3] = a6488165170;
arg_buffer[4] = a6488265172;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(interleave_u45direct))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65343 = encode_clo(alloc_clo(lam65343_fptr, 0));

void* lam65345_fptr() // lam65345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65346 = arg_buffer[1];
//reading env and args
void* a6488165170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65346))[7];
//not do dummy comment
void* a6487965166 = (decode_clo(env65346))[6];
//not do dummy comment
void* a6488065168 = (decode_clo(env65346))[5];
//not do dummy comment
void* kont64994 = (decode_clo(env65346))[4];
//not do dummy comment
void* cons = (decode_clo(env65346))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65346))[2];
//not do dummy comment
void* lst2 = (decode_clo(env65346))[1];

//creating new closure instance
void** clo76178 = alloc_clo(lam65343_fptr, 6);

//setting env list
clo76178[1] = kont64994;
clo76178[2] = a6488165170;
clo76178[3] = cons;
clo76178[4] = interleave_u45direct;
clo76178[5] = a6488065168;
clo76178[6] = a6487965166;
void* f6499765171 = encode_clo(clo76178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6499765171;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65345 = encode_clo(alloc_clo(lam65345_fptr, 0));

void* lam65347_fptr() // lam65347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65348 = arg_buffer[1];
//reading env and args
void* a6488065168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65348))[7];
//not do dummy comment
void* a6487965166 = (decode_clo(env65348))[6];
//not do dummy comment
void* kont64994 = (decode_clo(env65348))[5];
//not do dummy comment
void* lst1 = (decode_clo(env65348))[4];
//not do dummy comment
void* cons = (decode_clo(env65348))[3];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65348))[2];
//not do dummy comment
void* lst2 = (decode_clo(env65348))[1];

//creating new closure instance
void** clo76180 = alloc_clo(lam65345_fptr, 7);

//setting env list
clo76180[1] = lst2;
clo76180[2] = interleave_u45direct;
clo76180[3] = cons;
clo76180[4] = kont64994;
clo76180[5] = a6488065168;
clo76180[6] = a6487965166;
clo76180[7] = cdr;
void* f6499865169 = encode_clo(clo76180);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6499865169;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65347 = encode_clo(alloc_clo(lam65347_fptr, 0));

void* lam65349_fptr() // lam65349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65350 = arg_buffer[1];
//reading env and args
void* a6487965166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65350))[7];
//not do dummy comment
void* kont64994 = (decode_clo(env65350))[6];
//not do dummy comment
void* cons = (decode_clo(env65350))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65350))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65350))[3];
//not do dummy comment
void* lst1 = (decode_clo(env65350))[2];
//not do dummy comment
void* car = (decode_clo(env65350))[1];

//creating new closure instance
void** clo76182 = alloc_clo(lam65347_fptr, 7);

//setting env list
clo76182[1] = lst2;
clo76182[2] = interleave_u45direct;
clo76182[3] = cons;
clo76182[4] = lst1;
clo76182[5] = kont64994;
clo76182[6] = a6487965166;
clo76182[7] = cdr;
void* f6499965167 = encode_clo(clo76182);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6499965167;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65349 = encode_clo(alloc_clo(lam65349_fptr, 0));

void* lam65351_fptr() // lam65351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65352 = arg_buffer[1];
//reading env and args
void* a6487865164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65352))[7];
//not do dummy comment
void* kont64994 = (decode_clo(env65352))[6];
//not do dummy comment
void* cons = (decode_clo(env65352))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65352))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65352))[3];
//not do dummy comment
void* lst1 = (decode_clo(env65352))[2];
//not do dummy comment
void* car = (decode_clo(env65352))[1];

//if-clause
bool if_guard76183 = is_true(a6487865164);
if(if_guard76183)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64994);
arg_buffer[2] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64994))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76185 = alloc_clo(lam65349_fptr, 7);

//setting env list
clo76185[1] = car;
clo76185[2] = lst1;
clo76185[3] = lst2;
clo76185[4] = interleave_u45direct;
clo76185[5] = cons;
clo76185[6] = kont64994;
clo76185[7] = cdr;
void* f6500065165 = encode_clo(clo76185);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6500065165;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65351 = encode_clo(alloc_clo(lam65351_fptr, 0));

void* lam65353_fptr() // lam65353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65354 = arg_buffer[1];
//reading env and args
void* a6487765162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env65354))[8];
//not do dummy comment
void* null_u63 = (decode_clo(env65354))[7];
//not do dummy comment
void* kont64994 = (decode_clo(env65354))[6];
//not do dummy comment
void* cons = (decode_clo(env65354))[5];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65354))[4];
//not do dummy comment
void* lst2 = (decode_clo(env65354))[3];
//not do dummy comment
void* lst1 = (decode_clo(env65354))[2];
//not do dummy comment
void* car = (decode_clo(env65354))[1];

//if-clause
bool if_guard76186 = is_true(a6487765162);
if(if_guard76186)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont64994);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont64994))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo76188 = alloc_clo(lam65351_fptr, 7);

//setting env list
clo76188[1] = car;
clo76188[2] = lst1;
clo76188[3] = lst2;
clo76188[4] = interleave_u45direct;
clo76188[5] = cons;
clo76188[6] = kont64994;
clo76188[7] = cdr;
void* f6500165163 = encode_clo(clo76188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6500165163;
arg_buffer[3] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam65353 = encode_clo(alloc_clo(lam65353_fptr, 0));

void* interleave_u45direct_fptr() // interleave-direct 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65355 = arg_buffer[1];
//reading env and args
void* kont64994 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo76190 = alloc_clo(lam65353_fptr, 8);

//setting env list
clo76190[1] = car;
clo76190[2] = lst1;
clo76190[3] = lst2;
void* interleave_u45direct = encode_clo(alloc_clo(interleave_u45direct_fptr, 0));

clo76190[4] = interleave_u45direct;
clo76190[5] = cons;
clo76190[6] = kont64994;
clo76190[7] = null_u63;
clo76190[8] = cdr;
void* f6500265161 = encode_clo(clo76190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6500265161;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* interleave_u45direct = encode_clo(alloc_clo(interleave_u45direct_fptr, 0));

void* lam65356_fptr() // lam65356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65357 = arg_buffer[1];
//reading env and args
void* a6489665190 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont65003 = (decode_clo(env65357))[3];
//not do dummy comment
void* a6489165184 = (decode_clo(env65357))[2];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65357))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(interleave_u45direct);
arg_buffer[2] = kont65003;
arg_buffer[3] = a6489165184;
arg_buffer[4] = a6489665190;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(interleave_u45direct))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65356 = encode_clo(alloc_clo(lam65356_fptr, 0));

void* lam65362_fptr() // lam65362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env65363 = arg_buffer[1];
//reading env and args
void* a6489165184 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env65363))[3];
//not do dummy comment
void* kont65003 = (decode_clo(env65363))[2];
//not do dummy comment
void* interleave_u45direct = (decode_clo(env65363))[1];
mpz_t* mpzvar76191 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76191, "7", 10);
void* a6489265185 = encode_mpz(mpzvar76191);
mpz_t* mpzvar76192 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76192, "8", 10);
void* a6489365186 = encode_mpz(mpzvar76192);
mpz_t* mpzvar76193 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76193, "9", 10);
void* a6489465187 = encode_mpz(mpzvar76193);
mpz_t* mpzvar76194 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76194, "10", 10);
void* a6489565188 = encode_mpz(mpzvar76194);

//creating new closure instance
void** clo76196 = alloc_clo(lam65356_fptr, 3);

//setting env list
clo76196[1] = interleave_u45direct;
clo76196[2] = a6489165184;
clo76196[3] = kont65003;
void* f6500465189 = encode_clo(clo76196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6500465189;
arg_buffer[3] = a6489265185;
arg_buffer[4] = a6489365186;
arg_buffer[5] = a6489465187;
arg_buffer[6] = a6489565188;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam65362 = encode_clo(alloc_clo(lam65362_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _65370 = arg_buffer[1];
//reading env and args
void* kont65003 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar76197 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76197, "1", 10);
void* a6488565177 = encode_mpz(mpzvar76197);
mpz_t* mpzvar76198 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76198, "2", 10);
void* a6488665178 = encode_mpz(mpzvar76198);
mpz_t* mpzvar76199 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76199, "3", 10);
void* a6488765179 = encode_mpz(mpzvar76199);
mpz_t* mpzvar76200 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76200, "4", 10);
void* a6488865180 = encode_mpz(mpzvar76200);
mpz_t* mpzvar76201 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76201, "5", 10);
void* a6488965181 = encode_mpz(mpzvar76201);
mpz_t* mpzvar76202 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar76202, "6", 10);
void* a6489065182 = encode_mpz(mpzvar76202);

//creating new closure instance
void** clo76204 = alloc_clo(lam65362_fptr, 3);

//setting env list
clo76204[1] = interleave_u45direct;
clo76204[2] = kont65003;
clo76204[3] = list;
void* f6500565183 = encode_clo(clo76204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6500565183;
arg_buffer[3] = a6488565177;
arg_buffer[4] = a6488665178;
arg_buffer[5] = a6488765179;
arg_buffer[6] = a6488865180;
arg_buffer[7] = a6488965181;
arg_buffer[8] = a6489065182;
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

