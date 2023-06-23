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
void* _92112 = arg_buffer[1];
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

void* kont9185491954 = prim_car(lst);
void* lst91955 = prim_cdr(lst);
void* x9176991956 = apply_prim__u43(lst91955);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9185491954);
arg_buffer[2] = x9176991956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9185491954))[0]);
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
void* _92113 = arg_buffer[1];
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

void* kont9185691957 = prim_car(lst);
void* lst91958 = prim_cdr(lst);
void* x9177091959 = apply_prim__u45(lst91958);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9185691957);
arg_buffer[2] = x9177091959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9185691957))[0]);
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
void* _92114 = arg_buffer[1];
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

void* kont9185891960 = prim_car(lst);
void* lst91961 = prim_cdr(lst);
void* x9177191962 = apply_prim__u42(lst91961);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9185891960);
arg_buffer[2] = x9177191962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9185891960))[0]);
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
void* _92115 = arg_buffer[1];
//reading env and args
void* kont91860 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9177291963 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91860);
arg_buffer[2] = x9177291963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91860))[0]);
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
void* _92116 = arg_buffer[1];
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

void* kont9186191964 = prim_car(lst);
void* lst91965 = prim_cdr(lst);
void* x9177391966 = apply_prim__u47(lst91965);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9186191964);
arg_buffer[2] = x9177391966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186191964))[0]);
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
void* _92117 = arg_buffer[1];
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

void* kont9186391967 = prim_car(lst);
void* lst91968 = prim_cdr(lst);
void* x9177491969 = apply_prim__u61(lst91968);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9186391967);
arg_buffer[2] = x9177491969;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186391967))[0]);
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
void* _92118 = arg_buffer[1];
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

void* kont9186591970 = prim_car(lst);
void* lst91971 = prim_cdr(lst);
void* x9177591972 = apply_prim__u62(lst91971);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9186591970);
arg_buffer[2] = x9177591972;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186591970))[0]);
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
void* _92119 = arg_buffer[1];
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

void* kont9186791973 = prim_car(lst);
void* lst91974 = prim_cdr(lst);
void* x9177691975 = apply_prim__u60(lst91974);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9186791973);
arg_buffer[2] = x9177691975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186791973))[0]);
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
void* _92120 = arg_buffer[1];
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

void* kont9186991976 = prim_car(lst);
void* lst91977 = prim_cdr(lst);
void* x9177791978 = apply_prim__u60_u61(lst91977);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9186991976);
arg_buffer[2] = x9177791978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9186991976))[0]);
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
void* _92121 = arg_buffer[1];
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

void* kont9187191979 = prim_car(lst);
void* lst91980 = prim_cdr(lst);
void* x9177891981 = apply_prim__u62_u61(lst91980);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9187191979);
arg_buffer[2] = x9177891981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9187191979))[0]);
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
void* _92122 = arg_buffer[1];
//reading env and args
void* kont91873 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x9177991982 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91873);
arg_buffer[2] = x9177991982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91873))[0]);
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
void* _92123 = arg_buffer[1];
//reading env and args
void* kont91874 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9178091983 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91874);
arg_buffer[2] = x9178091983;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91874))[0]);
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
void* _92124 = arg_buffer[1];
//reading env and args
void* kont91875 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x9178191984 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91875);
arg_buffer[2] = x9178191984;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91875))[0]);
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
void* _92125 = arg_buffer[1];
//reading env and args
void* kont91876 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x9178291985 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91876);
arg_buffer[2] = x9178291985;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91876))[0]);
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
void* _92126 = arg_buffer[1];
//reading env and args
void* kont91877 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9178391986 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91877);
arg_buffer[2] = x9178391986;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91877))[0]);
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
void* _92127 = arg_buffer[1];
//reading env and args
void* kont91878 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x9178491987 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91878);
arg_buffer[2] = x9178491987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91878))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam92128_fptr() // lam92128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92129 = arg_buffer[1];
//reading env and args
void* a9178791991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9178591988 = (decode_clo(env92129))[3];
//not do dummy comment
void* kont91879 = (decode_clo(env92129))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env92129))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont91879;
arg_buffer[3] = a9178591988;
arg_buffer[4] = a9178791991;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92128 = encode_clo(alloc_clo(lam92128_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92132 = arg_buffer[1];
//reading env and args
void* kont91879 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar92545 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92545, "0", 10);
void* a9178591988 = encode_mpz(mpzvar92545);
mpz_t* mpzvar92546 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92546, "2", 10);
void* a9178691989 = encode_mpz(mpzvar92546);

//creating new closure instance
void** clo92548 = alloc_clo(lam92128_fptr, 3);

//setting env list
clo92548[1] = equal_u63;
clo92548[2] = kont91879;
clo92548[3] = a9178591988;
void* f9188091990 = encode_clo(clo92548);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9188091990;
arg_buffer[3] = x;
arg_buffer[4] = a9178691989;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam92133_fptr() // lam92133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92134 = arg_buffer[1];
//reading env and args
void* a9179091995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9178891992 = (decode_clo(env92134))[3];
//not do dummy comment
void* kont91881 = (decode_clo(env92134))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env92134))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont91881;
arg_buffer[3] = a9178891992;
arg_buffer[4] = a9179091995;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92133 = encode_clo(alloc_clo(lam92133_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92137 = arg_buffer[1];
//reading env and args
void* kont91881 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar92549 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92549, "1", 10);
void* a9178891992 = encode_mpz(mpzvar92549);
mpz_t* mpzvar92550 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92550, "2", 10);
void* a9178991993 = encode_mpz(mpzvar92550);

//creating new closure instance
void** clo92552 = alloc_clo(lam92133_fptr, 3);

//setting env list
clo92552[1] = equal_u63;
clo92552[2] = kont91881;
clo92552[3] = a9178891992;
void* f9188291994 = encode_clo(clo92552);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f9188291994;
arg_buffer[3] = x;
arg_buffer[4] = a9178991993;
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
void* _92138 = arg_buffer[1];
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

void* kont9188391996 = prim_car(x);
void* x91997 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9188391996);
arg_buffer[2] = x91997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9188391996))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam92141_fptr() // lam92141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92142 = arg_buffer[1];
//reading env and args
void* a9179692007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91885 = (decode_clo(env92142))[3];
//not do dummy comment
void* x = (decode_clo(env92142))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env92142))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont91885;
arg_buffer[3] = x;
arg_buffer[4] = a9179692007;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92141 = encode_clo(alloc_clo(lam92141_fptr, 0));

