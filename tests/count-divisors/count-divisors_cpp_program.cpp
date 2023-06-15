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
void* _6104 = arg_buffer[1];
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

void* kont58285933 = prim_car(lst);
void* lst5934 = prim_cdr(lst);
void* x57345935 = apply_prim__u43(lst5934);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58285933);
arg_buffer[2] = x57345935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58285933))[0]);
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
void* _6105 = arg_buffer[1];
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

void* kont58305936 = prim_car(lst);
void* lst5937 = prim_cdr(lst);
void* x57355938 = apply_prim__u45(lst5937);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58305936);
arg_buffer[2] = x57355938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58305936))[0]);
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
void* _6106 = arg_buffer[1];
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

void* kont58325939 = prim_car(lst);
void* lst5940 = prim_cdr(lst);
void* x57365941 = apply_prim__u42(lst5940);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58325939);
arg_buffer[2] = x57365941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58325939))[0]);
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
void* _6107 = arg_buffer[1];
//reading env and args
void* kont5834 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57375942 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5834);
arg_buffer[2] = x57375942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5834))[0]);
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
void* _6108 = arg_buffer[1];
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

void* kont58355943 = prim_car(lst);
void* lst5944 = prim_cdr(lst);
void* x57385945 = apply_prim__u47(lst5944);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58355943);
arg_buffer[2] = x57385945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58355943))[0]);
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
void* _6109 = arg_buffer[1];
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

void* kont58375946 = prim_car(lst);
void* lst5947 = prim_cdr(lst);
void* x57395948 = apply_prim__u61(lst5947);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58375946);
arg_buffer[2] = x57395948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58375946))[0]);
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
void* _6110 = arg_buffer[1];
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

void* kont58395949 = prim_car(lst);
void* lst5950 = prim_cdr(lst);
void* x57405951 = apply_prim__u62(lst5950);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58395949);
arg_buffer[2] = x57405951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58395949))[0]);
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
void* _6111 = arg_buffer[1];
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

void* kont58415952 = prim_car(lst);
void* lst5953 = prim_cdr(lst);
void* x57415954 = apply_prim__u60(lst5953);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58415952);
arg_buffer[2] = x57415954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58415952))[0]);
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
void* _6112 = arg_buffer[1];
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

void* kont58435955 = prim_car(lst);
void* lst5956 = prim_cdr(lst);
void* x57425957 = apply_prim__u60_u61(lst5956);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58435955);
arg_buffer[2] = x57425957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58435955))[0]);
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
void* _6113 = arg_buffer[1];
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

void* kont58455958 = prim_car(lst);
void* lst5959 = prim_cdr(lst);
void* x57435960 = apply_prim__u62_u61(lst5959);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58455958);
arg_buffer[2] = x57435960;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58455958))[0]);
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
void* _6114 = arg_buffer[1];
//reading env and args
void* kont5847 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x57445961 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5847);
arg_buffer[2] = x57445961;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5847))[0]);
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
void* _6115 = arg_buffer[1];
//reading env and args
void* kont5848 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57455962 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5848);
arg_buffer[2] = x57455962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5848))[0]);
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
void* _6116 = arg_buffer[1];
//reading env and args
void* kont5849 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57465963 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5849);
arg_buffer[2] = x57465963;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5849))[0]);
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
void* _6117 = arg_buffer[1];
//reading env and args
void* kont5850 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57475964 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5850);
arg_buffer[2] = x57475964;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5850))[0]);
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
void* _6118 = arg_buffer[1];
//reading env and args
void* kont5851 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57485965 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5851);
arg_buffer[2] = x57485965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5851))[0]);
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
void* _6119 = arg_buffer[1];
//reading env and args
void* kont5852 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57495966 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5852);
arg_buffer[2] = x57495966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5852))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6120_fptr() // lam6120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6121 = arg_buffer[1];
//reading env and args
void* a57525970 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5853 = (decode_clo(env6121))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env6121))[2];
//not do dummy comment
void* a57505967 = (decode_clo(env6121))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5853;
arg_buffer[3] = a57505967;
arg_buffer[4] = a57525970;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6120 = encode_clo(alloc_clo(lam6120_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6124 = arg_buffer[1];
//reading env and args
void* kont5853 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28171 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28171, "0", 10);
void* a57505967 = encode_mpz(mpzvar28171);
mpz_t* mpzvar28172 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28172, "2", 10);
void* a57515968 = encode_mpz(mpzvar28172);

//creating new closure instance
void** clo28174 = alloc_clo(lam6120_fptr, 3);

//setting env list
clo28174[1] = a57505967;
clo28174[2] = equal_u63;
clo28174[3] = kont5853;
void* f58545969 = encode_clo(clo28174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58545969;
arg_buffer[3] = x;
arg_buffer[4] = a57515968;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6125_fptr() // lam6125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6126 = arg_buffer[1];
//reading env and args
void* a57555974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env6126))[3];
//not do dummy comment
void* kont5855 = (decode_clo(env6126))[2];
//not do dummy comment
void* a57535971 = (decode_clo(env6126))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5855;
arg_buffer[3] = a57535971;
arg_buffer[4] = a57555974;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6125 = encode_clo(alloc_clo(lam6125_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6129 = arg_buffer[1];
//reading env and args
void* kont5855 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28175 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28175, "1", 10);
void* a57535971 = encode_mpz(mpzvar28175);
mpz_t* mpzvar28176 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28176, "2", 10);
void* a57545972 = encode_mpz(mpzvar28176);

//creating new closure instance
void** clo28178 = alloc_clo(lam6125_fptr, 3);

//setting env list
clo28178[1] = a57535971;
clo28178[2] = kont5855;
clo28178[3] = equal_u63;
void* f58565973 = encode_clo(clo28178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58565973;
arg_buffer[3] = x;
arg_buffer[4] = a57545972;
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
void* _6130 = arg_buffer[1];
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

void* kont58575975 = prim_car(x);
void* x5976 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58575975);
arg_buffer[2] = x5976;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58575975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam6133_fptr() // lam6133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6134 = arg_buffer[1];
//reading env and args
void* a57615986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env6134))[3];
//not do dummy comment
void* kont5859 = (decode_clo(env6134))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6134))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont5859;
arg_buffer[3] = x;
arg_buffer[4] = a57615986;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6133 = encode_clo(alloc_clo(lam6133_fptr, 0));

void* lam6135_fptr() // lam6135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6136 = arg_buffer[1];
//reading env and args
void* a57595983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6136))[5];
//not do dummy comment
void* lst = (decode_clo(env6136))[4];
//not do dummy comment
void* x = (decode_clo(env6136))[3];
//not do dummy comment
void* kont5859 = (decode_clo(env6136))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6136))[1];

//if-clause
bool if_guard28179 = is_true(a57595983);
if(if_guard28179)
{
void* x57605984 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5859);
arg_buffer[2] = x57605984;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5859))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28181 = alloc_clo(lam6133_fptr, 3);

