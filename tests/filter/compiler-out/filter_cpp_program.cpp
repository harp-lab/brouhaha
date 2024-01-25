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
void* _14249 = arg_buffer[1];
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

void* kont1395014068 = prim_car(lst);
void* lst14069 = prim_cdr(lst);
void* x1384714070 = apply_prim__u43(lst14069);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1395014068);
arg_buffer[2] = x1384714070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1395014068))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14250 = arg_buffer[1];
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

void* kont1395214071 = prim_car(lst);
void* lst14072 = prim_cdr(lst);
void* x1384814073 = apply_prim_max(lst14072);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1395214071);
arg_buffer[2] = x1384814073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1395214071))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14251 = arg_buffer[1];
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

void* kont1395414074 = prim_car(lst);
void* lst14075 = prim_cdr(lst);
void* x1384914076 = apply_prim__u45(lst14075);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1395414074);
arg_buffer[2] = x1384914076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1395414074))[0]);
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
void* _14252 = arg_buffer[1];
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

void* kont1395614077 = prim_car(lst);
void* lst14078 = prim_cdr(lst);
void* x1385014079 = apply_prim__u42(lst14078);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1395614077);
arg_buffer[2] = x1385014079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1395614077))[0]);
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
void* _14253 = arg_buffer[1];
//reading env and args
void* kont13958 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1385114080 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13958);
arg_buffer[2] = x1385114080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13958))[0]);
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
void* _14254 = arg_buffer[1];
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

void* kont1395914081 = prim_car(lst);
void* lst14082 = prim_cdr(lst);
void* x1385214083 = apply_prim__u47(lst14082);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1395914081);
arg_buffer[2] = x1385214083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1395914081))[0]);
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
void* _14255 = arg_buffer[1];
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

void* kont1396114084 = prim_car(lst);
void* lst14085 = prim_cdr(lst);
void* x1385314086 = apply_prim__u61(lst14085);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1396114084);
arg_buffer[2] = x1385314086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1396114084))[0]);
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
void* _14256 = arg_buffer[1];
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

void* kont1396314087 = prim_car(lst);
void* lst14088 = prim_cdr(lst);
void* x1385414089 = apply_prim__u62(lst14088);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1396314087);
arg_buffer[2] = x1385414089;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1396314087))[0]);
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
void* _14257 = arg_buffer[1];
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

void* kont1396514090 = prim_car(lst);
void* lst14091 = prim_cdr(lst);
void* x1385514092 = apply_prim__u60(lst14091);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1396514090);
arg_buffer[2] = x1385514092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1396514090))[0]);
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
void* _14258 = arg_buffer[1];
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

void* kont1396714093 = prim_car(lst);
void* lst14094 = prim_cdr(lst);
void* x1385614095 = apply_prim__u60_u61(lst14094);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1396714093);
arg_buffer[2] = x1385614095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1396714093))[0]);
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
void* _14259 = arg_buffer[1];
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

void* kont1396914096 = prim_car(lst);
void* lst14097 = prim_cdr(lst);
void* x1385714098 = apply_prim__u62_u61(lst14097);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1396914096);
arg_buffer[2] = x1385714098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1396914096))[0]);
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
void* _14260 = arg_buffer[1];
//reading env and args
void* kont13971 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1385814099 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13971);
arg_buffer[2] = x1385814099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13971))[0]);
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
void* _14261 = arg_buffer[1];
//reading env and args
void* kont13972 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1385914100 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13972);
arg_buffer[2] = x1385914100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13972))[0]);
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
void* _14262 = arg_buffer[1];
//reading env and args
void* kont13973 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1386014101 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13973);
arg_buffer[2] = x1386014101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13973))[0]);
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
void* _14263 = arg_buffer[1];
//reading env and args
void* kont13974 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1386114102 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13974);
arg_buffer[2] = x1386114102;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13974))[0]);
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
void* _14264 = arg_buffer[1];
//reading env and args
void* kont13975 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1386214103 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13975);
arg_buffer[2] = x1386214103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14265 = arg_buffer[1];
//reading env and args
void* kont13976 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1386314104 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13976);
arg_buffer[2] = x1386314104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13976))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14266 = arg_buffer[1];
//reading env and args
void* kont13977 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1386414105 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13977);
arg_buffer[2] = x1386414105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13977))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam14267_fptr() // lam14267 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14268 = arg_buffer[1];
//reading env and args
void* a1386714109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env14268))[3];
//not do dummy comment
void* kont13978 = (decode_clo(env14268))[2];
//not do dummy comment
void* a1386514106 = (decode_clo(env14268))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13978;
arg_buffer[3] = a1386514106;
arg_buffer[4] = a1386714109;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14267 = encode_clo(alloc_clo(lam14267_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14271 = arg_buffer[1];
//reading env and args
void* kont13978 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar14421 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14421, "0", 10);
void* a1386514106 = encode_mpz(mpzvar14421);
mpz_t* mpzvar14422 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14422, "2", 10);
void* a1386614107 = encode_mpz(mpzvar14422);

//creating new closure instance
void** clo14424 = alloc_clo(lam14267_fptr, 3);

//setting env list
clo14424[1] = a1386514106;
clo14424[2] = kont13978;
clo14424[3] = equal_u63;
void* f1397914108 = encode_clo(clo14424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1397914108;
arg_buffer[3] = x;
arg_buffer[4] = a1386614107;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam14272_fptr() // lam14272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14273 = arg_buffer[1];
//reading env and args
void* a1387014113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont13980 = (decode_clo(env14273))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env14273))[2];
//not do dummy comment
void* a1386814110 = (decode_clo(env14273))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont13980;
arg_buffer[3] = a1386814110;
arg_buffer[4] = a1387014113;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14272 = encode_clo(alloc_clo(lam14272_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14276 = arg_buffer[1];
//reading env and args
void* kont13980 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar14425 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14425, "1", 10);
void* a1386814110 = encode_mpz(mpzvar14425);
mpz_t* mpzvar14426 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14426, "2", 10);
void* a1386914111 = encode_mpz(mpzvar14426);

//creating new closure instance
void** clo14428 = alloc_clo(lam14272_fptr, 3);

//setting env list
clo14428[1] = a1386814110;
clo14428[2] = equal_u63;
clo14428[3] = kont13980;
void* f1398114112 = encode_clo(clo14428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1398114112;
arg_buffer[3] = x;
arg_buffer[4] = a1386914111;
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
void* _14277 = arg_buffer[1];
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

void* kont1398214114 = prim_car(x);
void* x14115 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1398214114);
arg_buffer[2] = x14115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1398214114))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14278 = arg_buffer[1];
//reading env and args
void* kont13984 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1387114116 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13984);
arg_buffer[2] = x1387114116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13984))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14279 = arg_buffer[1];
//reading env and args
void* kont13985 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1387214117 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13985);
arg_buffer[2] = x1387214117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13985))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam14282_fptr() // lam14282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14283 = arg_buffer[1];
//reading env and args
void* a1387814127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env14283))[3];
//not do dummy comment
void* kont13986 = (decode_clo(env14283))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env14283))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont13986;
arg_buffer[3] = x;
arg_buffer[4] = a1387814127;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14282 = encode_clo(alloc_clo(lam14282_fptr, 0));

