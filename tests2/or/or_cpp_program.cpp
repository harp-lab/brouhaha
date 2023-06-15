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
void* _51263 = arg_buffer[1];
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

void* kont5098351089 = prim_car(lst);
void* lst51090 = prim_cdr(lst);
void* x5088851091 = apply_prim__u43(lst51090);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5098351089);
arg_buffer[2] = x5088851091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5098351089))[0]);
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
void* _51264 = arg_buffer[1];
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

void* kont5098551092 = prim_car(lst);
void* lst51093 = prim_cdr(lst);
void* x5088951094 = apply_prim__u45(lst51093);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5098551092);
arg_buffer[2] = x5088951094;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5098551092))[0]);
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
void* _51265 = arg_buffer[1];
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

void* kont5098751095 = prim_car(lst);
void* lst51096 = prim_cdr(lst);
void* x5089051097 = apply_prim__u42(lst51096);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5098751095);
arg_buffer[2] = x5089051097;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5098751095))[0]);
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
void* _51266 = arg_buffer[1];
//reading env and args
void* kont50989 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5089151098 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont50989);
arg_buffer[2] = x5089151098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont50989))[0]);
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
void* _51267 = arg_buffer[1];
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

void* kont5099051099 = prim_car(lst);
void* lst51100 = prim_cdr(lst);
void* x5089251101 = apply_prim__u47(lst51100);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5099051099);
arg_buffer[2] = x5089251101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5099051099))[0]);
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
void* _51268 = arg_buffer[1];
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

void* kont5099251102 = prim_car(lst);
void* lst51103 = prim_cdr(lst);
void* x5089351104 = apply_prim__u61(lst51103);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5099251102);
arg_buffer[2] = x5089351104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5099251102))[0]);
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
void* _51269 = arg_buffer[1];
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

void* kont5099451105 = prim_car(lst);
void* lst51106 = prim_cdr(lst);
void* x5089451107 = apply_prim__u62(lst51106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5099451105);
arg_buffer[2] = x5089451107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5099451105))[0]);
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
void* _51270 = arg_buffer[1];
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

void* kont5099651108 = prim_car(lst);
void* lst51109 = prim_cdr(lst);
void* x5089551110 = apply_prim__u60(lst51109);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5099651108);
arg_buffer[2] = x5089551110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5099651108))[0]);
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
void* _51271 = arg_buffer[1];
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

void* kont5099851111 = prim_car(lst);
void* lst51112 = prim_cdr(lst);
void* x5089651113 = apply_prim__u60_u61(lst51112);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5099851111);
arg_buffer[2] = x5089651113;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5099851111))[0]);
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
void* _51272 = arg_buffer[1];
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

void* kont5100051114 = prim_car(lst);
void* lst51115 = prim_cdr(lst);
void* x5089751116 = apply_prim__u62_u61(lst51115);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5100051114);
arg_buffer[2] = x5089751116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5100051114))[0]);
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
void* _51273 = arg_buffer[1];
//reading env and args
void* kont51002 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5089851117 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51002);
arg_buffer[2] = x5089851117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51002))[0]);
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
void* _51274 = arg_buffer[1];
//reading env and args
void* kont51003 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5089951118 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51003);
arg_buffer[2] = x5089951118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51003))[0]);
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
void* _51275 = arg_buffer[1];
//reading env and args
void* kont51004 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5090051119 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51004);
arg_buffer[2] = x5090051119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51004))[0]);
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
void* _51276 = arg_buffer[1];
//reading env and args
void* kont51005 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5090151120 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51005);
arg_buffer[2] = x5090151120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51005))[0]);
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
void* _51277 = arg_buffer[1];
//reading env and args
void* kont51006 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5090251121 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51006);
arg_buffer[2] = x5090251121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51006))[0]);
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
void* _51278 = arg_buffer[1];
//reading env and args
void* kont51007 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5090351122 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51007);
arg_buffer[2] = x5090351122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51007))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam51279_fptr() // lam51279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51280 = arg_buffer[1];
//reading env and args
void* a5090651126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5090451123 = (decode_clo(env51280))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env51280))[2];
//not do dummy comment
void* kont51008 = (decode_clo(env51280))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51008;
arg_buffer[3] = a5090451123;
arg_buffer[4] = a5090651126;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51279 = encode_clo(alloc_clo(lam51279_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51283 = arg_buffer[1];
//reading env and args
void* kont51008 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar52928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52928, "0", 10);
void* a5090451123 = encode_mpz(mpzvar52928);
mpz_t* mpzvar52929 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52929, "2", 10);
void* a5090551124 = encode_mpz(mpzvar52929);

//creating new closure instance
void** clo52931 = alloc_clo(lam51279_fptr, 3);

//setting env list
clo52931[1] = kont51008;
clo52931[2] = equal_u63;
clo52931[3] = a5090451123;
void* f5100951125 = encode_clo(clo52931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5100951125;
arg_buffer[3] = x;
arg_buffer[4] = a5090551124;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam51284_fptr() // lam51284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51285 = arg_buffer[1];
//reading env and args
void* a5090951130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51010 = (decode_clo(env51285))[3];
//not do dummy comment
void* a5090751127 = (decode_clo(env51285))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env51285))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51010;
arg_buffer[3] = a5090751127;
arg_buffer[4] = a5090951130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51284 = encode_clo(alloc_clo(lam51284_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51288 = arg_buffer[1];
//reading env and args
void* kont51010 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar52932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52932, "1", 10);
void* a5090751127 = encode_mpz(mpzvar52932);
mpz_t* mpzvar52933 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52933, "2", 10);
void* a5090851128 = encode_mpz(mpzvar52933);

//creating new closure instance
void** clo52935 = alloc_clo(lam51284_fptr, 3);

//setting env list
clo52935[1] = equal_u63;
clo52935[2] = a5090751127;
clo52935[3] = kont51010;
void* f5101151129 = encode_clo(clo52935);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5101151129;
arg_buffer[3] = x;
arg_buffer[4] = a5090851128;
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
void* _51289 = arg_buffer[1];
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

void* kont5101251131 = prim_car(x);
void* x51132 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5101251131);
arg_buffer[2] = x51132;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5101251131))[0]);
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
void* _51290 = arg_buffer[1];
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

void* kont5101451133 = prim_car(lst);
void* lst51134 = prim_cdr(lst);
void* x5091051135 = apply_prim_and(lst51134);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5101451133);
arg_buffer[2] = x5091051135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5101451133))[0]);
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
void* _51291 = arg_buffer[1];
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

void* kont5101651136 = prim_car(lst);
void* lst51137 = prim_cdr(lst);
void* x5091151138 = apply_prim_or(lst51137);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5101651136);
arg_buffer[2] = x5091151138;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5101651136))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam51294_fptr() // lam51294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51295 = arg_buffer[1];
//reading env and args
void* a5091751148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51018 = (decode_clo(env51295))[3];
//not do dummy comment
void* x = (decode_clo(env51295))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env51295))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont51018;
arg_buffer[3] = x;
arg_buffer[4] = a5091751148;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51294 = encode_clo(alloc_clo(lam51294_fptr, 0));

