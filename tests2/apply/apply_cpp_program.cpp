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
void* _8243 = arg_buffer[1];
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

void* kont79788080 = prim_car(lst);
void* lst8081 = prim_cdr(lst);
void* x78908082 = apply_prim__u43(lst8081);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79788080);
arg_buffer[2] = x78908082;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79788080))[0]);
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
void* _8244 = arg_buffer[1];
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

void* kont79808083 = prim_car(lst);
void* lst8084 = prim_cdr(lst);
void* x78918085 = apply_prim__u45(lst8084);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79808083);
arg_buffer[2] = x78918085;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79808083))[0]);
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
void* _8245 = arg_buffer[1];
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

void* kont79828086 = prim_car(lst);
void* lst8087 = prim_cdr(lst);
void* x78928088 = apply_prim__u42(lst8087);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79828086);
arg_buffer[2] = x78928088;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79828086))[0]);
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
void* _8246 = arg_buffer[1];
//reading env and args
void* kont7984 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x78938089 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7984);
arg_buffer[2] = x78938089;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7984))[0]);
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

void* kont79858090 = prim_car(lst);
void* lst8091 = prim_cdr(lst);
void* x78948092 = apply_prim__u47(lst8091);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79858090);
arg_buffer[2] = x78948092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79858090))[0]);
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

void* kont79878093 = prim_car(lst);
void* lst8094 = prim_cdr(lst);
void* x78958095 = apply_prim__u61(lst8094);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79878093);
arg_buffer[2] = x78958095;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79878093))[0]);
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

void* kont79898096 = prim_car(lst);
void* lst8097 = prim_cdr(lst);
void* x78968098 = apply_prim__u62(lst8097);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79898096);
arg_buffer[2] = x78968098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79898096))[0]);
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
void* _8250 = arg_buffer[1];
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

void* kont79918099 = prim_car(lst);
void* lst8100 = prim_cdr(lst);
void* x78978101 = apply_prim__u60(lst8100);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79918099);
arg_buffer[2] = x78978101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79918099))[0]);
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

void* kont79938102 = prim_car(lst);
void* lst8103 = prim_cdr(lst);
void* x78988104 = apply_prim__u60_u61(lst8103);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79938102);
arg_buffer[2] = x78988104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79938102))[0]);
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

void* kont79958105 = prim_car(lst);
void* lst8106 = prim_cdr(lst);
void* x78998107 = apply_prim__u62_u61(lst8106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79958105);
arg_buffer[2] = x78998107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79958105))[0]);
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
void* _8253 = arg_buffer[1];
//reading env and args
void* kont7997 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x79008108 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7997);
arg_buffer[2] = x79008108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7997))[0]);
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
void* _8254 = arg_buffer[1];
//reading env and args
void* kont7998 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x79018109 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7998);
arg_buffer[2] = x79018109;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7998))[0]);
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
void* _8255 = arg_buffer[1];
//reading env and args
void* kont7999 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x79028110 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7999);
arg_buffer[2] = x79028110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7999))[0]);
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
void* _8256 = arg_buffer[1];
//reading env and args
void* kont8000 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x79038111 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8000);
arg_buffer[2] = x79038111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8000))[0]);
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
void* _8257 = arg_buffer[1];
//reading env and args
void* kont8001 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x79048112 = prim_car(lst);

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

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8258 = arg_buffer[1];
//reading env and args
void* kont8002 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x79058113 = prim_cdr(lst);

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

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam8259_fptr() // lam8259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8260 = arg_buffer[1];
//reading env and args
void* a79088117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8260))[3];
//not do dummy comment
void* a79068114 = (decode_clo(env8260))[2];
//not do dummy comment
void* kont8003 = (decode_clo(env8260))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8003;
arg_buffer[3] = a79068114;
arg_buffer[4] = a79088117;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8259 = encode_clo(alloc_clo(lam8259_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8263 = arg_buffer[1];
//reading env and args
void* kont8003 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9300 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9300, "0", 10);
void* a79068114 = encode_mpz(mpzvar9300);
mpz_t* mpzvar9301 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9301, "2", 10);
void* a79078115 = encode_mpz(mpzvar9301);

//creating new closure instance
void** clo9303 = alloc_clo(lam8259_fptr, 3);

//setting env list
clo9303[1] = kont8003;
clo9303[2] = a79068114;
clo9303[3] = equal_u63;
void* f80048116 = encode_clo(clo9303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f80048116;
arg_buffer[3] = x;
arg_buffer[4] = a79078115;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8264_fptr() // lam8264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8265 = arg_buffer[1];
//reading env and args
void* a79118121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79098118 = (decode_clo(env8265))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8265))[2];
//not do dummy comment
void* kont8005 = (decode_clo(env8265))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8005;
arg_buffer[3] = a79098118;
arg_buffer[4] = a79118121;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8264 = encode_clo(alloc_clo(lam8264_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8268 = arg_buffer[1];
//reading env and args
void* kont8005 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9304 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9304, "1", 10);
void* a79098118 = encode_mpz(mpzvar9304);
mpz_t* mpzvar9305 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9305, "2", 10);
void* a79108119 = encode_mpz(mpzvar9305);

//creating new closure instance
void** clo9307 = alloc_clo(lam8264_fptr, 3);

//setting env list
clo9307[1] = kont8005;
clo9307[2] = equal_u63;
clo9307[3] = a79098118;
void* f80068120 = encode_clo(clo9307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f80068120;
arg_buffer[3] = x;
arg_buffer[4] = a79108119;
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
void* _8269 = arg_buffer[1];
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

void* kont80078122 = prim_car(x);
void* x8123 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80078122);
arg_buffer[2] = x8123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80078122))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8272_fptr() // lam8272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8273 = arg_buffer[1];
//reading env and args
void* a79178133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8009 = (decode_clo(env8273))[3];
//not do dummy comment
void* x = (decode_clo(env8273))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8273))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8009;
arg_buffer[3] = x;
arg_buffer[4] = a79178133;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8272 = encode_clo(alloc_clo(lam8272_fptr, 0));

