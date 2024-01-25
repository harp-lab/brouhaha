#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"
void* _u43_fptr() // + 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9309 = arg_buffer[1];
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

void* kont89979119 = prim_car(lst);
void* lst9120 = prim_cdr(lst);
void* x88889121 = apply_prim__u43(lst9120);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89979119);
arg_buffer[2] = x88889121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89979119))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void* max_fptr() // max 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9310 = arg_buffer[1];
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

void* kont89999122 = prim_car(lst);
void* lst9123 = prim_cdr(lst);
void* x88899124 = apply_prim_max(lst9123);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont89999122);
arg_buffer[2] = x88899124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont89999122))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* max = encode_clo(alloc_clo(max_fptr, 0));

void* _u45_fptr() // - 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9311 = arg_buffer[1];
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

void* kont90019125 = prim_car(lst);
void* lst9126 = prim_cdr(lst);
void* x88909127 = apply_prim__u45(lst9126);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90019125);
arg_buffer[2] = x88909127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90019125))[0]);
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
void* _9312 = arg_buffer[1];
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

void* kont90039128 = prim_car(lst);
void* lst9129 = prim_cdr(lst);
void* x88919130 = apply_prim__u42(lst9129);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90039128);
arg_buffer[2] = x88919130;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90039128))[0]);
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
void* _9313 = arg_buffer[1];
//reading env and args
void* kont9005 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x88929131 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9005);
arg_buffer[2] = x88929131;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9005))[0]);
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
void* _9314 = arg_buffer[1];
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

void* kont90069132 = prim_car(lst);
void* lst9133 = prim_cdr(lst);
void* x88939134 = apply_prim__u47(lst9133);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90069132);
arg_buffer[2] = x88939134;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90069132))[0]);
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
void* _9315 = arg_buffer[1];
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

void* kont90089135 = prim_car(lst);
void* lst9136 = prim_cdr(lst);
void* x88949137 = apply_prim__u61(lst9136);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90089135);
arg_buffer[2] = x88949137;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90089135))[0]);
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
void* _9316 = arg_buffer[1];
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

void* kont90109138 = prim_car(lst);
void* lst9139 = prim_cdr(lst);
void* x88959140 = apply_prim__u62(lst9139);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90109138);
arg_buffer[2] = x88959140;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90109138))[0]);
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
void* _9317 = arg_buffer[1];
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

void* kont90129141 = prim_car(lst);
void* lst9142 = prim_cdr(lst);
void* x88969143 = apply_prim__u60(lst9142);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90129141);
arg_buffer[2] = x88969143;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90129141))[0]);
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
void* _9318 = arg_buffer[1];
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

void* kont90149144 = prim_car(lst);
void* lst9145 = prim_cdr(lst);
void* x88979146 = apply_prim__u60_u61(lst9145);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90149144);
arg_buffer[2] = x88979146;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90149144))[0]);
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
void* _9319 = arg_buffer[1];
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

void* kont90169147 = prim_car(lst);
void* lst9148 = prim_cdr(lst);
void* x88989149 = apply_prim__u62_u61(lst9148);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90169147);
arg_buffer[2] = x88989149;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90169147))[0]);
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
void* _9320 = arg_buffer[1];
//reading env and args
void* kont9018 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x88999150 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9018);
arg_buffer[2] = x88999150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9018))[0]);
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
void* _9321 = arg_buffer[1];
//reading env and args
void* kont9019 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x89009151 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9019);
arg_buffer[2] = x89009151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9019))[0]);
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
void* _9322 = arg_buffer[1];
//reading env and args
void* kont9020 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x89019152 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9020);
arg_buffer[2] = x89019152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9020))[0]);
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
void* _9323 = arg_buffer[1];
//reading env and args
void* kont9021 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x89029153 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9021);
arg_buffer[2] = x89029153;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9021))[0]);
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
void* _9324 = arg_buffer[1];
//reading env and args
void* kont9022 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x89039154 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9022);
arg_buffer[2] = x89039154;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9022))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* abs_fptr() // abs 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9325 = arg_buffer[1];
//reading env and args
void* kont9023 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x89049155 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9023);
arg_buffer[2] = x89049155;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9023))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* abs = encode_clo(alloc_clo(abs_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9326 = arg_buffer[1];
//reading env and args
void* kont9024 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x89059156 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9024);
arg_buffer[2] = x89059156;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9024))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam9327_fptr() // lam9327 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9328 = arg_buffer[1];
//reading env and args
void* a89089160 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a89069157 = (decode_clo(env9328))[3];
//not do dummy comment
void* kont9025 = (decode_clo(env9328))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env9328))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9025;
arg_buffer[3] = a89069157;
arg_buffer[4] = a89089160;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9327 = encode_clo(alloc_clo(lam9327_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9331 = arg_buffer[1];
//reading env and args
void* kont9025 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9491 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9491, "0", 10);
void* a89069157 = encode_mpz(mpzvar9491);
mpz_t* mpzvar9492 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9492, "2", 10);
void* a89079158 = encode_mpz(mpzvar9492);

//creating new closure instance
void** clo9494 = alloc_clo(lam9327_fptr, 3);

//setting env list
clo9494[1] = equal_u63;
clo9494[2] = kont9025;
clo9494[3] = a89069157;
void* f90269159 = encode_clo(clo9494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f90269159;
arg_buffer[3] = x;
arg_buffer[4] = a89079158;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam9332_fptr() // lam9332 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9333 = arg_buffer[1];
//reading env and args
void* a89119164 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a89099161 = (decode_clo(env9333))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env9333))[2];
//not do dummy comment
void* kont9027 = (decode_clo(env9333))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont9027;
arg_buffer[3] = a89099161;
arg_buffer[4] = a89119164;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9332 = encode_clo(alloc_clo(lam9332_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9336 = arg_buffer[1];
//reading env and args
void* kont9027 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9495 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9495, "1", 10);
void* a89099161 = encode_mpz(mpzvar9495);
mpz_t* mpzvar9496 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9496, "2", 10);
void* a89109162 = encode_mpz(mpzvar9496);

//creating new closure instance
void** clo9498 = alloc_clo(lam9332_fptr, 3);

//setting env list
clo9498[1] = kont9027;
clo9498[2] = equal_u63;
clo9498[3] = a89099161;
void* f90289163 = encode_clo(clo9498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f90289163;
arg_buffer[3] = x;
arg_buffer[4] = a89109162;
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
void* _9337 = arg_buffer[1];
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

void* kont90299165 = prim_car(x);
void* x9166 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90299165);
arg_buffer[2] = x9166;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90299165))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* float_u45_u62int_fptr() // float->int 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9338 = arg_buffer[1];
//reading env and args
void* kont9031 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x89129167 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9031);
arg_buffer[2] = x89129167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9031))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void* int_u45_u62float_fptr() // int->float 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9339 = arg_buffer[1];
//reading env and args
void* kont9032 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x89139168 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9032);
arg_buffer[2] = x89139168;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9032))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam9342_fptr() // lam9342 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9343 = arg_buffer[1];
//reading env and args
void* a89199178 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9033 = (decode_clo(env9343))[3];
//not do dummy comment
void* x = (decode_clo(env9343))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env9343))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont9033;
arg_buffer[3] = x;
arg_buffer[4] = a89199178;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9342 = encode_clo(alloc_clo(lam9342_fptr, 0));

void* lam9344_fptr() // lam9344 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9345 = arg_buffer[1];
//reading env and args
void* a89179175 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9345))[5];
//not do dummy comment
void* x = (decode_clo(env9345))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9345))[3];
//not do dummy comment
void* kont9033 = (decode_clo(env9345))[2];
//not do dummy comment
void* cdr = (decode_clo(env9345))[1];