void* lam92143_fptr() // lam92143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92144 = arg_buffer[1];
//reading env and args
void* a9179492004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92144))[5];
//not do dummy comment
void* lst = (decode_clo(env92144))[4];
//not do dummy comment
void* kont91885 = (decode_clo(env92144))[3];
//not do dummy comment
void* x = (decode_clo(env92144))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env92144))[1];

//if-clause
bool if_guard92553 = is_true(a9179492004);
if(if_guard92553)
{
void* x9179592005 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91885);
arg_buffer[2] = x9179592005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91885))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo92555 = alloc_clo(lam92141_fptr, 3);

//setting env list
clo92555[1] = member_u63;
clo92555[2] = x;
clo92555[3] = kont91885;
void* f9188692006 = encode_clo(clo92555);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9188692006;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92143 = encode_clo(alloc_clo(lam92143_fptr, 0));

void* lam92145_fptr() // lam92145 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92146 = arg_buffer[1];
//reading env and args
void* a9179392002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92146))[6];
//not do dummy comment
void* lst = (decode_clo(env92146))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env92146))[4];
//not do dummy comment
void* kont91885 = (decode_clo(env92146))[3];
//not do dummy comment
void* x = (decode_clo(env92146))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env92146))[1];

//creating new closure instance
void** clo92557 = alloc_clo(lam92143_fptr, 5);

//setting env list
clo92557[1] = member_u63;
clo92557[2] = x;
clo92557[3] = kont91885;
clo92557[4] = lst;
clo92557[5] = cdr;
void* f9188792003 = encode_clo(clo92557);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f9188792003;
arg_buffer[3] = a9179392002;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92145 = encode_clo(alloc_clo(lam92145_fptr, 0));

void* lam92147_fptr() // lam92147 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92148 = arg_buffer[1];
//reading env and args
void* a9179191999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92148))[7];
//not do dummy comment
void* lst = (decode_clo(env92148))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env92148))[5];
//not do dummy comment
void* kont91885 = (decode_clo(env92148))[4];
//not do dummy comment
void* x = (decode_clo(env92148))[3];
//not do dummy comment
void* car = (decode_clo(env92148))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env92148))[1];

//if-clause
bool if_guard92558 = is_true(a9179191999);
if(if_guard92558)
{
void* x9179292000 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91885);
arg_buffer[2] = x9179292000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91885))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo92560 = alloc_clo(lam92145_fptr, 6);

//setting env list
clo92560[1] = member_u63;
clo92560[2] = x;
clo92560[3] = kont91885;
clo92560[4] = equal_u63;
clo92560[5] = lst;
clo92560[6] = cdr;
void* f9188892001 = encode_clo(clo92560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9188892001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92147 = encode_clo(alloc_clo(lam92147_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92149 = arg_buffer[1];
//reading env and args
void* kont91885 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo92562 = alloc_clo(lam92147_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo92562[1] = member_u63;
clo92562[2] = car;
clo92562[3] = x;
clo92562[4] = kont91885;
clo92562[5] = equal_u63;
clo92562[6] = lst;
clo92562[7] = cdr;
void* f9188991998 = encode_clo(clo92562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9188991998;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam92150_fptr() // lam92150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92151 = arg_buffer[1];
//reading env and args
void* a9180092015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9179992013 = (decode_clo(env92151))[4];
//not do dummy comment
void* fun = (decode_clo(env92151))[3];
//not do dummy comment
void* kont91890 = (decode_clo(env92151))[2];
//not do dummy comment
void* foldl = (decode_clo(env92151))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont91890;
arg_buffer[3] = fun;
arg_buffer[4] = a9179992013;
arg_buffer[5] = a9180092015;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92150 = encode_clo(alloc_clo(lam92150_fptr, 0));

void* lam92152_fptr() // lam92152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92153 = arg_buffer[1];
//reading env and args
void* a9179992013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92153))[5];
//not do dummy comment
void* lst = (decode_clo(env92153))[4];
//not do dummy comment
void* fun = (decode_clo(env92153))[3];
//not do dummy comment
void* kont91890 = (decode_clo(env92153))[2];
//not do dummy comment
void* foldl = (decode_clo(env92153))[1];

//creating new closure instance
void** clo92564 = alloc_clo(lam92150_fptr, 4);

//setting env list
clo92564[1] = foldl;
clo92564[2] = kont91890;
clo92564[3] = fun;
clo92564[4] = a9179992013;
void* f9189192014 = encode_clo(clo92564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9189192014;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92152 = encode_clo(alloc_clo(lam92152_fptr, 0));

void* lam92154_fptr() // lam92154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92155 = arg_buffer[1];
//reading env and args
void* a9179892011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92155))[6];
//not do dummy comment
void* lst = (decode_clo(env92155))[5];
//not do dummy comment
void* fun = (decode_clo(env92155))[4];
//not do dummy comment
void* acc = (decode_clo(env92155))[3];
//not do dummy comment
void* kont91890 = (decode_clo(env92155))[2];
//not do dummy comment
void* foldl = (decode_clo(env92155))[1];

//creating new closure instance
void** clo92566 = alloc_clo(lam92152_fptr, 5);

//setting env list
clo92566[1] = foldl;
clo92566[2] = kont91890;
clo92566[3] = fun;
clo92566[4] = lst;
clo92566[5] = cdr;
void* f9189292012 = encode_clo(clo92566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f9189292012;
arg_buffer[3] = a9179892011;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92154 = encode_clo(alloc_clo(lam92154_fptr, 0));

void* lam92156_fptr() // lam92156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92157 = arg_buffer[1];
//reading env and args
void* a9179792009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92157))[7];
//not do dummy comment
void* lst = (decode_clo(env92157))[6];
//not do dummy comment
void* fun = (decode_clo(env92157))[5];
//not do dummy comment
void* acc = (decode_clo(env92157))[4];
//not do dummy comment
void* car = (decode_clo(env92157))[3];
//not do dummy comment
void* kont91890 = (decode_clo(env92157))[2];
//not do dummy comment
void* foldl = (decode_clo(env92157))[1];

//if-clause
bool if_guard92567 = is_true(a9179792009);
if(if_guard92567)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91890);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91890))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo92569 = alloc_clo(lam92154_fptr, 6);

