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
void* _33172 = arg_buffer[1];
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

void* kont3290533007 = prim_car(lst);
void* lst33008 = prim_cdr(lst);
void* x3281533009 = apply_prim__u43(lst33008);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3290533007);
arg_buffer[2] = x3281533009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3290533007))[0]);
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
void* _33173 = arg_buffer[1];
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

void* kont3290733010 = prim_car(lst);
void* lst33011 = prim_cdr(lst);
void* x3281633012 = apply_prim__u45(lst33011);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3290733010);
arg_buffer[2] = x3281633012;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3290733010))[0]);
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
void* _33174 = arg_buffer[1];
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

void* kont3290933013 = prim_car(lst);
void* lst33014 = prim_cdr(lst);
void* x3281733015 = apply_prim__u42(lst33014);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3290933013);
arg_buffer[2] = x3281733015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3290933013))[0]);
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
void* _33175 = arg_buffer[1];
//reading env and args
void* kont32911 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3281833016 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32911);
arg_buffer[2] = x3281833016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32911))[0]);
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
void* _33176 = arg_buffer[1];
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

void* kont3291233017 = prim_car(lst);
void* lst33018 = prim_cdr(lst);
void* x3281933019 = apply_prim__u47(lst33018);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3291233017);
arg_buffer[2] = x3281933019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3291233017))[0]);
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
void* _33177 = arg_buffer[1];
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

void* kont3291433020 = prim_car(lst);
void* lst33021 = prim_cdr(lst);
void* x3282033022 = apply_prim__u61(lst33021);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3291433020);
arg_buffer[2] = x3282033022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3291433020))[0]);
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
void* _33178 = arg_buffer[1];
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

void* kont3291633023 = prim_car(lst);
void* lst33024 = prim_cdr(lst);
void* x3282133025 = apply_prim__u62(lst33024);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3291633023);
arg_buffer[2] = x3282133025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3291633023))[0]);
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
void* _33179 = arg_buffer[1];
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

void* kont3291833026 = prim_car(lst);
void* lst33027 = prim_cdr(lst);
void* x3282233028 = apply_prim__u60(lst33027);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3291833026);
arg_buffer[2] = x3282233028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3291833026))[0]);
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
void* _33180 = arg_buffer[1];
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

void* kont3292033029 = prim_car(lst);
void* lst33030 = prim_cdr(lst);
void* x3282333031 = apply_prim__u60_u61(lst33030);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3292033029);
arg_buffer[2] = x3282333031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3292033029))[0]);
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
void* _33181 = arg_buffer[1];
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

void* kont3292233032 = prim_car(lst);
void* lst33033 = prim_cdr(lst);
void* x3282433034 = apply_prim__u62_u61(lst33033);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3292233032);
arg_buffer[2] = x3282433034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3292233032))[0]);
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
void* _33182 = arg_buffer[1];
//reading env and args
void* kont32924 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3282533035 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32924);
arg_buffer[2] = x3282533035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32924))[0]);
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
void* _33183 = arg_buffer[1];
//reading env and args
void* kont32925 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3282633036 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32925);
arg_buffer[2] = x3282633036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32925))[0]);
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
void* _33184 = arg_buffer[1];
//reading env and args
void* kont32926 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3282733037 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32926);
arg_buffer[2] = x3282733037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32926))[0]);
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
void* _33185 = arg_buffer[1];
//reading env and args
void* kont32927 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3282833038 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32927);
arg_buffer[2] = x3282833038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32927))[0]);
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
void* _33186 = arg_buffer[1];
//reading env and args
void* kont32928 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3282933039 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32928);
arg_buffer[2] = x3282933039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32928))[0]);
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
void* _33187 = arg_buffer[1];
//reading env and args
void* kont32929 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3283033040 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32929);
arg_buffer[2] = x3283033040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32929))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam33188_fptr() // lam33188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33189 = arg_buffer[1];
//reading env and args
void* a3283333044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3283133041 = (decode_clo(env33189))[3];
//not do dummy comment
void* kont32930 = (decode_clo(env33189))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env33189))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont32930;
arg_buffer[3] = a3283133041;
arg_buffer[4] = a3283333044;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33188 = encode_clo(alloc_clo(lam33188_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33192 = arg_buffer[1];
//reading env and args
void* kont32930 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar41972 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41972, "0", 10);
void* a3283133041 = encode_mpz(mpzvar41972);
mpz_t* mpzvar41973 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41973, "2", 10);
void* a3283233042 = encode_mpz(mpzvar41973);

//creating new closure instance
void** clo41975 = alloc_clo(lam33188_fptr, 3);

//setting env list
clo41975[1] = equal_u63;
clo41975[2] = kont32930;
clo41975[3] = a3283133041;
void* f3293133043 = encode_clo(clo41975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3293133043;
arg_buffer[3] = x;
arg_buffer[4] = a3283233042;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam33193_fptr() // lam33193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33194 = arg_buffer[1];
//reading env and args
void* a3283633048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32932 = (decode_clo(env33194))[3];
//not do dummy comment
void* a3283433045 = (decode_clo(env33194))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env33194))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont32932;
arg_buffer[3] = a3283433045;
arg_buffer[4] = a3283633048;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33193 = encode_clo(alloc_clo(lam33193_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33197 = arg_buffer[1];
//reading env and args
void* kont32932 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar41976 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41976, "1", 10);
void* a3283433045 = encode_mpz(mpzvar41976);
mpz_t* mpzvar41977 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar41977, "2", 10);
void* a3283533046 = encode_mpz(mpzvar41977);

//creating new closure instance
void** clo41979 = alloc_clo(lam33193_fptr, 3);

//setting env list
clo41979[1] = equal_u63;
clo41979[2] = a3283433045;
clo41979[3] = kont32932;
void* f3293333047 = encode_clo(clo41979);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3293333047;
arg_buffer[3] = x;
arg_buffer[4] = a3283533046;
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
void* _33198 = arg_buffer[1];
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

void* kont3293433049 = prim_car(x);
void* x33050 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3293433049);
arg_buffer[2] = x33050;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3293433049))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam33201_fptr() // lam33201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33202 = arg_buffer[1];
//reading env and args
void* a3284233060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32936 = (decode_clo(env33202))[3];
//not do dummy comment
void* x = (decode_clo(env33202))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33202))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont32936;
arg_buffer[3] = x;
arg_buffer[4] = a3284233060;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33201 = encode_clo(alloc_clo(lam33201_fptr, 0));

void* lam33203_fptr() // lam33203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33204 = arg_buffer[1];
//reading env and args
void* a3284033057 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33204))[5];
//not do dummy comment
void* lst = (decode_clo(env33204))[4];
//not do dummy comment
void* kont32936 = (decode_clo(env33204))[3];
//not do dummy comment
void* x = (decode_clo(env33204))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33204))[1];