void* lam51296_fptr() // lam51296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51297 = arg_buffer[1];
//reading env and args
void* a5091551145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51297))[5];
//not do dummy comment
void* lst = (decode_clo(env51297))[4];
//not do dummy comment
void* kont51018 = (decode_clo(env51297))[3];
//not do dummy comment
void* x = (decode_clo(env51297))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env51297))[1];

//if-clause
bool if_guard52936 = is_true(a5091551145);
if(if_guard52936)
{
void* x5091651146 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51018);
arg_buffer[2] = x5091651146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51018))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52938 = alloc_clo(lam51294_fptr, 3);

//setting env list
clo52938[1] = member_u63;
clo52938[2] = x;
clo52938[3] = kont51018;
void* f5101951147 = encode_clo(clo52938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5101951147;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51296 = encode_clo(alloc_clo(lam51296_fptr, 0));

void* lam51298_fptr() // lam51298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51299 = arg_buffer[1];
//reading env and args
void* a5091451143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51299))[6];
//not do dummy comment
void* lst = (decode_clo(env51299))[5];
//not do dummy comment
void* x = (decode_clo(env51299))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env51299))[3];
//not do dummy comment
void* kont51018 = (decode_clo(env51299))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env51299))[1];

//creating new closure instance
void** clo52940 = alloc_clo(lam51296_fptr, 5);

//setting env list
clo52940[1] = member_u63;
clo52940[2] = x;
clo52940[3] = kont51018;
clo52940[4] = lst;
clo52940[5] = cdr;
void* f5102051144 = encode_clo(clo52940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5102051144;
arg_buffer[3] = a5091451143;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51298 = encode_clo(alloc_clo(lam51298_fptr, 0));

void* lam51300_fptr() // lam51300 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51301 = arg_buffer[1];
//reading env and args
void* a5091251140 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51301))[7];
//not do dummy comment
void* lst = (decode_clo(env51301))[6];
//not do dummy comment
void* x = (decode_clo(env51301))[5];
//not do dummy comment
void* car = (decode_clo(env51301))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env51301))[3];
//not do dummy comment
void* kont51018 = (decode_clo(env51301))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env51301))[1];

//if-clause
bool if_guard52941 = is_true(a5091251140);
if(if_guard52941)
{
void* x5091351141 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51018);
arg_buffer[2] = x5091351141;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51018))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52943 = alloc_clo(lam51298_fptr, 6);

//setting env list
clo52943[1] = equal_u63;
clo52943[2] = kont51018;
clo52943[3] = member_u63;
clo52943[4] = x;
clo52943[5] = lst;
clo52943[6] = cdr;
void* f5102151142 = encode_clo(clo52943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5102151142;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51300 = encode_clo(alloc_clo(lam51300_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51302 = arg_buffer[1];
//reading env and args
void* kont51018 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52945 = alloc_clo(lam51300_fptr, 7);

//setting env list
clo52945[1] = equal_u63;
clo52945[2] = kont51018;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo52945[3] = member_u63;
clo52945[4] = car;
clo52945[5] = x;
clo52945[6] = lst;
clo52945[7] = cdr;
void* f5102251139 = encode_clo(clo52945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5102251139;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam51303_fptr() // lam51303 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51304 = arg_buffer[1];
//reading env and args
void* a5092151156 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5092051154 = (decode_clo(env51304))[4];
//not do dummy comment
void* fun = (decode_clo(env51304))[3];
//not do dummy comment
void* kont51023 = (decode_clo(env51304))[2];
//not do dummy comment
void* foldl = (decode_clo(env51304))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont51023;
arg_buffer[3] = fun;
arg_buffer[4] = a5092051154;
arg_buffer[5] = a5092151156;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51303 = encode_clo(alloc_clo(lam51303_fptr, 0));

void* lam51305_fptr() // lam51305 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51306 = arg_buffer[1];
//reading env and args
void* a5092051154 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51306))[5];
//not do dummy comment
void* lst = (decode_clo(env51306))[4];
//not do dummy comment
void* fun = (decode_clo(env51306))[3];
//not do dummy comment
void* kont51023 = (decode_clo(env51306))[2];
//not do dummy comment
void* foldl = (decode_clo(env51306))[1];

//creating new closure instance
void** clo52947 = alloc_clo(lam51303_fptr, 4);

//setting env list
clo52947[1] = foldl;
clo52947[2] = kont51023;
clo52947[3] = fun;
clo52947[4] = a5092051154;
void* f5102451155 = encode_clo(clo52947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5102451155;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51305 = encode_clo(alloc_clo(lam51305_fptr, 0));

void* lam51307_fptr() // lam51307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51308 = arg_buffer[1];
//reading env and args
void* a5091951152 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51308))[6];
//not do dummy comment
void* lst = (decode_clo(env51308))[5];
//not do dummy comment
void* fun = (decode_clo(env51308))[4];
//not do dummy comment
void* acc = (decode_clo(env51308))[3];
//not do dummy comment
void* kont51023 = (decode_clo(env51308))[2];
//not do dummy comment
void* foldl = (decode_clo(env51308))[1];

//creating new closure instance
void** clo52949 = alloc_clo(lam51305_fptr, 5);

//setting env list
clo52949[1] = foldl;
clo52949[2] = kont51023;
clo52949[3] = fun;
clo52949[4] = lst;
clo52949[5] = cdr;
void* f5102551153 = encode_clo(clo52949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5102551153;
arg_buffer[3] = a5091951152;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51307 = encode_clo(alloc_clo(lam51307_fptr, 0));

void* lam51309_fptr() // lam51309 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51310 = arg_buffer[1];
//reading env and args
void* a5091851150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51310))[7];
//not do dummy comment
void* lst = (decode_clo(env51310))[6];
//not do dummy comment
void* fun = (decode_clo(env51310))[5];
//not do dummy comment
void* acc = (decode_clo(env51310))[4];
//not do dummy comment
void* foldl = (decode_clo(env51310))[3];
//not do dummy comment
void* kont51023 = (decode_clo(env51310))[2];
//not do dummy comment
void* car = (decode_clo(env51310))[1];

//if-clause
bool if_guard52950 = is_true(a5091851150);
if(if_guard52950)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51023);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51023))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52952 = alloc_clo(lam51307_fptr, 6);