//if-clause
bool if_guard9499 = is_true(a89179175);
if(if_guard9499)
{
void* x89189176 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9033);
arg_buffer[2] = x89189176;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9033))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9501 = alloc_clo(lam9342_fptr, 3);

//setting env list
clo9501[1] = member_u63;
clo9501[2] = x;
clo9501[3] = kont9033;
void* f90349177 = encode_clo(clo9501);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90349177;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9344 = encode_clo(alloc_clo(lam9344_fptr, 0));

void* lam9346_fptr() // lam9346 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9347 = arg_buffer[1];
//reading env and args
void* a89169173 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9347))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env9347))[5];
//not do dummy comment
void* x = (decode_clo(env9347))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9347))[3];
//not do dummy comment
void* kont9033 = (decode_clo(env9347))[2];
//not do dummy comment
void* cdr = (decode_clo(env9347))[1];

//creating new closure instance
void** clo9503 = alloc_clo(lam9344_fptr, 5);

//setting env list
clo9503[1] = cdr;
clo9503[2] = kont9033;
clo9503[3] = member_u63;
clo9503[4] = x;
clo9503[5] = lst;
void* f90359174 = encode_clo(clo9503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f90359174;
arg_buffer[3] = a89169173;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9346 = encode_clo(alloc_clo(lam9346_fptr, 0));

void* lam9348_fptr() // lam9348 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9349 = arg_buffer[1];
//reading env and args
void* a89149170 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9349))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env9349))[6];
//not do dummy comment
void* x = (decode_clo(env9349))[5];
//not do dummy comment
void* car = (decode_clo(env9349))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env9349))[3];
//not do dummy comment
void* kont9033 = (decode_clo(env9349))[2];
//not do dummy comment
void* cdr = (decode_clo(env9349))[1];

//if-clause
bool if_guard9504 = is_true(a89149170);
if(if_guard9504)
{
void* x89159171 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9033);
arg_buffer[2] = x89159171;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9033))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9506 = alloc_clo(lam9346_fptr, 6);

//setting env list
clo9506[1] = cdr;
clo9506[2] = kont9033;
clo9506[3] = member_u63;
clo9506[4] = x;
clo9506[5] = equal_u63;
clo9506[6] = lst;
void* f90369172 = encode_clo(clo9506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90369172;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9348 = encode_clo(alloc_clo(lam9348_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9350 = arg_buffer[1];
//reading env and args
void* kont9033 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9508 = alloc_clo(lam9348_fptr, 7);

//setting env list
clo9508[1] = cdr;
clo9508[2] = kont9033;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo9508[3] = member_u63;
clo9508[4] = car;
clo9508[5] = x;
clo9508[6] = equal_u63;
clo9508[7] = lst;
void* f90379169 = encode_clo(clo9508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90379169;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam9351_fptr() // lam9351 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9352 = arg_buffer[1];
//reading env and args
void* a89239186 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9038 = (decode_clo(env9352))[4];
//not do dummy comment
void* a89229184 = (decode_clo(env9352))[3];
//not do dummy comment
void* fun = (decode_clo(env9352))[2];
//not do dummy comment
void* foldl = (decode_clo(env9352))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont9038;
arg_buffer[3] = fun;
arg_buffer[4] = a89229184;
arg_buffer[5] = a89239186;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9351 = encode_clo(alloc_clo(lam9351_fptr, 0));

void* lam9353_fptr() // lam9353 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9354 = arg_buffer[1];
//reading env and args
void* a89229184 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9354))[5];
//not do dummy comment
void* lst = (decode_clo(env9354))[4];
//not do dummy comment
void* kont9038 = (decode_clo(env9354))[3];
//not do dummy comment
void* fun = (decode_clo(env9354))[2];
//not do dummy comment
void* foldl = (decode_clo(env9354))[1];

//creating new closure instance
void** clo9510 = alloc_clo(lam9351_fptr, 4);

//setting env list
clo9510[1] = foldl;
clo9510[2] = fun;
clo9510[3] = a89229184;
clo9510[4] = kont9038;
void* f90399185 = encode_clo(clo9510);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90399185;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9353 = encode_clo(alloc_clo(lam9353_fptr, 0));

void* lam9355_fptr() // lam9355 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9356 = arg_buffer[1];
//reading env and args
void* a89219182 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9356))[6];
//not do dummy comment
void* lst = (decode_clo(env9356))[5];
//not do dummy comment
void* kont9038 = (decode_clo(env9356))[4];
//not do dummy comment
void* fun = (decode_clo(env9356))[3];
//not do dummy comment
void* acc = (decode_clo(env9356))[2];
//not do dummy comment
void* foldl = (decode_clo(env9356))[1];

//creating new closure instance
void** clo9512 = alloc_clo(lam9353_fptr, 5);

//setting env list
clo9512[1] = foldl;
clo9512[2] = fun;
clo9512[3] = kont9038;
clo9512[4] = lst;
clo9512[5] = cdr;
void* f90409183 = encode_clo(clo9512);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f90409183;
arg_buffer[3] = a89219182;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9355 = encode_clo(alloc_clo(lam9355_fptr, 0));

void* lam9357_fptr() // lam9357 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9358 = arg_buffer[1];
//reading env and args
void* a89209180 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9358))[7];
//not do dummy comment
void* lst = (decode_clo(env9358))[6];
//not do dummy comment
void* kont9038 = (decode_clo(env9358))[5];
//not do dummy comment
void* fun = (decode_clo(env9358))[4];
//not do dummy comment
void* acc = (decode_clo(env9358))[3];
//not do dummy comment
void* car = (decode_clo(env9358))[2];
//not do dummy comment
void* foldl = (decode_clo(env9358))[1];

//if-clause
bool if_guard9513 = is_true(a89209180);
if(if_guard9513)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9038);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9038))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9515 = alloc_clo(lam9355_fptr, 6);

//setting env list
clo9515[1] = foldl;
clo9515[2] = acc;
clo9515[3] = fun;
clo9515[4] = kont9038;
clo9515[5] = lst;
clo9515[6] = cdr;
void* f90419181 = encode_clo(clo9515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90419181;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9357 = encode_clo(alloc_clo(lam9357_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9359 = arg_buffer[1];
//reading env and args
void* kont9038 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9517 = alloc_clo(lam9357_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo9517[1] = foldl;
clo9517[2] = car;
clo9517[3] = acc;
clo9517[4] = fun;
clo9517[5] = kont9038;
clo9517[6] = lst;
clo9517[7] = cdr;
void* f90429179 = encode_clo(clo9517);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90429179;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam9360_fptr() // lam9360 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9361 = arg_buffer[1];
//reading env and args
void* a89279194 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9361))[3];
//not do dummy comment
void* kont9043 = (decode_clo(env9361))[2];
//not do dummy comment
void* a89259190 = (decode_clo(env9361))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9043;
arg_buffer[3] = a89259190;
arg_buffer[4] = a89279194;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9360 = encode_clo(alloc_clo(lam9360_fptr, 0));

void* lam9362_fptr() // lam9362 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9363 = arg_buffer[1];
//reading env and args
void* a89269192 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9363))[5];
//not do dummy comment
void* kont9043 = (decode_clo(env9363))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9363))[3];
//not do dummy comment
void* a89259190 = (decode_clo(env9363))[2];
//not do dummy comment
void* cons = (decode_clo(env9363))[1];

//creating new closure instance
void** clo9519 = alloc_clo(lam9360_fptr, 3);