//if-clause
bool if_guard41980 = is_true(a3284033057);
if(if_guard41980)
{
void* x3284133058 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32936);
arg_buffer[2] = x3284133058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32936))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41982 = alloc_clo(lam33201_fptr, 3);

//setting env list
clo41982[1] = member_u63;
clo41982[2] = x;
clo41982[3] = kont32936;
void* f3293733059 = encode_clo(clo41982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3293733059;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33203 = encode_clo(alloc_clo(lam33203_fptr, 0));

void* lam33205_fptr() // lam33205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33206 = arg_buffer[1];
//reading env and args
void* a3283933055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33206))[6];
//not do dummy comment
void* lst = (decode_clo(env33206))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env33206))[4];
//not do dummy comment
void* kont32936 = (decode_clo(env33206))[3];
//not do dummy comment
void* x = (decode_clo(env33206))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33206))[1];

//creating new closure instance
void** clo41984 = alloc_clo(lam33203_fptr, 5);

//setting env list
clo41984[1] = member_u63;
clo41984[2] = x;
clo41984[3] = kont32936;
clo41984[4] = lst;
clo41984[5] = cdr;
void* f3293833056 = encode_clo(clo41984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3293833056;
arg_buffer[3] = a3283933055;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33205 = encode_clo(alloc_clo(lam33205_fptr, 0));

void* lam33207_fptr() // lam33207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33208 = arg_buffer[1];
//reading env and args
void* a3283733052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33208))[7];
//not do dummy comment
void* lst = (decode_clo(env33208))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env33208))[5];
//not do dummy comment
void* kont32936 = (decode_clo(env33208))[4];
//not do dummy comment
void* x = (decode_clo(env33208))[3];
//not do dummy comment
void* car = (decode_clo(env33208))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env33208))[1];

//if-clause
bool if_guard41985 = is_true(a3283733052);
if(if_guard41985)
{
void* x3283833053 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32936);
arg_buffer[2] = x3283833053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32936))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41987 = alloc_clo(lam33205_fptr, 6);

//setting env list
clo41987[1] = member_u63;
clo41987[2] = x;
clo41987[3] = kont32936;
clo41987[4] = equal_u63;
clo41987[5] = lst;
clo41987[6] = cdr;
void* f3293933054 = encode_clo(clo41987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3293933054;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33207 = encode_clo(alloc_clo(lam33207_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33209 = arg_buffer[1];
//reading env and args
void* kont32936 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo41989 = alloc_clo(lam33207_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo41989[1] = member_u63;
clo41989[2] = car;
clo41989[3] = x;
clo41989[4] = kont32936;
clo41989[5] = equal_u63;
clo41989[6] = lst;
clo41989[7] = cdr;
void* f3294033051 = encode_clo(clo41989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3294033051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam33210_fptr() // lam33210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33211 = arg_buffer[1];
//reading env and args
void* a3284633068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env33211))[4];
//not do dummy comment
void* a3284533066 = (decode_clo(env33211))[3];
//not do dummy comment
void* foldl = (decode_clo(env33211))[2];
//not do dummy comment
void* kont32941 = (decode_clo(env33211))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont32941;
arg_buffer[3] = fun;
arg_buffer[4] = a3284533066;
arg_buffer[5] = a3284633068;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33210 = encode_clo(alloc_clo(lam33210_fptr, 0));

void* lam33212_fptr() // lam33212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33213 = arg_buffer[1];
//reading env and args
void* a3284533066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33213))[5];
//not do dummy comment
void* lst = (decode_clo(env33213))[4];
//not do dummy comment
void* fun = (decode_clo(env33213))[3];
//not do dummy comment
void* foldl = (decode_clo(env33213))[2];
//not do dummy comment
void* kont32941 = (decode_clo(env33213))[1];

//creating new closure instance
void** clo41991 = alloc_clo(lam33210_fptr, 4);

//setting env list
clo41991[1] = kont32941;
clo41991[2] = foldl;
clo41991[3] = a3284533066;
clo41991[4] = fun;
void* f3294233067 = encode_clo(clo41991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3294233067;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33212 = encode_clo(alloc_clo(lam33212_fptr, 0));

void* lam33214_fptr() // lam33214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33215 = arg_buffer[1];
//reading env and args
void* a3284433064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33215))[6];
//not do dummy comment
void* lst = (decode_clo(env33215))[5];
//not do dummy comment
void* fun = (decode_clo(env33215))[4];
//not do dummy comment
void* acc = (decode_clo(env33215))[3];
//not do dummy comment
void* foldl = (decode_clo(env33215))[2];
//not do dummy comment
void* kont32941 = (decode_clo(env33215))[1];

//creating new closure instance
void** clo41993 = alloc_clo(lam33212_fptr, 5);

//setting env list
clo41993[1] = kont32941;
clo41993[2] = foldl;
clo41993[3] = fun;
clo41993[4] = lst;
clo41993[5] = cdr;
void* f3294333065 = encode_clo(clo41993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3294333065;
arg_buffer[3] = a3284433064;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33214 = encode_clo(alloc_clo(lam33214_fptr, 0));

void* lam33216_fptr() // lam33216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33217 = arg_buffer[1];
//reading env and args
void* a3284333062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33217))[7];
//not do dummy comment
void* lst = (decode_clo(env33217))[6];
//not do dummy comment
void* fun = (decode_clo(env33217))[5];
//not do dummy comment
void* acc = (decode_clo(env33217))[4];
//not do dummy comment
void* car = (decode_clo(env33217))[3];
//not do dummy comment
void* foldl = (decode_clo(env33217))[2];
//not do dummy comment
void* kont32941 = (decode_clo(env33217))[1];

//if-clause
bool if_guard41994 = is_true(a3284333062);
if(if_guard41994)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32941);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32941))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo41996 = alloc_clo(lam33214_fptr, 6);

//setting env list
clo41996[1] = kont32941;
clo41996[2] = foldl;
clo41996[3] = acc;
clo41996[4] = fun;
clo41996[5] = lst;
clo41996[6] = cdr;
void* f3294433063 = encode_clo(clo41996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3294433063;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33216 = encode_clo(alloc_clo(lam33216_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33218 = arg_buffer[1];
//reading env and args
void* kont32941 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo41998 = alloc_clo(lam33216_fptr, 7);

//setting env list
clo41998[1] = kont32941;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo41998[2] = foldl;
clo41998[3] = car;
clo41998[4] = acc;
clo41998[5] = fun;
clo41998[6] = lst;
clo41998[7] = cdr;
void* f3294533061 = encode_clo(clo41998);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3294533061;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam33219_fptr() // lam33219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33220 = arg_buffer[1];
//reading env and args
void* a3285033076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3284833072 = (decode_clo(env33220))[3];
//not do dummy comment
void* kont32946 = (decode_clo(env33220))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33220))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont32946;
arg_buffer[3] = a3284833072;
arg_buffer[4] = a3285033076;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33219 = encode_clo(alloc_clo(lam33219_fptr, 0));

void* lam33221_fptr() // lam33221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33222 = arg_buffer[1];
//reading env and args
void* a3284933074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3284833072 = (decode_clo(env33222))[5];
//not do dummy comment
void* kont32946 = (decode_clo(env33222))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33222))[3];
//not do dummy comment
void* lst2 = (decode_clo(env33222))[2];
//not do dummy comment
void* cons = (decode_clo(env33222))[1];

