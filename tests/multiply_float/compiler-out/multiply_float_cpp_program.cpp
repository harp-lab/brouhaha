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
void* _27068 = arg_buffer[1];
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

void* kont2677226889 = prim_car(lst);
void* lst26890 = prim_cdr(lst);
void* x2667026891 = apply_prim__u43(lst26890);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2677226889);
arg_buffer[2] = x2667026891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2677226889))[0]);
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
void* _27069 = arg_buffer[1];
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

void* kont2677426892 = prim_car(lst);
void* lst26893 = prim_cdr(lst);
void* x2667126894 = apply_prim_max(lst26893);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2677426892);
arg_buffer[2] = x2667126894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2677426892))[0]);
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
void* _27070 = arg_buffer[1];
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

void* kont2677626895 = prim_car(lst);
void* lst26896 = prim_cdr(lst);
void* x2667226897 = apply_prim__u45(lst26896);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2677626895);
arg_buffer[2] = x2667226897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2677626895))[0]);
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
void* _27071 = arg_buffer[1];
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

void* kont2677826898 = prim_car(lst);
void* lst26899 = prim_cdr(lst);
void* x2667326900 = apply_prim__u42(lst26899);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2677826898);
arg_buffer[2] = x2667326900;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2677826898))[0]);
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
void* _27072 = arg_buffer[1];
//reading env and args
void* kont26780 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2667426901 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26780);
arg_buffer[2] = x2667426901;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26780))[0]);
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
void* _27073 = arg_buffer[1];
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

void* kont2678126902 = prim_car(lst);
void* lst26903 = prim_cdr(lst);
void* x2667526904 = apply_prim__u47(lst26903);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2678126902);
arg_buffer[2] = x2667526904;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2678126902))[0]);
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
void* _27074 = arg_buffer[1];
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

void* kont2678326905 = prim_car(lst);
void* lst26906 = prim_cdr(lst);
void* x2667626907 = apply_prim__u61(lst26906);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2678326905);
arg_buffer[2] = x2667626907;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2678326905))[0]);
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
void* _27075 = arg_buffer[1];
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

void* kont2678526908 = prim_car(lst);
void* lst26909 = prim_cdr(lst);
void* x2667726910 = apply_prim__u62(lst26909);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2678526908);
arg_buffer[2] = x2667726910;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2678526908))[0]);
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
void* _27076 = arg_buffer[1];
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

void* kont2678726911 = prim_car(lst);
void* lst26912 = prim_cdr(lst);
void* x2667826913 = apply_prim__u60(lst26912);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2678726911);
arg_buffer[2] = x2667826913;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2678726911))[0]);
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
void* _27077 = arg_buffer[1];
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

void* kont2678926914 = prim_car(lst);
void* lst26915 = prim_cdr(lst);
void* x2667926916 = apply_prim__u60_u61(lst26915);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2678926914);
arg_buffer[2] = x2667926916;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2678926914))[0]);
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
void* _27078 = arg_buffer[1];
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

void* kont2679126917 = prim_car(lst);
void* lst26918 = prim_cdr(lst);
void* x2668026919 = apply_prim__u62_u61(lst26918);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2679126917);
arg_buffer[2] = x2668026919;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2679126917))[0]);
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
void* _27079 = arg_buffer[1];
//reading env and args
void* kont26793 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2668126920 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26793);
arg_buffer[2] = x2668126920;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26793))[0]);
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
void* _27080 = arg_buffer[1];
//reading env and args
void* kont26794 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2668226921 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26794);
arg_buffer[2] = x2668226921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26794))[0]);
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
void* _27081 = arg_buffer[1];
//reading env and args
void* kont26795 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2668326922 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26795);
arg_buffer[2] = x2668326922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26795))[0]);
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
void* _27082 = arg_buffer[1];
//reading env and args
void* kont26796 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2668426923 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26796);
arg_buffer[2] = x2668426923;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26796))[0]);
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
void* _27083 = arg_buffer[1];
//reading env and args
void* kont26797 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2668526924 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26797);
arg_buffer[2] = x2668526924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26797))[0]);
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
void* _27084 = arg_buffer[1];
//reading env and args
void* kont26798 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2668626925 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26798);
arg_buffer[2] = x2668626925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26798))[0]);
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
void* _27085 = arg_buffer[1];
//reading env and args
void* kont26799 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2668726926 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26799);
arg_buffer[2] = x2668726926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26799))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam27086_fptr() // lam27086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27087 = arg_buffer[1];
//reading env and args
void* a2669026930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2668826927 = (decode_clo(env27087))[3];
//not do dummy comment
void* kont26800 = (decode_clo(env27087))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env27087))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont26800;
arg_buffer[3] = a2668826927;
arg_buffer[4] = a2669026930;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27086 = encode_clo(alloc_clo(lam27086_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27090 = arg_buffer[1];
//reading env and args
void* kont26800 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar27238 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27238, "0", 10);
void* a2668826927 = encode_mpz(mpzvar27238);
mpz_t* mpzvar27239 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27239, "2", 10);
void* a2668926928 = encode_mpz(mpzvar27239);

//creating new closure instance
void** clo27241 = alloc_clo(lam27086_fptr, 3);

//setting env list
clo27241[1] = equal_u63;
clo27241[2] = kont26800;
clo27241[3] = a2668826927;
void* f2680126929 = encode_clo(clo27241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2680126929;
arg_buffer[3] = x;
arg_buffer[4] = a2668926928;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam27091_fptr() // lam27091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27092 = arg_buffer[1];
//reading env and args
void* a2669326934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2669126931 = (decode_clo(env27092))[3];
//not do dummy comment
void* kont26802 = (decode_clo(env27092))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env27092))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont26802;
arg_buffer[3] = a2669126931;
arg_buffer[4] = a2669326934;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27091 = encode_clo(alloc_clo(lam27091_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27095 = arg_buffer[1];
//reading env and args
void* kont26802 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar27242 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27242, "1", 10);
void* a2669126931 = encode_mpz(mpzvar27242);
mpz_t* mpzvar27243 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27243, "2", 10);
void* a2669226932 = encode_mpz(mpzvar27243);

//creating new closure instance
void** clo27245 = alloc_clo(lam27091_fptr, 3);

//setting env list
clo27245[1] = equal_u63;
clo27245[2] = kont26802;
clo27245[3] = a2669126931;
void* f2680326933 = encode_clo(clo27245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2680326933;
arg_buffer[3] = x;
arg_buffer[4] = a2669226932;
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
void* _27096 = arg_buffer[1];
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

void* kont2680426935 = prim_car(x);
void* x26936 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2680426935);
arg_buffer[2] = x26936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2680426935))[0]);
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
void* _27097 = arg_buffer[1];
//reading env and args
void* kont26806 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2669426937 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26806);
arg_buffer[2] = x2669426937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26806))[0]);
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
void* _27098 = arg_buffer[1];
//reading env and args
void* kont26807 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2669526938 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26807);
arg_buffer[2] = x2669526938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26807))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam27101_fptr() // lam27101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27102 = arg_buffer[1];
//reading env and args
void* a2670126948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env27102))[3];
//not do dummy comment
void* kont26808 = (decode_clo(env27102))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27102))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont26808;
arg_buffer[3] = x;
arg_buffer[4] = a2670126948;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27101 = encode_clo(alloc_clo(lam27101_fptr, 0));