//setting env list
clo28181[1] = member_u63;
clo28181[2] = kont5859;
clo28181[3] = x;
void* f58605985 = encode_clo(clo28181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58605985;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6135 = encode_clo(alloc_clo(lam6135_fptr, 0));

void* lam6137_fptr() // lam6137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6138 = arg_buffer[1];
//reading env and args
void* a57585981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6138))[6];
//not do dummy comment
void* lst = (decode_clo(env6138))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env6138))[4];
//not do dummy comment
void* x = (decode_clo(env6138))[3];
//not do dummy comment
void* kont5859 = (decode_clo(env6138))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env6138))[1];

//creating new closure instance
void** clo28183 = alloc_clo(lam6135_fptr, 5);

//setting env list
clo28183[1] = member_u63;
clo28183[2] = kont5859;
clo28183[3] = x;
clo28183[4] = lst;
clo28183[5] = cdr;
void* f58615982 = encode_clo(clo28183);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f58615982;
arg_buffer[3] = a57585981;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6137 = encode_clo(alloc_clo(lam6137_fptr, 0));

void* lam6139_fptr() // lam6139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6140 = arg_buffer[1];
//reading env and args
void* a57565978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6140))[7];
//not do dummy comment
void* lst = (decode_clo(env6140))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env6140))[5];
//not do dummy comment
void* x = (decode_clo(env6140))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6140))[3];
//not do dummy comment
void* kont5859 = (decode_clo(env6140))[2];
//not do dummy comment
void* car = (decode_clo(env6140))[1];

//if-clause
bool if_guard28184 = is_true(a57565978);
if(if_guard28184)
{
void* x57575979 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5859);
arg_buffer[2] = x57575979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5859))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28186 = alloc_clo(lam6137_fptr, 6);

//setting env list
clo28186[1] = member_u63;
clo28186[2] = kont5859;
clo28186[3] = x;
clo28186[4] = equal_u63;
clo28186[5] = lst;
clo28186[6] = cdr;
void* f58625980 = encode_clo(clo28186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58625980;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6139 = encode_clo(alloc_clo(lam6139_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6141 = arg_buffer[1];
//reading env and args
void* kont5859 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28188 = alloc_clo(lam6139_fptr, 7);

//setting env list
clo28188[1] = car;
clo28188[2] = kont5859;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo28188[3] = member_u63;
clo28188[4] = x;
clo28188[5] = equal_u63;
clo28188[6] = lst;
clo28188[7] = cdr;
void* f58635977 = encode_clo(clo28188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58635977;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam6142_fptr() // lam6142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6143 = arg_buffer[1];
//reading env and args
void* a57655994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* fun = (decode_clo(env6143))[4];
//not do dummy comment
void* foldl = (decode_clo(env6143))[3];
//not do dummy comment
void* kont5864 = (decode_clo(env6143))[2];
//not do dummy comment
void* a57645992 = (decode_clo(env6143))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont5864;
arg_buffer[3] = fun;
arg_buffer[4] = a57645992;
arg_buffer[5] = a57655994;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6142 = encode_clo(alloc_clo(lam6142_fptr, 0));

void* lam6144_fptr() // lam6144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6145 = arg_buffer[1];
//reading env and args
void* a57645992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6145))[5];
//not do dummy comment
void* kont5864 = (decode_clo(env6145))[4];
//not do dummy comment
void* lst = (decode_clo(env6145))[3];
//not do dummy comment
void* fun = (decode_clo(env6145))[2];
//not do dummy comment
void* foldl = (decode_clo(env6145))[1];

//creating new closure instance
void** clo28190 = alloc_clo(lam6142_fptr, 4);

//setting env list
clo28190[1] = a57645992;
clo28190[2] = kont5864;
clo28190[3] = foldl;
clo28190[4] = fun;
void* f58655993 = encode_clo(clo28190);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58655993;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6144 = encode_clo(alloc_clo(lam6144_fptr, 0));

void* lam6146_fptr() // lam6146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6147 = arg_buffer[1];
//reading env and args
void* a57635990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6147))[6];
//not do dummy comment
void* kont5864 = (decode_clo(env6147))[5];
//not do dummy comment
void* lst = (decode_clo(env6147))[4];
//not do dummy comment
void* fun = (decode_clo(env6147))[3];
//not do dummy comment
void* acc = (decode_clo(env6147))[2];
//not do dummy comment
void* foldl = (decode_clo(env6147))[1];

//creating new closure instance
void** clo28192 = alloc_clo(lam6144_fptr, 5);

//setting env list
clo28192[1] = foldl;
clo28192[2] = fun;
clo28192[3] = lst;
clo28192[4] = kont5864;
clo28192[5] = cdr;
void* f58665991 = encode_clo(clo28192);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f58665991;
arg_buffer[3] = a57635990;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6146 = encode_clo(alloc_clo(lam6146_fptr, 0));

void* lam6148_fptr() // lam6148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6149 = arg_buffer[1];
//reading env and args
void* a57625988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6149))[7];
//not do dummy comment
void* kont5864 = (decode_clo(env6149))[6];
//not do dummy comment
void* lst = (decode_clo(env6149))[5];
//not do dummy comment
void* fun = (decode_clo(env6149))[4];
//not do dummy comment
void* acc = (decode_clo(env6149))[3];
//not do dummy comment
void* car = (decode_clo(env6149))[2];
//not do dummy comment
void* foldl = (decode_clo(env6149))[1];

//if-clause
bool if_guard28193 = is_true(a57625988);
if(if_guard28193)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5864);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5864))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28195 = alloc_clo(lam6146_fptr, 6);

//setting env list
clo28195[1] = foldl;
clo28195[2] = acc;
clo28195[3] = fun;
clo28195[4] = lst;
clo28195[5] = kont5864;
clo28195[6] = cdr;
void* f58675989 = encode_clo(clo28195);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58675989;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6148 = encode_clo(alloc_clo(lam6148_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6150 = arg_buffer[1];
//reading env and args
void* kont5864 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28197 = alloc_clo(lam6148_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo28197[1] = foldl;
clo28197[2] = car;
clo28197[3] = acc;
clo28197[4] = fun;
clo28197[5] = lst;
clo28197[6] = kont5864;
clo28197[7] = cdr;
void* f58685987 = encode_clo(clo28197);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58685987;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam6151_fptr() // lam6151 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6152 = arg_buffer[1];
//reading env and args
void* a57696002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57675998 = (decode_clo(env6152))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6152))[2];
//not do dummy comment
void* kont5869 = (decode_clo(env6152))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5869;
arg_buffer[3] = a57675998;
arg_buffer[4] = a57696002;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6151 = encode_clo(alloc_clo(lam6151_fptr, 0));

void* lam6153_fptr() // lam6153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6154 = arg_buffer[1];
//reading env and args
void* a57686000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57675998 = (decode_clo(env6154))[5];
//not do dummy comment
void* lst2 = (decode_clo(env6154))[4];
//not do dummy comment
void* cons = (decode_clo(env6154))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6154))[2];
//not do dummy comment
void* kont5869 = (decode_clo(env6154))[1];

//creating new closure instance
void** clo28199 = alloc_clo(lam6151_fptr, 3);

//setting env list
clo28199[1] = kont5869;
clo28199[2] = reverse_u45helper;
clo28199[3] = a57675998;
void* f58706001 = encode_clo(clo28199);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58706001;
arg_buffer[3] = a57686000;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6153 = encode_clo(alloc_clo(lam6153_fptr, 0));

