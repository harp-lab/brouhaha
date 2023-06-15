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
void* _6095 = arg_buffer[1];
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

void* kont58265928 = prim_car(lst);
void* lst5929 = prim_cdr(lst);
void* x57345930 = apply_prim__u43(lst5929);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58265928);
arg_buffer[2] = x57345930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58265928))[0]);
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
void* _6096 = arg_buffer[1];
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

void* kont58285931 = prim_car(lst);
void* lst5932 = prim_cdr(lst);
void* x57355933 = apply_prim__u45(lst5932);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58285931);
arg_buffer[2] = x57355933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58285931))[0]);
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
void* _6097 = arg_buffer[1];
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

void* kont58305934 = prim_car(lst);
void* lst5935 = prim_cdr(lst);
void* x57365936 = apply_prim__u42(lst5935);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58305934);
arg_buffer[2] = x57365936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58305934))[0]);
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
void* _6098 = arg_buffer[1];
//reading env and args
void* kont5832 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57375937 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5832);
arg_buffer[2] = x57375937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5832))[0]);
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
void* _6099 = arg_buffer[1];
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

void* kont58335938 = prim_car(lst);
void* lst5939 = prim_cdr(lst);
void* x57385940 = apply_prim__u47(lst5939);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58335938);
arg_buffer[2] = x57385940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58335938))[0]);
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
void* _6100 = arg_buffer[1];
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

void* kont58355941 = prim_car(lst);
void* lst5942 = prim_cdr(lst);
void* x57395943 = apply_prim__u61(lst5942);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58355941);
arg_buffer[2] = x57395943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58355941))[0]);
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
void* _6101 = arg_buffer[1];
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

void* kont58375944 = prim_car(lst);
void* lst5945 = prim_cdr(lst);
void* x57405946 = apply_prim__u62(lst5945);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58375944);
arg_buffer[2] = x57405946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58375944))[0]);
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
void* _6102 = arg_buffer[1];
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

void* kont58395947 = prim_car(lst);
void* lst5948 = prim_cdr(lst);
void* x57415949 = apply_prim__u60(lst5948);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58395947);
arg_buffer[2] = x57415949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58395947))[0]);
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
void* _6103 = arg_buffer[1];
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

void* kont58415950 = prim_car(lst);
void* lst5951 = prim_cdr(lst);
void* x57425952 = apply_prim__u60_u61(lst5951);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58415950);
arg_buffer[2] = x57425952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58415950))[0]);
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

void* kont58435953 = prim_car(lst);
void* lst5954 = prim_cdr(lst);
void* x57435955 = apply_prim__u62_u61(lst5954);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58435953);
arg_buffer[2] = x57435955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58435953))[0]);
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
void* _6105 = arg_buffer[1];
//reading env and args
void* kont5845 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x57445956 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5845);
arg_buffer[2] = x57445956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5845))[0]);
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
void* _6106 = arg_buffer[1];
//reading env and args
void* kont5846 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57455957 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5846);
arg_buffer[2] = x57455957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5846))[0]);
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
void* _6107 = arg_buffer[1];
//reading env and args
void* kont5847 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57465958 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5847);
arg_buffer[2] = x57465958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5847))[0]);
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
void* _6108 = arg_buffer[1];
//reading env and args
void* kont5848 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57475959 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5848);
arg_buffer[2] = x57475959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5848))[0]);
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
void* _6109 = arg_buffer[1];
//reading env and args
void* kont5849 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57485960 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5849);
arg_buffer[2] = x57485960;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5849))[0]);
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
void* _6110 = arg_buffer[1];
//reading env and args
void* kont5850 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57495961 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5850);
arg_buffer[2] = x57495961;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5850))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6111_fptr() // lam6111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6112 = arg_buffer[1];
//reading env and args
void* a57525965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57505962 = (decode_clo(env6112))[3];
//not do dummy comment
void* kont5851 = (decode_clo(env6112))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6112))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5851;
arg_buffer[3] = a57505962;
arg_buffer[4] = a57525965;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6111 = encode_clo(alloc_clo(lam6111_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6115 = arg_buffer[1];
//reading env and args
void* kont5851 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7757 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7757, "0", 10);
void* a57505962 = encode_mpz(mpzvar7757);
mpz_t* mpzvar7758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7758, "2", 10);
void* a57515963 = encode_mpz(mpzvar7758);

//creating new closure instance
void** clo7760 = alloc_clo(lam6111_fptr, 3);

//setting env list
clo7760[1] = equal_u63;
clo7760[2] = kont5851;
clo7760[3] = a57505962;
void* f58525964 = encode_clo(clo7760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58525964;
arg_buffer[3] = x;
arg_buffer[4] = a57515963;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6116_fptr() // lam6116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6117 = arg_buffer[1];
//reading env and args
void* a57555969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5853 = (decode_clo(env6117))[3];
//not do dummy comment
void* a57535966 = (decode_clo(env6117))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6117))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5853;
arg_buffer[3] = a57535966;
arg_buffer[4] = a57555969;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6116 = encode_clo(alloc_clo(lam6116_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6120 = arg_buffer[1];
//reading env and args
void* kont5853 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7761, "1", 10);
void* a57535966 = encode_mpz(mpzvar7761);
mpz_t* mpzvar7762 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7762, "2", 10);
void* a57545967 = encode_mpz(mpzvar7762);

//creating new closure instance
void** clo7764 = alloc_clo(lam6116_fptr, 3);

//setting env list
clo7764[1] = equal_u63;
clo7764[2] = a57535966;
clo7764[3] = kont5853;
void* f58545968 = encode_clo(clo7764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58545968;
arg_buffer[3] = x;
arg_buffer[4] = a57545967;
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
void* _6121 = arg_buffer[1];
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

void* kont58555970 = prim_car(x);
void* x5971 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58555970);
arg_buffer[2] = x5971;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58555970))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam6124_fptr() // lam6124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6125 = arg_buffer[1];
//reading env and args
void* a57615981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env6125))[3];
//not do dummy comment
void* x = (decode_clo(env6125))[2];
//not do dummy comment
void* kont5857 = (decode_clo(env6125))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont5857;
arg_buffer[3] = x;
arg_buffer[4] = a57615981;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6124 = encode_clo(alloc_clo(lam6124_fptr, 0));

