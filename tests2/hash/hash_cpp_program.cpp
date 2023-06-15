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
void* _46148 = arg_buffer[1];
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

void* kont4588745987 = prim_car(lst);
void* lst45988 = prim_cdr(lst);
void* x4579945989 = apply_prim__u43(lst45988);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4588745987);
arg_buffer[2] = x4579945989;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4588745987))[0]);
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
void* _46149 = arg_buffer[1];
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

void* kont4588945990 = prim_car(lst);
void* lst45991 = prim_cdr(lst);
void* x4580045992 = apply_prim__u45(lst45991);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4588945990);
arg_buffer[2] = x4580045992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4588945990))[0]);
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
void* _46150 = arg_buffer[1];
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

void* kont4589145993 = prim_car(lst);
void* lst45994 = prim_cdr(lst);
void* x4580145995 = apply_prim__u42(lst45994);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4589145993);
arg_buffer[2] = x4580145995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4589145993))[0]);
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
void* _46151 = arg_buffer[1];
//reading env and args
void* kont45893 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4580245996 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45893);
arg_buffer[2] = x4580245996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45893))[0]);
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
void* _46152 = arg_buffer[1];
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

void* kont4589445997 = prim_car(lst);
void* lst45998 = prim_cdr(lst);
void* x4580345999 = apply_prim__u47(lst45998);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4589445997);
arg_buffer[2] = x4580345999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4589445997))[0]);
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
void* _46153 = arg_buffer[1];
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

void* kont4589646000 = prim_car(lst);
void* lst46001 = prim_cdr(lst);
void* x4580446002 = apply_prim__u61(lst46001);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4589646000);
arg_buffer[2] = x4580446002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4589646000))[0]);
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
void* _46154 = arg_buffer[1];
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

void* kont4589846003 = prim_car(lst);
void* lst46004 = prim_cdr(lst);
void* x4580546005 = apply_prim__u62(lst46004);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4589846003);
arg_buffer[2] = x4580546005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4589846003))[0]);
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
void* _46155 = arg_buffer[1];
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

void* kont4590046006 = prim_car(lst);
void* lst46007 = prim_cdr(lst);
void* x4580646008 = apply_prim__u60(lst46007);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4590046006);
arg_buffer[2] = x4580646008;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4590046006))[0]);
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
void* _46156 = arg_buffer[1];
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

void* kont4590246009 = prim_car(lst);
void* lst46010 = prim_cdr(lst);
void* x4580746011 = apply_prim__u60_u61(lst46010);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4590246009);
arg_buffer[2] = x4580746011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4590246009))[0]);
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
void* _46157 = arg_buffer[1];
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

void* kont4590446012 = prim_car(lst);
void* lst46013 = prim_cdr(lst);
void* x4580846014 = apply_prim__u62_u61(lst46013);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4590446012);
arg_buffer[2] = x4580846014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4590446012))[0]);
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
void* _46158 = arg_buffer[1];
//reading env and args
void* kont45906 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4580946015 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45906);
arg_buffer[2] = x4580946015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45906))[0]);
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
void* _46159 = arg_buffer[1];
//reading env and args
void* kont45907 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4581046016 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45907);
arg_buffer[2] = x4581046016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45907))[0]);
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
void* _46160 = arg_buffer[1];
//reading env and args
void* kont45908 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4581146017 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45908);
arg_buffer[2] = x4581146017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45908))[0]);
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
void* _46161 = arg_buffer[1];
//reading env and args
void* kont45909 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4581246018 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45909);
arg_buffer[2] = x4581246018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45909))[0]);
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
void* _46162 = arg_buffer[1];
//reading env and args
void* kont45910 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4581346019 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45910);
arg_buffer[2] = x4581346019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45910))[0]);
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
void* _46163 = arg_buffer[1];
//reading env and args
void* kont45911 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4581446020 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45911);
arg_buffer[2] = x4581446020;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45911))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam46164_fptr() // lam46164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46165 = arg_buffer[1];
//reading env and args
void* a4581746024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4581546021 = (decode_clo(env46165))[3];
//not do dummy comment
void* kont45912 = (decode_clo(env46165))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env46165))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45912;
arg_buffer[3] = a4581546021;
arg_buffer[4] = a4581746024;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46164 = encode_clo(alloc_clo(lam46164_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46168 = arg_buffer[1];
//reading env and args
void* kont45912 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46844 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46844, "0", 10);
void* a4581546021 = encode_mpz(mpzvar46844);
mpz_t* mpzvar46845 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46845, "2", 10);
void* a4581646022 = encode_mpz(mpzvar46845);

//creating new closure instance
void** clo46847 = alloc_clo(lam46164_fptr, 3);

//setting env list
clo46847[1] = equal_u63;
clo46847[2] = kont45912;
clo46847[3] = a4581546021;
void* f4591346023 = encode_clo(clo46847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4591346023;
arg_buffer[3] = x;
arg_buffer[4] = a4581646022;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam46169_fptr() // lam46169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46170 = arg_buffer[1];
//reading env and args
void* a4582046028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45914 = (decode_clo(env46170))[3];
//not do dummy comment
void* a4581846025 = (decode_clo(env46170))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env46170))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont45914;
arg_buffer[3] = a4581846025;
arg_buffer[4] = a4582046028;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46169 = encode_clo(alloc_clo(lam46169_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46173 = arg_buffer[1];
//reading env and args
void* kont45914 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar46848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46848, "1", 10);
void* a4581846025 = encode_mpz(mpzvar46848);
mpz_t* mpzvar46849 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46849, "2", 10);
void* a4581946026 = encode_mpz(mpzvar46849);

//creating new closure instance
void** clo46851 = alloc_clo(lam46169_fptr, 3);

//setting env list
clo46851[1] = equal_u63;
clo46851[2] = a4581846025;
clo46851[3] = kont45914;
void* f4591546027 = encode_clo(clo46851);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4591546027;
arg_buffer[3] = x;
arg_buffer[4] = a4581946026;
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
void* _46174 = arg_buffer[1];
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

void* kont4591646029 = prim_car(x);
void* x46030 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4591646029);
arg_buffer[2] = x46030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4591646029))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam46177_fptr() // lam46177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46178 = arg_buffer[1];
//reading env and args
void* a4582646040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env46178))[3];
//not do dummy comment
void* kont45918 = (decode_clo(env46178))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46178))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont45918;
arg_buffer[3] = x;
arg_buffer[4] = a4582646040;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46177 = encode_clo(alloc_clo(lam46177_fptr, 0));

