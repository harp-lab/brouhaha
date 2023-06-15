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
void* _55262 = arg_buffer[1];
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

void* kont5499055094 = prim_car(lst);
void* lst55095 = prim_cdr(lst);
void* x5489955096 = apply_prim__u43(lst55095);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5499055094);
arg_buffer[2] = x5489955096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5499055094))[0]);
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
void* _55263 = arg_buffer[1];
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

void* kont5499255097 = prim_car(lst);
void* lst55098 = prim_cdr(lst);
void* x5490055099 = apply_prim__u45(lst55098);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5499255097);
arg_buffer[2] = x5490055099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5499255097))[0]);
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
void* _55264 = arg_buffer[1];
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

void* kont5499455100 = prim_car(lst);
void* lst55101 = prim_cdr(lst);
void* x5490155102 = apply_prim__u42(lst55101);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5499455100);
arg_buffer[2] = x5490155102;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5499455100))[0]);
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
void* _55265 = arg_buffer[1];
//reading env and args
void* kont54996 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5490255103 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont54996);
arg_buffer[2] = x5490255103;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont54996))[0]);
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
void* _55266 = arg_buffer[1];
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

void* kont5499755104 = prim_car(lst);
void* lst55105 = prim_cdr(lst);
void* x5490355106 = apply_prim__u47(lst55105);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5499755104);
arg_buffer[2] = x5490355106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5499755104))[0]);
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
void* _55267 = arg_buffer[1];
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

void* kont5499955107 = prim_car(lst);
void* lst55108 = prim_cdr(lst);
void* x5490455109 = apply_prim__u61(lst55108);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5499955107);
arg_buffer[2] = x5490455109;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5499955107))[0]);
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
void* _55268 = arg_buffer[1];
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

void* kont5500155110 = prim_car(lst);
void* lst55111 = prim_cdr(lst);
void* x5490555112 = apply_prim__u62(lst55111);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5500155110);
arg_buffer[2] = x5490555112;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5500155110))[0]);
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
void* _55269 = arg_buffer[1];
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

void* kont5500355113 = prim_car(lst);
void* lst55114 = prim_cdr(lst);
void* x5490655115 = apply_prim__u60(lst55114);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5500355113);
arg_buffer[2] = x5490655115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5500355113))[0]);
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
void* _55270 = arg_buffer[1];
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

void* kont5500555116 = prim_car(lst);
void* lst55117 = prim_cdr(lst);
void* x5490755118 = apply_prim__u60_u61(lst55117);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5500555116);
arg_buffer[2] = x5490755118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5500555116))[0]);
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
void* _55271 = arg_buffer[1];
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

void* kont5500755119 = prim_car(lst);
void* lst55120 = prim_cdr(lst);
void* x5490855121 = apply_prim__u62_u61(lst55120);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5500755119);
arg_buffer[2] = x5490855121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5500755119))[0]);
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
void* _55272 = arg_buffer[1];
//reading env and args
void* kont55009 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5490955122 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55009);
arg_buffer[2] = x5490955122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55009))[0]);
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
void* _55273 = arg_buffer[1];
//reading env and args
void* kont55010 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5491055123 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55010);
arg_buffer[2] = x5491055123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55010))[0]);
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
void* _55274 = arg_buffer[1];
//reading env and args
void* kont55011 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5491155124 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55011);
arg_buffer[2] = x5491155124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55011))[0]);
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
void* _55275 = arg_buffer[1];
//reading env and args
void* kont55012 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5491255125 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55012);
arg_buffer[2] = x5491255125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55012))[0]);
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
void* _55276 = arg_buffer[1];
//reading env and args
void* kont55013 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5491355126 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55013);
arg_buffer[2] = x5491355126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55013))[0]);
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
void* _55277 = arg_buffer[1];
//reading env and args
void* kont55014 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5491455127 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55014);
arg_buffer[2] = x5491455127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55014))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam55278_fptr() // lam55278 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55279 = arg_buffer[1];
//reading env and args
void* a5491755131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env55279))[3];
//not do dummy comment
void* kont55015 = (decode_clo(env55279))[2];
//not do dummy comment
void* a5491555128 = (decode_clo(env55279))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55015;
arg_buffer[3] = a5491555128;
arg_buffer[4] = a5491755131;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55278 = encode_clo(alloc_clo(lam55278_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55282 = arg_buffer[1];
//reading env and args
void* kont55015 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55961 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55961, "0", 10);
void* a5491555128 = encode_mpz(mpzvar55961);
mpz_t* mpzvar55962 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55962, "2", 10);
void* a5491655129 = encode_mpz(mpzvar55962);

//creating new closure instance
void** clo55964 = alloc_clo(lam55278_fptr, 3);

//setting env list
clo55964[1] = a5491555128;
clo55964[2] = kont55015;
clo55964[3] = equal_u63;
void* f5501655130 = encode_clo(clo55964);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5501655130;
arg_buffer[3] = x;
arg_buffer[4] = a5491655129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam55283_fptr() // lam55283 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55284 = arg_buffer[1];
//reading env and args
void* a5492055135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5491855132 = (decode_clo(env55284))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env55284))[2];
//not do dummy comment
void* kont55017 = (decode_clo(env55284))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55017;
arg_buffer[3] = a5491855132;
arg_buffer[4] = a5492055135;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55283 = encode_clo(alloc_clo(lam55283_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55287 = arg_buffer[1];
//reading env and args
void* kont55017 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar55965 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55965, "1", 10);
void* a5491855132 = encode_mpz(mpzvar55965);
mpz_t* mpzvar55966 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar55966, "2", 10);
void* a5491955133 = encode_mpz(mpzvar55966);

//creating new closure instance
void** clo55968 = alloc_clo(lam55283_fptr, 3);

//setting env list
clo55968[1] = kont55017;
clo55968[2] = equal_u63;
clo55968[3] = a5491855132;
void* f5501855134 = encode_clo(clo55968);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5501855134;
arg_buffer[3] = x;
arg_buffer[4] = a5491955133;
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
void* _55288 = arg_buffer[1];
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

void* kont5501955136 = prim_car(x);
void* x55137 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5501955136);
arg_buffer[2] = x55137;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5501955136))[0]);
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
void* _55289 = arg_buffer[1];
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

void* kont5502155138 = prim_car(lst);
void* lst55139 = prim_cdr(lst);
void* x5492155140 = apply_prim_and(lst55139);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5502155138);
arg_buffer[2] = x5492155140;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5502155138))[0]);
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
void* _55290 = arg_buffer[1];
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