void* lam27103_fptr() // lam27103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27104 = arg_buffer[1];
//reading env and args
void* a2669926945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27104))[5];
//not do dummy comment
void* lst = (decode_clo(env27104))[4];
//not do dummy comment
void* x = (decode_clo(env27104))[3];
//not do dummy comment
void* kont26808 = (decode_clo(env27104))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27104))[1];

//if-clause
bool if_guard27246 = is_true(a2669926945);
if(if_guard27246)
{
void* x2670026946 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26808);
arg_buffer[2] = x2670026946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26808))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27248 = alloc_clo(lam27101_fptr, 3);

//setting env list
clo27248[1] = member_u63;
clo27248[2] = kont26808;
clo27248[3] = x;
void* f2680926947 = encode_clo(clo27248);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2680926947;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27103 = encode_clo(alloc_clo(lam27103_fptr, 0));

void* lam27105_fptr() // lam27105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27106 = arg_buffer[1];
//reading env and args
void* a2669826943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27106))[6];
//not do dummy comment
void* lst = (decode_clo(env27106))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env27106))[4];
//not do dummy comment
void* x = (decode_clo(env27106))[3];
//not do dummy comment
void* kont26808 = (decode_clo(env27106))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27106))[1];

//creating new closure instance
void** clo27250 = alloc_clo(lam27103_fptr, 5);

//setting env list
clo27250[1] = member_u63;
clo27250[2] = kont26808;
clo27250[3] = x;
clo27250[4] = lst;
clo27250[5] = cdr;
void* f2681026944 = encode_clo(clo27250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2681026944;
arg_buffer[3] = a2669826943;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27105 = encode_clo(alloc_clo(lam27105_fptr, 0));

void* lam27107_fptr() // lam27107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27108 = arg_buffer[1];
//reading env and args
void* a2669626940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27108))[7];
//not do dummy comment
void* lst = (decode_clo(env27108))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env27108))[5];
//not do dummy comment
void* x = (decode_clo(env27108))[4];
//not do dummy comment
void* car = (decode_clo(env27108))[3];
//not do dummy comment
void* kont26808 = (decode_clo(env27108))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env27108))[1];

//if-clause
bool if_guard27251 = is_true(a2669626940);
if(if_guard27251)
{
void* x2669726941 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26808);
arg_buffer[2] = x2669726941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26808))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27253 = alloc_clo(lam27105_fptr, 6);

//setting env list
clo27253[1] = member_u63;
clo27253[2] = kont26808;
clo27253[3] = x;
clo27253[4] = equal_u63;
clo27253[5] = lst;
clo27253[6] = cdr;
void* f2681126942 = encode_clo(clo27253);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2681126942;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27107 = encode_clo(alloc_clo(lam27107_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27109 = arg_buffer[1];
//reading env and args
void* kont26808 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27255 = alloc_clo(lam27107_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo27255[1] = member_u63;
clo27255[2] = kont26808;
clo27255[3] = car;
clo27255[4] = x;
clo27255[5] = equal_u63;
clo27255[6] = lst;
clo27255[7] = cdr;
void* f2681226939 = encode_clo(clo27255);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2681226939;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam27110_fptr() // lam27110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27111 = arg_buffer[1];
//reading env and args
void* a2670526956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2670426954 = (decode_clo(env27111))[4];
//not do dummy comment
void* kont26813 = (decode_clo(env27111))[3];
//not do dummy comment
void* fun = (decode_clo(env27111))[2];
//not do dummy comment
void* foldl = (decode_clo(env27111))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont26813;
arg_buffer[3] = fun;
arg_buffer[4] = a2670426954;
arg_buffer[5] = a2670526956;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27110 = encode_clo(alloc_clo(lam27110_fptr, 0));

void* lam27112_fptr() // lam27112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27113 = arg_buffer[1];
//reading env and args
void* a2670426954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27113))[5];
//not do dummy comment
void* kont26813 = (decode_clo(env27113))[4];
//not do dummy comment
void* lst = (decode_clo(env27113))[3];
//not do dummy comment
void* fun = (decode_clo(env27113))[2];
//not do dummy comment
void* foldl = (decode_clo(env27113))[1];

//creating new closure instance
void** clo27257 = alloc_clo(lam27110_fptr, 4);

//setting env list
clo27257[1] = foldl;
clo27257[2] = fun;
clo27257[3] = kont26813;
clo27257[4] = a2670426954;
void* f2681426955 = encode_clo(clo27257);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2681426955;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27112 = encode_clo(alloc_clo(lam27112_fptr, 0));

void* lam27114_fptr() // lam27114 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27115 = arg_buffer[1];
//reading env and args
void* a2670326952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27115))[6];
//not do dummy comment
void* kont26813 = (decode_clo(env27115))[5];
//not do dummy comment
void* lst = (decode_clo(env27115))[4];
//not do dummy comment
void* fun = (decode_clo(env27115))[3];
//not do dummy comment
void* acc = (decode_clo(env27115))[2];
//not do dummy comment
void* foldl = (decode_clo(env27115))[1];

//creating new closure instance
void** clo27259 = alloc_clo(lam27112_fptr, 5);

//setting env list
clo27259[1] = foldl;
clo27259[2] = fun;
clo27259[3] = lst;
clo27259[4] = kont26813;
clo27259[5] = cdr;
void* f2681526953 = encode_clo(clo27259);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2681526953;
arg_buffer[3] = a2670326952;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27114 = encode_clo(alloc_clo(lam27114_fptr, 0));

void* lam27116_fptr() // lam27116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27117 = arg_buffer[1];
//reading env and args
void* a2670226950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27117))[7];
//not do dummy comment
void* kont26813 = (decode_clo(env27117))[6];
//not do dummy comment
void* lst = (decode_clo(env27117))[5];
//not do dummy comment
void* fun = (decode_clo(env27117))[4];
//not do dummy comment
void* acc = (decode_clo(env27117))[3];
//not do dummy comment
void* car = (decode_clo(env27117))[2];
//not do dummy comment
void* foldl = (decode_clo(env27117))[1];

//if-clause
bool if_guard27260 = is_true(a2670226950);
if(if_guard27260)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26813);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26813))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27262 = alloc_clo(lam27114_fptr, 6);