void* lam6126_fptr() // lam6126 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6127 = arg_buffer[1];
//reading env and args
void* a57595978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6127))[5];
//not do dummy comment
void* lst = (decode_clo(env6127))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6127))[3];
//not do dummy comment
void* x = (decode_clo(env6127))[2];
//not do dummy comment
void* kont5857 = (decode_clo(env6127))[1];

//if-clause
bool if_guard7765 = is_true(a57595978);
if(if_guard7765)
{
void* x57605979 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5857);
arg_buffer[2] = x57605979;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5857))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7767 = alloc_clo(lam6124_fptr, 3);

//setting env list
clo7767[1] = kont5857;
clo7767[2] = x;
clo7767[3] = member_u63;
void* f58585980 = encode_clo(clo7767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58585980;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6126 = encode_clo(alloc_clo(lam6126_fptr, 0));

void* lam6128_fptr() // lam6128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6129 = arg_buffer[1];
//reading env and args
void* a57585976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6129))[6];
//not do dummy comment
void* lst = (decode_clo(env6129))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env6129))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6129))[3];
//not do dummy comment
void* x = (decode_clo(env6129))[2];
//not do dummy comment
void* kont5857 = (decode_clo(env6129))[1];

//creating new closure instance
void** clo7769 = alloc_clo(lam6126_fptr, 5);

//setting env list
clo7769[1] = kont5857;
clo7769[2] = x;
clo7769[3] = member_u63;
clo7769[4] = lst;
clo7769[5] = cdr;
void* f58595977 = encode_clo(clo7769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f58595977;
arg_buffer[3] = a57585976;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6128 = encode_clo(alloc_clo(lam6128_fptr, 0));

void* lam6130_fptr() // lam6130 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6131 = arg_buffer[1];
//reading env and args
void* a57565973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6131))[7];
//not do dummy comment
void* lst = (decode_clo(env6131))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env6131))[5];
//not do dummy comment
void* car = (decode_clo(env6131))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6131))[3];
//not do dummy comment
void* x = (decode_clo(env6131))[2];
//not do dummy comment
void* kont5857 = (decode_clo(env6131))[1];

//if-clause
bool if_guard7770 = is_true(a57565973);
if(if_guard7770)
{
void* x57575974 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5857);
arg_buffer[2] = x57575974;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5857))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7772 = alloc_clo(lam6128_fptr, 6);

//setting env list
clo7772[1] = kont5857;
clo7772[2] = x;
clo7772[3] = member_u63;
clo7772[4] = equal_u63;
clo7772[5] = lst;
clo7772[6] = cdr;
void* f58605975 = encode_clo(clo7772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58605975;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6130 = encode_clo(alloc_clo(lam6130_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6132 = arg_buffer[1];
//reading env and args
void* kont5857 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7774 = alloc_clo(lam6130_fptr, 7);

//setting env list
clo7774[1] = kont5857;
clo7774[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo7774[3] = member_u63;
clo7774[4] = car;
clo7774[5] = equal_u63;
clo7774[6] = lst;
clo7774[7] = cdr;
void* f58615972 = encode_clo(clo7774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58615972;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam6133_fptr() // lam6133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6134 = arg_buffer[1];
//reading env and args
void* a57655989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5862 = (decode_clo(env6134))[4];
//not do dummy comment
void* fun = (decode_clo(env6134))[3];
//not do dummy comment
void* a57645987 = (decode_clo(env6134))[2];
//not do dummy comment
void* foldl = (decode_clo(env6134))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont5862;
arg_buffer[3] = fun;
arg_buffer[4] = a57645987;
arg_buffer[5] = a57655989;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
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
void* a57645987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6136))[5];
//not do dummy comment
void* fun = (decode_clo(env6136))[4];
//not do dummy comment
void* foldl = (decode_clo(env6136))[3];
//not do dummy comment
void* kont5862 = (decode_clo(env6136))[2];
//not do dummy comment
void* cdr = (decode_clo(env6136))[1];

//creating new closure instance
void** clo7776 = alloc_clo(lam6133_fptr, 4);

//setting env list
clo7776[1] = foldl;
clo7776[2] = a57645987;
clo7776[3] = fun;
clo7776[4] = kont5862;
void* f58635988 = encode_clo(clo7776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58635988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6135 = encode_clo(alloc_clo(lam6135_fptr, 0));

void* lam6137_fptr() // lam6137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6138 = arg_buffer[1];
//reading env and args
void* a57635985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6138))[6];
//not do dummy comment
void* fun = (decode_clo(env6138))[5];
//not do dummy comment
void* acc = (decode_clo(env6138))[4];
//not do dummy comment
void* foldl = (decode_clo(env6138))[3];
//not do dummy comment
void* kont5862 = (decode_clo(env6138))[2];
//not do dummy comment
void* cdr = (decode_clo(env6138))[1];

//creating new closure instance
void** clo7778 = alloc_clo(lam6135_fptr, 5);

//setting env list
clo7778[1] = cdr;
clo7778[2] = kont5862;
clo7778[3] = foldl;
clo7778[4] = fun;
clo7778[5] = lst;
void* f58645986 = encode_clo(clo7778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f58645986;
arg_buffer[3] = a57635985;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a57625983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6140))[7];
//not do dummy comment
void* fun = (decode_clo(env6140))[6];
//not do dummy comment
void* acc = (decode_clo(env6140))[5];
//not do dummy comment
void* car = (decode_clo(env6140))[4];
//not do dummy comment
void* foldl = (decode_clo(env6140))[3];
//not do dummy comment
void* kont5862 = (decode_clo(env6140))[2];
//not do dummy comment
void* cdr = (decode_clo(env6140))[1];

//if-clause
bool if_guard7779 = is_true(a57625983);
if(if_guard7779)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5862);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5862))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7781 = alloc_clo(lam6137_fptr, 6);

