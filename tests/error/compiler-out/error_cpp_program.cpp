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
void* _12137 = arg_buffer[1];
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

void* kont1183711955 = prim_car(lst);
void* lst11956 = prim_cdr(lst);
void* x1173311957 = apply_prim__u43(lst11956);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1183711955);
arg_buffer[2] = x1173311957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1183711955))[0]);
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
void* _12138 = arg_buffer[1];
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

void* kont1183911958 = prim_car(lst);
void* lst11959 = prim_cdr(lst);
void* x1173411960 = apply_prim_max(lst11959);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1183911958);
arg_buffer[2] = x1173411960;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1183911958))[0]);
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
void* _12139 = arg_buffer[1];
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

void* kont1184111961 = prim_car(lst);
void* lst11962 = prim_cdr(lst);
void* x1173511963 = apply_prim__u45(lst11962);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1184111961);
arg_buffer[2] = x1173511963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1184111961))[0]);
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
void* _12140 = arg_buffer[1];
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

void* kont1184311964 = prim_car(lst);
void* lst11965 = prim_cdr(lst);
void* x1173611966 = apply_prim__u42(lst11965);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1184311964);
arg_buffer[2] = x1173611966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1184311964))[0]);
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
void* _12141 = arg_buffer[1];
//reading env and args
void* kont11845 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1173711967 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11845);
arg_buffer[2] = x1173711967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11845))[0]);
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
void* _12142 = arg_buffer[1];
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

void* kont1184611968 = prim_car(lst);
void* lst11969 = prim_cdr(lst);
void* x1173811970 = apply_prim__u47(lst11969);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1184611968);
arg_buffer[2] = x1173811970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1184611968))[0]);
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
void* _12143 = arg_buffer[1];
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

void* kont1184811971 = prim_car(lst);
void* lst11972 = prim_cdr(lst);
void* x1173911973 = apply_prim__u61(lst11972);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1184811971);
arg_buffer[2] = x1173911973;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1184811971))[0]);
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
void* _12144 = arg_buffer[1];
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

void* kont1185011974 = prim_car(lst);
void* lst11975 = prim_cdr(lst);
void* x1174011976 = apply_prim__u62(lst11975);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1185011974);
arg_buffer[2] = x1174011976;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1185011974))[0]);
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
void* _12145 = arg_buffer[1];
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

void* kont1185211977 = prim_car(lst);
void* lst11978 = prim_cdr(lst);
void* x1174111979 = apply_prim__u60(lst11978);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1185211977);
arg_buffer[2] = x1174111979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1185211977))[0]);
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
void* _12146 = arg_buffer[1];
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

void* kont1185411980 = prim_car(lst);
void* lst11981 = prim_cdr(lst);
void* x1174211982 = apply_prim__u60_u61(lst11981);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1185411980);
arg_buffer[2] = x1174211982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1185411980))[0]);
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
void* _12147 = arg_buffer[1];
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

void* kont1185611983 = prim_car(lst);
void* lst11984 = prim_cdr(lst);
void* x1174311985 = apply_prim__u62_u61(lst11984);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1185611983);
arg_buffer[2] = x1174311985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1185611983))[0]);
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
void* _12148 = arg_buffer[1];
//reading env and args
void* kont11858 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1174411986 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11858);
arg_buffer[2] = x1174411986;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11858))[0]);
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
void* _12149 = arg_buffer[1];
//reading env and args
void* kont11859 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1174511987 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11859);
arg_buffer[2] = x1174511987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11859))[0]);
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
void* _12150 = arg_buffer[1];
//reading env and args
void* kont11860 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x1174611988 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11860);
arg_buffer[2] = x1174611988;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11860))[0]);
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
void* _12151 = arg_buffer[1];
//reading env and args
void* kont11861 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x1174711989 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11861);
arg_buffer[2] = x1174711989;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11861))[0]);
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
void* _12152 = arg_buffer[1];
//reading env and args
void* kont11862 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1174811990 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11862);
arg_buffer[2] = x1174811990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11862))[0]);
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
void* _12153 = arg_buffer[1];
//reading env and args
void* kont11863 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x1174911991 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11863);
arg_buffer[2] = x1174911991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11863))[0]);
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
void* _12154 = arg_buffer[1];
//reading env and args
void* kont11864 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x1175011992 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11864);
arg_buffer[2] = x1175011992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11864))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam12155_fptr() // lam12155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12156 = arg_buffer[1];
//reading env and args
void* a1175311996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env12156))[3];
//not do dummy comment
void* a1175111993 = (decode_clo(env12156))[2];
//not do dummy comment
void* kont11865 = (decode_clo(env12156))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont11865;
arg_buffer[3] = a1175111993;
arg_buffer[4] = a1175311996;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12155 = encode_clo(alloc_clo(lam12155_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12159 = arg_buffer[1];
//reading env and args
void* kont11865 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12310 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12310, "0", 10);
void* a1175111993 = encode_mpz(mpzvar12310);
mpz_t* mpzvar12311 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12311, "2", 10);
void* a1175211994 = encode_mpz(mpzvar12311);

//creating new closure instance
void** clo12313 = alloc_clo(lam12155_fptr, 3);

//setting env list
clo12313[1] = kont11865;
clo12313[2] = a1175111993;
clo12313[3] = equal_u63;
void* f1186611995 = encode_clo(clo12313);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1186611995;
arg_buffer[3] = x;
arg_buffer[4] = a1175211994;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam12160_fptr() // lam12160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12161 = arg_buffer[1];
//reading env and args
void* a1175612000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11867 = (decode_clo(env12161))[3];
//not do dummy comment
void* a1175411997 = (decode_clo(env12161))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env12161))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont11867;
arg_buffer[3] = a1175411997;
arg_buffer[4] = a1175612000;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12160 = encode_clo(alloc_clo(lam12160_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12164 = arg_buffer[1];
//reading env and args
void* kont11867 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar12314 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12314, "1", 10);
void* a1175411997 = encode_mpz(mpzvar12314);
mpz_t* mpzvar12315 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12315, "2", 10);
void* a1175511998 = encode_mpz(mpzvar12315);

//creating new closure instance
void** clo12317 = alloc_clo(lam12160_fptr, 3);

//setting env list
clo12317[1] = equal_u63;
clo12317[2] = a1175411997;
clo12317[3] = kont11867;
void* f1186811999 = encode_clo(clo12317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f1186811999;
arg_buffer[3] = x;
arg_buffer[4] = a1175511998;
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
void* _12165 = arg_buffer[1];
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

void* kont1186912001 = prim_car(x);
void* x12002 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1186912001);
arg_buffer[2] = x12002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1186912001))[0]);
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
void* _12166 = arg_buffer[1];
//reading env and args
void* kont11871 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1175712003 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11871);
arg_buffer[2] = x1175712003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11871))[0]);
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
void* _12167 = arg_buffer[1];
//reading env and args
void* kont11872 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x1175812004 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11872);
arg_buffer[2] = x1175812004;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11872))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam12170_fptr() // lam12170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12171 = arg_buffer[1];
//reading env and args
void* a1176412014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11873 = (decode_clo(env12171))[3];
//not do dummy comment
void* x = (decode_clo(env12171))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12171))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont11873;
arg_buffer[3] = x;
arg_buffer[4] = a1176412014;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12170 = encode_clo(alloc_clo(lam12170_fptr, 0));