//setting env list
clo9519[1] = a89259190;
clo9519[2] = kont9043;
clo9519[3] = reverse_u45helper;
void* f90449193 = encode_clo(clo9519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f90449193;
arg_buffer[3] = a89269192;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9362 = encode_clo(alloc_clo(lam9362_fptr, 0));

void* lam9364_fptr() // lam9364 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9365 = arg_buffer[1];
//reading env and args
void* a89259190 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9365))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9365))[5];
//not do dummy comment
void* kont9043 = (decode_clo(env9365))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9365))[3];
//not do dummy comment
void* car = (decode_clo(env9365))[2];
//not do dummy comment
void* cons = (decode_clo(env9365))[1];

//creating new closure instance
void** clo9521 = alloc_clo(lam9362_fptr, 5);

//setting env list
clo9521[1] = cons;
clo9521[2] = a89259190;
clo9521[3] = lst2;
clo9521[4] = kont9043;
clo9521[5] = reverse_u45helper;
void* f90459191 = encode_clo(clo9521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90459191;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9364 = encode_clo(alloc_clo(lam9364_fptr, 0));

void* lam9366_fptr() // lam9366 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9367 = arg_buffer[1];
//reading env and args
void* a89249188 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9367))[7];
//not do dummy comment
void* lst = (decode_clo(env9367))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9367))[5];
//not do dummy comment
void* kont9043 = (decode_clo(env9367))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9367))[3];
//not do dummy comment
void* car = (decode_clo(env9367))[2];
//not do dummy comment
void* cons = (decode_clo(env9367))[1];

//if-clause
bool if_guard9522 = is_true(a89249188);
if(if_guard9522)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9043);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9043))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9524 = alloc_clo(lam9364_fptr, 6);

//setting env list
clo9524[1] = cons;
clo9524[2] = car;
clo9524[3] = lst2;
clo9524[4] = kont9043;
clo9524[5] = reverse_u45helper;
clo9524[6] = lst;
void* f90469189 = encode_clo(clo9524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90469189;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9366 = encode_clo(alloc_clo(lam9366_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9368 = arg_buffer[1];
//reading env and args
void* kont9043 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9526 = alloc_clo(lam9366_fptr, 7);

//setting env list
clo9526[1] = cons;
clo9526[2] = car;
clo9526[3] = lst2;
clo9526[4] = kont9043;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo9526[5] = reverse_u45helper;
clo9526[6] = lst;
clo9526[7] = cdr;
void* f90479187 = encode_clo(clo9526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90479187;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam9369_fptr() // lam9369 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9370 = arg_buffer[1];
//reading env and args
void* a89289196 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9370))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env9370))[2];
//not do dummy comment
void* kont9048 = (decode_clo(env9370))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont9048;
arg_buffer[3] = lst;
arg_buffer[4] = a89289196;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9369 = encode_clo(alloc_clo(lam9369_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9371 = arg_buffer[1];
//reading env and args
void* kont9048 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9528 = alloc_clo(lam9369_fptr, 3);

//setting env list
clo9528[1] = kont9048;
clo9528[2] = reverse_u45helper;
clo9528[3] = lst;
void* f90499195 = encode_clo(clo9528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f90499195;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam9372_fptr() // lam9372 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9373 = arg_buffer[1];
//reading env and args
void* x89319201 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9050 = (decode_clo(env9373))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9050);
arg_buffer[2] = x89319201;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9050))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9372 = encode_clo(alloc_clo(lam9372_fptr, 0));

void* lam9374_fptr() // lam9374 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9375 = arg_buffer[1];
//reading env and args
void* a89369210 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9050 = (decode_clo(env9375))[4];
//not do dummy comment
void* a89329203 = (decode_clo(env9375))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9375))[2];
//not do dummy comment
void* a89349206 = (decode_clo(env9375))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9050;
arg_buffer[3] = a89329203;
arg_buffer[4] = a89349206;
arg_buffer[5] = a89369210;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9374 = encode_clo(alloc_clo(lam9374_fptr, 0));

void* lam9376_fptr() // lam9376 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9377 = arg_buffer[1];
//reading env and args
void* a89359208 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9050 = (decode_clo(env9377))[6];
//not do dummy comment
void* a89329203 = (decode_clo(env9377))[5];
//not do dummy comment
void* a89349206 = (decode_clo(env9377))[4];
//not do dummy comment
void* cons = (decode_clo(env9377))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9377))[2];
//not do dummy comment
void* lst2 = (decode_clo(env9377))[1];

//creating new closure instance
void** clo9530 = alloc_clo(lam9374_fptr, 4);

//setting env list
clo9530[1] = a89349206;
clo9530[2] = take_u45helper;
clo9530[3] = a89329203;
clo9530[4] = kont9050;
void* f90529209 = encode_clo(clo9530);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f90529209;
arg_buffer[3] = a89359208;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9376 = encode_clo(alloc_clo(lam9376_fptr, 0));

void* lam9378_fptr() // lam9378 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9379 = arg_buffer[1];
//reading env and args
void* a89349206 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9050 = (decode_clo(env9379))[7];
//not do dummy comment
void* lst = (decode_clo(env9379))[6];
//not do dummy comment
void* a89329203 = (decode_clo(env9379))[5];
//not do dummy comment
void* car = (decode_clo(env9379))[4];
//not do dummy comment
void* cons = (decode_clo(env9379))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9379))[2];
//not do dummy comment
void* lst2 = (decode_clo(env9379))[1];

//creating new closure instance
void** clo9532 = alloc_clo(lam9376_fptr, 6);

//setting env list
clo9532[1] = lst2;
clo9532[2] = take_u45helper;
clo9532[3] = cons;
clo9532[4] = a89349206;
clo9532[5] = a89329203;
clo9532[6] = kont9050;
void* f90539207 = encode_clo(clo9532);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90539207;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9378 = encode_clo(alloc_clo(lam9378_fptr, 0));

void* lam9381_fptr() // lam9381 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9382 = arg_buffer[1];
//reading env and args
void* a89329203 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9050 = (decode_clo(env9382))[8];
//not do dummy comment
void* lst = (decode_clo(env9382))[7];
//not do dummy comment
void* cons = (decode_clo(env9382))[6];
//not do dummy comment
void* _u45 = (decode_clo(env9382))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env9382))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9382))[3];
//not do dummy comment
void* n = (decode_clo(env9382))[2];
//not do dummy comment
void* car = (decode_clo(env9382))[1];
mpz_t* mpzvar9533 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9533, "1", 10);
void* a89339204 = encode_mpz(mpzvar9533);

//creating new closure instance
void** clo9535 = alloc_clo(lam9378_fptr, 7);

//setting env list
clo9535[1] = lst2;
clo9535[2] = take_u45helper;
clo9535[3] = cons;
clo9535[4] = car;
clo9535[5] = a89329203;
clo9535[6] = lst;
clo9535[7] = kont9050;
void* f90549205 = encode_clo(clo9535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f90549205;
arg_buffer[3] = n;
arg_buffer[4] = a89339204;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9381 = encode_clo(alloc_clo(lam9381_fptr, 0));

void* lam9383_fptr() // lam9383 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9384 = arg_buffer[1];
//reading env and args
void* a89309199 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9384))[10];
//not do dummy comment
void* kont9050 = (decode_clo(env9384))[9];
//not do dummy comment
void* lst = (decode_clo(env9384))[8];
//not do dummy comment
void* reverse = (decode_clo(env9384))[7];
//not do dummy comment
void* cons = (decode_clo(env9384))[6];
//not do dummy comment
void* _u45 = (decode_clo(env9384))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env9384))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9384))[3];
//not do dummy comment
void* n = (decode_clo(env9384))[2];
//not do dummy comment
void* car = (decode_clo(env9384))[1];

