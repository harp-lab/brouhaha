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
void* _8268 = arg_buffer[1];
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

void* kont79938099 = prim_car(lst);
void* lst8100 = prim_cdr(lst);
void* x79038101 = apply_prim__u43(lst8100);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79938099);
arg_buffer[2] = x79038101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79938099))[0]);
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
void* _8269 = arg_buffer[1];
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

void* kont79958102 = prim_car(lst);
void* lst8103 = prim_cdr(lst);
void* x79048104 = apply_prim__u45(lst8103);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79958102);
arg_buffer[2] = x79048104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79958102))[0]);
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
void* _8270 = arg_buffer[1];
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

void* kont79978105 = prim_car(lst);
void* lst8106 = prim_cdr(lst);
void* x79058107 = apply_prim__u42(lst8106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79978105);
arg_buffer[2] = x79058107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79978105))[0]);
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
void* _8271 = arg_buffer[1];
//reading env and args
void* kont7999 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x79068108 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7999);
arg_buffer[2] = x79068108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7999))[0]);
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
void* _8272 = arg_buffer[1];
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

void* kont80008109 = prim_car(lst);
void* lst8110 = prim_cdr(lst);
void* x79078111 = apply_prim__u47(lst8110);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80008109);
arg_buffer[2] = x79078111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80008109))[0]);
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
void* _8273 = arg_buffer[1];
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

void* kont80028112 = prim_car(lst);
void* lst8113 = prim_cdr(lst);
void* x79088114 = apply_prim__u61(lst8113);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80028112);
arg_buffer[2] = x79088114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80028112))[0]);
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
void* _8274 = arg_buffer[1];
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

void* kont80048115 = prim_car(lst);
void* lst8116 = prim_cdr(lst);
void* x79098117 = apply_prim__u62(lst8116);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80048115);
arg_buffer[2] = x79098117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80048115))[0]);
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
void* _8275 = arg_buffer[1];
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

void* kont80068118 = prim_car(lst);
void* lst8119 = prim_cdr(lst);
void* x79108120 = apply_prim__u60(lst8119);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80068118);
arg_buffer[2] = x79108120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80068118))[0]);
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
void* _8276 = arg_buffer[1];
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

void* kont80088121 = prim_car(lst);
void* lst8122 = prim_cdr(lst);
void* x79118123 = apply_prim__u60_u61(lst8122);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80088121);
arg_buffer[2] = x79118123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80088121))[0]);
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
void* _8277 = arg_buffer[1];
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

void* kont80108124 = prim_car(lst);
void* lst8125 = prim_cdr(lst);
void* x79128126 = apply_prim__u62_u61(lst8125);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80108124);
arg_buffer[2] = x79128126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80108124))[0]);
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
void* _8278 = arg_buffer[1];
//reading env and args
void* kont8012 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x79138127 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8012);
arg_buffer[2] = x79138127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8012))[0]);
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
void* _8279 = arg_buffer[1];
//reading env and args
void* kont8013 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x79148128 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8013);
arg_buffer[2] = x79148128;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8013))[0]);
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
void* _8280 = arg_buffer[1];
//reading env and args
void* kont8014 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x79158129 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8014);
arg_buffer[2] = x79158129;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8014))[0]);
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
void* _8281 = arg_buffer[1];
//reading env and args
void* kont8015 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x79168130 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8015);
arg_buffer[2] = x79168130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8015))[0]);
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
void* _8282 = arg_buffer[1];
//reading env and args
void* kont8016 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x79178131 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8016);
arg_buffer[2] = x79178131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8016))[0]);
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
void* _8283 = arg_buffer[1];
//reading env and args
void* kont8017 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x79188132 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8017);
arg_buffer[2] = x79188132;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8017))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam8284_fptr() // lam8284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8285 = arg_buffer[1];
//reading env and args
void* a79218136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8018 = (decode_clo(env8285))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env8285))[2];
//not do dummy comment
void* a79198133 = (decode_clo(env8285))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8018;
arg_buffer[3] = a79198133;
arg_buffer[4] = a79218136;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8284 = encode_clo(alloc_clo(lam8284_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8288 = arg_buffer[1];
//reading env and args
void* kont8018 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9327 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9327, "0", 10);
void* a79198133 = encode_mpz(mpzvar9327);
mpz_t* mpzvar9328 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9328, "2", 10);
void* a79208134 = encode_mpz(mpzvar9328);

//creating new closure instance
void** clo9330 = alloc_clo(lam8284_fptr, 3);

//setting env list
clo9330[1] = a79198133;
clo9330[2] = equal_u63;
clo9330[3] = kont8018;
void* f80198135 = encode_clo(clo9330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f80198135;
arg_buffer[3] = x;
arg_buffer[4] = a79208134;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8289_fptr() // lam8289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8290 = arg_buffer[1];
//reading env and args
void* a79248140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env8290))[3];
//not do dummy comment
void* kont8020 = (decode_clo(env8290))[2];
//not do dummy comment
void* a79228137 = (decode_clo(env8290))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont8020;
arg_buffer[3] = a79228137;
arg_buffer[4] = a79248140;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8289 = encode_clo(alloc_clo(lam8289_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8293 = arg_buffer[1];
//reading env and args
void* kont8020 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9331 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9331, "1", 10);
void* a79228137 = encode_mpz(mpzvar9331);
mpz_t* mpzvar9332 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9332, "2", 10);
void* a79238138 = encode_mpz(mpzvar9332);

//creating new closure instance
void** clo9334 = alloc_clo(lam8289_fptr, 3);

//setting env list
clo9334[1] = a79228137;
clo9334[2] = kont8020;
clo9334[3] = equal_u63;
void* f80218139 = encode_clo(clo9334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f80218139;
arg_buffer[3] = x;
arg_buffer[4] = a79238138;
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
void* _8294 = arg_buffer[1];
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

void* kont80228141 = prim_car(x);
void* x8142 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80228141);
arg_buffer[2] = x8142;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80228141))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8295 = arg_buffer[1];
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

void* kont80248143 = prim_car(lst);
void* lst8144 = prim_cdr(lst);
void* x79258145 = apply_prim_and(lst8144);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80248143);
arg_buffer[2] = x79258145;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80248143))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8296 = arg_buffer[1];
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