//setting env list
clo92569[1] = foldl;
clo92569[2] = kont91890;
clo92569[3] = acc;
clo92569[4] = fun;
clo92569[5] = lst;
clo92569[6] = cdr;
void* f9189392010 = encode_clo(clo92569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9189392010;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92156 = encode_clo(alloc_clo(lam92156_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92158 = arg_buffer[1];
//reading env and args
void* kont91890 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo92571 = alloc_clo(lam92156_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo92571[1] = foldl;
clo92571[2] = kont91890;
clo92571[3] = car;
clo92571[4] = acc;
clo92571[5] = fun;
clo92571[6] = lst;
clo92571[7] = cdr;
void* f9189492008 = encode_clo(clo92571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9189492008;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam92159_fptr() // lam92159 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92160 = arg_buffer[1];
//reading env and args
void* a9180492023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91895 = (decode_clo(env92160))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env92160))[2];
//not do dummy comment
void* a9180292019 = (decode_clo(env92160))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont91895;
arg_buffer[3] = a9180292019;
arg_buffer[4] = a9180492023;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92159 = encode_clo(alloc_clo(lam92159_fptr, 0));

void* lam92161_fptr() // lam92161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92162 = arg_buffer[1];
//reading env and args
void* a9180392021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91895 = (decode_clo(env92162))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env92162))[4];
//not do dummy comment
void* lst2 = (decode_clo(env92162))[3];
//not do dummy comment
void* cons = (decode_clo(env92162))[2];
//not do dummy comment
void* a9180292019 = (decode_clo(env92162))[1];

//creating new closure instance
void** clo92573 = alloc_clo(lam92159_fptr, 3);

//setting env list
clo92573[1] = a9180292019;
clo92573[2] = reverse_u45helper;
clo92573[3] = kont91895;
void* f9189692022 = encode_clo(clo92573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9189692022;
arg_buffer[3] = a9180392021;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92161 = encode_clo(alloc_clo(lam92161_fptr, 0));

void* lam92163_fptr() // lam92163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92164 = arg_buffer[1];
//reading env and args
void* a9180292019 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91895 = (decode_clo(env92164))[6];
//not do dummy comment
void* lst = (decode_clo(env92164))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env92164))[4];
//not do dummy comment
void* lst2 = (decode_clo(env92164))[3];
//not do dummy comment
void* car = (decode_clo(env92164))[2];
//not do dummy comment
void* cons = (decode_clo(env92164))[1];

//creating new closure instance
void** clo92575 = alloc_clo(lam92161_fptr, 5);

//setting env list
clo92575[1] = a9180292019;
clo92575[2] = cons;
clo92575[3] = lst2;
clo92575[4] = reverse_u45helper;
clo92575[5] = kont91895;
void* f9189792020 = encode_clo(clo92575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9189792020;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92163 = encode_clo(alloc_clo(lam92163_fptr, 0));

void* lam92165_fptr() // lam92165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92166 = arg_buffer[1];
//reading env and args
void* a9180192017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92166))[7];
//not do dummy comment
void* kont91895 = (decode_clo(env92166))[6];
//not do dummy comment
void* lst = (decode_clo(env92166))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env92166))[4];
//not do dummy comment
void* lst2 = (decode_clo(env92166))[3];
//not do dummy comment
void* car = (decode_clo(env92166))[2];
//not do dummy comment
void* cons = (decode_clo(env92166))[1];

//if-clause
bool if_guard92576 = is_true(a9180192017);
if(if_guard92576)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91895);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91895))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo92578 = alloc_clo(lam92163_fptr, 6);

//setting env list
clo92578[1] = cons;
clo92578[2] = car;
clo92578[3] = lst2;
clo92578[4] = reverse_u45helper;
clo92578[5] = lst;
clo92578[6] = kont91895;
void* f9189892018 = encode_clo(clo92578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9189892018;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92165 = encode_clo(alloc_clo(lam92165_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92167 = arg_buffer[1];
//reading env and args
void* kont91895 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo92580 = alloc_clo(lam92165_fptr, 7);

//setting env list
clo92580[1] = cons;
clo92580[2] = car;
clo92580[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo92580[4] = reverse_u45helper;
clo92580[5] = lst;
clo92580[6] = kont91895;
clo92580[7] = cdr;
void* f9189992016 = encode_clo(clo92580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9189992016;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam92168_fptr() // lam92168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92169 = arg_buffer[1];
//reading env and args
void* a9180592025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env92169))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env92169))[2];
//not do dummy comment
void* kont91900 = (decode_clo(env92169))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont91900;
arg_buffer[3] = lst;
arg_buffer[4] = a9180592025;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92168 = encode_clo(alloc_clo(lam92168_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92170 = arg_buffer[1];
//reading env and args
void* kont91900 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo92582 = alloc_clo(lam92168_fptr, 3);

//setting env list
clo92582[1] = kont91900;
clo92582[2] = reverse_u45helper;
clo92582[3] = lst;
void* f9190192024 = encode_clo(clo92582);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9190192024;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam92171_fptr() // lam92171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92172 = arg_buffer[1];
//reading env and args
void* x9180892030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91902 = (decode_clo(env92172))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91902);
arg_buffer[2] = x9180892030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91902))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92171 = encode_clo(alloc_clo(lam92171_fptr, 0));

void* lam92173_fptr() // lam92173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92174 = arg_buffer[1];
//reading env and args
void* a9181392039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91902 = (decode_clo(env92174))[4];
//not do dummy comment
void* a9181192035 = (decode_clo(env92174))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env92174))[2];
//not do dummy comment
void* a9180992032 = (decode_clo(env92174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont91902;
arg_buffer[3] = a9180992032;
arg_buffer[4] = a9181192035;
arg_buffer[5] = a9181392039;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92173 = encode_clo(alloc_clo(lam92173_fptr, 0));

void* lam92175_fptr() // lam92175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92176 = arg_buffer[1];
//reading env and args
void* a9181292037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91902 = (decode_clo(env92176))[6];
//not do dummy comment
void* cons = (decode_clo(env92176))[5];
//not do dummy comment
void* a9181192035 = (decode_clo(env92176))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env92176))[3];
//not do dummy comment
void* a9180992032 = (decode_clo(env92176))[2];
//not do dummy comment
void* lst2 = (decode_clo(env92176))[1];

//creating new closure instance
void** clo92584 = alloc_clo(lam92173_fptr, 4);

//setting env list
clo92584[1] = a9180992032;
clo92584[2] = take_u45helper;
clo92584[3] = a9181192035;
clo92584[4] = kont91902;
void* f9190492038 = encode_clo(clo92584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f9190492038;
arg_buffer[3] = a9181292037;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92175 = encode_clo(alloc_clo(lam92175_fptr, 0));

void* lam92177_fptr() // lam92177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92178 = arg_buffer[1];
//reading env and args
void* a9181192035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env92178))[7];
//not do dummy comment
void* kont91902 = (decode_clo(env92178))[6];
//not do dummy comment
void* car = (decode_clo(env92178))[5];
//not do dummy comment
void* cons = (decode_clo(env92178))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env92178))[3];
//not do dummy comment
void* a9180992032 = (decode_clo(env92178))[2];
//not do dummy comment
void* lst2 = (decode_clo(env92178))[1];