//setting env list
clo27262[1] = foldl;
clo27262[2] = acc;
clo27262[3] = fun;
clo27262[4] = lst;
clo27262[5] = kont26813;
clo27262[6] = cdr;
void* f2681626951 = encode_clo(clo27262);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2681626951;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27116 = encode_clo(alloc_clo(lam27116_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27118 = arg_buffer[1];
//reading env and args
void* kont26813 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo27264 = alloc_clo(lam27116_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo27264[1] = foldl;
clo27264[2] = car;
clo27264[3] = acc;
clo27264[4] = fun;
clo27264[5] = lst;
clo27264[6] = kont26813;
clo27264[7] = cdr;
void* f2681726949 = encode_clo(clo27264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2681726949;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam27119_fptr() // lam27119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27120 = arg_buffer[1];
//reading env and args
void* a2670926964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2670726960 = (decode_clo(env27120))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27120))[2];
//not do dummy comment
void* kont26818 = (decode_clo(env27120))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont26818;
arg_buffer[3] = a2670726960;
arg_buffer[4] = a2670926964;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27119 = encode_clo(alloc_clo(lam27119_fptr, 0));

void* lam27121_fptr() // lam27121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27122 = arg_buffer[1];
//reading env and args
void* a2670826962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2670726960 = (decode_clo(env27122))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27122))[4];
//not do dummy comment
void* kont26818 = (decode_clo(env27122))[3];
//not do dummy comment
void* lst2 = (decode_clo(env27122))[2];
//not do dummy comment
void* cons = (decode_clo(env27122))[1];

//creating new closure instance
void** clo27266 = alloc_clo(lam27119_fptr, 3);

//setting env list
clo27266[1] = kont26818;
clo27266[2] = reverse_u45helper;
clo27266[3] = a2670726960;
void* f2681926963 = encode_clo(clo27266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2681926963;
arg_buffer[3] = a2670826962;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27121 = encode_clo(alloc_clo(lam27121_fptr, 0));

void* lam27123_fptr() // lam27123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27124 = arg_buffer[1];
//reading env and args
void* a2670726960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27124))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27124))[5];
//not do dummy comment
void* kont26818 = (decode_clo(env27124))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27124))[3];
//not do dummy comment
void* car = (decode_clo(env27124))[2];
//not do dummy comment
void* cons = (decode_clo(env27124))[1];

//creating new closure instance
void** clo27268 = alloc_clo(lam27121_fptr, 5);

//setting env list
clo27268[1] = cons;
clo27268[2] = lst2;
clo27268[3] = kont26818;
clo27268[4] = reverse_u45helper;
clo27268[5] = a2670726960;
void* f2682026961 = encode_clo(clo27268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2682026961;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27123 = encode_clo(alloc_clo(lam27123_fptr, 0));

void* lam27125_fptr() // lam27125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27126 = arg_buffer[1];
//reading env and args
void* a2670626958 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27126))[7];
//not do dummy comment
void* lst = (decode_clo(env27126))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27126))[5];
//not do dummy comment
void* kont26818 = (decode_clo(env27126))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27126))[3];
//not do dummy comment
void* car = (decode_clo(env27126))[2];
//not do dummy comment
void* cons = (decode_clo(env27126))[1];

//if-clause
bool if_guard27269 = is_true(a2670626958);
if(if_guard27269)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26818);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26818))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27271 = alloc_clo(lam27123_fptr, 6);

//setting env list
clo27271[1] = cons;
clo27271[2] = car;
clo27271[3] = lst2;
clo27271[4] = kont26818;
clo27271[5] = reverse_u45helper;
clo27271[6] = lst;
void* f2682126959 = encode_clo(clo27271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2682126959;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27125 = encode_clo(alloc_clo(lam27125_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27127 = arg_buffer[1];
//reading env and args
void* kont26818 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27273 = alloc_clo(lam27125_fptr, 7);

//setting env list
clo27273[1] = cons;
clo27273[2] = car;
clo27273[3] = lst2;
clo27273[4] = kont26818;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo27273[5] = reverse_u45helper;
clo27273[6] = lst;
clo27273[7] = cdr;
void* f2682226957 = encode_clo(clo27273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2682226957;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam27128_fptr() // lam27128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27129 = arg_buffer[1];
//reading env and args
void* a2671026966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27129))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env27129))[2];
//not do dummy comment
void* kont26823 = (decode_clo(env27129))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont26823;
arg_buffer[3] = lst;
arg_buffer[4] = a2671026966;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27128 = encode_clo(alloc_clo(lam27128_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27130 = arg_buffer[1];
//reading env and args
void* kont26823 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo27275 = alloc_clo(lam27128_fptr, 3);

//setting env list
clo27275[1] = kont26823;
clo27275[2] = reverse_u45helper;
clo27275[3] = lst;
void* f2682426965 = encode_clo(clo27275);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2682426965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam27131_fptr() // lam27131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27132 = arg_buffer[1];
//reading env and args
void* x2671326971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26825 = (decode_clo(env27132))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26825);
arg_buffer[2] = x2671326971;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26825))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27131 = encode_clo(alloc_clo(lam27131_fptr, 0));

void* lam27133_fptr() // lam27133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27134 = arg_buffer[1];
//reading env and args
void* a2671826980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2671426973 = (decode_clo(env27134))[4];
//not do dummy comment
void* a2671626976 = (decode_clo(env27134))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env27134))[2];
//not do dummy comment
void* kont26825 = (decode_clo(env27134))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont26825;
arg_buffer[3] = a2671426973;
arg_buffer[4] = a2671626976;
arg_buffer[5] = a2671826980;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27133 = encode_clo(alloc_clo(lam27133_fptr, 0));

void* lam27135_fptr() // lam27135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27136 = arg_buffer[1];
//reading env and args
void* a2671726978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2671426973 = (decode_clo(env27136))[6];
//not do dummy comment
void* a2671626976 = (decode_clo(env27136))[5];
//not do dummy comment
void* cons = (decode_clo(env27136))[4];
//not do dummy comment
void* kont26825 = (decode_clo(env27136))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env27136))[2];
//not do dummy comment
void* lst2 = (decode_clo(env27136))[1];

//creating new closure instance
void** clo27277 = alloc_clo(lam27133_fptr, 4);

//setting env list
clo27277[1] = kont26825;
clo27277[2] = take_u45helper;
clo27277[3] = a2671626976;
clo27277[4] = a2671426973;
void* f2682726979 = encode_clo(clo27277);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2682726979;
arg_buffer[3] = a2671726978;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27135 = encode_clo(alloc_clo(lam27135_fptr, 0));

void* lam27137_fptr() // lam27137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27138 = arg_buffer[1];
//reading env and args
void* a2671626976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2671426973 = (decode_clo(env27138))[7];
//not do dummy comment
void* lst = (decode_clo(env27138))[6];
//not do dummy comment
void* car = (decode_clo(env27138))[5];
//not do dummy comment
void* cons = (decode_clo(env27138))[4];
//not do dummy comment
void* kont26825 = (decode_clo(env27138))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env27138))[2];
//not do dummy comment
void* lst2 = (decode_clo(env27138))[1];

