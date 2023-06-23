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
void* _113172 = arg_buffer[1];
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

void* kont112910113010 = prim_car(lst);
void* lst113011 = prim_cdr(lst);
void* x112821113012 = apply_prim__u43(lst113011);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112910113010);
arg_buffer[2] = x112821113012;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112910113010))[0]);
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
void* _113173 = arg_buffer[1];
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

void* kont112912113013 = prim_car(lst);
void* lst113014 = prim_cdr(lst);
void* x112822113015 = apply_prim__u45(lst113014);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112912113013);
arg_buffer[2] = x112822113015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112912113013))[0]);
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
void* _113174 = arg_buffer[1];
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

void* kont112914113016 = prim_car(lst);
void* lst113017 = prim_cdr(lst);
void* x112823113018 = apply_prim__u42(lst113017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112914113016);
arg_buffer[2] = x112823113018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112914113016))[0]);
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
void* _113175 = arg_buffer[1];
//reading env and args
void* kont112916 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x112824113019 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112916);
arg_buffer[2] = x112824113019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112916))[0]);
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
void* _113176 = arg_buffer[1];
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

void* kont112917113020 = prim_car(lst);
void* lst113021 = prim_cdr(lst);
void* x112825113022 = apply_prim__u47(lst113021);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112917113020);
arg_buffer[2] = x112825113022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112917113020))[0]);
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
void* _113177 = arg_buffer[1];
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

void* kont112919113023 = prim_car(lst);
void* lst113024 = prim_cdr(lst);
void* x112826113025 = apply_prim__u61(lst113024);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112919113023);
arg_buffer[2] = x112826113025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112919113023))[0]);
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
void* _113178 = arg_buffer[1];
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

void* kont112921113026 = prim_car(lst);
void* lst113027 = prim_cdr(lst);
void* x112827113028 = apply_prim__u62(lst113027);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112921113026);
arg_buffer[2] = x112827113028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112921113026))[0]);
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
void* _113179 = arg_buffer[1];
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

void* kont112923113029 = prim_car(lst);
void* lst113030 = prim_cdr(lst);
void* x112828113031 = apply_prim__u60(lst113030);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112923113029);
arg_buffer[2] = x112828113031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112923113029))[0]);
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
void* _113180 = arg_buffer[1];
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

void* kont112925113032 = prim_car(lst);
void* lst113033 = prim_cdr(lst);
void* x112829113034 = apply_prim__u60_u61(lst113033);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112925113032);
arg_buffer[2] = x112829113034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112925113032))[0]);
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
void* _113181 = arg_buffer[1];
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

void* kont112927113035 = prim_car(lst);
void* lst113036 = prim_cdr(lst);
void* x112830113037 = apply_prim__u62_u61(lst113036);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112927113035);
arg_buffer[2] = x112830113037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112927113035))[0]);
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
void* _113182 = arg_buffer[1];
//reading env and args
void* kont112929 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x112831113038 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112929);
arg_buffer[2] = x112831113038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112929))[0]);
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
void* _113183 = arg_buffer[1];
//reading env and args
void* kont112930 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x112832113039 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112930);
arg_buffer[2] = x112832113039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112930))[0]);
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
void* _113184 = arg_buffer[1];
//reading env and args
void* kont112931 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x112833113040 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112931);
arg_buffer[2] = x112833113040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112931))[0]);
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
void* _113185 = arg_buffer[1];
//reading env and args
void* kont112932 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x112834113041 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112932);
arg_buffer[2] = x112834113041;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112932))[0]);
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
void* _113186 = arg_buffer[1];
//reading env and args
void* kont112933 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x112835113042 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112933);
arg_buffer[2] = x112835113042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112933))[0]);
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
void* _113187 = arg_buffer[1];
//reading env and args
void* kont112934 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x112836113043 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112934);
arg_buffer[2] = x112836113043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112934))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam113188_fptr() // lam113188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113189 = arg_buffer[1];
//reading env and args
void* a112839113047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112935 = (decode_clo(env113189))[3];
//not do dummy comment
void* a112837113044 = (decode_clo(env113189))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env113189))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont112935;
arg_buffer[3] = a112837113044;
arg_buffer[4] = a112839113047;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113188 = encode_clo(alloc_clo(lam113188_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113192 = arg_buffer[1];
//reading env and args
void* kont112935 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar113833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113833, "0", 10);
void* a112837113044 = encode_mpz(mpzvar113833);
mpz_t* mpzvar113834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113834, "2", 10);
void* a112838113045 = encode_mpz(mpzvar113834);

//creating new closure instance
void** clo113836 = alloc_clo(lam113188_fptr, 3);

//setting env list
clo113836[1] = equal_u63;
clo113836[2] = a112837113044;
clo113836[3] = kont112935;
void* f112936113046 = encode_clo(clo113836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f112936113046;
arg_buffer[3] = x;
arg_buffer[4] = a112838113045;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam113193_fptr() // lam113193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113194 = arg_buffer[1];
//reading env and args
void* a112842113051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env113194))[3];
//not do dummy comment
void* a112840113048 = (decode_clo(env113194))[2];
//not do dummy comment
void* kont112937 = (decode_clo(env113194))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont112937;
arg_buffer[3] = a112840113048;
arg_buffer[4] = a112842113051;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113193 = encode_clo(alloc_clo(lam113193_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113197 = arg_buffer[1];
//reading env and args
void* kont112937 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar113837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113837, "1", 10);
void* a112840113048 = encode_mpz(mpzvar113837);
mpz_t* mpzvar113838 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113838, "2", 10);
void* a112841113049 = encode_mpz(mpzvar113838);

//creating new closure instance
void** clo113840 = alloc_clo(lam113193_fptr, 3);

//setting env list
clo113840[1] = kont112937;
clo113840[2] = a112840113048;
clo113840[3] = equal_u63;
void* f112938113050 = encode_clo(clo113840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f112938113050;
arg_buffer[3] = x;
arg_buffer[4] = a112841113049;
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
void* _113198 = arg_buffer[1];
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

void* kont112939113052 = prim_car(x);
void* x113053 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112939113052);
arg_buffer[2] = x113053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112939113052))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam113201_fptr() // lam113201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113202 = arg_buffer[1];
//reading env and args
void* a112848113063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112941 = (decode_clo(env113202))[3];
//not do dummy comment
void* x = (decode_clo(env113202))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env113202))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont112941;
arg_buffer[3] = x;
arg_buffer[4] = a112848113063;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113201 = encode_clo(alloc_clo(lam113201_fptr, 0));

