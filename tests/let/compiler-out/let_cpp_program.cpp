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
void* _22131 = arg_buffer[1];
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

void* kont2183321951 = prim_car(lst);
void* lst21952 = prim_cdr(lst);
void* x2173321953 = apply_prim__u43(lst21952);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2183321951);
arg_buffer[2] = x2173321953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2183321951))[0]);
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
void* _22132 = arg_buffer[1];
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

void* kont2183521954 = prim_car(lst);
void* lst21955 = prim_cdr(lst);
void* x2173421956 = apply_prim_max(lst21955);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2183521954);
arg_buffer[2] = x2173421956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2183521954))[0]);
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
void* _22133 = arg_buffer[1];
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

void* kont2183721957 = prim_car(lst);
void* lst21958 = prim_cdr(lst);
void* x2173521959 = apply_prim__u45(lst21958);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2183721957);
arg_buffer[2] = x2173521959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2183721957))[0]);
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
void* _22134 = arg_buffer[1];
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

void* kont2183921960 = prim_car(lst);
void* lst21961 = prim_cdr(lst);
void* x2173621962 = apply_prim__u42(lst21961);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2183921960);
arg_buffer[2] = x2173621962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2183921960))[0]);
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
void* _22135 = arg_buffer[1];
//reading env and args
void* kont21841 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2173721963 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21841);
arg_buffer[2] = x2173721963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21841))[0]);
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
void* _22136 = arg_buffer[1];
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

void* kont2184221964 = prim_car(lst);
void* lst21965 = prim_cdr(lst);
void* x2173821966 = apply_prim__u47(lst21965);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2184221964);
arg_buffer[2] = x2173821966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2184221964))[0]);
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
void* _22137 = arg_buffer[1];
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

void* kont2184421967 = prim_car(lst);
void* lst21968 = prim_cdr(lst);
void* x2173921969 = apply_prim__u61(lst21968);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2184421967);
arg_buffer[2] = x2173921969;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2184421967))[0]);
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
void* _22138 = arg_buffer[1];
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

void* kont2184621970 = prim_car(lst);
void* lst21971 = prim_cdr(lst);
void* x2174021972 = apply_prim__u62(lst21971);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2184621970);
arg_buffer[2] = x2174021972;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2184621970))[0]);
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
void* _22139 = arg_buffer[1];
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

void* kont2184821973 = prim_car(lst);
void* lst21974 = prim_cdr(lst);
void* x2174121975 = apply_prim__u60(lst21974);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2184821973);
arg_buffer[2] = x2174121975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2184821973))[0]);
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
void* _22140 = arg_buffer[1];
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

void* kont2185021976 = prim_car(lst);
void* lst21977 = prim_cdr(lst);
void* x2174221978 = apply_prim__u60_u61(lst21977);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2185021976);
arg_buffer[2] = x2174221978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2185021976))[0]);
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
void* _22141 = arg_buffer[1];
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

void* kont2185221979 = prim_car(lst);
void* lst21980 = prim_cdr(lst);
void* x2174321981 = apply_prim__u62_u61(lst21980);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2185221979);
arg_buffer[2] = x2174321981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2185221979))[0]);
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
void* _22142 = arg_buffer[1];
//reading env and args
void* kont21854 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2174421982 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21854);
arg_buffer[2] = x2174421982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21854))[0]);
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
void* _22143 = arg_buffer[1];
//reading env and args
void* kont21855 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2174521983 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21855);
arg_buffer[2] = x2174521983;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21855))[0]);
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
void* _22144 = arg_buffer[1];
//reading env and args
void* kont21856 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2174621984 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21856);
arg_buffer[2] = x2174621984;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21856))[0]);
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
void* _22145 = arg_buffer[1];
//reading env and args
void* kont21857 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2174721985 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21857);
arg_buffer[2] = x2174721985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21857))[0]);
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
void* _22146 = arg_buffer[1];
//reading env and args
void* kont21858 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2174821986 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21858);
arg_buffer[2] = x2174821986;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21858))[0]);
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
void* _22147 = arg_buffer[1];
//reading env and args
void* kont21859 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2174921987 = prim_abs(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21859);
arg_buffer[2] = x2174921987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21859))[0]);
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
void* _22148 = arg_buffer[1];
//reading env and args
void* kont21860 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2175021988 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21860);
arg_buffer[2] = x2175021988;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21860))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam22149_fptr() // lam22149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22150 = arg_buffer[1];
//reading env and args
void* a2175321992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env22150))[3];
//not do dummy comment
void* a2175121989 = (decode_clo(env22150))[2];
//not do dummy comment
void* kont21861 = (decode_clo(env22150))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont21861;
arg_buffer[3] = a2175121989;
arg_buffer[4] = a2175321992;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22149 = encode_clo(alloc_clo(lam22149_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22153 = arg_buffer[1];
//reading env and args
void* kont21861 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22302 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22302, "0", 10);
void* a2175121989 = encode_mpz(mpzvar22302);
mpz_t* mpzvar22303 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22303, "2", 10);
void* a2175221990 = encode_mpz(mpzvar22303);

//creating new closure instance
void** clo22305 = alloc_clo(lam22149_fptr, 3);

//setting env list
clo22305[1] = kont21861;
clo22305[2] = a2175121989;
clo22305[3] = equal_u63;
void* f2186221991 = encode_clo(clo22305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2186221991;
arg_buffer[3] = x;
arg_buffer[4] = a2175221990;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam22154_fptr() // lam22154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22155 = arg_buffer[1];
//reading env and args
void* a2175621996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21863 = (decode_clo(env22155))[3];
//not do dummy comment
void* a2175421993 = (decode_clo(env22155))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env22155))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont21863;
arg_buffer[3] = a2175421993;
arg_buffer[4] = a2175621996;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22154 = encode_clo(alloc_clo(lam22154_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22158 = arg_buffer[1];
//reading env and args
void* kont21863 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar22306 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22306, "1", 10);
void* a2175421993 = encode_mpz(mpzvar22306);
mpz_t* mpzvar22307 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22307, "2", 10);
void* a2175521994 = encode_mpz(mpzvar22307);

//creating new closure instance
void** clo22309 = alloc_clo(lam22154_fptr, 3);

//setting env list
clo22309[1] = equal_u63;
clo22309[2] = a2175421993;
clo22309[3] = kont21863;
void* f2186421995 = encode_clo(clo22309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2186421995;
arg_buffer[3] = x;
arg_buffer[4] = a2175521994;
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
void* _22159 = arg_buffer[1];
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

void* kont2186521997 = prim_car(x);
void* x21998 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2186521997);
arg_buffer[2] = x21998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2186521997))[0]);
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
void* _22160 = arg_buffer[1];
//reading env and args
void* kont21867 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2175721999 = prim_inexact_u45_u62exact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21867);
arg_buffer[2] = x2175721999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21867))[0]);
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
void* _22161 = arg_buffer[1];
//reading env and args
void* kont21868 = arg_buffer[2];
void* val = arg_buffer[3];
//Dummy comment
void* x2175822000 = prim_exact_u45_u62inexact(val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21868);
arg_buffer[2] = x2175822000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21868))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void* lam22164_fptr() // lam22164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22165 = arg_buffer[1];
//reading env and args
void* a2176422010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env22165))[3];
//not do dummy comment
void* x = (decode_clo(env22165))[2];
//not do dummy comment
void* kont21869 = (decode_clo(env22165))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont21869;
arg_buffer[3] = x;
arg_buffer[4] = a2176422010;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22164 = encode_clo(alloc_clo(lam22164_fptr, 0));

