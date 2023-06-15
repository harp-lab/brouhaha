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
void* _54185 = arg_buffer[1];
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

void* kont5392354023 = prim_car(lst);
void* lst54024 = prim_cdr(lst);
void* x5383454025 = apply_prim__u43(lst54024);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5392354023);
arg_buffer[2] = x5383454025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5392354023))[0]);
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
void* _54186 = arg_buffer[1];
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

void* kont5392554026 = prim_car(lst);
void* lst54027 = prim_cdr(lst);
void* x5383554028 = apply_prim__u45(lst54027);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5392554026);
arg_buffer[2] = x5383554028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5392554026))[0]);
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
void* _54187 = arg_buffer[1];
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

void* kont5392754029 = prim_car(lst);
void* lst54030 = prim_cdr(lst);
void* x5383654031 = apply_prim__u42(lst54030);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5392754029);
arg_buffer[2] = x5383654031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5392754029))[0]);
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
void* _54188 = arg_buffer[1];
//reading env and args
void* kont53929 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5383754032 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53929);
arg_buffer[2] = x5383754032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53929))[0]);
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
void* _54189 = arg_buffer[1];
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

void* kont5393054033 = prim_car(lst);
void* lst54034 = prim_cdr(lst);
void* x5383854035 = apply_prim__u47(lst54034);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5393054033);
arg_buffer[2] = x5383854035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5393054033))[0]);
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
void* _54190 = arg_buffer[1];
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

void* kont5393254036 = prim_car(lst);
void* lst54037 = prim_cdr(lst);
void* x5383954038 = apply_prim__u61(lst54037);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5393254036);
arg_buffer[2] = x5383954038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5393254036))[0]);
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
void* _54191 = arg_buffer[1];
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

void* kont5393454039 = prim_car(lst);
void* lst54040 = prim_cdr(lst);
void* x5384054041 = apply_prim__u62(lst54040);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5393454039);
arg_buffer[2] = x5384054041;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5393454039))[0]);
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
void* _54192 = arg_buffer[1];
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

void* kont5393654042 = prim_car(lst);
void* lst54043 = prim_cdr(lst);
void* x5384154044 = apply_prim__u60(lst54043);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5393654042);
arg_buffer[2] = x5384154044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5393654042))[0]);
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
void* _54193 = arg_buffer[1];
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

void* kont5393854045 = prim_car(lst);
void* lst54046 = prim_cdr(lst);
void* x5384254047 = apply_prim__u60_u61(lst54046);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5393854045);
arg_buffer[2] = x5384254047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5393854045))[0]);
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
void* _54194 = arg_buffer[1];
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

void* kont5394054048 = prim_car(lst);
void* lst54049 = prim_cdr(lst);
void* x5384354050 = apply_prim__u62_u61(lst54049);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5394054048);
arg_buffer[2] = x5384354050;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5394054048))[0]);
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
void* _54195 = arg_buffer[1];
//reading env and args
void* kont53942 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5384454051 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53942);
arg_buffer[2] = x5384454051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53942))[0]);
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
void* _54196 = arg_buffer[1];
//reading env and args
void* kont53943 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5384554052 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53943);
arg_buffer[2] = x5384554052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53943))[0]);
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
void* _54197 = arg_buffer[1];
//reading env and args
void* kont53944 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5384654053 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53944);
arg_buffer[2] = x5384654053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53944))[0]);
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
void* _54198 = arg_buffer[1];
//reading env and args
void* kont53945 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5384754054 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53945);
arg_buffer[2] = x5384754054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53945))[0]);
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
void* _54199 = arg_buffer[1];
//reading env and args
void* kont53946 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5384854055 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53946);
arg_buffer[2] = x5384854055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53946))[0]);
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
void* _54200 = arg_buffer[1];
//reading env and args
void* kont53947 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5384954056 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53947);
arg_buffer[2] = x5384954056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53947))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam54201_fptr() // lam54201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54202 = arg_buffer[1];
//reading env and args
void* a5385254060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5385054057 = (decode_clo(env54202))[3];
//not do dummy comment
void* kont53948 = (decode_clo(env54202))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env54202))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53948;
arg_buffer[3] = a5385054057;
arg_buffer[4] = a5385254060;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54201 = encode_clo(alloc_clo(lam54201_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54205 = arg_buffer[1];
//reading env and args
void* kont53948 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54846 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54846, "0", 10);
void* a5385054057 = encode_mpz(mpzvar54846);
mpz_t* mpzvar54847 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54847, "2", 10);
void* a5385154058 = encode_mpz(mpzvar54847);

//creating new closure instance
void** clo54849 = alloc_clo(lam54201_fptr, 3);

//setting env list
clo54849[1] = equal_u63;
clo54849[2] = kont53948;
clo54849[3] = a5385054057;
void* f5394954059 = encode_clo(clo54849);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5394954059;
arg_buffer[3] = x;
arg_buffer[4] = a5385154058;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam54206_fptr() // lam54206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54207 = arg_buffer[1];
//reading env and args
void* a5385554064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5385354061 = (decode_clo(env54207))[3];
//not do dummy comment
void* kont53950 = (decode_clo(env54207))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env54207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont53950;
arg_buffer[3] = a5385354061;
arg_buffer[4] = a5385554064;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54206 = encode_clo(alloc_clo(lam54206_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54210 = arg_buffer[1];
//reading env and args
void* kont53950 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar54850 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54850, "1", 10);
void* a5385354061 = encode_mpz(mpzvar54850);
mpz_t* mpzvar54851 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54851, "2", 10);
void* a5385454062 = encode_mpz(mpzvar54851);

//creating new closure instance
void** clo54853 = alloc_clo(lam54206_fptr, 3);

//setting env list
clo54853[1] = equal_u63;
clo54853[2] = kont53950;
clo54853[3] = a5385354061;
void* f5395154063 = encode_clo(clo54853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5395154063;
arg_buffer[3] = x;
arg_buffer[4] = a5385454062;
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
void* _54211 = arg_buffer[1];
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

void* kont5395254065 = prim_car(x);
void* x54066 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5395254065);
arg_buffer[2] = x54066;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5395254065))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam54214_fptr() // lam54214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54215 = arg_buffer[1];
//reading env and args
void* a5386154076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53954 = (decode_clo(env54215))[3];
//not do dummy comment
void* x = (decode_clo(env54215))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54215))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont53954;
arg_buffer[3] = x;
arg_buffer[4] = a5386154076;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54214 = encode_clo(alloc_clo(lam54214_fptr, 0));