void* lam113203_fptr() // lam113203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113204 = arg_buffer[1];
//reading env and args
void* a112846113060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113204))[5];
//not do dummy comment
void* kont112941 = (decode_clo(env113204))[4];
//not do dummy comment
void* lst = (decode_clo(env113204))[3];
//not do dummy comment
void* x = (decode_clo(env113204))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env113204))[1];

//if-clause
bool if_guard113841 = is_true(a112846113060);
if(if_guard113841)
{
void* x112847113061 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112941);
arg_buffer[2] = x112847113061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112941))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo113843 = alloc_clo(lam113201_fptr, 3);

//setting env list
clo113843[1] = member_u63;
clo113843[2] = x;
clo113843[3] = kont112941;
void* f112942113062 = encode_clo(clo113843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112942113062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113203 = encode_clo(alloc_clo(lam113203_fptr, 0));

void* lam113205_fptr() // lam113205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113206 = arg_buffer[1];
//reading env and args
void* a112845113058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113206))[6];
//not do dummy comment
void* kont112941 = (decode_clo(env113206))[5];
//not do dummy comment
void* lst = (decode_clo(env113206))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env113206))[3];
//not do dummy comment
void* x = (decode_clo(env113206))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env113206))[1];

//creating new closure instance
void** clo113845 = alloc_clo(lam113203_fptr, 5);

//setting env list
clo113845[1] = member_u63;
clo113845[2] = x;
clo113845[3] = lst;
clo113845[4] = kont112941;
clo113845[5] = cdr;
void* f112943113059 = encode_clo(clo113845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f112943113059;
arg_buffer[3] = a112845113058;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113205 = encode_clo(alloc_clo(lam113205_fptr, 0));

void* lam113207_fptr() // lam113207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113208 = arg_buffer[1];
//reading env and args
void* a112843113055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113208))[7];
//not do dummy comment
void* kont112941 = (decode_clo(env113208))[6];
//not do dummy comment
void* lst = (decode_clo(env113208))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env113208))[4];
//not do dummy comment
void* x = (decode_clo(env113208))[3];
//not do dummy comment
void* car = (decode_clo(env113208))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env113208))[1];

//if-clause
bool if_guard113846 = is_true(a112843113055);
if(if_guard113846)
{
void* x112844113056 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112941);
arg_buffer[2] = x112844113056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112941))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo113848 = alloc_clo(lam113205_fptr, 6);

//setting env list
clo113848[1] = member_u63;
clo113848[2] = x;
clo113848[3] = equal_u63;
clo113848[4] = lst;
clo113848[5] = kont112941;
clo113848[6] = cdr;
void* f112944113057 = encode_clo(clo113848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112944113057;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113207 = encode_clo(alloc_clo(lam113207_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113209 = arg_buffer[1];
//reading env and args
void* kont112941 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo113850 = alloc_clo(lam113207_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo113850[1] = member_u63;
clo113850[2] = car;
clo113850[3] = x;
clo113850[4] = equal_u63;
clo113850[5] = lst;
clo113850[6] = kont112941;
clo113850[7] = cdr;
void* f112945113054 = encode_clo(clo113850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f112945113054;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam113210_fptr() // lam113210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113211 = arg_buffer[1];
//reading env and args
void* a112852113071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a112851113069 = (decode_clo(env113211))[4];
//not do dummy comment
void* kont112946 = (decode_clo(env113211))[3];
//not do dummy comment
void* fun = (decode_clo(env113211))[2];
//not do dummy comment
void* foldl = (decode_clo(env113211))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont112946;
arg_buffer[3] = fun;
arg_buffer[4] = a112851113069;
arg_buffer[5] = a112852113071;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113210 = encode_clo(alloc_clo(lam113210_fptr, 0));

void* lam113212_fptr() // lam113212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113213 = arg_buffer[1];
//reading env and args
void* a112851113069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113213))[5];
//not do dummy comment
void* lst = (decode_clo(env113213))[4];
//not do dummy comment
void* kont112946 = (decode_clo(env113213))[3];
//not do dummy comment
void* fun = (decode_clo(env113213))[2];
//not do dummy comment
void* foldl = (decode_clo(env113213))[1];

//creating new closure instance
void** clo113852 = alloc_clo(lam113210_fptr, 4);

//setting env list
clo113852[1] = foldl;
clo113852[2] = fun;
clo113852[3] = kont112946;
clo113852[4] = a112851113069;
void* f112947113070 = encode_clo(clo113852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112947113070;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113212 = encode_clo(alloc_clo(lam113212_fptr, 0));

void* lam113214_fptr() // lam113214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113215 = arg_buffer[1];
//reading env and args
void* a112850113067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113215))[6];
//not do dummy comment
void* lst = (decode_clo(env113215))[5];
//not do dummy comment
void* kont112946 = (decode_clo(env113215))[4];
//not do dummy comment
void* fun = (decode_clo(env113215))[3];
//not do dummy comment
void* acc = (decode_clo(env113215))[2];
//not do dummy comment
void* foldl = (decode_clo(env113215))[1];

//creating new closure instance
void** clo113854 = alloc_clo(lam113212_fptr, 5);

//setting env list
clo113854[1] = foldl;
clo113854[2] = fun;
clo113854[3] = kont112946;
clo113854[4] = lst;
clo113854[5] = cdr;
void* f112948113068 = encode_clo(clo113854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f112948113068;
arg_buffer[3] = a112850113067;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113214 = encode_clo(alloc_clo(lam113214_fptr, 0));

void* lam113216_fptr() // lam113216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113217 = arg_buffer[1];
//reading env and args
void* a112849113065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113217))[7];
//not do dummy comment
void* lst = (decode_clo(env113217))[6];
//not do dummy comment
void* kont112946 = (decode_clo(env113217))[5];
//not do dummy comment
void* fun = (decode_clo(env113217))[4];
//not do dummy comment
void* acc = (decode_clo(env113217))[3];
//not do dummy comment
void* car = (decode_clo(env113217))[2];
//not do dummy comment
void* foldl = (decode_clo(env113217))[1];

//if-clause
bool if_guard113855 = is_true(a112849113065);
if(if_guard113855)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112946);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112946))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo113857 = alloc_clo(lam113214_fptr, 6);