void* lam12172_fptr() // lam12172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12173 = arg_buffer[1];
//reading env and args
void* a1176212011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12173))[5];
//not do dummy comment
void* lst = (decode_clo(env12173))[4];
//not do dummy comment
void* kont11873 = (decode_clo(env12173))[3];
//not do dummy comment
void* x = (decode_clo(env12173))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12173))[1];

//if-clause
bool if_guard12318 = is_true(a1176212011);
if(if_guard12318)
{
void* x1176312012 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11873);
arg_buffer[2] = x1176312012;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11873))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12320 = alloc_clo(lam12170_fptr, 3);

//setting env list
clo12320[1] = member_u63;
clo12320[2] = x;
clo12320[3] = kont11873;
void* f1187412013 = encode_clo(clo12320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1187412013;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12172 = encode_clo(alloc_clo(lam12172_fptr, 0));

void* lam12174_fptr() // lam12174 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12175 = arg_buffer[1];
//reading env and args
void* a1176112009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12175))[6];
//not do dummy comment
void* lst = (decode_clo(env12175))[5];
//not do dummy comment
void* kont11873 = (decode_clo(env12175))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env12175))[3];
//not do dummy comment
void* x = (decode_clo(env12175))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12175))[1];

//creating new closure instance
void** clo12322 = alloc_clo(lam12172_fptr, 5);

//setting env list
clo12322[1] = member_u63;
clo12322[2] = x;
clo12322[3] = kont11873;
clo12322[4] = lst;
clo12322[5] = cdr;
void* f1187512010 = encode_clo(clo12322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1187512010;
arg_buffer[3] = a1176112009;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12174 = encode_clo(alloc_clo(lam12174_fptr, 0));

void* lam12176_fptr() // lam12176 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12177 = arg_buffer[1];
//reading env and args
void* a1175912006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12177))[7];
//not do dummy comment
void* lst = (decode_clo(env12177))[6];
//not do dummy comment
void* kont11873 = (decode_clo(env12177))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env12177))[4];
//not do dummy comment
void* x = (decode_clo(env12177))[3];
//not do dummy comment
void* car = (decode_clo(env12177))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env12177))[1];

//if-clause
bool if_guard12323 = is_true(a1175912006);
if(if_guard12323)
{
void* x1176012007 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11873);
arg_buffer[2] = x1176012007;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11873))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12325 = alloc_clo(lam12174_fptr, 6);

//setting env list
clo12325[1] = member_u63;
clo12325[2] = x;
clo12325[3] = equal_u63;
clo12325[4] = kont11873;
clo12325[5] = lst;
clo12325[6] = cdr;
void* f1187612008 = encode_clo(clo12325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1187612008;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12176 = encode_clo(alloc_clo(lam12176_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12178 = arg_buffer[1];
//reading env and args
void* kont11873 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12327 = alloc_clo(lam12176_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo12327[1] = member_u63;
clo12327[2] = car;
clo12327[3] = x;
clo12327[4] = equal_u63;
clo12327[5] = kont11873;
clo12327[6] = lst;
clo12327[7] = cdr;
void* f1187712005 = encode_clo(clo12327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1187712005;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam12179_fptr() // lam12179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12180 = arg_buffer[1];
//reading env and args
void* a1176812022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1176712020 = (decode_clo(env12180))[4];
//not do dummy comment
void* fun = (decode_clo(env12180))[3];
//not do dummy comment
void* kont11878 = (decode_clo(env12180))[2];
//not do dummy comment
void* foldl = (decode_clo(env12180))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont11878;
arg_buffer[3] = fun;
arg_buffer[4] = a1176712020;
arg_buffer[5] = a1176812022;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12179 = encode_clo(alloc_clo(lam12179_fptr, 0));

void* lam12181_fptr() // lam12181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12182 = arg_buffer[1];
//reading env and args
void* a1176712020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12182))[5];
//not do dummy comment
void* lst = (decode_clo(env12182))[4];
//not do dummy comment
void* fun = (decode_clo(env12182))[3];
//not do dummy comment
void* kont11878 = (decode_clo(env12182))[2];
//not do dummy comment
void* foldl = (decode_clo(env12182))[1];

//creating new closure instance
void** clo12329 = alloc_clo(lam12179_fptr, 4);

//setting env list
clo12329[1] = foldl;
clo12329[2] = kont11878;
clo12329[3] = fun;
clo12329[4] = a1176712020;
void* f1187912021 = encode_clo(clo12329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1187912021;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12181 = encode_clo(alloc_clo(lam12181_fptr, 0));

void* lam12183_fptr() // lam12183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12184 = arg_buffer[1];
//reading env and args
void* a1176612018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12184))[6];
//not do dummy comment
void* lst = (decode_clo(env12184))[5];
//not do dummy comment
void* fun = (decode_clo(env12184))[4];
//not do dummy comment
void* foldl = (decode_clo(env12184))[3];
//not do dummy comment
void* acc = (decode_clo(env12184))[2];
//not do dummy comment
void* kont11878 = (decode_clo(env12184))[1];

//creating new closure instance
void** clo12331 = alloc_clo(lam12181_fptr, 5);

//setting env list
clo12331[1] = foldl;
clo12331[2] = kont11878;
clo12331[3] = fun;
clo12331[4] = lst;
clo12331[5] = cdr;
void* f1188012019 = encode_clo(clo12331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f1188012019;
arg_buffer[3] = a1176612018;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12183 = encode_clo(alloc_clo(lam12183_fptr, 0));

void* lam12185_fptr() // lam12185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12186 = arg_buffer[1];
//reading env and args
void* a1176512016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12186))[7];
//not do dummy comment
void* lst = (decode_clo(env12186))[6];
//not do dummy comment
void* fun = (decode_clo(env12186))[5];
//not do dummy comment
void* car = (decode_clo(env12186))[4];
//not do dummy comment
void* foldl = (decode_clo(env12186))[3];
//not do dummy comment
void* acc = (decode_clo(env12186))[2];
//not do dummy comment
void* kont11878 = (decode_clo(env12186))[1];

//if-clause
bool if_guard12332 = is_true(a1176512016);
if(if_guard12332)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11878);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11878))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12334 = alloc_clo(lam12183_fptr, 6);