//creating new closure instance
void** clo92586 = alloc_clo(lam92175_fptr, 6);

//setting env list
clo92586[1] = lst2;
clo92586[2] = a9180992032;
clo92586[3] = take_u45helper;
clo92586[4] = a9181192035;
clo92586[5] = cons;
clo92586[6] = kont91902;
void* f9190592036 = encode_clo(clo92586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9190592036;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92177 = encode_clo(alloc_clo(lam92177_fptr, 0));

void* lam92180_fptr() // lam92180 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92181 = arg_buffer[1];
//reading env and args
void* a9180992032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env92181))[8];
//not do dummy comment
void* kont91902 = (decode_clo(env92181))[7];
//not do dummy comment
void* cons = (decode_clo(env92181))[6];
//not do dummy comment
void* _u45 = (decode_clo(env92181))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env92181))[4];
//not do dummy comment
void* lst2 = (decode_clo(env92181))[3];
//not do dummy comment
void* n = (decode_clo(env92181))[2];
//not do dummy comment
void* car = (decode_clo(env92181))[1];
mpz_t* mpzvar92587 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92587, "1", 10);
void* a9181092033 = encode_mpz(mpzvar92587);

//creating new closure instance
void** clo92589 = alloc_clo(lam92177_fptr, 7);

//setting env list
clo92589[1] = lst2;
clo92589[2] = a9180992032;
clo92589[3] = take_u45helper;
clo92589[4] = cons;
clo92589[5] = car;
clo92589[6] = kont91902;
clo92589[7] = lst;
void* f9190692034 = encode_clo(clo92589);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9190692034;
arg_buffer[3] = n;
arg_buffer[4] = a9181092033;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92180 = encode_clo(alloc_clo(lam92180_fptr, 0));

void* lam92182_fptr() // lam92182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92183 = arg_buffer[1];
//reading env and args
void* a9180792028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92183))[10];
//not do dummy comment
void* lst = (decode_clo(env92183))[9];
//not do dummy comment
void* reverse = (decode_clo(env92183))[8];
//not do dummy comment
void* kont91902 = (decode_clo(env92183))[7];
//not do dummy comment
void* cons = (decode_clo(env92183))[6];
//not do dummy comment
void* _u45 = (decode_clo(env92183))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env92183))[4];
//not do dummy comment
void* lst2 = (decode_clo(env92183))[3];
//not do dummy comment
void* n = (decode_clo(env92183))[2];
//not do dummy comment
void* car = (decode_clo(env92183))[1];

//if-clause
bool if_guard92590 = is_true(a9180792028);
if(if_guard92590)
{

//creating new closure instance
void** clo92592 = alloc_clo(lam92171_fptr, 1);

//setting env list
clo92592[1] = kont91902;
void* f9190392029 = encode_clo(clo92592);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f9190392029;
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
void** clo92594 = alloc_clo(lam92180_fptr, 8);

//setting env list
clo92594[1] = car;
clo92594[2] = n;
clo92594[3] = lst2;
clo92594[4] = take_u45helper;
clo92594[5] = _u45;
clo92594[6] = cons;
clo92594[7] = kont91902;
clo92594[8] = lst;
void* f9190792031 = encode_clo(clo92594);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9190792031;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92182 = encode_clo(alloc_clo(lam92182_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92185 = arg_buffer[1];
//reading env and args
void* kont91902 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar92595 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92595, "0", 10);
void* a9180692026 = encode_mpz(mpzvar92595);

//creating new closure instance
void** clo92597 = alloc_clo(lam92182_fptr, 10);

//setting env list
clo92597[1] = car;
clo92597[2] = n;
clo92597[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo92597[4] = take_u45helper;
clo92597[5] = _u45;
clo92597[6] = cons;
clo92597[7] = kont91902;
clo92597[8] = reverse;
clo92597[9] = lst;
clo92597[10] = cdr;
void* f9190892027 = encode_clo(clo92597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9190892027;
arg_buffer[3] = n;
arg_buffer[4] = a9180692026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam92186_fptr() // lam92186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92187 = arg_buffer[1];
//reading env and args
void* a9181492041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91909 = (decode_clo(env92187))[4];
//not do dummy comment
void* lst = (decode_clo(env92187))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env92187))[2];
//not do dummy comment
void* n = (decode_clo(env92187))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont91909;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a9181492041;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92186 = encode_clo(alloc_clo(lam92186_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92188 = arg_buffer[1];
//reading env and args
void* kont91909 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo92599 = alloc_clo(lam92186_fptr, 4);

//setting env list
clo92599[1] = n;
clo92599[2] = take_u45helper;
clo92599[3] = lst;
clo92599[4] = kont91909;
void* f9191092040 = encode_clo(clo92599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9191092040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam92190_fptr() // lam92190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92191 = arg_buffer[1];
//reading env and args
void* a9181992049 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91911 = (decode_clo(env92191))[3];
//not do dummy comment
void* _u43 = (decode_clo(env92191))[2];
//not do dummy comment
void* a9181792045 = (decode_clo(env92191))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont91911;
arg_buffer[3] = a9181792045;
arg_buffer[4] = a9181992049;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92190 = encode_clo(alloc_clo(lam92190_fptr, 0));

void* lam92192_fptr() // lam92192 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92193 = arg_buffer[1];
//reading env and args
void* a9181892047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91911 = (decode_clo(env92193))[4];
//not do dummy comment
void* length = (decode_clo(env92193))[3];
//not do dummy comment
void* _u43 = (decode_clo(env92193))[2];
//not do dummy comment
void* a9181792045 = (decode_clo(env92193))[1];

//creating new closure instance
void** clo92601 = alloc_clo(lam92190_fptr, 3);

//setting env list
clo92601[1] = a9181792045;
clo92601[2] = _u43;
clo92601[3] = kont91911;
void* f9191292048 = encode_clo(clo92601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f9191292048;
arg_buffer[3] = a9181892047;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92192 = encode_clo(alloc_clo(lam92192_fptr, 0));

void* lam92195_fptr() // lam92195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92196 = arg_buffer[1];
//reading env and args
void* a9181592043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92196))[5];
//not do dummy comment
void* kont91911 = (decode_clo(env92196))[4];
//not do dummy comment
void* lst = (decode_clo(env92196))[3];
//not do dummy comment
void* length = (decode_clo(env92196))[2];
//not do dummy comment
void* _u43 = (decode_clo(env92196))[1];

//if-clause
bool if_guard92602 = is_true(a9181592043);
if(if_guard92602)
{
mpz_t* mpzvar92603 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92603, "0", 10);
void* x9181692044 = encode_mpz(mpzvar92603);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91911);
arg_buffer[2] = x9181692044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91911))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar92604 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92604, "1", 10);
void* a9181792045 = encode_mpz(mpzvar92604);

