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
void* _91186 = arg_buffer[1];
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

void* kont9077890887 = prim_car(lst);
void* lst90888 = prim_cdr(lst);
void* x9056190889 = apply_prim__u43(lst90888);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9077890887);
arg_buffer[2] = x9056190889;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9077890887))[0]);
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
void* _91187 = arg_buffer[1];
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

void* kont9078090890 = prim_car(lst);
void* lst90891 = prim_cdr(lst);
void* x9056290892 = apply_prim__u45(lst90891);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9078090890);
arg_buffer[2] = x9056290892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078090890))[0]);
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
void* _91188 = arg_buffer[1];
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

void* kont9078290893 = prim_car(lst);
void* lst90894 = prim_cdr(lst);
void* x9056390895 = apply_prim__u42(lst90894);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9078290893);
arg_buffer[2] = x9056390895;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078290893))[0]);
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
void* _91189 = arg_buffer[1];
//reading env and args
void* kont90784 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9056490896 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90784);
arg_buffer[2] = x9056490896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90784))[0]);
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
void* _91190 = arg_buffer[1];
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

void* kont9078590897 = prim_car(lst);
void* lst90898 = prim_cdr(lst);
void* x9056590899 = apply_prim__u47(lst90898);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9078590897);
arg_buffer[2] = x9056590899;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078590897))[0]);
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
void* _91191 = arg_buffer[1];
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

void* kont9078790900 = prim_car(lst);
void* lst90901 = prim_cdr(lst);
void* x9056690902 = apply_prim__u61(lst90901);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9078790900);
arg_buffer[2] = x9056690902;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078790900))[0]);
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
void* _91192 = arg_buffer[1];
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

void* kont9078990903 = prim_car(lst);
void* lst90904 = prim_cdr(lst);
void* x9056790905 = apply_prim__u62(lst90904);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9078990903);
arg_buffer[2] = x9056790905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9078990903))[0]);
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
void* _91193 = arg_buffer[1];
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

void* kont9079190906 = prim_car(lst);
void* lst90907 = prim_cdr(lst);
void* x9056890908 = apply_prim__u60(lst90907);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9079190906);
arg_buffer[2] = x9056890908;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079190906))[0]);
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
void* _91194 = arg_buffer[1];
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

void* kont9079390909 = prim_car(lst);
void* lst90910 = prim_cdr(lst);
void* x9056990911 = apply_prim__u60_u61(lst90910);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9079390909);
arg_buffer[2] = x9056990911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079390909))[0]);
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
void* _91195 = arg_buffer[1];
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

void* kont9079590912 = prim_car(lst);
void* lst90913 = prim_cdr(lst);
void* x9057090914 = apply_prim__u62_u61(lst90913);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9079590912);
arg_buffer[2] = x9057090914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079590912))[0]);
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
void* _91196 = arg_buffer[1];
//reading env and args
void* kont90797 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9057190915 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90797);
arg_buffer[2] = x9057190915;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90797))[0]);
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
void* _91197 = arg_buffer[1];
//reading env and args
void* kont90798 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9057290916 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90798);
arg_buffer[2] = x9057290916;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90798))[0]);
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
void* _91198 = arg_buffer[1];
//reading env and args
void* kont90799 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9057390917 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90799);
arg_buffer[2] = x9057390917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90799))[0]);
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
void* _91199 = arg_buffer[1];
//reading env and args
void* kont90800 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9057490918 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90800);
arg_buffer[2] = x9057490918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90800))[0]);
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
void* _91200 = arg_buffer[1];
//reading env and args
void* kont90801 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9057590919 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90801);
arg_buffer[2] = x9057590919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90801))[0]);
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
void* _91201 = arg_buffer[1];
//reading env and args
void* kont90802 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9057690920 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90802);
arg_buffer[2] = x9057690920;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90802))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam91202_fptr() // lam91202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91203 = arg_buffer[1];
//reading env and args
void* a9057990924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9057790921 = (decode_clo(env91203))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env91203))[2];
//not do dummy comment
void* kont90803 = (decode_clo(env91203))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont90803;
arg_buffer[3] = a9057790921;
arg_buffer[4] = a9057990924;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91202 = encode_clo(alloc_clo(lam91202_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91206 = arg_buffer[1];
//reading env and args
void* kont90803 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar95440 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95440, "0", 10);
void* a9057790921 = encode_mpz(mpzvar95440);
mpz_t* mpzvar95441 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95441, "2", 10);
void* a9057890922 = encode_mpz(mpzvar95441);

//creating new closure instance
void** clo95443 = alloc_clo(lam91202_fptr, 3);

//setting env list
clo95443[1] = kont90803;
clo95443[2] = equal_u63;
clo95443[3] = a9057790921;
void* f9080490923 = encode_clo(clo95443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9080490923;
arg_buffer[3] = x;
arg_buffer[4] = a9057890922;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam91207_fptr() // lam91207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91208 = arg_buffer[1];
//reading env and args
void* a9058290928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9058090925 = (decode_clo(env91208))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env91208))[2];
//not do dummy comment
void* kont90805 = (decode_clo(env91208))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont90805;
arg_buffer[3] = a9058090925;
arg_buffer[4] = a9058290928;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91207 = encode_clo(alloc_clo(lam91207_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91211 = arg_buffer[1];
//reading env and args
void* kont90805 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar95444 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95444, "1", 10);
void* a9058090925 = encode_mpz(mpzvar95444);
mpz_t* mpzvar95445 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95445, "2", 10);
void* a9058190926 = encode_mpz(mpzvar95445);

//creating new closure instance
void** clo95447 = alloc_clo(lam91207_fptr, 3);

//setting env list
clo95447[1] = kont90805;
clo95447[2] = equal_u63;
clo95447[3] = a9058090925;
void* f9080690927 = encode_clo(clo95447);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9080690927;
arg_buffer[3] = x;
arg_buffer[4] = a9058190926;
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
void* _91212 = arg_buffer[1];
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

void* kont9080790929 = prim_car(x);
void* x90930 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9080790929);
arg_buffer[2] = x90930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9080790929))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam91215_fptr() // lam91215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91216 = arg_buffer[1];
//reading env and args
void* a9058890940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90809 = (decode_clo(env91216))[3];
//not do dummy comment
void* x = (decode_clo(env91216))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env91216))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont90809;
arg_buffer[3] = x;
arg_buffer[4] = a9058890940;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91215 = encode_clo(alloc_clo(lam91215_fptr, 0));

void* lam91217_fptr() // lam91217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91218 = arg_buffer[1];
//reading env and args
void* a9058690937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91218))[5];
//not do dummy comment
void* x = (decode_clo(env91218))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env91218))[3];
//not do dummy comment
void* cdr = (decode_clo(env91218))[2];
//not do dummy comment
void* kont90809 = (decode_clo(env91218))[1];

//if-clause
bool if_guard95448 = is_true(a9058690937);
if(if_guard95448)
{
void* x9058790938 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90809);
arg_buffer[2] = x9058790938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo95450 = alloc_clo(lam91215_fptr, 3);

//setting env list
clo95450[1] = member_u63;
clo95450[2] = x;
clo95450[3] = kont90809;
void* f9081090939 = encode_clo(clo95450);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9081090939;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91217 = encode_clo(alloc_clo(lam91217_fptr, 0));

void* lam91219_fptr() // lam91219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91220 = arg_buffer[1];
//reading env and args
void* a9058590935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91220))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env91220))[5];
//not do dummy comment
void* x = (decode_clo(env91220))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env91220))[3];
//not do dummy comment
void* cdr = (decode_clo(env91220))[2];
//not do dummy comment
void* kont90809 = (decode_clo(env91220))[1];

//creating new closure instance
void** clo95452 = alloc_clo(lam91217_fptr, 5);

//setting env list
clo95452[1] = kont90809;
clo95452[2] = cdr;
clo95452[3] = member_u63;
clo95452[4] = x;
clo95452[5] = lst;
void* f9081190936 = encode_clo(clo95452);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9081190936;
arg_buffer[3] = a9058590935;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91219 = encode_clo(alloc_clo(lam91219_fptr, 0));

void* lam91221_fptr() // lam91221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91222 = arg_buffer[1];
//reading env and args
void* a9058390932 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91222))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env91222))[6];
//not do dummy comment
void* x = (decode_clo(env91222))[5];
//not do dummy comment
void* car = (decode_clo(env91222))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env91222))[3];
//not do dummy comment
void* cdr = (decode_clo(env91222))[2];
//not do dummy comment
void* kont90809 = (decode_clo(env91222))[1];

//if-clause
bool if_guard95453 = is_true(a9058390932);
if(if_guard95453)
{
void* x9058490933 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90809);
arg_buffer[2] = x9058490933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90809))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo95455 = alloc_clo(lam91219_fptr, 6);

