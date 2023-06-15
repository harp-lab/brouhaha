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

void* kont58235929 = prim_car(lst);
void* lst5930 = prim_cdr(lst);
void* x57295931 = apply_prim__u43(lst5930);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58235929);
arg_buffer[2] = x57295931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58235929))[0]);
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

void* kont58255932 = prim_car(lst);
void* lst5933 = prim_cdr(lst);
void* x57305934 = apply_prim__u45(lst5933);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58255932);
arg_buffer[2] = x57305934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58255932))[0]);
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

void* kont58275935 = prim_car(lst);
void* lst5936 = prim_cdr(lst);
void* x57315937 = apply_prim__u42(lst5936);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58275935);
arg_buffer[2] = x57315937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58275935))[0]);
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
void* _6105 = arg_buffer[1];
//reading env and args
void* kont5829 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57325938 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5829);
arg_buffer[2] = x57325938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5829))[0]);
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

void* kont58305939 = prim_car(lst);
void* lst5940 = prim_cdr(lst);
void* x57335941 = apply_prim__u47(lst5940);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58305939);
arg_buffer[2] = x57335941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58305939))[0]);
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
void* _6107 = arg_buffer[1];
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

void* kont58325942 = prim_car(lst);
void* lst5943 = prim_cdr(lst);
void* x57345944 = apply_prim__u61(lst5943);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58325942);
arg_buffer[2] = x57345944;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58325942))[0]);
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

void* kont58345945 = prim_car(lst);
void* lst5946 = prim_cdr(lst);
void* x57355947 = apply_prim__u62(lst5946);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58345945);
arg_buffer[2] = x57355947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58345945))[0]);
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

void* kont58365948 = prim_car(lst);
void* lst5949 = prim_cdr(lst);
void* x57365950 = apply_prim__u60(lst5949);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58365948);
arg_buffer[2] = x57365950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58365948))[0]);
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

void* kont58385951 = prim_car(lst);
void* lst5952 = prim_cdr(lst);
void* x57375953 = apply_prim__u60_u61(lst5952);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58385951);
arg_buffer[2] = x57375953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58385951))[0]);
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

void* kont58405954 = prim_car(lst);
void* lst5955 = prim_cdr(lst);
void* x57385956 = apply_prim__u62_u61(lst5955);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58405954);
arg_buffer[2] = x57385956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58405954))[0]);
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
void* _6112 = arg_buffer[1];
//reading env and args
void* kont5842 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x57395957 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5842);
arg_buffer[2] = x57395957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5842))[0]);
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
void* _6113 = arg_buffer[1];
//reading env and args
void* kont5843 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57405958 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5843);
arg_buffer[2] = x57405958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5843))[0]);
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
void* _6114 = arg_buffer[1];
//reading env and args
void* kont5844 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x57415959 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5844);
arg_buffer[2] = x57415959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5844))[0]);
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
void* _6115 = arg_buffer[1];
//reading env and args
void* kont5845 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x57425960 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5845);
arg_buffer[2] = x57425960;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5845))[0]);
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
void* _6116 = arg_buffer[1];
//reading env and args
void* kont5846 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57435961 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5846);
arg_buffer[2] = x57435961;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5846))[0]);
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
void* _6117 = arg_buffer[1];
//reading env and args
void* kont5847 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x57445962 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5847);
arg_buffer[2] = x57445962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam6118_fptr() // lam6118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6119 = arg_buffer[1];
//reading env and args
void* a57475966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5848 = (decode_clo(env6119))[3];
//not do dummy comment
void* a57455963 = (decode_clo(env6119))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6119))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5848;
arg_buffer[3] = a57455963;
arg_buffer[4] = a57475966;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6118 = encode_clo(alloc_clo(lam6118_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6122 = arg_buffer[1];
//reading env and args
void* kont5848 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7766 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7766, "0", 10);
void* a57455963 = encode_mpz(mpzvar7766);
mpz_t* mpzvar7767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7767, "2", 10);
void* a57465964 = encode_mpz(mpzvar7767);

//creating new closure instance
void** clo7769 = alloc_clo(lam6118_fptr, 3);

//setting env list
clo7769[1] = equal_u63;
clo7769[2] = a57455963;
clo7769[3] = kont5848;
void* f58495965 = encode_clo(clo7769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58495965;
arg_buffer[3] = x;
arg_buffer[4] = a57465964;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam6123_fptr() // lam6123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6124 = arg_buffer[1];
//reading env and args
void* a57505970 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5850 = (decode_clo(env6124))[3];
//not do dummy comment
void* a57485967 = (decode_clo(env6124))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env6124))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont5850;
arg_buffer[3] = a57485967;
arg_buffer[4] = a57505970;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6123 = encode_clo(alloc_clo(lam6123_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6127 = arg_buffer[1];
//reading env and args
void* kont5850 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar7770 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7770, "1", 10);
void* a57485967 = encode_mpz(mpzvar7770);
mpz_t* mpzvar7771 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7771, "2", 10);
void* a57495968 = encode_mpz(mpzvar7771);

//creating new closure instance
void** clo7773 = alloc_clo(lam6123_fptr, 3);

//setting env list
clo7773[1] = equal_u63;
clo7773[2] = a57485967;
clo7773[3] = kont5850;
void* f58515969 = encode_clo(clo7773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f58515969;
arg_buffer[3] = x;
arg_buffer[4] = a57495968;
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
void* _6128 = arg_buffer[1];
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

void* kont58525971 = prim_car(x);
void* x5972 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58525971);
arg_buffer[2] = x5972;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58525971))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* and_fptr() // and 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6129 = arg_buffer[1];
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

