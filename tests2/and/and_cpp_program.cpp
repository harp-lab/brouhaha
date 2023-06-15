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
void* _6091 = arg_buffer[1];
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

void* kont58225924 = prim_car(lst);
void* lst5925 = prim_cdr(lst);
void* x57305926 = apply_prim__u43(lst5925);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58225924);
arg_buffer[2] = x57305926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58225924))[0]);
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
void* _6092 = arg_buffer[1];
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

void* kont58245927 = prim_car(lst);
void* lst5928 = prim_cdr(lst);
void* x57315929 = apply_prim__u45(lst5928);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58245927);
arg_buffer[2] = x57315929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58245927))[0]);
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
void* _6093 = arg_buffer[1];
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

void* kont58265930 = prim_car(lst);
void* lst5931 = prim_cdr(lst);
void* x57325932 = apply_prim__u42(lst5931);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58265930);
arg_buffer[2] = x57325932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58265930))[0]);
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
void* _6094 = arg_buffer[1];
//reading env and args
void* kont5828 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57335933 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5828);
arg_buffer[2] = x57335933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5828))[0]);
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

void* kont58295934 = prim_car(lst);
void* lst5935 = prim_cdr(lst);
void* x57345936 = apply_prim__u47(lst5935);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58295934);
arg_buffer[2] = x57345936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58295934))[0]);
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

void* kont58315937 = prim_car(lst);
void* lst5938 = prim_cdr(lst);
void* x57355939 = apply_prim__u61(lst5938);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58315937);
arg_buffer[2] = x57355939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58315937))[0]);
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

void* kont58335940 = prim_car(lst);
void* lst5941 = prim_cdr(lst);
void* x57365942 = apply_prim__u62(lst5941);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58335940);
arg_buffer[2] = x57365942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58335940))[0]);
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
void* _6098 = arg_buffer[1];
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
void* x57375945 = apply_prim__u60(lst5944);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58355943);
arg_buffer[2] = x57375945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58355943))[0]);
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

void* kont58375946 = prim_car(lst);
void* lst5947 = prim_cdr(lst);
void* x57385948 = apply_prim__u60_u61(lst5947);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58375946);
arg_buffer[2] = x57385948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58375946))[0]);
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

void* kont58395949 = prim_car(lst);
void* lst5950 = prim_cdr(lst);
void* x57395951 = apply_prim__u62_u61(lst5950);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58395949);
arg_buffer[2] = x57395951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58395949))[0]);
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
void* _6101 = arg_buffer[1];
//reading env and args
void* kont5841 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x57405952 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5841);
arg_buffer[2] = x57405952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5841))[0]);
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
void* _6102 = arg_buffer[1];
//reading env and args
void* kont5842 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57415953 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5842);
arg_buffer[2] = x57415953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5842))[0]);
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
void* _6103 = arg_buffer[1];
//reading env and args
void* kont5843 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57425954 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5843);
arg_buffer[2] = x57425954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5843))[0]);
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
void* _6104 = arg_buffer[1];
//reading env and args
void* kont5844 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57435955 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5844);
arg_buffer[2] = x57435955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5844))[0]);
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
void* _6105 = arg_buffer[1];
//reading env and args
void* kont5845 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57445956 = prim_car(lst);

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

void* car = encode_clo(alloc_clo(car_fptr, 0));

void* cdr_fptr() // cdr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6106 = arg_buffer[1];
//reading env and args
void* kont5846 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57455957 = prim_cdr(lst);

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

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6107_fptr() // lam6107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6108 = arg_buffer[1];
//reading env and args
void* a57485961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57465958 = (decode_clo(env6108))[3];
//not do dummy comment
void* kont5847 = (decode_clo(env6108))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6108))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5847;
arg_buffer[3] = a57465958;
arg_buffer[4] = a57485961;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6107 = encode_clo(alloc_clo(lam6107_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6111 = arg_buffer[1];
//reading env and args
void* kont5847 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7753 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7753, "0", 10);
void* a57465958 = encode_mpz(mpzvar7753);
mpz_t* mpzvar7754 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7754, "2", 10);
void* a57475959 = encode_mpz(mpzvar7754);

//creating new closure instance
void** clo7756 = alloc_clo(lam6107_fptr, 3);

//setting env list
clo7756[1] = equal_u63;
clo7756[2] = kont5847;
clo7756[3] = a57465958;
void* f58485960 = encode_clo(clo7756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58485960;
arg_buffer[3] = x;
arg_buffer[4] = a57475959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6112_fptr() // lam6112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6113 = arg_buffer[1];
//reading env and args
void* a57515965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5849 = (decode_clo(env6113))[3];
//not do dummy comment
void* a57495962 = (decode_clo(env6113))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6113))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5849;
arg_buffer[3] = a57495962;
arg_buffer[4] = a57515965;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6112 = encode_clo(alloc_clo(lam6112_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6116 = arg_buffer[1];
//reading env and args
void* kont5849 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7757 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7757, "1", 10);
void* a57495962 = encode_mpz(mpzvar7757);
mpz_t* mpzvar7758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7758, "2", 10);
void* a57505963 = encode_mpz(mpzvar7758);

//creating new closure instance
void** clo7760 = alloc_clo(lam6112_fptr, 3);

//setting env list
clo7760[1] = equal_u63;
clo7760[2] = a57495962;
clo7760[3] = kont5849;
void* f58505964 = encode_clo(clo7760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58505964;
arg_buffer[3] = x;
arg_buffer[4] = a57505963;
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
void* _6117 = arg_buffer[1];
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

void* kont58515966 = prim_car(x);
void* x5967 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58515966);
arg_buffer[2] = x5967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58515966))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam6120_fptr() // lam6120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6121 = arg_buffer[1];
//reading env and args
void* a57575977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env6121))[3];
//not do dummy comment
void* x = (decode_clo(env6121))[2];
//not do dummy comment
void* kont5853 = (decode_clo(env6121))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont5853;
arg_buffer[3] = x;
arg_buffer[4] = a57575977;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6120 = encode_clo(alloc_clo(lam6120_fptr, 0));

