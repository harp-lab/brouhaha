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
void* _8247 = arg_buffer[1];
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

void* kont79828084 = prim_car(lst);
void* lst8085 = prim_cdr(lst);
void* x78948086 = apply_prim__u43(lst8085);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79828084);
arg_buffer[2] = x78948086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79828084))[0]);
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
void* _8248 = arg_buffer[1];
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

void* kont79848087 = prim_car(lst);
void* lst8088 = prim_cdr(lst);
void* x78958089 = apply_prim__u45(lst8088);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79848087);
arg_buffer[2] = x78958089;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79848087))[0]);
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
void* _8249 = arg_buffer[1];
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

void* kont79868090 = prim_car(lst);
void* lst8091 = prim_cdr(lst);
void* x78968092 = apply_prim__u42(lst8091);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79868090);
arg_buffer[2] = x78968092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79868090))[0]);
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
void* _8250 = arg_buffer[1];
//reading env and args
void* kont7988 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x78978093 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7988);
arg_buffer[2] = x78978093;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7988))[0]);
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
void* _8251 = arg_buffer[1];
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

void* kont79898094 = prim_car(lst);
void* lst8095 = prim_cdr(lst);
void* x78988096 = apply_prim__u47(lst8095);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79898094);
arg_buffer[2] = x78988096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79898094))[0]);
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
void* _8252 = arg_buffer[1];
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

void* kont79918097 = prim_car(lst);
void* lst8098 = prim_cdr(lst);
void* x78998099 = apply_prim__u61(lst8098);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79918097);
arg_buffer[2] = x78998099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79918097))[0]);
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
void* _8253 = arg_buffer[1];
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

void* kont79938100 = prim_car(lst);
void* lst8101 = prim_cdr(lst);
void* x79008102 = apply_prim__u62(lst8101);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79938100);
arg_buffer[2] = x79008102;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79938100))[0]);
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
void* _8254 = arg_buffer[1];
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

void* kont79958103 = prim_car(lst);
void* lst8104 = prim_cdr(lst);
void* x79018105 = apply_prim__u60(lst8104);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79958103);
arg_buffer[2] = x79018105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79958103))[0]);
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
void* _8255 = arg_buffer[1];
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

void* kont79978106 = prim_car(lst);
void* lst8107 = prim_cdr(lst);
void* x79028108 = apply_prim__u60_u61(lst8107);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79978106);
arg_buffer[2] = x79028108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79978106))[0]);
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
void* _8256 = arg_buffer[1];
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

void* kont79998109 = prim_car(lst);
void* lst8110 = prim_cdr(lst);
void* x79038111 = apply_prim__u62_u61(lst8110);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79998109);
arg_buffer[2] = x79038111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79998109))[0]);
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
void* _8257 = arg_buffer[1];
//reading env and args
void* kont8001 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x79048112 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8001);
arg_buffer[2] = x79048112;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8001))[0]);
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
void* _8258 = arg_buffer[1];
//reading env and args
void* kont8002 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x79058113 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8002);
arg_buffer[2] = x79058113;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8002))[0]);
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
void* _8259 = arg_buffer[1];
//reading env and args
void* kont8003 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x79068114 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8003);
arg_buffer[2] = x79068114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8003))[0]);
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
void* _8260 = arg_buffer[1];
//reading env and args
void* kont8004 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x79078115 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8004);
arg_buffer[2] = x79078115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8004))[0]);
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
void* _8261 = arg_buffer[1];
//reading env and args
void* kont8005 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x79088116 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8005);
arg_buffer[2] = x79088116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8005))[0]);
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
void* _8262 = arg_buffer[1];
//reading env and args
void* kont8006 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x79098117 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8006);
arg_buffer[2] = x79098117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8006))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam8263_fptr() // lam8263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8264 = arg_buffer[1];
//reading env and args
void* a79128121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8264))[3];
//not do dummy comment
void* a79108118 = (decode_clo(env8264))[2];
//not do dummy comment
void* kont8007 = (decode_clo(env8264))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8007;
arg_buffer[3] = a79108118;
arg_buffer[4] = a79128121;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8263 = encode_clo(alloc_clo(lam8263_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8267 = arg_buffer[1];
//reading env and args
void* kont8007 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9304 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9304, "0", 10);
void* a79108118 = encode_mpz(mpzvar9304);
mpz_t* mpzvar9305 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9305, "2", 10);
void* a79118119 = encode_mpz(mpzvar9305);

//creating new closure instance
void** clo9307 = alloc_clo(lam8263_fptr, 3);

//setting env list
clo9307[1] = kont8007;
clo9307[2] = a79108118;
clo9307[3] = equal_u63;
void* f80088120 = encode_clo(clo9307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f80088120;
arg_buffer[3] = x;
arg_buffer[4] = a79118119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8268_fptr() // lam8268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8269 = arg_buffer[1];
//reading env and args
void* a79158125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79138122 = (decode_clo(env8269))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8269))[2];
//not do dummy comment
void* kont8009 = (decode_clo(env8269))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8009;
arg_buffer[3] = a79138122;
arg_buffer[4] = a79158125;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8268 = encode_clo(alloc_clo(lam8268_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8272 = arg_buffer[1];
//reading env and args
void* kont8009 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9308 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9308, "1", 10);
void* a79138122 = encode_mpz(mpzvar9308);
mpz_t* mpzvar9309 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9309, "2", 10);
void* a79148123 = encode_mpz(mpzvar9309);

//creating new closure instance
void** clo9311 = alloc_clo(lam8268_fptr, 3);

//setting env list
clo9311[1] = kont8009;
clo9311[2] = equal_u63;
clo9311[3] = a79138122;
void* f80108124 = encode_clo(clo9311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f80108124;
arg_buffer[3] = x;
arg_buffer[4] = a79148123;
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
void* _8273 = arg_buffer[1];
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

void* kont80118126 = prim_car(x);
void* x8127 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80118126);
arg_buffer[2] = x8127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80118126))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8276_fptr() // lam8276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8277 = arg_buffer[1];
//reading env and args
void* a79218137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8013 = (decode_clo(env8277))[3];
//not do dummy comment
void* x = (decode_clo(env8277))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8277))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8013;
arg_buffer[3] = x;
arg_buffer[4] = a79218137;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8276 = encode_clo(alloc_clo(lam8276_fptr, 0));