//setting env list
clo95455[1] = kont90809;
clo95455[2] = cdr;
clo95455[3] = member_u63;
clo95455[4] = x;
clo95455[5] = equal_u63;
clo95455[6] = lst;
void* f9081290934 = encode_clo(clo95455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9081290934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91221 = encode_clo(alloc_clo(lam91221_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91223 = arg_buffer[1];
//reading env and args
void* kont90809 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo95457 = alloc_clo(lam91221_fptr, 7);

//setting env list
clo95457[1] = kont90809;
clo95457[2] = cdr;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo95457[3] = member_u63;
clo95457[4] = car;
clo95457[5] = x;
clo95457[6] = equal_u63;
clo95457[7] = lst;
void* f9081390931 = encode_clo(clo95457);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9081390931;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam91224_fptr() // lam91224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91225 = arg_buffer[1];
//reading env and args
void* a9059290948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90814 = (decode_clo(env91225))[4];
//not do dummy comment
void* a9059190946 = (decode_clo(env91225))[3];
//not do dummy comment
void* fun = (decode_clo(env91225))[2];
//not do dummy comment
void* foldl = (decode_clo(env91225))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont90814;
arg_buffer[3] = fun;
arg_buffer[4] = a9059190946;
arg_buffer[5] = a9059290948;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91224 = encode_clo(alloc_clo(lam91224_fptr, 0));

void* lam91226_fptr() // lam91226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91227 = arg_buffer[1];
//reading env and args
void* a9059190946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91227))[5];
//not do dummy comment
void* lst = (decode_clo(env91227))[4];
//not do dummy comment
void* kont90814 = (decode_clo(env91227))[3];
//not do dummy comment
void* fun = (decode_clo(env91227))[2];
//not do dummy comment
void* foldl = (decode_clo(env91227))[1];

//creating new closure instance
void** clo95459 = alloc_clo(lam91224_fptr, 4);

//setting env list
clo95459[1] = foldl;
clo95459[2] = fun;
clo95459[3] = a9059190946;
clo95459[4] = kont90814;
void* f9081590947 = encode_clo(clo95459);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9081590947;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91226 = encode_clo(alloc_clo(lam91226_fptr, 0));

void* lam91228_fptr() // lam91228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91229 = arg_buffer[1];
//reading env and args
void* a9059090944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91229))[6];
//not do dummy comment
void* lst = (decode_clo(env91229))[5];
//not do dummy comment
void* kont90814 = (decode_clo(env91229))[4];
//not do dummy comment
void* fun = (decode_clo(env91229))[3];
//not do dummy comment
void* acc = (decode_clo(env91229))[2];
//not do dummy comment
void* foldl = (decode_clo(env91229))[1];

//creating new closure instance
void** clo95461 = alloc_clo(lam91226_fptr, 5);

//setting env list
clo95461[1] = foldl;
clo95461[2] = fun;
clo95461[3] = kont90814;
clo95461[4] = lst;
clo95461[5] = cdr;
void* f9081690945 = encode_clo(clo95461);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9081690945;
arg_buffer[3] = a9059090944;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91228 = encode_clo(alloc_clo(lam91228_fptr, 0));

void* lam91230_fptr() // lam91230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91231 = arg_buffer[1];
//reading env and args
void* a9058990942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91231))[7];
//not do dummy comment
void* lst = (decode_clo(env91231))[6];
//not do dummy comment
void* kont90814 = (decode_clo(env91231))[5];
//not do dummy comment
void* fun = (decode_clo(env91231))[4];
//not do dummy comment
void* acc = (decode_clo(env91231))[3];
//not do dummy comment
void* car = (decode_clo(env91231))[2];
//not do dummy comment
void* foldl = (decode_clo(env91231))[1];

//if-clause
bool if_guard95462 = is_true(a9058990942);
if(if_guard95462)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90814);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90814))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo95464 = alloc_clo(lam91228_fptr, 6);

//setting env list
clo95464[1] = foldl;
clo95464[2] = acc;
clo95464[3] = fun;
clo95464[4] = kont90814;
clo95464[5] = lst;
clo95464[6] = cdr;
void* f9081790943 = encode_clo(clo95464);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9081790943;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91230 = encode_clo(alloc_clo(lam91230_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91232 = arg_buffer[1];
//reading env and args
void* kont90814 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo95466 = alloc_clo(lam91230_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo95466[1] = foldl;
clo95466[2] = car;
clo95466[3] = acc;
clo95466[4] = fun;
clo95466[5] = kont90814;
clo95466[6] = lst;
clo95466[7] = cdr;
void* f9081890941 = encode_clo(clo95466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9081890941;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam91233_fptr() // lam91233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91234 = arg_buffer[1];
//reading env and args
void* a9059690956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91234))[3];
//not do dummy comment
void* kont90819 = (decode_clo(env91234))[2];
//not do dummy comment
void* a9059490952 = (decode_clo(env91234))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont90819;
arg_buffer[3] = a9059490952;
arg_buffer[4] = a9059690956;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91233 = encode_clo(alloc_clo(lam91233_fptr, 0));

void* lam91235_fptr() // lam91235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91236 = arg_buffer[1];
//reading env and args
void* a9059590954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91236))[5];
//not do dummy comment
void* kont90819 = (decode_clo(env91236))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91236))[3];
//not do dummy comment
void* cons = (decode_clo(env91236))[2];
//not do dummy comment
void* a9059490952 = (decode_clo(env91236))[1];

//creating new closure instance
void** clo95468 = alloc_clo(lam91233_fptr, 3);

//setting env list
clo95468[1] = a9059490952;
clo95468[2] = kont90819;
clo95468[3] = reverse_u45helper;
void* f9082090955 = encode_clo(clo95468);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9082090955;
arg_buffer[3] = a9059590954;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91235 = encode_clo(alloc_clo(lam91235_fptr, 0));

void* lam91237_fptr() // lam91237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91238 = arg_buffer[1];
//reading env and args
void* a9059490952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91238))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91238))[5];
//not do dummy comment
void* kont90819 = (decode_clo(env91238))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91238))[3];
//not do dummy comment
void* car = (decode_clo(env91238))[2];
//not do dummy comment
void* cons = (decode_clo(env91238))[1];

//creating new closure instance
void** clo95470 = alloc_clo(lam91235_fptr, 5);

//setting env list
clo95470[1] = a9059490952;
clo95470[2] = cons;
clo95470[3] = lst2;
clo95470[4] = kont90819;
clo95470[5] = reverse_u45helper;
void* f9082190953 = encode_clo(clo95470);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9082190953;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91237 = encode_clo(alloc_clo(lam91237_fptr, 0));

void* lam91239_fptr() // lam91239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91240 = arg_buffer[1];
//reading env and args
void* a9059390950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91240))[7];
//not do dummy comment
void* lst = (decode_clo(env91240))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91240))[5];
//not do dummy comment
void* kont90819 = (decode_clo(env91240))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91240))[3];
//not do dummy comment
void* car = (decode_clo(env91240))[2];
//not do dummy comment
void* cons = (decode_clo(env91240))[1];

//if-clause
bool if_guard95471 = is_true(a9059390950);
if(if_guard95471)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90819);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90819))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo95473 = alloc_clo(lam91237_fptr, 6);

//setting env list
clo95473[1] = cons;
clo95473[2] = car;
clo95473[3] = lst2;
clo95473[4] = kont90819;
clo95473[5] = reverse_u45helper;
clo95473[6] = lst;
void* f9082290951 = encode_clo(clo95473);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9082290951;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91239 = encode_clo(alloc_clo(lam91239_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91241 = arg_buffer[1];
//reading env and args
void* kont90819 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo95475 = alloc_clo(lam91239_fptr, 7);

//setting env list
clo95475[1] = cons;
clo95475[2] = car;
clo95475[3] = lst2;
clo95475[4] = kont90819;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo95475[5] = reverse_u45helper;
clo95475[6] = lst;
clo95475[7] = cdr;
void* f9082390949 = encode_clo(clo95475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9082390949;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam91242_fptr() // lam91242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91243 = arg_buffer[1];
//reading env and args
void* a9059790958 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91243))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env91243))[2];
//not do dummy comment
void* kont90824 = (decode_clo(env91243))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont90824;
arg_buffer[3] = lst;
arg_buffer[4] = a9059790958;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91242 = encode_clo(alloc_clo(lam91242_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91244 = arg_buffer[1];
//reading env and args
void* kont90824 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo95477 = alloc_clo(lam91242_fptr, 3);

//setting env list
clo95477[1] = kont90824;
clo95477[2] = reverse_u45helper;
clo95477[3] = lst;
void* f9082590957 = encode_clo(clo95477);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9082590957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam91245_fptr() // lam91245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91246 = arg_buffer[1];
//reading env and args
void* x9060090963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90826 = (decode_clo(env91246))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90826);
arg_buffer[2] = x9060090963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90826))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91245 = encode_clo(alloc_clo(lam91245_fptr, 0));

void* lam91247_fptr() // lam91247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91248 = arg_buffer[1];
//reading env and args
void* a9060590972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90826 = (decode_clo(env91248))[4];
//not do dummy comment
void* a9060390968 = (decode_clo(env91248))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env91248))[2];
//not do dummy comment
void* a9060190965 = (decode_clo(env91248))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont90826;
arg_buffer[3] = a9060190965;
arg_buffer[4] = a9060390968;
arg_buffer[5] = a9060590972;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91247 = encode_clo(alloc_clo(lam91247_fptr, 0));

void* lam91249_fptr() // lam91249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91250 = arg_buffer[1];
//reading env and args
void* a9060490970 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90826 = (decode_clo(env91250))[6];
//not do dummy comment
void* cons = (decode_clo(env91250))[5];
//not do dummy comment
void* a9060390968 = (decode_clo(env91250))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env91250))[3];
//not do dummy comment
void* a9060190965 = (decode_clo(env91250))[2];
//not do dummy comment
void* lst2 = (decode_clo(env91250))[1];

//creating new closure instance
void** clo95479 = alloc_clo(lam91247_fptr, 4);

//setting env list
clo95479[1] = a9060190965;
clo95479[2] = take_u45helper;
clo95479[3] = a9060390968;
clo95479[4] = kont90826;
void* f9082890971 = encode_clo(clo95479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9082890971;
arg_buffer[3] = a9060490970;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91249 = encode_clo(alloc_clo(lam91249_fptr, 0));

void* lam91251_fptr() // lam91251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91252 = arg_buffer[1];
//reading env and args
void* a9060390968 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90826 = (decode_clo(env91252))[7];
//not do dummy comment
void* lst = (decode_clo(env91252))[6];
//not do dummy comment
void* car = (decode_clo(env91252))[5];
//not do dummy comment
void* cons = (decode_clo(env91252))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env91252))[3];
//not do dummy comment
void* a9060190965 = (decode_clo(env91252))[2];
//not do dummy comment
void* lst2 = (decode_clo(env91252))[1];