void* lam22166_fptr() // lam22166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22167 = arg_buffer[1];
//reading env and args
void* a2176222007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22167))[5];
//not do dummy comment
void* lst = (decode_clo(env22167))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env22167))[3];
//not do dummy comment
void* x = (decode_clo(env22167))[2];
//not do dummy comment
void* kont21869 = (decode_clo(env22167))[1];

//if-clause
bool if_guard22310 = is_true(a2176222007);
if(if_guard22310)
{
void* x2176322008 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21869);
arg_buffer[2] = x2176322008;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21869))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22312 = alloc_clo(lam22164_fptr, 3);

//setting env list
clo22312[1] = kont21869;
clo22312[2] = x;
clo22312[3] = member_u63;
void* f2187022009 = encode_clo(clo22312);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2187022009;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22166 = encode_clo(alloc_clo(lam22166_fptr, 0));

void* lam22168_fptr() // lam22168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22169 = arg_buffer[1];
//reading env and args
void* a2176122005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22169))[6];
//not do dummy comment
void* lst = (decode_clo(env22169))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env22169))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env22169))[3];
//not do dummy comment
void* x = (decode_clo(env22169))[2];
//not do dummy comment
void* kont21869 = (decode_clo(env22169))[1];

//creating new closure instance
void** clo22314 = alloc_clo(lam22166_fptr, 5);

//setting env list
clo22314[1] = kont21869;
clo22314[2] = x;
clo22314[3] = member_u63;
clo22314[4] = lst;
clo22314[5] = cdr;
void* f2187122006 = encode_clo(clo22314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2187122006;
arg_buffer[3] = a2176122005;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22168 = encode_clo(alloc_clo(lam22168_fptr, 0));

void* lam22170_fptr() // lam22170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22171 = arg_buffer[1];
//reading env and args
void* a2175922002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22171))[7];
//not do dummy comment
void* lst = (decode_clo(env22171))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env22171))[5];
//not do dummy comment
void* car = (decode_clo(env22171))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env22171))[3];
//not do dummy comment
void* x = (decode_clo(env22171))[2];
//not do dummy comment
void* kont21869 = (decode_clo(env22171))[1];

//if-clause
bool if_guard22315 = is_true(a2175922002);
if(if_guard22315)
{
void* x2176022003 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21869);
arg_buffer[2] = x2176022003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21869))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22317 = alloc_clo(lam22168_fptr, 6);

//setting env list
clo22317[1] = kont21869;
clo22317[2] = x;
clo22317[3] = member_u63;
clo22317[4] = equal_u63;
clo22317[5] = lst;
clo22317[6] = cdr;
void* f2187222004 = encode_clo(clo22317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2187222004;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22170 = encode_clo(alloc_clo(lam22170_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22172 = arg_buffer[1];
//reading env and args
void* kont21869 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22319 = alloc_clo(lam22170_fptr, 7);

//setting env list
clo22319[1] = kont21869;
clo22319[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo22319[3] = member_u63;
clo22319[4] = car;
clo22319[5] = equal_u63;
clo22319[6] = lst;
clo22319[7] = cdr;
void* f2187322001 = encode_clo(clo22319);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2187322001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam22173_fptr() // lam22173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22174 = arg_buffer[1];
//reading env and args
void* a2176822018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21874 = (decode_clo(env22174))[4];
//not do dummy comment
void* fun = (decode_clo(env22174))[3];
//not do dummy comment
void* a2176722016 = (decode_clo(env22174))[2];
//not do dummy comment
void* foldl = (decode_clo(env22174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont21874;
arg_buffer[3] = fun;
arg_buffer[4] = a2176722016;
arg_buffer[5] = a2176822018;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22173 = encode_clo(alloc_clo(lam22173_fptr, 0));

void* lam22175_fptr() // lam22175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22176 = arg_buffer[1];
//reading env and args
void* a2176722016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22176))[5];
//not do dummy comment
void* fun = (decode_clo(env22176))[4];
//not do dummy comment
void* foldl = (decode_clo(env22176))[3];
//not do dummy comment
void* kont21874 = (decode_clo(env22176))[2];
//not do dummy comment
void* cdr = (decode_clo(env22176))[1];

//creating new closure instance
void** clo22321 = alloc_clo(lam22173_fptr, 4);

//setting env list
clo22321[1] = foldl;
clo22321[2] = a2176722016;
clo22321[3] = fun;
clo22321[4] = kont21874;
void* f2187522017 = encode_clo(clo22321);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2187522017;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22175 = encode_clo(alloc_clo(lam22175_fptr, 0));

void* lam22177_fptr() // lam22177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22178 = arg_buffer[1];
//reading env and args
void* a2176622014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22178))[6];
//not do dummy comment
void* fun = (decode_clo(env22178))[5];
//not do dummy comment
void* acc = (decode_clo(env22178))[4];
//not do dummy comment
void* foldl = (decode_clo(env22178))[3];
//not do dummy comment
void* kont21874 = (decode_clo(env22178))[2];
//not do dummy comment
void* cdr = (decode_clo(env22178))[1];

//creating new closure instance
void** clo22323 = alloc_clo(lam22175_fptr, 5);

//setting env list
clo22323[1] = cdr;
clo22323[2] = kont21874;
clo22323[3] = foldl;
clo22323[4] = fun;
clo22323[5] = lst;
void* f2187622015 = encode_clo(clo22323);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2187622015;
arg_buffer[3] = a2176622014;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22177 = encode_clo(alloc_clo(lam22177_fptr, 0));

void* lam22179_fptr() // lam22179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22180 = arg_buffer[1];
//reading env and args
void* a2176522012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22180))[7];
//not do dummy comment
void* fun = (decode_clo(env22180))[6];
//not do dummy comment
void* acc = (decode_clo(env22180))[5];
//not do dummy comment
void* car = (decode_clo(env22180))[4];
//not do dummy comment
void* foldl = (decode_clo(env22180))[3];
//not do dummy comment
void* kont21874 = (decode_clo(env22180))[2];
//not do dummy comment
void* cdr = (decode_clo(env22180))[1];

//if-clause
bool if_guard22324 = is_true(a2176522012);
if(if_guard22324)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21874);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21874))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22326 = alloc_clo(lam22177_fptr, 6);