void* lam8274_fptr() // lam8274 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8275 = arg_buffer[1];
//reading env and args
void* a79158130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8275))[5];
//not do dummy comment
void* kont8009 = (decode_clo(env8275))[4];
//not do dummy comment
void* lst = (decode_clo(env8275))[3];
//not do dummy comment
void* x = (decode_clo(env8275))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8275))[1];

//if-clause
bool if_guard9308 = is_true(a79158130);
if(if_guard9308)
{
void* x79168131 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8009);
arg_buffer[2] = x79168131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8009))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9310 = alloc_clo(lam8272_fptr, 3);

//setting env list
clo9310[1] = member_u63;
clo9310[2] = x;
clo9310[3] = kont8009;
void* f80108132 = encode_clo(clo9310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80108132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8274 = encode_clo(alloc_clo(lam8274_fptr, 0));

void* lam8276_fptr() // lam8276 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8277 = arg_buffer[1];
//reading env and args
void* a79148128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8277))[6];
//not do dummy comment
void* kont8009 = (decode_clo(env8277))[5];
//not do dummy comment
void* lst = (decode_clo(env8277))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8277))[3];
//not do dummy comment
void* x = (decode_clo(env8277))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8277))[1];

//creating new closure instance
void** clo9312 = alloc_clo(lam8274_fptr, 5);

//setting env list
clo9312[1] = member_u63;
clo9312[2] = x;
clo9312[3] = lst;
clo9312[4] = kont8009;
clo9312[5] = cdr;
void* f80118129 = encode_clo(clo9312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f80118129;
arg_buffer[3] = a79148128;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
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
void* a79128125 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8279))[7];
//not do dummy comment
void* kont8009 = (decode_clo(env8279))[6];
//not do dummy comment
void* lst = (decode_clo(env8279))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8279))[4];
//not do dummy comment
void* x = (decode_clo(env8279))[3];
//not do dummy comment
void* car = (decode_clo(env8279))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8279))[1];

//if-clause
bool if_guard9313 = is_true(a79128125);
if(if_guard9313)
{
void* x79138126 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8009);
arg_buffer[2] = x79138126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8009))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9315 = alloc_clo(lam8276_fptr, 6);

//setting env list
clo9315[1] = member_u63;
clo9315[2] = x;
clo9315[3] = equal_u63;
clo9315[4] = lst;
clo9315[5] = kont8009;
clo9315[6] = cdr;
void* f80128127 = encode_clo(clo9315);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80128127;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8278 = encode_clo(alloc_clo(lam8278_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8280 = arg_buffer[1];
//reading env and args
void* kont8009 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9317 = alloc_clo(lam8278_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo9317[1] = member_u63;
clo9317[2] = car;
clo9317[3] = x;
clo9317[4] = equal_u63;
clo9317[5] = lst;
clo9317[6] = kont8009;
clo9317[7] = cdr;
void* f80138124 = encode_clo(clo9317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80138124;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8281_fptr() // lam8281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8282 = arg_buffer[1];
//reading env and args
void* a79218141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79208139 = (decode_clo(env8282))[4];
//not do dummy comment
void* kont8014 = (decode_clo(env8282))[3];
//not do dummy comment
void* fun = (decode_clo(env8282))[2];
//not do dummy comment
void* foldl = (decode_clo(env8282))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8014;
arg_buffer[3] = fun;
arg_buffer[4] = a79208139;
arg_buffer[5] = a79218141;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8281 = encode_clo(alloc_clo(lam8281_fptr, 0));

void* lam8283_fptr() // lam8283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8284 = arg_buffer[1];
//reading env and args
void* a79208139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8284))[5];
//not do dummy comment
void* lst = (decode_clo(env8284))[4];
//not do dummy comment
void* kont8014 = (decode_clo(env8284))[3];
//not do dummy comment
void* fun = (decode_clo(env8284))[2];
//not do dummy comment
void* foldl = (decode_clo(env8284))[1];

//creating new closure instance
void** clo9319 = alloc_clo(lam8281_fptr, 4);

//setting env list
clo9319[1] = foldl;
clo9319[2] = fun;
clo9319[3] = kont8014;
clo9319[4] = a79208139;
void* f80158140 = encode_clo(clo9319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80158140;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8283 = encode_clo(alloc_clo(lam8283_fptr, 0));

void* lam8285_fptr() // lam8285 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8286 = arg_buffer[1];
//reading env and args
void* a79198137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8286))[6];
//not do dummy comment
void* lst = (decode_clo(env8286))[5];
//not do dummy comment
void* kont8014 = (decode_clo(env8286))[4];
//not do dummy comment
void* fun = (decode_clo(env8286))[3];
//not do dummy comment
void* acc = (decode_clo(env8286))[2];
//not do dummy comment
void* foldl = (decode_clo(env8286))[1];

//creating new closure instance
void** clo9321 = alloc_clo(lam8283_fptr, 5);

//setting env list
clo9321[1] = foldl;
clo9321[2] = fun;
clo9321[3] = kont8014;
clo9321[4] = lst;
clo9321[5] = cdr;
void* f80168138 = encode_clo(clo9321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f80168138;
arg_buffer[3] = a79198137;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a79188135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8288))[7];
//not do dummy comment
void* lst = (decode_clo(env8288))[6];
//not do dummy comment
void* kont8014 = (decode_clo(env8288))[5];
//not do dummy comment
void* fun = (decode_clo(env8288))[4];
//not do dummy comment
void* acc = (decode_clo(env8288))[3];
//not do dummy comment
void* car = (decode_clo(env8288))[2];
//not do dummy comment
void* foldl = (decode_clo(env8288))[1];

//if-clause
bool if_guard9322 = is_true(a79188135);
if(if_guard9322)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8014);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8014))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9324 = alloc_clo(lam8285_fptr, 6);