void* lam8278_fptr() // lam8278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8279 = arg_buffer[1];
//reading env and args
void* a79198134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8279))[5];
//not do dummy comment
void* kont8013 = (decode_clo(env8279))[4];
//not do dummy comment
void* lst = (decode_clo(env8279))[3];
//not do dummy comment
void* x = (decode_clo(env8279))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8279))[1];

//if-clause
bool if_guard9312 = is_true(a79198134);
if(if_guard9312)
{
void* x79208135 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8013);
arg_buffer[2] = x79208135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8013))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9314 = alloc_clo(lam8276_fptr, 3);

//setting env list
clo9314[1] = member_u63;
clo9314[2] = x;
clo9314[3] = kont8013;
void* f80148136 = encode_clo(clo9314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80148136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8278 = encode_clo(alloc_clo(lam8278_fptr, 0));

void* lam8280_fptr() // lam8280 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8281 = arg_buffer[1];
//reading env and args
void* a79188132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8281))[6];
//not do dummy comment
void* kont8013 = (decode_clo(env8281))[5];
//not do dummy comment
void* lst = (decode_clo(env8281))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8281))[3];
//not do dummy comment
void* x = (decode_clo(env8281))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8281))[1];

//creating new closure instance
void** clo9316 = alloc_clo(lam8278_fptr, 5);

//setting env list
clo9316[1] = member_u63;
clo9316[2] = x;
clo9316[3] = lst;
clo9316[4] = kont8013;
clo9316[5] = cdr;
void* f80158133 = encode_clo(clo9316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f80158133;
arg_buffer[3] = a79188132;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8280 = encode_clo(alloc_clo(lam8280_fptr, 0));

void* lam8282_fptr() // lam8282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8283 = arg_buffer[1];
//reading env and args
void* a79168129 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8283))[7];
//not do dummy comment
void* kont8013 = (decode_clo(env8283))[6];
//not do dummy comment
void* lst = (decode_clo(env8283))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8283))[4];
//not do dummy comment
void* x = (decode_clo(env8283))[3];
//not do dummy comment
void* car = (decode_clo(env8283))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8283))[1];

//if-clause
bool if_guard9317 = is_true(a79168129);
if(if_guard9317)
{
void* x79178130 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8013);
arg_buffer[2] = x79178130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8013))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9319 = alloc_clo(lam8280_fptr, 6);

//setting env list
clo9319[1] = member_u63;
clo9319[2] = x;
clo9319[3] = equal_u63;
clo9319[4] = lst;
clo9319[5] = kont8013;
clo9319[6] = cdr;
void* f80168131 = encode_clo(clo9319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80168131;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8282 = encode_clo(alloc_clo(lam8282_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8284 = arg_buffer[1];
//reading env and args
void* kont8013 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9321 = alloc_clo(lam8282_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo9321[1] = member_u63;
clo9321[2] = car;
clo9321[3] = x;
clo9321[4] = equal_u63;
clo9321[5] = lst;
clo9321[6] = kont8013;
clo9321[7] = cdr;
void* f80178128 = encode_clo(clo9321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80178128;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8285_fptr() // lam8285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8286 = arg_buffer[1];
//reading env and args
void* a79258145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79248143 = (decode_clo(env8286))[4];
//not do dummy comment
void* kont8018 = (decode_clo(env8286))[3];
//not do dummy comment
void* fun = (decode_clo(env8286))[2];
//not do dummy comment
void* foldl = (decode_clo(env8286))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8018;
arg_buffer[3] = fun;
arg_buffer[4] = a79248143;
arg_buffer[5] = a79258145;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8285 = encode_clo(alloc_clo(lam8285_fptr, 0));

void* lam8287_fptr() // lam8287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8288 = arg_buffer[1];
//reading env and args
void* a79248143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8288))[5];
//not do dummy comment
void* lst = (decode_clo(env8288))[4];
//not do dummy comment
void* kont8018 = (decode_clo(env8288))[3];
//not do dummy comment
void* fun = (decode_clo(env8288))[2];
//not do dummy comment
void* foldl = (decode_clo(env8288))[1];

//creating new closure instance
void** clo9323 = alloc_clo(lam8285_fptr, 4);

//setting env list
clo9323[1] = foldl;
clo9323[2] = fun;
clo9323[3] = kont8018;
clo9323[4] = a79248143;
void* f80198144 = encode_clo(clo9323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80198144;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8287 = encode_clo(alloc_clo(lam8287_fptr, 0));

void* lam8289_fptr() // lam8289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8290 = arg_buffer[1];
//reading env and args
void* a79238141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8290))[6];
//not do dummy comment
void* lst = (decode_clo(env8290))[5];
//not do dummy comment
void* kont8018 = (decode_clo(env8290))[4];
//not do dummy comment
void* fun = (decode_clo(env8290))[3];
//not do dummy comment
void* acc = (decode_clo(env8290))[2];
//not do dummy comment
void* foldl = (decode_clo(env8290))[1];

//creating new closure instance
void** clo9325 = alloc_clo(lam8287_fptr, 5);

//setting env list
clo9325[1] = foldl;
clo9325[2] = fun;
clo9325[3] = kont8018;
clo9325[4] = lst;
clo9325[5] = cdr;
void* f80208142 = encode_clo(clo9325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f80208142;
arg_buffer[3] = a79238141;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8289 = encode_clo(alloc_clo(lam8289_fptr, 0));

void* lam8291_fptr() // lam8291 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8292 = arg_buffer[1];
//reading env and args
void* a79228139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8292))[7];
//not do dummy comment
void* lst = (decode_clo(env8292))[6];
//not do dummy comment
void* kont8018 = (decode_clo(env8292))[5];
//not do dummy comment
void* fun = (decode_clo(env8292))[4];
//not do dummy comment
void* acc = (decode_clo(env8292))[3];
//not do dummy comment
void* car = (decode_clo(env8292))[2];
//not do dummy comment
void* foldl = (decode_clo(env8292))[1];

//if-clause
bool if_guard9326 = is_true(a79228139);
if(if_guard9326)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8018);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8018))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9328 = alloc_clo(lam8289_fptr, 6);