void* lam54216_fptr() // lam54216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54217 = arg_buffer[1];
//reading env and args
void* a5385954073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54217))[5];
//not do dummy comment
void* lst = (decode_clo(env54217))[4];
//not do dummy comment
void* kont53954 = (decode_clo(env54217))[3];
//not do dummy comment
void* x = (decode_clo(env54217))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54217))[1];

//if-clause
bool if_guard54854 = is_true(a5385954073);
if(if_guard54854)
{
void* x5386054074 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53954);
arg_buffer[2] = x5386054074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54856 = alloc_clo(lam54214_fptr, 3);

//setting env list
clo54856[1] = member_u63;
clo54856[2] = x;
clo54856[3] = kont53954;
void* f5395554075 = encode_clo(clo54856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5395554075;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54216 = encode_clo(alloc_clo(lam54216_fptr, 0));

void* lam54218_fptr() // lam54218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54219 = arg_buffer[1];
//reading env and args
void* a5385854071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54219))[6];
//not do dummy comment
void* lst = (decode_clo(env54219))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env54219))[4];
//not do dummy comment
void* kont53954 = (decode_clo(env54219))[3];
//not do dummy comment
void* x = (decode_clo(env54219))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54219))[1];

//creating new closure instance
void** clo54858 = alloc_clo(lam54216_fptr, 5);

//setting env list
clo54858[1] = member_u63;
clo54858[2] = x;
clo54858[3] = kont53954;
clo54858[4] = lst;
clo54858[5] = cdr;
void* f5395654072 = encode_clo(clo54858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5395654072;
arg_buffer[3] = a5385854071;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54218 = encode_clo(alloc_clo(lam54218_fptr, 0));

void* lam54220_fptr() // lam54220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54221 = arg_buffer[1];
//reading env and args
void* a5385654068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54221))[7];
//not do dummy comment
void* lst = (decode_clo(env54221))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env54221))[5];
//not do dummy comment
void* kont53954 = (decode_clo(env54221))[4];
//not do dummy comment
void* x = (decode_clo(env54221))[3];
//not do dummy comment
void* car = (decode_clo(env54221))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env54221))[1];

//if-clause
bool if_guard54859 = is_true(a5385654068);
if(if_guard54859)
{
void* x5385754069 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53954);
arg_buffer[2] = x5385754069;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53954))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54861 = alloc_clo(lam54218_fptr, 6);

//setting env list
clo54861[1] = member_u63;
clo54861[2] = x;
clo54861[3] = kont53954;
clo54861[4] = equal_u63;
clo54861[5] = lst;
clo54861[6] = cdr;
void* f5395754070 = encode_clo(clo54861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5395754070;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54220 = encode_clo(alloc_clo(lam54220_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54222 = arg_buffer[1];
//reading env and args
void* kont53954 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54863 = alloc_clo(lam54220_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo54863[1] = member_u63;
clo54863[2] = car;
clo54863[3] = x;
clo54863[4] = kont53954;
clo54863[5] = equal_u63;
clo54863[6] = lst;
clo54863[7] = cdr;
void* f5395854067 = encode_clo(clo54863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5395854067;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam54223_fptr() // lam54223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54224 = arg_buffer[1];
//reading env and args
void* a5386554084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldl = (decode_clo(env54224))[4];
//not do dummy comment
void* kont53959 = (decode_clo(env54224))[3];
//not do dummy comment
void* a5386454082 = (decode_clo(env54224))[2];
//not do dummy comment
void* fun = (decode_clo(env54224))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont53959;
arg_buffer[3] = fun;
arg_buffer[4] = a5386454082;
arg_buffer[5] = a5386554084;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54223 = encode_clo(alloc_clo(lam54223_fptr, 0));

void* lam54225_fptr() // lam54225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54226 = arg_buffer[1];
//reading env and args
void* a5386454082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54226))[5];
//not do dummy comment
void* lst = (decode_clo(env54226))[4];
//not do dummy comment
void* fun = (decode_clo(env54226))[3];
//not do dummy comment
void* foldl = (decode_clo(env54226))[2];
//not do dummy comment
void* kont53959 = (decode_clo(env54226))[1];

//creating new closure instance
void** clo54865 = alloc_clo(lam54223_fptr, 4);

//setting env list
clo54865[1] = fun;
clo54865[2] = a5386454082;
clo54865[3] = kont53959;
clo54865[4] = foldl;
void* f5396054083 = encode_clo(clo54865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5396054083;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54225 = encode_clo(alloc_clo(lam54225_fptr, 0));

void* lam54227_fptr() // lam54227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54228 = arg_buffer[1];
//reading env and args
void* a5386354080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54228))[6];
//not do dummy comment
void* lst = (decode_clo(env54228))[5];
//not do dummy comment
void* fun = (decode_clo(env54228))[4];
//not do dummy comment
void* acc = (decode_clo(env54228))[3];
//not do dummy comment
void* foldl = (decode_clo(env54228))[2];
//not do dummy comment
void* kont53959 = (decode_clo(env54228))[1];

//creating new closure instance
void** clo54867 = alloc_clo(lam54225_fptr, 5);

//setting env list
clo54867[1] = kont53959;
clo54867[2] = foldl;
clo54867[3] = fun;
clo54867[4] = lst;
clo54867[5] = cdr;
void* f5396154081 = encode_clo(clo54867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5396154081;
arg_buffer[3] = a5386354080;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54227 = encode_clo(alloc_clo(lam54227_fptr, 0));

void* lam54229_fptr() // lam54229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54230 = arg_buffer[1];
//reading env and args
void* a5386254078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54230))[7];
//not do dummy comment
void* lst = (decode_clo(env54230))[6];
//not do dummy comment
void* fun = (decode_clo(env54230))[5];
//not do dummy comment
void* acc = (decode_clo(env54230))[4];
//not do dummy comment
void* car = (decode_clo(env54230))[3];
//not do dummy comment
void* foldl = (decode_clo(env54230))[2];
//not do dummy comment
void* kont53959 = (decode_clo(env54230))[1];

//if-clause
bool if_guard54868 = is_true(a5386254078);
if(if_guard54868)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53959);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53959))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54870 = alloc_clo(lam54227_fptr, 6);