void* kont80268146 = prim_car(lst);
void* lst8147 = prim_cdr(lst);
void* x79268148 = apply_prim_or(lst8147);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80268146);
arg_buffer[2] = x79268148;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80268146))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam8299_fptr() // lam8299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8300 = arg_buffer[1];
//reading env and args
void* a79328158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8028 = (decode_clo(env8300))[3];
//not do dummy comment
void* x = (decode_clo(env8300))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8300))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont8028;
arg_buffer[3] = x;
arg_buffer[4] = a79328158;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8299 = encode_clo(alloc_clo(lam8299_fptr, 0));

void* lam8301_fptr() // lam8301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8302 = arg_buffer[1];
//reading env and args
void* a79308155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8302))[5];
//not do dummy comment
void* kont8028 = (decode_clo(env8302))[4];
//not do dummy comment
void* lst = (decode_clo(env8302))[3];
//not do dummy comment
void* x = (decode_clo(env8302))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8302))[1];

//if-clause
bool if_guard9335 = is_true(a79308155);
if(if_guard9335)
{
void* x79318156 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8028);
arg_buffer[2] = x79318156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8028))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9337 = alloc_clo(lam8299_fptr, 3);

//setting env list
clo9337[1] = member_u63;
clo9337[2] = x;
clo9337[3] = kont8028;
void* f80298157 = encode_clo(clo9337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80298157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8301 = encode_clo(alloc_clo(lam8301_fptr, 0));

void* lam8303_fptr() // lam8303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8304 = arg_buffer[1];
//reading env and args
void* a79298153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8304))[6];
//not do dummy comment
void* kont8028 = (decode_clo(env8304))[5];
//not do dummy comment
void* lst = (decode_clo(env8304))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env8304))[3];
//not do dummy comment
void* x = (decode_clo(env8304))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8304))[1];

//creating new closure instance
void** clo9339 = alloc_clo(lam8301_fptr, 5);

//setting env list
clo9339[1] = member_u63;
clo9339[2] = x;
clo9339[3] = lst;
clo9339[4] = kont8028;
clo9339[5] = cdr;
void* f80308154 = encode_clo(clo9339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f80308154;
arg_buffer[3] = a79298153;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8303 = encode_clo(alloc_clo(lam8303_fptr, 0));

void* lam8305_fptr() // lam8305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8306 = arg_buffer[1];
//reading env and args
void* a79278150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8306))[7];
//not do dummy comment
void* kont8028 = (decode_clo(env8306))[6];
//not do dummy comment
void* lst = (decode_clo(env8306))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8306))[4];
//not do dummy comment
void* x = (decode_clo(env8306))[3];
//not do dummy comment
void* car = (decode_clo(env8306))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8306))[1];

//if-clause
bool if_guard9340 = is_true(a79278150);
if(if_guard9340)
{
void* x79288151 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8028);
arg_buffer[2] = x79288151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8028))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9342 = alloc_clo(lam8303_fptr, 6);

//setting env list
clo9342[1] = member_u63;
clo9342[2] = x;
clo9342[3] = equal_u63;
clo9342[4] = lst;
clo9342[5] = kont8028;
clo9342[6] = cdr;
void* f80318152 = encode_clo(clo9342);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80318152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8305 = encode_clo(alloc_clo(lam8305_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8307 = arg_buffer[1];
//reading env and args
void* kont8028 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9344 = alloc_clo(lam8305_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo9344[1] = member_u63;
clo9344[2] = car;
clo9344[3] = x;
clo9344[4] = equal_u63;
clo9344[5] = lst;
clo9344[6] = kont8028;
clo9344[7] = cdr;
void* f80328149 = encode_clo(clo9344);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80328149;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8308_fptr() // lam8308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8309 = arg_buffer[1];
//reading env and args
void* a79368166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8033 = (decode_clo(env8309))[4];
//not do dummy comment
void* a79358164 = (decode_clo(env8309))[3];
//not do dummy comment
void* fun = (decode_clo(env8309))[2];
//not do dummy comment
void* foldl = (decode_clo(env8309))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont8033;
arg_buffer[3] = fun;
arg_buffer[4] = a79358164;
arg_buffer[5] = a79368166;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a79358164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8311))[5];
//not do dummy comment
void* lst = (decode_clo(env8311))[4];
//not do dummy comment
void* kont8033 = (decode_clo(env8311))[3];
//not do dummy comment
void* fun = (decode_clo(env8311))[2];
//not do dummy comment
void* foldl = (decode_clo(env8311))[1];

//creating new closure instance
void** clo9346 = alloc_clo(lam8308_fptr, 4);

//setting env list
clo9346[1] = foldl;
clo9346[2] = fun;
clo9346[3] = a79358164;
clo9346[4] = kont8033;
void* f80348165 = encode_clo(clo9346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80348165;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a79348162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8313))[6];
//not do dummy comment
void* lst = (decode_clo(env8313))[5];
//not do dummy comment
void* kont8033 = (decode_clo(env8313))[4];
//not do dummy comment
void* fun = (decode_clo(env8313))[3];
//not do dummy comment
void* acc = (decode_clo(env8313))[2];
//not do dummy comment
void* foldl = (decode_clo(env8313))[1];

//creating new closure instance
void** clo9348 = alloc_clo(lam8310_fptr, 5);

//setting env list
clo9348[1] = foldl;
clo9348[2] = fun;
clo9348[3] = kont8033;
clo9348[4] = lst;
clo9348[5] = cdr;
void* f80358163 = encode_clo(clo9348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f80358163;
arg_buffer[3] = a79348162;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8312 = encode_clo(alloc_clo(lam8312_fptr, 0));

void* lam8314_fptr() // lam8314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8315 = arg_buffer[1];
//reading env and args
void* a79338160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8315))[7];
//not do dummy comment
void* lst = (decode_clo(env8315))[6];
//not do dummy comment
void* kont8033 = (decode_clo(env8315))[5];
//not do dummy comment
void* fun = (decode_clo(env8315))[4];
//not do dummy comment
void* acc = (decode_clo(env8315))[3];
//not do dummy comment
void* car = (decode_clo(env8315))[2];
//not do dummy comment
void* foldl = (decode_clo(env8315))[1];