void* kont5502355141 = prim_car(lst);
void* lst55142 = prim_cdr(lst);
void* x5492255143 = apply_prim_or(lst55142);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5502355141);
arg_buffer[2] = x5492255143;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5502355141))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam55293_fptr() // lam55293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55294 = arg_buffer[1];
//reading env and args
void* a5492855153 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55025 = (decode_clo(env55294))[3];
//not do dummy comment
void* x = (decode_clo(env55294))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55294))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont55025;
arg_buffer[3] = x;
arg_buffer[4] = a5492855153;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55293 = encode_clo(alloc_clo(lam55293_fptr, 0));

void* lam55295_fptr() // lam55295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55296 = arg_buffer[1];
//reading env and args
void* a5492655150 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55296))[5];
//not do dummy comment
void* lst = (decode_clo(env55296))[4];
//not do dummy comment
void* kont55025 = (decode_clo(env55296))[3];
//not do dummy comment
void* x = (decode_clo(env55296))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55296))[1];

//if-clause
bool if_guard55969 = is_true(a5492655150);
if(if_guard55969)
{
void* x5492755151 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55025);
arg_buffer[2] = x5492755151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55025))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55971 = alloc_clo(lam55293_fptr, 3);

//setting env list
clo55971[1] = member_u63;
clo55971[2] = x;
clo55971[3] = kont55025;
void* f5502655152 = encode_clo(clo55971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5502655152;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55295 = encode_clo(alloc_clo(lam55295_fptr, 0));

void* lam55297_fptr() // lam55297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55298 = arg_buffer[1];
//reading env and args
void* a5492555148 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55298))[6];
//not do dummy comment
void* lst = (decode_clo(env55298))[5];
//not do dummy comment
void* kont55025 = (decode_clo(env55298))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env55298))[3];
//not do dummy comment
void* x = (decode_clo(env55298))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55298))[1];

//creating new closure instance
void** clo55973 = alloc_clo(lam55295_fptr, 5);

//setting env list
clo55973[1] = member_u63;
clo55973[2] = x;
clo55973[3] = kont55025;
clo55973[4] = lst;
clo55973[5] = cdr;
void* f5502755149 = encode_clo(clo55973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5502755149;
arg_buffer[3] = a5492555148;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55297 = encode_clo(alloc_clo(lam55297_fptr, 0));

void* lam55299_fptr() // lam55299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55300 = arg_buffer[1];
//reading env and args
void* a5492355145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55300))[7];
//not do dummy comment
void* lst = (decode_clo(env55300))[6];
//not do dummy comment
void* kont55025 = (decode_clo(env55300))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env55300))[4];
//not do dummy comment
void* x = (decode_clo(env55300))[3];
//not do dummy comment
void* car = (decode_clo(env55300))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env55300))[1];

//if-clause
bool if_guard55974 = is_true(a5492355145);
if(if_guard55974)
{
void* x5492455146 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55025);
arg_buffer[2] = x5492455146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55025))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55976 = alloc_clo(lam55297_fptr, 6);

//setting env list
clo55976[1] = member_u63;
clo55976[2] = x;
clo55976[3] = equal_u63;
clo55976[4] = kont55025;
clo55976[5] = lst;
clo55976[6] = cdr;
void* f5502855147 = encode_clo(clo55976);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5502855147;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55299 = encode_clo(alloc_clo(lam55299_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55301 = arg_buffer[1];
//reading env and args
void* kont55025 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55978 = alloc_clo(lam55299_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo55978[1] = member_u63;
clo55978[2] = car;
clo55978[3] = x;
clo55978[4] = equal_u63;
clo55978[5] = kont55025;
clo55978[6] = lst;
clo55978[7] = cdr;
void* f5502955144 = encode_clo(clo55978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5502955144;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam55302_fptr() // lam55302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55303 = arg_buffer[1];
//reading env and args
void* a5493255161 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env55303))[4];
//not do dummy comment
void* kont55030 = (decode_clo(env55303))[3];
//not do dummy comment
void* a5493155159 = (decode_clo(env55303))[2];
//not do dummy comment
void* foldl = (decode_clo(env55303))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont55030;
arg_buffer[3] = fun;
arg_buffer[4] = a5493155159;
arg_buffer[5] = a5493255161;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55302 = encode_clo(alloc_clo(lam55302_fptr, 0));

void* lam55304_fptr() // lam55304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55305 = arg_buffer[1];
//reading env and args
void* a5493155159 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55305))[5];
//not do dummy comment
void* lst = (decode_clo(env55305))[4];
//not do dummy comment
void* fun = (decode_clo(env55305))[3];
//not do dummy comment
void* kont55030 = (decode_clo(env55305))[2];
//not do dummy comment
void* foldl = (decode_clo(env55305))[1];

//creating new closure instance
void** clo55980 = alloc_clo(lam55302_fptr, 4);

//setting env list
clo55980[1] = foldl;
clo55980[2] = a5493155159;
clo55980[3] = kont55030;
clo55980[4] = fun;
void* f5503155160 = encode_clo(clo55980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5503155160;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55304 = encode_clo(alloc_clo(lam55304_fptr, 0));

void* lam55306_fptr() // lam55306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55307 = arg_buffer[1];
//reading env and args
void* a5493055157 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55307))[6];
//not do dummy comment
void* lst = (decode_clo(env55307))[5];
//not do dummy comment
void* fun = (decode_clo(env55307))[4];
//not do dummy comment
void* acc = (decode_clo(env55307))[3];
//not do dummy comment
void* kont55030 = (decode_clo(env55307))[2];
//not do dummy comment
void* foldl = (decode_clo(env55307))[1];

//creating new closure instance
void** clo55982 = alloc_clo(lam55304_fptr, 5);

//setting env list
clo55982[1] = foldl;
clo55982[2] = kont55030;
clo55982[3] = fun;
clo55982[4] = lst;
clo55982[5] = cdr;
void* f5503255158 = encode_clo(clo55982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5503255158;
arg_buffer[3] = a5493055157;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55306 = encode_clo(alloc_clo(lam55306_fptr, 0));

void* lam55308_fptr() // lam55308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55309 = arg_buffer[1];
//reading env and args
void* a5492955155 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55309))[7];
//not do dummy comment
void* lst = (decode_clo(env55309))[6];
//not do dummy comment
void* fun = (decode_clo(env55309))[5];
//not do dummy comment
void* acc = (decode_clo(env55309))[4];
//not do dummy comment
void* kont55030 = (decode_clo(env55309))[3];
//not do dummy comment
void* car = (decode_clo(env55309))[2];
//not do dummy comment
void* foldl = (decode_clo(env55309))[1];

//if-clause
bool if_guard55983 = is_true(a5492955155);
if(if_guard55983)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55030);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55030))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55985 = alloc_clo(lam55306_fptr, 6);