//setting env list
clo22326[1] = cdr;
clo22326[2] = kont21874;
clo22326[3] = foldl;
clo22326[4] = acc;
clo22326[5] = fun;
clo22326[6] = lst;
void* f2187722013 = encode_clo(clo22326);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2187722013;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22179 = encode_clo(alloc_clo(lam22179_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22181 = arg_buffer[1];
//reading env and args
void* kont21874 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22328 = alloc_clo(lam22179_fptr, 7);

//setting env list
clo22328[1] = cdr;
clo22328[2] = kont21874;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo22328[3] = foldl;
clo22328[4] = car;
clo22328[5] = acc;
clo22328[6] = fun;
clo22328[7] = lst;
void* f2187822011 = encode_clo(clo22328);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2187822011;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam22182_fptr() // lam22182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22183 = arg_buffer[1];
//reading env and args
void* a2177222026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2177022022 = (decode_clo(env22183))[3];
//not do dummy comment
void* kont21879 = (decode_clo(env22183))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22183))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont21879;
arg_buffer[3] = a2177022022;
arg_buffer[4] = a2177222026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22182 = encode_clo(alloc_clo(lam22182_fptr, 0));

void* lam22184_fptr() // lam22184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22185 = arg_buffer[1];
//reading env and args
void* a2177122024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2177022022 = (decode_clo(env22185))[5];
//not do dummy comment
void* kont21879 = (decode_clo(env22185))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22185))[3];
//not do dummy comment
void* lst2 = (decode_clo(env22185))[2];
//not do dummy comment
void* cons = (decode_clo(env22185))[1];

//creating new closure instance
void** clo22330 = alloc_clo(lam22182_fptr, 3);

//setting env list
clo22330[1] = reverse_u45helper;
clo22330[2] = kont21879;
clo22330[3] = a2177022022;
void* f2188022025 = encode_clo(clo22330);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2188022025;
arg_buffer[3] = a2177122024;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22184 = encode_clo(alloc_clo(lam22184_fptr, 0));

void* lam22186_fptr() // lam22186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22187 = arg_buffer[1];
//reading env and args
void* a2177022022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22187))[6];
//not do dummy comment
void* kont21879 = (decode_clo(env22187))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22187))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22187))[3];
//not do dummy comment
void* car = (decode_clo(env22187))[2];
//not do dummy comment
void* cons = (decode_clo(env22187))[1];

//creating new closure instance
void** clo22332 = alloc_clo(lam22184_fptr, 5);

//setting env list
clo22332[1] = cons;
clo22332[2] = lst2;
clo22332[3] = reverse_u45helper;
clo22332[4] = kont21879;
clo22332[5] = a2177022022;
void* f2188122023 = encode_clo(clo22332);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2188122023;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22186 = encode_clo(alloc_clo(lam22186_fptr, 0));

void* lam22188_fptr() // lam22188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22189 = arg_buffer[1];
//reading env and args
void* a2176922020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22189))[7];
//not do dummy comment
void* lst = (decode_clo(env22189))[6];
//not do dummy comment
void* kont21879 = (decode_clo(env22189))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22189))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22189))[3];
//not do dummy comment
void* car = (decode_clo(env22189))[2];
//not do dummy comment
void* cons = (decode_clo(env22189))[1];

//if-clause
bool if_guard22333 = is_true(a2176922020);
if(if_guard22333)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21879);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21879))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22335 = alloc_clo(lam22186_fptr, 6);

//setting env list
clo22335[1] = cons;
clo22335[2] = car;
clo22335[3] = lst2;
clo22335[4] = reverse_u45helper;
clo22335[5] = kont21879;
clo22335[6] = lst;
void* f2188222021 = encode_clo(clo22335);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2188222021;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22188 = encode_clo(alloc_clo(lam22188_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22190 = arg_buffer[1];
//reading env and args
void* kont21879 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22337 = alloc_clo(lam22188_fptr, 7);

//setting env list
clo22337[1] = cons;
clo22337[2] = car;
clo22337[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo22337[4] = reverse_u45helper;
clo22337[5] = kont21879;
clo22337[6] = lst;
clo22337[7] = cdr;
void* f2188322019 = encode_clo(clo22337);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2188322019;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam22191_fptr() // lam22191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22192 = arg_buffer[1];
//reading env and args
void* a2177322028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22192))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env22192))[2];
//not do dummy comment
void* kont21884 = (decode_clo(env22192))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont21884;
arg_buffer[3] = lst;
arg_buffer[4] = a2177322028;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22191 = encode_clo(alloc_clo(lam22191_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22193 = arg_buffer[1];
//reading env and args
void* kont21884 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22339 = alloc_clo(lam22191_fptr, 3);

//setting env list
clo22339[1] = kont21884;
clo22339[2] = reverse_u45helper;
clo22339[3] = lst;
void* f2188522027 = encode_clo(clo22339);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2188522027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam22194_fptr() // lam22194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22195 = arg_buffer[1];
//reading env and args
void* x2177622033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21886 = (decode_clo(env22195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21886);
arg_buffer[2] = x2177622033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21886))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22194 = encode_clo(alloc_clo(lam22194_fptr, 0));

void* lam22196_fptr() // lam22196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22197 = arg_buffer[1];
//reading env and args
void* a2178122042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2177722035 = (decode_clo(env22197))[4];
//not do dummy comment
void* a2177922038 = (decode_clo(env22197))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22197))[2];
//not do dummy comment
void* kont21886 = (decode_clo(env22197))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont21886;
arg_buffer[3] = a2177722035;
arg_buffer[4] = a2177922038;
arg_buffer[5] = a2178122042;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22196 = encode_clo(alloc_clo(lam22196_fptr, 0));

void* lam22198_fptr() // lam22198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22199 = arg_buffer[1];
//reading env and args
void* a2178022040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2177722035 = (decode_clo(env22199))[6];
//not do dummy comment
void* a2177922038 = (decode_clo(env22199))[5];
//not do dummy comment
void* cons = (decode_clo(env22199))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env22199))[3];
//not do dummy comment
void* kont21886 = (decode_clo(env22199))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22199))[1];

//creating new closure instance
void** clo22341 = alloc_clo(lam22196_fptr, 4);

//setting env list
clo22341[1] = kont21886;
clo22341[2] = take_u45helper;
clo22341[3] = a2177922038;
clo22341[4] = a2177722035;
void* f2188822041 = encode_clo(clo22341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2188822041;
arg_buffer[3] = a2178022040;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22198 = encode_clo(alloc_clo(lam22198_fptr, 0));

void* lam22200_fptr() // lam22200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22201 = arg_buffer[1];
//reading env and args
void* a2177922038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2177722035 = (decode_clo(env22201))[7];
//not do dummy comment
void* lst = (decode_clo(env22201))[6];
//not do dummy comment
void* car = (decode_clo(env22201))[5];
//not do dummy comment
void* cons = (decode_clo(env22201))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env22201))[3];
//not do dummy comment
void* kont21886 = (decode_clo(env22201))[2];
//not do dummy comment
void* lst2 = (decode_clo(env22201))[1];

//creating new closure instance
void** clo22343 = alloc_clo(lam22198_fptr, 6);

//setting env list
clo22343[1] = lst2;
clo22343[2] = kont21886;
clo22343[3] = take_u45helper;
clo22343[4] = cons;
clo22343[5] = a2177922038;
clo22343[6] = a2177722035;
void* f2188922039 = encode_clo(clo22343);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2188922039;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22200 = encode_clo(alloc_clo(lam22200_fptr, 0));