//setting env list
clo113857[1] = foldl;
clo113857[2] = acc;
clo113857[3] = fun;
clo113857[4] = kont112946;
clo113857[5] = lst;
clo113857[6] = cdr;
void* f112949113066 = encode_clo(clo113857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112949113066;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113216 = encode_clo(alloc_clo(lam113216_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113218 = arg_buffer[1];
//reading env and args
void* kont112946 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo113859 = alloc_clo(lam113216_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo113859[1] = foldl;
clo113859[2] = car;
clo113859[3] = acc;
clo113859[4] = fun;
clo113859[5] = kont112946;
clo113859[6] = lst;
clo113859[7] = cdr;
void* f112950113064 = encode_clo(clo113859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f112950113064;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam113219_fptr() // lam113219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113220 = arg_buffer[1];
//reading env and args
void* a112856113079 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112951 = (decode_clo(env113220))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env113220))[2];
//not do dummy comment
void* a112854113075 = (decode_clo(env113220))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont112951;
arg_buffer[3] = a112854113075;
arg_buffer[4] = a112856113079;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113219 = encode_clo(alloc_clo(lam113219_fptr, 0));

void* lam113221_fptr() // lam113221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113222 = arg_buffer[1];
//reading env and args
void* a112855113077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112951 = (decode_clo(env113222))[5];
//not do dummy comment
void* lst2 = (decode_clo(env113222))[4];
//not do dummy comment
void* cons = (decode_clo(env113222))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env113222))[2];
//not do dummy comment
void* a112854113075 = (decode_clo(env113222))[1];

//creating new closure instance
void** clo113861 = alloc_clo(lam113219_fptr, 3);

//setting env list
clo113861[1] = a112854113075;
clo113861[2] = reverse_u45helper;
clo113861[3] = kont112951;
void* f112952113078 = encode_clo(clo113861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f112952113078;
arg_buffer[3] = a112855113077;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113221 = encode_clo(alloc_clo(lam113221_fptr, 0));

void* lam113223_fptr() // lam113223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113224 = arg_buffer[1];
//reading env and args
void* a112854113075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env113224))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env113224))[5];
//not do dummy comment
void* kont112951 = (decode_clo(env113224))[4];
//not do dummy comment
void* lst2 = (decode_clo(env113224))[3];
//not do dummy comment
void* car = (decode_clo(env113224))[2];
//not do dummy comment
void* cons = (decode_clo(env113224))[1];

//creating new closure instance
void** clo113863 = alloc_clo(lam113221_fptr, 5);

//setting env list
clo113863[1] = a112854113075;
clo113863[2] = reverse_u45helper;
clo113863[3] = cons;
clo113863[4] = lst2;
clo113863[5] = kont112951;
void* f112953113076 = encode_clo(clo113863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112953113076;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113223 = encode_clo(alloc_clo(lam113223_fptr, 0));

void* lam113225_fptr() // lam113225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113226 = arg_buffer[1];
//reading env and args
void* a112853113073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113226))[7];
//not do dummy comment
void* lst = (decode_clo(env113226))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env113226))[5];
//not do dummy comment
void* kont112951 = (decode_clo(env113226))[4];
//not do dummy comment
void* lst2 = (decode_clo(env113226))[3];
//not do dummy comment
void* car = (decode_clo(env113226))[2];
//not do dummy comment
void* cons = (decode_clo(env113226))[1];

//if-clause
bool if_guard113864 = is_true(a112853113073);
if(if_guard113864)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112951);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112951))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo113866 = alloc_clo(lam113223_fptr, 6);

//setting env list
clo113866[1] = cons;
clo113866[2] = car;
clo113866[3] = lst2;
clo113866[4] = kont112951;
clo113866[5] = reverse_u45helper;
clo113866[6] = lst;
void* f112954113074 = encode_clo(clo113866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112954113074;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113225 = encode_clo(alloc_clo(lam113225_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113227 = arg_buffer[1];
//reading env and args
void* kont112951 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo113868 = alloc_clo(lam113225_fptr, 7);

//setting env list
clo113868[1] = cons;
clo113868[2] = car;
clo113868[3] = lst2;
clo113868[4] = kont112951;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo113868[5] = reverse_u45helper;
clo113868[6] = lst;
clo113868[7] = cdr;
void* f112955113072 = encode_clo(clo113868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f112955113072;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam113228_fptr() // lam113228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113229 = arg_buffer[1];
//reading env and args
void* a112857113081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112956 = (decode_clo(env113229))[3];
//not do dummy comment
void* lst = (decode_clo(env113229))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env113229))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont112956;
arg_buffer[3] = lst;
arg_buffer[4] = a112857113081;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113228 = encode_clo(alloc_clo(lam113228_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113230 = arg_buffer[1];
//reading env and args
void* kont112956 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo113870 = alloc_clo(lam113228_fptr, 3);

//setting env list
clo113870[1] = reverse_u45helper;
clo113870[2] = lst;
clo113870[3] = kont112956;
void* f112957113080 = encode_clo(clo113870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f112957113080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam113231_fptr() // lam113231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113232 = arg_buffer[1];
//reading env and args
void* x112860113086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112958 = (decode_clo(env113232))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112958);
arg_buffer[2] = x112860113086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112958))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113231 = encode_clo(alloc_clo(lam113231_fptr, 0));

void* lam113233_fptr() // lam113233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113234 = arg_buffer[1];
//reading env and args
void* a112865113095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112958 = (decode_clo(env113234))[4];
//not do dummy comment
void* a112861113088 = (decode_clo(env113234))[3];
//not do dummy comment
void* a112863113091 = (decode_clo(env113234))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env113234))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont112958;
arg_buffer[3] = a112861113088;
arg_buffer[4] = a112863113091;
arg_buffer[5] = a112865113095;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113233 = encode_clo(alloc_clo(lam113233_fptr, 0));

void* lam113235_fptr() // lam113235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113236 = arg_buffer[1];
//reading env and args
void* a112864113093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112958 = (decode_clo(env113236))[6];
//not do dummy comment
void* a112861113088 = (decode_clo(env113236))[5];
//not do dummy comment
void* a112863113091 = (decode_clo(env113236))[4];
//not do dummy comment
void* cons = (decode_clo(env113236))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env113236))[2];
//not do dummy comment
void* lst2 = (decode_clo(env113236))[1];

//creating new closure instance
void** clo113872 = alloc_clo(lam113233_fptr, 4);

//setting env list
clo113872[1] = take_u45helper;
clo113872[2] = a112863113091;
clo113872[3] = a112861113088;
clo113872[4] = kont112958;
void* f112960113094 = encode_clo(clo113872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f112960113094;
arg_buffer[3] = a112864113093;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113235 = encode_clo(alloc_clo(lam113235_fptr, 0));

void* lam113237_fptr() // lam113237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113238 = arg_buffer[1];
//reading env and args
void* a112863113091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112958 = (decode_clo(env113238))[7];
//not do dummy comment
void* car = (decode_clo(env113238))[6];
//not do dummy comment
void* cons = (decode_clo(env113238))[5];
//not do dummy comment
void* lst = (decode_clo(env113238))[4];
//not do dummy comment
void* a112861113088 = (decode_clo(env113238))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env113238))[2];
//not do dummy comment
void* lst2 = (decode_clo(env113238))[1];