//creating new closure instance
void** clo92606 = alloc_clo(lam92192_fptr, 4);

//setting env list
clo92606[1] = a9181792045;
clo92606[2] = _u43;
clo92606[3] = length;
clo92606[4] = kont91911;
void* f9191392046 = encode_clo(clo92606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9191392046;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92195 = encode_clo(alloc_clo(lam92195_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92197 = arg_buffer[1];
//reading env and args
void* kont91911 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo92608 = alloc_clo(lam92195_fptr, 5);

//setting env list
clo92608[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo92608[2] = length;
clo92608[3] = lst;
clo92608[4] = kont91911;
clo92608[5] = cdr;
void* f9191492042 = encode_clo(clo92608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9191492042;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam92198_fptr() // lam92198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92199 = arg_buffer[1];
//reading env and args
void* x9182192053 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91915 = (decode_clo(env92199))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91915);
arg_buffer[2] = x9182192053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91915))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92198 = encode_clo(alloc_clo(lam92198_fptr, 0));

void* lam92200_fptr() // lam92200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92201 = arg_buffer[1];
//reading env and args
void* a9182592061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9182392057 = (decode_clo(env92201))[3];
//not do dummy comment
void* kont91915 = (decode_clo(env92201))[2];
//not do dummy comment
void* cons = (decode_clo(env92201))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont91915;
arg_buffer[3] = a9182392057;
arg_buffer[4] = a9182592061;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92200 = encode_clo(alloc_clo(lam92200_fptr, 0));

void* lam92202_fptr() // lam92202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92203 = arg_buffer[1];
//reading env and args
void* a9182492059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91915 = (decode_clo(env92203))[5];
//not do dummy comment
void* proc = (decode_clo(env92203))[4];
//not do dummy comment
void* cons = (decode_clo(env92203))[3];
//not do dummy comment
void* map = (decode_clo(env92203))[2];
//not do dummy comment
void* a9182392057 = (decode_clo(env92203))[1];

//creating new closure instance
void** clo92610 = alloc_clo(lam92200_fptr, 3);

//setting env list
clo92610[1] = cons;
clo92610[2] = kont91915;
clo92610[3] = a9182392057;
void* f9191792060 = encode_clo(clo92610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f9191792060;
arg_buffer[3] = proc;
arg_buffer[4] = a9182492059;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92202 = encode_clo(alloc_clo(lam92202_fptr, 0));

void* lam92204_fptr() // lam92204 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92205 = arg_buffer[1];
//reading env and args
void* a9182392057 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92205))[6];
//not do dummy comment
void* lst = (decode_clo(env92205))[5];
//not do dummy comment
void* map = (decode_clo(env92205))[4];
//not do dummy comment
void* kont91915 = (decode_clo(env92205))[3];
//not do dummy comment
void* proc = (decode_clo(env92205))[2];
//not do dummy comment
void* cons = (decode_clo(env92205))[1];

//creating new closure instance
void** clo92612 = alloc_clo(lam92202_fptr, 5);

//setting env list
clo92612[1] = a9182392057;
clo92612[2] = map;
clo92612[3] = cons;
clo92612[4] = proc;
clo92612[5] = kont91915;
void* f9191892058 = encode_clo(clo92612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9191892058;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92204 = encode_clo(alloc_clo(lam92204_fptr, 0));

void* lam92206_fptr() // lam92206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92207 = arg_buffer[1];
//reading env and args
void* a9182292055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92207))[6];
//not do dummy comment
void* lst = (decode_clo(env92207))[5];
//not do dummy comment
void* map = (decode_clo(env92207))[4];
//not do dummy comment
void* kont91915 = (decode_clo(env92207))[3];
//not do dummy comment
void* proc = (decode_clo(env92207))[2];
//not do dummy comment
void* cons = (decode_clo(env92207))[1];

//creating new closure instance
void** clo92614 = alloc_clo(lam92204_fptr, 6);

//setting env list
clo92614[1] = cons;
clo92614[2] = proc;
clo92614[3] = kont91915;
clo92614[4] = map;
clo92614[5] = lst;
clo92614[6] = cdr;
void* f9191992056 = encode_clo(clo92614);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f9191992056;
arg_buffer[3] = a9182292055;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92206 = encode_clo(alloc_clo(lam92206_fptr, 0));

void* lam92208_fptr() // lam92208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92209 = arg_buffer[1];
//reading env and args
void* a9182092051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env92209))[8];
//not do dummy comment
void* map = (decode_clo(env92209))[7];
//not do dummy comment
void* kont91915 = (decode_clo(env92209))[6];
//not do dummy comment
void* proc = (decode_clo(env92209))[5];
//not do dummy comment
void* car = (decode_clo(env92209))[4];
//not do dummy comment
void* cons = (decode_clo(env92209))[3];
//not do dummy comment
void* list = (decode_clo(env92209))[2];
//not do dummy comment
void* cdr = (decode_clo(env92209))[1];

