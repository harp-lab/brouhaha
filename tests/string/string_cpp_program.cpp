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
void* _117156 = arg_buffer[1];
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

void* kont116898116998 = prim_car(lst);
void* lst116999 = prim_cdr(lst);
void* x116813117000 = apply_prim__u43(lst116999);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116898116998);
arg_buffer[2] = x116813117000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116898116998))[0]);
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
void* _117157 = arg_buffer[1];
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

void* kont116900117001 = prim_car(lst);
void* lst117002 = prim_cdr(lst);
void* x116814117003 = apply_prim__u45(lst117002);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116900117001);
arg_buffer[2] = x116814117003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116900117001))[0]);
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
void* _117158 = arg_buffer[1];
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

void* kont116902117004 = prim_car(lst);
void* lst117005 = prim_cdr(lst);
void* x116815117006 = apply_prim__u42(lst117005);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116902117004);
arg_buffer[2] = x116815117006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116902117004))[0]);
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
void* _117159 = arg_buffer[1];
//reading env and args
void* kont116904 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x116816117007 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116904);
arg_buffer[2] = x116816117007;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116904))[0]);
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
void* _117160 = arg_buffer[1];
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

void* kont116905117008 = prim_car(lst);
void* lst117009 = prim_cdr(lst);
void* x116817117010 = apply_prim__u47(lst117009);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116905117008);
arg_buffer[2] = x116817117010;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116905117008))[0]);
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
void* _117161 = arg_buffer[1];
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

void* kont116907117011 = prim_car(lst);
void* lst117012 = prim_cdr(lst);
void* x116818117013 = apply_prim__u61(lst117012);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116907117011);
arg_buffer[2] = x116818117013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116907117011))[0]);
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
void* _117162 = arg_buffer[1];
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

void* kont116909117014 = prim_car(lst);
void* lst117015 = prim_cdr(lst);
void* x116819117016 = apply_prim__u62(lst117015);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116909117014);
arg_buffer[2] = x116819117016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116909117014))[0]);
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
void* _117163 = arg_buffer[1];
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

void* kont116911117017 = prim_car(lst);
void* lst117018 = prim_cdr(lst);
void* x116820117019 = apply_prim__u60(lst117018);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116911117017);
arg_buffer[2] = x116820117019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116911117017))[0]);
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
void* _117164 = arg_buffer[1];
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

void* kont116913117020 = prim_car(lst);
void* lst117021 = prim_cdr(lst);
void* x116821117022 = apply_prim__u60_u61(lst117021);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116913117020);
arg_buffer[2] = x116821117022;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116913117020))[0]);
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
void* _117165 = arg_buffer[1];
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

void* kont116915117023 = prim_car(lst);
void* lst117024 = prim_cdr(lst);
void* x116822117025 = apply_prim__u62_u61(lst117024);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116915117023);
arg_buffer[2] = x116822117025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116915117023))[0]);
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
void* _117166 = arg_buffer[1];
//reading env and args
void* kont116917 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x116823117026 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116917);
arg_buffer[2] = x116823117026;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116917))[0]);
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
void* _117167 = arg_buffer[1];
//reading env and args
void* kont116918 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x116824117027 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116918);
arg_buffer[2] = x116824117027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116918))[0]);
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
void* _117168 = arg_buffer[1];
//reading env and args
void* kont116919 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x116825117028 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116919);
arg_buffer[2] = x116825117028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116919))[0]);
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
void* _117169 = arg_buffer[1];
//reading env and args
void* kont116920 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x116826117029 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116920);
arg_buffer[2] = x116826117029;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116920))[0]);
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
void* _117170 = arg_buffer[1];
//reading env and args
void* kont116921 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x116827117030 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116921);
arg_buffer[2] = x116827117030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116921))[0]);
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
void* _117171 = arg_buffer[1];
//reading env and args
void* kont116922 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x116828117031 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116922);
arg_buffer[2] = x116828117031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116922))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam117172_fptr() // lam117172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117173 = arg_buffer[1];
//reading env and args
void* a116831117035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116829117032 = (decode_clo(env117173))[3];
//not do dummy comment
void* kont116923 = (decode_clo(env117173))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env117173))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont116923;
arg_buffer[3] = a116829117032;
arg_buffer[4] = a116831117035;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117172 = encode_clo(alloc_clo(lam117172_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117176 = arg_buffer[1];
//reading env and args
void* kont116923 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar117309 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117309, "0", 10);
void* a116829117032 = encode_mpz(mpzvar117309);
mpz_t* mpzvar117310 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117310, "2", 10);
void* a116830117033 = encode_mpz(mpzvar117310);

//creating new closure instance
void** clo117312 = alloc_clo(lam117172_fptr, 3);

//setting env list
clo117312[1] = equal_u63;
clo117312[2] = kont116923;
clo117312[3] = a116829117032;
void* f116924117034 = encode_clo(clo117312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f116924117034;
arg_buffer[3] = x;
arg_buffer[4] = a116830117033;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam117177_fptr() // lam117177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117178 = arg_buffer[1];
//reading env and args
void* a116834117039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116832117036 = (decode_clo(env117178))[3];
//not do dummy comment
void* kont116925 = (decode_clo(env117178))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env117178))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont116925;
arg_buffer[3] = a116832117036;
arg_buffer[4] = a116834117039;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117177 = encode_clo(alloc_clo(lam117177_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117181 = arg_buffer[1];
//reading env and args
void* kont116925 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar117313 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117313, "1", 10);
void* a116832117036 = encode_mpz(mpzvar117313);
mpz_t* mpzvar117314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117314, "2", 10);
void* a116833117037 = encode_mpz(mpzvar117314);

//creating new closure instance
void** clo117316 = alloc_clo(lam117177_fptr, 3);

//setting env list
clo117316[1] = equal_u63;
clo117316[2] = kont116925;
clo117316[3] = a116832117036;
void* f116926117038 = encode_clo(clo117316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f116926117038;
arg_buffer[3] = x;
arg_buffer[4] = a116833117037;
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
void* _117182 = arg_buffer[1];
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

void* kont116927117040 = prim_car(x);
void* x117041 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116927117040);
arg_buffer[2] = x117041;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116927117040))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam117185_fptr() // lam117185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117186 = arg_buffer[1];
//reading env and args
void* a116840117051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env117186))[3];
//not do dummy comment
void* kont116929 = (decode_clo(env117186))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117186))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont116929;
arg_buffer[3] = x;
arg_buffer[4] = a116840117051;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117185 = encode_clo(alloc_clo(lam117185_fptr, 0));