void* lam46179_fptr() // lam46179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46180 = arg_buffer[1];
//reading env and args
void* a4582446037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46180))[5];
//not do dummy comment
void* lst = (decode_clo(env46180))[4];
//not do dummy comment
void* x = (decode_clo(env46180))[3];
//not do dummy comment
void* kont45918 = (decode_clo(env46180))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46180))[1];

//if-clause
bool if_guard46852 = is_true(a4582446037);
if(if_guard46852)
{
void* x4582546038 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45918);
arg_buffer[2] = x4582546038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45918))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46854 = alloc_clo(lam46177_fptr, 3);

//setting env list
clo46854[1] = member_u63;
clo46854[2] = kont45918;
clo46854[3] = x;
void* f4591946039 = encode_clo(clo46854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4591946039;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46179 = encode_clo(alloc_clo(lam46179_fptr, 0));

void* lam46181_fptr() // lam46181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46182 = arg_buffer[1];
//reading env and args
void* a4582346035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46182))[6];
//not do dummy comment
void* lst = (decode_clo(env46182))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env46182))[4];
//not do dummy comment
void* x = (decode_clo(env46182))[3];
//not do dummy comment
void* kont45918 = (decode_clo(env46182))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env46182))[1];

//creating new closure instance
void** clo46856 = alloc_clo(lam46179_fptr, 5);

//setting env list
clo46856[1] = member_u63;
clo46856[2] = kont45918;
clo46856[3] = x;
clo46856[4] = lst;
clo46856[5] = cdr;
void* f4592046036 = encode_clo(clo46856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4592046036;
arg_buffer[3] = a4582346035;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46181 = encode_clo(alloc_clo(lam46181_fptr, 0));

void* lam46183_fptr() // lam46183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46184 = arg_buffer[1];
//reading env and args
void* a4582146032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46184))[7];
//not do dummy comment
void* lst = (decode_clo(env46184))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env46184))[5];
//not do dummy comment
void* x = (decode_clo(env46184))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env46184))[3];
//not do dummy comment
void* kont45918 = (decode_clo(env46184))[2];
//not do dummy comment
void* car = (decode_clo(env46184))[1];

//if-clause
bool if_guard46857 = is_true(a4582146032);
if(if_guard46857)
{
void* x4582246033 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45918);
arg_buffer[2] = x4582246033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45918))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46859 = alloc_clo(lam46181_fptr, 6);

//setting env list
clo46859[1] = member_u63;
clo46859[2] = kont45918;
clo46859[3] = x;
clo46859[4] = equal_u63;
clo46859[5] = lst;
clo46859[6] = cdr;
void* f4592146034 = encode_clo(clo46859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4592146034;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46183 = encode_clo(alloc_clo(lam46183_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46185 = arg_buffer[1];
//reading env and args
void* kont45918 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46861 = alloc_clo(lam46183_fptr, 7);

//setting env list
clo46861[1] = car;
clo46861[2] = kont45918;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo46861[3] = member_u63;
clo46861[4] = x;
clo46861[5] = equal_u63;
clo46861[6] = lst;
clo46861[7] = cdr;
void* f4592246031 = encode_clo(clo46861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4592246031;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam46186_fptr() // lam46186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46187 = arg_buffer[1];
//reading env and args
void* a4583046048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45923 = (decode_clo(env46187))[4];
//not do dummy comment
void* fun = (decode_clo(env46187))[3];
//not do dummy comment
void* a4582946046 = (decode_clo(env46187))[2];
//not do dummy comment
void* foldl = (decode_clo(env46187))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont45923;
arg_buffer[3] = fun;
arg_buffer[4] = a4582946046;
arg_buffer[5] = a4583046048;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46186 = encode_clo(alloc_clo(lam46186_fptr, 0));

void* lam46188_fptr() // lam46188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46189 = arg_buffer[1];
//reading env and args
void* a4582946046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46189))[5];
//not do dummy comment
void* kont45923 = (decode_clo(env46189))[4];
//not do dummy comment
void* lst = (decode_clo(env46189))[3];
//not do dummy comment
void* fun = (decode_clo(env46189))[2];
//not do dummy comment
void* foldl = (decode_clo(env46189))[1];

//creating new closure instance
void** clo46863 = alloc_clo(lam46186_fptr, 4);

//setting env list
clo46863[1] = foldl;
clo46863[2] = a4582946046;
clo46863[3] = fun;
clo46863[4] = kont45923;
void* f4592446047 = encode_clo(clo46863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4592446047;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46188 = encode_clo(alloc_clo(lam46188_fptr, 0));

void* lam46190_fptr() // lam46190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46191 = arg_buffer[1];
//reading env and args
void* a4582846044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46191))[6];
//not do dummy comment
void* kont45923 = (decode_clo(env46191))[5];
//not do dummy comment
void* lst = (decode_clo(env46191))[4];
//not do dummy comment
void* fun = (decode_clo(env46191))[3];
//not do dummy comment
void* acc = (decode_clo(env46191))[2];
//not do dummy comment
void* foldl = (decode_clo(env46191))[1];

//creating new closure instance
void** clo46865 = alloc_clo(lam46188_fptr, 5);

//setting env list
clo46865[1] = foldl;
clo46865[2] = fun;
clo46865[3] = lst;
clo46865[4] = kont45923;
clo46865[5] = cdr;
void* f4592546045 = encode_clo(clo46865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4592546045;
arg_buffer[3] = a4582846044;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46190 = encode_clo(alloc_clo(lam46190_fptr, 0));

void* lam46192_fptr() // lam46192 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46193 = arg_buffer[1];
//reading env and args
void* a4582746042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46193))[7];
//not do dummy comment
void* kont45923 = (decode_clo(env46193))[6];
//not do dummy comment
void* lst = (decode_clo(env46193))[5];
//not do dummy comment
void* fun = (decode_clo(env46193))[4];
//not do dummy comment
void* acc = (decode_clo(env46193))[3];
//not do dummy comment
void* car = (decode_clo(env46193))[2];
//not do dummy comment
void* foldl = (decode_clo(env46193))[1];

//if-clause
bool if_guard46866 = is_true(a4582746042);
if(if_guard46866)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45923);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45923))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46868 = alloc_clo(lam46190_fptr, 6);