void* lam6122_fptr() // lam6122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6123 = arg_buffer[1];
//reading env and args
void* a57555974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6123))[5];
//not do dummy comment
void* lst = (decode_clo(env6123))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6123))[3];
//not do dummy comment
void* x = (decode_clo(env6123))[2];
//not do dummy comment
void* kont5853 = (decode_clo(env6123))[1];

//if-clause
bool if_guard7761 = is_true(a57555974);
if(if_guard7761)
{
void* x57565975 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5853);
arg_buffer[2] = x57565975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5853))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7763 = alloc_clo(lam6120_fptr, 3);

//setting env list
clo7763[1] = kont5853;
clo7763[2] = x;
clo7763[3] = member_u63;
void* f58545976 = encode_clo(clo7763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58545976;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6122 = encode_clo(alloc_clo(lam6122_fptr, 0));

void* lam6124_fptr() // lam6124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6125 = arg_buffer[1];
//reading env and args
void* a57545972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6125))[6];
//not do dummy comment
void* lst = (decode_clo(env6125))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env6125))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6125))[3];
//not do dummy comment
void* x = (decode_clo(env6125))[2];
//not do dummy comment
void* kont5853 = (decode_clo(env6125))[1];

//creating new closure instance
void** clo7765 = alloc_clo(lam6122_fptr, 5);

//setting env list
clo7765[1] = kont5853;
clo7765[2] = x;
clo7765[3] = member_u63;
clo7765[4] = lst;
clo7765[5] = cdr;
void* f58555973 = encode_clo(clo7765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f58555973;
arg_buffer[3] = a57545972;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
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
void* a57525969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6127))[7];
//not do dummy comment
void* lst = (decode_clo(env6127))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env6127))[5];
//not do dummy comment
void* car = (decode_clo(env6127))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6127))[3];
//not do dummy comment
void* x = (decode_clo(env6127))[2];
//not do dummy comment
void* kont5853 = (decode_clo(env6127))[1];

//if-clause
bool if_guard7766 = is_true(a57525969);
if(if_guard7766)
{
void* x57535970 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5853);
arg_buffer[2] = x57535970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5853))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7768 = alloc_clo(lam6124_fptr, 6);

//setting env list
clo7768[1] = kont5853;
clo7768[2] = x;
clo7768[3] = member_u63;
clo7768[4] = equal_u63;
clo7768[5] = lst;
clo7768[6] = cdr;
void* f58565971 = encode_clo(clo7768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58565971;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6126 = encode_clo(alloc_clo(lam6126_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6128 = arg_buffer[1];
//reading env and args
void* kont5853 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7770 = alloc_clo(lam6126_fptr, 7);

//setting env list
clo7770[1] = kont5853;
clo7770[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo7770[3] = member_u63;
clo7770[4] = car;
clo7770[5] = equal_u63;
clo7770[6] = lst;
clo7770[7] = cdr;
void* f58575968 = encode_clo(clo7770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58575968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam6129_fptr() // lam6129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6130 = arg_buffer[1];
//reading env and args
void* a57615985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5858 = (decode_clo(env6130))[4];
//not do dummy comment
void* fun = (decode_clo(env6130))[3];
//not do dummy comment
void* a57605983 = (decode_clo(env6130))[2];
//not do dummy comment
void* foldl = (decode_clo(env6130))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont5858;
arg_buffer[3] = fun;
arg_buffer[4] = a57605983;
arg_buffer[5] = a57615985;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6129 = encode_clo(alloc_clo(lam6129_fptr, 0));

void* lam6131_fptr() // lam6131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6132 = arg_buffer[1];
//reading env and args
void* a57605983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6132))[5];
//not do dummy comment
void* fun = (decode_clo(env6132))[4];
//not do dummy comment
void* foldl = (decode_clo(env6132))[3];
//not do dummy comment
void* kont5858 = (decode_clo(env6132))[2];
//not do dummy comment
void* cdr = (decode_clo(env6132))[1];

//creating new closure instance
void** clo7772 = alloc_clo(lam6129_fptr, 4);

//setting env list
clo7772[1] = foldl;
clo7772[2] = a57605983;
clo7772[3] = fun;
clo7772[4] = kont5858;
void* f58595984 = encode_clo(clo7772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58595984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6131 = encode_clo(alloc_clo(lam6131_fptr, 0));

void* lam6133_fptr() // lam6133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6134 = arg_buffer[1];
//reading env and args
void* a57595981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6134))[6];
//not do dummy comment
void* fun = (decode_clo(env6134))[5];
//not do dummy comment
void* acc = (decode_clo(env6134))[4];
//not do dummy comment
void* foldl = (decode_clo(env6134))[3];
//not do dummy comment
void* kont5858 = (decode_clo(env6134))[2];
//not do dummy comment
void* cdr = (decode_clo(env6134))[1];

//creating new closure instance
void** clo7774 = alloc_clo(lam6131_fptr, 5);

//setting env list
clo7774[1] = cdr;
clo7774[2] = kont5858;
clo7774[3] = foldl;
clo7774[4] = fun;
clo7774[5] = lst;
void* f58605982 = encode_clo(clo7774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f58605982;
arg_buffer[3] = a57595981;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
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
void* a57585979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6136))[7];
//not do dummy comment
void* fun = (decode_clo(env6136))[6];
//not do dummy comment
void* acc = (decode_clo(env6136))[5];
//not do dummy comment
void* car = (decode_clo(env6136))[4];
//not do dummy comment
void* foldl = (decode_clo(env6136))[3];
//not do dummy comment
void* kont5858 = (decode_clo(env6136))[2];
//not do dummy comment
void* cdr = (decode_clo(env6136))[1];

//if-clause
bool if_guard7775 = is_true(a57585979);
if(if_guard7775)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5858))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7777 = alloc_clo(lam6133_fptr, 6);