void* lam6155_fptr() // lam6155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6156 = arg_buffer[1];
//reading env and args
void* a57675998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6156))[6];
//not do dummy comment
void* lst2 = (decode_clo(env6156))[5];
//not do dummy comment
void* car = (decode_clo(env6156))[4];
//not do dummy comment
void* cons = (decode_clo(env6156))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6156))[2];
//not do dummy comment
void* kont5869 = (decode_clo(env6156))[1];

//creating new closure instance
void** clo28201 = alloc_clo(lam6153_fptr, 5);

//setting env list
clo28201[1] = kont5869;
clo28201[2] = reverse_u45helper;
clo28201[3] = cons;
clo28201[4] = lst2;
clo28201[5] = a57675998;
void* f58715999 = encode_clo(clo28201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58715999;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6155 = encode_clo(alloc_clo(lam6155_fptr, 0));

void* lam6157_fptr() // lam6157 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6158 = arg_buffer[1];
//reading env and args
void* a57665996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6158))[7];
//not do dummy comment
void* lst = (decode_clo(env6158))[6];
//not do dummy comment
void* lst2 = (decode_clo(env6158))[5];
//not do dummy comment
void* car = (decode_clo(env6158))[4];
//not do dummy comment
void* cons = (decode_clo(env6158))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6158))[2];
//not do dummy comment
void* kont5869 = (decode_clo(env6158))[1];

//if-clause
bool if_guard28202 = is_true(a57665996);
if(if_guard28202)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5869);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5869))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28204 = alloc_clo(lam6155_fptr, 6);

//setting env list
clo28204[1] = kont5869;
clo28204[2] = reverse_u45helper;
clo28204[3] = cons;
clo28204[4] = car;
clo28204[5] = lst2;
clo28204[6] = lst;
void* f58725997 = encode_clo(clo28204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58725997;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6157 = encode_clo(alloc_clo(lam6157_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6159 = arg_buffer[1];
//reading env and args
void* kont5869 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28206 = alloc_clo(lam6157_fptr, 7);

//setting env list
clo28206[1] = kont5869;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo28206[2] = reverse_u45helper;
clo28206[3] = cons;
clo28206[4] = car;
clo28206[5] = lst2;
clo28206[6] = lst;
clo28206[7] = cdr;
void* f58735995 = encode_clo(clo28206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58735995;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam6160_fptr() // lam6160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6161 = arg_buffer[1];
//reading env and args
void* a57706004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6161))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6161))[2];
//not do dummy comment
void* kont5874 = (decode_clo(env6161))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5874;
arg_buffer[3] = lst;
arg_buffer[4] = a57706004;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6160 = encode_clo(alloc_clo(lam6160_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6162 = arg_buffer[1];
//reading env and args
void* kont5874 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28208 = alloc_clo(lam6160_fptr, 3);

//setting env list
clo28208[1] = kont5874;
clo28208[2] = reverse_u45helper;
clo28208[3] = lst;
void* f58756003 = encode_clo(clo28208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58756003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam6163_fptr() // lam6163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6164 = arg_buffer[1];
//reading env and args
void* x57736009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5876 = (decode_clo(env6164))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5876);
arg_buffer[2] = x57736009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5876))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6163 = encode_clo(alloc_clo(lam6163_fptr, 0));

void* lam6165_fptr() // lam6165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6166 = arg_buffer[1];
//reading env and args
void* a57786018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57746011 = (decode_clo(env6166))[4];
//not do dummy comment
void* a57766014 = (decode_clo(env6166))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6166))[2];
//not do dummy comment
void* kont5876 = (decode_clo(env6166))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5876;
arg_buffer[3] = a57746011;
arg_buffer[4] = a57766014;
arg_buffer[5] = a57786018;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6165 = encode_clo(alloc_clo(lam6165_fptr, 0));

void* lam6167_fptr() // lam6167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6168 = arg_buffer[1];
//reading env and args
void* a57776016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57746011 = (decode_clo(env6168))[6];
//not do dummy comment
void* a57766014 = (decode_clo(env6168))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env6168))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6168))[3];
//not do dummy comment
void* cons = (decode_clo(env6168))[2];
//not do dummy comment
void* kont5876 = (decode_clo(env6168))[1];

//creating new closure instance
void** clo28210 = alloc_clo(lam6165_fptr, 4);

//setting env list
clo28210[1] = kont5876;
clo28210[2] = take_u45helper;
clo28210[3] = a57766014;
clo28210[4] = a57746011;
void* f58786017 = encode_clo(clo28210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58786017;
arg_buffer[3] = a57776016;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6167 = encode_clo(alloc_clo(lam6167_fptr, 0));

void* lam6169_fptr() // lam6169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6170 = arg_buffer[1];
//reading env and args
void* a57766014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6170))[7];
//not do dummy comment
void* a57746011 = (decode_clo(env6170))[6];
//not do dummy comment
void* car = (decode_clo(env6170))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env6170))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6170))[3];
//not do dummy comment
void* cons = (decode_clo(env6170))[2];
//not do dummy comment
void* kont5876 = (decode_clo(env6170))[1];

//creating new closure instance
void** clo28212 = alloc_clo(lam6167_fptr, 6);

//setting env list
clo28212[1] = kont5876;
clo28212[2] = cons;
clo28212[3] = lst2;
clo28212[4] = take_u45helper;
clo28212[5] = a57766014;
clo28212[6] = a57746011;
void* f58796015 = encode_clo(clo28212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58796015;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6169 = encode_clo(alloc_clo(lam6169_fptr, 0));

void* lam6172_fptr() // lam6172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6173 = arg_buffer[1];
//reading env and args
void* a57746011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6173))[8];
//not do dummy comment
void* _u45 = (decode_clo(env6173))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env6173))[6];
//not do dummy comment
void* lst2 = (decode_clo(env6173))[5];
//not do dummy comment
void* n = (decode_clo(env6173))[4];
//not do dummy comment
void* car = (decode_clo(env6173))[3];
//not do dummy comment
void* cons = (decode_clo(env6173))[2];
//not do dummy comment
void* kont5876 = (decode_clo(env6173))[1];
mpz_t* mpzvar28213 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28213, "1", 10);
void* a57756012 = encode_mpz(mpzvar28213);

//creating new closure instance
void** clo28215 = alloc_clo(lam6169_fptr, 7);

//setting env list
clo28215[1] = kont5876;
clo28215[2] = cons;
clo28215[3] = lst2;
clo28215[4] = take_u45helper;
clo28215[5] = car;
clo28215[6] = a57746011;
clo28215[7] = lst;
void* f58806013 = encode_clo(clo28215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58806013;
arg_buffer[3] = n;
arg_buffer[4] = a57756012;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6172 = encode_clo(alloc_clo(lam6172_fptr, 0));

void* lam6174_fptr() // lam6174 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6175 = arg_buffer[1];
//reading env and args
void* a57726007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6175))[10];
//not do dummy comment
void* lst = (decode_clo(env6175))[9];
//not do dummy comment
void* reverse = (decode_clo(env6175))[8];
//not do dummy comment
void* _u45 = (decode_clo(env6175))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env6175))[6];
//not do dummy comment
void* lst2 = (decode_clo(env6175))[5];
//not do dummy comment
void* n = (decode_clo(env6175))[4];
//not do dummy comment
void* car = (decode_clo(env6175))[3];
//not do dummy comment
void* cons = (decode_clo(env6175))[2];
//not do dummy comment
void* kont5876 = (decode_clo(env6175))[1];

