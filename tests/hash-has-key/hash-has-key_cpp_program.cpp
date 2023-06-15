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
void* _59199 = arg_buffer[1];
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

void* kont5893459035 = prim_car(lst);
void* lst59036 = prim_cdr(lst);
void* x5884459037 = apply_prim__u43(lst59036);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5893459035);
arg_buffer[2] = x5884459037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5893459035))[0]);
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
void* _59200 = arg_buffer[1];
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

void* kont5893659038 = prim_car(lst);
void* lst59039 = prim_cdr(lst);
void* x5884559040 = apply_prim__u45(lst59039);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5893659038);
arg_buffer[2] = x5884559040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5893659038))[0]);
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
void* _59201 = arg_buffer[1];
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

void* kont5893859041 = prim_car(lst);
void* lst59042 = prim_cdr(lst);
void* x5884659043 = apply_prim__u42(lst59042);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5893859041);
arg_buffer[2] = x5884659043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5893859041))[0]);
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
void* _59202 = arg_buffer[1];
//reading env and args
void* kont58940 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5884759044 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58940);
arg_buffer[2] = x5884759044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58940))[0]);
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
void* _59203 = arg_buffer[1];
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

void* kont5894159045 = prim_car(lst);
void* lst59046 = prim_cdr(lst);
void* x5884859047 = apply_prim__u47(lst59046);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5894159045);
arg_buffer[2] = x5884859047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5894159045))[0]);
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
void* _59204 = arg_buffer[1];
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

void* kont5894359048 = prim_car(lst);
void* lst59049 = prim_cdr(lst);
void* x5884959050 = apply_prim__u61(lst59049);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5894359048);
arg_buffer[2] = x5884959050;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5894359048))[0]);
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
void* _59205 = arg_buffer[1];
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

void* kont5894559051 = prim_car(lst);
void* lst59052 = prim_cdr(lst);
void* x5885059053 = apply_prim__u62(lst59052);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5894559051);
arg_buffer[2] = x5885059053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5894559051))[0]);
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
void* _59206 = arg_buffer[1];
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

void* kont5894759054 = prim_car(lst);
void* lst59055 = prim_cdr(lst);
void* x5885159056 = apply_prim__u60(lst59055);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5894759054);
arg_buffer[2] = x5885159056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5894759054))[0]);
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
void* _59207 = arg_buffer[1];
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

void* kont5894959057 = prim_car(lst);
void* lst59058 = prim_cdr(lst);
void* x5885259059 = apply_prim__u60_u61(lst59058);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5894959057);
arg_buffer[2] = x5885259059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5894959057))[0]);
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
void* _59208 = arg_buffer[1];
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

void* kont5895159060 = prim_car(lst);
void* lst59061 = prim_cdr(lst);
void* x5885359062 = apply_prim__u62_u61(lst59061);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5895159060);
arg_buffer[2] = x5885359062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5895159060))[0]);
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
void* _59209 = arg_buffer[1];
//reading env and args
void* kont58953 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5885459063 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58953);
arg_buffer[2] = x5885459063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58953))[0]);
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
void* _59210 = arg_buffer[1];
//reading env and args
void* kont58954 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5885559064 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58954);
arg_buffer[2] = x5885559064;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58954))[0]);
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
void* _59211 = arg_buffer[1];
//reading env and args
void* kont58955 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5885659065 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58955);
arg_buffer[2] = x5885659065;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58955))[0]);
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
void* _59212 = arg_buffer[1];
//reading env and args
void* kont58956 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5885759066 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58956);
arg_buffer[2] = x5885759066;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58956))[0]);
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
void* _59213 = arg_buffer[1];
//reading env and args
void* kont58957 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5885859067 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58957);
arg_buffer[2] = x5885859067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58957))[0]);
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
void* _59214 = arg_buffer[1];
//reading env and args
void* kont58958 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5885959068 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58958);
arg_buffer[2] = x5885959068;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58958))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam59215_fptr() // lam59215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59216 = arg_buffer[1];
//reading env and args
void* a5886259072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58959 = (decode_clo(env59216))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env59216))[2];
//not do dummy comment
void* a5886059069 = (decode_clo(env59216))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58959;
arg_buffer[3] = a5886059069;
arg_buffer[4] = a5886259072;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59215 = encode_clo(alloc_clo(lam59215_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59219 = arg_buffer[1];
//reading env and args
void* kont58959 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar60198 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60198, "0", 10);
void* a5886059069 = encode_mpz(mpzvar60198);
mpz_t* mpzvar60199 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60199, "2", 10);
void* a5886159070 = encode_mpz(mpzvar60199);

//creating new closure instance
void** clo60201 = alloc_clo(lam59215_fptr, 3);

//setting env list
clo60201[1] = a5886059069;
clo60201[2] = equal_u63;
clo60201[3] = kont58959;
void* f5896059071 = encode_clo(clo60201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5896059071;
arg_buffer[3] = x;
arg_buffer[4] = a5886159070;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam59220_fptr() // lam59220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59221 = arg_buffer[1];
//reading env and args
void* a5886559076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env59221))[3];
//not do dummy comment
void* kont58961 = (decode_clo(env59221))[2];
//not do dummy comment
void* a5886359073 = (decode_clo(env59221))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont58961;
arg_buffer[3] = a5886359073;
arg_buffer[4] = a5886559076;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59220 = encode_clo(alloc_clo(lam59220_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59224 = arg_buffer[1];
//reading env and args
void* kont58961 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar60202 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60202, "1", 10);
void* a5886359073 = encode_mpz(mpzvar60202);
mpz_t* mpzvar60203 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60203, "2", 10);
void* a5886459074 = encode_mpz(mpzvar60203);

//creating new closure instance
void** clo60205 = alloc_clo(lam59220_fptr, 3);

//setting env list
clo60205[1] = a5886359073;
clo60205[2] = kont58961;
clo60205[3] = equal_u63;
void* f5896259075 = encode_clo(clo60205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5896259075;
arg_buffer[3] = x;
arg_buffer[4] = a5886459074;
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
void* _59225 = arg_buffer[1];
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

void* kont5896359077 = prim_car(x);
void* x59078 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5896359077);
arg_buffer[2] = x59078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5896359077))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam59228_fptr() // lam59228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59229 = arg_buffer[1];
//reading env and args
void* a5887159088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58965 = (decode_clo(env59229))[3];
//not do dummy comment
void* x = (decode_clo(env59229))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59229))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont58965;
arg_buffer[3] = x;
arg_buffer[4] = a5887159088;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59228 = encode_clo(alloc_clo(lam59228_fptr, 0));