void* lam117187_fptr() // lam117187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117188 = arg_buffer[1];
//reading env and args
void* a116838117048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117188))[5];
//not do dummy comment
void* lst = (decode_clo(env117188))[4];
//not do dummy comment
void* x = (decode_clo(env117188))[3];
//not do dummy comment
void* kont116929 = (decode_clo(env117188))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117188))[1];

//if-clause
bool if_guard117317 = is_true(a116838117048);
if(if_guard117317)
{
void* x116839117049 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116929);
arg_buffer[2] = x116839117049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116929))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117319 = alloc_clo(lam117185_fptr, 3);

//setting env list
clo117319[1] = member_u63;
clo117319[2] = kont116929;
clo117319[3] = x;
void* f116930117050 = encode_clo(clo117319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116930117050;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117187 = encode_clo(alloc_clo(lam117187_fptr, 0));

void* lam117189_fptr() // lam117189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117190 = arg_buffer[1];
//reading env and args
void* a116837117046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117190))[6];
//not do dummy comment
void* lst = (decode_clo(env117190))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env117190))[4];
//not do dummy comment
void* x = (decode_clo(env117190))[3];
//not do dummy comment
void* kont116929 = (decode_clo(env117190))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117190))[1];

//creating new closure instance
void** clo117321 = alloc_clo(lam117187_fptr, 5);

//setting env list
clo117321[1] = member_u63;
clo117321[2] = kont116929;
clo117321[3] = x;
clo117321[4] = lst;
clo117321[5] = cdr;
void* f116931117047 = encode_clo(clo117321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f116931117047;
arg_buffer[3] = a116837117046;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117189 = encode_clo(alloc_clo(lam117189_fptr, 0));

void* lam117191_fptr() // lam117191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117192 = arg_buffer[1];
//reading env and args
void* a116835117043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117192))[7];
//not do dummy comment
void* lst = (decode_clo(env117192))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env117192))[5];
//not do dummy comment
void* x = (decode_clo(env117192))[4];
//not do dummy comment
void* kont116929 = (decode_clo(env117192))[3];
//not do dummy comment
void* car = (decode_clo(env117192))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env117192))[1];

//if-clause
bool if_guard117322 = is_true(a116835117043);
if(if_guard117322)
{
void* x116836117044 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116929);
arg_buffer[2] = x116836117044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116929))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117324 = alloc_clo(lam117189_fptr, 6);

//setting env list
clo117324[1] = member_u63;
clo117324[2] = kont116929;
clo117324[3] = x;
clo117324[4] = equal_u63;
clo117324[5] = lst;
clo117324[6] = cdr;
void* f116932117045 = encode_clo(clo117324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116932117045;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117191 = encode_clo(alloc_clo(lam117191_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117193 = arg_buffer[1];
//reading env and args
void* kont116929 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117326 = alloc_clo(lam117191_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo117326[1] = member_u63;
clo117326[2] = car;
clo117326[3] = kont116929;
clo117326[4] = x;
clo117326[5] = equal_u63;
clo117326[6] = lst;
clo117326[7] = cdr;
void* f116933117042 = encode_clo(clo117326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116933117042;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam117194_fptr() // lam117194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117195 = arg_buffer[1];
//reading env and args
void* a116844117059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116934 = (decode_clo(env117195))[4];
//not do dummy comment
void* fun = (decode_clo(env117195))[3];
//not do dummy comment
void* a116843117057 = (decode_clo(env117195))[2];
//not do dummy comment
void* foldl = (decode_clo(env117195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont116934;
arg_buffer[3] = fun;
arg_buffer[4] = a116843117057;
arg_buffer[5] = a116844117059;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117194 = encode_clo(alloc_clo(lam117194_fptr, 0));

void* lam117196_fptr() // lam117196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117197 = arg_buffer[1];
//reading env and args
void* a116843117057 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117197))[5];
//not do dummy comment
void* kont116934 = (decode_clo(env117197))[4];
//not do dummy comment
void* lst = (decode_clo(env117197))[3];
//not do dummy comment
void* fun = (decode_clo(env117197))[2];
//not do dummy comment
void* foldl = (decode_clo(env117197))[1];

//creating new closure instance
void** clo117328 = alloc_clo(lam117194_fptr, 4);

//setting env list
clo117328[1] = foldl;
clo117328[2] = a116843117057;
clo117328[3] = fun;
clo117328[4] = kont116934;
void* f116935117058 = encode_clo(clo117328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116935117058;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117196 = encode_clo(alloc_clo(lam117196_fptr, 0));

void* lam117198_fptr() // lam117198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117199 = arg_buffer[1];
//reading env and args
void* a116842117055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117199))[6];
//not do dummy comment
void* kont116934 = (decode_clo(env117199))[5];
//not do dummy comment
void* lst = (decode_clo(env117199))[4];
//not do dummy comment
void* fun = (decode_clo(env117199))[3];
//not do dummy comment
void* acc = (decode_clo(env117199))[2];
//not do dummy comment
void* foldl = (decode_clo(env117199))[1];

//creating new closure instance
void** clo117330 = alloc_clo(lam117196_fptr, 5);

//setting env list
clo117330[1] = foldl;
clo117330[2] = fun;
clo117330[3] = lst;
clo117330[4] = kont116934;
clo117330[5] = cdr;
void* f116936117056 = encode_clo(clo117330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f116936117056;
arg_buffer[3] = a116842117055;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117198 = encode_clo(alloc_clo(lam117198_fptr, 0));

void* lam117200_fptr() // lam117200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117201 = arg_buffer[1];
//reading env and args
void* a116841117053 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117201))[7];
//not do dummy comment
void* kont116934 = (decode_clo(env117201))[6];
//not do dummy comment
void* lst = (decode_clo(env117201))[5];
//not do dummy comment
void* fun = (decode_clo(env117201))[4];
//not do dummy comment
void* acc = (decode_clo(env117201))[3];
//not do dummy comment
void* car = (decode_clo(env117201))[2];
//not do dummy comment
void* foldl = (decode_clo(env117201))[1];

//if-clause
bool if_guard117331 = is_true(a116841117053);
if(if_guard117331)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116934);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116934))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117333 = alloc_clo(lam117198_fptr, 6);