//if-clause
bool if_guard28216 = is_true(a57726007);
if(if_guard28216)
{

//creating new closure instance
void** clo28218 = alloc_clo(lam6163_fptr, 1);

//setting env list
clo28218[1] = kont5876;
void* f58776008 = encode_clo(clo28218);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f58776008;
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
void** clo28220 = alloc_clo(lam6172_fptr, 8);

//setting env list
clo28220[1] = kont5876;
clo28220[2] = cons;
clo28220[3] = car;
clo28220[4] = n;
clo28220[5] = lst2;
clo28220[6] = take_u45helper;
clo28220[7] = _u45;
clo28220[8] = lst;
void* f58816010 = encode_clo(clo28220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58816010;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6174 = encode_clo(alloc_clo(lam6174_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6177 = arg_buffer[1];
//reading env and args
void* kont5876 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar28221 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28221, "0", 10);
void* a57716005 = encode_mpz(mpzvar28221);

//creating new closure instance
void** clo28223 = alloc_clo(lam6174_fptr, 10);

//setting env list
clo28223[1] = kont5876;
clo28223[2] = cons;
clo28223[3] = car;
clo28223[4] = n;
clo28223[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo28223[6] = take_u45helper;
clo28223[7] = _u45;
clo28223[8] = reverse;
clo28223[9] = lst;
clo28223[10] = cdr;
void* f58826006 = encode_clo(clo28223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58826006;
arg_buffer[3] = n;
arg_buffer[4] = a57716005;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam6178_fptr() // lam6178 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6179 = arg_buffer[1];
//reading env and args
void* a57796020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6179))[4];
//not do dummy comment
void* kont5883 = (decode_clo(env6179))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6179))[2];
//not do dummy comment
void* n = (decode_clo(env6179))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5883;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a57796020;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6178 = encode_clo(alloc_clo(lam6178_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6180 = arg_buffer[1];
//reading env and args
void* kont5883 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28225 = alloc_clo(lam6178_fptr, 4);

//setting env list
clo28225[1] = n;
clo28225[2] = take_u45helper;
clo28225[3] = kont5883;
clo28225[4] = lst;
void* f58846019 = encode_clo(clo28225);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58846019;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam6182_fptr() // lam6182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6183 = arg_buffer[1];
//reading env and args
void* a57846028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57826024 = (decode_clo(env6183))[3];
//not do dummy comment
void* kont5885 = (decode_clo(env6183))[2];
//not do dummy comment
void* _u43 = (decode_clo(env6183))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont5885;
arg_buffer[3] = a57826024;
arg_buffer[4] = a57846028;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6182 = encode_clo(alloc_clo(lam6182_fptr, 0));

void* lam6184_fptr() // lam6184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6185 = arg_buffer[1];
//reading env and args
void* a57836026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57826024 = (decode_clo(env6185))[4];
//not do dummy comment
void* length = (decode_clo(env6185))[3];
//not do dummy comment
void* kont5885 = (decode_clo(env6185))[2];
//not do dummy comment
void* _u43 = (decode_clo(env6185))[1];

//creating new closure instance
void** clo28227 = alloc_clo(lam6182_fptr, 3);

//setting env list
clo28227[1] = _u43;
clo28227[2] = kont5885;
clo28227[3] = a57826024;
void* f58866027 = encode_clo(clo28227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f58866027;
arg_buffer[3] = a57836026;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6184 = encode_clo(alloc_clo(lam6184_fptr, 0));

void* lam6187_fptr() // lam6187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6188 = arg_buffer[1];
//reading env and args
void* a57806022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6188))[5];
//not do dummy comment
void* lst = (decode_clo(env6188))[4];
//not do dummy comment
void* length = (decode_clo(env6188))[3];
//not do dummy comment
void* kont5885 = (decode_clo(env6188))[2];
//not do dummy comment
void* _u43 = (decode_clo(env6188))[1];

//if-clause
bool if_guard28228 = is_true(a57806022);
if(if_guard28228)
{
mpz_t* mpzvar28229 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28229, "0", 10);
void* x57816023 = encode_mpz(mpzvar28229);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5885);
arg_buffer[2] = x57816023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5885))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28230 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28230, "1", 10);
void* a57826024 = encode_mpz(mpzvar28230);

//creating new closure instance
void** clo28232 = alloc_clo(lam6184_fptr, 4);

//setting env list
clo28232[1] = _u43;
clo28232[2] = kont5885;
clo28232[3] = length;
clo28232[4] = a57826024;
void* f58876025 = encode_clo(clo28232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58876025;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6187 = encode_clo(alloc_clo(lam6187_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6189 = arg_buffer[1];
//reading env and args
void* kont5885 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28234 = alloc_clo(lam6187_fptr, 5);

//setting env list
clo28234[1] = _u43;
clo28234[2] = kont5885;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo28234[3] = length;
clo28234[4] = lst;
clo28234[5] = cdr;
void* f58886021 = encode_clo(clo28234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58886021;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam6190_fptr() // lam6190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6191 = arg_buffer[1];
//reading env and args
void* x57866032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5889 = (decode_clo(env6191))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5889);
arg_buffer[2] = x57866032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5889))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6190 = encode_clo(alloc_clo(lam6190_fptr, 0));

void* lam6192_fptr() // lam6192 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6193 = arg_buffer[1];
//reading env and args
void* a57906040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5889 = (decode_clo(env6193))[3];
//not do dummy comment
void* a57886036 = (decode_clo(env6193))[2];
//not do dummy comment
void* cons = (decode_clo(env6193))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5889;
arg_buffer[3] = a57886036;
arg_buffer[4] = a57906040;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6192 = encode_clo(alloc_clo(lam6192_fptr, 0));

void* lam6194_fptr() // lam6194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6195 = arg_buffer[1];
//reading env and args
void* a57896038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env6195))[5];
//not do dummy comment
void* proc = (decode_clo(env6195))[4];
//not do dummy comment
void* kont5889 = (decode_clo(env6195))[3];
//not do dummy comment
void* a57886036 = (decode_clo(env6195))[2];
//not do dummy comment
void* cons = (decode_clo(env6195))[1];

//creating new closure instance
void** clo28236 = alloc_clo(lam6192_fptr, 3);

//setting env list
clo28236[1] = cons;
clo28236[2] = a57886036;
clo28236[3] = kont5889;
void* f58916039 = encode_clo(clo28236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f58916039;
arg_buffer[3] = proc;
arg_buffer[4] = a57896038;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6194 = encode_clo(alloc_clo(lam6194_fptr, 0));

void* lam6196_fptr() // lam6196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6197 = arg_buffer[1];
//reading env and args
void* a57886036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6197))[6];
//not do dummy comment
void* lst = (decode_clo(env6197))[5];
//not do dummy comment
void* map = (decode_clo(env6197))[4];
//not do dummy comment
void* cons = (decode_clo(env6197))[3];
//not do dummy comment
void* proc = (decode_clo(env6197))[2];
//not do dummy comment
void* kont5889 = (decode_clo(env6197))[1];