void* lam14284_fptr() // lam14284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14285 = arg_buffer[1];
//reading env and args
void* a1387614124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14285))[5];
//not do dummy comment
void* lst = (decode_clo(env14285))[4];
//not do dummy comment
void* x = (decode_clo(env14285))[3];
//not do dummy comment
void* kont13986 = (decode_clo(env14285))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env14285))[1];

//if-clause
bool if_guard14429 = is_true(a1387614124);
if(if_guard14429)
{
void* x1387714125 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13986);
arg_buffer[2] = x1387714125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13986))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14431 = alloc_clo(lam14282_fptr, 3);

//setting env list
clo14431[1] = member_u63;
clo14431[2] = kont13986;
clo14431[3] = x;
void* f1398714126 = encode_clo(clo14431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1398714126;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14284 = encode_clo(alloc_clo(lam14284_fptr, 0));

void* lam14286_fptr() // lam14286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14287 = arg_buffer[1];
//reading env and args
void* a1387514122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14287))[6];
//not do dummy comment
void* lst = (decode_clo(env14287))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env14287))[4];
//not do dummy comment
void* x = (decode_clo(env14287))[3];
//not do dummy comment
void* kont13986 = (decode_clo(env14287))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env14287))[1];

//creating new closure instance
void** clo14433 = alloc_clo(lam14284_fptr, 5);

//setting env list
clo14433[1] = member_u63;
clo14433[2] = kont13986;
clo14433[3] = x;
clo14433[4] = lst;
clo14433[5] = cdr;
void* f1398814123 = encode_clo(clo14433);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1398814123;
arg_buffer[3] = a1387514122;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14286 = encode_clo(alloc_clo(lam14286_fptr, 0));

void* lam14288_fptr() // lam14288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14289 = arg_buffer[1];
//reading env and args
void* a1387314119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14289))[7];
//not do dummy comment
void* lst = (decode_clo(env14289))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env14289))[5];
//not do dummy comment
void* x = (decode_clo(env14289))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env14289))[3];
//not do dummy comment
void* kont13986 = (decode_clo(env14289))[2];
//not do dummy comment
void* car = (decode_clo(env14289))[1];

//if-clause
bool if_guard14434 = is_true(a1387314119);
if(if_guard14434)
{
void* x1387414120 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13986);
arg_buffer[2] = x1387414120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13986))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14436 = alloc_clo(lam14286_fptr, 6);

//setting env list
clo14436[1] = member_u63;
clo14436[2] = kont13986;
clo14436[3] = x;
clo14436[4] = equal_u63;
clo14436[5] = lst;
clo14436[6] = cdr;
void* f1398914121 = encode_clo(clo14436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1398914121;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14288 = encode_clo(alloc_clo(lam14288_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14290 = arg_buffer[1];
//reading env and args
void* kont13986 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14438 = alloc_clo(lam14288_fptr, 7);

//setting env list
clo14438[1] = car;
clo14438[2] = kont13986;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo14438[3] = member_u63;
clo14438[4] = x;
clo14438[5] = equal_u63;
clo14438[6] = lst;
clo14438[7] = cdr;
void* f1399014118 = encode_clo(clo14438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1399014118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam14291_fptr() // lam14291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14292 = arg_buffer[1];
//reading env and args
void* a1388214135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1388114133 = (decode_clo(env14292))[4];
//not do dummy comment
void* kont13991 = (decode_clo(env14292))[3];
//not do dummy comment
void* fun = (decode_clo(env14292))[2];
//not do dummy comment
void* foldl = (decode_clo(env14292))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont13991;
arg_buffer[3] = fun;
arg_buffer[4] = a1388114133;
arg_buffer[5] = a1388214135;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14291 = encode_clo(alloc_clo(lam14291_fptr, 0));

void* lam14293_fptr() // lam14293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14294 = arg_buffer[1];
//reading env and args
void* a1388114133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14294))[5];
//not do dummy comment
void* kont13991 = (decode_clo(env14294))[4];
//not do dummy comment
void* lst = (decode_clo(env14294))[3];
//not do dummy comment
void* fun = (decode_clo(env14294))[2];
//not do dummy comment
void* foldl = (decode_clo(env14294))[1];

//creating new closure instance
void** clo14440 = alloc_clo(lam14291_fptr, 4);

//setting env list
clo14440[1] = foldl;
clo14440[2] = fun;
clo14440[3] = kont13991;
clo14440[4] = a1388114133;
void* f1399214134 = encode_clo(clo14440);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1399214134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14293 = encode_clo(alloc_clo(lam14293_fptr, 0));

void* lam14295_fptr() // lam14295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14296 = arg_buffer[1];
//reading env and args
void* a1388014131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14296))[6];
//not do dummy comment
void* kont13991 = (decode_clo(env14296))[5];
//not do dummy comment
void* lst = (decode_clo(env14296))[4];
//not do dummy comment
void* fun = (decode_clo(env14296))[3];
//not do dummy comment
void* acc = (decode_clo(env14296))[2];
//not do dummy comment
void* foldl = (decode_clo(env14296))[1];

//creating new closure instance
void** clo14442 = alloc_clo(lam14293_fptr, 5);

//setting env list
clo14442[1] = foldl;
clo14442[2] = fun;
clo14442[3] = lst;
clo14442[4] = kont13991;
clo14442[5] = cdr;
void* f1399314132 = encode_clo(clo14442);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1399314132;
arg_buffer[3] = a1388014131;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14295 = encode_clo(alloc_clo(lam14295_fptr, 0));

void* lam14297_fptr() // lam14297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14298 = arg_buffer[1];
//reading env and args
void* a1387914129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14298))[7];
//not do dummy comment
void* kont13991 = (decode_clo(env14298))[6];
//not do dummy comment
void* lst = (decode_clo(env14298))[5];
//not do dummy comment
void* fun = (decode_clo(env14298))[4];
//not do dummy comment
void* acc = (decode_clo(env14298))[3];
//not do dummy comment
void* car = (decode_clo(env14298))[2];
//not do dummy comment
void* foldl = (decode_clo(env14298))[1];

//if-clause
bool if_guard14443 = is_true(a1387914129);
if(if_guard14443)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13991);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13991))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14445 = alloc_clo(lam14295_fptr, 6);