//setting env list
clo46868[1] = foldl;
clo46868[2] = acc;
clo46868[3] = fun;
clo46868[4] = lst;
clo46868[5] = kont45923;
clo46868[6] = cdr;
void* f4592646043 = encode_clo(clo46868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4592646043;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46192 = encode_clo(alloc_clo(lam46192_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46194 = arg_buffer[1];
//reading env and args
void* kont45923 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46870 = alloc_clo(lam46192_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo46870[1] = foldl;
clo46870[2] = car;
clo46870[3] = acc;
clo46870[4] = fun;
clo46870[5] = lst;
clo46870[6] = kont45923;
clo46870[7] = cdr;
void* f4592746041 = encode_clo(clo46870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4592746041;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam46195_fptr() // lam46195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46196 = arg_buffer[1];
//reading env and args
void* a4583446056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4583246052 = (decode_clo(env46196))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46196))[2];
//not do dummy comment
void* kont45928 = (decode_clo(env46196))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45928;
arg_buffer[3] = a4583246052;
arg_buffer[4] = a4583446056;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46195 = encode_clo(alloc_clo(lam46195_fptr, 0));

void* lam46197_fptr() // lam46197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46198 = arg_buffer[1];
//reading env and args
void* a4583346054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4583246052 = (decode_clo(env46198))[5];
//not do dummy comment
void* lst2 = (decode_clo(env46198))[4];
//not do dummy comment
void* cons = (decode_clo(env46198))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46198))[2];
//not do dummy comment
void* kont45928 = (decode_clo(env46198))[1];

//creating new closure instance
void** clo46872 = alloc_clo(lam46195_fptr, 3);

//setting env list
clo46872[1] = kont45928;
clo46872[2] = reverse_u45helper;
clo46872[3] = a4583246052;
void* f4592946055 = encode_clo(clo46872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4592946055;
arg_buffer[3] = a4583346054;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46197 = encode_clo(alloc_clo(lam46197_fptr, 0));

void* lam46199_fptr() // lam46199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46200 = arg_buffer[1];
//reading env and args
void* a4583246052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46200))[6];
//not do dummy comment
void* lst2 = (decode_clo(env46200))[5];
//not do dummy comment
void* car = (decode_clo(env46200))[4];
//not do dummy comment
void* cons = (decode_clo(env46200))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46200))[2];
//not do dummy comment
void* kont45928 = (decode_clo(env46200))[1];

//creating new closure instance
void** clo46874 = alloc_clo(lam46197_fptr, 5);

//setting env list
clo46874[1] = kont45928;
clo46874[2] = reverse_u45helper;
clo46874[3] = cons;
clo46874[4] = lst2;
clo46874[5] = a4583246052;
void* f4593046053 = encode_clo(clo46874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4593046053;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46199 = encode_clo(alloc_clo(lam46199_fptr, 0));

void* lam46201_fptr() // lam46201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46202 = arg_buffer[1];
//reading env and args
void* a4583146050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46202))[7];
//not do dummy comment
void* lst = (decode_clo(env46202))[6];
//not do dummy comment
void* lst2 = (decode_clo(env46202))[5];
//not do dummy comment
void* car = (decode_clo(env46202))[4];
//not do dummy comment
void* cons = (decode_clo(env46202))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46202))[2];
//not do dummy comment
void* kont45928 = (decode_clo(env46202))[1];

//if-clause
bool if_guard46875 = is_true(a4583146050);
if(if_guard46875)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45928);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45928))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46877 = alloc_clo(lam46199_fptr, 6);

//setting env list
clo46877[1] = kont45928;
clo46877[2] = reverse_u45helper;
clo46877[3] = cons;
clo46877[4] = car;
clo46877[5] = lst2;
clo46877[6] = lst;
void* f4593146051 = encode_clo(clo46877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4593146051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46201 = encode_clo(alloc_clo(lam46201_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46203 = arg_buffer[1];
//reading env and args
void* kont45928 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46879 = alloc_clo(lam46201_fptr, 7);

//setting env list
clo46879[1] = kont45928;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo46879[2] = reverse_u45helper;
clo46879[3] = cons;
clo46879[4] = car;
clo46879[5] = lst2;
clo46879[6] = lst;
clo46879[7] = cdr;
void* f4593246049 = encode_clo(clo46879);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4593246049;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam46204_fptr() // lam46204 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46205 = arg_buffer[1];
//reading env and args
void* a4583546058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46205))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env46205))[2];
//not do dummy comment
void* kont45933 = (decode_clo(env46205))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont45933;
arg_buffer[3] = lst;
arg_buffer[4] = a4583546058;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46204 = encode_clo(alloc_clo(lam46204_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46206 = arg_buffer[1];
//reading env and args
void* kont45933 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46881 = alloc_clo(lam46204_fptr, 3);

//setting env list
clo46881[1] = kont45933;
clo46881[2] = reverse_u45helper;
clo46881[3] = lst;
void* f4593446057 = encode_clo(clo46881);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4593446057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam46207_fptr() // lam46207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46208 = arg_buffer[1];
//reading env and args
void* x4583846063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45935 = (decode_clo(env46208))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45935);
arg_buffer[2] = x4583846063;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45935))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46207 = encode_clo(alloc_clo(lam46207_fptr, 0));

void* lam46209_fptr() // lam46209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46210 = arg_buffer[1];
//reading env and args
void* a4584346072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4583946065 = (decode_clo(env46210))[4];
//not do dummy comment
void* a4584146068 = (decode_clo(env46210))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46210))[2];
//not do dummy comment
void* kont45935 = (decode_clo(env46210))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45935;
arg_buffer[3] = a4583946065;
arg_buffer[4] = a4584146068;
arg_buffer[5] = a4584346072;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46209 = encode_clo(alloc_clo(lam46209_fptr, 0));

void* lam46211_fptr() // lam46211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46212 = arg_buffer[1];
//reading env and args
void* a4584246070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4583946065 = (decode_clo(env46212))[6];
//not do dummy comment
void* a4584146068 = (decode_clo(env46212))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env46212))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46212))[3];
//not do dummy comment
void* cons = (decode_clo(env46212))[2];
//not do dummy comment
void* kont45935 = (decode_clo(env46212))[1];

//creating new closure instance
void** clo46883 = alloc_clo(lam46209_fptr, 4);

//setting env list
clo46883[1] = kont45935;
clo46883[2] = take_u45helper;
clo46883[3] = a4584146068;
clo46883[4] = a4583946065;
void* f4593746071 = encode_clo(clo46883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4593746071;
arg_buffer[3] = a4584246070;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46211 = encode_clo(alloc_clo(lam46211_fptr, 0));

void* lam46213_fptr() // lam46213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46214 = arg_buffer[1];
//reading env and args
void* a4584146068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4583946065 = (decode_clo(env46214))[7];
//not do dummy comment
void* lst = (decode_clo(env46214))[6];
//not do dummy comment
void* car = (decode_clo(env46214))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env46214))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46214))[3];
//not do dummy comment
void* cons = (decode_clo(env46214))[2];
//not do dummy comment
void* kont45935 = (decode_clo(env46214))[1];