//creating new closure instance
void** clo28238 = alloc_clo(lam6194_fptr, 5);

//setting env list
clo28238[1] = cons;
clo28238[2] = a57886036;
clo28238[3] = kont5889;
clo28238[4] = proc;
clo28238[5] = map;
void* f58926037 = encode_clo(clo28238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58926037;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6196 = encode_clo(alloc_clo(lam6196_fptr, 0));

void* lam6198_fptr() // lam6198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6199 = arg_buffer[1];
//reading env and args
void* a57876034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6199))[6];
//not do dummy comment
void* lst = (decode_clo(env6199))[5];
//not do dummy comment
void* map = (decode_clo(env6199))[4];
//not do dummy comment
void* cons = (decode_clo(env6199))[3];
//not do dummy comment
void* proc = (decode_clo(env6199))[2];
//not do dummy comment
void* kont5889 = (decode_clo(env6199))[1];

//creating new closure instance
void** clo28240 = alloc_clo(lam6196_fptr, 6);

//setting env list
clo28240[1] = kont5889;
clo28240[2] = proc;
clo28240[3] = cons;
clo28240[4] = map;
clo28240[5] = lst;
clo28240[6] = cdr;
void* f58936035 = encode_clo(clo28240);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f58936035;
arg_buffer[3] = a57876034;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6198 = encode_clo(alloc_clo(lam6198_fptr, 0));

void* lam6200_fptr() // lam6200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6201 = arg_buffer[1];
//reading env and args
void* a57856030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6201))[8];
//not do dummy comment
void* map = (decode_clo(env6201))[7];
//not do dummy comment
void* car = (decode_clo(env6201))[6];
//not do dummy comment
void* cons = (decode_clo(env6201))[5];
//not do dummy comment
void* list = (decode_clo(env6201))[4];
//not do dummy comment
void* cdr = (decode_clo(env6201))[3];
//not do dummy comment
void* proc = (decode_clo(env6201))[2];
//not do dummy comment
void* kont5889 = (decode_clo(env6201))[1];