//setting env list
clo12334[1] = kont11878;
clo12334[2] = acc;
clo12334[3] = foldl;
clo12334[4] = fun;
clo12334[5] = lst;
clo12334[6] = cdr;
void* f1188112017 = encode_clo(clo12334);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1188112017;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12185 = encode_clo(alloc_clo(lam12185_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12187 = arg_buffer[1];
//reading env and args
void* kont11878 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo12336 = alloc_clo(lam12185_fptr, 7);

//setting env list
clo12336[1] = kont11878;
clo12336[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo12336[3] = foldl;
clo12336[4] = car;
clo12336[5] = fun;
clo12336[6] = lst;
clo12336[7] = cdr;
void* f1188212015 = encode_clo(clo12336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1188212015;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam12188_fptr() // lam12188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12189 = arg_buffer[1];
//reading env and args
void* a1177212030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11883 = (decode_clo(env12189))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12189))[2];
//not do dummy comment
void* a1177012026 = (decode_clo(env12189))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont11883;
arg_buffer[3] = a1177012026;
arg_buffer[4] = a1177212030;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12188 = encode_clo(alloc_clo(lam12188_fptr, 0));

void* lam12190_fptr() // lam12190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12191 = arg_buffer[1];
//reading env and args
void* a1177112028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11883 = (decode_clo(env12191))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12191))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12191))[3];
//not do dummy comment
void* cons = (decode_clo(env12191))[2];
//not do dummy comment
void* a1177012026 = (decode_clo(env12191))[1];

//creating new closure instance
void** clo12338 = alloc_clo(lam12188_fptr, 3);

//setting env list
clo12338[1] = a1177012026;
clo12338[2] = reverse_u45helper;
clo12338[3] = kont11883;
void* f1188412029 = encode_clo(clo12338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1188412029;
arg_buffer[3] = a1177112028;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12190 = encode_clo(alloc_clo(lam12190_fptr, 0));

void* lam12192_fptr() // lam12192 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12193 = arg_buffer[1];
//reading env and args
void* a1177012026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11883 = (decode_clo(env12193))[6];
//not do dummy comment
void* lst = (decode_clo(env12193))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12193))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12193))[3];
//not do dummy comment
void* car = (decode_clo(env12193))[2];
//not do dummy comment
void* cons = (decode_clo(env12193))[1];

//creating new closure instance
void** clo12340 = alloc_clo(lam12190_fptr, 5);

//setting env list
clo12340[1] = a1177012026;
clo12340[2] = cons;
clo12340[3] = lst2;
clo12340[4] = reverse_u45helper;
clo12340[5] = kont11883;
void* f1188512027 = encode_clo(clo12340);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1188512027;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12192 = encode_clo(alloc_clo(lam12192_fptr, 0));

void* lam12194_fptr() // lam12194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12195 = arg_buffer[1];
//reading env and args
void* a1176912024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12195))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12195))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12195))[5];
//not do dummy comment
void* car = (decode_clo(env12195))[4];
//not do dummy comment
void* cons = (decode_clo(env12195))[3];
//not do dummy comment
void* kont11883 = (decode_clo(env12195))[2];
//not do dummy comment
void* cdr = (decode_clo(env12195))[1];

//if-clause
bool if_guard12341 = is_true(a1176912024);
if(if_guard12341)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11883);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12343 = alloc_clo(lam12192_fptr, 6);

//setting env list
clo12343[1] = cons;
clo12343[2] = car;
clo12343[3] = lst2;
clo12343[4] = reverse_u45helper;
clo12343[5] = lst;
clo12343[6] = kont11883;
void* f1188612025 = encode_clo(clo12343);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1188612025;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12194 = encode_clo(alloc_clo(lam12194_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12196 = arg_buffer[1];
//reading env and args
void* kont11883 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12345 = alloc_clo(lam12194_fptr, 7);

//setting env list
clo12345[1] = cdr;
clo12345[2] = kont11883;
clo12345[3] = cons;
clo12345[4] = car;
clo12345[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo12345[6] = reverse_u45helper;
clo12345[7] = lst;
void* f1188712023 = encode_clo(clo12345);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1188712023;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam12197_fptr() // lam12197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12198 = arg_buffer[1];
//reading env and args
void* a1177312032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12198))[3];
//not do dummy comment
void* kont11888 = (decode_clo(env12198))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env12198))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont11888;
arg_buffer[3] = lst;
arg_buffer[4] = a1177312032;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12197 = encode_clo(alloc_clo(lam12197_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12199 = arg_buffer[1];
//reading env and args
void* kont11888 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo12347 = alloc_clo(lam12197_fptr, 3);

//setting env list
clo12347[1] = reverse_u45helper;
clo12347[2] = kont11888;
clo12347[3] = lst;
void* f1188912031 = encode_clo(clo12347);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1188912031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam12200_fptr() // lam12200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12201 = arg_buffer[1];
//reading env and args
void* x1177612037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11890 = (decode_clo(env12201))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11890);
arg_buffer[2] = x1177612037;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11890))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12200 = encode_clo(alloc_clo(lam12200_fptr, 0));

void* lam12202_fptr() // lam12202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12203 = arg_buffer[1];
//reading env and args
void* a1178112046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11890 = (decode_clo(env12203))[4];
//not do dummy comment
void* a1177912042 = (decode_clo(env12203))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env12203))[2];
//not do dummy comment
void* a1177712039 = (decode_clo(env12203))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont11890;
arg_buffer[3] = a1177712039;
arg_buffer[4] = a1177912042;
arg_buffer[5] = a1178112046;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12202 = encode_clo(alloc_clo(lam12202_fptr, 0));

void* lam12204_fptr() // lam12204 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12205 = arg_buffer[1];
//reading env and args
void* a1178012044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11890 = (decode_clo(env12205))[6];
//not do dummy comment
void* cons = (decode_clo(env12205))[5];
//not do dummy comment
void* a1177912042 = (decode_clo(env12205))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env12205))[3];
//not do dummy comment
void* a1177712039 = (decode_clo(env12205))[2];
//not do dummy comment
void* lst2 = (decode_clo(env12205))[1];

//creating new closure instance
void** clo12349 = alloc_clo(lam12202_fptr, 4);

//setting env list
clo12349[1] = a1177712039;
clo12349[2] = take_u45helper;
clo12349[3] = a1177912042;
clo12349[4] = kont11890;
void* f1189212045 = encode_clo(clo12349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f1189212045;
arg_buffer[3] = a1178012044;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12204 = encode_clo(alloc_clo(lam12204_fptr, 0));

void* lam12206_fptr() // lam12206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12207 = arg_buffer[1];
//reading env and args
void* a1177912042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12207))[7];
//not do dummy comment
void* kont11890 = (decode_clo(env12207))[6];
//not do dummy comment
void* car = (decode_clo(env12207))[5];
//not do dummy comment
void* cons = (decode_clo(env12207))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env12207))[3];
//not do dummy comment
void* a1177712039 = (decode_clo(env12207))[2];
//not do dummy comment
void* lst2 = (decode_clo(env12207))[1];

//creating new closure instance
void** clo12351 = alloc_clo(lam12204_fptr, 6);