//setting env list
clo9328[1] = foldl;
clo9328[2] = acc;
clo9328[3] = fun;
clo9328[4] = kont8018;
clo9328[5] = lst;
clo9328[6] = cdr;
void* f80218140 = encode_clo(clo9328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80218140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8291 = encode_clo(alloc_clo(lam8291_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8293 = arg_buffer[1];
//reading env and args
void* kont8018 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9330 = alloc_clo(lam8291_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo9330[1] = foldl;
clo9330[2] = car;
clo9330[3] = acc;
clo9330[4] = fun;
clo9330[5] = kont8018;
clo9330[6] = lst;
clo9330[7] = cdr;
void* f80228138 = encode_clo(clo9330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80228138;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8294_fptr() // lam8294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8295 = arg_buffer[1];
//reading env and args
void* a79298153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8295))[3];
//not do dummy comment
void* a79278149 = (decode_clo(env8295))[2];
//not do dummy comment
void* kont8023 = (decode_clo(env8295))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8023;
arg_buffer[3] = a79278149;
arg_buffer[4] = a79298153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8294 = encode_clo(alloc_clo(lam8294_fptr, 0));

void* lam8296_fptr() // lam8296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8297 = arg_buffer[1];
//reading env and args
void* a79288151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8297))[5];
//not do dummy comment
void* a79278149 = (decode_clo(env8297))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8297))[3];
//not do dummy comment
void* kont8023 = (decode_clo(env8297))[2];
//not do dummy comment
void* cons = (decode_clo(env8297))[1];

//creating new closure instance
void** clo9332 = alloc_clo(lam8294_fptr, 3);

//setting env list
clo9332[1] = kont8023;
clo9332[2] = a79278149;
clo9332[3] = reverse_u45helper;
void* f80248152 = encode_clo(clo9332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f80248152;
arg_buffer[3] = a79288151;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8296 = encode_clo(alloc_clo(lam8296_fptr, 0));

void* lam8298_fptr() // lam8298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8299 = arg_buffer[1];
//reading env and args
void* a79278149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8299))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8299))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8299))[4];
//not do dummy comment
void* cons = (decode_clo(env8299))[3];
//not do dummy comment
void* car = (decode_clo(env8299))[2];
//not do dummy comment
void* kont8023 = (decode_clo(env8299))[1];

//creating new closure instance
void** clo9334 = alloc_clo(lam8296_fptr, 5);

//setting env list
clo9334[1] = cons;
clo9334[2] = kont8023;
clo9334[3] = lst2;
clo9334[4] = a79278149;
clo9334[5] = reverse_u45helper;
void* f80258150 = encode_clo(clo9334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80258150;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8298 = encode_clo(alloc_clo(lam8298_fptr, 0));

void* lam8300_fptr() // lam8300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8301 = arg_buffer[1];
//reading env and args
void* a79268147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8301))[7];
//not do dummy comment
void* lst = (decode_clo(env8301))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8301))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8301))[4];
//not do dummy comment
void* cons = (decode_clo(env8301))[3];
//not do dummy comment
void* car = (decode_clo(env8301))[2];
//not do dummy comment
void* kont8023 = (decode_clo(env8301))[1];

//if-clause
bool if_guard9335 = is_true(a79268147);
if(if_guard9335)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8023);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8023))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9337 = alloc_clo(lam8298_fptr, 6);

//setting env list
clo9337[1] = kont8023;
clo9337[2] = car;
clo9337[3] = cons;
clo9337[4] = lst2;
clo9337[5] = reverse_u45helper;
clo9337[6] = lst;
void* f80268148 = encode_clo(clo9337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80268148;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8300 = encode_clo(alloc_clo(lam8300_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8302 = arg_buffer[1];
//reading env and args
void* kont8023 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9339 = alloc_clo(lam8300_fptr, 7);

//setting env list
clo9339[1] = kont8023;
clo9339[2] = car;
clo9339[3] = cons;
clo9339[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo9339[5] = reverse_u45helper;
clo9339[6] = lst;
clo9339[7] = cdr;
void* f80278146 = encode_clo(clo9339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80278146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8303_fptr() // lam8303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8304 = arg_buffer[1];
//reading env and args
void* a79308155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8028 = (decode_clo(env8304))[3];
//not do dummy comment
void* lst = (decode_clo(env8304))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8304))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8028;
arg_buffer[3] = lst;
arg_buffer[4] = a79308155;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8303 = encode_clo(alloc_clo(lam8303_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8305 = arg_buffer[1];
//reading env and args
void* kont8028 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9341 = alloc_clo(lam8303_fptr, 3);

//setting env list
clo9341[1] = reverse_u45helper;
clo9341[2] = lst;
clo9341[3] = kont8028;
void* f80298154 = encode_clo(clo9341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80298154;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8306_fptr() // lam8306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8307 = arg_buffer[1];
//reading env and args
void* x79338160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8030 = (decode_clo(env8307))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8030);
arg_buffer[2] = x79338160;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8030))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8306 = encode_clo(alloc_clo(lam8306_fptr, 0));

void* lam8308_fptr() // lam8308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8309 = arg_buffer[1];
//reading env and args
void* a79388169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8030 = (decode_clo(env8309))[4];
//not do dummy comment
void* a79348162 = (decode_clo(env8309))[3];
//not do dummy comment
void* a79368165 = (decode_clo(env8309))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8309))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8030;
arg_buffer[3] = a79348162;
arg_buffer[4] = a79368165;
arg_buffer[5] = a79388169;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8308 = encode_clo(alloc_clo(lam8308_fptr, 0));

void* lam8310_fptr() // lam8310 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8311 = arg_buffer[1];
//reading env and args
void* a79378167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8030 = (decode_clo(env8311))[6];
//not do dummy comment
void* a79348162 = (decode_clo(env8311))[5];
//not do dummy comment
void* a79368165 = (decode_clo(env8311))[4];
//not do dummy comment
void* cons = (decode_clo(env8311))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8311))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8311))[1];

//creating new closure instance
void** clo9343 = alloc_clo(lam8308_fptr, 4);

//setting env list
clo9343[1] = take_u45helper;
clo9343[2] = a79368165;
clo9343[3] = a79348162;
clo9343[4] = kont8030;
void* f80328168 = encode_clo(clo9343);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f80328168;
arg_buffer[3] = a79378167;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8310 = encode_clo(alloc_clo(lam8310_fptr, 0));