void* kont58545973 = prim_car(lst);
void* lst5974 = prim_cdr(lst);
void* x57515975 = apply_prim_and(lst5974);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58545973);
arg_buffer[2] = x57515975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58545973))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* and = encode_clo(alloc_clo(and_fptr, 0));

void* or_fptr() // or 
{
//reading number of args
// This is the second type of the functions
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6130 = arg_buffer[1];
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

void* kont58565976 = prim_car(lst);
void* lst5977 = prim_cdr(lst);
void* x57525978 = apply_prim_or(lst5977);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont58565976);
arg_buffer[2] = x57525978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont58565976))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* or = encode_clo(alloc_clo(or_fptr, 0));

void* lam6133_fptr() // lam6133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6134 = arg_buffer[1];
//reading env and args
void* a57585988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* member_u63 = (decode_clo(env6134))[3];
//not do dummy comment
void* x = (decode_clo(env6134))[2];
//not do dummy comment
void* kont5858 = (decode_clo(env6134))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont5858;
arg_buffer[3] = x;
arg_buffer[4] = a57585988;
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
void* a57565985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6136))[5];
//not do dummy comment
void* lst = (decode_clo(env6136))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6136))[3];
//not do dummy comment
void* x = (decode_clo(env6136))[2];
//not do dummy comment
void* kont5858 = (decode_clo(env6136))[1];

//if-clause
bool if_guard7774 = is_true(a57565985);
if(if_guard7774)
{
void* x57575986 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858);
arg_buffer[2] = x57575986;
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
void** clo7776 = alloc_clo(lam6133_fptr, 3);

//setting env list
clo7776[1] = kont5858;
clo7776[2] = x;
clo7776[3] = member_u63;
void* f58595987 = encode_clo(clo7776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58595987;
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
void* a57555983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6138))[6];
//not do dummy comment
void* lst = (decode_clo(env6138))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env6138))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6138))[3];
//not do dummy comment
void* x = (decode_clo(env6138))[2];
//not do dummy comment
void* kont5858 = (decode_clo(env6138))[1];

//creating new closure instance
void** clo7778 = alloc_clo(lam6135_fptr, 5);

//setting env list
clo7778[1] = kont5858;
clo7778[2] = x;
clo7778[3] = member_u63;
clo7778[4] = lst;
clo7778[5] = cdr;
void* f58605984 = encode_clo(clo7778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f58605984;
arg_buffer[3] = a57555983;
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
void* a57535980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6140))[7];
//not do dummy comment
void* lst = (decode_clo(env6140))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env6140))[5];
//not do dummy comment
void* car = (decode_clo(env6140))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env6140))[3];
//not do dummy comment
void* x = (decode_clo(env6140))[2];
//not do dummy comment
void* kont5858 = (decode_clo(env6140))[1];

//if-clause
bool if_guard7779 = is_true(a57535980);
if(if_guard7779)
{
void* x57545981 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5858);
arg_buffer[2] = x57545981;
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
void** clo7781 = alloc_clo(lam6137_fptr, 6);

//setting env list
clo7781[1] = kont5858;
clo7781[2] = x;
clo7781[3] = member_u63;
clo7781[4] = equal_u63;
clo7781[5] = lst;
clo7781[6] = cdr;
void* f58615982 = encode_clo(clo7781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58615982;
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
void* kont5858 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7783 = alloc_clo(lam6139_fptr, 7);

//setting env list
clo7783[1] = kont5858;
clo7783[2] = x;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo7783[3] = member_u63;
clo7783[4] = car;
clo7783[5] = equal_u63;
clo7783[6] = lst;
clo7783[7] = cdr;
void* f58625979 = encode_clo(clo7783);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58625979;
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
void* a57625996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5863 = (decode_clo(env6143))[4];
//not do dummy comment
void* a57615994 = (decode_clo(env6143))[3];
//not do dummy comment
void* fun = (decode_clo(env6143))[2];
//not do dummy comment
void* foldl = (decode_clo(env6143))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont5863;
arg_buffer[3] = fun;
arg_buffer[4] = a57615994;
arg_buffer[5] = a57625996;
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
void* a57615994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6145))[5];
//not do dummy comment
void* fun = (decode_clo(env6145))[4];
//not do dummy comment
void* foldl = (decode_clo(env6145))[3];
//not do dummy comment
void* kont5863 = (decode_clo(env6145))[2];
//not do dummy comment
void* cdr = (decode_clo(env6145))[1];

//creating new closure instance
void** clo7785 = alloc_clo(lam6142_fptr, 4);

//setting env list
clo7785[1] = foldl;
clo7785[2] = fun;
clo7785[3] = a57615994;
clo7785[4] = kont5863;
void* f58645995 = encode_clo(clo7785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58645995;
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
void* a57605992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6147))[6];
//not do dummy comment
void* fun = (decode_clo(env6147))[5];
//not do dummy comment
void* acc = (decode_clo(env6147))[4];
//not do dummy comment
void* foldl = (decode_clo(env6147))[3];
//not do dummy comment
void* kont5863 = (decode_clo(env6147))[2];
//not do dummy comment
void* cdr = (decode_clo(env6147))[1];

//creating new closure instance
void** clo7787 = alloc_clo(lam6144_fptr, 5);