//creating new closure instance
void** clo42000 = alloc_clo(lam33219_fptr, 3);

//setting env list
clo42000[1] = reverse_u45helper;
clo42000[2] = kont32946;
clo42000[3] = a3284833072;
void* f3294733075 = encode_clo(clo42000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3294733075;
arg_buffer[3] = a3284933074;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33221 = encode_clo(alloc_clo(lam33221_fptr, 0));

void* lam33223_fptr() // lam33223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33224 = arg_buffer[1];
//reading env and args
void* a3284833072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33224))[6];
//not do dummy comment
void* lst2 = (decode_clo(env33224))[5];
//not do dummy comment
void* car = (decode_clo(env33224))[4];
//not do dummy comment
void* cons = (decode_clo(env33224))[3];
//not do dummy comment
void* lst = (decode_clo(env33224))[2];
//not do dummy comment
void* kont32946 = (decode_clo(env33224))[1];

//creating new closure instance
void** clo42002 = alloc_clo(lam33221_fptr, 5);

//setting env list
clo42002[1] = cons;
clo42002[2] = lst2;
clo42002[3] = reverse_u45helper;
clo42002[4] = kont32946;
clo42002[5] = a3284833072;
void* f3294833073 = encode_clo(clo42002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3294833073;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33223 = encode_clo(alloc_clo(lam33223_fptr, 0));

void* lam33225_fptr() // lam33225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33226 = arg_buffer[1];
//reading env and args
void* a3284733070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33226))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33226))[6];
//not do dummy comment
void* lst2 = (decode_clo(env33226))[5];
//not do dummy comment
void* car = (decode_clo(env33226))[4];
//not do dummy comment
void* cons = (decode_clo(env33226))[3];
//not do dummy comment
void* lst = (decode_clo(env33226))[2];
//not do dummy comment
void* kont32946 = (decode_clo(env33226))[1];

//if-clause
bool if_guard42003 = is_true(a3284733070);
if(if_guard42003)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32946);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32946))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42005 = alloc_clo(lam33223_fptr, 6);

//setting env list
clo42005[1] = kont32946;
clo42005[2] = lst;
clo42005[3] = cons;
clo42005[4] = car;
clo42005[5] = lst2;
clo42005[6] = reverse_u45helper;
void* f3294933071 = encode_clo(clo42005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3294933071;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33225 = encode_clo(alloc_clo(lam33225_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33227 = arg_buffer[1];
//reading env and args
void* kont32946 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42007 = alloc_clo(lam33225_fptr, 7);

//setting env list
clo42007[1] = kont32946;
clo42007[2] = lst;
clo42007[3] = cons;
clo42007[4] = car;
clo42007[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo42007[6] = reverse_u45helper;
clo42007[7] = cdr;
void* f3295033069 = encode_clo(clo42007);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3295033069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam33228_fptr() // lam33228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33229 = arg_buffer[1];
//reading env and args
void* a3285133078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33229))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env33229))[2];
//not do dummy comment
void* kont32951 = (decode_clo(env33229))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont32951;
arg_buffer[3] = lst;
arg_buffer[4] = a3285133078;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33228 = encode_clo(alloc_clo(lam33228_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33230 = arg_buffer[1];
//reading env and args
void* kont32951 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42009 = alloc_clo(lam33228_fptr, 3);

//setting env list
clo42009[1] = kont32951;
clo42009[2] = reverse_u45helper;
clo42009[3] = lst;
void* f3295233077 = encode_clo(clo42009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3295233077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam33231_fptr() // lam33231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33232 = arg_buffer[1];
//reading env and args
void* x3285433083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32953 = (decode_clo(env33232))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32953);
arg_buffer[2] = x3285433083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32953))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33231 = encode_clo(alloc_clo(lam33231_fptr, 0));

void* lam33233_fptr() // lam33233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33234 = arg_buffer[1];
//reading env and args
void* a3285933092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3285733088 = (decode_clo(env33234))[4];
//not do dummy comment
void* kont32953 = (decode_clo(env33234))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33234))[2];
//not do dummy comment
void* a3285533085 = (decode_clo(env33234))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont32953;
arg_buffer[3] = a3285533085;
arg_buffer[4] = a3285733088;
arg_buffer[5] = a3285933092;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33233 = encode_clo(alloc_clo(lam33233_fptr, 0));

void* lam33235_fptr() // lam33235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33236 = arg_buffer[1];
//reading env and args
void* a3285833090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3285733088 = (decode_clo(env33236))[6];
//not do dummy comment
void* kont32953 = (decode_clo(env33236))[5];
//not do dummy comment
void* cons = (decode_clo(env33236))[4];
//not do dummy comment
void* a3285533085 = (decode_clo(env33236))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33236))[2];
//not do dummy comment
void* lst2 = (decode_clo(env33236))[1];

//creating new closure instance
void** clo42011 = alloc_clo(lam33233_fptr, 4);

//setting env list
clo42011[1] = a3285533085;
clo42011[2] = take_u45helper;
clo42011[3] = kont32953;
clo42011[4] = a3285733088;
void* f3295533091 = encode_clo(clo42011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3295533091;
arg_buffer[3] = a3285833090;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33235 = encode_clo(alloc_clo(lam33235_fptr, 0));

void* lam33237_fptr() // lam33237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33238 = arg_buffer[1];
//reading env and args
void* a3285733088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33238))[7];
//not do dummy comment
void* kont32953 = (decode_clo(env33238))[6];
//not do dummy comment
void* car = (decode_clo(env33238))[5];
//not do dummy comment
void* cons = (decode_clo(env33238))[4];
//not do dummy comment
void* a3285533085 = (decode_clo(env33238))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33238))[2];
//not do dummy comment
void* lst2 = (decode_clo(env33238))[1];

//creating new closure instance
void** clo42013 = alloc_clo(lam33235_fptr, 6);

