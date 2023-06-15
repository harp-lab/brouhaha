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
void* _40192 = arg_buffer[1];
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

void* kont3992740028 = prim_car(lst);
void* lst40029 = prim_cdr(lst);
void* x3983740030 = apply_prim__u43(lst40029);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3992740028);
arg_buffer[2] = x3983740030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3992740028))[0]);
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
void* _40193 = arg_buffer[1];
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

void* kont3992940031 = prim_car(lst);
void* lst40032 = prim_cdr(lst);
void* x3983840033 = apply_prim__u45(lst40032);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3992940031);
arg_buffer[2] = x3983840033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3992940031))[0]);
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
void* _40194 = arg_buffer[1];
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

void* kont3993140034 = prim_car(lst);
void* lst40035 = prim_cdr(lst);
void* x3983940036 = apply_prim__u42(lst40035);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3993140034);
arg_buffer[2] = x3983940036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3993140034))[0]);
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
void* _40195 = arg_buffer[1];
//reading env and args
void* kont39933 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3984040037 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39933);
arg_buffer[2] = x3984040037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39933))[0]);
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
void* _40196 = arg_buffer[1];
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

void* kont3993440038 = prim_car(lst);
void* lst40039 = prim_cdr(lst);
void* x3984140040 = apply_prim__u47(lst40039);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3993440038);
arg_buffer[2] = x3984140040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3993440038))[0]);
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
void* _40197 = arg_buffer[1];
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

void* kont3993640041 = prim_car(lst);
void* lst40042 = prim_cdr(lst);
void* x3984240043 = apply_prim__u61(lst40042);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3993640041);
arg_buffer[2] = x3984240043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3993640041))[0]);
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
void* _40198 = arg_buffer[1];
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

void* kont3993840044 = prim_car(lst);
void* lst40045 = prim_cdr(lst);
void* x3984340046 = apply_prim__u62(lst40045);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3993840044);
arg_buffer[2] = x3984340046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3993840044))[0]);
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
void* _40199 = arg_buffer[1];
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

void* kont3994040047 = prim_car(lst);
void* lst40048 = prim_cdr(lst);
void* x3984440049 = apply_prim__u60(lst40048);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3994040047);
arg_buffer[2] = x3984440049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3994040047))[0]);
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
void* _40200 = arg_buffer[1];
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

void* kont3994240050 = prim_car(lst);
void* lst40051 = prim_cdr(lst);
void* x3984540052 = apply_prim__u60_u61(lst40051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3994240050);
arg_buffer[2] = x3984540052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3994240050))[0]);
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
void* _40201 = arg_buffer[1];
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

void* kont3994440053 = prim_car(lst);
void* lst40054 = prim_cdr(lst);
void* x3984640055 = apply_prim__u62_u61(lst40054);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3994440053);
arg_buffer[2] = x3984640055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3994440053))[0]);
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
void* _40202 = arg_buffer[1];
//reading env and args
void* kont39946 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3984740056 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39946);
arg_buffer[2] = x3984740056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39946))[0]);
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
void* _40203 = arg_buffer[1];
//reading env and args
void* kont39947 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3984840057 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39947);
arg_buffer[2] = x3984840057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39947))[0]);
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
void* _40204 = arg_buffer[1];
//reading env and args
void* kont39948 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3984940058 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39948);
arg_buffer[2] = x3984940058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39948))[0]);
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
void* _40205 = arg_buffer[1];
//reading env and args
void* kont39949 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3985040059 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39949);
arg_buffer[2] = x3985040059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39949))[0]);
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
void* _40206 = arg_buffer[1];
//reading env and args
void* kont39950 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3985140060 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39950);
arg_buffer[2] = x3985140060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39950))[0]);
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
void* _40207 = arg_buffer[1];
//reading env and args
void* kont39951 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3985240061 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39951);
arg_buffer[2] = x3985240061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39951))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam40208_fptr() // lam40208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40209 = arg_buffer[1];
//reading env and args
void* a3985540065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env40209))[3];
//not do dummy comment
void* a3985340062 = (decode_clo(env40209))[2];
//not do dummy comment
void* kont39952 = (decode_clo(env40209))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39952;
arg_buffer[3] = a3985340062;
arg_buffer[4] = a3985540065;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40208 = encode_clo(alloc_clo(lam40208_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40212 = arg_buffer[1];
//reading env and args
void* kont39952 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar41191 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41191, "0", 10);
void* a3985340062 = encode_mpz(mpzvar41191);
mpz_t* mpzvar41192 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41192, "2", 10);
void* a3985440063 = encode_mpz(mpzvar41192);

//creating new closure instance
void** clo41194 = alloc_clo(lam40208_fptr, 3);

//setting env list
clo41194[1] = kont39952;
clo41194[2] = a3985340062;
clo41194[3] = equal_u63;
void* f3995340064 = encode_clo(clo41194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3995340064;
arg_buffer[3] = x;
arg_buffer[4] = a3985440063;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam40213_fptr() // lam40213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40214 = arg_buffer[1];
//reading env and args
void* a3985840069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env40214))[3];
//not do dummy comment
void* a3985640066 = (decode_clo(env40214))[2];
//not do dummy comment
void* kont39954 = (decode_clo(env40214))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont39954;
arg_buffer[3] = a3985640066;
arg_buffer[4] = a3985840069;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40213 = encode_clo(alloc_clo(lam40213_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40217 = arg_buffer[1];
//reading env and args
void* kont39954 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar41195 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41195, "1", 10);
void* a3985640066 = encode_mpz(mpzvar41195);
mpz_t* mpzvar41196 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41196, "2", 10);
void* a3985740067 = encode_mpz(mpzvar41196);

//creating new closure instance
void** clo41198 = alloc_clo(lam40213_fptr, 3);

//setting env list
clo41198[1] = kont39954;
clo41198[2] = a3985640066;
clo41198[3] = equal_u63;
void* f3995540068 = encode_clo(clo41198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3995540068;
arg_buffer[3] = x;
arg_buffer[4] = a3985740067;
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
void* _40218 = arg_buffer[1];
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

void* kont3995640070 = prim_car(x);
void* x40071 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3995640070);
arg_buffer[2] = x40071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3995640070))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam40221_fptr() // lam40221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40222 = arg_buffer[1];
//reading env and args
void* a3986440081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39958 = (decode_clo(env40222))[3];
//not do dummy comment
void* x = (decode_clo(env40222))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env40222))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont39958;
arg_buffer[3] = x;
arg_buffer[4] = a3986440081;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40221 = encode_clo(alloc_clo(lam40221_fptr, 0));