//if-clause
bool if_guard9349 = is_true(a79338160);
if(if_guard9349)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8033);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8033))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9351 = alloc_clo(lam8312_fptr, 6);

//setting env list
clo9351[1] = foldl;
clo9351[2] = acc;
clo9351[3] = fun;
clo9351[4] = kont8033;
clo9351[5] = lst;
clo9351[6] = cdr;
void* f80368161 = encode_clo(clo9351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80368161;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8314 = encode_clo(alloc_clo(lam8314_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8316 = arg_buffer[1];
//reading env and args
void* kont8033 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9353 = alloc_clo(lam8314_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo9353[1] = foldl;
clo9353[2] = car;
clo9353[3] = acc;
clo9353[4] = fun;
clo9353[5] = kont8033;
clo9353[6] = lst;
clo9353[7] = cdr;
void* f80378159 = encode_clo(clo9353);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80378159;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8317_fptr() // lam8317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8318 = arg_buffer[1];
//reading env and args
void* a79408174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8318))[3];
//not do dummy comment
void* kont8038 = (decode_clo(env8318))[2];
//not do dummy comment
void* a79388170 = (decode_clo(env8318))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8038;
arg_buffer[3] = a79388170;
arg_buffer[4] = a79408174;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8317 = encode_clo(alloc_clo(lam8317_fptr, 0));

void* lam8319_fptr() // lam8319 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8320 = arg_buffer[1];
//reading env and args
void* a79398172 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8320))[5];
//not do dummy comment
void* kont8038 = (decode_clo(env8320))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8320))[3];
//not do dummy comment
void* cons = (decode_clo(env8320))[2];
//not do dummy comment
void* a79388170 = (decode_clo(env8320))[1];

//creating new closure instance
void** clo9355 = alloc_clo(lam8317_fptr, 3);

//setting env list
clo9355[1] = a79388170;
clo9355[2] = kont8038;
clo9355[3] = reverse_u45helper;
void* f80398173 = encode_clo(clo9355);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f80398173;
arg_buffer[3] = a79398172;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8319 = encode_clo(alloc_clo(lam8319_fptr, 0));

void* lam8321_fptr() // lam8321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8322 = arg_buffer[1];
//reading env and args
void* a79388170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8322))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8322))[5];
//not do dummy comment
void* kont8038 = (decode_clo(env8322))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8322))[3];
//not do dummy comment
void* car = (decode_clo(env8322))[2];
//not do dummy comment
void* cons = (decode_clo(env8322))[1];

//creating new closure instance
void** clo9357 = alloc_clo(lam8319_fptr, 5);

//setting env list
clo9357[1] = a79388170;
clo9357[2] = cons;
clo9357[3] = lst2;
clo9357[4] = kont8038;
clo9357[5] = reverse_u45helper;
void* f80408171 = encode_clo(clo9357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80408171;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a79378168 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8324))[7];
//not do dummy comment
void* lst = (decode_clo(env8324))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8324))[5];
//not do dummy comment
void* kont8038 = (decode_clo(env8324))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8324))[3];
//not do dummy comment
void* car = (decode_clo(env8324))[2];
//not do dummy comment
void* cons = (decode_clo(env8324))[1];

//if-clause
bool if_guard9358 = is_true(a79378168);
if(if_guard9358)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8038);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8038))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9360 = alloc_clo(lam8321_fptr, 6);

//setting env list
clo9360[1] = cons;
clo9360[2] = car;
clo9360[3] = lst2;
clo9360[4] = kont8038;
clo9360[5] = reverse_u45helper;
clo9360[6] = lst;
void* f80418169 = encode_clo(clo9360);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80418169;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8323 = encode_clo(alloc_clo(lam8323_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8325 = arg_buffer[1];
//reading env and args
void* kont8038 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9362 = alloc_clo(lam8323_fptr, 7);

//setting env list
clo9362[1] = cons;
clo9362[2] = car;
clo9362[3] = lst2;
clo9362[4] = kont8038;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo9362[5] = reverse_u45helper;
clo9362[6] = lst;
clo9362[7] = cdr;
void* f80428167 = encode_clo(clo9362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80428167;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8326_fptr() // lam8326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8327 = arg_buffer[1];
//reading env and args
void* a79418176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8043 = (decode_clo(env8327))[3];
//not do dummy comment
void* lst = (decode_clo(env8327))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont8043;
arg_buffer[3] = lst;
arg_buffer[4] = a79418176;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8326 = encode_clo(alloc_clo(lam8326_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8328 = arg_buffer[1];
//reading env and args
void* kont8043 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9364 = alloc_clo(lam8326_fptr, 3);

//setting env list
clo9364[1] = reverse_u45helper;
clo9364[2] = lst;
clo9364[3] = kont8043;
void* f80448175 = encode_clo(clo9364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80448175;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8329_fptr() // lam8329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8330 = arg_buffer[1];
//reading env and args
void* x79448181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8045 = (decode_clo(env8330))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8045);
arg_buffer[2] = x79448181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8045))[0]);
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
void* a79498190 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8045 = (decode_clo(env8332))[4];
//not do dummy comment
void* a79478186 = (decode_clo(env8332))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8332))[2];
//not do dummy comment
void* a79458183 = (decode_clo(env8332))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8045;
arg_buffer[3] = a79458183;
arg_buffer[4] = a79478186;
arg_buffer[5] = a79498190;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
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
void* a79488188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8045 = (decode_clo(env8334))[6];
//not do dummy comment
void* cons = (decode_clo(env8334))[5];
//not do dummy comment
void* a79478186 = (decode_clo(env8334))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8334))[3];
//not do dummy comment
void* a79458183 = (decode_clo(env8334))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8334))[1];

//creating new closure instance
void** clo9366 = alloc_clo(lam8331_fptr, 4);

//setting env list
clo9366[1] = a79458183;
clo9366[2] = take_u45helper;
clo9366[3] = a79478186;
clo9366[4] = kont8045;
void* f80478189 = encode_clo(clo9366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f80478189;
arg_buffer[3] = a79488188;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a79478186 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8045 = (decode_clo(env8336))[7];
//not do dummy comment
void* lst = (decode_clo(env8336))[6];
//not do dummy comment
void* car = (decode_clo(env8336))[5];
//not do dummy comment
void* cons = (decode_clo(env8336))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env8336))[3];
//not do dummy comment
void* a79458183 = (decode_clo(env8336))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8336))[1];

