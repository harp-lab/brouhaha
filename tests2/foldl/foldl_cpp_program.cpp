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
void* _30090 = arg_buffer[1];
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

void* kont2982729927 = prim_car(lst);
void* lst29928 = prim_cdr(lst);
void* x2973729929 = apply_prim__u43(lst29928);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2982729927);
arg_buffer[2] = x2973729929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2982729927))[0]);
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
void* _30091 = arg_buffer[1];
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

void* kont2982929930 = prim_car(lst);
void* lst29931 = prim_cdr(lst);
void* x2973829932 = apply_prim__u45(lst29931);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2982929930);
arg_buffer[2] = x2973829932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2982929930))[0]);
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
void* _30092 = arg_buffer[1];
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

void* kont2983129933 = prim_car(lst);
void* lst29934 = prim_cdr(lst);
void* x2973929935 = apply_prim__u42(lst29934);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2983129933);
arg_buffer[2] = x2973929935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2983129933))[0]);
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
void* _30093 = arg_buffer[1];
//reading env and args
void* kont29833 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2974029936 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29833);
arg_buffer[2] = x2974029936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29833))[0]);
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
void* _30094 = arg_buffer[1];
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

void* kont2983429937 = prim_car(lst);
void* lst29938 = prim_cdr(lst);
void* x2974129939 = apply_prim__u47(lst29938);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2983429937);
arg_buffer[2] = x2974129939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2983429937))[0]);
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
void* _30095 = arg_buffer[1];
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

void* kont2983629940 = prim_car(lst);
void* lst29941 = prim_cdr(lst);
void* x2974229942 = apply_prim__u61(lst29941);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2983629940);
arg_buffer[2] = x2974229942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2983629940))[0]);
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
void* _30096 = arg_buffer[1];
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

void* kont2983829943 = prim_car(lst);
void* lst29944 = prim_cdr(lst);
void* x2974329945 = apply_prim__u62(lst29944);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2983829943);
arg_buffer[2] = x2974329945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2983829943))[0]);
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
void* _30097 = arg_buffer[1];
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

void* kont2984029946 = prim_car(lst);
void* lst29947 = prim_cdr(lst);
void* x2974429948 = apply_prim__u60(lst29947);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2984029946);
arg_buffer[2] = x2974429948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2984029946))[0]);
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
void* _30098 = arg_buffer[1];
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

void* kont2984229949 = prim_car(lst);
void* lst29950 = prim_cdr(lst);
void* x2974529951 = apply_prim__u60_u61(lst29950);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2984229949);
arg_buffer[2] = x2974529951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2984229949))[0]);
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
void* _30099 = arg_buffer[1];
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

void* kont2984429952 = prim_car(lst);
void* lst29953 = prim_cdr(lst);
void* x2974629954 = apply_prim__u62_u61(lst29953);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2984429952);
arg_buffer[2] = x2974629954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2984429952))[0]);
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
void* _30100 = arg_buffer[1];
//reading env and args
void* kont29846 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2974729955 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29846);
arg_buffer[2] = x2974729955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29846))[0]);
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
void* _30101 = arg_buffer[1];
//reading env and args
void* kont29847 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2974829956 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29847);
arg_buffer[2] = x2974829956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29847))[0]);
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
void* _30102 = arg_buffer[1];
//reading env and args
void* kont29848 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2974929957 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29848);
arg_buffer[2] = x2974929957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29848))[0]);
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
void* _30103 = arg_buffer[1];
//reading env and args
void* kont29849 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2975029958 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29849);
arg_buffer[2] = x2975029958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29849))[0]);
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
void* _30104 = arg_buffer[1];
//reading env and args
void* kont29850 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2975129959 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29850);
arg_buffer[2] = x2975129959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29850))[0]);
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
void* _30105 = arg_buffer[1];
//reading env and args
void* kont29851 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2975229960 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29851);
arg_buffer[2] = x2975229960;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29851))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam30106_fptr() // lam30106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30107 = arg_buffer[1];
//reading env and args
void* a2975529964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2975329961 = (decode_clo(env30107))[3];
//not do dummy comment
void* kont29852 = (decode_clo(env30107))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env30107))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29852;
arg_buffer[3] = a2975329961;
arg_buffer[4] = a2975529964;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30106 = encode_clo(alloc_clo(lam30106_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30110 = arg_buffer[1];
//reading env and args
void* kont29852 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar37472 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37472, "0", 10);
void* a2975329961 = encode_mpz(mpzvar37472);
mpz_t* mpzvar37473 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37473, "2", 10);
void* a2975429962 = encode_mpz(mpzvar37473);

//creating new closure instance
void** clo37475 = alloc_clo(lam30106_fptr, 3);

//setting env list
clo37475[1] = equal_u63;
clo37475[2] = kont29852;
clo37475[3] = a2975329961;
void* f2985329963 = encode_clo(clo37475);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2985329963;
arg_buffer[3] = x;
arg_buffer[4] = a2975429962;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam30111_fptr() // lam30111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30112 = arg_buffer[1];
//reading env and args
void* a2975829968 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29854 = (decode_clo(env30112))[3];
//not do dummy comment
void* a2975629965 = (decode_clo(env30112))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env30112))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont29854;
arg_buffer[3] = a2975629965;
arg_buffer[4] = a2975829968;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30111 = encode_clo(alloc_clo(lam30111_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30115 = arg_buffer[1];
//reading env and args
void* kont29854 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar37476 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37476, "1", 10);
void* a2975629965 = encode_mpz(mpzvar37476);
mpz_t* mpzvar37477 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37477, "2", 10);
void* a2975729966 = encode_mpz(mpzvar37477);

//creating new closure instance
void** clo37479 = alloc_clo(lam30111_fptr, 3);

//setting env list
clo37479[1] = equal_u63;
clo37479[2] = a2975629965;
clo37479[3] = kont29854;
void* f2985529967 = encode_clo(clo37479);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2985529967;
arg_buffer[3] = x;
arg_buffer[4] = a2975729966;
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
void* _30116 = arg_buffer[1];
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

void* kont2985629969 = prim_car(x);
void* x29970 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2985629969);
arg_buffer[2] = x29970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2985629969))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam30119_fptr() // lam30119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30120 = arg_buffer[1];
//reading env and args
void* a2976429980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env30120))[3];
//not do dummy comment
void* kont29858 = (decode_clo(env30120))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30120))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont29858;
arg_buffer[3] = x;
arg_buffer[4] = a2976429980;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30119 = encode_clo(alloc_clo(lam30119_fptr, 0));