//setting env list
clo55985[1] = foldl;
clo55985[2] = kont55030;
clo55985[3] = acc;
clo55985[4] = fun;
clo55985[5] = lst;
clo55985[6] = cdr;
void* f5503355156 = encode_clo(clo55985);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5503355156;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55308 = encode_clo(alloc_clo(lam55308_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55310 = arg_buffer[1];
//reading env and args
void* kont55030 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo55987 = alloc_clo(lam55308_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo55987[1] = foldl;
clo55987[2] = car;
clo55987[3] = kont55030;
clo55987[4] = acc;
clo55987[5] = fun;
clo55987[6] = lst;
clo55987[7] = cdr;
void* f5503455154 = encode_clo(clo55987);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5503455154;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam55311_fptr() // lam55311 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55312 = arg_buffer[1];
//reading env and args
void* a5493655169 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55035 = (decode_clo(env55312))[3];
//not do dummy comment
void* a5493455165 = (decode_clo(env55312))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55312))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55035;
arg_buffer[3] = a5493455165;
arg_buffer[4] = a5493655169;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55311 = encode_clo(alloc_clo(lam55311_fptr, 0));

void* lam55313_fptr() // lam55313 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55314 = arg_buffer[1];
//reading env and args
void* a5493555167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55035 = (decode_clo(env55314))[5];
//not do dummy comment
void* a5493455165 = (decode_clo(env55314))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55314))[3];
//not do dummy comment
void* lst2 = (decode_clo(env55314))[2];
//not do dummy comment
void* cons = (decode_clo(env55314))[1];

//creating new closure instance
void** clo55989 = alloc_clo(lam55311_fptr, 3);

//setting env list
clo55989[1] = reverse_u45helper;
clo55989[2] = a5493455165;
clo55989[3] = kont55035;
void* f5503655168 = encode_clo(clo55989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5503655168;
arg_buffer[3] = a5493555167;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55313 = encode_clo(alloc_clo(lam55313_fptr, 0));

void* lam55315_fptr() // lam55315 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55316 = arg_buffer[1];
//reading env and args
void* a5493455165 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55035 = (decode_clo(env55316))[6];
//not do dummy comment
void* lst = (decode_clo(env55316))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55316))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55316))[3];
//not do dummy comment
void* car = (decode_clo(env55316))[2];
//not do dummy comment
void* cons = (decode_clo(env55316))[1];

//creating new closure instance
void** clo55991 = alloc_clo(lam55313_fptr, 5);

//setting env list
clo55991[1] = cons;
clo55991[2] = lst2;
clo55991[3] = reverse_u45helper;
clo55991[4] = a5493455165;
clo55991[5] = kont55035;
void* f5503755166 = encode_clo(clo55991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5503755166;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55315 = encode_clo(alloc_clo(lam55315_fptr, 0));

void* lam55317_fptr() // lam55317 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55318 = arg_buffer[1];
//reading env and args
void* a5493355163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55318))[7];
//not do dummy comment
void* kont55035 = (decode_clo(env55318))[6];
//not do dummy comment
void* lst = (decode_clo(env55318))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55318))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55318))[3];
//not do dummy comment
void* car = (decode_clo(env55318))[2];
//not do dummy comment
void* cons = (decode_clo(env55318))[1];

//if-clause
bool if_guard55992 = is_true(a5493355163);
if(if_guard55992)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55035);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55035))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo55994 = alloc_clo(lam55315_fptr, 6);

//setting env list
clo55994[1] = cons;
clo55994[2] = car;
clo55994[3] = lst2;
clo55994[4] = reverse_u45helper;
clo55994[5] = lst;
clo55994[6] = kont55035;
void* f5503855164 = encode_clo(clo55994);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5503855164;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55317 = encode_clo(alloc_clo(lam55317_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55319 = arg_buffer[1];
//reading env and args
void* kont55035 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo55996 = alloc_clo(lam55317_fptr, 7);

//setting env list
clo55996[1] = cons;
clo55996[2] = car;
clo55996[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo55996[4] = reverse_u45helper;
clo55996[5] = lst;
clo55996[6] = kont55035;
clo55996[7] = cdr;
void* f5503955162 = encode_clo(clo55996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5503955162;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam55320_fptr() // lam55320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55321 = arg_buffer[1];
//reading env and args
void* a5493755171 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55321))[3];
//not do dummy comment
void* kont55040 = (decode_clo(env55321))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env55321))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55040;
arg_buffer[3] = lst;
arg_buffer[4] = a5493755171;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55320 = encode_clo(alloc_clo(lam55320_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55322 = arg_buffer[1];
//reading env and args
void* kont55040 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo55998 = alloc_clo(lam55320_fptr, 3);

//setting env list
clo55998[1] = reverse_u45helper;
clo55998[2] = kont55040;
clo55998[3] = lst;
void* f5504155170 = encode_clo(clo55998);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5504155170;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam55323_fptr() // lam55323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55324 = arg_buffer[1];
//reading env and args
void* x5494055176 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55042 = (decode_clo(env55324))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55042);
arg_buffer[2] = x5494055176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55042))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55323 = encode_clo(alloc_clo(lam55323_fptr, 0));

void* lam55325_fptr() // lam55325 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55326 = arg_buffer[1];
//reading env and args
void* a5494555185 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5494155178 = (decode_clo(env55326))[4];
//not do dummy comment
void* a5494355181 = (decode_clo(env55326))[3];
//not do dummy comment
void* kont55042 = (decode_clo(env55326))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env55326))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55042;
arg_buffer[3] = a5494155178;
arg_buffer[4] = a5494355181;
arg_buffer[5] = a5494555185;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55325 = encode_clo(alloc_clo(lam55325_fptr, 0));

void* lam55327_fptr() // lam55327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55328 = arg_buffer[1];
//reading env and args
void* a5494455183 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5494155178 = (decode_clo(env55328))[6];
//not do dummy comment
void* a5494355181 = (decode_clo(env55328))[5];
//not do dummy comment
void* kont55042 = (decode_clo(env55328))[4];
//not do dummy comment
void* cons = (decode_clo(env55328))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55328))[2];
//not do dummy comment
void* lst2 = (decode_clo(env55328))[1];

//creating new closure instance
void** clo56000 = alloc_clo(lam55325_fptr, 4);