//if-clause
bool if_guard9536 = is_true(a89309199);
if(if_guard9536)
{

//creating new closure instance
void** clo9538 = alloc_clo(lam9372_fptr, 1);

//setting env list
clo9538[1] = kont9050;
void* f90519200 = encode_clo(clo9538);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f90519200;
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
void** clo9540 = alloc_clo(lam9381_fptr, 8);

//setting env list
clo9540[1] = car;
clo9540[2] = n;
clo9540[3] = lst2;
clo9540[4] = take_u45helper;
clo9540[5] = _u45;
clo9540[6] = cons;
clo9540[7] = lst;
clo9540[8] = kont9050;
void* f90559202 = encode_clo(clo9540);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90559202;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9383 = encode_clo(alloc_clo(lam9383_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9386 = arg_buffer[1];
//reading env and args
void* kont9050 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar9541 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9541, "0", 10);
void* a89299197 = encode_mpz(mpzvar9541);

//creating new closure instance
void** clo9543 = alloc_clo(lam9383_fptr, 10);

//setting env list
clo9543[1] = car;
clo9543[2] = n;
clo9543[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo9543[4] = take_u45helper;
clo9543[5] = _u45;
clo9543[6] = cons;
clo9543[7] = reverse;
clo9543[8] = lst;
clo9543[9] = kont9050;
clo9543[10] = cdr;
void* f90569198 = encode_clo(clo9543);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f90569198;
arg_buffer[3] = n;
arg_buffer[4] = a89299197;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam9387_fptr() // lam9387 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9388 = arg_buffer[1];
//reading env and args
void* a89379212 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9388))[4];
//not do dummy comment
void* kont9057 = (decode_clo(env9388))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env9388))[2];
//not do dummy comment
void* n = (decode_clo(env9388))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont9057;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a89379212;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9387 = encode_clo(alloc_clo(lam9387_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9389 = arg_buffer[1];
//reading env and args
void* kont9057 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9545 = alloc_clo(lam9387_fptr, 4);

//setting env list
clo9545[1] = n;
clo9545[2] = take_u45helper;
clo9545[3] = kont9057;
clo9545[4] = lst;
void* f90589211 = encode_clo(clo9545);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f90589211;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam9391_fptr() // lam9391 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9392 = arg_buffer[1];
//reading env and args
void* a89429220 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a89409216 = (decode_clo(env9392))[3];
//not do dummy comment
void* _u43 = (decode_clo(env9392))[2];
//not do dummy comment
void* kont9059 = (decode_clo(env9392))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont9059;
arg_buffer[3] = a89409216;
arg_buffer[4] = a89429220;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9391 = encode_clo(alloc_clo(lam9391_fptr, 0));

void* lam9393_fptr() // lam9393 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9394 = arg_buffer[1];
//reading env and args
void* a89419218 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env9394))[4];
//not do dummy comment
void* a89409216 = (decode_clo(env9394))[3];
//not do dummy comment
void* _u43 = (decode_clo(env9394))[2];
//not do dummy comment
void* kont9059 = (decode_clo(env9394))[1];

//creating new closure instance
void** clo9547 = alloc_clo(lam9391_fptr, 3);

//setting env list
clo9547[1] = kont9059;
clo9547[2] = _u43;
clo9547[3] = a89409216;
void* f90609219 = encode_clo(clo9547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f90609219;
arg_buffer[3] = a89419218;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9393 = encode_clo(alloc_clo(lam9393_fptr, 0));

void* lam9396_fptr() // lam9396 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9397 = arg_buffer[1];
//reading env and args
void* a89389214 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9397))[5];
//not do dummy comment
void* lst = (decode_clo(env9397))[4];
//not do dummy comment
void* length = (decode_clo(env9397))[3];
//not do dummy comment
void* _u43 = (decode_clo(env9397))[2];
//not do dummy comment
void* kont9059 = (decode_clo(env9397))[1];

//if-clause
bool if_guard9548 = is_true(a89389214);
if(if_guard9548)
{
mpz_t* mpzvar9549 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9549, "0", 10);
void* x89399215 = encode_mpz(mpzvar9549);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9059);
arg_buffer[2] = x89399215;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9059))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar9550 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9550, "1", 10);
void* a89409216 = encode_mpz(mpzvar9550);

//creating new closure instance
void** clo9552 = alloc_clo(lam9393_fptr, 4);

//setting env list
clo9552[1] = kont9059;
clo9552[2] = _u43;
clo9552[3] = a89409216;
clo9552[4] = length;
void* f90619217 = encode_clo(clo9552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90619217;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9396 = encode_clo(alloc_clo(lam9396_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9398 = arg_buffer[1];
//reading env and args
void* kont9059 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9554 = alloc_clo(lam9396_fptr, 5);

//setting env list
clo9554[1] = kont9059;
clo9554[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo9554[3] = length;
clo9554[4] = lst;
clo9554[5] = cdr;
void* f90629213 = encode_clo(clo9554);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90629213;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam9399_fptr() // lam9399 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9400 = arg_buffer[1];
//reading env and args
void* x89449224 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9063 = (decode_clo(env9400))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9063);
arg_buffer[2] = x89449224;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9063))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9399 = encode_clo(alloc_clo(lam9399_fptr, 0));

void* lam9401_fptr() // lam9401 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9402 = arg_buffer[1];
//reading env and args
void* a89489232 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a89469228 = (decode_clo(env9402))[3];
//not do dummy comment
void* cons = (decode_clo(env9402))[2];
//not do dummy comment
void* kont9063 = (decode_clo(env9402))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9063;
arg_buffer[3] = a89469228;
arg_buffer[4] = a89489232;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9401 = encode_clo(alloc_clo(lam9401_fptr, 0));

void* lam9403_fptr() // lam9403 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9404 = arg_buffer[1];
//reading env and args
void* a89479230 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a89469228 = (decode_clo(env9404))[5];
//not do dummy comment
void* map = (decode_clo(env9404))[4];
//not do dummy comment
void* proc = (decode_clo(env9404))[3];
//not do dummy comment
void* cons = (decode_clo(env9404))[2];
//not do dummy comment
void* kont9063 = (decode_clo(env9404))[1];

//creating new closure instance
void** clo9556 = alloc_clo(lam9401_fptr, 3);

//setting env list
clo9556[1] = kont9063;
clo9556[2] = cons;
clo9556[3] = a89469228;
void* f90659231 = encode_clo(clo9556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f90659231;
arg_buffer[3] = proc;
arg_buffer[4] = a89479230;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9403 = encode_clo(alloc_clo(lam9403_fptr, 0));

void* lam9405_fptr() // lam9405 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9406 = arg_buffer[1];
//reading env and args
void* a89469228 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9406))[6];
//not do dummy comment
void* lst = (decode_clo(env9406))[5];
//not do dummy comment
void* map = (decode_clo(env9406))[4];
//not do dummy comment
void* proc = (decode_clo(env9406))[3];
//not do dummy comment
void* cons = (decode_clo(env9406))[2];
//not do dummy comment
void* kont9063 = (decode_clo(env9406))[1];

//creating new closure instance
void** clo9558 = alloc_clo(lam9403_fptr, 5);

//setting env list
clo9558[1] = kont9063;
clo9558[2] = cons;
clo9558[3] = proc;
clo9558[4] = map;
clo9558[5] = a89469228;
void* f90669229 = encode_clo(clo9558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90669229;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9405 = encode_clo(alloc_clo(lam9405_fptr, 0));

void* lam9407_fptr() // lam9407 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9408 = arg_buffer[1];
//reading env and args
void* a89459226 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9408))[6];
//not do dummy comment
void* lst = (decode_clo(env9408))[5];
//not do dummy comment
void* map = (decode_clo(env9408))[4];
//not do dummy comment
void* proc = (decode_clo(env9408))[3];
//not do dummy comment
void* cons = (decode_clo(env9408))[2];
//not do dummy comment
void* kont9063 = (decode_clo(env9408))[1];

