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
void* _23196 = arg_buffer[1];
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

void* kont2293323034 = prim_car(lst);
void* lst23035 = prim_cdr(lst);
void* x2284523036 = apply_prim__u43(lst23035);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2293323034);
arg_buffer[2] = x2284523036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2293323034))[0]);
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
void* _23197 = arg_buffer[1];
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

void* kont2293523037 = prim_car(lst);
void* lst23038 = prim_cdr(lst);
void* x2284623039 = apply_prim__u45(lst23038);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2293523037);
arg_buffer[2] = x2284623039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2293523037))[0]);
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
void* _23198 = arg_buffer[1];
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

void* kont2293723040 = prim_car(lst);
void* lst23041 = prim_cdr(lst);
void* x2284723042 = apply_prim__u42(lst23041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2293723040);
arg_buffer[2] = x2284723042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2293723040))[0]);
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
void* _23199 = arg_buffer[1];
//reading env and args
void* kont22939 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2284823043 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22939);
arg_buffer[2] = x2284823043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22939))[0]);
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
void* _23200 = arg_buffer[1];
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

void* kont2294023044 = prim_car(lst);
void* lst23045 = prim_cdr(lst);
void* x2284923046 = apply_prim__u47(lst23045);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294023044);
arg_buffer[2] = x2284923046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294023044))[0]);
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
void* _23201 = arg_buffer[1];
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

void* kont2294223047 = prim_car(lst);
void* lst23048 = prim_cdr(lst);
void* x2285023049 = apply_prim__u61(lst23048);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294223047);
arg_buffer[2] = x2285023049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294223047))[0]);
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
void* _23202 = arg_buffer[1];
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

void* kont2294423050 = prim_car(lst);
void* lst23051 = prim_cdr(lst);
void* x2285123052 = apply_prim__u62(lst23051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294423050);
arg_buffer[2] = x2285123052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294423050))[0]);
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
void* _23203 = arg_buffer[1];
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

void* kont2294623053 = prim_car(lst);
void* lst23054 = prim_cdr(lst);
void* x2285223055 = apply_prim__u60(lst23054);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294623053);
arg_buffer[2] = x2285223055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294623053))[0]);
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
void* _23204 = arg_buffer[1];
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

void* kont2294823056 = prim_car(lst);
void* lst23057 = prim_cdr(lst);
void* x2285323058 = apply_prim__u60_u61(lst23057);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294823056);
arg_buffer[2] = x2285323058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294823056))[0]);
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
void* _23205 = arg_buffer[1];
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

void* kont2295023059 = prim_car(lst);
void* lst23060 = prim_cdr(lst);
void* x2285423061 = apply_prim__u62_u61(lst23060);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2295023059);
arg_buffer[2] = x2285423061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2295023059))[0]);
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
void* _23206 = arg_buffer[1];
//reading env and args
void* kont22952 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2285523062 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22952);
arg_buffer[2] = x2285523062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22952))[0]);
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
void* _23207 = arg_buffer[1];
//reading env and args
void* kont22953 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2285623063 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22953);
arg_buffer[2] = x2285623063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22953))[0]);
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
void* _23208 = arg_buffer[1];
//reading env and args
void* kont22954 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2285723064 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22954);
arg_buffer[2] = x2285723064;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22954))[0]);
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
void* _23209 = arg_buffer[1];
//reading env and args
void* kont22955 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2285823065 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22955);
arg_buffer[2] = x2285823065;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22955))[0]);
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
void* _23210 = arg_buffer[1];
//reading env and args
void* kont22956 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2285923066 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22956);
arg_buffer[2] = x2285923066;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22956))[0]);
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
void* _23211 = arg_buffer[1];
//reading env and args
void* kont22957 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2286023067 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22957);
arg_buffer[2] = x2286023067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22957))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam23212_fptr() // lam23212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23213 = arg_buffer[1];
//reading env and args
void* a2286323071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2286123068 = (decode_clo(env23213))[3];
//not do dummy comment
void* kont22958 = (decode_clo(env23213))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env23213))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22958;
arg_buffer[3] = a2286123068;
arg_buffer[4] = a2286323071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23212 = encode_clo(alloc_clo(lam23212_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23216 = arg_buffer[1];
//reading env and args
void* kont22958 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29833, "0", 10);
void* a2286123068 = encode_mpz(mpzvar29833);
mpz_t* mpzvar29834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29834, "2", 10);
void* a2286223069 = encode_mpz(mpzvar29834);

//creating new closure instance
void** clo29836 = alloc_clo(lam23212_fptr, 3);

//setting env list
clo29836[1] = equal_u63;
clo29836[2] = kont22958;
clo29836[3] = a2286123068;
void* f2295923070 = encode_clo(clo29836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2295923070;
arg_buffer[3] = x;
arg_buffer[4] = a2286223069;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam23217_fptr() // lam23217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23218 = arg_buffer[1];
//reading env and args
void* a2286623075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env23218))[3];
//not do dummy comment
void* kont22960 = (decode_clo(env23218))[2];
//not do dummy comment
void* a2286423072 = (decode_clo(env23218))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22960;
arg_buffer[3] = a2286423072;
arg_buffer[4] = a2286623075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23217 = encode_clo(alloc_clo(lam23217_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23221 = arg_buffer[1];
//reading env and args
void* kont22960 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29837, "1", 10);
void* a2286423072 = encode_mpz(mpzvar29837);
mpz_t* mpzvar29838 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29838, "2", 10);
void* a2286523073 = encode_mpz(mpzvar29838);

//creating new closure instance
void** clo29840 = alloc_clo(lam23217_fptr, 3);

//setting env list
clo29840[1] = a2286423072;
clo29840[2] = kont22960;
clo29840[3] = equal_u63;
void* f2296123074 = encode_clo(clo29840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2296123074;
arg_buffer[3] = x;
arg_buffer[4] = a2286523073;
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
void* _23222 = arg_buffer[1];
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

void* kont2296223076 = prim_car(x);
void* x23077 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2296223076);
arg_buffer[2] = x23077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2296223076))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam23225_fptr() // lam23225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23226 = arg_buffer[1];
//reading env and args
void* a2287223087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22964 = (decode_clo(env23226))[3];
//not do dummy comment
void* x = (decode_clo(env23226))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23226))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont22964;
arg_buffer[3] = x;
arg_buffer[4] = a2287223087;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23225 = encode_clo(alloc_clo(lam23225_fptr, 0));