//setting env list
clo117333[1] = foldl;
clo117333[2] = acc;
clo117333[3] = fun;
clo117333[4] = lst;
clo117333[5] = kont116934;
clo117333[6] = cdr;
void* f116937117054 = encode_clo(clo117333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116937117054;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117200 = encode_clo(alloc_clo(lam117200_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117202 = arg_buffer[1];
//reading env and args
void* kont116934 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo117335 = alloc_clo(lam117200_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo117335[1] = foldl;
clo117335[2] = car;
clo117335[3] = acc;
clo117335[4] = fun;
clo117335[5] = lst;
clo117335[6] = kont116934;
clo117335[7] = cdr;
void* f116938117052 = encode_clo(clo117335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116938117052;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam117203_fptr() // lam117203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117204 = arg_buffer[1];
//reading env and args
void* a116848117067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116846117063 = (decode_clo(env117204))[3];
//not do dummy comment
void* kont116939 = (decode_clo(env117204))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont116939;
arg_buffer[3] = a116846117063;
arg_buffer[4] = a116848117067;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117203 = encode_clo(alloc_clo(lam117203_fptr, 0));

void* lam117205_fptr() // lam117205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117206 = arg_buffer[1];
//reading env and args
void* a116847117065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116846117063 = (decode_clo(env117206))[5];
//not do dummy comment
void* kont116939 = (decode_clo(env117206))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117206))[3];
//not do dummy comment
void* lst2 = (decode_clo(env117206))[2];
//not do dummy comment
void* cons = (decode_clo(env117206))[1];

//creating new closure instance
void** clo117337 = alloc_clo(lam117203_fptr, 3);

//setting env list
clo117337[1] = reverse_u45helper;
clo117337[2] = kont116939;
clo117337[3] = a116846117063;
void* f116940117066 = encode_clo(clo117337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f116940117066;
arg_buffer[3] = a116847117065;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117205 = encode_clo(alloc_clo(lam117205_fptr, 0));

void* lam117207_fptr() // lam117207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117208 = arg_buffer[1];
//reading env and args
void* a116846117063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117208))[6];
//not do dummy comment
void* kont116939 = (decode_clo(env117208))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117208))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117208))[3];
//not do dummy comment
void* car = (decode_clo(env117208))[2];
//not do dummy comment
void* cons = (decode_clo(env117208))[1];

//creating new closure instance
void** clo117339 = alloc_clo(lam117205_fptr, 5);

//setting env list
clo117339[1] = cons;
clo117339[2] = lst2;
clo117339[3] = reverse_u45helper;
clo117339[4] = kont116939;
clo117339[5] = a116846117063;
void* f116941117064 = encode_clo(clo117339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116941117064;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117207 = encode_clo(alloc_clo(lam117207_fptr, 0));

void* lam117209_fptr() // lam117209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117210 = arg_buffer[1];
//reading env and args
void* a116845117061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117210))[7];
//not do dummy comment
void* lst = (decode_clo(env117210))[6];
//not do dummy comment
void* kont116939 = (decode_clo(env117210))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117210))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117210))[3];
//not do dummy comment
void* car = (decode_clo(env117210))[2];
//not do dummy comment
void* cons = (decode_clo(env117210))[1];

//if-clause
bool if_guard117340 = is_true(a116845117061);
if(if_guard117340)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116939);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116939))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117342 = alloc_clo(lam117207_fptr, 6);

//setting env list
clo117342[1] = cons;
clo117342[2] = car;
clo117342[3] = lst2;
clo117342[4] = reverse_u45helper;
clo117342[5] = kont116939;
clo117342[6] = lst;
void* f116942117062 = encode_clo(clo117342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116942117062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117209 = encode_clo(alloc_clo(lam117209_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117211 = arg_buffer[1];
//reading env and args
void* kont116939 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117344 = alloc_clo(lam117209_fptr, 7);

//setting env list
clo117344[1] = cons;
clo117344[2] = car;
clo117344[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo117344[4] = reverse_u45helper;
clo117344[5] = kont116939;
clo117344[6] = lst;
clo117344[7] = cdr;
void* f116943117060 = encode_clo(clo117344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116943117060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam117212_fptr() // lam117212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117213 = arg_buffer[1];
//reading env and args
void* a116849117069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117213))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env117213))[2];
//not do dummy comment
void* kont116944 = (decode_clo(env117213))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont116944;
arg_buffer[3] = lst;
arg_buffer[4] = a116849117069;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117212 = encode_clo(alloc_clo(lam117212_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117214 = arg_buffer[1];
//reading env and args
void* kont116944 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo117346 = alloc_clo(lam117212_fptr, 3);

//setting env list
clo117346[1] = kont116944;
clo117346[2] = reverse_u45helper;
clo117346[3] = lst;
void* f116945117068 = encode_clo(clo117346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116945117068;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam117215_fptr() // lam117215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117216 = arg_buffer[1];
//reading env and args
void* x116852117074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116946 = (decode_clo(env117216))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116946);
arg_buffer[2] = x116852117074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116946))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117215 = encode_clo(alloc_clo(lam117215_fptr, 0));

void* lam117217_fptr() // lam117217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117218 = arg_buffer[1];
//reading env and args
void* a116857117083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116855117079 = (decode_clo(env117218))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env117218))[3];
//not do dummy comment
void* kont116946 = (decode_clo(env117218))[2];
//not do dummy comment
void* a116853117076 = (decode_clo(env117218))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont116946;
arg_buffer[3] = a116853117076;
arg_buffer[4] = a116855117079;
arg_buffer[5] = a116857117083;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117217 = encode_clo(alloc_clo(lam117217_fptr, 0));

void* lam117219_fptr() // lam117219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117220 = arg_buffer[1];
//reading env and args
void* a116856117081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116855117079 = (decode_clo(env117220))[6];
//not do dummy comment
void* kont116946 = (decode_clo(env117220))[5];
//not do dummy comment
void* cons = (decode_clo(env117220))[4];
//not do dummy comment
void* a116853117076 = (decode_clo(env117220))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env117220))[2];
//not do dummy comment
void* lst2 = (decode_clo(env117220))[1];

//creating new closure instance
void** clo117348 = alloc_clo(lam117217_fptr, 4);

//setting env list
clo117348[1] = a116853117076;
clo117348[2] = kont116946;
clo117348[3] = take_u45helper;
clo117348[4] = a116855117079;
void* f116948117082 = encode_clo(clo117348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f116948117082;
arg_buffer[3] = a116856117081;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117219 = encode_clo(alloc_clo(lam117219_fptr, 0));

void* lam117221_fptr() // lam117221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117222 = arg_buffer[1];
//reading env and args
void* a116855117079 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117222))[7];
//not do dummy comment
void* cons = (decode_clo(env117222))[6];
//not do dummy comment
void* a116853117076 = (decode_clo(env117222))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env117222))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117222))[3];
//not do dummy comment
void* car = (decode_clo(env117222))[2];
//not do dummy comment
void* kont116946 = (decode_clo(env117222))[1];