//creating new closure instance
void** clo95481 = alloc_clo(lam91249_fptr, 6);

//setting env list
clo95481[1] = lst2;
clo95481[2] = a9060190965;
clo95481[3] = take_u45helper;
clo95481[4] = a9060390968;
clo95481[5] = cons;
clo95481[6] = kont90826;
void* f9082990969 = encode_clo(clo95481);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9082990969;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91251 = encode_clo(alloc_clo(lam91251_fptr, 0));

void* lam91254_fptr() // lam91254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91255 = arg_buffer[1];
//reading env and args
void* a9060190965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90826 = (decode_clo(env91255))[8];
//not do dummy comment
void* lst = (decode_clo(env91255))[7];
//not do dummy comment
void* cons = (decode_clo(env91255))[6];
//not do dummy comment
void* _u45 = (decode_clo(env91255))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env91255))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91255))[3];
//not do dummy comment
void* n = (decode_clo(env91255))[2];
//not do dummy comment
void* car = (decode_clo(env91255))[1];
mpz_t* mpzvar95482 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95482, "1", 10);
void* a9060290966 = encode_mpz(mpzvar95482);

//creating new closure instance
void** clo95484 = alloc_clo(lam91251_fptr, 7);

//setting env list
clo95484[1] = lst2;
clo95484[2] = a9060190965;
clo95484[3] = take_u45helper;
clo95484[4] = cons;
clo95484[5] = car;
clo95484[6] = lst;
clo95484[7] = kont90826;
void* f9083090967 = encode_clo(clo95484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9083090967;
arg_buffer[3] = n;
arg_buffer[4] = a9060290966;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91254 = encode_clo(alloc_clo(lam91254_fptr, 0));

void* lam91256_fptr() // lam91256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91257 = arg_buffer[1];
//reading env and args
void* a9059990961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91257))[10];
//not do dummy comment
void* kont90826 = (decode_clo(env91257))[9];
//not do dummy comment
void* lst = (decode_clo(env91257))[8];
//not do dummy comment
void* reverse = (decode_clo(env91257))[7];
//not do dummy comment
void* cons = (decode_clo(env91257))[6];
//not do dummy comment
void* _u45 = (decode_clo(env91257))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env91257))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91257))[3];
//not do dummy comment
void* n = (decode_clo(env91257))[2];
//not do dummy comment
void* car = (decode_clo(env91257))[1];

//if-clause
bool if_guard95485 = is_true(a9059990961);
if(if_guard95485)
{

//creating new closure instance
void** clo95487 = alloc_clo(lam91245_fptr, 1);

//setting env list
clo95487[1] = kont90826;
void* f9082790962 = encode_clo(clo95487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9082790962;
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
void** clo95489 = alloc_clo(lam91254_fptr, 8);

//setting env list
clo95489[1] = car;
clo95489[2] = n;
clo95489[3] = lst2;
clo95489[4] = take_u45helper;
clo95489[5] = _u45;
clo95489[6] = cons;
clo95489[7] = lst;
clo95489[8] = kont90826;
void* f9083190964 = encode_clo(clo95489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9083190964;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91256 = encode_clo(alloc_clo(lam91256_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91259 = arg_buffer[1];
//reading env and args
void* kont90826 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar95490 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95490, "0", 10);
void* a9059890959 = encode_mpz(mpzvar95490);

//creating new closure instance
void** clo95492 = alloc_clo(lam91256_fptr, 10);

//setting env list
clo95492[1] = car;
clo95492[2] = n;
clo95492[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo95492[4] = take_u45helper;
clo95492[5] = _u45;
clo95492[6] = cons;
clo95492[7] = reverse;
clo95492[8] = lst;
clo95492[9] = kont90826;
clo95492[10] = cdr;
void* f9083290960 = encode_clo(clo95492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9083290960;
arg_buffer[3] = n;
arg_buffer[4] = a9059890959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam91260_fptr() // lam91260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91261 = arg_buffer[1];
//reading env and args
void* a9060690974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91261))[4];
//not do dummy comment
void* kont90833 = (decode_clo(env91261))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env91261))[2];
//not do dummy comment
void* n = (decode_clo(env91261))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont90833;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9060690974;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91260 = encode_clo(alloc_clo(lam91260_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91262 = arg_buffer[1];
//reading env and args
void* kont90833 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo95494 = alloc_clo(lam91260_fptr, 4);

//setting env list
clo95494[1] = n;
clo95494[2] = take_u45helper;
clo95494[3] = kont90833;
clo95494[4] = lst;
void* f9083490973 = encode_clo(clo95494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9083490973;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam91264_fptr() // lam91264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91265 = arg_buffer[1];
//reading env and args
void* a9061190982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90835 = (decode_clo(env91265))[3];
//not do dummy comment
void* _u43 = (decode_clo(env91265))[2];
//not do dummy comment
void* a9060990978 = (decode_clo(env91265))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont90835;
arg_buffer[3] = a9060990978;
arg_buffer[4] = a9061190982;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91264 = encode_clo(alloc_clo(lam91264_fptr, 0));

void* lam91266_fptr() // lam91266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91267 = arg_buffer[1];
//reading env and args
void* a9061090980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env91267))[4];
//not do dummy comment
void* kont90835 = (decode_clo(env91267))[3];
//not do dummy comment
void* _u43 = (decode_clo(env91267))[2];
//not do dummy comment
void* a9060990978 = (decode_clo(env91267))[1];

//creating new closure instance
void** clo95496 = alloc_clo(lam91264_fptr, 3);

//setting env list
clo95496[1] = a9060990978;
clo95496[2] = _u43;
clo95496[3] = kont90835;
void* f9083690981 = encode_clo(clo95496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9083690981;
arg_buffer[3] = a9061090980;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91266 = encode_clo(alloc_clo(lam91266_fptr, 0));

void* lam91269_fptr() // lam91269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91270 = arg_buffer[1];
//reading env and args
void* a9060790976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91270))[5];
//not do dummy comment
void* lst = (decode_clo(env91270))[4];
//not do dummy comment
void* length = (decode_clo(env91270))[3];
//not do dummy comment
void* _u43 = (decode_clo(env91270))[2];
//not do dummy comment
void* kont90835 = (decode_clo(env91270))[1];

//if-clause
bool if_guard95497 = is_true(a9060790976);
if(if_guard95497)
{
mpz_t* mpzvar95498 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95498, "0", 10);
void* x9060890977 = encode_mpz(mpzvar95498);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90835);
arg_buffer[2] = x9060890977;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90835))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar95499 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95499, "1", 10);
void* a9060990978 = encode_mpz(mpzvar95499);

//creating new closure instance
void** clo95501 = alloc_clo(lam91266_fptr, 4);

//setting env list
clo95501[1] = a9060990978;
clo95501[2] = _u43;
clo95501[3] = kont90835;
clo95501[4] = length;
void* f9083790979 = encode_clo(clo95501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9083790979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91269 = encode_clo(alloc_clo(lam91269_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91271 = arg_buffer[1];
//reading env and args
void* kont90835 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo95503 = alloc_clo(lam91269_fptr, 5);

//setting env list
clo95503[1] = kont90835;
clo95503[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo95503[3] = length;
clo95503[4] = lst;
clo95503[5] = cdr;
void* f9083890975 = encode_clo(clo95503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9083890975;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam91272_fptr() // lam91272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91273 = arg_buffer[1];
//reading env and args
void* x9061390986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90839 = (decode_clo(env91273))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90839);
arg_buffer[2] = x9061390986;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90839))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91272 = encode_clo(alloc_clo(lam91272_fptr, 0));

void* lam91274_fptr() // lam91274 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91275 = arg_buffer[1];
//reading env and args
void* a9061790994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9061590990 = (decode_clo(env91275))[3];
//not do dummy comment
void* cons = (decode_clo(env91275))[2];
//not do dummy comment
void* kont90839 = (decode_clo(env91275))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont90839;
arg_buffer[3] = a9061590990;
arg_buffer[4] = a9061790994;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91274 = encode_clo(alloc_clo(lam91274_fptr, 0));

void* lam91276_fptr() // lam91276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91277 = arg_buffer[1];
//reading env and args
void* a9061690992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env91277))[5];
//not do dummy comment
void* map = (decode_clo(env91277))[4];
//not do dummy comment
void* a9061590990 = (decode_clo(env91277))[3];
//not do dummy comment
void* cons = (decode_clo(env91277))[2];
//not do dummy comment
void* kont90839 = (decode_clo(env91277))[1];

//creating new closure instance
void** clo95505 = alloc_clo(lam91274_fptr, 3);

//setting env list
clo95505[1] = kont90839;
clo95505[2] = cons;
clo95505[3] = a9061590990;
void* f9084190993 = encode_clo(clo95505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9084190993;
arg_buffer[3] = proc;
arg_buffer[4] = a9061690992;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91276 = encode_clo(alloc_clo(lam91276_fptr, 0));

void* lam91278_fptr() // lam91278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91279 = arg_buffer[1];
//reading env and args
void* a9061590990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91279))[6];
//not do dummy comment
void* lst = (decode_clo(env91279))[5];
//not do dummy comment
void* map = (decode_clo(env91279))[4];
//not do dummy comment
void* proc = (decode_clo(env91279))[3];
//not do dummy comment
void* cons = (decode_clo(env91279))[2];
//not do dummy comment
void* kont90839 = (decode_clo(env91279))[1];

//creating new closure instance
void** clo95507 = alloc_clo(lam91276_fptr, 5);