void* lam40223_fptr() // lam40223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40224 = arg_buffer[1];
//reading env and args
void* a3986240078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40224))[5];
//not do dummy comment
void* x = (decode_clo(env40224))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env40224))[3];
//not do dummy comment
void* lst = (decode_clo(env40224))[2];
//not do dummy comment
void* kont39958 = (decode_clo(env40224))[1];

//if-clause
bool if_guard41199 = is_true(a3986240078);
if(if_guard41199)
{
void* x3986340079 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39958);
arg_buffer[2] = x3986340079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39958))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41201 = alloc_clo(lam40221_fptr, 3);

//setting env list
clo41201[1] = member_u63;
clo41201[2] = x;
clo41201[3] = kont39958;
void* f3995940080 = encode_clo(clo41201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3995940080;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40223 = encode_clo(alloc_clo(lam40223_fptr, 0));

void* lam40225_fptr() // lam40225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40226 = arg_buffer[1];
//reading env and args
void* a3986140076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40226))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env40226))[5];
//not do dummy comment
void* x = (decode_clo(env40226))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env40226))[3];
//not do dummy comment
void* lst = (decode_clo(env40226))[2];
//not do dummy comment
void* kont39958 = (decode_clo(env40226))[1];

//creating new closure instance
void** clo41203 = alloc_clo(lam40223_fptr, 5);

//setting env list
clo41203[1] = kont39958;
clo41203[2] = lst;
clo41203[3] = member_u63;
clo41203[4] = x;
clo41203[5] = cdr;
void* f3996040077 = encode_clo(clo41203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3996040077;
arg_buffer[3] = a3986140076;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40225 = encode_clo(alloc_clo(lam40225_fptr, 0));

void* lam40227_fptr() // lam40227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40228 = arg_buffer[1];
//reading env and args
void* a3985940073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40228))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env40228))[6];
//not do dummy comment
void* x = (decode_clo(env40228))[5];
//not do dummy comment
void* car = (decode_clo(env40228))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env40228))[3];
//not do dummy comment
void* lst = (decode_clo(env40228))[2];
//not do dummy comment
void* kont39958 = (decode_clo(env40228))[1];

//if-clause
bool if_guard41204 = is_true(a3985940073);
if(if_guard41204)
{
void* x3986040074 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39958);
arg_buffer[2] = x3986040074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39958))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41206 = alloc_clo(lam40225_fptr, 6);

//setting env list
clo41206[1] = kont39958;
clo41206[2] = lst;
clo41206[3] = member_u63;
clo41206[4] = x;
clo41206[5] = equal_u63;
clo41206[6] = cdr;
void* f3996140075 = encode_clo(clo41206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3996140075;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40227 = encode_clo(alloc_clo(lam40227_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40229 = arg_buffer[1];
//reading env and args
void* kont39958 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41208 = alloc_clo(lam40227_fptr, 7);

//setting env list
clo41208[1] = kont39958;
clo41208[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo41208[3] = member_u63;
clo41208[4] = car;
clo41208[5] = x;
clo41208[6] = equal_u63;
clo41208[7] = cdr;
void* f3996240072 = encode_clo(clo41208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3996240072;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam40230_fptr() // lam40230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40231 = arg_buffer[1];
//reading env and args
void* a3986840089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3986740087 = (decode_clo(env40231))[4];
//not do dummy comment
void* kont39963 = (decode_clo(env40231))[3];
//not do dummy comment
void* fun = (decode_clo(env40231))[2];
//not do dummy comment
void* foldl = (decode_clo(env40231))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont39963;
arg_buffer[3] = fun;
arg_buffer[4] = a3986740087;
arg_buffer[5] = a3986840089;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40230 = encode_clo(alloc_clo(lam40230_fptr, 0));

void* lam40232_fptr() // lam40232 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40233 = arg_buffer[1];
//reading env and args
void* a3986740087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40233))[5];
//not do dummy comment
void* lst = (decode_clo(env40233))[4];
//not do dummy comment
void* kont39963 = (decode_clo(env40233))[3];
//not do dummy comment
void* fun = (decode_clo(env40233))[2];
//not do dummy comment
void* foldl = (decode_clo(env40233))[1];

//creating new closure instance
void** clo41210 = alloc_clo(lam40230_fptr, 4);

//setting env list
clo41210[1] = foldl;
clo41210[2] = fun;
clo41210[3] = kont39963;
clo41210[4] = a3986740087;
void* f3996440088 = encode_clo(clo41210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3996440088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40232 = encode_clo(alloc_clo(lam40232_fptr, 0));

void* lam40234_fptr() // lam40234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40235 = arg_buffer[1];
//reading env and args
void* a3986640085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40235))[6];
//not do dummy comment
void* lst = (decode_clo(env40235))[5];
//not do dummy comment
void* kont39963 = (decode_clo(env40235))[4];
//not do dummy comment
void* fun = (decode_clo(env40235))[3];
//not do dummy comment
void* acc = (decode_clo(env40235))[2];
//not do dummy comment
void* foldl = (decode_clo(env40235))[1];

//creating new closure instance
void** clo41212 = alloc_clo(lam40232_fptr, 5);

//setting env list
clo41212[1] = foldl;
clo41212[2] = fun;
clo41212[3] = kont39963;
clo41212[4] = lst;
clo41212[5] = cdr;
void* f3996540086 = encode_clo(clo41212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3996540086;
arg_buffer[3] = a3986640085;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40234 = encode_clo(alloc_clo(lam40234_fptr, 0));

void* lam40236_fptr() // lam40236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40237 = arg_buffer[1];
//reading env and args
void* a3986540083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40237))[7];
//not do dummy comment
void* lst = (decode_clo(env40237))[6];
//not do dummy comment
void* kont39963 = (decode_clo(env40237))[5];
//not do dummy comment
void* fun = (decode_clo(env40237))[4];
//not do dummy comment
void* acc = (decode_clo(env40237))[3];
//not do dummy comment
void* car = (decode_clo(env40237))[2];
//not do dummy comment
void* foldl = (decode_clo(env40237))[1];

//if-clause
bool if_guard41213 = is_true(a3986540083);
if(if_guard41213)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39963);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39963))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41215 = alloc_clo(lam40234_fptr, 6);

