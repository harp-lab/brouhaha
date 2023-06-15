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
void* _23192 = arg_buffer[1];
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

void* kont2292923030 = prim_car(lst);
void* lst23031 = prim_cdr(lst);
void* x2284123032 = apply_prim__u43(lst23031);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2292923030);
arg_buffer[2] = x2284123032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2292923030))[0]);
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
void* _23193 = arg_buffer[1];
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

void* kont2293123033 = prim_car(lst);
void* lst23034 = prim_cdr(lst);
void* x2284223035 = apply_prim__u45(lst23034);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2293123033);
arg_buffer[2] = x2284223035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2293123033))[0]);
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
void* _23194 = arg_buffer[1];
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

void* kont2293323036 = prim_car(lst);
void* lst23037 = prim_cdr(lst);
void* x2284323038 = apply_prim__u42(lst23037);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2293323036);
arg_buffer[2] = x2284323038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2293323036))[0]);
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
void* _23195 = arg_buffer[1];
//reading env and args
void* kont22935 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2284423039 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22935);
arg_buffer[2] = x2284423039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22935))[0]);
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

void* kont2293623040 = prim_car(lst);
void* lst23041 = prim_cdr(lst);
void* x2284523042 = apply_prim__u47(lst23041);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2293623040);
arg_buffer[2] = x2284523042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2293623040))[0]);
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

void* kont2293823043 = prim_car(lst);
void* lst23044 = prim_cdr(lst);
void* x2284623045 = apply_prim__u61(lst23044);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2293823043);
arg_buffer[2] = x2284623045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2293823043))[0]);
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

void* kont2294023046 = prim_car(lst);
void* lst23047 = prim_cdr(lst);
void* x2284723048 = apply_prim__u62(lst23047);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294023046);
arg_buffer[2] = x2284723048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294023046))[0]);
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
void* _23199 = arg_buffer[1];
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

void* kont2294223049 = prim_car(lst);
void* lst23050 = prim_cdr(lst);
void* x2284823051 = apply_prim__u60(lst23050);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294223049);
arg_buffer[2] = x2284823051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294223049))[0]);
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

void* kont2294423052 = prim_car(lst);
void* lst23053 = prim_cdr(lst);
void* x2284923054 = apply_prim__u60_u61(lst23053);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294423052);
arg_buffer[2] = x2284923054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294423052))[0]);
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

void* kont2294623055 = prim_car(lst);
void* lst23056 = prim_cdr(lst);
void* x2285023057 = apply_prim__u62_u61(lst23056);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2294623055);
arg_buffer[2] = x2285023057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2294623055))[0]);
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
void* _23202 = arg_buffer[1];
//reading env and args
void* kont22948 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2285123058 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22948);
arg_buffer[2] = x2285123058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22948))[0]);
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
void* _23203 = arg_buffer[1];
//reading env and args
void* kont22949 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2285223059 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22949);
arg_buffer[2] = x2285223059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22949))[0]);
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
void* _23204 = arg_buffer[1];
//reading env and args
void* kont22950 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2285323060 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22950);
arg_buffer[2] = x2285323060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22950))[0]);
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
void* _23205 = arg_buffer[1];
//reading env and args
void* kont22951 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2285423061 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22951);
arg_buffer[2] = x2285423061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22951))[0]);
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
void* _23206 = arg_buffer[1];
//reading env and args
void* kont22952 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2285523062 = prim_car(lst);

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

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23207 = arg_buffer[1];
//reading env and args
void* kont22953 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2285623063 = prim_cdr(lst);

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

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam23208_fptr() // lam23208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23209 = arg_buffer[1];
//reading env and args
void* a2285923067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2285723064 = (decode_clo(env23209))[3];
//not do dummy comment
void* kont22954 = (decode_clo(env23209))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env23209))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22954;
arg_buffer[3] = a2285723064;
arg_buffer[4] = a2285923067;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23208 = encode_clo(alloc_clo(lam23208_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23212 = arg_buffer[1];
//reading env and args
void* kont22954 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29829 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29829, "0", 10);
void* a2285723064 = encode_mpz(mpzvar29829);
mpz_t* mpzvar29830 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29830, "2", 10);
void* a2285823065 = encode_mpz(mpzvar29830);

//creating new closure instance
void** clo29832 = alloc_clo(lam23208_fptr, 3);

//setting env list
clo29832[1] = equal_u63;
clo29832[2] = kont22954;
clo29832[3] = a2285723064;
void* f2295523066 = encode_clo(clo29832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2295523066;
arg_buffer[3] = x;
arg_buffer[4] = a2285823065;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam23213_fptr() // lam23213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23214 = arg_buffer[1];
//reading env and args
void* a2286223071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env23214))[3];
//not do dummy comment
void* kont22956 = (decode_clo(env23214))[2];
//not do dummy comment
void* a2286023068 = (decode_clo(env23214))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont22956;
arg_buffer[3] = a2286023068;
arg_buffer[4] = a2286223071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23213 = encode_clo(alloc_clo(lam23213_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23217 = arg_buffer[1];
//reading env and args
void* kont22956 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar29833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29833, "1", 10);
void* a2286023068 = encode_mpz(mpzvar29833);
mpz_t* mpzvar29834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29834, "2", 10);
void* a2286123069 = encode_mpz(mpzvar29834);

//creating new closure instance
void** clo29836 = alloc_clo(lam23213_fptr, 3);

//setting env list
clo29836[1] = a2286023068;
clo29836[2] = kont22956;
clo29836[3] = equal_u63;
void* f2295723070 = encode_clo(clo29836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2295723070;
arg_buffer[3] = x;
arg_buffer[4] = a2286123069;
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
void* _23218 = arg_buffer[1];
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

void* kont2295823072 = prim_car(x);
void* x23073 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2295823072);
arg_buffer[2] = x23073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2295823072))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam23221_fptr() // lam23221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23222 = arg_buffer[1];
//reading env and args
void* a2286823083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22960 = (decode_clo(env23222))[3];
//not do dummy comment
void* x = (decode_clo(env23222))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23222))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont22960;
arg_buffer[3] = x;
arg_buffer[4] = a2286823083;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23221 = encode_clo(alloc_clo(lam23221_fptr, 0));