//setting env list
clo54870[1] = kont53959;
clo54870[2] = foldl;
clo54870[3] = acc;
clo54870[4] = fun;
clo54870[5] = lst;
clo54870[6] = cdr;
void* f5396254079 = encode_clo(clo54870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5396254079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54229 = encode_clo(alloc_clo(lam54229_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54231 = arg_buffer[1];
//reading env and args
void* kont53959 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54872 = alloc_clo(lam54229_fptr, 7);

//setting env list
clo54872[1] = kont53959;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo54872[2] = foldl;
clo54872[3] = car;
clo54872[4] = acc;
clo54872[5] = fun;
clo54872[6] = lst;
clo54872[7] = cdr;
void* f5396354077 = encode_clo(clo54872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5396354077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam54232_fptr() // lam54232 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54233 = arg_buffer[1];
//reading env and args
void* a5386954092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5386754088 = (decode_clo(env54233))[3];
//not do dummy comment
void* kont53964 = (decode_clo(env54233))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54233))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53964;
arg_buffer[3] = a5386754088;
arg_buffer[4] = a5386954092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54232 = encode_clo(alloc_clo(lam54232_fptr, 0));

void* lam54234_fptr() // lam54234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54235 = arg_buffer[1];
//reading env and args
void* a5386854090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5386754088 = (decode_clo(env54235))[5];
//not do dummy comment
void* kont53964 = (decode_clo(env54235))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54235))[3];
//not do dummy comment
void* lst2 = (decode_clo(env54235))[2];
//not do dummy comment
void* cons = (decode_clo(env54235))[1];

//creating new closure instance
void** clo54874 = alloc_clo(lam54232_fptr, 3);

//setting env list
clo54874[1] = reverse_u45helper;
clo54874[2] = kont53964;
clo54874[3] = a5386754088;
void* f5396554091 = encode_clo(clo54874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5396554091;
arg_buffer[3] = a5386854090;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54234 = encode_clo(alloc_clo(lam54234_fptr, 0));

void* lam54236_fptr() // lam54236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54237 = arg_buffer[1];
//reading env and args
void* a5386754088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54237))[6];
//not do dummy comment
void* lst2 = (decode_clo(env54237))[5];
//not do dummy comment
void* car = (decode_clo(env54237))[4];
//not do dummy comment
void* cons = (decode_clo(env54237))[3];
//not do dummy comment
void* lst = (decode_clo(env54237))[2];
//not do dummy comment
void* kont53964 = (decode_clo(env54237))[1];

//creating new closure instance
void** clo54876 = alloc_clo(lam54234_fptr, 5);

//setting env list
clo54876[1] = cons;
clo54876[2] = lst2;
clo54876[3] = reverse_u45helper;
clo54876[4] = kont53964;
clo54876[5] = a5386754088;
void* f5396654089 = encode_clo(clo54876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5396654089;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54236 = encode_clo(alloc_clo(lam54236_fptr, 0));

void* lam54238_fptr() // lam54238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54239 = arg_buffer[1];
//reading env and args
void* a5386654086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54239))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54239))[6];
//not do dummy comment
void* lst2 = (decode_clo(env54239))[5];
//not do dummy comment
void* car = (decode_clo(env54239))[4];
//not do dummy comment
void* cons = (decode_clo(env54239))[3];
//not do dummy comment
void* lst = (decode_clo(env54239))[2];
//not do dummy comment
void* kont53964 = (decode_clo(env54239))[1];

//if-clause
bool if_guard54877 = is_true(a5386654086);
if(if_guard54877)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53964);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53964))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54879 = alloc_clo(lam54236_fptr, 6);

//setting env list
clo54879[1] = kont53964;
clo54879[2] = lst;
clo54879[3] = cons;
clo54879[4] = car;
clo54879[5] = lst2;
clo54879[6] = reverse_u45helper;
void* f5396754087 = encode_clo(clo54879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5396754087;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54238 = encode_clo(alloc_clo(lam54238_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54240 = arg_buffer[1];
//reading env and args
void* kont53964 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54881 = alloc_clo(lam54238_fptr, 7);

//setting env list
clo54881[1] = kont53964;
clo54881[2] = lst;
clo54881[3] = cons;
clo54881[4] = car;
clo54881[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo54881[6] = reverse_u45helper;
clo54881[7] = cdr;
void* f5396854085 = encode_clo(clo54881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5396854085;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam54241_fptr() // lam54241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54242 = arg_buffer[1];
//reading env and args
void* a5387054094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54242))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env54242))[2];
//not do dummy comment
void* kont53969 = (decode_clo(env54242))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont53969;
arg_buffer[3] = lst;
arg_buffer[4] = a5387054094;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54241 = encode_clo(alloc_clo(lam54241_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54243 = arg_buffer[1];
//reading env and args
void* kont53969 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54883 = alloc_clo(lam54241_fptr, 3);

//setting env list
clo54883[1] = kont53969;
clo54883[2] = reverse_u45helper;
clo54883[3] = lst;
void* f5397054093 = encode_clo(clo54883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5397054093;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam54244_fptr() // lam54244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54245 = arg_buffer[1];
//reading env and args
void* x5387354099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53971 = (decode_clo(env54245))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53971);
arg_buffer[2] = x5387354099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54244 = encode_clo(alloc_clo(lam54244_fptr, 0));

void* lam54246_fptr() // lam54246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54247 = arg_buffer[1];
//reading env and args
void* a5387854108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5387654104 = (decode_clo(env54247))[4];
//not do dummy comment
void* kont53971 = (decode_clo(env54247))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54247))[2];
//not do dummy comment
void* a5387454101 = (decode_clo(env54247))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53971;
arg_buffer[3] = a5387454101;
arg_buffer[4] = a5387654104;
arg_buffer[5] = a5387854108;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54246 = encode_clo(alloc_clo(lam54246_fptr, 0));

void* lam54248_fptr() // lam54248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54249 = arg_buffer[1];
//reading env and args
void* a5387754106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5387654104 = (decode_clo(env54249))[6];
//not do dummy comment
void* kont53971 = (decode_clo(env54249))[5];
//not do dummy comment
void* a5387454101 = (decode_clo(env54249))[4];
//not do dummy comment
void* cons = (decode_clo(env54249))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54249))[2];
//not do dummy comment
void* lst2 = (decode_clo(env54249))[1];

//creating new closure instance
void** clo54885 = alloc_clo(lam54246_fptr, 4);

//setting env list
clo54885[1] = a5387454101;
clo54885[2] = take_u45helper;
clo54885[3] = kont53971;
clo54885[4] = a5387654104;
void* f5397354107 = encode_clo(clo54885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5397354107;
arg_buffer[3] = a5387754106;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54248 = encode_clo(alloc_clo(lam54248_fptr, 0));

void* lam54250_fptr() // lam54250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54251 = arg_buffer[1];
//reading env and args
void* a5387654104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54251))[7];
//not do dummy comment
void* kont53971 = (decode_clo(env54251))[6];
//not do dummy comment
void* cons = (decode_clo(env54251))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env54251))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54251))[3];
//not do dummy comment
void* a5387454101 = (decode_clo(env54251))[2];
//not do dummy comment
void* car = (decode_clo(env54251))[1];