void* lam23227_fptr() // lam23227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23228 = arg_buffer[1];
//reading env and args
void* a2287023084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23228))[5];
//not do dummy comment
void* lst = (decode_clo(env23228))[4];
//not do dummy comment
void* kont22964 = (decode_clo(env23228))[3];
//not do dummy comment
void* x = (decode_clo(env23228))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23228))[1];

//if-clause
bool if_guard29841 = is_true(a2287023084);
if(if_guard29841)
{
void* x2287123085 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22964);
arg_buffer[2] = x2287123085;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22964))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29843 = alloc_clo(lam23225_fptr, 3);

//setting env list
clo29843[1] = member_u63;
clo29843[2] = x;
clo29843[3] = kont22964;
void* f2296523086 = encode_clo(clo29843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2296523086;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23227 = encode_clo(alloc_clo(lam23227_fptr, 0));

void* lam23229_fptr() // lam23229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23230 = arg_buffer[1];
//reading env and args
void* a2286923082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23230))[6];
//not do dummy comment
void* lst = (decode_clo(env23230))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env23230))[4];
//not do dummy comment
void* kont22964 = (decode_clo(env23230))[3];
//not do dummy comment
void* x = (decode_clo(env23230))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23230))[1];

//creating new closure instance
void** clo29845 = alloc_clo(lam23227_fptr, 5);

//setting env list
clo29845[1] = member_u63;
clo29845[2] = x;
clo29845[3] = kont22964;
clo29845[4] = lst;
clo29845[5] = cdr;
void* f2296623083 = encode_clo(clo29845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2296623083;
arg_buffer[3] = a2286923082;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23229 = encode_clo(alloc_clo(lam23229_fptr, 0));

void* lam23231_fptr() // lam23231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23232 = arg_buffer[1];
//reading env and args
void* a2286723079 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23232))[7];
//not do dummy comment
void* lst = (decode_clo(env23232))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env23232))[5];
//not do dummy comment
void* kont22964 = (decode_clo(env23232))[4];
//not do dummy comment
void* x = (decode_clo(env23232))[3];
//not do dummy comment
void* car = (decode_clo(env23232))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23232))[1];

//if-clause
bool if_guard29846 = is_true(a2286723079);
if(if_guard29846)
{
void* x2286823080 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22964);
arg_buffer[2] = x2286823080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22964))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29848 = alloc_clo(lam23229_fptr, 6);

//setting env list
clo29848[1] = member_u63;
clo29848[2] = x;
clo29848[3] = kont22964;
clo29848[4] = equal_u63;
clo29848[5] = lst;
clo29848[6] = cdr;
void* f2296723081 = encode_clo(clo29848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2296723081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23231 = encode_clo(alloc_clo(lam23231_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23233 = arg_buffer[1];
//reading env and args
void* kont22964 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29850 = alloc_clo(lam23231_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo29850[1] = member_u63;
clo29850[2] = car;
clo29850[3] = x;
clo29850[4] = kont22964;
clo29850[5] = equal_u63;
clo29850[6] = lst;
clo29850[7] = cdr;
void* f2296823078 = encode_clo(clo29850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2296823078;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam23234_fptr() // lam23234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23235 = arg_buffer[1];
//reading env and args
void* a2287623095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env23235))[4];
//not do dummy comment
void* a2287523093 = (decode_clo(env23235))[3];
//not do dummy comment
void* foldl = (decode_clo(env23235))[2];
//not do dummy comment
void* kont22969 = (decode_clo(env23235))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont22969;
arg_buffer[3] = fun;
arg_buffer[4] = a2287523093;
arg_buffer[5] = a2287623095;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23234 = encode_clo(alloc_clo(lam23234_fptr, 0));

void* lam23236_fptr() // lam23236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23237 = arg_buffer[1];
//reading env and args
void* a2287523093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23237))[5];
//not do dummy comment
void* lst = (decode_clo(env23237))[4];
//not do dummy comment
void* fun = (decode_clo(env23237))[3];
//not do dummy comment
void* foldl = (decode_clo(env23237))[2];
//not do dummy comment
void* kont22969 = (decode_clo(env23237))[1];

//creating new closure instance
void** clo29852 = alloc_clo(lam23234_fptr, 4);

//setting env list
clo29852[1] = kont22969;
clo29852[2] = foldl;
clo29852[3] = a2287523093;
clo29852[4] = fun;
void* f2297023094 = encode_clo(clo29852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2297023094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23236 = encode_clo(alloc_clo(lam23236_fptr, 0));

void* lam23238_fptr() // lam23238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23239 = arg_buffer[1];
//reading env and args
void* a2287423091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23239))[6];
//not do dummy comment
void* lst = (decode_clo(env23239))[5];
//not do dummy comment
void* fun = (decode_clo(env23239))[4];
//not do dummy comment
void* acc = (decode_clo(env23239))[3];
//not do dummy comment
void* foldl = (decode_clo(env23239))[2];
//not do dummy comment
void* kont22969 = (decode_clo(env23239))[1];

//creating new closure instance
void** clo29854 = alloc_clo(lam23236_fptr, 5);

//setting env list
clo29854[1] = kont22969;
clo29854[2] = foldl;
clo29854[3] = fun;
clo29854[4] = lst;
clo29854[5] = cdr;
void* f2297123092 = encode_clo(clo29854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2297123092;
arg_buffer[3] = a2287423091;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23238 = encode_clo(alloc_clo(lam23238_fptr, 0));

void* lam23240_fptr() // lam23240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23241 = arg_buffer[1];
//reading env and args
void* a2287323089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23241))[7];
//not do dummy comment
void* lst = (decode_clo(env23241))[6];
//not do dummy comment
void* fun = (decode_clo(env23241))[5];
//not do dummy comment
void* acc = (decode_clo(env23241))[4];
//not do dummy comment
void* car = (decode_clo(env23241))[3];
//not do dummy comment
void* foldl = (decode_clo(env23241))[2];
//not do dummy comment
void* kont22969 = (decode_clo(env23241))[1];

//if-clause
bool if_guard29855 = is_true(a2287323089);
if(if_guard29855)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22969);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22969))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29857 = alloc_clo(lam23238_fptr, 6);