//creating new closure instance
void** clo117350 = alloc_clo(lam117219_fptr, 6);

//setting env list
clo117350[1] = lst2;
clo117350[2] = take_u45helper;
clo117350[3] = a116853117076;
clo117350[4] = cons;
clo117350[5] = kont116946;
clo117350[6] = a116855117079;
void* f116949117080 = encode_clo(clo117350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116949117080;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117221 = encode_clo(alloc_clo(lam117221_fptr, 0));

void* lam117224_fptr() // lam117224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117225 = arg_buffer[1];
//reading env and args
void* a116853117076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117225))[8];
//not do dummy comment
void* cons = (decode_clo(env117225))[7];
//not do dummy comment
void* _u45 = (decode_clo(env117225))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env117225))[5];
//not do dummy comment
void* lst2 = (decode_clo(env117225))[4];
//not do dummy comment
void* n = (decode_clo(env117225))[3];
//not do dummy comment
void* car = (decode_clo(env117225))[2];
//not do dummy comment
void* kont116946 = (decode_clo(env117225))[1];
mpz_t* mpzvar117351 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117351, "1", 10);
void* a116854117077 = encode_mpz(mpzvar117351);

//creating new closure instance
void** clo117353 = alloc_clo(lam117221_fptr, 7);

//setting env list
clo117353[1] = kont116946;
clo117353[2] = car;
clo117353[3] = lst2;
clo117353[4] = take_u45helper;
clo117353[5] = a116853117076;
clo117353[6] = cons;
clo117353[7] = lst;
void* f116950117078 = encode_clo(clo117353);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f116950117078;
arg_buffer[3] = n;
arg_buffer[4] = a116854117077;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117224 = encode_clo(alloc_clo(lam117224_fptr, 0));

void* lam117226_fptr() // lam117226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117227 = arg_buffer[1];
//reading env and args
void* a116851117072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117227))[10];
//not do dummy comment
void* lst = (decode_clo(env117227))[9];
//not do dummy comment
void* reverse = (decode_clo(env117227))[8];
//not do dummy comment
void* cons = (decode_clo(env117227))[7];
//not do dummy comment
void* _u45 = (decode_clo(env117227))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env117227))[5];
//not do dummy comment
void* lst2 = (decode_clo(env117227))[4];
//not do dummy comment
void* n = (decode_clo(env117227))[3];
//not do dummy comment
void* car = (decode_clo(env117227))[2];
//not do dummy comment
void* kont116946 = (decode_clo(env117227))[1];

//if-clause
bool if_guard117354 = is_true(a116851117072);
if(if_guard117354)
{

//creating new closure instance
void** clo117356 = alloc_clo(lam117215_fptr, 1);

//setting env list
clo117356[1] = kont116946;
void* f116947117073 = encode_clo(clo117356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f116947117073;
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
void** clo117358 = alloc_clo(lam117224_fptr, 8);

//setting env list
clo117358[1] = kont116946;
clo117358[2] = car;
clo117358[3] = n;
clo117358[4] = lst2;
clo117358[5] = take_u45helper;
clo117358[6] = _u45;
clo117358[7] = cons;
clo117358[8] = lst;
void* f116951117075 = encode_clo(clo117358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116951117075;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117226 = encode_clo(alloc_clo(lam117226_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117229 = arg_buffer[1];
//reading env and args
void* kont116946 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar117359 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117359, "0", 10);
void* a116850117070 = encode_mpz(mpzvar117359);

//creating new closure instance
void** clo117361 = alloc_clo(lam117226_fptr, 10);

//setting env list
clo117361[1] = kont116946;
clo117361[2] = car;
clo117361[3] = n;
clo117361[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo117361[5] = take_u45helper;
clo117361[6] = _u45;
clo117361[7] = cons;
clo117361[8] = reverse;
clo117361[9] = lst;
clo117361[10] = cdr;
void* f116952117071 = encode_clo(clo117361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f116952117071;
arg_buffer[3] = n;
arg_buffer[4] = a116850117070;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam117230_fptr() // lam117230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117231 = arg_buffer[1];
//reading env and args
void* a116858117085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env117231))[4];
//not do dummy comment
void* n = (decode_clo(env117231))[3];
//not do dummy comment
void* kont116953 = (decode_clo(env117231))[2];
//not do dummy comment
void* lst = (decode_clo(env117231))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont116953;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a116858117085;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117230 = encode_clo(alloc_clo(lam117230_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117232 = arg_buffer[1];
//reading env and args
void* kont116953 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117363 = alloc_clo(lam117230_fptr, 4);

//setting env list
clo117363[1] = lst;
clo117363[2] = kont116953;
clo117363[3] = n;
clo117363[4] = take_u45helper;
void* f116954117084 = encode_clo(clo117363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116954117084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam117234_fptr() // lam117234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117235 = arg_buffer[1];
//reading env and args
void* a116863117093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116955 = (decode_clo(env117235))[3];
//not do dummy comment
void* _u43 = (decode_clo(env117235))[2];
//not do dummy comment
void* a116861117089 = (decode_clo(env117235))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont116955;
arg_buffer[3] = a116861117089;
arg_buffer[4] = a116863117093;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117234 = encode_clo(alloc_clo(lam117234_fptr, 0));

void* lam117236_fptr() // lam117236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117237 = arg_buffer[1];
//reading env and args
void* a116862117091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env117237))[4];
//not do dummy comment
void* kont116955 = (decode_clo(env117237))[3];
//not do dummy comment
void* _u43 = (decode_clo(env117237))[2];
//not do dummy comment
void* a116861117089 = (decode_clo(env117237))[1];

//creating new closure instance
void** clo117365 = alloc_clo(lam117234_fptr, 3);

//setting env list
clo117365[1] = a116861117089;
clo117365[2] = _u43;
clo117365[3] = kont116955;
void* f116956117092 = encode_clo(clo117365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f116956117092;
arg_buffer[3] = a116862117091;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117236 = encode_clo(alloc_clo(lam117236_fptr, 0));

void* lam117239_fptr() // lam117239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117240 = arg_buffer[1];
//reading env and args
void* a116859117087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117240))[5];
//not do dummy comment
void* lst = (decode_clo(env117240))[4];
//not do dummy comment
void* length = (decode_clo(env117240))[3];
//not do dummy comment
void* kont116955 = (decode_clo(env117240))[2];
//not do dummy comment
void* _u43 = (decode_clo(env117240))[1];

//if-clause
bool if_guard117366 = is_true(a116859117087);
if(if_guard117366)
{
mpz_t* mpzvar117367 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117367, "0", 10);
void* x116860117088 = encode_mpz(mpzvar117367);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116955);
arg_buffer[2] = x116860117088;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116955))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar117368 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117368, "1", 10);
void* a116861117089 = encode_mpz(mpzvar117368);