//setting env list
clo52952[1] = foldl;
clo52952[2] = kont51023;
clo52952[3] = acc;
clo52952[4] = fun;
clo52952[5] = lst;
clo52952[6] = cdr;
void* f5102651151 = encode_clo(clo52952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5102651151;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51309 = encode_clo(alloc_clo(lam51309_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51311 = arg_buffer[1];
//reading env and args
void* kont51023 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo52954 = alloc_clo(lam51309_fptr, 7);

//setting env list
clo52954[1] = car;
clo52954[2] = kont51023;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo52954[3] = foldl;
clo52954[4] = acc;
clo52954[5] = fun;
clo52954[6] = lst;
clo52954[7] = cdr;
void* f5102751149 = encode_clo(clo52954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5102751149;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam51312_fptr() // lam51312 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51313 = arg_buffer[1];
//reading env and args
void* a5092551164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51028 = (decode_clo(env51313))[3];
//not do dummy comment
void* a5092351160 = (decode_clo(env51313))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51313))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51028;
arg_buffer[3] = a5092351160;
arg_buffer[4] = a5092551164;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51312 = encode_clo(alloc_clo(lam51312_fptr, 0));

void* lam51314_fptr() // lam51314 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51315 = arg_buffer[1];
//reading env and args
void* a5092451162 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51028 = (decode_clo(env51315))[5];
//not do dummy comment
void* a5092351160 = (decode_clo(env51315))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51315))[3];
//not do dummy comment
void* lst2 = (decode_clo(env51315))[2];
//not do dummy comment
void* cons = (decode_clo(env51315))[1];

//creating new closure instance
void** clo52956 = alloc_clo(lam51312_fptr, 3);

//setting env list
clo52956[1] = reverse_u45helper;
clo52956[2] = a5092351160;
clo52956[3] = kont51028;
void* f5102951163 = encode_clo(clo52956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5102951163;
arg_buffer[3] = a5092451162;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51314 = encode_clo(alloc_clo(lam51314_fptr, 0));

void* lam51316_fptr() // lam51316 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51317 = arg_buffer[1];
//reading env and args
void* a5092351160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51028 = (decode_clo(env51317))[6];
//not do dummy comment
void* lst = (decode_clo(env51317))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51317))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51317))[3];
//not do dummy comment
void* car = (decode_clo(env51317))[2];
//not do dummy comment
void* cons = (decode_clo(env51317))[1];

//creating new closure instance
void** clo52958 = alloc_clo(lam51314_fptr, 5);

//setting env list
clo52958[1] = cons;
clo52958[2] = lst2;
clo52958[3] = reverse_u45helper;
clo52958[4] = a5092351160;
clo52958[5] = kont51028;
void* f5103051161 = encode_clo(clo52958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5103051161;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51316 = encode_clo(alloc_clo(lam51316_fptr, 0));

void* lam51318_fptr() // lam51318 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51319 = arg_buffer[1];
//reading env and args
void* a5092251158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51319))[7];
//not do dummy comment
void* kont51028 = (decode_clo(env51319))[6];
//not do dummy comment
void* lst = (decode_clo(env51319))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51319))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51319))[3];
//not do dummy comment
void* car = (decode_clo(env51319))[2];
//not do dummy comment
void* cons = (decode_clo(env51319))[1];

//if-clause
bool if_guard52959 = is_true(a5092251158);
if(if_guard52959)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51028);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51028))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo52961 = alloc_clo(lam51316_fptr, 6);

//setting env list
clo52961[1] = cons;
clo52961[2] = car;
clo52961[3] = lst2;
clo52961[4] = reverse_u45helper;
clo52961[5] = lst;
clo52961[6] = kont51028;
void* f5103151159 = encode_clo(clo52961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5103151159;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51318 = encode_clo(alloc_clo(lam51318_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51320 = arg_buffer[1];
//reading env and args
void* kont51028 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52963 = alloc_clo(lam51318_fptr, 7);

//setting env list
clo52963[1] = cons;
clo52963[2] = car;
clo52963[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo52963[4] = reverse_u45helper;
clo52963[5] = lst;
clo52963[6] = kont51028;
clo52963[7] = cdr;
void* f5103251157 = encode_clo(clo52963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5103251157;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam51321_fptr() // lam51321 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51322 = arg_buffer[1];
//reading env and args
void* a5092651166 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51322))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env51322))[2];
//not do dummy comment
void* kont51033 = (decode_clo(env51322))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51033;
arg_buffer[3] = lst;
arg_buffer[4] = a5092651166;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51321 = encode_clo(alloc_clo(lam51321_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51323 = arg_buffer[1];
//reading env and args
void* kont51033 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo52965 = alloc_clo(lam51321_fptr, 3);

//setting env list
clo52965[1] = kont51033;
clo52965[2] = reverse_u45helper;
clo52965[3] = lst;
void* f5103451165 = encode_clo(clo52965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5103451165;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam51324_fptr() // lam51324 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51325 = arg_buffer[1];
//reading env and args
void* x5092951171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51035 = (decode_clo(env51325))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51035);
arg_buffer[2] = x5092951171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51035))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51324 = encode_clo(alloc_clo(lam51324_fptr, 0));

void* lam51326_fptr() // lam51326 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51327 = arg_buffer[1];
//reading env and args
void* a5093451180 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5093051173 = (decode_clo(env51327))[4];
//not do dummy comment
void* a5093251176 = (decode_clo(env51327))[3];
//not do dummy comment
void* kont51035 = (decode_clo(env51327))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env51327))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51035;
arg_buffer[3] = a5093051173;
arg_buffer[4] = a5093251176;
arg_buffer[5] = a5093451180;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51326 = encode_clo(alloc_clo(lam51326_fptr, 0));

void* lam51328_fptr() // lam51328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51329 = arg_buffer[1];
//reading env and args
void* a5093351178 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5093051173 = (decode_clo(env51329))[6];
//not do dummy comment
void* a5093251176 = (decode_clo(env51329))[5];
//not do dummy comment
void* kont51035 = (decode_clo(env51329))[4];
//not do dummy comment
void* cons = (decode_clo(env51329))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51329))[2];
//not do dummy comment
void* lst2 = (decode_clo(env51329))[1];

//creating new closure instance
void** clo52967 = alloc_clo(lam51326_fptr, 4);

//setting env list
clo52967[1] = take_u45helper;
clo52967[2] = kont51035;
clo52967[3] = a5093251176;
clo52967[4] = a5093051173;
void* f5103751179 = encode_clo(clo52967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5103751179;
arg_buffer[3] = a5093351178;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51328 = encode_clo(alloc_clo(lam51328_fptr, 0));

void* lam51330_fptr() // lam51330 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51331 = arg_buffer[1];
//reading env and args
void* a5093251176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5093051173 = (decode_clo(env51331))[7];
//not do dummy comment
void* lst = (decode_clo(env51331))[6];
//not do dummy comment
void* kont51035 = (decode_clo(env51331))[5];
//not do dummy comment
void* car = (decode_clo(env51331))[4];
//not do dummy comment
void* cons = (decode_clo(env51331))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51331))[2];
//not do dummy comment
void* lst2 = (decode_clo(env51331))[1];