//setting env list
clo95507[1] = kont90839;
clo95507[2] = cons;
clo95507[3] = a9061590990;
clo95507[4] = map;
clo95507[5] = proc;
void* f9084290991 = encode_clo(clo95507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9084290991;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91278 = encode_clo(alloc_clo(lam91278_fptr, 0));

void* lam91280_fptr() // lam91280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91281 = arg_buffer[1];
//reading env and args
void* a9061490988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91281))[6];
//not do dummy comment
void* lst = (decode_clo(env91281))[5];
//not do dummy comment
void* map = (decode_clo(env91281))[4];
//not do dummy comment
void* proc = (decode_clo(env91281))[3];
//not do dummy comment
void* cons = (decode_clo(env91281))[2];
//not do dummy comment
void* kont90839 = (decode_clo(env91281))[1];

//creating new closure instance
void** clo95509 = alloc_clo(lam91278_fptr, 6);

//setting env list
clo95509[1] = kont90839;
clo95509[2] = cons;
clo95509[3] = proc;
clo95509[4] = map;
clo95509[5] = lst;
clo95509[6] = cdr;
void* f9084390989 = encode_clo(clo95509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9084390989;
arg_buffer[3] = a9061490988;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91280 = encode_clo(alloc_clo(lam91280_fptr, 0));

void* lam91282_fptr() // lam91282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91283 = arg_buffer[1];
//reading env and args
void* a9061290984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91283))[8];
//not do dummy comment
void* map = (decode_clo(env91283))[7];
//not do dummy comment
void* proc = (decode_clo(env91283))[6];
//not do dummy comment
void* car = (decode_clo(env91283))[5];
//not do dummy comment
void* list = (decode_clo(env91283))[4];
//not do dummy comment
void* cdr = (decode_clo(env91283))[3];
//not do dummy comment
void* cons = (decode_clo(env91283))[2];
//not do dummy comment
void* kont90839 = (decode_clo(env91283))[1];

//if-clause
bool if_guard95510 = is_true(a9061290984);
if(if_guard95510)
{

//creating new closure instance
void** clo95512 = alloc_clo(lam91272_fptr, 1);

//setting env list
clo95512[1] = kont90839;
void* f9084090985 = encode_clo(clo95512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9084090985;
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
void** clo95514 = alloc_clo(lam91280_fptr, 6);

//setting env list
clo95514[1] = kont90839;
clo95514[2] = cons;
clo95514[3] = proc;
clo95514[4] = map;
clo95514[5] = lst;
clo95514[6] = cdr;
void* f9084490987 = encode_clo(clo95514);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9084490987;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91282 = encode_clo(alloc_clo(lam91282_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91284 = arg_buffer[1];
//reading env and args
void* kont90839 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo95516 = alloc_clo(lam91282_fptr, 8);

//setting env list
clo95516[1] = kont90839;
clo95516[2] = cons;
clo95516[3] = cdr;
clo95516[4] = list;
clo95516[5] = car;
clo95516[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo95516[7] = map;
clo95516[8] = lst;
void* f9084590983 = encode_clo(clo95516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9084590983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam91285_fptr() // lam91285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91286 = arg_buffer[1];
//reading env and args
void* x9061990998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90846 = (decode_clo(env91286))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90846);
arg_buffer[2] = x9061990998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90846))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91285 = encode_clo(alloc_clo(lam91285_fptr, 0));

void* lam91287_fptr() // lam91287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91288 = arg_buffer[1];
//reading env and args
void* a9062491008 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9062291004 = (decode_clo(env91288))[3];
//not do dummy comment
void* kont90846 = (decode_clo(env91288))[2];
//not do dummy comment
void* cons = (decode_clo(env91288))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont90846;
arg_buffer[3] = a9062291004;
arg_buffer[4] = a9062491008;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91287 = encode_clo(alloc_clo(lam91287_fptr, 0));

void* lam91289_fptr() // lam91289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91290 = arg_buffer[1];
//reading env and args
void* a9062391006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9062291004 = (decode_clo(env91290))[5];
//not do dummy comment
void* kont90846 = (decode_clo(env91290))[4];
//not do dummy comment
void* op = (decode_clo(env91290))[3];
//not do dummy comment
void* filter = (decode_clo(env91290))[2];
//not do dummy comment
void* cons = (decode_clo(env91290))[1];

//creating new closure instance
void** clo95518 = alloc_clo(lam91287_fptr, 3);

//setting env list
clo95518[1] = cons;
clo95518[2] = kont90846;
clo95518[3] = a9062291004;
void* f9084891007 = encode_clo(clo95518);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9084891007;
arg_buffer[3] = op;
arg_buffer[4] = a9062391006;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91289 = encode_clo(alloc_clo(lam91289_fptr, 0));

void* lam91291_fptr() // lam91291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91292 = arg_buffer[1];
//reading env and args
void* a9062291004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91292))[6];
//not do dummy comment
void* lst = (decode_clo(env91292))[5];
//not do dummy comment
void* kont90846 = (decode_clo(env91292))[4];
//not do dummy comment
void* op = (decode_clo(env91292))[3];
//not do dummy comment
void* filter = (decode_clo(env91292))[2];
//not do dummy comment
void* cons = (decode_clo(env91292))[1];

//creating new closure instance
void** clo95520 = alloc_clo(lam91289_fptr, 5);

//setting env list
clo95520[1] = cons;
clo95520[2] = filter;
clo95520[3] = op;
clo95520[4] = kont90846;
clo95520[5] = a9062291004;
void* f9084991005 = encode_clo(clo95520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9084991005;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91291 = encode_clo(alloc_clo(lam91291_fptr, 0));

void* lam91293_fptr() // lam91293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91294 = arg_buffer[1];
//reading env and args
void* a9062591010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90846 = (decode_clo(env91294))[3];
//not do dummy comment
void* op = (decode_clo(env91294))[2];
//not do dummy comment
void* filter = (decode_clo(env91294))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont90846;
arg_buffer[3] = op;
arg_buffer[4] = a9062591010;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91293 = encode_clo(alloc_clo(lam91293_fptr, 0));

void* lam91295_fptr() // lam91295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91296 = arg_buffer[1];
//reading env and args
void* a9062191002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91296))[7];
//not do dummy comment
void* lst = (decode_clo(env91296))[6];
//not do dummy comment
void* kont90846 = (decode_clo(env91296))[5];
//not do dummy comment
void* op = (decode_clo(env91296))[4];
//not do dummy comment
void* cons = (decode_clo(env91296))[3];
//not do dummy comment
void* filter = (decode_clo(env91296))[2];
//not do dummy comment
void* car = (decode_clo(env91296))[1];

//if-clause
bool if_guard95521 = is_true(a9062191002);
if(if_guard95521)
{

//creating new closure instance
void** clo95523 = alloc_clo(lam91291_fptr, 6);

//setting env list
clo95523[1] = cons;
clo95523[2] = filter;
clo95523[3] = op;
clo95523[4] = kont90846;
clo95523[5] = lst;
clo95523[6] = cdr;
void* f9085091003 = encode_clo(clo95523);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9085091003;
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
void** clo95525 = alloc_clo(lam91293_fptr, 3);

//setting env list
clo95525[1] = filter;
clo95525[2] = op;
clo95525[3] = kont90846;
void* f9085191009 = encode_clo(clo95525);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9085191009;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91295 = encode_clo(alloc_clo(lam91295_fptr, 0));

void* lam91297_fptr() // lam91297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91298 = arg_buffer[1];
//reading env and args
void* a9062091000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91298))[7];
//not do dummy comment
void* lst = (decode_clo(env91298))[6];
//not do dummy comment
void* kont90846 = (decode_clo(env91298))[5];
//not do dummy comment
void* op = (decode_clo(env91298))[4];
//not do dummy comment
void* cons = (decode_clo(env91298))[3];
//not do dummy comment
void* filter = (decode_clo(env91298))[2];
//not do dummy comment
void* car = (decode_clo(env91298))[1];

//creating new closure instance
void** clo95527 = alloc_clo(lam91295_fptr, 7);

//setting env list
clo95527[1] = car;
clo95527[2] = filter;
clo95527[3] = cons;
clo95527[4] = op;
clo95527[5] = kont90846;
clo95527[6] = lst;
clo95527[7] = cdr;
void* f9085291001 = encode_clo(clo95527);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9085291001;
arg_buffer[3] = a9062091000;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91297 = encode_clo(alloc_clo(lam91297_fptr, 0));

void* lam91299_fptr() // lam91299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91300 = arg_buffer[1];
//reading env and args
void* a9061890996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env91300))[8];
//not do dummy comment
void* kont90846 = (decode_clo(env91300))[7];
//not do dummy comment
void* op = (decode_clo(env91300))[6];
//not do dummy comment
void* cons = (decode_clo(env91300))[5];
//not do dummy comment
void* list = (decode_clo(env91300))[4];
//not do dummy comment
void* cdr = (decode_clo(env91300))[3];
//not do dummy comment
void* filter = (decode_clo(env91300))[2];
//not do dummy comment
void* car = (decode_clo(env91300))[1];