//setting env list
clo7777[1] = cdr;
clo7777[2] = kont5858;
clo7777[3] = foldl;
clo7777[4] = acc;
clo7777[5] = fun;
clo7777[6] = lst;
void* f58615980 = encode_clo(clo7777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58615980;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6135 = encode_clo(alloc_clo(lam6135_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6137 = arg_buffer[1];
//reading env and args
void* kont5858 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7779 = alloc_clo(lam6135_fptr, 7);

//setting env list
clo7779[1] = cdr;
clo7779[2] = kont5858;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo7779[3] = foldl;
clo7779[4] = car;
clo7779[5] = acc;
clo7779[6] = fun;
clo7779[7] = lst;
void* f58625978 = encode_clo(clo7779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58625978;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam6138_fptr() // lam6138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6139 = arg_buffer[1];
//reading env and args
void* a57655993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57635989 = (decode_clo(env6139))[3];
//not do dummy comment
void* kont5863 = (decode_clo(env6139))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6139))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5863;
arg_buffer[3] = a57635989;
arg_buffer[4] = a57655993;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6138 = encode_clo(alloc_clo(lam6138_fptr, 0));

void* lam6140_fptr() // lam6140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6141 = arg_buffer[1];
//reading env and args
void* a57645991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57635989 = (decode_clo(env6141))[5];
//not do dummy comment
void* kont5863 = (decode_clo(env6141))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6141))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6141))[2];
//not do dummy comment
void* cons = (decode_clo(env6141))[1];

//creating new closure instance
void** clo7781 = alloc_clo(lam6138_fptr, 3);

//setting env list
clo7781[1] = reverse_u45helper;
clo7781[2] = kont5863;
clo7781[3] = a57635989;
void* f58645992 = encode_clo(clo7781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58645992;
arg_buffer[3] = a57645991;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6140 = encode_clo(alloc_clo(lam6140_fptr, 0));

void* lam6142_fptr() // lam6142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6143 = arg_buffer[1];
//reading env and args
void* a57635989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6143))[6];
//not do dummy comment
void* kont5863 = (decode_clo(env6143))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6143))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6143))[3];
//not do dummy comment
void* car = (decode_clo(env6143))[2];
//not do dummy comment
void* cons = (decode_clo(env6143))[1];

//creating new closure instance
void** clo7783 = alloc_clo(lam6140_fptr, 5);

//setting env list
clo7783[1] = cons;
clo7783[2] = lst2;
clo7783[3] = reverse_u45helper;
clo7783[4] = kont5863;
clo7783[5] = a57635989;
void* f58655990 = encode_clo(clo7783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58655990;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a57625987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6145))[7];
//not do dummy comment
void* lst = (decode_clo(env6145))[6];
//not do dummy comment
void* kont5863 = (decode_clo(env6145))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6145))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6145))[3];
//not do dummy comment
void* car = (decode_clo(env6145))[2];
//not do dummy comment
void* cons = (decode_clo(env6145))[1];

//if-clause
bool if_guard7784 = is_true(a57625987);
if(if_guard7784)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5863);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7786 = alloc_clo(lam6142_fptr, 6);

//setting env list
clo7786[1] = cons;
clo7786[2] = car;
clo7786[3] = lst2;
clo7786[4] = reverse_u45helper;
clo7786[5] = kont5863;
clo7786[6] = lst;
void* f58665988 = encode_clo(clo7786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58665988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6144 = encode_clo(alloc_clo(lam6144_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6146 = arg_buffer[1];
//reading env and args
void* kont5863 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7788 = alloc_clo(lam6144_fptr, 7);

//setting env list
clo7788[1] = cons;
clo7788[2] = car;
clo7788[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo7788[4] = reverse_u45helper;
clo7788[5] = kont5863;
clo7788[6] = lst;
clo7788[7] = cdr;
void* f58675986 = encode_clo(clo7788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58675986;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam6147_fptr() // lam6147 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6148 = arg_buffer[1];
//reading env and args
void* a57665995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6148))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6148))[2];
//not do dummy comment
void* kont5868 = (decode_clo(env6148))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5868;
arg_buffer[3] = lst;
arg_buffer[4] = a57665995;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6147 = encode_clo(alloc_clo(lam6147_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6149 = arg_buffer[1];
//reading env and args
void* kont5868 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7790 = alloc_clo(lam6147_fptr, 3);

//setting env list
clo7790[1] = kont5868;
clo7790[2] = reverse_u45helper;
clo7790[3] = lst;
void* f58695994 = encode_clo(clo7790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58695994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam6150_fptr() // lam6150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6151 = arg_buffer[1];
//reading env and args
void* x57696000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5870 = (decode_clo(env6151))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5870);
arg_buffer[2] = x57696000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5870))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6150 = encode_clo(alloc_clo(lam6150_fptr, 0));

void* lam6152_fptr() // lam6152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6153 = arg_buffer[1];
//reading env and args
void* a57746009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57706002 = (decode_clo(env6153))[4];
//not do dummy comment
void* a57726005 = (decode_clo(env6153))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6153))[2];
//not do dummy comment
void* kont5870 = (decode_clo(env6153))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5870;
arg_buffer[3] = a57706002;
arg_buffer[4] = a57726005;
arg_buffer[5] = a57746009;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6152 = encode_clo(alloc_clo(lam6152_fptr, 0));

void* lam6154_fptr() // lam6154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6155 = arg_buffer[1];
//reading env and args
void* a57736007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57706002 = (decode_clo(env6155))[6];
//not do dummy comment
void* a57726005 = (decode_clo(env6155))[5];
//not do dummy comment
void* cons = (decode_clo(env6155))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6155))[3];
//not do dummy comment
void* kont5870 = (decode_clo(env6155))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6155))[1];

//creating new closure instance
void** clo7792 = alloc_clo(lam6152_fptr, 4);

//setting env list
clo7792[1] = kont5870;
clo7792[2] = take_u45helper;
clo7792[3] = a57726005;
clo7792[4] = a57706002;
void* f58726008 = encode_clo(clo7792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58726008;
arg_buffer[3] = a57736007;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a57726005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57706002 = (decode_clo(env6157))[7];
//not do dummy comment
void* lst = (decode_clo(env6157))[6];
//not do dummy comment
void* car = (decode_clo(env6157))[5];
//not do dummy comment
void* cons = (decode_clo(env6157))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6157))[3];
//not do dummy comment
void* kont5870 = (decode_clo(env6157))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6157))[1];

//creating new closure instance
void** clo7794 = alloc_clo(lam6154_fptr, 6);