void* lam23223_fptr() // lam23223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23224 = arg_buffer[1];
//reading env and args
void* a2286623080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23224))[5];
//not do dummy comment
void* lst = (decode_clo(env23224))[4];
//not do dummy comment
void* kont22960 = (decode_clo(env23224))[3];
//not do dummy comment
void* x = (decode_clo(env23224))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23224))[1];

//if-clause
bool if_guard29837 = is_true(a2286623080);
if(if_guard29837)
{
void* x2286723081 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22960);
arg_buffer[2] = x2286723081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22960))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29839 = alloc_clo(lam23221_fptr, 3);

//setting env list
clo29839[1] = member_u63;
clo29839[2] = x;
clo29839[3] = kont22960;
void* f2296123082 = encode_clo(clo29839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2296123082;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23223 = encode_clo(alloc_clo(lam23223_fptr, 0));

void* lam23225_fptr() // lam23225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23226 = arg_buffer[1];
//reading env and args
void* a2286523078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23226))[6];
//not do dummy comment
void* lst = (decode_clo(env23226))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env23226))[4];
//not do dummy comment
void* kont22960 = (decode_clo(env23226))[3];
//not do dummy comment
void* x = (decode_clo(env23226))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23226))[1];

//creating new closure instance
void** clo29841 = alloc_clo(lam23223_fptr, 5);

//setting env list
clo29841[1] = member_u63;
clo29841[2] = x;
clo29841[3] = kont22960;
clo29841[4] = lst;
clo29841[5] = cdr;
void* f2296223079 = encode_clo(clo29841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2296223079;
arg_buffer[3] = a2286523078;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
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
void* a2286323075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23228))[7];
//not do dummy comment
void* lst = (decode_clo(env23228))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env23228))[5];
//not do dummy comment
void* kont22960 = (decode_clo(env23228))[4];
//not do dummy comment
void* x = (decode_clo(env23228))[3];
//not do dummy comment
void* car = (decode_clo(env23228))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env23228))[1];

//if-clause
bool if_guard29842 = is_true(a2286323075);
if(if_guard29842)
{
void* x2286423076 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22960);
arg_buffer[2] = x2286423076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22960))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29844 = alloc_clo(lam23225_fptr, 6);

//setting env list
clo29844[1] = member_u63;
clo29844[2] = x;
clo29844[3] = kont22960;
clo29844[4] = equal_u63;
clo29844[5] = lst;
clo29844[6] = cdr;
void* f2296323077 = encode_clo(clo29844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2296323077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23227 = encode_clo(alloc_clo(lam23227_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23229 = arg_buffer[1];
//reading env and args
void* kont22960 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29846 = alloc_clo(lam23227_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo29846[1] = member_u63;
clo29846[2] = car;
clo29846[3] = x;
clo29846[4] = kont22960;
clo29846[5] = equal_u63;
clo29846[6] = lst;
clo29846[7] = cdr;
void* f2296423074 = encode_clo(clo29846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2296423074;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam23230_fptr() // lam23230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23231 = arg_buffer[1];
//reading env and args
void* a2287223091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env23231))[4];
//not do dummy comment
void* a2287123089 = (decode_clo(env23231))[3];
//not do dummy comment
void* foldl = (decode_clo(env23231))[2];
//not do dummy comment
void* kont22965 = (decode_clo(env23231))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont22965;
arg_buffer[3] = fun;
arg_buffer[4] = a2287123089;
arg_buffer[5] = a2287223091;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23230 = encode_clo(alloc_clo(lam23230_fptr, 0));

void* lam23232_fptr() // lam23232 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23233 = arg_buffer[1];
//reading env and args
void* a2287123089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23233))[5];
//not do dummy comment
void* lst = (decode_clo(env23233))[4];
//not do dummy comment
void* fun = (decode_clo(env23233))[3];
//not do dummy comment
void* foldl = (decode_clo(env23233))[2];
//not do dummy comment
void* kont22965 = (decode_clo(env23233))[1];

//creating new closure instance
void** clo29848 = alloc_clo(lam23230_fptr, 4);

//setting env list
clo29848[1] = kont22965;
clo29848[2] = foldl;
clo29848[3] = a2287123089;
clo29848[4] = fun;
void* f2296623090 = encode_clo(clo29848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2296623090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23232 = encode_clo(alloc_clo(lam23232_fptr, 0));

void* lam23234_fptr() // lam23234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23235 = arg_buffer[1];
//reading env and args
void* a2287023087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23235))[6];
//not do dummy comment
void* lst = (decode_clo(env23235))[5];
//not do dummy comment
void* fun = (decode_clo(env23235))[4];
//not do dummy comment
void* acc = (decode_clo(env23235))[3];
//not do dummy comment
void* foldl = (decode_clo(env23235))[2];
//not do dummy comment
void* kont22965 = (decode_clo(env23235))[1];

//creating new closure instance
void** clo29850 = alloc_clo(lam23232_fptr, 5);

//setting env list
clo29850[1] = kont22965;
clo29850[2] = foldl;
clo29850[3] = fun;
clo29850[4] = lst;
clo29850[5] = cdr;
void* f2296723088 = encode_clo(clo29850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2296723088;
arg_buffer[3] = a2287023087;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a2286923085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23237))[7];
//not do dummy comment
void* lst = (decode_clo(env23237))[6];
//not do dummy comment
void* fun = (decode_clo(env23237))[5];
//not do dummy comment
void* acc = (decode_clo(env23237))[4];
//not do dummy comment
void* car = (decode_clo(env23237))[3];
//not do dummy comment
void* foldl = (decode_clo(env23237))[2];
//not do dummy comment
void* kont22965 = (decode_clo(env23237))[1];

//if-clause
bool if_guard29851 = is_true(a2286923085);
if(if_guard29851)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22965);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29853 = alloc_clo(lam23234_fptr, 6);