void* lam8312_fptr() // lam8312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8313 = arg_buffer[1];
//reading env and args
void* a79368165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79348162 = (decode_clo(env8313))[7];
//not do dummy comment
void* car = (decode_clo(env8313))[6];
//not do dummy comment
void* cons = (decode_clo(env8313))[5];
//not do dummy comment
void* kont8030 = (decode_clo(env8313))[4];
//not do dummy comment
void* lst = (decode_clo(env8313))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8313))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8313))[1];

//creating new closure instance
void** clo9345 = alloc_clo(lam8310_fptr, 6);

//setting env list
clo9345[1] = lst2;
clo9345[2] = take_u45helper;
clo9345[3] = cons;
clo9345[4] = a79368165;
clo9345[5] = a79348162;
clo9345[6] = kont8030;
void* f80338166 = encode_clo(clo9345);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80338166;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8312 = encode_clo(alloc_clo(lam8312_fptr, 0));

void* lam8315_fptr() // lam8315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8316 = arg_buffer[1];
//reading env and args
void* a79348162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8316))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8316))[7];
//not do dummy comment
void* kont8030 = (decode_clo(env8316))[6];
//not do dummy comment
void* lst = (decode_clo(env8316))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8316))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8316))[3];
//not do dummy comment
void* n = (decode_clo(env8316))[2];
//not do dummy comment
void* car = (decode_clo(env8316))[1];
mpz_t* mpzvar9346 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9346, "1", 10);
void* a79358163 = encode_mpz(mpzvar9346);

//creating new closure instance
void** clo9348 = alloc_clo(lam8312_fptr, 7);

//setting env list
clo9348[1] = lst2;
clo9348[2] = take_u45helper;
clo9348[3] = lst;
clo9348[4] = kont8030;
clo9348[5] = cons;
clo9348[6] = car;
clo9348[7] = a79348162;
void* f80348164 = encode_clo(clo9348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f80348164;
arg_buffer[3] = n;
arg_buffer[4] = a79358163;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8315 = encode_clo(alloc_clo(lam8315_fptr, 0));

void* lam8317_fptr() // lam8317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8318 = arg_buffer[1];
//reading env and args
void* a79328158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8318))[10];
//not do dummy comment
void* reverse = (decode_clo(env8318))[9];
//not do dummy comment
void* cons = (decode_clo(env8318))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8318))[7];
//not do dummy comment
void* kont8030 = (decode_clo(env8318))[6];
//not do dummy comment
void* lst = (decode_clo(env8318))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8318))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8318))[3];
//not do dummy comment
void* n = (decode_clo(env8318))[2];
//not do dummy comment
void* car = (decode_clo(env8318))[1];

//if-clause
bool if_guard9349 = is_true(a79328158);
if(if_guard9349)
{

//creating new closure instance
void** clo9351 = alloc_clo(lam8306_fptr, 1);

//setting env list
clo9351[1] = kont8030;
void* f80318159 = encode_clo(clo9351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f80318159;
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
void** clo9353 = alloc_clo(lam8315_fptr, 8);

//setting env list
clo9353[1] = car;
clo9353[2] = n;
clo9353[3] = lst2;
clo9353[4] = take_u45helper;
clo9353[5] = lst;
clo9353[6] = kont8030;
clo9353[7] = _u45;
clo9353[8] = cons;
void* f80358161 = encode_clo(clo9353);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80358161;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8317 = encode_clo(alloc_clo(lam8317_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8320 = arg_buffer[1];
//reading env and args
void* kont8030 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar9354 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9354, "0", 10);
void* a79318156 = encode_mpz(mpzvar9354);

//creating new closure instance
void** clo9356 = alloc_clo(lam8317_fptr, 10);

//setting env list
clo9356[1] = car;
clo9356[2] = n;
clo9356[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo9356[4] = take_u45helper;
clo9356[5] = lst;
clo9356[6] = kont8030;
clo9356[7] = _u45;
clo9356[8] = cons;
clo9356[9] = reverse;
clo9356[10] = cdr;
void* f80368157 = encode_clo(clo9356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f80368157;
arg_buffer[3] = n;
arg_buffer[4] = a79318156;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8321_fptr() // lam8321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8322 = arg_buffer[1];
//reading env and args
void* a79398171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8322))[4];
//not do dummy comment
void* kont8037 = (decode_clo(env8322))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8322))[2];
//not do dummy comment
void* n = (decode_clo(env8322))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8037;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a79398171;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8321 = encode_clo(alloc_clo(lam8321_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8323 = arg_buffer[1];
//reading env and args
void* kont8037 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9358 = alloc_clo(lam8321_fptr, 4);

//setting env list
clo9358[1] = n;
clo9358[2] = take_u45helper;
clo9358[3] = kont8037;
clo9358[4] = lst;
void* f80388170 = encode_clo(clo9358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80388170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8325_fptr() // lam8325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8326 = arg_buffer[1];
//reading env and args
void* a79448179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79428175 = (decode_clo(env8326))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8326))[2];
//not do dummy comment
void* kont8039 = (decode_clo(env8326))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8039;
arg_buffer[3] = a79428175;
arg_buffer[4] = a79448179;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8325 = encode_clo(alloc_clo(lam8325_fptr, 0));

void* lam8327_fptr() // lam8327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8328 = arg_buffer[1];
//reading env and args
void* a79438177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8328))[4];
//not do dummy comment
void* kont8039 = (decode_clo(env8328))[3];
//not do dummy comment
void* a79428175 = (decode_clo(env8328))[2];
//not do dummy comment
void* length = (decode_clo(env8328))[1];

//creating new closure instance
void** clo9360 = alloc_clo(lam8325_fptr, 3);

//setting env list
clo9360[1] = kont8039;
clo9360[2] = _u43;
clo9360[3] = a79428175;
void* f80408178 = encode_clo(clo9360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f80408178;
arg_buffer[3] = a79438177;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8327 = encode_clo(alloc_clo(lam8327_fptr, 0));

void* lam8330_fptr() // lam8330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8331 = arg_buffer[1];
//reading env and args
void* a79408173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8331))[5];
//not do dummy comment
void* lst = (decode_clo(env8331))[4];
//not do dummy comment
void* length = (decode_clo(env8331))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8331))[2];
//not do dummy comment
void* kont8039 = (decode_clo(env8331))[1];

//if-clause
bool if_guard9361 = is_true(a79408173);
if(if_guard9361)
{
mpz_t* mpzvar9362 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9362, "0", 10);
void* x79418174 = encode_mpz(mpzvar9362);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8039);
arg_buffer[2] = x79418174;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8039))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar9363 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9363, "1", 10);
void* a79428175 = encode_mpz(mpzvar9363);