//creating new closure instance
void** clo27279 = alloc_clo(lam27135_fptr, 6);

//setting env list
clo27279[1] = lst2;
clo27279[2] = take_u45helper;
clo27279[3] = kont26825;
clo27279[4] = cons;
clo27279[5] = a2671626976;
clo27279[6] = a2671426973;
void* f2682826977 = encode_clo(clo27279);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2682826977;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27137 = encode_clo(alloc_clo(lam27137_fptr, 0));

void* lam27140_fptr() // lam27140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27141 = arg_buffer[1];
//reading env and args
void* a2671426973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27141))[8];
//not do dummy comment
void* cons = (decode_clo(env27141))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env27141))[6];
//not do dummy comment
void* lst2 = (decode_clo(env27141))[5];
//not do dummy comment
void* n = (decode_clo(env27141))[4];
//not do dummy comment
void* car = (decode_clo(env27141))[3];
//not do dummy comment
void* kont26825 = (decode_clo(env27141))[2];
//not do dummy comment
void* _u45 = (decode_clo(env27141))[1];
mpz_t* mpzvar27280 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27280, "1", 10);
void* a2671526974 = encode_mpz(mpzvar27280);

//creating new closure instance
void** clo27282 = alloc_clo(lam27137_fptr, 7);

//setting env list
clo27282[1] = lst2;
clo27282[2] = take_u45helper;
clo27282[3] = kont26825;
clo27282[4] = cons;
clo27282[5] = car;
clo27282[6] = lst;
clo27282[7] = a2671426973;
void* f2682926975 = encode_clo(clo27282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2682926975;
arg_buffer[3] = n;
arg_buffer[4] = a2671526974;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27140 = encode_clo(alloc_clo(lam27140_fptr, 0));

void* lam27142_fptr() // lam27142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27143 = arg_buffer[1];
//reading env and args
void* a2671226969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27143))[10];
//not do dummy comment
void* lst = (decode_clo(env27143))[9];
//not do dummy comment
void* reverse = (decode_clo(env27143))[8];
//not do dummy comment
void* cons = (decode_clo(env27143))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env27143))[6];
//not do dummy comment
void* lst2 = (decode_clo(env27143))[5];
//not do dummy comment
void* n = (decode_clo(env27143))[4];
//not do dummy comment
void* car = (decode_clo(env27143))[3];
//not do dummy comment
void* kont26825 = (decode_clo(env27143))[2];
//not do dummy comment
void* _u45 = (decode_clo(env27143))[1];

//if-clause
bool if_guard27283 = is_true(a2671226969);
if(if_guard27283)
{

//creating new closure instance
void** clo27285 = alloc_clo(lam27131_fptr, 1);

//setting env list
clo27285[1] = kont26825;
void* f2682626970 = encode_clo(clo27285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2682626970;
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
void** clo27287 = alloc_clo(lam27140_fptr, 8);

//setting env list
clo27287[1] = _u45;
clo27287[2] = kont26825;
clo27287[3] = car;
clo27287[4] = n;
clo27287[5] = lst2;
clo27287[6] = take_u45helper;
clo27287[7] = cons;
clo27287[8] = lst;
void* f2683026972 = encode_clo(clo27287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2683026972;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27142 = encode_clo(alloc_clo(lam27142_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27145 = arg_buffer[1];
//reading env and args
void* kont26825 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar27288 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27288, "0", 10);
void* a2671126967 = encode_mpz(mpzvar27288);

//creating new closure instance
void** clo27290 = alloc_clo(lam27142_fptr, 10);

//setting env list
clo27290[1] = _u45;
clo27290[2] = kont26825;
clo27290[3] = car;
clo27290[4] = n;
clo27290[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo27290[6] = take_u45helper;
clo27290[7] = cons;
clo27290[8] = reverse;
clo27290[9] = lst;
clo27290[10] = cdr;
void* f2683126968 = encode_clo(clo27290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2683126968;
arg_buffer[3] = n;
arg_buffer[4] = a2671126967;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam27146_fptr() // lam27146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27147 = arg_buffer[1];
//reading env and args
void* a2671926982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27147))[4];
//not do dummy comment
void* kont26832 = (decode_clo(env27147))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env27147))[2];
//not do dummy comment
void* n = (decode_clo(env27147))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont26832;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2671926982;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27146 = encode_clo(alloc_clo(lam27146_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27148 = arg_buffer[1];
//reading env and args
void* kont26832 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27292 = alloc_clo(lam27146_fptr, 4);

//setting env list
clo27292[1] = n;
clo27292[2] = take_u45helper;
clo27292[3] = kont26832;
clo27292[4] = lst;
void* f2683326981 = encode_clo(clo27292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2683326981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam27150_fptr() // lam27150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27151 = arg_buffer[1];
//reading env and args
void* a2672426990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2672226986 = (decode_clo(env27151))[3];
//not do dummy comment
void* kont26834 = (decode_clo(env27151))[2];
//not do dummy comment
void* _u43 = (decode_clo(env27151))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont26834;
arg_buffer[3] = a2672226986;
arg_buffer[4] = a2672426990;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27150 = encode_clo(alloc_clo(lam27150_fptr, 0));

void* lam27152_fptr() // lam27152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27153 = arg_buffer[1];
//reading env and args
void* a2672326988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2672226986 = (decode_clo(env27153))[4];
//not do dummy comment
void* length = (decode_clo(env27153))[3];
//not do dummy comment
void* kont26834 = (decode_clo(env27153))[2];
//not do dummy comment
void* _u43 = (decode_clo(env27153))[1];

//creating new closure instance
void** clo27294 = alloc_clo(lam27150_fptr, 3);

//setting env list
clo27294[1] = _u43;
clo27294[2] = kont26834;
clo27294[3] = a2672226986;
void* f2683526989 = encode_clo(clo27294);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2683526989;
arg_buffer[3] = a2672326988;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27152 = encode_clo(alloc_clo(lam27152_fptr, 0));

void* lam27155_fptr() // lam27155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27156 = arg_buffer[1];
//reading env and args
void* a2672026984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27156))[5];
//not do dummy comment
void* lst = (decode_clo(env27156))[4];
//not do dummy comment
void* length = (decode_clo(env27156))[3];
//not do dummy comment
void* kont26834 = (decode_clo(env27156))[2];
//not do dummy comment
void* _u43 = (decode_clo(env27156))[1];

//if-clause
bool if_guard27295 = is_true(a2672026984);
if(if_guard27295)
{
mpz_t* mpzvar27296 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27296, "0", 10);
void* x2672126985 = encode_mpz(mpzvar27296);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26834);
arg_buffer[2] = x2672126985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26834))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar27297 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27297, "1", 10);
void* a2672226986 = encode_mpz(mpzvar27297);

//creating new closure instance
void** clo27299 = alloc_clo(lam27152_fptr, 4);