//creating new closure instance
void** clo9368 = alloc_clo(lam8333_fptr, 6);

//setting env list
clo9368[1] = lst2;
clo9368[2] = a79458183;
clo9368[3] = take_u45helper;
clo9368[4] = a79478186;
clo9368[5] = cons;
clo9368[6] = kont8045;
void* f80488187 = encode_clo(clo9368);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80488187;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8335 = encode_clo(alloc_clo(lam8335_fptr, 0));

void* lam8338_fptr() // lam8338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8339 = arg_buffer[1];
//reading env and args
void* a79458183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8045 = (decode_clo(env8339))[8];
//not do dummy comment
void* lst = (decode_clo(env8339))[7];
//not do dummy comment
void* cons = (decode_clo(env8339))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8339))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8339))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8339))[3];
//not do dummy comment
void* n = (decode_clo(env8339))[2];
//not do dummy comment
void* car = (decode_clo(env8339))[1];
mpz_t* mpzvar9369 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9369, "1", 10);
void* a79468184 = encode_mpz(mpzvar9369);

//creating new closure instance
void** clo9371 = alloc_clo(lam8335_fptr, 7);

//setting env list
clo9371[1] = lst2;
clo9371[2] = a79458183;
clo9371[3] = take_u45helper;
clo9371[4] = cons;
clo9371[5] = car;
clo9371[6] = lst;
clo9371[7] = kont8045;
void* f80498185 = encode_clo(clo9371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f80498185;
arg_buffer[3] = n;
arg_buffer[4] = a79468184;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8338 = encode_clo(alloc_clo(lam8338_fptr, 0));

void* lam8340_fptr() // lam8340 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8341 = arg_buffer[1];
//reading env and args
void* a79438179 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8341))[10];
//not do dummy comment
void* kont8045 = (decode_clo(env8341))[9];
//not do dummy comment
void* lst = (decode_clo(env8341))[8];
//not do dummy comment
void* reverse = (decode_clo(env8341))[7];
//not do dummy comment
void* cons = (decode_clo(env8341))[6];
//not do dummy comment
void* _u45 = (decode_clo(env8341))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8341))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8341))[3];
//not do dummy comment
void* n = (decode_clo(env8341))[2];
//not do dummy comment
void* car = (decode_clo(env8341))[1];

//if-clause
bool if_guard9372 = is_true(a79438179);
if(if_guard9372)
{

//creating new closure instance
void** clo9374 = alloc_clo(lam8329_fptr, 1);

//setting env list
clo9374[1] = kont8045;
void* f80468180 = encode_clo(clo9374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f80468180;
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
void** clo9376 = alloc_clo(lam8338_fptr, 8);

//setting env list
clo9376[1] = car;
clo9376[2] = n;
clo9376[3] = lst2;
clo9376[4] = take_u45helper;
clo9376[5] = _u45;
clo9376[6] = cons;
clo9376[7] = lst;
clo9376[8] = kont8045;
void* f80508182 = encode_clo(clo9376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80508182;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8340 = encode_clo(alloc_clo(lam8340_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8343 = arg_buffer[1];
//reading env and args
void* kont8045 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar9377 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9377, "0", 10);
void* a79428177 = encode_mpz(mpzvar9377);

//creating new closure instance
void** clo9379 = alloc_clo(lam8340_fptr, 10);

//setting env list
clo9379[1] = car;
clo9379[2] = n;
clo9379[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo9379[4] = take_u45helper;
clo9379[5] = _u45;
clo9379[6] = cons;
clo9379[7] = reverse;
clo9379[8] = lst;
clo9379[9] = kont8045;
clo9379[10] = cdr;
void* f80518178 = encode_clo(clo9379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f80518178;
arg_buffer[3] = n;
arg_buffer[4] = a79428177;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8344_fptr() // lam8344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8345 = arg_buffer[1];
//reading env and args
void* a79508192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8345))[4];
//not do dummy comment
void* kont8052 = (decode_clo(env8345))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8345))[2];
//not do dummy comment
void* n = (decode_clo(env8345))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont8052;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a79508192;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8344 = encode_clo(alloc_clo(lam8344_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8346 = arg_buffer[1];
//reading env and args
void* kont8052 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9381 = alloc_clo(lam8344_fptr, 4);

//setting env list
clo9381[1] = n;
clo9381[2] = take_u45helper;
clo9381[3] = kont8052;
clo9381[4] = lst;
void* f80538191 = encode_clo(clo9381);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80538191;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8348_fptr() // lam8348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8349 = arg_buffer[1];
//reading env and args
void* a79558200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8054 = (decode_clo(env8349))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8349))[2];
//not do dummy comment
void* a79538196 = (decode_clo(env8349))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont8054;
arg_buffer[3] = a79538196;
arg_buffer[4] = a79558200;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a79548198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8351))[4];
//not do dummy comment
void* kont8054 = (decode_clo(env8351))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8351))[2];
//not do dummy comment
void* a79538196 = (decode_clo(env8351))[1];

//creating new closure instance
void** clo9383 = alloc_clo(lam8348_fptr, 3);

//setting env list
clo9383[1] = a79538196;
clo9383[2] = _u43;
clo9383[3] = kont8054;
void* f80558199 = encode_clo(clo9383);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f80558199;
arg_buffer[3] = a79548198;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8350 = encode_clo(alloc_clo(lam8350_fptr, 0));

void* lam8353_fptr() // lam8353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8354 = arg_buffer[1];
//reading env and args
void* a79518194 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8354))[5];
//not do dummy comment
void* lst = (decode_clo(env8354))[4];
//not do dummy comment
void* length = (decode_clo(env8354))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8354))[2];
//not do dummy comment
void* kont8054 = (decode_clo(env8354))[1];

//if-clause
bool if_guard9384 = is_true(a79518194);
if(if_guard9384)
{
mpz_t* mpzvar9385 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9385, "0", 10);
void* x79528195 = encode_mpz(mpzvar9385);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8054);
arg_buffer[2] = x79528195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8054))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar9386 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9386, "1", 10);
void* a79538196 = encode_mpz(mpzvar9386);

//creating new closure instance
void** clo9388 = alloc_clo(lam8350_fptr, 4);