void* lam59230_fptr() // lam59230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59231 = arg_buffer[1];
//reading env and args
void* a5886959085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59231))[5];
//not do dummy comment
void* lst = (decode_clo(env59231))[4];
//not do dummy comment
void* kont58965 = (decode_clo(env59231))[3];
//not do dummy comment
void* x = (decode_clo(env59231))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59231))[1];

//if-clause
bool if_guard60206 = is_true(a5886959085);
if(if_guard60206)
{
void* x5887059086 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58965);
arg_buffer[2] = x5887059086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60208 = alloc_clo(lam59228_fptr, 3);

//setting env list
clo60208[1] = member_u63;
clo60208[2] = x;
clo60208[3] = kont58965;
void* f5896659087 = encode_clo(clo60208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5896659087;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59230 = encode_clo(alloc_clo(lam59230_fptr, 0));

void* lam59232_fptr() // lam59232 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59233 = arg_buffer[1];
//reading env and args
void* a5886859083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59233))[6];
//not do dummy comment
void* lst = (decode_clo(env59233))[5];
//not do dummy comment
void* kont58965 = (decode_clo(env59233))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env59233))[3];
//not do dummy comment
void* x = (decode_clo(env59233))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59233))[1];

//creating new closure instance
void** clo60210 = alloc_clo(lam59230_fptr, 5);

//setting env list
clo60210[1] = member_u63;
clo60210[2] = x;
clo60210[3] = kont58965;
clo60210[4] = lst;
clo60210[5] = cdr;
void* f5896759084 = encode_clo(clo60210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5896759084;
arg_buffer[3] = a5886859083;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59232 = encode_clo(alloc_clo(lam59232_fptr, 0));

void* lam59234_fptr() // lam59234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59235 = arg_buffer[1];
//reading env and args
void* a5886659080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59235))[7];
//not do dummy comment
void* lst = (decode_clo(env59235))[6];
//not do dummy comment
void* kont58965 = (decode_clo(env59235))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env59235))[4];
//not do dummy comment
void* x = (decode_clo(env59235))[3];
//not do dummy comment
void* car = (decode_clo(env59235))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env59235))[1];

//if-clause
bool if_guard60211 = is_true(a5886659080);
if(if_guard60211)
{
void* x5886759081 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58965);
arg_buffer[2] = x5886759081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60213 = alloc_clo(lam59232_fptr, 6);

//setting env list
clo60213[1] = member_u63;
clo60213[2] = x;
clo60213[3] = equal_u63;
clo60213[4] = kont58965;
clo60213[5] = lst;
clo60213[6] = cdr;
void* f5896859082 = encode_clo(clo60213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5896859082;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59234 = encode_clo(alloc_clo(lam59234_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59236 = arg_buffer[1];
//reading env and args
void* kont58965 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60215 = alloc_clo(lam59234_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo60215[1] = member_u63;
clo60215[2] = car;
clo60215[3] = x;
clo60215[4] = equal_u63;
clo60215[5] = kont58965;
clo60215[6] = lst;
clo60215[7] = cdr;
void* f5896959079 = encode_clo(clo60215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5896959079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam59237_fptr() // lam59237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59238 = arg_buffer[1];
//reading env and args
void* a5887559096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5887459094 = (decode_clo(env59238))[4];
//not do dummy comment
void* fun = (decode_clo(env59238))[3];
//not do dummy comment
void* kont58970 = (decode_clo(env59238))[2];
//not do dummy comment
void* foldl = (decode_clo(env59238))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont58970;
arg_buffer[3] = fun;
arg_buffer[4] = a5887459094;
arg_buffer[5] = a5887559096;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59237 = encode_clo(alloc_clo(lam59237_fptr, 0));

void* lam59239_fptr() // lam59239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59240 = arg_buffer[1];
//reading env and args
void* a5887459094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59240))[5];
//not do dummy comment
void* lst = (decode_clo(env59240))[4];
//not do dummy comment
void* fun = (decode_clo(env59240))[3];
//not do dummy comment
void* kont58970 = (decode_clo(env59240))[2];
//not do dummy comment
void* foldl = (decode_clo(env59240))[1];

//creating new closure instance
void** clo60217 = alloc_clo(lam59237_fptr, 4);

//setting env list
clo60217[1] = foldl;
clo60217[2] = kont58970;
clo60217[3] = fun;
clo60217[4] = a5887459094;
void* f5897159095 = encode_clo(clo60217);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5897159095;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59239 = encode_clo(alloc_clo(lam59239_fptr, 0));

void* lam59241_fptr() // lam59241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59242 = arg_buffer[1];
//reading env and args
void* a5887359092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59242))[6];
//not do dummy comment
void* lst = (decode_clo(env59242))[5];
//not do dummy comment
void* fun = (decode_clo(env59242))[4];
//not do dummy comment
void* acc = (decode_clo(env59242))[3];
//not do dummy comment
void* kont58970 = (decode_clo(env59242))[2];
//not do dummy comment
void* foldl = (decode_clo(env59242))[1];

//creating new closure instance
void** clo60219 = alloc_clo(lam59239_fptr, 5);

//setting env list
clo60219[1] = foldl;
clo60219[2] = kont58970;
clo60219[3] = fun;
clo60219[4] = lst;
clo60219[5] = cdr;
void* f5897259093 = encode_clo(clo60219);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5897259093;
arg_buffer[3] = a5887359092;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59241 = encode_clo(alloc_clo(lam59241_fptr, 0));

void* lam59243_fptr() // lam59243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59244 = arg_buffer[1];
//reading env and args
void* a5887259090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59244))[7];
//not do dummy comment
void* lst = (decode_clo(env59244))[6];
//not do dummy comment
void* fun = (decode_clo(env59244))[5];
//not do dummy comment
void* acc = (decode_clo(env59244))[4];
//not do dummy comment
void* kont58970 = (decode_clo(env59244))[3];
//not do dummy comment
void* car = (decode_clo(env59244))[2];
//not do dummy comment
void* foldl = (decode_clo(env59244))[1];

//if-clause
bool if_guard60220 = is_true(a5887259090);
if(if_guard60220)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58970);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58970))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60222 = alloc_clo(lam59241_fptr, 6);