//setting env list
clo7781[1] = cdr;
clo7781[2] = kont5862;
clo7781[3] = foldl;
clo7781[4] = acc;
clo7781[5] = fun;
clo7781[6] = lst;
void* f58655984 = encode_clo(clo7781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58655984;
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

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6141 = arg_buffer[1];
//reading env and args
void* kont5862 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7783 = alloc_clo(lam6139_fptr, 7);

//setting env list
clo7783[1] = cdr;
clo7783[2] = kont5862;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo7783[3] = foldl;
clo7783[4] = car;
clo7783[5] = acc;
clo7783[6] = fun;
clo7783[7] = lst;
void* f58665982 = encode_clo(clo7783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58665982;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam6142_fptr() // lam6142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6143 = arg_buffer[1];
//reading env and args
void* a57695997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57675993 = (decode_clo(env6143))[3];
//not do dummy comment
void* kont5867 = (decode_clo(env6143))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6143))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5867;
arg_buffer[3] = a57675993;
arg_buffer[4] = a57695997;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
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
void* a57685995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57675993 = (decode_clo(env6145))[5];
//not do dummy comment
void* kont5867 = (decode_clo(env6145))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6145))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6145))[2];
//not do dummy comment
void* cons = (decode_clo(env6145))[1];

//creating new closure instance
void** clo7785 = alloc_clo(lam6142_fptr, 3);

//setting env list
clo7785[1] = reverse_u45helper;
clo7785[2] = kont5867;
clo7785[3] = a57675993;
void* f58685996 = encode_clo(clo7785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58685996;
arg_buffer[3] = a57685995;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a57675993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6147))[6];
//not do dummy comment
void* kont5867 = (decode_clo(env6147))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6147))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6147))[3];
//not do dummy comment
void* car = (decode_clo(env6147))[2];
//not do dummy comment
void* cons = (decode_clo(env6147))[1];

//creating new closure instance
void** clo7787 = alloc_clo(lam6144_fptr, 5);

//setting env list
clo7787[1] = cons;
clo7787[2] = lst2;
clo7787[3] = reverse_u45helper;
clo7787[4] = kont5867;
clo7787[5] = a57675993;
void* f58695994 = encode_clo(clo7787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58695994;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a57665991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6149))[7];
//not do dummy comment
void* lst = (decode_clo(env6149))[6];
//not do dummy comment
void* kont5867 = (decode_clo(env6149))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6149))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6149))[3];
//not do dummy comment
void* car = (decode_clo(env6149))[2];
//not do dummy comment
void* cons = (decode_clo(env6149))[1];

//if-clause
bool if_guard7788 = is_true(a57665991);
if(if_guard7788)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5867);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5867))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7790 = alloc_clo(lam6146_fptr, 6);

//setting env list
clo7790[1] = cons;
clo7790[2] = car;
clo7790[3] = lst2;
clo7790[4] = reverse_u45helper;
clo7790[5] = kont5867;
clo7790[6] = lst;
void* f58705992 = encode_clo(clo7790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58705992;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6148 = encode_clo(alloc_clo(lam6148_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6150 = arg_buffer[1];
//reading env and args
void* kont5867 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7792 = alloc_clo(lam6148_fptr, 7);

//setting env list
clo7792[1] = cons;
clo7792[2] = car;
clo7792[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo7792[4] = reverse_u45helper;
clo7792[5] = kont5867;
clo7792[6] = lst;
clo7792[7] = cdr;
void* f58715990 = encode_clo(clo7792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58715990;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam6151_fptr() // lam6151 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6152 = arg_buffer[1];
//reading env and args
void* a57705999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6152))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6152))[2];
//not do dummy comment
void* kont5872 = (decode_clo(env6152))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5872;
arg_buffer[3] = lst;
arg_buffer[4] = a57705999;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6151 = encode_clo(alloc_clo(lam6151_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6153 = arg_buffer[1];
//reading env and args
void* kont5872 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7794 = alloc_clo(lam6151_fptr, 3);

//setting env list
clo7794[1] = kont5872;
clo7794[2] = reverse_u45helper;
clo7794[3] = lst;
void* f58735998 = encode_clo(clo7794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58735998;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam6154_fptr() // lam6154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6155 = arg_buffer[1];
//reading env and args
void* x57736004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5874 = (decode_clo(env6155))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5874);
arg_buffer[2] = x57736004;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5874))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6154 = encode_clo(alloc_clo(lam6154_fptr, 0));

void* lam6156_fptr() // lam6156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6157 = arg_buffer[1];
//reading env and args
void* a57786013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57746006 = (decode_clo(env6157))[4];
//not do dummy comment
void* a57766009 = (decode_clo(env6157))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6157))[2];
//not do dummy comment
void* kont5874 = (decode_clo(env6157))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5874;
arg_buffer[3] = a57746006;
arg_buffer[4] = a57766009;
arg_buffer[5] = a57786013;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6156 = encode_clo(alloc_clo(lam6156_fptr, 0));

void* lam6158_fptr() // lam6158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6159 = arg_buffer[1];
//reading env and args
void* a57776011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57746006 = (decode_clo(env6159))[6];
//not do dummy comment
void* a57766009 = (decode_clo(env6159))[5];
//not do dummy comment
void* cons = (decode_clo(env6159))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6159))[3];
//not do dummy comment
void* kont5874 = (decode_clo(env6159))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6159))[1];

//creating new closure instance
void** clo7796 = alloc_clo(lam6156_fptr, 4);

//setting env list
clo7796[1] = kont5874;
clo7796[2] = take_u45helper;
clo7796[3] = a57766009;
clo7796[4] = a57746006;
void* f58766012 = encode_clo(clo7796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58766012;
arg_buffer[3] = a57776011;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6158 = encode_clo(alloc_clo(lam6158_fptr, 0));

void* lam6160_fptr() // lam6160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6161 = arg_buffer[1];
//reading env and args
void* a57766009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57746006 = (decode_clo(env6161))[7];
//not do dummy comment
void* lst = (decode_clo(env6161))[6];
//not do dummy comment
void* car = (decode_clo(env6161))[5];
//not do dummy comment
void* cons = (decode_clo(env6161))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6161))[3];
//not do dummy comment
void* kont5874 = (decode_clo(env6161))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6161))[1];

//creating new closure instance
void** clo7798 = alloc_clo(lam6158_fptr, 6);

//setting env list
clo7798[1] = lst2;
clo7798[2] = kont5874;
clo7798[3] = take_u45helper;
clo7798[4] = cons;
clo7798[5] = a57766009;
clo7798[6] = a57746006;
void* f58776010 = encode_clo(clo7798);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58776010;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6160 = encode_clo(alloc_clo(lam6160_fptr, 0));