//creating new closure instance
void** clo113874 = alloc_clo(lam113235_fptr, 6);

//setting env list
clo113874[1] = lst2;
clo113874[2] = take_u45helper;
clo113874[3] = cons;
clo113874[4] = a112863113091;
clo113874[5] = a112861113088;
clo113874[6] = kont112958;
void* f112961113092 = encode_clo(clo113874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112961113092;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113237 = encode_clo(alloc_clo(lam113237_fptr, 0));

void* lam113240_fptr() // lam113240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113241 = arg_buffer[1];
//reading env and args
void* a112861113088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112958 = (decode_clo(env113241))[8];
//not do dummy comment
void* lst = (decode_clo(env113241))[7];
//not do dummy comment
void* cons = (decode_clo(env113241))[6];
//not do dummy comment
void* _u45 = (decode_clo(env113241))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env113241))[4];
//not do dummy comment
void* lst2 = (decode_clo(env113241))[3];
//not do dummy comment
void* n = (decode_clo(env113241))[2];
//not do dummy comment
void* car = (decode_clo(env113241))[1];
mpz_t* mpzvar113875 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113875, "1", 10);
void* a112862113089 = encode_mpz(mpzvar113875);

//creating new closure instance
void** clo113877 = alloc_clo(lam113237_fptr, 7);

//setting env list
clo113877[1] = lst2;
clo113877[2] = take_u45helper;
clo113877[3] = a112861113088;
clo113877[4] = lst;
clo113877[5] = cons;
clo113877[6] = car;
clo113877[7] = kont112958;
void* f112962113090 = encode_clo(clo113877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f112962113090;
arg_buffer[3] = n;
arg_buffer[4] = a112862113089;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113240 = encode_clo(alloc_clo(lam113240_fptr, 0));

void* lam113242_fptr() // lam113242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113243 = arg_buffer[1];
//reading env and args
void* a112859113084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113243))[10];
//not do dummy comment
void* kont112958 = (decode_clo(env113243))[9];
//not do dummy comment
void* lst = (decode_clo(env113243))[8];
//not do dummy comment
void* reverse = (decode_clo(env113243))[7];
//not do dummy comment
void* cons = (decode_clo(env113243))[6];
//not do dummy comment
void* _u45 = (decode_clo(env113243))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env113243))[4];
//not do dummy comment
void* lst2 = (decode_clo(env113243))[3];
//not do dummy comment
void* n = (decode_clo(env113243))[2];
//not do dummy comment
void* car = (decode_clo(env113243))[1];

//if-clause
bool if_guard113878 = is_true(a112859113084);
if(if_guard113878)
{

//creating new closure instance
void** clo113880 = alloc_clo(lam113231_fptr, 1);

//setting env list
clo113880[1] = kont112958;
void* f112959113085 = encode_clo(clo113880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f112959113085;
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
void** clo113882 = alloc_clo(lam113240_fptr, 8);

//setting env list
clo113882[1] = car;
clo113882[2] = n;
clo113882[3] = lst2;
clo113882[4] = take_u45helper;
clo113882[5] = _u45;
clo113882[6] = cons;
clo113882[7] = lst;
clo113882[8] = kont112958;
void* f112963113087 = encode_clo(clo113882);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112963113087;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113242 = encode_clo(alloc_clo(lam113242_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113245 = arg_buffer[1];
//reading env and args
void* kont112958 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar113883 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113883, "0", 10);
void* a112858113082 = encode_mpz(mpzvar113883);

//creating new closure instance
void** clo113885 = alloc_clo(lam113242_fptr, 10);

//setting env list
clo113885[1] = car;
clo113885[2] = n;
clo113885[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo113885[4] = take_u45helper;
clo113885[5] = _u45;
clo113885[6] = cons;
clo113885[7] = reverse;
clo113885[8] = lst;
clo113885[9] = kont112958;
clo113885[10] = cdr;
void* f112964113083 = encode_clo(clo113885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f112964113083;
arg_buffer[3] = n;
arg_buffer[4] = a112858113082;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam113246_fptr() // lam113246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113247 = arg_buffer[1];
//reading env and args
void* a112866113097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env113247))[4];
//not do dummy comment
void* kont112965 = (decode_clo(env113247))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env113247))[2];
//not do dummy comment
void* n = (decode_clo(env113247))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont112965;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a112866113097;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113246 = encode_clo(alloc_clo(lam113246_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113248 = arg_buffer[1];
//reading env and args
void* kont112965 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo113887 = alloc_clo(lam113246_fptr, 4);

//setting env list
clo113887[1] = n;
clo113887[2] = take_u45helper;
clo113887[3] = kont112965;
clo113887[4] = lst;
void* f112966113096 = encode_clo(clo113887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f112966113096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam113250_fptr() // lam113250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113251 = arg_buffer[1];
//reading env and args
void* a112871113105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a112869113101 = (decode_clo(env113251))[3];
//not do dummy comment
void* _u43 = (decode_clo(env113251))[2];
//not do dummy comment
void* kont112967 = (decode_clo(env113251))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont112967;
arg_buffer[3] = a112869113101;
arg_buffer[4] = a112871113105;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113250 = encode_clo(alloc_clo(lam113250_fptr, 0));

void* lam113252_fptr() // lam113252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113253 = arg_buffer[1];
//reading env and args
void* a112870113103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a112869113101 = (decode_clo(env113253))[4];
//not do dummy comment
void* length = (decode_clo(env113253))[3];
//not do dummy comment
void* _u43 = (decode_clo(env113253))[2];
//not do dummy comment
void* kont112967 = (decode_clo(env113253))[1];

//creating new closure instance
void** clo113889 = alloc_clo(lam113250_fptr, 3);

//setting env list
clo113889[1] = kont112967;
clo113889[2] = _u43;
clo113889[3] = a112869113101;
void* f112968113104 = encode_clo(clo113889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f112968113104;
arg_buffer[3] = a112870113103;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113252 = encode_clo(alloc_clo(lam113252_fptr, 0));

void* lam113255_fptr() // lam113255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113256 = arg_buffer[1];
//reading env and args
void* a112867113099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113256))[5];
//not do dummy comment
void* lst = (decode_clo(env113256))[4];
//not do dummy comment
void* length = (decode_clo(env113256))[3];
//not do dummy comment
void* _u43 = (decode_clo(env113256))[2];
//not do dummy comment
void* kont112967 = (decode_clo(env113256))[1];

//if-clause
bool if_guard113890 = is_true(a112867113099);
if(if_guard113890)
{
mpz_t* mpzvar113891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113891, "0", 10);
void* x112868113100 = encode_mpz(mpzvar113891);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112967);
arg_buffer[2] = x112868113100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112967))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar113892 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113892, "1", 10);
void* a112869113101 = encode_mpz(mpzvar113892);