//setting env list
clo60222[1] = foldl;
clo60222[2] = kont58970;
clo60222[3] = acc;
clo60222[4] = fun;
clo60222[5] = lst;
clo60222[6] = cdr;
void* f5897359091 = encode_clo(clo60222);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5897359091;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59243 = encode_clo(alloc_clo(lam59243_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59245 = arg_buffer[1];
//reading env and args
void* kont58970 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo60224 = alloc_clo(lam59243_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo60224[1] = foldl;
clo60224[2] = car;
clo60224[3] = kont58970;
clo60224[4] = acc;
clo60224[5] = fun;
clo60224[6] = lst;
clo60224[7] = cdr;
void* f5897459089 = encode_clo(clo60224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5897459089;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam59246_fptr() // lam59246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59247 = arg_buffer[1];
//reading env and args
void* a5887959104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58975 = (decode_clo(env59247))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59247))[2];
//not do dummy comment
void* a5887759100 = (decode_clo(env59247))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58975;
arg_buffer[3] = a5887759100;
arg_buffer[4] = a5887959104;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59246 = encode_clo(alloc_clo(lam59246_fptr, 0));

void* lam59248_fptr() // lam59248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59249 = arg_buffer[1];
//reading env and args
void* a5887859102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58975 = (decode_clo(env59249))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59249))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59249))[3];
//not do dummy comment
void* cons = (decode_clo(env59249))[2];
//not do dummy comment
void* a5887759100 = (decode_clo(env59249))[1];

//creating new closure instance
void** clo60226 = alloc_clo(lam59246_fptr, 3);

//setting env list
clo60226[1] = a5887759100;
clo60226[2] = reverse_u45helper;
clo60226[3] = kont58975;
void* f5897659103 = encode_clo(clo60226);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5897659103;
arg_buffer[3] = a5887859102;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59248 = encode_clo(alloc_clo(lam59248_fptr, 0));

void* lam59250_fptr() // lam59250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59251 = arg_buffer[1];
//reading env and args
void* a5887759100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58975 = (decode_clo(env59251))[6];
//not do dummy comment
void* lst = (decode_clo(env59251))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59251))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59251))[3];
//not do dummy comment
void* car = (decode_clo(env59251))[2];
//not do dummy comment
void* cons = (decode_clo(env59251))[1];

//creating new closure instance
void** clo60228 = alloc_clo(lam59248_fptr, 5);

//setting env list
clo60228[1] = a5887759100;
clo60228[2] = cons;
clo60228[3] = lst2;
clo60228[4] = reverse_u45helper;
clo60228[5] = kont58975;
void* f5897759101 = encode_clo(clo60228);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5897759101;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59250 = encode_clo(alloc_clo(lam59250_fptr, 0));

void* lam59252_fptr() // lam59252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59253 = arg_buffer[1];
//reading env and args
void* a5887659098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59253))[7];
//not do dummy comment
void* kont58975 = (decode_clo(env59253))[6];
//not do dummy comment
void* lst = (decode_clo(env59253))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59253))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59253))[3];
//not do dummy comment
void* car = (decode_clo(env59253))[2];
//not do dummy comment
void* cons = (decode_clo(env59253))[1];

//if-clause
bool if_guard60229 = is_true(a5887659098);
if(if_guard60229)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58975);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60231 = alloc_clo(lam59250_fptr, 6);

//setting env list
clo60231[1] = cons;
clo60231[2] = car;
clo60231[3] = lst2;
clo60231[4] = reverse_u45helper;
clo60231[5] = lst;
clo60231[6] = kont58975;
void* f5897859099 = encode_clo(clo60231);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5897859099;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59252 = encode_clo(alloc_clo(lam59252_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59254 = arg_buffer[1];
//reading env and args
void* kont58975 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60233 = alloc_clo(lam59252_fptr, 7);

//setting env list
clo60233[1] = cons;
clo60233[2] = car;
clo60233[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo60233[4] = reverse_u45helper;
clo60233[5] = lst;
clo60233[6] = kont58975;
clo60233[7] = cdr;
void* f5897959097 = encode_clo(clo60233);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5897959097;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam59255_fptr() // lam59255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59256 = arg_buffer[1];
//reading env and args
void* a5888059106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59256))[3];
//not do dummy comment
void* kont58980 = (decode_clo(env59256))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env59256))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont58980;
arg_buffer[3] = lst;
arg_buffer[4] = a5888059106;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59255 = encode_clo(alloc_clo(lam59255_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59257 = arg_buffer[1];
//reading env and args
void* kont58980 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo60235 = alloc_clo(lam59255_fptr, 3);

//setting env list
clo60235[1] = reverse_u45helper;
clo60235[2] = kont58980;
clo60235[3] = lst;
void* f5898159105 = encode_clo(clo60235);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5898159105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam59258_fptr() // lam59258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59259 = arg_buffer[1];
//reading env and args
void* x5888359111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58982 = (decode_clo(env59259))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58982);
arg_buffer[2] = x5888359111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58982))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59258 = encode_clo(alloc_clo(lam59258_fptr, 0));

void* lam59260_fptr() // lam59260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59261 = arg_buffer[1];
//reading env and args
void* a5888859120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58982 = (decode_clo(env59261))[4];
//not do dummy comment
void* a5888459113 = (decode_clo(env59261))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env59261))[2];
//not do dummy comment
void* a5888659116 = (decode_clo(env59261))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58982;
arg_buffer[3] = a5888459113;
arg_buffer[4] = a5888659116;
arg_buffer[5] = a5888859120;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59260 = encode_clo(alloc_clo(lam59260_fptr, 0));

void* lam59262_fptr() // lam59262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59263 = arg_buffer[1];
//reading env and args
void* a5888759118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58982 = (decode_clo(env59263))[6];
//not do dummy comment
void* a5888459113 = (decode_clo(env59263))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env59263))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59263))[3];
//not do dummy comment
void* cons = (decode_clo(env59263))[2];
//not do dummy comment
void* a5888659116 = (decode_clo(env59263))[1];

//creating new closure instance
void** clo60237 = alloc_clo(lam59260_fptr, 4);

//setting env list
clo60237[1] = a5888659116;
clo60237[2] = take_u45helper;
clo60237[3] = a5888459113;
clo60237[4] = kont58982;
void* f5898459119 = encode_clo(clo60237);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5898459119;
arg_buffer[3] = a5888759118;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59262 = encode_clo(alloc_clo(lam59262_fptr, 0));

void* lam59264_fptr() // lam59264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59265 = arg_buffer[1];
//reading env and args
void* a5888659116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59265))[7];
//not do dummy comment
void* kont58982 = (decode_clo(env59265))[6];
//not do dummy comment
void* a5888459113 = (decode_clo(env59265))[5];
//not do dummy comment
void* car = (decode_clo(env59265))[4];
//not do dummy comment
void* cons = (decode_clo(env59265))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env59265))[2];
//not do dummy comment
void* lst2 = (decode_clo(env59265))[1];

//creating new closure instance
void** clo60239 = alloc_clo(lam59262_fptr, 6);