//setting env list
clo9324[1] = foldl;
clo9324[2] = acc;
clo9324[3] = fun;
clo9324[4] = kont8014;
clo9324[5] = lst;
clo9324[6] = cdr;
void* f80178136 = encode_clo(clo9324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80178136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8287 = encode_clo(alloc_clo(lam8287_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8289 = arg_buffer[1];
//reading env and args
void* kont8014 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9326 = alloc_clo(lam8287_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo9326[1] = foldl;
clo9326[2] = car;
clo9326[3] = acc;
clo9326[4] = fun;
clo9326[5] = kont8014;
clo9326[6] = lst;
clo9326[7] = cdr;
void* f80188134 = encode_clo(clo9326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80188134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8290_fptr() // lam8290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8291 = arg_buffer[1];
//reading env and args
void* a79258149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8291))[3];
//not do dummy comment
void* a79238145 = (decode_clo(env8291))[2];
//not do dummy comment
void* kont8019 = (decode_clo(env8291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8019;
arg_buffer[3] = a79238145;
arg_buffer[4] = a79258149;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8290 = encode_clo(alloc_clo(lam8290_fptr, 0));

void* lam8292_fptr() // lam8292 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8293 = arg_buffer[1];
//reading env and args
void* a79248147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8293))[5];
//not do dummy comment
void* a79238145 = (decode_clo(env8293))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8293))[3];
//not do dummy comment
void* kont8019 = (decode_clo(env8293))[2];
//not do dummy comment
void* cons = (decode_clo(env8293))[1];

//creating new closure instance
void** clo9328 = alloc_clo(lam8290_fptr, 3);

//setting env list
clo9328[1] = kont8019;
clo9328[2] = a79238145;
clo9328[3] = reverse_u45helper;
void* f80208148 = encode_clo(clo9328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f80208148;
arg_buffer[3] = a79248147;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8292 = encode_clo(alloc_clo(lam8292_fptr, 0));

void* lam8294_fptr() // lam8294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8295 = arg_buffer[1];
//reading env and args
void* a79238145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8295))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8295))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8295))[4];
//not do dummy comment
void* cons = (decode_clo(env8295))[3];
//not do dummy comment
void* kont8019 = (decode_clo(env8295))[2];
//not do dummy comment
void* car = (decode_clo(env8295))[1];

//creating new closure instance
void** clo9330 = alloc_clo(lam8292_fptr, 5);

//setting env list
clo9330[1] = cons;
clo9330[2] = kont8019;
clo9330[3] = lst2;
clo9330[4] = a79238145;
clo9330[5] = reverse_u45helper;
void* f80218146 = encode_clo(clo9330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80218146;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a79228143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8297))[7];
//not do dummy comment
void* lst = (decode_clo(env8297))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8297))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8297))[4];
//not do dummy comment
void* cons = (decode_clo(env8297))[3];
//not do dummy comment
void* kont8019 = (decode_clo(env8297))[2];
//not do dummy comment
void* car = (decode_clo(env8297))[1];

//if-clause
bool if_guard9331 = is_true(a79228143);
if(if_guard9331)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8019);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8019))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9333 = alloc_clo(lam8294_fptr, 6);

//setting env list
clo9333[1] = car;
clo9333[2] = kont8019;
clo9333[3] = cons;
clo9333[4] = lst2;
clo9333[5] = reverse_u45helper;
clo9333[6] = lst;
void* f80228144 = encode_clo(clo9333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80228144;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8296 = encode_clo(alloc_clo(lam8296_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8298 = arg_buffer[1];
//reading env and args
void* kont8019 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9335 = alloc_clo(lam8296_fptr, 7);

//setting env list
clo9335[1] = car;
clo9335[2] = kont8019;
clo9335[3] = cons;
clo9335[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo9335[5] = reverse_u45helper;
clo9335[6] = lst;
clo9335[7] = cdr;
void* f80238142 = encode_clo(clo9335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80238142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8299_fptr() // lam8299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8300 = arg_buffer[1];
//reading env and args
void* a79268151 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8024 = (decode_clo(env8300))[3];
//not do dummy comment
void* lst = (decode_clo(env8300))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8024;
arg_buffer[3] = lst;
arg_buffer[4] = a79268151;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8299 = encode_clo(alloc_clo(lam8299_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8301 = arg_buffer[1];
//reading env and args
void* kont8024 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9337 = alloc_clo(lam8299_fptr, 3);

//setting env list
clo9337[1] = reverse_u45helper;
clo9337[2] = lst;
clo9337[3] = kont8024;
void* f80258150 = encode_clo(clo9337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80258150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8302_fptr() // lam8302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8303 = arg_buffer[1];
//reading env and args
void* x79298156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8026 = (decode_clo(env8303))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8026);
arg_buffer[2] = x79298156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8026))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8302 = encode_clo(alloc_clo(lam8302_fptr, 0));

void* lam8304_fptr() // lam8304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8305 = arg_buffer[1];
//reading env and args
void* a79348165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8026 = (decode_clo(env8305))[4];
//not do dummy comment
void* a79308158 = (decode_clo(env8305))[3];
//not do dummy comment
void* a79328161 = (decode_clo(env8305))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env8305))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8026;
arg_buffer[3] = a79308158;
arg_buffer[4] = a79328161;
arg_buffer[5] = a79348165;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8304 = encode_clo(alloc_clo(lam8304_fptr, 0));

void* lam8306_fptr() // lam8306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8307 = arg_buffer[1];
//reading env and args
void* a79338163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8026 = (decode_clo(env8307))[6];
//not do dummy comment
void* a79308158 = (decode_clo(env8307))[5];
//not do dummy comment
void* a79328161 = (decode_clo(env8307))[4];
//not do dummy comment
void* cons = (decode_clo(env8307))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8307))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8307))[1];

//creating new closure instance
void** clo9339 = alloc_clo(lam8304_fptr, 4);

//setting env list
clo9339[1] = take_u45helper;
clo9339[2] = a79328161;
clo9339[3] = a79308158;
clo9339[4] = kont8026;
void* f80288164 = encode_clo(clo9339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f80288164;
arg_buffer[3] = a79338163;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a79328161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79308158 = (decode_clo(env8309))[7];
//not do dummy comment
void* car = (decode_clo(env8309))[6];
//not do dummy comment
void* cons = (decode_clo(env8309))[5];
//not do dummy comment
void* lst = (decode_clo(env8309))[4];
//not do dummy comment
void* kont8026 = (decode_clo(env8309))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8309))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8309))[1];