//creating new closure instance
void** clo9560 = alloc_clo(lam9405_fptr, 6);

//setting env list
clo9560[1] = kont9063;
clo9560[2] = cons;
clo9560[3] = proc;
clo9560[4] = map;
clo9560[5] = lst;
clo9560[6] = cdr;
void* f90679227 = encode_clo(clo9560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f90679227;
arg_buffer[3] = a89459226;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9407 = encode_clo(alloc_clo(lam9407_fptr, 0));

void* lam9409_fptr() // lam9409 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9410 = arg_buffer[1];
//reading env and args
void* a89439222 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9410))[8];
//not do dummy comment
void* map = (decode_clo(env9410))[7];
//not do dummy comment
void* proc = (decode_clo(env9410))[6];
//not do dummy comment
void* car = (decode_clo(env9410))[5];
//not do dummy comment
void* list = (decode_clo(env9410))[4];
//not do dummy comment
void* cdr = (decode_clo(env9410))[3];
//not do dummy comment
void* cons = (decode_clo(env9410))[2];
//not do dummy comment
void* kont9063 = (decode_clo(env9410))[1];

//if-clause
bool if_guard9561 = is_true(a89439222);
if(if_guard9561)
{

//creating new closure instance
void** clo9563 = alloc_clo(lam9399_fptr, 1);

//setting env list
clo9563[1] = kont9063;
void* f90649223 = encode_clo(clo9563);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f90649223;
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
void** clo9565 = alloc_clo(lam9407_fptr, 6);

//setting env list
clo9565[1] = kont9063;
clo9565[2] = cons;
clo9565[3] = proc;
clo9565[4] = map;
clo9565[5] = lst;
clo9565[6] = cdr;
void* f90689225 = encode_clo(clo9565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90689225;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9409 = encode_clo(alloc_clo(lam9409_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9411 = arg_buffer[1];
//reading env and args
void* kont9063 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9567 = alloc_clo(lam9409_fptr, 8);

//setting env list
clo9567[1] = kont9063;
clo9567[2] = cons;
clo9567[3] = cdr;
clo9567[4] = list;
clo9567[5] = car;
clo9567[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo9567[7] = map;
clo9567[8] = lst;
void* f90699221 = encode_clo(clo9567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90699221;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam9412_fptr() // lam9412 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9413 = arg_buffer[1];
//reading env and args
void* x89509236 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9070 = (decode_clo(env9413))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9070);
arg_buffer[2] = x89509236;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9070))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9412 = encode_clo(alloc_clo(lam9412_fptr, 0));

void* lam9414_fptr() // lam9414 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9415 = arg_buffer[1];
//reading env and args
void* a89559246 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a89539242 = (decode_clo(env9415))[3];
//not do dummy comment
void* kont9070 = (decode_clo(env9415))[2];
//not do dummy comment
void* cons = (decode_clo(env9415))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9070;
arg_buffer[3] = a89539242;
arg_buffer[4] = a89559246;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9414 = encode_clo(alloc_clo(lam9414_fptr, 0));

void* lam9416_fptr() // lam9416 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9417 = arg_buffer[1];
//reading env and args
void* a89549244 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a89539242 = (decode_clo(env9417))[5];
//not do dummy comment
void* kont9070 = (decode_clo(env9417))[4];
//not do dummy comment
void* op = (decode_clo(env9417))[3];
//not do dummy comment
void* filter = (decode_clo(env9417))[2];
//not do dummy comment
void* cons = (decode_clo(env9417))[1];

//creating new closure instance
void** clo9569 = alloc_clo(lam9414_fptr, 3);

//setting env list
clo9569[1] = cons;
clo9569[2] = kont9070;
clo9569[3] = a89539242;
void* f90729245 = encode_clo(clo9569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f90729245;
arg_buffer[3] = op;
arg_buffer[4] = a89549244;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9416 = encode_clo(alloc_clo(lam9416_fptr, 0));

void* lam9418_fptr() // lam9418 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9419 = arg_buffer[1];
//reading env and args
void* a89539242 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9419))[6];
//not do dummy comment
void* lst = (decode_clo(env9419))[5];
//not do dummy comment
void* kont9070 = (decode_clo(env9419))[4];
//not do dummy comment
void* op = (decode_clo(env9419))[3];
//not do dummy comment
void* filter = (decode_clo(env9419))[2];
//not do dummy comment
void* cons = (decode_clo(env9419))[1];

//creating new closure instance
void** clo9571 = alloc_clo(lam9416_fptr, 5);

//setting env list
clo9571[1] = cons;
clo9571[2] = filter;
clo9571[3] = op;
clo9571[4] = kont9070;
clo9571[5] = a89539242;
void* f90739243 = encode_clo(clo9571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90739243;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9418 = encode_clo(alloc_clo(lam9418_fptr, 0));

void* lam9420_fptr() // lam9420 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9421 = arg_buffer[1];
//reading env and args
void* a89569248 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9070 = (decode_clo(env9421))[3];
//not do dummy comment
void* op = (decode_clo(env9421))[2];
//not do dummy comment
void* filter = (decode_clo(env9421))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont9070;
arg_buffer[3] = op;
arg_buffer[4] = a89569248;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9420 = encode_clo(alloc_clo(lam9420_fptr, 0));

void* lam9422_fptr() // lam9422 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9423 = arg_buffer[1];
//reading env and args
void* a89529240 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9423))[7];
//not do dummy comment
void* lst = (decode_clo(env9423))[6];
//not do dummy comment
void* kont9070 = (decode_clo(env9423))[5];
//not do dummy comment
void* op = (decode_clo(env9423))[4];
//not do dummy comment
void* cons = (decode_clo(env9423))[3];
//not do dummy comment
void* filter = (decode_clo(env9423))[2];
//not do dummy comment
void* car = (decode_clo(env9423))[1];

//if-clause
bool if_guard9572 = is_true(a89529240);
if(if_guard9572)
{

//creating new closure instance
void** clo9574 = alloc_clo(lam9418_fptr, 6);

//setting env list
clo9574[1] = cons;
clo9574[2] = filter;
clo9574[3] = op;
clo9574[4] = kont9070;
clo9574[5] = lst;
clo9574[6] = cdr;
void* f90749241 = encode_clo(clo9574);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90749241;
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
void** clo9576 = alloc_clo(lam9420_fptr, 3);

//setting env list
clo9576[1] = filter;
clo9576[2] = op;
clo9576[3] = kont9070;
void* f90759247 = encode_clo(clo9576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90759247;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9422 = encode_clo(alloc_clo(lam9422_fptr, 0));

void* lam9424_fptr() // lam9424 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9425 = arg_buffer[1];
//reading env and args
void* a89519238 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9425))[7];
//not do dummy comment
void* lst = (decode_clo(env9425))[6];
//not do dummy comment
void* kont9070 = (decode_clo(env9425))[5];
//not do dummy comment
void* op = (decode_clo(env9425))[4];
//not do dummy comment
void* cons = (decode_clo(env9425))[3];
//not do dummy comment
void* filter = (decode_clo(env9425))[2];
//not do dummy comment
void* car = (decode_clo(env9425))[1];

//creating new closure instance
void** clo9578 = alloc_clo(lam9422_fptr, 7);

//setting env list
clo9578[1] = car;
clo9578[2] = filter;
clo9578[3] = cons;
clo9578[4] = op;
clo9578[5] = kont9070;
clo9578[6] = lst;
clo9578[7] = cdr;
void* f90769239 = encode_clo(clo9578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f90769239;
arg_buffer[3] = a89519238;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9424 = encode_clo(alloc_clo(lam9424_fptr, 0));

void* lam9426_fptr() // lam9426 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9427 = arg_buffer[1];
//reading env and args
void* a89499234 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env9427))[8];
//not do dummy comment
void* kont9070 = (decode_clo(env9427))[7];
//not do dummy comment
void* op = (decode_clo(env9427))[6];
//not do dummy comment
void* cons = (decode_clo(env9427))[5];
//not do dummy comment
void* list = (decode_clo(env9427))[4];
//not do dummy comment
void* cdr = (decode_clo(env9427))[3];
//not do dummy comment
void* filter = (decode_clo(env9427))[2];
//not do dummy comment
void* car = (decode_clo(env9427))[1];