//setting env list
clo7787[1] = cdr;
clo7787[2] = kont5863;
clo7787[3] = foldl;
clo7787[4] = fun;
clo7787[5] = lst;
void* f58655993 = encode_clo(clo7787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f58655993;
arg_buffer[3] = a57605992;
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
void* a57595990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6149))[7];
//not do dummy comment
void* fun = (decode_clo(env6149))[6];
//not do dummy comment
void* acc = (decode_clo(env6149))[5];
//not do dummy comment
void* car = (decode_clo(env6149))[4];
//not do dummy comment
void* foldl = (decode_clo(env6149))[3];
//not do dummy comment
void* kont5863 = (decode_clo(env6149))[2];
//not do dummy comment
void* cdr = (decode_clo(env6149))[1];

//if-clause
bool if_guard7788 = is_true(a57595990);
if(if_guard7788)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5863);
arg_buffer[2] = acc;
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
void** clo7790 = alloc_clo(lam6146_fptr, 6);

//setting env list
clo7790[1] = cdr;
clo7790[2] = kont5863;
clo7790[3] = foldl;
clo7790[4] = acc;
clo7790[5] = fun;
clo7790[6] = lst;
void* f58665991 = encode_clo(clo7790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58665991;
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
void* kont5863 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7792 = alloc_clo(lam6148_fptr, 7);

//setting env list
clo7792[1] = cdr;
clo7792[2] = kont5863;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo7792[3] = foldl;
clo7792[4] = car;
clo7792[5] = acc;
clo7792[6] = fun;
clo7792[7] = lst;
void* f58675989 = encode_clo(clo7792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58675989;
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
void* a57666004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5868 = (decode_clo(env6152))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6152))[2];
//not do dummy comment
void* a57646000 = (decode_clo(env6152))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5868;
arg_buffer[3] = a57646000;
arg_buffer[4] = a57666004;
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
void* a57656002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5868 = (decode_clo(env6154))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6154))[4];
//not do dummy comment
void* a57646000 = (decode_clo(env6154))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6154))[2];
//not do dummy comment
void* cons = (decode_clo(env6154))[1];

//creating new closure instance
void** clo7794 = alloc_clo(lam6151_fptr, 3);

//setting env list
clo7794[1] = a57646000;
clo7794[2] = reverse_u45helper;
clo7794[3] = kont5868;
void* f58696003 = encode_clo(clo7794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58696003;
arg_buffer[3] = a57656002;
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
void* a57646000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6156))[6];
//not do dummy comment
void* kont5868 = (decode_clo(env6156))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6156))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6156))[3];
//not do dummy comment
void* car = (decode_clo(env6156))[2];
//not do dummy comment
void* cons = (decode_clo(env6156))[1];

//creating new closure instance
void** clo7796 = alloc_clo(lam6153_fptr, 5);

//setting env list
clo7796[1] = cons;
clo7796[2] = lst2;
clo7796[3] = a57646000;
clo7796[4] = reverse_u45helper;
clo7796[5] = kont5868;
void* f58706001 = encode_clo(clo7796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58706001;
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
void* a57635998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6158))[7];
//not do dummy comment
void* lst = (decode_clo(env6158))[6];
//not do dummy comment
void* kont5868 = (decode_clo(env6158))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6158))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6158))[3];
//not do dummy comment
void* car = (decode_clo(env6158))[2];
//not do dummy comment
void* cons = (decode_clo(env6158))[1];

//if-clause
bool if_guard7797 = is_true(a57635998);
if(if_guard7797)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5868);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5868))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7799 = alloc_clo(lam6155_fptr, 6);

//setting env list
clo7799[1] = cons;
clo7799[2] = car;
clo7799[3] = lst2;
clo7799[4] = reverse_u45helper;
clo7799[5] = kont5868;
clo7799[6] = lst;
void* f58715999 = encode_clo(clo7799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58715999;
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
void* kont5868 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7801 = alloc_clo(lam6157_fptr, 7);

//setting env list
clo7801[1] = cons;
clo7801[2] = car;
clo7801[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo7801[4] = reverse_u45helper;
clo7801[5] = kont5868;
clo7801[6] = lst;
clo7801[7] = cdr;
void* f58725997 = encode_clo(clo7801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58725997;
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
void* a57676006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6161))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env6161))[2];
//not do dummy comment
void* kont5873 = (decode_clo(env6161))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont5873;
arg_buffer[3] = lst;
arg_buffer[4] = a57676006;
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
void* kont5873 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7803 = alloc_clo(lam6160_fptr, 3);

//setting env list
clo7803[1] = kont5873;
clo7803[2] = reverse_u45helper;
clo7803[3] = lst;
void* f58746005 = encode_clo(clo7803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58746005;
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
void* x57706011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5875 = (decode_clo(env6164))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5875);
arg_buffer[2] = x57706011;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5875))[0]);
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
void* a57756020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57716013 = (decode_clo(env6166))[4];
//not do dummy comment
void* a57736016 = (decode_clo(env6166))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6166))[2];
//not do dummy comment
void* kont5875 = (decode_clo(env6166))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5875;
arg_buffer[3] = a57716013;
arg_buffer[4] = a57736016;
arg_buffer[5] = a57756020;
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
void* a57746018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57716013 = (decode_clo(env6168))[6];
//not do dummy comment
void* a57736016 = (decode_clo(env6168))[5];
//not do dummy comment
void* cons = (decode_clo(env6168))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6168))[3];
//not do dummy comment
void* kont5875 = (decode_clo(env6168))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6168))[1];

//creating new closure instance
void** clo7805 = alloc_clo(lam6165_fptr, 4);