//setting env list
clo29857[1] = kont22969;
clo29857[2] = foldl;
clo29857[3] = acc;
clo29857[4] = fun;
clo29857[5] = lst;
clo29857[6] = cdr;
void* f2297223090 = encode_clo(clo29857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2297223090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23240 = encode_clo(alloc_clo(lam23240_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23242 = arg_buffer[1];
//reading env and args
void* kont22969 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29859 = alloc_clo(lam23240_fptr, 7);

//setting env list
clo29859[1] = kont22969;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo29859[2] = foldl;
clo29859[3] = car;
clo29859[4] = acc;
clo29859[5] = fun;
clo29859[6] = lst;
clo29859[7] = cdr;
void* f2297323088 = encode_clo(clo29859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2297323088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam23243_fptr() // lam23243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23244 = arg_buffer[1];
//reading env and args
void* a2288023103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2287823099 = (decode_clo(env23244))[3];
//not do dummy comment
void* kont22974 = (decode_clo(env23244))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23244))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22974;
arg_buffer[3] = a2287823099;
arg_buffer[4] = a2288023103;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23243 = encode_clo(alloc_clo(lam23243_fptr, 0));

void* lam23245_fptr() // lam23245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23246 = arg_buffer[1];
//reading env and args
void* a2287923101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2287823099 = (decode_clo(env23246))[5];
//not do dummy comment
void* kont22974 = (decode_clo(env23246))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23246))[3];
//not do dummy comment
void* lst2 = (decode_clo(env23246))[2];
//not do dummy comment
void* cons = (decode_clo(env23246))[1];

//creating new closure instance
void** clo29861 = alloc_clo(lam23243_fptr, 3);

//setting env list
clo29861[1] = reverse_u45helper;
clo29861[2] = kont22974;
clo29861[3] = a2287823099;
void* f2297523102 = encode_clo(clo29861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2297523102;
arg_buffer[3] = a2287923101;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23245 = encode_clo(alloc_clo(lam23245_fptr, 0));

void* lam23247_fptr() // lam23247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23248 = arg_buffer[1];
//reading env and args
void* a2287823099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23248))[6];
//not do dummy comment
void* lst2 = (decode_clo(env23248))[5];
//not do dummy comment
void* car = (decode_clo(env23248))[4];
//not do dummy comment
void* cons = (decode_clo(env23248))[3];
//not do dummy comment
void* lst = (decode_clo(env23248))[2];
//not do dummy comment
void* kont22974 = (decode_clo(env23248))[1];

//creating new closure instance
void** clo29863 = alloc_clo(lam23245_fptr, 5);

//setting env list
clo29863[1] = cons;
clo29863[2] = lst2;
clo29863[3] = reverse_u45helper;
clo29863[4] = kont22974;
clo29863[5] = a2287823099;
void* f2297623100 = encode_clo(clo29863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2297623100;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23247 = encode_clo(alloc_clo(lam23247_fptr, 0));

void* lam23249_fptr() // lam23249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23250 = arg_buffer[1];
//reading env and args
void* a2287723097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23250))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23250))[6];
//not do dummy comment
void* lst2 = (decode_clo(env23250))[5];
//not do dummy comment
void* car = (decode_clo(env23250))[4];
//not do dummy comment
void* cons = (decode_clo(env23250))[3];
//not do dummy comment
void* lst = (decode_clo(env23250))[2];
//not do dummy comment
void* kont22974 = (decode_clo(env23250))[1];

//if-clause
bool if_guard29864 = is_true(a2287723097);
if(if_guard29864)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22974);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22974))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29866 = alloc_clo(lam23247_fptr, 6);

//setting env list
clo29866[1] = kont22974;
clo29866[2] = lst;
clo29866[3] = cons;
clo29866[4] = car;
clo29866[5] = lst2;
clo29866[6] = reverse_u45helper;
void* f2297723098 = encode_clo(clo29866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2297723098;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23249 = encode_clo(alloc_clo(lam23249_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23251 = arg_buffer[1];
//reading env and args
void* kont22974 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29868 = alloc_clo(lam23249_fptr, 7);

//setting env list
clo29868[1] = kont22974;
clo29868[2] = lst;
clo29868[3] = cons;
clo29868[4] = car;
clo29868[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo29868[6] = reverse_u45helper;
clo29868[7] = cdr;
void* f2297823096 = encode_clo(clo29868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2297823096;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam23252_fptr() // lam23252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23253 = arg_buffer[1];
//reading env and args
void* a2288123105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23253))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23253))[2];
//not do dummy comment
void* kont22979 = (decode_clo(env23253))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22979;
arg_buffer[3] = lst;
arg_buffer[4] = a2288123105;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23252 = encode_clo(alloc_clo(lam23252_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23254 = arg_buffer[1];
//reading env and args
void* kont22979 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29870 = alloc_clo(lam23252_fptr, 3);

//setting env list
clo29870[1] = kont22979;
clo29870[2] = reverse_u45helper;
clo29870[3] = lst;
void* f2298023104 = encode_clo(clo29870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2298023104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam23255_fptr() // lam23255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23256 = arg_buffer[1];
//reading env and args
void* x2288423110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22981 = (decode_clo(env23256))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22981);
arg_buffer[2] = x2288423110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22981))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23255 = encode_clo(alloc_clo(lam23255_fptr, 0));

void* lam23257_fptr() // lam23257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23258 = arg_buffer[1];
//reading env and args
void* a2288923119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2288723115 = (decode_clo(env23258))[4];
//not do dummy comment
void* kont22981 = (decode_clo(env23258))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env23258))[2];
//not do dummy comment
void* a2288523112 = (decode_clo(env23258))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22981;
arg_buffer[3] = a2288523112;
arg_buffer[4] = a2288723115;
arg_buffer[5] = a2288923119;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23257 = encode_clo(alloc_clo(lam23257_fptr, 0));

void* lam23259_fptr() // lam23259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23260 = arg_buffer[1];
//reading env and args
void* a2288823117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2288723115 = (decode_clo(env23260))[6];
//not do dummy comment
void* kont22981 = (decode_clo(env23260))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23260))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23260))[3];
//not do dummy comment
void* a2288523112 = (decode_clo(env23260))[2];
//not do dummy comment
void* cons = (decode_clo(env23260))[1];

//creating new closure instance
void** clo29872 = alloc_clo(lam23257_fptr, 4);

//setting env list
clo29872[1] = a2288523112;
clo29872[2] = take_u45helper;
clo29872[3] = kont22981;
clo29872[4] = a2288723115;
void* f2298323118 = encode_clo(clo29872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2298323118;
arg_buffer[3] = a2288823117;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23259 = encode_clo(alloc_clo(lam23259_fptr, 0));

void* lam23261_fptr() // lam23261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23262 = arg_buffer[1];
//reading env and args
void* a2288723115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23262))[7];
//not do dummy comment
void* kont22981 = (decode_clo(env23262))[6];
//not do dummy comment
void* car = (decode_clo(env23262))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23262))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23262))[3];
//not do dummy comment
void* a2288523112 = (decode_clo(env23262))[2];
//not do dummy comment
void* cons = (decode_clo(env23262))[1];