//creating new closure instance
void** clo46885 = alloc_clo(lam46211_fptr, 6);

//setting env list
clo46885[1] = kont45935;
clo46885[2] = cons;
clo46885[3] = lst2;
clo46885[4] = take_u45helper;
clo46885[5] = a4584146068;
clo46885[6] = a4583946065;
void* f4593846069 = encode_clo(clo46885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4593846069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46213 = encode_clo(alloc_clo(lam46213_fptr, 0));

void* lam46216_fptr() // lam46216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46217 = arg_buffer[1];
//reading env and args
void* a4583946065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46217))[8];
//not do dummy comment
void* _u45 = (decode_clo(env46217))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env46217))[6];
//not do dummy comment
void* lst2 = (decode_clo(env46217))[5];
//not do dummy comment
void* n = (decode_clo(env46217))[4];
//not do dummy comment
void* car = (decode_clo(env46217))[3];
//not do dummy comment
void* cons = (decode_clo(env46217))[2];
//not do dummy comment
void* kont45935 = (decode_clo(env46217))[1];
mpz_t* mpzvar46886 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46886, "1", 10);
void* a4584046066 = encode_mpz(mpzvar46886);

//creating new closure instance
void** clo46888 = alloc_clo(lam46213_fptr, 7);

//setting env list
clo46888[1] = kont45935;
clo46888[2] = cons;
clo46888[3] = lst2;
clo46888[4] = take_u45helper;
clo46888[5] = car;
clo46888[6] = lst;
clo46888[7] = a4583946065;
void* f4593946067 = encode_clo(clo46888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4593946067;
arg_buffer[3] = n;
arg_buffer[4] = a4584046066;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46216 = encode_clo(alloc_clo(lam46216_fptr, 0));

void* lam46218_fptr() // lam46218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46219 = arg_buffer[1];
//reading env and args
void* a4583746061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46219))[10];
//not do dummy comment
void* lst = (decode_clo(env46219))[9];
//not do dummy comment
void* reverse = (decode_clo(env46219))[8];
//not do dummy comment
void* _u45 = (decode_clo(env46219))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env46219))[6];
//not do dummy comment
void* lst2 = (decode_clo(env46219))[5];
//not do dummy comment
void* n = (decode_clo(env46219))[4];
//not do dummy comment
void* car = (decode_clo(env46219))[3];
//not do dummy comment
void* cons = (decode_clo(env46219))[2];
//not do dummy comment
void* kont45935 = (decode_clo(env46219))[1];

//if-clause
bool if_guard46889 = is_true(a4583746061);
if(if_guard46889)
{

//creating new closure instance
void** clo46891 = alloc_clo(lam46207_fptr, 1);

//setting env list
clo46891[1] = kont45935;
void* f4593646062 = encode_clo(clo46891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4593646062;
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
void** clo46893 = alloc_clo(lam46216_fptr, 8);

//setting env list
clo46893[1] = kont45935;
clo46893[2] = cons;
clo46893[3] = car;
clo46893[4] = n;
clo46893[5] = lst2;
clo46893[6] = take_u45helper;
clo46893[7] = _u45;
clo46893[8] = lst;
void* f4594046064 = encode_clo(clo46893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4594046064;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46218 = encode_clo(alloc_clo(lam46218_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46221 = arg_buffer[1];
//reading env and args
void* kont45935 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar46894 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46894, "0", 10);
void* a4583646059 = encode_mpz(mpzvar46894);

//creating new closure instance
void** clo46896 = alloc_clo(lam46218_fptr, 10);

//setting env list
clo46896[1] = kont45935;
clo46896[2] = cons;
clo46896[3] = car;
clo46896[4] = n;
clo46896[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo46896[6] = take_u45helper;
clo46896[7] = _u45;
clo46896[8] = reverse;
clo46896[9] = lst;
clo46896[10] = cdr;
void* f4594146060 = encode_clo(clo46896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4594146060;
arg_buffer[3] = n;
arg_buffer[4] = a4583646059;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam46222_fptr() // lam46222 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46223 = arg_buffer[1];
//reading env and args
void* a4584446074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46223))[4];
//not do dummy comment
void* kont45942 = (decode_clo(env46223))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env46223))[2];
//not do dummy comment
void* n = (decode_clo(env46223))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont45942;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4584446074;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46222 = encode_clo(alloc_clo(lam46222_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46224 = arg_buffer[1];
//reading env and args
void* kont45942 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46898 = alloc_clo(lam46222_fptr, 4);

//setting env list
clo46898[1] = n;
clo46898[2] = take_u45helper;
clo46898[3] = kont45942;
clo46898[4] = lst;
void* f4594346073 = encode_clo(clo46898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4594346073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam46226_fptr() // lam46226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46227 = arg_buffer[1];
//reading env and args
void* a4584946082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45944 = (decode_clo(env46227))[3];
//not do dummy comment
void* _u43 = (decode_clo(env46227))[2];
//not do dummy comment
void* a4584746078 = (decode_clo(env46227))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont45944;
arg_buffer[3] = a4584746078;
arg_buffer[4] = a4584946082;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46226 = encode_clo(alloc_clo(lam46226_fptr, 0));

void* lam46228_fptr() // lam46228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46229 = arg_buffer[1];
//reading env and args
void* a4584846080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env46229))[4];
//not do dummy comment
void* kont45944 = (decode_clo(env46229))[3];
//not do dummy comment
void* _u43 = (decode_clo(env46229))[2];
//not do dummy comment
void* a4584746078 = (decode_clo(env46229))[1];

//creating new closure instance
void** clo46900 = alloc_clo(lam46226_fptr, 3);

//setting env list
clo46900[1] = a4584746078;
clo46900[2] = _u43;
clo46900[3] = kont45944;
void* f4594546081 = encode_clo(clo46900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4594546081;
arg_buffer[3] = a4584846080;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46228 = encode_clo(alloc_clo(lam46228_fptr, 0));

void* lam46231_fptr() // lam46231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46232 = arg_buffer[1];
//reading env and args
void* a4584546076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46232))[5];
//not do dummy comment
void* lst = (decode_clo(env46232))[4];
//not do dummy comment
void* length = (decode_clo(env46232))[3];
//not do dummy comment
void* kont45944 = (decode_clo(env46232))[2];
//not do dummy comment
void* _u43 = (decode_clo(env46232))[1];

//if-clause
bool if_guard46901 = is_true(a4584546076);
if(if_guard46901)
{
mpz_t* mpzvar46902 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46902, "0", 10);
void* x4584646077 = encode_mpz(mpzvar46902);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45944);
arg_buffer[2] = x4584646077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45944))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar46903 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46903, "1", 10);
void* a4584746078 = encode_mpz(mpzvar46903);