//creating new closure instance
void** clo9341 = alloc_clo(lam8306_fptr, 6);

//setting env list
clo9341[1] = lst2;
clo9341[2] = take_u45helper;
clo9341[3] = cons;
clo9341[4] = a79328161;
clo9341[5] = a79308158;
clo9341[6] = kont8026;
void* f80298162 = encode_clo(clo9341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80298162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8308 = encode_clo(alloc_clo(lam8308_fptr, 0));

void* lam8311_fptr() // lam8311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8312 = arg_buffer[1];
//reading env and args
void* a79308158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8312))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8312))[7];
//not do dummy comment
void* lst = (decode_clo(env8312))[6];
//not do dummy comment
void* kont8026 = (decode_clo(env8312))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8312))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8312))[3];
//not do dummy comment
void* n = (decode_clo(env8312))[2];
//not do dummy comment
void* car = (decode_clo(env8312))[1];
mpz_t* mpzvar9342 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9342, "1", 10);
void* a79318159 = encode_mpz(mpzvar9342);

//creating new closure instance
void** clo9344 = alloc_clo(lam8308_fptr, 7);

//setting env list
clo9344[1] = lst2;
clo9344[2] = take_u45helper;
clo9344[3] = kont8026;
clo9344[4] = lst;
clo9344[5] = cons;
clo9344[6] = car;
clo9344[7] = a79308158;
void* f80308160 = encode_clo(clo9344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f80308160;
arg_buffer[3] = n;
arg_buffer[4] = a79318159;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8311 = encode_clo(alloc_clo(lam8311_fptr, 0));

void* lam8313_fptr() // lam8313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8314 = arg_buffer[1];
//reading env and args
void* a79288154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8314))[10];
//not do dummy comment
void* reverse = (decode_clo(env8314))[9];
//not do dummy comment
void* cons = (decode_clo(env8314))[8];
//not do dummy comment
void* _u45 = (decode_clo(env8314))[7];
//not do dummy comment
void* lst = (decode_clo(env8314))[6];
//not do dummy comment
void* kont8026 = (decode_clo(env8314))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8314))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8314))[3];
//not do dummy comment
void* n = (decode_clo(env8314))[2];
//not do dummy comment
void* car = (decode_clo(env8314))[1];

//if-clause
bool if_guard9345 = is_true(a79288154);
if(if_guard9345)
{

//creating new closure instance
void** clo9347 = alloc_clo(lam8302_fptr, 1);

//setting env list
clo9347[1] = kont8026;
void* f80278155 = encode_clo(clo9347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f80278155;
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
void** clo9349 = alloc_clo(lam8311_fptr, 8);

//setting env list
clo9349[1] = car;
clo9349[2] = n;
clo9349[3] = lst2;
clo9349[4] = take_u45helper;
clo9349[5] = kont8026;
clo9349[6] = lst;
clo9349[7] = _u45;
clo9349[8] = cons;
void* f80318157 = encode_clo(clo9349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80318157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8313 = encode_clo(alloc_clo(lam8313_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8316 = arg_buffer[1];
//reading env and args
void* kont8026 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar9350 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9350, "0", 10);
void* a79278152 = encode_mpz(mpzvar9350);

//creating new closure instance
void** clo9352 = alloc_clo(lam8313_fptr, 10);

//setting env list
clo9352[1] = car;
clo9352[2] = n;
clo9352[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo9352[4] = take_u45helper;
clo9352[5] = kont8026;
clo9352[6] = lst;
clo9352[7] = _u45;
clo9352[8] = cons;
clo9352[9] = reverse;
clo9352[10] = cdr;
void* f80328153 = encode_clo(clo9352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f80328153;
arg_buffer[3] = n;
arg_buffer[4] = a79278152;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8317_fptr() // lam8317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8318 = arg_buffer[1];
//reading env and args
void* a79358167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8318))[4];
//not do dummy comment
void* kont8033 = (decode_clo(env8318))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8318))[2];
//not do dummy comment
void* n = (decode_clo(env8318))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8033;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a79358167;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8317 = encode_clo(alloc_clo(lam8317_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8319 = arg_buffer[1];
//reading env and args
void* kont8033 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9354 = alloc_clo(lam8317_fptr, 4);

//setting env list
clo9354[1] = n;
clo9354[2] = take_u45helper;
clo9354[3] = kont8033;
clo9354[4] = lst;
void* f80348166 = encode_clo(clo9354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80348166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8321_fptr() // lam8321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8322 = arg_buffer[1];
//reading env and args
void* a79408175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79388171 = (decode_clo(env8322))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8322))[2];
//not do dummy comment
void* kont8035 = (decode_clo(env8322))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8035;
arg_buffer[3] = a79388171;
arg_buffer[4] = a79408175;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8321 = encode_clo(alloc_clo(lam8321_fptr, 0));

void* lam8323_fptr() // lam8323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8324 = arg_buffer[1];
//reading env and args
void* a79398173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8324))[4];
//not do dummy comment
void* kont8035 = (decode_clo(env8324))[3];
//not do dummy comment
void* a79388171 = (decode_clo(env8324))[2];
//not do dummy comment
void* length = (decode_clo(env8324))[1];

//creating new closure instance
void** clo9356 = alloc_clo(lam8321_fptr, 3);

//setting env list
clo9356[1] = kont8035;
clo9356[2] = _u43;
clo9356[3] = a79388171;
void* f80368174 = encode_clo(clo9356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f80368174;
arg_buffer[3] = a79398173;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8323 = encode_clo(alloc_clo(lam8323_fptr, 0));

void* lam8326_fptr() // lam8326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8327 = arg_buffer[1];
//reading env and args
void* a79368169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8327))[5];
//not do dummy comment
void* lst = (decode_clo(env8327))[4];
//not do dummy comment
void* length = (decode_clo(env8327))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8327))[2];
//not do dummy comment
void* kont8035 = (decode_clo(env8327))[1];