//if-clause
bool if_guard92615 = is_true(a9182092051);
if(if_guard92615)
{

//creating new closure instance
void** clo92617 = alloc_clo(lam92198_fptr, 1);

//setting env list
clo92617[1] = kont91915;
void* f9191692052 = encode_clo(clo92617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9191692052;
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
void** clo92619 = alloc_clo(lam92206_fptr, 6);

//setting env list
clo92619[1] = cons;
clo92619[2] = proc;
clo92619[3] = kont91915;
clo92619[4] = map;
clo92619[5] = lst;
clo92619[6] = cdr;
void* f9192092054 = encode_clo(clo92619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9192092054;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92208 = encode_clo(alloc_clo(lam92208_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92210 = arg_buffer[1];
//reading env and args
void* kont91915 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo92621 = alloc_clo(lam92208_fptr, 8);

//setting env list
clo92621[1] = cdr;
clo92621[2] = list;
clo92621[3] = cons;
clo92621[4] = car;
clo92621[5] = proc;
clo92621[6] = kont91915;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo92621[7] = map;
clo92621[8] = lst;
void* f9192192050 = encode_clo(clo92621);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9192192050;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam92211_fptr() // lam92211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92212 = arg_buffer[1];
//reading env and args
void* x9182792065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91922 = (decode_clo(env92212))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91922);
arg_buffer[2] = x9182792065;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91922))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92211 = encode_clo(alloc_clo(lam92211_fptr, 0));

void* lam92213_fptr() // lam92213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92214 = arg_buffer[1];
//reading env and args
void* a9183292075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9183092071 = (decode_clo(env92214))[3];
//not do dummy comment
void* cons = (decode_clo(env92214))[2];
//not do dummy comment
void* kont91922 = (decode_clo(env92214))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont91922;
arg_buffer[3] = a9183092071;
arg_buffer[4] = a9183292075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92213 = encode_clo(alloc_clo(lam92213_fptr, 0));

void* lam92215_fptr() // lam92215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92216 = arg_buffer[1];
//reading env and args
void* a9183192073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9183092071 = (decode_clo(env92216))[5];
//not do dummy comment
void* op = (decode_clo(env92216))[4];
//not do dummy comment
void* filter = (decode_clo(env92216))[3];
//not do dummy comment
void* cons = (decode_clo(env92216))[2];
//not do dummy comment
void* kont91922 = (decode_clo(env92216))[1];

//creating new closure instance
void** clo92623 = alloc_clo(lam92213_fptr, 3);

//setting env list
clo92623[1] = kont91922;
clo92623[2] = cons;
clo92623[3] = a9183092071;
void* f9192492074 = encode_clo(clo92623);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f9192492074;
arg_buffer[3] = op;
arg_buffer[4] = a9183192073;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92215 = encode_clo(alloc_clo(lam92215_fptr, 0));

void* lam92217_fptr() // lam92217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92218 = arg_buffer[1];
//reading env and args
void* a9183092071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92218))[6];
//not do dummy comment
void* lst = (decode_clo(env92218))[5];
//not do dummy comment
void* op = (decode_clo(env92218))[4];
//not do dummy comment
void* filter = (decode_clo(env92218))[3];
//not do dummy comment
void* cons = (decode_clo(env92218))[2];
//not do dummy comment
void* kont91922 = (decode_clo(env92218))[1];

//creating new closure instance
void** clo92625 = alloc_clo(lam92215_fptr, 5);

//setting env list
clo92625[1] = kont91922;
clo92625[2] = cons;
clo92625[3] = filter;
clo92625[4] = op;
clo92625[5] = a9183092071;
void* f9192592072 = encode_clo(clo92625);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9192592072;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92217 = encode_clo(alloc_clo(lam92217_fptr, 0));

void* lam92219_fptr() // lam92219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92220 = arg_buffer[1];
//reading env and args
void* a9183392077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env92220))[3];
//not do dummy comment
void* filter = (decode_clo(env92220))[2];
//not do dummy comment
void* kont91922 = (decode_clo(env92220))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont91922;
arg_buffer[3] = op;
arg_buffer[4] = a9183392077;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92219 = encode_clo(alloc_clo(lam92219_fptr, 0));

void* lam92221_fptr() // lam92221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92222 = arg_buffer[1];
//reading env and args
void* a9182992069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92222))[7];
//not do dummy comment
void* lst = (decode_clo(env92222))[6];
//not do dummy comment
void* op = (decode_clo(env92222))[5];
//not do dummy comment
void* filter = (decode_clo(env92222))[4];
//not do dummy comment
void* car = (decode_clo(env92222))[3];
//not do dummy comment
void* cons = (decode_clo(env92222))[2];
//not do dummy comment
void* kont91922 = (decode_clo(env92222))[1];

//if-clause
bool if_guard92626 = is_true(a9182992069);
if(if_guard92626)
{

//creating new closure instance
void** clo92628 = alloc_clo(lam92217_fptr, 6);

//setting env list
clo92628[1] = kont91922;
clo92628[2] = cons;
clo92628[3] = filter;
clo92628[4] = op;
clo92628[5] = lst;
clo92628[6] = cdr;
void* f9192692070 = encode_clo(clo92628);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9192692070;
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
void** clo92630 = alloc_clo(lam92219_fptr, 3);

//setting env list
clo92630[1] = kont91922;
clo92630[2] = filter;
clo92630[3] = op;
void* f9192792076 = encode_clo(clo92630);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9192792076;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92221 = encode_clo(alloc_clo(lam92221_fptr, 0));

void* lam92223_fptr() // lam92223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92224 = arg_buffer[1];
//reading env and args
void* a9182892067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92224))[7];
//not do dummy comment
void* lst = (decode_clo(env92224))[6];
//not do dummy comment
void* op = (decode_clo(env92224))[5];
//not do dummy comment
void* filter = (decode_clo(env92224))[4];
//not do dummy comment
void* car = (decode_clo(env92224))[3];
//not do dummy comment
void* cons = (decode_clo(env92224))[2];
//not do dummy comment
void* kont91922 = (decode_clo(env92224))[1];

//creating new closure instance
void** clo92632 = alloc_clo(lam92221_fptr, 7);

//setting env list
clo92632[1] = kont91922;
clo92632[2] = cons;
clo92632[3] = car;
clo92632[4] = filter;
clo92632[5] = op;
clo92632[6] = lst;
clo92632[7] = cdr;
void* f9192892068 = encode_clo(clo92632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f9192892068;
arg_buffer[3] = a9182892067;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92223 = encode_clo(alloc_clo(lam92223_fptr, 0));

void* lam92225_fptr() // lam92225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92226 = arg_buffer[1];
//reading env and args
void* a9182692063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env92226))[8];
//not do dummy comment
void* op = (decode_clo(env92226))[7];
//not do dummy comment
void* list = (decode_clo(env92226))[6];
//not do dummy comment
void* cdr = (decode_clo(env92226))[5];
//not do dummy comment
void* filter = (decode_clo(env92226))[4];
//not do dummy comment
void* car = (decode_clo(env92226))[3];
//not do dummy comment
void* cons = (decode_clo(env92226))[2];
//not do dummy comment
void* kont91922 = (decode_clo(env92226))[1];