//setting env list
clo60239[1] = a5888659116;
clo60239[2] = cons;
clo60239[3] = lst2;
clo60239[4] = take_u45helper;
clo60239[5] = a5888459113;
clo60239[6] = kont58982;
void* f5898559117 = encode_clo(clo60239);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5898559117;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59264 = encode_clo(alloc_clo(lam59264_fptr, 0));

void* lam59267_fptr() // lam59267 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59268 = arg_buffer[1];
//reading env and args
void* a5888459113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59268))[8];
//not do dummy comment
void* kont58982 = (decode_clo(env59268))[7];
//not do dummy comment
void* cons = (decode_clo(env59268))[6];
//not do dummy comment
void* _u45 = (decode_clo(env59268))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env59268))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59268))[3];
//not do dummy comment
void* n = (decode_clo(env59268))[2];
//not do dummy comment
void* car = (decode_clo(env59268))[1];
mpz_t* mpzvar60240 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60240, "1", 10);
void* a5888559114 = encode_mpz(mpzvar60240);

//creating new closure instance
void** clo60242 = alloc_clo(lam59264_fptr, 7);

//setting env list
clo60242[1] = lst2;
clo60242[2] = take_u45helper;
clo60242[3] = cons;
clo60242[4] = car;
clo60242[5] = a5888459113;
clo60242[6] = kont58982;
clo60242[7] = lst;
void* f5898659115 = encode_clo(clo60242);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5898659115;
arg_buffer[3] = n;
arg_buffer[4] = a5888559114;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59267 = encode_clo(alloc_clo(lam59267_fptr, 0));

void* lam59269_fptr() // lam59269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59270 = arg_buffer[1];
//reading env and args
void* a5888259109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59270))[10];
//not do dummy comment
void* lst = (decode_clo(env59270))[9];
//not do dummy comment
void* reverse = (decode_clo(env59270))[8];
//not do dummy comment
void* kont58982 = (decode_clo(env59270))[7];
//not do dummy comment
void* cons = (decode_clo(env59270))[6];
//not do dummy comment
void* _u45 = (decode_clo(env59270))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env59270))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59270))[3];
//not do dummy comment
void* n = (decode_clo(env59270))[2];
//not do dummy comment
void* car = (decode_clo(env59270))[1];