//setting env list
clo56000[1] = take_u45helper;
clo56000[2] = kont55042;
clo56000[3] = a5494355181;
clo56000[4] = a5494155178;
void* f5504455184 = encode_clo(clo56000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5504455184;
arg_buffer[3] = a5494455183;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55327 = encode_clo(alloc_clo(lam55327_fptr, 0));

void* lam55329_fptr() // lam55329 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55330 = arg_buffer[1];
//reading env and args
void* a5494355181 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5494155178 = (decode_clo(env55330))[7];
//not do dummy comment
void* lst = (decode_clo(env55330))[6];
//not do dummy comment
void* kont55042 = (decode_clo(env55330))[5];
//not do dummy comment
void* car = (decode_clo(env55330))[4];
//not do dummy comment
void* cons = (decode_clo(env55330))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env55330))[2];
//not do dummy comment
void* lst2 = (decode_clo(env55330))[1];

//creating new closure instance
void** clo56002 = alloc_clo(lam55327_fptr, 6);

//setting env list
clo56002[1] = lst2;
clo56002[2] = take_u45helper;
clo56002[3] = cons;
clo56002[4] = kont55042;
clo56002[5] = a5494355181;
clo56002[6] = a5494155178;
void* f5504555182 = encode_clo(clo56002);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5504555182;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55329 = encode_clo(alloc_clo(lam55329_fptr, 0));

void* lam55332_fptr() // lam55332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55333 = arg_buffer[1];
//reading env and args
void* a5494155178 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55333))[8];
//not do dummy comment
void* kont55042 = (decode_clo(env55333))[7];
//not do dummy comment
void* cons = (decode_clo(env55333))[6];
//not do dummy comment
void* _u45 = (decode_clo(env55333))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env55333))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55333))[3];
//not do dummy comment
void* n = (decode_clo(env55333))[2];
//not do dummy comment
void* car = (decode_clo(env55333))[1];
mpz_t* mpzvar56003 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56003, "1", 10);
void* a5494255179 = encode_mpz(mpzvar56003);

//creating new closure instance
void** clo56005 = alloc_clo(lam55329_fptr, 7);

//setting env list
clo56005[1] = lst2;
clo56005[2] = take_u45helper;
clo56005[3] = cons;
clo56005[4] = car;
clo56005[5] = kont55042;
clo56005[6] = lst;
clo56005[7] = a5494155178;
void* f5504655180 = encode_clo(clo56005);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5504655180;
arg_buffer[3] = n;
arg_buffer[4] = a5494255179;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55332 = encode_clo(alloc_clo(lam55332_fptr, 0));

void* lam55334_fptr() // lam55334 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55335 = arg_buffer[1];
//reading env and args
void* a5493955174 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55335))[10];
//not do dummy comment
void* lst = (decode_clo(env55335))[9];
//not do dummy comment
void* reverse = (decode_clo(env55335))[8];
//not do dummy comment
void* kont55042 = (decode_clo(env55335))[7];
//not do dummy comment
void* cons = (decode_clo(env55335))[6];
//not do dummy comment
void* _u45 = (decode_clo(env55335))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env55335))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55335))[3];
//not do dummy comment
void* n = (decode_clo(env55335))[2];
//not do dummy comment
void* car = (decode_clo(env55335))[1];

//if-clause
bool if_guard56006 = is_true(a5493955174);
if(if_guard56006)
{

//creating new closure instance
void** clo56008 = alloc_clo(lam55323_fptr, 1);

//setting env list
clo56008[1] = kont55042;
void* f5504355175 = encode_clo(clo56008);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5504355175;
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
void** clo56010 = alloc_clo(lam55332_fptr, 8);

//setting env list
clo56010[1] = car;
clo56010[2] = n;
clo56010[3] = lst2;
clo56010[4] = take_u45helper;
clo56010[5] = _u45;
clo56010[6] = cons;
clo56010[7] = kont55042;
clo56010[8] = lst;
void* f5504755177 = encode_clo(clo56010);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5504755177;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55334 = encode_clo(alloc_clo(lam55334_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55337 = arg_buffer[1];
//reading env and args
void* kont55042 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar56011 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56011, "0", 10);
void* a5493855172 = encode_mpz(mpzvar56011);

//creating new closure instance
void** clo56013 = alloc_clo(lam55334_fptr, 10);

//setting env list
clo56013[1] = car;
clo56013[2] = n;
clo56013[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo56013[4] = take_u45helper;
clo56013[5] = _u45;
clo56013[6] = cons;
clo56013[7] = kont55042;
clo56013[8] = reverse;
clo56013[9] = lst;
clo56013[10] = cdr;
void* f5504855173 = encode_clo(clo56013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5504855173;
arg_buffer[3] = n;
arg_buffer[4] = a5493855172;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam55338_fptr() // lam55338 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55339 = arg_buffer[1];
//reading env and args
void* a5494655187 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55339))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env55339))[3];
//not do dummy comment
void* n = (decode_clo(env55339))[2];
//not do dummy comment
void* kont55049 = (decode_clo(env55339))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55049;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5494655187;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55338 = encode_clo(alloc_clo(lam55338_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55340 = arg_buffer[1];
//reading env and args
void* kont55049 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56015 = alloc_clo(lam55338_fptr, 4);

//setting env list
clo56015[1] = kont55049;
clo56015[2] = n;
clo56015[3] = take_u45helper;
clo56015[4] = lst;
void* f5505055186 = encode_clo(clo56015);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5505055186;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam55342_fptr() // lam55342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55343 = arg_buffer[1];
//reading env and args
void* a5495155195 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55051 = (decode_clo(env55343))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55343))[2];
//not do dummy comment
void* a5494955191 = (decode_clo(env55343))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont55051;
arg_buffer[3] = a5494955191;
arg_buffer[4] = a5495155195;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55342 = encode_clo(alloc_clo(lam55342_fptr, 0));

void* lam55344_fptr() // lam55344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55345 = arg_buffer[1];
//reading env and args
void* a5495055193 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55051 = (decode_clo(env55345))[4];
//not do dummy comment
void* length = (decode_clo(env55345))[3];
//not do dummy comment
void* _u43 = (decode_clo(env55345))[2];
//not do dummy comment
void* a5494955191 = (decode_clo(env55345))[1];

//creating new closure instance
void** clo56017 = alloc_clo(lam55342_fptr, 3);

//setting env list
clo56017[1] = a5494955191;
clo56017[2] = _u43;
clo56017[3] = kont55051;
void* f5505255194 = encode_clo(clo56017);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5505255194;
arg_buffer[3] = a5495055193;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55344 = encode_clo(alloc_clo(lam55344_fptr, 0));

void* lam55347_fptr() // lam55347 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55348 = arg_buffer[1];
//reading env and args
void* a5494755189 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55348))[5];
//not do dummy comment
void* kont55051 = (decode_clo(env55348))[4];
//not do dummy comment
void* lst = (decode_clo(env55348))[3];
//not do dummy comment
void* length = (decode_clo(env55348))[2];
//not do dummy comment
void* _u43 = (decode_clo(env55348))[1];