//setting env list
clo12351[1] = lst2;
clo12351[2] = a1177712039;
clo12351[3] = take_u45helper;
clo12351[4] = a1177912042;
clo12351[5] = cons;
clo12351[6] = kont11890;
void* f1189312043 = encode_clo(clo12351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1189312043;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12206 = encode_clo(alloc_clo(lam12206_fptr, 0));

void* lam12209_fptr() // lam12209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12210 = arg_buffer[1];
//reading env and args
void* a1177712039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12210))[8];
//not do dummy comment
void* kont11890 = (decode_clo(env12210))[7];
//not do dummy comment
void* cons = (decode_clo(env12210))[6];
//not do dummy comment
void* _u45 = (decode_clo(env12210))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12210))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12210))[3];
//not do dummy comment
void* n = (decode_clo(env12210))[2];
//not do dummy comment
void* car = (decode_clo(env12210))[1];
mpz_t* mpzvar12352 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12352, "1", 10);
void* a1177812040 = encode_mpz(mpzvar12352);

//creating new closure instance
void** clo12354 = alloc_clo(lam12206_fptr, 7);

//setting env list
clo12354[1] = lst2;
clo12354[2] = a1177712039;
clo12354[3] = take_u45helper;
clo12354[4] = cons;
clo12354[5] = car;
clo12354[6] = kont11890;
clo12354[7] = lst;
void* f1189412041 = encode_clo(clo12354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1189412041;
arg_buffer[3] = n;
arg_buffer[4] = a1177812040;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12209 = encode_clo(alloc_clo(lam12209_fptr, 0));

void* lam12211_fptr() // lam12211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12212 = arg_buffer[1];
//reading env and args
void* a1177512035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12212))[10];
//not do dummy comment
void* lst = (decode_clo(env12212))[9];
//not do dummy comment
void* cons = (decode_clo(env12212))[8];
//not do dummy comment
void* _u45 = (decode_clo(env12212))[7];
//not do dummy comment
void* kont11890 = (decode_clo(env12212))[6];
//not do dummy comment
void* reverse = (decode_clo(env12212))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env12212))[4];
//not do dummy comment
void* lst2 = (decode_clo(env12212))[3];
//not do dummy comment
void* n = (decode_clo(env12212))[2];
//not do dummy comment
void* car = (decode_clo(env12212))[1];

//if-clause
bool if_guard12355 = is_true(a1177512035);
if(if_guard12355)
{

//creating new closure instance
void** clo12357 = alloc_clo(lam12200_fptr, 1);

//setting env list
clo12357[1] = kont11890;
void* f1189112036 = encode_clo(clo12357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f1189112036;
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
void** clo12359 = alloc_clo(lam12209_fptr, 8);

//setting env list
clo12359[1] = car;
clo12359[2] = n;
clo12359[3] = lst2;
clo12359[4] = take_u45helper;
clo12359[5] = _u45;
clo12359[6] = cons;
clo12359[7] = kont11890;
clo12359[8] = lst;
void* f1189512038 = encode_clo(clo12359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1189512038;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12211 = encode_clo(alloc_clo(lam12211_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12214 = arg_buffer[1];
//reading env and args
void* kont11890 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar12360 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12360, "0", 10);
void* a1177412033 = encode_mpz(mpzvar12360);

//creating new closure instance
void** clo12362 = alloc_clo(lam12211_fptr, 10);

//setting env list
clo12362[1] = car;
clo12362[2] = n;
clo12362[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo12362[4] = take_u45helper;
clo12362[5] = reverse;
clo12362[6] = kont11890;
clo12362[7] = _u45;
clo12362[8] = cons;
clo12362[9] = lst;
clo12362[10] = cdr;
void* f1189612034 = encode_clo(clo12362);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1189612034;
arg_buffer[3] = n;
arg_buffer[4] = a1177412033;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam12215_fptr() // lam12215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12216 = arg_buffer[1];
//reading env and args
void* a1178212048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12216))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env12216))[3];
//not do dummy comment
void* n = (decode_clo(env12216))[2];
//not do dummy comment
void* kont11897 = (decode_clo(env12216))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont11897;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a1178212048;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12215 = encode_clo(alloc_clo(lam12215_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12217 = arg_buffer[1];
//reading env and args
void* kont11897 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12364 = alloc_clo(lam12215_fptr, 4);

//setting env list
clo12364[1] = kont11897;
clo12364[2] = n;
clo12364[3] = take_u45helper;
clo12364[4] = lst;
void* f1189812047 = encode_clo(clo12364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1189812047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam12219_fptr() // lam12219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12220 = arg_buffer[1];
//reading env and args
void* a1178712056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11899 = (decode_clo(env12220))[3];
//not do dummy comment
void* a1178512052 = (decode_clo(env12220))[2];
//not do dummy comment
void* _u43 = (decode_clo(env12220))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont11899;
arg_buffer[3] = a1178512052;
arg_buffer[4] = a1178712056;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12219 = encode_clo(alloc_clo(lam12219_fptr, 0));

void* lam12221_fptr() // lam12221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12222 = arg_buffer[1];
//reading env and args
void* a1178612054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11899 = (decode_clo(env12222))[4];
//not do dummy comment
void* length = (decode_clo(env12222))[3];
//not do dummy comment
void* a1178512052 = (decode_clo(env12222))[2];
//not do dummy comment
void* _u43 = (decode_clo(env12222))[1];

//creating new closure instance
void** clo12366 = alloc_clo(lam12219_fptr, 3);

//setting env list
clo12366[1] = _u43;
clo12366[2] = a1178512052;
clo12366[3] = kont11899;
void* f1190012055 = encode_clo(clo12366);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f1190012055;
arg_buffer[3] = a1178612054;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12221 = encode_clo(alloc_clo(lam12221_fptr, 0));

void* lam12224_fptr() // lam12224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12225 = arg_buffer[1];
//reading env and args
void* a1178312050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12225))[5];
//not do dummy comment
void* length = (decode_clo(env12225))[4];
//not do dummy comment
void* _u43 = (decode_clo(env12225))[3];
//not do dummy comment
void* kont11899 = (decode_clo(env12225))[2];
//not do dummy comment
void* cdr = (decode_clo(env12225))[1];

//if-clause
bool if_guard12367 = is_true(a1178312050);
if(if_guard12367)
{
mpz_t* mpzvar12368 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12368, "0", 10);
void* x1178412051 = encode_mpz(mpzvar12368);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11899);
arg_buffer[2] = x1178412051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11899))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar12369 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12369, "1", 10);
void* a1178512052 = encode_mpz(mpzvar12369);

//creating new closure instance
void** clo12371 = alloc_clo(lam12221_fptr, 4);