//setting env list
clo7805[1] = kont5875;
clo7805[2] = take_u45helper;
clo7805[3] = a57736016;
clo7805[4] = a57716013;
void* f58776019 = encode_clo(clo7805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f58776019;
arg_buffer[3] = a57746018;
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
void* a57736016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6170))[7];
//not do dummy comment
void* a57716013 = (decode_clo(env6170))[6];
//not do dummy comment
void* car = (decode_clo(env6170))[5];
//not do dummy comment
void* cons = (decode_clo(env6170))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env6170))[3];
//not do dummy comment
void* kont5875 = (decode_clo(env6170))[2];
//not do dummy comment
void* lst2 = (decode_clo(env6170))[1];

//creating new closure instance
void** clo7807 = alloc_clo(lam6167_fptr, 6);

//setting env list
clo7807[1] = lst2;
clo7807[2] = kont5875;
clo7807[3] = take_u45helper;
clo7807[4] = cons;
clo7807[5] = a57736016;
clo7807[6] = a57716013;
void* f58786017 = encode_clo(clo7807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58786017;
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
void* a57716013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6173))[8];
//not do dummy comment
void* cons = (decode_clo(env6173))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6173))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6173))[5];
//not do dummy comment
void* kont5875 = (decode_clo(env6173))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6173))[3];
//not do dummy comment
void* n = (decode_clo(env6173))[2];
//not do dummy comment
void* car = (decode_clo(env6173))[1];
mpz_t* mpzvar7808 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7808, "1", 10);
void* a57726014 = encode_mpz(mpzvar7808);

//creating new closure instance
void** clo7810 = alloc_clo(lam6169_fptr, 7);

//setting env list
clo7810[1] = lst2;
clo7810[2] = kont5875;
clo7810[3] = take_u45helper;
clo7810[4] = cons;
clo7810[5] = car;
clo7810[6] = a57716013;
clo7810[7] = lst;
void* f58796015 = encode_clo(clo7810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f58796015;
arg_buffer[3] = n;
arg_buffer[4] = a57726014;
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
void* a57696009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6175))[10];
//not do dummy comment
void* lst = (decode_clo(env6175))[9];
//not do dummy comment
void* reverse = (decode_clo(env6175))[8];
//not do dummy comment
void* cons = (decode_clo(env6175))[7];
//not do dummy comment
void* _u45 = (decode_clo(env6175))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env6175))[5];
//not do dummy comment
void* kont5875 = (decode_clo(env6175))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6175))[3];
//not do dummy comment
void* n = (decode_clo(env6175))[2];
//not do dummy comment
void* car = (decode_clo(env6175))[1];

//if-clause
bool if_guard7811 = is_true(a57696009);
if(if_guard7811)
{

//creating new closure instance
void** clo7813 = alloc_clo(lam6163_fptr, 1);

//setting env list
clo7813[1] = kont5875;
void* f58766010 = encode_clo(clo7813);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f58766010;
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
void** clo7815 = alloc_clo(lam6172_fptr, 8);

//setting env list
clo7815[1] = car;
clo7815[2] = n;
clo7815[3] = lst2;
clo7815[4] = kont5875;
clo7815[5] = take_u45helper;
clo7815[6] = _u45;
clo7815[7] = cons;
clo7815[8] = lst;
void* f58806012 = encode_clo(clo7815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58806012;
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
void* kont5875 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar7816 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7816, "0", 10);
void* a57686007 = encode_mpz(mpzvar7816);

//creating new closure instance
void** clo7818 = alloc_clo(lam6174_fptr, 10);

//setting env list
clo7818[1] = car;
clo7818[2] = n;
clo7818[3] = lst2;
clo7818[4] = kont5875;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo7818[5] = take_u45helper;
clo7818[6] = _u45;
clo7818[7] = cons;
clo7818[8] = reverse;
clo7818[9] = lst;
clo7818[10] = cdr;
void* f58816008 = encode_clo(clo7818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f58816008;
arg_buffer[3] = n;
arg_buffer[4] = a57686007;
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
void* a57766022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5882 = (decode_clo(env6179))[4];
//not do dummy comment
void* lst = (decode_clo(env6179))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env6179))[2];
//not do dummy comment
void* n = (decode_clo(env6179))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont5882;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a57766022;
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
void* kont5882 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7820 = alloc_clo(lam6178_fptr, 4);

//setting env list
clo7820[1] = n;
clo7820[2] = take_u45helper;
clo7820[3] = lst;
clo7820[4] = kont5882;
void* f58836021 = encode_clo(clo7820);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58836021;
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
void* a57816030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57796026 = (decode_clo(env6183))[3];
//not do dummy comment
void* kont5884 = (decode_clo(env6183))[2];
//not do dummy comment
void* _u43 = (decode_clo(env6183))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont5884;
arg_buffer[3] = a57796026;
arg_buffer[4] = a57816030;
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
void* a57806028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a57796026 = (decode_clo(env6185))[4];
//not do dummy comment
void* _u43 = (decode_clo(env6185))[3];
//not do dummy comment
void* kont5884 = (decode_clo(env6185))[2];
//not do dummy comment
void* length = (decode_clo(env6185))[1];

//creating new closure instance
void** clo7822 = alloc_clo(lam6182_fptr, 3);

//setting env list
clo7822[1] = _u43;
clo7822[2] = kont5884;
clo7822[3] = a57796026;
void* f58856029 = encode_clo(clo7822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f58856029;
arg_buffer[3] = a57806028;
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
void* a57776024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6188))[5];
//not do dummy comment
void* lst = (decode_clo(env6188))[4];
//not do dummy comment
void* _u43 = (decode_clo(env6188))[3];
//not do dummy comment
void* kont5884 = (decode_clo(env6188))[2];
//not do dummy comment
void* length = (decode_clo(env6188))[1];