//if-clause
bool if_guard28241 = is_true(a57856030);
if(if_guard28241)
{

//creating new closure instance
void** clo28243 = alloc_clo(lam6190_fptr, 1);

//setting env list
clo28243[1] = kont5889;
void* f58906031 = encode_clo(clo28243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58906031;
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
void** clo28245 = alloc_clo(lam6198_fptr, 6);

//setting env list
clo28245[1] = kont5889;
clo28245[2] = proc;
clo28245[3] = cons;
clo28245[4] = map;
clo28245[5] = lst;
clo28245[6] = cdr;
void* f58946033 = encode_clo(clo28245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58946033;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6200 = encode_clo(alloc_clo(lam6200_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6202 = arg_buffer[1];
//reading env and args
void* kont5889 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28247 = alloc_clo(lam6200_fptr, 8);

//setting env list
clo28247[1] = kont5889;
clo28247[2] = proc;
clo28247[3] = cdr;
clo28247[4] = list;
clo28247[5] = cons;
clo28247[6] = car;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo28247[7] = map;
clo28247[8] = lst;
void* f58956029 = encode_clo(clo28247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58956029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam6203_fptr() // lam6203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6204 = arg_buffer[1];
//reading env and args
void* x57926044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5896 = (decode_clo(env6204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5896);
arg_buffer[2] = x57926044;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5896))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6203 = encode_clo(alloc_clo(lam6203_fptr, 0));

void* lam6205_fptr() // lam6205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6206 = arg_buffer[1];
//reading env and args
void* a57976054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5896 = (decode_clo(env6206))[3];
//not do dummy comment
void* a57956050 = (decode_clo(env6206))[2];
//not do dummy comment
void* cons = (decode_clo(env6206))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5896;
arg_buffer[3] = a57956050;
arg_buffer[4] = a57976054;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6205 = encode_clo(alloc_clo(lam6205_fptr, 0));

void* lam6207_fptr() // lam6207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6208 = arg_buffer[1];
//reading env and args
void* a57966052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5896 = (decode_clo(env6208))[5];
//not do dummy comment
void* op = (decode_clo(env6208))[4];
//not do dummy comment
void* a57956050 = (decode_clo(env6208))[3];
//not do dummy comment
void* filter = (decode_clo(env6208))[2];
//not do dummy comment
void* cons = (decode_clo(env6208))[1];

//creating new closure instance
void** clo28249 = alloc_clo(lam6205_fptr, 3);

//setting env list
clo28249[1] = cons;
clo28249[2] = a57956050;
clo28249[3] = kont5896;
void* f58986053 = encode_clo(clo28249);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f58986053;
arg_buffer[3] = op;
arg_buffer[4] = a57966052;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6207 = encode_clo(alloc_clo(lam6207_fptr, 0));

void* lam6209_fptr() // lam6209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6210 = arg_buffer[1];
//reading env and args
void* a57956050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6210))[6];
//not do dummy comment
void* kont5896 = (decode_clo(env6210))[5];
//not do dummy comment
void* lst = (decode_clo(env6210))[4];
//not do dummy comment
void* op = (decode_clo(env6210))[3];
//not do dummy comment
void* filter = (decode_clo(env6210))[2];
//not do dummy comment
void* cons = (decode_clo(env6210))[1];

//creating new closure instance
void** clo28251 = alloc_clo(lam6207_fptr, 5);

//setting env list
clo28251[1] = cons;
clo28251[2] = filter;
clo28251[3] = a57956050;
clo28251[4] = op;
clo28251[5] = kont5896;
void* f58996051 = encode_clo(clo28251);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58996051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6209 = encode_clo(alloc_clo(lam6209_fptr, 0));

void* lam6211_fptr() // lam6211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6212 = arg_buffer[1];
//reading env and args
void* a57986056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5896 = (decode_clo(env6212))[3];
//not do dummy comment
void* op = (decode_clo(env6212))[2];
//not do dummy comment
void* filter = (decode_clo(env6212))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont5896;
arg_buffer[3] = op;
arg_buffer[4] = a57986056;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6211 = encode_clo(alloc_clo(lam6211_fptr, 0));

void* lam6213_fptr() // lam6213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6214 = arg_buffer[1];
//reading env and args
void* a57946048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6214))[7];
//not do dummy comment
void* kont5896 = (decode_clo(env6214))[6];
//not do dummy comment
void* lst = (decode_clo(env6214))[5];
//not do dummy comment
void* op = (decode_clo(env6214))[4];
//not do dummy comment
void* cons = (decode_clo(env6214))[3];
//not do dummy comment
void* filter = (decode_clo(env6214))[2];
//not do dummy comment
void* car = (decode_clo(env6214))[1];

//if-clause
bool if_guard28252 = is_true(a57946048);
if(if_guard28252)
{

//creating new closure instance
void** clo28254 = alloc_clo(lam6209_fptr, 6);

//setting env list
clo28254[1] = cons;
clo28254[2] = filter;
clo28254[3] = op;
clo28254[4] = lst;
clo28254[5] = kont5896;
clo28254[6] = cdr;
void* f59006049 = encode_clo(clo28254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59006049;
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
void** clo28256 = alloc_clo(lam6211_fptr, 3);

//setting env list
clo28256[1] = filter;
clo28256[2] = op;
clo28256[3] = kont5896;
void* f59016055 = encode_clo(clo28256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59016055;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6213 = encode_clo(alloc_clo(lam6213_fptr, 0));

void* lam6215_fptr() // lam6215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6216 = arg_buffer[1];
//reading env and args
void* a57936046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6216))[7];
//not do dummy comment
void* kont5896 = (decode_clo(env6216))[6];
//not do dummy comment
void* lst = (decode_clo(env6216))[5];
//not do dummy comment
void* op = (decode_clo(env6216))[4];
//not do dummy comment
void* cons = (decode_clo(env6216))[3];
//not do dummy comment
void* filter = (decode_clo(env6216))[2];
//not do dummy comment
void* car = (decode_clo(env6216))[1];

//creating new closure instance
void** clo28258 = alloc_clo(lam6213_fptr, 7);

//setting env list
clo28258[1] = car;
clo28258[2] = filter;
clo28258[3] = cons;
clo28258[4] = op;
clo28258[5] = lst;
clo28258[6] = kont5896;
clo28258[7] = cdr;
void* f59026047 = encode_clo(clo28258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f59026047;
arg_buffer[3] = a57936046;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6215 = encode_clo(alloc_clo(lam6215_fptr, 0));

void* lam6217_fptr() // lam6217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6218 = arg_buffer[1];
//reading env and args
void* a57916042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5896 = (decode_clo(env6218))[8];
//not do dummy comment
void* lst = (decode_clo(env6218))[7];
//not do dummy comment
void* op = (decode_clo(env6218))[6];
//not do dummy comment
void* cons = (decode_clo(env6218))[5];
//not do dummy comment
void* list = (decode_clo(env6218))[4];
//not do dummy comment
void* cdr = (decode_clo(env6218))[3];
//not do dummy comment
void* filter = (decode_clo(env6218))[2];
//not do dummy comment
void* car = (decode_clo(env6218))[1];

//if-clause
bool if_guard28259 = is_true(a57916042);
if(if_guard28259)
{

//creating new closure instance
void** clo28261 = alloc_clo(lam6203_fptr, 1);

//setting env list
clo28261[1] = kont5896;
void* f58976043 = encode_clo(clo28261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58976043;
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
void** clo28263 = alloc_clo(lam6215_fptr, 7);

//setting env list
clo28263[1] = car;
clo28263[2] = filter;
clo28263[3] = cons;
clo28263[4] = op;
clo28263[5] = lst;
clo28263[6] = kont5896;
clo28263[7] = cdr;
void* f59036045 = encode_clo(clo28263);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59036045;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6217 = encode_clo(alloc_clo(lam6217_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6219 = arg_buffer[1];
//reading env and args
void* kont5896 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28265 = alloc_clo(lam6217_fptr, 8);

//setting env list
clo28265[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo28265[2] = filter;
clo28265[3] = cdr;
clo28265[4] = list;
clo28265[5] = cons;
clo28265[6] = op;
clo28265[7] = lst;
clo28265[8] = kont5896;
void* f59046041 = encode_clo(clo28265);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59046041;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam6220_fptr() // lam6220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6221 = arg_buffer[1];
//reading env and args
void* a58036064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6221))[3];
//not do dummy comment
void* a58016061 = (decode_clo(env6221))[2];
//not do dummy comment
void* kont5905 = (decode_clo(env6221))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont5905;
arg_buffer[3] = a58016061;
arg_buffer[4] = a58036064;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6220 = encode_clo(alloc_clo(lam6220_fptr, 0));

void* lam6223_fptr() // lam6223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6224 = arg_buffer[1];
//reading env and args
void* a58016061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6224))[4];
//not do dummy comment
void* kont5905 = (decode_clo(env6224))[3];
//not do dummy comment
void* n = (decode_clo(env6224))[2];
//not do dummy comment
void* _u45 = (decode_clo(env6224))[1];
mpz_t* mpzvar28266 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28266, "1", 10);
void* a58026062 = encode_mpz(mpzvar28266);

//creating new closure instance
void** clo28268 = alloc_clo(lam6220_fptr, 3);

//setting env list
clo28268[1] = kont5905;
clo28268[2] = a58016061;
clo28268[3] = drop;
void* f59066063 = encode_clo(clo28268);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f59066063;
arg_buffer[3] = n;
arg_buffer[4] = a58026062;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6223 = encode_clo(alloc_clo(lam6223_fptr, 0));

void* lam6225_fptr() // lam6225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6226 = arg_buffer[1];
//reading env and args
void* a58006059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6226))[6];
//not do dummy comment
void* kont5905 = (decode_clo(env6226))[5];
//not do dummy comment
void* n = (decode_clo(env6226))[4];
//not do dummy comment
void* _u45 = (decode_clo(env6226))[3];
//not do dummy comment
void* lst = (decode_clo(env6226))[2];
//not do dummy comment
void* drop = (decode_clo(env6226))[1];

//if-clause
bool if_guard28269 = is_true(a58006059);
if(if_guard28269)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5905);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5905))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28271 = alloc_clo(lam6223_fptr, 4);

//setting env list
clo28271[1] = _u45;
clo28271[2] = n;
clo28271[3] = kont5905;
clo28271[4] = drop;
void* f59076060 = encode_clo(clo28271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59076060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6225 = encode_clo(alloc_clo(lam6225_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6228 = arg_buffer[1];
//reading env and args
void* kont5905 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar28272 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28272, "0", 10);
void* a57996057 = encode_mpz(mpzvar28272);

//creating new closure instance
void** clo28274 = alloc_clo(lam6225_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo28274[1] = drop;
clo28274[2] = lst;
clo28274[3] = _u45;
clo28274[4] = n;
clo28274[5] = kont5905;
clo28274[6] = cdr;
void* f59086058 = encode_clo(clo28274);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f59086058;
arg_buffer[3] = n;
arg_buffer[4] = a57996057;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam6229_fptr() // lam6229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6230 = arg_buffer[1];
//reading env and args
void* a58076072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env6230))[3];
//not do dummy comment
void* a58056068 = (decode_clo(env6230))[2];
//not do dummy comment
void* kont5909 = (decode_clo(env6230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont5909;
arg_buffer[3] = a58056068;
arg_buffer[4] = a58076072;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6229 = encode_clo(alloc_clo(lam6229_fptr, 0));

void* lam6231_fptr() // lam6231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6232 = arg_buffer[1];
//reading env and args
void* a58066070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env6232))[5];
//not do dummy comment
void* a58056068 = (decode_clo(env6232))[4];
//not do dummy comment
void* kont5909 = (decode_clo(env6232))[3];
//not do dummy comment
void* proc = (decode_clo(env6232))[2];
//not do dummy comment
void* acc = (decode_clo(env6232))[1];

//creating new closure instance
void** clo28276 = alloc_clo(lam6229_fptr, 3);

//setting env list
clo28276[1] = kont5909;
clo28276[2] = a58056068;
clo28276[3] = proc;
void* f59106071 = encode_clo(clo28276);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f59106071;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a58066070;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6231 = encode_clo(alloc_clo(lam6231_fptr, 0));

void* lam6233_fptr() // lam6233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6234 = arg_buffer[1];
//reading env and args
void* a58056068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6234))[6];
//not do dummy comment
void* kont5909 = (decode_clo(env6234))[5];
//not do dummy comment
void* foldr = (decode_clo(env6234))[4];
//not do dummy comment
void* lst = (decode_clo(env6234))[3];
//not do dummy comment
void* proc = (decode_clo(env6234))[2];
//not do dummy comment
void* acc = (decode_clo(env6234))[1];