//setting env list
clo12371[1] = _u43;
clo12371[2] = a1178512052;
clo12371[3] = length;
clo12371[4] = kont11899;
void* f1190112053 = encode_clo(clo12371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1190112053;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12224 = encode_clo(alloc_clo(lam12224_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12226 = arg_buffer[1];
//reading env and args
void* kont11899 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo12373 = alloc_clo(lam12224_fptr, 5);

//setting env list
clo12373[1] = cdr;
clo12373[2] = kont11899;
clo12373[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo12373[4] = length;
clo12373[5] = lst;
void* f1190212049 = encode_clo(clo12373);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1190212049;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam12227_fptr() // lam12227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12228 = arg_buffer[1];
//reading env and args
void* x1178912060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11903 = (decode_clo(env12228))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11903);
arg_buffer[2] = x1178912060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11903))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12227 = encode_clo(alloc_clo(lam12227_fptr, 0));

void* lam12229_fptr() // lam12229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12230 = arg_buffer[1];
//reading env and args
void* a1179312068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11903 = (decode_clo(env12230))[3];
//not do dummy comment
void* a1179112064 = (decode_clo(env12230))[2];
//not do dummy comment
void* cons = (decode_clo(env12230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont11903;
arg_buffer[3] = a1179112064;
arg_buffer[4] = a1179312068;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12229 = encode_clo(alloc_clo(lam12229_fptr, 0));

void* lam12231_fptr() // lam12231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12232 = arg_buffer[1];
//reading env and args
void* a1179212066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11903 = (decode_clo(env12232))[5];
//not do dummy comment
void* proc = (decode_clo(env12232))[4];
//not do dummy comment
void* cons = (decode_clo(env12232))[3];
//not do dummy comment
void* map = (decode_clo(env12232))[2];
//not do dummy comment
void* a1179112064 = (decode_clo(env12232))[1];

//creating new closure instance
void** clo12375 = alloc_clo(lam12229_fptr, 3);

//setting env list
clo12375[1] = cons;
clo12375[2] = a1179112064;
clo12375[3] = kont11903;
void* f1190512067 = encode_clo(clo12375);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f1190512067;
arg_buffer[3] = proc;
arg_buffer[4] = a1179212066;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12231 = encode_clo(alloc_clo(lam12231_fptr, 0));

void* lam12233_fptr() // lam12233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12234 = arg_buffer[1];
//reading env and args
void* a1179112064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12234))[6];
//not do dummy comment
void* map = (decode_clo(env12234))[5];
//not do dummy comment
void* proc = (decode_clo(env12234))[4];
//not do dummy comment
void* cons = (decode_clo(env12234))[3];
//not do dummy comment
void* lst = (decode_clo(env12234))[2];
//not do dummy comment
void* kont11903 = (decode_clo(env12234))[1];

//creating new closure instance
void** clo12377 = alloc_clo(lam12231_fptr, 5);

//setting env list
clo12377[1] = a1179112064;
clo12377[2] = map;
clo12377[3] = cons;
clo12377[4] = proc;
clo12377[5] = kont11903;
void* f1190612065 = encode_clo(clo12377);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1190612065;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12233 = encode_clo(alloc_clo(lam12233_fptr, 0));

void* lam12235_fptr() // lam12235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12236 = arg_buffer[1];
//reading env and args
void* a1179012062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12236))[6];
//not do dummy comment
void* map = (decode_clo(env12236))[5];
//not do dummy comment
void* proc = (decode_clo(env12236))[4];
//not do dummy comment
void* cons = (decode_clo(env12236))[3];
//not do dummy comment
void* lst = (decode_clo(env12236))[2];
//not do dummy comment
void* kont11903 = (decode_clo(env12236))[1];

//creating new closure instance
void** clo12379 = alloc_clo(lam12233_fptr, 6);

//setting env list
clo12379[1] = kont11903;
clo12379[2] = lst;
clo12379[3] = cons;
clo12379[4] = proc;
clo12379[5] = map;
clo12379[6] = cdr;
void* f1190712063 = encode_clo(clo12379);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f1190712063;
arg_buffer[3] = a1179012062;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12235 = encode_clo(alloc_clo(lam12235_fptr, 0));

void* lam12237_fptr() // lam12237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12238 = arg_buffer[1];
//reading env and args
void* a1178812058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env12238))[8];
//not do dummy comment
void* proc = (decode_clo(env12238))[7];
//not do dummy comment
void* car = (decode_clo(env12238))[6];
//not do dummy comment
void* cons = (decode_clo(env12238))[5];
//not do dummy comment
void* list = (decode_clo(env12238))[4];
//not do dummy comment
void* cdr = (decode_clo(env12238))[3];
//not do dummy comment
void* lst = (decode_clo(env12238))[2];
//not do dummy comment
void* kont11903 = (decode_clo(env12238))[1];

//if-clause
bool if_guard12380 = is_true(a1178812058);
if(if_guard12380)
{

//creating new closure instance
void** clo12382 = alloc_clo(lam12227_fptr, 1);

//setting env list
clo12382[1] = kont11903;
void* f1190412059 = encode_clo(clo12382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1190412059;
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
void** clo12384 = alloc_clo(lam12235_fptr, 6);

//setting env list
clo12384[1] = kont11903;
clo12384[2] = lst;
clo12384[3] = cons;
clo12384[4] = proc;
clo12384[5] = map;
clo12384[6] = cdr;
void* f1190812061 = encode_clo(clo12384);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1190812061;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12237 = encode_clo(alloc_clo(lam12237_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12239 = arg_buffer[1];
//reading env and args
void* kont11903 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12386 = alloc_clo(lam12237_fptr, 8);

//setting env list
clo12386[1] = kont11903;
clo12386[2] = lst;
clo12386[3] = cdr;
clo12386[4] = list;
clo12386[5] = cons;
clo12386[6] = car;
clo12386[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo12386[8] = map;
void* f1190912057 = encode_clo(clo12386);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1190912057;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam12240_fptr() // lam12240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12241 = arg_buffer[1];
//reading env and args
void* x1179512072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11910 = (decode_clo(env12241))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11910);
arg_buffer[2] = x1179512072;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11910))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12240 = encode_clo(alloc_clo(lam12240_fptr, 0));

void* lam12242_fptr() // lam12242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12243 = arg_buffer[1];
//reading env and args
void* a1180012082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1179812078 = (decode_clo(env12243))[3];
//not do dummy comment
void* kont11910 = (decode_clo(env12243))[2];
//not do dummy comment
void* cons = (decode_clo(env12243))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont11910;
arg_buffer[3] = a1179812078;
arg_buffer[4] = a1180012082;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12242 = encode_clo(alloc_clo(lam12242_fptr, 0));

void* lam12244_fptr() // lam12244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12245 = arg_buffer[1];
//reading env and args
void* a1179912080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1179812078 = (decode_clo(env12245))[5];
//not do dummy comment
void* op = (decode_clo(env12245))[4];
//not do dummy comment
void* kont11910 = (decode_clo(env12245))[3];
//not do dummy comment
void* filter = (decode_clo(env12245))[2];
//not do dummy comment
void* cons = (decode_clo(env12245))[1];

//creating new closure instance
void** clo12388 = alloc_clo(lam12242_fptr, 3);

//setting env list
clo12388[1] = cons;
clo12388[2] = kont11910;
clo12388[3] = a1179812078;
void* f1191212081 = encode_clo(clo12388);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f1191212081;
arg_buffer[3] = op;
arg_buffer[4] = a1179912080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12244 = encode_clo(alloc_clo(lam12244_fptr, 0));

void* lam12246_fptr() // lam12246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12247 = arg_buffer[1];
//reading env and args
void* a1179812078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12247))[6];
//not do dummy comment
void* lst = (decode_clo(env12247))[5];
//not do dummy comment
void* op = (decode_clo(env12247))[4];
//not do dummy comment
void* kont11910 = (decode_clo(env12247))[3];
//not do dummy comment
void* filter = (decode_clo(env12247))[2];
//not do dummy comment
void* cons = (decode_clo(env12247))[1];