//setting env list
clo14445[1] = foldl;
clo14445[2] = acc;
clo14445[3] = fun;
clo14445[4] = lst;
clo14445[5] = kont13991;
clo14445[6] = cdr;
void* f1399414130 = encode_clo(clo14445);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1399414130;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14297 = encode_clo(alloc_clo(lam14297_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14299 = arg_buffer[1];
//reading env and args
void* kont13991 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo14447 = alloc_clo(lam14297_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo14447[1] = foldl;
clo14447[2] = car;
clo14447[3] = acc;
clo14447[4] = fun;
clo14447[5] = lst;
clo14447[6] = kont13991;
clo14447[7] = cdr;
void* f1399514128 = encode_clo(clo14447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1399514128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam14300_fptr() // lam14300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14301 = arg_buffer[1];
//reading env and args
void* a1388614143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1388414139 = (decode_clo(env14301))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env14301))[2];
//not do dummy comment
void* kont13996 = (decode_clo(env14301))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont13996;
arg_buffer[3] = a1388414139;
arg_buffer[4] = a1388614143;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14300 = encode_clo(alloc_clo(lam14300_fptr, 0));

void* lam14302_fptr() // lam14302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14303 = arg_buffer[1];
//reading env and args
void* a1388514141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1388414139 = (decode_clo(env14303))[5];
//not do dummy comment
void* lst2 = (decode_clo(env14303))[4];
//not do dummy comment
void* cons = (decode_clo(env14303))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env14303))[2];
//not do dummy comment
void* kont13996 = (decode_clo(env14303))[1];

//creating new closure instance
void** clo14449 = alloc_clo(lam14300_fptr, 3);

//setting env list
clo14449[1] = kont13996;
clo14449[2] = reverse_u45helper;
clo14449[3] = a1388414139;
void* f1399714142 = encode_clo(clo14449);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1399714142;
arg_buffer[3] = a1388514141;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14302 = encode_clo(alloc_clo(lam14302_fptr, 0));

void* lam14304_fptr() // lam14304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14305 = arg_buffer[1];
//reading env and args
void* a1388414139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env14305))[6];
//not do dummy comment
void* lst2 = (decode_clo(env14305))[5];
//not do dummy comment
void* car = (decode_clo(env14305))[4];
//not do dummy comment
void* cons = (decode_clo(env14305))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env14305))[2];
//not do dummy comment
void* kont13996 = (decode_clo(env14305))[1];

//creating new closure instance
void** clo14451 = alloc_clo(lam14302_fptr, 5);

//setting env list
clo14451[1] = kont13996;
clo14451[2] = reverse_u45helper;
clo14451[3] = cons;
clo14451[4] = lst2;
clo14451[5] = a1388414139;
void* f1399814140 = encode_clo(clo14451);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1399814140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14304 = encode_clo(alloc_clo(lam14304_fptr, 0));

void* lam14306_fptr() // lam14306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14307 = arg_buffer[1];
//reading env and args
void* a1388314137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14307))[7];
//not do dummy comment
void* lst = (decode_clo(env14307))[6];
//not do dummy comment
void* lst2 = (decode_clo(env14307))[5];
//not do dummy comment
void* car = (decode_clo(env14307))[4];
//not do dummy comment
void* cons = (decode_clo(env14307))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env14307))[2];
//not do dummy comment
void* kont13996 = (decode_clo(env14307))[1];

//if-clause
bool if_guard14452 = is_true(a1388314137);
if(if_guard14452)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont13996);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont13996))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14454 = alloc_clo(lam14304_fptr, 6);

//setting env list
clo14454[1] = kont13996;
clo14454[2] = reverse_u45helper;
clo14454[3] = cons;
clo14454[4] = car;
clo14454[5] = lst2;
clo14454[6] = lst;
void* f1399914138 = encode_clo(clo14454);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1399914138;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14306 = encode_clo(alloc_clo(lam14306_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14308 = arg_buffer[1];
//reading env and args
void* kont13996 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14456 = alloc_clo(lam14306_fptr, 7);

//setting env list
clo14456[1] = kont13996;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo14456[2] = reverse_u45helper;
clo14456[3] = cons;
clo14456[4] = car;
clo14456[5] = lst2;
clo14456[6] = lst;
clo14456[7] = cdr;
void* f1400014136 = encode_clo(clo14456);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1400014136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam14309_fptr() // lam14309 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14310 = arg_buffer[1];
//reading env and args
void* a1388714145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env14310))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env14310))[2];
//not do dummy comment
void* kont14001 = (decode_clo(env14310))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont14001;
arg_buffer[3] = lst;
arg_buffer[4] = a1388714145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14309 = encode_clo(alloc_clo(lam14309_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14311 = arg_buffer[1];
//reading env and args
void* kont14001 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo14458 = alloc_clo(lam14309_fptr, 3);

//setting env list
clo14458[1] = kont14001;
clo14458[2] = reverse_u45helper;
clo14458[3] = lst;
void* f1400214144 = encode_clo(clo14458);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1400214144;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam14312_fptr() // lam14312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14313 = arg_buffer[1];
//reading env and args
void* x1389014150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14003 = (decode_clo(env14313))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14003);
arg_buffer[2] = x1389014150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14003))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14312 = encode_clo(alloc_clo(lam14312_fptr, 0));

void* lam14314_fptr() // lam14314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14315 = arg_buffer[1];
//reading env and args
void* a1389514159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1389114152 = (decode_clo(env14315))[4];
//not do dummy comment
void* a1389314155 = (decode_clo(env14315))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env14315))[2];
//not do dummy comment
void* kont14003 = (decode_clo(env14315))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont14003;
arg_buffer[3] = a1389114152;
arg_buffer[4] = a1389314155;
arg_buffer[5] = a1389514159;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14314 = encode_clo(alloc_clo(lam14314_fptr, 0));

void* lam14316_fptr() // lam14316 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14317 = arg_buffer[1];
//reading env and args
void* a1389414157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1389114152 = (decode_clo(env14317))[6];
//not do dummy comment
void* a1389314155 = (decode_clo(env14317))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env14317))[4];
//not do dummy comment
void* lst2 = (decode_clo(env14317))[3];
//not do dummy comment
void* kont14003 = (decode_clo(env14317))[2];
//not do dummy comment
void* cons = (decode_clo(env14317))[1];

//creating new closure instance
void** clo14460 = alloc_clo(lam14314_fptr, 4);

//setting env list
clo14460[1] = kont14003;
clo14460[2] = take_u45helper;
clo14460[3] = a1389314155;
clo14460[4] = a1389114152;
void* f1400514158 = encode_clo(clo14460);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1400514158;
arg_buffer[3] = a1389414157;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14316 = encode_clo(alloc_clo(lam14316_fptr, 0));

void* lam14318_fptr() // lam14318 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14319 = arg_buffer[1];
//reading env and args
void* a1389314155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1389114152 = (decode_clo(env14319))[7];
//not do dummy comment
void* lst = (decode_clo(env14319))[6];
//not do dummy comment
void* car = (decode_clo(env14319))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env14319))[4];
//not do dummy comment
void* lst2 = (decode_clo(env14319))[3];
//not do dummy comment
void* kont14003 = (decode_clo(env14319))[2];
//not do dummy comment
void* cons = (decode_clo(env14319))[1];

//creating new closure instance
void** clo14462 = alloc_clo(lam14316_fptr, 6);