//creating new closure instance
void** clo52969 = alloc_clo(lam51328_fptr, 6);

//setting env list
clo52969[1] = lst2;
clo52969[2] = take_u45helper;
clo52969[3] = cons;
clo52969[4] = kont51035;
clo52969[5] = a5093251176;
clo52969[6] = a5093051173;
void* f5103851177 = encode_clo(clo52969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5103851177;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51330 = encode_clo(alloc_clo(lam51330_fptr, 0));

void* lam51333_fptr() // lam51333 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51334 = arg_buffer[1];
//reading env and args
void* a5093051173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51334))[8];
//not do dummy comment
void* kont51035 = (decode_clo(env51334))[7];
//not do dummy comment
void* cons = (decode_clo(env51334))[6];
//not do dummy comment
void* _u45 = (decode_clo(env51334))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env51334))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51334))[3];
//not do dummy comment
void* n = (decode_clo(env51334))[2];
//not do dummy comment
void* car = (decode_clo(env51334))[1];
mpz_t* mpzvar52970 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52970, "1", 10);
void* a5093151174 = encode_mpz(mpzvar52970);

//creating new closure instance
void** clo52972 = alloc_clo(lam51330_fptr, 7);

//setting env list
clo52972[1] = lst2;
clo52972[2] = take_u45helper;
clo52972[3] = cons;
clo52972[4] = car;
clo52972[5] = kont51035;
clo52972[6] = lst;
clo52972[7] = a5093051173;
void* f5103951175 = encode_clo(clo52972);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5103951175;
arg_buffer[3] = n;
arg_buffer[4] = a5093151174;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51333 = encode_clo(alloc_clo(lam51333_fptr, 0));

void* lam51335_fptr() // lam51335 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51336 = arg_buffer[1];
//reading env and args
void* a5092851169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51336))[10];
//not do dummy comment
void* lst = (decode_clo(env51336))[9];
//not do dummy comment
void* reverse = (decode_clo(env51336))[8];
//not do dummy comment
void* kont51035 = (decode_clo(env51336))[7];
//not do dummy comment
void* cons = (decode_clo(env51336))[6];
//not do dummy comment
void* _u45 = (decode_clo(env51336))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env51336))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51336))[3];
//not do dummy comment
void* n = (decode_clo(env51336))[2];
//not do dummy comment
void* car = (decode_clo(env51336))[1];

//if-clause
bool if_guard52973 = is_true(a5092851169);
if(if_guard52973)
{

//creating new closure instance
void** clo52975 = alloc_clo(lam51324_fptr, 1);

//setting env list
clo52975[1] = kont51035;
void* f5103651170 = encode_clo(clo52975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5103651170;
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
void** clo52977 = alloc_clo(lam51333_fptr, 8);

//setting env list
clo52977[1] = car;
clo52977[2] = n;
clo52977[3] = lst2;
clo52977[4] = take_u45helper;
clo52977[5] = _u45;
clo52977[6] = cons;
clo52977[7] = kont51035;
clo52977[8] = lst;
void* f5104051172 = encode_clo(clo52977);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5104051172;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51335 = encode_clo(alloc_clo(lam51335_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51338 = arg_buffer[1];
//reading env and args
void* kont51035 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar52978 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52978, "0", 10);
void* a5092751167 = encode_mpz(mpzvar52978);

//creating new closure instance
void** clo52980 = alloc_clo(lam51335_fptr, 10);

//setting env list
clo52980[1] = car;
clo52980[2] = n;
clo52980[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo52980[4] = take_u45helper;
clo52980[5] = _u45;
clo52980[6] = cons;
clo52980[7] = kont51035;
clo52980[8] = reverse;
clo52980[9] = lst;
clo52980[10] = cdr;
void* f5104151168 = encode_clo(clo52980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5104151168;
arg_buffer[3] = n;
arg_buffer[4] = a5092751167;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam51339_fptr() // lam51339 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51340 = arg_buffer[1];
//reading env and args
void* a5093551182 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51042 = (decode_clo(env51340))[4];
//not do dummy comment
void* lst = (decode_clo(env51340))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env51340))[2];
//not do dummy comment
void* n = (decode_clo(env51340))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51042;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5093551182;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51339 = encode_clo(alloc_clo(lam51339_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51341 = arg_buffer[1];
//reading env and args
void* kont51042 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo52982 = alloc_clo(lam51339_fptr, 4);

//setting env list
clo52982[1] = n;
clo52982[2] = take_u45helper;
clo52982[3] = lst;
clo52982[4] = kont51042;
void* f5104351181 = encode_clo(clo52982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5104351181;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam51343_fptr() // lam51343 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51344 = arg_buffer[1];
//reading env and args
void* a5094051190 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5093851186 = (decode_clo(env51344))[3];
//not do dummy comment
void* kont51044 = (decode_clo(env51344))[2];
//not do dummy comment
void* _u43 = (decode_clo(env51344))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont51044;
arg_buffer[3] = a5093851186;
arg_buffer[4] = a5094051190;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51343 = encode_clo(alloc_clo(lam51343_fptr, 0));

void* lam51345_fptr() // lam51345 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51346 = arg_buffer[1];
//reading env and args
void* a5093951188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5093851186 = (decode_clo(env51346))[4];
//not do dummy comment
void* kont51044 = (decode_clo(env51346))[3];
//not do dummy comment
void* length = (decode_clo(env51346))[2];
//not do dummy comment
void* _u43 = (decode_clo(env51346))[1];

//creating new closure instance
void** clo52984 = alloc_clo(lam51343_fptr, 3);

//setting env list
clo52984[1] = _u43;
clo52984[2] = kont51044;
clo52984[3] = a5093851186;
void* f5104551189 = encode_clo(clo52984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5104551189;
arg_buffer[3] = a5093951188;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51345 = encode_clo(alloc_clo(lam51345_fptr, 0));

void* lam51348_fptr() // lam51348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51349 = arg_buffer[1];
//reading env and args
void* a5093651184 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51349))[5];
//not do dummy comment
void* kont51044 = (decode_clo(env51349))[4];
//not do dummy comment
void* lst = (decode_clo(env51349))[3];
//not do dummy comment
void* length = (decode_clo(env51349))[2];
//not do dummy comment
void* _u43 = (decode_clo(env51349))[1];

//if-clause
bool if_guard52985 = is_true(a5093651184);
if(if_guard52985)
{
mpz_t* mpzvar52986 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52986, "0", 10);
void* x5093751185 = encode_mpz(mpzvar52986);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51044);
arg_buffer[2] = x5093751185;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51044))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar52987 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar52987, "1", 10);
void* a5093851186 = encode_mpz(mpzvar52987);

//creating new closure instance
void** clo52989 = alloc_clo(lam51345_fptr, 4);

//setting env list
clo52989[1] = _u43;
clo52989[2] = length;
clo52989[3] = kont51044;
clo52989[4] = a5093851186;
void* f5104651187 = encode_clo(clo52989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5104651187;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51348 = encode_clo(alloc_clo(lam51348_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51350 = arg_buffer[1];
//reading env and args
void* kont51044 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo52991 = alloc_clo(lam51348_fptr, 5);

//setting env list
clo52991[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo52991[2] = length;
clo52991[3] = lst;
clo52991[4] = kont51044;
clo52991[5] = cdr;
void* f5104751183 = encode_clo(clo52991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5104751183;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam51351_fptr() // lam51351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51352 = arg_buffer[1];
//reading env and args
void* x5094251194 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51048 = (decode_clo(env51352))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51048);
arg_buffer[2] = x5094251194;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51048))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51351 = encode_clo(alloc_clo(lam51351_fptr, 0));

void* lam51353_fptr() // lam51353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51354 = arg_buffer[1];
//reading env and args
void* a5094651202 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51048 = (decode_clo(env51354))[3];
//not do dummy comment
void* a5094451198 = (decode_clo(env51354))[2];
//not do dummy comment
void* cons = (decode_clo(env51354))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51048;
arg_buffer[3] = a5094451198;
arg_buffer[4] = a5094651202;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51353 = encode_clo(alloc_clo(lam51353_fptr, 0));

void* lam51355_fptr() // lam51355 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51356 = arg_buffer[1];
//reading env and args
void* a5094551200 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env51356))[5];
//not do dummy comment
void* kont51048 = (decode_clo(env51356))[4];
//not do dummy comment
void* proc = (decode_clo(env51356))[3];
//not do dummy comment
void* a5094451198 = (decode_clo(env51356))[2];
//not do dummy comment
void* cons = (decode_clo(env51356))[1];

//creating new closure instance
void** clo52993 = alloc_clo(lam51353_fptr, 3);

//setting env list
clo52993[1] = cons;
clo52993[2] = a5094451198;
clo52993[3] = kont51048;
void* f5105051201 = encode_clo(clo52993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5105051201;
arg_buffer[3] = proc;
arg_buffer[4] = a5094551200;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51355 = encode_clo(alloc_clo(lam51355_fptr, 0));

void* lam51357_fptr() // lam51357 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51358 = arg_buffer[1];
//reading env and args
void* a5094451198 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51358))[6];
//not do dummy comment
void* lst = (decode_clo(env51358))[5];
//not do dummy comment
void* map = (decode_clo(env51358))[4];
//not do dummy comment
void* kont51048 = (decode_clo(env51358))[3];
//not do dummy comment
void* proc = (decode_clo(env51358))[2];
//not do dummy comment
void* cons = (decode_clo(env51358))[1];