//setting env list
clo27299[1] = _u43;
clo27299[2] = kont26834;
clo27299[3] = length;
clo27299[4] = a2672226986;
void* f2683626987 = encode_clo(clo27299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2683626987;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27155 = encode_clo(alloc_clo(lam27155_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27157 = arg_buffer[1];
//reading env and args
void* kont26834 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo27301 = alloc_clo(lam27155_fptr, 5);

//setting env list
clo27301[1] = _u43;
clo27301[2] = kont26834;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo27301[3] = length;
clo27301[4] = lst;
clo27301[5] = cdr;
void* f2683726983 = encode_clo(clo27301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2683726983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam27158_fptr() // lam27158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27159 = arg_buffer[1];
//reading env and args
void* x2672626994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26838 = (decode_clo(env27159))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26838);
arg_buffer[2] = x2672626994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26838))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27158 = encode_clo(alloc_clo(lam27158_fptr, 0));

void* lam27160_fptr() // lam27160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27161 = arg_buffer[1];
//reading env and args
void* a2673027002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env27161))[3];
//not do dummy comment
void* kont26838 = (decode_clo(env27161))[2];
//not do dummy comment
void* a2672826998 = (decode_clo(env27161))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont26838;
arg_buffer[3] = a2672826998;
arg_buffer[4] = a2673027002;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27160 = encode_clo(alloc_clo(lam27160_fptr, 0));

void* lam27162_fptr() // lam27162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27163 = arg_buffer[1];
//reading env and args
void* a2672927000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env27163))[5];
//not do dummy comment
void* proc = (decode_clo(env27163))[4];
//not do dummy comment
void* cons = (decode_clo(env27163))[3];
//not do dummy comment
void* kont26838 = (decode_clo(env27163))[2];
//not do dummy comment
void* a2672826998 = (decode_clo(env27163))[1];

//creating new closure instance
void** clo27303 = alloc_clo(lam27160_fptr, 3);

//setting env list
clo27303[1] = a2672826998;
clo27303[2] = kont26838;
clo27303[3] = cons;
void* f2684027001 = encode_clo(clo27303);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2684027001;
arg_buffer[3] = proc;
arg_buffer[4] = a2672927000;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27162 = encode_clo(alloc_clo(lam27162_fptr, 0));

void* lam27164_fptr() // lam27164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27165 = arg_buffer[1];
//reading env and args
void* a2672826998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27165))[6];
//not do dummy comment
void* lst = (decode_clo(env27165))[5];
//not do dummy comment
void* map = (decode_clo(env27165))[4];
//not do dummy comment
void* proc = (decode_clo(env27165))[3];
//not do dummy comment
void* kont26838 = (decode_clo(env27165))[2];
//not do dummy comment
void* cons = (decode_clo(env27165))[1];

//creating new closure instance
void** clo27305 = alloc_clo(lam27162_fptr, 5);

//setting env list
clo27305[1] = a2672826998;
clo27305[2] = kont26838;
clo27305[3] = cons;
clo27305[4] = proc;
clo27305[5] = map;
void* f2684126999 = encode_clo(clo27305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2684126999;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27164 = encode_clo(alloc_clo(lam27164_fptr, 0));

void* lam27166_fptr() // lam27166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27167 = arg_buffer[1];
//reading env and args
void* a2672726996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27167))[6];
//not do dummy comment
void* lst = (decode_clo(env27167))[5];
//not do dummy comment
void* map = (decode_clo(env27167))[4];
//not do dummy comment
void* proc = (decode_clo(env27167))[3];
//not do dummy comment
void* kont26838 = (decode_clo(env27167))[2];
//not do dummy comment
void* cons = (decode_clo(env27167))[1];

//creating new closure instance
void** clo27307 = alloc_clo(lam27164_fptr, 6);

//setting env list
clo27307[1] = cons;
clo27307[2] = kont26838;
clo27307[3] = proc;
clo27307[4] = map;
clo27307[5] = lst;
clo27307[6] = cdr;
void* f2684226997 = encode_clo(clo27307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2684226997;
arg_buffer[3] = a2672726996;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27166 = encode_clo(alloc_clo(lam27166_fptr, 0));

void* lam27168_fptr() // lam27168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27169 = arg_buffer[1];
//reading env and args
void* a2672526992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env27169))[8];
//not do dummy comment
void* map = (decode_clo(env27169))[7];
//not do dummy comment
void* proc = (decode_clo(env27169))[6];
//not do dummy comment
void* kont26838 = (decode_clo(env27169))[5];
//not do dummy comment
void* car = (decode_clo(env27169))[4];
//not do dummy comment
void* cons = (decode_clo(env27169))[3];
//not do dummy comment
void* list = (decode_clo(env27169))[2];
//not do dummy comment
void* cdr = (decode_clo(env27169))[1];