//if-clause
bool if_guard7823 = is_true(a57776024);
if(if_guard7823)
{
mpz_t* mpzvar7824 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7824, "0", 10);
void* x57786025 = encode_mpz(mpzvar7824);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5884);
arg_buffer[2] = x57786025;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5884))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar7825 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7825, "1", 10);
void* a57796026 = encode_mpz(mpzvar7825);

//creating new closure instance
void** clo7827 = alloc_clo(lam6184_fptr, 4);

//setting env list
clo7827[1] = length;
clo7827[2] = kont5884;
clo7827[3] = _u43;
clo7827[4] = a57796026;
void* f58866027 = encode_clo(clo7827);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58866027;
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
void* kont5884 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo7829 = alloc_clo(lam6187_fptr, 5);

//setting env list
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo7829[1] = length;
clo7829[2] = kont5884;
clo7829[3] = _u43;
clo7829[4] = lst;
clo7829[5] = cdr;
void* f58876023 = encode_clo(clo7829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58876023;
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
void* x57836034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5888 = (decode_clo(env6191))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5888);
arg_buffer[2] = x57836034;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5888))[0]);
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
void* a57876042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5888 = (decode_clo(env6193))[3];
//not do dummy comment
void* cons = (decode_clo(env6193))[2];
//not do dummy comment
void* a57856038 = (decode_clo(env6193))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5888;
arg_buffer[3] = a57856038;
arg_buffer[4] = a57876042;
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
void* a57866040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env6195))[5];
//not do dummy comment
void* kont5888 = (decode_clo(env6195))[4];
//not do dummy comment
void* proc = (decode_clo(env6195))[3];
//not do dummy comment
void* cons = (decode_clo(env6195))[2];
//not do dummy comment
void* a57856038 = (decode_clo(env6195))[1];

//creating new closure instance
void** clo7831 = alloc_clo(lam6192_fptr, 3);

//setting env list
clo7831[1] = a57856038;
clo7831[2] = cons;
clo7831[3] = kont5888;
void* f58906041 = encode_clo(clo7831);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f58906041;
arg_buffer[3] = proc;
arg_buffer[4] = a57866040;
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
void* a57856038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6197))[6];
//not do dummy comment
void* lst = (decode_clo(env6197))[5];
//not do dummy comment
void* map = (decode_clo(env6197))[4];
//not do dummy comment
void* kont5888 = (decode_clo(env6197))[3];
//not do dummy comment
void* proc = (decode_clo(env6197))[2];
//not do dummy comment
void* cons = (decode_clo(env6197))[1];

//creating new closure instance
void** clo7833 = alloc_clo(lam6194_fptr, 5);

//setting env list
clo7833[1] = a57856038;
clo7833[2] = cons;
clo7833[3] = proc;
clo7833[4] = kont5888;
clo7833[5] = map;
void* f58916039 = encode_clo(clo7833);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58916039;
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
void* a57846036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6199))[6];
//not do dummy comment
void* lst = (decode_clo(env6199))[5];
//not do dummy comment
void* map = (decode_clo(env6199))[4];
//not do dummy comment
void* kont5888 = (decode_clo(env6199))[3];
//not do dummy comment
void* proc = (decode_clo(env6199))[2];
//not do dummy comment
void* cons = (decode_clo(env6199))[1];

//creating new closure instance
void** clo7835 = alloc_clo(lam6196_fptr, 6);

//setting env list
clo7835[1] = cons;
clo7835[2] = proc;
clo7835[3] = kont5888;
clo7835[4] = map;
clo7835[5] = lst;
clo7835[6] = cdr;
void* f58926037 = encode_clo(clo7835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f58926037;
arg_buffer[3] = a57846036;
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
void* a57826032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6201))[8];
//not do dummy comment
void* map = (decode_clo(env6201))[7];
//not do dummy comment
void* kont5888 = (decode_clo(env6201))[6];
//not do dummy comment
void* proc = (decode_clo(env6201))[5];
//not do dummy comment
void* car = (decode_clo(env6201))[4];
//not do dummy comment
void* cons = (decode_clo(env6201))[3];
//not do dummy comment
void* list = (decode_clo(env6201))[2];
//not do dummy comment
void* cdr = (decode_clo(env6201))[1];

//if-clause
bool if_guard7836 = is_true(a57826032);
if(if_guard7836)
{

//creating new closure instance
void** clo7838 = alloc_clo(lam6190_fptr, 1);

//setting env list
clo7838[1] = kont5888;
void* f58896033 = encode_clo(clo7838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58896033;
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
void** clo7840 = alloc_clo(lam6198_fptr, 6);

//setting env list
clo7840[1] = cons;
clo7840[2] = proc;
clo7840[3] = kont5888;
clo7840[4] = map;
clo7840[5] = lst;
clo7840[6] = cdr;
void* f58936035 = encode_clo(clo7840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58936035;
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
void* kont5888 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7842 = alloc_clo(lam6200_fptr, 8);

//setting env list
clo7842[1] = cdr;
clo7842[2] = list;
clo7842[3] = cons;
clo7842[4] = car;
clo7842[5] = proc;
clo7842[6] = kont5888;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo7842[7] = map;
clo7842[8] = lst;
void* f58946031 = encode_clo(clo7842);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f58946031;
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
void* x57896046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5895 = (decode_clo(env6204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5895);
arg_buffer[2] = x57896046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5895))[0]);
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
void* a57946056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5895 = (decode_clo(env6206))[3];
//not do dummy comment
void* a57926052 = (decode_clo(env6206))[2];
//not do dummy comment
void* cons = (decode_clo(env6206))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5895;
arg_buffer[3] = a57926052;
arg_buffer[4] = a57946056;
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
void* a57936054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5895 = (decode_clo(env6208))[5];
//not do dummy comment
void* op = (decode_clo(env6208))[4];
//not do dummy comment
void* cons = (decode_clo(env6208))[3];
//not do dummy comment
void* a57926052 = (decode_clo(env6208))[2];
//not do dummy comment
void* filter = (decode_clo(env6208))[1];

//creating new closure instance
void** clo7844 = alloc_clo(lam6205_fptr, 3);

//setting env list
clo7844[1] = cons;
clo7844[2] = a57926052;
clo7844[3] = kont5895;
void* f58976055 = encode_clo(clo7844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f58976055;
arg_buffer[3] = op;
arg_buffer[4] = a57936054;
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
void* a57926052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6210))[6];
//not do dummy comment
void* op = (decode_clo(env6210))[5];
//not do dummy comment
void* filter = (decode_clo(env6210))[4];
//not do dummy comment
void* cons = (decode_clo(env6210))[3];
//not do dummy comment
void* kont5895 = (decode_clo(env6210))[2];
//not do dummy comment
void* cdr = (decode_clo(env6210))[1];