void* lam22203_fptr() // lam22203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22204 = arg_buffer[1];
//reading env and args
void* a2177722035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22204))[8];
//not do dummy comment
void* cons = (decode_clo(env22204))[7];
//not do dummy comment
void* _u45 = (decode_clo(env22204))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env22204))[5];
//not do dummy comment
void* kont21886 = (decode_clo(env22204))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22204))[3];
//not do dummy comment
void* n = (decode_clo(env22204))[2];
//not do dummy comment
void* car = (decode_clo(env22204))[1];
mpz_t* mpzvar22344 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22344, "1", 10);
void* a2177822036 = encode_mpz(mpzvar22344);

//creating new closure instance
void** clo22346 = alloc_clo(lam22200_fptr, 7);

//setting env list
clo22346[1] = lst2;
clo22346[2] = kont21886;
clo22346[3] = take_u45helper;
clo22346[4] = cons;
clo22346[5] = car;
clo22346[6] = lst;
clo22346[7] = a2177722035;
void* f2189022037 = encode_clo(clo22346);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2189022037;
arg_buffer[3] = n;
arg_buffer[4] = a2177822036;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22203 = encode_clo(alloc_clo(lam22203_fptr, 0));

void* lam22205_fptr() // lam22205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22206 = arg_buffer[1];
//reading env and args
void* a2177522031 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22206))[10];
//not do dummy comment
void* lst = (decode_clo(env22206))[9];
//not do dummy comment
void* reverse = (decode_clo(env22206))[8];
//not do dummy comment
void* cons = (decode_clo(env22206))[7];
//not do dummy comment
void* _u45 = (decode_clo(env22206))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env22206))[5];
//not do dummy comment
void* kont21886 = (decode_clo(env22206))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22206))[3];
//not do dummy comment
void* n = (decode_clo(env22206))[2];
//not do dummy comment
void* car = (decode_clo(env22206))[1];

//if-clause
bool if_guard22347 = is_true(a2177522031);
if(if_guard22347)
{

//creating new closure instance
void** clo22349 = alloc_clo(lam22194_fptr, 1);

//setting env list
clo22349[1] = kont21886;
void* f2188722032 = encode_clo(clo22349);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2188722032;
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
void** clo22351 = alloc_clo(lam22203_fptr, 8);

//setting env list
clo22351[1] = car;
clo22351[2] = n;
clo22351[3] = lst2;
clo22351[4] = kont21886;
clo22351[5] = take_u45helper;
clo22351[6] = _u45;
clo22351[7] = cons;
clo22351[8] = lst;
void* f2189122034 = encode_clo(clo22351);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2189122034;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22205 = encode_clo(alloc_clo(lam22205_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22208 = arg_buffer[1];
//reading env and args
void* kont21886 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar22352 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22352, "0", 10);
void* a2177422029 = encode_mpz(mpzvar22352);

//creating new closure instance
void** clo22354 = alloc_clo(lam22205_fptr, 10);

//setting env list
clo22354[1] = car;
clo22354[2] = n;
clo22354[3] = lst2;
clo22354[4] = kont21886;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo22354[5] = take_u45helper;
clo22354[6] = _u45;
clo22354[7] = cons;
clo22354[8] = reverse;
clo22354[9] = lst;
clo22354[10] = cdr;
void* f2189222030 = encode_clo(clo22354);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2189222030;
arg_buffer[3] = n;
arg_buffer[4] = a2177422029;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam22209_fptr() // lam22209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22210 = arg_buffer[1];
//reading env and args
void* a2178222044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21893 = (decode_clo(env22210))[4];
//not do dummy comment
void* lst = (decode_clo(env22210))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env22210))[2];
//not do dummy comment
void* n = (decode_clo(env22210))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont21893;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2178222044;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22209 = encode_clo(alloc_clo(lam22209_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22211 = arg_buffer[1];
//reading env and args
void* kont21893 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22356 = alloc_clo(lam22209_fptr, 4);

//setting env list
clo22356[1] = n;
clo22356[2] = take_u45helper;
clo22356[3] = lst;
clo22356[4] = kont21893;
void* f2189422043 = encode_clo(clo22356);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2189422043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam22213_fptr() // lam22213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22214 = arg_buffer[1];
//reading env and args
void* a2178722052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21895 = (decode_clo(env22214))[3];
//not do dummy comment
void* _u43 = (decode_clo(env22214))[2];
//not do dummy comment
void* a2178522048 = (decode_clo(env22214))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont21895;
arg_buffer[3] = a2178522048;
arg_buffer[4] = a2178722052;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22213 = encode_clo(alloc_clo(lam22213_fptr, 0));

void* lam22215_fptr() // lam22215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22216 = arg_buffer[1];
//reading env and args
void* a2178622050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env22216))[4];
//not do dummy comment
void* a2178522048 = (decode_clo(env22216))[3];
//not do dummy comment
void* kont21895 = (decode_clo(env22216))[2];
//not do dummy comment
void* length = (decode_clo(env22216))[1];

//creating new closure instance
void** clo22358 = alloc_clo(lam22213_fptr, 3);

//setting env list
clo22358[1] = a2178522048;
clo22358[2] = _u43;
clo22358[3] = kont21895;
void* f2189622051 = encode_clo(clo22358);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2189622051;
arg_buffer[3] = a2178622050;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22215 = encode_clo(alloc_clo(lam22215_fptr, 0));

void* lam22218_fptr() // lam22218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22219 = arg_buffer[1];
//reading env and args
void* a2178322046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22219))[5];
//not do dummy comment
void* lst = (decode_clo(env22219))[4];
//not do dummy comment
void* _u43 = (decode_clo(env22219))[3];
//not do dummy comment
void* kont21895 = (decode_clo(env22219))[2];
//not do dummy comment
void* length = (decode_clo(env22219))[1];

//if-clause
bool if_guard22359 = is_true(a2178322046);
if(if_guard22359)
{
mpz_t* mpzvar22360 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22360, "0", 10);
void* x2178422047 = encode_mpz(mpzvar22360);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21895);
arg_buffer[2] = x2178422047;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21895))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar22361 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22361, "1", 10);
void* a2178522048 = encode_mpz(mpzvar22361);

//creating new closure instance
void** clo22363 = alloc_clo(lam22215_fptr, 4);

//setting env list
clo22363[1] = length;
clo22363[2] = kont21895;
clo22363[3] = a2178522048;
clo22363[4] = _u43;
void* f2189722049 = encode_clo(clo22363);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2189722049;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22218 = encode_clo(alloc_clo(lam22218_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22220 = arg_buffer[1];
//reading env and args
void* kont21895 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo22365 = alloc_clo(lam22218_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo22365[1] = length;
clo22365[2] = kont21895;
clo22365[3] = _u43;
clo22365[4] = lst;
clo22365[5] = cdr;
void* f2189822045 = encode_clo(clo22365);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2189822045;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam22221_fptr() // lam22221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22222 = arg_buffer[1];
//reading env and args
void* x2178922056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21899 = (decode_clo(env22222))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21899);
arg_buffer[2] = x2178922056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21899))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22221 = encode_clo(alloc_clo(lam22221_fptr, 0));