//if-clause
bool if_guard27308 = is_true(a2672526992);
if(if_guard27308)
{

//creating new closure instance
void** clo27310 = alloc_clo(lam27158_fptr, 1);

//setting env list
clo27310[1] = kont26838;
void* f2683926993 = encode_clo(clo27310);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2683926993;
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
void** clo27312 = alloc_clo(lam27166_fptr, 6);

//setting env list
clo27312[1] = cons;
clo27312[2] = kont26838;
clo27312[3] = proc;
clo27312[4] = map;
clo27312[5] = lst;
clo27312[6] = cdr;
void* f2684326995 = encode_clo(clo27312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2684326995;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27168 = encode_clo(alloc_clo(lam27168_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27170 = arg_buffer[1];
//reading env and args
void* kont26838 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27314 = alloc_clo(lam27168_fptr, 8);

//setting env list
clo27314[1] = cdr;
clo27314[2] = list;
clo27314[3] = cons;
clo27314[4] = car;
clo27314[5] = kont26838;
clo27314[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo27314[7] = map;
clo27314[8] = lst;
void* f2684426991 = encode_clo(clo27314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2684426991;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam27171_fptr() // lam27171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27172 = arg_buffer[1];
//reading env and args
void* x2673227006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26845 = (decode_clo(env27172))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26845);
arg_buffer[2] = x2673227006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26845))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27171 = encode_clo(alloc_clo(lam27171_fptr, 0));

void* lam27173_fptr() // lam27173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27174 = arg_buffer[1];
//reading env and args
void* a2673727016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26845 = (decode_clo(env27174))[3];
//not do dummy comment
void* a2673527012 = (decode_clo(env27174))[2];
//not do dummy comment
void* cons = (decode_clo(env27174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont26845;
arg_buffer[3] = a2673527012;
arg_buffer[4] = a2673727016;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27173 = encode_clo(alloc_clo(lam27173_fptr, 0));

void* lam27175_fptr() // lam27175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27176 = arg_buffer[1];
//reading env and args
void* a2673627014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26845 = (decode_clo(env27176))[5];
//not do dummy comment
void* op = (decode_clo(env27176))[4];
//not do dummy comment
void* a2673527012 = (decode_clo(env27176))[3];
//not do dummy comment
void* filter = (decode_clo(env27176))[2];
//not do dummy comment
void* cons = (decode_clo(env27176))[1];

//creating new closure instance
void** clo27316 = alloc_clo(lam27173_fptr, 3);

//setting env list
clo27316[1] = cons;
clo27316[2] = a2673527012;
clo27316[3] = kont26845;
void* f2684727015 = encode_clo(clo27316);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2684727015;
arg_buffer[3] = op;
arg_buffer[4] = a2673627014;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27175 = encode_clo(alloc_clo(lam27175_fptr, 0));

void* lam27177_fptr() // lam27177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27178 = arg_buffer[1];
//reading env and args
void* a2673527012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27178))[6];
//not do dummy comment
void* kont26845 = (decode_clo(env27178))[5];
//not do dummy comment
void* lst = (decode_clo(env27178))[4];
//not do dummy comment
void* op = (decode_clo(env27178))[3];
//not do dummy comment
void* filter = (decode_clo(env27178))[2];
//not do dummy comment
void* cons = (decode_clo(env27178))[1];

//creating new closure instance
void** clo27318 = alloc_clo(lam27175_fptr, 5);

//setting env list
clo27318[1] = cons;
clo27318[2] = filter;
clo27318[3] = a2673527012;
clo27318[4] = op;
clo27318[5] = kont26845;
void* f2684827013 = encode_clo(clo27318);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2684827013;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27177 = encode_clo(alloc_clo(lam27177_fptr, 0));

void* lam27179_fptr() // lam27179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27180 = arg_buffer[1];
//reading env and args
void* a2673827018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26845 = (decode_clo(env27180))[3];
//not do dummy comment
void* op = (decode_clo(env27180))[2];
//not do dummy comment
void* filter = (decode_clo(env27180))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont26845;
arg_buffer[3] = op;
arg_buffer[4] = a2673827018;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27179 = encode_clo(alloc_clo(lam27179_fptr, 0));

void* lam27181_fptr() // lam27181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27182 = arg_buffer[1];
//reading env and args
void* a2673427010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27182))[7];
//not do dummy comment
void* kont26845 = (decode_clo(env27182))[6];
//not do dummy comment
void* lst = (decode_clo(env27182))[5];
//not do dummy comment
void* op = (decode_clo(env27182))[4];
//not do dummy comment
void* cons = (decode_clo(env27182))[3];
//not do dummy comment
void* filter = (decode_clo(env27182))[2];
//not do dummy comment
void* car = (decode_clo(env27182))[1];

//if-clause
bool if_guard27319 = is_true(a2673427010);
if(if_guard27319)
{

//creating new closure instance
void** clo27321 = alloc_clo(lam27177_fptr, 6);

//setting env list
clo27321[1] = cons;
clo27321[2] = filter;
clo27321[3] = op;
clo27321[4] = lst;
clo27321[5] = kont26845;
clo27321[6] = cdr;
void* f2684927011 = encode_clo(clo27321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2684927011;
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
void** clo27323 = alloc_clo(lam27179_fptr, 3);

//setting env list
clo27323[1] = filter;
clo27323[2] = op;
clo27323[3] = kont26845;
void* f2685027017 = encode_clo(clo27323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2685027017;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27181 = encode_clo(alloc_clo(lam27181_fptr, 0));

void* lam27183_fptr() // lam27183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27184 = arg_buffer[1];
//reading env and args
void* a2673327008 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27184))[7];
//not do dummy comment
void* kont26845 = (decode_clo(env27184))[6];
//not do dummy comment
void* lst = (decode_clo(env27184))[5];
//not do dummy comment
void* op = (decode_clo(env27184))[4];
//not do dummy comment
void* cons = (decode_clo(env27184))[3];
//not do dummy comment
void* filter = (decode_clo(env27184))[2];
//not do dummy comment
void* car = (decode_clo(env27184))[1];

//creating new closure instance
void** clo27325 = alloc_clo(lam27181_fptr, 7);

//setting env list
clo27325[1] = car;
clo27325[2] = filter;
clo27325[3] = cons;
clo27325[4] = op;
clo27325[5] = lst;
clo27325[6] = kont26845;
clo27325[7] = cdr;
void* f2685127009 = encode_clo(clo27325);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2685127009;
arg_buffer[3] = a2673327008;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27183 = encode_clo(alloc_clo(lam27183_fptr, 0));

void* lam27185_fptr() // lam27185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27186 = arg_buffer[1];
//reading env and args
void* a2673127004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26845 = (decode_clo(env27186))[8];
//not do dummy comment
void* lst = (decode_clo(env27186))[7];
//not do dummy comment
void* op = (decode_clo(env27186))[6];
//not do dummy comment
void* cons = (decode_clo(env27186))[5];
//not do dummy comment
void* list = (decode_clo(env27186))[4];
//not do dummy comment
void* cdr = (decode_clo(env27186))[3];
//not do dummy comment
void* filter = (decode_clo(env27186))[2];
//not do dummy comment
void* car = (decode_clo(env27186))[1];

//if-clause
bool if_guard27326 = is_true(a2673127004);
if(if_guard27326)
{

//creating new closure instance
void** clo27328 = alloc_clo(lam27171_fptr, 1);

//setting env list
clo27328[1] = kont26845;
void* f2684627005 = encode_clo(clo27328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2684627005;
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
void** clo27330 = alloc_clo(lam27183_fptr, 7);

//setting env list
clo27330[1] = car;
clo27330[2] = filter;
clo27330[3] = cons;
clo27330[4] = op;
clo27330[5] = lst;
clo27330[6] = kont26845;
clo27330[7] = cdr;
void* f2685227007 = encode_clo(clo27330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2685227007;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27185 = encode_clo(alloc_clo(lam27185_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27187 = arg_buffer[1];
//reading env and args
void* kont26845 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27332 = alloc_clo(lam27185_fptr, 8);

//setting env list
clo27332[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo27332[2] = filter;
clo27332[3] = cdr;
clo27332[4] = list;
clo27332[5] = cons;
clo27332[6] = op;
clo27332[7] = lst;
clo27332[8] = kont26845;
void* f2685327003 = encode_clo(clo27332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2685327003;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam27188_fptr() // lam27188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27189 = arg_buffer[1];
//reading env and args
void* a2674327026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env27189))[3];
//not do dummy comment
void* a2674127023 = (decode_clo(env27189))[2];
//not do dummy comment
void* kont26854 = (decode_clo(env27189))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont26854;
arg_buffer[3] = a2674127023;
arg_buffer[4] = a2674327026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27188 = encode_clo(alloc_clo(lam27188_fptr, 0));

void* lam27191_fptr() // lam27191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27192 = arg_buffer[1];
//reading env and args
void* a2674127023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env27192))[4];
//not do dummy comment
void* kont26854 = (decode_clo(env27192))[3];
//not do dummy comment
void* n = (decode_clo(env27192))[2];
//not do dummy comment
void* _u45 = (decode_clo(env27192))[1];
mpz_t* mpzvar27333 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27333, "1", 10);
void* a2674227024 = encode_mpz(mpzvar27333);

//creating new closure instance
void** clo27335 = alloc_clo(lam27188_fptr, 3);

//setting env list
clo27335[1] = kont26854;
clo27335[2] = a2674127023;
clo27335[3] = drop;
void* f2685527025 = encode_clo(clo27335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2685527025;
arg_buffer[3] = n;
arg_buffer[4] = a2674227024;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27191 = encode_clo(alloc_clo(lam27191_fptr, 0));

void* lam27193_fptr() // lam27193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27194 = arg_buffer[1];
//reading env and args
void* a2674027021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27194))[6];
//not do dummy comment
void* kont26854 = (decode_clo(env27194))[5];
//not do dummy comment
void* n = (decode_clo(env27194))[4];
//not do dummy comment
void* _u45 = (decode_clo(env27194))[3];
//not do dummy comment
void* lst = (decode_clo(env27194))[2];
//not do dummy comment
void* drop = (decode_clo(env27194))[1];

//if-clause
bool if_guard27336 = is_true(a2674027021);
if(if_guard27336)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26854);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26854))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27338 = alloc_clo(lam27191_fptr, 4);