//creating new closure instance
void** clo9365 = alloc_clo(lam8327_fptr, 4);

//setting env list
clo9365[1] = length;
clo9365[2] = a79428175;
clo9365[3] = kont8039;
clo9365[4] = _u43;
void* f80418176 = encode_clo(clo9365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80418176;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8330 = encode_clo(alloc_clo(lam8330_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8332 = arg_buffer[1];
//reading env and args
void* kont8039 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9367 = alloc_clo(lam8330_fptr, 5);

//setting env list
clo9367[1] = kont8039;
clo9367[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo9367[3] = length;
clo9367[4] = lst;
clo9367[5] = cdr;
void* f80428172 = encode_clo(clo9367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80428172;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8333_fptr() // lam8333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8334 = arg_buffer[1];
//reading env and args
void* x79468183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8043 = (decode_clo(env8334))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8043);
arg_buffer[2] = x79468183;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8043))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8333 = encode_clo(alloc_clo(lam8333_fptr, 0));

void* lam8335_fptr() // lam8335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8336 = arg_buffer[1];
//reading env and args
void* a79508191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8336))[3];
//not do dummy comment
void* kont8043 = (decode_clo(env8336))[2];
//not do dummy comment
void* a79488187 = (decode_clo(env8336))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8043;
arg_buffer[3] = a79488187;
arg_buffer[4] = a79508191;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8335 = encode_clo(alloc_clo(lam8335_fptr, 0));

void* lam8337_fptr() // lam8337 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8338 = arg_buffer[1];
//reading env and args
void* a79498189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8338))[5];
//not do dummy comment
void* proc = (decode_clo(env8338))[4];
//not do dummy comment
void* cons = (decode_clo(env8338))[3];
//not do dummy comment
void* kont8043 = (decode_clo(env8338))[2];
//not do dummy comment
void* a79488187 = (decode_clo(env8338))[1];

//creating new closure instance
void** clo9369 = alloc_clo(lam8335_fptr, 3);

//setting env list
clo9369[1] = a79488187;
clo9369[2] = kont8043;
clo9369[3] = cons;
void* f80458190 = encode_clo(clo9369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f80458190;
arg_buffer[3] = proc;
arg_buffer[4] = a79498189;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8337 = encode_clo(alloc_clo(lam8337_fptr, 0));

void* lam8339_fptr() // lam8339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8340 = arg_buffer[1];
//reading env and args
void* a79488187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8340))[6];
//not do dummy comment
void* kont8043 = (decode_clo(env8340))[5];
//not do dummy comment
void* lst = (decode_clo(env8340))[4];
//not do dummy comment
void* map = (decode_clo(env8340))[3];
//not do dummy comment
void* proc = (decode_clo(env8340))[2];
//not do dummy comment
void* cons = (decode_clo(env8340))[1];

//creating new closure instance
void** clo9371 = alloc_clo(lam8337_fptr, 5);

//setting env list
clo9371[1] = a79488187;
clo9371[2] = kont8043;
clo9371[3] = cons;
clo9371[4] = proc;
clo9371[5] = map;
void* f80468188 = encode_clo(clo9371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80468188;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8339 = encode_clo(alloc_clo(lam8339_fptr, 0));

void* lam8341_fptr() // lam8341 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8342 = arg_buffer[1];
//reading env and args
void* a79478185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8342))[6];
//not do dummy comment
void* kont8043 = (decode_clo(env8342))[5];
//not do dummy comment
void* lst = (decode_clo(env8342))[4];
//not do dummy comment
void* map = (decode_clo(env8342))[3];
//not do dummy comment
void* proc = (decode_clo(env8342))[2];
//not do dummy comment
void* cons = (decode_clo(env8342))[1];

//creating new closure instance
void** clo9373 = alloc_clo(lam8339_fptr, 6);