//setting env list
clo42013[1] = lst2;
clo42013[2] = take_u45helper;
clo42013[3] = a3285533085;
clo42013[4] = cons;
clo42013[5] = kont32953;
clo42013[6] = a3285733088;
void* f3295633089 = encode_clo(clo42013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3295633089;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33237 = encode_clo(alloc_clo(lam33237_fptr, 0));

void* lam33240_fptr() // lam33240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33241 = arg_buffer[1];
//reading env and args
void* a3285533085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33241))[8];
//not do dummy comment
void* kont32953 = (decode_clo(env33241))[7];
//not do dummy comment
void* cons = (decode_clo(env33241))[6];
//not do dummy comment
void* _u45 = (decode_clo(env33241))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env33241))[4];
//not do dummy comment
void* lst2 = (decode_clo(env33241))[3];
//not do dummy comment
void* n = (decode_clo(env33241))[2];
//not do dummy comment
void* car = (decode_clo(env33241))[1];
mpz_t* mpzvar42014 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42014, "1", 10);
void* a3285633086 = encode_mpz(mpzvar42014);

//creating new closure instance
void** clo42016 = alloc_clo(lam33237_fptr, 7);

//setting env list
clo42016[1] = lst2;
clo42016[2] = take_u45helper;
clo42016[3] = a3285533085;
clo42016[4] = cons;
clo42016[5] = car;
clo42016[6] = kont32953;
clo42016[7] = lst;
void* f3295733087 = encode_clo(clo42016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3295733087;
arg_buffer[3] = n;
arg_buffer[4] = a3285633086;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33240 = encode_clo(alloc_clo(lam33240_fptr, 0));

void* lam33242_fptr() // lam33242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33243 = arg_buffer[1];
//reading env and args
void* a3285333081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33243))[10];
//not do dummy comment
void* lst = (decode_clo(env33243))[9];
//not do dummy comment
void* reverse = (decode_clo(env33243))[8];
//not do dummy comment
void* kont32953 = (decode_clo(env33243))[7];
//not do dummy comment
void* cons = (decode_clo(env33243))[6];
//not do dummy comment
void* _u45 = (decode_clo(env33243))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env33243))[4];
//not do dummy comment
void* lst2 = (decode_clo(env33243))[3];
//not do dummy comment
void* n = (decode_clo(env33243))[2];
//not do dummy comment
void* car = (decode_clo(env33243))[1];

//if-clause
bool if_guard42017 = is_true(a3285333081);
if(if_guard42017)
{

//creating new closure instance
void** clo42019 = alloc_clo(lam33231_fptr, 1);

//setting env list
clo42019[1] = kont32953;
void* f3295433082 = encode_clo(clo42019);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3295433082;
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
void** clo42021 = alloc_clo(lam33240_fptr, 8);

//setting env list
clo42021[1] = car;
clo42021[2] = n;
clo42021[3] = lst2;
clo42021[4] = take_u45helper;
clo42021[5] = _u45;
clo42021[6] = cons;
clo42021[7] = kont32953;
clo42021[8] = lst;
void* f3295833084 = encode_clo(clo42021);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3295833084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33242 = encode_clo(alloc_clo(lam33242_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33245 = arg_buffer[1];
//reading env and args
void* kont32953 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar42022 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42022, "0", 10);
void* a3285233079 = encode_mpz(mpzvar42022);

//creating new closure instance
void** clo42024 = alloc_clo(lam33242_fptr, 10);

//setting env list
clo42024[1] = car;
clo42024[2] = n;
clo42024[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo42024[4] = take_u45helper;
clo42024[5] = _u45;
clo42024[6] = cons;
clo42024[7] = kont32953;
clo42024[8] = reverse;
clo42024[9] = lst;
clo42024[10] = cdr;
void* f3295933080 = encode_clo(clo42024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3295933080;
arg_buffer[3] = n;
arg_buffer[4] = a3285233079;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam33246_fptr() // lam33246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33247 = arg_buffer[1];
//reading env and args
void* a3286033094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32960 = (decode_clo(env33247))[4];
//not do dummy comment
void* lst = (decode_clo(env33247))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env33247))[2];
//not do dummy comment
void* n = (decode_clo(env33247))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont32960;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3286033094;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33246 = encode_clo(alloc_clo(lam33246_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33248 = arg_buffer[1];
//reading env and args
void* kont32960 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42026 = alloc_clo(lam33246_fptr, 4);

//setting env list
clo42026[1] = n;
clo42026[2] = take_u45helper;
clo42026[3] = lst;
clo42026[4] = kont32960;
void* f3296133093 = encode_clo(clo42026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3296133093;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam33250_fptr() // lam33250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33251 = arg_buffer[1];
//reading env and args
void* a3286533102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32962 = (decode_clo(env33251))[3];
//not do dummy comment
void* _u43 = (decode_clo(env33251))[2];
//not do dummy comment
void* a3286333098 = (decode_clo(env33251))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont32962;
arg_buffer[3] = a3286333098;
arg_buffer[4] = a3286533102;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33250 = encode_clo(alloc_clo(lam33250_fptr, 0));

void* lam33252_fptr() // lam33252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33253 = arg_buffer[1];
//reading env and args
void* a3286433100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32962 = (decode_clo(env33253))[4];
//not do dummy comment
void* length = (decode_clo(env33253))[3];
//not do dummy comment
void* _u43 = (decode_clo(env33253))[2];
//not do dummy comment
void* a3286333098 = (decode_clo(env33253))[1];

//creating new closure instance
void** clo42028 = alloc_clo(lam33250_fptr, 3);

//setting env list
clo42028[1] = a3286333098;
clo42028[2] = _u43;
clo42028[3] = kont32962;
void* f3296333101 = encode_clo(clo42028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3296333101;
arg_buffer[3] = a3286433100;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33252 = encode_clo(alloc_clo(lam33252_fptr, 0));

void* lam33255_fptr() // lam33255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33256 = arg_buffer[1];
//reading env and args
void* a3286133096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33256))[5];
//not do dummy comment
void* length = (decode_clo(env33256))[4];
//not do dummy comment
void* _u43 = (decode_clo(env33256))[3];
//not do dummy comment
void* lst = (decode_clo(env33256))[2];
//not do dummy comment
void* kont32962 = (decode_clo(env33256))[1];

//if-clause
bool if_guard42029 = is_true(a3286133096);
if(if_guard42029)
{
mpz_t* mpzvar42030 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42030, "0", 10);
void* x3286233097 = encode_mpz(mpzvar42030);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32962);
arg_buffer[2] = x3286233097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32962))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar42031 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42031, "1", 10);
void* a3286333098 = encode_mpz(mpzvar42031);

//creating new closure instance
void** clo42033 = alloc_clo(lam33252_fptr, 4);