//if-clause
bool if_guard9357 = is_true(a79368169);
if(if_guard9357)
{
mpz_t* mpzvar9358 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9358, "0", 10);
void* x79378170 = encode_mpz(mpzvar9358);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8035);
arg_buffer[2] = x79378170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8035))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar9359 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9359, "1", 10);
void* a79388171 = encode_mpz(mpzvar9359);

//creating new closure instance
void** clo9361 = alloc_clo(lam8323_fptr, 4);

//setting env list
clo9361[1] = length;
clo9361[2] = a79388171;
clo9361[3] = kont8035;
clo9361[4] = _u43;
void* f80378172 = encode_clo(clo9361);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80378172;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8326 = encode_clo(alloc_clo(lam8326_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8328 = arg_buffer[1];
//reading env and args
void* kont8035 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9363 = alloc_clo(lam8326_fptr, 5);

//setting env list
clo9363[1] = kont8035;
clo9363[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo9363[3] = length;
clo9363[4] = lst;
clo9363[5] = cdr;
void* f80388168 = encode_clo(clo9363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80388168;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8329_fptr() // lam8329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8330 = arg_buffer[1];
//reading env and args
void* x79428179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8039 = (decode_clo(env8330))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8039);
arg_buffer[2] = x79428179;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8039))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8329 = encode_clo(alloc_clo(lam8329_fptr, 0));

void* lam8331_fptr() // lam8331 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8332 = arg_buffer[1];
//reading env and args
void* a79468187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8332))[3];
//not do dummy comment
void* kont8039 = (decode_clo(env8332))[2];
//not do dummy comment
void* a79448183 = (decode_clo(env8332))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8039;
arg_buffer[3] = a79448183;
arg_buffer[4] = a79468187;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8331 = encode_clo(alloc_clo(lam8331_fptr, 0));

void* lam8333_fptr() // lam8333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8334 = arg_buffer[1];
//reading env and args
void* a79458185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8334))[5];
//not do dummy comment
void* proc = (decode_clo(env8334))[4];
//not do dummy comment
void* cons = (decode_clo(env8334))[3];
//not do dummy comment
void* kont8039 = (decode_clo(env8334))[2];
//not do dummy comment
void* a79448183 = (decode_clo(env8334))[1];

//creating new closure instance
void** clo9365 = alloc_clo(lam8331_fptr, 3);

//setting env list
clo9365[1] = a79448183;
clo9365[2] = kont8039;
clo9365[3] = cons;
void* f80418186 = encode_clo(clo9365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f80418186;
arg_buffer[3] = proc;
arg_buffer[4] = a79458185;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a79448183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8336))[6];
//not do dummy comment
void* kont8039 = (decode_clo(env8336))[5];
//not do dummy comment
void* lst = (decode_clo(env8336))[4];
//not do dummy comment
void* map = (decode_clo(env8336))[3];
//not do dummy comment
void* proc = (decode_clo(env8336))[2];
//not do dummy comment
void* cons = (decode_clo(env8336))[1];

//creating new closure instance
void** clo9367 = alloc_clo(lam8333_fptr, 5);

//setting env list
clo9367[1] = a79448183;
clo9367[2] = kont8039;
clo9367[3] = cons;
clo9367[4] = proc;
clo9367[5] = map;
void* f80428184 = encode_clo(clo9367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80428184;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a79438181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8338))[6];
//not do dummy comment
void* kont8039 = (decode_clo(env8338))[5];
//not do dummy comment
void* lst = (decode_clo(env8338))[4];
//not do dummy comment
void* map = (decode_clo(env8338))[3];
//not do dummy comment
void* proc = (decode_clo(env8338))[2];
//not do dummy comment
void* cons = (decode_clo(env8338))[1];

//creating new closure instance
void** clo9369 = alloc_clo(lam8335_fptr, 6);