//if-clause
bool if_guard60243 = is_true(a5888259109);
if(if_guard60243)
{

//creating new closure instance
void** clo60245 = alloc_clo(lam59258_fptr, 1);

//setting env list
clo60245[1] = kont58982;
void* f5898359110 = encode_clo(clo60245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5898359110;
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
void** clo60247 = alloc_clo(lam59267_fptr, 8);

//setting env list
clo60247[1] = car;
clo60247[2] = n;
clo60247[3] = lst2;
clo60247[4] = take_u45helper;
clo60247[5] = _u45;
clo60247[6] = cons;
clo60247[7] = kont58982;
clo60247[8] = lst;
void* f5898759112 = encode_clo(clo60247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5898759112;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59269 = encode_clo(alloc_clo(lam59269_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59272 = arg_buffer[1];
//reading env and args
void* kont58982 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar60248 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60248, "0", 10);
void* a5888159107 = encode_mpz(mpzvar60248);

//creating new closure instance
void** clo60250 = alloc_clo(lam59269_fptr, 10);

//setting env list
clo60250[1] = car;
clo60250[2] = n;
clo60250[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo60250[4] = take_u45helper;
clo60250[5] = _u45;
clo60250[6] = cons;
clo60250[7] = kont58982;
clo60250[8] = reverse;
clo60250[9] = lst;
clo60250[10] = cdr;
void* f5898859108 = encode_clo(clo60250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5898859108;
arg_buffer[3] = n;
arg_buffer[4] = a5888159107;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam59273_fptr() // lam59273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59274 = arg_buffer[1];
//reading env and args
void* a5888959122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59274))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env59274))[3];
//not do dummy comment
void* n = (decode_clo(env59274))[2];
//not do dummy comment
void* kont58989 = (decode_clo(env59274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont58989;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5888959122;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59273 = encode_clo(alloc_clo(lam59273_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59275 = arg_buffer[1];
//reading env and args
void* kont58989 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60252 = alloc_clo(lam59273_fptr, 4);

//setting env list
clo60252[1] = kont58989;
clo60252[2] = n;
clo60252[3] = take_u45helper;
clo60252[4] = lst;
void* f5899059121 = encode_clo(clo60252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5899059121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam59277_fptr() // lam59277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59278 = arg_buffer[1];
//reading env and args
void* a5889459130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58991 = (decode_clo(env59278))[3];
//not do dummy comment
void* a5889259126 = (decode_clo(env59278))[2];
//not do dummy comment
void* _u43 = (decode_clo(env59278))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont58991;
arg_buffer[3] = a5889259126;
arg_buffer[4] = a5889459130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59277 = encode_clo(alloc_clo(lam59277_fptr, 0));

void* lam59279_fptr() // lam59279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59280 = arg_buffer[1];
//reading env and args
void* a5889359128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58991 = (decode_clo(env59280))[4];
//not do dummy comment
void* length = (decode_clo(env59280))[3];
//not do dummy comment
void* a5889259126 = (decode_clo(env59280))[2];
//not do dummy comment
void* _u43 = (decode_clo(env59280))[1];

//creating new closure instance
void** clo60254 = alloc_clo(lam59277_fptr, 3);

//setting env list
clo60254[1] = _u43;
clo60254[2] = a5889259126;
clo60254[3] = kont58991;
void* f5899259129 = encode_clo(clo60254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5899259129;
arg_buffer[3] = a5889359128;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59279 = encode_clo(alloc_clo(lam59279_fptr, 0));

void* lam59282_fptr() // lam59282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59283 = arg_buffer[1];
//reading env and args
void* a5889059124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59283))[5];
//not do dummy comment
void* kont58991 = (decode_clo(env59283))[4];
//not do dummy comment
void* lst = (decode_clo(env59283))[3];
//not do dummy comment
void* length = (decode_clo(env59283))[2];
//not do dummy comment
void* _u43 = (decode_clo(env59283))[1];

//if-clause
bool if_guard60255 = is_true(a5889059124);
if(if_guard60255)
{
mpz_t* mpzvar60256 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60256, "0", 10);
void* x5889159125 = encode_mpz(mpzvar60256);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58991);
arg_buffer[2] = x5889159125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58991))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar60257 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60257, "1", 10);
void* a5889259126 = encode_mpz(mpzvar60257);

//creating new closure instance
void** clo60259 = alloc_clo(lam59279_fptr, 4);

//setting env list
clo60259[1] = _u43;
clo60259[2] = a5889259126;
clo60259[3] = length;
clo60259[4] = kont58991;
void* f5899359127 = encode_clo(clo60259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5899359127;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59282 = encode_clo(alloc_clo(lam59282_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59284 = arg_buffer[1];
//reading env and args
void* kont58991 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo60261 = alloc_clo(lam59282_fptr, 5);

//setting env list
clo60261[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo60261[2] = length;
clo60261[3] = lst;
clo60261[4] = kont58991;
clo60261[5] = cdr;
void* f5899459123 = encode_clo(clo60261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5899459123;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam59285_fptr() // lam59285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59286 = arg_buffer[1];
//reading env and args
void* x5889659134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont58995 = (decode_clo(env59286))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58995);
arg_buffer[2] = x5889659134;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58995))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59285 = encode_clo(alloc_clo(lam59285_fptr, 0));

void* lam59287_fptr() // lam59287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59288 = arg_buffer[1];
//reading env and args
void* a5890059142 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5889859138 = (decode_clo(env59288))[3];
//not do dummy comment
void* kont58995 = (decode_clo(env59288))[2];
//not do dummy comment
void* cons = (decode_clo(env59288))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont58995;
arg_buffer[3] = a5889859138;
arg_buffer[4] = a5890059142;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59287 = encode_clo(alloc_clo(lam59287_fptr, 0));

void* lam59289_fptr() // lam59289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59290 = arg_buffer[1];
//reading env and args
void* a5889959140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5889859138 = (decode_clo(env59290))[5];
//not do dummy comment
void* proc = (decode_clo(env59290))[4];
//not do dummy comment
void* cons = (decode_clo(env59290))[3];
//not do dummy comment
void* map = (decode_clo(env59290))[2];
//not do dummy comment
void* kont58995 = (decode_clo(env59290))[1];

//creating new closure instance
void** clo60263 = alloc_clo(lam59287_fptr, 3);

//setting env list
clo60263[1] = cons;
clo60263[2] = kont58995;
clo60263[3] = a5889859138;
void* f5899759141 = encode_clo(clo60263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5899759141;
arg_buffer[3] = proc;
arg_buffer[4] = a5889959140;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59289 = encode_clo(alloc_clo(lam59289_fptr, 0));

void* lam59291_fptr() // lam59291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59292 = arg_buffer[1];
//reading env and args
void* a5889859138 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59292))[6];
//not do dummy comment
void* lst = (decode_clo(env59292))[5];
//not do dummy comment
void* proc = (decode_clo(env59292))[4];
//not do dummy comment
void* cons = (decode_clo(env59292))[3];
//not do dummy comment
void* map = (decode_clo(env59292))[2];
//not do dummy comment
void* kont58995 = (decode_clo(env59292))[1];

//creating new closure instance
void** clo60265 = alloc_clo(lam59289_fptr, 5);

//setting env list
clo60265[1] = kont58995;
clo60265[2] = map;
clo60265[3] = cons;
clo60265[4] = proc;
clo60265[5] = a5889859138;
void* f5899859139 = encode_clo(clo60265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5899859139;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59291 = encode_clo(alloc_clo(lam59291_fptr, 0));

void* lam59293_fptr() // lam59293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59294 = arg_buffer[1];
//reading env and args
void* a5889759136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59294))[6];
//not do dummy comment
void* lst = (decode_clo(env59294))[5];
//not do dummy comment
void* proc = (decode_clo(env59294))[4];
//not do dummy comment
void* cons = (decode_clo(env59294))[3];
//not do dummy comment
void* map = (decode_clo(env59294))[2];
//not do dummy comment
void* kont58995 = (decode_clo(env59294))[1];

//creating new closure instance
void** clo60267 = alloc_clo(lam59291_fptr, 6);

//setting env list
clo60267[1] = kont58995;
clo60267[2] = map;
clo60267[3] = cons;
clo60267[4] = proc;
clo60267[5] = lst;
clo60267[6] = cdr;
void* f5899959137 = encode_clo(clo60267);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5899959137;
arg_buffer[3] = a5889759136;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59293 = encode_clo(alloc_clo(lam59293_fptr, 0));

void* lam59295_fptr() // lam59295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59296 = arg_buffer[1];
//reading env and args
void* a5889559132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59296))[8];
//not do dummy comment
void* proc = (decode_clo(env59296))[7];
//not do dummy comment
void* car = (decode_clo(env59296))[6];
//not do dummy comment
void* cons = (decode_clo(env59296))[5];
//not do dummy comment
void* list = (decode_clo(env59296))[4];
//not do dummy comment
void* cdr = (decode_clo(env59296))[3];
//not do dummy comment
void* map = (decode_clo(env59296))[2];
//not do dummy comment
void* kont58995 = (decode_clo(env59296))[1];

//if-clause
bool if_guard60268 = is_true(a5889559132);
if(if_guard60268)
{

//creating new closure instance
void** clo60270 = alloc_clo(lam59285_fptr, 1);

//setting env list
clo60270[1] = kont58995;
void* f5899659133 = encode_clo(clo60270);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5899659133;
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
void** clo60272 = alloc_clo(lam59293_fptr, 6);

//setting env list
clo60272[1] = kont58995;
clo60272[2] = map;
clo60272[3] = cons;
clo60272[4] = proc;
clo60272[5] = lst;
clo60272[6] = cdr;
void* f5900059135 = encode_clo(clo60272);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5900059135;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59295 = encode_clo(alloc_clo(lam59295_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59297 = arg_buffer[1];
//reading env and args
void* kont58995 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60274 = alloc_clo(lam59295_fptr, 8);

//setting env list
clo60274[1] = kont58995;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo60274[2] = map;
clo60274[3] = cdr;
clo60274[4] = list;
clo60274[5] = cons;
clo60274[6] = car;
clo60274[7] = proc;
clo60274[8] = lst;
void* f5900159131 = encode_clo(clo60274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5900159131;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam59298_fptr() // lam59298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59299 = arg_buffer[1];
//reading env and args
void* x5890259146 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59002 = (decode_clo(env59299))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59002);
arg_buffer[2] = x5890259146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59002))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59298 = encode_clo(alloc_clo(lam59298_fptr, 0));

void* lam59300_fptr() // lam59300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59301 = arg_buffer[1];
//reading env and args
void* a5890759156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5890559152 = (decode_clo(env59301))[3];
//not do dummy comment
void* kont59002 = (decode_clo(env59301))[2];
//not do dummy comment
void* cons = (decode_clo(env59301))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont59002;
arg_buffer[3] = a5890559152;
arg_buffer[4] = a5890759156;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59300 = encode_clo(alloc_clo(lam59300_fptr, 0));

void* lam59302_fptr() // lam59302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59303 = arg_buffer[1];
//reading env and args
void* a5890659154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5890559152 = (decode_clo(env59303))[5];
//not do dummy comment
void* op = (decode_clo(env59303))[4];
//not do dummy comment
void* kont59002 = (decode_clo(env59303))[3];
//not do dummy comment
void* filter = (decode_clo(env59303))[2];
//not do dummy comment
void* cons = (decode_clo(env59303))[1];

//creating new closure instance
void** clo60276 = alloc_clo(lam59300_fptr, 3);

//setting env list
clo60276[1] = cons;
clo60276[2] = kont59002;
clo60276[3] = a5890559152;
void* f5900459155 = encode_clo(clo60276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5900459155;
arg_buffer[3] = op;
arg_buffer[4] = a5890659154;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59302 = encode_clo(alloc_clo(lam59302_fptr, 0));

void* lam59304_fptr() // lam59304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59305 = arg_buffer[1];
//reading env and args
void* a5890559152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59305))[6];
//not do dummy comment
void* lst = (decode_clo(env59305))[5];
//not do dummy comment
void* op = (decode_clo(env59305))[4];
//not do dummy comment
void* kont59002 = (decode_clo(env59305))[3];
//not do dummy comment
void* filter = (decode_clo(env59305))[2];
//not do dummy comment
void* cons = (decode_clo(env59305))[1];