//setting env list
clo27338[1] = _u45;
clo27338[2] = n;
clo27338[3] = kont26854;
clo27338[4] = drop;
void* f2685627022 = encode_clo(clo27338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2685627022;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27193 = encode_clo(alloc_clo(lam27193_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27196 = arg_buffer[1];
//reading env and args
void* kont26854 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar27339 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar27339, "0", 10);
void* a2673927019 = encode_mpz(mpzvar27339);

//creating new closure instance
void** clo27341 = alloc_clo(lam27193_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo27341[1] = drop;
clo27341[2] = lst;
clo27341[3] = _u45;
clo27341[4] = n;
clo27341[5] = kont26854;
clo27341[6] = cdr;
void* f2685727020 = encode_clo(clo27341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2685727020;
arg_buffer[3] = n;
arg_buffer[4] = a2673927019;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam27197_fptr() // lam27197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27198 = arg_buffer[1];
//reading env and args
void* a2674727034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26858 = (decode_clo(env27198))[3];
//not do dummy comment
void* proc = (decode_clo(env27198))[2];
//not do dummy comment
void* a2674527030 = (decode_clo(env27198))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont26858;
arg_buffer[3] = a2674527030;
arg_buffer[4] = a2674727034;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27197 = encode_clo(alloc_clo(lam27197_fptr, 0));

void* lam27199_fptr() // lam27199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27200 = arg_buffer[1];
//reading env and args
void* a2674627032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26858 = (decode_clo(env27200))[5];
//not do dummy comment
void* foldr = (decode_clo(env27200))[4];
//not do dummy comment
void* a2674527030 = (decode_clo(env27200))[3];
//not do dummy comment
void* proc = (decode_clo(env27200))[2];
//not do dummy comment
void* acc = (decode_clo(env27200))[1];

//creating new closure instance
void** clo27343 = alloc_clo(lam27197_fptr, 3);

//setting env list
clo27343[1] = a2674527030;
clo27343[2] = proc;
clo27343[3] = kont26858;
void* f2685927033 = encode_clo(clo27343);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2685927033;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2674627032;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27199 = encode_clo(alloc_clo(lam27199_fptr, 0));

void* lam27201_fptr() // lam27201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27202 = arg_buffer[1];
//reading env and args
void* a2674527030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26858 = (decode_clo(env27202))[6];
//not do dummy comment
void* cdr = (decode_clo(env27202))[5];
//not do dummy comment
void* foldr = (decode_clo(env27202))[4];
//not do dummy comment
void* lst = (decode_clo(env27202))[3];
//not do dummy comment
void* proc = (decode_clo(env27202))[2];
//not do dummy comment
void* acc = (decode_clo(env27202))[1];

//creating new closure instance
void** clo27345 = alloc_clo(lam27199_fptr, 5);

//setting env list
clo27345[1] = acc;
clo27345[2] = proc;
clo27345[3] = a2674527030;
clo27345[4] = foldr;
clo27345[5] = kont26858;
void* f2686027031 = encode_clo(clo27345);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2686027031;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27201 = encode_clo(alloc_clo(lam27201_fptr, 0));

void* lam27203_fptr() // lam27203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27204 = arg_buffer[1];
//reading env and args
void* a2674427028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env27204))[7];
//not do dummy comment
void* kont26858 = (decode_clo(env27204))[6];
//not do dummy comment
void* cdr = (decode_clo(env27204))[5];
//not do dummy comment
void* foldr = (decode_clo(env27204))[4];
//not do dummy comment
void* lst = (decode_clo(env27204))[3];
//not do dummy comment
void* proc = (decode_clo(env27204))[2];
//not do dummy comment
void* acc = (decode_clo(env27204))[1];

//if-clause
bool if_guard27346 = is_true(a2674427028);
if(if_guard27346)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26858);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26858))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27348 = alloc_clo(lam27201_fptr, 6);