void* lam6163_fptr() // lam6163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6164 = arg_buffer[1];
//reading env and args
void* a57746006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6164))[8];
//not do dummy comment
void* cons = (decode_clo(env6164))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6164))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6164))[5];
//not do dummy comment
void* kont5874 = (decode_clo(env6164))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6164))[3];
//not do dummy comment
void* n = (decode_clo(env6164))[2];
//not do dummy comment
void* car = (decode_clo(env6164))[1];
mpz_t* mpzvar7799 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7799, "1", 10);
void* a57756007 = encode_mpz(mpzvar7799);

//creating new closure instance
void** clo7801 = alloc_clo(lam6160_fptr, 7);

//setting env list
clo7801[1] = lst2;
clo7801[2] = kont5874;
clo7801[3] = take_u45helper;
clo7801[4] = cons;
clo7801[5] = car;
clo7801[6] = lst;
clo7801[7] = a57746006;
void* f58786008 = encode_clo(clo7801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58786008;
arg_buffer[3] = n;
arg_buffer[4] = a57756007;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a57726002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6166))[10];
//not do dummy comment
void* lst = (decode_clo(env6166))[9];
//not do dummy comment
void* reverse = (decode_clo(env6166))[8];
//not do dummy comment
void* cons = (decode_clo(env6166))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6166))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6166))[5];
//not do dummy comment
void* kont5874 = (decode_clo(env6166))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6166))[3];
//not do dummy comment
void* n = (decode_clo(env6166))[2];
//not do dummy comment
void* car = (decode_clo(env6166))[1];

//if-clause
bool if_guard7802 = is_true(a57726002);
if(if_guard7802)
{

//creating new closure instance
void** clo7804 = alloc_clo(lam6154_fptr, 1);

//setting env list
clo7804[1] = kont5874;
void* f58756003 = encode_clo(clo7804);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f58756003;
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
void** clo7806 = alloc_clo(lam6163_fptr, 8);

//setting env list
clo7806[1] = car;
clo7806[2] = n;
clo7806[3] = lst2;
clo7806[4] = kont5874;
clo7806[5] = take_u45helper;
clo7806[6] = _u45;
clo7806[7] = cons;
clo7806[8] = lst;
void* f58796005 = encode_clo(clo7806);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58796005;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6165 = encode_clo(alloc_clo(lam6165_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6168 = arg_buffer[1];
//reading env and args
void* kont5874 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar7807 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7807, "0", 10);
void* a57716000 = encode_mpz(mpzvar7807);

//creating new closure instance
void** clo7809 = alloc_clo(lam6165_fptr, 10);

//setting env list
clo7809[1] = car;
clo7809[2] = n;
clo7809[3] = lst2;
clo7809[4] = kont5874;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo7809[5] = take_u45helper;
clo7809[6] = _u45;
clo7809[7] = cons;
clo7809[8] = reverse;
clo7809[9] = lst;
clo7809[10] = cdr;
void* f58806001 = encode_clo(clo7809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58806001;
arg_buffer[3] = n;
arg_buffer[4] = a57716000;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam6169_fptr() // lam6169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6170 = arg_buffer[1];
//reading env and args
void* a57796015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5881 = (decode_clo(env6170))[4];
//not do dummy comment
void* lst = (decode_clo(env6170))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6170))[2];
//not do dummy comment
void* n = (decode_clo(env6170))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5881;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a57796015;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6169 = encode_clo(alloc_clo(lam6169_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6171 = arg_buffer[1];
//reading env and args
void* kont5881 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7811 = alloc_clo(lam6169_fptr, 4);

//setting env list
clo7811[1] = n;
clo7811[2] = take_u45helper;
clo7811[3] = lst;
clo7811[4] = kont5881;
void* f58826014 = encode_clo(clo7811);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58826014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam6173_fptr() // lam6173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6174 = arg_buffer[1];
//reading env and args
void* a57846023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5883 = (decode_clo(env6174))[3];
//not do dummy comment
void* _u43 = (decode_clo(env6174))[2];
//not do dummy comment
void* a57826019 = (decode_clo(env6174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont5883;
arg_buffer[3] = a57826019;
arg_buffer[4] = a57846023;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6173 = encode_clo(alloc_clo(lam6173_fptr, 0));

void* lam6175_fptr() // lam6175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6176 = arg_buffer[1];
//reading env and args
void* a57836021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env6176))[4];
//not do dummy comment
void* a57826019 = (decode_clo(env6176))[3];
//not do dummy comment
void* kont5883 = (decode_clo(env6176))[2];
//not do dummy comment
void* length = (decode_clo(env6176))[1];

//creating new closure instance
void** clo7813 = alloc_clo(lam6173_fptr, 3);

//setting env list
clo7813[1] = a57826019;
clo7813[2] = _u43;
clo7813[3] = kont5883;
void* f58846022 = encode_clo(clo7813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f58846022;
arg_buffer[3] = a57836021;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6175 = encode_clo(alloc_clo(lam6175_fptr, 0));

void* lam6178_fptr() // lam6178 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6179 = arg_buffer[1];
//reading env and args
void* a57806017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6179))[5];
//not do dummy comment
void* lst = (decode_clo(env6179))[4];
//not do dummy comment
void* _u43 = (decode_clo(env6179))[3];
//not do dummy comment
void* kont5883 = (decode_clo(env6179))[2];
//not do dummy comment
void* length = (decode_clo(env6179))[1];

//if-clause
bool if_guard7814 = is_true(a57806017);
if(if_guard7814)
{
mpz_t* mpzvar7815 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7815, "0", 10);
void* x57816018 = encode_mpz(mpzvar7815);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5883);
arg_buffer[2] = x57816018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar7816 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7816, "1", 10);
void* a57826019 = encode_mpz(mpzvar7816);

//creating new closure instance
void** clo7818 = alloc_clo(lam6175_fptr, 4);