//if-clause
bool if_guard56018 = is_true(a5494755189);
if(if_guard56018)
{
mpz_t* mpzvar56019 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56019, "0", 10);
void* x5494855190 = encode_mpz(mpzvar56019);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55051);
arg_buffer[2] = x5494855190;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55051))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar56020 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56020, "1", 10);
void* a5494955191 = encode_mpz(mpzvar56020);

//creating new closure instance
void** clo56022 = alloc_clo(lam55344_fptr, 4);

//setting env list
clo56022[1] = a5494955191;
clo56022[2] = _u43;
clo56022[3] = length;
clo56022[4] = kont55051;
void* f5505355192 = encode_clo(clo56022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5505355192;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55347 = encode_clo(alloc_clo(lam55347_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55349 = arg_buffer[1];
//reading env and args
void* kont55051 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo56024 = alloc_clo(lam55347_fptr, 5);

//setting env list
clo56024[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo56024[2] = length;
clo56024[3] = lst;
clo56024[4] = kont55051;
clo56024[5] = cdr;
void* f5505455188 = encode_clo(clo56024);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5505455188;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam55350_fptr() // lam55350 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55351 = arg_buffer[1];
//reading env and args
void* x5495355199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55055 = (decode_clo(env55351))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55055);
arg_buffer[2] = x5495355199;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55055))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55350 = encode_clo(alloc_clo(lam55350_fptr, 0));

void* lam55352_fptr() // lam55352 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55353 = arg_buffer[1];
//reading env and args
void* a5495755207 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55055 = (decode_clo(env55353))[3];
//not do dummy comment
void* a5495555203 = (decode_clo(env55353))[2];
//not do dummy comment
void* cons = (decode_clo(env55353))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55055;
arg_buffer[3] = a5495555203;
arg_buffer[4] = a5495755207;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55352 = encode_clo(alloc_clo(lam55352_fptr, 0));

void* lam55354_fptr() // lam55354 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55355 = arg_buffer[1];
//reading env and args
void* a5495655205 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5495555203 = (decode_clo(env55355))[5];
//not do dummy comment
void* proc = (decode_clo(env55355))[4];
//not do dummy comment
void* cons = (decode_clo(env55355))[3];
//not do dummy comment
void* map = (decode_clo(env55355))[2];
//not do dummy comment
void* kont55055 = (decode_clo(env55355))[1];

//creating new closure instance
void** clo56026 = alloc_clo(lam55352_fptr, 3);

//setting env list
clo56026[1] = cons;
clo56026[2] = a5495555203;
clo56026[3] = kont55055;
void* f5505755206 = encode_clo(clo56026);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5505755206;
arg_buffer[3] = proc;
arg_buffer[4] = a5495655205;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55354 = encode_clo(alloc_clo(lam55354_fptr, 0));

void* lam55356_fptr() // lam55356 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55357 = arg_buffer[1];
//reading env and args
void* a5495555203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55357))[6];
//not do dummy comment
void* lst = (decode_clo(env55357))[5];
//not do dummy comment
void* proc = (decode_clo(env55357))[4];
//not do dummy comment
void* cons = (decode_clo(env55357))[3];
//not do dummy comment
void* map = (decode_clo(env55357))[2];
//not do dummy comment
void* kont55055 = (decode_clo(env55357))[1];

//creating new closure instance
void** clo56028 = alloc_clo(lam55354_fptr, 5);

//setting env list
clo56028[1] = kont55055;
clo56028[2] = map;
clo56028[3] = cons;
clo56028[4] = proc;
clo56028[5] = a5495555203;
void* f5505855204 = encode_clo(clo56028);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5505855204;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55356 = encode_clo(alloc_clo(lam55356_fptr, 0));

void* lam55358_fptr() // lam55358 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55359 = arg_buffer[1];
//reading env and args
void* a5495455201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55359))[6];
//not do dummy comment
void* lst = (decode_clo(env55359))[5];
//not do dummy comment
void* proc = (decode_clo(env55359))[4];
//not do dummy comment
void* cons = (decode_clo(env55359))[3];
//not do dummy comment
void* map = (decode_clo(env55359))[2];
//not do dummy comment
void* kont55055 = (decode_clo(env55359))[1];

//creating new closure instance
void** clo56030 = alloc_clo(lam55356_fptr, 6);

//setting env list
clo56030[1] = kont55055;
clo56030[2] = map;
clo56030[3] = cons;
clo56030[4] = proc;
clo56030[5] = lst;
clo56030[6] = cdr;
void* f5505955202 = encode_clo(clo56030);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5505955202;
arg_buffer[3] = a5495455201;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55358 = encode_clo(alloc_clo(lam55358_fptr, 0));

void* lam55360_fptr() // lam55360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55361 = arg_buffer[1];
//reading env and args
void* a5495255197 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55361))[8];
//not do dummy comment
void* proc = (decode_clo(env55361))[7];
//not do dummy comment
void* car = (decode_clo(env55361))[6];
//not do dummy comment
void* cons = (decode_clo(env55361))[5];
//not do dummy comment
void* list = (decode_clo(env55361))[4];
//not do dummy comment
void* cdr = (decode_clo(env55361))[3];
//not do dummy comment
void* map = (decode_clo(env55361))[2];
//not do dummy comment
void* kont55055 = (decode_clo(env55361))[1];