//creating new closure instance
void** clo7846 = alloc_clo(lam6207_fptr, 5);

//setting env list
clo7846[1] = filter;
clo7846[2] = a57926052;
clo7846[3] = cons;
clo7846[4] = op;
clo7846[5] = kont5895;
void* f58986053 = encode_clo(clo7846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f58986053;
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
void* a57956058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5895 = (decode_clo(env6212))[3];
//not do dummy comment
void* op = (decode_clo(env6212))[2];
//not do dummy comment
void* filter = (decode_clo(env6212))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont5895;
arg_buffer[3] = op;
arg_buffer[4] = a57956058;
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
void* a57916050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6214))[7];
//not do dummy comment
void* op = (decode_clo(env6214))[6];
//not do dummy comment
void* cons = (decode_clo(env6214))[5];
//not do dummy comment
void* kont5895 = (decode_clo(env6214))[4];
//not do dummy comment
void* cdr = (decode_clo(env6214))[3];
//not do dummy comment
void* filter = (decode_clo(env6214))[2];
//not do dummy comment
void* car = (decode_clo(env6214))[1];

//if-clause
bool if_guard7847 = is_true(a57916050);
if(if_guard7847)
{

//creating new closure instance
void** clo7849 = alloc_clo(lam6209_fptr, 6);

//setting env list
clo7849[1] = cdr;
clo7849[2] = kont5895;
clo7849[3] = cons;
clo7849[4] = filter;
clo7849[5] = op;
clo7849[6] = lst;
void* f58996051 = encode_clo(clo7849);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f58996051;
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
void** clo7851 = alloc_clo(lam6211_fptr, 3);

//setting env list
clo7851[1] = filter;
clo7851[2] = op;
clo7851[3] = kont5895;
void* f59006057 = encode_clo(clo7851);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59006057;
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
void* a57906048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6216))[7];
//not do dummy comment
void* op = (decode_clo(env6216))[6];
//not do dummy comment
void* cons = (decode_clo(env6216))[5];
//not do dummy comment
void* kont5895 = (decode_clo(env6216))[4];
//not do dummy comment
void* cdr = (decode_clo(env6216))[3];
//not do dummy comment
void* filter = (decode_clo(env6216))[2];
//not do dummy comment
void* car = (decode_clo(env6216))[1];

//creating new closure instance
void** clo7853 = alloc_clo(lam6213_fptr, 7);

//setting env list
clo7853[1] = car;
clo7853[2] = filter;
clo7853[3] = cdr;
clo7853[4] = kont5895;
clo7853[5] = cons;
clo7853[6] = op;
clo7853[7] = lst;
void* f59016049 = encode_clo(clo7853);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f59016049;
arg_buffer[3] = a57906048;
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
void* a57886044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env6218))[8];
//not do dummy comment
void* op = (decode_clo(env6218))[7];
//not do dummy comment
void* cons = (decode_clo(env6218))[6];
//not do dummy comment
void* list = (decode_clo(env6218))[5];
//not do dummy comment
void* kont5895 = (decode_clo(env6218))[4];
//not do dummy comment
void* cdr = (decode_clo(env6218))[3];
//not do dummy comment
void* filter = (decode_clo(env6218))[2];
//not do dummy comment
void* car = (decode_clo(env6218))[1];

//if-clause
bool if_guard7854 = is_true(a57886044);
if(if_guard7854)
{

//creating new closure instance
void** clo7856 = alloc_clo(lam6203_fptr, 1);

//setting env list
clo7856[1] = kont5895;
void* f58966045 = encode_clo(clo7856);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f58966045;
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
void** clo7858 = alloc_clo(lam6215_fptr, 7);

//setting env list
clo7858[1] = car;
clo7858[2] = filter;
clo7858[3] = cdr;
clo7858[4] = kont5895;
clo7858[5] = cons;
clo7858[6] = op;
clo7858[7] = lst;
void* f59026047 = encode_clo(clo7858);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59026047;
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
void* kont5895 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7860 = alloc_clo(lam6217_fptr, 8);

//setting env list
clo7860[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo7860[2] = filter;
clo7860[3] = cdr;
clo7860[4] = kont5895;
clo7860[5] = list;
clo7860[6] = cons;
clo7860[7] = op;
clo7860[8] = lst;
void* f59036043 = encode_clo(clo7860);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59036043;
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
void* a58006066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6221))[3];
//not do dummy comment
void* a57986063 = (decode_clo(env6221))[2];
//not do dummy comment
void* kont5904 = (decode_clo(env6221))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont5904;
arg_buffer[3] = a57986063;
arg_buffer[4] = a58006066;
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
void* a57986063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env6224))[4];
//not do dummy comment
void* kont5904 = (decode_clo(env6224))[3];
//not do dummy comment
void* n = (decode_clo(env6224))[2];
//not do dummy comment
void* _u45 = (decode_clo(env6224))[1];
mpz_t* mpzvar7861 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7861, "1", 10);
void* a57996064 = encode_mpz(mpzvar7861);