//creating new closure instance
void** clo52995 = alloc_clo(lam51355_fptr, 5);

//setting env list
clo52995[1] = cons;
clo52995[2] = a5094451198;
clo52995[3] = proc;
clo52995[4] = kont51048;
clo52995[5] = map;
void* f5105151199 = encode_clo(clo52995);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5105151199;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51357 = encode_clo(alloc_clo(lam51357_fptr, 0));

void* lam51359_fptr() // lam51359 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51360 = arg_buffer[1];
//reading env and args
void* a5094351196 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51360))[6];
//not do dummy comment
void* lst = (decode_clo(env51360))[5];
//not do dummy comment
void* map = (decode_clo(env51360))[4];
//not do dummy comment
void* kont51048 = (decode_clo(env51360))[3];
//not do dummy comment
void* proc = (decode_clo(env51360))[2];
//not do dummy comment
void* cons = (decode_clo(env51360))[1];

//creating new closure instance
void** clo52997 = alloc_clo(lam51357_fptr, 6);

//setting env list
clo52997[1] = cons;
clo52997[2] = proc;
clo52997[3] = kont51048;
clo52997[4] = map;
clo52997[5] = lst;
clo52997[6] = cdr;
void* f5105251197 = encode_clo(clo52997);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5105251197;
arg_buffer[3] = a5094351196;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51359 = encode_clo(alloc_clo(lam51359_fptr, 0));

void* lam51361_fptr() // lam51361 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51362 = arg_buffer[1];
//reading env and args
void* a5094151192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51362))[8];
//not do dummy comment
void* map = (decode_clo(env51362))[7];
//not do dummy comment
void* kont51048 = (decode_clo(env51362))[6];
//not do dummy comment
void* proc = (decode_clo(env51362))[5];
//not do dummy comment
void* car = (decode_clo(env51362))[4];
//not do dummy comment
void* cons = (decode_clo(env51362))[3];
//not do dummy comment
void* list = (decode_clo(env51362))[2];
//not do dummy comment
void* cdr = (decode_clo(env51362))[1];

//if-clause
bool if_guard52998 = is_true(a5094151192);
if(if_guard52998)
{

//creating new closure instance
void** clo53000 = alloc_clo(lam51351_fptr, 1);

//setting env list
clo53000[1] = kont51048;
void* f5104951193 = encode_clo(clo53000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5104951193;
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
void** clo53002 = alloc_clo(lam51359_fptr, 6);

//setting env list
clo53002[1] = cons;
clo53002[2] = proc;
clo53002[3] = kont51048;
clo53002[4] = map;
clo53002[5] = lst;
clo53002[6] = cdr;
void* f5105351195 = encode_clo(clo53002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5105351195;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51361 = encode_clo(alloc_clo(lam51361_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51363 = arg_buffer[1];
//reading env and args
void* kont51048 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53004 = alloc_clo(lam51361_fptr, 8);

//setting env list
clo53004[1] = cdr;
clo53004[2] = list;
clo53004[3] = cons;
clo53004[4] = car;
clo53004[5] = proc;
clo53004[6] = kont51048;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo53004[7] = map;
clo53004[8] = lst;
void* f5105451191 = encode_clo(clo53004);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5105451191;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam51364_fptr() // lam51364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51365 = arg_buffer[1];
//reading env and args
void* x5094851206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51055 = (decode_clo(env51365))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51055);
arg_buffer[2] = x5094851206;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51055))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51364 = encode_clo(alloc_clo(lam51364_fptr, 0));

void* lam51366_fptr() // lam51366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51367 = arg_buffer[1];
//reading env and args
void* a5095351216 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5095151212 = (decode_clo(env51367))[3];
//not do dummy comment
void* kont51055 = (decode_clo(env51367))[2];
//not do dummy comment
void* cons = (decode_clo(env51367))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51055;
arg_buffer[3] = a5095151212;
arg_buffer[4] = a5095351216;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51366 = encode_clo(alloc_clo(lam51366_fptr, 0));

void* lam51368_fptr() // lam51368 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51369 = arg_buffer[1];
//reading env and args
void* a5095251214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env51369))[5];
//not do dummy comment
void* a5095151212 = (decode_clo(env51369))[4];
//not do dummy comment
void* cons = (decode_clo(env51369))[3];
//not do dummy comment
void* filter = (decode_clo(env51369))[2];
//not do dummy comment
void* kont51055 = (decode_clo(env51369))[1];