//creating new closure instance
void** clo28278 = alloc_clo(lam6231_fptr, 5);

//setting env list
clo28278[1] = acc;
clo28278[2] = proc;
clo28278[3] = kont5909;
clo28278[4] = a58056068;
clo28278[5] = foldr;
void* f59116069 = encode_clo(clo28278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59116069;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6233 = encode_clo(alloc_clo(lam6233_fptr, 0));

void* lam6235_fptr() // lam6235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6236 = arg_buffer[1];
//reading env and args
void* a58046066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6236))[7];
//not do dummy comment
void* car = (decode_clo(env6236))[6];
//not do dummy comment
void* kont5909 = (decode_clo(env6236))[5];
//not do dummy comment
void* foldr = (decode_clo(env6236))[4];
//not do dummy comment
void* lst = (decode_clo(env6236))[3];
//not do dummy comment
void* proc = (decode_clo(env6236))[2];
//not do dummy comment
void* acc = (decode_clo(env6236))[1];

//if-clause
bool if_guard28279 = is_true(a58046066);
if(if_guard28279)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5909);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5909))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28281 = alloc_clo(lam6233_fptr, 6);

//setting env list
clo28281[1] = acc;
clo28281[2] = proc;
clo28281[3] = lst;
clo28281[4] = foldr;
clo28281[5] = kont5909;
clo28281[6] = cdr;
void* f59126067 = encode_clo(clo28281);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59126067;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6235 = encode_clo(alloc_clo(lam6235_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6237 = arg_buffer[1];
//reading env and args
void* kont5909 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28283 = alloc_clo(lam6235_fptr, 7);

//setting env list
clo28283[1] = acc;
clo28283[2] = proc;
clo28283[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo28283[4] = foldr;
clo28283[5] = kont5909;
clo28283[6] = car;
clo28283[7] = cdr;
void* f59136065 = encode_clo(clo28283);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59136065;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam6238_fptr() // lam6238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6239 = arg_buffer[1];
//reading env and args
void* a58116080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5914 = (decode_clo(env6239))[3];
//not do dummy comment
void* a58096076 = (decode_clo(env6239))[2];
//not do dummy comment
void* cons = (decode_clo(env6239))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5914;
arg_buffer[3] = a58096076;
arg_buffer[4] = a58116080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6238 = encode_clo(alloc_clo(lam6238_fptr, 0));

void* lam6240_fptr() // lam6240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6241 = arg_buffer[1];
//reading env and args
void* a58106078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5914 = (decode_clo(env6241))[5];
//not do dummy comment
void* a58096076 = (decode_clo(env6241))[4];
//not do dummy comment
void* append = (decode_clo(env6241))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6241))[2];
//not do dummy comment
void* cons = (decode_clo(env6241))[1];

//creating new closure instance
void** clo28285 = alloc_clo(lam6238_fptr, 3);

//setting env list
clo28285[1] = cons;
clo28285[2] = a58096076;
clo28285[3] = kont5914;
void* f59156079 = encode_clo(clo28285);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f59156079;
arg_buffer[3] = a58106078;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6240 = encode_clo(alloc_clo(lam6240_fptr, 0));

void* lam6242_fptr() // lam6242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6243 = arg_buffer[1];
//reading env and args
void* a58096076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6243))[6];
//not do dummy comment
void* kont5914 = (decode_clo(env6243))[5];
//not do dummy comment
void* append = (decode_clo(env6243))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6243))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6243))[2];
//not do dummy comment
void* cons = (decode_clo(env6243))[1];

//creating new closure instance
void** clo28287 = alloc_clo(lam6240_fptr, 5);

//setting env list
clo28287[1] = cons;
clo28287[2] = lst2;
clo28287[3] = append;
clo28287[4] = a58096076;
clo28287[5] = kont5914;
void* f59166077 = encode_clo(clo28287);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59166077;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6242 = encode_clo(alloc_clo(lam6242_fptr, 0));

void* lam6244_fptr() // lam6244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6245 = arg_buffer[1];
//reading env and args
void* a58086074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6245))[7];
//not do dummy comment
void* kont5914 = (decode_clo(env6245))[6];
//not do dummy comment
void* append = (decode_clo(env6245))[5];
//not do dummy comment
void* lst2 = (decode_clo(env6245))[4];
//not do dummy comment
void* cons = (decode_clo(env6245))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6245))[2];
//not do dummy comment
void* car = (decode_clo(env6245))[1];

//if-clause
bool if_guard28288 = is_true(a58086074);
if(if_guard28288)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5914);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5914))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28290 = alloc_clo(lam6242_fptr, 6);

//setting env list
clo28290[1] = cons;
clo28290[2] = lst1;
clo28290[3] = lst2;
clo28290[4] = append;
clo28290[5] = kont5914;
clo28290[6] = cdr;
void* f59176075 = encode_clo(clo28290);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59176075;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6244 = encode_clo(alloc_clo(lam6244_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6246 = arg_buffer[1];
//reading env and args
void* kont5914 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28292 = alloc_clo(lam6244_fptr, 7);

//setting env list
clo28292[1] = car;
clo28292[2] = lst1;
clo28292[3] = cons;
clo28292[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo28292[5] = append;
clo28292[6] = kont5914;
clo28292[7] = cdr;
void* f59186073 = encode_clo(clo28292);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59186073;
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
void* _6247 = arg_buffer[1];
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

void* kont59196081 = prim_car(lst);
void* lst6082 = prim_cdr(lst);
void* x58126083 = apply_prim_hash(lst6082);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59196081);
arg_buffer[2] = x58126083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59196081))[0]);
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
void* _6248 = arg_buffer[1];
//reading env and args
void* kont5921 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58136084 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5921);
arg_buffer[2] = x58136084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5921))[0]);
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
void* _6249 = arg_buffer[1];
//reading env and args
void* kont5922 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x58146085 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5922);
arg_buffer[2] = x58146085;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5922))[0]);
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
void* _6250 = arg_buffer[1];
//reading env and args
void* kont5923 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58156086 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5923);
arg_buffer[2] = x58156086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5923))[0]);
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
void* _6251 = arg_buffer[1];
//reading env and args
void* kont5924 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x58166087 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5924);
arg_buffer[2] = x58166087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5924))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam6253_fptr() // lam6253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6254 = arg_buffer[1];
//reading env and args
void* a58246099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* helper = (decode_clo(env6254))[4];
//not do dummy comment
void* kont5925 = (decode_clo(env6254))[3];
//not do dummy comment
void* num = (decode_clo(env6254))[2];
//not do dummy comment
void* a58196092 = (decode_clo(env6254))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(helper);
arg_buffer[2] = kont5925;
arg_buffer[3] = a58196092;
arg_buffer[4] = a58246099;
arg_buffer[5] = num;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6253 = encode_clo(alloc_clo(lam6253_fptr, 0));