//setting env list
clo9388[1] = a79538196;
clo9388[2] = _u43;
clo9388[3] = kont8054;
clo9388[4] = length;
void* f80568197 = encode_clo(clo9388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80568197;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8353 = encode_clo(alloc_clo(lam8353_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8355 = arg_buffer[1];
//reading env and args
void* kont8054 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9390 = alloc_clo(lam8353_fptr, 5);

//setting env list
clo9390[1] = kont8054;
clo9390[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo9390[3] = length;
clo9390[4] = lst;
clo9390[5] = cdr;
void* f80578193 = encode_clo(clo9390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80578193;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8356_fptr() // lam8356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8357 = arg_buffer[1];
//reading env and args
void* x79578204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8058 = (decode_clo(env8357))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8058);
arg_buffer[2] = x79578204;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8058))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8356 = encode_clo(alloc_clo(lam8356_fptr, 0));

void* lam8358_fptr() // lam8358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8359 = arg_buffer[1];
//reading env and args
void* a79618212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79598208 = (decode_clo(env8359))[3];
//not do dummy comment
void* cons = (decode_clo(env8359))[2];
//not do dummy comment
void* kont8058 = (decode_clo(env8359))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8058;
arg_buffer[3] = a79598208;
arg_buffer[4] = a79618212;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a79608210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env8361))[5];
//not do dummy comment
void* cons = (decode_clo(env8361))[4];
//not do dummy comment
void* kont8058 = (decode_clo(env8361))[3];
//not do dummy comment
void* map = (decode_clo(env8361))[2];
//not do dummy comment
void* a79598208 = (decode_clo(env8361))[1];

//creating new closure instance
void** clo9392 = alloc_clo(lam8358_fptr, 3);

//setting env list
clo9392[1] = kont8058;
clo9392[2] = cons;
clo9392[3] = a79598208;
void* f80608211 = encode_clo(clo9392);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f80608211;
arg_buffer[3] = proc;
arg_buffer[4] = a79608210;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8360 = encode_clo(alloc_clo(lam8360_fptr, 0));

void* lam8362_fptr() // lam8362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8363 = arg_buffer[1];
//reading env and args
void* a79598208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8363))[6];
//not do dummy comment
void* lst = (decode_clo(env8363))[5];
//not do dummy comment
void* map = (decode_clo(env8363))[4];
//not do dummy comment
void* proc = (decode_clo(env8363))[3];
//not do dummy comment
void* cons = (decode_clo(env8363))[2];
//not do dummy comment
void* kont8058 = (decode_clo(env8363))[1];

//creating new closure instance
void** clo9394 = alloc_clo(lam8360_fptr, 5);

//setting env list
clo9394[1] = a79598208;
clo9394[2] = map;
clo9394[3] = kont8058;
clo9394[4] = cons;
clo9394[5] = proc;
void* f80618209 = encode_clo(clo9394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80618209;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a79588206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8365))[6];
//not do dummy comment
void* lst = (decode_clo(env8365))[5];
//not do dummy comment
void* map = (decode_clo(env8365))[4];
//not do dummy comment
void* proc = (decode_clo(env8365))[3];
//not do dummy comment
void* cons = (decode_clo(env8365))[2];
//not do dummy comment
void* kont8058 = (decode_clo(env8365))[1];

//creating new closure instance
void** clo9396 = alloc_clo(lam8362_fptr, 6);

//setting env list
clo9396[1] = kont8058;
clo9396[2] = cons;
clo9396[3] = proc;
clo9396[4] = map;
clo9396[5] = lst;
clo9396[6] = cdr;
void* f80628207 = encode_clo(clo9396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f80628207;
arg_buffer[3] = a79588206;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8364 = encode_clo(alloc_clo(lam8364_fptr, 0));

void* lam8366_fptr() // lam8366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8367 = arg_buffer[1];
//reading env and args
void* a79568202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8367))[8];
//not do dummy comment
void* map = (decode_clo(env8367))[7];
//not do dummy comment
void* proc = (decode_clo(env8367))[6];
//not do dummy comment
void* car = (decode_clo(env8367))[5];
//not do dummy comment
void* cons = (decode_clo(env8367))[4];
//not do dummy comment
void* kont8058 = (decode_clo(env8367))[3];
//not do dummy comment
void* list = (decode_clo(env8367))[2];
//not do dummy comment
void* cdr = (decode_clo(env8367))[1];