//if-clause
bool if_guard95528 = is_true(a9061890996);
if(if_guard95528)
{

//creating new closure instance
void** clo95530 = alloc_clo(lam91285_fptr, 1);

//setting env list
clo95530[1] = kont90846;
void* f9084790997 = encode_clo(clo95530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9084790997;
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
void** clo95532 = alloc_clo(lam91297_fptr, 7);

//setting env list
clo95532[1] = car;
clo95532[2] = filter;
clo95532[3] = cons;
clo95532[4] = op;
clo95532[5] = kont90846;
clo95532[6] = lst;
clo95532[7] = cdr;
void* f9085390999 = encode_clo(clo95532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9085390999;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91299 = encode_clo(alloc_clo(lam91299_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91301 = arg_buffer[1];
//reading env and args
void* kont90846 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo95534 = alloc_clo(lam91299_fptr, 8);

//setting env list
clo95534[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo95534[2] = filter;
clo95534[3] = cdr;
clo95534[4] = list;
clo95534[5] = cons;
clo95534[6] = op;
clo95534[7] = kont90846;
clo95534[8] = lst;
void* f9085490995 = encode_clo(clo95534);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9085490995;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam91302_fptr() // lam91302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91303 = arg_buffer[1];
//reading env and args
void* a9063091018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env91303))[3];
//not do dummy comment
void* kont90855 = (decode_clo(env91303))[2];
//not do dummy comment
void* a9062891015 = (decode_clo(env91303))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont90855;
arg_buffer[3] = a9062891015;
arg_buffer[4] = a9063091018;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91302 = encode_clo(alloc_clo(lam91302_fptr, 0));

void* lam91305_fptr() // lam91305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91306 = arg_buffer[1];
//reading env and args
void* a9062891015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env91306))[4];
//not do dummy comment
void* n = (decode_clo(env91306))[3];
//not do dummy comment
void* kont90855 = (decode_clo(env91306))[2];
//not do dummy comment
void* _u45 = (decode_clo(env91306))[1];
mpz_t* mpzvar95535 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95535, "1", 10);
void* a9062991016 = encode_mpz(mpzvar95535);

//creating new closure instance
void** clo95537 = alloc_clo(lam91302_fptr, 3);

//setting env list
clo95537[1] = a9062891015;
clo95537[2] = kont90855;
clo95537[3] = drop;
void* f9085691017 = encode_clo(clo95537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9085691017;
arg_buffer[3] = n;
arg_buffer[4] = a9062991016;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91305 = encode_clo(alloc_clo(lam91305_fptr, 0));

void* lam91307_fptr() // lam91307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91308 = arg_buffer[1];
//reading env and args
void* a9062791013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91308))[6];
//not do dummy comment
void* n = (decode_clo(env91308))[5];
//not do dummy comment
void* kont90855 = (decode_clo(env91308))[4];
//not do dummy comment
void* _u45 = (decode_clo(env91308))[3];
//not do dummy comment
void* lst = (decode_clo(env91308))[2];
//not do dummy comment
void* drop = (decode_clo(env91308))[1];

//if-clause
bool if_guard95538 = is_true(a9062791013);
if(if_guard95538)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90855);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90855))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo95540 = alloc_clo(lam91305_fptr, 4);

//setting env list
clo95540[1] = _u45;
clo95540[2] = kont90855;
clo95540[3] = n;
clo95540[4] = drop;
void* f9085791014 = encode_clo(clo95540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9085791014;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91307 = encode_clo(alloc_clo(lam91307_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91310 = arg_buffer[1];
//reading env and args
void* kont90855 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar95541 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95541, "0", 10);
void* a9062691011 = encode_mpz(mpzvar95541);

//creating new closure instance
void** clo95543 = alloc_clo(lam91307_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo95543[1] = drop;
clo95543[2] = lst;
clo95543[3] = _u45;
clo95543[4] = kont90855;
clo95543[5] = n;
clo95543[6] = cdr;
void* f9085891012 = encode_clo(clo95543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9085891012;
arg_buffer[3] = n;
arg_buffer[4] = a9062691011;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam91311_fptr() // lam91311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91312 = arg_buffer[1];
//reading env and args
void* a9063491026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90859 = (decode_clo(env91312))[3];
//not do dummy comment
void* a9063291022 = (decode_clo(env91312))[2];
//not do dummy comment
void* proc = (decode_clo(env91312))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont90859;
arg_buffer[3] = a9063291022;
arg_buffer[4] = a9063491026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91311 = encode_clo(alloc_clo(lam91311_fptr, 0));

void* lam91313_fptr() // lam91313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91314 = arg_buffer[1];
//reading env and args
void* a9063391024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90859 = (decode_clo(env91314))[5];
//not do dummy comment
void* foldr = (decode_clo(env91314))[4];
//not do dummy comment
void* a9063291022 = (decode_clo(env91314))[3];
//not do dummy comment
void* proc = (decode_clo(env91314))[2];
//not do dummy comment
void* acc = (decode_clo(env91314))[1];

//creating new closure instance
void** clo95545 = alloc_clo(lam91311_fptr, 3);

//setting env list
clo95545[1] = proc;
clo95545[2] = a9063291022;
clo95545[3] = kont90859;
void* f9086091025 = encode_clo(clo95545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9086091025;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9063391024;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91313 = encode_clo(alloc_clo(lam91313_fptr, 0));

void* lam91315_fptr() // lam91315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91316 = arg_buffer[1];
//reading env and args
void* a9063291022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91316))[6];
//not do dummy comment
void* kont90859 = (decode_clo(env91316))[5];
//not do dummy comment
void* foldr = (decode_clo(env91316))[4];
//not do dummy comment
void* lst = (decode_clo(env91316))[3];
//not do dummy comment
void* proc = (decode_clo(env91316))[2];
//not do dummy comment
void* acc = (decode_clo(env91316))[1];

//creating new closure instance
void** clo95547 = alloc_clo(lam91313_fptr, 5);

//setting env list
clo95547[1] = acc;
clo95547[2] = proc;
clo95547[3] = a9063291022;
clo95547[4] = foldr;
clo95547[5] = kont90859;
void* f9086191023 = encode_clo(clo95547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9086191023;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91315 = encode_clo(alloc_clo(lam91315_fptr, 0));

void* lam91317_fptr() // lam91317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91318 = arg_buffer[1];
//reading env and args
void* a9063191020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91318))[7];
//not do dummy comment
void* kont90859 = (decode_clo(env91318))[6];
//not do dummy comment
void* car = (decode_clo(env91318))[5];
//not do dummy comment
void* foldr = (decode_clo(env91318))[4];
//not do dummy comment
void* lst = (decode_clo(env91318))[3];
//not do dummy comment
void* proc = (decode_clo(env91318))[2];
//not do dummy comment
void* acc = (decode_clo(env91318))[1];

//if-clause
bool if_guard95548 = is_true(a9063191020);
if(if_guard95548)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90859);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90859))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo95550 = alloc_clo(lam91315_fptr, 6);

//setting env list
clo95550[1] = acc;
clo95550[2] = proc;
clo95550[3] = lst;
clo95550[4] = foldr;
clo95550[5] = kont90859;
clo95550[6] = cdr;
void* f9086291021 = encode_clo(clo95550);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9086291021;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91317 = encode_clo(alloc_clo(lam91317_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91319 = arg_buffer[1];
//reading env and args
void* kont90859 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo95552 = alloc_clo(lam91317_fptr, 7);

//setting env list
clo95552[1] = acc;
clo95552[2] = proc;
clo95552[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo95552[4] = foldr;
clo95552[5] = car;
clo95552[6] = kont90859;
clo95552[7] = cdr;
void* f9086391019 = encode_clo(clo95552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9086391019;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam91320_fptr() // lam91320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91321 = arg_buffer[1];
//reading env and args
void* a9063891034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90864 = (decode_clo(env91321))[3];
//not do dummy comment
void* a9063691030 = (decode_clo(env91321))[2];
//not do dummy comment
void* cons = (decode_clo(env91321))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont90864;
arg_buffer[3] = a9063691030;
arg_buffer[4] = a9063891034;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91320 = encode_clo(alloc_clo(lam91320_fptr, 0));

void* lam91322_fptr() // lam91322 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91323 = arg_buffer[1];
//reading env and args
void* a9063791032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90864 = (decode_clo(env91323))[5];
//not do dummy comment
void* append = (decode_clo(env91323))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91323))[3];
//not do dummy comment
void* a9063691030 = (decode_clo(env91323))[2];
//not do dummy comment
void* cons = (decode_clo(env91323))[1];

//creating new closure instance
void** clo95554 = alloc_clo(lam91320_fptr, 3);

//setting env list
clo95554[1] = cons;
clo95554[2] = a9063691030;
clo95554[3] = kont90864;
void* f9086591033 = encode_clo(clo95554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9086591033;
arg_buffer[3] = a9063791032;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91322 = encode_clo(alloc_clo(lam91322_fptr, 0));

void* lam91324_fptr() // lam91324 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91325 = arg_buffer[1];
//reading env and args
void* a9063691030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91325))[6];
//not do dummy comment
void* kont90864 = (decode_clo(env91325))[5];
//not do dummy comment
void* append = (decode_clo(env91325))[4];
//not do dummy comment
void* lst2 = (decode_clo(env91325))[3];
//not do dummy comment
void* lst1 = (decode_clo(env91325))[2];
//not do dummy comment
void* cons = (decode_clo(env91325))[1];

//creating new closure instance
void** clo95556 = alloc_clo(lam91322_fptr, 5);

//setting env list
clo95556[1] = cons;
clo95556[2] = a9063691030;
clo95556[3] = lst2;
clo95556[4] = append;
clo95556[5] = kont90864;
void* f9086691031 = encode_clo(clo95556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9086691031;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91324 = encode_clo(alloc_clo(lam91324_fptr, 0));

void* lam91326_fptr() // lam91326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91327 = arg_buffer[1];
//reading env and args
void* a9063591028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env91327))[7];
//not do dummy comment
void* kont90864 = (decode_clo(env91327))[6];
//not do dummy comment
void* append = (decode_clo(env91327))[5];
//not do dummy comment
void* lst2 = (decode_clo(env91327))[4];
//not do dummy comment
void* cons = (decode_clo(env91327))[3];
//not do dummy comment
void* lst1 = (decode_clo(env91327))[2];
//not do dummy comment
void* car = (decode_clo(env91327))[1];

//if-clause
bool if_guard95557 = is_true(a9063591028);
if(if_guard95557)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90864);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90864))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo95559 = alloc_clo(lam91324_fptr, 6);