void* lam22223_fptr() // lam22223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22224 = arg_buffer[1];
//reading env and args
void* a2179322064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21899 = (decode_clo(env22224))[3];
//not do dummy comment
void* a2179122060 = (decode_clo(env22224))[2];
//not do dummy comment
void* cons = (decode_clo(env22224))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont21899;
arg_buffer[3] = a2179122060;
arg_buffer[4] = a2179322064;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22223 = encode_clo(alloc_clo(lam22223_fptr, 0));

void* lam22225_fptr() // lam22225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22226 = arg_buffer[1];
//reading env and args
void* a2179222062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env22226))[5];
//not do dummy comment
void* kont21899 = (decode_clo(env22226))[4];
//not do dummy comment
void* a2179122060 = (decode_clo(env22226))[3];
//not do dummy comment
void* proc = (decode_clo(env22226))[2];
//not do dummy comment
void* cons = (decode_clo(env22226))[1];

//creating new closure instance
void** clo22367 = alloc_clo(lam22223_fptr, 3);

//setting env list
clo22367[1] = cons;
clo22367[2] = a2179122060;
clo22367[3] = kont21899;
void* f2190122063 = encode_clo(clo22367);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2190122063;
arg_buffer[3] = proc;
arg_buffer[4] = a2179222062;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22225 = encode_clo(alloc_clo(lam22225_fptr, 0));

void* lam22227_fptr() // lam22227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22228 = arg_buffer[1];
//reading env and args
void* a2179122060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22228))[6];
//not do dummy comment
void* lst = (decode_clo(env22228))[5];
//not do dummy comment
void* map = (decode_clo(env22228))[4];
//not do dummy comment
void* kont21899 = (decode_clo(env22228))[3];
//not do dummy comment
void* proc = (decode_clo(env22228))[2];
//not do dummy comment
void* cons = (decode_clo(env22228))[1];

//creating new closure instance
void** clo22369 = alloc_clo(lam22225_fptr, 5);

//setting env list
clo22369[1] = cons;
clo22369[2] = proc;
clo22369[3] = a2179122060;
clo22369[4] = kont21899;
clo22369[5] = map;
void* f2190222061 = encode_clo(clo22369);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2190222061;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22227 = encode_clo(alloc_clo(lam22227_fptr, 0));

void* lam22229_fptr() // lam22229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22230 = arg_buffer[1];
//reading env and args
void* a2179022058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22230))[6];
//not do dummy comment
void* lst = (decode_clo(env22230))[5];
//not do dummy comment
void* map = (decode_clo(env22230))[4];
//not do dummy comment
void* kont21899 = (decode_clo(env22230))[3];
//not do dummy comment
void* proc = (decode_clo(env22230))[2];
//not do dummy comment
void* cons = (decode_clo(env22230))[1];

//creating new closure instance
void** clo22371 = alloc_clo(lam22227_fptr, 6);

//setting env list
clo22371[1] = cons;
clo22371[2] = proc;
clo22371[3] = kont21899;
clo22371[4] = map;
clo22371[5] = lst;
clo22371[6] = cdr;
void* f2190322059 = encode_clo(clo22371);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2190322059;
arg_buffer[3] = a2179022058;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22229 = encode_clo(alloc_clo(lam22229_fptr, 0));

void* lam22231_fptr() // lam22231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22232 = arg_buffer[1];
//reading env and args
void* a2178822054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22232))[8];
//not do dummy comment
void* map = (decode_clo(env22232))[7];
//not do dummy comment
void* kont21899 = (decode_clo(env22232))[6];
//not do dummy comment
void* proc = (decode_clo(env22232))[5];
//not do dummy comment
void* car = (decode_clo(env22232))[4];
//not do dummy comment
void* cons = (decode_clo(env22232))[3];
//not do dummy comment
void* list = (decode_clo(env22232))[2];
//not do dummy comment
void* cdr = (decode_clo(env22232))[1];

//if-clause
bool if_guard22372 = is_true(a2178822054);
if(if_guard22372)
{

//creating new closure instance
void** clo22374 = alloc_clo(lam22221_fptr, 1);

//setting env list
clo22374[1] = kont21899;
void* f2190022055 = encode_clo(clo22374);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2190022055;
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
void** clo22376 = alloc_clo(lam22229_fptr, 6);

//setting env list
clo22376[1] = cons;
clo22376[2] = proc;
clo22376[3] = kont21899;
clo22376[4] = map;
clo22376[5] = lst;
clo22376[6] = cdr;
void* f2190422057 = encode_clo(clo22376);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2190422057;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22231 = encode_clo(alloc_clo(lam22231_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22233 = arg_buffer[1];
//reading env and args
void* kont21899 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22378 = alloc_clo(lam22231_fptr, 8);

//setting env list
clo22378[1] = cdr;
clo22378[2] = list;
clo22378[3] = cons;
clo22378[4] = car;
clo22378[5] = proc;
clo22378[6] = kont21899;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo22378[7] = map;
clo22378[8] = lst;
void* f2190522053 = encode_clo(clo22378);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2190522053;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam22234_fptr() // lam22234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22235 = arg_buffer[1];
//reading env and args
void* x2179522068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21906 = (decode_clo(env22235))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21906);
arg_buffer[2] = x2179522068;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21906))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22234 = encode_clo(alloc_clo(lam22234_fptr, 0));

void* lam22236_fptr() // lam22236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22237 = arg_buffer[1];
//reading env and args
void* a2180022078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21906 = (decode_clo(env22237))[3];
//not do dummy comment
void* a2179822074 = (decode_clo(env22237))[2];
//not do dummy comment
void* cons = (decode_clo(env22237))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont21906;
arg_buffer[3] = a2179822074;
arg_buffer[4] = a2180022078;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22236 = encode_clo(alloc_clo(lam22236_fptr, 0));

void* lam22238_fptr() // lam22238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22239 = arg_buffer[1];
//reading env and args
void* a2179922076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21906 = (decode_clo(env22239))[5];
//not do dummy comment
void* op = (decode_clo(env22239))[4];
//not do dummy comment
void* a2179822074 = (decode_clo(env22239))[3];
//not do dummy comment
void* filter = (decode_clo(env22239))[2];
//not do dummy comment
void* cons = (decode_clo(env22239))[1];

//creating new closure instance
void** clo22380 = alloc_clo(lam22236_fptr, 3);

//setting env list
clo22380[1] = cons;
clo22380[2] = a2179822074;
clo22380[3] = kont21906;
void* f2190822077 = encode_clo(clo22380);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2190822077;
arg_buffer[3] = op;
arg_buffer[4] = a2179922076;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22238 = encode_clo(alloc_clo(lam22238_fptr, 0));

void* lam22240_fptr() // lam22240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22241 = arg_buffer[1];
//reading env and args
void* a2179822074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22241))[6];
//not do dummy comment
void* op = (decode_clo(env22241))[5];
//not do dummy comment
void* filter = (decode_clo(env22241))[4];
//not do dummy comment
void* cons = (decode_clo(env22241))[3];
//not do dummy comment
void* kont21906 = (decode_clo(env22241))[2];
//not do dummy comment
void* cdr = (decode_clo(env22241))[1];