//creating new closure instance
void** clo53006 = alloc_clo(lam51366_fptr, 3);

//setting env list
clo53006[1] = cons;
clo53006[2] = kont51055;
clo53006[3] = a5095151212;
void* f5105751215 = encode_clo(clo53006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5105751215;
arg_buffer[3] = op;
arg_buffer[4] = a5095251214;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51368 = encode_clo(alloc_clo(lam51368_fptr, 0));

void* lam51370_fptr() // lam51370 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51371 = arg_buffer[1];
//reading env and args
void* a5095151212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51371))[6];
//not do dummy comment
void* lst = (decode_clo(env51371))[5];
//not do dummy comment
void* op = (decode_clo(env51371))[4];
//not do dummy comment
void* cons = (decode_clo(env51371))[3];
//not do dummy comment
void* filter = (decode_clo(env51371))[2];
//not do dummy comment
void* kont51055 = (decode_clo(env51371))[1];

//creating new closure instance
void** clo53008 = alloc_clo(lam51368_fptr, 5);

//setting env list
clo53008[1] = kont51055;
clo53008[2] = filter;
clo53008[3] = cons;
clo53008[4] = a5095151212;
clo53008[5] = op;
void* f5105851213 = encode_clo(clo53008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5105851213;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51370 = encode_clo(alloc_clo(lam51370_fptr, 0));

void* lam51372_fptr() // lam51372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51373 = arg_buffer[1];
//reading env and args
void* a5095451218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env51373))[3];
//not do dummy comment
void* filter = (decode_clo(env51373))[2];
//not do dummy comment
void* kont51055 = (decode_clo(env51373))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont51055;
arg_buffer[3] = op;
arg_buffer[4] = a5095451218;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51372 = encode_clo(alloc_clo(lam51372_fptr, 0));

void* lam51374_fptr() // lam51374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51375 = arg_buffer[1];
//reading env and args
void* a5095051210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51375))[7];
//not do dummy comment
void* lst = (decode_clo(env51375))[6];
//not do dummy comment
void* op = (decode_clo(env51375))[5];
//not do dummy comment
void* cons = (decode_clo(env51375))[4];
//not do dummy comment
void* filter = (decode_clo(env51375))[3];
//not do dummy comment
void* kont51055 = (decode_clo(env51375))[2];
//not do dummy comment
void* car = (decode_clo(env51375))[1];

//if-clause
bool if_guard53009 = is_true(a5095051210);
if(if_guard53009)
{

//creating new closure instance
void** clo53011 = alloc_clo(lam51370_fptr, 6);

//setting env list
clo53011[1] = kont51055;
clo53011[2] = filter;
clo53011[3] = cons;
clo53011[4] = op;
clo53011[5] = lst;
clo53011[6] = cdr;
void* f5105951211 = encode_clo(clo53011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5105951211;
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
void** clo53013 = alloc_clo(lam51372_fptr, 3);

//setting env list
clo53013[1] = kont51055;
clo53013[2] = filter;
clo53013[3] = op;
void* f5106051217 = encode_clo(clo53013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5106051217;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51374 = encode_clo(alloc_clo(lam51374_fptr, 0));

void* lam51376_fptr() // lam51376 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51377 = arg_buffer[1];
//reading env and args
void* a5094951208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51377))[7];
//not do dummy comment
void* lst = (decode_clo(env51377))[6];
//not do dummy comment
void* op = (decode_clo(env51377))[5];
//not do dummy comment
void* cons = (decode_clo(env51377))[4];
//not do dummy comment
void* filter = (decode_clo(env51377))[3];
//not do dummy comment
void* kont51055 = (decode_clo(env51377))[2];
//not do dummy comment
void* car = (decode_clo(env51377))[1];

//creating new closure instance
void** clo53015 = alloc_clo(lam51374_fptr, 7);

//setting env list
clo53015[1] = car;
clo53015[2] = kont51055;
clo53015[3] = filter;
clo53015[4] = cons;
clo53015[5] = op;
clo53015[6] = lst;
clo53015[7] = cdr;
void* f5106151209 = encode_clo(clo53015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5106151209;
arg_buffer[3] = a5094951208;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51376 = encode_clo(alloc_clo(lam51376_fptr, 0));

void* lam51378_fptr() // lam51378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51379 = arg_buffer[1];
//reading env and args
void* a5094751204 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env51379))[8];
//not do dummy comment
void* op = (decode_clo(env51379))[7];
//not do dummy comment
void* cons = (decode_clo(env51379))[6];
//not do dummy comment
void* list = (decode_clo(env51379))[5];
//not do dummy comment
void* cdr = (decode_clo(env51379))[4];
//not do dummy comment
void* filter = (decode_clo(env51379))[3];
//not do dummy comment
void* kont51055 = (decode_clo(env51379))[2];
//not do dummy comment
void* car = (decode_clo(env51379))[1];

//if-clause
bool if_guard53016 = is_true(a5094751204);
if(if_guard53016)
{

//creating new closure instance
void** clo53018 = alloc_clo(lam51364_fptr, 1);

//setting env list
clo53018[1] = kont51055;
void* f5105651205 = encode_clo(clo53018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5105651205;
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
void** clo53020 = alloc_clo(lam51376_fptr, 7);

//setting env list
clo53020[1] = car;
clo53020[2] = kont51055;
clo53020[3] = filter;
clo53020[4] = cons;
clo53020[5] = op;
clo53020[6] = lst;
clo53020[7] = cdr;
void* f5106251207 = encode_clo(clo53020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5106251207;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51378 = encode_clo(alloc_clo(lam51378_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51380 = arg_buffer[1];
//reading env and args
void* kont51055 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53022 = alloc_clo(lam51378_fptr, 8);

//setting env list
clo53022[1] = car;
clo53022[2] = kont51055;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo53022[3] = filter;
clo53022[4] = cdr;
clo53022[5] = list;
clo53022[6] = cons;
clo53022[7] = op;
clo53022[8] = lst;
void* f5106351203 = encode_clo(clo53022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5106351203;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam51381_fptr() // lam51381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51382 = arg_buffer[1];
//reading env and args
void* a5095951226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env51382))[3];
//not do dummy comment
void* a5095751223 = (decode_clo(env51382))[2];
//not do dummy comment
void* kont51064 = (decode_clo(env51382))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont51064;
arg_buffer[3] = a5095751223;
arg_buffer[4] = a5095951226;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51381 = encode_clo(alloc_clo(lam51381_fptr, 0));

void* lam51384_fptr() // lam51384 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51385 = arg_buffer[1];
//reading env and args
void* a5095751223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env51385))[4];
//not do dummy comment
void* kont51064 = (decode_clo(env51385))[3];
//not do dummy comment
void* n = (decode_clo(env51385))[2];
//not do dummy comment
void* _u45 = (decode_clo(env51385))[1];
mpz_t* mpzvar53023 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53023, "1", 10);
void* a5095851224 = encode_mpz(mpzvar53023);

//creating new closure instance
void** clo53025 = alloc_clo(lam51381_fptr, 3);

//setting env list
clo53025[1] = kont51064;
clo53025[2] = a5095751223;
clo53025[3] = drop;
void* f5106551225 = encode_clo(clo53025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5106551225;
arg_buffer[3] = n;
arg_buffer[4] = a5095851224;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51384 = encode_clo(alloc_clo(lam51384_fptr, 0));

void* lam51386_fptr() // lam51386 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51387 = arg_buffer[1];
//reading env and args
void* a5095651221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51387))[6];
//not do dummy comment
void* kont51064 = (decode_clo(env51387))[5];
//not do dummy comment
void* n = (decode_clo(env51387))[4];
//not do dummy comment
void* _u45 = (decode_clo(env51387))[3];
//not do dummy comment
void* lst = (decode_clo(env51387))[2];
//not do dummy comment
void* drop = (decode_clo(env51387))[1];