//setting env list
clo41215[1] = foldl;
clo41215[2] = acc;
clo41215[3] = fun;
clo41215[4] = kont39963;
clo41215[5] = lst;
clo41215[6] = cdr;
void* f3996640084 = encode_clo(clo41215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3996640084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40236 = encode_clo(alloc_clo(lam40236_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40238 = arg_buffer[1];
//reading env and args
void* kont39963 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo41217 = alloc_clo(lam40236_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo41217[1] = foldl;
clo41217[2] = car;
clo41217[3] = acc;
clo41217[4] = fun;
clo41217[5] = kont39963;
clo41217[6] = lst;
clo41217[7] = cdr;
void* f3996740082 = encode_clo(clo41217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3996740082;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam40239_fptr() // lam40239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40240 = arg_buffer[1];
//reading env and args
void* a3987240097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40240))[3];
//not do dummy comment
void* a3987040093 = (decode_clo(env40240))[2];
//not do dummy comment
void* kont39968 = (decode_clo(env40240))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39968;
arg_buffer[3] = a3987040093;
arg_buffer[4] = a3987240097;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40239 = encode_clo(alloc_clo(lam40239_fptr, 0));

void* lam40241_fptr() // lam40241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40242 = arg_buffer[1];
//reading env and args
void* a3987140095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40242))[5];
//not do dummy comment
void* a3987040093 = (decode_clo(env40242))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40242))[3];
//not do dummy comment
void* cons = (decode_clo(env40242))[2];
//not do dummy comment
void* kont39968 = (decode_clo(env40242))[1];

//creating new closure instance
void** clo41219 = alloc_clo(lam40239_fptr, 3);

//setting env list
clo41219[1] = kont39968;
clo41219[2] = a3987040093;
clo41219[3] = reverse_u45helper;
void* f3996940096 = encode_clo(clo41219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3996940096;
arg_buffer[3] = a3987140095;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40241 = encode_clo(alloc_clo(lam40241_fptr, 0));

void* lam40243_fptr() // lam40243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40244 = arg_buffer[1];
//reading env and args
void* a3987040093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40244))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40244))[5];
//not do dummy comment
void* lst2 = (decode_clo(env40244))[4];
//not do dummy comment
void* car = (decode_clo(env40244))[3];
//not do dummy comment
void* cons = (decode_clo(env40244))[2];
//not do dummy comment
void* kont39968 = (decode_clo(env40244))[1];

//creating new closure instance
void** clo41221 = alloc_clo(lam40241_fptr, 5);

//setting env list
clo41221[1] = kont39968;
clo41221[2] = cons;
clo41221[3] = lst2;
clo41221[4] = a3987040093;
clo41221[5] = reverse_u45helper;
void* f3997040094 = encode_clo(clo41221);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3997040094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40243 = encode_clo(alloc_clo(lam40243_fptr, 0));

void* lam40245_fptr() // lam40245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40246 = arg_buffer[1];
//reading env and args
void* a3986940091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40246))[7];
//not do dummy comment
void* lst = (decode_clo(env40246))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40246))[5];
//not do dummy comment
void* lst2 = (decode_clo(env40246))[4];
//not do dummy comment
void* car = (decode_clo(env40246))[3];
//not do dummy comment
void* cons = (decode_clo(env40246))[2];
//not do dummy comment
void* kont39968 = (decode_clo(env40246))[1];

//if-clause
bool if_guard41222 = is_true(a3986940091);
if(if_guard41222)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39968);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39968))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41224 = alloc_clo(lam40243_fptr, 6);

//setting env list
clo41224[1] = kont39968;
clo41224[2] = cons;
clo41224[3] = car;
clo41224[4] = lst2;
clo41224[5] = reverse_u45helper;
clo41224[6] = lst;
void* f3997140092 = encode_clo(clo41224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3997140092;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40245 = encode_clo(alloc_clo(lam40245_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40247 = arg_buffer[1];
//reading env and args
void* kont39968 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41226 = alloc_clo(lam40245_fptr, 7);

//setting env list
clo41226[1] = kont39968;
clo41226[2] = cons;
clo41226[3] = car;
clo41226[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo41226[5] = reverse_u45helper;
clo41226[6] = lst;
clo41226[7] = cdr;
void* f3997240090 = encode_clo(clo41226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3997240090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam40248_fptr() // lam40248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40249 = arg_buffer[1];
//reading env and args
void* a3987340099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39973 = (decode_clo(env40249))[3];
//not do dummy comment
void* lst = (decode_clo(env40249))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env40249))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont39973;
arg_buffer[3] = lst;
arg_buffer[4] = a3987340099;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40248 = encode_clo(alloc_clo(lam40248_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40250 = arg_buffer[1];
//reading env and args
void* kont39973 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo41228 = alloc_clo(lam40248_fptr, 3);

//setting env list
clo41228[1] = reverse_u45helper;
clo41228[2] = lst;
clo41228[3] = kont39973;
void* f3997440098 = encode_clo(clo41228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3997440098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam40251_fptr() // lam40251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40252 = arg_buffer[1];
//reading env and args
void* x3987640104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39975 = (decode_clo(env40252))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39975);
arg_buffer[2] = x3987640104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40251 = encode_clo(alloc_clo(lam40251_fptr, 0));

void* lam40253_fptr() // lam40253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40254 = arg_buffer[1];
//reading env and args
void* a3988140113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39975 = (decode_clo(env40254))[4];
//not do dummy comment
void* a3987740106 = (decode_clo(env40254))[3];
//not do dummy comment
void* a3987940109 = (decode_clo(env40254))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env40254))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39975;
arg_buffer[3] = a3987740106;
arg_buffer[4] = a3987940109;
arg_buffer[5] = a3988140113;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40253 = encode_clo(alloc_clo(lam40253_fptr, 0));

void* lam40255_fptr() // lam40255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40256 = arg_buffer[1];
//reading env and args
void* a3988040111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39975 = (decode_clo(env40256))[6];
//not do dummy comment
void* a3987740106 = (decode_clo(env40256))[5];
//not do dummy comment
void* a3987940109 = (decode_clo(env40256))[4];
//not do dummy comment
void* cons = (decode_clo(env40256))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40256))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40256))[1];

//creating new closure instance
void** clo41230 = alloc_clo(lam40253_fptr, 4);

//setting env list
clo41230[1] = take_u45helper;
clo41230[2] = a3987940109;
clo41230[3] = a3987740106;
clo41230[4] = kont39975;
void* f3997740112 = encode_clo(clo41230);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3997740112;
arg_buffer[3] = a3988040111;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40255 = encode_clo(alloc_clo(lam40255_fptr, 0));

void* lam40257_fptr() // lam40257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40258 = arg_buffer[1];
//reading env and args
void* a3987940109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40258))[7];
//not do dummy comment
void* kont39975 = (decode_clo(env40258))[6];
//not do dummy comment
void* a3987740106 = (decode_clo(env40258))[5];
//not do dummy comment
void* car = (decode_clo(env40258))[4];
//not do dummy comment
void* cons = (decode_clo(env40258))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40258))[2];
//not do dummy comment
void* lst2 = (decode_clo(env40258))[1];