//setting env list
clo9373[1] = cons;
clo9373[2] = proc;
clo9373[3] = map;
clo9373[4] = lst;
clo9373[5] = kont8043;
clo9373[6] = cdr;
void* f80478186 = encode_clo(clo9373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f80478186;
arg_buffer[3] = a79478185;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8341 = encode_clo(alloc_clo(lam8341_fptr, 0));

void* lam8343_fptr() // lam8343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8344 = arg_buffer[1];
//reading env and args
void* a79458181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8043 = (decode_clo(env8344))[8];
//not do dummy comment
void* lst = (decode_clo(env8344))[7];
//not do dummy comment
void* map = (decode_clo(env8344))[6];
//not do dummy comment
void* proc = (decode_clo(env8344))[5];
//not do dummy comment
void* car = (decode_clo(env8344))[4];
//not do dummy comment
void* cons = (decode_clo(env8344))[3];
//not do dummy comment
void* list = (decode_clo(env8344))[2];
//not do dummy comment
void* cdr = (decode_clo(env8344))[1];

//if-clause
bool if_guard9374 = is_true(a79458181);
if(if_guard9374)
{

//creating new closure instance
void** clo9376 = alloc_clo(lam8333_fptr, 1);

//setting env list
clo9376[1] = kont8043;
void* f80448182 = encode_clo(clo9376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80448182;
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
void** clo9378 = alloc_clo(lam8341_fptr, 6);

//setting env list
clo9378[1] = cons;
clo9378[2] = proc;
clo9378[3] = map;
clo9378[4] = lst;
clo9378[5] = kont8043;
clo9378[6] = cdr;
void* f80488184 = encode_clo(clo9378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80488184;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8343 = encode_clo(alloc_clo(lam8343_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8345 = arg_buffer[1];
//reading env and args
void* kont8043 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9380 = alloc_clo(lam8343_fptr, 8);

//setting env list
clo9380[1] = cdr;
clo9380[2] = list;
clo9380[3] = cons;
clo9380[4] = car;
clo9380[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo9380[6] = map;
clo9380[7] = lst;
clo9380[8] = kont8043;
void* f80498180 = encode_clo(clo9380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80498180;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8346_fptr() // lam8346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8347 = arg_buffer[1];
//reading env and args
void* x79528195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8050 = (decode_clo(env8347))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8050);
arg_buffer[2] = x79528195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8050))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8346 = encode_clo(alloc_clo(lam8346_fptr, 0));

void* lam8348_fptr() // lam8348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8349 = arg_buffer[1];
//reading env and args
void* a79578205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8050 = (decode_clo(env8349))[3];
//not do dummy comment
void* cons = (decode_clo(env8349))[2];
//not do dummy comment
void* a79558201 = (decode_clo(env8349))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8050;
arg_buffer[3] = a79558201;
arg_buffer[4] = a79578205;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8348 = encode_clo(alloc_clo(lam8348_fptr, 0));

void* lam8350_fptr() // lam8350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8351 = arg_buffer[1];
//reading env and args
void* a79568203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8351))[5];
//not do dummy comment
void* kont8050 = (decode_clo(env8351))[4];
//not do dummy comment
void* filter = (decode_clo(env8351))[3];
//not do dummy comment
void* cons = (decode_clo(env8351))[2];
//not do dummy comment
void* a79558201 = (decode_clo(env8351))[1];

//creating new closure instance
void** clo9382 = alloc_clo(lam8348_fptr, 3);

//setting env list
clo9382[1] = a79558201;
clo9382[2] = cons;
clo9382[3] = kont8050;
void* f80528204 = encode_clo(clo9382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f80528204;
arg_buffer[3] = op;
arg_buffer[4] = a79568203;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8350 = encode_clo(alloc_clo(lam8350_fptr, 0));

void* lam8352_fptr() // lam8352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8353 = arg_buffer[1];
//reading env and args
void* a79558201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8353))[6];
//not do dummy comment
void* lst = (decode_clo(env8353))[5];
//not do dummy comment
void* op = (decode_clo(env8353))[4];
//not do dummy comment
void* kont8050 = (decode_clo(env8353))[3];
//not do dummy comment
void* filter = (decode_clo(env8353))[2];
//not do dummy comment
void* cons = (decode_clo(env8353))[1];

//creating new closure instance
void** clo9384 = alloc_clo(lam8350_fptr, 5);

//setting env list
clo9384[1] = a79558201;
clo9384[2] = cons;
clo9384[3] = filter;
clo9384[4] = kont8050;
clo9384[5] = op;
void* f80538202 = encode_clo(clo9384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80538202;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8352 = encode_clo(alloc_clo(lam8352_fptr, 0));

void* lam8354_fptr() // lam8354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8355 = arg_buffer[1];
//reading env and args
void* a79588207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8355))[3];
//not do dummy comment
void* kont8050 = (decode_clo(env8355))[2];
//not do dummy comment
void* filter = (decode_clo(env8355))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8050;
arg_buffer[3] = op;
arg_buffer[4] = a79588207;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8354 = encode_clo(alloc_clo(lam8354_fptr, 0));

void* lam8356_fptr() // lam8356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8357 = arg_buffer[1];
//reading env and args
void* a79548199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8357))[7];
//not do dummy comment
void* lst = (decode_clo(env8357))[6];
//not do dummy comment
void* op = (decode_clo(env8357))[5];
//not do dummy comment
void* kont8050 = (decode_clo(env8357))[4];
//not do dummy comment
void* cons = (decode_clo(env8357))[3];
//not do dummy comment
void* filter = (decode_clo(env8357))[2];
//not do dummy comment
void* car = (decode_clo(env8357))[1];

//if-clause
bool if_guard9385 = is_true(a79548199);
if(if_guard9385)
{

//creating new closure instance
void** clo9387 = alloc_clo(lam8352_fptr, 6);

//setting env list
clo9387[1] = cons;
clo9387[2] = filter;
clo9387[3] = kont8050;
clo9387[4] = op;
clo9387[5] = lst;
clo9387[6] = cdr;
void* f80548200 = encode_clo(clo9387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80548200;
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
void** clo9389 = alloc_clo(lam8354_fptr, 3);

//setting env list
clo9389[1] = filter;
clo9389[2] = kont8050;
clo9389[3] = op;
void* f80558206 = encode_clo(clo9389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80558206;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8356 = encode_clo(alloc_clo(lam8356_fptr, 0));

void* lam8358_fptr() // lam8358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8359 = arg_buffer[1];
//reading env and args
void* a79538197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8359))[7];
//not do dummy comment
void* lst = (decode_clo(env8359))[6];
//not do dummy comment
void* op = (decode_clo(env8359))[5];
//not do dummy comment
void* kont8050 = (decode_clo(env8359))[4];
//not do dummy comment
void* cons = (decode_clo(env8359))[3];
//not do dummy comment
void* filter = (decode_clo(env8359))[2];
//not do dummy comment
void* car = (decode_clo(env8359))[1];

//creating new closure instance
void** clo9391 = alloc_clo(lam8356_fptr, 7);

//setting env list
clo9391[1] = car;
clo9391[2] = filter;
clo9391[3] = cons;
clo9391[4] = kont8050;
clo9391[5] = op;
clo9391[6] = lst;
clo9391[7] = cdr;
void* f80568198 = encode_clo(clo9391);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f80568198;
arg_buffer[3] = a79538197;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8358 = encode_clo(alloc_clo(lam8358_fptr, 0));

void* lam8360_fptr() // lam8360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8361 = arg_buffer[1];
//reading env and args
void* a79518193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8361))[8];
//not do dummy comment
void* op = (decode_clo(env8361))[7];
//not do dummy comment
void* kont8050 = (decode_clo(env8361))[6];
//not do dummy comment
void* cons = (decode_clo(env8361))[5];
//not do dummy comment
void* list = (decode_clo(env8361))[4];
//not do dummy comment
void* cdr = (decode_clo(env8361))[3];
//not do dummy comment
void* filter = (decode_clo(env8361))[2];
//not do dummy comment
void* car = (decode_clo(env8361))[1];