//creating new closure instance
void** clo60278 = alloc_clo(lam59302_fptr, 5);

//setting env list
clo60278[1] = cons;
clo60278[2] = filter;
clo60278[3] = kont59002;
clo60278[4] = op;
clo60278[5] = a5890559152;
void* f5900559153 = encode_clo(clo60278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5900559153;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59304 = encode_clo(alloc_clo(lam59304_fptr, 0));

void* lam59306_fptr() // lam59306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59307 = arg_buffer[1];
//reading env and args
void* a5890859158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env59307))[3];
//not do dummy comment
void* kont59002 = (decode_clo(env59307))[2];
//not do dummy comment
void* filter = (decode_clo(env59307))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont59002;
arg_buffer[3] = op;
arg_buffer[4] = a5890859158;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59306 = encode_clo(alloc_clo(lam59306_fptr, 0));

void* lam59308_fptr() // lam59308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59309 = arg_buffer[1];
//reading env and args
void* a5890459150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59309))[7];
//not do dummy comment
void* lst = (decode_clo(env59309))[6];
//not do dummy comment
void* op = (decode_clo(env59309))[5];
//not do dummy comment
void* kont59002 = (decode_clo(env59309))[4];
//not do dummy comment
void* cons = (decode_clo(env59309))[3];
//not do dummy comment
void* filter = (decode_clo(env59309))[2];
//not do dummy comment
void* car = (decode_clo(env59309))[1];

//if-clause
bool if_guard60279 = is_true(a5890459150);
if(if_guard60279)
{

//creating new closure instance
void** clo60281 = alloc_clo(lam59304_fptr, 6);

//setting env list
clo60281[1] = cons;
clo60281[2] = filter;
clo60281[3] = kont59002;
clo60281[4] = op;
clo60281[5] = lst;
clo60281[6] = cdr;
void* f5900659151 = encode_clo(clo60281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5900659151;
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
void** clo60283 = alloc_clo(lam59306_fptr, 3);

//setting env list
clo60283[1] = filter;
clo60283[2] = kont59002;
clo60283[3] = op;
void* f5900759157 = encode_clo(clo60283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5900759157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59308 = encode_clo(alloc_clo(lam59308_fptr, 0));

void* lam59310_fptr() // lam59310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59311 = arg_buffer[1];
//reading env and args
void* a5890359148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59311))[7];
//not do dummy comment
void* lst = (decode_clo(env59311))[6];
//not do dummy comment
void* op = (decode_clo(env59311))[5];
//not do dummy comment
void* kont59002 = (decode_clo(env59311))[4];
//not do dummy comment
void* cons = (decode_clo(env59311))[3];
//not do dummy comment
void* filter = (decode_clo(env59311))[2];
//not do dummy comment
void* car = (decode_clo(env59311))[1];

//creating new closure instance
void** clo60285 = alloc_clo(lam59308_fptr, 7);

//setting env list
clo60285[1] = car;
clo60285[2] = filter;
clo60285[3] = cons;
clo60285[4] = kont59002;
clo60285[5] = op;
clo60285[6] = lst;
clo60285[7] = cdr;
void* f5900859149 = encode_clo(clo60285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5900859149;
arg_buffer[3] = a5890359148;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59310 = encode_clo(alloc_clo(lam59310_fptr, 0));

void* lam59312_fptr() // lam59312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59313 = arg_buffer[1];
//reading env and args
void* a5890159144 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env59313))[8];
//not do dummy comment
void* op = (decode_clo(env59313))[7];
//not do dummy comment
void* kont59002 = (decode_clo(env59313))[6];
//not do dummy comment
void* cons = (decode_clo(env59313))[5];
//not do dummy comment
void* list = (decode_clo(env59313))[4];
//not do dummy comment
void* cdr = (decode_clo(env59313))[3];
//not do dummy comment
void* filter = (decode_clo(env59313))[2];
//not do dummy comment
void* car = (decode_clo(env59313))[1];