//creating new closure instance
void** clo54887 = alloc_clo(lam54248_fptr, 6);

//setting env list
clo54887[1] = lst2;
clo54887[2] = take_u45helper;
clo54887[3] = cons;
clo54887[4] = a5387454101;
clo54887[5] = kont53971;
clo54887[6] = a5387654104;
void* f5397454105 = encode_clo(clo54887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5397454105;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54250 = encode_clo(alloc_clo(lam54250_fptr, 0));

void* lam54253_fptr() // lam54253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54254 = arg_buffer[1];
//reading env and args
void* a5387454101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54254))[8];
//not do dummy comment
void* kont53971 = (decode_clo(env54254))[7];
//not do dummy comment
void* cons = (decode_clo(env54254))[6];
//not do dummy comment
void* _u45 = (decode_clo(env54254))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env54254))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54254))[3];
//not do dummy comment
void* n = (decode_clo(env54254))[2];
//not do dummy comment
void* car = (decode_clo(env54254))[1];
mpz_t* mpzvar54888 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54888, "1", 10);
void* a5387554102 = encode_mpz(mpzvar54888);

//creating new closure instance
void** clo54890 = alloc_clo(lam54250_fptr, 7);

//setting env list
clo54890[1] = car;
clo54890[2] = a5387454101;
clo54890[3] = lst2;
clo54890[4] = take_u45helper;
clo54890[5] = cons;
clo54890[6] = kont53971;
clo54890[7] = lst;
void* f5397554103 = encode_clo(clo54890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5397554103;
arg_buffer[3] = n;
arg_buffer[4] = a5387554102;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54253 = encode_clo(alloc_clo(lam54253_fptr, 0));

void* lam54255_fptr() // lam54255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54256 = arg_buffer[1];
//reading env and args
void* a5387254097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54256))[10];
//not do dummy comment
void* lst = (decode_clo(env54256))[9];
//not do dummy comment
void* reverse = (decode_clo(env54256))[8];
//not do dummy comment
void* kont53971 = (decode_clo(env54256))[7];
//not do dummy comment
void* cons = (decode_clo(env54256))[6];
//not do dummy comment
void* _u45 = (decode_clo(env54256))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env54256))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54256))[3];
//not do dummy comment
void* n = (decode_clo(env54256))[2];
//not do dummy comment
void* car = (decode_clo(env54256))[1];