//creating new closure instance
void** clo12390 = alloc_clo(lam12244_fptr, 5);

//setting env list
clo12390[1] = cons;
clo12390[2] = filter;
clo12390[3] = kont11910;
clo12390[4] = op;
clo12390[5] = a1179812078;
void* f1191312079 = encode_clo(clo12390);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1191312079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12246 = encode_clo(alloc_clo(lam12246_fptr, 0));

void* lam12248_fptr() // lam12248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12249 = arg_buffer[1];
//reading env and args
void* a1180112084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env12249))[3];
//not do dummy comment
void* kont11910 = (decode_clo(env12249))[2];
//not do dummy comment
void* filter = (decode_clo(env12249))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont11910;
arg_buffer[3] = op;
arg_buffer[4] = a1180112084;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12248 = encode_clo(alloc_clo(lam12248_fptr, 0));

void* lam12250_fptr() // lam12250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12251 = arg_buffer[1];
//reading env and args
void* a1179712076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12251))[7];
//not do dummy comment
void* lst = (decode_clo(env12251))[6];
//not do dummy comment
void* op = (decode_clo(env12251))[5];
//not do dummy comment
void* kont11910 = (decode_clo(env12251))[4];
//not do dummy comment
void* cons = (decode_clo(env12251))[3];
//not do dummy comment
void* filter = (decode_clo(env12251))[2];
//not do dummy comment
void* car = (decode_clo(env12251))[1];

//if-clause
bool if_guard12391 = is_true(a1179712076);
if(if_guard12391)
{

//creating new closure instance
void** clo12393 = alloc_clo(lam12246_fptr, 6);

//setting env list
clo12393[1] = cons;
clo12393[2] = filter;
clo12393[3] = kont11910;
clo12393[4] = op;
clo12393[5] = lst;
clo12393[6] = cdr;
void* f1191412077 = encode_clo(clo12393);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1191412077;
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
void** clo12395 = alloc_clo(lam12248_fptr, 3);

//setting env list
clo12395[1] = filter;
clo12395[2] = kont11910;
clo12395[3] = op;
void* f1191512083 = encode_clo(clo12395);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1191512083;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12250 = encode_clo(alloc_clo(lam12250_fptr, 0));

void* lam12252_fptr() // lam12252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12253 = arg_buffer[1];
//reading env and args
void* a1179612074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12253))[7];
//not do dummy comment
void* lst = (decode_clo(env12253))[6];
//not do dummy comment
void* op = (decode_clo(env12253))[5];
//not do dummy comment
void* kont11910 = (decode_clo(env12253))[4];
//not do dummy comment
void* cons = (decode_clo(env12253))[3];
//not do dummy comment
void* filter = (decode_clo(env12253))[2];
//not do dummy comment
void* car = (decode_clo(env12253))[1];

//creating new closure instance
void** clo12397 = alloc_clo(lam12250_fptr, 7);

//setting env list
clo12397[1] = car;
clo12397[2] = filter;
clo12397[3] = cons;
clo12397[4] = kont11910;
clo12397[5] = op;
clo12397[6] = lst;
clo12397[7] = cdr;
void* f1191612075 = encode_clo(clo12397);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f1191612075;
arg_buffer[3] = a1179612074;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12252 = encode_clo(alloc_clo(lam12252_fptr, 0));

void* lam12254_fptr() // lam12254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12255 = arg_buffer[1];
//reading env and args
void* a1179412070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env12255))[8];
//not do dummy comment
void* op = (decode_clo(env12255))[7];
//not do dummy comment
void* kont11910 = (decode_clo(env12255))[6];
//not do dummy comment
void* cons = (decode_clo(env12255))[5];
//not do dummy comment
void* list = (decode_clo(env12255))[4];
//not do dummy comment
void* cdr = (decode_clo(env12255))[3];
//not do dummy comment
void* filter = (decode_clo(env12255))[2];
//not do dummy comment
void* car = (decode_clo(env12255))[1];

//if-clause
bool if_guard12398 = is_true(a1179412070);
if(if_guard12398)
{

//creating new closure instance
void** clo12400 = alloc_clo(lam12240_fptr, 1);

//setting env list
clo12400[1] = kont11910;
void* f1191112071 = encode_clo(clo12400);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f1191112071;
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
void** clo12402 = alloc_clo(lam12252_fptr, 7);

//setting env list
clo12402[1] = car;
clo12402[2] = filter;
clo12402[3] = cons;
clo12402[4] = kont11910;
clo12402[5] = op;
clo12402[6] = lst;
clo12402[7] = cdr;
void* f1191712073 = encode_clo(clo12402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1191712073;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12254 = encode_clo(alloc_clo(lam12254_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12256 = arg_buffer[1];
//reading env and args
void* kont11910 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12404 = alloc_clo(lam12254_fptr, 8);

//setting env list
clo12404[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo12404[2] = filter;
clo12404[3] = cdr;
clo12404[4] = list;
clo12404[5] = cons;
clo12404[6] = kont11910;
clo12404[7] = op;
clo12404[8] = lst;
void* f1191812069 = encode_clo(clo12404);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1191812069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam12257_fptr() // lam12257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12258 = arg_buffer[1];
//reading env and args
void* a1180612092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1180412089 = (decode_clo(env12258))[3];
//not do dummy comment
void* kont11919 = (decode_clo(env12258))[2];
//not do dummy comment
void* drop = (decode_clo(env12258))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont11919;
arg_buffer[3] = a1180412089;
arg_buffer[4] = a1180612092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12257 = encode_clo(alloc_clo(lam12257_fptr, 0));

void* lam12260_fptr() // lam12260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12261 = arg_buffer[1];
//reading env and args
void* a1180412089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env12261))[4];
//not do dummy comment
void* _u45 = (decode_clo(env12261))[3];
//not do dummy comment
void* kont11919 = (decode_clo(env12261))[2];
//not do dummy comment
void* drop = (decode_clo(env12261))[1];
mpz_t* mpzvar12405 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12405, "1", 10);
void* a1180512090 = encode_mpz(mpzvar12405);

//creating new closure instance
void** clo12407 = alloc_clo(lam12257_fptr, 3);

//setting env list
clo12407[1] = drop;
clo12407[2] = kont11919;
clo12407[3] = a1180412089;
void* f1192012091 = encode_clo(clo12407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f1192012091;
arg_buffer[3] = n;
arg_buffer[4] = a1180512090;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12260 = encode_clo(alloc_clo(lam12260_fptr, 0));

void* lam12262_fptr() // lam12262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12263 = arg_buffer[1];
//reading env and args
void* a1180312087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12263))[6];
//not do dummy comment
void* n = (decode_clo(env12263))[5];
//not do dummy comment
void* _u45 = (decode_clo(env12263))[4];
//not do dummy comment
void* lst = (decode_clo(env12263))[3];
//not do dummy comment
void* kont11919 = (decode_clo(env12263))[2];
//not do dummy comment
void* drop = (decode_clo(env12263))[1];

//if-clause
bool if_guard12408 = is_true(a1180312087);
if(if_guard12408)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11919);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11919))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12410 = alloc_clo(lam12260_fptr, 4);