//if-clause
bool if_guard9392 = is_true(a79518193);
if(if_guard9392)
{

//creating new closure instance
void** clo9394 = alloc_clo(lam8346_fptr, 1);

//setting env list
clo9394[1] = kont8050;
void* f80518194 = encode_clo(clo9394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80518194;
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
void** clo9396 = alloc_clo(lam8358_fptr, 7);

//setting env list
clo9396[1] = car;
clo9396[2] = filter;
clo9396[3] = cons;
clo9396[4] = kont8050;
clo9396[5] = op;
clo9396[6] = lst;
clo9396[7] = cdr;
void* f80578196 = encode_clo(clo9396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80578196;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8360 = encode_clo(alloc_clo(lam8360_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8362 = arg_buffer[1];
//reading env and args
void* kont8050 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9398 = alloc_clo(lam8360_fptr, 8);

//setting env list
clo9398[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo9398[2] = filter;
clo9398[3] = cdr;
clo9398[4] = list;
clo9398[5] = cons;
clo9398[6] = kont8050;
clo9398[7] = op;
clo9398[8] = lst;
void* f80588192 = encode_clo(clo9398);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80588192;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8363_fptr() // lam8363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8364 = arg_buffer[1];
//reading env and args
void* a79638215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8059 = (decode_clo(env8364))[3];
//not do dummy comment
void* drop = (decode_clo(env8364))[2];
//not do dummy comment
void* a79618212 = (decode_clo(env8364))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8059;
arg_buffer[3] = a79618212;
arg_buffer[4] = a79638215;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8363 = encode_clo(alloc_clo(lam8363_fptr, 0));

void* lam8366_fptr() // lam8366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8367 = arg_buffer[1];
//reading env and args
void* a79618212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8059 = (decode_clo(env8367))[4];
//not do dummy comment
void* drop = (decode_clo(env8367))[3];
//not do dummy comment
void* n = (decode_clo(env8367))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8367))[1];
mpz_t* mpzvar9399 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9399, "1", 10);
void* a79628213 = encode_mpz(mpzvar9399);

//creating new closure instance
void** clo9401 = alloc_clo(lam8363_fptr, 3);

//setting env list
clo9401[1] = a79618212;
clo9401[2] = drop;
clo9401[3] = kont8059;
void* f80608214 = encode_clo(clo9401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f80608214;
arg_buffer[3] = n;
arg_buffer[4] = a79628213;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8366 = encode_clo(alloc_clo(lam8366_fptr, 0));

void* lam8368_fptr() // lam8368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8369 = arg_buffer[1];
//reading env and args
void* a79608210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8369))[6];
//not do dummy comment
void* kont8059 = (decode_clo(env8369))[5];
//not do dummy comment
void* n = (decode_clo(env8369))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8369))[3];
//not do dummy comment
void* lst = (decode_clo(env8369))[2];
//not do dummy comment
void* drop = (decode_clo(env8369))[1];

//if-clause
bool if_guard9402 = is_true(a79608210);
if(if_guard9402)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8059);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8059))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9404 = alloc_clo(lam8366_fptr, 4);

//setting env list
clo9404[1] = _u45;
clo9404[2] = n;
clo9404[3] = drop;
clo9404[4] = kont8059;
void* f80618211 = encode_clo(clo9404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80618211;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8368 = encode_clo(alloc_clo(lam8368_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8371 = arg_buffer[1];
//reading env and args
void* kont8059 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar9405 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9405, "0", 10);
void* a79598208 = encode_mpz(mpzvar9405);

//creating new closure instance
void** clo9407 = alloc_clo(lam8368_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo9407[1] = drop;
clo9407[2] = lst;
clo9407[3] = _u45;
clo9407[4] = n;
clo9407[5] = kont8059;
clo9407[6] = cdr;
void* f80628209 = encode_clo(clo9407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f80628209;
arg_buffer[3] = n;
arg_buffer[4] = a79598208;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8372_fptr() // lam8372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8373 = arg_buffer[1];
//reading env and args
void* a79678223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79658219 = (decode_clo(env8373))[3];
//not do dummy comment
void* kont8063 = (decode_clo(env8373))[2];
//not do dummy comment
void* proc = (decode_clo(env8373))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8063;
arg_buffer[3] = a79658219;
arg_buffer[4] = a79678223;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8372 = encode_clo(alloc_clo(lam8372_fptr, 0));

void* lam8374_fptr() // lam8374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8375 = arg_buffer[1];
//reading env and args
void* a79668221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79658219 = (decode_clo(env8375))[5];
//not do dummy comment
void* foldr = (decode_clo(env8375))[4];
//not do dummy comment
void* kont8063 = (decode_clo(env8375))[3];
//not do dummy comment
void* proc = (decode_clo(env8375))[2];
//not do dummy comment
void* acc = (decode_clo(env8375))[1];

//creating new closure instance
void** clo9409 = alloc_clo(lam8372_fptr, 3);

//setting env list
clo9409[1] = proc;
clo9409[2] = kont8063;
clo9409[3] = a79658219;
void* f80648222 = encode_clo(clo9409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f80648222;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a79668221;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8374 = encode_clo(alloc_clo(lam8374_fptr, 0));

void* lam8376_fptr() // lam8376 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8377 = arg_buffer[1];
//reading env and args
void* a79658219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8377))[6];
//not do dummy comment
void* kont8063 = (decode_clo(env8377))[5];
//not do dummy comment
void* foldr = (decode_clo(env8377))[4];
//not do dummy comment
void* lst = (decode_clo(env8377))[3];
//not do dummy comment
void* proc = (decode_clo(env8377))[2];
//not do dummy comment
void* acc = (decode_clo(env8377))[1];

//creating new closure instance
void** clo9411 = alloc_clo(lam8374_fptr, 5);

//setting env list
clo9411[1] = acc;
clo9411[2] = proc;
clo9411[3] = kont8063;
clo9411[4] = foldr;
clo9411[5] = a79658219;
void* f80658220 = encode_clo(clo9411);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80658220;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8376 = encode_clo(alloc_clo(lam8376_fptr, 0));

void* lam8378_fptr() // lam8378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8379 = arg_buffer[1];
//reading env and args
void* a79648217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8379))[7];
//not do dummy comment
void* kont8063 = (decode_clo(env8379))[6];
//not do dummy comment
void* car = (decode_clo(env8379))[5];
//not do dummy comment
void* foldr = (decode_clo(env8379))[4];
//not do dummy comment
void* lst = (decode_clo(env8379))[3];
//not do dummy comment
void* proc = (decode_clo(env8379))[2];
//not do dummy comment
void* acc = (decode_clo(env8379))[1];

//if-clause
bool if_guard9412 = is_true(a79648217);
if(if_guard9412)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8063);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8063))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9414 = alloc_clo(lam8376_fptr, 6);