//setting env list
clo7818[1] = length;
clo7818[2] = kont5883;
clo7818[3] = a57826019;
clo7818[4] = _u43;
void* f58856020 = encode_clo(clo7818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58856020;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6178 = encode_clo(alloc_clo(lam6178_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6180 = arg_buffer[1];
//reading env and args
void* kont5883 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7820 = alloc_clo(lam6178_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo7820[1] = length;
clo7820[2] = kont5883;
clo7820[3] = _u43;
clo7820[4] = lst;
clo7820[5] = cdr;
void* f58866016 = encode_clo(clo7820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58866016;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam6181_fptr() // lam6181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6182 = arg_buffer[1];
//reading env and args
void* x57866027 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5887 = (decode_clo(env6182))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5887);
arg_buffer[2] = x57866027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5887))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6181 = encode_clo(alloc_clo(lam6181_fptr, 0));

void* lam6183_fptr() // lam6183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6184 = arg_buffer[1];
//reading env and args
void* a57906035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env6184))[3];
//not do dummy comment
void* a57886031 = (decode_clo(env6184))[2];
//not do dummy comment
void* kont5887 = (decode_clo(env6184))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5887;
arg_buffer[3] = a57886031;
arg_buffer[4] = a57906035;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6183 = encode_clo(alloc_clo(lam6183_fptr, 0));

void* lam6185_fptr() // lam6185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6186 = arg_buffer[1];
//reading env and args
void* a57896033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env6186))[5];
//not do dummy comment
void* proc = (decode_clo(env6186))[4];
//not do dummy comment
void* cons = (decode_clo(env6186))[3];
//not do dummy comment
void* a57886031 = (decode_clo(env6186))[2];
//not do dummy comment
void* kont5887 = (decode_clo(env6186))[1];

//creating new closure instance
void** clo7822 = alloc_clo(lam6183_fptr, 3);

//setting env list
clo7822[1] = kont5887;
clo7822[2] = a57886031;
clo7822[3] = cons;
void* f58896034 = encode_clo(clo7822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f58896034;
arg_buffer[3] = proc;
arg_buffer[4] = a57896033;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6185 = encode_clo(alloc_clo(lam6185_fptr, 0));

void* lam6187_fptr() // lam6187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6188 = arg_buffer[1];
//reading env and args
void* a57886031 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6188))[6];
//not do dummy comment
void* lst = (decode_clo(env6188))[5];
//not do dummy comment
void* map = (decode_clo(env6188))[4];
//not do dummy comment
void* kont5887 = (decode_clo(env6188))[3];
//not do dummy comment
void* proc = (decode_clo(env6188))[2];
//not do dummy comment
void* cons = (decode_clo(env6188))[1];

//creating new closure instance
void** clo7824 = alloc_clo(lam6185_fptr, 5);

//setting env list
clo7824[1] = kont5887;
clo7824[2] = a57886031;
clo7824[3] = cons;
clo7824[4] = proc;
clo7824[5] = map;
void* f58906032 = encode_clo(clo7824);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58906032;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6187 = encode_clo(alloc_clo(lam6187_fptr, 0));

void* lam6189_fptr() // lam6189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6190 = arg_buffer[1];
//reading env and args
void* a57876029 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6190))[6];
//not do dummy comment
void* lst = (decode_clo(env6190))[5];
//not do dummy comment
void* map = (decode_clo(env6190))[4];
//not do dummy comment
void* kont5887 = (decode_clo(env6190))[3];
//not do dummy comment
void* proc = (decode_clo(env6190))[2];
//not do dummy comment
void* cons = (decode_clo(env6190))[1];

//creating new closure instance
void** clo7826 = alloc_clo(lam6187_fptr, 6);

//setting env list
clo7826[1] = cons;
clo7826[2] = proc;
clo7826[3] = kont5887;
clo7826[4] = map;
clo7826[5] = lst;
clo7826[6] = cdr;
void* f58916030 = encode_clo(clo7826);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f58916030;
arg_buffer[3] = a57876029;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6189 = encode_clo(alloc_clo(lam6189_fptr, 0));

void* lam6191_fptr() // lam6191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6192 = arg_buffer[1];
//reading env and args
void* a57856025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6192))[8];
//not do dummy comment
void* map = (decode_clo(env6192))[7];
//not do dummy comment
void* kont5887 = (decode_clo(env6192))[6];
//not do dummy comment
void* proc = (decode_clo(env6192))[5];
//not do dummy comment
void* car = (decode_clo(env6192))[4];
//not do dummy comment
void* cons = (decode_clo(env6192))[3];
//not do dummy comment
void* list = (decode_clo(env6192))[2];
//not do dummy comment
void* cdr = (decode_clo(env6192))[1];