//if-clause
bool if_guard9579 = is_true(a89499234);
if(if_guard9579)
{

//creating new closure instance
void** clo9581 = alloc_clo(lam9412_fptr, 1);

//setting env list
clo9581[1] = kont9070;
void* f90719235 = encode_clo(clo9581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f90719235;
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
void** clo9583 = alloc_clo(lam9424_fptr, 7);

//setting env list
clo9583[1] = car;
clo9583[2] = filter;
clo9583[3] = cons;
clo9583[4] = op;
clo9583[5] = kont9070;
clo9583[6] = lst;
clo9583[7] = cdr;
void* f90779237 = encode_clo(clo9583);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90779237;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9426 = encode_clo(alloc_clo(lam9426_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9428 = arg_buffer[1];
//reading env and args
void* kont9070 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9585 = alloc_clo(lam9426_fptr, 8);

//setting env list
clo9585[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo9585[2] = filter;
clo9585[3] = cdr;
clo9585[4] = list;
clo9585[5] = cons;
clo9585[6] = op;
clo9585[7] = kont9070;
clo9585[8] = lst;
void* f90789233 = encode_clo(clo9585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90789233;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam9429_fptr() // lam9429 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9430 = arg_buffer[1];
//reading env and args
void* a89619256 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env9430))[3];
//not do dummy comment
void* a89599253 = (decode_clo(env9430))[2];
//not do dummy comment
void* kont9079 = (decode_clo(env9430))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont9079;
arg_buffer[3] = a89599253;
arg_buffer[4] = a89619256;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9429 = encode_clo(alloc_clo(lam9429_fptr, 0));

void* lam9432_fptr() // lam9432 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9433 = arg_buffer[1];
//reading env and args
void* a89599253 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env9433))[4];
//not do dummy comment
void* n = (decode_clo(env9433))[3];
//not do dummy comment
void* kont9079 = (decode_clo(env9433))[2];
//not do dummy comment
void* _u45 = (decode_clo(env9433))[1];
mpz_t* mpzvar9586 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9586, "1", 10);
void* a89609254 = encode_mpz(mpzvar9586);

//creating new closure instance
void** clo9588 = alloc_clo(lam9429_fptr, 3);

//setting env list
clo9588[1] = kont9079;
clo9588[2] = a89599253;
clo9588[3] = drop;
void* f90809255 = encode_clo(clo9588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f90809255;
arg_buffer[3] = n;
arg_buffer[4] = a89609254;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9432 = encode_clo(alloc_clo(lam9432_fptr, 0));

void* lam9434_fptr() // lam9434 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9435 = arg_buffer[1];
//reading env and args
void* a89589251 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9435))[6];
//not do dummy comment
void* n = (decode_clo(env9435))[5];
//not do dummy comment
void* kont9079 = (decode_clo(env9435))[4];
//not do dummy comment
void* _u45 = (decode_clo(env9435))[3];
//not do dummy comment
void* lst = (decode_clo(env9435))[2];
//not do dummy comment
void* drop = (decode_clo(env9435))[1];

//if-clause
bool if_guard9589 = is_true(a89589251);
if(if_guard9589)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9079);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9079))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9591 = alloc_clo(lam9432_fptr, 4);

//setting env list
clo9591[1] = _u45;
clo9591[2] = kont9079;
clo9591[3] = n;
clo9591[4] = drop;
void* f90819252 = encode_clo(clo9591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90819252;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9434 = encode_clo(alloc_clo(lam9434_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9437 = arg_buffer[1];
//reading env and args
void* kont9079 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar9592 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9592, "0", 10);
void* a89579249 = encode_mpz(mpzvar9592);

//creating new closure instance
void** clo9594 = alloc_clo(lam9434_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo9594[1] = drop;
clo9594[2] = lst;
clo9594[3] = _u45;
clo9594[4] = kont9079;
clo9594[5] = n;
clo9594[6] = cdr;
void* f90829250 = encode_clo(clo9594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f90829250;
arg_buffer[3] = n;
arg_buffer[4] = a89579249;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam9438_fptr() // lam9438 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9439 = arg_buffer[1];
//reading env and args
void* a89659264 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9083 = (decode_clo(env9439))[3];
//not do dummy comment
void* a89639260 = (decode_clo(env9439))[2];
//not do dummy comment
void* proc = (decode_clo(env9439))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont9083;
arg_buffer[3] = a89639260;
arg_buffer[4] = a89659264;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9438 = encode_clo(alloc_clo(lam9438_fptr, 0));

void* lam9440_fptr() // lam9440 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9441 = arg_buffer[1];
//reading env and args
void* a89649262 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9083 = (decode_clo(env9441))[5];
//not do dummy comment
void* a89639260 = (decode_clo(env9441))[4];
//not do dummy comment
void* foldr = (decode_clo(env9441))[3];
//not do dummy comment
void* proc = (decode_clo(env9441))[2];
//not do dummy comment
void* acc = (decode_clo(env9441))[1];

//creating new closure instance
void** clo9596 = alloc_clo(lam9438_fptr, 3);

//setting env list
clo9596[1] = proc;
clo9596[2] = a89639260;
clo9596[3] = kont9083;
void* f90849263 = encode_clo(clo9596);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f90849263;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a89649262;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9440 = encode_clo(alloc_clo(lam9440_fptr, 0));

void* lam9442_fptr() // lam9442 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9443 = arg_buffer[1];
//reading env and args
void* a89639260 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9443))[6];
//not do dummy comment
void* kont9083 = (decode_clo(env9443))[5];
//not do dummy comment
void* foldr = (decode_clo(env9443))[4];
//not do dummy comment
void* lst = (decode_clo(env9443))[3];
//not do dummy comment
void* proc = (decode_clo(env9443))[2];
//not do dummy comment
void* acc = (decode_clo(env9443))[1];

//creating new closure instance
void** clo9598 = alloc_clo(lam9440_fptr, 5);

//setting env list
clo9598[1] = acc;
clo9598[2] = proc;
clo9598[3] = foldr;
clo9598[4] = a89639260;
clo9598[5] = kont9083;
void* f90859261 = encode_clo(clo9598);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90859261;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9442 = encode_clo(alloc_clo(lam9442_fptr, 0));

void* lam9444_fptr() // lam9444 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9445 = arg_buffer[1];
//reading env and args
void* a89629258 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9445))[7];
//not do dummy comment
void* kont9083 = (decode_clo(env9445))[6];
//not do dummy comment
void* car = (decode_clo(env9445))[5];
//not do dummy comment
void* foldr = (decode_clo(env9445))[4];
//not do dummy comment
void* lst = (decode_clo(env9445))[3];
//not do dummy comment
void* proc = (decode_clo(env9445))[2];
//not do dummy comment
void* acc = (decode_clo(env9445))[1];