//setting env list
clo9414[1] = acc;
clo9414[2] = proc;
clo9414[3] = lst;
clo9414[4] = foldr;
clo9414[5] = kont8063;
clo9414[6] = cdr;
void* f80668218 = encode_clo(clo9414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80668218;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8378 = encode_clo(alloc_clo(lam8378_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8380 = arg_buffer[1];
//reading env and args
void* kont8063 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9416 = alloc_clo(lam8378_fptr, 7);

//setting env list
clo9416[1] = acc;
clo9416[2] = proc;
clo9416[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo9416[4] = foldr;
clo9416[5] = car;
clo9416[6] = kont8063;
clo9416[7] = cdr;
void* f80678216 = encode_clo(clo9416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80678216;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8381_fptr() // lam8381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8382 = arg_buffer[1];
//reading env and args
void* a79718231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79698227 = (decode_clo(env8382))[3];
//not do dummy comment
void* kont8068 = (decode_clo(env8382))[2];
//not do dummy comment
void* cons = (decode_clo(env8382))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8068;
arg_buffer[3] = a79698227;
arg_buffer[4] = a79718231;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8381 = encode_clo(alloc_clo(lam8381_fptr, 0));

void* lam8383_fptr() // lam8383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8384 = arg_buffer[1];
//reading env and args
void* a79708229 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8384))[5];
//not do dummy comment
void* a79698227 = (decode_clo(env8384))[4];
//not do dummy comment
void* kont8068 = (decode_clo(env8384))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8384))[2];
//not do dummy comment
void* cons = (decode_clo(env8384))[1];

//creating new closure instance
void** clo9418 = alloc_clo(lam8381_fptr, 3);

//setting env list
clo9418[1] = cons;
clo9418[2] = kont8068;
clo9418[3] = a79698227;
void* f80698230 = encode_clo(clo9418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f80698230;
arg_buffer[3] = a79708229;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8383 = encode_clo(alloc_clo(lam8383_fptr, 0));

void* lam8385_fptr() // lam8385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8386 = arg_buffer[1];
//reading env and args
void* a79698227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8386))[6];
//not do dummy comment
void* append = (decode_clo(env8386))[5];
//not do dummy comment
void* kont8068 = (decode_clo(env8386))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8386))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8386))[2];
//not do dummy comment
void* cons = (decode_clo(env8386))[1];

//creating new closure instance
void** clo9420 = alloc_clo(lam8383_fptr, 5);

//setting env list
clo9420[1] = cons;
clo9420[2] = lst2;
clo9420[3] = kont8068;
clo9420[4] = a79698227;
clo9420[5] = append;
void* f80708228 = encode_clo(clo9420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80708228;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8385 = encode_clo(alloc_clo(lam8385_fptr, 0));

void* lam8387_fptr() // lam8387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8388 = arg_buffer[1];
//reading env and args
void* a79688225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8388))[7];
//not do dummy comment
void* append = (decode_clo(env8388))[6];
//not do dummy comment
void* kont8068 = (decode_clo(env8388))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8388))[4];
//not do dummy comment
void* cons = (decode_clo(env8388))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8388))[2];
//not do dummy comment
void* car = (decode_clo(env8388))[1];

//if-clause
bool if_guard9421 = is_true(a79688225);
if(if_guard9421)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8068);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8068))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9423 = alloc_clo(lam8385_fptr, 6);

//setting env list
clo9423[1] = cons;
clo9423[2] = lst1;
clo9423[3] = lst2;
clo9423[4] = kont8068;
clo9423[5] = append;
clo9423[6] = cdr;
void* f80718226 = encode_clo(clo9423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80718226;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8387 = encode_clo(alloc_clo(lam8387_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8389 = arg_buffer[1];
//reading env and args
void* kont8068 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9425 = alloc_clo(lam8387_fptr, 7);

//setting env list
clo9425[1] = car;
clo9425[2] = lst1;
clo9425[3] = cons;
clo9425[4] = lst2;
clo9425[5] = kont8068;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo9425[6] = append;
clo9425[7] = cdr;
void* f80728224 = encode_clo(clo9425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80728224;
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
void* _8390 = arg_buffer[1];
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

void* kont80738232 = prim_car(lst);
void* lst8233 = prim_cdr(lst);
void* x79728234 = apply_prim_hash(lst8233);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80738232);
arg_buffer[2] = x79728234;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80738232))[0]);
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
void* _8391 = arg_buffer[1];
//reading env and args
void* kont8075 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x79738235 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8075);
arg_buffer[2] = x79738235;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8075))[0]);
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
void* _8392 = arg_buffer[1];
//reading env and args
void* kont8076 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x79748236 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8076);
arg_buffer[2] = x79748236;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8076))[0]);
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
void* _8393 = arg_buffer[1];
//reading env and args
void* kont8077 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x79758237 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8077);
arg_buffer[2] = x79758237;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8077))[0]);
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
void* _8394 = arg_buffer[1];
//reading env and args
void* kont8078 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x79768238 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8078);
arg_buffer[2] = x79768238;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8078))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam8395_fptr() // lam8395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8396 = arg_buffer[1];
//reading env and args
void* a79808243 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8079 = (decode_clo(env8396))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8396))[1];
void* cps_u45lst80808244 = prim_cons(kont8079, a79808243);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = cps_u45lst80808244;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8395 = encode_clo(alloc_clo(lam8395_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8400 = arg_buffer[1];
//reading env and args
void* kont8079 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar9426 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9426, "1", 10);
void* a79778239 = encode_mpz(mpzvar9426);
mpz_t* mpzvar9427 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9427, "2", 10);
void* a79788240 = encode_mpz(mpzvar9427);
mpz_t* mpzvar9428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9428, "3", 10);
void* a79798241 = encode_mpz(mpzvar9428);

//creating new closure instance
void** clo9430 = alloc_clo(lam8395_fptr, 2);

//setting env list
clo9430[1] = _u43;
clo9430[2] = kont8079;
void* f80818242 = encode_clo(clo9430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80818242;
arg_buffer[3] = a79778239;
arg_buffer[4] = a79788240;
arg_buffer[5] = a79798241;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8401_fptr() // lam8401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8402 = arg_buffer[1];
//reading env and args
void* x79818246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8082 = (decode_clo(env8402))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8082);
arg_buffer[2] = x79818246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8082))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8401 = encode_clo(alloc_clo(lam8401_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8403 = arg_buffer[1];
//reading env and args
void* kont8082 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo9432 = alloc_clo(lam8401_fptr, 1);

//setting env list
clo9432[1] = kont8082;
void* f80838245 = encode_clo(clo9432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f80838245;
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