void* lam30121_fptr() // lam30121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30122 = arg_buffer[1];
//reading env and args
void* a2976229977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30122))[5];
//not do dummy comment
void* lst = (decode_clo(env30122))[4];
//not do dummy comment
void* x = (decode_clo(env30122))[3];
//not do dummy comment
void* kont29858 = (decode_clo(env30122))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30122))[1];

//if-clause
bool if_guard37480 = is_true(a2976229977);
if(if_guard37480)
{
void* x2976329978 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29858);
arg_buffer[2] = x2976329978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29858))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37482 = alloc_clo(lam30119_fptr, 3);

//setting env list
clo37482[1] = member_u63;
clo37482[2] = kont29858;
clo37482[3] = x;
void* f2985929979 = encode_clo(clo37482);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2985929979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30121 = encode_clo(alloc_clo(lam30121_fptr, 0));

void* lam30123_fptr() // lam30123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30124 = arg_buffer[1];
//reading env and args
void* a2976129975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30124))[6];
//not do dummy comment
void* lst = (decode_clo(env30124))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env30124))[4];
//not do dummy comment
void* x = (decode_clo(env30124))[3];
//not do dummy comment
void* kont29858 = (decode_clo(env30124))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env30124))[1];

//creating new closure instance
void** clo37484 = alloc_clo(lam30121_fptr, 5);

//setting env list
clo37484[1] = member_u63;
clo37484[2] = kont29858;
clo37484[3] = x;
clo37484[4] = lst;
clo37484[5] = cdr;
void* f2986029976 = encode_clo(clo37484);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2986029976;
arg_buffer[3] = a2976129975;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30123 = encode_clo(alloc_clo(lam30123_fptr, 0));

void* lam30125_fptr() // lam30125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30126 = arg_buffer[1];
//reading env and args
void* a2975929972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30126))[7];
//not do dummy comment
void* lst = (decode_clo(env30126))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env30126))[5];
//not do dummy comment
void* x = (decode_clo(env30126))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env30126))[3];
//not do dummy comment
void* kont29858 = (decode_clo(env30126))[2];
//not do dummy comment
void* car = (decode_clo(env30126))[1];

//if-clause
bool if_guard37485 = is_true(a2975929972);
if(if_guard37485)
{
void* x2976029973 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29858);
arg_buffer[2] = x2976029973;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29858))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37487 = alloc_clo(lam30123_fptr, 6);

//setting env list
clo37487[1] = member_u63;
clo37487[2] = kont29858;
clo37487[3] = x;
clo37487[4] = equal_u63;
clo37487[5] = lst;
clo37487[6] = cdr;
void* f2986129974 = encode_clo(clo37487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2986129974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30125 = encode_clo(alloc_clo(lam30125_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30127 = arg_buffer[1];
//reading env and args
void* kont29858 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37489 = alloc_clo(lam30125_fptr, 7);

//setting env list
clo37489[1] = car;
clo37489[2] = kont29858;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo37489[3] = member_u63;
clo37489[4] = x;
clo37489[5] = equal_u63;
clo37489[6] = lst;
clo37489[7] = cdr;
void* f2986229971 = encode_clo(clo37489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2986229971;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam30128_fptr() // lam30128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30129 = arg_buffer[1];
//reading env and args
void* a2976829988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29863 = (decode_clo(env30129))[4];
//not do dummy comment
void* fun = (decode_clo(env30129))[3];
//not do dummy comment
void* a2976729986 = (decode_clo(env30129))[2];
//not do dummy comment
void* foldl = (decode_clo(env30129))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont29863;
arg_buffer[3] = fun;
arg_buffer[4] = a2976729986;
arg_buffer[5] = a2976829988;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30128 = encode_clo(alloc_clo(lam30128_fptr, 0));

void* lam30130_fptr() // lam30130 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30131 = arg_buffer[1];
//reading env and args
void* a2976729986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30131))[5];
//not do dummy comment
void* kont29863 = (decode_clo(env30131))[4];
//not do dummy comment
void* lst = (decode_clo(env30131))[3];
//not do dummy comment
void* fun = (decode_clo(env30131))[2];
//not do dummy comment
void* foldl = (decode_clo(env30131))[1];

//creating new closure instance
void** clo37491 = alloc_clo(lam30128_fptr, 4);

//setting env list
clo37491[1] = foldl;
clo37491[2] = a2976729986;
clo37491[3] = fun;
clo37491[4] = kont29863;
void* f2986429987 = encode_clo(clo37491);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2986429987;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30130 = encode_clo(alloc_clo(lam30130_fptr, 0));

void* lam30132_fptr() // lam30132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30133 = arg_buffer[1];
//reading env and args
void* a2976629984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30133))[6];
//not do dummy comment
void* kont29863 = (decode_clo(env30133))[5];
//not do dummy comment
void* lst = (decode_clo(env30133))[4];
//not do dummy comment
void* fun = (decode_clo(env30133))[3];
//not do dummy comment
void* acc = (decode_clo(env30133))[2];
//not do dummy comment
void* foldl = (decode_clo(env30133))[1];

//creating new closure instance
void** clo37493 = alloc_clo(lam30130_fptr, 5);

//setting env list
clo37493[1] = foldl;
clo37493[2] = fun;
clo37493[3] = lst;
clo37493[4] = kont29863;
clo37493[5] = cdr;
void* f2986529985 = encode_clo(clo37493);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2986529985;
arg_buffer[3] = a2976629984;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30132 = encode_clo(alloc_clo(lam30132_fptr, 0));

void* lam30134_fptr() // lam30134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30135 = arg_buffer[1];
//reading env and args
void* a2976529982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30135))[7];
//not do dummy comment
void* kont29863 = (decode_clo(env30135))[6];
//not do dummy comment
void* lst = (decode_clo(env30135))[5];
//not do dummy comment
void* fun = (decode_clo(env30135))[4];
//not do dummy comment
void* acc = (decode_clo(env30135))[3];
//not do dummy comment
void* car = (decode_clo(env30135))[2];
//not do dummy comment
void* foldl = (decode_clo(env30135))[1];

//if-clause
bool if_guard37494 = is_true(a2976529982);
if(if_guard37494)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29863);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37496 = alloc_clo(lam30132_fptr, 6);