//setting env list
clo29853[1] = kont22965;
clo29853[2] = foldl;
clo29853[3] = acc;
clo29853[4] = fun;
clo29853[5] = lst;
clo29853[6] = cdr;
void* f2296823086 = encode_clo(clo29853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2296823086;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23236 = encode_clo(alloc_clo(lam23236_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23238 = arg_buffer[1];
//reading env and args
void* kont22965 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29855 = alloc_clo(lam23236_fptr, 7);

//setting env list
clo29855[1] = kont22965;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo29855[2] = foldl;
clo29855[3] = car;
clo29855[4] = acc;
clo29855[5] = fun;
clo29855[6] = lst;
clo29855[7] = cdr;
void* f2296923084 = encode_clo(clo29855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2296923084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam23239_fptr() // lam23239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23240 = arg_buffer[1];
//reading env and args
void* a2287623099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2287423095 = (decode_clo(env23240))[3];
//not do dummy comment
void* kont22970 = (decode_clo(env23240))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23240))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22970;
arg_buffer[3] = a2287423095;
arg_buffer[4] = a2287623099;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23239 = encode_clo(alloc_clo(lam23239_fptr, 0));

void* lam23241_fptr() // lam23241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23242 = arg_buffer[1];
//reading env and args
void* a2287523097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2287423095 = (decode_clo(env23242))[5];
//not do dummy comment
void* kont22970 = (decode_clo(env23242))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23242))[3];
//not do dummy comment
void* lst2 = (decode_clo(env23242))[2];
//not do dummy comment
void* cons = (decode_clo(env23242))[1];

//creating new closure instance
void** clo29857 = alloc_clo(lam23239_fptr, 3);

//setting env list
clo29857[1] = reverse_u45helper;
clo29857[2] = kont22970;
clo29857[3] = a2287423095;
void* f2297123098 = encode_clo(clo29857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2297123098;
arg_buffer[3] = a2287523097;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23241 = encode_clo(alloc_clo(lam23241_fptr, 0));

void* lam23243_fptr() // lam23243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23244 = arg_buffer[1];
//reading env and args
void* a2287423095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23244))[6];
//not do dummy comment
void* lst2 = (decode_clo(env23244))[5];
//not do dummy comment
void* car = (decode_clo(env23244))[4];
//not do dummy comment
void* cons = (decode_clo(env23244))[3];
//not do dummy comment
void* lst = (decode_clo(env23244))[2];
//not do dummy comment
void* kont22970 = (decode_clo(env23244))[1];

//creating new closure instance
void** clo29859 = alloc_clo(lam23241_fptr, 5);

//setting env list
clo29859[1] = cons;
clo29859[2] = lst2;
clo29859[3] = reverse_u45helper;
clo29859[4] = kont22970;
clo29859[5] = a2287423095;
void* f2297223096 = encode_clo(clo29859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2297223096;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a2287323093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23246))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23246))[6];
//not do dummy comment
void* lst2 = (decode_clo(env23246))[5];
//not do dummy comment
void* car = (decode_clo(env23246))[4];
//not do dummy comment
void* cons = (decode_clo(env23246))[3];
//not do dummy comment
void* lst = (decode_clo(env23246))[2];
//not do dummy comment
void* kont22970 = (decode_clo(env23246))[1];

//if-clause
bool if_guard29860 = is_true(a2287323093);
if(if_guard29860)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22970);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22970))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29862 = alloc_clo(lam23243_fptr, 6);

//setting env list
clo29862[1] = kont22970;
clo29862[2] = lst;
clo29862[3] = cons;
clo29862[4] = car;
clo29862[5] = lst2;
clo29862[6] = reverse_u45helper;
void* f2297323094 = encode_clo(clo29862);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2297323094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23245 = encode_clo(alloc_clo(lam23245_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23247 = arg_buffer[1];
//reading env and args
void* kont22970 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29864 = alloc_clo(lam23245_fptr, 7);

//setting env list
clo29864[1] = kont22970;
clo29864[2] = lst;
clo29864[3] = cons;
clo29864[4] = car;
clo29864[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo29864[6] = reverse_u45helper;
clo29864[7] = cdr;
void* f2297423092 = encode_clo(clo29864);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2297423092;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam23248_fptr() // lam23248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23249 = arg_buffer[1];
//reading env and args
void* a2287723101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23249))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env23249))[2];
//not do dummy comment
void* kont22975 = (decode_clo(env23249))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont22975;
arg_buffer[3] = lst;
arg_buffer[4] = a2287723101;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23248 = encode_clo(alloc_clo(lam23248_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23250 = arg_buffer[1];
//reading env and args
void* kont22975 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29866 = alloc_clo(lam23248_fptr, 3);

//setting env list
clo29866[1] = kont22975;
clo29866[2] = reverse_u45helper;
clo29866[3] = lst;
void* f2297623100 = encode_clo(clo29866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2297623100;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam23251_fptr() // lam23251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23252 = arg_buffer[1];
//reading env and args
void* x2288023106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22977 = (decode_clo(env23252))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22977);
arg_buffer[2] = x2288023106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22977))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23251 = encode_clo(alloc_clo(lam23251_fptr, 0));

void* lam23253_fptr() // lam23253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23254 = arg_buffer[1];
//reading env and args
void* a2288523115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2288323111 = (decode_clo(env23254))[4];
//not do dummy comment
void* kont22977 = (decode_clo(env23254))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env23254))[2];
//not do dummy comment
void* a2288123108 = (decode_clo(env23254))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22977;
arg_buffer[3] = a2288123108;
arg_buffer[4] = a2288323111;
arg_buffer[5] = a2288523115;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23253 = encode_clo(alloc_clo(lam23253_fptr, 0));

void* lam23255_fptr() // lam23255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23256 = arg_buffer[1];
//reading env and args
void* a2288423113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2288323111 = (decode_clo(env23256))[6];
//not do dummy comment
void* kont22977 = (decode_clo(env23256))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23256))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23256))[3];
//not do dummy comment
void* a2288123108 = (decode_clo(env23256))[2];
//not do dummy comment
void* cons = (decode_clo(env23256))[1];

//creating new closure instance
void** clo29868 = alloc_clo(lam23253_fptr, 4);

//setting env list
clo29868[1] = a2288123108;
clo29868[2] = take_u45helper;
clo29868[3] = kont22977;
clo29868[4] = a2288323111;
void* f2297923114 = encode_clo(clo29868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2297923114;
arg_buffer[3] = a2288423113;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a2288323111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23258))[7];
//not do dummy comment
void* kont22977 = (decode_clo(env23258))[6];
//not do dummy comment
void* car = (decode_clo(env23258))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23258))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23258))[3];
//not do dummy comment
void* a2288123108 = (decode_clo(env23258))[2];
//not do dummy comment
void* cons = (decode_clo(env23258))[1];