//setting env list
clo9369[1] = cons;
clo9369[2] = proc;
clo9369[3] = map;
clo9369[4] = lst;
clo9369[5] = kont8039;
clo9369[6] = cdr;
void* f80438182 = encode_clo(clo9369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f80438182;
arg_buffer[3] = a79438181;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a79418177 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8039 = (decode_clo(env8340))[8];
//not do dummy comment
void* lst = (decode_clo(env8340))[7];
//not do dummy comment
void* map = (decode_clo(env8340))[6];
//not do dummy comment
void* proc = (decode_clo(env8340))[5];
//not do dummy comment
void* car = (decode_clo(env8340))[4];
//not do dummy comment
void* cons = (decode_clo(env8340))[3];
//not do dummy comment
void* list = (decode_clo(env8340))[2];
//not do dummy comment
void* cdr = (decode_clo(env8340))[1];

//if-clause
bool if_guard9370 = is_true(a79418177);
if(if_guard9370)
{

//creating new closure instance
void** clo9372 = alloc_clo(lam8329_fptr, 1);

//setting env list
clo9372[1] = kont8039;
void* f80408178 = encode_clo(clo9372);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80408178;
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
void** clo9374 = alloc_clo(lam8337_fptr, 6);

//setting env list
clo9374[1] = cons;
clo9374[2] = proc;
clo9374[3] = map;
clo9374[4] = lst;
clo9374[5] = kont8039;
clo9374[6] = cdr;
void* f80448180 = encode_clo(clo9374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80448180;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8339 = encode_clo(alloc_clo(lam8339_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8341 = arg_buffer[1];
//reading env and args
void* kont8039 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9376 = alloc_clo(lam8339_fptr, 8);

//setting env list
clo9376[1] = cdr;
clo9376[2] = list;
clo9376[3] = cons;
clo9376[4] = car;
clo9376[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo9376[6] = map;
clo9376[7] = lst;
clo9376[8] = kont8039;
void* f80458176 = encode_clo(clo9376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80458176;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8342_fptr() // lam8342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8343 = arg_buffer[1];
//reading env and args
void* x79488191 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8046 = (decode_clo(env8343))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8046);
arg_buffer[2] = x79488191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8046))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8342 = encode_clo(alloc_clo(lam8342_fptr, 0));

void* lam8344_fptr() // lam8344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8345 = arg_buffer[1];
//reading env and args
void* a79538201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8046 = (decode_clo(env8345))[3];
//not do dummy comment
void* cons = (decode_clo(env8345))[2];
//not do dummy comment
void* a79518197 = (decode_clo(env8345))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8046;
arg_buffer[3] = a79518197;
arg_buffer[4] = a79538201;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8344 = encode_clo(alloc_clo(lam8344_fptr, 0));

void* lam8346_fptr() // lam8346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8347 = arg_buffer[1];
//reading env and args
void* a79528199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8347))[5];
//not do dummy comment
void* kont8046 = (decode_clo(env8347))[4];
//not do dummy comment
void* filter = (decode_clo(env8347))[3];
//not do dummy comment
void* cons = (decode_clo(env8347))[2];
//not do dummy comment
void* a79518197 = (decode_clo(env8347))[1];

//creating new closure instance
void** clo9378 = alloc_clo(lam8344_fptr, 3);

//setting env list
clo9378[1] = a79518197;
clo9378[2] = cons;
clo9378[3] = kont8046;
void* f80488200 = encode_clo(clo9378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f80488200;
arg_buffer[3] = op;
arg_buffer[4] = a79528199;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a79518197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8349))[6];
//not do dummy comment
void* lst = (decode_clo(env8349))[5];
//not do dummy comment
void* op = (decode_clo(env8349))[4];
//not do dummy comment
void* kont8046 = (decode_clo(env8349))[3];
//not do dummy comment
void* filter = (decode_clo(env8349))[2];
//not do dummy comment
void* cons = (decode_clo(env8349))[1];

//creating new closure instance
void** clo9380 = alloc_clo(lam8346_fptr, 5);

//setting env list
clo9380[1] = a79518197;
clo9380[2] = cons;
clo9380[3] = filter;
clo9380[4] = kont8046;
clo9380[5] = op;
void* f80498198 = encode_clo(clo9380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80498198;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a79548203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env8351))[3];
//not do dummy comment
void* kont8046 = (decode_clo(env8351))[2];
//not do dummy comment
void* filter = (decode_clo(env8351))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8046;
arg_buffer[3] = op;
arg_buffer[4] = a79548203;
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
void* a79508195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8353))[7];
//not do dummy comment
void* lst = (decode_clo(env8353))[6];
//not do dummy comment
void* op = (decode_clo(env8353))[5];
//not do dummy comment
void* kont8046 = (decode_clo(env8353))[4];
//not do dummy comment
void* cons = (decode_clo(env8353))[3];
//not do dummy comment
void* filter = (decode_clo(env8353))[2];
//not do dummy comment
void* car = (decode_clo(env8353))[1];

//if-clause
bool if_guard9381 = is_true(a79508195);
if(if_guard9381)
{

//creating new closure instance
void** clo9383 = alloc_clo(lam8348_fptr, 6);

//setting env list
clo9383[1] = cons;
clo9383[2] = filter;
clo9383[3] = kont8046;
clo9383[4] = op;
clo9383[5] = lst;
clo9383[6] = cdr;
void* f80508196 = encode_clo(clo9383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80508196;
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
void** clo9385 = alloc_clo(lam8350_fptr, 3);

//setting env list
clo9385[1] = filter;
clo9385[2] = kont8046;
clo9385[3] = op;
void* f80518202 = encode_clo(clo9385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80518202;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8352 = encode_clo(alloc_clo(lam8352_fptr, 0));

void* lam8354_fptr() // lam8354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8355 = arg_buffer[1];
//reading env and args
void* a79498193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8355))[7];
//not do dummy comment
void* lst = (decode_clo(env8355))[6];
//not do dummy comment
void* op = (decode_clo(env8355))[5];
//not do dummy comment
void* kont8046 = (decode_clo(env8355))[4];
//not do dummy comment
void* cons = (decode_clo(env8355))[3];
//not do dummy comment
void* filter = (decode_clo(env8355))[2];
//not do dummy comment
void* car = (decode_clo(env8355))[1];

//creating new closure instance
void** clo9387 = alloc_clo(lam8352_fptr, 7);

//setting env list
clo9387[1] = car;
clo9387[2] = filter;
clo9387[3] = cons;
clo9387[4] = kont8046;
clo9387[5] = op;
clo9387[6] = lst;
clo9387[7] = cdr;
void* f80528194 = encode_clo(clo9387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f80528194;
arg_buffer[3] = a79498193;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a79478189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8357))[8];
//not do dummy comment
void* op = (decode_clo(env8357))[7];
//not do dummy comment
void* kont8046 = (decode_clo(env8357))[6];
//not do dummy comment
void* cons = (decode_clo(env8357))[5];
//not do dummy comment
void* list = (decode_clo(env8357))[4];
//not do dummy comment
void* cdr = (decode_clo(env8357))[3];
//not do dummy comment
void* filter = (decode_clo(env8357))[2];
//not do dummy comment
void* car = (decode_clo(env8357))[1];