//setting env list
clo37496[1] = foldl;
clo37496[2] = acc;
clo37496[3] = fun;
clo37496[4] = lst;
clo37496[5] = kont29863;
clo37496[6] = cdr;
void* f2986629983 = encode_clo(clo37496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2986629983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30134 = encode_clo(alloc_clo(lam30134_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30136 = arg_buffer[1];
//reading env and args
void* kont29863 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo37498 = alloc_clo(lam30134_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo37498[1] = foldl;
clo37498[2] = car;
clo37498[3] = acc;
clo37498[4] = fun;
clo37498[5] = lst;
clo37498[6] = kont29863;
clo37498[7] = cdr;
void* f2986729981 = encode_clo(clo37498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2986729981;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam30137_fptr() // lam30137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30138 = arg_buffer[1];
//reading env and args
void* a2977229996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2977029992 = (decode_clo(env30138))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30138))[2];
//not do dummy comment
void* kont29868 = (decode_clo(env30138))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29868;
arg_buffer[3] = a2977029992;
arg_buffer[4] = a2977229996;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30137 = encode_clo(alloc_clo(lam30137_fptr, 0));

void* lam30139_fptr() // lam30139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30140 = arg_buffer[1];
//reading env and args
void* a2977129994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2977029992 = (decode_clo(env30140))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30140))[4];
//not do dummy comment
void* cons = (decode_clo(env30140))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30140))[2];
//not do dummy comment
void* kont29868 = (decode_clo(env30140))[1];

//creating new closure instance
void** clo37500 = alloc_clo(lam30137_fptr, 3);

//setting env list
clo37500[1] = kont29868;
clo37500[2] = reverse_u45helper;
clo37500[3] = a2977029992;
void* f2986929995 = encode_clo(clo37500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2986929995;
arg_buffer[3] = a2977129994;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30139 = encode_clo(alloc_clo(lam30139_fptr, 0));

void* lam30141_fptr() // lam30141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30142 = arg_buffer[1];
//reading env and args
void* a2977029992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30142))[6];
//not do dummy comment
void* lst2 = (decode_clo(env30142))[5];
//not do dummy comment
void* car = (decode_clo(env30142))[4];
//not do dummy comment
void* cons = (decode_clo(env30142))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30142))[2];
//not do dummy comment
void* kont29868 = (decode_clo(env30142))[1];

//creating new closure instance
void** clo37502 = alloc_clo(lam30139_fptr, 5);

//setting env list
clo37502[1] = kont29868;
clo37502[2] = reverse_u45helper;
clo37502[3] = cons;
clo37502[4] = lst2;
clo37502[5] = a2977029992;
void* f2987029993 = encode_clo(clo37502);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2987029993;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30141 = encode_clo(alloc_clo(lam30141_fptr, 0));

void* lam30143_fptr() // lam30143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30144 = arg_buffer[1];
//reading env and args
void* a2976929990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30144))[7];
//not do dummy comment
void* lst = (decode_clo(env30144))[6];
//not do dummy comment
void* lst2 = (decode_clo(env30144))[5];
//not do dummy comment
void* car = (decode_clo(env30144))[4];
//not do dummy comment
void* cons = (decode_clo(env30144))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30144))[2];
//not do dummy comment
void* kont29868 = (decode_clo(env30144))[1];

//if-clause
bool if_guard37503 = is_true(a2976929990);
if(if_guard37503)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29868);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29868))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37505 = alloc_clo(lam30141_fptr, 6);

//setting env list
clo37505[1] = kont29868;
clo37505[2] = reverse_u45helper;
clo37505[3] = cons;
clo37505[4] = car;
clo37505[5] = lst2;
clo37505[6] = lst;
void* f2987129991 = encode_clo(clo37505);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2987129991;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30143 = encode_clo(alloc_clo(lam30143_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30145 = arg_buffer[1];
//reading env and args
void* kont29868 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37507 = alloc_clo(lam30143_fptr, 7);

//setting env list
clo37507[1] = kont29868;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo37507[2] = reverse_u45helper;
clo37507[3] = cons;
clo37507[4] = car;
clo37507[5] = lst2;
clo37507[6] = lst;
clo37507[7] = cdr;
void* f2987229989 = encode_clo(clo37507);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2987229989;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam30146_fptr() // lam30146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30147 = arg_buffer[1];
//reading env and args
void* a2977329998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30147))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env30147))[2];
//not do dummy comment
void* kont29873 = (decode_clo(env30147))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont29873;
arg_buffer[3] = lst;
arg_buffer[4] = a2977329998;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30146 = encode_clo(alloc_clo(lam30146_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30148 = arg_buffer[1];
//reading env and args
void* kont29873 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo37509 = alloc_clo(lam30146_fptr, 3);

//setting env list
clo37509[1] = kont29873;
clo37509[2] = reverse_u45helper;
clo37509[3] = lst;
void* f2987429997 = encode_clo(clo37509);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2987429997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam30149_fptr() // lam30149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30150 = arg_buffer[1];
//reading env and args
void* x2977630003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29875 = (decode_clo(env30150))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29875);
arg_buffer[2] = x2977630003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29875))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30149 = encode_clo(alloc_clo(lam30149_fptr, 0));

void* lam30151_fptr() // lam30151 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30152 = arg_buffer[1];
//reading env and args
void* a2978130012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2977730005 = (decode_clo(env30152))[4];
//not do dummy comment
void* a2977930008 = (decode_clo(env30152))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30152))[2];
//not do dummy comment
void* kont29875 = (decode_clo(env30152))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29875;
arg_buffer[3] = a2977730005;
arg_buffer[4] = a2977930008;
arg_buffer[5] = a2978130012;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30151 = encode_clo(alloc_clo(lam30151_fptr, 0));

void* lam30153_fptr() // lam30153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30154 = arg_buffer[1];
//reading env and args
void* a2978030010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2977730005 = (decode_clo(env30154))[6];
//not do dummy comment
void* a2977930008 = (decode_clo(env30154))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30154))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30154))[3];
//not do dummy comment
void* cons = (decode_clo(env30154))[2];
//not do dummy comment
void* kont29875 = (decode_clo(env30154))[1];

//creating new closure instance
void** clo37511 = alloc_clo(lam30151_fptr, 4);

//setting env list
clo37511[1] = kont29875;
clo37511[2] = take_u45helper;
clo37511[3] = a2977930008;
clo37511[4] = a2977730005;
void* f2987730011 = encode_clo(clo37511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2987730011;
arg_buffer[3] = a2978030010;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30153 = encode_clo(alloc_clo(lam30153_fptr, 0));

void* lam30155_fptr() // lam30155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30156 = arg_buffer[1];
//reading env and args
void* a2977930008 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2977730005 = (decode_clo(env30156))[7];
//not do dummy comment
void* lst = (decode_clo(env30156))[6];
//not do dummy comment
void* car = (decode_clo(env30156))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env30156))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30156))[3];
//not do dummy comment
void* cons = (decode_clo(env30156))[2];
//not do dummy comment
void* kont29875 = (decode_clo(env30156))[1];

//creating new closure instance
void** clo37513 = alloc_clo(lam30153_fptr, 6);