//creating new closure instance
void** clo41232 = alloc_clo(lam40255_fptr, 6);

//setting env list
clo41232[1] = lst2;
clo41232[2] = take_u45helper;
clo41232[3] = cons;
clo41232[4] = a3987940109;
clo41232[5] = a3987740106;
clo41232[6] = kont39975;
void* f3997840110 = encode_clo(clo41232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3997840110;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40257 = encode_clo(alloc_clo(lam40257_fptr, 0));

void* lam40260_fptr() // lam40260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40261 = arg_buffer[1];
//reading env and args
void* a3987740106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40261))[8];
//not do dummy comment
void* kont39975 = (decode_clo(env40261))[7];
//not do dummy comment
void* cons = (decode_clo(env40261))[6];
//not do dummy comment
void* _u45 = (decode_clo(env40261))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env40261))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40261))[3];
//not do dummy comment
void* n = (decode_clo(env40261))[2];
//not do dummy comment
void* car = (decode_clo(env40261))[1];
mpz_t* mpzvar41233 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41233, "1", 10);
void* a3987840107 = encode_mpz(mpzvar41233);

//creating new closure instance
void** clo41235 = alloc_clo(lam40257_fptr, 7);

//setting env list
clo41235[1] = lst2;
clo41235[2] = take_u45helper;
clo41235[3] = cons;
clo41235[4] = car;
clo41235[5] = a3987740106;
clo41235[6] = kont39975;
clo41235[7] = lst;
void* f3997940108 = encode_clo(clo41235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3997940108;
arg_buffer[3] = n;
arg_buffer[4] = a3987840107;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40260 = encode_clo(alloc_clo(lam40260_fptr, 0));

void* lam40262_fptr() // lam40262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40263 = arg_buffer[1];
//reading env and args
void* a3987540102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40263))[10];
//not do dummy comment
void* lst = (decode_clo(env40263))[9];
//not do dummy comment
void* kont39975 = (decode_clo(env40263))[8];
//not do dummy comment
void* reverse = (decode_clo(env40263))[7];
//not do dummy comment
void* cons = (decode_clo(env40263))[6];
//not do dummy comment
void* _u45 = (decode_clo(env40263))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env40263))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40263))[3];
//not do dummy comment
void* n = (decode_clo(env40263))[2];
//not do dummy comment
void* car = (decode_clo(env40263))[1];

//if-clause
bool if_guard41236 = is_true(a3987540102);
if(if_guard41236)
{

//creating new closure instance
void** clo41238 = alloc_clo(lam40251_fptr, 1);

//setting env list
clo41238[1] = kont39975;
void* f3997640103 = encode_clo(clo41238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3997640103;
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
void** clo41240 = alloc_clo(lam40260_fptr, 8);

//setting env list
clo41240[1] = car;
clo41240[2] = n;
clo41240[3] = lst2;
clo41240[4] = take_u45helper;
clo41240[5] = _u45;
clo41240[6] = cons;
clo41240[7] = kont39975;
clo41240[8] = lst;
void* f3998040105 = encode_clo(clo41240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3998040105;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40262 = encode_clo(alloc_clo(lam40262_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40265 = arg_buffer[1];
//reading env and args
void* kont39975 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar41241 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41241, "0", 10);
void* a3987440100 = encode_mpz(mpzvar41241);

//creating new closure instance
void** clo41243 = alloc_clo(lam40262_fptr, 10);

//setting env list
clo41243[1] = car;
clo41243[2] = n;
clo41243[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo41243[4] = take_u45helper;
clo41243[5] = _u45;
clo41243[6] = cons;
clo41243[7] = reverse;
clo41243[8] = kont39975;
clo41243[9] = lst;
clo41243[10] = cdr;
void* f3998140101 = encode_clo(clo41243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3998140101;
arg_buffer[3] = n;
arg_buffer[4] = a3987440100;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam40266_fptr() // lam40266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40267 = arg_buffer[1];
//reading env and args
void* a3988240115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40267))[4];
//not do dummy comment
void* n = (decode_clo(env40267))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env40267))[2];
//not do dummy comment
void* kont39982 = (decode_clo(env40267))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont39982;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3988240115;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40266 = encode_clo(alloc_clo(lam40266_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40268 = arg_buffer[1];
//reading env and args
void* kont39982 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41245 = alloc_clo(lam40266_fptr, 4);

//setting env list
clo41245[1] = kont39982;
clo41245[2] = take_u45helper;
clo41245[3] = n;
clo41245[4] = lst;
void* f3998340114 = encode_clo(clo41245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3998340114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam40270_fptr() // lam40270 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40271 = arg_buffer[1];
//reading env and args
void* a3988740123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3988540119 = (decode_clo(env40271))[3];
//not do dummy comment
void* _u43 = (decode_clo(env40271))[2];
//not do dummy comment
void* kont39984 = (decode_clo(env40271))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont39984;
arg_buffer[3] = a3988540119;
arg_buffer[4] = a3988740123;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40270 = encode_clo(alloc_clo(lam40270_fptr, 0));

void* lam40272_fptr() // lam40272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40273 = arg_buffer[1];
//reading env and args
void* a3988640121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env40273))[4];
//not do dummy comment
void* kont39984 = (decode_clo(env40273))[3];
//not do dummy comment
void* a3988540119 = (decode_clo(env40273))[2];
//not do dummy comment
void* length = (decode_clo(env40273))[1];

//creating new closure instance
void** clo41247 = alloc_clo(lam40270_fptr, 3);

//setting env list
clo41247[1] = kont39984;
clo41247[2] = _u43;
clo41247[3] = a3988540119;
void* f3998540122 = encode_clo(clo41247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3998540122;
arg_buffer[3] = a3988640121;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40272 = encode_clo(alloc_clo(lam40272_fptr, 0));

void* lam40275_fptr() // lam40275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40276 = arg_buffer[1];
//reading env and args
void* a3988340117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40276))[5];
//not do dummy comment
void* lst = (decode_clo(env40276))[4];
//not do dummy comment
void* length = (decode_clo(env40276))[3];
//not do dummy comment
void* _u43 = (decode_clo(env40276))[2];
//not do dummy comment
void* kont39984 = (decode_clo(env40276))[1];

//if-clause
bool if_guard41248 = is_true(a3988340117);
if(if_guard41248)
{
mpz_t* mpzvar41249 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41249, "0", 10);
void* x3988440118 = encode_mpz(mpzvar41249);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39984);
arg_buffer[2] = x3988440118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39984))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar41250 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41250, "1", 10);
void* a3988540119 = encode_mpz(mpzvar41250);