//creating new closure instance
void** clo46905 = alloc_clo(lam46228_fptr, 4);

//setting env list
clo46905[1] = a4584746078;
clo46905[2] = _u43;
clo46905[3] = kont45944;
clo46905[4] = length;
void* f4594646079 = encode_clo(clo46905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4594646079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46231 = encode_clo(alloc_clo(lam46231_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46233 = arg_buffer[1];
//reading env and args
void* kont45944 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo46907 = alloc_clo(lam46231_fptr, 5);

//setting env list
clo46907[1] = _u43;
clo46907[2] = kont45944;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo46907[3] = length;
clo46907[4] = lst;
clo46907[5] = cdr;
void* f4594746075 = encode_clo(clo46907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4594746075;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam46234_fptr() // lam46234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46235 = arg_buffer[1];
//reading env and args
void* x4585146086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45948 = (decode_clo(env46235))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45948);
arg_buffer[2] = x4585146086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45948))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46234 = encode_clo(alloc_clo(lam46234_fptr, 0));

void* lam46236_fptr() // lam46236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46237 = arg_buffer[1];
//reading env and args
void* a4585546094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4585346090 = (decode_clo(env46237))[3];
//not do dummy comment
void* kont45948 = (decode_clo(env46237))[2];
//not do dummy comment
void* cons = (decode_clo(env46237))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45948;
arg_buffer[3] = a4585346090;
arg_buffer[4] = a4585546094;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46236 = encode_clo(alloc_clo(lam46236_fptr, 0));

void* lam46238_fptr() // lam46238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46239 = arg_buffer[1];
//reading env and args
void* a4585446092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env46239))[5];
//not do dummy comment
void* a4585346090 = (decode_clo(env46239))[4];
//not do dummy comment
void* cons = (decode_clo(env46239))[3];
//not do dummy comment
void* proc = (decode_clo(env46239))[2];
//not do dummy comment
void* kont45948 = (decode_clo(env46239))[1];

//creating new closure instance
void** clo46909 = alloc_clo(lam46236_fptr, 3);

//setting env list
clo46909[1] = cons;
clo46909[2] = kont45948;
clo46909[3] = a4585346090;
void* f4595046093 = encode_clo(clo46909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4595046093;
arg_buffer[3] = proc;
arg_buffer[4] = a4585446092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46238 = encode_clo(alloc_clo(lam46238_fptr, 0));

void* lam46240_fptr() // lam46240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46241 = arg_buffer[1];
//reading env and args
void* a4585346090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46241))[6];
//not do dummy comment
void* lst = (decode_clo(env46241))[5];
//not do dummy comment
void* map = (decode_clo(env46241))[4];
//not do dummy comment
void* cons = (decode_clo(env46241))[3];
//not do dummy comment
void* proc = (decode_clo(env46241))[2];
//not do dummy comment
void* kont45948 = (decode_clo(env46241))[1];

//creating new closure instance
void** clo46911 = alloc_clo(lam46238_fptr, 5);

//setting env list
clo46911[1] = kont45948;
clo46911[2] = proc;
clo46911[3] = cons;
clo46911[4] = a4585346090;
clo46911[5] = map;
void* f4595146091 = encode_clo(clo46911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4595146091;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46240 = encode_clo(alloc_clo(lam46240_fptr, 0));

void* lam46242_fptr() // lam46242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46243 = arg_buffer[1];
//reading env and args
void* a4585246088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46243))[6];
//not do dummy comment
void* lst = (decode_clo(env46243))[5];
//not do dummy comment
void* map = (decode_clo(env46243))[4];
//not do dummy comment
void* cons = (decode_clo(env46243))[3];
//not do dummy comment
void* proc = (decode_clo(env46243))[2];
//not do dummy comment
void* kont45948 = (decode_clo(env46243))[1];

//creating new closure instance
void** clo46913 = alloc_clo(lam46240_fptr, 6);

//setting env list
clo46913[1] = kont45948;
clo46913[2] = proc;
clo46913[3] = cons;
clo46913[4] = map;
clo46913[5] = lst;
clo46913[6] = cdr;
void* f4595246089 = encode_clo(clo46913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4595246089;
arg_buffer[3] = a4585246088;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46242 = encode_clo(alloc_clo(lam46242_fptr, 0));

void* lam46244_fptr() // lam46244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46245 = arg_buffer[1];
//reading env and args
void* a4585046084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env46245))[8];
//not do dummy comment
void* map = (decode_clo(env46245))[7];
//not do dummy comment
void* car = (decode_clo(env46245))[6];
//not do dummy comment
void* cons = (decode_clo(env46245))[5];
//not do dummy comment
void* list = (decode_clo(env46245))[4];
//not do dummy comment
void* cdr = (decode_clo(env46245))[3];
//not do dummy comment
void* proc = (decode_clo(env46245))[2];
//not do dummy comment
void* kont45948 = (decode_clo(env46245))[1];