//setting env list
clo14462[1] = cons;
clo14462[2] = kont14003;
clo14462[3] = lst2;
clo14462[4] = take_u45helper;
clo14462[5] = a1389314155;
clo14462[6] = a1389114152;
void* f1400614156 = encode_clo(clo14462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1400614156;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14318 = encode_clo(alloc_clo(lam14318_fptr, 0));

void* lam14321_fptr() // lam14321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14322 = arg_buffer[1];
//reading env and args
void* a1389114152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env14322))[8];
//not do dummy comment
void* _u45 = (decode_clo(env14322))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env14322))[6];
//not do dummy comment
void* lst2 = (decode_clo(env14322))[5];
//not do dummy comment
void* n = (decode_clo(env14322))[4];
//not do dummy comment
void* car = (decode_clo(env14322))[3];
//not do dummy comment
void* kont14003 = (decode_clo(env14322))[2];
//not do dummy comment
void* cons = (decode_clo(env14322))[1];
mpz_t* mpzvar14463 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14463, "1", 10);
void* a1389214153 = encode_mpz(mpzvar14463);

//creating new closure instance
void** clo14465 = alloc_clo(lam14318_fptr, 7);

//setting env list
clo14465[1] = cons;
clo14465[2] = kont14003;
clo14465[3] = lst2;
clo14465[4] = take_u45helper;
clo14465[5] = car;
clo14465[6] = lst;
clo14465[7] = a1389114152;
void* f1400714154 = encode_clo(clo14465);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1400714154;
arg_buffer[3] = n;
arg_buffer[4] = a1389214153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14321 = encode_clo(alloc_clo(lam14321_fptr, 0));

void* lam14323_fptr() // lam14323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14324 = arg_buffer[1];
//reading env and args
void* a1388914148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14324))[10];
//not do dummy comment
void* lst = (decode_clo(env14324))[9];
//not do dummy comment
void* reverse = (decode_clo(env14324))[8];
//not do dummy comment
void* _u45 = (decode_clo(env14324))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env14324))[6];
//not do dummy comment
void* lst2 = (decode_clo(env14324))[5];
//not do dummy comment
void* n = (decode_clo(env14324))[4];
//not do dummy comment
void* car = (decode_clo(env14324))[3];
//not do dummy comment
void* kont14003 = (decode_clo(env14324))[2];
//not do dummy comment
void* cons = (decode_clo(env14324))[1];

//if-clause
bool if_guard14466 = is_true(a1388914148);
if(if_guard14466)
{

//creating new closure instance
void** clo14468 = alloc_clo(lam14312_fptr, 1);

//setting env list
clo14468[1] = kont14003;
void* f1400414149 = encode_clo(clo14468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1400414149;
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
void** clo14470 = alloc_clo(lam14321_fptr, 8);

//setting env list
clo14470[1] = cons;
clo14470[2] = kont14003;
clo14470[3] = car;
clo14470[4] = n;
clo14470[5] = lst2;
clo14470[6] = take_u45helper;
clo14470[7] = _u45;
clo14470[8] = lst;
void* f1400814151 = encode_clo(clo14470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1400814151;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14323 = encode_clo(alloc_clo(lam14323_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14326 = arg_buffer[1];
//reading env and args
void* kont14003 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar14471 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14471, "0", 10);
void* a1388814146 = encode_mpz(mpzvar14471);

//creating new closure instance
void** clo14473 = alloc_clo(lam14323_fptr, 10);

//setting env list
clo14473[1] = cons;
clo14473[2] = kont14003;
clo14473[3] = car;
clo14473[4] = n;
clo14473[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo14473[6] = take_u45helper;
clo14473[7] = _u45;
clo14473[8] = reverse;
clo14473[9] = lst;
clo14473[10] = cdr;
void* f1400914147 = encode_clo(clo14473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1400914147;
arg_buffer[3] = n;
arg_buffer[4] = a1388814146;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam14327_fptr() // lam14327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14328 = arg_buffer[1];
//reading env and args
void* a1389614161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env14328))[4];
//not do dummy comment
void* kont14010 = (decode_clo(env14328))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env14328))[2];
//not do dummy comment
void* n = (decode_clo(env14328))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont14010;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1389614161;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14327 = encode_clo(alloc_clo(lam14327_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14329 = arg_buffer[1];
//reading env and args
void* kont14010 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14475 = alloc_clo(lam14327_fptr, 4);

//setting env list
clo14475[1] = n;
clo14475[2] = take_u45helper;
clo14475[3] = kont14010;
clo14475[4] = lst;
void* f1401114160 = encode_clo(clo14475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1401114160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam14331_fptr() // lam14331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14332 = arg_buffer[1];
//reading env and args
void* a1390114169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1389914165 = (decode_clo(env14332))[3];
//not do dummy comment
void* kont14012 = (decode_clo(env14332))[2];
//not do dummy comment
void* _u43 = (decode_clo(env14332))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont14012;
arg_buffer[3] = a1389914165;
arg_buffer[4] = a1390114169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14331 = encode_clo(alloc_clo(lam14331_fptr, 0));

void* lam14333_fptr() // lam14333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14334 = arg_buffer[1];
//reading env and args
void* a1390014167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1389914165 = (decode_clo(env14334))[4];
//not do dummy comment
void* length = (decode_clo(env14334))[3];
//not do dummy comment
void* kont14012 = (decode_clo(env14334))[2];
//not do dummy comment
void* _u43 = (decode_clo(env14334))[1];

//creating new closure instance
void** clo14477 = alloc_clo(lam14331_fptr, 3);

//setting env list
clo14477[1] = _u43;
clo14477[2] = kont14012;
clo14477[3] = a1389914165;
void* f1401314168 = encode_clo(clo14477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1401314168;
arg_buffer[3] = a1390014167;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14333 = encode_clo(alloc_clo(lam14333_fptr, 0));

void* lam14336_fptr() // lam14336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14337 = arg_buffer[1];
//reading env and args
void* a1389714163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14337))[5];
//not do dummy comment
void* lst = (decode_clo(env14337))[4];
//not do dummy comment
void* length = (decode_clo(env14337))[3];
//not do dummy comment
void* kont14012 = (decode_clo(env14337))[2];
//not do dummy comment
void* _u43 = (decode_clo(env14337))[1];

//if-clause
bool if_guard14478 = is_true(a1389714163);
if(if_guard14478)
{
mpz_t* mpzvar14479 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14479, "0", 10);
void* x1389814164 = encode_mpz(mpzvar14479);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14012);
arg_buffer[2] = x1389814164;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14012))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar14480 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14480, "1", 10);
void* a1389914165 = encode_mpz(mpzvar14480);

//creating new closure instance
void** clo14482 = alloc_clo(lam14333_fptr, 4);