//creating new closure instance
void** clo29874 = alloc_clo(lam23259_fptr, 6);

//setting env list
clo29874[1] = cons;
clo29874[2] = a2288523112;
clo29874[3] = lst2;
clo29874[4] = take_u45helper;
clo29874[5] = kont22981;
clo29874[6] = a2288723115;
void* f2298423116 = encode_clo(clo29874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2298423116;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23261 = encode_clo(alloc_clo(lam23261_fptr, 0));

void* lam23264_fptr() // lam23264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23265 = arg_buffer[1];
//reading env and args
void* a2288523112 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23265))[8];
//not do dummy comment
void* kont22981 = (decode_clo(env23265))[7];
//not do dummy comment
void* cons = (decode_clo(env23265))[6];
//not do dummy comment
void* _u45 = (decode_clo(env23265))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23265))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23265))[3];
//not do dummy comment
void* n = (decode_clo(env23265))[2];
//not do dummy comment
void* car = (decode_clo(env23265))[1];
mpz_t* mpzvar29875 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29875, "1", 10);
void* a2288623113 = encode_mpz(mpzvar29875);

//creating new closure instance
void** clo29877 = alloc_clo(lam23261_fptr, 7);

//setting env list
clo29877[1] = cons;
clo29877[2] = a2288523112;
clo29877[3] = lst2;
clo29877[4] = take_u45helper;
clo29877[5] = car;
clo29877[6] = kont22981;
clo29877[7] = lst;
void* f2298523114 = encode_clo(clo29877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2298523114;
arg_buffer[3] = n;
arg_buffer[4] = a2288623113;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23264 = encode_clo(alloc_clo(lam23264_fptr, 0));

void* lam23266_fptr() // lam23266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23267 = arg_buffer[1];
//reading env and args
void* a2288323108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23267))[10];
//not do dummy comment
void* lst = (decode_clo(env23267))[9];
//not do dummy comment
void* reverse = (decode_clo(env23267))[8];
//not do dummy comment
void* kont22981 = (decode_clo(env23267))[7];
//not do dummy comment
void* cons = (decode_clo(env23267))[6];
//not do dummy comment
void* _u45 = (decode_clo(env23267))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23267))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23267))[3];
//not do dummy comment
void* n = (decode_clo(env23267))[2];
//not do dummy comment
void* car = (decode_clo(env23267))[1];

//if-clause
bool if_guard29878 = is_true(a2288323108);
if(if_guard29878)
{

//creating new closure instance
void** clo29880 = alloc_clo(lam23255_fptr, 1);

//setting env list
clo29880[1] = kont22981;
void* f2298223109 = encode_clo(clo29880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2298223109;
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
void** clo29882 = alloc_clo(lam23264_fptr, 8);

//setting env list
clo29882[1] = car;
clo29882[2] = n;
clo29882[3] = lst2;
clo29882[4] = take_u45helper;
clo29882[5] = _u45;
clo29882[6] = cons;
clo29882[7] = kont22981;
clo29882[8] = lst;
void* f2298623111 = encode_clo(clo29882);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2298623111;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23266 = encode_clo(alloc_clo(lam23266_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23269 = arg_buffer[1];
//reading env and args
void* kont22981 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar29883 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29883, "0", 10);
void* a2288223106 = encode_mpz(mpzvar29883);

//creating new closure instance
void** clo29885 = alloc_clo(lam23266_fptr, 10);

//setting env list
clo29885[1] = car;
clo29885[2] = n;
clo29885[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo29885[4] = take_u45helper;
clo29885[5] = _u45;
clo29885[6] = cons;
clo29885[7] = kont22981;
clo29885[8] = reverse;
clo29885[9] = lst;
clo29885[10] = cdr;
void* f2298723107 = encode_clo(clo29885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2298723107;
arg_buffer[3] = n;
arg_buffer[4] = a2288223106;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam23270_fptr() // lam23270 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23271 = arg_buffer[1];
//reading env and args
void* a2289023121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22988 = (decode_clo(env23271))[4];
//not do dummy comment
void* lst = (decode_clo(env23271))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env23271))[2];
//not do dummy comment
void* n = (decode_clo(env23271))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22988;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2289023121;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23270 = encode_clo(alloc_clo(lam23270_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23272 = arg_buffer[1];
//reading env and args
void* kont22988 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29887 = alloc_clo(lam23270_fptr, 4);

//setting env list
clo29887[1] = n;
clo29887[2] = take_u45helper;
clo29887[3] = lst;
clo29887[4] = kont22988;
void* f2298923120 = encode_clo(clo29887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2298923120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam23274_fptr() // lam23274 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23275 = arg_buffer[1];
//reading env and args
void* a2289523129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22990 = (decode_clo(env23275))[3];
//not do dummy comment
void* _u43 = (decode_clo(env23275))[2];
//not do dummy comment
void* a2289323125 = (decode_clo(env23275))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont22990;
arg_buffer[3] = a2289323125;
arg_buffer[4] = a2289523129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23274 = encode_clo(alloc_clo(lam23274_fptr, 0));

void* lam23276_fptr() // lam23276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23277 = arg_buffer[1];
//reading env and args
void* a2289423127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22990 = (decode_clo(env23277))[4];
//not do dummy comment
void* length = (decode_clo(env23277))[3];
//not do dummy comment
void* _u43 = (decode_clo(env23277))[2];
//not do dummy comment
void* a2289323125 = (decode_clo(env23277))[1];

//creating new closure instance
void** clo29889 = alloc_clo(lam23274_fptr, 3);

//setting env list
clo29889[1] = a2289323125;
clo29889[2] = _u43;
clo29889[3] = kont22990;
void* f2299123128 = encode_clo(clo29889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2299123128;
arg_buffer[3] = a2289423127;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23276 = encode_clo(alloc_clo(lam23276_fptr, 0));

void* lam23279_fptr() // lam23279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23280 = arg_buffer[1];
//reading env and args
void* a2289123123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23280))[5];
//not do dummy comment
void* length = (decode_clo(env23280))[4];
//not do dummy comment
void* _u43 = (decode_clo(env23280))[3];
//not do dummy comment
void* lst = (decode_clo(env23280))[2];
//not do dummy comment
void* kont22990 = (decode_clo(env23280))[1];

//if-clause
bool if_guard29890 = is_true(a2289123123);
if(if_guard29890)
{
mpz_t* mpzvar29891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29891, "0", 10);
void* x2289223124 = encode_mpz(mpzvar29891);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22990);
arg_buffer[2] = x2289223124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22990))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar29892 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29892, "1", 10);
void* a2289323125 = encode_mpz(mpzvar29892);

//creating new closure instance
void** clo29894 = alloc_clo(lam23276_fptr, 4);

//setting env list
clo29894[1] = a2289323125;
clo29894[2] = _u43;
clo29894[3] = length;
clo29894[4] = kont22990;
void* f2299223126 = encode_clo(clo29894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2299223126;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23279 = encode_clo(alloc_clo(lam23279_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23281 = arg_buffer[1];
//reading env and args
void* kont22990 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29896 = alloc_clo(lam23279_fptr, 5);

//setting env list
clo29896[1] = kont22990;
clo29896[2] = lst;
clo29896[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo29896[4] = length;
clo29896[5] = cdr;
void* f2299323122 = encode_clo(clo29896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2299323122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam23282_fptr() // lam23282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23283 = arg_buffer[1];
//reading env and args
void* x2289723133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22994 = (decode_clo(env23283))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22994);
arg_buffer[2] = x2289723133;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22994))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23282 = encode_clo(alloc_clo(lam23282_fptr, 0));

void* lam23284_fptr() // lam23284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23285 = arg_buffer[1];
//reading env and args
void* a2290123141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2289923137 = (decode_clo(env23285))[3];
//not do dummy comment
void* kont22994 = (decode_clo(env23285))[2];
//not do dummy comment
void* cons = (decode_clo(env23285))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22994;
arg_buffer[3] = a2289923137;
arg_buffer[4] = a2290123141;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23284 = encode_clo(alloc_clo(lam23284_fptr, 0));

void* lam23286_fptr() // lam23286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23287 = arg_buffer[1];
//reading env and args
void* a2290023139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env23287))[5];
//not do dummy comment
void* a2289923137 = (decode_clo(env23287))[4];
//not do dummy comment
void* kont22994 = (decode_clo(env23287))[3];
//not do dummy comment
void* proc = (decode_clo(env23287))[2];
//not do dummy comment
void* cons = (decode_clo(env23287))[1];

//creating new closure instance
void** clo29898 = alloc_clo(lam23284_fptr, 3);

//setting env list
clo29898[1] = cons;
clo29898[2] = kont22994;
clo29898[3] = a2289923137;
void* f2299623140 = encode_clo(clo29898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2299623140;
arg_buffer[3] = proc;
arg_buffer[4] = a2290023139;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23286 = encode_clo(alloc_clo(lam23286_fptr, 0));

void* lam23288_fptr() // lam23288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23289 = arg_buffer[1];
//reading env and args
void* a2289923137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23289))[6];
//not do dummy comment
void* lst = (decode_clo(env23289))[5];
//not do dummy comment
void* map = (decode_clo(env23289))[4];
//not do dummy comment
void* kont22994 = (decode_clo(env23289))[3];
//not do dummy comment
void* proc = (decode_clo(env23289))[2];
//not do dummy comment
void* cons = (decode_clo(env23289))[1];