//if-clause
bool if_guard9397 = is_true(a79568202);
if(if_guard9397)
{

//creating new closure instance
void** clo9399 = alloc_clo(lam8356_fptr, 1);

//setting env list
clo9399[1] = kont8058;
void* f80598203 = encode_clo(clo9399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80598203;
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
void** clo9401 = alloc_clo(lam8364_fptr, 6);

//setting env list
clo9401[1] = kont8058;
clo9401[2] = cons;
clo9401[3] = proc;
clo9401[4] = map;
clo9401[5] = lst;
clo9401[6] = cdr;
void* f80638205 = encode_clo(clo9401);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80638205;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8366 = encode_clo(alloc_clo(lam8366_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8368 = arg_buffer[1];
//reading env and args
void* kont8058 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9403 = alloc_clo(lam8366_fptr, 8);

//setting env list
clo9403[1] = cdr;
clo9403[2] = list;
clo9403[3] = kont8058;
clo9403[4] = cons;
clo9403[5] = car;
clo9403[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo9403[7] = map;
clo9403[8] = lst;
void* f80648201 = encode_clo(clo9403);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80648201;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8369_fptr() // lam8369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8370 = arg_buffer[1];
//reading env and args
void* x79638216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8065 = (decode_clo(env8370))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8065);
arg_buffer[2] = x79638216;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8065))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8369 = encode_clo(alloc_clo(lam8369_fptr, 0));

void* lam8371_fptr() // lam8371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8372 = arg_buffer[1];
//reading env and args
void* a79688226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79668222 = (decode_clo(env8372))[3];
//not do dummy comment
void* kont8065 = (decode_clo(env8372))[2];
//not do dummy comment
void* cons = (decode_clo(env8372))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8065;
arg_buffer[3] = a79668222;
arg_buffer[4] = a79688226;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8371 = encode_clo(alloc_clo(lam8371_fptr, 0));

void* lam8373_fptr() // lam8373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8374 = arg_buffer[1];
//reading env and args
void* a79678224 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a79668222 = (decode_clo(env8374))[5];
//not do dummy comment
void* kont8065 = (decode_clo(env8374))[4];
//not do dummy comment
void* op = (decode_clo(env8374))[3];
//not do dummy comment
void* filter = (decode_clo(env8374))[2];
//not do dummy comment
void* cons = (decode_clo(env8374))[1];

//creating new closure instance
void** clo9405 = alloc_clo(lam8371_fptr, 3);

//setting env list
clo9405[1] = cons;
clo9405[2] = kont8065;
clo9405[3] = a79668222;
void* f80678225 = encode_clo(clo9405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f80678225;
arg_buffer[3] = op;
arg_buffer[4] = a79678224;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8373 = encode_clo(alloc_clo(lam8373_fptr, 0));

void* lam8375_fptr() // lam8375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8376 = arg_buffer[1];
//reading env and args
void* a79668222 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8376))[6];
//not do dummy comment
void* lst = (decode_clo(env8376))[5];
//not do dummy comment
void* kont8065 = (decode_clo(env8376))[4];
//not do dummy comment
void* op = (decode_clo(env8376))[3];
//not do dummy comment
void* filter = (decode_clo(env8376))[2];
//not do dummy comment
void* cons = (decode_clo(env8376))[1];

//creating new closure instance
void** clo9407 = alloc_clo(lam8373_fptr, 5);

//setting env list
clo9407[1] = cons;
clo9407[2] = filter;
clo9407[3] = op;
clo9407[4] = kont8065;
clo9407[5] = a79668222;
void* f80688223 = encode_clo(clo9407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80688223;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8375 = encode_clo(alloc_clo(lam8375_fptr, 0));

void* lam8377_fptr() // lam8377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8378 = arg_buffer[1];
//reading env and args
void* a79698228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8065 = (decode_clo(env8378))[3];
//not do dummy comment
void* op = (decode_clo(env8378))[2];
//not do dummy comment
void* filter = (decode_clo(env8378))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont8065;
arg_buffer[3] = op;
arg_buffer[4] = a79698228;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a79658220 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8380))[7];
//not do dummy comment
void* lst = (decode_clo(env8380))[6];
//not do dummy comment
void* kont8065 = (decode_clo(env8380))[5];
//not do dummy comment
void* op = (decode_clo(env8380))[4];
//not do dummy comment
void* cons = (decode_clo(env8380))[3];
//not do dummy comment
void* filter = (decode_clo(env8380))[2];
//not do dummy comment
void* car = (decode_clo(env8380))[1];

//if-clause
bool if_guard9408 = is_true(a79658220);
if(if_guard9408)
{

//creating new closure instance
void** clo9410 = alloc_clo(lam8375_fptr, 6);

//setting env list
clo9410[1] = cons;
clo9410[2] = filter;
clo9410[3] = op;
clo9410[4] = kont8065;
clo9410[5] = lst;
clo9410[6] = cdr;
void* f80698221 = encode_clo(clo9410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80698221;
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
void** clo9412 = alloc_clo(lam8377_fptr, 3);

//setting env list
clo9412[1] = filter;
clo9412[2] = op;
clo9412[3] = kont8065;
void* f80708227 = encode_clo(clo9412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80708227;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8379 = encode_clo(alloc_clo(lam8379_fptr, 0));

void* lam8381_fptr() // lam8381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8382 = arg_buffer[1];
//reading env and args
void* a79648218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8382))[7];
//not do dummy comment
void* lst = (decode_clo(env8382))[6];
//not do dummy comment
void* kont8065 = (decode_clo(env8382))[5];
//not do dummy comment
void* op = (decode_clo(env8382))[4];
//not do dummy comment
void* cons = (decode_clo(env8382))[3];
//not do dummy comment
void* filter = (decode_clo(env8382))[2];
//not do dummy comment
void* car = (decode_clo(env8382))[1];

//creating new closure instance
void** clo9414 = alloc_clo(lam8379_fptr, 7);

//setting env list
clo9414[1] = car;
clo9414[2] = filter;
clo9414[3] = cons;
clo9414[4] = op;
clo9414[5] = kont8065;
clo9414[6] = lst;
clo9414[7] = cdr;
void* f80718219 = encode_clo(clo9414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f80718219;
arg_buffer[3] = a79648218;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a79628214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8384))[8];
//not do dummy comment
void* kont8065 = (decode_clo(env8384))[7];
//not do dummy comment
void* op = (decode_clo(env8384))[6];
//not do dummy comment
void* cons = (decode_clo(env8384))[5];
//not do dummy comment
void* list = (decode_clo(env8384))[4];
//not do dummy comment
void* cdr = (decode_clo(env8384))[3];
//not do dummy comment
void* filter = (decode_clo(env8384))[2];
//not do dummy comment
void* car = (decode_clo(env8384))[1];

//if-clause
bool if_guard9415 = is_true(a79628214);
if(if_guard9415)
{

//creating new closure instance
void** clo9417 = alloc_clo(lam8369_fptr, 1);

//setting env list
clo9417[1] = kont8065;
void* f80668215 = encode_clo(clo9417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80668215;
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
void** clo9419 = alloc_clo(lam8381_fptr, 7);

//setting env list
clo9419[1] = car;
clo9419[2] = filter;
clo9419[3] = cons;
clo9419[4] = op;
clo9419[5] = kont8065;
clo9419[6] = lst;
clo9419[7] = cdr;
void* f80728217 = encode_clo(clo9419);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80728217;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8383 = encode_clo(alloc_clo(lam8383_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8385 = arg_buffer[1];
//reading env and args
void* kont8065 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9421 = alloc_clo(lam8383_fptr, 8);

//setting env list
clo9421[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo9421[2] = filter;
clo9421[3] = cdr;
clo9421[4] = list;
clo9421[5] = cons;
clo9421[6] = op;
clo9421[7] = kont8065;
clo9421[8] = lst;
void* f80738213 = encode_clo(clo9421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80738213;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8386_fptr() // lam8386 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8387 = arg_buffer[1];
//reading env and args
void* a79748236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8387))[3];
//not do dummy comment
void* a79728233 = (decode_clo(env8387))[2];
//not do dummy comment
void* kont8074 = (decode_clo(env8387))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont8074;
arg_buffer[3] = a79728233;
arg_buffer[4] = a79748236;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8386 = encode_clo(alloc_clo(lam8386_fptr, 0));

void* lam8389_fptr() // lam8389 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8390 = arg_buffer[1];
//reading env and args
void* a79728233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8390))[4];
//not do dummy comment
void* n = (decode_clo(env8390))[3];
//not do dummy comment
void* kont8074 = (decode_clo(env8390))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8390))[1];
mpz_t* mpzvar9422 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9422, "1", 10);
void* a79738234 = encode_mpz(mpzvar9422);