//setting env list
clo14482[1] = _u43;
clo14482[2] = kont14012;
clo14482[3] = length;
clo14482[4] = a1389914165;
void* f1401414166 = encode_clo(clo14482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1401414166;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14336 = encode_clo(alloc_clo(lam14336_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14338 = arg_buffer[1];
//reading env and args
void* kont14012 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo14484 = alloc_clo(lam14336_fptr, 5);

//setting env list
clo14484[1] = _u43;
clo14484[2] = kont14012;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo14484[3] = length;
clo14484[4] = lst;
clo14484[5] = cdr;
void* f1401514162 = encode_clo(clo14484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1401514162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam14339_fptr() // lam14339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14340 = arg_buffer[1];
//reading env and args
void* x1390314173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14016 = (decode_clo(env14340))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14016);
arg_buffer[2] = x1390314173;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14016))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14339 = encode_clo(alloc_clo(lam14339_fptr, 0));

void* lam14341_fptr() // lam14341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14342 = arg_buffer[1];
//reading env and args
void* a1390714181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14016 = (decode_clo(env14342))[3];
//not do dummy comment
void* a1390514177 = (decode_clo(env14342))[2];
//not do dummy comment
void* cons = (decode_clo(env14342))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont14016;
arg_buffer[3] = a1390514177;
arg_buffer[4] = a1390714181;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14341 = encode_clo(alloc_clo(lam14341_fptr, 0));

void* lam14343_fptr() // lam14343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14344 = arg_buffer[1];
//reading env and args
void* a1390614179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env14344))[5];
//not do dummy comment
void* a1390514177 = (decode_clo(env14344))[4];
//not do dummy comment
void* cons = (decode_clo(env14344))[3];
//not do dummy comment
void* proc = (decode_clo(env14344))[2];
//not do dummy comment
void* kont14016 = (decode_clo(env14344))[1];

//creating new closure instance
void** clo14486 = alloc_clo(lam14341_fptr, 3);

//setting env list
clo14486[1] = cons;
clo14486[2] = a1390514177;
clo14486[3] = kont14016;
void* f1401814180 = encode_clo(clo14486);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1401814180;
arg_buffer[3] = proc;
arg_buffer[4] = a1390614179;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14343 = encode_clo(alloc_clo(lam14343_fptr, 0));

void* lam14345_fptr() // lam14345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14346 = arg_buffer[1];
//reading env and args
void* a1390514177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14346))[6];
//not do dummy comment
void* lst = (decode_clo(env14346))[5];
//not do dummy comment
void* map = (decode_clo(env14346))[4];
//not do dummy comment
void* cons = (decode_clo(env14346))[3];
//not do dummy comment
void* proc = (decode_clo(env14346))[2];
//not do dummy comment
void* kont14016 = (decode_clo(env14346))[1];

//creating new closure instance
void** clo14488 = alloc_clo(lam14343_fptr, 5);

//setting env list
clo14488[1] = kont14016;
clo14488[2] = proc;
clo14488[3] = cons;
clo14488[4] = a1390514177;
clo14488[5] = map;
void* f1401914178 = encode_clo(clo14488);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1401914178;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14345 = encode_clo(alloc_clo(lam14345_fptr, 0));

void* lam14347_fptr() // lam14347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14348 = arg_buffer[1];
//reading env and args
void* a1390414175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14348))[6];
//not do dummy comment
void* lst = (decode_clo(env14348))[5];
//not do dummy comment
void* map = (decode_clo(env14348))[4];
//not do dummy comment
void* cons = (decode_clo(env14348))[3];
//not do dummy comment
void* proc = (decode_clo(env14348))[2];
//not do dummy comment
void* kont14016 = (decode_clo(env14348))[1];

//creating new closure instance
void** clo14490 = alloc_clo(lam14345_fptr, 6);

//setting env list
clo14490[1] = kont14016;
clo14490[2] = proc;
clo14490[3] = cons;
clo14490[4] = map;
clo14490[5] = lst;
clo14490[6] = cdr;
void* f1402014176 = encode_clo(clo14490);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1402014176;
arg_buffer[3] = a1390414175;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14347 = encode_clo(alloc_clo(lam14347_fptr, 0));

void* lam14349_fptr() // lam14349 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14350 = arg_buffer[1];
//reading env and args
void* a1390214171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env14350))[8];
//not do dummy comment
void* map = (decode_clo(env14350))[7];
//not do dummy comment
void* car = (decode_clo(env14350))[6];
//not do dummy comment
void* cons = (decode_clo(env14350))[5];
//not do dummy comment
void* list = (decode_clo(env14350))[4];
//not do dummy comment
void* cdr = (decode_clo(env14350))[3];
//not do dummy comment
void* proc = (decode_clo(env14350))[2];
//not do dummy comment
void* kont14016 = (decode_clo(env14350))[1];

//if-clause
bool if_guard14491 = is_true(a1390214171);
if(if_guard14491)
{

//creating new closure instance
void** clo14493 = alloc_clo(lam14339_fptr, 1);

//setting env list
clo14493[1] = kont14016;
void* f1401714172 = encode_clo(clo14493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1401714172;
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
void** clo14495 = alloc_clo(lam14347_fptr, 6);

//setting env list
clo14495[1] = kont14016;
clo14495[2] = proc;
clo14495[3] = cons;
clo14495[4] = map;
clo14495[5] = lst;
clo14495[6] = cdr;
void* f1402114174 = encode_clo(clo14495);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1402114174;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14349 = encode_clo(alloc_clo(lam14349_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14351 = arg_buffer[1];
//reading env and args
void* kont14016 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14497 = alloc_clo(lam14349_fptr, 8);

//setting env list
clo14497[1] = kont14016;
clo14497[2] = proc;
clo14497[3] = cdr;
clo14497[4] = list;
clo14497[5] = cons;
clo14497[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo14497[7] = map;
clo14497[8] = lst;
void* f1402214170 = encode_clo(clo14497);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1402214170;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam14352_fptr() // lam14352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14353 = arg_buffer[1];
//reading env and args
void* x1390914185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14023 = (decode_clo(env14353))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14023);
arg_buffer[2] = x1390914185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14023))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14352 = encode_clo(alloc_clo(lam14352_fptr, 0));

void* lam14354_fptr() // lam14354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14355 = arg_buffer[1];
//reading env and args
void* a1391414195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14023 = (decode_clo(env14355))[3];
//not do dummy comment
void* a1391214191 = (decode_clo(env14355))[2];
//not do dummy comment
void* cons = (decode_clo(env14355))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont14023;
arg_buffer[3] = a1391214191;
arg_buffer[4] = a1391414195;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14354 = encode_clo(alloc_clo(lam14354_fptr, 0));

void* lam14356_fptr() // lam14356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14357 = arg_buffer[1];
//reading env and args
void* a1391314193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14023 = (decode_clo(env14357))[5];
//not do dummy comment
void* op = (decode_clo(env14357))[4];
//not do dummy comment
void* a1391214191 = (decode_clo(env14357))[3];
//not do dummy comment
void* filter = (decode_clo(env14357))[2];
//not do dummy comment
void* cons = (decode_clo(env14357))[1];

//creating new closure instance
void** clo14499 = alloc_clo(lam14354_fptr, 3);

//setting env list
clo14499[1] = cons;
clo14499[2] = a1391214191;
clo14499[3] = kont14023;
void* f1402514194 = encode_clo(clo14499);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1402514194;
arg_buffer[3] = op;
arg_buffer[4] = a1391314193;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14356 = encode_clo(alloc_clo(lam14356_fptr, 0));

void* lam14358_fptr() // lam14358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14359 = arg_buffer[1];
//reading env and args
void* a1391214191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14359))[6];
//not do dummy comment
void* kont14023 = (decode_clo(env14359))[5];
//not do dummy comment
void* lst = (decode_clo(env14359))[4];
//not do dummy comment
void* op = (decode_clo(env14359))[3];
//not do dummy comment
void* filter = (decode_clo(env14359))[2];
//not do dummy comment
void* cons = (decode_clo(env14359))[1];