//setting env list
clo12410[1] = drop;
clo12410[2] = kont11919;
clo12410[3] = _u45;
clo12410[4] = n;
void* f1192112088 = encode_clo(clo12410);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1192112088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12262 = encode_clo(alloc_clo(lam12262_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12265 = arg_buffer[1];
//reading env and args
void* kont11919 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar12411 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12411, "0", 10);
void* a1180212085 = encode_mpz(mpzvar12411);

//creating new closure instance
void** clo12413 = alloc_clo(lam12262_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo12413[1] = drop;
clo12413[2] = kont11919;
clo12413[3] = lst;
clo12413[4] = _u45;
clo12413[5] = n;
clo12413[6] = cdr;
void* f1192212086 = encode_clo(clo12413);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f1192212086;
arg_buffer[3] = n;
arg_buffer[4] = a1180212085;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam12266_fptr() // lam12266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12267 = arg_buffer[1];
//reading env and args
void* a1181012100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a1180812096 = (decode_clo(env12267))[3];
//not do dummy comment
void* kont11923 = (decode_clo(env12267))[2];
//not do dummy comment
void* proc = (decode_clo(env12267))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont11923;
arg_buffer[3] = a1180812096;
arg_buffer[4] = a1181012100;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12266 = encode_clo(alloc_clo(lam12266_fptr, 0));

void* lam12268_fptr() // lam12268 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12269 = arg_buffer[1];
//reading env and args
void* a1180912098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env12269))[5];
//not do dummy comment
void* a1180812096 = (decode_clo(env12269))[4];
//not do dummy comment
void* kont11923 = (decode_clo(env12269))[3];
//not do dummy comment
void* proc = (decode_clo(env12269))[2];
//not do dummy comment
void* acc = (decode_clo(env12269))[1];

//creating new closure instance
void** clo12415 = alloc_clo(lam12266_fptr, 3);

//setting env list
clo12415[1] = proc;
clo12415[2] = kont11923;
clo12415[3] = a1180812096;
void* f1192412099 = encode_clo(clo12415);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f1192412099;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a1180912098;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12268 = encode_clo(alloc_clo(lam12268_fptr, 0));

void* lam12270_fptr() // lam12270 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12271 = arg_buffer[1];
//reading env and args
void* a1180812096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12271))[6];
//not do dummy comment
void* kont11923 = (decode_clo(env12271))[5];
//not do dummy comment
void* foldr = (decode_clo(env12271))[4];
//not do dummy comment
void* lst = (decode_clo(env12271))[3];
//not do dummy comment
void* proc = (decode_clo(env12271))[2];
//not do dummy comment
void* acc = (decode_clo(env12271))[1];

//creating new closure instance
void** clo12417 = alloc_clo(lam12268_fptr, 5);

//setting env list
clo12417[1] = acc;
clo12417[2] = proc;
clo12417[3] = kont11923;
clo12417[4] = a1180812096;
clo12417[5] = foldr;
void* f1192512097 = encode_clo(clo12417);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1192512097;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12270 = encode_clo(alloc_clo(lam12270_fptr, 0));

void* lam12272_fptr() // lam12272 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12273 = arg_buffer[1];
//reading env and args
void* a1180712094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12273))[7];
//not do dummy comment
void* kont11923 = (decode_clo(env12273))[6];
//not do dummy comment
void* car = (decode_clo(env12273))[5];
//not do dummy comment
void* foldr = (decode_clo(env12273))[4];
//not do dummy comment
void* lst = (decode_clo(env12273))[3];
//not do dummy comment
void* proc = (decode_clo(env12273))[2];
//not do dummy comment
void* acc = (decode_clo(env12273))[1];

//if-clause
bool if_guard12418 = is_true(a1180712094);
if(if_guard12418)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11923);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11923))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12420 = alloc_clo(lam12270_fptr, 6);

//setting env list
clo12420[1] = acc;
clo12420[2] = proc;
clo12420[3] = lst;
clo12420[4] = foldr;
clo12420[5] = kont11923;
clo12420[6] = cdr;
void* f1192612095 = encode_clo(clo12420);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1192612095;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12272 = encode_clo(alloc_clo(lam12272_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12274 = arg_buffer[1];
//reading env and args
void* kont11923 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo12422 = alloc_clo(lam12272_fptr, 7);

//setting env list
clo12422[1] = acc;
clo12422[2] = proc;
clo12422[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo12422[4] = foldr;
clo12422[5] = car;
clo12422[6] = kont11923;
clo12422[7] = cdr;
void* f1192712093 = encode_clo(clo12422);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1192712093;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam12275_fptr() // lam12275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12276 = arg_buffer[1];
//reading env and args
void* a1181412108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env12276))[3];
//not do dummy comment
void* a1181212104 = (decode_clo(env12276))[2];
//not do dummy comment
void* kont11928 = (decode_clo(env12276))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont11928;
arg_buffer[3] = a1181212104;
arg_buffer[4] = a1181412108;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12275 = encode_clo(alloc_clo(lam12275_fptr, 0));

void* lam12277_fptr() // lam12277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12278 = arg_buffer[1];
//reading env and args
void* a1181312106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env12278))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12278))[4];
//not do dummy comment
void* cons = (decode_clo(env12278))[3];
//not do dummy comment
void* a1181212104 = (decode_clo(env12278))[2];
//not do dummy comment
void* kont11928 = (decode_clo(env12278))[1];

//creating new closure instance
void** clo12424 = alloc_clo(lam12275_fptr, 3);

//setting env list
clo12424[1] = kont11928;
clo12424[2] = a1181212104;
clo12424[3] = cons;
void* f1192912107 = encode_clo(clo12424);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f1192912107;
arg_buffer[3] = a1181312106;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12277 = encode_clo(alloc_clo(lam12277_fptr, 0));