//creating new closure instance
void** clo29870 = alloc_clo(lam23255_fptr, 6);

//setting env list
clo29870[1] = cons;
clo29870[2] = a2288123108;
clo29870[3] = lst2;
clo29870[4] = take_u45helper;
clo29870[5] = kont22977;
clo29870[6] = a2288323111;
void* f2298023112 = encode_clo(clo29870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2298023112;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23257 = encode_clo(alloc_clo(lam23257_fptr, 0));

void* lam23260_fptr() // lam23260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23261 = arg_buffer[1];
//reading env and args
void* a2288123108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23261))[8];
//not do dummy comment
void* kont22977 = (decode_clo(env23261))[7];
//not do dummy comment
void* cons = (decode_clo(env23261))[6];
//not do dummy comment
void* _u45 = (decode_clo(env23261))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23261))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23261))[3];
//not do dummy comment
void* n = (decode_clo(env23261))[2];
//not do dummy comment
void* car = (decode_clo(env23261))[1];
mpz_t* mpzvar29871 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29871, "1", 10);
void* a2288223109 = encode_mpz(mpzvar29871);

//creating new closure instance
void** clo29873 = alloc_clo(lam23257_fptr, 7);

//setting env list
clo29873[1] = cons;
clo29873[2] = a2288123108;
clo29873[3] = lst2;
clo29873[4] = take_u45helper;
clo29873[5] = car;
clo29873[6] = kont22977;
clo29873[7] = lst;
void* f2298123110 = encode_clo(clo29873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2298123110;
arg_buffer[3] = n;
arg_buffer[4] = a2288223109;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23260 = encode_clo(alloc_clo(lam23260_fptr, 0));

void* lam23262_fptr() // lam23262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23263 = arg_buffer[1];
//reading env and args
void* a2287923104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23263))[10];
//not do dummy comment
void* lst = (decode_clo(env23263))[9];
//not do dummy comment
void* reverse = (decode_clo(env23263))[8];
//not do dummy comment
void* kont22977 = (decode_clo(env23263))[7];
//not do dummy comment
void* cons = (decode_clo(env23263))[6];
//not do dummy comment
void* _u45 = (decode_clo(env23263))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env23263))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23263))[3];
//not do dummy comment
void* n = (decode_clo(env23263))[2];
//not do dummy comment
void* car = (decode_clo(env23263))[1];

//if-clause
bool if_guard29874 = is_true(a2287923104);
if(if_guard29874)
{

//creating new closure instance
void** clo29876 = alloc_clo(lam23251_fptr, 1);

//setting env list
clo29876[1] = kont22977;
void* f2297823105 = encode_clo(clo29876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2297823105;
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
void** clo29878 = alloc_clo(lam23260_fptr, 8);

//setting env list
clo29878[1] = car;
clo29878[2] = n;
clo29878[3] = lst2;
clo29878[4] = take_u45helper;
clo29878[5] = _u45;
clo29878[6] = cons;
clo29878[7] = kont22977;
clo29878[8] = lst;
void* f2298223107 = encode_clo(clo29878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2298223107;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23262 = encode_clo(alloc_clo(lam23262_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23265 = arg_buffer[1];
//reading env and args
void* kont22977 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar29879 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29879, "0", 10);
void* a2287823102 = encode_mpz(mpzvar29879);

//creating new closure instance
void** clo29881 = alloc_clo(lam23262_fptr, 10);

//setting env list
clo29881[1] = car;
clo29881[2] = n;
clo29881[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo29881[4] = take_u45helper;
clo29881[5] = _u45;
clo29881[6] = cons;
clo29881[7] = kont22977;
clo29881[8] = reverse;
clo29881[9] = lst;
clo29881[10] = cdr;
void* f2298323103 = encode_clo(clo29881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2298323103;
arg_buffer[3] = n;
arg_buffer[4] = a2287823102;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam23266_fptr() // lam23266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23267 = arg_buffer[1];
//reading env and args
void* a2288623117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22984 = (decode_clo(env23267))[4];
//not do dummy comment
void* lst = (decode_clo(env23267))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env23267))[2];
//not do dummy comment
void* n = (decode_clo(env23267))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont22984;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2288623117;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23266 = encode_clo(alloc_clo(lam23266_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23268 = arg_buffer[1];
//reading env and args
void* kont22984 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29883 = alloc_clo(lam23266_fptr, 4);

//setting env list
clo29883[1] = n;
clo29883[2] = take_u45helper;
clo29883[3] = lst;
clo29883[4] = kont22984;
void* f2298523116 = encode_clo(clo29883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2298523116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam23270_fptr() // lam23270 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23271 = arg_buffer[1];
//reading env and args
void* a2289123125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22986 = (decode_clo(env23271))[3];
//not do dummy comment
void* _u43 = (decode_clo(env23271))[2];
//not do dummy comment
void* a2288923121 = (decode_clo(env23271))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont22986;
arg_buffer[3] = a2288923121;
arg_buffer[4] = a2289123125;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23270 = encode_clo(alloc_clo(lam23270_fptr, 0));

void* lam23272_fptr() // lam23272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23273 = arg_buffer[1];
//reading env and args
void* a2289023123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22986 = (decode_clo(env23273))[4];
//not do dummy comment
void* length = (decode_clo(env23273))[3];
//not do dummy comment
void* _u43 = (decode_clo(env23273))[2];
//not do dummy comment
void* a2288923121 = (decode_clo(env23273))[1];

//creating new closure instance
void** clo29885 = alloc_clo(lam23270_fptr, 3);

//setting env list
clo29885[1] = a2288923121;
clo29885[2] = _u43;
clo29885[3] = kont22986;
void* f2298723124 = encode_clo(clo29885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2298723124;
arg_buffer[3] = a2289023123;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23272 = encode_clo(alloc_clo(lam23272_fptr, 0));

void* lam23275_fptr() // lam23275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23276 = arg_buffer[1];
//reading env and args
void* a2288723119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23276))[5];
//not do dummy comment
void* length = (decode_clo(env23276))[4];
//not do dummy comment
void* _u43 = (decode_clo(env23276))[3];
//not do dummy comment
void* lst = (decode_clo(env23276))[2];
//not do dummy comment
void* kont22986 = (decode_clo(env23276))[1];

//if-clause
bool if_guard29886 = is_true(a2288723119);
if(if_guard29886)
{
mpz_t* mpzvar29887 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29887, "0", 10);
void* x2288823120 = encode_mpz(mpzvar29887);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22986);
arg_buffer[2] = x2288823120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22986))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar29888 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29888, "1", 10);
void* a2288923121 = encode_mpz(mpzvar29888);

//creating new closure instance
void** clo29890 = alloc_clo(lam23272_fptr, 4);

//setting env list
clo29890[1] = a2288923121;
clo29890[2] = _u43;
clo29890[3] = length;
clo29890[4] = kont22986;
void* f2298823122 = encode_clo(clo29890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2298823122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23275 = encode_clo(alloc_clo(lam23275_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23277 = arg_buffer[1];
//reading env and args
void* kont22986 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo29892 = alloc_clo(lam23275_fptr, 5);

//setting env list
clo29892[1] = kont22986;
clo29892[2] = lst;
clo29892[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo29892[4] = length;
clo29892[5] = cdr;
void* f2298923118 = encode_clo(clo29892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2298923118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam23278_fptr() // lam23278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23279 = arg_buffer[1];
//reading env and args
void* x2289323129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22990 = (decode_clo(env23279))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22990);
arg_buffer[2] = x2289323129;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22990))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23278 = encode_clo(alloc_clo(lam23278_fptr, 0));

void* lam23280_fptr() // lam23280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23281 = arg_buffer[1];
//reading env and args
void* a2289723137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2289523133 = (decode_clo(env23281))[3];
//not do dummy comment
void* kont22990 = (decode_clo(env23281))[2];
//not do dummy comment
void* cons = (decode_clo(env23281))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22990;
arg_buffer[3] = a2289523133;
arg_buffer[4] = a2289723137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23280 = encode_clo(alloc_clo(lam23280_fptr, 0));

void* lam23282_fptr() // lam23282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23283 = arg_buffer[1];
//reading env and args
void* a2289623135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env23283))[5];
//not do dummy comment
void* a2289523133 = (decode_clo(env23283))[4];
//not do dummy comment
void* kont22990 = (decode_clo(env23283))[3];
//not do dummy comment
void* proc = (decode_clo(env23283))[2];
//not do dummy comment
void* cons = (decode_clo(env23283))[1];

//creating new closure instance
void** clo29894 = alloc_clo(lam23280_fptr, 3);

//setting env list
clo29894[1] = cons;
clo29894[2] = kont22990;
clo29894[3] = a2289523133;
void* f2299223136 = encode_clo(clo29894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2299223136;
arg_buffer[3] = proc;
arg_buffer[4] = a2289623135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a2289523133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23285))[6];
//not do dummy comment
void* lst = (decode_clo(env23285))[5];
//not do dummy comment
void* map = (decode_clo(env23285))[4];
//not do dummy comment
void* kont22990 = (decode_clo(env23285))[3];
//not do dummy comment
void* proc = (decode_clo(env23285))[2];
//not do dummy comment
void* cons = (decode_clo(env23285))[1];

//creating new closure instance
void** clo29896 = alloc_clo(lam23282_fptr, 5);

//setting env list
clo29896[1] = cons;
clo29896[2] = proc;
clo29896[3] = kont22990;
clo29896[4] = a2289523133;
clo29896[5] = map;
void* f2299323134 = encode_clo(clo29896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2299323134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a2289423131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23287))[6];
//not do dummy comment
void* lst = (decode_clo(env23287))[5];
//not do dummy comment
void* map = (decode_clo(env23287))[4];
//not do dummy comment
void* kont22990 = (decode_clo(env23287))[3];
//not do dummy comment
void* proc = (decode_clo(env23287))[2];
//not do dummy comment
void* cons = (decode_clo(env23287))[1];