//if-clause
bool if_guard7827 = is_true(a57856025);
if(if_guard7827)
{

//creating new closure instance
void** clo7829 = alloc_clo(lam6181_fptr, 1);

//setting env list
clo7829[1] = kont5887;
void* f58886026 = encode_clo(clo7829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58886026;
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
void** clo7831 = alloc_clo(lam6189_fptr, 6);

//setting env list
clo7831[1] = cons;
clo7831[2] = proc;
clo7831[3] = kont5887;
clo7831[4] = map;
clo7831[5] = lst;
clo7831[6] = cdr;
void* f58926028 = encode_clo(clo7831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58926028;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6191 = encode_clo(alloc_clo(lam6191_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6193 = arg_buffer[1];
//reading env and args
void* kont5887 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7833 = alloc_clo(lam6191_fptr, 8);

//setting env list
clo7833[1] = cdr;
clo7833[2] = list;
clo7833[3] = cons;
clo7833[4] = car;
clo7833[5] = proc;
clo7833[6] = kont5887;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo7833[7] = map;
clo7833[8] = lst;
void* f58936024 = encode_clo(clo7833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58936024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam6194_fptr() // lam6194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6195 = arg_buffer[1];
//reading env and args
void* x57926039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5894 = (decode_clo(env6195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5894);
arg_buffer[2] = x57926039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5894))[0]);
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
void* a57976049 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5894 = (decode_clo(env6197))[3];
//not do dummy comment
void* a57956045 = (decode_clo(env6197))[2];
//not do dummy comment
void* cons = (decode_clo(env6197))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5894;
arg_buffer[3] = a57956045;
arg_buffer[4] = a57976049;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a57966047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5894 = (decode_clo(env6199))[5];
//not do dummy comment
void* filter = (decode_clo(env6199))[4];
//not do dummy comment
void* cons = (decode_clo(env6199))[3];
//not do dummy comment
void* a57956045 = (decode_clo(env6199))[2];
//not do dummy comment
void* op = (decode_clo(env6199))[1];

//creating new closure instance
void** clo7835 = alloc_clo(lam6196_fptr, 3);

//setting env list
clo7835[1] = cons;
clo7835[2] = a57956045;
clo7835[3] = kont5894;
void* f58966048 = encode_clo(clo7835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f58966048;
arg_buffer[3] = op;
arg_buffer[4] = a57966047;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a57956045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6201))[6];
//not do dummy comment
void* op = (decode_clo(env6201))[5];
//not do dummy comment
void* filter = (decode_clo(env6201))[4];
//not do dummy comment
void* cons = (decode_clo(env6201))[3];
//not do dummy comment
void* kont5894 = (decode_clo(env6201))[2];
//not do dummy comment
void* cdr = (decode_clo(env6201))[1];

//creating new closure instance
void** clo7837 = alloc_clo(lam6198_fptr, 5);

//setting env list
clo7837[1] = op;
clo7837[2] = a57956045;
clo7837[3] = cons;
clo7837[4] = filter;
clo7837[5] = kont5894;
void* f58976046 = encode_clo(clo7837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58976046;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6200 = encode_clo(alloc_clo(lam6200_fptr, 0));

void* lam6202_fptr() // lam6202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6203 = arg_buffer[1];
//reading env and args
void* a57986051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5894 = (decode_clo(env6203))[3];
//not do dummy comment
void* op = (decode_clo(env6203))[2];
//not do dummy comment
void* filter = (decode_clo(env6203))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont5894;
arg_buffer[3] = op;
arg_buffer[4] = a57986051;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6202 = encode_clo(alloc_clo(lam6202_fptr, 0));

void* lam6204_fptr() // lam6204 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6205 = arg_buffer[1];
//reading env and args
void* a57946043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6205))[7];
//not do dummy comment
void* op = (decode_clo(env6205))[6];
//not do dummy comment
void* cons = (decode_clo(env6205))[5];
//not do dummy comment
void* kont5894 = (decode_clo(env6205))[4];
//not do dummy comment
void* cdr = (decode_clo(env6205))[3];
//not do dummy comment
void* filter = (decode_clo(env6205))[2];
//not do dummy comment
void* car = (decode_clo(env6205))[1];

//if-clause
bool if_guard7838 = is_true(a57946043);
if(if_guard7838)
{

//creating new closure instance
void** clo7840 = alloc_clo(lam6200_fptr, 6);

//setting env list
clo7840[1] = cdr;
clo7840[2] = kont5894;
clo7840[3] = cons;
clo7840[4] = filter;
clo7840[5] = op;
clo7840[6] = lst;
void* f58986044 = encode_clo(clo7840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58986044;
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
void** clo7842 = alloc_clo(lam6202_fptr, 3);

//setting env list
clo7842[1] = filter;
clo7842[2] = op;
clo7842[3] = kont5894;
void* f58996050 = encode_clo(clo7842);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58996050;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6204 = encode_clo(alloc_clo(lam6204_fptr, 0));

void* lam6206_fptr() // lam6206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6207 = arg_buffer[1];
//reading env and args
void* a57936041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6207))[7];
//not do dummy comment
void* op = (decode_clo(env6207))[6];
//not do dummy comment
void* cons = (decode_clo(env6207))[5];
//not do dummy comment
void* kont5894 = (decode_clo(env6207))[4];
//not do dummy comment
void* cdr = (decode_clo(env6207))[3];
//not do dummy comment
void* filter = (decode_clo(env6207))[2];
//not do dummy comment
void* car = (decode_clo(env6207))[1];

//creating new closure instance
void** clo7844 = alloc_clo(lam6204_fptr, 7);

//setting env list
clo7844[1] = car;
clo7844[2] = filter;
clo7844[3] = cdr;
clo7844[4] = kont5894;
clo7844[5] = cons;
clo7844[6] = op;
clo7844[7] = lst;
void* f59006042 = encode_clo(clo7844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f59006042;
arg_buffer[3] = a57936041;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6206 = encode_clo(alloc_clo(lam6206_fptr, 0));

void* lam6208_fptr() // lam6208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6209 = arg_buffer[1];
//reading env and args
void* a57916037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6209))[8];
//not do dummy comment
void* op = (decode_clo(env6209))[7];
//not do dummy comment
void* cons = (decode_clo(env6209))[6];
//not do dummy comment
void* list = (decode_clo(env6209))[5];
//not do dummy comment
void* kont5894 = (decode_clo(env6209))[4];
//not do dummy comment
void* cdr = (decode_clo(env6209))[3];
//not do dummy comment
void* filter = (decode_clo(env6209))[2];
//not do dummy comment
void* car = (decode_clo(env6209))[1];

//if-clause
bool if_guard7845 = is_true(a57916037);
if(if_guard7845)
{

//creating new closure instance
void** clo7847 = alloc_clo(lam6194_fptr, 1);

//setting env list
clo7847[1] = kont5894;
void* f58956038 = encode_clo(clo7847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58956038;
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
void** clo7849 = alloc_clo(lam6206_fptr, 7);

//setting env list
clo7849[1] = car;
clo7849[2] = filter;
clo7849[3] = cdr;
clo7849[4] = kont5894;
clo7849[5] = cons;
clo7849[6] = op;
clo7849[7] = lst;
void* f59016040 = encode_clo(clo7849);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59016040;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6208 = encode_clo(alloc_clo(lam6208_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6210 = arg_buffer[1];
//reading env and args
void* kont5894 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7851 = alloc_clo(lam6208_fptr, 8);

//setting env list
clo7851[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo7851[2] = filter;
clo7851[3] = cdr;
clo7851[4] = kont5894;
clo7851[5] = list;
clo7851[6] = cons;
clo7851[7] = op;
clo7851[8] = lst;
void* f59026036 = encode_clo(clo7851);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59026036;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam6211_fptr() // lam6211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6212 = arg_buffer[1];
//reading env and args
void* a58036059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a58016056 = (decode_clo(env6212))[3];
//not do dummy comment
void* drop = (decode_clo(env6212))[2];
//not do dummy comment
void* kont5903 = (decode_clo(env6212))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont5903;
arg_buffer[3] = a58016056;
arg_buffer[4] = a58036059;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6211 = encode_clo(alloc_clo(lam6211_fptr, 0));

void* lam6214_fptr() // lam6214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6215 = arg_buffer[1];
//reading env and args
void* a58016056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6215))[4];
//not do dummy comment
void* kont5903 = (decode_clo(env6215))[3];
//not do dummy comment
void* n = (decode_clo(env6215))[2];
//not do dummy comment
void* _u45 = (decode_clo(env6215))[1];
mpz_t* mpzvar7852 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7852, "1", 10);
void* a58026057 = encode_mpz(mpzvar7852);

//creating new closure instance
void** clo7854 = alloc_clo(lam6211_fptr, 3);

//setting env list
clo7854[1] = kont5903;
clo7854[2] = drop;
clo7854[3] = a58016056;
void* f59046058 = encode_clo(clo7854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f59046058;
arg_buffer[3] = n;
arg_buffer[4] = a58026057;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6214 = encode_clo(alloc_clo(lam6214_fptr, 0));

void* lam6216_fptr() // lam6216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6217 = arg_buffer[1];
//reading env and args
void* a58006054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6217))[6];
//not do dummy comment
void* kont5903 = (decode_clo(env6217))[5];
//not do dummy comment
void* n = (decode_clo(env6217))[4];
//not do dummy comment
void* _u45 = (decode_clo(env6217))[3];
//not do dummy comment
void* lst = (decode_clo(env6217))[2];
//not do dummy comment
void* drop = (decode_clo(env6217))[1];

//if-clause
bool if_guard7855 = is_true(a58006054);
if(if_guard7855)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5903);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5903))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7857 = alloc_clo(lam6214_fptr, 4);