//setting env list
clo42033[1] = a3286333098;
clo42033[2] = _u43;
clo42033[3] = length;
clo42033[4] = kont32962;
void* f3296433099 = encode_clo(clo42033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3296433099;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33255 = encode_clo(alloc_clo(lam33255_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33257 = arg_buffer[1];
//reading env and args
void* kont32962 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo42035 = alloc_clo(lam33255_fptr, 5);

//setting env list
clo42035[1] = kont32962;
clo42035[2] = lst;
clo42035[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo42035[4] = length;
clo42035[5] = cdr;
void* f3296533095 = encode_clo(clo42035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3296533095;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam33258_fptr() // lam33258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33259 = arg_buffer[1];
//reading env and args
void* x3286733106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32966 = (decode_clo(env33259))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32966);
arg_buffer[2] = x3286733106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32966))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33258 = encode_clo(alloc_clo(lam33258_fptr, 0));

void* lam33260_fptr() // lam33260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33261 = arg_buffer[1];
//reading env and args
void* a3287133114 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env33261))[3];
//not do dummy comment
void* a3286933110 = (decode_clo(env33261))[2];
//not do dummy comment
void* kont32966 = (decode_clo(env33261))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont32966;
arg_buffer[3] = a3286933110;
arg_buffer[4] = a3287133114;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33260 = encode_clo(alloc_clo(lam33260_fptr, 0));

void* lam33262_fptr() // lam33262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33263 = arg_buffer[1];
//reading env and args
void* a3287033112 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env33263))[5];
//not do dummy comment
void* proc = (decode_clo(env33263))[4];
//not do dummy comment
void* cons = (decode_clo(env33263))[3];
//not do dummy comment
void* a3286933110 = (decode_clo(env33263))[2];
//not do dummy comment
void* kont32966 = (decode_clo(env33263))[1];

//creating new closure instance
void** clo42037 = alloc_clo(lam33260_fptr, 3);

//setting env list
clo42037[1] = kont32966;
clo42037[2] = a3286933110;
clo42037[3] = cons;
void* f3296833113 = encode_clo(clo42037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3296833113;
arg_buffer[3] = proc;
arg_buffer[4] = a3287033112;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33262 = encode_clo(alloc_clo(lam33262_fptr, 0));

void* lam33264_fptr() // lam33264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33265 = arg_buffer[1];
//reading env and args
void* a3286933110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33265))[6];
//not do dummy comment
void* lst = (decode_clo(env33265))[5];
//not do dummy comment
void* map = (decode_clo(env33265))[4];
//not do dummy comment
void* kont32966 = (decode_clo(env33265))[3];
//not do dummy comment
void* proc = (decode_clo(env33265))[2];
//not do dummy comment
void* cons = (decode_clo(env33265))[1];

//creating new closure instance
void** clo42039 = alloc_clo(lam33262_fptr, 5);

//setting env list
clo42039[1] = kont32966;
clo42039[2] = a3286933110;
clo42039[3] = cons;
clo42039[4] = proc;
clo42039[5] = map;
void* f3296933111 = encode_clo(clo42039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3296933111;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33264 = encode_clo(alloc_clo(lam33264_fptr, 0));

void* lam33266_fptr() // lam33266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33267 = arg_buffer[1];
//reading env and args
void* a3286833108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33267))[6];
//not do dummy comment
void* lst = (decode_clo(env33267))[5];
//not do dummy comment
void* map = (decode_clo(env33267))[4];
//not do dummy comment
void* kont32966 = (decode_clo(env33267))[3];
//not do dummy comment
void* proc = (decode_clo(env33267))[2];
//not do dummy comment
void* cons = (decode_clo(env33267))[1];

//creating new closure instance
void** clo42041 = alloc_clo(lam33264_fptr, 6);

//setting env list
clo42041[1] = cons;
clo42041[2] = proc;
clo42041[3] = kont32966;
clo42041[4] = map;
clo42041[5] = lst;
clo42041[6] = cdr;
void* f3297033109 = encode_clo(clo42041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3297033109;
arg_buffer[3] = a3286833108;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33266 = encode_clo(alloc_clo(lam33266_fptr, 0));

void* lam33268_fptr() // lam33268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33269 = arg_buffer[1];
//reading env and args
void* a3286633104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33269))[8];
//not do dummy comment
void* map = (decode_clo(env33269))[7];
//not do dummy comment
void* kont32966 = (decode_clo(env33269))[6];
//not do dummy comment
void* proc = (decode_clo(env33269))[5];
//not do dummy comment
void* car = (decode_clo(env33269))[4];
//not do dummy comment
void* cons = (decode_clo(env33269))[3];
//not do dummy comment
void* list = (decode_clo(env33269))[2];
//not do dummy comment
void* cdr = (decode_clo(env33269))[1];

//if-clause
bool if_guard42042 = is_true(a3286633104);
if(if_guard42042)
{

//creating new closure instance
void** clo42044 = alloc_clo(lam33258_fptr, 1);

//setting env list
clo42044[1] = kont32966;
void* f3296733105 = encode_clo(clo42044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3296733105;
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
void** clo42046 = alloc_clo(lam33266_fptr, 6);

//setting env list
clo42046[1] = cons;
clo42046[2] = proc;
clo42046[3] = kont32966;
clo42046[4] = map;
clo42046[5] = lst;
clo42046[6] = cdr;
void* f3297133107 = encode_clo(clo42046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3297133107;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33268 = encode_clo(alloc_clo(lam33268_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33270 = arg_buffer[1];
//reading env and args
void* kont32966 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42048 = alloc_clo(lam33268_fptr, 8);

//setting env list
clo42048[1] = cdr;
clo42048[2] = list;
clo42048[3] = cons;
clo42048[4] = car;
clo42048[5] = proc;
clo42048[6] = kont32966;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo42048[7] = map;
clo42048[8] = lst;
void* f3297233103 = encode_clo(clo42048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3297233103;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam33271_fptr() // lam33271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33272 = arg_buffer[1];
//reading env and args
void* x3287333118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont32973 = (decode_clo(env33272))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32973);
arg_buffer[2] = x3287333118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32973))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33271 = encode_clo(alloc_clo(lam33271_fptr, 0));

void* lam33273_fptr() // lam33273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33274 = arg_buffer[1];
//reading env and args
void* a3287833128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3287633124 = (decode_clo(env33274))[3];
//not do dummy comment
void* cons = (decode_clo(env33274))[2];
//not do dummy comment
void* kont32973 = (decode_clo(env33274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont32973;
arg_buffer[3] = a3287633124;
arg_buffer[4] = a3287833128;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33273 = encode_clo(alloc_clo(lam33273_fptr, 0));

void* lam33275_fptr() // lam33275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33276 = arg_buffer[1];
//reading env and args
void* a3287733126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3287633124 = (decode_clo(env33276))[5];
//not do dummy comment
void* op = (decode_clo(env33276))[4];
//not do dummy comment
void* filter = (decode_clo(env33276))[3];
//not do dummy comment
void* cons = (decode_clo(env33276))[2];
//not do dummy comment
void* kont32973 = (decode_clo(env33276))[1];

//creating new closure instance
void** clo42050 = alloc_clo(lam33273_fptr, 3);

//setting env list
clo42050[1] = kont32973;
clo42050[2] = cons;
clo42050[3] = a3287633124;
void* f3297533127 = encode_clo(clo42050);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3297533127;
arg_buffer[3] = op;
arg_buffer[4] = a3287733126;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33275 = encode_clo(alloc_clo(lam33275_fptr, 0));

void* lam33277_fptr() // lam33277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33278 = arg_buffer[1];
//reading env and args
void* a3287633124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33278))[6];
//not do dummy comment
void* lst = (decode_clo(env33278))[5];
//not do dummy comment
void* op = (decode_clo(env33278))[4];
//not do dummy comment
void* filter = (decode_clo(env33278))[3];
//not do dummy comment
void* cons = (decode_clo(env33278))[2];
//not do dummy comment
void* kont32973 = (decode_clo(env33278))[1];

//creating new closure instance
void** clo42052 = alloc_clo(lam33275_fptr, 5);

//setting env list
clo42052[1] = kont32973;
clo42052[2] = cons;
clo42052[3] = filter;
clo42052[4] = op;
clo42052[5] = a3287633124;
void* f3297633125 = encode_clo(clo42052);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3297633125;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33277 = encode_clo(alloc_clo(lam33277_fptr, 0));

void* lam33279_fptr() // lam33279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33280 = arg_buffer[1];
//reading env and args
void* a3287933130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env33280))[3];
//not do dummy comment
void* filter = (decode_clo(env33280))[2];
//not do dummy comment
void* kont32973 = (decode_clo(env33280))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont32973;
arg_buffer[3] = op;
arg_buffer[4] = a3287933130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33279 = encode_clo(alloc_clo(lam33279_fptr, 0));

void* lam33281_fptr() // lam33281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33282 = arg_buffer[1];
//reading env and args
void* a3287533122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33282))[7];
//not do dummy comment
void* lst = (decode_clo(env33282))[6];
//not do dummy comment
void* op = (decode_clo(env33282))[5];
//not do dummy comment
void* cons = (decode_clo(env33282))[4];
//not do dummy comment
void* kont32973 = (decode_clo(env33282))[3];
//not do dummy comment
void* filter = (decode_clo(env33282))[2];
//not do dummy comment
void* car = (decode_clo(env33282))[1];