//creating new closure instance
void** clo113894 = alloc_clo(lam113252_fptr, 4);

//setting env list
clo113894[1] = kont112967;
clo113894[2] = _u43;
clo113894[3] = length;
clo113894[4] = a112869113101;
void* f112969113102 = encode_clo(clo113894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112969113102;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113255 = encode_clo(alloc_clo(lam113255_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113257 = arg_buffer[1];
//reading env and args
void* kont112967 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo113896 = alloc_clo(lam113255_fptr, 5);

//setting env list
clo113896[1] = kont112967;
clo113896[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo113896[3] = length;
clo113896[4] = lst;
clo113896[5] = cdr;
void* f112970113098 = encode_clo(clo113896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f112970113098;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam113258_fptr() // lam113258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113259 = arg_buffer[1];
//reading env and args
void* x112873113109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112971 = (decode_clo(env113259))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112971);
arg_buffer[2] = x112873113109;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113258 = encode_clo(alloc_clo(lam113258_fptr, 0));

void* lam113260_fptr() // lam113260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113261 = arg_buffer[1];
//reading env and args
void* a112877113117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a112875113113 = (decode_clo(env113261))[3];
//not do dummy comment
void* cons = (decode_clo(env113261))[2];
//not do dummy comment
void* kont112971 = (decode_clo(env113261))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont112971;
arg_buffer[3] = a112875113113;
arg_buffer[4] = a112877113117;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113260 = encode_clo(alloc_clo(lam113260_fptr, 0));

void* lam113262_fptr() // lam113262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113263 = arg_buffer[1];
//reading env and args
void* a112876113115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env113263))[5];
//not do dummy comment
void* proc = (decode_clo(env113263))[4];
//not do dummy comment
void* a112875113113 = (decode_clo(env113263))[3];
//not do dummy comment
void* cons = (decode_clo(env113263))[2];
//not do dummy comment
void* kont112971 = (decode_clo(env113263))[1];

//creating new closure instance
void** clo113898 = alloc_clo(lam113260_fptr, 3);

//setting env list
clo113898[1] = kont112971;
clo113898[2] = cons;
clo113898[3] = a112875113113;
void* f112973113116 = encode_clo(clo113898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f112973113116;
arg_buffer[3] = proc;
arg_buffer[4] = a112876113115;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113262 = encode_clo(alloc_clo(lam113262_fptr, 0));

void* lam113264_fptr() // lam113264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113265 = arg_buffer[1];
//reading env and args
void* a112875113113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113265))[6];
//not do dummy comment
void* lst = (decode_clo(env113265))[5];
//not do dummy comment
void* map = (decode_clo(env113265))[4];
//not do dummy comment
void* proc = (decode_clo(env113265))[3];
//not do dummy comment
void* cons = (decode_clo(env113265))[2];
//not do dummy comment
void* kont112971 = (decode_clo(env113265))[1];

//creating new closure instance
void** clo113900 = alloc_clo(lam113262_fptr, 5);

//setting env list
clo113900[1] = kont112971;
clo113900[2] = cons;
clo113900[3] = a112875113113;
clo113900[4] = proc;
clo113900[5] = map;
void* f112974113114 = encode_clo(clo113900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112974113114;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113264 = encode_clo(alloc_clo(lam113264_fptr, 0));

void* lam113266_fptr() // lam113266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113267 = arg_buffer[1];
//reading env and args
void* a112874113111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113267))[6];
//not do dummy comment
void* lst = (decode_clo(env113267))[5];
//not do dummy comment
void* map = (decode_clo(env113267))[4];
//not do dummy comment
void* proc = (decode_clo(env113267))[3];
//not do dummy comment
void* cons = (decode_clo(env113267))[2];
//not do dummy comment
void* kont112971 = (decode_clo(env113267))[1];

//creating new closure instance
void** clo113902 = alloc_clo(lam113264_fptr, 6);

//setting env list
clo113902[1] = kont112971;
clo113902[2] = cons;
clo113902[3] = proc;
clo113902[4] = map;
clo113902[5] = lst;
clo113902[6] = cdr;
void* f112975113112 = encode_clo(clo113902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f112975113112;
arg_buffer[3] = a112874113111;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113266 = encode_clo(alloc_clo(lam113266_fptr, 0));

void* lam113268_fptr() // lam113268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113269 = arg_buffer[1];
//reading env and args
void* a112872113107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env113269))[8];
//not do dummy comment
void* map = (decode_clo(env113269))[7];
//not do dummy comment
void* proc = (decode_clo(env113269))[6];
//not do dummy comment
void* car = (decode_clo(env113269))[5];
//not do dummy comment
void* cons = (decode_clo(env113269))[4];
//not do dummy comment
void* kont112971 = (decode_clo(env113269))[3];
//not do dummy comment
void* list = (decode_clo(env113269))[2];
//not do dummy comment
void* cdr = (decode_clo(env113269))[1];