//if-clause
bool if_guard54891 = is_true(a5387254097);
if(if_guard54891)
{

//creating new closure instance
void** clo54893 = alloc_clo(lam54244_fptr, 1);

//setting env list
clo54893[1] = kont53971;
void* f5397254098 = encode_clo(clo54893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5397254098;
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
void** clo54895 = alloc_clo(lam54253_fptr, 8);

//setting env list
clo54895[1] = car;
clo54895[2] = n;
clo54895[3] = lst2;
clo54895[4] = take_u45helper;
clo54895[5] = _u45;
clo54895[6] = cons;
clo54895[7] = kont53971;
clo54895[8] = lst;
void* f5397654100 = encode_clo(clo54895);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5397654100;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54255 = encode_clo(alloc_clo(lam54255_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54258 = arg_buffer[1];
//reading env and args
void* kont53971 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar54896 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54896, "0", 10);
void* a5387154095 = encode_mpz(mpzvar54896);

//creating new closure instance
void** clo54898 = alloc_clo(lam54255_fptr, 10);

//setting env list
clo54898[1] = car;
clo54898[2] = n;
clo54898[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo54898[4] = take_u45helper;
clo54898[5] = _u45;
clo54898[6] = cons;
clo54898[7] = kont53971;
clo54898[8] = reverse;
clo54898[9] = lst;
clo54898[10] = cdr;
void* f5397754096 = encode_clo(clo54898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5397754096;
arg_buffer[3] = n;
arg_buffer[4] = a5387154095;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam54259_fptr() // lam54259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54260 = arg_buffer[1];
//reading env and args
void* a5387954110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53978 = (decode_clo(env54260))[4];
//not do dummy comment
void* lst = (decode_clo(env54260))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env54260))[2];
//not do dummy comment
void* n = (decode_clo(env54260))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont53978;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5387954110;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54259 = encode_clo(alloc_clo(lam54259_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54261 = arg_buffer[1];
//reading env and args
void* kont53978 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54900 = alloc_clo(lam54259_fptr, 4);

//setting env list
clo54900[1] = n;
clo54900[2] = take_u45helper;
clo54900[3] = lst;
clo54900[4] = kont53978;
void* f5397954109 = encode_clo(clo54900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5397954109;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam54263_fptr() // lam54263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54264 = arg_buffer[1];
//reading env and args
void* a5388454118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53980 = (decode_clo(env54264))[3];
//not do dummy comment
void* _u43 = (decode_clo(env54264))[2];
//not do dummy comment
void* a5388254114 = (decode_clo(env54264))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont53980;
arg_buffer[3] = a5388254114;
arg_buffer[4] = a5388454118;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54263 = encode_clo(alloc_clo(lam54263_fptr, 0));

void* lam54265_fptr() // lam54265 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54266 = arg_buffer[1];
//reading env and args
void* a5388354116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53980 = (decode_clo(env54266))[4];
//not do dummy comment
void* length = (decode_clo(env54266))[3];
//not do dummy comment
void* _u43 = (decode_clo(env54266))[2];
//not do dummy comment
void* a5388254114 = (decode_clo(env54266))[1];

//creating new closure instance
void** clo54902 = alloc_clo(lam54263_fptr, 3);

//setting env list
clo54902[1] = a5388254114;
clo54902[2] = _u43;
clo54902[3] = kont53980;
void* f5398154117 = encode_clo(clo54902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5398154117;
arg_buffer[3] = a5388354116;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54265 = encode_clo(alloc_clo(lam54265_fptr, 0));

void* lam54268_fptr() // lam54268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54269 = arg_buffer[1];
//reading env and args
void* a5388054112 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54269))[5];
//not do dummy comment
void* length = (decode_clo(env54269))[4];
//not do dummy comment
void* _u43 = (decode_clo(env54269))[3];
//not do dummy comment
void* lst = (decode_clo(env54269))[2];
//not do dummy comment
void* kont53980 = (decode_clo(env54269))[1];

//if-clause
bool if_guard54903 = is_true(a5388054112);
if(if_guard54903)
{
mpz_t* mpzvar54904 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54904, "0", 10);
void* x5388154113 = encode_mpz(mpzvar54904);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53980);
arg_buffer[2] = x5388154113;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53980))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar54905 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54905, "1", 10);
void* a5388254114 = encode_mpz(mpzvar54905);

//creating new closure instance
void** clo54907 = alloc_clo(lam54265_fptr, 4);

//setting env list
clo54907[1] = a5388254114;
clo54907[2] = _u43;
clo54907[3] = length;
clo54907[4] = kont53980;
void* f5398254115 = encode_clo(clo54907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5398254115;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54268 = encode_clo(alloc_clo(lam54268_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54270 = arg_buffer[1];
//reading env and args
void* kont53980 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo54909 = alloc_clo(lam54268_fptr, 5);

//setting env list
clo54909[1] = kont53980;
clo54909[2] = lst;
clo54909[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo54909[4] = length;
clo54909[5] = cdr;
void* f5398354111 = encode_clo(clo54909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5398354111;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam54271_fptr() // lam54271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54272 = arg_buffer[1];
//reading env and args
void* x5388654122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53984 = (decode_clo(env54272))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53984);
arg_buffer[2] = x5388654122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53984))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54271 = encode_clo(alloc_clo(lam54271_fptr, 0));

void* lam54273_fptr() // lam54273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54274 = arg_buffer[1];
//reading env and args
void* a5389054130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5388854126 = (decode_clo(env54274))[3];
//not do dummy comment
void* kont53984 = (decode_clo(env54274))[2];
//not do dummy comment
void* cons = (decode_clo(env54274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53984;
arg_buffer[3] = a5388854126;
arg_buffer[4] = a5389054130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54273 = encode_clo(alloc_clo(lam54273_fptr, 0));

void* lam54275_fptr() // lam54275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54276 = arg_buffer[1];
//reading env and args
void* a5388954128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env54276))[5];
//not do dummy comment
void* a5388854126 = (decode_clo(env54276))[4];
//not do dummy comment
void* kont53984 = (decode_clo(env54276))[3];
//not do dummy comment
void* proc = (decode_clo(env54276))[2];
//not do dummy comment
void* cons = (decode_clo(env54276))[1];

//creating new closure instance
void** clo54911 = alloc_clo(lam54273_fptr, 3);

//setting env list
clo54911[1] = cons;
clo54911[2] = kont53984;
clo54911[3] = a5388854126;
void* f5398654129 = encode_clo(clo54911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5398654129;
arg_buffer[3] = proc;
arg_buffer[4] = a5388954128;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54275 = encode_clo(alloc_clo(lam54275_fptr, 0));

void* lam54277_fptr() // lam54277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54278 = arg_buffer[1];
//reading env and args
void* a5388854126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54278))[6];
//not do dummy comment
void* lst = (decode_clo(env54278))[5];
//not do dummy comment
void* map = (decode_clo(env54278))[4];
//not do dummy comment
void* kont53984 = (decode_clo(env54278))[3];
//not do dummy comment
void* proc = (decode_clo(env54278))[2];
//not do dummy comment
void* cons = (decode_clo(env54278))[1];

//creating new closure instance
void** clo54913 = alloc_clo(lam54275_fptr, 5);

//setting env list
clo54913[1] = cons;
clo54913[2] = proc;
clo54913[3] = kont53984;
clo54913[4] = a5388854126;
clo54913[5] = map;
void* f5398754127 = encode_clo(clo54913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5398754127;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54277 = encode_clo(alloc_clo(lam54277_fptr, 0));

void* lam54279_fptr() // lam54279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54280 = arg_buffer[1];
//reading env and args
void* a5388754124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54280))[6];
//not do dummy comment
void* lst = (decode_clo(env54280))[5];
//not do dummy comment
void* map = (decode_clo(env54280))[4];
//not do dummy comment
void* kont53984 = (decode_clo(env54280))[3];
//not do dummy comment
void* proc = (decode_clo(env54280))[2];
//not do dummy comment
void* cons = (decode_clo(env54280))[1];

//creating new closure instance
void** clo54915 = alloc_clo(lam54277_fptr, 6);

//setting env list
clo54915[1] = cons;
clo54915[2] = proc;
clo54915[3] = kont53984;
clo54915[4] = map;
clo54915[5] = lst;
clo54915[6] = cdr;
void* f5398854125 = encode_clo(clo54915);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5398854125;
arg_buffer[3] = a5388754124;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54279 = encode_clo(alloc_clo(lam54279_fptr, 0));

void* lam54281_fptr() // lam54281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54282 = arg_buffer[1];
//reading env and args
void* a5388554120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54282))[8];
//not do dummy comment
void* map = (decode_clo(env54282))[7];
//not do dummy comment
void* kont53984 = (decode_clo(env54282))[6];
//not do dummy comment
void* proc = (decode_clo(env54282))[5];
//not do dummy comment
void* car = (decode_clo(env54282))[4];
//not do dummy comment
void* cons = (decode_clo(env54282))[3];
//not do dummy comment
void* list = (decode_clo(env54282))[2];
//not do dummy comment
void* cdr = (decode_clo(env54282))[1];