//creating new closure instance
void** clo9424 = alloc_clo(lam8386_fptr, 3);

//setting env list
clo9424[1] = kont8074;
clo9424[2] = a79728233;
clo9424[3] = drop;
void* f80758235 = encode_clo(clo9424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f80758235;
arg_buffer[3] = n;
arg_buffer[4] = a79738234;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8389 = encode_clo(alloc_clo(lam8389_fptr, 0));

void* lam8391_fptr() // lam8391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8392 = arg_buffer[1];
//reading env and args
void* a79718231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8392))[6];
//not do dummy comment
void* n = (decode_clo(env8392))[5];
//not do dummy comment
void* lst = (decode_clo(env8392))[4];
//not do dummy comment
void* drop = (decode_clo(env8392))[3];
//not do dummy comment
void* kont8074 = (decode_clo(env8392))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8392))[1];

//if-clause
bool if_guard9425 = is_true(a79718231);
if(if_guard9425)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8074);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8074))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9427 = alloc_clo(lam8389_fptr, 4);

//setting env list
clo9427[1] = _u45;
clo9427[2] = kont8074;
clo9427[3] = n;
clo9427[4] = drop;
void* f80768232 = encode_clo(clo9427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80768232;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8391 = encode_clo(alloc_clo(lam8391_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8394 = arg_buffer[1];
//reading env and args
void* kont8074 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar9428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9428, "0", 10);
void* a79708229 = encode_mpz(mpzvar9428);

//creating new closure instance
void** clo9430 = alloc_clo(lam8391_fptr, 6);

//setting env list
clo9430[1] = _u45;
clo9430[2] = kont8074;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo9430[3] = drop;
clo9430[4] = lst;
clo9430[5] = n;
clo9430[6] = cdr;
void* f80778230 = encode_clo(clo9430);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f80778230;
arg_buffer[3] = n;
arg_buffer[4] = a79708229;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8395_fptr() // lam8395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8396 = arg_buffer[1];
//reading env and args
void* a79788244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8078 = (decode_clo(env8396))[3];
//not do dummy comment
void* a79768240 = (decode_clo(env8396))[2];
//not do dummy comment
void* proc = (decode_clo(env8396))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont8078;
arg_buffer[3] = a79768240;
arg_buffer[4] = a79788244;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8395 = encode_clo(alloc_clo(lam8395_fptr, 0));

void* lam8397_fptr() // lam8397 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8398 = arg_buffer[1];
//reading env and args
void* a79778242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8078 = (decode_clo(env8398))[5];
//not do dummy comment
void* foldr = (decode_clo(env8398))[4];
//not do dummy comment
void* a79768240 = (decode_clo(env8398))[3];
//not do dummy comment
void* proc = (decode_clo(env8398))[2];
//not do dummy comment
void* acc = (decode_clo(env8398))[1];

//creating new closure instance
void** clo9432 = alloc_clo(lam8395_fptr, 3);

//setting env list
clo9432[1] = proc;
clo9432[2] = a79768240;
clo9432[3] = kont8078;
void* f80798243 = encode_clo(clo9432);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f80798243;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a79778242;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8397 = encode_clo(alloc_clo(lam8397_fptr, 0));

void* lam8399_fptr() // lam8399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8400 = arg_buffer[1];
//reading env and args
void* a79768240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8400))[6];
//not do dummy comment
void* kont8078 = (decode_clo(env8400))[5];
//not do dummy comment
void* foldr = (decode_clo(env8400))[4];
//not do dummy comment
void* lst = (decode_clo(env8400))[3];
//not do dummy comment
void* proc = (decode_clo(env8400))[2];
//not do dummy comment
void* acc = (decode_clo(env8400))[1];

//creating new closure instance
void** clo9434 = alloc_clo(lam8397_fptr, 5);

//setting env list
clo9434[1] = acc;
clo9434[2] = proc;
clo9434[3] = a79768240;
clo9434[4] = foldr;
clo9434[5] = kont8078;
void* f80808241 = encode_clo(clo9434);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80808241;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8399 = encode_clo(alloc_clo(lam8399_fptr, 0));

void* lam8401_fptr() // lam8401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8402 = arg_buffer[1];
//reading env and args
void* a79758238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8402))[7];
//not do dummy comment
void* kont8078 = (decode_clo(env8402))[6];
//not do dummy comment
void* car = (decode_clo(env8402))[5];
//not do dummy comment
void* foldr = (decode_clo(env8402))[4];
//not do dummy comment
void* lst = (decode_clo(env8402))[3];
//not do dummy comment
void* proc = (decode_clo(env8402))[2];
//not do dummy comment
void* acc = (decode_clo(env8402))[1];

//if-clause
bool if_guard9435 = is_true(a79758238);
if(if_guard9435)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8078);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8078))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9437 = alloc_clo(lam8399_fptr, 6);