//if-clause
bool if_guard113903 = is_true(a112872113107);
if(if_guard113903)
{

//creating new closure instance
void** clo113905 = alloc_clo(lam113258_fptr, 1);

//setting env list
clo113905[1] = kont112971;
void* f112972113108 = encode_clo(clo113905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f112972113108;
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
void** clo113907 = alloc_clo(lam113266_fptr, 6);

//setting env list
clo113907[1] = kont112971;
clo113907[2] = cons;
clo113907[3] = proc;
clo113907[4] = map;
clo113907[5] = lst;
clo113907[6] = cdr;
void* f112976113110 = encode_clo(clo113907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112976113110;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113268 = encode_clo(alloc_clo(lam113268_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113270 = arg_buffer[1];
//reading env and args
void* kont112971 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo113909 = alloc_clo(lam113268_fptr, 8);

//setting env list
clo113909[1] = cdr;
clo113909[2] = list;
clo113909[3] = kont112971;
clo113909[4] = cons;
clo113909[5] = car;
clo113909[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo113909[7] = map;
clo113909[8] = lst;
void* f112977113106 = encode_clo(clo113909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f112977113106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam113271_fptr() // lam113271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113272 = arg_buffer[1];
//reading env and args
void* x112879113121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112978 = (decode_clo(env113272))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112978);
arg_buffer[2] = x112879113121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112978))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113271 = encode_clo(alloc_clo(lam113271_fptr, 0));

void* lam113273_fptr() // lam113273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113274 = arg_buffer[1];
//reading env and args
void* a112884113131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112978 = (decode_clo(env113274))[3];
//not do dummy comment
void* a112882113127 = (decode_clo(env113274))[2];
//not do dummy comment
void* cons = (decode_clo(env113274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont112978;
arg_buffer[3] = a112882113127;
arg_buffer[4] = a112884113131;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113273 = encode_clo(alloc_clo(lam113273_fptr, 0));

void* lam113275_fptr() // lam113275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113276 = arg_buffer[1];
//reading env and args
void* a112883113129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112978 = (decode_clo(env113276))[5];
//not do dummy comment
void* op = (decode_clo(env113276))[4];
//not do dummy comment
void* a112882113127 = (decode_clo(env113276))[3];
//not do dummy comment
void* filter = (decode_clo(env113276))[2];
//not do dummy comment
void* cons = (decode_clo(env113276))[1];

//creating new closure instance
void** clo113911 = alloc_clo(lam113273_fptr, 3);

//setting env list
clo113911[1] = cons;
clo113911[2] = a112882113127;
clo113911[3] = kont112978;
void* f112980113130 = encode_clo(clo113911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f112980113130;
arg_buffer[3] = op;
arg_buffer[4] = a112883113129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113275 = encode_clo(alloc_clo(lam113275_fptr, 0));

void* lam113277_fptr() // lam113277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113278 = arg_buffer[1];
//reading env and args
void* a112882113127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113278))[6];
//not do dummy comment
void* lst = (decode_clo(env113278))[5];
//not do dummy comment
void* kont112978 = (decode_clo(env113278))[4];
//not do dummy comment
void* op = (decode_clo(env113278))[3];
//not do dummy comment
void* filter = (decode_clo(env113278))[2];
//not do dummy comment
void* cons = (decode_clo(env113278))[1];

//creating new closure instance
void** clo113913 = alloc_clo(lam113275_fptr, 5);

//setting env list
clo113913[1] = cons;
clo113913[2] = filter;
clo113913[3] = a112882113127;
clo113913[4] = op;
clo113913[5] = kont112978;
void* f112981113128 = encode_clo(clo113913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112981113128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113277 = encode_clo(alloc_clo(lam113277_fptr, 0));

void* lam113279_fptr() // lam113279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113280 = arg_buffer[1];
//reading env and args
void* a112885113133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112978 = (decode_clo(env113280))[3];
//not do dummy comment
void* op = (decode_clo(env113280))[2];
//not do dummy comment
void* filter = (decode_clo(env113280))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont112978;
arg_buffer[3] = op;
arg_buffer[4] = a112885113133;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113279 = encode_clo(alloc_clo(lam113279_fptr, 0));

void* lam113281_fptr() // lam113281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113282 = arg_buffer[1];
//reading env and args
void* a112881113125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113282))[7];
//not do dummy comment
void* lst = (decode_clo(env113282))[6];
//not do dummy comment
void* kont112978 = (decode_clo(env113282))[5];
//not do dummy comment
void* op = (decode_clo(env113282))[4];
//not do dummy comment
void* cons = (decode_clo(env113282))[3];
//not do dummy comment
void* filter = (decode_clo(env113282))[2];
//not do dummy comment
void* car = (decode_clo(env113282))[1];

//if-clause
bool if_guard113914 = is_true(a112881113125);
if(if_guard113914)
{

//creating new closure instance
void** clo113916 = alloc_clo(lam113277_fptr, 6);

//setting env list
clo113916[1] = cons;
clo113916[2] = filter;
clo113916[3] = op;
clo113916[4] = kont112978;
clo113916[5] = lst;
clo113916[6] = cdr;
void* f112982113126 = encode_clo(clo113916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112982113126;
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
void** clo113918 = alloc_clo(lam113279_fptr, 3);

//setting env list
clo113918[1] = filter;
clo113918[2] = op;
clo113918[3] = kont112978;
void* f112983113132 = encode_clo(clo113918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112983113132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113281 = encode_clo(alloc_clo(lam113281_fptr, 0));

void* lam113283_fptr() // lam113283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113284 = arg_buffer[1];
//reading env and args
void* a112880113123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113284))[7];
//not do dummy comment
void* lst = (decode_clo(env113284))[6];
//not do dummy comment
void* kont112978 = (decode_clo(env113284))[5];
//not do dummy comment
void* op = (decode_clo(env113284))[4];
//not do dummy comment
void* cons = (decode_clo(env113284))[3];
//not do dummy comment
void* filter = (decode_clo(env113284))[2];
//not do dummy comment
void* car = (decode_clo(env113284))[1];

//creating new closure instance
void** clo113920 = alloc_clo(lam113281_fptr, 7);

//setting env list
clo113920[1] = car;
clo113920[2] = filter;
clo113920[3] = cons;
clo113920[4] = op;
clo113920[5] = kont112978;
clo113920[6] = lst;
clo113920[7] = cdr;
void* f112984113124 = encode_clo(clo113920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f112984113124;
arg_buffer[3] = a112880113123;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113283 = encode_clo(alloc_clo(lam113283_fptr, 0));

void* lam113285_fptr() // lam113285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113286 = arg_buffer[1];
//reading env and args
void* a112878113119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env113286))[8];
//not do dummy comment
void* kont112978 = (decode_clo(env113286))[7];
//not do dummy comment
void* op = (decode_clo(env113286))[6];
//not do dummy comment
void* cons = (decode_clo(env113286))[5];
//not do dummy comment
void* list = (decode_clo(env113286))[4];
//not do dummy comment
void* cdr = (decode_clo(env113286))[3];
//not do dummy comment
void* filter = (decode_clo(env113286))[2];
//not do dummy comment
void* car = (decode_clo(env113286))[1];

//if-clause
bool if_guard113921 = is_true(a112878113119);
if(if_guard113921)
{

//creating new closure instance
void** clo113923 = alloc_clo(lam113271_fptr, 1);

//setting env list
clo113923[1] = kont112978;
void* f112979113120 = encode_clo(clo113923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f112979113120;
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
void** clo113925 = alloc_clo(lam113283_fptr, 7);

//setting env list
clo113925[1] = car;
clo113925[2] = filter;
clo113925[3] = cons;
clo113925[4] = op;
clo113925[5] = kont112978;
clo113925[6] = lst;
clo113925[7] = cdr;
void* f112985113122 = encode_clo(clo113925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112985113122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113285 = encode_clo(alloc_clo(lam113285_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113287 = arg_buffer[1];
//reading env and args
void* kont112978 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo113927 = alloc_clo(lam113285_fptr, 8);

//setting env list
clo113927[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo113927[2] = filter;
clo113927[3] = cdr;
clo113927[4] = list;
clo113927[5] = cons;
clo113927[6] = op;
clo113927[7] = kont112978;
clo113927[8] = lst;
void* f112986113118 = encode_clo(clo113927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f112986113118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam113288_fptr() // lam113288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113289 = arg_buffer[1];
//reading env and args
void* a112890113141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env113289))[3];
//not do dummy comment
void* a112888113138 = (decode_clo(env113289))[2];
//not do dummy comment
void* kont112987 = (decode_clo(env113289))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont112987;
arg_buffer[3] = a112888113138;
arg_buffer[4] = a112890113141;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113288 = encode_clo(alloc_clo(lam113288_fptr, 0));

void* lam113291_fptr() // lam113291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113292 = arg_buffer[1];
//reading env and args
void* a112888113138 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env113292))[4];
//not do dummy comment
void* n = (decode_clo(env113292))[3];
//not do dummy comment
void* _u45 = (decode_clo(env113292))[2];
//not do dummy comment
void* kont112987 = (decode_clo(env113292))[1];
mpz_t* mpzvar113928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113928, "1", 10);
void* a112889113139 = encode_mpz(mpzvar113928);

//creating new closure instance
void** clo113930 = alloc_clo(lam113288_fptr, 3);

//setting env list
clo113930[1] = kont112987;
clo113930[2] = a112888113138;
clo113930[3] = drop;
void* f112988113140 = encode_clo(clo113930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f112988113140;
arg_buffer[3] = n;
arg_buffer[4] = a112889113139;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113291 = encode_clo(alloc_clo(lam113291_fptr, 0));

void* lam113293_fptr() // lam113293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113294 = arg_buffer[1];
//reading env and args
void* a112887113136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113294))[6];
//not do dummy comment
void* n = (decode_clo(env113294))[5];
//not do dummy comment
void* lst = (decode_clo(env113294))[4];
//not do dummy comment
void* drop = (decode_clo(env113294))[3];
//not do dummy comment
void* _u45 = (decode_clo(env113294))[2];
//not do dummy comment
void* kont112987 = (decode_clo(env113294))[1];

//if-clause
bool if_guard113931 = is_true(a112887113136);
if(if_guard113931)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112987);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112987))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo113933 = alloc_clo(lam113291_fptr, 4);

//setting env list
clo113933[1] = kont112987;
clo113933[2] = _u45;
clo113933[3] = n;
clo113933[4] = drop;
void* f112989113137 = encode_clo(clo113933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112989113137;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113293 = encode_clo(alloc_clo(lam113293_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113296 = arg_buffer[1];
//reading env and args
void* kont112987 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar113934 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113934, "0", 10);
void* a112886113134 = encode_mpz(mpzvar113934);

//creating new closure instance
void** clo113936 = alloc_clo(lam113293_fptr, 6);

//setting env list
clo113936[1] = kont112987;
clo113936[2] = _u45;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo113936[3] = drop;
clo113936[4] = lst;
clo113936[5] = n;
clo113936[6] = cdr;
void* f112990113135 = encode_clo(clo113936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f112990113135;
arg_buffer[3] = n;
arg_buffer[4] = a112886113134;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam113297_fptr() // lam113297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113298 = arg_buffer[1];
//reading env and args
void* a112894113149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112991 = (decode_clo(env113298))[3];
//not do dummy comment
void* proc = (decode_clo(env113298))[2];
//not do dummy comment
void* a112892113145 = (decode_clo(env113298))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont112991;
arg_buffer[3] = a112892113145;
arg_buffer[4] = a112894113149;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113297 = encode_clo(alloc_clo(lam113297_fptr, 0));

void* lam113299_fptr() // lam113299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113300 = arg_buffer[1];
//reading env and args
void* a112893113147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont112991 = (decode_clo(env113300))[5];
//not do dummy comment
void* foldr = (decode_clo(env113300))[4];
//not do dummy comment
void* a112892113145 = (decode_clo(env113300))[3];
//not do dummy comment
void* proc = (decode_clo(env113300))[2];
//not do dummy comment
void* acc = (decode_clo(env113300))[1];

//creating new closure instance
void** clo113938 = alloc_clo(lam113297_fptr, 3);

//setting env list
clo113938[1] = a112892113145;
clo113938[2] = proc;
clo113938[3] = kont112991;
void* f112992113148 = encode_clo(clo113938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f112992113148;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a112893113147;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113299 = encode_clo(alloc_clo(lam113299_fptr, 0));

void* lam113301_fptr() // lam113301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113302 = arg_buffer[1];
//reading env and args
void* a112892113145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113302))[6];
//not do dummy comment
void* kont112991 = (decode_clo(env113302))[5];
//not do dummy comment
void* foldr = (decode_clo(env113302))[4];
//not do dummy comment
void* lst = (decode_clo(env113302))[3];
//not do dummy comment
void* proc = (decode_clo(env113302))[2];
//not do dummy comment
void* acc = (decode_clo(env113302))[1];

//creating new closure instance
void** clo113940 = alloc_clo(lam113299_fptr, 5);

//setting env list
clo113940[1] = acc;
clo113940[2] = proc;
clo113940[3] = a112892113145;
clo113940[4] = foldr;
clo113940[5] = kont112991;
void* f112993113146 = encode_clo(clo113940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112993113146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113301 = encode_clo(alloc_clo(lam113301_fptr, 0));

void* lam113303_fptr() // lam113303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113304 = arg_buffer[1];
//reading env and args
void* a112891113143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113304))[7];
//not do dummy comment
void* kont112991 = (decode_clo(env113304))[6];
//not do dummy comment
void* car = (decode_clo(env113304))[5];
//not do dummy comment
void* foldr = (decode_clo(env113304))[4];
//not do dummy comment
void* lst = (decode_clo(env113304))[3];
//not do dummy comment
void* proc = (decode_clo(env113304))[2];
//not do dummy comment
void* acc = (decode_clo(env113304))[1];

//if-clause
bool if_guard113941 = is_true(a112891113143);
if(if_guard113941)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112991);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112991))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo113943 = alloc_clo(lam113301_fptr, 6);