//if-clause
bool if_guard42053 = is_true(a3287533122);
if(if_guard42053)
{

//creating new closure instance
void** clo42055 = alloc_clo(lam33277_fptr, 6);

//setting env list
clo42055[1] = kont32973;
clo42055[2] = cons;
clo42055[3] = filter;
clo42055[4] = op;
clo42055[5] = lst;
clo42055[6] = cdr;
void* f3297733123 = encode_clo(clo42055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3297733123;
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
void** clo42057 = alloc_clo(lam33279_fptr, 3);

//setting env list
clo42057[1] = kont32973;
clo42057[2] = filter;
clo42057[3] = op;
void* f3297833129 = encode_clo(clo42057);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3297833129;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33281 = encode_clo(alloc_clo(lam33281_fptr, 0));

void* lam33283_fptr() // lam33283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33284 = arg_buffer[1];
//reading env and args
void* a3287433120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33284))[7];
//not do dummy comment
void* lst = (decode_clo(env33284))[6];
//not do dummy comment
void* op = (decode_clo(env33284))[5];
//not do dummy comment
void* cons = (decode_clo(env33284))[4];
//not do dummy comment
void* kont32973 = (decode_clo(env33284))[3];
//not do dummy comment
void* filter = (decode_clo(env33284))[2];
//not do dummy comment
void* car = (decode_clo(env33284))[1];

//creating new closure instance
void** clo42059 = alloc_clo(lam33281_fptr, 7);

//setting env list
clo42059[1] = car;
clo42059[2] = filter;
clo42059[3] = kont32973;
clo42059[4] = cons;
clo42059[5] = op;
clo42059[6] = lst;
clo42059[7] = cdr;
void* f3297933121 = encode_clo(clo42059);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3297933121;
arg_buffer[3] = a3287433120;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33283 = encode_clo(alloc_clo(lam33283_fptr, 0));

void* lam33285_fptr() // lam33285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33286 = arg_buffer[1];
//reading env and args
void* a3287233116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env33286))[8];
//not do dummy comment
void* op = (decode_clo(env33286))[7];
//not do dummy comment
void* cons = (decode_clo(env33286))[6];
//not do dummy comment
void* kont32973 = (decode_clo(env33286))[5];
//not do dummy comment
void* list = (decode_clo(env33286))[4];
//not do dummy comment
void* cdr = (decode_clo(env33286))[3];
//not do dummy comment
void* filter = (decode_clo(env33286))[2];
//not do dummy comment
void* car = (decode_clo(env33286))[1];

//if-clause
bool if_guard42060 = is_true(a3287233116);
if(if_guard42060)
{

//creating new closure instance
void** clo42062 = alloc_clo(lam33271_fptr, 1);

//setting env list
clo42062[1] = kont32973;
void* f3297433117 = encode_clo(clo42062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3297433117;
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
void** clo42064 = alloc_clo(lam33283_fptr, 7);

//setting env list
clo42064[1] = car;
clo42064[2] = filter;
clo42064[3] = kont32973;
clo42064[4] = cons;
clo42064[5] = op;
clo42064[6] = lst;
clo42064[7] = cdr;
void* f3298033119 = encode_clo(clo42064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3298033119;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33285 = encode_clo(alloc_clo(lam33285_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33287 = arg_buffer[1];
//reading env and args
void* kont32973 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42066 = alloc_clo(lam33285_fptr, 8);

//setting env list
clo42066[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo42066[2] = filter;
clo42066[3] = cdr;
clo42066[4] = list;
clo42066[5] = kont32973;
clo42066[6] = cons;
clo42066[7] = op;
clo42066[8] = lst;
void* f3298133115 = encode_clo(clo42066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3298133115;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam33288_fptr() // lam33288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33289 = arg_buffer[1];
//reading env and args
void* a3288433138 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3288233135 = (decode_clo(env33289))[3];
//not do dummy comment
void* drop = (decode_clo(env33289))[2];
//not do dummy comment
void* kont32982 = (decode_clo(env33289))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont32982;
arg_buffer[3] = a3288233135;
arg_buffer[4] = a3288433138;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33288 = encode_clo(alloc_clo(lam33288_fptr, 0));

void* lam33291_fptr() // lam33291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33292 = arg_buffer[1];
//reading env and args
void* a3288233135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env33292))[4];
//not do dummy comment
void* kont32982 = (decode_clo(env33292))[3];
//not do dummy comment
void* n = (decode_clo(env33292))[2];
//not do dummy comment
void* _u45 = (decode_clo(env33292))[1];
mpz_t* mpzvar42067 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42067, "1", 10);
void* a3288333136 = encode_mpz(mpzvar42067);

//creating new closure instance
void** clo42069 = alloc_clo(lam33288_fptr, 3);

//setting env list
clo42069[1] = kont32982;
clo42069[2] = drop;
clo42069[3] = a3288233135;
void* f3298333137 = encode_clo(clo42069);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3298333137;
arg_buffer[3] = n;
arg_buffer[4] = a3288333136;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33291 = encode_clo(alloc_clo(lam33291_fptr, 0));

void* lam33293_fptr() // lam33293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33294 = arg_buffer[1];
//reading env and args
void* a3288133133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33294))[6];
//not do dummy comment
void* kont32982 = (decode_clo(env33294))[5];
//not do dummy comment
void* n = (decode_clo(env33294))[4];
//not do dummy comment
void* _u45 = (decode_clo(env33294))[3];
//not do dummy comment
void* lst = (decode_clo(env33294))[2];
//not do dummy comment
void* drop = (decode_clo(env33294))[1];

//if-clause
bool if_guard42070 = is_true(a3288133133);
if(if_guard42070)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32982);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32982))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42072 = alloc_clo(lam33291_fptr, 4);