//if-clause
bool if_guard56031 = is_true(a5495255197);
if(if_guard56031)
{

//creating new closure instance
void** clo56033 = alloc_clo(lam55350_fptr, 1);

//setting env list
clo56033[1] = kont55055;
void* f5505655198 = encode_clo(clo56033);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5505655198;
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
void** clo56035 = alloc_clo(lam55358_fptr, 6);

//setting env list
clo56035[1] = kont55055;
clo56035[2] = map;
clo56035[3] = cons;
clo56035[4] = proc;
clo56035[5] = lst;
clo56035[6] = cdr;
void* f5506055200 = encode_clo(clo56035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5506055200;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55360 = encode_clo(alloc_clo(lam55360_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55362 = arg_buffer[1];
//reading env and args
void* kont55055 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56037 = alloc_clo(lam55360_fptr, 8);

//setting env list
clo56037[1] = kont55055;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo56037[2] = map;
clo56037[3] = cdr;
clo56037[4] = list;
clo56037[5] = cons;
clo56037[6] = car;
clo56037[7] = proc;
clo56037[8] = lst;
void* f5506155196 = encode_clo(clo56037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5506155196;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam55363_fptr() // lam55363 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55364 = arg_buffer[1];
//reading env and args
void* x5495955211 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55062 = (decode_clo(env55364))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55062);
arg_buffer[2] = x5495955211;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55062))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55363 = encode_clo(alloc_clo(lam55363_fptr, 0));

void* lam55365_fptr() // lam55365 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55366 = arg_buffer[1];
//reading env and args
void* a5496455221 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5496255217 = (decode_clo(env55366))[3];
//not do dummy comment
void* kont55062 = (decode_clo(env55366))[2];
//not do dummy comment
void* cons = (decode_clo(env55366))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55062;
arg_buffer[3] = a5496255217;
arg_buffer[4] = a5496455221;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55365 = encode_clo(alloc_clo(lam55365_fptr, 0));

void* lam55367_fptr() // lam55367 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55368 = arg_buffer[1];
//reading env and args
void* a5496355219 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55062 = (decode_clo(env55368))[5];
//not do dummy comment
void* filter = (decode_clo(env55368))[4];
//not do dummy comment
void* cons = (decode_clo(env55368))[3];
//not do dummy comment
void* a5496255217 = (decode_clo(env55368))[2];
//not do dummy comment
void* op = (decode_clo(env55368))[1];

//creating new closure instance
void** clo56039 = alloc_clo(lam55365_fptr, 3);

//setting env list
clo56039[1] = cons;
clo56039[2] = kont55062;
clo56039[3] = a5496255217;
void* f5506455220 = encode_clo(clo56039);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5506455220;
arg_buffer[3] = op;
arg_buffer[4] = a5496355219;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55367 = encode_clo(alloc_clo(lam55367_fptr, 0));

void* lam55369_fptr() // lam55369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55370 = arg_buffer[1];
//reading env and args
void* a5496255217 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55370))[6];
//not do dummy comment
void* lst = (decode_clo(env55370))[5];
//not do dummy comment
void* op = (decode_clo(env55370))[4];
//not do dummy comment
void* kont55062 = (decode_clo(env55370))[3];
//not do dummy comment
void* filter = (decode_clo(env55370))[2];
//not do dummy comment
void* cons = (decode_clo(env55370))[1];

//creating new closure instance
void** clo56041 = alloc_clo(lam55367_fptr, 5);

//setting env list
clo56041[1] = op;
clo56041[2] = a5496255217;
clo56041[3] = cons;
clo56041[4] = filter;
clo56041[5] = kont55062;
void* f5506555218 = encode_clo(clo56041);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5506555218;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55369 = encode_clo(alloc_clo(lam55369_fptr, 0));

void* lam55371_fptr() // lam55371 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55372 = arg_buffer[1];
//reading env and args
void* a5496555223 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env55372))[3];
//not do dummy comment
void* kont55062 = (decode_clo(env55372))[2];
//not do dummy comment
void* filter = (decode_clo(env55372))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont55062;
arg_buffer[3] = op;
arg_buffer[4] = a5496555223;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55371 = encode_clo(alloc_clo(lam55371_fptr, 0));

void* lam55373_fptr() // lam55373 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55374 = arg_buffer[1];
//reading env and args
void* a5496155215 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55374))[7];
//not do dummy comment
void* lst = (decode_clo(env55374))[6];
//not do dummy comment
void* op = (decode_clo(env55374))[5];
//not do dummy comment
void* kont55062 = (decode_clo(env55374))[4];
//not do dummy comment
void* cons = (decode_clo(env55374))[3];
//not do dummy comment
void* filter = (decode_clo(env55374))[2];
//not do dummy comment
void* car = (decode_clo(env55374))[1];

//if-clause
bool if_guard56042 = is_true(a5496155215);
if(if_guard56042)
{

//creating new closure instance
void** clo56044 = alloc_clo(lam55369_fptr, 6);

//setting env list
clo56044[1] = cons;
clo56044[2] = filter;
clo56044[3] = kont55062;
clo56044[4] = op;
clo56044[5] = lst;
clo56044[6] = cdr;
void* f5506655216 = encode_clo(clo56044);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5506655216;
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
void** clo56046 = alloc_clo(lam55371_fptr, 3);

//setting env list
clo56046[1] = filter;
clo56046[2] = kont55062;
clo56046[3] = op;
void* f5506755222 = encode_clo(clo56046);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5506755222;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55373 = encode_clo(alloc_clo(lam55373_fptr, 0));

void* lam55375_fptr() // lam55375 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55376 = arg_buffer[1];
//reading env and args
void* a5496055213 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55376))[7];
//not do dummy comment
void* lst = (decode_clo(env55376))[6];
//not do dummy comment
void* op = (decode_clo(env55376))[5];
//not do dummy comment
void* kont55062 = (decode_clo(env55376))[4];
//not do dummy comment
void* cons = (decode_clo(env55376))[3];
//not do dummy comment
void* filter = (decode_clo(env55376))[2];
//not do dummy comment
void* car = (decode_clo(env55376))[1];

//creating new closure instance
void** clo56048 = alloc_clo(lam55373_fptr, 7);

//setting env list
clo56048[1] = car;
clo56048[2] = filter;
clo56048[3] = cons;
clo56048[4] = kont55062;
clo56048[5] = op;
clo56048[6] = lst;
clo56048[7] = cdr;
void* f5506855214 = encode_clo(clo56048);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5506855214;
arg_buffer[3] = a5496055213;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55375 = encode_clo(alloc_clo(lam55375_fptr, 0));

void* lam55377_fptr() // lam55377 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55378 = arg_buffer[1];
//reading env and args
void* a5495855209 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env55378))[8];
//not do dummy comment
void* op = (decode_clo(env55378))[7];
//not do dummy comment
void* kont55062 = (decode_clo(env55378))[6];
//not do dummy comment
void* cons = (decode_clo(env55378))[5];
//not do dummy comment
void* list = (decode_clo(env55378))[4];
//not do dummy comment
void* cdr = (decode_clo(env55378))[3];
//not do dummy comment
void* filter = (decode_clo(env55378))[2];
//not do dummy comment
void* car = (decode_clo(env55378))[1];