//setting env list
clo7857[1] = _u45;
clo7857[2] = n;
clo7857[3] = kont5903;
clo7857[4] = drop;
void* f59056055 = encode_clo(clo7857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59056055;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6216 = encode_clo(alloc_clo(lam6216_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6219 = arg_buffer[1];
//reading env and args
void* kont5903 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar7858 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7858, "0", 10);
void* a57996052 = encode_mpz(mpzvar7858);

//creating new closure instance
void** clo7860 = alloc_clo(lam6216_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo7860[1] = drop;
clo7860[2] = lst;
clo7860[3] = _u45;
clo7860[4] = n;
clo7860[5] = kont5903;
clo7860[6] = cdr;
void* f59066053 = encode_clo(clo7860);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f59066053;
arg_buffer[3] = n;
arg_buffer[4] = a57996052;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam6220_fptr() // lam6220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6221 = arg_buffer[1];
//reading env and args
void* a58076067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a58056063 = (decode_clo(env6221))[3];
//not do dummy comment
void* proc = (decode_clo(env6221))[2];
//not do dummy comment
void* kont5907 = (decode_clo(env6221))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont5907;
arg_buffer[3] = a58056063;
arg_buffer[4] = a58076067;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6220 = encode_clo(alloc_clo(lam6220_fptr, 0));

void* lam6222_fptr() // lam6222 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6223 = arg_buffer[1];
//reading env and args
void* a58066065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env6223))[5];
//not do dummy comment
void* a58056063 = (decode_clo(env6223))[4];
//not do dummy comment
void* kont5907 = (decode_clo(env6223))[3];
//not do dummy comment
void* proc = (decode_clo(env6223))[2];
//not do dummy comment
void* acc = (decode_clo(env6223))[1];

//creating new closure instance
void** clo7862 = alloc_clo(lam6220_fptr, 3);

//setting env list
clo7862[1] = kont5907;
clo7862[2] = proc;
clo7862[3] = a58056063;
void* f59086066 = encode_clo(clo7862);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f59086066;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a58066065;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6222 = encode_clo(alloc_clo(lam6222_fptr, 0));

void* lam6224_fptr() // lam6224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6225 = arg_buffer[1];
//reading env and args
void* a58056063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6225))[6];
//not do dummy comment
void* kont5907 = (decode_clo(env6225))[5];
//not do dummy comment
void* foldr = (decode_clo(env6225))[4];
//not do dummy comment
void* lst = (decode_clo(env6225))[3];
//not do dummy comment
void* proc = (decode_clo(env6225))[2];
//not do dummy comment
void* acc = (decode_clo(env6225))[1];

//creating new closure instance
void** clo7864 = alloc_clo(lam6222_fptr, 5);

//setting env list
clo7864[1] = acc;
clo7864[2] = proc;
clo7864[3] = kont5907;
clo7864[4] = a58056063;
clo7864[5] = foldr;
void* f59096064 = encode_clo(clo7864);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59096064;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6224 = encode_clo(alloc_clo(lam6224_fptr, 0));

void* lam6226_fptr() // lam6226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6227 = arg_buffer[1];
//reading env and args
void* a58046061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6227))[7];
//not do dummy comment
void* foldr = (decode_clo(env6227))[6];
//not do dummy comment
void* lst = (decode_clo(env6227))[5];
//not do dummy comment
void* proc = (decode_clo(env6227))[4];
//not do dummy comment
void* acc = (decode_clo(env6227))[3];
//not do dummy comment
void* kont5907 = (decode_clo(env6227))[2];
//not do dummy comment
void* car = (decode_clo(env6227))[1];

//if-clause
bool if_guard7865 = is_true(a58046061);
if(if_guard7865)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5907);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5907))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7867 = alloc_clo(lam6224_fptr, 6);