//if-clause
bool if_guard53026 = is_true(a5095651221);
if(if_guard53026)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51064);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51064))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53028 = alloc_clo(lam51384_fptr, 4);

//setting env list
clo53028[1] = _u45;
clo53028[2] = n;
clo53028[3] = kont51064;
clo53028[4] = drop;
void* f5106651222 = encode_clo(clo53028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5106651222;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51386 = encode_clo(alloc_clo(lam51386_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51389 = arg_buffer[1];
//reading env and args
void* kont51064 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar53029 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53029, "0", 10);
void* a5095551219 = encode_mpz(mpzvar53029);

//creating new closure instance
void** clo53031 = alloc_clo(lam51386_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo53031[1] = drop;
clo53031[2] = lst;
clo53031[3] = _u45;
clo53031[4] = n;
clo53031[5] = kont51064;
clo53031[6] = cdr;
void* f5106751220 = encode_clo(clo53031);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5106751220;
arg_buffer[3] = n;
arg_buffer[4] = a5095551219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam51390_fptr() // lam51390 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51391 = arg_buffer[1];
//reading env and args
void* a5096351234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51068 = (decode_clo(env51391))[3];
//not do dummy comment
void* proc = (decode_clo(env51391))[2];
//not do dummy comment
void* a5096151230 = (decode_clo(env51391))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont51068;
arg_buffer[3] = a5096151230;
arg_buffer[4] = a5096351234;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51390 = encode_clo(alloc_clo(lam51390_fptr, 0));

void* lam51392_fptr() // lam51392 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51393 = arg_buffer[1];
//reading env and args
void* a5096251232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env51393))[5];
//not do dummy comment
void* kont51068 = (decode_clo(env51393))[4];
//not do dummy comment
void* a5096151230 = (decode_clo(env51393))[3];
//not do dummy comment
void* proc = (decode_clo(env51393))[2];
//not do dummy comment
void* acc = (decode_clo(env51393))[1];

//creating new closure instance
void** clo53033 = alloc_clo(lam51390_fptr, 3);

//setting env list
clo53033[1] = a5096151230;
clo53033[2] = proc;
clo53033[3] = kont51068;
void* f5106951233 = encode_clo(clo53033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5106951233;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5096251232;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51392 = encode_clo(alloc_clo(lam51392_fptr, 0));

void* lam51394_fptr() // lam51394 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51395 = arg_buffer[1];
//reading env and args
void* a5096151230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51395))[6];
//not do dummy comment
void* kont51068 = (decode_clo(env51395))[5];
//not do dummy comment
void* foldr = (decode_clo(env51395))[4];
//not do dummy comment
void* lst = (decode_clo(env51395))[3];
//not do dummy comment
void* proc = (decode_clo(env51395))[2];
//not do dummy comment
void* acc = (decode_clo(env51395))[1];

//creating new closure instance
void** clo53035 = alloc_clo(lam51392_fptr, 5);

//setting env list
clo53035[1] = acc;
clo53035[2] = proc;
clo53035[3] = a5096151230;
clo53035[4] = kont51068;
clo53035[5] = foldr;
void* f5107051231 = encode_clo(clo53035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5107051231;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51394 = encode_clo(alloc_clo(lam51394_fptr, 0));

void* lam51396_fptr() // lam51396 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51397 = arg_buffer[1];
//reading env and args
void* a5096051228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51397))[7];
//not do dummy comment
void* kont51068 = (decode_clo(env51397))[6];
//not do dummy comment
void* car = (decode_clo(env51397))[5];
//not do dummy comment
void* foldr = (decode_clo(env51397))[4];
//not do dummy comment
void* lst = (decode_clo(env51397))[3];
//not do dummy comment
void* proc = (decode_clo(env51397))[2];
//not do dummy comment
void* acc = (decode_clo(env51397))[1];

//if-clause
bool if_guard53036 = is_true(a5096051228);
if(if_guard53036)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51068);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51068))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53038 = alloc_clo(lam51394_fptr, 6);