//if-clause
bool if_guard9599 = is_true(a89629258);
if(if_guard9599)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9083);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9083))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9601 = alloc_clo(lam9442_fptr, 6);

//setting env list
clo9601[1] = acc;
clo9601[2] = proc;
clo9601[3] = lst;
clo9601[4] = foldr;
clo9601[5] = kont9083;
clo9601[6] = cdr;
void* f90869259 = encode_clo(clo9601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90869259;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9444 = encode_clo(alloc_clo(lam9444_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9446 = arg_buffer[1];
//reading env and args
void* kont9083 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9603 = alloc_clo(lam9444_fptr, 7);

//setting env list
clo9603[1] = acc;
clo9603[2] = proc;
clo9603[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo9603[4] = foldr;
clo9603[5] = car;
clo9603[6] = kont9083;
clo9603[7] = cdr;
void* f90879257 = encode_clo(clo9603);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90879257;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam9447_fptr() // lam9447 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9448 = arg_buffer[1];
//reading env and args
void* a89699272 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9088 = (decode_clo(env9448))[3];
//not do dummy comment
void* a89679268 = (decode_clo(env9448))[2];
//not do dummy comment
void* cons = (decode_clo(env9448))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont9088;
arg_buffer[3] = a89679268;
arg_buffer[4] = a89699272;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9447 = encode_clo(alloc_clo(lam9447_fptr, 0));

void* lam9449_fptr() // lam9449 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9450 = arg_buffer[1];
//reading env and args
void* a89689270 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont9088 = (decode_clo(env9450))[5];
//not do dummy comment
void* append = (decode_clo(env9450))[4];
//not do dummy comment
void* a89679268 = (decode_clo(env9450))[3];
//not do dummy comment
void* lst2 = (decode_clo(env9450))[2];
//not do dummy comment
void* cons = (decode_clo(env9450))[1];

//creating new closure instance
void** clo9605 = alloc_clo(lam9447_fptr, 3);

//setting env list
clo9605[1] = cons;
clo9605[2] = a89679268;
clo9605[3] = kont9088;
void* f90899271 = encode_clo(clo9605);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f90899271;
arg_buffer[3] = a89689270;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9449 = encode_clo(alloc_clo(lam9449_fptr, 0));

void* lam9451_fptr() // lam9451 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9452 = arg_buffer[1];
//reading env and args
void* a89679268 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9452))[6];
//not do dummy comment
void* kont9088 = (decode_clo(env9452))[5];
//not do dummy comment
void* append = (decode_clo(env9452))[4];
//not do dummy comment
void* lst2 = (decode_clo(env9452))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9452))[2];
//not do dummy comment
void* cons = (decode_clo(env9452))[1];

//creating new closure instance
void** clo9607 = alloc_clo(lam9449_fptr, 5);

//setting env list
clo9607[1] = cons;
clo9607[2] = lst2;
clo9607[3] = a89679268;
clo9607[4] = append;
clo9607[5] = kont9088;
void* f90909269 = encode_clo(clo9607);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f90909269;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9451 = encode_clo(alloc_clo(lam9451_fptr, 0));

void* lam9453_fptr() // lam9453 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9454 = arg_buffer[1];
//reading env and args
void* a89669266 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env9454))[7];
//not do dummy comment
void* kont9088 = (decode_clo(env9454))[6];
//not do dummy comment
void* append = (decode_clo(env9454))[5];
//not do dummy comment
void* lst2 = (decode_clo(env9454))[4];
//not do dummy comment
void* cons = (decode_clo(env9454))[3];
//not do dummy comment
void* lst1 = (decode_clo(env9454))[2];
//not do dummy comment
void* car = (decode_clo(env9454))[1];

//if-clause
bool if_guard9608 = is_true(a89669266);
if(if_guard9608)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9088);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9088))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9610 = alloc_clo(lam9451_fptr, 6);

//setting env list
clo9610[1] = cons;
clo9610[2] = lst1;
clo9610[3] = lst2;
clo9610[4] = append;
clo9610[5] = kont9088;
clo9610[6] = cdr;
void* f90919267 = encode_clo(clo9610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f90919267;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9453 = encode_clo(alloc_clo(lam9453_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9455 = arg_buffer[1];
//reading env and args
void* kont9088 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9612 = alloc_clo(lam9453_fptr, 7);

//setting env list
clo9612[1] = car;
clo9612[2] = lst1;
clo9612[3] = cons;
clo9612[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo9612[5] = append;
clo9612[6] = kont9088;
clo9612[7] = cdr;
void* f90929265 = encode_clo(clo9612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f90929265;
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
void* _9456 = arg_buffer[1];
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

void* kont90939273 = prim_car(lst);
void* lst9274 = prim_cdr(lst);
void* x89709275 = apply_prim_hash(lst9274);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90939273);
arg_buffer[2] = x89709275;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90939273))[0]);
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
void* _9457 = arg_buffer[1];
//reading env and args
void* kont9095 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x89719276 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9095);
arg_buffer[2] = x89719276;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9095))[0]);
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
void* _9458 = arg_buffer[1];
//reading env and args
void* kont9096 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x89729277 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9096);
arg_buffer[2] = x89729277;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9096))[0]);
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
void* _9459 = arg_buffer[1];
//reading env and args
void* kont9097 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x89739278 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9097);
arg_buffer[2] = x89739278;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9097))[0]);
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
void* _9460 = arg_buffer[1];
//reading env and args
void* kont9098 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x89749279 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9098);
arg_buffer[2] = x89749279;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9098))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* set_fptr() // set 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9461 = arg_buffer[1];
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

void* kont90999280 = prim_car(lst);
void* lst9281 = prim_cdr(lst);
void* x89759282 = apply_prim_set(lst9281);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont90999280);
arg_buffer[2] = x89759282;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont90999280))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set = encode_clo(alloc_clo(set_fptr, 0));

void* set_u45member_u63_fptr() // set-member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9462 = arg_buffer[1];
//reading env and args
void* kont9101 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x89769283 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9101);
arg_buffer[2] = x89769283;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9101))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void* set_u45add_fptr() // set-add 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9463 = arg_buffer[1];
//reading env and args
void* kont9102 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x89779284 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9102);
arg_buffer[2] = x89779284;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9102))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void* set_u45remove_fptr() // set-remove 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9464 = arg_buffer[1];
//reading env and args
void* kont9103 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x89789285 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9103);
arg_buffer[2] = x89789285;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9103))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void* set_u45count_fptr() // set-count 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9465 = arg_buffer[1];
//reading env and args
void* kont9104 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x89799286 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9104);
arg_buffer[2] = x89799286;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9104))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void* string_u63_fptr() // string? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9466 = arg_buffer[1];
//reading env and args
void* kont9105 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x89809287 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9105);
arg_buffer[2] = x89809287;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9105))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void* string_u45length_fptr() // string-length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9467 = arg_buffer[1];
//reading env and args
void* kont9106 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x89819288 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9106);
arg_buffer[2] = x89819288;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9106))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void* string_u45ref_fptr() // string-ref 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9468 = arg_buffer[1];
//reading env and args
void* kont9107 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x89829289 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9107);
arg_buffer[2] = x89829289;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9107))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void* substring_fptr() // substring 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9469 = arg_buffer[1];
//reading env and args
void* kont9108 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x89839290 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9108);
arg_buffer[2] = x89839290;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9108))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void* string_u45append_fptr() // string-append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9470 = arg_buffer[1];
//reading env and args
void* kont9109 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x89849291 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9109);
arg_buffer[2] = x89849291;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9109))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void* string_u45_u62list_fptr() // string->list 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9471 = arg_buffer[1];
//reading env and args
void* kont9110 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x89859292 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9110);
arg_buffer[2] = x89859292;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9110))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam9473_fptr() // lam9473 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9474 = arg_buffer[1];
//reading env and args
void* a89939304 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* helper = (decode_clo(env9474))[4];
//not do dummy comment
void* num = (decode_clo(env9474))[3];
//not do dummy comment
void* a89889297 = (decode_clo(env9474))[2];
//not do dummy comment
void* kont9111 = (decode_clo(env9474))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(helper);
arg_buffer[2] = kont9111;
arg_buffer[3] = a89889297;
arg_buffer[4] = a89939304;
arg_buffer[5] = num;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9473 = encode_clo(alloc_clo(lam9473_fptr, 0));