//creating new closure instance
void** clo29898 = alloc_clo(lam23284_fptr, 6);

//setting env list
clo29898[1] = cons;
clo29898[2] = proc;
clo29898[3] = kont22990;
clo29898[4] = map;
clo29898[5] = lst;
clo29898[6] = cdr;
void* f2299423132 = encode_clo(clo29898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2299423132;
arg_buffer[3] = a2289423131;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a2289223127 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23289))[8];
//not do dummy comment
void* map = (decode_clo(env23289))[7];
//not do dummy comment
void* kont22990 = (decode_clo(env23289))[6];
//not do dummy comment
void* proc = (decode_clo(env23289))[5];
//not do dummy comment
void* car = (decode_clo(env23289))[4];
//not do dummy comment
void* cons = (decode_clo(env23289))[3];
//not do dummy comment
void* list = (decode_clo(env23289))[2];
//not do dummy comment
void* cdr = (decode_clo(env23289))[1];

//if-clause
bool if_guard29899 = is_true(a2289223127);
if(if_guard29899)
{

//creating new closure instance
void** clo29901 = alloc_clo(lam23278_fptr, 1);

//setting env list
clo29901[1] = kont22990;
void* f2299123128 = encode_clo(clo29901);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2299123128;
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
void** clo29903 = alloc_clo(lam23286_fptr, 6);

//setting env list
clo29903[1] = cons;
clo29903[2] = proc;
clo29903[3] = kont22990;
clo29903[4] = map;
clo29903[5] = lst;
clo29903[6] = cdr;
void* f2299523130 = encode_clo(clo29903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2299523130;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23288 = encode_clo(alloc_clo(lam23288_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23290 = arg_buffer[1];
//reading env and args
void* kont22990 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29905 = alloc_clo(lam23288_fptr, 8);

//setting env list
clo29905[1] = cdr;
clo29905[2] = list;
clo29905[3] = cons;
clo29905[4] = car;
clo29905[5] = proc;
clo29905[6] = kont22990;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo29905[7] = map;
clo29905[8] = lst;
void* f2299623126 = encode_clo(clo29905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2299623126;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam23291_fptr() // lam23291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23292 = arg_buffer[1];
//reading env and args
void* x2289923141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont22997 = (decode_clo(env23292))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont22997);
arg_buffer[2] = x2289923141;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont22997))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23291 = encode_clo(alloc_clo(lam23291_fptr, 0));

void* lam23293_fptr() // lam23293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23294 = arg_buffer[1];
//reading env and args
void* a2290423151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2290223147 = (decode_clo(env23294))[3];
//not do dummy comment
void* cons = (decode_clo(env23294))[2];
//not do dummy comment
void* kont22997 = (decode_clo(env23294))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont22997;
arg_buffer[3] = a2290223147;
arg_buffer[4] = a2290423151;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23293 = encode_clo(alloc_clo(lam23293_fptr, 0));

void* lam23295_fptr() // lam23295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23296 = arg_buffer[1];
//reading env and args
void* a2290323149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2290223147 = (decode_clo(env23296))[5];
//not do dummy comment
void* op = (decode_clo(env23296))[4];
//not do dummy comment
void* filter = (decode_clo(env23296))[3];
//not do dummy comment
void* cons = (decode_clo(env23296))[2];
//not do dummy comment
void* kont22997 = (decode_clo(env23296))[1];

//creating new closure instance
void** clo29907 = alloc_clo(lam23293_fptr, 3);

//setting env list
clo29907[1] = kont22997;
clo29907[2] = cons;
clo29907[3] = a2290223147;
void* f2299923150 = encode_clo(clo29907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2299923150;
arg_buffer[3] = op;
arg_buffer[4] = a2290323149;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a2290223147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23298))[6];
//not do dummy comment
void* lst = (decode_clo(env23298))[5];
//not do dummy comment
void* op = (decode_clo(env23298))[4];
//not do dummy comment
void* filter = (decode_clo(env23298))[3];
//not do dummy comment
void* cons = (decode_clo(env23298))[2];
//not do dummy comment
void* kont22997 = (decode_clo(env23298))[1];

//creating new closure instance
void** clo29909 = alloc_clo(lam23295_fptr, 5);

//setting env list
clo29909[1] = kont22997;
clo29909[2] = cons;
clo29909[3] = filter;
clo29909[4] = op;
clo29909[5] = a2290223147;
void* f2300023148 = encode_clo(clo29909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2300023148;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a2290523153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env23300))[3];
//not do dummy comment
void* filter = (decode_clo(env23300))[2];
//not do dummy comment
void* kont22997 = (decode_clo(env23300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont22997;
arg_buffer[3] = op;
arg_buffer[4] = a2290523153;
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
void* a2290123145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23302))[7];
//not do dummy comment
void* lst = (decode_clo(env23302))[6];
//not do dummy comment
void* op = (decode_clo(env23302))[5];
//not do dummy comment
void* cons = (decode_clo(env23302))[4];
//not do dummy comment
void* kont22997 = (decode_clo(env23302))[3];
//not do dummy comment
void* filter = (decode_clo(env23302))[2];
//not do dummy comment
void* car = (decode_clo(env23302))[1];