//setting env list
clo95559[1] = cons;
clo95559[2] = lst1;
clo95559[3] = lst2;
clo95559[4] = append;
clo95559[5] = kont90864;
clo95559[6] = cdr;
void* f9086791029 = encode_clo(clo95559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9086791029;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91326 = encode_clo(alloc_clo(lam91326_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91328 = arg_buffer[1];
//reading env and args
void* kont90864 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo95561 = alloc_clo(lam91326_fptr, 7);

//setting env list
clo95561[1] = car;
clo95561[2] = lst1;
clo95561[3] = cons;
clo95561[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo95561[5] = append;
clo95561[6] = kont90864;
clo95561[7] = cdr;
void* f9086891027 = encode_clo(clo95561);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9086891027;
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
void* _91329 = arg_buffer[1];
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

void* kont9086991035 = prim_car(lst);
void* lst91036 = prim_cdr(lst);
void* x9063991037 = apply_prim_hash(lst91036);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9086991035);
arg_buffer[2] = x9063991037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9086991035))[0]);
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
void* _91330 = arg_buffer[1];
//reading env and args
void* kont90871 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9064091038 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90871);
arg_buffer[2] = x9064091038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90871))[0]);
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
void* _91331 = arg_buffer[1];
//reading env and args
void* kont90872 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9064191039 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90872);
arg_buffer[2] = x9064191039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90872))[0]);
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
void* _91332 = arg_buffer[1];
//reading env and args
void* kont90873 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9064291040 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90873);
arg_buffer[2] = x9064291040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90873))[0]);
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
void* _91333 = arg_buffer[1];
//reading env and args
void* kont90874 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9064391041 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90874);
arg_buffer[2] = x9064391041;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90874))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam91336_fptr() // lam91336 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91337 = arg_buffer[1];
//reading env and args
void* a9066591067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90875 = (decode_clo(env91337))[3];
//not do dummy comment
void* append = (decode_clo(env91337))[2];
//not do dummy comment
void* a9065991060 = (decode_clo(env91337))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = kont90875;
arg_buffer[3] = a9065991060;
arg_buffer[4] = a9066591067;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91336 = encode_clo(alloc_clo(lam91336_fptr, 0));

void* lam91343_fptr() // lam91343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91344 = arg_buffer[1];
//reading env and args
void* a9065991060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env91344))[3];
//not do dummy comment
void* kont90875 = (decode_clo(env91344))[2];
//not do dummy comment
void* append = (decode_clo(env91344))[1];
mpz_t* mpzvar95562 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95562, "234", 10);
void* a9066091061 = encode_mpz(mpzvar95562);
mpz_t* mpzvar95563 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95563, "12212", 10);
void* a9066191062 = encode_mpz(mpzvar95563);
mpz_t* mpzvar95564 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95564, "332", 10);
void* a9066291063 = encode_mpz(mpzvar95564);
mpz_t* mpzvar95565 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95565, "12", 10);
void* a9066391064 = encode_mpz(mpzvar95565);
mpz_t* mpzvar95566 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95566, "2", 10);
void* a9066491065 = encode_mpz(mpzvar95566);

//creating new closure instance
void** clo95568 = alloc_clo(lam91336_fptr, 3);

//setting env list
clo95568[1] = a9065991060;
clo95568[2] = append;
clo95568[3] = kont90875;
void* f9087691066 = encode_clo(clo95568);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9087691066;
arg_buffer[3] = a9066091061;
arg_buffer[4] = a9066191062;
arg_buffer[5] = a9066291063;
arg_buffer[6] = a9066391064;
arg_buffer[7] = a9066491065;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91343 = encode_clo(alloc_clo(lam91343_fptr, 0));

void* lam91351_fptr() // lam91351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91352 = arg_buffer[1];
//reading env and args
void* a9077691181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90875 = (decode_clo(env91352))[3];
//not do dummy comment
void* append = (decode_clo(env91352))[2];
//not do dummy comment
void* a9067191075 = (decode_clo(env91352))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = kont90875;
arg_buffer[3] = a9067191075;
arg_buffer[4] = a9077691181;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91351 = encode_clo(alloc_clo(lam91351_fptr, 0));