//creating new closure instance
void** clo29900 = alloc_clo(lam23286_fptr, 5);

//setting env list
clo29900[1] = cons;
clo29900[2] = proc;
clo29900[3] = kont22994;
clo29900[4] = a2289923137;
clo29900[5] = map;
void* f2299723138 = encode_clo(clo29900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2299723138;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23288 = encode_clo(alloc_clo(lam23288_fptr, 0));

void* lam23290_fptr() // lam23290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23291 = arg_buffer[1];
//reading env and args
void* a2289823135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23291))[6];
//not do dummy comment
void* lst = (decode_clo(env23291))[5];
//not do dummy comment
void* map = (decode_clo(env23291))[4];
//not do dummy comment
void* kont22994 = (decode_clo(env23291))[3];
//not do dummy comment
void* proc = (decode_clo(env23291))[2];
//not do dummy comment
void* cons = (decode_clo(env23291))[1];

//creating new closure instance
void** clo29902 = alloc_clo(lam23288_fptr, 6);

//setting env list
clo29902[1] = cons;
clo29902[2] = proc;
clo29902[3] = kont22994;
clo29902[4] = map;
clo29902[5] = lst;
clo29902[6] = cdr;
void* f2299823136 = encode_clo(clo29902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2299823136;
arg_buffer[3] = a2289823135;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23290 = encode_clo(alloc_clo(lam23290_fptr, 0));

void* lam23292_fptr() // lam23292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23293 = arg_buffer[1];
//reading env and args
void* a2289623131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23293))[8];
//not do dummy comment
void* map = (decode_clo(env23293))[7];
//not do dummy comment
void* kont22994 = (decode_clo(env23293))[6];
//not do dummy comment
void* proc = (decode_clo(env23293))[5];
//not do dummy comment
void* car = (decode_clo(env23293))[4];
//not do dummy comment
void* cons = (decode_clo(env23293))[3];
//not do dummy comment
void* list = (decode_clo(env23293))[2];
//not do dummy comment
void* cdr = (decode_clo(env23293))[1];