//if-clause
bool if_guard56049 = is_true(a5495855209);
if(if_guard56049)
{

//creating new closure instance
void** clo56051 = alloc_clo(lam55363_fptr, 1);

//setting env list
clo56051[1] = kont55062;
void* f5506355210 = encode_clo(clo56051);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5506355210;
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
void** clo56053 = alloc_clo(lam55375_fptr, 7);

//setting env list
clo56053[1] = car;
clo56053[2] = filter;
clo56053[3] = cons;
clo56053[4] = kont55062;
clo56053[5] = op;
clo56053[6] = lst;
clo56053[7] = cdr;
void* f5506955212 = encode_clo(clo56053);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5506955212;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55377 = encode_clo(alloc_clo(lam55377_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55379 = arg_buffer[1];
//reading env and args
void* kont55062 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56055 = alloc_clo(lam55377_fptr, 8);

//setting env list
clo56055[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo56055[2] = filter;
clo56055[3] = cdr;
clo56055[4] = list;
clo56055[5] = cons;
clo56055[6] = kont55062;
clo56055[7] = op;
clo56055[8] = lst;
void* f5507055208 = encode_clo(clo56055);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5507055208;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam55380_fptr() // lam55380 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55381 = arg_buffer[1];
//reading env and args
void* a5497055231 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5496855228 = (decode_clo(env55381))[3];
//not do dummy comment
void* drop = (decode_clo(env55381))[2];
//not do dummy comment
void* kont55071 = (decode_clo(env55381))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont55071;
arg_buffer[3] = a5496855228;
arg_buffer[4] = a5497055231;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55380 = encode_clo(alloc_clo(lam55380_fptr, 0));

void* lam55383_fptr() // lam55383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55384 = arg_buffer[1];
//reading env and args
void* a5496855228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env55384))[4];
//not do dummy comment
void* kont55071 = (decode_clo(env55384))[3];
//not do dummy comment
void* n = (decode_clo(env55384))[2];
//not do dummy comment
void* _u45 = (decode_clo(env55384))[1];
mpz_t* mpzvar56056 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56056, "1", 10);
void* a5496955229 = encode_mpz(mpzvar56056);

//creating new closure instance
void** clo56058 = alloc_clo(lam55380_fptr, 3);

//setting env list
clo56058[1] = kont55071;
clo56058[2] = drop;
clo56058[3] = a5496855228;
void* f5507255230 = encode_clo(clo56058);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5507255230;
arg_buffer[3] = n;
arg_buffer[4] = a5496955229;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55383 = encode_clo(alloc_clo(lam55383_fptr, 0));

void* lam55385_fptr() // lam55385 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55386 = arg_buffer[1];
//reading env and args
void* a5496755226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55386))[6];
//not do dummy comment
void* kont55071 = (decode_clo(env55386))[5];
//not do dummy comment
void* n = (decode_clo(env55386))[4];
//not do dummy comment
void* _u45 = (decode_clo(env55386))[3];
//not do dummy comment
void* lst = (decode_clo(env55386))[2];
//not do dummy comment
void* drop = (decode_clo(env55386))[1];

//if-clause
bool if_guard56059 = is_true(a5496755226);
if(if_guard56059)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55071);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55071))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56061 = alloc_clo(lam55383_fptr, 4);

//setting env list
clo56061[1] = _u45;
clo56061[2] = n;
clo56061[3] = kont55071;
clo56061[4] = drop;
void* f5507355227 = encode_clo(clo56061);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5507355227;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55385 = encode_clo(alloc_clo(lam55385_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55388 = arg_buffer[1];
//reading env and args
void* kont55071 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar56062 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56062, "0", 10);
void* a5496655224 = encode_mpz(mpzvar56062);

//creating new closure instance
void** clo56064 = alloc_clo(lam55385_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo56064[1] = drop;
clo56064[2] = lst;
clo56064[3] = _u45;
clo56064[4] = n;
clo56064[5] = kont55071;
clo56064[6] = cdr;
void* f5507455225 = encode_clo(clo56064);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5507455225;
arg_buffer[3] = n;
arg_buffer[4] = a5496655224;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam55389_fptr() // lam55389 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55390 = arg_buffer[1];
//reading env and args
void* a5497455239 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env55390))[3];
//not do dummy comment
void* kont55075 = (decode_clo(env55390))[2];
//not do dummy comment
void* a5497255235 = (decode_clo(env55390))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont55075;
arg_buffer[3] = a5497255235;
arg_buffer[4] = a5497455239;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55389 = encode_clo(alloc_clo(lam55389_fptr, 0));

void* lam55391_fptr() // lam55391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55392 = arg_buffer[1];
//reading env and args
void* a5497355237 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env55392))[5];
//not do dummy comment
void* kont55075 = (decode_clo(env55392))[4];
//not do dummy comment
void* a5497255235 = (decode_clo(env55392))[3];
//not do dummy comment
void* proc = (decode_clo(env55392))[2];
//not do dummy comment
void* acc = (decode_clo(env55392))[1];

//creating new closure instance
void** clo56066 = alloc_clo(lam55389_fptr, 3);

//setting env list
clo56066[1] = a5497255235;
clo56066[2] = kont55075;
clo56066[3] = proc;
void* f5507655238 = encode_clo(clo56066);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5507655238;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5497355237;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55391 = encode_clo(alloc_clo(lam55391_fptr, 0));

void* lam55393_fptr() // lam55393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55394 = arg_buffer[1];
//reading env and args
void* a5497255235 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55394))[6];
//not do dummy comment
void* kont55075 = (decode_clo(env55394))[5];
//not do dummy comment
void* foldr = (decode_clo(env55394))[4];
//not do dummy comment
void* lst = (decode_clo(env55394))[3];
//not do dummy comment
void* proc = (decode_clo(env55394))[2];
//not do dummy comment
void* acc = (decode_clo(env55394))[1];

//creating new closure instance
void** clo56068 = alloc_clo(lam55391_fptr, 5);

//setting env list
clo56068[1] = acc;
clo56068[2] = proc;
clo56068[3] = a5497255235;
clo56068[4] = kont55075;
clo56068[5] = foldr;
void* f5507755236 = encode_clo(clo56068);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5507755236;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55393 = encode_clo(alloc_clo(lam55393_fptr, 0));

void* lam55395_fptr() // lam55395 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55396 = arg_buffer[1];
//reading env and args
void* a5497155233 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55396))[7];
//not do dummy comment
void* kont55075 = (decode_clo(env55396))[6];
//not do dummy comment
void* car = (decode_clo(env55396))[5];
//not do dummy comment
void* foldr = (decode_clo(env55396))[4];
//not do dummy comment
void* lst = (decode_clo(env55396))[3];
//not do dummy comment
void* proc = (decode_clo(env55396))[2];
//not do dummy comment
void* acc = (decode_clo(env55396))[1];

//if-clause
bool if_guard56069 = is_true(a5497155233);
if(if_guard56069)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55075);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55075))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56071 = alloc_clo(lam55393_fptr, 6);