//if-clause
bool if_guard54916 = is_true(a5388554120);
if(if_guard54916)
{

//creating new closure instance
void** clo54918 = alloc_clo(lam54271_fptr, 1);

//setting env list
clo54918[1] = kont53984;
void* f5398554121 = encode_clo(clo54918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5398554121;
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
void** clo54920 = alloc_clo(lam54279_fptr, 6);

//setting env list
clo54920[1] = cons;
clo54920[2] = proc;
clo54920[3] = kont53984;
clo54920[4] = map;
clo54920[5] = lst;
clo54920[6] = cdr;
void* f5398954123 = encode_clo(clo54920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5398954123;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54281 = encode_clo(alloc_clo(lam54281_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54283 = arg_buffer[1];
//reading env and args
void* kont53984 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54922 = alloc_clo(lam54281_fptr, 8);

//setting env list
clo54922[1] = cdr;
clo54922[2] = list;
clo54922[3] = cons;
clo54922[4] = car;
clo54922[5] = proc;
clo54922[6] = kont53984;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo54922[7] = map;
clo54922[8] = lst;
void* f5399054119 = encode_clo(clo54922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5399054119;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam54284_fptr() // lam54284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54285 = arg_buffer[1];
//reading env and args
void* x5389254134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont53991 = (decode_clo(env54285))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont53991);
arg_buffer[2] = x5389254134;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont53991))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54284 = encode_clo(alloc_clo(lam54284_fptr, 0));

void* lam54286_fptr() // lam54286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54287 = arg_buffer[1];
//reading env and args
void* a5389754144 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5389554140 = (decode_clo(env54287))[3];
//not do dummy comment
void* cons = (decode_clo(env54287))[2];
//not do dummy comment
void* kont53991 = (decode_clo(env54287))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont53991;
arg_buffer[3] = a5389554140;
arg_buffer[4] = a5389754144;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54286 = encode_clo(alloc_clo(lam54286_fptr, 0));

void* lam54288_fptr() // lam54288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54289 = arg_buffer[1];
//reading env and args
void* a5389654142 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5389554140 = (decode_clo(env54289))[5];
//not do dummy comment
void* op = (decode_clo(env54289))[4];
//not do dummy comment
void* filter = (decode_clo(env54289))[3];
//not do dummy comment
void* cons = (decode_clo(env54289))[2];
//not do dummy comment
void* kont53991 = (decode_clo(env54289))[1];

//creating new closure instance
void** clo54924 = alloc_clo(lam54286_fptr, 3);

//setting env list
clo54924[1] = kont53991;
clo54924[2] = cons;
clo54924[3] = a5389554140;
void* f5399354143 = encode_clo(clo54924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5399354143;
arg_buffer[3] = op;
arg_buffer[4] = a5389654142;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54288 = encode_clo(alloc_clo(lam54288_fptr, 0));

void* lam54290_fptr() // lam54290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54291 = arg_buffer[1];
//reading env and args
void* a5389554140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54291))[6];
//not do dummy comment
void* lst = (decode_clo(env54291))[5];
//not do dummy comment
void* op = (decode_clo(env54291))[4];
//not do dummy comment
void* filter = (decode_clo(env54291))[3];
//not do dummy comment
void* cons = (decode_clo(env54291))[2];
//not do dummy comment
void* kont53991 = (decode_clo(env54291))[1];

//creating new closure instance
void** clo54926 = alloc_clo(lam54288_fptr, 5);

//setting env list
clo54926[1] = kont53991;
clo54926[2] = cons;
clo54926[3] = filter;
clo54926[4] = op;
clo54926[5] = a5389554140;
void* f5399454141 = encode_clo(clo54926);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5399454141;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54290 = encode_clo(alloc_clo(lam54290_fptr, 0));

void* lam54292_fptr() // lam54292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54293 = arg_buffer[1];
//reading env and args
void* a5389854146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env54293))[3];
//not do dummy comment
void* filter = (decode_clo(env54293))[2];
//not do dummy comment
void* kont53991 = (decode_clo(env54293))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont53991;
arg_buffer[3] = op;
arg_buffer[4] = a5389854146;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54292 = encode_clo(alloc_clo(lam54292_fptr, 0));

void* lam54294_fptr() // lam54294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54295 = arg_buffer[1];
//reading env and args
void* a5389454138 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54295))[7];
//not do dummy comment
void* lst = (decode_clo(env54295))[6];
//not do dummy comment
void* op = (decode_clo(env54295))[5];
//not do dummy comment
void* cons = (decode_clo(env54295))[4];
//not do dummy comment
void* kont53991 = (decode_clo(env54295))[3];
//not do dummy comment
void* filter = (decode_clo(env54295))[2];
//not do dummy comment
void* car = (decode_clo(env54295))[1];

//if-clause
bool if_guard54927 = is_true(a5389454138);
if(if_guard54927)
{

//creating new closure instance
void** clo54929 = alloc_clo(lam54290_fptr, 6);

//setting env list
clo54929[1] = kont53991;
clo54929[2] = cons;
clo54929[3] = filter;
clo54929[4] = op;
clo54929[5] = lst;
clo54929[6] = cdr;
void* f5399554139 = encode_clo(clo54929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5399554139;
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
void** clo54931 = alloc_clo(lam54292_fptr, 3);

//setting env list
clo54931[1] = kont53991;
clo54931[2] = filter;
clo54931[3] = op;
void* f5399654145 = encode_clo(clo54931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5399654145;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54294 = encode_clo(alloc_clo(lam54294_fptr, 0));

void* lam54296_fptr() // lam54296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54297 = arg_buffer[1];
//reading env and args
void* a5389354136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54297))[7];
//not do dummy comment
void* lst = (decode_clo(env54297))[6];
//not do dummy comment
void* op = (decode_clo(env54297))[5];
//not do dummy comment
void* cons = (decode_clo(env54297))[4];
//not do dummy comment
void* kont53991 = (decode_clo(env54297))[3];
//not do dummy comment
void* filter = (decode_clo(env54297))[2];
//not do dummy comment
void* car = (decode_clo(env54297))[1];

//creating new closure instance
void** clo54933 = alloc_clo(lam54294_fptr, 7);

//setting env list
clo54933[1] = car;
clo54933[2] = filter;
clo54933[3] = kont53991;
clo54933[4] = cons;
clo54933[5] = op;
clo54933[6] = lst;
clo54933[7] = cdr;
void* f5399754137 = encode_clo(clo54933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5399754137;
arg_buffer[3] = a5389354136;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54296 = encode_clo(alloc_clo(lam54296_fptr, 0));

void* lam54298_fptr() // lam54298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54299 = arg_buffer[1];
//reading env and args
void* a5389154132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env54299))[8];
//not do dummy comment
void* op = (decode_clo(env54299))[7];
//not do dummy comment
void* cons = (decode_clo(env54299))[6];
//not do dummy comment
void* kont53991 = (decode_clo(env54299))[5];
//not do dummy comment
void* list = (decode_clo(env54299))[4];
//not do dummy comment
void* cdr = (decode_clo(env54299))[3];
//not do dummy comment
void* filter = (decode_clo(env54299))[2];
//not do dummy comment
void* car = (decode_clo(env54299))[1];