//creating new closure instance
void** clo7863 = alloc_clo(lam6220_fptr, 3);

//setting env list
clo7863[1] = kont5904;
clo7863[2] = a57986063;
clo7863[3] = drop;
void* f59056065 = encode_clo(clo7863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f59056065;
arg_buffer[3] = n;
arg_buffer[4] = a57996064;
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
void* a57976061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6226))[6];
//not do dummy comment
void* kont5904 = (decode_clo(env6226))[5];
//not do dummy comment
void* n = (decode_clo(env6226))[4];
//not do dummy comment
void* _u45 = (decode_clo(env6226))[3];
//not do dummy comment
void* lst = (decode_clo(env6226))[2];
//not do dummy comment
void* drop = (decode_clo(env6226))[1];

//if-clause
bool if_guard7864 = is_true(a57976061);
if(if_guard7864)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5904);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5904))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7866 = alloc_clo(lam6223_fptr, 4);

//setting env list
clo7866[1] = _u45;
clo7866[2] = n;
clo7866[3] = kont5904;
clo7866[4] = drop;
void* f59066062 = encode_clo(clo7866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59066062;
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
void* kont5904 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar7867 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7867, "0", 10);
void* a57966059 = encode_mpz(mpzvar7867);

//creating new closure instance
void** clo7869 = alloc_clo(lam6225_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo7869[1] = drop;
clo7869[2] = lst;
clo7869[3] = _u45;
clo7869[4] = n;
clo7869[5] = kont5904;
clo7869[6] = cdr;
void* f59076060 = encode_clo(clo7869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f59076060;
arg_buffer[3] = n;
arg_buffer[4] = a57966059;
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
void* a58046074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* proc = (decode_clo(env6230))[3];
//not do dummy comment
void* kont5908 = (decode_clo(env6230))[2];
//not do dummy comment
void* a58026070 = (decode_clo(env6230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont5908;
arg_buffer[3] = a58026070;
arg_buffer[4] = a58046074;
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
void* a58036072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env6232))[5];
//not do dummy comment
void* kont5908 = (decode_clo(env6232))[4];
//not do dummy comment
void* a58026070 = (decode_clo(env6232))[3];
//not do dummy comment
void* proc = (decode_clo(env6232))[2];
//not do dummy comment
void* acc = (decode_clo(env6232))[1];

//creating new closure instance
void** clo7871 = alloc_clo(lam6229_fptr, 3);

//setting env list
clo7871[1] = a58026070;
clo7871[2] = kont5908;
clo7871[3] = proc;
void* f59096073 = encode_clo(clo7871);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f59096073;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a58036072;
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
void* a58026070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6234))[6];
//not do dummy comment
void* kont5908 = (decode_clo(env6234))[5];
//not do dummy comment
void* foldr = (decode_clo(env6234))[4];
//not do dummy comment
void* lst = (decode_clo(env6234))[3];
//not do dummy comment
void* proc = (decode_clo(env6234))[2];
//not do dummy comment
void* acc = (decode_clo(env6234))[1];

//creating new closure instance
void** clo7873 = alloc_clo(lam6231_fptr, 5);

//setting env list
clo7873[1] = acc;
clo7873[2] = proc;
clo7873[3] = a58026070;
clo7873[4] = kont5908;
clo7873[5] = foldr;
void* f59106071 = encode_clo(clo7873);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59106071;
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
void* a58016068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6236))[7];
//not do dummy comment
void* foldr = (decode_clo(env6236))[6];
//not do dummy comment
void* lst = (decode_clo(env6236))[5];
//not do dummy comment
void* proc = (decode_clo(env6236))[4];
//not do dummy comment
void* acc = (decode_clo(env6236))[3];
//not do dummy comment
void* kont5908 = (decode_clo(env6236))[2];
//not do dummy comment
void* car = (decode_clo(env6236))[1];

//if-clause
bool if_guard7874 = is_true(a58016068);
if(if_guard7874)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5908);
arg_buffer[2] = acc;
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
void** clo7876 = alloc_clo(lam6233_fptr, 6);