//if-clause
bool if_guard92633 = is_true(a9182692063);
if(if_guard92633)
{

//creating new closure instance
void** clo92635 = alloc_clo(lam92211_fptr, 1);

//setting env list
clo92635[1] = kont91922;
void* f9192392064 = encode_clo(clo92635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f9192392064;
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
void** clo92637 = alloc_clo(lam92223_fptr, 7);

//setting env list
clo92637[1] = kont91922;
clo92637[2] = cons;
clo92637[3] = car;
clo92637[4] = filter;
clo92637[5] = op;
clo92637[6] = lst;
clo92637[7] = cdr;
void* f9192992066 = encode_clo(clo92637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9192992066;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92225 = encode_clo(alloc_clo(lam92225_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92227 = arg_buffer[1];
//reading env and args
void* kont91922 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo92639 = alloc_clo(lam92225_fptr, 8);

//setting env list
clo92639[1] = kont91922;
clo92639[2] = cons;
clo92639[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo92639[4] = filter;
clo92639[5] = cdr;
clo92639[6] = list;
clo92639[7] = op;
clo92639[8] = lst;
void* f9193092062 = encode_clo(clo92639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9193092062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam92228_fptr() // lam92228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92229 = arg_buffer[1];
//reading env and args
void* a9183892085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env92229))[3];
//not do dummy comment
void* kont91931 = (decode_clo(env92229))[2];
//not do dummy comment
void* a9183692082 = (decode_clo(env92229))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont91931;
arg_buffer[3] = a9183692082;
arg_buffer[4] = a9183892085;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92228 = encode_clo(alloc_clo(lam92228_fptr, 0));

void* lam92231_fptr() // lam92231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92232 = arg_buffer[1];
//reading env and args
void* a9183692082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env92232))[4];
//not do dummy comment
void* kont91931 = (decode_clo(env92232))[3];
//not do dummy comment
void* n = (decode_clo(env92232))[2];
//not do dummy comment
void* _u45 = (decode_clo(env92232))[1];
mpz_t* mpzvar92640 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92640, "1", 10);
void* a9183792083 = encode_mpz(mpzvar92640);

//creating new closure instance
void** clo92642 = alloc_clo(lam92228_fptr, 3);

//setting env list
clo92642[1] = a9183692082;
clo92642[2] = kont91931;
clo92642[3] = drop;
void* f9193292084 = encode_clo(clo92642);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f9193292084;
arg_buffer[3] = n;
arg_buffer[4] = a9183792083;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92231 = encode_clo(alloc_clo(lam92231_fptr, 0));

void* lam92233_fptr() // lam92233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92234 = arg_buffer[1];
//reading env and args
void* a9183592080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92234))[6];
//not do dummy comment
void* kont91931 = (decode_clo(env92234))[5];
//not do dummy comment
void* n = (decode_clo(env92234))[4];
//not do dummy comment
void* _u45 = (decode_clo(env92234))[3];
//not do dummy comment
void* lst = (decode_clo(env92234))[2];
//not do dummy comment
void* drop = (decode_clo(env92234))[1];

//if-clause
bool if_guard92643 = is_true(a9183592080);
if(if_guard92643)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91931);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91931))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo92645 = alloc_clo(lam92231_fptr, 4);

//setting env list
clo92645[1] = _u45;
clo92645[2] = n;
clo92645[3] = kont91931;
clo92645[4] = drop;
void* f9193392081 = encode_clo(clo92645);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9193392081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92233 = encode_clo(alloc_clo(lam92233_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92236 = arg_buffer[1];
//reading env and args
void* kont91931 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar92646 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92646, "0", 10);
void* a9183492078 = encode_mpz(mpzvar92646);

//creating new closure instance
void** clo92648 = alloc_clo(lam92233_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo92648[1] = drop;
clo92648[2] = lst;
clo92648[3] = _u45;
clo92648[4] = n;
clo92648[5] = kont91931;
clo92648[6] = cdr;
void* f9193492079 = encode_clo(clo92648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f9193492079;
arg_buffer[3] = n;
arg_buffer[4] = a9183492078;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam92237_fptr() // lam92237 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92238 = arg_buffer[1];
//reading env and args
void* a9184292093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a9184092089 = (decode_clo(env92238))[3];
//not do dummy comment
void* proc = (decode_clo(env92238))[2];
//not do dummy comment
void* kont91935 = (decode_clo(env92238))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont91935;
arg_buffer[3] = a9184092089;
arg_buffer[4] = a9184292093;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92237 = encode_clo(alloc_clo(lam92237_fptr, 0));

void* lam92239_fptr() // lam92239 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92240 = arg_buffer[1];
//reading env and args
void* a9184192091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env92240))[5];
//not do dummy comment
void* a9184092089 = (decode_clo(env92240))[4];
//not do dummy comment
void* proc = (decode_clo(env92240))[3];
//not do dummy comment
void* acc = (decode_clo(env92240))[2];
//not do dummy comment
void* kont91935 = (decode_clo(env92240))[1];

//creating new closure instance
void** clo92650 = alloc_clo(lam92237_fptr, 3);

//setting env list
clo92650[1] = kont91935;
clo92650[2] = proc;
clo92650[3] = a9184092089;
void* f9193692092 = encode_clo(clo92650);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f9193692092;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a9184192091;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92239 = encode_clo(alloc_clo(lam92239_fptr, 0));

void* lam92241_fptr() // lam92241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92242 = arg_buffer[1];
//reading env and args
void* a9184092089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92242))[6];
//not do dummy comment
void* foldr = (decode_clo(env92242))[5];
//not do dummy comment
void* lst = (decode_clo(env92242))[4];
//not do dummy comment
void* proc = (decode_clo(env92242))[3];
//not do dummy comment
void* acc = (decode_clo(env92242))[2];
//not do dummy comment
void* kont91935 = (decode_clo(env92242))[1];

//creating new closure instance
void** clo92652 = alloc_clo(lam92239_fptr, 5);

//setting env list
clo92652[1] = kont91935;
clo92652[2] = acc;
clo92652[3] = proc;
clo92652[4] = a9184092089;
clo92652[5] = foldr;
void* f9193792090 = encode_clo(clo92652);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9193792090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92241 = encode_clo(alloc_clo(lam92241_fptr, 0));

void* lam92243_fptr() // lam92243 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92244 = arg_buffer[1];
//reading env and args
void* a9183992087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env92244))[7];
//not do dummy comment
void* car = (decode_clo(env92244))[6];
//not do dummy comment
void* foldr = (decode_clo(env92244))[5];
//not do dummy comment
void* lst = (decode_clo(env92244))[4];
//not do dummy comment
void* proc = (decode_clo(env92244))[3];
//not do dummy comment
void* acc = (decode_clo(env92244))[2];
//not do dummy comment
void* kont91935 = (decode_clo(env92244))[1];