//setting env list
clo56071[1] = acc;
clo56071[2] = proc;
clo56071[3] = lst;
clo56071[4] = foldr;
clo56071[5] = kont55075;
clo56071[6] = cdr;
void* f5507855234 = encode_clo(clo56071);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5507855234;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55395 = encode_clo(alloc_clo(lam55395_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55397 = arg_buffer[1];
//reading env and args
void* kont55075 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo56073 = alloc_clo(lam55395_fptr, 7);

//setting env list
clo56073[1] = acc;
clo56073[2] = proc;
clo56073[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo56073[4] = foldr;
clo56073[5] = car;
clo56073[6] = kont55075;
clo56073[7] = cdr;
void* f5507955232 = encode_clo(clo56073);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5507955232;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam55398_fptr() // lam55398 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55399 = arg_buffer[1];
//reading env and args
void* a5497855247 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5497655243 = (decode_clo(env55399))[3];
//not do dummy comment
void* kont55080 = (decode_clo(env55399))[2];
//not do dummy comment
void* cons = (decode_clo(env55399))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55080;
arg_buffer[3] = a5497655243;
arg_buffer[4] = a5497855247;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55398 = encode_clo(alloc_clo(lam55398_fptr, 0));

void* lam55400_fptr() // lam55400 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55401 = arg_buffer[1];
//reading env and args
void* a5497755245 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5497655243 = (decode_clo(env55401))[5];
//not do dummy comment
void* append = (decode_clo(env55401))[4];
//not do dummy comment
void* lst2 = (decode_clo(env55401))[3];
//not do dummy comment
void* kont55080 = (decode_clo(env55401))[2];
//not do dummy comment
void* cons = (decode_clo(env55401))[1];

//creating new closure instance
void** clo56075 = alloc_clo(lam55398_fptr, 3);

//setting env list
clo56075[1] = cons;
clo56075[2] = kont55080;
clo56075[3] = a5497655243;
void* f5508155246 = encode_clo(clo56075);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5508155246;
arg_buffer[3] = a5497755245;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55400 = encode_clo(alloc_clo(lam55400_fptr, 0));

void* lam55402_fptr() // lam55402 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55403 = arg_buffer[1];
//reading env and args
void* a5497655243 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55403))[6];
//not do dummy comment
void* append = (decode_clo(env55403))[5];
//not do dummy comment
void* lst2 = (decode_clo(env55403))[4];
//not do dummy comment
void* lst1 = (decode_clo(env55403))[3];
//not do dummy comment
void* kont55080 = (decode_clo(env55403))[2];
//not do dummy comment
void* cons = (decode_clo(env55403))[1];

//creating new closure instance
void** clo56077 = alloc_clo(lam55400_fptr, 5);

//setting env list
clo56077[1] = cons;
clo56077[2] = kont55080;
clo56077[3] = lst2;
clo56077[4] = append;
clo56077[5] = a5497655243;
void* f5508255244 = encode_clo(clo56077);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5508255244;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55402 = encode_clo(alloc_clo(lam55402_fptr, 0));

void* lam55404_fptr() // lam55404 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55405 = arg_buffer[1];
//reading env and args
void* a5497555241 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env55405))[7];
//not do dummy comment
void* append = (decode_clo(env55405))[6];
//not do dummy comment
void* lst2 = (decode_clo(env55405))[5];
//not do dummy comment
void* lst1 = (decode_clo(env55405))[4];
//not do dummy comment
void* car = (decode_clo(env55405))[3];
//not do dummy comment
void* kont55080 = (decode_clo(env55405))[2];
//not do dummy comment
void* cons = (decode_clo(env55405))[1];

//if-clause
bool if_guard56078 = is_true(a5497555241);
if(if_guard56078)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55080);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55080))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56080 = alloc_clo(lam55402_fptr, 6);

//setting env list
clo56080[1] = cons;
clo56080[2] = kont55080;
clo56080[3] = lst1;
clo56080[4] = lst2;
clo56080[5] = append;
clo56080[6] = cdr;
void* f5508355242 = encode_clo(clo56080);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5508355242;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam55404 = encode_clo(alloc_clo(lam55404_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55406 = arg_buffer[1];
//reading env and args
void* kont55080 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56082 = alloc_clo(lam55404_fptr, 7);

//setting env list
clo56082[1] = cons;
clo56082[2] = kont55080;
clo56082[3] = car;
clo56082[4] = lst1;
clo56082[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo56082[6] = append;
clo56082[7] = cdr;
void* f5508455240 = encode_clo(clo56082);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5508455240;
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
void* _55407 = arg_buffer[1];
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

void* kont5508555248 = prim_car(lst);
void* lst55249 = prim_cdr(lst);
void* x5497955250 = apply_prim_hash(lst55249);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5508555248);
arg_buffer[2] = x5497955250;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5508555248))[0]);
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
void* _55408 = arg_buffer[1];
//reading env and args
void* kont55087 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5498055251 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55087);
arg_buffer[2] = x5498055251;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55087))[0]);
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
void* _55409 = arg_buffer[1];
//reading env and args
void* kont55088 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5498155252 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55088);
arg_buffer[2] = x5498155252;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55088))[0]);
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
void* _55410 = arg_buffer[1];
//reading env and args
void* kont55089 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5498255253 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55089);
arg_buffer[2] = x5498255253;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55089))[0]);
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
void* _55411 = arg_buffer[1];
//reading env and args
void* kont55090 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5498355254 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55090);
arg_buffer[2] = x5498355254;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55090))[0]);
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
void* _55417 = arg_buffer[1];
//reading env and args
void* kont55091 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar56083 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56083, "100", 10);
void* a5498455255 = encode_mpz(mpzvar56083);
mpz_t* mpzvar56084 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56084, "20", 10);
void* a5498555256 = encode_mpz(mpzvar56084);
mpz_t* mpzvar56085 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56085, "10", 10);
void* a5498655257 = encode_mpz(mpzvar56085);
mpz_t* mpzvar56086 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56086, "5", 10);
void* a5498755258 = encode_mpz(mpzvar56086);
mpz_t* mpzvar56087 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56087, "1", 10);
void* a5498855259 = encode_mpz(mpzvar56087);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = kont55091;
arg_buffer[3] = a5498455255;
arg_buffer[4] = a5498555256;
arg_buffer[5] = a5498655257;
arg_buffer[6] = a5498755258;
arg_buffer[7] = a5498855259;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam55418_fptr() // lam55418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env55419 = arg_buffer[1];
//reading env and args
void* x5498955261 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55092 = (decode_clo(env55419))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55092);
arg_buffer[2] = x5498955261;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55092))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam55418 = encode_clo(alloc_clo(lam55418_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _55420 = arg_buffer[1];
//reading env and args
void* kont55092 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo56089 = alloc_clo(lam55418_fptr, 1);

//setting env list
clo56089[1] = kont55092;
void* f5509355260 = encode_clo(clo56089);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5509355260;
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