//creating new closure instance
void** clo14501 = alloc_clo(lam14356_fptr, 5);

//setting env list
clo14501[1] = cons;
clo14501[2] = filter;
clo14501[3] = a1391214191;
clo14501[4] = op;
clo14501[5] = kont14023;
void* f1402614192 = encode_clo(clo14501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1402614192;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14358 = encode_clo(alloc_clo(lam14358_fptr, 0));

void* lam14360_fptr() // lam14360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14361 = arg_buffer[1];
//reading env and args
void* a1391514197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14023 = (decode_clo(env14361))[3];
//not do dummy comment
void* op = (decode_clo(env14361))[2];
//not do dummy comment
void* filter = (decode_clo(env14361))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont14023;
arg_buffer[3] = op;
arg_buffer[4] = a1391514197;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14360 = encode_clo(alloc_clo(lam14360_fptr, 0));

void* lam14362_fptr() // lam14362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14363 = arg_buffer[1];
//reading env and args
void* a1391114189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14363))[7];
//not do dummy comment
void* kont14023 = (decode_clo(env14363))[6];
//not do dummy comment
void* lst = (decode_clo(env14363))[5];
//not do dummy comment
void* op = (decode_clo(env14363))[4];
//not do dummy comment
void* cons = (decode_clo(env14363))[3];
//not do dummy comment
void* filter = (decode_clo(env14363))[2];
//not do dummy comment
void* car = (decode_clo(env14363))[1];

//if-clause
bool if_guard14502 = is_true(a1391114189);
if(if_guard14502)
{

//creating new closure instance
void** clo14504 = alloc_clo(lam14358_fptr, 6);

//setting env list
clo14504[1] = cons;
clo14504[2] = filter;
clo14504[3] = op;
clo14504[4] = lst;
clo14504[5] = kont14023;
clo14504[6] = cdr;
void* f1402714190 = encode_clo(clo14504);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1402714190;
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
void** clo14506 = alloc_clo(lam14360_fptr, 3);

//setting env list
clo14506[1] = filter;
clo14506[2] = op;
clo14506[3] = kont14023;
void* f1402814196 = encode_clo(clo14506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1402814196;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14362 = encode_clo(alloc_clo(lam14362_fptr, 0));

void* lam14364_fptr() // lam14364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14365 = arg_buffer[1];
//reading env and args
void* a1391014187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14365))[7];
//not do dummy comment
void* kont14023 = (decode_clo(env14365))[6];
//not do dummy comment
void* lst = (decode_clo(env14365))[5];
//not do dummy comment
void* op = (decode_clo(env14365))[4];
//not do dummy comment
void* cons = (decode_clo(env14365))[3];
//not do dummy comment
void* filter = (decode_clo(env14365))[2];
//not do dummy comment
void* car = (decode_clo(env14365))[1];

//creating new closure instance
void** clo14508 = alloc_clo(lam14362_fptr, 7);

//setting env list
clo14508[1] = car;
clo14508[2] = filter;
clo14508[3] = cons;
clo14508[4] = op;
clo14508[5] = lst;
clo14508[6] = kont14023;
clo14508[7] = cdr;
void* f1402914188 = encode_clo(clo14508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1402914188;
arg_buffer[3] = a1391014187;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14364 = encode_clo(alloc_clo(lam14364_fptr, 0));

void* lam14366_fptr() // lam14366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14367 = arg_buffer[1];
//reading env and args
void* a1390814183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14023 = (decode_clo(env14367))[8];
//not do dummy comment
void* lst = (decode_clo(env14367))[7];
//not do dummy comment
void* op = (decode_clo(env14367))[6];
//not do dummy comment
void* cons = (decode_clo(env14367))[5];
//not do dummy comment
void* list = (decode_clo(env14367))[4];
//not do dummy comment
void* cdr = (decode_clo(env14367))[3];
//not do dummy comment
void* filter = (decode_clo(env14367))[2];
//not do dummy comment
void* car = (decode_clo(env14367))[1];

//if-clause
bool if_guard14509 = is_true(a1390814183);
if(if_guard14509)
{

//creating new closure instance
void** clo14511 = alloc_clo(lam14352_fptr, 1);

//setting env list
clo14511[1] = kont14023;
void* f1402414184 = encode_clo(clo14511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1402414184;
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
void** clo14513 = alloc_clo(lam14364_fptr, 7);

//setting env list
clo14513[1] = car;
clo14513[2] = filter;
clo14513[3] = cons;
clo14513[4] = op;
clo14513[5] = lst;
clo14513[6] = kont14023;
clo14513[7] = cdr;
void* f1403014186 = encode_clo(clo14513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1403014186;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14366 = encode_clo(alloc_clo(lam14366_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14368 = arg_buffer[1];
//reading env and args
void* kont14023 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14515 = alloc_clo(lam14366_fptr, 8);

//setting env list
clo14515[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo14515[2] = filter;
clo14515[3] = cdr;
clo14515[4] = list;
clo14515[5] = cons;
clo14515[6] = op;
clo14515[7] = lst;
clo14515[8] = kont14023;
void* f1403114182 = encode_clo(clo14515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1403114182;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam14369_fptr() // lam14369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14370 = arg_buffer[1];
//reading env and args
void* a1392014205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env14370))[3];
//not do dummy comment
void* a1391814202 = (decode_clo(env14370))[2];
//not do dummy comment
void* kont14032 = (decode_clo(env14370))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont14032;
arg_buffer[3] = a1391814202;
arg_buffer[4] = a1392014205;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14369 = encode_clo(alloc_clo(lam14369_fptr, 0));

void* lam14372_fptr() // lam14372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14373 = arg_buffer[1];
//reading env and args
void* a1391814202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env14373))[4];
//not do dummy comment
void* kont14032 = (decode_clo(env14373))[3];
//not do dummy comment
void* n = (decode_clo(env14373))[2];
//not do dummy comment
void* _u45 = (decode_clo(env14373))[1];
mpz_t* mpzvar14516 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14516, "1", 10);
void* a1391914203 = encode_mpz(mpzvar14516);

//creating new closure instance
void** clo14518 = alloc_clo(lam14369_fptr, 3);

//setting env list
clo14518[1] = kont14032;
clo14518[2] = a1391814202;
clo14518[3] = drop;
void* f1403314204 = encode_clo(clo14518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1403314204;
arg_buffer[3] = n;
arg_buffer[4] = a1391914203;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14372 = encode_clo(alloc_clo(lam14372_fptr, 0));

void* lam14374_fptr() // lam14374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14375 = arg_buffer[1];
//reading env and args
void* a1391714200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14375))[6];
//not do dummy comment
void* kont14032 = (decode_clo(env14375))[5];
//not do dummy comment
void* n = (decode_clo(env14375))[4];
//not do dummy comment
void* _u45 = (decode_clo(env14375))[3];
//not do dummy comment
void* lst = (decode_clo(env14375))[2];
//not do dummy comment
void* drop = (decode_clo(env14375))[1];

//if-clause
bool if_guard14519 = is_true(a1391714200);
if(if_guard14519)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14032);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14032))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14521 = alloc_clo(lam14372_fptr, 4);