//if-clause
bool if_guard9388 = is_true(a79478189);
if(if_guard9388)
{

//creating new closure instance
void** clo9390 = alloc_clo(lam8342_fptr, 1);

//setting env list
clo9390[1] = kont8046;
void* f80478190 = encode_clo(clo9390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80478190;
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
void** clo9392 = alloc_clo(lam8354_fptr, 7);

//setting env list
clo9392[1] = car;
clo9392[2] = filter;
clo9392[3] = cons;
clo9392[4] = kont8046;
clo9392[5] = op;
clo9392[6] = lst;
clo9392[7] = cdr;
void* f80538192 = encode_clo(clo9392);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80538192;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8356 = encode_clo(alloc_clo(lam8356_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8358 = arg_buffer[1];
//reading env and args
void* kont8046 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9394 = alloc_clo(lam8356_fptr, 8);

//setting env list
clo9394[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo9394[2] = filter;
clo9394[3] = cdr;
clo9394[4] = list;
clo9394[5] = cons;
clo9394[6] = kont8046;
clo9394[7] = op;
clo9394[8] = lst;
void* f80548188 = encode_clo(clo9394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80548188;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8359_fptr() // lam8359 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8360 = arg_buffer[1];
//reading env and args
void* a79598211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8055 = (decode_clo(env8360))[3];
//not do dummy comment
void* drop = (decode_clo(env8360))[2];
//not do dummy comment
void* a79578208 = (decode_clo(env8360))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8055;
arg_buffer[3] = a79578208;
arg_buffer[4] = a79598211;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8359 = encode_clo(alloc_clo(lam8359_fptr, 0));

void* lam8362_fptr() // lam8362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8363 = arg_buffer[1];
//reading env and args
void* a79578208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8055 = (decode_clo(env8363))[4];
//not do dummy comment
void* drop = (decode_clo(env8363))[3];
//not do dummy comment
void* n = (decode_clo(env8363))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8363))[1];
mpz_t* mpzvar9395 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9395, "1", 10);
void* a79588209 = encode_mpz(mpzvar9395);

//creating new closure instance
void** clo9397 = alloc_clo(lam8359_fptr, 3);

//setting env list
clo9397[1] = a79578208;
clo9397[2] = drop;
clo9397[3] = kont8055;
void* f80568210 = encode_clo(clo9397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f80568210;
arg_buffer[3] = n;
arg_buffer[4] = a79588209;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8362 = encode_clo(alloc_clo(lam8362_fptr, 0));

void* lam8364_fptr() // lam8364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8365 = arg_buffer[1];
//reading env and args
void* a79568206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8365))[6];
//not do dummy comment
void* kont8055 = (decode_clo(env8365))[5];
//not do dummy comment
void* n = (decode_clo(env8365))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8365))[3];
//not do dummy comment
void* lst = (decode_clo(env8365))[2];
//not do dummy comment
void* drop = (decode_clo(env8365))[1];

//if-clause
bool if_guard9398 = is_true(a79568206);
if(if_guard9398)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8055);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8055))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9400 = alloc_clo(lam8362_fptr, 4);

//setting env list
clo9400[1] = _u45;
clo9400[2] = n;
clo9400[3] = drop;
clo9400[4] = kont8055;
void* f80578207 = encode_clo(clo9400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80578207;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8364 = encode_clo(alloc_clo(lam8364_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8367 = arg_buffer[1];
//reading env and args
void* kont8055 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar9401 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9401, "0", 10);
void* a79558204 = encode_mpz(mpzvar9401);

//creating new closure instance
void** clo9403 = alloc_clo(lam8364_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo9403[1] = drop;
clo9403[2] = lst;
clo9403[3] = _u45;
clo9403[4] = n;
clo9403[5] = kont8055;
clo9403[6] = cdr;
void* f80588205 = encode_clo(clo9403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f80588205;
arg_buffer[3] = n;
arg_buffer[4] = a79558204;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8368_fptr() // lam8368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8369 = arg_buffer[1];
//reading env and args
void* a79638219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79618215 = (decode_clo(env8369))[3];
//not do dummy comment
void* kont8059 = (decode_clo(env8369))[2];
//not do dummy comment
void* proc = (decode_clo(env8369))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8059;
arg_buffer[3] = a79618215;
arg_buffer[4] = a79638219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8368 = encode_clo(alloc_clo(lam8368_fptr, 0));

void* lam8370_fptr() // lam8370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8371 = arg_buffer[1];
//reading env and args
void* a79628217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79618215 = (decode_clo(env8371))[5];
//not do dummy comment
void* foldr = (decode_clo(env8371))[4];
//not do dummy comment
void* kont8059 = (decode_clo(env8371))[3];
//not do dummy comment
void* proc = (decode_clo(env8371))[2];
//not do dummy comment
void* acc = (decode_clo(env8371))[1];

//creating new closure instance
void** clo9405 = alloc_clo(lam8368_fptr, 3);

//setting env list
clo9405[1] = proc;
clo9405[2] = kont8059;
clo9405[3] = a79618215;
void* f80608218 = encode_clo(clo9405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f80608218;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a79628217;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8370 = encode_clo(alloc_clo(lam8370_fptr, 0));

void* lam8372_fptr() // lam8372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8373 = arg_buffer[1];
//reading env and args
void* a79618215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8373))[6];
//not do dummy comment
void* kont8059 = (decode_clo(env8373))[5];
//not do dummy comment
void* foldr = (decode_clo(env8373))[4];
//not do dummy comment
void* lst = (decode_clo(env8373))[3];
//not do dummy comment
void* proc = (decode_clo(env8373))[2];
//not do dummy comment
void* acc = (decode_clo(env8373))[1];

//creating new closure instance
void** clo9407 = alloc_clo(lam8370_fptr, 5);

//setting env list
clo9407[1] = acc;
clo9407[2] = proc;
clo9407[3] = kont8059;
clo9407[4] = foldr;
clo9407[5] = a79618215;
void* f80618216 = encode_clo(clo9407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80618216;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a79608213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8375))[7];
//not do dummy comment
void* kont8059 = (decode_clo(env8375))[6];
//not do dummy comment
void* car = (decode_clo(env8375))[5];
//not do dummy comment
void* foldr = (decode_clo(env8375))[4];
//not do dummy comment
void* lst = (decode_clo(env8375))[3];
//not do dummy comment
void* proc = (decode_clo(env8375))[2];
//not do dummy comment
void* acc = (decode_clo(env8375))[1];

//if-clause
bool if_guard9408 = is_true(a79608213);
if(if_guard9408)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8059);
arg_buffer[2] = acc;
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
void** clo9410 = alloc_clo(lam8372_fptr, 6);

//setting env list
clo9410[1] = acc;
clo9410[2] = proc;
clo9410[3] = lst;
clo9410[4] = foldr;
clo9410[5] = kont8059;
clo9410[6] = cdr;
void* f80628214 = encode_clo(clo9410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80628214;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8374 = encode_clo(alloc_clo(lam8374_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8376 = arg_buffer[1];
//reading env and args
void* kont8059 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9412 = alloc_clo(lam8374_fptr, 7);

//setting env list
clo9412[1] = acc;
clo9412[2] = proc;
clo9412[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo9412[4] = foldr;
clo9412[5] = car;
clo9412[6] = kont8059;
clo9412[7] = cdr;
void* f80638212 = encode_clo(clo9412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80638212;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8377_fptr() // lam8377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8378 = arg_buffer[1];
//reading env and args
void* a79678227 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79658223 = (decode_clo(env8378))[3];
//not do dummy comment
void* kont8064 = (decode_clo(env8378))[2];
//not do dummy comment
void* cons = (decode_clo(env8378))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8064;
arg_buffer[3] = a79658223;
arg_buffer[4] = a79678227;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8377 = encode_clo(alloc_clo(lam8377_fptr, 0));

void* lam8379_fptr() // lam8379 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8380 = arg_buffer[1];
//reading env and args
void* a79668225 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env8380))[5];
//not do dummy comment
void* a79658223 = (decode_clo(env8380))[4];
//not do dummy comment
void* kont8064 = (decode_clo(env8380))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8380))[2];
//not do dummy comment
void* cons = (decode_clo(env8380))[1];

//creating new closure instance
void** clo9414 = alloc_clo(lam8377_fptr, 3);

//setting env list
clo9414[1] = cons;
clo9414[2] = kont8064;
clo9414[3] = a79658223;
void* f80658226 = encode_clo(clo9414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f80658226;
arg_buffer[3] = a79668225;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8379 = encode_clo(alloc_clo(lam8379_fptr, 0));

void* lam8381_fptr() // lam8381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8382 = arg_buffer[1];
//reading env and args
void* a79658223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8382))[6];
//not do dummy comment
void* append = (decode_clo(env8382))[5];
//not do dummy comment
void* kont8064 = (decode_clo(env8382))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8382))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8382))[2];
//not do dummy comment
void* cons = (decode_clo(env8382))[1];