//creating new closure instance
void** clo41252 = alloc_clo(lam40272_fptr, 4);

//setting env list
clo41252[1] = length;
clo41252[2] = a3988540119;
clo41252[3] = kont39984;
clo41252[4] = _u43;
void* f3998640120 = encode_clo(clo41252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3998640120;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40275 = encode_clo(alloc_clo(lam40275_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40277 = arg_buffer[1];
//reading env and args
void* kont39984 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo41254 = alloc_clo(lam40275_fptr, 5);

//setting env list
clo41254[1] = kont39984;
clo41254[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo41254[3] = length;
clo41254[4] = lst;
clo41254[5] = cdr;
void* f3998740116 = encode_clo(clo41254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3998740116;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam40278_fptr() // lam40278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40279 = arg_buffer[1];
//reading env and args
void* x3988940127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39988 = (decode_clo(env40279))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39988);
arg_buffer[2] = x3988940127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39988))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40278 = encode_clo(alloc_clo(lam40278_fptr, 0));

void* lam40280_fptr() // lam40280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40281 = arg_buffer[1];
//reading env and args
void* a3989340135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3989140131 = (decode_clo(env40281))[3];
//not do dummy comment
void* kont39988 = (decode_clo(env40281))[2];
//not do dummy comment
void* cons = (decode_clo(env40281))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39988;
arg_buffer[3] = a3989140131;
arg_buffer[4] = a3989340135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40280 = encode_clo(alloc_clo(lam40280_fptr, 0));

void* lam40282_fptr() // lam40282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40283 = arg_buffer[1];
//reading env and args
void* a3989240133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3989140131 = (decode_clo(env40283))[5];
//not do dummy comment
void* kont39988 = (decode_clo(env40283))[4];
//not do dummy comment
void* map = (decode_clo(env40283))[3];
//not do dummy comment
void* proc = (decode_clo(env40283))[2];
//not do dummy comment
void* cons = (decode_clo(env40283))[1];

//creating new closure instance
void** clo41256 = alloc_clo(lam40280_fptr, 3);

//setting env list
clo41256[1] = cons;
clo41256[2] = kont39988;
clo41256[3] = a3989140131;
void* f3999040134 = encode_clo(clo41256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3999040134;
arg_buffer[3] = proc;
arg_buffer[4] = a3989240133;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40282 = encode_clo(alloc_clo(lam40282_fptr, 0));

void* lam40284_fptr() // lam40284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40285 = arg_buffer[1];
//reading env and args
void* a3989140131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40285))[6];
//not do dummy comment
void* kont39988 = (decode_clo(env40285))[5];
//not do dummy comment
void* lst = (decode_clo(env40285))[4];
//not do dummy comment
void* map = (decode_clo(env40285))[3];
//not do dummy comment
void* proc = (decode_clo(env40285))[2];
//not do dummy comment
void* cons = (decode_clo(env40285))[1];

//creating new closure instance
void** clo41258 = alloc_clo(lam40282_fptr, 5);

//setting env list
clo41258[1] = cons;
clo41258[2] = proc;
clo41258[3] = map;
clo41258[4] = kont39988;
clo41258[5] = a3989140131;
void* f3999140132 = encode_clo(clo41258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3999140132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40284 = encode_clo(alloc_clo(lam40284_fptr, 0));

void* lam40286_fptr() // lam40286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40287 = arg_buffer[1];
//reading env and args
void* a3989040129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40287))[6];
//not do dummy comment
void* kont39988 = (decode_clo(env40287))[5];
//not do dummy comment
void* lst = (decode_clo(env40287))[4];
//not do dummy comment
void* map = (decode_clo(env40287))[3];
//not do dummy comment
void* proc = (decode_clo(env40287))[2];
//not do dummy comment
void* cons = (decode_clo(env40287))[1];

//creating new closure instance
void** clo41260 = alloc_clo(lam40284_fptr, 6);

//setting env list
clo41260[1] = cons;
clo41260[2] = proc;
clo41260[3] = map;
clo41260[4] = lst;
clo41260[5] = kont39988;
clo41260[6] = cdr;
void* f3999240130 = encode_clo(clo41260);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3999240130;
arg_buffer[3] = a3989040129;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40286 = encode_clo(alloc_clo(lam40286_fptr, 0));

void* lam40288_fptr() // lam40288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40289 = arg_buffer[1];
//reading env and args
void* a3988840125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39988 = (decode_clo(env40289))[8];
//not do dummy comment
void* lst = (decode_clo(env40289))[7];
//not do dummy comment
void* map = (decode_clo(env40289))[6];
//not do dummy comment
void* proc = (decode_clo(env40289))[5];
//not do dummy comment
void* car = (decode_clo(env40289))[4];
//not do dummy comment
void* cons = (decode_clo(env40289))[3];
//not do dummy comment
void* list = (decode_clo(env40289))[2];
//not do dummy comment
void* cdr = (decode_clo(env40289))[1];