void* lam12279_fptr() // lam12279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12280 = arg_buffer[1];
//reading env and args
void* a1181212104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12280))[6];
//not do dummy comment
void* append = (decode_clo(env12280))[5];
//not do dummy comment
void* lst2 = (decode_clo(env12280))[4];
//not do dummy comment
void* cons = (decode_clo(env12280))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12280))[2];
//not do dummy comment
void* kont11928 = (decode_clo(env12280))[1];

//creating new closure instance
void** clo12426 = alloc_clo(lam12277_fptr, 5);

//setting env list
clo12426[1] = kont11928;
clo12426[2] = a1181212104;
clo12426[3] = cons;
clo12426[4] = lst2;
clo12426[5] = append;
void* f1193012105 = encode_clo(clo12426);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f1193012105;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12279 = encode_clo(alloc_clo(lam12279_fptr, 0));

void* lam12281_fptr() // lam12281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12282 = arg_buffer[1];
//reading env and args
void* a1181112102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env12282))[7];
//not do dummy comment
void* append = (decode_clo(env12282))[6];
//not do dummy comment
void* lst2 = (decode_clo(env12282))[5];
//not do dummy comment
void* cons = (decode_clo(env12282))[4];
//not do dummy comment
void* car = (decode_clo(env12282))[3];
//not do dummy comment
void* lst1 = (decode_clo(env12282))[2];
//not do dummy comment
void* kont11928 = (decode_clo(env12282))[1];

//if-clause
bool if_guard12427 = is_true(a1181112102);
if(if_guard12427)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11928);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11928))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo12429 = alloc_clo(lam12279_fptr, 6);

//setting env list
clo12429[1] = kont11928;
clo12429[2] = lst1;
clo12429[3] = cons;
clo12429[4] = lst2;
clo12429[5] = append;
clo12429[6] = cdr;
void* f1193112103 = encode_clo(clo12429);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f1193112103;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12281 = encode_clo(alloc_clo(lam12281_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12283 = arg_buffer[1];
//reading env and args
void* kont11928 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo12431 = alloc_clo(lam12281_fptr, 7);

//setting env list
clo12431[1] = kont11928;
clo12431[2] = lst1;
clo12431[3] = car;
clo12431[4] = cons;
clo12431[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo12431[6] = append;
clo12431[7] = cdr;
void* f1193212101 = encode_clo(clo12431);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f1193212101;
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
void* _12284 = arg_buffer[1];
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

void* kont1193312109 = prim_car(lst);
void* lst12110 = prim_cdr(lst);
void* x1181512111 = apply_prim_hash(lst12110);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1193312109);
arg_buffer[2] = x1181512111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1193312109))[0]);
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
void* _12285 = arg_buffer[1];
//reading env and args
void* kont11935 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1181612112 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11935);
arg_buffer[2] = x1181612112;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11935))[0]);
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
void* _12286 = arg_buffer[1];
//reading env and args
void* kont11936 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x1181712113 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11936);
arg_buffer[2] = x1181712113;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11936))[0]);
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
void* _12287 = arg_buffer[1];
//reading env and args
void* kont11937 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x1181812114 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11937);
arg_buffer[2] = x1181812114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11937))[0]);
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
void* _12288 = arg_buffer[1];
//reading env and args
void* kont11938 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x1181912115 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11938);
arg_buffer[2] = x1181912115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11938))[0]);
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
void* _12289 = arg_buffer[1];
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

void* kont1193912116 = prim_car(lst);
void* lst12117 = prim_cdr(lst);
void* x1182012118 = apply_prim_set(lst12117);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont1193912116);
arg_buffer[2] = x1182012118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont1193912116))[0]);
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
void* _12290 = arg_buffer[1];
//reading env and args
void* kont11941 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1182112119 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11941);
arg_buffer[2] = x1182112119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11941))[0]);
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
void* _12291 = arg_buffer[1];
//reading env and args
void* kont11942 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1182212120 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11942);
arg_buffer[2] = x1182212120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11942))[0]);
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
void* _12292 = arg_buffer[1];
//reading env and args
void* kont11943 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1182312121 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11943);
arg_buffer[2] = x1182312121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11943))[0]);
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
void* _12293 = arg_buffer[1];
//reading env and args
void* kont11944 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x1182412122 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11944);
arg_buffer[2] = x1182412122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11944))[0]);
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
void* _12294 = arg_buffer[1];
//reading env and args
void* kont11945 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1182512123 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11945);
arg_buffer[2] = x1182512123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11945))[0]);
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
void* _12295 = arg_buffer[1];
//reading env and args
void* kont11946 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1182612124 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11946);
arg_buffer[2] = x1182612124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11946))[0]);
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
void* _12296 = arg_buffer[1];
//reading env and args
void* kont11947 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x1182712125 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11947);
arg_buffer[2] = x1182712125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11947))[0]);
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
void* _12297 = arg_buffer[1];
//reading env and args
void* kont11948 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x1182812126 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11948);
arg_buffer[2] = x1182812126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11948))[0]);
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
void* _12298 = arg_buffer[1];
//reading env and args
void* kont11949 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x1182912127 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11949);
arg_buffer[2] = x1182912127;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11949))[0]);
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
void* _12299 = arg_buffer[1];
//reading env and args
void* kont11950 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x1183012128 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11950);
arg_buffer[2] = x1183012128;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11950))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam12302_fptr() // lam12302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12303 = arg_buffer[1];
//reading env and args
void* a1183312132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11951 = (decode_clo(env12303))[1];

//if-clause
bool if_guard12432 = is_true(a1183312132);
if(if_guard12432)
{
void* x1183412133 = encode_str(new(GC) std::string("wow"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11951);
arg_buffer[2] = x1183412133;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11951))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x1183512134 = encode_str(new(GC) std::string("not-wow"));

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11951);
arg_buffer[2] = x1183512134;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11951))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam12302 = encode_clo(alloc_clo(lam12302_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12306 = arg_buffer[1];
//reading env and args
void* kont11951 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar12433 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12433, "1", 10);
void* a1183112129 = encode_mpz(mpzvar12433);
mpz_t* mpzvar12434 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar12434, "1", 10);
void* a1183212130 = encode_mpz(mpzvar12434);

//creating new closure instance
void** clo12436 = alloc_clo(lam12302_fptr, 1);

//setting env list
clo12436[1] = kont11951;
void* f1195212131 = encode_clo(clo12436);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f1195212131;
arg_buffer[3] = a1183112129;
arg_buffer[4] = a1183212130;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam12307_fptr() // lam12307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env12308 = arg_buffer[1];
//reading env and args
void* x1183612136 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont11953 = (decode_clo(env12308))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont11953);
arg_buffer[2] = x1183612136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont11953))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam12307 = encode_clo(alloc_clo(lam12307_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _12309 = arg_buffer[1];
//reading env and args
void* kont11953 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo12438 = alloc_clo(lam12307_fptr, 1);

//setting env list
clo12438[1] = kont11953;
void* f1195412135 = encode_clo(clo12438);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f1195412135;
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