//setting env list
clo27348[1] = acc;
clo27348[2] = proc;
clo27348[3] = lst;
clo27348[4] = foldr;
clo27348[5] = cdr;
clo27348[6] = kont26858;
void* f2686127029 = encode_clo(clo27348);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2686127029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27203 = encode_clo(alloc_clo(lam27203_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27205 = arg_buffer[1];
//reading env and args
void* kont26858 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo27350 = alloc_clo(lam27203_fptr, 7);

//setting env list
clo27350[1] = acc;
clo27350[2] = proc;
clo27350[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo27350[4] = foldr;
clo27350[5] = cdr;
clo27350[6] = kont26858;
clo27350[7] = car;
void* f2686227027 = encode_clo(clo27350);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2686227027;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam27206_fptr() // lam27206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27207 = arg_buffer[1];
//reading env and args
void* a2675127042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2674927038 = (decode_clo(env27207))[3];
//not do dummy comment
void* kont26863 = (decode_clo(env27207))[2];
//not do dummy comment
void* cons = (decode_clo(env27207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont26863;
arg_buffer[3] = a2674927038;
arg_buffer[4] = a2675127042;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27206 = encode_clo(alloc_clo(lam27206_fptr, 0));

void* lam27208_fptr() // lam27208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27209 = arg_buffer[1];
//reading env and args
void* a2675027040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2674927038 = (decode_clo(env27209))[5];
//not do dummy comment
void* kont26863 = (decode_clo(env27209))[4];
//not do dummy comment
void* append = (decode_clo(env27209))[3];
//not do dummy comment
void* lst2 = (decode_clo(env27209))[2];
//not do dummy comment
void* cons = (decode_clo(env27209))[1];

//creating new closure instance
void** clo27352 = alloc_clo(lam27206_fptr, 3);

//setting env list
clo27352[1] = cons;
clo27352[2] = kont26863;
clo27352[3] = a2674927038;
void* f2686427041 = encode_clo(clo27352);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2686427041;
arg_buffer[3] = a2675027040;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27208 = encode_clo(alloc_clo(lam27208_fptr, 0));

void* lam27210_fptr() // lam27210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27211 = arg_buffer[1];
//reading env and args
void* a2674927038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27211))[6];
//not do dummy comment
void* kont26863 = (decode_clo(env27211))[5];
//not do dummy comment
void* append = (decode_clo(env27211))[4];
//not do dummy comment
void* lst2 = (decode_clo(env27211))[3];
//not do dummy comment
void* lst1 = (decode_clo(env27211))[2];
//not do dummy comment
void* cons = (decode_clo(env27211))[1];

//creating new closure instance
void** clo27354 = alloc_clo(lam27208_fptr, 5);

//setting env list
clo27354[1] = cons;
clo27354[2] = lst2;
clo27354[3] = append;
clo27354[4] = kont26863;
clo27354[5] = a2674927038;
void* f2686527039 = encode_clo(clo27354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2686527039;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27210 = encode_clo(alloc_clo(lam27210_fptr, 0));

void* lam27212_fptr() // lam27212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27213 = arg_buffer[1];
//reading env and args
void* a2674827036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env27213))[7];
//not do dummy comment
void* kont26863 = (decode_clo(env27213))[6];
//not do dummy comment
void* append = (decode_clo(env27213))[5];
//not do dummy comment
void* lst2 = (decode_clo(env27213))[4];
//not do dummy comment
void* cons = (decode_clo(env27213))[3];
//not do dummy comment
void* lst1 = (decode_clo(env27213))[2];
//not do dummy comment
void* car = (decode_clo(env27213))[1];

//if-clause
bool if_guard27355 = is_true(a2674827036);
if(if_guard27355)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26863);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo27357 = alloc_clo(lam27210_fptr, 6);

//setting env list
clo27357[1] = cons;
clo27357[2] = lst1;
clo27357[3] = lst2;
clo27357[4] = append;
clo27357[5] = kont26863;
clo27357[6] = cdr;
void* f2686627037 = encode_clo(clo27357);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2686627037;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam27212 = encode_clo(alloc_clo(lam27212_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27214 = arg_buffer[1];
//reading env and args
void* kont26863 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo27359 = alloc_clo(lam27212_fptr, 7);

//setting env list
clo27359[1] = car;
clo27359[2] = lst1;
clo27359[3] = cons;
clo27359[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo27359[5] = append;
clo27359[6] = kont26863;
clo27359[7] = cdr;
void* f2686727035 = encode_clo(clo27359);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2686727035;
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
void* _27215 = arg_buffer[1];
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

void* kont2686827043 = prim_car(lst);
void* lst27044 = prim_cdr(lst);
void* x2675227045 = apply_prim_hash(lst27044);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2686827043);
arg_buffer[2] = x2675227045;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2686827043))[0]);
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
void* _27216 = arg_buffer[1];
//reading env and args
void* kont26870 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2675327046 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26870);
arg_buffer[2] = x2675327046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26870))[0]);
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
void* _27217 = arg_buffer[1];
//reading env and args
void* kont26871 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2675427047 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26871);
arg_buffer[2] = x2675427047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26871))[0]);
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
void* _27218 = arg_buffer[1];
//reading env and args
void* kont26872 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2675527048 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26872);
arg_buffer[2] = x2675527048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26872))[0]);
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
void* _27219 = arg_buffer[1];
//reading env and args
void* kont26873 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2675627049 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26873);
arg_buffer[2] = x2675627049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26873))[0]);
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
void* _27220 = arg_buffer[1];
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

void* kont2687427050 = prim_car(lst);
void* lst27051 = prim_cdr(lst);
void* x2675727052 = apply_prim_set(lst27051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2687427050);
arg_buffer[2] = x2675727052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2687427050))[0]);
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
void* _27221 = arg_buffer[1];
//reading env and args
void* kont26876 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2675827053 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26876);
arg_buffer[2] = x2675827053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26876))[0]);
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
void* _27222 = arg_buffer[1];
//reading env and args
void* kont26877 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2675927054 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26877);
arg_buffer[2] = x2675927054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26877))[0]);
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
void* _27223 = arg_buffer[1];
//reading env and args
void* kont26878 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2676027055 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26878);
arg_buffer[2] = x2676027055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26878))[0]);
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
void* _27224 = arg_buffer[1];
//reading env and args
void* kont26879 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2676127056 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26879);
arg_buffer[2] = x2676127056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26879))[0]);
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
void* _27225 = arg_buffer[1];
//reading env and args
void* kont26880 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2676227057 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26880);
arg_buffer[2] = x2676227057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26880))[0]);
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
void* _27226 = arg_buffer[1];
//reading env and args
void* kont26881 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2676327058 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26881);
arg_buffer[2] = x2676327058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26881))[0]);
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
void* _27227 = arg_buffer[1];
//reading env and args
void* kont26882 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2676427059 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26882);
arg_buffer[2] = x2676427059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26882))[0]);
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
void* _27228 = arg_buffer[1];
//reading env and args
void* kont26883 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2676527060 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26883);
arg_buffer[2] = x2676527060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26883))[0]);
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
void* _27229 = arg_buffer[1];
//reading env and args
void* kont26884 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2676627061 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26884);
arg_buffer[2] = x2676627061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26884))[0]);
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
void* _27230 = arg_buffer[1];
//reading env and args
void* kont26885 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2676727062 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26885);
arg_buffer[2] = x2676727062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26885))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27234 = arg_buffer[1];
//reading env and args
void* kont26886 = arg_buffer[2];
//Dummy comment
mpf_t* mpfvar27360 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar27360, "1.4", 10);
void* a2676827063 = encode_mpf(mpfvar27360);
mpf_t* mpfvar27361 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar27361, "2.5", 10);
void* a2676927064 = encode_mpf(mpfvar27361);
mpf_t* mpfvar27362 = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
mpf_init_set_str(*mpfvar27362, "1.0", 10);
void* a2677027065 = encode_mpf(mpfvar27362);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u42);
arg_buffer[2] = kont26886;
arg_buffer[3] = a2676827063;
arg_buffer[4] = a2676927064;
arg_buffer[5] = a2677027065;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u42))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam27235_fptr() // lam27235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env27236 = arg_buffer[1];
//reading env and args
void* x2677127067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont26887 = (decode_clo(env27236))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont26887);
arg_buffer[2] = x2677127067;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont26887))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam27235 = encode_clo(alloc_clo(lam27235_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _27237 = arg_buffer[1];
//reading env and args
void* kont26887 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo27364 = alloc_clo(lam27235_fptr, 1);

//setting env list
clo27364[1] = kont26887;
void* f2688827066 = encode_clo(clo27364);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2688827066;
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