//creating new closure instance
void** clo117370 = alloc_clo(lam117236_fptr, 4);

//setting env list
clo117370[1] = a116861117089;
clo117370[2] = _u43;
clo117370[3] = kont116955;
clo117370[4] = length;
void* f116957117090 = encode_clo(clo117370);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116957117090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117239 = encode_clo(alloc_clo(lam117239_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117241 = arg_buffer[1];
//reading env and args
void* kont116955 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo117372 = alloc_clo(lam117239_fptr, 5);

//setting env list
clo117372[1] = _u43;
clo117372[2] = kont116955;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo117372[3] = length;
clo117372[4] = lst;
clo117372[5] = cdr;
void* f116958117086 = encode_clo(clo117372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116958117086;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam117242_fptr() // lam117242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117243 = arg_buffer[1];
//reading env and args
void* x116865117097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116959 = (decode_clo(env117243))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116959);
arg_buffer[2] = x116865117097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116959))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117242 = encode_clo(alloc_clo(lam117242_fptr, 0));

void* lam117244_fptr() // lam117244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117245 = arg_buffer[1];
//reading env and args
void* a116869117105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116867117101 = (decode_clo(env117245))[3];
//not do dummy comment
void* kont116959 = (decode_clo(env117245))[2];
//not do dummy comment
void* cons = (decode_clo(env117245))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont116959;
arg_buffer[3] = a116867117101;
arg_buffer[4] = a116869117105;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117244 = encode_clo(alloc_clo(lam117244_fptr, 0));

void* lam117246_fptr() // lam117246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117247 = arg_buffer[1];
//reading env and args
void* a116868117103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env117247))[5];
//not do dummy comment
void* a116867117101 = (decode_clo(env117247))[4];
//not do dummy comment
void* kont116959 = (decode_clo(env117247))[3];
//not do dummy comment
void* proc = (decode_clo(env117247))[2];
//not do dummy comment
void* cons = (decode_clo(env117247))[1];

//creating new closure instance
void** clo117374 = alloc_clo(lam117244_fptr, 3);

//setting env list
clo117374[1] = cons;
clo117374[2] = kont116959;
clo117374[3] = a116867117101;
void* f116961117104 = encode_clo(clo117374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f116961117104;
arg_buffer[3] = proc;
arg_buffer[4] = a116868117103;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117246 = encode_clo(alloc_clo(lam117246_fptr, 0));

void* lam117248_fptr() // lam117248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117249 = arg_buffer[1];
//reading env and args
void* a116867117101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117249))[6];
//not do dummy comment
void* lst = (decode_clo(env117249))[5];
//not do dummy comment
void* map = (decode_clo(env117249))[4];
//not do dummy comment
void* kont116959 = (decode_clo(env117249))[3];
//not do dummy comment
void* proc = (decode_clo(env117249))[2];
//not do dummy comment
void* cons = (decode_clo(env117249))[1];

//creating new closure instance
void** clo117376 = alloc_clo(lam117246_fptr, 5);

//setting env list
clo117376[1] = cons;
clo117376[2] = proc;
clo117376[3] = kont116959;
clo117376[4] = a116867117101;
clo117376[5] = map;
void* f116962117102 = encode_clo(clo117376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116962117102;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117248 = encode_clo(alloc_clo(lam117248_fptr, 0));

void* lam117250_fptr() // lam117250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117251 = arg_buffer[1];
//reading env and args
void* a116866117099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117251))[6];
//not do dummy comment
void* lst = (decode_clo(env117251))[5];
//not do dummy comment
void* map = (decode_clo(env117251))[4];
//not do dummy comment
void* kont116959 = (decode_clo(env117251))[3];
//not do dummy comment
void* proc = (decode_clo(env117251))[2];
//not do dummy comment
void* cons = (decode_clo(env117251))[1];

//creating new closure instance
void** clo117378 = alloc_clo(lam117248_fptr, 6);

//setting env list
clo117378[1] = cons;
clo117378[2] = proc;
clo117378[3] = kont116959;
clo117378[4] = map;
clo117378[5] = lst;
clo117378[6] = cdr;
void* f116963117100 = encode_clo(clo117378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f116963117100;
arg_buffer[3] = a116866117099;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117250 = encode_clo(alloc_clo(lam117250_fptr, 0));

void* lam117252_fptr() // lam117252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117253 = arg_buffer[1];
//reading env and args
void* a116864117095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env117253))[8];
//not do dummy comment
void* map = (decode_clo(env117253))[7];
//not do dummy comment
void* kont116959 = (decode_clo(env117253))[6];
//not do dummy comment
void* proc = (decode_clo(env117253))[5];
//not do dummy comment
void* car = (decode_clo(env117253))[4];
//not do dummy comment
void* cons = (decode_clo(env117253))[3];
//not do dummy comment
void* list = (decode_clo(env117253))[2];
//not do dummy comment
void* cdr = (decode_clo(env117253))[1];