void* lam91457_fptr() // lam91457 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91458 = arg_buffer[1];
//reading env and args
void* a9067191075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env91458))[3];
//not do dummy comment
void* kont90875 = (decode_clo(env91458))[2];
//not do dummy comment
void* append = (decode_clo(env91458))[1];
mpz_t* mpzvar95569 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95569, "0", 10);
void* a9067291076 = encode_mpz(mpzvar95569);
mpz_t* mpzvar95570 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95570, "1", 10);
void* a9067391077 = encode_mpz(mpzvar95570);
mpz_t* mpzvar95571 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95571, "2", 10);
void* a9067491078 = encode_mpz(mpzvar95571);
mpz_t* mpzvar95572 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95572, "3", 10);
void* a9067591079 = encode_mpz(mpzvar95572);
mpz_t* mpzvar95573 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95573, "4", 10);
void* a9067691080 = encode_mpz(mpzvar95573);
mpz_t* mpzvar95574 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95574, "5", 10);
void* a9067791081 = encode_mpz(mpzvar95574);
mpz_t* mpzvar95575 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95575, "6", 10);
void* a9067891082 = encode_mpz(mpzvar95575);
mpz_t* mpzvar95576 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95576, "7", 10);
void* a9067991083 = encode_mpz(mpzvar95576);
mpz_t* mpzvar95577 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95577, "8", 10);
void* a9068091084 = encode_mpz(mpzvar95577);
mpz_t* mpzvar95578 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95578, "9", 10);
void* a9068191085 = encode_mpz(mpzvar95578);
mpz_t* mpzvar95579 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95579, "10", 10);
void* a9068291086 = encode_mpz(mpzvar95579);
mpz_t* mpzvar95580 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95580, "11", 10);
void* a9068391087 = encode_mpz(mpzvar95580);
mpz_t* mpzvar95581 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95581, "12", 10);
void* a9068491088 = encode_mpz(mpzvar95581);
mpz_t* mpzvar95582 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95582, "13", 10);
void* a9068591089 = encode_mpz(mpzvar95582);
mpz_t* mpzvar95583 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95583, "14", 10);
void* a9068691090 = encode_mpz(mpzvar95583);
mpz_t* mpzvar95584 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95584, "15", 10);
void* a9068791091 = encode_mpz(mpzvar95584);
mpz_t* mpzvar95585 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95585, "16", 10);
void* a9068891092 = encode_mpz(mpzvar95585);
mpz_t* mpzvar95586 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95586, "17", 10);
void* a9068991093 = encode_mpz(mpzvar95586);
mpz_t* mpzvar95587 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95587, "18", 10);
void* a9069091094 = encode_mpz(mpzvar95587);
mpz_t* mpzvar95588 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95588, "19", 10);
void* a9069191095 = encode_mpz(mpzvar95588);
mpz_t* mpzvar95589 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95589, "20", 10);
void* a9069291096 = encode_mpz(mpzvar95589);
mpz_t* mpzvar95590 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95590, "21", 10);
void* a9069391097 = encode_mpz(mpzvar95590);
mpz_t* mpzvar95591 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95591, "22", 10);
void* a9069491098 = encode_mpz(mpzvar95591);
mpz_t* mpzvar95592 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95592, "23", 10);
void* a9069591099 = encode_mpz(mpzvar95592);
mpz_t* mpzvar95593 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95593, "24", 10);
void* a9069691100 = encode_mpz(mpzvar95593);
mpz_t* mpzvar95594 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95594, "25", 10);
void* a9069791101 = encode_mpz(mpzvar95594);
mpz_t* mpzvar95595 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95595, "26", 10);
void* a9069891102 = encode_mpz(mpzvar95595);
mpz_t* mpzvar95596 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95596, "27", 10);
void* a9069991103 = encode_mpz(mpzvar95596);
mpz_t* mpzvar95597 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95597, "28", 10);
void* a9070091104 = encode_mpz(mpzvar95597);
mpz_t* mpzvar95598 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95598, "29", 10);
void* a9070191105 = encode_mpz(mpzvar95598);
mpz_t* mpzvar95599 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95599, "30", 10);
void* a9070291106 = encode_mpz(mpzvar95599);
mpz_t* mpzvar95600 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95600, "31", 10);
void* a9070391107 = encode_mpz(mpzvar95600);
mpz_t* mpzvar95601 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95601, "32", 10);
void* a9070491108 = encode_mpz(mpzvar95601);
mpz_t* mpzvar95602 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95602, "33", 10);
void* a9070591109 = encode_mpz(mpzvar95602);
mpz_t* mpzvar95603 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95603, "34", 10);
void* a9070691110 = encode_mpz(mpzvar95603);
mpz_t* mpzvar95604 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95604, "35", 10);
void* a9070791111 = encode_mpz(mpzvar95604);
mpz_t* mpzvar95605 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95605, "36", 10);
void* a9070891112 = encode_mpz(mpzvar95605);
mpz_t* mpzvar95606 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95606, "37", 10);
void* a9070991113 = encode_mpz(mpzvar95606);
mpz_t* mpzvar95607 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95607, "38", 10);
void* a9071091114 = encode_mpz(mpzvar95607);
mpz_t* mpzvar95608 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95608, "39", 10);
void* a9071191115 = encode_mpz(mpzvar95608);
mpz_t* mpzvar95609 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95609, "40", 10);
void* a9071291116 = encode_mpz(mpzvar95609);
mpz_t* mpzvar95610 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95610, "41", 10);
void* a9071391117 = encode_mpz(mpzvar95610);
mpz_t* mpzvar95611 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95611, "42", 10);
void* a9071491118 = encode_mpz(mpzvar95611);
mpz_t* mpzvar95612 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95612, "43", 10);
void* a9071591119 = encode_mpz(mpzvar95612);
mpz_t* mpzvar95613 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95613, "44", 10);
void* a9071691120 = encode_mpz(mpzvar95613);
mpz_t* mpzvar95614 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95614, "45", 10);
void* a9071791121 = encode_mpz(mpzvar95614);
mpz_t* mpzvar95615 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95615, "46", 10);
void* a9071891122 = encode_mpz(mpzvar95615);
mpz_t* mpzvar95616 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95616, "47", 10);
void* a9071991123 = encode_mpz(mpzvar95616);
mpz_t* mpzvar95617 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95617, "48", 10);
void* a9072091124 = encode_mpz(mpzvar95617);
mpz_t* mpzvar95618 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95618, "49", 10);
void* a9072191125 = encode_mpz(mpzvar95618);
mpz_t* mpzvar95619 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95619, "50", 10);
void* a9072291126 = encode_mpz(mpzvar95619);
mpz_t* mpzvar95620 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95620, "51", 10);
void* a9072391127 = encode_mpz(mpzvar95620);
mpz_t* mpzvar95621 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95621, "52", 10);
void* a9072491128 = encode_mpz(mpzvar95621);
mpz_t* mpzvar95622 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95622, "53", 10);
void* a9072591129 = encode_mpz(mpzvar95622);
mpz_t* mpzvar95623 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95623, "54", 10);
void* a9072691130 = encode_mpz(mpzvar95623);
mpz_t* mpzvar95624 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95624, "55", 10);
void* a9072791131 = encode_mpz(mpzvar95624);
mpz_t* mpzvar95625 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95625, "56", 10);
void* a9072891132 = encode_mpz(mpzvar95625);
mpz_t* mpzvar95626 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95626, "57", 10);
void* a9072991133 = encode_mpz(mpzvar95626);
mpz_t* mpzvar95627 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95627, "58", 10);
void* a9073091134 = encode_mpz(mpzvar95627);
mpz_t* mpzvar95628 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95628, "59", 10);
void* a9073191135 = encode_mpz(mpzvar95628);
mpz_t* mpzvar95629 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95629, "60", 10);
void* a9073291136 = encode_mpz(mpzvar95629);
mpz_t* mpzvar95630 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95630, "61", 10);
void* a9073391137 = encode_mpz(mpzvar95630);
mpz_t* mpzvar95631 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95631, "62", 10);
void* a9073491138 = encode_mpz(mpzvar95631);
mpz_t* mpzvar95632 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95632, "63", 10);
void* a9073591139 = encode_mpz(mpzvar95632);
mpz_t* mpzvar95633 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95633, "64", 10);
void* a9073691140 = encode_mpz(mpzvar95633);
mpz_t* mpzvar95634 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95634, "65", 10);
void* a9073791141 = encode_mpz(mpzvar95634);
mpz_t* mpzvar95635 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95635, "66", 10);
void* a9073891142 = encode_mpz(mpzvar95635);
mpz_t* mpzvar95636 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95636, "67", 10);
void* a9073991143 = encode_mpz(mpzvar95636);
mpz_t* mpzvar95637 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95637, "68", 10);
void* a9074091144 = encode_mpz(mpzvar95637);
mpz_t* mpzvar95638 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95638, "69", 10);
void* a9074191145 = encode_mpz(mpzvar95638);
mpz_t* mpzvar95639 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95639, "70", 10);
void* a9074291146 = encode_mpz(mpzvar95639);
mpz_t* mpzvar95640 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95640, "71", 10);
void* a9074391147 = encode_mpz(mpzvar95640);
mpz_t* mpzvar95641 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95641, "72", 10);
void* a9074491148 = encode_mpz(mpzvar95641);
mpz_t* mpzvar95642 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95642, "73", 10);
void* a9074591149 = encode_mpz(mpzvar95642);
mpz_t* mpzvar95643 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95643, "74", 10);
void* a9074691150 = encode_mpz(mpzvar95643);
mpz_t* mpzvar95644 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95644, "75", 10);
void* a9074791151 = encode_mpz(mpzvar95644);
mpz_t* mpzvar95645 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95645, "76", 10);
void* a9074891152 = encode_mpz(mpzvar95645);
mpz_t* mpzvar95646 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95646, "77", 10);
void* a9074991153 = encode_mpz(mpzvar95646);
mpz_t* mpzvar95647 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95647, "78", 10);
void* a9075091154 = encode_mpz(mpzvar95647);
mpz_t* mpzvar95648 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95648, "79", 10);
void* a9075191155 = encode_mpz(mpzvar95648);
mpz_t* mpzvar95649 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95649, "80", 10);
void* a9075291156 = encode_mpz(mpzvar95649);
mpz_t* mpzvar95650 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95650, "81", 10);
void* a9075391157 = encode_mpz(mpzvar95650);
mpz_t* mpzvar95651 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95651, "82", 10);
void* a9075491158 = encode_mpz(mpzvar95651);
mpz_t* mpzvar95652 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95652, "83", 10);
void* a9075591159 = encode_mpz(mpzvar95652);
mpz_t* mpzvar95653 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95653, "84", 10);
void* a9075691160 = encode_mpz(mpzvar95653);
mpz_t* mpzvar95654 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95654, "85", 10);
void* a9075791161 = encode_mpz(mpzvar95654);
mpz_t* mpzvar95655 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95655, "86", 10);
void* a9075891162 = encode_mpz(mpzvar95655);
mpz_t* mpzvar95656 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95656, "87", 10);
void* a9075991163 = encode_mpz(mpzvar95656);
mpz_t* mpzvar95657 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95657, "88", 10);
void* a9076091164 = encode_mpz(mpzvar95657);
mpz_t* mpzvar95658 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95658, "89", 10);
void* a9076191165 = encode_mpz(mpzvar95658);
mpz_t* mpzvar95659 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95659, "90", 10);
void* a9076291166 = encode_mpz(mpzvar95659);
mpz_t* mpzvar95660 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95660, "91", 10);
void* a9076391167 = encode_mpz(mpzvar95660);
mpz_t* mpzvar95661 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95661, "92", 10);
void* a9076491168 = encode_mpz(mpzvar95661);
mpz_t* mpzvar95662 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95662, "93", 10);
void* a9076591169 = encode_mpz(mpzvar95662);
mpz_t* mpzvar95663 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95663, "94", 10);
void* a9076691170 = encode_mpz(mpzvar95663);
mpz_t* mpzvar95664 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95664, "95", 10);
void* a9076791171 = encode_mpz(mpzvar95664);
mpz_t* mpzvar95665 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95665, "96", 10);
void* a9076891172 = encode_mpz(mpzvar95665);
mpz_t* mpzvar95666 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95666, "97", 10);
void* a9076991173 = encode_mpz(mpzvar95666);
mpz_t* mpzvar95667 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95667, "98", 10);
void* a9077091174 = encode_mpz(mpzvar95667);
mpz_t* mpzvar95668 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95668, "99", 10);
void* a9077191175 = encode_mpz(mpzvar95668);
mpz_t* mpzvar95669 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95669, "100", 10);
void* a9077291176 = encode_mpz(mpzvar95669);
mpz_t* mpzvar95670 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95670, "101", 10);
void* a9077391177 = encode_mpz(mpzvar95670);
mpz_t* mpzvar95671 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95671, "102", 10);
void* a9077491178 = encode_mpz(mpzvar95671);
mpz_t* mpzvar95672 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95672, "10459928", 10);
void* a9077591179 = encode_mpz(mpzvar95672);

//creating new closure instance
void** clo95674 = alloc_clo(lam91351_fptr, 3);

//setting env list
clo95674[1] = a9067191075;
clo95674[2] = append;
clo95674[3] = kont90875;
void* f9087891180 = encode_clo(clo95674);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9087891180;
arg_buffer[3] = a9067291076;
arg_buffer[4] = a9067391077;
arg_buffer[5] = a9067491078;
arg_buffer[6] = a9067591079;
arg_buffer[7] = a9067691080;
arg_buffer[8] = a9067791081;
arg_buffer[9] = a9067891082;
arg_buffer[10] = a9067991083;
arg_buffer[11] = a9068091084;
arg_buffer[12] = a9068191085;
arg_buffer[13] = a9068291086;
arg_buffer[14] = a9068391087;
arg_buffer[15] = a9068491088;
arg_buffer[16] = a9068591089;
arg_buffer[17] = a9068691090;
arg_buffer[18] = a9068791091;
arg_buffer[19] = a9068891092;
arg_buffer[20] = a9068991093;
arg_buffer[21] = a9069091094;
arg_buffer[22] = a9069191095;
arg_buffer[23] = a9069291096;
arg_buffer[24] = a9069391097;
arg_buffer[25] = a9069491098;
arg_buffer[26] = a9069591099;
arg_buffer[27] = a9069691100;
arg_buffer[28] = a9069791101;
arg_buffer[29] = a9069891102;
arg_buffer[30] = a9069991103;
arg_buffer[31] = a9070091104;
arg_buffer[32] = a9070191105;
arg_buffer[33] = a9070291106;
arg_buffer[34] = a9070391107;
arg_buffer[35] = a9070491108;
arg_buffer[36] = a9070591109;
arg_buffer[37] = a9070691110;
arg_buffer[38] = a9070791111;
arg_buffer[39] = a9070891112;
arg_buffer[40] = a9070991113;
arg_buffer[41] = a9071091114;
arg_buffer[42] = a9071191115;
arg_buffer[43] = a9071291116;
arg_buffer[44] = a9071391117;
arg_buffer[45] = a9071491118;
arg_buffer[46] = a9071591119;
arg_buffer[47] = a9071691120;
arg_buffer[48] = a9071791121;
arg_buffer[49] = a9071891122;
arg_buffer[50] = a9071991123;
arg_buffer[51] = a9072091124;
arg_buffer[52] = a9072191125;
arg_buffer[53] = a9072291126;
arg_buffer[54] = a9072391127;
arg_buffer[55] = a9072491128;
arg_buffer[56] = a9072591129;
arg_buffer[57] = a9072691130;
arg_buffer[58] = a9072791131;
arg_buffer[59] = a9072891132;
arg_buffer[60] = a9072991133;
arg_buffer[61] = a9073091134;
arg_buffer[62] = a9073191135;
arg_buffer[63] = a9073291136;
arg_buffer[64] = a9073391137;
arg_buffer[65] = a9073491138;
arg_buffer[66] = a9073591139;
arg_buffer[67] = a9073691140;
arg_buffer[68] = a9073791141;
arg_buffer[69] = a9073891142;
arg_buffer[70] = a9073991143;
arg_buffer[71] = a9074091144;
arg_buffer[72] = a9074191145;
arg_buffer[73] = a9074291146;
arg_buffer[74] = a9074391147;
arg_buffer[75] = a9074491148;
arg_buffer[76] = a9074591149;
arg_buffer[77] = a9074691150;
arg_buffer[78] = a9074791151;
arg_buffer[79] = a9074891152;
arg_buffer[80] = a9074991153;
arg_buffer[81] = a9075091154;
arg_buffer[82] = a9075191155;
arg_buffer[83] = a9075291156;
arg_buffer[84] = a9075391157;
arg_buffer[85] = a9075491158;
arg_buffer[86] = a9075591159;
arg_buffer[87] = a9075691160;
arg_buffer[88] = a9075791161;
arg_buffer[89] = a9075891162;
arg_buffer[90] = a9075991163;
arg_buffer[91] = a9076091164;
arg_buffer[92] = a9076191165;
arg_buffer[93] = a9076291166;
arg_buffer[94] = a9076391167;
arg_buffer[95] = a9076491168;
arg_buffer[96] = a9076591169;
arg_buffer[97] = a9076691170;
arg_buffer[98] = a9076791171;
arg_buffer[99] = a9076891172;
arg_buffer[100] = a9076991173;
arg_buffer[101] = a9077091174;
arg_buffer[102] = a9077191175;
arg_buffer[103] = a9077291176;
arg_buffer[104] = a9077391177;
arg_buffer[105] = a9077491178;
arg_buffer[106] = a9077591179;
arg_buffer[0] = reinterpret_cast<void*>(106);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91457 = encode_clo(alloc_clo(lam91457_fptr, 0));