void* lam9475_fptr() // lam9475 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9476 = arg_buffer[1];
//reading env and args
void* a89919302 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env9476))[6];
//not do dummy comment
void* a89889297 = (decode_clo(env9476))[5];
//not do dummy comment
void* _u43 = (decode_clo(env9476))[4];
//not do dummy comment
void* kont9111 = (decode_clo(env9476))[3];
//not do dummy comment
void* count = (decode_clo(env9476))[2];
//not do dummy comment
void* helper = (decode_clo(env9476))[1];

//creating new closure instance
void** clo9614 = alloc_clo(lam9473_fptr, 4);

//setting env list
clo9614[1] = kont9111;
clo9614[2] = a89889297;
clo9614[3] = num;
clo9614[4] = helper;
void* f91129303 = encode_clo(clo9614);



//if-clause
bool if_guard9615 = is_true(a89919302);
if(if_guard9615)
{
mpz_t* mpzvar9616 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9616, "1", 10);
void* a89929305 = encode_mpz(mpzvar9616);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f91129303;
arg_buffer[3] = count;
arg_buffer[4] = a89929305;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f91129303);
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f91129303))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9475 = encode_clo(alloc_clo(lam9475_fptr, 0));

void* lam9478_fptr() // lam9478 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9479 = arg_buffer[1];
//reading env and args
void* a89899299 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env9479))[7];
//not do dummy comment
void* a89889297 = (decode_clo(env9479))[6];
//not do dummy comment
void* _u43 = (decode_clo(env9479))[5];
//not do dummy comment
void* kont9111 = (decode_clo(env9479))[4];
//not do dummy comment
void* _u61 = (decode_clo(env9479))[3];
//not do dummy comment
void* count = (decode_clo(env9479))[2];
//not do dummy comment
void* helper = (decode_clo(env9479))[1];
mpz_t* mpzvar9617 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9617, "0", 10);
void* a89909300 = encode_mpz(mpzvar9617);

//creating new closure instance
void** clo9619 = alloc_clo(lam9475_fptr, 6);

//setting env list
clo9619[1] = helper;
clo9619[2] = count;
clo9619[3] = kont9111;
clo9619[4] = _u43;
clo9619[5] = a89889297;
clo9619[6] = num;
void* f91139301 = encode_clo(clo9619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f91139301;
arg_buffer[3] = a89899299;
arg_buffer[4] = a89909300;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9478 = encode_clo(alloc_clo(lam9478_fptr, 0));

void* lam9480_fptr() // lam9480 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9481 = arg_buffer[1];
//reading env and args
void* a89889297 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env9481))[8];
//not do dummy comment
void* _u43 = (decode_clo(env9481))[7];
//not do dummy comment
void* i = (decode_clo(env9481))[6];
//not do dummy comment
void* kont9111 = (decode_clo(env9481))[5];
//not do dummy comment
void* _u61 = (decode_clo(env9481))[4];
//not do dummy comment
void* modulo = (decode_clo(env9481))[3];
//not do dummy comment
void* count = (decode_clo(env9481))[2];
//not do dummy comment
void* helper = (decode_clo(env9481))[1];

//creating new closure instance
void** clo9621 = alloc_clo(lam9478_fptr, 7);

//setting env list
clo9621[1] = helper;
clo9621[2] = count;
clo9621[3] = _u61;
clo9621[4] = kont9111;
clo9621[5] = _u43;
clo9621[6] = a89889297;
clo9621[7] = num;
void* f91149298 = encode_clo(clo9621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f91149298;
arg_buffer[3] = num;
arg_buffer[4] = i;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam9480 = encode_clo(alloc_clo(lam9480_fptr, 0));

void* lam9483_fptr() // lam9483 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env9484 = arg_buffer[1];
//reading env and args
void* a89869294 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env9484))[8];
//not do dummy comment
void* _u43 = (decode_clo(env9484))[7];
//not do dummy comment
void* i = (decode_clo(env9484))[6];
//not do dummy comment
void* kont9111 = (decode_clo(env9484))[5];
//not do dummy comment
void* _u61 = (decode_clo(env9484))[4];
//not do dummy comment
void* modulo = (decode_clo(env9484))[3];
//not do dummy comment
void* count = (decode_clo(env9484))[2];
//not do dummy comment
void* helper = (decode_clo(env9484))[1];

//if-clause
bool if_guard9622 = is_true(a89869294);
if(if_guard9622)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9111);
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9111))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar9623 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9623, "1", 10);
void* a89879295 = encode_mpz(mpzvar9623);

//creating new closure instance
void** clo9625 = alloc_clo(lam9480_fptr, 8);

//setting env list
clo9625[1] = helper;
clo9625[2] = count;
clo9625[3] = modulo;
clo9625[4] = _u61;
clo9625[5] = kont9111;
clo9625[6] = i;
clo9625[7] = _u43;
clo9625[8] = num;
void* f91159296 = encode_clo(clo9625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f91159296;
arg_buffer[3] = i;
arg_buffer[4] = a89879295;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam9483 = encode_clo(alloc_clo(lam9483_fptr, 0));

void* helper_fptr() // helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9485 = arg_buffer[1];
//reading env and args
void* kont9111 = arg_buffer[2];
void* i = arg_buffer[3];
void* count = arg_buffer[4];
void* num = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9627 = alloc_clo(lam9483_fptr, 8);

//setting env list
void* helper = encode_clo(alloc_clo(helper_fptr, 0));

clo9627[1] = helper;
clo9627[2] = count;
clo9627[3] = modulo;
clo9627[4] = _u61;
clo9627[5] = kont9111;
clo9627[6] = i;
clo9627[7] = _u43;
clo9627[8] = num;
void* f91169293 = encode_clo(clo9627);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = f91169293;
arg_buffer[3] = i;
arg_buffer[4] = num;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* helper = encode_clo(alloc_clo(helper_fptr, 0));

void* count_u45divisors_fptr() // count-divisors 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9488 = arg_buffer[1];
//reading env and args
void* kont9117 = arg_buffer[2];
void* num = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9628 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9628, "1", 10);
void* a89949306 = encode_mpz(mpzvar9628);
mpz_t* mpzvar9629 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9629, "0", 10);
void* a89959307 = encode_mpz(mpzvar9629);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(helper);
arg_buffer[2] = kont9117;
arg_buffer[3] = a89949306;
arg_buffer[4] = a89959307;
arg_buffer[5] = num;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* count_u45divisors = encode_clo(alloc_clo(count_u45divisors_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _9490 = arg_buffer[1];
//reading env and args
void* kont9118 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar9630 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9630, "10", 10);
void* a89969308 = encode_mpz(mpzvar9630);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(count_u45divisors);
arg_buffer[2] = kont9118;
arg_buffer[3] = a89969308;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(count_u45divisors))[0]);
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