//if-clause
bool if_guard29903 = is_true(a2289623131);
if(if_guard29903)
{

//creating new closure instance
void** clo29905 = alloc_clo(lam23282_fptr, 1);

//setting env list
clo29905[1] = kont22994;
void* f2299523132 = encode_clo(clo29905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2299523132;
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
void** clo29907 = alloc_clo(lam23290_fptr, 6);

//setting env list
clo29907[1] = cons;
clo29907[2] = proc;
clo29907[3] = kont22994;
clo29907[4] = map;
clo29907[5] = lst;
clo29907[6] = cdr;
void* f2299923134 = encode_clo(clo29907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2299923134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23292 = encode_clo(alloc_clo(lam23292_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23294 = arg_buffer[1];
//reading env and args
void* kont22994 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29909 = alloc_clo(lam23292_fptr, 8);

//setting env list
clo29909[1] = cdr;
clo29909[2] = list;
clo29909[3] = cons;
clo29909[4] = car;
clo29909[5] = proc;
clo29909[6] = kont22994;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo29909[7] = map;
clo29909[8] = lst;
void* f2300023130 = encode_clo(clo29909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2300023130;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam23295_fptr() // lam23295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23296 = arg_buffer[1];
//reading env and args
void* x2290323145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23001 = (decode_clo(env23296))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23001);
arg_buffer[2] = x2290323145;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23001))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23295 = encode_clo(alloc_clo(lam23295_fptr, 0));

void* lam23297_fptr() // lam23297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23298 = arg_buffer[1];
//reading env and args
void* a2290823155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2290623151 = (decode_clo(env23298))[3];
//not do dummy comment
void* cons = (decode_clo(env23298))[2];
//not do dummy comment
void* kont23001 = (decode_clo(env23298))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont23001;
arg_buffer[3] = a2290623151;
arg_buffer[4] = a2290823155;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23297 = encode_clo(alloc_clo(lam23297_fptr, 0));

void* lam23299_fptr() // lam23299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23300 = arg_buffer[1];
//reading env and args
void* a2290723153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2290623151 = (decode_clo(env23300))[5];
//not do dummy comment
void* op = (decode_clo(env23300))[4];
//not do dummy comment
void* filter = (decode_clo(env23300))[3];
//not do dummy comment
void* cons = (decode_clo(env23300))[2];
//not do dummy comment
void* kont23001 = (decode_clo(env23300))[1];

//creating new closure instance
void** clo29911 = alloc_clo(lam23297_fptr, 3);

//setting env list
clo29911[1] = kont23001;
clo29911[2] = cons;
clo29911[3] = a2290623151;
void* f2300323154 = encode_clo(clo29911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2300323154;
arg_buffer[3] = op;
arg_buffer[4] = a2290723153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23299 = encode_clo(alloc_clo(lam23299_fptr, 0));

void* lam23301_fptr() // lam23301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23302 = arg_buffer[1];
//reading env and args
void* a2290623151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23302))[6];
//not do dummy comment
void* lst = (decode_clo(env23302))[5];
//not do dummy comment
void* op = (decode_clo(env23302))[4];
//not do dummy comment
void* filter = (decode_clo(env23302))[3];
//not do dummy comment
void* cons = (decode_clo(env23302))[2];
//not do dummy comment
void* kont23001 = (decode_clo(env23302))[1];

//creating new closure instance
void** clo29913 = alloc_clo(lam23299_fptr, 5);

//setting env list
clo29913[1] = kont23001;
clo29913[2] = cons;
clo29913[3] = filter;
clo29913[4] = op;
clo29913[5] = a2290623151;
void* f2300423152 = encode_clo(clo29913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2300423152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23301 = encode_clo(alloc_clo(lam23301_fptr, 0));

void* lam23303_fptr() // lam23303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23304 = arg_buffer[1];
//reading env and args
void* a2290923157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env23304))[3];
//not do dummy comment
void* filter = (decode_clo(env23304))[2];
//not do dummy comment
void* kont23001 = (decode_clo(env23304))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont23001;
arg_buffer[3] = op;
arg_buffer[4] = a2290923157;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23303 = encode_clo(alloc_clo(lam23303_fptr, 0));

void* lam23305_fptr() // lam23305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23306 = arg_buffer[1];
//reading env and args
void* a2290523149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23306))[7];
//not do dummy comment
void* lst = (decode_clo(env23306))[6];
//not do dummy comment
void* op = (decode_clo(env23306))[5];
//not do dummy comment
void* cons = (decode_clo(env23306))[4];
//not do dummy comment
void* kont23001 = (decode_clo(env23306))[3];
//not do dummy comment
void* filter = (decode_clo(env23306))[2];
//not do dummy comment
void* car = (decode_clo(env23306))[1];

//if-clause
bool if_guard29914 = is_true(a2290523149);
if(if_guard29914)
{

//creating new closure instance
void** clo29916 = alloc_clo(lam23301_fptr, 6);

//setting env list
clo29916[1] = kont23001;
clo29916[2] = cons;
clo29916[3] = filter;
clo29916[4] = op;
clo29916[5] = lst;
clo29916[6] = cdr;
void* f2300523150 = encode_clo(clo29916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2300523150;
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
void** clo29918 = alloc_clo(lam23303_fptr, 3);

//setting env list
clo29918[1] = kont23001;
clo29918[2] = filter;
clo29918[3] = op;
void* f2300623156 = encode_clo(clo29918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2300623156;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23305 = encode_clo(alloc_clo(lam23305_fptr, 0));

void* lam23307_fptr() // lam23307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23308 = arg_buffer[1];
//reading env and args
void* a2290423147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23308))[7];
//not do dummy comment
void* lst = (decode_clo(env23308))[6];
//not do dummy comment
void* op = (decode_clo(env23308))[5];
//not do dummy comment
void* cons = (decode_clo(env23308))[4];
//not do dummy comment
void* kont23001 = (decode_clo(env23308))[3];
//not do dummy comment
void* filter = (decode_clo(env23308))[2];
//not do dummy comment
void* car = (decode_clo(env23308))[1];

//creating new closure instance
void** clo29920 = alloc_clo(lam23305_fptr, 7);

//setting env list
clo29920[1] = car;
clo29920[2] = filter;
clo29920[3] = kont23001;
clo29920[4] = cons;
clo29920[5] = op;
clo29920[6] = lst;
clo29920[7] = cdr;
void* f2300723148 = encode_clo(clo29920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2300723148;
arg_buffer[3] = a2290423147;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23307 = encode_clo(alloc_clo(lam23307_fptr, 0));

void* lam23309_fptr() // lam23309 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23310 = arg_buffer[1];
//reading env and args
void* a2290223143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23310))[8];
//not do dummy comment
void* op = (decode_clo(env23310))[7];
//not do dummy comment
void* cons = (decode_clo(env23310))[6];
//not do dummy comment
void* kont23001 = (decode_clo(env23310))[5];
//not do dummy comment
void* list = (decode_clo(env23310))[4];
//not do dummy comment
void* cdr = (decode_clo(env23310))[3];
//not do dummy comment
void* filter = (decode_clo(env23310))[2];
//not do dummy comment
void* car = (decode_clo(env23310))[1];