//if-clause
bool if_guard60286 = is_true(a5890159144);
if(if_guard60286)
{

//creating new closure instance
void** clo60288 = alloc_clo(lam59298_fptr, 1);

//setting env list
clo60288[1] = kont59002;
void* f5900359145 = encode_clo(clo60288);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5900359145;
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
void** clo60290 = alloc_clo(lam59310_fptr, 7);

//setting env list
clo60290[1] = car;
clo60290[2] = filter;
clo60290[3] = cons;
clo60290[4] = kont59002;
clo60290[5] = op;
clo60290[6] = lst;
clo60290[7] = cdr;
void* f5900959147 = encode_clo(clo60290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5900959147;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59312 = encode_clo(alloc_clo(lam59312_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59314 = arg_buffer[1];
//reading env and args
void* kont59002 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60292 = alloc_clo(lam59312_fptr, 8);

//setting env list
clo60292[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo60292[2] = filter;
clo60292[3] = cdr;
clo60292[4] = list;
clo60292[5] = cons;
clo60292[6] = kont59002;
clo60292[7] = op;
clo60292[8] = lst;
void* f5901059143 = encode_clo(clo60292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5901059143;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam59315_fptr() // lam59315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59316 = arg_buffer[1];
//reading env and args
void* a5891359166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env59316))[3];
//not do dummy comment
void* kont59011 = (decode_clo(env59316))[2];
//not do dummy comment
void* a5891159163 = (decode_clo(env59316))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont59011;
arg_buffer[3] = a5891159163;
arg_buffer[4] = a5891359166;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59315 = encode_clo(alloc_clo(lam59315_fptr, 0));

void* lam59318_fptr() // lam59318 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59319 = arg_buffer[1];
//reading env and args
void* a5891159163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env59319))[4];
//not do dummy comment
void* kont59011 = (decode_clo(env59319))[3];
//not do dummy comment
void* n = (decode_clo(env59319))[2];
//not do dummy comment
void* _u45 = (decode_clo(env59319))[1];
mpz_t* mpzvar60293 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60293, "1", 10);
void* a5891259164 = encode_mpz(mpzvar60293);

//creating new closure instance
void** clo60295 = alloc_clo(lam59315_fptr, 3);

//setting env list
clo60295[1] = a5891159163;
clo60295[2] = kont59011;
clo60295[3] = drop;
void* f5901259165 = encode_clo(clo60295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5901259165;
arg_buffer[3] = n;
arg_buffer[4] = a5891259164;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59318 = encode_clo(alloc_clo(lam59318_fptr, 0));

void* lam59320_fptr() // lam59320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59321 = arg_buffer[1];
//reading env and args
void* a5891059161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59321))[6];
//not do dummy comment
void* kont59011 = (decode_clo(env59321))[5];
//not do dummy comment
void* n = (decode_clo(env59321))[4];
//not do dummy comment
void* _u45 = (decode_clo(env59321))[3];
//not do dummy comment
void* lst = (decode_clo(env59321))[2];
//not do dummy comment
void* drop = (decode_clo(env59321))[1];

//if-clause
bool if_guard60296 = is_true(a5891059161);
if(if_guard60296)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59011);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59011))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60298 = alloc_clo(lam59318_fptr, 4);

//setting env list
clo60298[1] = _u45;
clo60298[2] = n;
clo60298[3] = kont59011;
clo60298[4] = drop;
void* f5901359162 = encode_clo(clo60298);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5901359162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59320 = encode_clo(alloc_clo(lam59320_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59323 = arg_buffer[1];
//reading env and args
void* kont59011 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar60299 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60299, "0", 10);
void* a5890959159 = encode_mpz(mpzvar60299);

//creating new closure instance
void** clo60301 = alloc_clo(lam59320_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo60301[1] = drop;
clo60301[2] = lst;
clo60301[3] = _u45;
clo60301[4] = n;
clo60301[5] = kont59011;
clo60301[6] = cdr;
void* f5901459160 = encode_clo(clo60301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5901459160;
arg_buffer[3] = n;
arg_buffer[4] = a5890959159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam59324_fptr() // lam59324 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59325 = arg_buffer[1];
//reading env and args
void* a5891759174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5891559170 = (decode_clo(env59325))[3];
//not do dummy comment
void* kont59015 = (decode_clo(env59325))[2];
//not do dummy comment
void* proc = (decode_clo(env59325))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont59015;
arg_buffer[3] = a5891559170;
arg_buffer[4] = a5891759174;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59324 = encode_clo(alloc_clo(lam59324_fptr, 0));

void* lam59326_fptr() // lam59326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59327 = arg_buffer[1];
//reading env and args
void* a5891659172 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59015 = (decode_clo(env59327))[5];
//not do dummy comment
void* foldr = (decode_clo(env59327))[4];
//not do dummy comment
void* a5891559170 = (decode_clo(env59327))[3];
//not do dummy comment
void* proc = (decode_clo(env59327))[2];
//not do dummy comment
void* acc = (decode_clo(env59327))[1];

//creating new closure instance
void** clo60303 = alloc_clo(lam59324_fptr, 3);

//setting env list
clo60303[1] = proc;
clo60303[2] = kont59015;
clo60303[3] = a5891559170;
void* f5901659173 = encode_clo(clo60303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5901659173;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5891659172;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59326 = encode_clo(alloc_clo(lam59326_fptr, 0));

void* lam59328_fptr() // lam59328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59329 = arg_buffer[1];
//reading env and args
void* a5891559170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59329))[6];
//not do dummy comment
void* kont59015 = (decode_clo(env59329))[5];
//not do dummy comment
void* foldr = (decode_clo(env59329))[4];
//not do dummy comment
void* lst = (decode_clo(env59329))[3];
//not do dummy comment
void* proc = (decode_clo(env59329))[2];
//not do dummy comment
void* acc = (decode_clo(env59329))[1];

//creating new closure instance
void** clo60305 = alloc_clo(lam59326_fptr, 5);

//setting env list
clo60305[1] = acc;
clo60305[2] = proc;
clo60305[3] = a5891559170;
clo60305[4] = foldr;
clo60305[5] = kont59015;
void* f5901759171 = encode_clo(clo60305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5901759171;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59328 = encode_clo(alloc_clo(lam59328_fptr, 0));

void* lam59330_fptr() // lam59330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59331 = arg_buffer[1];
//reading env and args
void* a5891459168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59331))[7];
//not do dummy comment
void* kont59015 = (decode_clo(env59331))[6];
//not do dummy comment
void* car = (decode_clo(env59331))[5];
//not do dummy comment
void* foldr = (decode_clo(env59331))[4];
//not do dummy comment
void* lst = (decode_clo(env59331))[3];
//not do dummy comment
void* proc = (decode_clo(env59331))[2];
//not do dummy comment
void* acc = (decode_clo(env59331))[1];

//if-clause
bool if_guard60306 = is_true(a5891459168);
if(if_guard60306)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59015);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59015))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60308 = alloc_clo(lam59328_fptr, 6);