//if-clause
bool if_guard41261 = is_true(a3988840125);
if(if_guard41261)
{

//creating new closure instance
void** clo41263 = alloc_clo(lam40278_fptr, 1);

//setting env list
clo41263[1] = kont39988;
void* f3998940126 = encode_clo(clo41263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3998940126;
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
void** clo41265 = alloc_clo(lam40286_fptr, 6);

//setting env list
clo41265[1] = cons;
clo41265[2] = proc;
clo41265[3] = map;
clo41265[4] = lst;
clo41265[5] = kont39988;
clo41265[6] = cdr;
void* f3999340128 = encode_clo(clo41265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3999340128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40288 = encode_clo(alloc_clo(lam40288_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40290 = arg_buffer[1];
//reading env and args
void* kont39988 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41267 = alloc_clo(lam40288_fptr, 8);

//setting env list
clo41267[1] = cdr;
clo41267[2] = list;
clo41267[3] = cons;
clo41267[4] = car;
clo41267[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo41267[6] = map;
clo41267[7] = lst;
clo41267[8] = kont39988;
void* f3999440124 = encode_clo(clo41267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3999440124;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam40291_fptr() // lam40291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40292 = arg_buffer[1];
//reading env and args
void* x3989540139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39995 = (decode_clo(env40292))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont39995);
arg_buffer[2] = x3989540139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont39995))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40291 = encode_clo(alloc_clo(lam40291_fptr, 0));

void* lam40293_fptr() // lam40293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40294 = arg_buffer[1];
//reading env and args
void* a3990040149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont39995 = (decode_clo(env40294))[3];
//not do dummy comment
void* cons = (decode_clo(env40294))[2];
//not do dummy comment
void* a3989840145 = (decode_clo(env40294))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont39995;
arg_buffer[3] = a3989840145;
arg_buffer[4] = a3990040149;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40293 = encode_clo(alloc_clo(lam40293_fptr, 0));

void* lam40295_fptr() // lam40295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40296 = arg_buffer[1];
//reading env and args
void* a3989940147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env40296))[5];
//not do dummy comment
void* kont39995 = (decode_clo(env40296))[4];
//not do dummy comment
void* filter = (decode_clo(env40296))[3];
//not do dummy comment
void* cons = (decode_clo(env40296))[2];
//not do dummy comment
void* a3989840145 = (decode_clo(env40296))[1];

//creating new closure instance
void** clo41269 = alloc_clo(lam40293_fptr, 3);

//setting env list
clo41269[1] = a3989840145;
clo41269[2] = cons;
clo41269[3] = kont39995;
void* f3999740148 = encode_clo(clo41269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3999740148;
arg_buffer[3] = op;
arg_buffer[4] = a3989940147;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40295 = encode_clo(alloc_clo(lam40295_fptr, 0));

void* lam40297_fptr() // lam40297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40298 = arg_buffer[1];
//reading env and args
void* a3989840145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40298))[6];
//not do dummy comment
void* lst = (decode_clo(env40298))[5];
//not do dummy comment
void* op = (decode_clo(env40298))[4];
//not do dummy comment
void* kont39995 = (decode_clo(env40298))[3];
//not do dummy comment
void* filter = (decode_clo(env40298))[2];
//not do dummy comment
void* cons = (decode_clo(env40298))[1];

//creating new closure instance
void** clo41271 = alloc_clo(lam40295_fptr, 5);

//setting env list
clo41271[1] = a3989840145;
clo41271[2] = cons;
clo41271[3] = filter;
clo41271[4] = kont39995;
clo41271[5] = op;
void* f3999840146 = encode_clo(clo41271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3999840146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40297 = encode_clo(alloc_clo(lam40297_fptr, 0));

void* lam40299_fptr() // lam40299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40300 = arg_buffer[1];
//reading env and args
void* a3990140151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env40300))[3];
//not do dummy comment
void* kont39995 = (decode_clo(env40300))[2];
//not do dummy comment
void* filter = (decode_clo(env40300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont39995;
arg_buffer[3] = op;
arg_buffer[4] = a3990140151;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40299 = encode_clo(alloc_clo(lam40299_fptr, 0));

void* lam40301_fptr() // lam40301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40302 = arg_buffer[1];
//reading env and args
void* a3989740143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40302))[7];
//not do dummy comment
void* lst = (decode_clo(env40302))[6];
//not do dummy comment
void* op = (decode_clo(env40302))[5];
//not do dummy comment
void* kont39995 = (decode_clo(env40302))[4];
//not do dummy comment
void* cons = (decode_clo(env40302))[3];
//not do dummy comment
void* filter = (decode_clo(env40302))[2];
//not do dummy comment
void* car = (decode_clo(env40302))[1];

//if-clause
bool if_guard41272 = is_true(a3989740143);
if(if_guard41272)
{

//creating new closure instance
void** clo41274 = alloc_clo(lam40297_fptr, 6);

//setting env list
clo41274[1] = cons;
clo41274[2] = filter;
clo41274[3] = kont39995;
clo41274[4] = op;
clo41274[5] = lst;
clo41274[6] = cdr;
void* f3999940144 = encode_clo(clo41274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3999940144;
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
void** clo41276 = alloc_clo(lam40299_fptr, 3);

//setting env list
clo41276[1] = filter;
clo41276[2] = kont39995;
clo41276[3] = op;
void* f4000040150 = encode_clo(clo41276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4000040150;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40301 = encode_clo(alloc_clo(lam40301_fptr, 0));

void* lam40303_fptr() // lam40303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40304 = arg_buffer[1];
//reading env and args
void* a3989640141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40304))[7];
//not do dummy comment
void* lst = (decode_clo(env40304))[6];
//not do dummy comment
void* op = (decode_clo(env40304))[5];
//not do dummy comment
void* kont39995 = (decode_clo(env40304))[4];
//not do dummy comment
void* cons = (decode_clo(env40304))[3];
//not do dummy comment
void* filter = (decode_clo(env40304))[2];
//not do dummy comment
void* car = (decode_clo(env40304))[1];

//creating new closure instance
void** clo41278 = alloc_clo(lam40301_fptr, 7);

//setting env list
clo41278[1] = car;
clo41278[2] = filter;
clo41278[3] = cons;
clo41278[4] = kont39995;
clo41278[5] = op;
clo41278[6] = lst;
clo41278[7] = cdr;
void* f4000140142 = encode_clo(clo41278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4000140142;
arg_buffer[3] = a3989640141;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40303 = encode_clo(alloc_clo(lam40303_fptr, 0));

void* lam40305_fptr() // lam40305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40306 = arg_buffer[1];
//reading env and args
void* a3989440137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env40306))[8];
//not do dummy comment
void* op = (decode_clo(env40306))[7];
//not do dummy comment
void* kont39995 = (decode_clo(env40306))[6];
//not do dummy comment
void* cons = (decode_clo(env40306))[5];
//not do dummy comment
void* list = (decode_clo(env40306))[4];
//not do dummy comment
void* cdr = (decode_clo(env40306))[3];
//not do dummy comment
void* filter = (decode_clo(env40306))[2];
//not do dummy comment
void* car = (decode_clo(env40306))[1];