//setting env list
clo113943[1] = acc;
clo113943[2] = proc;
clo113943[3] = lst;
clo113943[4] = foldr;
clo113943[5] = kont112991;
clo113943[6] = cdr;
void* f112994113144 = encode_clo(clo113943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112994113144;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113303 = encode_clo(alloc_clo(lam113303_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113305 = arg_buffer[1];
//reading env and args
void* kont112991 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo113945 = alloc_clo(lam113303_fptr, 7);

//setting env list
clo113945[1] = acc;
clo113945[2] = proc;
clo113945[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo113945[4] = foldr;
clo113945[5] = car;
clo113945[6] = kont112991;
clo113945[7] = cdr;
void* f112995113142 = encode_clo(clo113945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f112995113142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam113306_fptr() // lam113306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113307 = arg_buffer[1];
//reading env and args
void* a112898113157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a112896113153 = (decode_clo(env113307))[3];
//not do dummy comment
void* kont112996 = (decode_clo(env113307))[2];
//not do dummy comment
void* cons = (decode_clo(env113307))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont112996;
arg_buffer[3] = a112896113153;
arg_buffer[4] = a112898113157;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113306 = encode_clo(alloc_clo(lam113306_fptr, 0));

void* lam113308_fptr() // lam113308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113309 = arg_buffer[1];
//reading env and args
void* a112897113155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a112896113153 = (decode_clo(env113309))[5];
//not do dummy comment
void* lst2 = (decode_clo(env113309))[4];
//not do dummy comment
void* cons = (decode_clo(env113309))[3];
//not do dummy comment
void* append = (decode_clo(env113309))[2];
//not do dummy comment
void* kont112996 = (decode_clo(env113309))[1];

//creating new closure instance
void** clo113947 = alloc_clo(lam113306_fptr, 3);

//setting env list
clo113947[1] = cons;
clo113947[2] = kont112996;
clo113947[3] = a112896113153;
void* f112997113156 = encode_clo(clo113947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f112997113156;
arg_buffer[3] = a112897113155;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113308 = encode_clo(alloc_clo(lam113308_fptr, 0));

void* lam113310_fptr() // lam113310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113311 = arg_buffer[1];
//reading env and args
void* a112896113153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113311))[6];
//not do dummy comment
void* lst2 = (decode_clo(env113311))[5];
//not do dummy comment
void* lst1 = (decode_clo(env113311))[4];
//not do dummy comment
void* cons = (decode_clo(env113311))[3];
//not do dummy comment
void* append = (decode_clo(env113311))[2];
//not do dummy comment
void* kont112996 = (decode_clo(env113311))[1];

//creating new closure instance
void** clo113949 = alloc_clo(lam113308_fptr, 5);

//setting env list
clo113949[1] = kont112996;
clo113949[2] = append;
clo113949[3] = cons;
clo113949[4] = lst2;
clo113949[5] = a112896113153;
void* f112998113154 = encode_clo(clo113949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f112998113154;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113310 = encode_clo(alloc_clo(lam113310_fptr, 0));

void* lam113312_fptr() // lam113312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113313 = arg_buffer[1];
//reading env and args
void* a112895113151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env113313))[7];
//not do dummy comment
void* lst2 = (decode_clo(env113313))[6];
//not do dummy comment
void* cons = (decode_clo(env113313))[5];
//not do dummy comment
void* append = (decode_clo(env113313))[4];
//not do dummy comment
void* kont112996 = (decode_clo(env113313))[3];
//not do dummy comment
void* lst1 = (decode_clo(env113313))[2];
//not do dummy comment
void* car = (decode_clo(env113313))[1];

//if-clause
bool if_guard113950 = is_true(a112895113151);
if(if_guard113950)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont112996);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont112996))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo113952 = alloc_clo(lam113310_fptr, 6);