//if-clause
bool if_guard29910 = is_true(a2290123145);
if(if_guard29910)
{

//creating new closure instance
void** clo29912 = alloc_clo(lam23297_fptr, 6);

//setting env list
clo29912[1] = kont22997;
clo29912[2] = cons;
clo29912[3] = filter;
clo29912[4] = op;
clo29912[5] = lst;
clo29912[6] = cdr;
void* f2300123146 = encode_clo(clo29912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2300123146;
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
void** clo29914 = alloc_clo(lam23299_fptr, 3);

//setting env list
clo29914[1] = kont22997;
clo29914[2] = filter;
clo29914[3] = op;
void* f2300223152 = encode_clo(clo29914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2300223152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23301 = encode_clo(alloc_clo(lam23301_fptr, 0));

void* lam23303_fptr() // lam23303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23304 = arg_buffer[1];
//reading env and args
void* a2290023143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23304))[7];
//not do dummy comment
void* lst = (decode_clo(env23304))[6];
//not do dummy comment
void* op = (decode_clo(env23304))[5];
//not do dummy comment
void* cons = (decode_clo(env23304))[4];
//not do dummy comment
void* kont22997 = (decode_clo(env23304))[3];
//not do dummy comment
void* filter = (decode_clo(env23304))[2];
//not do dummy comment
void* car = (decode_clo(env23304))[1];

//creating new closure instance
void** clo29916 = alloc_clo(lam23301_fptr, 7);

//setting env list
clo29916[1] = car;
clo29916[2] = filter;
clo29916[3] = kont22997;
clo29916[4] = cons;
clo29916[5] = op;
clo29916[6] = lst;
clo29916[7] = cdr;
void* f2300323144 = encode_clo(clo29916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2300323144;
arg_buffer[3] = a2290023143;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a2289823139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env23306))[8];
//not do dummy comment
void* op = (decode_clo(env23306))[7];
//not do dummy comment
void* cons = (decode_clo(env23306))[6];
//not do dummy comment
void* kont22997 = (decode_clo(env23306))[5];
//not do dummy comment
void* list = (decode_clo(env23306))[4];
//not do dummy comment
void* cdr = (decode_clo(env23306))[3];
//not do dummy comment
void* filter = (decode_clo(env23306))[2];
//not do dummy comment
void* car = (decode_clo(env23306))[1];