//setting env list
clo7794[1] = lst2;
clo7794[2] = kont5870;
clo7794[3] = take_u45helper;
clo7794[4] = cons;
clo7794[5] = a57726005;
clo7794[6] = a57706002;
void* f58736006 = encode_clo(clo7794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58736006;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6156 = encode_clo(alloc_clo(lam6156_fptr, 0));

void* lam6159_fptr() // lam6159 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6160 = arg_buffer[1];
//reading env and args
void* a57706002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6160))[8];
//not do dummy comment
void* cons = (decode_clo(env6160))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6160))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6160))[5];
//not do dummy comment
void* kont5870 = (decode_clo(env6160))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6160))[3];
//not do dummy comment
void* n = (decode_clo(env6160))[2];
//not do dummy comment
void* car = (decode_clo(env6160))[1];
mpz_t* mpzvar7795 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7795, "1", 10);
void* a57716003 = encode_mpz(mpzvar7795);

//creating new closure instance
void** clo7797 = alloc_clo(lam6156_fptr, 7);

//setting env list
clo7797[1] = lst2;
clo7797[2] = kont5870;
clo7797[3] = take_u45helper;
clo7797[4] = cons;
clo7797[5] = car;
clo7797[6] = lst;
clo7797[7] = a57706002;
void* f58746004 = encode_clo(clo7797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58746004;
arg_buffer[3] = n;
arg_buffer[4] = a57716003;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6159 = encode_clo(alloc_clo(lam6159_fptr, 0));

void* lam6161_fptr() // lam6161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6162 = arg_buffer[1];
//reading env and args
void* a57685998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6162))[10];
//not do dummy comment
void* lst = (decode_clo(env6162))[9];
//not do dummy comment
void* reverse = (decode_clo(env6162))[8];
//not do dummy comment
void* cons = (decode_clo(env6162))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6162))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6162))[5];
//not do dummy comment
void* kont5870 = (decode_clo(env6162))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6162))[3];
//not do dummy comment
void* n = (decode_clo(env6162))[2];
//not do dummy comment
void* car = (decode_clo(env6162))[1];

//if-clause
bool if_guard7798 = is_true(a57685998);
if(if_guard7798)
{

//creating new closure instance
void** clo7800 = alloc_clo(lam6150_fptr, 1);

//setting env list
clo7800[1] = kont5870;
void* f58715999 = encode_clo(clo7800);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f58715999;
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
void** clo7802 = alloc_clo(lam6159_fptr, 8);

//setting env list
clo7802[1] = car;
clo7802[2] = n;
clo7802[3] = lst2;
clo7802[4] = kont5870;
clo7802[5] = take_u45helper;
clo7802[6] = _u45;
clo7802[7] = cons;
clo7802[8] = lst;
void* f58756001 = encode_clo(clo7802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58756001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6161 = encode_clo(alloc_clo(lam6161_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6164 = arg_buffer[1];
//reading env and args
void* kont5870 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar7803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7803, "0", 10);
void* a57675996 = encode_mpz(mpzvar7803);

//creating new closure instance
void** clo7805 = alloc_clo(lam6161_fptr, 10);

//setting env list
clo7805[1] = car;
clo7805[2] = n;
clo7805[3] = lst2;
clo7805[4] = kont5870;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo7805[5] = take_u45helper;
clo7805[6] = _u45;
clo7805[7] = cons;
clo7805[8] = reverse;
clo7805[9] = lst;
clo7805[10] = cdr;
void* f58765997 = encode_clo(clo7805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58765997;
arg_buffer[3] = n;
arg_buffer[4] = a57675996;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam6165_fptr() // lam6165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6166 = arg_buffer[1];
//reading env and args
void* a57756011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5877 = (decode_clo(env6166))[4];
//not do dummy comment
void* lst = (decode_clo(env6166))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6166))[2];
//not do dummy comment
void* n = (decode_clo(env6166))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5877;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a57756011;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6165 = encode_clo(alloc_clo(lam6165_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6167 = arg_buffer[1];
//reading env and args
void* kont5877 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7807 = alloc_clo(lam6165_fptr, 4);

//setting env list
clo7807[1] = n;
clo7807[2] = take_u45helper;
clo7807[3] = lst;
clo7807[4] = kont5877;
void* f58786010 = encode_clo(clo7807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58786010;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam6169_fptr() // lam6169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6170 = arg_buffer[1];
//reading env and args
void* a57806019 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5879 = (decode_clo(env6170))[3];
//not do dummy comment
void* _u43 = (decode_clo(env6170))[2];
//not do dummy comment
void* a57786015 = (decode_clo(env6170))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont5879;
arg_buffer[3] = a57786015;
arg_buffer[4] = a57806019;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6169 = encode_clo(alloc_clo(lam6169_fptr, 0));

void* lam6171_fptr() // lam6171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6172 = arg_buffer[1];
//reading env and args
void* a57796017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env6172))[4];
//not do dummy comment
void* a57786015 = (decode_clo(env6172))[3];
//not do dummy comment
void* kont5879 = (decode_clo(env6172))[2];
//not do dummy comment
void* length = (decode_clo(env6172))[1];

//creating new closure instance
void** clo7809 = alloc_clo(lam6169_fptr, 3);

//setting env list
clo7809[1] = a57786015;
clo7809[2] = _u43;
clo7809[3] = kont5879;
void* f58806018 = encode_clo(clo7809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f58806018;
arg_buffer[3] = a57796017;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6171 = encode_clo(alloc_clo(lam6171_fptr, 0));

void* lam6174_fptr() // lam6174 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6175 = arg_buffer[1];
//reading env and args
void* a57766013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6175))[5];
//not do dummy comment
void* lst = (decode_clo(env6175))[4];
//not do dummy comment
void* _u43 = (decode_clo(env6175))[3];
//not do dummy comment
void* kont5879 = (decode_clo(env6175))[2];
//not do dummy comment
void* length = (decode_clo(env6175))[1];

//if-clause
bool if_guard7810 = is_true(a57766013);
if(if_guard7810)
{
mpz_t* mpzvar7811 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7811, "0", 10);
void* x57776014 = encode_mpz(mpzvar7811);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5879);
arg_buffer[2] = x57776014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5879))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar7812 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7812, "1", 10);
void* a57786015 = encode_mpz(mpzvar7812);