//creating new closure instance
void** clo9416 = alloc_clo(lam8379_fptr, 5);

//setting env list
clo9416[1] = cons;
clo9416[2] = lst2;
clo9416[3] = kont8064;
clo9416[4] = a79658223;
clo9416[5] = append;
void* f80668224 = encode_clo(clo9416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80668224;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a79648221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8384))[7];
//not do dummy comment
void* append = (decode_clo(env8384))[6];
//not do dummy comment
void* kont8064 = (decode_clo(env8384))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8384))[4];
//not do dummy comment
void* cons = (decode_clo(env8384))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8384))[2];
//not do dummy comment
void* car = (decode_clo(env8384))[1];

//if-clause
bool if_guard9417 = is_true(a79648221);
if(if_guard9417)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8064);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8064))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9419 = alloc_clo(lam8381_fptr, 6);

//setting env list
clo9419[1] = cons;
clo9419[2] = lst1;
clo9419[3] = lst2;
clo9419[4] = kont8064;
clo9419[5] = append;
clo9419[6] = cdr;
void* f80678222 = encode_clo(clo9419);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80678222;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8383 = encode_clo(alloc_clo(lam8383_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8385 = arg_buffer[1];
//reading env and args
void* kont8064 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9421 = alloc_clo(lam8383_fptr, 7);

//setting env list
clo9421[1] = car;
clo9421[2] = lst1;
clo9421[3] = cons;
clo9421[4] = lst2;
clo9421[5] = kont8064;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo9421[6] = append;
clo9421[7] = cdr;
void* f80688220 = encode_clo(clo9421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80688220;
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
void* _8386 = arg_buffer[1];
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

void* kont80698228 = prim_car(lst);
void* lst8229 = prim_cdr(lst);
void* x79688230 = apply_prim_hash(lst8229);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80698228);
arg_buffer[2] = x79688230;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80698228))[0]);
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
void* _8387 = arg_buffer[1];
//reading env and args
void* kont8071 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x79698231 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8071);
arg_buffer[2] = x79698231;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8071))[0]);
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
void* _8388 = arg_buffer[1];
//reading env and args
void* kont8072 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x79708232 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8072);
arg_buffer[2] = x79708232;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8072))[0]);
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
void* _8389 = arg_buffer[1];
//reading env and args
void* kont8073 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x79718233 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8073);
arg_buffer[2] = x79718233;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8073))[0]);
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
void* _8390 = arg_buffer[1];
//reading env and args
void* kont8074 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x79728234 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8074);
arg_buffer[2] = x79728234;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8074))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam8391_fptr() // lam8391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8392 = arg_buffer[1];
//reading env and args
void* a79768239 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8075 = (decode_clo(env8392))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8392))[1];
void* cps_u45lst80768240 = prim_cons(kont8075, a79768239);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = cps_u45lst80768240;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8391 = encode_clo(alloc_clo(lam8391_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8396 = arg_buffer[1];
//reading env and args
void* kont8075 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar9422 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9422, "1", 10);
void* a79738235 = encode_mpz(mpzvar9422);
mpz_t* mpzvar9423 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9423, "2", 10);
void* a79748236 = encode_mpz(mpzvar9423);
mpz_t* mpzvar9424 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9424, "3", 10);
void* a79758237 = encode_mpz(mpzvar9424);

//creating new closure instance
void** clo9426 = alloc_clo(lam8391_fptr, 2);

//setting env list
clo9426[1] = _u43;
clo9426[2] = kont8075;
void* f80778238 = encode_clo(clo9426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80778238;
arg_buffer[3] = a79738235;
arg_buffer[4] = a79748236;
arg_buffer[5] = a79758237;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8397_fptr() // lam8397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8398 = arg_buffer[1];
//reading env and args
void* x79778242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8078 = (decode_clo(env8398))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8078);
arg_buffer[2] = x79778242;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8078))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8397 = encode_clo(alloc_clo(lam8397_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8399 = arg_buffer[1];
//reading env and args
void* kont8078 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo9428 = alloc_clo(lam8397_fptr, 1);

//setting env list
clo9428[1] = kont8078;
void* f80798241 = encode_clo(clo9428);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f80798241;
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