//setting env list
clo7867[1] = acc;
clo7867[2] = proc;
clo7867[3] = lst;
clo7867[4] = foldr;
clo7867[5] = kont5907;
clo7867[6] = cdr;
void* f59106062 = encode_clo(clo7867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59106062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6226 = encode_clo(alloc_clo(lam6226_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6228 = arg_buffer[1];
//reading env and args
void* kont5907 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7869 = alloc_clo(lam6226_fptr, 7);

//setting env list
clo7869[1] = car;
clo7869[2] = kont5907;
clo7869[3] = acc;
clo7869[4] = proc;
clo7869[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo7869[6] = foldr;
clo7869[7] = cdr;
void* f59116060 = encode_clo(clo7869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59116060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam6229_fptr() // lam6229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6230 = arg_buffer[1];
//reading env and args
void* a58116075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a58096071 = (decode_clo(env6230))[3];
//not do dummy comment
void* kont5912 = (decode_clo(env6230))[2];
//not do dummy comment
void* cons = (decode_clo(env6230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5912;
arg_buffer[3] = a58096071;
arg_buffer[4] = a58116075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a58106073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a58096071 = (decode_clo(env6232))[5];
//not do dummy comment
void* kont5912 = (decode_clo(env6232))[4];
//not do dummy comment
void* append = (decode_clo(env6232))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6232))[2];
//not do dummy comment
void* cons = (decode_clo(env6232))[1];

//creating new closure instance
void** clo7871 = alloc_clo(lam6229_fptr, 3);

//setting env list
clo7871[1] = cons;
clo7871[2] = kont5912;
clo7871[3] = a58096071;
void* f59136074 = encode_clo(clo7871);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f59136074;
arg_buffer[3] = a58106073;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a58096071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6234))[6];
//not do dummy comment
void* kont5912 = (decode_clo(env6234))[5];
//not do dummy comment
void* append = (decode_clo(env6234))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6234))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6234))[2];
//not do dummy comment
void* cons = (decode_clo(env6234))[1];

//creating new closure instance
void** clo7873 = alloc_clo(lam6231_fptr, 5);

//setting env list
clo7873[1] = cons;
clo7873[2] = lst2;
clo7873[3] = append;
clo7873[4] = kont5912;
clo7873[5] = a58096071;
void* f59146072 = encode_clo(clo7873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59146072;
arg_buffer[3] = lst1;
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
void* a58086069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6236))[7];
//not do dummy comment
void* kont5912 = (decode_clo(env6236))[6];
//not do dummy comment
void* append = (decode_clo(env6236))[5];
//not do dummy comment
void* lst2 = (decode_clo(env6236))[4];
//not do dummy comment
void* cons = (decode_clo(env6236))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6236))[2];
//not do dummy comment
void* car = (decode_clo(env6236))[1];

//if-clause
bool if_guard7874 = is_true(a58086069);
if(if_guard7874)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5912);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5912))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7876 = alloc_clo(lam6233_fptr, 6);

//setting env list
clo7876[1] = cons;
clo7876[2] = lst1;
clo7876[3] = lst2;
clo7876[4] = append;
clo7876[5] = kont5912;
clo7876[6] = cdr;
void* f59156070 = encode_clo(clo7876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59156070;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6235 = encode_clo(alloc_clo(lam6235_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6237 = arg_buffer[1];
//reading env and args
void* kont5912 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7878 = alloc_clo(lam6235_fptr, 7);

//setting env list
clo7878[1] = car;
clo7878[2] = lst1;
clo7878[3] = cons;
clo7878[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo7878[5] = append;
clo7878[6] = kont5912;
clo7878[7] = cdr;
void* f59166068 = encode_clo(clo7878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59166068;
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
void* _6238 = arg_buffer[1];
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

void* kont59176076 = prim_car(lst);
void* lst6077 = prim_cdr(lst);
void* x58126078 = apply_prim_hash(lst6077);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59176076);
arg_buffer[2] = x58126078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59176076))[0]);
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
void* _6239 = arg_buffer[1];
//reading env and args
void* kont5919 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58136079 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5919);
arg_buffer[2] = x58136079;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5919))[0]);
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
void* _6240 = arg_buffer[1];
//reading env and args
void* kont5920 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x58146080 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5920);
arg_buffer[2] = x58146080;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5920))[0]);
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
void* _6241 = arg_buffer[1];
//reading env and args
void* kont5921 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58156081 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5921);
arg_buffer[2] = x58156081;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5921))[0]);
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
void* _6242 = arg_buffer[1];
//reading env and args
void* kont5922 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x58166082 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5922);
arg_buffer[2] = x58166082;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5922))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam6245_fptr() // lam6245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6246 = arg_buffer[1];
//reading env and args
void* a58216089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6246))[2];
//not do dummy comment
void* kont5923 = (decode_clo(env6246))[1];

//if-clause
bool if_guard7879 = is_true(a58216089);
if(if_guard7879)
{
mpz_t* mpzvar7880 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7880, "2", 10);
void* a58226090 = encode_mpz(mpzvar7880);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont5923;
arg_buffer[3] = a58226090;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x58236091 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5923);
arg_buffer[2] = x58236091;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5923))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6245 = encode_clo(alloc_clo(lam6245_fptr, 0));

void* lam6249_fptr() // lam6249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6250 = arg_buffer[1];
//reading env and args
void* a58196086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6250))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env6250))[2];
//not do dummy comment
void* kont5923 = (decode_clo(env6250))[1];

//if-clause
bool if_guard7881 = is_true(a58196086);
if(if_guard7881)
{
mpz_t* mpzvar7882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7882, "2", 10);
void* a58206087 = encode_mpz(mpzvar7882);

//creating new closure instance
void** clo7884 = alloc_clo(lam6245_fptr, 2);

//setting env list
clo7884[1] = kont5923;
clo7884[2] = odd_u63;
void* f59246088 = encode_clo(clo7884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f59246088;
arg_buffer[3] = a58206087;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x58246092 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5923);
arg_buffer[2] = x58246092;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5923))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6249 = encode_clo(alloc_clo(lam6249_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6253 = arg_buffer[1];
//reading env and args
void* kont5923 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar7885 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7885, "1", 10);
void* a58176083 = encode_mpz(mpzvar7885);
mpz_t* mpzvar7886 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7886, "1", 10);
void* a58186084 = encode_mpz(mpzvar7886);

//creating new closure instance
void** clo7888 = alloc_clo(lam6249_fptr, 3);

//setting env list
clo7888[1] = kont5923;
clo7888[2] = even_u63;
clo7888[3] = odd_u63;
void* f59256085 = encode_clo(clo7888);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f59256085;
arg_buffer[3] = a58176083;
arg_buffer[4] = a58186084;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam6254_fptr() // lam6254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6255 = arg_buffer[1];
//reading env and args
void* x58256094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5926 = (decode_clo(env6255))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5926);
arg_buffer[2] = x58256094;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5926))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6254 = encode_clo(alloc_clo(lam6254_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6256 = arg_buffer[1];
//reading env and args
void* kont5926 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo7890 = alloc_clo(lam6254_fptr, 1);

//setting env list
clo7890[1] = kont5926;
void* f59276093 = encode_clo(clo7890);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f59276093;
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