//if-clause
bool if_guard117379 = is_true(a116864117095);
if(if_guard117379)
{

//creating new closure instance
void** clo117381 = alloc_clo(lam117242_fptr, 1);

//setting env list
clo117381[1] = kont116959;
void* f116960117096 = encode_clo(clo117381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116960117096;
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
void** clo117383 = alloc_clo(lam117250_fptr, 6);

//setting env list
clo117383[1] = cons;
clo117383[2] = proc;
clo117383[3] = kont116959;
clo117383[4] = map;
clo117383[5] = lst;
clo117383[6] = cdr;
void* f116964117098 = encode_clo(clo117383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116964117098;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117252 = encode_clo(alloc_clo(lam117252_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117254 = arg_buffer[1];
//reading env and args
void* kont116959 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117385 = alloc_clo(lam117252_fptr, 8);

//setting env list
clo117385[1] = cdr;
clo117385[2] = list;
clo117385[3] = cons;
clo117385[4] = car;
clo117385[5] = proc;
clo117385[6] = kont116959;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo117385[7] = map;
clo117385[8] = lst;
void* f116965117094 = encode_clo(clo117385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116965117094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam117255_fptr() // lam117255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117256 = arg_buffer[1];
//reading env and args
void* x116871117109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116966 = (decode_clo(env117256))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116966);
arg_buffer[2] = x116871117109;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116966))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117255 = encode_clo(alloc_clo(lam117255_fptr, 0));

void* lam117257_fptr() // lam117257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117258 = arg_buffer[1];
//reading env and args
void* a116876117119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116966 = (decode_clo(env117258))[3];
//not do dummy comment
void* a116874117115 = (decode_clo(env117258))[2];
//not do dummy comment
void* cons = (decode_clo(env117258))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont116966;
arg_buffer[3] = a116874117115;
arg_buffer[4] = a116876117119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117257 = encode_clo(alloc_clo(lam117257_fptr, 0));

void* lam117259_fptr() // lam117259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117260 = arg_buffer[1];
//reading env and args
void* a116875117117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116966 = (decode_clo(env117260))[5];
//not do dummy comment
void* a116874117115 = (decode_clo(env117260))[4];
//not do dummy comment
void* op = (decode_clo(env117260))[3];
//not do dummy comment
void* filter = (decode_clo(env117260))[2];
//not do dummy comment
void* cons = (decode_clo(env117260))[1];

//creating new closure instance
void** clo117387 = alloc_clo(lam117257_fptr, 3);

//setting env list
clo117387[1] = cons;
clo117387[2] = a116874117115;
clo117387[3] = kont116966;
void* f116968117118 = encode_clo(clo117387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f116968117118;
arg_buffer[3] = op;
arg_buffer[4] = a116875117117;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117259 = encode_clo(alloc_clo(lam117259_fptr, 0));

void* lam117261_fptr() // lam117261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117262 = arg_buffer[1];
//reading env and args
void* a116874117115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117262))[6];
//not do dummy comment
void* kont116966 = (decode_clo(env117262))[5];
//not do dummy comment
void* lst = (decode_clo(env117262))[4];
//not do dummy comment
void* op = (decode_clo(env117262))[3];
//not do dummy comment
void* filter = (decode_clo(env117262))[2];
//not do dummy comment
void* cons = (decode_clo(env117262))[1];

//creating new closure instance
void** clo117389 = alloc_clo(lam117259_fptr, 5);

//setting env list
clo117389[1] = cons;
clo117389[2] = filter;
clo117389[3] = op;
clo117389[4] = a116874117115;
clo117389[5] = kont116966;
void* f116969117116 = encode_clo(clo117389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116969117116;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117261 = encode_clo(alloc_clo(lam117261_fptr, 0));

void* lam117263_fptr() // lam117263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117264 = arg_buffer[1];
//reading env and args
void* a116877117121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116966 = (decode_clo(env117264))[3];
//not do dummy comment
void* op = (decode_clo(env117264))[2];
//not do dummy comment
void* filter = (decode_clo(env117264))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont116966;
arg_buffer[3] = op;
arg_buffer[4] = a116877117121;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117263 = encode_clo(alloc_clo(lam117263_fptr, 0));

void* lam117265_fptr() // lam117265 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117266 = arg_buffer[1];
//reading env and args
void* a116873117113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117266))[7];
//not do dummy comment
void* kont116966 = (decode_clo(env117266))[6];
//not do dummy comment
void* lst = (decode_clo(env117266))[5];
//not do dummy comment
void* op = (decode_clo(env117266))[4];
//not do dummy comment
void* cons = (decode_clo(env117266))[3];
//not do dummy comment
void* filter = (decode_clo(env117266))[2];
//not do dummy comment
void* car = (decode_clo(env117266))[1];

//if-clause
bool if_guard117390 = is_true(a116873117113);
if(if_guard117390)
{

//creating new closure instance
void** clo117392 = alloc_clo(lam117261_fptr, 6);

//setting env list
clo117392[1] = cons;
clo117392[2] = filter;
clo117392[3] = op;
clo117392[4] = lst;
clo117392[5] = kont116966;
clo117392[6] = cdr;
void* f116970117114 = encode_clo(clo117392);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116970117114;
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
void** clo117394 = alloc_clo(lam117263_fptr, 3);

//setting env list
clo117394[1] = filter;
clo117394[2] = op;
clo117394[3] = kont116966;
void* f116971117120 = encode_clo(clo117394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116971117120;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117265 = encode_clo(alloc_clo(lam117265_fptr, 0));

void* lam117267_fptr() // lam117267 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117268 = arg_buffer[1];
//reading env and args
void* a116872117111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117268))[7];
//not do dummy comment
void* kont116966 = (decode_clo(env117268))[6];
//not do dummy comment
void* lst = (decode_clo(env117268))[5];
//not do dummy comment
void* op = (decode_clo(env117268))[4];
//not do dummy comment
void* cons = (decode_clo(env117268))[3];
//not do dummy comment
void* filter = (decode_clo(env117268))[2];
//not do dummy comment
void* car = (decode_clo(env117268))[1];

//creating new closure instance
void** clo117396 = alloc_clo(lam117265_fptr, 7);

//setting env list
clo117396[1] = car;
clo117396[2] = filter;
clo117396[3] = cons;
clo117396[4] = op;
clo117396[5] = lst;
clo117396[6] = kont116966;
clo117396[7] = cdr;
void* f116972117112 = encode_clo(clo117396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f116972117112;
arg_buffer[3] = a116872117111;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117267 = encode_clo(alloc_clo(lam117267_fptr, 0));

void* lam117269_fptr() // lam117269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117270 = arg_buffer[1];
//reading env and args
void* a116870117107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116966 = (decode_clo(env117270))[8];
//not do dummy comment
void* lst = (decode_clo(env117270))[7];
//not do dummy comment
void* op = (decode_clo(env117270))[6];
//not do dummy comment
void* cons = (decode_clo(env117270))[5];
//not do dummy comment
void* list = (decode_clo(env117270))[4];
//not do dummy comment
void* cdr = (decode_clo(env117270))[3];
//not do dummy comment
void* filter = (decode_clo(env117270))[2];
//not do dummy comment
void* car = (decode_clo(env117270))[1];

//if-clause
bool if_guard117397 = is_true(a116870117107);
if(if_guard117397)
{

//creating new closure instance
void** clo117399 = alloc_clo(lam117255_fptr, 1);

//setting env list
clo117399[1] = kont116966;
void* f116967117108 = encode_clo(clo117399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f116967117108;
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
void** clo117401 = alloc_clo(lam117267_fptr, 7);

//setting env list
clo117401[1] = car;
clo117401[2] = filter;
clo117401[3] = cons;
clo117401[4] = op;
clo117401[5] = lst;
clo117401[6] = kont116966;
clo117401[7] = cdr;
void* f116973117110 = encode_clo(clo117401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116973117110;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117269 = encode_clo(alloc_clo(lam117269_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117271 = arg_buffer[1];
//reading env and args
void* kont116966 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117403 = alloc_clo(lam117269_fptr, 8);

//setting env list
clo117403[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo117403[2] = filter;
clo117403[3] = cdr;
clo117403[4] = list;
clo117403[5] = cons;
clo117403[6] = op;
clo117403[7] = lst;
clo117403[8] = kont116966;
void* f116974117106 = encode_clo(clo117403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116974117106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam117272_fptr() // lam117272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117273 = arg_buffer[1];
//reading env and args
void* a116882117129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116880117126 = (decode_clo(env117273))[3];
//not do dummy comment
void* drop = (decode_clo(env117273))[2];
//not do dummy comment
void* kont116975 = (decode_clo(env117273))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont116975;
arg_buffer[3] = a116880117126;
arg_buffer[4] = a116882117129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117272 = encode_clo(alloc_clo(lam117272_fptr, 0));

void* lam117275_fptr() // lam117275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117276 = arg_buffer[1];
//reading env and args
void* a116880117126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env117276))[4];
//not do dummy comment
void* kont116975 = (decode_clo(env117276))[3];
//not do dummy comment
void* n = (decode_clo(env117276))[2];
//not do dummy comment
void* _u45 = (decode_clo(env117276))[1];
mpz_t* mpzvar117404 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117404, "1", 10);
void* a116881117127 = encode_mpz(mpzvar117404);

//creating new closure instance
void** clo117406 = alloc_clo(lam117272_fptr, 3);

//setting env list
clo117406[1] = kont116975;
clo117406[2] = drop;
clo117406[3] = a116880117126;
void* f116976117128 = encode_clo(clo117406);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f116976117128;
arg_buffer[3] = n;
arg_buffer[4] = a116881117127;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117275 = encode_clo(alloc_clo(lam117275_fptr, 0));

void* lam117277_fptr() // lam117277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117278 = arg_buffer[1];
//reading env and args
void* a116879117124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117278))[6];
//not do dummy comment
void* kont116975 = (decode_clo(env117278))[5];
//not do dummy comment
void* n = (decode_clo(env117278))[4];
//not do dummy comment
void* _u45 = (decode_clo(env117278))[3];
//not do dummy comment
void* lst = (decode_clo(env117278))[2];
//not do dummy comment
void* drop = (decode_clo(env117278))[1];

//if-clause
bool if_guard117407 = is_true(a116879117124);
if(if_guard117407)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116975);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117409 = alloc_clo(lam117275_fptr, 4);

//setting env list
clo117409[1] = _u45;
clo117409[2] = n;
clo117409[3] = kont116975;
clo117409[4] = drop;
void* f116977117125 = encode_clo(clo117409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116977117125;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117277 = encode_clo(alloc_clo(lam117277_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117280 = arg_buffer[1];
//reading env and args
void* kont116975 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar117410 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar117410, "0", 10);
void* a116878117122 = encode_mpz(mpzvar117410);

//creating new closure instance
void** clo117412 = alloc_clo(lam117277_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo117412[1] = drop;
clo117412[2] = lst;
clo117412[3] = _u45;
clo117412[4] = n;
clo117412[5] = kont116975;
clo117412[6] = cdr;
void* f116978117123 = encode_clo(clo117412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f116978117123;
arg_buffer[3] = n;
arg_buffer[4] = a116878117122;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam117281_fptr() // lam117281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117282 = arg_buffer[1];
//reading env and args
void* a116886117137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116884117133 = (decode_clo(env117282))[3];
//not do dummy comment
void* proc = (decode_clo(env117282))[2];
//not do dummy comment
void* kont116979 = (decode_clo(env117282))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont116979;
arg_buffer[3] = a116884117133;
arg_buffer[4] = a116886117137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117281 = encode_clo(alloc_clo(lam117281_fptr, 0));

void* lam117283_fptr() // lam117283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117284 = arg_buffer[1];
//reading env and args
void* a116885117135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env117284))[5];
//not do dummy comment
void* a116884117133 = (decode_clo(env117284))[4];
//not do dummy comment
void* kont116979 = (decode_clo(env117284))[3];
//not do dummy comment
void* proc = (decode_clo(env117284))[2];
//not do dummy comment
void* acc = (decode_clo(env117284))[1];

//creating new closure instance
void** clo117414 = alloc_clo(lam117281_fptr, 3);

//setting env list
clo117414[1] = kont116979;
clo117414[2] = proc;
clo117414[3] = a116884117133;
void* f116980117136 = encode_clo(clo117414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f116980117136;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a116885117135;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117283 = encode_clo(alloc_clo(lam117283_fptr, 0));

void* lam117285_fptr() // lam117285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117286 = arg_buffer[1];
//reading env and args
void* a116884117133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117286))[6];
//not do dummy comment
void* kont116979 = (decode_clo(env117286))[5];
//not do dummy comment
void* foldr = (decode_clo(env117286))[4];
//not do dummy comment
void* lst = (decode_clo(env117286))[3];
//not do dummy comment
void* proc = (decode_clo(env117286))[2];
//not do dummy comment
void* acc = (decode_clo(env117286))[1];

//creating new closure instance
void** clo117416 = alloc_clo(lam117283_fptr, 5);

//setting env list
clo117416[1] = acc;
clo117416[2] = proc;
clo117416[3] = kont116979;
clo117416[4] = a116884117133;
clo117416[5] = foldr;
void* f116981117134 = encode_clo(clo117416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116981117134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117285 = encode_clo(alloc_clo(lam117285_fptr, 0));

void* lam117287_fptr() // lam117287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117288 = arg_buffer[1];
//reading env and args
void* a116883117131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117288))[7];
//not do dummy comment
void* car = (decode_clo(env117288))[6];
//not do dummy comment
void* kont116979 = (decode_clo(env117288))[5];
//not do dummy comment
void* foldr = (decode_clo(env117288))[4];
//not do dummy comment
void* lst = (decode_clo(env117288))[3];
//not do dummy comment
void* proc = (decode_clo(env117288))[2];
//not do dummy comment
void* acc = (decode_clo(env117288))[1];

//if-clause
bool if_guard117417 = is_true(a116883117131);
if(if_guard117417)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116979);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116979))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117419 = alloc_clo(lam117285_fptr, 6);