//if-clause
bool if_guard29921 = is_true(a2290223143);
if(if_guard29921)
{

//creating new closure instance
void** clo29923 = alloc_clo(lam23295_fptr, 1);

//setting env list
clo29923[1] = kont23001;
void* f2300223144 = encode_clo(clo29923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2300223144;
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
void** clo29925 = alloc_clo(lam23307_fptr, 7);

//setting env list
clo29925[1] = car;
clo29925[2] = filter;
clo29925[3] = kont23001;
clo29925[4] = cons;
clo29925[5] = op;
clo29925[6] = lst;
clo29925[7] = cdr;
void* f2300823146 = encode_clo(clo29925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2300823146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23309 = encode_clo(alloc_clo(lam23309_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23311 = arg_buffer[1];
//reading env and args
void* kont23001 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29927 = alloc_clo(lam23309_fptr, 8);

//setting env list
clo29927[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo29927[2] = filter;
clo29927[3] = cdr;
clo29927[4] = list;
clo29927[5] = kont23001;
clo29927[6] = cons;
clo29927[7] = op;
clo29927[8] = lst;
void* f2300923142 = encode_clo(clo29927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2300923142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam23312_fptr() // lam23312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23313 = arg_buffer[1];
//reading env and args
void* a2291423165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2291223162 = (decode_clo(env23313))[3];
//not do dummy comment
void* drop = (decode_clo(env23313))[2];
//not do dummy comment
void* kont23010 = (decode_clo(env23313))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont23010;
arg_buffer[3] = a2291223162;
arg_buffer[4] = a2291423165;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23312 = encode_clo(alloc_clo(lam23312_fptr, 0));

void* lam23315_fptr() // lam23315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23316 = arg_buffer[1];
//reading env and args
void* a2291223162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env23316))[4];
//not do dummy comment
void* kont23010 = (decode_clo(env23316))[3];
//not do dummy comment
void* n = (decode_clo(env23316))[2];
//not do dummy comment
void* _u45 = (decode_clo(env23316))[1];
mpz_t* mpzvar29928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29928, "1", 10);
void* a2291323163 = encode_mpz(mpzvar29928);

//creating new closure instance
void** clo29930 = alloc_clo(lam23312_fptr, 3);

//setting env list
clo29930[1] = kont23010;
clo29930[2] = drop;
clo29930[3] = a2291223162;
void* f2301123164 = encode_clo(clo29930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2301123164;
arg_buffer[3] = n;
arg_buffer[4] = a2291323163;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23315 = encode_clo(alloc_clo(lam23315_fptr, 0));

void* lam23317_fptr() // lam23317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23318 = arg_buffer[1];
//reading env and args
void* a2291123160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23318))[6];
//not do dummy comment
void* kont23010 = (decode_clo(env23318))[5];
//not do dummy comment
void* n = (decode_clo(env23318))[4];
//not do dummy comment
void* _u45 = (decode_clo(env23318))[3];
//not do dummy comment
void* lst = (decode_clo(env23318))[2];
//not do dummy comment
void* drop = (decode_clo(env23318))[1];

//if-clause
bool if_guard29931 = is_true(a2291123160);
if(if_guard29931)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23010);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23010))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29933 = alloc_clo(lam23315_fptr, 4);

//setting env list
clo29933[1] = _u45;
clo29933[2] = n;
clo29933[3] = kont23010;
clo29933[4] = drop;
void* f2301223161 = encode_clo(clo29933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2301223161;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23317 = encode_clo(alloc_clo(lam23317_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23320 = arg_buffer[1];
//reading env and args
void* kont23010 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar29934 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29934, "0", 10);
void* a2291023158 = encode_mpz(mpzvar29934);

//creating new closure instance
void** clo29936 = alloc_clo(lam23317_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo29936[1] = drop;
clo29936[2] = lst;
clo29936[3] = _u45;
clo29936[4] = n;
clo29936[5] = kont23010;
clo29936[6] = cdr;
void* f2301323159 = encode_clo(clo29936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2301323159;
arg_buffer[3] = n;
arg_buffer[4] = a2291023158;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam23321_fptr() // lam23321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23322 = arg_buffer[1];
//reading env and args
void* a2291823173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2291623169 = (decode_clo(env23322))[3];
//not do dummy comment
void* proc = (decode_clo(env23322))[2];
//not do dummy comment
void* kont23014 = (decode_clo(env23322))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont23014;
arg_buffer[3] = a2291623169;
arg_buffer[4] = a2291823173;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23321 = encode_clo(alloc_clo(lam23321_fptr, 0));

void* lam23323_fptr() // lam23323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23324 = arg_buffer[1];
//reading env and args
void* a2291723171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env23324))[5];
//not do dummy comment
void* a2291623169 = (decode_clo(env23324))[4];
//not do dummy comment
void* kont23014 = (decode_clo(env23324))[3];
//not do dummy comment
void* proc = (decode_clo(env23324))[2];
//not do dummy comment
void* acc = (decode_clo(env23324))[1];

//creating new closure instance
void** clo29938 = alloc_clo(lam23321_fptr, 3);

//setting env list
clo29938[1] = kont23014;
clo29938[2] = proc;
clo29938[3] = a2291623169;
void* f2301523172 = encode_clo(clo29938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2301523172;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2291723171;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23323 = encode_clo(alloc_clo(lam23323_fptr, 0));

void* lam23325_fptr() // lam23325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23326 = arg_buffer[1];
//reading env and args
void* a2291623169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23326))[6];
//not do dummy comment
void* kont23014 = (decode_clo(env23326))[5];
//not do dummy comment
void* foldr = (decode_clo(env23326))[4];
//not do dummy comment
void* lst = (decode_clo(env23326))[3];
//not do dummy comment
void* proc = (decode_clo(env23326))[2];
//not do dummy comment
void* acc = (decode_clo(env23326))[1];

//creating new closure instance
void** clo29940 = alloc_clo(lam23323_fptr, 5);

//setting env list
clo29940[1] = acc;
clo29940[2] = proc;
clo29940[3] = kont23014;
clo29940[4] = a2291623169;
clo29940[5] = foldr;
void* f2301623170 = encode_clo(clo29940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2301623170;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23325 = encode_clo(alloc_clo(lam23325_fptr, 0));

void* lam23327_fptr() // lam23327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23328 = arg_buffer[1];
//reading env and args
void* a2291523167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23328))[7];
//not do dummy comment
void* kont23014 = (decode_clo(env23328))[6];
//not do dummy comment
void* car = (decode_clo(env23328))[5];
//not do dummy comment
void* foldr = (decode_clo(env23328))[4];
//not do dummy comment
void* lst = (decode_clo(env23328))[3];
//not do dummy comment
void* proc = (decode_clo(env23328))[2];
//not do dummy comment
void* acc = (decode_clo(env23328))[1];

//if-clause
bool if_guard29941 = is_true(a2291523167);
if(if_guard29941)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23014);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23014))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29943 = alloc_clo(lam23325_fptr, 6);