//creating new closure instance
void** clo7814 = alloc_clo(lam6171_fptr, 4);

//setting env list
clo7814[1] = length;
clo7814[2] = kont5879;
clo7814[3] = a57786015;
clo7814[4] = _u43;
void* f58816016 = encode_clo(clo7814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58816016;
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

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6176 = arg_buffer[1];
//reading env and args
void* kont5879 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7816 = alloc_clo(lam6174_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo7816[1] = length;
clo7816[2] = kont5879;
clo7816[3] = _u43;
clo7816[4] = lst;
clo7816[5] = cdr;
void* f58826012 = encode_clo(clo7816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58826012;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam6177_fptr() // lam6177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6178 = arg_buffer[1];
//reading env and args
void* x57826023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5883 = (decode_clo(env6178))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5883);
arg_buffer[2] = x57826023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6177 = encode_clo(alloc_clo(lam6177_fptr, 0));

void* lam6179_fptr() // lam6179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6180 = arg_buffer[1];
//reading env and args
void* a57866031 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env6180))[3];
//not do dummy comment
void* kont5883 = (decode_clo(env6180))[2];
//not do dummy comment
void* a57846027 = (decode_clo(env6180))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5883;
arg_buffer[3] = a57846027;
arg_buffer[4] = a57866031;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6179 = encode_clo(alloc_clo(lam6179_fptr, 0));

void* lam6181_fptr() // lam6181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6182 = arg_buffer[1];
//reading env and args
void* a57856029 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env6182))[5];
//not do dummy comment
void* proc = (decode_clo(env6182))[4];
//not do dummy comment
void* cons = (decode_clo(env6182))[3];
//not do dummy comment
void* kont5883 = (decode_clo(env6182))[2];
//not do dummy comment
void* a57846027 = (decode_clo(env6182))[1];

//creating new closure instance
void** clo7818 = alloc_clo(lam6179_fptr, 3);

//setting env list
clo7818[1] = a57846027;
clo7818[2] = kont5883;
clo7818[3] = cons;
void* f58856030 = encode_clo(clo7818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f58856030;
arg_buffer[3] = proc;
arg_buffer[4] = a57856029;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
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
void* a57846027 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6184))[6];
//not do dummy comment
void* lst = (decode_clo(env6184))[5];
//not do dummy comment
void* map = (decode_clo(env6184))[4];
//not do dummy comment
void* kont5883 = (decode_clo(env6184))[3];
//not do dummy comment
void* proc = (decode_clo(env6184))[2];
//not do dummy comment
void* cons = (decode_clo(env6184))[1];

//creating new closure instance
void** clo7820 = alloc_clo(lam6181_fptr, 5);

//setting env list
clo7820[1] = a57846027;
clo7820[2] = kont5883;
clo7820[3] = cons;
clo7820[4] = proc;
clo7820[5] = map;
void* f58866028 = encode_clo(clo7820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58866028;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a57836025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6186))[6];
//not do dummy comment
void* lst = (decode_clo(env6186))[5];
//not do dummy comment
void* map = (decode_clo(env6186))[4];
//not do dummy comment
void* kont5883 = (decode_clo(env6186))[3];
//not do dummy comment
void* proc = (decode_clo(env6186))[2];
//not do dummy comment
void* cons = (decode_clo(env6186))[1];

//creating new closure instance
void** clo7822 = alloc_clo(lam6183_fptr, 6);

//setting env list
clo7822[1] = cons;
clo7822[2] = proc;
clo7822[3] = kont5883;
clo7822[4] = map;
clo7822[5] = lst;
clo7822[6] = cdr;
void* f58876026 = encode_clo(clo7822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f58876026;
arg_buffer[3] = a57836025;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
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
void* a57816021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6188))[8];
//not do dummy comment
void* map = (decode_clo(env6188))[7];
//not do dummy comment
void* kont5883 = (decode_clo(env6188))[6];
//not do dummy comment
void* proc = (decode_clo(env6188))[5];
//not do dummy comment
void* car = (decode_clo(env6188))[4];
//not do dummy comment
void* cons = (decode_clo(env6188))[3];
//not do dummy comment
void* list = (decode_clo(env6188))[2];
//not do dummy comment
void* cdr = (decode_clo(env6188))[1];

//if-clause
bool if_guard7823 = is_true(a57816021);
if(if_guard7823)
{

//creating new closure instance
void** clo7825 = alloc_clo(lam6177_fptr, 1);

//setting env list
clo7825[1] = kont5883;
void* f58846022 = encode_clo(clo7825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58846022;
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
void** clo7827 = alloc_clo(lam6185_fptr, 6);

//setting env list
clo7827[1] = cons;
clo7827[2] = proc;
clo7827[3] = kont5883;
clo7827[4] = map;
clo7827[5] = lst;
clo7827[6] = cdr;
void* f58886024 = encode_clo(clo7827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58886024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6187 = encode_clo(alloc_clo(lam6187_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6189 = arg_buffer[1];
//reading env and args
void* kont5883 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7829 = alloc_clo(lam6187_fptr, 8);

//setting env list
clo7829[1] = cdr;
clo7829[2] = list;
clo7829[3] = cons;
clo7829[4] = car;
clo7829[5] = proc;
clo7829[6] = kont5883;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo7829[7] = map;
clo7829[8] = lst;
void* f58896020 = encode_clo(clo7829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58896020;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam6190_fptr() // lam6190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6191 = arg_buffer[1];
//reading env and args
void* x57886035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5890 = (decode_clo(env6191))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5890);
arg_buffer[2] = x57886035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5890))[0]);
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
void* a57936045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5890 = (decode_clo(env6193))[3];
//not do dummy comment
void* a57916041 = (decode_clo(env6193))[2];
//not do dummy comment
void* cons = (decode_clo(env6193))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5890;
arg_buffer[3] = a57916041;
arg_buffer[4] = a57936045;
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
void* a57926043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5890 = (decode_clo(env6195))[5];
//not do dummy comment
void* filter = (decode_clo(env6195))[4];
//not do dummy comment
void* cons = (decode_clo(env6195))[3];
//not do dummy comment
void* a57916041 = (decode_clo(env6195))[2];
//not do dummy comment
void* op = (decode_clo(env6195))[1];

//creating new closure instance
void** clo7831 = alloc_clo(lam6192_fptr, 3);

//setting env list
clo7831[1] = cons;
clo7831[2] = a57916041;
clo7831[3] = kont5890;
void* f58926044 = encode_clo(clo7831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f58926044;
arg_buffer[3] = op;
arg_buffer[4] = a57926043;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a57916041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6197))[6];
//not do dummy comment
void* op = (decode_clo(env6197))[5];
//not do dummy comment
void* filter = (decode_clo(env6197))[4];
//not do dummy comment
void* cons = (decode_clo(env6197))[3];
//not do dummy comment
void* kont5890 = (decode_clo(env6197))[2];
//not do dummy comment
void* cdr = (decode_clo(env6197))[1];

//creating new closure instance
void** clo7833 = alloc_clo(lam6194_fptr, 5);

//setting env list
clo7833[1] = op;
clo7833[2] = a57916041;
clo7833[3] = cons;
clo7833[4] = filter;
clo7833[5] = kont5890;
void* f58936042 = encode_clo(clo7833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58936042;
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
void* a57946047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5890 = (decode_clo(env6199))[3];
//not do dummy comment
void* op = (decode_clo(env6199))[2];
//not do dummy comment
void* filter = (decode_clo(env6199))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont5890;
arg_buffer[3] = op;
arg_buffer[4] = a57946047;
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
void* a57906039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6201))[7];
//not do dummy comment
void* op = (decode_clo(env6201))[6];
//not do dummy comment
void* cons = (decode_clo(env6201))[5];
//not do dummy comment
void* kont5890 = (decode_clo(env6201))[4];
//not do dummy comment
void* cdr = (decode_clo(env6201))[3];
//not do dummy comment
void* filter = (decode_clo(env6201))[2];
//not do dummy comment
void* car = (decode_clo(env6201))[1];