//if-clause
bool if_guard29917 = is_true(a2289823139);
if(if_guard29917)
{

//creating new closure instance
void** clo29919 = alloc_clo(lam23291_fptr, 1);

//setting env list
clo29919[1] = kont22997;
void* f2299823140 = encode_clo(clo29919);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2299823140;
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
void** clo29921 = alloc_clo(lam23303_fptr, 7);

//setting env list
clo29921[1] = car;
clo29921[2] = filter;
clo29921[3] = kont22997;
clo29921[4] = cons;
clo29921[5] = op;
clo29921[6] = lst;
clo29921[7] = cdr;
void* f2300423142 = encode_clo(clo29921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2300423142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23305 = encode_clo(alloc_clo(lam23305_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23307 = arg_buffer[1];
//reading env and args
void* kont22997 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29923 = alloc_clo(lam23305_fptr, 8);

//setting env list
clo29923[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo29923[2] = filter;
clo29923[3] = cdr;
clo29923[4] = list;
clo29923[5] = kont22997;
clo29923[6] = cons;
clo29923[7] = op;
clo29923[8] = lst;
void* f2300523138 = encode_clo(clo29923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2300523138;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam23308_fptr() // lam23308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23309 = arg_buffer[1];
//reading env and args
void* a2291023161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2290823158 = (decode_clo(env23309))[3];
//not do dummy comment
void* drop = (decode_clo(env23309))[2];
//not do dummy comment
void* kont23006 = (decode_clo(env23309))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont23006;
arg_buffer[3] = a2290823158;
arg_buffer[4] = a2291023161;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23308 = encode_clo(alloc_clo(lam23308_fptr, 0));

void* lam23311_fptr() // lam23311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23312 = arg_buffer[1];
//reading env and args
void* a2290823158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env23312))[4];
//not do dummy comment
void* kont23006 = (decode_clo(env23312))[3];
//not do dummy comment
void* n = (decode_clo(env23312))[2];
//not do dummy comment
void* _u45 = (decode_clo(env23312))[1];
mpz_t* mpzvar29924 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29924, "1", 10);
void* a2290923159 = encode_mpz(mpzvar29924);

//creating new closure instance
void** clo29926 = alloc_clo(lam23308_fptr, 3);

//setting env list
clo29926[1] = kont23006;
clo29926[2] = drop;
clo29926[3] = a2290823158;
void* f2300723160 = encode_clo(clo29926);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2300723160;
arg_buffer[3] = n;
arg_buffer[4] = a2290923159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23311 = encode_clo(alloc_clo(lam23311_fptr, 0));

void* lam23313_fptr() // lam23313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23314 = arg_buffer[1];
//reading env and args
void* a2290723156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23314))[6];
//not do dummy comment
void* kont23006 = (decode_clo(env23314))[5];
//not do dummy comment
void* n = (decode_clo(env23314))[4];
//not do dummy comment
void* _u45 = (decode_clo(env23314))[3];
//not do dummy comment
void* lst = (decode_clo(env23314))[2];
//not do dummy comment
void* drop = (decode_clo(env23314))[1];

//if-clause
bool if_guard29927 = is_true(a2290723156);
if(if_guard29927)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23006);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23006))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29929 = alloc_clo(lam23311_fptr, 4);

//setting env list
clo29929[1] = _u45;
clo29929[2] = n;
clo29929[3] = kont23006;
clo29929[4] = drop;
void* f2300823157 = encode_clo(clo29929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2300823157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23313 = encode_clo(alloc_clo(lam23313_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23316 = arg_buffer[1];
//reading env and args
void* kont23006 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar29930 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29930, "0", 10);
void* a2290623154 = encode_mpz(mpzvar29930);

//creating new closure instance
void** clo29932 = alloc_clo(lam23313_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo29932[1] = drop;
clo29932[2] = lst;
clo29932[3] = _u45;
clo29932[4] = n;
clo29932[5] = kont23006;
clo29932[6] = cdr;
void* f2300923155 = encode_clo(clo29932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2300923155;
arg_buffer[3] = n;
arg_buffer[4] = a2290623154;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam23317_fptr() // lam23317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23318 = arg_buffer[1];
//reading env and args
void* a2291423169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2291223165 = (decode_clo(env23318))[3];
//not do dummy comment
void* proc = (decode_clo(env23318))[2];
//not do dummy comment
void* kont23010 = (decode_clo(env23318))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont23010;
arg_buffer[3] = a2291223165;
arg_buffer[4] = a2291423169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23317 = encode_clo(alloc_clo(lam23317_fptr, 0));

void* lam23319_fptr() // lam23319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23320 = arg_buffer[1];
//reading env and args
void* a2291323167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env23320))[5];
//not do dummy comment
void* a2291223165 = (decode_clo(env23320))[4];
//not do dummy comment
void* kont23010 = (decode_clo(env23320))[3];
//not do dummy comment
void* proc = (decode_clo(env23320))[2];
//not do dummy comment
void* acc = (decode_clo(env23320))[1];

//creating new closure instance
void** clo29934 = alloc_clo(lam23317_fptr, 3);

//setting env list
clo29934[1] = kont23010;
clo29934[2] = proc;
clo29934[3] = a2291223165;
void* f2301123168 = encode_clo(clo29934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2301123168;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2291323167;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23319 = encode_clo(alloc_clo(lam23319_fptr, 0));

void* lam23321_fptr() // lam23321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23322 = arg_buffer[1];
//reading env and args
void* a2291223165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23322))[6];
//not do dummy comment
void* kont23010 = (decode_clo(env23322))[5];
//not do dummy comment
void* foldr = (decode_clo(env23322))[4];
//not do dummy comment
void* lst = (decode_clo(env23322))[3];
//not do dummy comment
void* proc = (decode_clo(env23322))[2];
//not do dummy comment
void* acc = (decode_clo(env23322))[1];

//creating new closure instance
void** clo29936 = alloc_clo(lam23319_fptr, 5);

//setting env list
clo29936[1] = acc;
clo29936[2] = proc;
clo29936[3] = kont23010;
clo29936[4] = a2291223165;
clo29936[5] = foldr;
void* f2301223166 = encode_clo(clo29936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2301223166;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a2291123163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23324))[7];
//not do dummy comment
void* kont23010 = (decode_clo(env23324))[6];
//not do dummy comment
void* car = (decode_clo(env23324))[5];
//not do dummy comment
void* foldr = (decode_clo(env23324))[4];
//not do dummy comment
void* lst = (decode_clo(env23324))[3];
//not do dummy comment
void* proc = (decode_clo(env23324))[2];
//not do dummy comment
void* acc = (decode_clo(env23324))[1];

//if-clause
bool if_guard29937 = is_true(a2291123163);
if(if_guard29937)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23010);
arg_buffer[2] = acc;
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
void** clo29939 = alloc_clo(lam23321_fptr, 6);