//setting env list
clo37513[1] = kont29875;
clo37513[2] = cons;
clo37513[3] = lst2;
clo37513[4] = take_u45helper;
clo37513[5] = a2977930008;
clo37513[6] = a2977730005;
void* f2987830009 = encode_clo(clo37513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2987830009;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30155 = encode_clo(alloc_clo(lam30155_fptr, 0));

void* lam30158_fptr() // lam30158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30159 = arg_buffer[1];
//reading env and args
void* a2977730005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30159))[8];
//not do dummy comment
void* _u45 = (decode_clo(env30159))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env30159))[6];
//not do dummy comment
void* lst2 = (decode_clo(env30159))[5];
//not do dummy comment
void* n = (decode_clo(env30159))[4];
//not do dummy comment
void* car = (decode_clo(env30159))[3];
//not do dummy comment
void* cons = (decode_clo(env30159))[2];
//not do dummy comment
void* kont29875 = (decode_clo(env30159))[1];
mpz_t* mpzvar37514 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37514, "1", 10);
void* a2977830006 = encode_mpz(mpzvar37514);

//creating new closure instance
void** clo37516 = alloc_clo(lam30155_fptr, 7);

//setting env list
clo37516[1] = kont29875;
clo37516[2] = cons;
clo37516[3] = lst2;
clo37516[4] = take_u45helper;
clo37516[5] = car;
clo37516[6] = lst;
clo37516[7] = a2977730005;
void* f2987930007 = encode_clo(clo37516);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2987930007;
arg_buffer[3] = n;
arg_buffer[4] = a2977830006;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30158 = encode_clo(alloc_clo(lam30158_fptr, 0));

void* lam30160_fptr() // lam30160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30161 = arg_buffer[1];
//reading env and args
void* a2977530001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30161))[10];
//not do dummy comment
void* lst = (decode_clo(env30161))[9];
//not do dummy comment
void* reverse = (decode_clo(env30161))[8];
//not do dummy comment
void* _u45 = (decode_clo(env30161))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env30161))[6];
//not do dummy comment
void* lst2 = (decode_clo(env30161))[5];
//not do dummy comment
void* n = (decode_clo(env30161))[4];
//not do dummy comment
void* car = (decode_clo(env30161))[3];
//not do dummy comment
void* cons = (decode_clo(env30161))[2];
//not do dummy comment
void* kont29875 = (decode_clo(env30161))[1];

//if-clause
bool if_guard37517 = is_true(a2977530001);
if(if_guard37517)
{

//creating new closure instance
void** clo37519 = alloc_clo(lam30149_fptr, 1);

//setting env list
clo37519[1] = kont29875;
void* f2987630002 = encode_clo(clo37519);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2987630002;
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
void** clo37521 = alloc_clo(lam30158_fptr, 8);

//setting env list
clo37521[1] = kont29875;
clo37521[2] = cons;
clo37521[3] = car;
clo37521[4] = n;
clo37521[5] = lst2;
clo37521[6] = take_u45helper;
clo37521[7] = _u45;
clo37521[8] = lst;
void* f2988030004 = encode_clo(clo37521);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2988030004;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30160 = encode_clo(alloc_clo(lam30160_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30163 = arg_buffer[1];
//reading env and args
void* kont29875 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar37522 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37522, "0", 10);
void* a2977429999 = encode_mpz(mpzvar37522);

//creating new closure instance
void** clo37524 = alloc_clo(lam30160_fptr, 10);

//setting env list
clo37524[1] = kont29875;
clo37524[2] = cons;
clo37524[3] = car;
clo37524[4] = n;
clo37524[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo37524[6] = take_u45helper;
clo37524[7] = _u45;
clo37524[8] = reverse;
clo37524[9] = lst;
clo37524[10] = cdr;
void* f2988130000 = encode_clo(clo37524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2988130000;
arg_buffer[3] = n;
arg_buffer[4] = a2977429999;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam30164_fptr() // lam30164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30165 = arg_buffer[1];
//reading env and args
void* a2978230014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30165))[4];
//not do dummy comment
void* kont29882 = (decode_clo(env30165))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env30165))[2];
//not do dummy comment
void* n = (decode_clo(env30165))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont29882;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2978230014;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30164 = encode_clo(alloc_clo(lam30164_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30166 = arg_buffer[1];
//reading env and args
void* kont29882 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37526 = alloc_clo(lam30164_fptr, 4);

//setting env list
clo37526[1] = n;
clo37526[2] = take_u45helper;
clo37526[3] = kont29882;
clo37526[4] = lst;
void* f2988330013 = encode_clo(clo37526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2988330013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam30168_fptr() // lam30168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30169 = arg_buffer[1];
//reading env and args
void* a2978730022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29884 = (decode_clo(env30169))[3];
//not do dummy comment
void* _u43 = (decode_clo(env30169))[2];
//not do dummy comment
void* a2978530018 = (decode_clo(env30169))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont29884;
arg_buffer[3] = a2978530018;
arg_buffer[4] = a2978730022;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30168 = encode_clo(alloc_clo(lam30168_fptr, 0));

void* lam30170_fptr() // lam30170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30171 = arg_buffer[1];
//reading env and args
void* a2978630020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env30171))[4];
//not do dummy comment
void* kont29884 = (decode_clo(env30171))[3];
//not do dummy comment
void* _u43 = (decode_clo(env30171))[2];
//not do dummy comment
void* a2978530018 = (decode_clo(env30171))[1];

//creating new closure instance
void** clo37528 = alloc_clo(lam30168_fptr, 3);

//setting env list
clo37528[1] = a2978530018;
clo37528[2] = _u43;
clo37528[3] = kont29884;
void* f2988530021 = encode_clo(clo37528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2988530021;
arg_buffer[3] = a2978630020;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30170 = encode_clo(alloc_clo(lam30170_fptr, 0));

void* lam30173_fptr() // lam30173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30174 = arg_buffer[1];
//reading env and args
void* a2978330016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30174))[5];
//not do dummy comment
void* lst = (decode_clo(env30174))[4];
//not do dummy comment
void* length = (decode_clo(env30174))[3];
//not do dummy comment
void* kont29884 = (decode_clo(env30174))[2];
//not do dummy comment
void* _u43 = (decode_clo(env30174))[1];

//if-clause
bool if_guard37529 = is_true(a2978330016);
if(if_guard37529)
{
mpz_t* mpzvar37530 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37530, "0", 10);
void* x2978430017 = encode_mpz(mpzvar37530);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29884);
arg_buffer[2] = x2978430017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29884))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar37531 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37531, "1", 10);
void* a2978530018 = encode_mpz(mpzvar37531);