//setting env list
clo53038[1] = acc;
clo53038[2] = proc;
clo53038[3] = lst;
clo53038[4] = foldr;
clo53038[5] = kont51068;
clo53038[6] = cdr;
void* f5107151229 = encode_clo(clo53038);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5107151229;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51396 = encode_clo(alloc_clo(lam51396_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51398 = arg_buffer[1];
//reading env and args
void* kont51068 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53040 = alloc_clo(lam51396_fptr, 7);

//setting env list
clo53040[1] = acc;
clo53040[2] = proc;
clo53040[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo53040[4] = foldr;
clo53040[5] = car;
clo53040[6] = kont51068;
clo53040[7] = cdr;
void* f5107251227 = encode_clo(clo53040);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5107251227;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam51399_fptr() // lam51399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51400 = arg_buffer[1];
//reading env and args
void* a5096751242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5096551238 = (decode_clo(env51400))[3];
//not do dummy comment
void* cons = (decode_clo(env51400))[2];
//not do dummy comment
void* kont51073 = (decode_clo(env51400))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51073;
arg_buffer[3] = a5096551238;
arg_buffer[4] = a5096751242;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51399 = encode_clo(alloc_clo(lam51399_fptr, 0));

void* lam51401_fptr() // lam51401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51402 = arg_buffer[1];
//reading env and args
void* a5096651240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5096551238 = (decode_clo(env51402))[5];
//not do dummy comment
void* append = (decode_clo(env51402))[4];
//not do dummy comment
void* lst2 = (decode_clo(env51402))[3];
//not do dummy comment
void* cons = (decode_clo(env51402))[2];
//not do dummy comment
void* kont51073 = (decode_clo(env51402))[1];

//creating new closure instance
void** clo53042 = alloc_clo(lam51399_fptr, 3);

//setting env list
clo53042[1] = kont51073;
clo53042[2] = cons;
clo53042[3] = a5096551238;
void* f5107451241 = encode_clo(clo53042);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5107451241;
arg_buffer[3] = a5096651240;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51401 = encode_clo(alloc_clo(lam51401_fptr, 0));

void* lam51403_fptr() // lam51403 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51404 = arg_buffer[1];
//reading env and args
void* a5096551238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51404))[6];
//not do dummy comment
void* append = (decode_clo(env51404))[5];
//not do dummy comment
void* lst2 = (decode_clo(env51404))[4];
//not do dummy comment
void* lst1 = (decode_clo(env51404))[3];
//not do dummy comment
void* cons = (decode_clo(env51404))[2];
//not do dummy comment
void* kont51073 = (decode_clo(env51404))[1];

//creating new closure instance
void** clo53044 = alloc_clo(lam51401_fptr, 5);

//setting env list
clo53044[1] = kont51073;
clo53044[2] = cons;
clo53044[3] = lst2;
clo53044[4] = append;
clo53044[5] = a5096551238;
void* f5107551239 = encode_clo(clo53044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5107551239;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51403 = encode_clo(alloc_clo(lam51403_fptr, 0));

void* lam51405_fptr() // lam51405 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51406 = arg_buffer[1];
//reading env and args
void* a5096451236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env51406))[7];
//not do dummy comment
void* append = (decode_clo(env51406))[6];
//not do dummy comment
void* lst2 = (decode_clo(env51406))[5];
//not do dummy comment
void* cons = (decode_clo(env51406))[4];
//not do dummy comment
void* kont51073 = (decode_clo(env51406))[3];
//not do dummy comment
void* lst1 = (decode_clo(env51406))[2];
//not do dummy comment
void* car = (decode_clo(env51406))[1];

//if-clause
bool if_guard53045 = is_true(a5096451236);
if(if_guard53045)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51073);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51073))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53047 = alloc_clo(lam51403_fptr, 6);

//setting env list
clo53047[1] = kont51073;
clo53047[2] = cons;
clo53047[3] = lst1;
clo53047[4] = lst2;
clo53047[5] = append;
clo53047[6] = cdr;
void* f5107651237 = encode_clo(clo53047);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5107651237;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51405 = encode_clo(alloc_clo(lam51405_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51407 = arg_buffer[1];
//reading env and args
void* kont51073 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53049 = alloc_clo(lam51405_fptr, 7);

//setting env list
clo53049[1] = car;
clo53049[2] = lst1;
clo53049[3] = kont51073;
clo53049[4] = cons;
clo53049[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo53049[6] = append;
clo53049[7] = cdr;
void* f5107751235 = encode_clo(clo53049);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5107751235;
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
void* _51408 = arg_buffer[1];
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

void* kont5107851243 = prim_car(lst);
void* lst51244 = prim_cdr(lst);
void* x5096851245 = apply_prim_hash(lst51244);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5107851243);
arg_buffer[2] = x5096851245;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5107851243))[0]);
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
void* _51409 = arg_buffer[1];
//reading env and args
void* kont51080 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5096951246 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51080);
arg_buffer[2] = x5096951246;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51080))[0]);
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
void* _51410 = arg_buffer[1];
//reading env and args
void* kont51081 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5097051247 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51081);
arg_buffer[2] = x5097051247;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51081))[0]);
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
void* _51411 = arg_buffer[1];
//reading env and args
void* kont51082 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5097151248 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51082);
arg_buffer[2] = x5097151248;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51082))[0]);
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
void* _51412 = arg_buffer[1];
//reading env and args
void* kont51083 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5097251249 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51083);
arg_buffer[2] = x5097251249;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51083))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam51417_fptr() // lam51417 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51418 = arg_buffer[1];
//reading env and args
void* a5097951258 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env51418))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env51418))[2];
//not do dummy comment
void* kont51084 = (decode_clo(env51418))[1];

//if-clause
bool if_guard53050 = is_true(a5097951258);
if(if_guard53050)
{
mpz_t* mpzvar53051 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53051, "3", 10);
void* a5098051259 = encode_mpz(mpzvar53051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont51084;
arg_buffer[3] = a5098051259;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53052 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53052, "2", 10);
void* a5098151260 = encode_mpz(mpzvar53052);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont51084;
arg_buffer[3] = a5098151260;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51417 = encode_clo(alloc_clo(lam51417_fptr, 0));

void* lam51420_fptr() // lam51420 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51421 = arg_buffer[1];
//reading env and args
void* a5097551253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env51421))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env51421))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env51421))[2];
//not do dummy comment
void* kont51084 = (decode_clo(env51421))[1];

//if-clause
bool if_guard53053 = is_true(a5097551253);
if(if_guard53053)
{
mpz_t* mpzvar53054 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53054, "1", 10);
void* a5097651254 = encode_mpz(mpzvar53054);
mpz_t* mpzvar53055 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53055, "2", 10);
void* a5097751255 = encode_mpz(mpzvar53055);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51084;
arg_buffer[3] = a5097651254;
arg_buffer[4] = a5097751255;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53056 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53056, "3", 10);
void* a5097851256 = encode_mpz(mpzvar53056);

//creating new closure instance
void** clo53058 = alloc_clo(lam51417_fptr, 3);

//setting env list
clo53058[1] = kont51084;
clo53058[2] = even_u63;
clo53058[3] = odd_u63;
void* f5108551257 = encode_clo(clo53058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f5108551257;
arg_buffer[3] = a5097851256;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam51420 = encode_clo(alloc_clo(lam51420_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51424 = arg_buffer[1];
//reading env and args
void* kont51084 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar53059 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53059, "1", 10);
void* a5097351250 = encode_mpz(mpzvar53059);
mpz_t* mpzvar53060 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53060, "2", 10);
void* a5097451251 = encode_mpz(mpzvar53060);

//creating new closure instance
void** clo53062 = alloc_clo(lam51420_fptr, 4);

//setting env list
clo53062[1] = kont51084;
clo53062[2] = equal_u63;
clo53062[3] = even_u63;
clo53062[4] = odd_u63;
void* f5108651252 = encode_clo(clo53062);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5108651252;
arg_buffer[3] = a5097351250;
arg_buffer[4] = a5097451251;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam51425_fptr() // lam51425 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env51426 = arg_buffer[1];
//reading env and args
void* x5098251262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51087 = (decode_clo(env51426))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51087);
arg_buffer[2] = x5098251262;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51087))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam51425 = encode_clo(alloc_clo(lam51425_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _51427 = arg_buffer[1];
//reading env and args
void* kont51087 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo53064 = alloc_clo(lam51425_fptr, 1);

//setting env list
clo53064[1] = kont51087;
void* f5108851261 = encode_clo(clo53064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5108851261;
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