void* lam91460_fptr() // lam91460 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91461 = arg_buffer[1];
//reading env and args
void* a9066791070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env91461))[4];
//not do dummy comment
void* kont90875 = (decode_clo(env91461))[3];
//not do dummy comment
void* append = (decode_clo(env91461))[2];
//not do dummy comment
void* _u42 = (decode_clo(env91461))[1];

//if-clause
bool if_guard95675 = is_true(a9066791070);
if(if_guard95675)
{
mpz_t* mpzvar95676 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95676, "10", 10);
void* a9066891071 = encode_mpz(mpzvar95676);
mpz_t* mpzvar95677 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95677, "2", 10);
void* a9066991072 = encode_mpz(mpzvar95677);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont90875;
arg_buffer[3] = a9066891071;
arg_buffer[4] = a9066991072;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar95678 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95678, "0", 10);
void* a9067091073 = encode_mpz(mpzvar95678);

//creating new closure instance
void** clo95680 = alloc_clo(lam91457_fptr, 3);

//setting env list
clo95680[1] = append;
clo95680[2] = kont90875;
clo95680[3] = list;
void* f9087991074 = encode_clo(clo95680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9087991074;
arg_buffer[3] = a9067091073;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91460 = encode_clo(alloc_clo(lam91460_fptr, 0));

void* lam91463_fptr() // lam91463 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91464 = arg_buffer[1];
//reading env and args
void* a9065491054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env91464))[5];
//not do dummy comment
void* kont90875 = (decode_clo(env91464))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env91464))[3];
//not do dummy comment
void* append = (decode_clo(env91464))[2];
//not do dummy comment
void* _u42 = (decode_clo(env91464))[1];

//if-clause
bool if_guard95681 = is_true(a9065491054);
if(if_guard95681)
{
mpz_t* mpzvar95682 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95682, "1", 10);
void* a9065591055 = encode_mpz(mpzvar95682);
mpz_t* mpzvar95683 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95683, "2", 10);
void* a9065691056 = encode_mpz(mpzvar95683);
mpz_t* mpzvar95684 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95684, "3", 10);
void* a9065791057 = encode_mpz(mpzvar95684);
mpz_t* mpzvar95685 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95685, "4", 10);
void* a9065891058 = encode_mpz(mpzvar95685);

//creating new closure instance
void** clo95687 = alloc_clo(lam91343_fptr, 3);

//setting env list
clo95687[1] = append;
clo95687[2] = kont90875;
clo95687[3] = list;
void* f9087791059 = encode_clo(clo95687);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9087791059;
arg_buffer[3] = a9065591055;
arg_buffer[4] = a9065691056;
arg_buffer[5] = a9065791057;
arg_buffer[6] = a9065891058;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar95688 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95688, "3", 10);
void* a9066691068 = encode_mpz(mpzvar95688);

//creating new closure instance
void** clo95690 = alloc_clo(lam91460_fptr, 4);

//setting env list
clo95690[1] = _u42;
clo95690[2] = append;
clo95690[3] = kont90875;
clo95690[4] = list;
void* f9088091069 = encode_clo(clo95690);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f9088091069;
arg_buffer[3] = a9066691068;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91463 = encode_clo(alloc_clo(lam91463_fptr, 0));

void* lam91465_fptr() // lam91465 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91466 = arg_buffer[1];
//reading env and args
void* a9065191052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env91466))[5];
//not do dummy comment
void* kont90875 = (decode_clo(env91466))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env91466))[3];
//not do dummy comment
void* append = (decode_clo(env91466))[2];
//not do dummy comment
void* _u42 = (decode_clo(env91466))[1];

//creating new closure instance
void** clo95692 = alloc_clo(lam91463_fptr, 5);

//setting env list
clo95692[1] = _u42;
clo95692[2] = append;
clo95692[3] = even_u63;
clo95692[4] = kont90875;
clo95692[5] = list;
void* f9088191053 = encode_clo(clo95692);



//if-clause
bool if_guard95693 = is_true(a9065191052);
if(if_guard95693)
{
void* x9065291182 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f9088191053);
arg_buffer[2] = x9065291182;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f9088191053))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x9065391183 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f9088191053);
arg_buffer[2] = x9065391183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f9088191053))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam91465 = encode_clo(alloc_clo(lam91465_fptr, 0));

void* lam91467_fptr() // lam91467 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91468 = arg_buffer[1];
//reading env and args
void* a9065091050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env91468))[7];
//not do dummy comment
void* a9064791046 = (decode_clo(env91468))[6];
//not do dummy comment
void* kont90875 = (decode_clo(env91468))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env91468))[4];
//not do dummy comment
void* append = (decode_clo(env91468))[3];
//not do dummy comment
void* _u42 = (decode_clo(env91468))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env91468))[1];

//creating new closure instance
void** clo95695 = alloc_clo(lam91465_fptr, 5);

//setting env list
clo95695[1] = _u42;
clo95695[2] = append;
clo95695[3] = even_u63;
clo95695[4] = kont90875;
clo95695[5] = list;
void* f9088291051 = encode_clo(clo95695);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9088291051;
arg_buffer[3] = a9064791046;
arg_buffer[4] = a9065091050;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91467 = encode_clo(alloc_clo(lam91467_fptr, 0));

void* lam91471_fptr() // lam91471 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91472 = arg_buffer[1];
//reading env and args
void* a9064791046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* list = (decode_clo(env91472))[7];
//not do dummy comment
void* _u45 = (decode_clo(env91472))[6];
//not do dummy comment
void* kont90875 = (decode_clo(env91472))[5];
//not do dummy comment
void* even_u63 = (decode_clo(env91472))[4];
//not do dummy comment
void* append = (decode_clo(env91472))[3];
//not do dummy comment
void* _u42 = (decode_clo(env91472))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env91472))[1];
mpz_t* mpzvar95696 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95696, "10", 10);
void* a9064891047 = encode_mpz(mpzvar95696);
mpz_t* mpzvar95697 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95697, "4", 10);
void* a9064991048 = encode_mpz(mpzvar95697);

//creating new closure instance
void** clo95699 = alloc_clo(lam91467_fptr, 7);

//setting env list
clo95699[1] = equal_u63;
clo95699[2] = _u42;
clo95699[3] = append;
clo95699[4] = even_u63;
clo95699[5] = kont90875;
clo95699[6] = a9064791046;
clo95699[7] = list;
void* f9088391049 = encode_clo(clo95699);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9088391049;
arg_buffer[3] = a9064891047;
arg_buffer[4] = a9064991048;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91471 = encode_clo(alloc_clo(lam91471_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91476 = arg_buffer[1];
//reading env and args
void* kont90875 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar95700 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95700, "1", 10);
void* a9064491042 = encode_mpz(mpzvar95700);
mpz_t* mpzvar95701 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95701, "2", 10);
void* a9064591043 = encode_mpz(mpzvar95701);
mpz_t* mpzvar95702 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar95702, "3", 10);
void* a9064691044 = encode_mpz(mpzvar95702);

//creating new closure instance
void** clo95704 = alloc_clo(lam91471_fptr, 7);

//setting env list
clo95704[1] = equal_u63;
clo95704[2] = _u42;
clo95704[3] = append;
clo95704[4] = even_u63;
clo95704[5] = kont90875;
clo95704[6] = _u45;
clo95704[7] = list;
void* f9088491045 = encode_clo(clo95704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f9088491045;
arg_buffer[3] = a9064491042;
arg_buffer[4] = a9064591043;
arg_buffer[5] = a9064691044;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam91477_fptr() // lam91477 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env91478 = arg_buffer[1];
//reading env and args
void* x9077791185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont90885 = (decode_clo(env91478))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90885);
arg_buffer[2] = x9077791185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90885))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam91477 = encode_clo(alloc_clo(lam91477_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _91479 = arg_buffer[1];
//reading env and args
void* kont90885 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo95706 = alloc_clo(lam91477_fptr, 1);

//setting env list
clo95706[1] = kont90885;
void* f9088691184 = encode_clo(clo95706);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f9088691184;
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