//creating new closure instance
void** clo37533 = alloc_clo(lam30170_fptr, 4);

//setting env list
clo37533[1] = a2978530018;
clo37533[2] = _u43;
clo37533[3] = kont29884;
clo37533[4] = length;
void* f2988630019 = encode_clo(clo37533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2988630019;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30173 = encode_clo(alloc_clo(lam30173_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30175 = arg_buffer[1];
//reading env and args
void* kont29884 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo37535 = alloc_clo(lam30173_fptr, 5);

//setting env list
clo37535[1] = _u43;
clo37535[2] = kont29884;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo37535[3] = length;
clo37535[4] = lst;
clo37535[5] = cdr;
void* f2988730015 = encode_clo(clo37535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2988730015;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam30176_fptr() // lam30176 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30177 = arg_buffer[1];
//reading env and args
void* x2978930026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29888 = (decode_clo(env30177))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29888);
arg_buffer[2] = x2978930026;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29888))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30176 = encode_clo(alloc_clo(lam30176_fptr, 0));

void* lam30178_fptr() // lam30178 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30179 = arg_buffer[1];
//reading env and args
void* a2979330034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2979130030 = (decode_clo(env30179))[3];
//not do dummy comment
void* kont29888 = (decode_clo(env30179))[2];
//not do dummy comment
void* cons = (decode_clo(env30179))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29888;
arg_buffer[3] = a2979130030;
arg_buffer[4] = a2979330034;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30178 = encode_clo(alloc_clo(lam30178_fptr, 0));

void* lam30180_fptr() // lam30180 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30181 = arg_buffer[1];
//reading env and args
void* a2979230032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env30181))[5];
//not do dummy comment
void* a2979130030 = (decode_clo(env30181))[4];
//not do dummy comment
void* cons = (decode_clo(env30181))[3];
//not do dummy comment
void* kont29888 = (decode_clo(env30181))[2];
//not do dummy comment
void* proc = (decode_clo(env30181))[1];

//creating new closure instance
void** clo37537 = alloc_clo(lam30178_fptr, 3);

//setting env list
clo37537[1] = cons;
clo37537[2] = kont29888;
clo37537[3] = a2979130030;
void* f2989030033 = encode_clo(clo37537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2989030033;
arg_buffer[3] = proc;
arg_buffer[4] = a2979230032;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30180 = encode_clo(alloc_clo(lam30180_fptr, 0));

void* lam30182_fptr() // lam30182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30183 = arg_buffer[1];
//reading env and args
void* a2979130030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30183))[6];
//not do dummy comment
void* lst = (decode_clo(env30183))[5];
//not do dummy comment
void* map = (decode_clo(env30183))[4];
//not do dummy comment
void* cons = (decode_clo(env30183))[3];
//not do dummy comment
void* kont29888 = (decode_clo(env30183))[2];
//not do dummy comment
void* proc = (decode_clo(env30183))[1];

//creating new closure instance
void** clo37539 = alloc_clo(lam30180_fptr, 5);

//setting env list
clo37539[1] = proc;
clo37539[2] = kont29888;
clo37539[3] = cons;
clo37539[4] = a2979130030;
clo37539[5] = map;
void* f2989130031 = encode_clo(clo37539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2989130031;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30182 = encode_clo(alloc_clo(lam30182_fptr, 0));

void* lam30184_fptr() // lam30184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30185 = arg_buffer[1];
//reading env and args
void* a2979030028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30185))[6];
//not do dummy comment
void* lst = (decode_clo(env30185))[5];
//not do dummy comment
void* map = (decode_clo(env30185))[4];
//not do dummy comment
void* cons = (decode_clo(env30185))[3];
//not do dummy comment
void* kont29888 = (decode_clo(env30185))[2];
//not do dummy comment
void* proc = (decode_clo(env30185))[1];

//creating new closure instance
void** clo37541 = alloc_clo(lam30182_fptr, 6);

//setting env list
clo37541[1] = proc;
clo37541[2] = kont29888;
clo37541[3] = cons;
clo37541[4] = map;
clo37541[5] = lst;
clo37541[6] = cdr;
void* f2989230029 = encode_clo(clo37541);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2989230029;
arg_buffer[3] = a2979030028;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30184 = encode_clo(alloc_clo(lam30184_fptr, 0));

void* lam30186_fptr() // lam30186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30187 = arg_buffer[1];
//reading env and args
void* a2978830024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env30187))[8];
//not do dummy comment
void* map = (decode_clo(env30187))[7];
//not do dummy comment
void* car = (decode_clo(env30187))[6];
//not do dummy comment
void* cons = (decode_clo(env30187))[5];
//not do dummy comment
void* list = (decode_clo(env30187))[4];
//not do dummy comment
void* cdr = (decode_clo(env30187))[3];
//not do dummy comment
void* kont29888 = (decode_clo(env30187))[2];
//not do dummy comment
void* proc = (decode_clo(env30187))[1];