//setting env list
clo7876[1] = acc;
clo7876[2] = proc;
clo7876[3] = lst;
clo7876[4] = foldr;
clo7876[5] = kont5908;
clo7876[6] = cdr;
void* f59116069 = encode_clo(clo7876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59116069;
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
void* kont5908 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo7878 = alloc_clo(lam6235_fptr, 7);

//setting env list
clo7878[1] = car;
clo7878[2] = kont5908;
clo7878[3] = acc;
clo7878[4] = proc;
clo7878[5] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo7878[6] = foldr;
clo7878[7] = cdr;
void* f59126067 = encode_clo(clo7878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59126067;
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
void* a58086082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5913 = (decode_clo(env6239))[3];
//not do dummy comment
void* a58066078 = (decode_clo(env6239))[2];
//not do dummy comment
void* cons = (decode_clo(env6239))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont5913;
arg_buffer[3] = a58066078;
arg_buffer[4] = a58086082;
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
void* a58076080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5913 = (decode_clo(env6241))[5];
//not do dummy comment
void* a58066078 = (decode_clo(env6241))[4];
//not do dummy comment
void* append = (decode_clo(env6241))[3];
//not do dummy comment
void* lst2 = (decode_clo(env6241))[2];
//not do dummy comment
void* cons = (decode_clo(env6241))[1];

//creating new closure instance
void** clo7880 = alloc_clo(lam6238_fptr, 3);

//setting env list
clo7880[1] = cons;
clo7880[2] = a58066078;
clo7880[3] = kont5913;
void* f59146081 = encode_clo(clo7880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f59146081;
arg_buffer[3] = a58076080;
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
void* a58066078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6243))[6];
//not do dummy comment
void* kont5913 = (decode_clo(env6243))[5];
//not do dummy comment
void* append = (decode_clo(env6243))[4];
//not do dummy comment
void* lst2 = (decode_clo(env6243))[3];
//not do dummy comment
void* lst1 = (decode_clo(env6243))[2];
//not do dummy comment
void* cons = (decode_clo(env6243))[1];

//creating new closure instance
void** clo7882 = alloc_clo(lam6240_fptr, 5);

//setting env list
clo7882[1] = cons;
clo7882[2] = lst2;
clo7882[3] = append;
clo7882[4] = a58066078;
clo7882[5] = kont5913;
void* f59156079 = encode_clo(clo7882);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f59156079;
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
void* a58056076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env6245))[7];
//not do dummy comment
void* kont5913 = (decode_clo(env6245))[6];
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
bool if_guard7883 = is_true(a58056076);
if(if_guard7883)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5913);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5913))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo7885 = alloc_clo(lam6242_fptr, 6);

//setting env list
clo7885[1] = cons;
clo7885[2] = lst1;
clo7885[3] = lst2;
clo7885[4] = append;
clo7885[5] = kont5913;
clo7885[6] = cdr;
void* f59166077 = encode_clo(clo7885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f59166077;
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
void* kont5913 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo7887 = alloc_clo(lam6244_fptr, 7);

//setting env list
clo7887[1] = car;
clo7887[2] = lst1;
clo7887[3] = cons;
clo7887[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo7887[5] = append;
clo7887[6] = kont5913;
clo7887[7] = cdr;
void* f59176075 = encode_clo(clo7887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f59176075;
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

void* kont59186083 = prim_car(lst);
void* lst6084 = prim_cdr(lst);
void* x58096085 = apply_prim_hash(lst6084);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont59186083);
arg_buffer[2] = x58096085;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont59186083))[0]);
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
void* kont5920 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58106086 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5920);
arg_buffer[2] = x58106086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5920))[0]);
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
void* kont5921 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x58116087 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5921);
arg_buffer[2] = x58116087;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5921))[0]);
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
void* kont5922 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x58126088 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5922);
arg_buffer[2] = x58126088;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5922))[0]);
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
void* kont5923 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x58136089 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5923);
arg_buffer[2] = x58136089;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5923))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam6254_fptr() // lam6254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6255 = arg_buffer[1];
//reading env and args
void* a58186096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6255))[2];
//not do dummy comment
void* kont5924 = (decode_clo(env6255))[1];

//if-clause
bool if_guard7888 = is_true(a58186096);
if(if_guard7888)
{
mpz_t* mpzvar7889 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7889, "2", 10);
void* a58196097 = encode_mpz(mpzvar7889);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont5924;
arg_buffer[3] = a58196097;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x58206098 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5924);
arg_buffer[2] = x58206098;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5924))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6254 = encode_clo(alloc_clo(lam6254_fptr, 0));

void* lam6258_fptr() // lam6258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6259 = arg_buffer[1];
//reading env and args
void* a58166093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env6259))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env6259))[2];
//not do dummy comment
void* kont5924 = (decode_clo(env6259))[1];

//if-clause
bool if_guard7890 = is_true(a58166093);
if(if_guard7890)
{
mpz_t* mpzvar7891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7891, "2", 10);
void* a58176094 = encode_mpz(mpzvar7891);

//creating new closure instance
void** clo7893 = alloc_clo(lam6254_fptr, 2);

//setting env list
clo7893[1] = kont5924;
clo7893[2] = odd_u63;
void* f59256095 = encode_clo(clo7893);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f59256095;
arg_buffer[3] = a58176094;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x58216099 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5924);
arg_buffer[2] = x58216099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5924))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam6258 = encode_clo(alloc_clo(lam6258_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6262 = arg_buffer[1];
//reading env and args
void* kont5924 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar7894 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7894, "1", 10);
void* a58146090 = encode_mpz(mpzvar7894);
mpz_t* mpzvar7895 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar7895, "1", 10);
void* a58156091 = encode_mpz(mpzvar7895);

//creating new closure instance
void** clo7897 = alloc_clo(lam6258_fptr, 3);

//setting env list
clo7897[1] = kont5924;
clo7897[2] = even_u63;
clo7897[3] = odd_u63;
void* f59266092 = encode_clo(clo7897);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f59266092;
arg_buffer[3] = a58146090;
arg_buffer[4] = a58156091;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam6263_fptr() // lam6263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env6264 = arg_buffer[1];
//reading env and args
void* x58226101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont5927 = (decode_clo(env6264))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5927);
arg_buffer[2] = x58226101;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5927))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam6263 = encode_clo(alloc_clo(lam6263_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _6265 = arg_buffer[1];
//reading env and args
void* kont5927 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo7899 = alloc_clo(lam6263_fptr, 1);

//setting env list
clo7899[1] = kont5927;
void* f59286100 = encode_clo(clo7899);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f59286100;
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