//if-clause
bool if_guard92653 = is_true(a9183992087);
if(if_guard92653)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91935);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91935))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo92655 = alloc_clo(lam92241_fptr, 6);

//setting env list
clo92655[1] = kont91935;
clo92655[2] = acc;
clo92655[3] = proc;
clo92655[4] = lst;
clo92655[5] = foldr;
clo92655[6] = cdr;
void* f9193892088 = encode_clo(clo92655);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9193892088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92243 = encode_clo(alloc_clo(lam92243_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92245 = arg_buffer[1];
//reading env and args
void* kont91935 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo92657 = alloc_clo(lam92243_fptr, 7);

//setting env list
clo92657[1] = kont91935;
clo92657[2] = acc;
clo92657[3] = proc;
clo92657[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo92657[5] = foldr;
clo92657[6] = car;
clo92657[7] = cdr;
void* f9193992086 = encode_clo(clo92657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9193992086;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam92246_fptr() // lam92246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92247 = arg_buffer[1];
//reading env and args
void* a9184692101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91940 = (decode_clo(env92247))[3];
//not do dummy comment
void* a9184492097 = (decode_clo(env92247))[2];
//not do dummy comment
void* cons = (decode_clo(env92247))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont91940;
arg_buffer[3] = a9184492097;
arg_buffer[4] = a9184692101;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92246 = encode_clo(alloc_clo(lam92246_fptr, 0));

void* lam92248_fptr() // lam92248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92249 = arg_buffer[1];
//reading env and args
void* a9184592099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91940 = (decode_clo(env92249))[5];
//not do dummy comment
void* append = (decode_clo(env92249))[4];
//not do dummy comment
void* lst2 = (decode_clo(env92249))[3];
//not do dummy comment
void* a9184492097 = (decode_clo(env92249))[2];
//not do dummy comment
void* cons = (decode_clo(env92249))[1];

//creating new closure instance
void** clo92659 = alloc_clo(lam92246_fptr, 3);

//setting env list
clo92659[1] = cons;
clo92659[2] = a9184492097;
clo92659[3] = kont91940;
void* f9194192100 = encode_clo(clo92659);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f9194192100;
arg_buffer[3] = a9184592099;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92248 = encode_clo(alloc_clo(lam92248_fptr, 0));

void* lam92250_fptr() // lam92250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92251 = arg_buffer[1];
//reading env and args
void* a9184492097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env92251))[6];
//not do dummy comment
void* lst2 = (decode_clo(env92251))[5];
//not do dummy comment
void* lst1 = (decode_clo(env92251))[4];
//not do dummy comment
void* cons = (decode_clo(env92251))[3];
//not do dummy comment
void* kont91940 = (decode_clo(env92251))[2];
//not do dummy comment
void* cdr = (decode_clo(env92251))[1];

//creating new closure instance
void** clo92661 = alloc_clo(lam92248_fptr, 5);

//setting env list
clo92661[1] = cons;
clo92661[2] = a9184492097;
clo92661[3] = lst2;
clo92661[4] = append;
clo92661[5] = kont91940;
void* f9194292098 = encode_clo(clo92661);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f9194292098;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92250 = encode_clo(alloc_clo(lam92250_fptr, 0));

void* lam92252_fptr() // lam92252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92253 = arg_buffer[1];
//reading env and args
void* a9184392095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env92253))[7];
//not do dummy comment
void* lst2 = (decode_clo(env92253))[6];
//not do dummy comment
void* cons = (decode_clo(env92253))[5];
//not do dummy comment
void* kont91940 = (decode_clo(env92253))[4];
//not do dummy comment
void* cdr = (decode_clo(env92253))[3];
//not do dummy comment
void* lst1 = (decode_clo(env92253))[2];
//not do dummy comment
void* car = (decode_clo(env92253))[1];

//if-clause
bool if_guard92662 = is_true(a9184392095);
if(if_guard92662)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91940);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91940))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo92664 = alloc_clo(lam92250_fptr, 6);

//setting env list
clo92664[1] = cdr;
clo92664[2] = kont91940;
clo92664[3] = cons;
clo92664[4] = lst1;
clo92664[5] = lst2;
clo92664[6] = append;
void* f9194392096 = encode_clo(clo92664);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f9194392096;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam92252 = encode_clo(alloc_clo(lam92252_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92254 = arg_buffer[1];
//reading env and args
void* kont91940 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo92666 = alloc_clo(lam92252_fptr, 7);

//setting env list
clo92666[1] = car;
clo92666[2] = lst1;
clo92666[3] = cdr;
clo92666[4] = kont91940;
clo92666[5] = cons;
clo92666[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo92666[7] = append;
void* f9194492094 = encode_clo(clo92666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f9194492094;
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
void* _92255 = arg_buffer[1];
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

void* kont9194592102 = prim_car(lst);
void* lst92103 = prim_cdr(lst);
void* x9184792104 = apply_prim_hash(lst92103);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont9194592102);
arg_buffer[2] = x9184792104;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont9194592102))[0]);
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
void* _92256 = arg_buffer[1];
//reading env and args
void* kont91947 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9184892105 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91947);
arg_buffer[2] = x9184892105;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91947))[0]);
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
void* _92257 = arg_buffer[1];
//reading env and args
void* kont91948 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x9184992106 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91948);
arg_buffer[2] = x9184992106;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91948))[0]);
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
void* _92258 = arg_buffer[1];
//reading env and args
void* kont91949 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x9185092107 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91949);
arg_buffer[2] = x9185092107;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91949))[0]);
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
void* _92259 = arg_buffer[1];
//reading env and args
void* kont91950 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x9185192108 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91950);
arg_buffer[2] = x9185192108;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91950))[0]);
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
void* _92261 = arg_buffer[1];
//reading env and args
void* kont91951 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar92667 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar92667, "1", 10);
void* a9185292109 = encode_mpz(mpzvar92667);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = kont91951;
arg_buffer[3] = a9185292109;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam92262_fptr() // lam92262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env92263 = arg_buffer[1];
//reading env and args
void* x9185392111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont91952 = (decode_clo(env92263))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont91952);
arg_buffer[2] = x9185392111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont91952))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam92262 = encode_clo(alloc_clo(lam92262_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _92264 = arg_buffer[1];
//reading env and args
void* kont91952 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo92669 = alloc_clo(lam92262_fptr, 1);

//setting env list
clo92669[1] = kont91952;
void* f9195392110 = encode_clo(clo92669);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f9195392110;
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