//creating new closure instance
void** clo22382 = alloc_clo(lam22238_fptr, 5);

//setting env list
clo22382[1] = cons;
clo22382[2] = filter;
clo22382[3] = a2179822074;
clo22382[4] = op;
clo22382[5] = kont21906;
void* f2190922075 = encode_clo(clo22382);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2190922075;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22240 = encode_clo(alloc_clo(lam22240_fptr, 0));

void* lam22242_fptr() // lam22242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22243 = arg_buffer[1];
//reading env and args
void* a2180122080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21906 = (decode_clo(env22243))[3];
//not do dummy comment
void* op = (decode_clo(env22243))[2];
//not do dummy comment
void* filter = (decode_clo(env22243))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont21906;
arg_buffer[3] = op;
arg_buffer[4] = a2180122080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22242 = encode_clo(alloc_clo(lam22242_fptr, 0));

void* lam22244_fptr() // lam22244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22245 = arg_buffer[1];
//reading env and args
void* a2179722072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22245))[7];
//not do dummy comment
void* op = (decode_clo(env22245))[6];
//not do dummy comment
void* cons = (decode_clo(env22245))[5];
//not do dummy comment
void* kont21906 = (decode_clo(env22245))[4];
//not do dummy comment
void* cdr = (decode_clo(env22245))[3];
//not do dummy comment
void* filter = (decode_clo(env22245))[2];
//not do dummy comment
void* car = (decode_clo(env22245))[1];

//if-clause
bool if_guard22383 = is_true(a2179722072);
if(if_guard22383)
{

//creating new closure instance
void** clo22385 = alloc_clo(lam22240_fptr, 6);

//setting env list
clo22385[1] = cdr;
clo22385[2] = kont21906;
clo22385[3] = cons;
clo22385[4] = filter;
clo22385[5] = op;
clo22385[6] = lst;
void* f2191022073 = encode_clo(clo22385);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2191022073;
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
void** clo22387 = alloc_clo(lam22242_fptr, 3);

//setting env list
clo22387[1] = filter;
clo22387[2] = op;
clo22387[3] = kont21906;
void* f2191122079 = encode_clo(clo22387);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2191122079;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22244 = encode_clo(alloc_clo(lam22244_fptr, 0));

void* lam22246_fptr() // lam22246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22247 = arg_buffer[1];
//reading env and args
void* a2179622070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22247))[7];
//not do dummy comment
void* op = (decode_clo(env22247))[6];
//not do dummy comment
void* cons = (decode_clo(env22247))[5];
//not do dummy comment
void* kont21906 = (decode_clo(env22247))[4];
//not do dummy comment
void* cdr = (decode_clo(env22247))[3];
//not do dummy comment
void* filter = (decode_clo(env22247))[2];
//not do dummy comment
void* car = (decode_clo(env22247))[1];

//creating new closure instance
void** clo22389 = alloc_clo(lam22244_fptr, 7);

//setting env list
clo22389[1] = car;
clo22389[2] = filter;
clo22389[3] = cdr;
clo22389[4] = kont21906;
clo22389[5] = cons;
clo22389[6] = op;
clo22389[7] = lst;
void* f2191222071 = encode_clo(clo22389);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2191222071;
arg_buffer[3] = a2179622070;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22246 = encode_clo(alloc_clo(lam22246_fptr, 0));

void* lam22248_fptr() // lam22248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22249 = arg_buffer[1];
//reading env and args
void* a2179422066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env22249))[8];
//not do dummy comment
void* op = (decode_clo(env22249))[7];
//not do dummy comment
void* cons = (decode_clo(env22249))[6];
//not do dummy comment
void* list = (decode_clo(env22249))[5];
//not do dummy comment
void* kont21906 = (decode_clo(env22249))[4];
//not do dummy comment
void* cdr = (decode_clo(env22249))[3];
//not do dummy comment
void* filter = (decode_clo(env22249))[2];
//not do dummy comment
void* car = (decode_clo(env22249))[1];

//if-clause
bool if_guard22390 = is_true(a2179422066);
if(if_guard22390)
{

//creating new closure instance
void** clo22392 = alloc_clo(lam22234_fptr, 1);

//setting env list
clo22392[1] = kont21906;
void* f2190722067 = encode_clo(clo22392);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2190722067;
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
void** clo22394 = alloc_clo(lam22246_fptr, 7);

//setting env list
clo22394[1] = car;
clo22394[2] = filter;
clo22394[3] = cdr;
clo22394[4] = kont21906;
clo22394[5] = cons;
clo22394[6] = op;
clo22394[7] = lst;
void* f2191322069 = encode_clo(clo22394);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2191322069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22248 = encode_clo(alloc_clo(lam22248_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22250 = arg_buffer[1];
//reading env and args
void* kont21906 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22396 = alloc_clo(lam22248_fptr, 8);

//setting env list
clo22396[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo22396[2] = filter;
clo22396[3] = cdr;
clo22396[4] = kont21906;
clo22396[5] = list;
clo22396[6] = cons;
clo22396[7] = op;
clo22396[8] = lst;
void* f2191422065 = encode_clo(clo22396);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2191422065;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam22251_fptr() // lam22251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22252 = arg_buffer[1];
//reading env and args
void* a2180622088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2180422085 = (decode_clo(env22252))[3];
//not do dummy comment
void* drop = (decode_clo(env22252))[2];
//not do dummy comment
void* kont21915 = (decode_clo(env22252))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont21915;
arg_buffer[3] = a2180422085;
arg_buffer[4] = a2180622088;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22251 = encode_clo(alloc_clo(lam22251_fptr, 0));

void* lam22254_fptr() // lam22254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22255 = arg_buffer[1];
//reading env and args
void* a2180422085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env22255))[4];
//not do dummy comment
void* kont21915 = (decode_clo(env22255))[3];
//not do dummy comment
void* n = (decode_clo(env22255))[2];
//not do dummy comment
void* _u45 = (decode_clo(env22255))[1];
mpz_t* mpzvar22397 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22397, "1", 10);
void* a2180522086 = encode_mpz(mpzvar22397);

//creating new closure instance
void** clo22399 = alloc_clo(lam22251_fptr, 3);

//setting env list
clo22399[1] = kont21915;
clo22399[2] = drop;
clo22399[3] = a2180422085;
void* f2191622087 = encode_clo(clo22399);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2191622087;
arg_buffer[3] = n;
arg_buffer[4] = a2180522086;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22254 = encode_clo(alloc_clo(lam22254_fptr, 0));

void* lam22256_fptr() // lam22256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22257 = arg_buffer[1];
//reading env and args
void* a2180322083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22257))[6];
//not do dummy comment
void* kont21915 = (decode_clo(env22257))[5];
//not do dummy comment
void* n = (decode_clo(env22257))[4];
//not do dummy comment
void* _u45 = (decode_clo(env22257))[3];
//not do dummy comment
void* lst = (decode_clo(env22257))[2];
//not do dummy comment
void* drop = (decode_clo(env22257))[1];