//setting env list
clo42072[1] = _u45;
clo42072[2] = n;
clo42072[3] = kont32982;
clo42072[4] = drop;
void* f3298433134 = encode_clo(clo42072);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3298433134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33293 = encode_clo(alloc_clo(lam33293_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33296 = arg_buffer[1];
//reading env and args
void* kont32982 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar42073 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42073, "0", 10);
void* a3288033131 = encode_mpz(mpzvar42073);

//creating new closure instance
void** clo42075 = alloc_clo(lam33293_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo42075[1] = drop;
clo42075[2] = lst;
clo42075[3] = _u45;
clo42075[4] = n;
clo42075[5] = kont32982;
clo42075[6] = cdr;
void* f3298533132 = encode_clo(clo42075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3298533132;
arg_buffer[3] = n;
arg_buffer[4] = a3288033131;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam33297_fptr() // lam33297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33298 = arg_buffer[1];
//reading env and args
void* a3288833146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3288633142 = (decode_clo(env33298))[3];
//not do dummy comment
void* proc = (decode_clo(env33298))[2];
//not do dummy comment
void* kont32986 = (decode_clo(env33298))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont32986;
arg_buffer[3] = a3288633142;
arg_buffer[4] = a3288833146;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33297 = encode_clo(alloc_clo(lam33297_fptr, 0));

void* lam33299_fptr() // lam33299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33300 = arg_buffer[1];
//reading env and args
void* a3288733144 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env33300))[5];
//not do dummy comment
void* a3288633142 = (decode_clo(env33300))[4];
//not do dummy comment
void* kont32986 = (decode_clo(env33300))[3];
//not do dummy comment
void* proc = (decode_clo(env33300))[2];
//not do dummy comment
void* acc = (decode_clo(env33300))[1];

//creating new closure instance
void** clo42077 = alloc_clo(lam33297_fptr, 3);

//setting env list
clo42077[1] = kont32986;
clo42077[2] = proc;
clo42077[3] = a3288633142;
void* f3298733145 = encode_clo(clo42077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3298733145;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3288733144;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33299 = encode_clo(alloc_clo(lam33299_fptr, 0));

void* lam33301_fptr() // lam33301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33302 = arg_buffer[1];
//reading env and args
void* a3288633142 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33302))[6];
//not do dummy comment
void* kont32986 = (decode_clo(env33302))[5];
//not do dummy comment
void* foldr = (decode_clo(env33302))[4];
//not do dummy comment
void* lst = (decode_clo(env33302))[3];
//not do dummy comment
void* proc = (decode_clo(env33302))[2];
//not do dummy comment
void* acc = (decode_clo(env33302))[1];

//creating new closure instance
void** clo42079 = alloc_clo(lam33299_fptr, 5);

//setting env list
clo42079[1] = acc;
clo42079[2] = proc;
clo42079[3] = kont32986;
clo42079[4] = a3288633142;
clo42079[5] = foldr;
void* f3298833143 = encode_clo(clo42079);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3298833143;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33301 = encode_clo(alloc_clo(lam33301_fptr, 0));

void* lam33303_fptr() // lam33303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33304 = arg_buffer[1];
//reading env and args
void* a3288533140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33304))[7];
//not do dummy comment
void* kont32986 = (decode_clo(env33304))[6];
//not do dummy comment
void* car = (decode_clo(env33304))[5];
//not do dummy comment
void* foldr = (decode_clo(env33304))[4];
//not do dummy comment
void* lst = (decode_clo(env33304))[3];
//not do dummy comment
void* proc = (decode_clo(env33304))[2];
//not do dummy comment
void* acc = (decode_clo(env33304))[1];

//if-clause
bool if_guard42080 = is_true(a3288533140);
if(if_guard42080)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32986);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32986))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42082 = alloc_clo(lam33301_fptr, 6);

//setting env list
clo42082[1] = acc;
clo42082[2] = proc;
clo42082[3] = lst;
clo42082[4] = foldr;
clo42082[5] = kont32986;
clo42082[6] = cdr;
void* f3298933141 = encode_clo(clo42082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3298933141;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33303 = encode_clo(alloc_clo(lam33303_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33305 = arg_buffer[1];
//reading env and args
void* kont32986 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo42084 = alloc_clo(lam33303_fptr, 7);

//setting env list
clo42084[1] = acc;
clo42084[2] = proc;
clo42084[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo42084[4] = foldr;
clo42084[5] = car;
clo42084[6] = kont32986;
clo42084[7] = cdr;
void* f3299033139 = encode_clo(clo42084);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3299033139;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam33306_fptr() // lam33306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33307 = arg_buffer[1];
//reading env and args
void* a3289233154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3289033150 = (decode_clo(env33307))[3];
//not do dummy comment
void* kont32991 = (decode_clo(env33307))[2];
//not do dummy comment
void* cons = (decode_clo(env33307))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont32991;
arg_buffer[3] = a3289033150;
arg_buffer[4] = a3289233154;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33306 = encode_clo(alloc_clo(lam33306_fptr, 0));

void* lam33308_fptr() // lam33308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33309 = arg_buffer[1];
//reading env and args
void* a3289133152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3289033150 = (decode_clo(env33309))[5];
//not do dummy comment
void* kont32991 = (decode_clo(env33309))[4];
//not do dummy comment
void* append = (decode_clo(env33309))[3];
//not do dummy comment
void* lst2 = (decode_clo(env33309))[2];
//not do dummy comment
void* cons = (decode_clo(env33309))[1];

//creating new closure instance
void** clo42086 = alloc_clo(lam33306_fptr, 3);

//setting env list
clo42086[1] = cons;
clo42086[2] = kont32991;
clo42086[3] = a3289033150;
void* f3299233153 = encode_clo(clo42086);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3299233153;
arg_buffer[3] = a3289133152;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33308 = encode_clo(alloc_clo(lam33308_fptr, 0));

void* lam33310_fptr() // lam33310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33311 = arg_buffer[1];
//reading env and args
void* a3289033150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33311))[6];
//not do dummy comment
void* kont32991 = (decode_clo(env33311))[5];
//not do dummy comment
void* append = (decode_clo(env33311))[4];
//not do dummy comment
void* lst2 = (decode_clo(env33311))[3];
//not do dummy comment
void* lst1 = (decode_clo(env33311))[2];
//not do dummy comment
void* cons = (decode_clo(env33311))[1];

//creating new closure instance
void** clo42088 = alloc_clo(lam33308_fptr, 5);

//setting env list
clo42088[1] = cons;
clo42088[2] = lst2;
clo42088[3] = append;
clo42088[4] = kont32991;
clo42088[5] = a3289033150;
void* f3299333151 = encode_clo(clo42088);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3299333151;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33310 = encode_clo(alloc_clo(lam33310_fptr, 0));

void* lam33312_fptr() // lam33312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33313 = arg_buffer[1];
//reading env and args
void* a3288933148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env33313))[7];
//not do dummy comment
void* kont32991 = (decode_clo(env33313))[6];
//not do dummy comment
void* append = (decode_clo(env33313))[5];
//not do dummy comment
void* lst2 = (decode_clo(env33313))[4];
//not do dummy comment
void* cons = (decode_clo(env33313))[3];
//not do dummy comment
void* lst1 = (decode_clo(env33313))[2];
//not do dummy comment
void* car = (decode_clo(env33313))[1];