//if-clause
bool if_guard54934 = is_true(a5389154132);
if(if_guard54934)
{

//creating new closure instance
void** clo54936 = alloc_clo(lam54284_fptr, 1);

//setting env list
clo54936[1] = kont53991;
void* f5399254133 = encode_clo(clo54936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5399254133;
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
void** clo54938 = alloc_clo(lam54296_fptr, 7);

//setting env list
clo54938[1] = car;
clo54938[2] = filter;
clo54938[3] = kont53991;
clo54938[4] = cons;
clo54938[5] = op;
clo54938[6] = lst;
clo54938[7] = cdr;
void* f5399854135 = encode_clo(clo54938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5399854135;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54298 = encode_clo(alloc_clo(lam54298_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54300 = arg_buffer[1];
//reading env and args
void* kont53991 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54940 = alloc_clo(lam54298_fptr, 8);

//setting env list
clo54940[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo54940[2] = filter;
clo54940[3] = cdr;
clo54940[4] = list;
clo54940[5] = kont53991;
clo54940[6] = cons;
clo54940[7] = op;
clo54940[8] = lst;
void* f5399954131 = encode_clo(clo54940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5399954131;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam54301_fptr() // lam54301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54302 = arg_buffer[1];
//reading env and args
void* a5390354154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env54302))[3];
//not do dummy comment
void* kont54000 = (decode_clo(env54302))[2];
//not do dummy comment
void* a5390154151 = (decode_clo(env54302))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont54000;
arg_buffer[3] = a5390154151;
arg_buffer[4] = a5390354154;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54301 = encode_clo(alloc_clo(lam54301_fptr, 0));

void* lam54304_fptr() // lam54304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54305 = arg_buffer[1];
//reading env and args
void* a5390154151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env54305))[4];
//not do dummy comment
void* kont54000 = (decode_clo(env54305))[3];
//not do dummy comment
void* n = (decode_clo(env54305))[2];
//not do dummy comment
void* _u45 = (decode_clo(env54305))[1];
mpz_t* mpzvar54941 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54941, "1", 10);
void* a5390254152 = encode_mpz(mpzvar54941);

//creating new closure instance
void** clo54943 = alloc_clo(lam54301_fptr, 3);

//setting env list
clo54943[1] = a5390154151;
clo54943[2] = kont54000;
clo54943[3] = drop;
void* f5400154153 = encode_clo(clo54943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5400154153;
arg_buffer[3] = n;
arg_buffer[4] = a5390254152;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54304 = encode_clo(alloc_clo(lam54304_fptr, 0));

void* lam54306_fptr() // lam54306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54307 = arg_buffer[1];
//reading env and args
void* a5390054149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54307))[6];
//not do dummy comment
void* kont54000 = (decode_clo(env54307))[5];
//not do dummy comment
void* n = (decode_clo(env54307))[4];
//not do dummy comment
void* _u45 = (decode_clo(env54307))[3];
//not do dummy comment
void* lst = (decode_clo(env54307))[2];
//not do dummy comment
void* drop = (decode_clo(env54307))[1];

//if-clause
bool if_guard54944 = is_true(a5390054149);
if(if_guard54944)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54000);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54000))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54946 = alloc_clo(lam54304_fptr, 4);

//setting env list
clo54946[1] = _u45;
clo54946[2] = n;
clo54946[3] = kont54000;
clo54946[4] = drop;
void* f5400254150 = encode_clo(clo54946);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5400254150;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54306 = encode_clo(alloc_clo(lam54306_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54309 = arg_buffer[1];
//reading env and args
void* kont54000 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar54947 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54947, "0", 10);
void* a5389954147 = encode_mpz(mpzvar54947);

//creating new closure instance
void** clo54949 = alloc_clo(lam54306_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo54949[1] = drop;
clo54949[2] = lst;
clo54949[3] = _u45;
clo54949[4] = n;
clo54949[5] = kont54000;
clo54949[6] = cdr;
void* f5400354148 = encode_clo(clo54949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5400354148;
arg_buffer[3] = n;
arg_buffer[4] = a5389954147;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam54310_fptr() // lam54310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54311 = arg_buffer[1];
//reading env and args
void* a5390754162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5390554158 = (decode_clo(env54311))[3];
//not do dummy comment
void* proc = (decode_clo(env54311))[2];
//not do dummy comment
void* kont54004 = (decode_clo(env54311))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont54004;
arg_buffer[3] = a5390554158;
arg_buffer[4] = a5390754162;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54310 = encode_clo(alloc_clo(lam54310_fptr, 0));

void* lam54312_fptr() // lam54312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54313 = arg_buffer[1];
//reading env and args
void* a5390654160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env54313))[5];
//not do dummy comment
void* a5390554158 = (decode_clo(env54313))[4];
//not do dummy comment
void* kont54004 = (decode_clo(env54313))[3];
//not do dummy comment
void* proc = (decode_clo(env54313))[2];
//not do dummy comment
void* acc = (decode_clo(env54313))[1];

//creating new closure instance
void** clo54951 = alloc_clo(lam54310_fptr, 3);

//setting env list
clo54951[1] = kont54004;
clo54951[2] = proc;
clo54951[3] = a5390554158;
void* f5400554161 = encode_clo(clo54951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5400554161;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5390654160;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54312 = encode_clo(alloc_clo(lam54312_fptr, 0));

void* lam54314_fptr() // lam54314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54315 = arg_buffer[1];
//reading env and args
void* a5390554158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54315))[6];
//not do dummy comment
void* kont54004 = (decode_clo(env54315))[5];
//not do dummy comment
void* foldr = (decode_clo(env54315))[4];
//not do dummy comment
void* lst = (decode_clo(env54315))[3];
//not do dummy comment
void* proc = (decode_clo(env54315))[2];
//not do dummy comment
void* acc = (decode_clo(env54315))[1];

//creating new closure instance
void** clo54953 = alloc_clo(lam54312_fptr, 5);

//setting env list
clo54953[1] = acc;
clo54953[2] = proc;
clo54953[3] = kont54004;
clo54953[4] = a5390554158;
clo54953[5] = foldr;
void* f5400654159 = encode_clo(clo54953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5400654159;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54314 = encode_clo(alloc_clo(lam54314_fptr, 0));

void* lam54316_fptr() // lam54316 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54317 = arg_buffer[1];
//reading env and args
void* a5390454156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54317))[7];
//not do dummy comment
void* kont54004 = (decode_clo(env54317))[6];
//not do dummy comment
void* car = (decode_clo(env54317))[5];
//not do dummy comment
void* foldr = (decode_clo(env54317))[4];
//not do dummy comment
void* lst = (decode_clo(env54317))[3];
//not do dummy comment
void* proc = (decode_clo(env54317))[2];
//not do dummy comment
void* acc = (decode_clo(env54317))[1];

//if-clause
bool if_guard54954 = is_true(a5390454156);
if(if_guard54954)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54004);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54004))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54956 = alloc_clo(lam54314_fptr, 6);