//setting env list
clo29943[1] = acc;
clo29943[2] = proc;
clo29943[3] = lst;
clo29943[4] = foldr;
clo29943[5] = kont23014;
clo29943[6] = cdr;
void* f2301723168 = encode_clo(clo29943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2301723168;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23327 = encode_clo(alloc_clo(lam23327_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23329 = arg_buffer[1];
//reading env and args
void* kont23014 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29945 = alloc_clo(lam23327_fptr, 7);

//setting env list
clo29945[1] = acc;
clo29945[2] = proc;
clo29945[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo29945[4] = foldr;
clo29945[5] = car;
clo29945[6] = kont23014;
clo29945[7] = cdr;
void* f2301823166 = encode_clo(clo29945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2301823166;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam23330_fptr() // lam23330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23331 = arg_buffer[1];
//reading env and args
void* a2292223181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23019 = (decode_clo(env23331))[3];
//not do dummy comment
void* cons = (decode_clo(env23331))[2];
//not do dummy comment
void* a2292023177 = (decode_clo(env23331))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont23019;
arg_buffer[3] = a2292023177;
arg_buffer[4] = a2292223181;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23330 = encode_clo(alloc_clo(lam23330_fptr, 0));

void* lam23332_fptr() // lam23332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23333 = arg_buffer[1];
//reading env and args
void* a2292123179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23019 = (decode_clo(env23333))[5];
//not do dummy comment
void* append = (decode_clo(env23333))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23333))[3];
//not do dummy comment
void* cons = (decode_clo(env23333))[2];
//not do dummy comment
void* a2292023177 = (decode_clo(env23333))[1];

//creating new closure instance
void** clo29947 = alloc_clo(lam23330_fptr, 3);

//setting env list
clo29947[1] = a2292023177;
clo29947[2] = cons;
clo29947[3] = kont23019;
void* f2302023180 = encode_clo(clo29947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2302023180;
arg_buffer[3] = a2292123179;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23332 = encode_clo(alloc_clo(lam23332_fptr, 0));

void* lam23334_fptr() // lam23334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23335 = arg_buffer[1];
//reading env and args
void* a2292023177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23335))[6];
//not do dummy comment
void* kont23019 = (decode_clo(env23335))[5];
//not do dummy comment
void* append = (decode_clo(env23335))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23335))[3];
//not do dummy comment
void* lst1 = (decode_clo(env23335))[2];
//not do dummy comment
void* cons = (decode_clo(env23335))[1];

//creating new closure instance
void** clo29949 = alloc_clo(lam23332_fptr, 5);

//setting env list
clo29949[1] = a2292023177;
clo29949[2] = cons;
clo29949[3] = lst2;
clo29949[4] = append;
clo29949[5] = kont23019;
void* f2302123178 = encode_clo(clo29949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2302123178;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23334 = encode_clo(alloc_clo(lam23334_fptr, 0));

void* lam23336_fptr() // lam23336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23337 = arg_buffer[1];
//reading env and args
void* a2291923175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23337))[7];
//not do dummy comment
void* kont23019 = (decode_clo(env23337))[6];
//not do dummy comment
void* append = (decode_clo(env23337))[5];
//not do dummy comment
void* lst2 = (decode_clo(env23337))[4];
//not do dummy comment
void* cons = (decode_clo(env23337))[3];
//not do dummy comment
void* lst1 = (decode_clo(env23337))[2];
//not do dummy comment
void* car = (decode_clo(env23337))[1];

//if-clause
bool if_guard29950 = is_true(a2291923175);
if(if_guard29950)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23019);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23019))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29952 = alloc_clo(lam23334_fptr, 6);

//setting env list
clo29952[1] = cons;
clo29952[2] = lst1;
clo29952[3] = lst2;
clo29952[4] = append;
clo29952[5] = kont23019;
clo29952[6] = cdr;
void* f2302223176 = encode_clo(clo29952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2302223176;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23336 = encode_clo(alloc_clo(lam23336_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23338 = arg_buffer[1];
//reading env and args
void* kont23019 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29954 = alloc_clo(lam23336_fptr, 7);

//setting env list
clo29954[1] = car;
clo29954[2] = lst1;
clo29954[3] = cons;
clo29954[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo29954[5] = append;
clo29954[6] = kont23019;
clo29954[7] = cdr;
void* f2302323174 = encode_clo(clo29954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2302323174;
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
void* _23339 = arg_buffer[1];
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

void* kont2302423182 = prim_car(lst);
void* lst23183 = prim_cdr(lst);
void* x2292323184 = apply_prim_hash(lst23183);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2302423182);
arg_buffer[2] = x2292323184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2302423182))[0]);
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
void* _23340 = arg_buffer[1];
//reading env and args
void* kont23026 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2292423185 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23026);
arg_buffer[2] = x2292423185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23026))[0]);
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
void* _23341 = arg_buffer[1];
//reading env and args
void* kont23027 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2292523186 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23027);
arg_buffer[2] = x2292523186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23027))[0]);
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
void* _23342 = arg_buffer[1];
//reading env and args
void* kont23028 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2292623187 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23028);
arg_buffer[2] = x2292623187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23028))[0]);
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
void* _23343 = arg_buffer[1];
//reading env and args
void* kont23029 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2292723188 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23029);
arg_buffer[2] = x2292723188;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23029))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam23344_fptr() // lam23344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23345 = arg_buffer[1];
//reading env and args
void* a2293123193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env23345))[3];
//not do dummy comment
void* kont23030 = (decode_clo(env23345))[2];
//not do dummy comment
void* filter = (decode_clo(env23345))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont23030;
arg_buffer[3] = odd_u63;
arg_buffer[4] = a2293123193;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23344 = encode_clo(alloc_clo(lam23344_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23349 = arg_buffer[1];
//reading env and args
void* kont23030 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar29955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29955, "1", 10);
void* a2292823189 = encode_mpz(mpzvar29955);
mpz_t* mpzvar29956 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29956, "2", 10);
void* a2292923190 = encode_mpz(mpzvar29956);
mpz_t* mpzvar29957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29957, "3", 10);
void* a2293023191 = encode_mpz(mpzvar29957);

//creating new closure instance
void** clo29959 = alloc_clo(lam23344_fptr, 3);

//setting env list
clo29959[1] = filter;
clo29959[2] = kont23030;
clo29959[3] = odd_u63;
void* f2303123192 = encode_clo(clo29959);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2303123192;
arg_buffer[3] = a2292823189;
arg_buffer[4] = a2292923190;
arg_buffer[5] = a2293023191;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam23350_fptr() // lam23350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23351 = arg_buffer[1];
//reading env and args
void* x2293223195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23032 = (decode_clo(env23351))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23032);
arg_buffer[2] = x2293223195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23032))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23350 = encode_clo(alloc_clo(lam23350_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23352 = arg_buffer[1];
//reading env and args
void* kont23032 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo29961 = alloc_clo(lam23350_fptr, 1);

//setting env list
clo29961[1] = kont23032;
void* f2303323194 = encode_clo(clo29961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2303323194;
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