//if-clause
bool if_guard42089 = is_true(a3288933148);
if(if_guard42089)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32991);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32991))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo42091 = alloc_clo(lam33310_fptr, 6);

//setting env list
clo42091[1] = cons;
clo42091[2] = lst1;
clo42091[3] = lst2;
clo42091[4] = append;
clo42091[5] = kont32991;
clo42091[6] = cdr;
void* f3299433149 = encode_clo(clo42091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3299433149;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33312 = encode_clo(alloc_clo(lam33312_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33314 = arg_buffer[1];
//reading env and args
void* kont32991 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo42093 = alloc_clo(lam33312_fptr, 7);

//setting env list
clo42093[1] = car;
clo42093[2] = lst1;
clo42093[3] = cons;
clo42093[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo42093[5] = append;
clo42093[6] = kont32991;
clo42093[7] = cdr;
void* f3299533147 = encode_clo(clo42093);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3299533147;
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
void* _33315 = arg_buffer[1];
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

void* kont3299633155 = prim_car(lst);
void* lst33156 = prim_cdr(lst);
void* x3289333157 = apply_prim_hash(lst33156);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3299633155);
arg_buffer[2] = x3289333157;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3299633155))[0]);
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
void* _33316 = arg_buffer[1];
//reading env and args
void* kont32998 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3289433158 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32998);
arg_buffer[2] = x3289433158;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32998))[0]);
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
void* _33317 = arg_buffer[1];
//reading env and args
void* kont32999 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3289533159 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont32999);
arg_buffer[2] = x3289533159;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont32999))[0]);
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
void* _33318 = arg_buffer[1];
//reading env and args
void* kont33000 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3289633160 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33000);
arg_buffer[2] = x3289633160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33000))[0]);
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
void* _33319 = arg_buffer[1];
//reading env and args
void* kont33001 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3289733161 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33001);
arg_buffer[2] = x3289733161;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33001))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam33321_fptr() // lam33321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33322 = arg_buffer[1];
//reading env and args
void* a3290333170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env33322))[3];
//not do dummy comment
void* kont33002 = (decode_clo(env33322))[2];
//not do dummy comment
void* n = (decode_clo(env33322))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont33002;
arg_buffer[3] = n;
arg_buffer[4] = a3290333170;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33321 = encode_clo(alloc_clo(lam33321_fptr, 0));

void* lam33323_fptr() // lam33323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33324 = arg_buffer[1];
//reading env and args
void* a3290233168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env33324))[4];
//not do dummy comment
void* fact = (decode_clo(env33324))[3];
//not do dummy comment
void* kont33002 = (decode_clo(env33324))[2];
//not do dummy comment
void* n = (decode_clo(env33324))[1];

//creating new closure instance
void** clo42095 = alloc_clo(lam33321_fptr, 3);

//setting env list
clo42095[1] = n;
clo42095[2] = kont33002;
clo42095[3] = _u42;
void* f3300333169 = encode_clo(clo42095);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = f3300333169;
arg_buffer[3] = a3290233168;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam33323 = encode_clo(alloc_clo(lam33323_fptr, 0));

void* lam33326_fptr() // lam33326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env33327 = arg_buffer[1];
//reading env and args
void* a3289933164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u42 = (decode_clo(env33327))[5];
//not do dummy comment
void* fact = (decode_clo(env33327))[4];
//not do dummy comment
void* kont33002 = (decode_clo(env33327))[3];
//not do dummy comment
void* n = (decode_clo(env33327))[2];
//not do dummy comment
void* _u45 = (decode_clo(env33327))[1];

//if-clause
bool if_guard42096 = is_true(a3289933164);
if(if_guard42096)
{
mpz_t* mpzvar42097 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42097, "1", 10);
void* x3290033165 = encode_mpz(mpzvar42097);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont33002);
arg_buffer[2] = x3290033165;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont33002))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar42098 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42098, "1", 10);
void* a3290133166 = encode_mpz(mpzvar42098);

//creating new closure instance
void** clo42100 = alloc_clo(lam33323_fptr, 4);

//setting env list
clo42100[1] = n;
clo42100[2] = kont33002;
clo42100[3] = fact;
clo42100[4] = _u42;
void* f3300433167 = encode_clo(clo42100);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3300433167;
arg_buffer[3] = n;
arg_buffer[4] = a3290133166;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam33326 = encode_clo(alloc_clo(lam33326_fptr, 0));

void* fact_fptr() // fact 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33329 = arg_buffer[1];
//reading env and args
void* kont33002 = arg_buffer[2];
void* n = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar42101 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42101, "0", 10);
void* a3289833162 = encode_mpz(mpzvar42101);

//creating new closure instance
void** clo42103 = alloc_clo(lam33326_fptr, 5);

//setting env list
clo42103[1] = _u45;
clo42103[2] = n;
clo42103[3] = kont33002;
void* fact = encode_clo(alloc_clo(fact_fptr, 0));

clo42103[4] = fact;
clo42103[5] = _u42;
void* f3300533163 = encode_clo(clo42103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3300533163;
arg_buffer[3] = a3289833162;
arg_buffer[4] = n;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* fact = encode_clo(alloc_clo(fact_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _33331 = arg_buffer[1];
//reading env and args
void* kont33006 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar42104 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar42104, "5", 10);
void* a3290433171 = encode_mpz(mpzvar42104);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fact);
arg_buffer[2] = kont33006;
arg_buffer[3] = a3290433171;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fact))[0]);
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