//setting env list
clo54956[1] = acc;
clo54956[2] = proc;
clo54956[3] = lst;
clo54956[4] = foldr;
clo54956[5] = kont54004;
clo54956[6] = cdr;
void* f5400754157 = encode_clo(clo54956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5400754157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54316 = encode_clo(alloc_clo(lam54316_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54318 = arg_buffer[1];
//reading env and args
void* kont54004 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo54958 = alloc_clo(lam54316_fptr, 7);

//setting env list
clo54958[1] = acc;
clo54958[2] = proc;
clo54958[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo54958[4] = foldr;
clo54958[5] = car;
clo54958[6] = kont54004;
clo54958[7] = cdr;
void* f5400854155 = encode_clo(clo54958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5400854155;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam54319_fptr() // lam54319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54320 = arg_buffer[1];
//reading env and args
void* a5391154170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54009 = (decode_clo(env54320))[3];
//not do dummy comment
void* cons = (decode_clo(env54320))[2];
//not do dummy comment
void* a5390954166 = (decode_clo(env54320))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont54009;
arg_buffer[3] = a5390954166;
arg_buffer[4] = a5391154170;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54319 = encode_clo(alloc_clo(lam54319_fptr, 0));

void* lam54321_fptr() // lam54321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54322 = arg_buffer[1];
//reading env and args
void* a5391054168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54009 = (decode_clo(env54322))[5];
//not do dummy comment
void* append = (decode_clo(env54322))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54322))[3];
//not do dummy comment
void* cons = (decode_clo(env54322))[2];
//not do dummy comment
void* a5390954166 = (decode_clo(env54322))[1];

//creating new closure instance
void** clo54960 = alloc_clo(lam54319_fptr, 3);

//setting env list
clo54960[1] = a5390954166;
clo54960[2] = cons;
clo54960[3] = kont54009;
void* f5401054169 = encode_clo(clo54960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5401054169;
arg_buffer[3] = a5391054168;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54321 = encode_clo(alloc_clo(lam54321_fptr, 0));

void* lam54323_fptr() // lam54323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54324 = arg_buffer[1];
//reading env and args
void* a5390954166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54324))[6];
//not do dummy comment
void* kont54009 = (decode_clo(env54324))[5];
//not do dummy comment
void* append = (decode_clo(env54324))[4];
//not do dummy comment
void* lst2 = (decode_clo(env54324))[3];
//not do dummy comment
void* lst1 = (decode_clo(env54324))[2];
//not do dummy comment
void* cons = (decode_clo(env54324))[1];

//creating new closure instance
void** clo54962 = alloc_clo(lam54321_fptr, 5);

//setting env list
clo54962[1] = a5390954166;
clo54962[2] = cons;
clo54962[3] = lst2;
clo54962[4] = append;
clo54962[5] = kont54009;
void* f5401154167 = encode_clo(clo54962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5401154167;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54323 = encode_clo(alloc_clo(lam54323_fptr, 0));

void* lam54325_fptr() // lam54325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54326 = arg_buffer[1];
//reading env and args
void* a5390854164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env54326))[7];
//not do dummy comment
void* kont54009 = (decode_clo(env54326))[6];
//not do dummy comment
void* append = (decode_clo(env54326))[5];
//not do dummy comment
void* lst2 = (decode_clo(env54326))[4];
//not do dummy comment
void* cons = (decode_clo(env54326))[3];
//not do dummy comment
void* lst1 = (decode_clo(env54326))[2];
//not do dummy comment
void* car = (decode_clo(env54326))[1];

//if-clause
bool if_guard54963 = is_true(a5390854164);
if(if_guard54963)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54009);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54009))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo54965 = alloc_clo(lam54323_fptr, 6);

//setting env list
clo54965[1] = cons;
clo54965[2] = lst1;
clo54965[3] = lst2;
clo54965[4] = append;
clo54965[5] = kont54009;
clo54965[6] = cdr;
void* f5401254165 = encode_clo(clo54965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5401254165;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam54325 = encode_clo(alloc_clo(lam54325_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54327 = arg_buffer[1];
//reading env and args
void* kont54009 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo54967 = alloc_clo(lam54325_fptr, 7);

//setting env list
clo54967[1] = car;
clo54967[2] = lst1;
clo54967[3] = cons;
clo54967[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo54967[5] = append;
clo54967[6] = kont54009;
clo54967[7] = cdr;
void* f5401354163 = encode_clo(clo54967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5401354163;
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
void* _54328 = arg_buffer[1];
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

void* kont5401454171 = prim_car(lst);
void* lst54172 = prim_cdr(lst);
void* x5391254173 = apply_prim_hash(lst54172);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5401454171);
arg_buffer[2] = x5391254173;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5401454171))[0]);
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
void* _54329 = arg_buffer[1];
//reading env and args
void* kont54016 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5391354174 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54016);
arg_buffer[2] = x5391354174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54016))[0]);
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
void* _54330 = arg_buffer[1];
//reading env and args
void* kont54017 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5391454175 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54017);
arg_buffer[2] = x5391454175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54017))[0]);
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
void* _54331 = arg_buffer[1];
//reading env and args
void* kont54018 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5391554176 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54018);
arg_buffer[2] = x5391554176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54018))[0]);
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
void* _54332 = arg_buffer[1];
//reading env and args
void* kont54019 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5391654177 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54019);
arg_buffer[2] = x5391654177;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54019))[0]);
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
void* _54338 = arg_buffer[1];
//reading env and args
void* kont54020 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar54968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54968, "100", 10);
void* a5391754178 = encode_mpz(mpzvar54968);
mpz_t* mpzvar54969 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54969, "20", 10);
void* a5391854179 = encode_mpz(mpzvar54969);
mpz_t* mpzvar54970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54970, "10", 10);
void* a5391954180 = encode_mpz(mpzvar54970);
mpz_t* mpzvar54971 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54971, "5", 10);
void* a5392054181 = encode_mpz(mpzvar54971);
mpz_t* mpzvar54972 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar54972, "1", 10);
void* a5392154182 = encode_mpz(mpzvar54972);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = kont54020;
arg_buffer[3] = a5391754178;
arg_buffer[4] = a5391854179;
arg_buffer[5] = a5391954180;
arg_buffer[6] = a5392054181;
arg_buffer[7] = a5392154182;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam54339_fptr() // lam54339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env54340 = arg_buffer[1];
//reading env and args
void* x5392254184 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont54021 = (decode_clo(env54340))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54021);
arg_buffer[2] = x5392254184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54021))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam54339 = encode_clo(alloc_clo(lam54339_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _54341 = arg_buffer[1];
//reading env and args
void* kont54021 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo54974 = alloc_clo(lam54339_fptr, 1);

//setting env list
clo54974[1] = kont54021;
void* f5402254183 = encode_clo(clo54974);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5402254183;
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