//if-clause
bool if_guard46914 = is_true(a4585046084);
if(if_guard46914)
{

//creating new closure instance
void** clo46916 = alloc_clo(lam46234_fptr, 1);

//setting env list
clo46916[1] = kont45948;
void* f4594946085 = encode_clo(clo46916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4594946085;
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
void** clo46918 = alloc_clo(lam46242_fptr, 6);

//setting env list
clo46918[1] = kont45948;
clo46918[2] = proc;
clo46918[3] = cons;
clo46918[4] = map;
clo46918[5] = lst;
clo46918[6] = cdr;
void* f4595346087 = encode_clo(clo46918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4595346087;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46244 = encode_clo(alloc_clo(lam46244_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46246 = arg_buffer[1];
//reading env and args
void* kont45948 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46920 = alloc_clo(lam46244_fptr, 8);

//setting env list
clo46920[1] = kont45948;
clo46920[2] = proc;
clo46920[3] = cdr;
clo46920[4] = list;
clo46920[5] = cons;
clo46920[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo46920[7] = map;
clo46920[8] = lst;
void* f4595446083 = encode_clo(clo46920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4595446083;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam46247_fptr() // lam46247 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46248 = arg_buffer[1];
//reading env and args
void* x4585746098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45955 = (decode_clo(env46248))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45955);
arg_buffer[2] = x4585746098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45955))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46247 = encode_clo(alloc_clo(lam46247_fptr, 0));

void* lam46249_fptr() // lam46249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46250 = arg_buffer[1];
//reading env and args
void* a4586246108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45955 = (decode_clo(env46250))[3];
//not do dummy comment
void* a4586046104 = (decode_clo(env46250))[2];
//not do dummy comment
void* cons = (decode_clo(env46250))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45955;
arg_buffer[3] = a4586046104;
arg_buffer[4] = a4586246108;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46249 = encode_clo(alloc_clo(lam46249_fptr, 0));

void* lam46251_fptr() // lam46251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46252 = arg_buffer[1];
//reading env and args
void* a4586146106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45955 = (decode_clo(env46252))[5];
//not do dummy comment
void* filter = (decode_clo(env46252))[4];
//not do dummy comment
void* cons = (decode_clo(env46252))[3];
//not do dummy comment
void* a4586046104 = (decode_clo(env46252))[2];
//not do dummy comment
void* op = (decode_clo(env46252))[1];

//creating new closure instance
void** clo46922 = alloc_clo(lam46249_fptr, 3);

//setting env list
clo46922[1] = cons;
clo46922[2] = a4586046104;
clo46922[3] = kont45955;
void* f4595746107 = encode_clo(clo46922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4595746107;
arg_buffer[3] = op;
arg_buffer[4] = a4586146106;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46251 = encode_clo(alloc_clo(lam46251_fptr, 0));

void* lam46253_fptr() // lam46253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46254 = arg_buffer[1];
//reading env and args
void* a4586046104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46254))[6];
//not do dummy comment
void* kont45955 = (decode_clo(env46254))[5];
//not do dummy comment
void* lst = (decode_clo(env46254))[4];
//not do dummy comment
void* op = (decode_clo(env46254))[3];
//not do dummy comment
void* filter = (decode_clo(env46254))[2];
//not do dummy comment
void* cons = (decode_clo(env46254))[1];

//creating new closure instance
void** clo46924 = alloc_clo(lam46251_fptr, 5);

//setting env list
clo46924[1] = op;
clo46924[2] = a4586046104;
clo46924[3] = cons;
clo46924[4] = filter;
clo46924[5] = kont45955;
void* f4595846105 = encode_clo(clo46924);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4595846105;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46253 = encode_clo(alloc_clo(lam46253_fptr, 0));

void* lam46255_fptr() // lam46255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46256 = arg_buffer[1];
//reading env and args
void* a4586346110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45955 = (decode_clo(env46256))[3];
//not do dummy comment
void* op = (decode_clo(env46256))[2];
//not do dummy comment
void* filter = (decode_clo(env46256))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont45955;
arg_buffer[3] = op;
arg_buffer[4] = a4586346110;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46255 = encode_clo(alloc_clo(lam46255_fptr, 0));

void* lam46257_fptr() // lam46257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46258 = arg_buffer[1];
//reading env and args
void* a4585946102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46258))[7];
//not do dummy comment
void* kont45955 = (decode_clo(env46258))[6];
//not do dummy comment
void* lst = (decode_clo(env46258))[5];
//not do dummy comment
void* op = (decode_clo(env46258))[4];
//not do dummy comment
void* cons = (decode_clo(env46258))[3];
//not do dummy comment
void* filter = (decode_clo(env46258))[2];
//not do dummy comment
void* car = (decode_clo(env46258))[1];

//if-clause
bool if_guard46925 = is_true(a4585946102);
if(if_guard46925)
{

//creating new closure instance
void** clo46927 = alloc_clo(lam46253_fptr, 6);

//setting env list
clo46927[1] = cons;
clo46927[2] = filter;
clo46927[3] = op;
clo46927[4] = lst;
clo46927[5] = kont45955;
clo46927[6] = cdr;
void* f4595946103 = encode_clo(clo46927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4595946103;
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
void** clo46929 = alloc_clo(lam46255_fptr, 3);

//setting env list
clo46929[1] = filter;
clo46929[2] = op;
clo46929[3] = kont45955;
void* f4596046109 = encode_clo(clo46929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4596046109;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46257 = encode_clo(alloc_clo(lam46257_fptr, 0));

void* lam46259_fptr() // lam46259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46260 = arg_buffer[1];
//reading env and args
void* a4585846100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46260))[7];
//not do dummy comment
void* kont45955 = (decode_clo(env46260))[6];
//not do dummy comment
void* lst = (decode_clo(env46260))[5];
//not do dummy comment
void* op = (decode_clo(env46260))[4];
//not do dummy comment
void* cons = (decode_clo(env46260))[3];
//not do dummy comment
void* filter = (decode_clo(env46260))[2];
//not do dummy comment
void* car = (decode_clo(env46260))[1];

//creating new closure instance
void** clo46931 = alloc_clo(lam46257_fptr, 7);

//setting env list
clo46931[1] = car;
clo46931[2] = filter;
clo46931[3] = cons;
clo46931[4] = op;
clo46931[5] = lst;
clo46931[6] = kont45955;
clo46931[7] = cdr;
void* f4596146101 = encode_clo(clo46931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4596146101;
arg_buffer[3] = a4585846100;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46259 = encode_clo(alloc_clo(lam46259_fptr, 0));

void* lam46261_fptr() // lam46261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46262 = arg_buffer[1];
//reading env and args
void* a4585646096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45955 = (decode_clo(env46262))[8];
//not do dummy comment
void* lst = (decode_clo(env46262))[7];
//not do dummy comment
void* op = (decode_clo(env46262))[6];
//not do dummy comment
void* cons = (decode_clo(env46262))[5];
//not do dummy comment
void* list = (decode_clo(env46262))[4];
//not do dummy comment
void* cdr = (decode_clo(env46262))[3];
//not do dummy comment
void* filter = (decode_clo(env46262))[2];
//not do dummy comment
void* car = (decode_clo(env46262))[1];

//if-clause
bool if_guard46932 = is_true(a4585646096);
if(if_guard46932)
{

//creating new closure instance
void** clo46934 = alloc_clo(lam46247_fptr, 1);

//setting env list
clo46934[1] = kont45955;
void* f4595646097 = encode_clo(clo46934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4595646097;
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
void** clo46936 = alloc_clo(lam46259_fptr, 7);

//setting env list
clo46936[1] = car;
clo46936[2] = filter;
clo46936[3] = cons;
clo46936[4] = op;
clo46936[5] = lst;
clo46936[6] = kont45955;
clo46936[7] = cdr;
void* f4596246099 = encode_clo(clo46936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4596246099;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46261 = encode_clo(alloc_clo(lam46261_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46263 = arg_buffer[1];
//reading env and args
void* kont45955 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46938 = alloc_clo(lam46261_fptr, 8);

//setting env list
clo46938[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo46938[2] = filter;
clo46938[3] = cdr;
clo46938[4] = list;
clo46938[5] = cons;
clo46938[6] = op;
clo46938[7] = lst;
clo46938[8] = kont45955;
void* f4596346095 = encode_clo(clo46938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4596346095;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam46264_fptr() // lam46264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46265 = arg_buffer[1];
//reading env and args
void* a4586846118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4586646115 = (decode_clo(env46265))[3];
//not do dummy comment
void* drop = (decode_clo(env46265))[2];
//not do dummy comment
void* kont45964 = (decode_clo(env46265))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont45964;
arg_buffer[3] = a4586646115;
arg_buffer[4] = a4586846118;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46264 = encode_clo(alloc_clo(lam46264_fptr, 0));

void* lam46267_fptr() // lam46267 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46268 = arg_buffer[1];
//reading env and args
void* a4586646115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env46268))[4];
//not do dummy comment
void* kont45964 = (decode_clo(env46268))[3];
//not do dummy comment
void* n = (decode_clo(env46268))[2];
//not do dummy comment
void* _u45 = (decode_clo(env46268))[1];
mpz_t* mpzvar46939 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46939, "1", 10);
void* a4586746116 = encode_mpz(mpzvar46939);

//creating new closure instance
void** clo46941 = alloc_clo(lam46264_fptr, 3);

//setting env list
clo46941[1] = kont45964;
clo46941[2] = drop;
clo46941[3] = a4586646115;
void* f4596546117 = encode_clo(clo46941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4596546117;
arg_buffer[3] = n;
arg_buffer[4] = a4586746116;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46267 = encode_clo(alloc_clo(lam46267_fptr, 0));

void* lam46269_fptr() // lam46269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46270 = arg_buffer[1];
//reading env and args
void* a4586546113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46270))[6];
//not do dummy comment
void* kont45964 = (decode_clo(env46270))[5];
//not do dummy comment
void* n = (decode_clo(env46270))[4];
//not do dummy comment
void* _u45 = (decode_clo(env46270))[3];
//not do dummy comment
void* lst = (decode_clo(env46270))[2];
//not do dummy comment
void* drop = (decode_clo(env46270))[1];

//if-clause
bool if_guard46942 = is_true(a4586546113);
if(if_guard46942)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45964);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45964))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46944 = alloc_clo(lam46267_fptr, 4);

//setting env list
clo46944[1] = _u45;
clo46944[2] = n;
clo46944[3] = kont45964;
clo46944[4] = drop;
void* f4596646114 = encode_clo(clo46944);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4596646114;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46269 = encode_clo(alloc_clo(lam46269_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46272 = arg_buffer[1];
//reading env and args
void* kont45964 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar46945 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46945, "0", 10);
void* a4586446111 = encode_mpz(mpzvar46945);

//creating new closure instance
void** clo46947 = alloc_clo(lam46269_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo46947[1] = drop;
clo46947[2] = lst;
clo46947[3] = _u45;
clo46947[4] = n;
clo46947[5] = kont45964;
clo46947[6] = cdr;
void* f4596746112 = encode_clo(clo46947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4596746112;
arg_buffer[3] = n;
arg_buffer[4] = a4586446111;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam46273_fptr() // lam46273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46274 = arg_buffer[1];
//reading env and args
void* a4587246126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4587046122 = (decode_clo(env46274))[3];
//not do dummy comment
void* proc = (decode_clo(env46274))[2];
//not do dummy comment
void* kont45968 = (decode_clo(env46274))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont45968;
arg_buffer[3] = a4587046122;
arg_buffer[4] = a4587246126;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46273 = encode_clo(alloc_clo(lam46273_fptr, 0));

void* lam46275_fptr() // lam46275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46276 = arg_buffer[1];
//reading env and args
void* a4587146124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env46276))[5];
//not do dummy comment
void* a4587046122 = (decode_clo(env46276))[4];
//not do dummy comment
void* kont45968 = (decode_clo(env46276))[3];
//not do dummy comment
void* proc = (decode_clo(env46276))[2];
//not do dummy comment
void* acc = (decode_clo(env46276))[1];

//creating new closure instance
void** clo46949 = alloc_clo(lam46273_fptr, 3);

//setting env list
clo46949[1] = kont45968;
clo46949[2] = proc;
clo46949[3] = a4587046122;
void* f4596946125 = encode_clo(clo46949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4596946125;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4587146124;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46275 = encode_clo(alloc_clo(lam46275_fptr, 0));

void* lam46277_fptr() // lam46277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46278 = arg_buffer[1];
//reading env and args
void* a4587046122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46278))[6];
//not do dummy comment
void* kont45968 = (decode_clo(env46278))[5];
//not do dummy comment
void* foldr = (decode_clo(env46278))[4];
//not do dummy comment
void* lst = (decode_clo(env46278))[3];
//not do dummy comment
void* proc = (decode_clo(env46278))[2];
//not do dummy comment
void* acc = (decode_clo(env46278))[1];

//creating new closure instance
void** clo46951 = alloc_clo(lam46275_fptr, 5);

//setting env list
clo46951[1] = acc;
clo46951[2] = proc;
clo46951[3] = kont45968;
clo46951[4] = a4587046122;
clo46951[5] = foldr;
void* f4597046123 = encode_clo(clo46951);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4597046123;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46277 = encode_clo(alloc_clo(lam46277_fptr, 0));

void* lam46279_fptr() // lam46279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46280 = arg_buffer[1];
//reading env and args
void* a4586946120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46280))[7];
//not do dummy comment
void* car = (decode_clo(env46280))[6];
//not do dummy comment
void* kont45968 = (decode_clo(env46280))[5];
//not do dummy comment
void* foldr = (decode_clo(env46280))[4];
//not do dummy comment
void* lst = (decode_clo(env46280))[3];
//not do dummy comment
void* proc = (decode_clo(env46280))[2];
//not do dummy comment
void* acc = (decode_clo(env46280))[1];

//if-clause
bool if_guard46952 = is_true(a4586946120);
if(if_guard46952)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45968);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45968))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46954 = alloc_clo(lam46277_fptr, 6);