//if-clause
bool if_guard7834 = is_true(a57906039);
if(if_guard7834)
{

//creating new closure instance
void** clo7836 = alloc_clo(lam6196_fptr, 6);

//setting env list
clo7836[1] = cdr;
clo7836[2] = kont5890;
clo7836[3] = cons;
clo7836[4] = filter;
clo7836[5] = op;
clo7836[6] = lst;
void* f58946040 = encode_clo(clo7836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58946040;
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
void** clo7838 = alloc_clo(lam6198_fptr, 3);

//setting env list
clo7838[1] = filter;
clo7838[2] = op;
clo7838[3] = kont5890;
void* f58956046 = encode_clo(clo7838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58956046;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6200 = encode_clo(alloc_clo(lam6200_fptr, 0));

void* lam6202_fptr() // lam6202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6203 = arg_buffer[1];
//reading env and args
void* a57896037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6203))[7];
//not do dummy comment
void* op = (decode_clo(env6203))[6];
//not do dummy comment
void* cons = (decode_clo(env6203))[5];
//not do dummy comment
void* kont5890 = (decode_clo(env6203))[4];
//not do dummy comment
void* cdr = (decode_clo(env6203))[3];
//not do dummy comment
void* filter = (decode_clo(env6203))[2];
//not do dummy comment
void* car = (decode_clo(env6203))[1];

//creating new closure instance
void** clo7840 = alloc_clo(lam6200_fptr, 7);

//setting env list
clo7840[1] = car;
clo7840[2] = filter;
clo7840[3] = cdr;
clo7840[4] = kont5890;
clo7840[5] = cons;
clo7840[6] = op;
clo7840[7] = lst;
void* f58966038 = encode_clo(clo7840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f58966038;
arg_buffer[3] = a57896037;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a57876033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6205))[8];
//not do dummy comment
void* op = (decode_clo(env6205))[7];
//not do dummy comment
void* cons = (decode_clo(env6205))[6];
//not do dummy comment
void* list = (decode_clo(env6205))[5];
//not do dummy comment
void* kont5890 = (decode_clo(env6205))[4];
//not do dummy comment
void* cdr = (decode_clo(env6205))[3];
//not do dummy comment
void* filter = (decode_clo(env6205))[2];
//not do dummy comment
void* car = (decode_clo(env6205))[1];

//if-clause
bool if_guard7841 = is_true(a57876033);
if(if_guard7841)
{

//creating new closure instance
void** clo7843 = alloc_clo(lam6190_fptr, 1);

//setting env list
clo7843[1] = kont5890;
void* f58916034 = encode_clo(clo7843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58916034;
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
void** clo7845 = alloc_clo(lam6202_fptr, 7);

//setting env list
clo7845[1] = car;
clo7845[2] = filter;
clo7845[3] = cdr;
clo7845[4] = kont5890;
clo7845[5] = cons;
clo7845[6] = op;
clo7845[7] = lst;
void* f58976036 = encode_clo(clo7845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58976036;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6204 = encode_clo(alloc_clo(lam6204_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6206 = arg_buffer[1];
//reading env and args
void* kont5890 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7847 = alloc_clo(lam6204_fptr, 8);

//setting env list
clo7847[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo7847[2] = filter;
clo7847[3] = cdr;
clo7847[4] = kont5890;
clo7847[5] = list;
clo7847[6] = cons;
clo7847[7] = op;
clo7847[8] = lst;
void* f58986032 = encode_clo(clo7847);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58986032;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam6207_fptr() // lam6207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6208 = arg_buffer[1];
//reading env and args
void* a57996055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57976052 = (decode_clo(env6208))[3];
//not do dummy comment
void* drop = (decode_clo(env6208))[2];
//not do dummy comment
void* kont5899 = (decode_clo(env6208))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont5899;
arg_buffer[3] = a57976052;
arg_buffer[4] = a57996055;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6207 = encode_clo(alloc_clo(lam6207_fptr, 0));

void* lam6210_fptr() // lam6210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6211 = arg_buffer[1];
//reading env and args
void* a57976052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6211))[4];
//not do dummy comment
void* kont5899 = (decode_clo(env6211))[3];
//not do dummy comment
void* n = (decode_clo(env6211))[2];
//not do dummy comment
void* _u45 = (decode_clo(env6211))[1];
mpz_t* mpzvar7848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7848, "1", 10);
void* a57986053 = encode_mpz(mpzvar7848);

//creating new closure instance
void** clo7850 = alloc_clo(lam6207_fptr, 3);

//setting env list
clo7850[1] = kont5899;
clo7850[2] = drop;
clo7850[3] = a57976052;
void* f59006054 = encode_clo(clo7850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f59006054;
arg_buffer[3] = n;
arg_buffer[4] = a57986053;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6210 = encode_clo(alloc_clo(lam6210_fptr, 0));

void* lam6212_fptr() // lam6212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6213 = arg_buffer[1];
//reading env and args
void* a57966050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6213))[6];
//not do dummy comment
void* kont5899 = (decode_clo(env6213))[5];
//not do dummy comment
void* n = (decode_clo(env6213))[4];
//not do dummy comment
void* _u45 = (decode_clo(env6213))[3];
//not do dummy comment
void* lst = (decode_clo(env6213))[2];
//not do dummy comment
void* drop = (decode_clo(env6213))[1];

//if-clause
bool if_guard7851 = is_true(a57966050);
if(if_guard7851)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5899);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5899))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7853 = alloc_clo(lam6210_fptr, 4);