//setting env list
clo14521[1] = _u45;
clo14521[2] = n;
clo14521[3] = kont14032;
clo14521[4] = drop;
void* f1403414201 = encode_clo(clo14521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1403414201;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14374 = encode_clo(alloc_clo(lam14374_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14377 = arg_buffer[1];
//reading env and args
void* kont14032 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar14522 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14522, "0", 10);
void* a1391614198 = encode_mpz(mpzvar14522);

//creating new closure instance
void** clo14524 = alloc_clo(lam14374_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo14524[1] = drop;
clo14524[2] = lst;
clo14524[3] = _u45;
clo14524[4] = n;
clo14524[5] = kont14032;
clo14524[6] = cdr;
void* f1403514199 = encode_clo(clo14524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1403514199;
arg_buffer[3] = n;
arg_buffer[4] = a1391614198;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam14378_fptr() // lam14378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14379 = arg_buffer[1];
//reading env and args
void* a1392414213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env14379))[3];
//not do dummy comment
void* a1392214209 = (decode_clo(env14379))[2];
//not do dummy comment
void* kont14036 = (decode_clo(env14379))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont14036;
arg_buffer[3] = a1392214209;
arg_buffer[4] = a1392414213;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14378 = encode_clo(alloc_clo(lam14378_fptr, 0));

void* lam14380_fptr() // lam14380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14381 = arg_buffer[1];
//reading env and args
void* a1392314211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env14381))[5];
//not do dummy comment
void* a1392214209 = (decode_clo(env14381))[4];
//not do dummy comment
void* kont14036 = (decode_clo(env14381))[3];
//not do dummy comment
void* proc = (decode_clo(env14381))[2];
//not do dummy comment
void* acc = (decode_clo(env14381))[1];

//creating new closure instance
void** clo14526 = alloc_clo(lam14378_fptr, 3);

//setting env list
clo14526[1] = kont14036;
clo14526[2] = a1392214209;
clo14526[3] = proc;
void* f1403714212 = encode_clo(clo14526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1403714212;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1392314211;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14380 = encode_clo(alloc_clo(lam14380_fptr, 0));

void* lam14382_fptr() // lam14382 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14383 = arg_buffer[1];
//reading env and args
void* a1392214209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14383))[6];
//not do dummy comment
void* kont14036 = (decode_clo(env14383))[5];
//not do dummy comment
void* foldr = (decode_clo(env14383))[4];
//not do dummy comment
void* lst = (decode_clo(env14383))[3];
//not do dummy comment
void* proc = (decode_clo(env14383))[2];
//not do dummy comment
void* acc = (decode_clo(env14383))[1];

//creating new closure instance
void** clo14528 = alloc_clo(lam14380_fptr, 5);

//setting env list
clo14528[1] = acc;
clo14528[2] = proc;
clo14528[3] = kont14036;
clo14528[4] = a1392214209;
clo14528[5] = foldr;
void* f1403814210 = encode_clo(clo14528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1403814210;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14382 = encode_clo(alloc_clo(lam14382_fptr, 0));

void* lam14384_fptr() // lam14384 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14385 = arg_buffer[1];
//reading env and args
void* a1392114207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14385))[7];
//not do dummy comment
void* car = (decode_clo(env14385))[6];
//not do dummy comment
void* kont14036 = (decode_clo(env14385))[5];
//not do dummy comment
void* foldr = (decode_clo(env14385))[4];
//not do dummy comment
void* lst = (decode_clo(env14385))[3];
//not do dummy comment
void* proc = (decode_clo(env14385))[2];
//not do dummy comment
void* acc = (decode_clo(env14385))[1];

//if-clause
bool if_guard14529 = is_true(a1392114207);
if(if_guard14529)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14036);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14036))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14531 = alloc_clo(lam14382_fptr, 6);

//setting env list
clo14531[1] = acc;
clo14531[2] = proc;
clo14531[3] = lst;
clo14531[4] = foldr;
clo14531[5] = kont14036;
clo14531[6] = cdr;
void* f1403914208 = encode_clo(clo14531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1403914208;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14384 = encode_clo(alloc_clo(lam14384_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14386 = arg_buffer[1];
//reading env and args
void* kont14036 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo14533 = alloc_clo(lam14384_fptr, 7);

//setting env list
clo14533[1] = acc;
clo14533[2] = proc;
clo14533[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo14533[4] = foldr;
clo14533[5] = kont14036;
clo14533[6] = car;
clo14533[7] = cdr;
void* f1404014206 = encode_clo(clo14533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1404014206;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam14387_fptr() // lam14387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14388 = arg_buffer[1];
//reading env and args
void* a1392814221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env14388))[3];
//not do dummy comment
void* kont14041 = (decode_clo(env14388))[2];
//not do dummy comment
void* a1392614217 = (decode_clo(env14388))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont14041;
arg_buffer[3] = a1392614217;
arg_buffer[4] = a1392814221;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14387 = encode_clo(alloc_clo(lam14387_fptr, 0));

void* lam14389_fptr() // lam14389 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14390 = arg_buffer[1];
//reading env and args
void* a1392714219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env14390))[5];
//not do dummy comment
void* lst2 = (decode_clo(env14390))[4];
//not do dummy comment
void* cons = (decode_clo(env14390))[3];
//not do dummy comment
void* kont14041 = (decode_clo(env14390))[2];
//not do dummy comment
void* a1392614217 = (decode_clo(env14390))[1];

//creating new closure instance
void** clo14535 = alloc_clo(lam14387_fptr, 3);

//setting env list
clo14535[1] = a1392614217;
clo14535[2] = kont14041;
clo14535[3] = cons;
void* f1404214220 = encode_clo(clo14535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1404214220;
arg_buffer[3] = a1392714219;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14389 = encode_clo(alloc_clo(lam14389_fptr, 0));

void* lam14391_fptr() // lam14391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14392 = arg_buffer[1];
//reading env and args
void* a1392614217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14392))[6];
//not do dummy comment
void* kont14041 = (decode_clo(env14392))[5];
//not do dummy comment
void* append = (decode_clo(env14392))[4];
//not do dummy comment
void* lst2 = (decode_clo(env14392))[3];
//not do dummy comment
void* lst1 = (decode_clo(env14392))[2];
//not do dummy comment
void* cons = (decode_clo(env14392))[1];