//setting env list
clo46954[1] = acc;
clo46954[2] = proc;
clo46954[3] = lst;
clo46954[4] = foldr;
clo46954[5] = kont45968;
clo46954[6] = cdr;
void* f4597146121 = encode_clo(clo46954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4597146121;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46279 = encode_clo(alloc_clo(lam46279_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46281 = arg_buffer[1];
//reading env and args
void* kont45968 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo46956 = alloc_clo(lam46279_fptr, 7);

//setting env list
clo46956[1] = acc;
clo46956[2] = proc;
clo46956[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo46956[4] = foldr;
clo46956[5] = kont45968;
clo46956[6] = car;
clo46956[7] = cdr;
void* f4597246119 = encode_clo(clo46956);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4597246119;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam46282_fptr() // lam46282 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46283 = arg_buffer[1];
//reading env and args
void* a4587646134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4587446130 = (decode_clo(env46283))[3];
//not do dummy comment
void* kont45973 = (decode_clo(env46283))[2];
//not do dummy comment
void* cons = (decode_clo(env46283))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont45973;
arg_buffer[3] = a4587446130;
arg_buffer[4] = a4587646134;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46282 = encode_clo(alloc_clo(lam46282_fptr, 0));

void* lam46284_fptr() // lam46284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46285 = arg_buffer[1];
//reading env and args
void* a4587546132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4587446130 = (decode_clo(env46285))[5];
//not do dummy comment
void* kont45973 = (decode_clo(env46285))[4];
//not do dummy comment
void* append = (decode_clo(env46285))[3];
//not do dummy comment
void* lst2 = (decode_clo(env46285))[2];
//not do dummy comment
void* cons = (decode_clo(env46285))[1];

//creating new closure instance
void** clo46958 = alloc_clo(lam46282_fptr, 3);

//setting env list
clo46958[1] = cons;
clo46958[2] = kont45973;
clo46958[3] = a4587446130;
void* f4597446133 = encode_clo(clo46958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4597446133;
arg_buffer[3] = a4587546132;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46284 = encode_clo(alloc_clo(lam46284_fptr, 0));

void* lam46286_fptr() // lam46286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46287 = arg_buffer[1];
//reading env and args
void* a4587446130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46287))[6];
//not do dummy comment
void* kont45973 = (decode_clo(env46287))[5];
//not do dummy comment
void* append = (decode_clo(env46287))[4];
//not do dummy comment
void* lst2 = (decode_clo(env46287))[3];
//not do dummy comment
void* lst1 = (decode_clo(env46287))[2];
//not do dummy comment
void* cons = (decode_clo(env46287))[1];

//creating new closure instance
void** clo46960 = alloc_clo(lam46284_fptr, 5);

//setting env list
clo46960[1] = cons;
clo46960[2] = lst2;
clo46960[3] = append;
clo46960[4] = kont45973;
clo46960[5] = a4587446130;
void* f4597546131 = encode_clo(clo46960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4597546131;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46286 = encode_clo(alloc_clo(lam46286_fptr, 0));

void* lam46288_fptr() // lam46288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46289 = arg_buffer[1];
//reading env and args
void* a4587346128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env46289))[7];
//not do dummy comment
void* kont45973 = (decode_clo(env46289))[6];
//not do dummy comment
void* append = (decode_clo(env46289))[5];
//not do dummy comment
void* lst2 = (decode_clo(env46289))[4];
//not do dummy comment
void* cons = (decode_clo(env46289))[3];
//not do dummy comment
void* lst1 = (decode_clo(env46289))[2];
//not do dummy comment
void* car = (decode_clo(env46289))[1];

//if-clause
bool if_guard46961 = is_true(a4587346128);
if(if_guard46961)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45973);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45973))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo46963 = alloc_clo(lam46286_fptr, 6);