//if-clause
bool if_guard41279 = is_true(a3989440137);
if(if_guard41279)
{

//creating new closure instance
void** clo41281 = alloc_clo(lam40291_fptr, 1);

//setting env list
clo41281[1] = kont39995;
void* f3999640138 = encode_clo(clo41281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3999640138;
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
void** clo41283 = alloc_clo(lam40303_fptr, 7);

//setting env list
clo41283[1] = car;
clo41283[2] = filter;
clo41283[3] = cons;
clo41283[4] = kont39995;
clo41283[5] = op;
clo41283[6] = lst;
clo41283[7] = cdr;
void* f4000240140 = encode_clo(clo41283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4000240140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40305 = encode_clo(alloc_clo(lam40305_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40307 = arg_buffer[1];
//reading env and args
void* kont39995 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41285 = alloc_clo(lam40305_fptr, 8);

//setting env list
clo41285[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo41285[2] = filter;
clo41285[3] = cdr;
clo41285[4] = list;
clo41285[5] = cons;
clo41285[6] = kont39995;
clo41285[7] = op;
clo41285[8] = lst;
void* f4000340136 = encode_clo(clo41285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4000340136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam40308_fptr() // lam40308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40309 = arg_buffer[1];
//reading env and args
void* a3990640159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40004 = (decode_clo(env40309))[3];
//not do dummy comment
void* drop = (decode_clo(env40309))[2];
//not do dummy comment
void* a3990440156 = (decode_clo(env40309))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont40004;
arg_buffer[3] = a3990440156;
arg_buffer[4] = a3990640159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40308 = encode_clo(alloc_clo(lam40308_fptr, 0));

void* lam40311_fptr() // lam40311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40312 = arg_buffer[1];
//reading env and args
void* a3990440156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40004 = (decode_clo(env40312))[4];
//not do dummy comment
void* drop = (decode_clo(env40312))[3];
//not do dummy comment
void* n = (decode_clo(env40312))[2];
//not do dummy comment
void* _u45 = (decode_clo(env40312))[1];
mpz_t* mpzvar41286 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41286, "1", 10);
void* a3990540157 = encode_mpz(mpzvar41286);

//creating new closure instance
void** clo41288 = alloc_clo(lam40308_fptr, 3);

//setting env list
clo41288[1] = a3990440156;
clo41288[2] = drop;
clo41288[3] = kont40004;
void* f4000540158 = encode_clo(clo41288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4000540158;
arg_buffer[3] = n;
arg_buffer[4] = a3990540157;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40311 = encode_clo(alloc_clo(lam40311_fptr, 0));

void* lam40313_fptr() // lam40313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40314 = arg_buffer[1];
//reading env and args
void* a3990340154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40314))[6];
//not do dummy comment
void* kont40004 = (decode_clo(env40314))[5];
//not do dummy comment
void* n = (decode_clo(env40314))[4];
//not do dummy comment
void* _u45 = (decode_clo(env40314))[3];
//not do dummy comment
void* lst = (decode_clo(env40314))[2];
//not do dummy comment
void* drop = (decode_clo(env40314))[1];

//if-clause
bool if_guard41289 = is_true(a3990340154);
if(if_guard41289)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40004);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40004))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41291 = alloc_clo(lam40311_fptr, 4);

//setting env list
clo41291[1] = _u45;
clo41291[2] = n;
clo41291[3] = drop;
clo41291[4] = kont40004;
void* f4000640155 = encode_clo(clo41291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4000640155;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40313 = encode_clo(alloc_clo(lam40313_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40316 = arg_buffer[1];
//reading env and args
void* kont40004 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar41292 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41292, "0", 10);
void* a3990240152 = encode_mpz(mpzvar41292);

//creating new closure instance
void** clo41294 = alloc_clo(lam40313_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo41294[1] = drop;
clo41294[2] = lst;
clo41294[3] = _u45;
clo41294[4] = n;
clo41294[5] = kont40004;
clo41294[6] = cdr;
void* f4000740153 = encode_clo(clo41294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4000740153;
arg_buffer[3] = n;
arg_buffer[4] = a3990240152;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam40317_fptr() // lam40317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40318 = arg_buffer[1];
//reading env and args
void* a3991040167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3990840163 = (decode_clo(env40318))[3];
//not do dummy comment
void* kont40008 = (decode_clo(env40318))[2];
//not do dummy comment
void* proc = (decode_clo(env40318))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont40008;
arg_buffer[3] = a3990840163;
arg_buffer[4] = a3991040167;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40317 = encode_clo(alloc_clo(lam40317_fptr, 0));

void* lam40319_fptr() // lam40319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40320 = arg_buffer[1];
//reading env and args
void* a3990940165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3990840163 = (decode_clo(env40320))[5];
//not do dummy comment
void* foldr = (decode_clo(env40320))[4];
//not do dummy comment
void* kont40008 = (decode_clo(env40320))[3];
//not do dummy comment
void* proc = (decode_clo(env40320))[2];
//not do dummy comment
void* acc = (decode_clo(env40320))[1];

//creating new closure instance
void** clo41296 = alloc_clo(lam40317_fptr, 3);

//setting env list
clo41296[1] = proc;
clo41296[2] = kont40008;
clo41296[3] = a3990840163;
void* f4000940166 = encode_clo(clo41296);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4000940166;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3990940165;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40319 = encode_clo(alloc_clo(lam40319_fptr, 0));

void* lam40321_fptr() // lam40321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40322 = arg_buffer[1];
//reading env and args
void* a3990840163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40322))[6];
//not do dummy comment
void* kont40008 = (decode_clo(env40322))[5];
//not do dummy comment
void* foldr = (decode_clo(env40322))[4];
//not do dummy comment
void* lst = (decode_clo(env40322))[3];
//not do dummy comment
void* proc = (decode_clo(env40322))[2];
//not do dummy comment
void* acc = (decode_clo(env40322))[1];

//creating new closure instance
void** clo41298 = alloc_clo(lam40319_fptr, 5);

//setting env list
clo41298[1] = acc;
clo41298[2] = proc;
clo41298[3] = kont40008;
clo41298[4] = foldr;
clo41298[5] = a3990840163;
void* f4001040164 = encode_clo(clo41298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4001040164;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40321 = encode_clo(alloc_clo(lam40321_fptr, 0));

void* lam40323_fptr() // lam40323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40324 = arg_buffer[1];
//reading env and args
void* a3990740161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40324))[7];
//not do dummy comment
void* kont40008 = (decode_clo(env40324))[6];
//not do dummy comment
void* car = (decode_clo(env40324))[5];
//not do dummy comment
void* foldr = (decode_clo(env40324))[4];
//not do dummy comment
void* lst = (decode_clo(env40324))[3];
//not do dummy comment
void* proc = (decode_clo(env40324))[2];
//not do dummy comment
void* acc = (decode_clo(env40324))[1];

//if-clause
bool if_guard41299 = is_true(a3990740161);
if(if_guard41299)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40008);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40008))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41301 = alloc_clo(lam40321_fptr, 6);