//setting env list
clo117419[1] = acc;
clo117419[2] = proc;
clo117419[3] = lst;
clo117419[4] = foldr;
clo117419[5] = kont116979;
clo117419[6] = cdr;
void* f116982117132 = encode_clo(clo117419);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116982117132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117287 = encode_clo(alloc_clo(lam117287_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117289 = arg_buffer[1];
//reading env and args
void* kont116979 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo117421 = alloc_clo(lam117287_fptr, 7);

//setting env list
clo117421[1] = acc;
clo117421[2] = proc;
clo117421[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo117421[4] = foldr;
clo117421[5] = kont116979;
clo117421[6] = car;
clo117421[7] = cdr;
void* f116983117130 = encode_clo(clo117421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116983117130;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam117290_fptr() // lam117290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117291 = arg_buffer[1];
//reading env and args
void* a116890117145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116888117141 = (decode_clo(env117291))[3];
//not do dummy comment
void* kont116984 = (decode_clo(env117291))[2];
//not do dummy comment
void* cons = (decode_clo(env117291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont116984;
arg_buffer[3] = a116888117141;
arg_buffer[4] = a116890117145;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117290 = encode_clo(alloc_clo(lam117290_fptr, 0));

void* lam117292_fptr() // lam117292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117293 = arg_buffer[1];
//reading env and args
void* a116889117143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a116888117141 = (decode_clo(env117293))[5];
//not do dummy comment
void* kont116984 = (decode_clo(env117293))[4];
//not do dummy comment
void* append = (decode_clo(env117293))[3];
//not do dummy comment
void* lst2 = (decode_clo(env117293))[2];
//not do dummy comment
void* cons = (decode_clo(env117293))[1];

//creating new closure instance
void** clo117423 = alloc_clo(lam117290_fptr, 3);

//setting env list
clo117423[1] = cons;
clo117423[2] = kont116984;
clo117423[3] = a116888117141;
void* f116985117144 = encode_clo(clo117423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f116985117144;
arg_buffer[3] = a116889117143;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117292 = encode_clo(alloc_clo(lam117292_fptr, 0));

void* lam117294_fptr() // lam117294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117295 = arg_buffer[1];
//reading env and args
void* a116888117141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117295))[6];
//not do dummy comment
void* kont116984 = (decode_clo(env117295))[5];
//not do dummy comment
void* append = (decode_clo(env117295))[4];
//not do dummy comment
void* lst2 = (decode_clo(env117295))[3];
//not do dummy comment
void* lst1 = (decode_clo(env117295))[2];
//not do dummy comment
void* cons = (decode_clo(env117295))[1];

//creating new closure instance
void** clo117425 = alloc_clo(lam117292_fptr, 5);

//setting env list
clo117425[1] = cons;
clo117425[2] = lst2;
clo117425[3] = append;
clo117425[4] = kont116984;
clo117425[5] = a116888117141;
void* f116986117142 = encode_clo(clo117425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f116986117142;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117294 = encode_clo(alloc_clo(lam117294_fptr, 0));

void* lam117296_fptr() // lam117296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117297 = arg_buffer[1];
//reading env and args
void* a116887117139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env117297))[7];
//not do dummy comment
void* kont116984 = (decode_clo(env117297))[6];
//not do dummy comment
void* append = (decode_clo(env117297))[5];
//not do dummy comment
void* lst2 = (decode_clo(env117297))[4];
//not do dummy comment
void* cons = (decode_clo(env117297))[3];
//not do dummy comment
void* lst1 = (decode_clo(env117297))[2];
//not do dummy comment
void* car = (decode_clo(env117297))[1];

//if-clause
bool if_guard117426 = is_true(a116887117139);
if(if_guard117426)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116984);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116984))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo117428 = alloc_clo(lam117294_fptr, 6);

//setting env list
clo117428[1] = cons;
clo117428[2] = lst1;
clo117428[3] = lst2;
clo117428[4] = append;
clo117428[5] = kont116984;
clo117428[6] = cdr;
void* f116987117140 = encode_clo(clo117428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f116987117140;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam117296 = encode_clo(alloc_clo(lam117296_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117298 = arg_buffer[1];
//reading env and args
void* kont116984 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo117430 = alloc_clo(lam117296_fptr, 7);

//setting env list
clo117430[1] = car;
clo117430[2] = lst1;
clo117430[3] = cons;
clo117430[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo117430[5] = append;
clo117430[6] = kont116984;
clo117430[7] = cdr;
void* f116988117138 = encode_clo(clo117430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f116988117138;
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
void* _117299 = arg_buffer[1];
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

void* kont116989117146 = prim_car(lst);
void* lst117147 = prim_cdr(lst);
void* x116891117148 = apply_prim_hash(lst117147);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116989117146);
arg_buffer[2] = x116891117148;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116989117146))[0]);
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
void* _117300 = arg_buffer[1];
//reading env and args
void* kont116991 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x116892117149 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116991);
arg_buffer[2] = x116892117149;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116991))[0]);
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
void* _117301 = arg_buffer[1];
//reading env and args
void* kont116992 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x116893117150 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116992);
arg_buffer[2] = x116893117150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116992))[0]);
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
void* _117302 = arg_buffer[1];
//reading env and args
void* kont116993 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x116894117151 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116993);
arg_buffer[2] = x116894117151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116993))[0]);
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
void* _117303 = arg_buffer[1];
//reading env and args
void* kont116994 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x116895117152 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116994);
arg_buffer[2] = x116895117152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116994))[0]);
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
void* _117305 = arg_buffer[1];
//reading env and args
void* kont116995 = arg_buffer[2];
//Dummy comment
void* x116896117153 = encode_str(new(GC) std::string("random"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116995);
arg_buffer[2] = x116896117153;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116995))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam117306_fptr() // lam117306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env117307 = arg_buffer[1];
//reading env and args
void* x116897117155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont116996 = (decode_clo(env117307))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont116996);
arg_buffer[2] = x116897117155;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont116996))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam117306 = encode_clo(alloc_clo(lam117306_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _117308 = arg_buffer[1];
//reading env and args
void* kont116996 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo117432 = alloc_clo(lam117306_fptr, 1);

//setting env list
clo117432[1] = kont116996;
void* f116997117154 = encode_clo(clo117432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f116997117154;
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