//setting env list
clo9437[1] = acc;
clo9437[2] = proc;
clo9437[3] = lst;
clo9437[4] = foldr;
clo9437[5] = kont8078;
clo9437[6] = cdr;
void* f80818239 = encode_clo(clo9437);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80818239;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8401 = encode_clo(alloc_clo(lam8401_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8403 = arg_buffer[1];
//reading env and args
void* kont8078 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9439 = alloc_clo(lam8401_fptr, 7);

//setting env list
clo9439[1] = acc;
clo9439[2] = proc;
clo9439[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo9439[4] = foldr;
clo9439[5] = car;
clo9439[6] = kont8078;
clo9439[7] = cdr;
void* f80828237 = encode_clo(clo9439);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80828237;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8404_fptr() // lam8404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8405 = arg_buffer[1];
//reading env and args
void* a79828252 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8083 = (decode_clo(env8405))[3];
//not do dummy comment
void* a79808248 = (decode_clo(env8405))[2];
//not do dummy comment
void* cons = (decode_clo(env8405))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont8083;
arg_buffer[3] = a79808248;
arg_buffer[4] = a79828252;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8404 = encode_clo(alloc_clo(lam8404_fptr, 0));

void* lam8406_fptr() // lam8406 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8407 = arg_buffer[1];
//reading env and args
void* a79818250 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst2 = (decode_clo(env8407))[5];
//not do dummy comment
void* a79808248 = (decode_clo(env8407))[4];
//not do dummy comment
void* cons = (decode_clo(env8407))[3];
//not do dummy comment
void* append = (decode_clo(env8407))[2];
//not do dummy comment
void* kont8083 = (decode_clo(env8407))[1];

//creating new closure instance
void** clo9441 = alloc_clo(lam8404_fptr, 3);

//setting env list
clo9441[1] = cons;
clo9441[2] = a79808248;
clo9441[3] = kont8083;
void* f80848251 = encode_clo(clo9441);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f80848251;
arg_buffer[3] = a79818250;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8406 = encode_clo(alloc_clo(lam8406_fptr, 0));

void* lam8408_fptr() // lam8408 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8409 = arg_buffer[1];
//reading env and args
void* a79808248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8409))[6];
//not do dummy comment
void* lst2 = (decode_clo(env8409))[5];
//not do dummy comment
void* lst1 = (decode_clo(env8409))[4];
//not do dummy comment
void* cons = (decode_clo(env8409))[3];
//not do dummy comment
void* append = (decode_clo(env8409))[2];
//not do dummy comment
void* kont8083 = (decode_clo(env8409))[1];

//creating new closure instance
void** clo9443 = alloc_clo(lam8406_fptr, 5);

//setting env list
clo9443[1] = kont8083;
clo9443[2] = append;
clo9443[3] = cons;
clo9443[4] = a79808248;
clo9443[5] = lst2;
void* f80858249 = encode_clo(clo9443);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f80858249;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8408 = encode_clo(alloc_clo(lam8408_fptr, 0));

void* lam8410_fptr() // lam8410 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8411 = arg_buffer[1];
//reading env and args
void* a79798246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8411))[7];
//not do dummy comment
void* lst2 = (decode_clo(env8411))[6];
//not do dummy comment
void* cons = (decode_clo(env8411))[5];
//not do dummy comment
void* append = (decode_clo(env8411))[4];
//not do dummy comment
void* kont8083 = (decode_clo(env8411))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8411))[2];
//not do dummy comment
void* car = (decode_clo(env8411))[1];

//if-clause
bool if_guard9444 = is_true(a79798246);
if(if_guard9444)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8083);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8083))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9446 = alloc_clo(lam8408_fptr, 6);

//setting env list
clo9446[1] = kont8083;
clo9446[2] = append;
clo9446[3] = cons;
clo9446[4] = lst1;
clo9446[5] = lst2;
clo9446[6] = cdr;
void* f80868247 = encode_clo(clo9446);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f80868247;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8410 = encode_clo(alloc_clo(lam8410_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8412 = arg_buffer[1];
//reading env and args
void* kont8083 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9448 = alloc_clo(lam8410_fptr, 7);

//setting env list
clo9448[1] = car;
clo9448[2] = lst1;
clo9448[3] = kont8083;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo9448[4] = append;
clo9448[5] = cons;
clo9448[6] = lst2;
clo9448[7] = cdr;
void* f80878245 = encode_clo(clo9448);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f80878245;
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
void* _8413 = arg_buffer[1];
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

void* kont80888253 = prim_car(lst);
void* lst8254 = prim_cdr(lst);
void* x79838255 = apply_prim_hash(lst8254);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont80888253);
arg_buffer[2] = x79838255;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont80888253))[0]);
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
void* _8414 = arg_buffer[1];
//reading env and args
void* kont8090 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x79848256 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8090);
arg_buffer[2] = x79848256;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8090))[0]);
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
void* _8415 = arg_buffer[1];
//reading env and args
void* kont8091 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x79858257 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8091);
arg_buffer[2] = x79858257;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8091))[0]);
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
void* _8416 = arg_buffer[1];
//reading env and args
void* kont8092 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x79868258 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8092);
arg_buffer[2] = x79868258;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8092))[0]);
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
void* _8417 = arg_buffer[1];
//reading env and args
void* kont8093 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x79878259 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8093);
arg_buffer[2] = x79878259;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8093))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam8418_fptr() // lam8418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8419 = arg_buffer[1];
//reading env and args
void* a79918264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8094 = (decode_clo(env8419))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8419))[1];
void* cps_u45lst80958265 = prim_cons(kont8094, a79918264);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = cps_u45lst80958265;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8418 = encode_clo(alloc_clo(lam8418_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8423 = arg_buffer[1];
//reading env and args
void* kont8094 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar9449 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9449, "1", 10);
void* a79888260 = encode_mpz(mpzvar9449);
mpz_t* mpzvar9450 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9450, "2", 10);
void* a79898261 = encode_mpz(mpzvar9450);
mpz_t* mpzvar9451 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9451, "3", 10);
void* a79908262 = encode_mpz(mpzvar9451);

//creating new closure instance
void** clo9453 = alloc_clo(lam8418_fptr, 2);

//setting env list
clo9453[1] = _u43;
clo9453[2] = kont8094;
void* f80968263 = encode_clo(clo9453);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f80968263;
arg_buffer[3] = a79888260;
arg_buffer[4] = a79898261;
arg_buffer[5] = a79908262;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8424_fptr() // lam8424 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8425 = arg_buffer[1];
//reading env and args
void* x79928267 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont8097 = (decode_clo(env8425))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8097);
arg_buffer[2] = x79928267;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8097))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8424 = encode_clo(alloc_clo(lam8424_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8426 = arg_buffer[1];
//reading env and args
void* kont8097 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo9455 = alloc_clo(lam8424_fptr, 1);

//setting env list
clo9455[1] = kont8097;
void* f80988266 = encode_clo(clo9455);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f80988266;
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