//setting env list
clo41301[1] = acc;
clo41301[2] = proc;
clo41301[3] = lst;
clo41301[4] = foldr;
clo41301[5] = kont40008;
clo41301[6] = cdr;
void* f4001140162 = encode_clo(clo41301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4001140162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40323 = encode_clo(alloc_clo(lam40323_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40325 = arg_buffer[1];
//reading env and args
void* kont40008 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo41303 = alloc_clo(lam40323_fptr, 7);

//setting env list
clo41303[1] = acc;
clo41303[2] = proc;
clo41303[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo41303[4] = foldr;
clo41303[5] = car;
clo41303[6] = kont40008;
clo41303[7] = cdr;
void* f4001240160 = encode_clo(clo41303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4001240160;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam40326_fptr() // lam40326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40327 = arg_buffer[1];
//reading env and args
void* a3991440175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3991240171 = (decode_clo(env40327))[3];
//not do dummy comment
void* kont40013 = (decode_clo(env40327))[2];
//not do dummy comment
void* cons = (decode_clo(env40327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont40013;
arg_buffer[3] = a3991240171;
arg_buffer[4] = a3991440175;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40326 = encode_clo(alloc_clo(lam40326_fptr, 0));

void* lam40328_fptr() // lam40328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40329 = arg_buffer[1];
//reading env and args
void* a3991340173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env40329))[5];
//not do dummy comment
void* a3991240171 = (decode_clo(env40329))[4];
//not do dummy comment
void* kont40013 = (decode_clo(env40329))[3];
//not do dummy comment
void* lst2 = (decode_clo(env40329))[2];
//not do dummy comment
void* cons = (decode_clo(env40329))[1];

//creating new closure instance
void** clo41305 = alloc_clo(lam40326_fptr, 3);

//setting env list
clo41305[1] = cons;
clo41305[2] = kont40013;
clo41305[3] = a3991240171;
void* f4001440174 = encode_clo(clo41305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4001440174;
arg_buffer[3] = a3991340173;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40328 = encode_clo(alloc_clo(lam40328_fptr, 0));

void* lam40330_fptr() // lam40330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40331 = arg_buffer[1];
//reading env and args
void* a3991240171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40331))[6];
//not do dummy comment
void* append = (decode_clo(env40331))[5];
//not do dummy comment
void* kont40013 = (decode_clo(env40331))[4];
//not do dummy comment
void* lst2 = (decode_clo(env40331))[3];
//not do dummy comment
void* lst1 = (decode_clo(env40331))[2];
//not do dummy comment
void* cons = (decode_clo(env40331))[1];

//creating new closure instance
void** clo41307 = alloc_clo(lam40328_fptr, 5);

//setting env list
clo41307[1] = cons;
clo41307[2] = lst2;
clo41307[3] = kont40013;
clo41307[4] = a3991240171;
clo41307[5] = append;
void* f4001540172 = encode_clo(clo41307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4001540172;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40330 = encode_clo(alloc_clo(lam40330_fptr, 0));

void* lam40332_fptr() // lam40332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40333 = arg_buffer[1];
//reading env and args
void* a3991140169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env40333))[7];
//not do dummy comment
void* append = (decode_clo(env40333))[6];
//not do dummy comment
void* kont40013 = (decode_clo(env40333))[5];
//not do dummy comment
void* lst2 = (decode_clo(env40333))[4];
//not do dummy comment
void* cons = (decode_clo(env40333))[3];
//not do dummy comment
void* lst1 = (decode_clo(env40333))[2];
//not do dummy comment
void* car = (decode_clo(env40333))[1];

//if-clause
bool if_guard41308 = is_true(a3991140169);
if(if_guard41308)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40013);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40013))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41310 = alloc_clo(lam40330_fptr, 6);

//setting env list
clo41310[1] = cons;
clo41310[2] = lst1;
clo41310[3] = lst2;
clo41310[4] = kont40013;
clo41310[5] = append;
clo41310[6] = cdr;
void* f4001640170 = encode_clo(clo41310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4001640170;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam40332 = encode_clo(alloc_clo(lam40332_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40334 = arg_buffer[1];
//reading env and args
void* kont40013 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41312 = alloc_clo(lam40332_fptr, 7);

//setting env list
clo41312[1] = car;
clo41312[2] = lst1;
clo41312[3] = cons;
clo41312[4] = lst2;
clo41312[5] = kont40013;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo41312[6] = append;
clo41312[7] = cdr;
void* f4001740168 = encode_clo(clo41312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4001740168;
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
void* _40335 = arg_buffer[1];
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

void* kont4001840176 = prim_car(lst);
void* lst40177 = prim_cdr(lst);
void* x3991540178 = apply_prim_hash(lst40177);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4001840176);
arg_buffer[2] = x3991540178;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4001840176))[0]);
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
void* _40336 = arg_buffer[1];
//reading env and args
void* kont40020 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3991640179 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40020);
arg_buffer[2] = x3991640179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40020))[0]);
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
void* _40337 = arg_buffer[1];
//reading env and args
void* kont40021 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3991740180 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40021);
arg_buffer[2] = x3991740180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40021))[0]);
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
void* _40338 = arg_buffer[1];
//reading env and args
void* kont40022 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3991840181 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40022);
arg_buffer[2] = x3991840181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40022))[0]);
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
void* _40339 = arg_buffer[1];
//reading env and args
void* kont40023 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3991940182 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40023);
arg_buffer[2] = x3991940182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40023))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam40341_fptr() // lam40341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40342 = arg_buffer[1];
//reading env and args
void* a3992440188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40024 = (decode_clo(env40342))[2];
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env40342))[1];
mpz_t* mpzvar41313 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41313, "5", 10);
void* a3992540189 = encode_mpz(mpzvar41313);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45has_u45key_u63);
arg_buffer[2] = kont40024;
arg_buffer[3] = a3992440188;
arg_buffer[4] = a3992540189;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40341 = encode_clo(alloc_clo(lam40341_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40347 = arg_buffer[1];
//reading env and args
void* kont40024 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar41314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41314, "100", 10);
void* a3992040183 = encode_mpz(mpzvar41314);
mpz_t* mpzvar41315 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41315, "80", 10);
void* a3992140184 = encode_mpz(mpzvar41315);
mpz_t* mpzvar41316 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41316, "10", 10);
void* a3992240185 = encode_mpz(mpzvar41316);
mpz_t* mpzvar41317 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41317, "2", 10);
void* a3992340186 = encode_mpz(mpzvar41317);

//creating new closure instance
void** clo41319 = alloc_clo(lam40341_fptr, 2);

//setting env list
clo41319[1] = hash_u45has_u45key_u63;
clo41319[2] = kont40024;
void* f4002540187 = encode_clo(clo41319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f4002540187;
arg_buffer[3] = a3992040183;
arg_buffer[4] = a3992140184;
arg_buffer[5] = a3992240185;
arg_buffer[6] = a3992340186;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam40348_fptr() // lam40348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env40349 = arg_buffer[1];
//reading env and args
void* x3992640191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont40026 = (decode_clo(env40349))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont40026);
arg_buffer[2] = x3992640191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont40026))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam40348 = encode_clo(alloc_clo(lam40348_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _40350 = arg_buffer[1];
//reading env and args
void* kont40026 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo41321 = alloc_clo(lam40348_fptr, 1);

//setting env list
clo41321[1] = kont40026;
void* f4002740190 = encode_clo(clo41321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4002740190;
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