//creating new closure instance
void** clo14537 = alloc_clo(lam14389_fptr, 5);

//setting env list
clo14537[1] = a1392614217;
clo14537[2] = kont14041;
clo14537[3] = cons;
clo14537[4] = lst2;
clo14537[5] = append;
void* f1404314218 = encode_clo(clo14537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1404314218;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14391 = encode_clo(alloc_clo(lam14391_fptr, 0));

void* lam14393_fptr() // lam14393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14394 = arg_buffer[1];
//reading env and args
void* a1392514215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env14394))[7];
//not do dummy comment
void* kont14041 = (decode_clo(env14394))[6];
//not do dummy comment
void* append = (decode_clo(env14394))[5];
//not do dummy comment
void* lst2 = (decode_clo(env14394))[4];
//not do dummy comment
void* cons = (decode_clo(env14394))[3];
//not do dummy comment
void* lst1 = (decode_clo(env14394))[2];
//not do dummy comment
void* car = (decode_clo(env14394))[1];

//if-clause
bool if_guard14538 = is_true(a1392514215);
if(if_guard14538)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14041);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14041))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo14540 = alloc_clo(lam14391_fptr, 6);

//setting env list
clo14540[1] = cons;
clo14540[2] = lst1;
clo14540[3] = lst2;
clo14540[4] = append;
clo14540[5] = kont14041;
clo14540[6] = cdr;
void* f1404414216 = encode_clo(clo14540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1404414216;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam14393 = encode_clo(alloc_clo(lam14393_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14395 = arg_buffer[1];
//reading env and args
void* kont14041 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo14542 = alloc_clo(lam14393_fptr, 7);

//setting env list
clo14542[1] = car;
clo14542[2] = lst1;
clo14542[3] = cons;
clo14542[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo14542[5] = append;
clo14542[6] = kont14041;
clo14542[7] = cdr;
void* f1404514214 = encode_clo(clo14542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1404514214;
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
void* _14396 = arg_buffer[1];
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

void* kont1404614222 = prim_car(lst);
void* lst14223 = prim_cdr(lst);
void* x1392914224 = apply_prim_hash(lst14223);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1404614222);
arg_buffer[2] = x1392914224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1404614222))[0]);
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
void* _14397 = arg_buffer[1];
//reading env and args
void* kont14048 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1393014225 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14048);
arg_buffer[2] = x1393014225;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14048))[0]);
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
void* _14398 = arg_buffer[1];
//reading env and args
void* kont14049 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1393114226 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14049);
arg_buffer[2] = x1393114226;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14049))[0]);
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
void* _14399 = arg_buffer[1];
//reading env and args
void* kont14050 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1393214227 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14050);
arg_buffer[2] = x1393214227;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14050))[0]);
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
void* _14400 = arg_buffer[1];
//reading env and args
void* kont14051 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1393314228 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14051);
arg_buffer[2] = x1393314228;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14051))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14401 = arg_buffer[1];
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

void* kont1405214229 = prim_car(lst);
void* lst14230 = prim_cdr(lst);
void* x1393414231 = apply_prim_set(lst14230);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1405214229);
arg_buffer[2] = x1393414231;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1405214229))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14402 = arg_buffer[1];
//reading env and args
void* kont14054 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1393514232 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14054);
arg_buffer[2] = x1393514232;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14054))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14403 = arg_buffer[1];
//reading env and args
void* kont14055 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1393614233 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14055);
arg_buffer[2] = x1393614233;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14055))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14404 = arg_buffer[1];
//reading env and args
void* kont14056 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1393714234 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14056);
arg_buffer[2] = x1393714234;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14056))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14405 = arg_buffer[1];
//reading env and args
void* kont14057 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1393814235 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14057);
arg_buffer[2] = x1393814235;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14057))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14406 = arg_buffer[1];
//reading env and args
void* kont14058 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1393914236 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14058);
arg_buffer[2] = x1393914236;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14058))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14407 = arg_buffer[1];
//reading env and args
void* kont14059 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1394014237 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14059);
arg_buffer[2] = x1394014237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14059))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14408 = arg_buffer[1];
//reading env and args
void* kont14060 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x1394114238 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14060);
arg_buffer[2] = x1394114238;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14060))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14409 = arg_buffer[1];
//reading env and args
void* kont14061 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x1394214239 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14061);
arg_buffer[2] = x1394214239;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14061))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14410 = arg_buffer[1];
//reading env and args
void* kont14062 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x1394314240 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14062);
arg_buffer[2] = x1394314240;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14062))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14411 = arg_buffer[1];
//reading env and args
void* kont14063 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1394414241 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14063);
arg_buffer[2] = x1394414241;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14063))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam14412_fptr() // lam14412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14413 = arg_buffer[1];
//reading env and args
void* a1394814246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env14413))[3];
//not do dummy comment
void* kont14064 = (decode_clo(env14413))[2];
//not do dummy comment
void* filter = (decode_clo(env14413))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont14064;
arg_buffer[3] = odd_u63;
arg_buffer[4] = a1394814246;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14412 = encode_clo(alloc_clo(lam14412_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14417 = arg_buffer[1];
//reading env and args
void* kont14064 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar14543 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14543, "1", 10);
void* a1394514242 = encode_mpz(mpzvar14543);
mpz_t* mpzvar14544 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14544, "2", 10);
void* a1394614243 = encode_mpz(mpzvar14544);
mpz_t* mpzvar14545 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar14545, "3", 10);
void* a1394714244 = encode_mpz(mpzvar14545);

//creating new closure instance
void** clo14547 = alloc_clo(lam14412_fptr, 3);

//setting env list
clo14547[1] = filter;
clo14547[2] = kont14064;
clo14547[3] = odd_u63;
void* f1406514245 = encode_clo(clo14547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1406514245;
arg_buffer[3] = a1394514242;
arg_buffer[4] = a1394614243;
arg_buffer[5] = a1394714244;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam14418_fptr() // lam14418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env14419 = arg_buffer[1];
//reading env and args
void* x1394914248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont14066 = (decode_clo(env14419))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont14066);
arg_buffer[2] = x1394914248;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont14066))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam14418 = encode_clo(alloc_clo(lam14418_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _14420 = arg_buffer[1];
//reading env and args
void* kont14066 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo14549 = alloc_clo(lam14418_fptr, 1);

//setting env list
clo14549[1] = kont14066;
void* f1406714247 = encode_clo(clo14549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1406714247;
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