//setting env list
clo7853[1] = _u45;
clo7853[2] = n;
clo7853[3] = kont5899;
clo7853[4] = drop;
void* f59016051 = encode_clo(clo7853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59016051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6212 = encode_clo(alloc_clo(lam6212_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6215 = arg_buffer[1];
//reading env and args
void* kont5899 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar7854 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7854, "0", 10);
void* a57956048 = encode_mpz(mpzvar7854);

//creating new closure instance
void** clo7856 = alloc_clo(lam6212_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo7856[1] = drop;
clo7856[2] = lst;
clo7856[3] = _u45;
clo7856[4] = n;
clo7856[5] = kont5899;
clo7856[6] = cdr;
void* f59026049 = encode_clo(clo7856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f59026049;
arg_buffer[3] = n;
arg_buffer[4] = a57956048;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam6216_fptr() // lam6216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6217 = arg_buffer[1];
//reading env and args
void* a58036063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a58016059 = (decode_clo(env6217))[3];
//not do dummy comment
void* proc = (decode_clo(env6217))[2];
//not do dummy comment
void* kont5903 = (decode_clo(env6217))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont5903;
arg_buffer[3] = a58016059;
arg_buffer[4] = a58036063;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6216 = encode_clo(alloc_clo(lam6216_fptr, 0));

void* lam6218_fptr() // lam6218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6219 = arg_buffer[1];
//reading env and args
void* a58026061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env6219))[5];
//not do dummy comment
void* a58016059 = (decode_clo(env6219))[4];
//not do dummy comment
void* kont5903 = (decode_clo(env6219))[3];
//not do dummy comment
void* proc = (decode_clo(env6219))[2];
//not do dummy comment
void* acc = (decode_clo(env6219))[1];

//creating new closure instance
void** clo7858 = alloc_clo(lam6216_fptr, 3);

//setting env list
clo7858[1] = kont5903;
clo7858[2] = proc;
clo7858[3] = a58016059;
void* f59046062 = encode_clo(clo7858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f59046062;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a58026061;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6218 = encode_clo(alloc_clo(lam6218_fptr, 0));

void* lam6220_fptr() // lam6220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6221 = arg_buffer[1];
//reading env and args
void* a58016059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6221))[6];
//not do dummy comment
void* kont5903 = (decode_clo(env6221))[5];
//not do dummy comment
void* foldr = (decode_clo(env6221))[4];
//not do dummy comment
void* lst = (decode_clo(env6221))[3];
//not do dummy comment
void* proc = (decode_clo(env6221))[2];
//not do dummy comment
void* acc = (decode_clo(env6221))[1];

//creating new closure instance
void** clo7860 = alloc_clo(lam6218_fptr, 5);

//setting env list
clo7860[1] = acc;
clo7860[2] = proc;
clo7860[3] = kont5903;
clo7860[4] = a58016059;
clo7860[5] = foldr;
void* f59056060 = encode_clo(clo7860);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59056060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a58006057 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6223))[7];
//not do dummy comment
void* foldr = (decode_clo(env6223))[6];
//not do dummy comment
void* lst = (decode_clo(env6223))[5];
//not do dummy comment
void* proc = (decode_clo(env6223))[4];
//not do dummy comment
void* acc = (decode_clo(env6223))[3];
//not do dummy comment
void* kont5903 = (decode_clo(env6223))[2];
//not do dummy comment
void* car = (decode_clo(env6223))[1];

//if-clause
bool if_guard7861 = is_true(a58006057);
if(if_guard7861)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5903);
arg_buffer[2] = acc;
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
void** clo7863 = alloc_clo(lam6220_fptr, 6);

//setting env list
clo7863[1] = acc;
clo7863[2] = proc;
clo7863[3] = lst;
clo7863[4] = foldr;
clo7863[5] = kont5903;
clo7863[6] = cdr;
void* f59066058 = encode_clo(clo7863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59066058;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6222 = encode_clo(alloc_clo(lam6222_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6224 = arg_buffer[1];
//reading env and args
void* kont5903 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7865 = alloc_clo(lam6222_fptr, 7);

//setting env list
clo7865[1] = car;
clo7865[2] = kont5903;
clo7865[3] = acc;
clo7865[4] = proc;
clo7865[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo7865[6] = foldr;
clo7865[7] = cdr;
void* f59076056 = encode_clo(clo7865);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59076056;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam6225_fptr() // lam6225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6226 = arg_buffer[1];
//reading env and args
void* a58076071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a58056067 = (decode_clo(env6226))[3];
//not do dummy comment
void* kont5908 = (decode_clo(env6226))[2];
//not do dummy comment
void* cons = (decode_clo(env6226))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5908;
arg_buffer[3] = a58056067;
arg_buffer[4] = a58076071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6225 = encode_clo(alloc_clo(lam6225_fptr, 0));

void* lam6227_fptr() // lam6227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6228 = arg_buffer[1];
//reading env and args
void* a58066069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a58056067 = (decode_clo(env6228))[5];
//not do dummy comment
void* kont5908 = (decode_clo(env6228))[4];
//not do dummy comment
void* append = (decode_clo(env6228))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6228))[2];
//not do dummy comment
void* cons = (decode_clo(env6228))[1];

//creating new closure instance
void** clo7867 = alloc_clo(lam6225_fptr, 3);

//setting env list
clo7867[1] = cons;
clo7867[2] = kont5908;
clo7867[3] = a58056067;
void* f59096070 = encode_clo(clo7867);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f59096070;
arg_buffer[3] = a58066069;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6227 = encode_clo(alloc_clo(lam6227_fptr, 0));

void* lam6229_fptr() // lam6229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6230 = arg_buffer[1];
//reading env and args
void* a58056067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6230))[6];
//not do dummy comment
void* kont5908 = (decode_clo(env6230))[5];
//not do dummy comment
void* append = (decode_clo(env6230))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6230))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6230))[2];
//not do dummy comment
void* cons = (decode_clo(env6230))[1];