//if-clause
bool if_guard22400 = is_true(a2180322083);
if(if_guard22400)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21915);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21915))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22402 = alloc_clo(lam22254_fptr, 4);

//setting env list
clo22402[1] = _u45;
clo22402[2] = n;
clo22402[3] = kont21915;
clo22402[4] = drop;
void* f2191722084 = encode_clo(clo22402);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2191722084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22256 = encode_clo(alloc_clo(lam22256_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22259 = arg_buffer[1];
//reading env and args
void* kont21915 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar22403 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22403, "0", 10);
void* a2180222081 = encode_mpz(mpzvar22403);

//creating new closure instance
void** clo22405 = alloc_clo(lam22256_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo22405[1] = drop;
clo22405[2] = lst;
clo22405[3] = _u45;
clo22405[4] = n;
clo22405[5] = kont21915;
clo22405[6] = cdr;
void* f2191822082 = encode_clo(clo22405);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2191822082;
arg_buffer[3] = n;
arg_buffer[4] = a2180222081;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam22260_fptr() // lam22260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22261 = arg_buffer[1];
//reading env and args
void* a2181022096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2180822092 = (decode_clo(env22261))[3];
//not do dummy comment
void* proc = (decode_clo(env22261))[2];
//not do dummy comment
void* kont21919 = (decode_clo(env22261))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont21919;
arg_buffer[3] = a2180822092;
arg_buffer[4] = a2181022096;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22260 = encode_clo(alloc_clo(lam22260_fptr, 0));

void* lam22262_fptr() // lam22262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22263 = arg_buffer[1];
//reading env and args
void* a2180922094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env22263))[5];
//not do dummy comment
void* a2180822092 = (decode_clo(env22263))[4];
//not do dummy comment
void* kont21919 = (decode_clo(env22263))[3];
//not do dummy comment
void* proc = (decode_clo(env22263))[2];
//not do dummy comment
void* acc = (decode_clo(env22263))[1];

//creating new closure instance
void** clo22407 = alloc_clo(lam22260_fptr, 3);

//setting env list
clo22407[1] = kont21919;
clo22407[2] = proc;
clo22407[3] = a2180822092;
void* f2192022095 = encode_clo(clo22407);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2192022095;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2180922094;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22262 = encode_clo(alloc_clo(lam22262_fptr, 0));

void* lam22264_fptr() // lam22264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22265 = arg_buffer[1];
//reading env and args
void* a2180822092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22265))[6];
//not do dummy comment
void* kont21919 = (decode_clo(env22265))[5];
//not do dummy comment
void* foldr = (decode_clo(env22265))[4];
//not do dummy comment
void* lst = (decode_clo(env22265))[3];
//not do dummy comment
void* proc = (decode_clo(env22265))[2];
//not do dummy comment
void* acc = (decode_clo(env22265))[1];

//creating new closure instance
void** clo22409 = alloc_clo(lam22262_fptr, 5);

//setting env list
clo22409[1] = acc;
clo22409[2] = proc;
clo22409[3] = kont21919;
clo22409[4] = a2180822092;
clo22409[5] = foldr;
void* f2192122093 = encode_clo(clo22409);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2192122093;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22264 = encode_clo(alloc_clo(lam22264_fptr, 0));

void* lam22266_fptr() // lam22266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22267 = arg_buffer[1];
//reading env and args
void* a2180722090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22267))[7];
//not do dummy comment
void* foldr = (decode_clo(env22267))[6];
//not do dummy comment
void* lst = (decode_clo(env22267))[5];
//not do dummy comment
void* proc = (decode_clo(env22267))[4];
//not do dummy comment
void* acc = (decode_clo(env22267))[3];
//not do dummy comment
void* kont21919 = (decode_clo(env22267))[2];
//not do dummy comment
void* car = (decode_clo(env22267))[1];

//if-clause
bool if_guard22410 = is_true(a2180722090);
if(if_guard22410)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21919);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21919))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22412 = alloc_clo(lam22264_fptr, 6);

//setting env list
clo22412[1] = acc;
clo22412[2] = proc;
clo22412[3] = lst;
clo22412[4] = foldr;
clo22412[5] = kont21919;
clo22412[6] = cdr;
void* f2192222091 = encode_clo(clo22412);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2192222091;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22266 = encode_clo(alloc_clo(lam22266_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22268 = arg_buffer[1];
//reading env and args
void* kont21919 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo22414 = alloc_clo(lam22266_fptr, 7);

//setting env list
clo22414[1] = car;
clo22414[2] = kont21919;
clo22414[3] = acc;
clo22414[4] = proc;
clo22414[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo22414[6] = foldr;
clo22414[7] = cdr;
void* f2192322089 = encode_clo(clo22414);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2192322089;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam22269_fptr() // lam22269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22270 = arg_buffer[1];
//reading env and args
void* a2181422104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env22270))[3];
//not do dummy comment
void* a2181222100 = (decode_clo(env22270))[2];
//not do dummy comment
void* kont21924 = (decode_clo(env22270))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont21924;
arg_buffer[3] = a2181222100;
arg_buffer[4] = a2181422104;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22269 = encode_clo(alloc_clo(lam22269_fptr, 0));

void* lam22271_fptr() // lam22271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22272 = arg_buffer[1];
//reading env and args
void* a2181322102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env22272))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22272))[4];
//not do dummy comment
void* cons = (decode_clo(env22272))[3];
//not do dummy comment
void* a2181222100 = (decode_clo(env22272))[2];
//not do dummy comment
void* kont21924 = (decode_clo(env22272))[1];

//creating new closure instance
void** clo22416 = alloc_clo(lam22269_fptr, 3);

//setting env list
clo22416[1] = kont21924;
clo22416[2] = a2181222100;
clo22416[3] = cons;
void* f2192522103 = encode_clo(clo22416);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2192522103;
arg_buffer[3] = a2181322102;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22271 = encode_clo(alloc_clo(lam22271_fptr, 0));

void* lam22273_fptr() // lam22273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22274 = arg_buffer[1];
//reading env and args
void* a2181222100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22274))[6];
//not do dummy comment
void* kont21924 = (decode_clo(env22274))[5];
//not do dummy comment
void* append = (decode_clo(env22274))[4];
//not do dummy comment
void* lst2 = (decode_clo(env22274))[3];
//not do dummy comment
void* lst1 = (decode_clo(env22274))[2];
//not do dummy comment
void* cons = (decode_clo(env22274))[1];

//creating new closure instance
void** clo22418 = alloc_clo(lam22271_fptr, 5);

//setting env list
clo22418[1] = kont21924;
clo22418[2] = a2181222100;
clo22418[3] = cons;
clo22418[4] = lst2;
clo22418[5] = append;
void* f2192622101 = encode_clo(clo22418);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2192622101;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22273 = encode_clo(alloc_clo(lam22273_fptr, 0));