//if-clause
bool if_guard37542 = is_true(a2978830024);
if(if_guard37542)
{

//creating new closure instance
void** clo37544 = alloc_clo(lam30176_fptr, 1);

//setting env list
clo37544[1] = kont29888;
void* f2988930025 = encode_clo(clo37544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2988930025;
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
void** clo37546 = alloc_clo(lam30184_fptr, 6);

//setting env list
clo37546[1] = proc;
clo37546[2] = kont29888;
clo37546[3] = cons;
clo37546[4] = map;
clo37546[5] = lst;
clo37546[6] = cdr;
void* f2989330027 = encode_clo(clo37546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2989330027;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30186 = encode_clo(alloc_clo(lam30186_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30188 = arg_buffer[1];
//reading env and args
void* kont29888 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37548 = alloc_clo(lam30186_fptr, 8);

//setting env list
clo37548[1] = proc;
clo37548[2] = kont29888;
clo37548[3] = cdr;
clo37548[4] = list;
clo37548[5] = cons;
clo37548[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo37548[7] = map;
clo37548[8] = lst;
void* f2989430023 = encode_clo(clo37548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2989430023;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam30189_fptr() // lam30189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30190 = arg_buffer[1];
//reading env and args
void* x2979530038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29895 = (decode_clo(env30190))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29895);
arg_buffer[2] = x2979530038;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29895))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30189 = encode_clo(alloc_clo(lam30189_fptr, 0));

void* lam30191_fptr() // lam30191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30192 = arg_buffer[1];
//reading env and args
void* a2980030048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29895 = (decode_clo(env30192))[3];
//not do dummy comment
void* a2979830044 = (decode_clo(env30192))[2];
//not do dummy comment
void* cons = (decode_clo(env30192))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29895;
arg_buffer[3] = a2979830044;
arg_buffer[4] = a2980030048;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30191 = encode_clo(alloc_clo(lam30191_fptr, 0));

void* lam30193_fptr() // lam30193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30194 = arg_buffer[1];
//reading env and args
void* a2979930046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29895 = (decode_clo(env30194))[5];
//not do dummy comment
void* filter = (decode_clo(env30194))[4];
//not do dummy comment
void* cons = (decode_clo(env30194))[3];
//not do dummy comment
void* a2979830044 = (decode_clo(env30194))[2];
//not do dummy comment
void* op = (decode_clo(env30194))[1];

//creating new closure instance
void** clo37550 = alloc_clo(lam30191_fptr, 3);

//setting env list
clo37550[1] = cons;
clo37550[2] = a2979830044;
clo37550[3] = kont29895;
void* f2989730047 = encode_clo(clo37550);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2989730047;
arg_buffer[3] = op;
arg_buffer[4] = a2979930046;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30193 = encode_clo(alloc_clo(lam30193_fptr, 0));

void* lam30195_fptr() // lam30195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30196 = arg_buffer[1];
//reading env and args
void* a2979830044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30196))[6];
//not do dummy comment
void* kont29895 = (decode_clo(env30196))[5];
//not do dummy comment
void* lst = (decode_clo(env30196))[4];
//not do dummy comment
void* op = (decode_clo(env30196))[3];
//not do dummy comment
void* filter = (decode_clo(env30196))[2];
//not do dummy comment
void* cons = (decode_clo(env30196))[1];

//creating new closure instance
void** clo37552 = alloc_clo(lam30193_fptr, 5);

//setting env list
clo37552[1] = op;
clo37552[2] = a2979830044;
clo37552[3] = cons;
clo37552[4] = filter;
clo37552[5] = kont29895;
void* f2989830045 = encode_clo(clo37552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2989830045;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30195 = encode_clo(alloc_clo(lam30195_fptr, 0));

void* lam30197_fptr() // lam30197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30198 = arg_buffer[1];
//reading env and args
void* a2980130050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29895 = (decode_clo(env30198))[3];
//not do dummy comment
void* op = (decode_clo(env30198))[2];
//not do dummy comment
void* filter = (decode_clo(env30198))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont29895;
arg_buffer[3] = op;
arg_buffer[4] = a2980130050;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30197 = encode_clo(alloc_clo(lam30197_fptr, 0));

void* lam30199_fptr() // lam30199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30200 = arg_buffer[1];
//reading env and args
void* a2979730042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30200))[7];
//not do dummy comment
void* kont29895 = (decode_clo(env30200))[6];
//not do dummy comment
void* lst = (decode_clo(env30200))[5];
//not do dummy comment
void* op = (decode_clo(env30200))[4];
//not do dummy comment
void* cons = (decode_clo(env30200))[3];
//not do dummy comment
void* filter = (decode_clo(env30200))[2];
//not do dummy comment
void* car = (decode_clo(env30200))[1];

//if-clause
bool if_guard37553 = is_true(a2979730042);
if(if_guard37553)
{

//creating new closure instance
void** clo37555 = alloc_clo(lam30195_fptr, 6);

//setting env list
clo37555[1] = cons;
clo37555[2] = filter;
clo37555[3] = op;
clo37555[4] = lst;
clo37555[5] = kont29895;
clo37555[6] = cdr;
void* f2989930043 = encode_clo(clo37555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2989930043;
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
void** clo37557 = alloc_clo(lam30197_fptr, 3);

//setting env list
clo37557[1] = filter;
clo37557[2] = op;
clo37557[3] = kont29895;
void* f2990030049 = encode_clo(clo37557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2990030049;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30199 = encode_clo(alloc_clo(lam30199_fptr, 0));

void* lam30201_fptr() // lam30201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30202 = arg_buffer[1];
//reading env and args
void* a2979630040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30202))[7];
//not do dummy comment
void* kont29895 = (decode_clo(env30202))[6];
//not do dummy comment
void* lst = (decode_clo(env30202))[5];
//not do dummy comment
void* op = (decode_clo(env30202))[4];
//not do dummy comment
void* cons = (decode_clo(env30202))[3];
//not do dummy comment
void* filter = (decode_clo(env30202))[2];
//not do dummy comment
void* car = (decode_clo(env30202))[1];

//creating new closure instance
void** clo37559 = alloc_clo(lam30199_fptr, 7);

//setting env list
clo37559[1] = car;
clo37559[2] = filter;
clo37559[3] = cons;
clo37559[4] = op;
clo37559[5] = lst;
clo37559[6] = kont29895;
clo37559[7] = cdr;
void* f2990130041 = encode_clo(clo37559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2990130041;
arg_buffer[3] = a2979630040;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30201 = encode_clo(alloc_clo(lam30201_fptr, 0));

void* lam30203_fptr() // lam30203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30204 = arg_buffer[1];
//reading env and args
void* a2979430036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29895 = (decode_clo(env30204))[8];
//not do dummy comment
void* lst = (decode_clo(env30204))[7];
//not do dummy comment
void* op = (decode_clo(env30204))[6];
//not do dummy comment
void* cons = (decode_clo(env30204))[5];
//not do dummy comment
void* list = (decode_clo(env30204))[4];
//not do dummy comment
void* cdr = (decode_clo(env30204))[3];
//not do dummy comment
void* filter = (decode_clo(env30204))[2];
//not do dummy comment
void* car = (decode_clo(env30204))[1];

//if-clause
bool if_guard37560 = is_true(a2979430036);
if(if_guard37560)
{

//creating new closure instance
void** clo37562 = alloc_clo(lam30189_fptr, 1);

//setting env list
clo37562[1] = kont29895;
void* f2989630037 = encode_clo(clo37562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2989630037;
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
void** clo37564 = alloc_clo(lam30201_fptr, 7);

//setting env list
clo37564[1] = car;
clo37564[2] = filter;
clo37564[3] = cons;
clo37564[4] = op;
clo37564[5] = lst;
clo37564[6] = kont29895;
clo37564[7] = cdr;
void* f2990230039 = encode_clo(clo37564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2990230039;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30203 = encode_clo(alloc_clo(lam30203_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30205 = arg_buffer[1];
//reading env and args
void* kont29895 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37566 = alloc_clo(lam30203_fptr, 8);

//setting env list
clo37566[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo37566[2] = filter;
clo37566[3] = cdr;
clo37566[4] = list;
clo37566[5] = cons;
clo37566[6] = op;
clo37566[7] = lst;
clo37566[8] = kont29895;
void* f2990330035 = encode_clo(clo37566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2990330035;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam30206_fptr() // lam30206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30207 = arg_buffer[1];
//reading env and args
void* a2980630058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2980430055 = (decode_clo(env30207))[3];
//not do dummy comment
void* drop = (decode_clo(env30207))[2];
//not do dummy comment
void* kont29904 = (decode_clo(env30207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont29904;
arg_buffer[3] = a2980430055;
arg_buffer[4] = a2980630058;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30206 = encode_clo(alloc_clo(lam30206_fptr, 0));

void* lam30209_fptr() // lam30209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30210 = arg_buffer[1];
//reading env and args
void* a2980430055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env30210))[4];
//not do dummy comment
void* kont29904 = (decode_clo(env30210))[3];
//not do dummy comment
void* n = (decode_clo(env30210))[2];
//not do dummy comment
void* _u45 = (decode_clo(env30210))[1];
mpz_t* mpzvar37567 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37567, "1", 10);
void* a2980530056 = encode_mpz(mpzvar37567);

//creating new closure instance
void** clo37569 = alloc_clo(lam30206_fptr, 3);

//setting env list
clo37569[1] = kont29904;
clo37569[2] = drop;
clo37569[3] = a2980430055;
void* f2990530057 = encode_clo(clo37569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2990530057;
arg_buffer[3] = n;
arg_buffer[4] = a2980530056;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30209 = encode_clo(alloc_clo(lam30209_fptr, 0));

void* lam30211_fptr() // lam30211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30212 = arg_buffer[1];
//reading env and args
void* a2980330053 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30212))[6];
//not do dummy comment
void* kont29904 = (decode_clo(env30212))[5];
//not do dummy comment
void* n = (decode_clo(env30212))[4];
//not do dummy comment
void* _u45 = (decode_clo(env30212))[3];
//not do dummy comment
void* lst = (decode_clo(env30212))[2];
//not do dummy comment
void* drop = (decode_clo(env30212))[1];

//if-clause
bool if_guard37570 = is_true(a2980330053);
if(if_guard37570)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29904);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29904))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37572 = alloc_clo(lam30209_fptr, 4);

//setting env list
clo37572[1] = _u45;
clo37572[2] = n;
clo37572[3] = kont29904;
clo37572[4] = drop;
void* f2990630054 = encode_clo(clo37572);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2990630054;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30211 = encode_clo(alloc_clo(lam30211_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30214 = arg_buffer[1];
//reading env and args
void* kont29904 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar37573 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37573, "0", 10);
void* a2980230051 = encode_mpz(mpzvar37573);

//creating new closure instance
void** clo37575 = alloc_clo(lam30211_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo37575[1] = drop;
clo37575[2] = lst;
clo37575[3] = _u45;
clo37575[4] = n;
clo37575[5] = kont29904;
clo37575[6] = cdr;
void* f2990730052 = encode_clo(clo37575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2990730052;
arg_buffer[3] = n;
arg_buffer[4] = a2980230051;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam30215_fptr() // lam30215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30216 = arg_buffer[1];
//reading env and args
void* a2981030066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2980830062 = (decode_clo(env30216))[3];
//not do dummy comment
void* proc = (decode_clo(env30216))[2];
//not do dummy comment
void* kont29908 = (decode_clo(env30216))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont29908;
arg_buffer[3] = a2980830062;
arg_buffer[4] = a2981030066;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30215 = encode_clo(alloc_clo(lam30215_fptr, 0));

void* lam30217_fptr() // lam30217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30218 = arg_buffer[1];
//reading env and args
void* a2980930064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env30218))[5];
//not do dummy comment
void* a2980830062 = (decode_clo(env30218))[4];
//not do dummy comment
void* kont29908 = (decode_clo(env30218))[3];
//not do dummy comment
void* proc = (decode_clo(env30218))[2];
//not do dummy comment
void* acc = (decode_clo(env30218))[1];

//creating new closure instance
void** clo37577 = alloc_clo(lam30215_fptr, 3);

//setting env list
clo37577[1] = kont29908;
clo37577[2] = proc;
clo37577[3] = a2980830062;
void* f2990930065 = encode_clo(clo37577);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2990930065;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2980930064;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30217 = encode_clo(alloc_clo(lam30217_fptr, 0));

void* lam30219_fptr() // lam30219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30220 = arg_buffer[1];
//reading env and args
void* a2980830062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30220))[6];
//not do dummy comment
void* kont29908 = (decode_clo(env30220))[5];
//not do dummy comment
void* foldr = (decode_clo(env30220))[4];
//not do dummy comment
void* lst = (decode_clo(env30220))[3];
//not do dummy comment
void* proc = (decode_clo(env30220))[2];
//not do dummy comment
void* acc = (decode_clo(env30220))[1];

//creating new closure instance
void** clo37579 = alloc_clo(lam30217_fptr, 5);

//setting env list
clo37579[1] = acc;
clo37579[2] = proc;
clo37579[3] = kont29908;
clo37579[4] = a2980830062;
clo37579[5] = foldr;
void* f2991030063 = encode_clo(clo37579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2991030063;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30219 = encode_clo(alloc_clo(lam30219_fptr, 0));

void* lam30221_fptr() // lam30221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30222 = arg_buffer[1];
//reading env and args
void* a2980730060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30222))[7];
//not do dummy comment
void* car = (decode_clo(env30222))[6];
//not do dummy comment
void* kont29908 = (decode_clo(env30222))[5];
//not do dummy comment
void* foldr = (decode_clo(env30222))[4];
//not do dummy comment
void* lst = (decode_clo(env30222))[3];
//not do dummy comment
void* proc = (decode_clo(env30222))[2];
//not do dummy comment
void* acc = (decode_clo(env30222))[1];

//if-clause
bool if_guard37580 = is_true(a2980730060);
if(if_guard37580)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29908);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29908))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37582 = alloc_clo(lam30219_fptr, 6);