//creating new closure instance
void** clo7869 = alloc_clo(lam6227_fptr, 5);

//setting env list
clo7869[1] = cons;
clo7869[2] = lst2;
clo7869[3] = append;
clo7869[4] = kont5908;
clo7869[5] = a58056067;
void* f59106068 = encode_clo(clo7869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59106068;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a58046065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6232))[7];
//not do dummy comment
void* kont5908 = (decode_clo(env6232))[6];
//not do dummy comment
void* append = (decode_clo(env6232))[5];
//not do dummy comment
void* lst2 = (decode_clo(env6232))[4];
//not do dummy comment
void* cons = (decode_clo(env6232))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6232))[2];
//not do dummy comment
void* car = (decode_clo(env6232))[1];

//if-clause
bool if_guard7870 = is_true(a58046065);
if(if_guard7870)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5908);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5908))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7872 = alloc_clo(lam6229_fptr, 6);

//setting env list
clo7872[1] = cons;
clo7872[2] = lst1;
clo7872[3] = lst2;
clo7872[4] = append;
clo7872[5] = kont5908;
clo7872[6] = cdr;
void* f59116066 = encode_clo(clo7872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59116066;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6231 = encode_clo(alloc_clo(lam6231_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6233 = arg_buffer[1];
//reading env and args
void* kont5908 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7874 = alloc_clo(lam6231_fptr, 7);

//setting env list
clo7874[1] = car;
clo7874[2] = lst1;
clo7874[3] = cons;
clo7874[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo7874[5] = append;
clo7874[6] = kont5908;
clo7874[7] = cdr;
void* f59126064 = encode_clo(clo7874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59126064;
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
void* _6234 = arg_buffer[1];
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

void* kont59136072 = prim_car(lst);
void* lst6073 = prim_cdr(lst);
void* x58086074 = apply_prim_hash(lst6073);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59136072);
arg_buffer[2] = x58086074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59136072))[0]);
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
void* _6235 = arg_buffer[1];
//reading env and args
void* kont5915 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58096075 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5915);
arg_buffer[2] = x58096075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5915))[0]);
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
void* _6236 = arg_buffer[1];
//reading env and args
void* kont5916 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x58106076 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5916);
arg_buffer[2] = x58106076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5916))[0]);
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
void* _6237 = arg_buffer[1];
//reading env and args
void* kont5917 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58116077 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5917);
arg_buffer[2] = x58116077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5917))[0]);
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
void* _6238 = arg_buffer[1];
//reading env and args
void* kont5918 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x58126078 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5918);
arg_buffer[2] = x58126078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5918))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam6241_fptr() // lam6241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6242 = arg_buffer[1];
//reading env and args
void* a58176085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6242))[2];
//not do dummy comment
void* kont5919 = (decode_clo(env6242))[1];

//if-clause
bool if_guard7875 = is_true(a58176085);
if(if_guard7875)
{
mpz_t* mpzvar7876 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7876, "2", 10);
void* a58186086 = encode_mpz(mpzvar7876);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont5919;
arg_buffer[3] = a58186086;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x58196087 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5919);
arg_buffer[2] = x58196087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5919))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6241 = encode_clo(alloc_clo(lam6241_fptr, 0));

void* lam6245_fptr() // lam6245 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6246 = arg_buffer[1];
//reading env and args
void* a58156082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6246))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env6246))[2];
//not do dummy comment
void* kont5919 = (decode_clo(env6246))[1];

//if-clause
bool if_guard7877 = is_true(a58156082);
if(if_guard7877)
{
mpz_t* mpzvar7878 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7878, "2", 10);
void* a58166083 = encode_mpz(mpzvar7878);

//creating new closure instance
void** clo7880 = alloc_clo(lam6241_fptr, 2);

//setting env list
clo7880[1] = kont5919;
clo7880[2] = odd_u63;
void* f59206084 = encode_clo(clo7880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f59206084;
arg_buffer[3] = a58166083;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x58206088 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5919);
arg_buffer[2] = x58206088;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5919))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6245 = encode_clo(alloc_clo(lam6245_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6249 = arg_buffer[1];
//reading env and args
void* kont5919 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar7881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7881, "1", 10);
void* a58136079 = encode_mpz(mpzvar7881);
mpz_t* mpzvar7882 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7882, "1", 10);
void* a58146080 = encode_mpz(mpzvar7882);

//creating new closure instance
void** clo7884 = alloc_clo(lam6245_fptr, 3);

//setting env list
clo7884[1] = kont5919;
clo7884[2] = even_u63;
clo7884[3] = odd_u63;
void* f59216081 = encode_clo(clo7884);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f59216081;
arg_buffer[3] = a58136079;
arg_buffer[4] = a58146080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam6250_fptr() // lam6250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6251 = arg_buffer[1];
//reading env and args
void* x58216090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5922 = (decode_clo(env6251))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5922);
arg_buffer[2] = x58216090;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5922))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6250 = encode_clo(alloc_clo(lam6250_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6252 = arg_buffer[1];
//reading env and args
void* kont5922 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo7886 = alloc_clo(lam6250_fptr, 1);

//setting env list
clo7886[1] = kont5922;
void* f59236089 = encode_clo(clo7886);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f59236089;
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