void* lam22275_fptr() // lam22275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22276 = arg_buffer[1];
//reading env and args
void* a2181122098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env22276))[7];
//not do dummy comment
void* kont21924 = (decode_clo(env22276))[6];
//not do dummy comment
void* append = (decode_clo(env22276))[5];
//not do dummy comment
void* lst2 = (decode_clo(env22276))[4];
//not do dummy comment
void* cons = (decode_clo(env22276))[3];
//not do dummy comment
void* lst1 = (decode_clo(env22276))[2];
//not do dummy comment
void* car = (decode_clo(env22276))[1];

//if-clause
bool if_guard22419 = is_true(a2181122098);
if(if_guard22419)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21924);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21924))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo22421 = alloc_clo(lam22273_fptr, 6);

//setting env list
clo22421[1] = cons;
clo22421[2] = lst1;
clo22421[3] = lst2;
clo22421[4] = append;
clo22421[5] = kont21924;
clo22421[6] = cdr;
void* f2192722099 = encode_clo(clo22421);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2192722099;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam22275 = encode_clo(alloc_clo(lam22275_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22277 = arg_buffer[1];
//reading env and args
void* kont21924 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22423 = alloc_clo(lam22275_fptr, 7);

//setting env list
clo22423[1] = car;
clo22423[2] = lst1;
clo22423[3] = cons;
clo22423[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo22423[5] = append;
clo22423[6] = kont21924;
clo22423[7] = cdr;
void* f2192822097 = encode_clo(clo22423);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2192822097;
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
void* _22278 = arg_buffer[1];
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

void* kont2192922105 = prim_car(lst);
void* lst22106 = prim_cdr(lst);
void* x2181522107 = apply_prim_hash(lst22106);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2192922105);
arg_buffer[2] = x2181522107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2192922105))[0]);
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
void* _22279 = arg_buffer[1];
//reading env and args
void* kont21931 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2181622108 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21931);
arg_buffer[2] = x2181622108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21931))[0]);
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
void* _22280 = arg_buffer[1];
//reading env and args
void* kont21932 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2181722109 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21932);
arg_buffer[2] = x2181722109;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21932))[0]);
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
void* _22281 = arg_buffer[1];
//reading env and args
void* kont21933 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2181822110 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21933);
arg_buffer[2] = x2181822110;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21933))[0]);
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
void* _22282 = arg_buffer[1];
//reading env and args
void* kont21934 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2181922111 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21934);
arg_buffer[2] = x2181922111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21934))[0]);
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
void* _22283 = arg_buffer[1];
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

void* kont2193522112 = prim_car(lst);
void* lst22113 = prim_cdr(lst);
void* x2182022114 = apply_prim_set(lst22113);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2193522112);
arg_buffer[2] = x2182022114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2193522112))[0]);
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
void* _22284 = arg_buffer[1];
//reading env and args
void* kont21937 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2182122115 = prim_set_u45member_u63(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21937);
arg_buffer[2] = x2182122115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21937))[0]);
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
void* _22285 = arg_buffer[1];
//reading env and args
void* kont21938 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2182222116 = prim_set_u45add(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21938);
arg_buffer[2] = x2182222116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21938))[0]);
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
void* _22286 = arg_buffer[1];
//reading env and args
void* kont21939 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2182322117 = prim_set_u45remove(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21939);
arg_buffer[2] = x2182322117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21939))[0]);
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
void* _22287 = arg_buffer[1];
//reading env and args
void* kont21940 = arg_buffer[2];
void* s = arg_buffer[3];
void* val = arg_buffer[4];
//Dummy comment
void* x2182422118 = prim_set_u45count(s, val);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21940);
arg_buffer[2] = x2182422118;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21940))[0]);
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
void* _22288 = arg_buffer[1];
//reading env and args
void* kont21941 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2182522119 = prim_string_u63(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21941);
arg_buffer[2] = x2182522119;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21941))[0]);
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
void* _22289 = arg_buffer[1];
//reading env and args
void* kont21942 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2182622120 = prim_string_u45length(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21942);
arg_buffer[2] = x2182622120;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21942))[0]);
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
void* _22290 = arg_buffer[1];
//reading env and args
void* kont21943 = arg_buffer[2];
void* str = arg_buffer[3];
void* pos = arg_buffer[4];
//Dummy comment
void* x2182722121 = prim_string_u45ref(str, pos);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21943);
arg_buffer[2] = x2182722121;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21943))[0]);
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
void* _22291 = arg_buffer[1];
//reading env and args
void* kont21944 = arg_buffer[2];
void* str = arg_buffer[3];
void* start = arg_buffer[4];
void* end = arg_buffer[5];
//Dummy comment
void* x2182822122 = prim_substring(str, start, end);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21944);
arg_buffer[2] = x2182822122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21944))[0]);
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
void* _22292 = arg_buffer[1];
//reading env and args
void* kont21945 = arg_buffer[2];
void* s1 = arg_buffer[3];
void* s2 = arg_buffer[4];
//Dummy comment
void* x2182922123 = prim_string_u45append(s1, s2);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21945);
arg_buffer[2] = x2182922123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21945))[0]);
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
void* _22293 = arg_buffer[1];
//reading env and args
void* kont21946 = arg_buffer[2];
void* str = arg_buffer[3];
//Dummy comment
void* x2183022124 = prim_string_u45_u62list(str);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21946);
arg_buffer[2] = x2183022124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21946))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void* lam22294_fptr() // lam22294 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22295 = arg_buffer[1];
//reading env and args
void* y2173222128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21947 = (decode_clo(env22295))[2];
//not do dummy comment
void* x2173122126 = (decode_clo(env22295))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont21947);
arg_buffer[2] = x2173122126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont21947))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22294 = encode_clo(alloc_clo(lam22294_fptr, 0));

void* lam22296_fptr() // lam22296 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env22297 = arg_buffer[1];
//reading env and args
void* x2173122126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont21947 = (decode_clo(env22297))[2];
//not do dummy comment
void* num2 = (decode_clo(env22297))[1];

//creating new closure instance
void** clo22425 = alloc_clo(lam22294_fptr, 2);

//setting env list
clo22425[1] = x2173122126;
clo22425[2] = kont21947;
void* f2194822127 = encode_clo(clo22425);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f2194822127);
arg_buffer[2] = num2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f2194822127))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam22296 = encode_clo(alloc_clo(lam22296_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22298 = arg_buffer[1];
//reading env and args
void* kont21947 = arg_buffer[2];
void* num1 = arg_buffer[3];
void* num2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo22427 = alloc_clo(lam22296_fptr, 2);

//setting env list
clo22427[1] = num2;
clo22427[2] = kont21947;
void* f2194922125 = encode_clo(clo22427);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(f2194922125);
arg_buffer[2] = num1;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f2194922125))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _22301 = arg_buffer[1];
//reading env and args
void* kont21950 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar22428 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22428, "5", 10);
void* a2183122129 = encode_mpz(mpzvar22428);
mpz_t* mpzvar22429 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar22429, "42", 10);
void* a2183222130 = encode_mpz(mpzvar22429);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = kont21950;
arg_buffer[3] = a2183122129;
arg_buffer[4] = a2183222130;
arg_buffer[0] = reinterpret_cast<void*>(4);
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