//setting env list
clo60308[1] = acc;
clo60308[2] = proc;
clo60308[3] = lst;
clo60308[4] = foldr;
clo60308[5] = kont59015;
clo60308[6] = cdr;
void* f5901859169 = encode_clo(clo60308);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5901859169;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59330 = encode_clo(alloc_clo(lam59330_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59332 = arg_buffer[1];
//reading env and args
void* kont59015 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo60310 = alloc_clo(lam59330_fptr, 7);

//setting env list
clo60310[1] = acc;
clo60310[2] = proc;
clo60310[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo60310[4] = foldr;
clo60310[5] = car;
clo60310[6] = kont59015;
clo60310[7] = cdr;
void* f5901959167 = encode_clo(clo60310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5901959167;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam59333_fptr() // lam59333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59334 = arg_buffer[1];
//reading env and args
void* a5892159182 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5891959178 = (decode_clo(env59334))[3];
//not do dummy comment
void* cons = (decode_clo(env59334))[2];
//not do dummy comment
void* kont59020 = (decode_clo(env59334))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont59020;
arg_buffer[3] = a5891959178;
arg_buffer[4] = a5892159182;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59333 = encode_clo(alloc_clo(lam59333_fptr, 0));

void* lam59335_fptr() // lam59335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59336 = arg_buffer[1];
//reading env and args
void* a5892059180 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env59336))[5];
//not do dummy comment
void* a5891959178 = (decode_clo(env59336))[4];
//not do dummy comment
void* lst2 = (decode_clo(env59336))[3];
//not do dummy comment
void* cons = (decode_clo(env59336))[2];
//not do dummy comment
void* kont59020 = (decode_clo(env59336))[1];

//creating new closure instance
void** clo60312 = alloc_clo(lam59333_fptr, 3);

//setting env list
clo60312[1] = kont59020;
clo60312[2] = cons;
clo60312[3] = a5891959178;
void* f5902159181 = encode_clo(clo60312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5902159181;
arg_buffer[3] = a5892059180;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59335 = encode_clo(alloc_clo(lam59335_fptr, 0));

void* lam59337_fptr() // lam59337 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59338 = arg_buffer[1];
//reading env and args
void* a5891959178 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59338))[6];
//not do dummy comment
void* append = (decode_clo(env59338))[5];
//not do dummy comment
void* lst2 = (decode_clo(env59338))[4];
//not do dummy comment
void* lst1 = (decode_clo(env59338))[3];
//not do dummy comment
void* cons = (decode_clo(env59338))[2];
//not do dummy comment
void* kont59020 = (decode_clo(env59338))[1];

//creating new closure instance
void** clo60314 = alloc_clo(lam59335_fptr, 5);

//setting env list
clo60314[1] = kont59020;
clo60314[2] = cons;
clo60314[3] = lst2;
clo60314[4] = a5891959178;
clo60314[5] = append;
void* f5902259179 = encode_clo(clo60314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5902259179;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59337 = encode_clo(alloc_clo(lam59337_fptr, 0));

void* lam59339_fptr() // lam59339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59340 = arg_buffer[1];
//reading env and args
void* a5891859176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env59340))[7];
//not do dummy comment
void* append = (decode_clo(env59340))[6];
//not do dummy comment
void* lst2 = (decode_clo(env59340))[5];
//not do dummy comment
void* lst1 = (decode_clo(env59340))[4];
//not do dummy comment
void* car = (decode_clo(env59340))[3];
//not do dummy comment
void* cons = (decode_clo(env59340))[2];
//not do dummy comment
void* kont59020 = (decode_clo(env59340))[1];

//if-clause
bool if_guard60315 = is_true(a5891859176);
if(if_guard60315)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59020);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59020))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo60317 = alloc_clo(lam59337_fptr, 6);

//setting env list
clo60317[1] = kont59020;
clo60317[2] = cons;
clo60317[3] = lst1;
clo60317[4] = lst2;
clo60317[5] = append;
clo60317[6] = cdr;
void* f5902359177 = encode_clo(clo60317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5902359177;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam59339 = encode_clo(alloc_clo(lam59339_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59341 = arg_buffer[1];
//reading env and args
void* kont59020 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo60319 = alloc_clo(lam59339_fptr, 7);

//setting env list
clo60319[1] = kont59020;
clo60319[2] = cons;
clo60319[3] = car;
clo60319[4] = lst1;
clo60319[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo60319[6] = append;
clo60319[7] = cdr;
void* f5902459175 = encode_clo(clo60319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5902459175;
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
void* _59342 = arg_buffer[1];
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

void* kont5902559183 = prim_car(lst);
void* lst59184 = prim_cdr(lst);
void* x5892259185 = apply_prim_hash(lst59184);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5902559183);
arg_buffer[2] = x5892259185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5902559183))[0]);
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
void* _59343 = arg_buffer[1];
//reading env and args
void* kont59027 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5892359186 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59027);
arg_buffer[2] = x5892359186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59027))[0]);
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
void* _59344 = arg_buffer[1];
//reading env and args
void* kont59028 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5892459187 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59028);
arg_buffer[2] = x5892459187;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59028))[0]);
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
void* _59345 = arg_buffer[1];
//reading env and args
void* kont59029 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5892559188 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59029);
arg_buffer[2] = x5892559188;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59029))[0]);
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
void* _59346 = arg_buffer[1];
//reading env and args
void* kont59030 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5892659189 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59030);
arg_buffer[2] = x5892659189;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59030))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam59348_fptr() // lam59348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59349 = arg_buffer[1];
//reading env and args
void* a5893159195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* hash_u45has_u45key_u63 = (decode_clo(env59349))[2];
//not do dummy comment
void* kont59031 = (decode_clo(env59349))[1];
mpz_t* mpzvar60320 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60320, "5", 10);
void* a5893259196 = encode_mpz(mpzvar60320);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45has_u45key_u63);
arg_buffer[2] = kont59031;
arg_buffer[3] = a5893159195;
arg_buffer[4] = a5893259196;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45has_u45key_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59348 = encode_clo(alloc_clo(lam59348_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59354 = arg_buffer[1];
//reading env and args
void* kont59031 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar60321 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60321, "100", 10);
void* a5892759190 = encode_mpz(mpzvar60321);
mpz_t* mpzvar60322 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60322, "80", 10);
void* a5892859191 = encode_mpz(mpzvar60322);
mpz_t* mpzvar60323 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60323, "10", 10);
void* a5892959192 = encode_mpz(mpzvar60323);
mpz_t* mpzvar60324 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar60324, "2", 10);
void* a5893059193 = encode_mpz(mpzvar60324);

//creating new closure instance
void** clo60326 = alloc_clo(lam59348_fptr, 2);

//setting env list
clo60326[1] = kont59031;
clo60326[2] = hash_u45has_u45key_u63;
void* f5903259194 = encode_clo(clo60326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f5903259194;
arg_buffer[3] = a5892759190;
arg_buffer[4] = a5892859191;
arg_buffer[5] = a5892959192;
arg_buffer[6] = a5893059193;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam59355_fptr() // lam59355 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env59356 = arg_buffer[1];
//reading env and args
void* x5893359198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont59033 = (decode_clo(env59356))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59033);
arg_buffer[2] = x5893359198;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59033))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam59355 = encode_clo(alloc_clo(lam59355_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _59357 = arg_buffer[1];
//reading env and args
void* kont59033 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo60328 = alloc_clo(lam59355_fptr, 1);

//setting env list
clo60328[1] = kont59033;
void* f5903459197 = encode_clo(clo60328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5903459197;
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