void* lam6255_fptr() // lam6255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6256 = arg_buffer[1];
//reading env and args
void* a58226097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env6256))[6];
//not do dummy comment
void* kont5925 = (decode_clo(env6256))[5];
//not do dummy comment
void* count = (decode_clo(env6256))[4];
//not do dummy comment
void* helper = (decode_clo(env6256))[3];
//not do dummy comment
void* num = (decode_clo(env6256))[2];
//not do dummy comment
void* a58196092 = (decode_clo(env6256))[1];

//creating new closure instance
void** clo28294 = alloc_clo(lam6253_fptr, 4);

//setting env list
clo28294[1] = a58196092;
clo28294[2] = num;
clo28294[3] = kont5925;
clo28294[4] = helper;
void* f59266098 = encode_clo(clo28294);



//if-clause
bool if_guard28295 = is_true(a58226097);
if(if_guard28295)
{
mpz_t* mpzvar28296 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28296, "1", 10);
void* a58236100 = encode_mpz(mpzvar28296);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f59266098;
arg_buffer[3] = count;
arg_buffer[4] = a58236100;
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
arg_buffer[1]=reinterpret_cast<void*>(f59266098);
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(f59266098))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6255 = encode_clo(alloc_clo(lam6255_fptr, 0));

void* lam6258_fptr() // lam6258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6259 = arg_buffer[1];
//reading env and args
void* a58206094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env6259))[7];
//not do dummy comment
void* count = (decode_clo(env6259))[6];
//not do dummy comment
void* helper = (decode_clo(env6259))[5];
//not do dummy comment
void* num = (decode_clo(env6259))[4];
//not do dummy comment
void* a58196092 = (decode_clo(env6259))[3];
//not do dummy comment
void* kont5925 = (decode_clo(env6259))[2];
//not do dummy comment
void* _u61 = (decode_clo(env6259))[1];
mpz_t* mpzvar28297 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28297, "0", 10);
void* a58216095 = encode_mpz(mpzvar28297);

//creating new closure instance
void** clo28299 = alloc_clo(lam6255_fptr, 6);

//setting env list
clo28299[1] = a58196092;
clo28299[2] = num;
clo28299[3] = helper;
clo28299[4] = count;
clo28299[5] = kont5925;
clo28299[6] = _u43;
void* f59276096 = encode_clo(clo28299);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f59276096;
arg_buffer[3] = a58206094;
arg_buffer[4] = a58216095;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6258 = encode_clo(alloc_clo(lam6258_fptr, 0));

void* lam6260_fptr() // lam6260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6261 = arg_buffer[1];
//reading env and args
void* a58196092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env6261))[8];
//not do dummy comment
void* _u43 = (decode_clo(env6261))[7];
//not do dummy comment
void* i = (decode_clo(env6261))[6];
//not do dummy comment
void* modulo = (decode_clo(env6261))[5];
//not do dummy comment
void* count = (decode_clo(env6261))[4];
//not do dummy comment
void* helper = (decode_clo(env6261))[3];
//not do dummy comment
void* kont5925 = (decode_clo(env6261))[2];
//not do dummy comment
void* _u61 = (decode_clo(env6261))[1];

//creating new closure instance
void** clo28301 = alloc_clo(lam6258_fptr, 7);

//setting env list
clo28301[1] = _u61;
clo28301[2] = kont5925;
clo28301[3] = a58196092;
clo28301[4] = num;
clo28301[5] = helper;
clo28301[6] = count;
clo28301[7] = _u43;
void* f59286093 = encode_clo(clo28301);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f59286093;
arg_buffer[3] = num;
arg_buffer[4] = i;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6260 = encode_clo(alloc_clo(lam6260_fptr, 0));

void* lam6263_fptr() // lam6263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6264 = arg_buffer[1];
//reading env and args
void* a58176089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* num = (decode_clo(env6264))[8];
//not do dummy comment
void* _u43 = (decode_clo(env6264))[7];
//not do dummy comment
void* i = (decode_clo(env6264))[6];
//not do dummy comment
void* modulo = (decode_clo(env6264))[5];
//not do dummy comment
void* count = (decode_clo(env6264))[4];
//not do dummy comment
void* helper = (decode_clo(env6264))[3];
//not do dummy comment
void* kont5925 = (decode_clo(env6264))[2];
//not do dummy comment
void* _u61 = (decode_clo(env6264))[1];

//if-clause
bool if_guard28302 = is_true(a58176089);
if(if_guard28302)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5925);
arg_buffer[2] = count;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5925))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28303 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28303, "1", 10);
void* a58186090 = encode_mpz(mpzvar28303);

//creating new closure instance
void** clo28305 = alloc_clo(lam6260_fptr, 8);

//setting env list
clo28305[1] = _u61;
clo28305[2] = kont5925;
clo28305[3] = helper;
clo28305[4] = count;
clo28305[5] = modulo;
clo28305[6] = i;
clo28305[7] = _u43;
clo28305[8] = num;
void* f59296091 = encode_clo(clo28305);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = f59296091;
arg_buffer[3] = i;
arg_buffer[4] = a58186090;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6263 = encode_clo(alloc_clo(lam6263_fptr, 0));

void* helper_fptr() // helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6265 = arg_buffer[1];
//reading env and args
void* kont5925 = arg_buffer[2];
void* i = arg_buffer[3];
void* count = arg_buffer[4];
void* num = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28307 = alloc_clo(lam6263_fptr, 8);

//setting env list
clo28307[1] = _u61;
clo28307[2] = kont5925;
void* helper = encode_clo(alloc_clo(helper_fptr, 0));

clo28307[3] = helper;
clo28307[4] = count;
clo28307[5] = modulo;
clo28307[6] = i;
clo28307[7] = _u43;
clo28307[8] = num;
void* f59306088 = encode_clo(clo28307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = f59306088;
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
void* _6268 = arg_buffer[1];
//reading env and args
void* kont5931 = arg_buffer[2];
void* num = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28308 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28308, "1", 10);
void* a58256101 = encode_mpz(mpzvar28308);
mpz_t* mpzvar28309 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28309, "0", 10);
void* a58266102 = encode_mpz(mpzvar28309);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(helper);
arg_buffer[2] = kont5931;
arg_buffer[3] = a58256101;
arg_buffer[4] = a58266102;
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
void* _6270 = arg_buffer[1];
//reading env and args
void* kont5932 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar28310 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28310, "10", 10);
void* a58276103 = encode_mpz(mpzvar28310);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(count_u45divisors);
arg_buffer[2] = kont5932;
arg_buffer[3] = a58276103;
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