//setting env list
clo113952[1] = kont112996;
clo113952[2] = append;
clo113952[3] = cons;
clo113952[4] = lst1;
clo113952[5] = lst2;
clo113952[6] = cdr;
void* f112999113152 = encode_clo(clo113952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f112999113152;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam113312 = encode_clo(alloc_clo(lam113312_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113314 = arg_buffer[1];
//reading env and args
void* kont112996 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo113954 = alloc_clo(lam113312_fptr, 7);

//setting env list
clo113954[1] = car;
clo113954[2] = lst1;
clo113954[3] = kont112996;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo113954[4] = append;
clo113954[5] = cons;
clo113954[6] = lst2;
clo113954[7] = cdr;
void* f113000113150 = encode_clo(clo113954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f113000113150;
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
void* _113315 = arg_buffer[1];
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

void* kont113001113158 = prim_car(lst);
void* lst113159 = prim_cdr(lst);
void* x112899113160 = apply_prim_hash(lst113159);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont113001113158);
arg_buffer[2] = x112899113160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont113001113158))[0]);
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
void* _113316 = arg_buffer[1];
//reading env and args
void* kont113003 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x112900113161 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont113003);
arg_buffer[2] = x112900113161;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont113003))[0]);
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
void* _113317 = arg_buffer[1];
//reading env and args
void* kont113004 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x112901113162 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont113004);
arg_buffer[2] = x112901113162;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont113004))[0]);
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
void* _113318 = arg_buffer[1];
//reading env and args
void* kont113005 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x112902113163 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont113005);
arg_buffer[2] = x112902113163;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont113005))[0]);
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
void* _113319 = arg_buffer[1];
//reading env and args
void* kont113006 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x112903113164 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont113006);
arg_buffer[2] = x112903113164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont113006))[0]);
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
void* _113325 = arg_buffer[1];
//reading env and args
void* kont113007 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar113955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113955, "100", 10);
void* a112904113165 = encode_mpz(mpzvar113955);
mpz_t* mpzvar113956 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113956, "20", 10);
void* a112905113166 = encode_mpz(mpzvar113956);
mpz_t* mpzvar113957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113957, "10", 10);
void* a112906113167 = encode_mpz(mpzvar113957);
mpz_t* mpzvar113958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113958, "5", 10);
void* a112907113168 = encode_mpz(mpzvar113958);
mpz_t* mpzvar113959 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar113959, "1", 10);
void* a112908113169 = encode_mpz(mpzvar113959);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = kont113007;
arg_buffer[3] = a112904113165;
arg_buffer[4] = a112905113166;
arg_buffer[5] = a112906113167;
arg_buffer[6] = a112907113168;
arg_buffer[7] = a112908113169;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam113326_fptr() // lam113326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env113327 = arg_buffer[1];
//reading env and args
void* x112909113171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont113008 = (decode_clo(env113327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont113008);
arg_buffer[2] = x112909113171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont113008))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam113326 = encode_clo(alloc_clo(lam113326_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _113328 = arg_buffer[1];
//reading env and args
void* kont113008 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo113961 = alloc_clo(lam113326_fptr, 1);

//setting env list
clo113961[1] = kont113008;
void* f113009113170 = encode_clo(clo113961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f113009113170;
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