//setting env list
clo29939[1] = acc;
clo29939[2] = proc;
clo29939[3] = lst;
clo29939[4] = foldr;
clo29939[5] = kont23010;
clo29939[6] = cdr;
void* f2301323164 = encode_clo(clo29939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2301323164;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23323 = encode_clo(alloc_clo(lam23323_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23325 = arg_buffer[1];
//reading env and args
void* kont23010 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo29941 = alloc_clo(lam23323_fptr, 7);

//setting env list
clo29941[1] = acc;
clo29941[2] = proc;
clo29941[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo29941[4] = foldr;
clo29941[5] = car;
clo29941[6] = kont23010;
clo29941[7] = cdr;
void* f2301423162 = encode_clo(clo29941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2301423162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam23326_fptr() // lam23326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23327 = arg_buffer[1];
//reading env and args
void* a2291823177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23015 = (decode_clo(env23327))[3];
//not do dummy comment
void* cons = (decode_clo(env23327))[2];
//not do dummy comment
void* a2291623173 = (decode_clo(env23327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont23015;
arg_buffer[3] = a2291623173;
arg_buffer[4] = a2291823177;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23326 = encode_clo(alloc_clo(lam23326_fptr, 0));

void* lam23328_fptr() // lam23328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23329 = arg_buffer[1];
//reading env and args
void* a2291723175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23015 = (decode_clo(env23329))[5];
//not do dummy comment
void* append = (decode_clo(env23329))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23329))[3];
//not do dummy comment
void* cons = (decode_clo(env23329))[2];
//not do dummy comment
void* a2291623173 = (decode_clo(env23329))[1];

//creating new closure instance
void** clo29943 = alloc_clo(lam23326_fptr, 3);

//setting env list
clo29943[1] = a2291623173;
clo29943[2] = cons;
clo29943[3] = kont23015;
void* f2301623176 = encode_clo(clo29943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2301623176;
arg_buffer[3] = a2291723175;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23328 = encode_clo(alloc_clo(lam23328_fptr, 0));

void* lam23330_fptr() // lam23330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23331 = arg_buffer[1];
//reading env and args
void* a2291623173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23331))[6];
//not do dummy comment
void* kont23015 = (decode_clo(env23331))[5];
//not do dummy comment
void* append = (decode_clo(env23331))[4];
//not do dummy comment
void* lst2 = (decode_clo(env23331))[3];
//not do dummy comment
void* lst1 = (decode_clo(env23331))[2];
//not do dummy comment
void* cons = (decode_clo(env23331))[1];

//creating new closure instance
void** clo29945 = alloc_clo(lam23328_fptr, 5);

//setting env list
clo29945[1] = a2291623173;
clo29945[2] = cons;
clo29945[3] = lst2;
clo29945[4] = append;
clo29945[5] = kont23015;
void* f2301723174 = encode_clo(clo29945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2301723174;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a2291523171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env23333))[7];
//not do dummy comment
void* kont23015 = (decode_clo(env23333))[6];
//not do dummy comment
void* append = (decode_clo(env23333))[5];
//not do dummy comment
void* lst2 = (decode_clo(env23333))[4];
//not do dummy comment
void* cons = (decode_clo(env23333))[3];
//not do dummy comment
void* lst1 = (decode_clo(env23333))[2];
//not do dummy comment
void* car = (decode_clo(env23333))[1];

//if-clause
bool if_guard29946 = is_true(a2291523171);
if(if_guard29946)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23015);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23015))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo29948 = alloc_clo(lam23330_fptr, 6);

//setting env list
clo29948[1] = cons;
clo29948[2] = lst1;
clo29948[3] = lst2;
clo29948[4] = append;
clo29948[5] = kont23015;
clo29948[6] = cdr;
void* f2301823172 = encode_clo(clo29948);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2301823172;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam23332 = encode_clo(alloc_clo(lam23332_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23334 = arg_buffer[1];
//reading env and args
void* kont23015 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo29950 = alloc_clo(lam23332_fptr, 7);

//setting env list
clo29950[1] = car;
clo29950[2] = lst1;
clo29950[3] = cons;
clo29950[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo29950[5] = append;
clo29950[6] = kont23015;
clo29950[7] = cdr;
void* f2301923170 = encode_clo(clo29950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2301923170;
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
void* _23335 = arg_buffer[1];
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

void* kont2302023178 = prim_car(lst);
void* lst23179 = prim_cdr(lst);
void* x2291923180 = apply_prim_hash(lst23179);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2302023178);
arg_buffer[2] = x2291923180;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2302023178))[0]);
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
void* _23336 = arg_buffer[1];
//reading env and args
void* kont23022 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2292023181 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23022);
arg_buffer[2] = x2292023181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23022))[0]);
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
void* _23337 = arg_buffer[1];
//reading env and args
void* kont23023 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2292123182 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23023);
arg_buffer[2] = x2292123182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23023))[0]);
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
void* _23338 = arg_buffer[1];
//reading env and args
void* kont23024 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2292223183 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23024);
arg_buffer[2] = x2292223183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23024))[0]);
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
void* _23339 = arg_buffer[1];
//reading env and args
void* kont23025 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2292323184 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23025);
arg_buffer[2] = x2292323184;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23025))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam23340_fptr() // lam23340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23341 = arg_buffer[1];
//reading env and args
void* a2292723189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env23341))[3];
//not do dummy comment
void* kont23026 = (decode_clo(env23341))[2];
//not do dummy comment
void* filter = (decode_clo(env23341))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont23026;
arg_buffer[3] = odd_u63;
arg_buffer[4] = a2292723189;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23340 = encode_clo(alloc_clo(lam23340_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23345 = arg_buffer[1];
//reading env and args
void* kont23026 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar29951 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29951, "1", 10);
void* a2292423185 = encode_mpz(mpzvar29951);
mpz_t* mpzvar29952 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29952, "2", 10);
void* a2292523186 = encode_mpz(mpzvar29952);
mpz_t* mpzvar29953 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar29953, "3", 10);
void* a2292623187 = encode_mpz(mpzvar29953);

//creating new closure instance
void** clo29955 = alloc_clo(lam23340_fptr, 3);

//setting env list
clo29955[1] = filter;
clo29955[2] = kont23026;
clo29955[3] = odd_u63;
void* f2302723188 = encode_clo(clo29955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2302723188;
arg_buffer[3] = a2292423185;
arg_buffer[4] = a2292523186;
arg_buffer[5] = a2292623187;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam23346_fptr() // lam23346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env23347 = arg_buffer[1];
//reading env and args
void* x2292823191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont23028 = (decode_clo(env23347))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont23028);
arg_buffer[2] = x2292823191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont23028))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam23346 = encode_clo(alloc_clo(lam23346_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _23348 = arg_buffer[1];
//reading env and args
void* kont23028 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo29957 = alloc_clo(lam23346_fptr, 1);

//setting env list
clo29957[1] = kont23028;
void* f2302923190 = encode_clo(clo29957);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2302923190;
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