//setting env list
clo37582[1] = acc;
clo37582[2] = proc;
clo37582[3] = lst;
clo37582[4] = foldr;
clo37582[5] = kont29908;
clo37582[6] = cdr;
void* f2991130061 = encode_clo(clo37582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2991130061;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30221 = encode_clo(alloc_clo(lam30221_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30223 = arg_buffer[1];
//reading env and args
void* kont29908 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo37584 = alloc_clo(lam30221_fptr, 7);

//setting env list
clo37584[1] = acc;
clo37584[2] = proc;
clo37584[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo37584[4] = foldr;
clo37584[5] = kont29908;
clo37584[6] = car;
clo37584[7] = cdr;
void* f2991230059 = encode_clo(clo37584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2991230059;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam30224_fptr() // lam30224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30225 = arg_buffer[1];
//reading env and args
void* a2981430074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2981230070 = (decode_clo(env30225))[3];
//not do dummy comment
void* kont29913 = (decode_clo(env30225))[2];
//not do dummy comment
void* cons = (decode_clo(env30225))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont29913;
arg_buffer[3] = a2981230070;
arg_buffer[4] = a2981430074;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30224 = encode_clo(alloc_clo(lam30224_fptr, 0));

void* lam30226_fptr() // lam30226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30227 = arg_buffer[1];
//reading env and args
void* a2981330072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2981230070 = (decode_clo(env30227))[5];
//not do dummy comment
void* kont29913 = (decode_clo(env30227))[4];
//not do dummy comment
void* append = (decode_clo(env30227))[3];
//not do dummy comment
void* lst2 = (decode_clo(env30227))[2];
//not do dummy comment
void* cons = (decode_clo(env30227))[1];

//creating new closure instance
void** clo37586 = alloc_clo(lam30224_fptr, 3);

//setting env list
clo37586[1] = cons;
clo37586[2] = kont29913;
clo37586[3] = a2981230070;
void* f2991430073 = encode_clo(clo37586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2991430073;
arg_buffer[3] = a2981330072;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30226 = encode_clo(alloc_clo(lam30226_fptr, 0));

void* lam30228_fptr() // lam30228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30229 = arg_buffer[1];
//reading env and args
void* a2981230070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30229))[6];
//not do dummy comment
void* kont29913 = (decode_clo(env30229))[5];
//not do dummy comment
void* append = (decode_clo(env30229))[4];
//not do dummy comment
void* lst2 = (decode_clo(env30229))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30229))[2];
//not do dummy comment
void* cons = (decode_clo(env30229))[1];

//creating new closure instance
void** clo37588 = alloc_clo(lam30226_fptr, 5);

//setting env list
clo37588[1] = cons;
clo37588[2] = lst2;
clo37588[3] = append;
clo37588[4] = kont29913;
clo37588[5] = a2981230070;
void* f2991530071 = encode_clo(clo37588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2991530071;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30228 = encode_clo(alloc_clo(lam30228_fptr, 0));

void* lam30230_fptr() // lam30230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30231 = arg_buffer[1];
//reading env and args
void* a2981130068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env30231))[7];
//not do dummy comment
void* kont29913 = (decode_clo(env30231))[6];
//not do dummy comment
void* append = (decode_clo(env30231))[5];
//not do dummy comment
void* lst2 = (decode_clo(env30231))[4];
//not do dummy comment
void* cons = (decode_clo(env30231))[3];
//not do dummy comment
void* lst1 = (decode_clo(env30231))[2];
//not do dummy comment
void* car = (decode_clo(env30231))[1];

//if-clause
bool if_guard37589 = is_true(a2981130068);
if(if_guard37589)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29913);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29913))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo37591 = alloc_clo(lam30228_fptr, 6);