//setting env list
clo46963[1] = cons;
clo46963[2] = lst1;
clo46963[3] = lst2;
clo46963[4] = append;
clo46963[5] = kont45973;
clo46963[6] = cdr;
void* f4597646129 = encode_clo(clo46963);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4597646129;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam46288 = encode_clo(alloc_clo(lam46288_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46290 = arg_buffer[1];
//reading env and args
void* kont45973 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo46965 = alloc_clo(lam46288_fptr, 7);

//setting env list
clo46965[1] = car;
clo46965[2] = lst1;
clo46965[3] = cons;
clo46965[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo46965[5] = append;
clo46965[6] = kont45973;
clo46965[7] = cdr;
void* f4597746127 = encode_clo(clo46965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4597746127;
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
void* _46291 = arg_buffer[1];
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

void* kont4597846135 = prim_car(lst);
void* lst46136 = prim_cdr(lst);
void* x4587746137 = apply_prim_hash(lst46136);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4597846135);
arg_buffer[2] = x4587746137;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4597846135))[0]);
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
void* _46292 = arg_buffer[1];
//reading env and args
void* kont45980 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4587846138 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45980);
arg_buffer[2] = x4587846138;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45980))[0]);
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
void* _46293 = arg_buffer[1];
//reading env and args
void* kont45981 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4587946139 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45981);
arg_buffer[2] = x4587946139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45981))[0]);
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
void* _46294 = arg_buffer[1];
//reading env and args
void* kont45982 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4588046140 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45982);
arg_buffer[2] = x4588046140;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45982))[0]);
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
void* _46295 = arg_buffer[1];
//reading env and args
void* kont45983 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4588146141 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45983);
arg_buffer[2] = x4588146141;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45983))[0]);
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
void* _46300 = arg_buffer[1];
//reading env and args
void* kont45984 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar46966 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46966, "100", 10);
void* a4588246142 = encode_mpz(mpzvar46966);
mpz_t* mpzvar46967 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46967, "80", 10);
void* a4588346143 = encode_mpz(mpzvar46967);
mpz_t* mpzvar46968 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46968, "10", 10);
void* a4588446144 = encode_mpz(mpzvar46968);
mpz_t* mpzvar46969 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar46969, "2", 10);
void* a4588546145 = encode_mpz(mpzvar46969);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont45984;
arg_buffer[3] = a4588246142;
arg_buffer[4] = a4588346143;
arg_buffer[5] = a4588446144;
arg_buffer[6] = a4588546145;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam46301_fptr() // lam46301 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env46302 = arg_buffer[1];
//reading env and args
void* x4588646147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont45985 = (decode_clo(env46302))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont45985);
arg_buffer[2] = x4588646147;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont45985))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam46301 = encode_clo(alloc_clo(lam46301_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _46303 = arg_buffer[1];
//reading env and args
void* kont45985 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo46971 = alloc_clo(lam46301_fptr, 1);

//setting env list
clo46971[1] = kont45985;
void* f4598646146 = encode_clo(clo46971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4598646146;
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