//setting env list
clo37591[1] = cons;
clo37591[2] = lst1;
clo37591[3] = lst2;
clo37591[4] = append;
clo37591[5] = kont29913;
clo37591[6] = cdr;
void* f2991630069 = encode_clo(clo37591);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2991630069;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam30230 = encode_clo(alloc_clo(lam30230_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30232 = arg_buffer[1];
//reading env and args
void* kont29913 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo37593 = alloc_clo(lam30230_fptr, 7);

//setting env list
clo37593[1] = car;
clo37593[2] = lst1;
clo37593[3] = cons;
clo37593[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo37593[5] = append;
clo37593[6] = kont29913;
clo37593[7] = cdr;
void* f2991730067 = encode_clo(clo37593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2991730067;
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
void* _30233 = arg_buffer[1];
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

void* kont2991830075 = prim_car(lst);
void* lst30076 = prim_cdr(lst);
void* x2981530077 = apply_prim_hash(lst30076);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2991830075);
arg_buffer[2] = x2981530077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2991830075))[0]);
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
void* _30234 = arg_buffer[1];
//reading env and args
void* kont29920 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2981630078 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29920);
arg_buffer[2] = x2981630078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29920))[0]);
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
void* _30235 = arg_buffer[1];
//reading env and args
void* kont29921 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2981730079 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29921);
arg_buffer[2] = x2981730079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29921))[0]);
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
void* _30236 = arg_buffer[1];
//reading env and args
void* kont29922 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2981830080 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29922);
arg_buffer[2] = x2981830080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29922))[0]);
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
void* _30237 = arg_buffer[1];
//reading env and args
void* kont29923 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2981930081 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont29923);
arg_buffer[2] = x2981930081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont29923))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* call_u45foldl_fptr() // call-foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30239 = arg_buffer[1];
//reading env and args
void* kont29924 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar37594 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37594, "0", 10);
void* a2982030082 = encode_mpz(mpzvar37594);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont29924;
arg_buffer[3] = _u43;
arg_buffer[4] = a2982030082;
arg_buffer[5] = lst;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call_u45foldl = encode_clo(alloc_clo(call_u45foldl_fptr, 0));

void* lam30240_fptr() // lam30240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env30241 = arg_buffer[1];
//reading env and args
void* a2982630089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont29925 = (decode_clo(env30241))[2];
//not do dummy comment
void* call_u45foldl = (decode_clo(env30241))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call_u45foldl);
arg_buffer[2] = kont29925;
arg_buffer[3] = a2982630089;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(call_u45foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam30240 = encode_clo(alloc_clo(lam30240_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _30247 = arg_buffer[1];
//reading env and args
void* kont29925 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar37595 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37595, "1", 10);
void* a2982130083 = encode_mpz(mpzvar37595);
mpz_t* mpzvar37596 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37596, "2", 10);
void* a2982230084 = encode_mpz(mpzvar37596);
mpz_t* mpzvar37597 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37597, "3", 10);
void* a2982330085 = encode_mpz(mpzvar37597);
mpz_t* mpzvar37598 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37598, "4", 10);
void* a2982430086 = encode_mpz(mpzvar37598);
mpz_t* mpzvar37599 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar37599, "10", 10);
void* a2982530087 = encode_mpz(mpzvar37599);

//creating new closure instance
void** clo37601 = alloc_clo(lam30240_fptr, 2);

//setting env list
clo37601[1] = call_u45foldl;
clo37601[2] = kont29925;
void* f2992630088 = encode_clo(clo37601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2992630088;
arg_buffer[3] = a2982130083;
arg_buffer[4] = a2982230084;
arg_buffer[5] = a2982330085;
arg_buffer[6] = a2982430086;
arg_buffer[7] = a2982530087;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
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

