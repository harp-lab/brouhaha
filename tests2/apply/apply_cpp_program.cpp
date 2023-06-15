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
void* _8087 = arg_buffer[1];
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

void* kont78227924 = prim_car(lst);
void* lst7925 = prim_cdr(lst);
void* x77347926 = apply_prim__u43(lst7925);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78227924);
arg_buffer[2] = x77347926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78227924))[0]);
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
void* _8088 = arg_buffer[1];
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

void* kont78247927 = prim_car(lst);
void* lst7928 = prim_cdr(lst);
void* x77357929 = apply_prim__u45(lst7928);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78247927);
arg_buffer[2] = x77357929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78247927))[0]);
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
void* _8089 = arg_buffer[1];
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

void* kont78267930 = prim_car(lst);
void* lst7931 = prim_cdr(lst);
void* x77367932 = apply_prim__u42(lst7931);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78267930);
arg_buffer[2] = x77367932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78267930))[0]);
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
void* _8090 = arg_buffer[1];
//reading env and args
void* kont7828 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x77377933 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7828);
arg_buffer[2] = x77377933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7828))[0]);
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
void* _8091 = arg_buffer[1];
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

void* kont78297934 = prim_car(lst);
void* lst7935 = prim_cdr(lst);
void* x77387936 = apply_prim__u47(lst7935);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78297934);
arg_buffer[2] = x77387936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78297934))[0]);
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
void* _8092 = arg_buffer[1];
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

void* kont78317937 = prim_car(lst);
void* lst7938 = prim_cdr(lst);
void* x77397939 = apply_prim__u61(lst7938);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78317937);
arg_buffer[2] = x77397939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78317937))[0]);
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
void* _8093 = arg_buffer[1];
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

void* kont78337940 = prim_car(lst);
void* lst7941 = prim_cdr(lst);
void* x77407942 = apply_prim__u62(lst7941);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78337940);
arg_buffer[2] = x77407942;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78337940))[0]);
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
void* _8094 = arg_buffer[1];
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

void* kont78357943 = prim_car(lst);
void* lst7944 = prim_cdr(lst);
void* x77417945 = apply_prim__u60(lst7944);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78357943);
arg_buffer[2] = x77417945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78357943))[0]);
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
void* _8095 = arg_buffer[1];
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

void* kont78377946 = prim_car(lst);
void* lst7947 = prim_cdr(lst);
void* x77427948 = apply_prim__u60_u61(lst7947);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78377946);
arg_buffer[2] = x77427948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78377946))[0]);
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
void* _8096 = arg_buffer[1];
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

void* kont78397949 = prim_car(lst);
void* lst7950 = prim_cdr(lst);
void* x77437951 = apply_prim__u62_u61(lst7950);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78397949);
arg_buffer[2] = x77437951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78397949))[0]);
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
void* _8097 = arg_buffer[1];
//reading env and args
void* kont7841 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x77447952 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7841);
arg_buffer[2] = x77447952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7841))[0]);
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
void* _8098 = arg_buffer[1];
//reading env and args
void* kont7842 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x77457953 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7842);
arg_buffer[2] = x77457953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7842))[0]);
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
void* _8099 = arg_buffer[1];
//reading env and args
void* kont7843 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x77467954 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7843);
arg_buffer[2] = x77467954;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7843))[0]);
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
void* _8100 = arg_buffer[1];
//reading env and args
void* kont7844 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x77477955 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7844);
arg_buffer[2] = x77477955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7844))[0]);
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
void* _8101 = arg_buffer[1];
//reading env and args
void* kont7845 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x77487956 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7845);
arg_buffer[2] = x77487956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7845))[0]);
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
void* _8102 = arg_buffer[1];
//reading env and args
void* kont7846 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x77497957 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7846);
arg_buffer[2] = x77497957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7846))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam8103_fptr() // lam8103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8104 = arg_buffer[1];
//reading env and args
void* a77527961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a77507958 = (decode_clo(env8104))[3];
//not do dummy comment
void* kont7847 = (decode_clo(env8104))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8104))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont7847;
arg_buffer[3] = a77507958;
arg_buffer[4] = a77527961;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8103 = encode_clo(alloc_clo(lam8103_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8107 = arg_buffer[1];
//reading env and args
void* kont7847 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9084 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9084, "0", 10);
void* a77507958 = encode_mpz(mpzvar9084);
mpz_t* mpzvar9085 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9085, "2", 10);
void* a77517959 = encode_mpz(mpzvar9085);

//creating new closure instance
void** clo9087 = alloc_clo(lam8103_fptr, 3);

//setting env list
clo9087[1] = equal_u63;
clo9087[2] = kont7847;
clo9087[3] = a77507958;
void* f78487960 = encode_clo(clo9087);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f78487960;
arg_buffer[3] = x;
arg_buffer[4] = a77517959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam8108_fptr() // lam8108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8109 = arg_buffer[1];
//reading env and args
void* a77557965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a77537962 = (decode_clo(env8109))[3];
//not do dummy comment
void* kont7849 = (decode_clo(env8109))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env8109))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont7849;
arg_buffer[3] = a77537962;
arg_buffer[4] = a77557965;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8108 = encode_clo(alloc_clo(lam8108_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8112 = arg_buffer[1];
//reading env and args
void* kont7849 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar9088 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9088, "1", 10);
void* a77537962 = encode_mpz(mpzvar9088);
mpz_t* mpzvar9089 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9089, "2", 10);
void* a77547963 = encode_mpz(mpzvar9089);

//creating new closure instance
void** clo9091 = alloc_clo(lam8108_fptr, 3);

//setting env list
clo9091[1] = equal_u63;
clo9091[2] = kont7849;
clo9091[3] = a77537962;
void* f78507964 = encode_clo(clo9091);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f78507964;
arg_buffer[3] = x;
arg_buffer[4] = a77547963;
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
void* _8113 = arg_buffer[1];
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

void* kont78517966 = prim_car(x);
void* x7967 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont78517966);
arg_buffer[2] = x7967;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont78517966))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam8116_fptr() // lam8116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8117 = arg_buffer[1];
//reading env and args
void* a77617977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env8117))[3];
//not do dummy comment
void* kont7853 = (decode_clo(env8117))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8117))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont7853;
arg_buffer[3] = x;
arg_buffer[4] = a77617977;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8116 = encode_clo(alloc_clo(lam8116_fptr, 0));

void* lam8118_fptr() // lam8118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8119 = arg_buffer[1];
//reading env and args
void* a77597974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8119))[5];
//not do dummy comment
void* lst = (decode_clo(env8119))[4];
//not do dummy comment
void* x = (decode_clo(env8119))[3];
//not do dummy comment
void* kont7853 = (decode_clo(env8119))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8119))[1];

//if-clause
bool if_guard9092 = is_true(a77597974);
if(if_guard9092)
{
void* x77607975 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7853);
arg_buffer[2] = x77607975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7853))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9094 = alloc_clo(lam8116_fptr, 3);

//setting env list
clo9094[1] = member_u63;
clo9094[2] = kont7853;
clo9094[3] = x;
void* f78547976 = encode_clo(clo9094);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78547976;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8118 = encode_clo(alloc_clo(lam8118_fptr, 0));

void* lam8120_fptr() // lam8120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8121 = arg_buffer[1];
//reading env and args
void* a77587972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8121))[6];
//not do dummy comment
void* lst = (decode_clo(env8121))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env8121))[4];
//not do dummy comment
void* x = (decode_clo(env8121))[3];
//not do dummy comment
void* kont7853 = (decode_clo(env8121))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8121))[1];

//creating new closure instance
void** clo9096 = alloc_clo(lam8118_fptr, 5);

//setting env list
clo9096[1] = member_u63;
clo9096[2] = kont7853;
clo9096[3] = x;
clo9096[4] = lst;
clo9096[5] = cdr;
void* f78557973 = encode_clo(clo9096);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f78557973;
arg_buffer[3] = a77587972;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8120 = encode_clo(alloc_clo(lam8120_fptr, 0));

void* lam8122_fptr() // lam8122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8123 = arg_buffer[1];
//reading env and args
void* a77567969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8123))[7];
//not do dummy comment
void* lst = (decode_clo(env8123))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env8123))[5];
//not do dummy comment
void* x = (decode_clo(env8123))[4];
//not do dummy comment
void* kont7853 = (decode_clo(env8123))[3];
//not do dummy comment
void* car = (decode_clo(env8123))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env8123))[1];

//if-clause
bool if_guard9097 = is_true(a77567969);
if(if_guard9097)
{
void* x77577970 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7853);
arg_buffer[2] = x77577970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7853))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9099 = alloc_clo(lam8120_fptr, 6);

//setting env list
clo9099[1] = member_u63;
clo9099[2] = kont7853;
clo9099[3] = x;
clo9099[4] = equal_u63;
clo9099[5] = lst;
clo9099[6] = cdr;
void* f78567971 = encode_clo(clo9099);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f78567971;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8122 = encode_clo(alloc_clo(lam8122_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8124 = arg_buffer[1];
//reading env and args
void* kont7853 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9101 = alloc_clo(lam8122_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo9101[1] = member_u63;
clo9101[2] = car;
clo9101[3] = kont7853;
clo9101[4] = x;
clo9101[5] = equal_u63;
clo9101[6] = lst;
clo9101[7] = cdr;
void* f78577968 = encode_clo(clo9101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f78577968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam8125_fptr() // lam8125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8126 = arg_buffer[1];
//reading env and args
void* a77657985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7858 = (decode_clo(env8126))[4];
//not do dummy comment
void* fun = (decode_clo(env8126))[3];
//not do dummy comment
void* a77647983 = (decode_clo(env8126))[2];
//not do dummy comment
void* foldl = (decode_clo(env8126))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont7858;
arg_buffer[3] = fun;
arg_buffer[4] = a77647983;
arg_buffer[5] = a77657985;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8125 = encode_clo(alloc_clo(lam8125_fptr, 0));

void* lam8127_fptr() // lam8127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8128 = arg_buffer[1];
//reading env and args
void* a77647983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8128))[5];
//not do dummy comment
void* kont7858 = (decode_clo(env8128))[4];
//not do dummy comment
void* lst = (decode_clo(env8128))[3];
//not do dummy comment
void* fun = (decode_clo(env8128))[2];
//not do dummy comment
void* foldl = (decode_clo(env8128))[1];

//creating new closure instance
void** clo9103 = alloc_clo(lam8125_fptr, 4);

//setting env list
clo9103[1] = foldl;
clo9103[2] = a77647983;
clo9103[3] = fun;
clo9103[4] = kont7858;
void* f78597984 = encode_clo(clo9103);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78597984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8127 = encode_clo(alloc_clo(lam8127_fptr, 0));

void* lam8129_fptr() // lam8129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8130 = arg_buffer[1];
//reading env and args
void* a77637981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8130))[6];
//not do dummy comment
void* kont7858 = (decode_clo(env8130))[5];
//not do dummy comment
void* lst = (decode_clo(env8130))[4];
//not do dummy comment
void* fun = (decode_clo(env8130))[3];
//not do dummy comment
void* acc = (decode_clo(env8130))[2];
//not do dummy comment
void* foldl = (decode_clo(env8130))[1];

//creating new closure instance
void** clo9105 = alloc_clo(lam8127_fptr, 5);

//setting env list
clo9105[1] = foldl;
clo9105[2] = fun;
clo9105[3] = lst;
clo9105[4] = kont7858;
clo9105[5] = cdr;
void* f78607982 = encode_clo(clo9105);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f78607982;
arg_buffer[3] = a77637981;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8129 = encode_clo(alloc_clo(lam8129_fptr, 0));

void* lam8131_fptr() // lam8131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8132 = arg_buffer[1];
//reading env and args
void* a77627979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8132))[7];
//not do dummy comment
void* kont7858 = (decode_clo(env8132))[6];
//not do dummy comment
void* lst = (decode_clo(env8132))[5];
//not do dummy comment
void* fun = (decode_clo(env8132))[4];
//not do dummy comment
void* acc = (decode_clo(env8132))[3];
//not do dummy comment
void* car = (decode_clo(env8132))[2];
//not do dummy comment
void* foldl = (decode_clo(env8132))[1];

//if-clause
bool if_guard9106 = is_true(a77627979);
if(if_guard9106)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7858);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7858))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9108 = alloc_clo(lam8129_fptr, 6);

//setting env list
clo9108[1] = foldl;
clo9108[2] = acc;
clo9108[3] = fun;
clo9108[4] = lst;
clo9108[5] = kont7858;
clo9108[6] = cdr;
void* f78617980 = encode_clo(clo9108);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f78617980;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8131 = encode_clo(alloc_clo(lam8131_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8133 = arg_buffer[1];
//reading env and args
void* kont7858 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9110 = alloc_clo(lam8131_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo9110[1] = foldl;
clo9110[2] = car;
clo9110[3] = acc;
clo9110[4] = fun;
clo9110[5] = lst;
clo9110[6] = kont7858;
clo9110[7] = cdr;
void* f78627978 = encode_clo(clo9110);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f78627978;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam8134_fptr() // lam8134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8135 = arg_buffer[1];
//reading env and args
void* a77697993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a77677989 = (decode_clo(env8135))[3];
//not do dummy comment
void* kont7863 = (decode_clo(env8135))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8135))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont7863;
arg_buffer[3] = a77677989;
arg_buffer[4] = a77697993;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8134 = encode_clo(alloc_clo(lam8134_fptr, 0));

void* lam8136_fptr() // lam8136 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8137 = arg_buffer[1];
//reading env and args
void* a77687991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a77677989 = (decode_clo(env8137))[5];
//not do dummy comment
void* kont7863 = (decode_clo(env8137))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8137))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8137))[2];
//not do dummy comment
void* cons = (decode_clo(env8137))[1];

//creating new closure instance
void** clo9112 = alloc_clo(lam8134_fptr, 3);

//setting env list
clo9112[1] = reverse_u45helper;
clo9112[2] = kont7863;
clo9112[3] = a77677989;
void* f78647992 = encode_clo(clo9112);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f78647992;
arg_buffer[3] = a77687991;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8136 = encode_clo(alloc_clo(lam8136_fptr, 0));

void* lam8138_fptr() // lam8138 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8139 = arg_buffer[1];
//reading env and args
void* a77677989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8139))[6];
//not do dummy comment
void* kont7863 = (decode_clo(env8139))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8139))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8139))[3];
//not do dummy comment
void* car = (decode_clo(env8139))[2];
//not do dummy comment
void* cons = (decode_clo(env8139))[1];

//creating new closure instance
void** clo9114 = alloc_clo(lam8136_fptr, 5);

//setting env list
clo9114[1] = cons;
clo9114[2] = lst2;
clo9114[3] = reverse_u45helper;
clo9114[4] = kont7863;
clo9114[5] = a77677989;
void* f78657990 = encode_clo(clo9114);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f78657990;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8138 = encode_clo(alloc_clo(lam8138_fptr, 0));

void* lam8140_fptr() // lam8140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8141 = arg_buffer[1];
//reading env and args
void* a77667987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8141))[7];
//not do dummy comment
void* lst = (decode_clo(env8141))[6];
//not do dummy comment
void* kont7863 = (decode_clo(env8141))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8141))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8141))[3];
//not do dummy comment
void* car = (decode_clo(env8141))[2];
//not do dummy comment
void* cons = (decode_clo(env8141))[1];

//if-clause
bool if_guard9115 = is_true(a77667987);
if(if_guard9115)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7863);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9117 = alloc_clo(lam8138_fptr, 6);

//setting env list
clo9117[1] = cons;
clo9117[2] = car;
clo9117[3] = lst2;
clo9117[4] = reverse_u45helper;
clo9117[5] = kont7863;
clo9117[6] = lst;
void* f78667988 = encode_clo(clo9117);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78667988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8140 = encode_clo(alloc_clo(lam8140_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8142 = arg_buffer[1];
//reading env and args
void* kont7863 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9119 = alloc_clo(lam8140_fptr, 7);

//setting env list
clo9119[1] = cons;
clo9119[2] = car;
clo9119[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo9119[4] = reverse_u45helper;
clo9119[5] = kont7863;
clo9119[6] = lst;
clo9119[7] = cdr;
void* f78677986 = encode_clo(clo9119);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f78677986;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam8143_fptr() // lam8143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8144 = arg_buffer[1];
//reading env and args
void* a77707995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8144))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env8144))[2];
//not do dummy comment
void* kont7868 = (decode_clo(env8144))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont7868;
arg_buffer[3] = lst;
arg_buffer[4] = a77707995;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8143 = encode_clo(alloc_clo(lam8143_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8145 = arg_buffer[1];
//reading env and args
void* kont7868 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9121 = alloc_clo(lam8143_fptr, 3);

//setting env list
clo9121[1] = kont7868;
clo9121[2] = reverse_u45helper;
clo9121[3] = lst;
void* f78697994 = encode_clo(clo9121);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f78697994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam8146_fptr() // lam8146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8147 = arg_buffer[1];
//reading env and args
void* x77738000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7870 = (decode_clo(env8147))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7870);
arg_buffer[2] = x77738000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7870))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8146 = encode_clo(alloc_clo(lam8146_fptr, 0));

void* lam8148_fptr() // lam8148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8149 = arg_buffer[1];
//reading env and args
void* a77788009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a77748002 = (decode_clo(env8149))[4];
//not do dummy comment
void* a77768005 = (decode_clo(env8149))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8149))[2];
//not do dummy comment
void* kont7870 = (decode_clo(env8149))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont7870;
arg_buffer[3] = a77748002;
arg_buffer[4] = a77768005;
arg_buffer[5] = a77788009;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8148 = encode_clo(alloc_clo(lam8148_fptr, 0));

void* lam8150_fptr() // lam8150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8151 = arg_buffer[1];
//reading env and args
void* a77778007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a77748002 = (decode_clo(env8151))[6];
//not do dummy comment
void* a77768005 = (decode_clo(env8151))[5];
//not do dummy comment
void* kont7870 = (decode_clo(env8151))[4];
//not do dummy comment
void* cons = (decode_clo(env8151))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env8151))[2];
//not do dummy comment
void* lst2 = (decode_clo(env8151))[1];

//creating new closure instance
void** clo9123 = alloc_clo(lam8148_fptr, 4);

//setting env list
clo9123[1] = kont7870;
clo9123[2] = take_u45helper;
clo9123[3] = a77768005;
clo9123[4] = a77748002;
void* f78728008 = encode_clo(clo9123);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f78728008;
arg_buffer[3] = a77778007;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8150 = encode_clo(alloc_clo(lam8150_fptr, 0));

void* lam8152_fptr() // lam8152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8153 = arg_buffer[1];
//reading env and args
void* a77768005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a77748002 = (decode_clo(env8153))[7];
//not do dummy comment
void* lst = (decode_clo(env8153))[6];
//not do dummy comment
void* cons = (decode_clo(env8153))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env8153))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8153))[3];
//not do dummy comment
void* kont7870 = (decode_clo(env8153))[2];
//not do dummy comment
void* car = (decode_clo(env8153))[1];

//creating new closure instance
void** clo9125 = alloc_clo(lam8150_fptr, 6);

//setting env list
clo9125[1] = lst2;
clo9125[2] = take_u45helper;
clo9125[3] = cons;
clo9125[4] = kont7870;
clo9125[5] = a77768005;
clo9125[6] = a77748002;
void* f78738006 = encode_clo(clo9125);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f78738006;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8152 = encode_clo(alloc_clo(lam8152_fptr, 0));

void* lam8155_fptr() // lam8155 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8156 = arg_buffer[1];
//reading env and args
void* a77748002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8156))[8];
//not do dummy comment
void* cons = (decode_clo(env8156))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8156))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8156))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8156))[4];
//not do dummy comment
void* kont7870 = (decode_clo(env8156))[3];
//not do dummy comment
void* n = (decode_clo(env8156))[2];
//not do dummy comment
void* car = (decode_clo(env8156))[1];
mpz_t* mpzvar9126 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9126, "1", 10);
void* a77758003 = encode_mpz(mpzvar9126);

//creating new closure instance
void** clo9128 = alloc_clo(lam8152_fptr, 7);

//setting env list
clo9128[1] = car;
clo9128[2] = kont7870;
clo9128[3] = lst2;
clo9128[4] = take_u45helper;
clo9128[5] = cons;
clo9128[6] = lst;
clo9128[7] = a77748002;
void* f78748004 = encode_clo(clo9128);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f78748004;
arg_buffer[3] = n;
arg_buffer[4] = a77758003;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8155 = encode_clo(alloc_clo(lam8155_fptr, 0));

void* lam8157_fptr() // lam8157 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8158 = arg_buffer[1];
//reading env and args
void* a77727998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8158))[10];
//not do dummy comment
void* lst = (decode_clo(env8158))[9];
//not do dummy comment
void* reverse = (decode_clo(env8158))[8];
//not do dummy comment
void* cons = (decode_clo(env8158))[7];
//not do dummy comment
void* _u45 = (decode_clo(env8158))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env8158))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8158))[4];
//not do dummy comment
void* kont7870 = (decode_clo(env8158))[3];
//not do dummy comment
void* n = (decode_clo(env8158))[2];
//not do dummy comment
void* car = (decode_clo(env8158))[1];

//if-clause
bool if_guard9129 = is_true(a77727998);
if(if_guard9129)
{

//creating new closure instance
void** clo9131 = alloc_clo(lam8146_fptr, 1);

//setting env list
clo9131[1] = kont7870;
void* f78717999 = encode_clo(clo9131);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f78717999;
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
void** clo9133 = alloc_clo(lam8155_fptr, 8);

//setting env list
clo9133[1] = car;
clo9133[2] = n;
clo9133[3] = kont7870;
clo9133[4] = lst2;
clo9133[5] = take_u45helper;
clo9133[6] = _u45;
clo9133[7] = cons;
clo9133[8] = lst;
void* f78758001 = encode_clo(clo9133);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78758001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8157 = encode_clo(alloc_clo(lam8157_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8160 = arg_buffer[1];
//reading env and args
void* kont7870 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar9134 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9134, "0", 10);
void* a77717996 = encode_mpz(mpzvar9134);

//creating new closure instance
void** clo9136 = alloc_clo(lam8157_fptr, 10);

//setting env list
clo9136[1] = car;
clo9136[2] = n;
clo9136[3] = kont7870;
clo9136[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo9136[5] = take_u45helper;
clo9136[6] = _u45;
clo9136[7] = cons;
clo9136[8] = reverse;
clo9136[9] = lst;
clo9136[10] = cdr;
void* f78767997 = encode_clo(clo9136);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f78767997;
arg_buffer[3] = n;
arg_buffer[4] = a77717996;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam8161_fptr() // lam8161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8162 = arg_buffer[1];
//reading env and args
void* a77798011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env8162))[4];
//not do dummy comment
void* n = (decode_clo(env8162))[3];
//not do dummy comment
void* lst = (decode_clo(env8162))[2];
//not do dummy comment
void* kont7877 = (decode_clo(env8162))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont7877;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a77798011;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8161 = encode_clo(alloc_clo(lam8161_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8163 = arg_buffer[1];
//reading env and args
void* kont7877 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9138 = alloc_clo(lam8161_fptr, 4);

//setting env list
clo9138[1] = kont7877;
clo9138[2] = lst;
clo9138[3] = n;
clo9138[4] = take_u45helper;
void* f78788010 = encode_clo(clo9138);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f78788010;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam8165_fptr() // lam8165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8166 = arg_buffer[1];
//reading env and args
void* a77848019 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7879 = (decode_clo(env8166))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8166))[2];
//not do dummy comment
void* a77828015 = (decode_clo(env8166))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont7879;
arg_buffer[3] = a77828015;
arg_buffer[4] = a77848019;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8165 = encode_clo(alloc_clo(lam8165_fptr, 0));

void* lam8167_fptr() // lam8167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8168 = arg_buffer[1];
//reading env and args
void* a77838017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env8168))[4];
//not do dummy comment
void* kont7879 = (decode_clo(env8168))[3];
//not do dummy comment
void* _u43 = (decode_clo(env8168))[2];
//not do dummy comment
void* a77828015 = (decode_clo(env8168))[1];

//creating new closure instance
void** clo9140 = alloc_clo(lam8165_fptr, 3);

//setting env list
clo9140[1] = a77828015;
clo9140[2] = _u43;
clo9140[3] = kont7879;
void* f78808018 = encode_clo(clo9140);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f78808018;
arg_buffer[3] = a77838017;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8167 = encode_clo(alloc_clo(lam8167_fptr, 0));

void* lam8170_fptr() // lam8170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8171 = arg_buffer[1];
//reading env and args
void* a77808013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8171))[5];
//not do dummy comment
void* lst = (decode_clo(env8171))[4];
//not do dummy comment
void* length = (decode_clo(env8171))[3];
//not do dummy comment
void* kont7879 = (decode_clo(env8171))[2];
//not do dummy comment
void* _u43 = (decode_clo(env8171))[1];

//if-clause
bool if_guard9141 = is_true(a77808013);
if(if_guard9141)
{
mpz_t* mpzvar9142 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9142, "0", 10);
void* x77818014 = encode_mpz(mpzvar9142);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7879);
arg_buffer[2] = x77818014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7879))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar9143 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9143, "1", 10);
void* a77828015 = encode_mpz(mpzvar9143);

//creating new closure instance
void** clo9145 = alloc_clo(lam8167_fptr, 4);

//setting env list
clo9145[1] = a77828015;
clo9145[2] = _u43;
clo9145[3] = kont7879;
clo9145[4] = length;
void* f78818016 = encode_clo(clo9145);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78818016;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8170 = encode_clo(alloc_clo(lam8170_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8172 = arg_buffer[1];
//reading env and args
void* kont7879 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo9147 = alloc_clo(lam8170_fptr, 5);

//setting env list
clo9147[1] = _u43;
clo9147[2] = kont7879;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo9147[3] = length;
clo9147[4] = lst;
clo9147[5] = cdr;
void* f78828012 = encode_clo(clo9147);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f78828012;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam8173_fptr() // lam8173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8174 = arg_buffer[1];
//reading env and args
void* x77868023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7883 = (decode_clo(env8174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7883);
arg_buffer[2] = x77868023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8173 = encode_clo(alloc_clo(lam8173_fptr, 0));

void* lam8175_fptr() // lam8175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8176 = arg_buffer[1];
//reading env and args
void* a77908031 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env8176))[3];
//not do dummy comment
void* kont7883 = (decode_clo(env8176))[2];
//not do dummy comment
void* a77888027 = (decode_clo(env8176))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont7883;
arg_buffer[3] = a77888027;
arg_buffer[4] = a77908031;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8175 = encode_clo(alloc_clo(lam8175_fptr, 0));

void* lam8177_fptr() // lam8177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8178 = arg_buffer[1];
//reading env and args
void* a77898029 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env8178))[5];
//not do dummy comment
void* proc = (decode_clo(env8178))[4];
//not do dummy comment
void* cons = (decode_clo(env8178))[3];
//not do dummy comment
void* kont7883 = (decode_clo(env8178))[2];
//not do dummy comment
void* a77888027 = (decode_clo(env8178))[1];

//creating new closure instance
void** clo9149 = alloc_clo(lam8175_fptr, 3);

//setting env list
clo9149[1] = a77888027;
clo9149[2] = kont7883;
clo9149[3] = cons;
void* f78858030 = encode_clo(clo9149);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f78858030;
arg_buffer[3] = proc;
arg_buffer[4] = a77898029;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8177 = encode_clo(alloc_clo(lam8177_fptr, 0));

void* lam8179_fptr() // lam8179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8180 = arg_buffer[1];
//reading env and args
void* a77888027 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8180))[6];
//not do dummy comment
void* lst = (decode_clo(env8180))[5];
//not do dummy comment
void* map = (decode_clo(env8180))[4];
//not do dummy comment
void* kont7883 = (decode_clo(env8180))[3];
//not do dummy comment
void* proc = (decode_clo(env8180))[2];
//not do dummy comment
void* cons = (decode_clo(env8180))[1];

//creating new closure instance
void** clo9151 = alloc_clo(lam8177_fptr, 5);

//setting env list
clo9151[1] = a77888027;
clo9151[2] = kont7883;
clo9151[3] = cons;
clo9151[4] = proc;
clo9151[5] = map;
void* f78868028 = encode_clo(clo9151);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78868028;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8179 = encode_clo(alloc_clo(lam8179_fptr, 0));

void* lam8181_fptr() // lam8181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8182 = arg_buffer[1];
//reading env and args
void* a77878025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8182))[6];
//not do dummy comment
void* lst = (decode_clo(env8182))[5];
//not do dummy comment
void* map = (decode_clo(env8182))[4];
//not do dummy comment
void* kont7883 = (decode_clo(env8182))[3];
//not do dummy comment
void* proc = (decode_clo(env8182))[2];
//not do dummy comment
void* cons = (decode_clo(env8182))[1];

//creating new closure instance
void** clo9153 = alloc_clo(lam8179_fptr, 6);

//setting env list
clo9153[1] = cons;
clo9153[2] = proc;
clo9153[3] = kont7883;
clo9153[4] = map;
clo9153[5] = lst;
clo9153[6] = cdr;
void* f78878026 = encode_clo(clo9153);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f78878026;
arg_buffer[3] = a77878025;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8181 = encode_clo(alloc_clo(lam8181_fptr, 0));

void* lam8183_fptr() // lam8183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8184 = arg_buffer[1];
//reading env and args
void* a77858021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env8184))[8];
//not do dummy comment
void* map = (decode_clo(env8184))[7];
//not do dummy comment
void* kont7883 = (decode_clo(env8184))[6];
//not do dummy comment
void* proc = (decode_clo(env8184))[5];
//not do dummy comment
void* car = (decode_clo(env8184))[4];
//not do dummy comment
void* cons = (decode_clo(env8184))[3];
//not do dummy comment
void* list = (decode_clo(env8184))[2];
//not do dummy comment
void* cdr = (decode_clo(env8184))[1];

//if-clause
bool if_guard9154 = is_true(a77858021);
if(if_guard9154)
{

//creating new closure instance
void** clo9156 = alloc_clo(lam8173_fptr, 1);

//setting env list
clo9156[1] = kont7883;
void* f78848022 = encode_clo(clo9156);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f78848022;
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
void** clo9158 = alloc_clo(lam8181_fptr, 6);

//setting env list
clo9158[1] = cons;
clo9158[2] = proc;
clo9158[3] = kont7883;
clo9158[4] = map;
clo9158[5] = lst;
clo9158[6] = cdr;
void* f78888024 = encode_clo(clo9158);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f78888024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8183 = encode_clo(alloc_clo(lam8183_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8185 = arg_buffer[1];
//reading env and args
void* kont7883 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9160 = alloc_clo(lam8183_fptr, 8);

//setting env list
clo9160[1] = cdr;
clo9160[2] = list;
clo9160[3] = cons;
clo9160[4] = car;
clo9160[5] = proc;
clo9160[6] = kont7883;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo9160[7] = map;
clo9160[8] = lst;
void* f78898020 = encode_clo(clo9160);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f78898020;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam8186_fptr() // lam8186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8187 = arg_buffer[1];
//reading env and args
void* x77928035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7890 = (decode_clo(env8187))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7890);
arg_buffer[2] = x77928035;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7890))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8186 = encode_clo(alloc_clo(lam8186_fptr, 0));

void* lam8188_fptr() // lam8188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8189 = arg_buffer[1];
//reading env and args
void* a77978045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7890 = (decode_clo(env8189))[3];
//not do dummy comment
void* a77958041 = (decode_clo(env8189))[2];
//not do dummy comment
void* cons = (decode_clo(env8189))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont7890;
arg_buffer[3] = a77958041;
arg_buffer[4] = a77978045;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8188 = encode_clo(alloc_clo(lam8188_fptr, 0));

void* lam8190_fptr() // lam8190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8191 = arg_buffer[1];
//reading env and args
void* a77968043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7890 = (decode_clo(env8191))[5];
//not do dummy comment
void* op = (decode_clo(env8191))[4];
//not do dummy comment
void* a77958041 = (decode_clo(env8191))[3];
//not do dummy comment
void* filter = (decode_clo(env8191))[2];
//not do dummy comment
void* cons = (decode_clo(env8191))[1];

//creating new closure instance
void** clo9162 = alloc_clo(lam8188_fptr, 3);

//setting env list
clo9162[1] = cons;
clo9162[2] = a77958041;
clo9162[3] = kont7890;
void* f78928044 = encode_clo(clo9162);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f78928044;
arg_buffer[3] = op;
arg_buffer[4] = a77968043;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8190 = encode_clo(alloc_clo(lam8190_fptr, 0));

void* lam8192_fptr() // lam8192 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8193 = arg_buffer[1];
//reading env and args
void* a77958041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8193))[6];
//not do dummy comment
void* kont7890 = (decode_clo(env8193))[5];
//not do dummy comment
void* lst = (decode_clo(env8193))[4];
//not do dummy comment
void* op = (decode_clo(env8193))[3];
//not do dummy comment
void* filter = (decode_clo(env8193))[2];
//not do dummy comment
void* cons = (decode_clo(env8193))[1];

//creating new closure instance
void** clo9164 = alloc_clo(lam8190_fptr, 5);

//setting env list
clo9164[1] = cons;
clo9164[2] = filter;
clo9164[3] = a77958041;
clo9164[4] = op;
clo9164[5] = kont7890;
void* f78938042 = encode_clo(clo9164);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78938042;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8192 = encode_clo(alloc_clo(lam8192_fptr, 0));

void* lam8194_fptr() // lam8194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8195 = arg_buffer[1];
//reading env and args
void* a77988047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7890 = (decode_clo(env8195))[3];
//not do dummy comment
void* op = (decode_clo(env8195))[2];
//not do dummy comment
void* filter = (decode_clo(env8195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont7890;
arg_buffer[3] = op;
arg_buffer[4] = a77988047;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8194 = encode_clo(alloc_clo(lam8194_fptr, 0));

void* lam8196_fptr() // lam8196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8197 = arg_buffer[1];
//reading env and args
void* a77948039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8197))[7];
//not do dummy comment
void* kont7890 = (decode_clo(env8197))[6];
//not do dummy comment
void* lst = (decode_clo(env8197))[5];
//not do dummy comment
void* op = (decode_clo(env8197))[4];
//not do dummy comment
void* cons = (decode_clo(env8197))[3];
//not do dummy comment
void* filter = (decode_clo(env8197))[2];
//not do dummy comment
void* car = (decode_clo(env8197))[1];

//if-clause
bool if_guard9165 = is_true(a77948039);
if(if_guard9165)
{

//creating new closure instance
void** clo9167 = alloc_clo(lam8192_fptr, 6);

//setting env list
clo9167[1] = cons;
clo9167[2] = filter;
clo9167[3] = op;
clo9167[4] = lst;
clo9167[5] = kont7890;
clo9167[6] = cdr;
void* f78948040 = encode_clo(clo9167);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f78948040;
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
void** clo9169 = alloc_clo(lam8194_fptr, 3);

//setting env list
clo9169[1] = filter;
clo9169[2] = op;
clo9169[3] = kont7890;
void* f78958046 = encode_clo(clo9169);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f78958046;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8196 = encode_clo(alloc_clo(lam8196_fptr, 0));

void* lam8198_fptr() // lam8198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8199 = arg_buffer[1];
//reading env and args
void* a77938037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8199))[7];
//not do dummy comment
void* kont7890 = (decode_clo(env8199))[6];
//not do dummy comment
void* lst = (decode_clo(env8199))[5];
//not do dummy comment
void* op = (decode_clo(env8199))[4];
//not do dummy comment
void* cons = (decode_clo(env8199))[3];
//not do dummy comment
void* filter = (decode_clo(env8199))[2];
//not do dummy comment
void* car = (decode_clo(env8199))[1];

//creating new closure instance
void** clo9171 = alloc_clo(lam8196_fptr, 7);

//setting env list
clo9171[1] = car;
clo9171[2] = filter;
clo9171[3] = cons;
clo9171[4] = op;
clo9171[5] = lst;
clo9171[6] = kont7890;
clo9171[7] = cdr;
void* f78968038 = encode_clo(clo9171);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f78968038;
arg_buffer[3] = a77938037;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8198 = encode_clo(alloc_clo(lam8198_fptr, 0));

void* lam8200_fptr() // lam8200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8201 = arg_buffer[1];
//reading env and args
void* a77918033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7890 = (decode_clo(env8201))[8];
//not do dummy comment
void* lst = (decode_clo(env8201))[7];
//not do dummy comment
void* op = (decode_clo(env8201))[6];
//not do dummy comment
void* cons = (decode_clo(env8201))[5];
//not do dummy comment
void* list = (decode_clo(env8201))[4];
//not do dummy comment
void* cdr = (decode_clo(env8201))[3];
//not do dummy comment
void* filter = (decode_clo(env8201))[2];
//not do dummy comment
void* car = (decode_clo(env8201))[1];

//if-clause
bool if_guard9172 = is_true(a77918033);
if(if_guard9172)
{

//creating new closure instance
void** clo9174 = alloc_clo(lam8186_fptr, 1);

//setting env list
clo9174[1] = kont7890;
void* f78918034 = encode_clo(clo9174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f78918034;
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
void** clo9176 = alloc_clo(lam8198_fptr, 7);

//setting env list
clo9176[1] = car;
clo9176[2] = filter;
clo9176[3] = cons;
clo9176[4] = op;
clo9176[5] = lst;
clo9176[6] = kont7890;
clo9176[7] = cdr;
void* f78978036 = encode_clo(clo9176);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f78978036;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8200 = encode_clo(alloc_clo(lam8200_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8202 = arg_buffer[1];
//reading env and args
void* kont7890 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9178 = alloc_clo(lam8200_fptr, 8);

//setting env list
clo9178[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo9178[2] = filter;
clo9178[3] = cdr;
clo9178[4] = list;
clo9178[5] = cons;
clo9178[6] = op;
clo9178[7] = lst;
clo9178[8] = kont7890;
void* f78988032 = encode_clo(clo9178);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f78988032;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam8203_fptr() // lam8203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8204 = arg_buffer[1];
//reading env and args
void* a78038055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a78018052 = (decode_clo(env8204))[3];
//not do dummy comment
void* drop = (decode_clo(env8204))[2];
//not do dummy comment
void* kont7899 = (decode_clo(env8204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont7899;
arg_buffer[3] = a78018052;
arg_buffer[4] = a78038055;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8203 = encode_clo(alloc_clo(lam8203_fptr, 0));

void* lam8206_fptr() // lam8206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8207 = arg_buffer[1];
//reading env and args
void* a78018052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env8207))[4];
//not do dummy comment
void* kont7899 = (decode_clo(env8207))[3];
//not do dummy comment
void* n = (decode_clo(env8207))[2];
//not do dummy comment
void* _u45 = (decode_clo(env8207))[1];
mpz_t* mpzvar9179 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9179, "1", 10);
void* a78028053 = encode_mpz(mpzvar9179);

//creating new closure instance
void** clo9181 = alloc_clo(lam8203_fptr, 3);

//setting env list
clo9181[1] = kont7899;
clo9181[2] = drop;
clo9181[3] = a78018052;
void* f79008054 = encode_clo(clo9181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f79008054;
arg_buffer[3] = n;
arg_buffer[4] = a78028053;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8206 = encode_clo(alloc_clo(lam8206_fptr, 0));

void* lam8208_fptr() // lam8208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8209 = arg_buffer[1];
//reading env and args
void* a78008050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8209))[6];
//not do dummy comment
void* kont7899 = (decode_clo(env8209))[5];
//not do dummy comment
void* n = (decode_clo(env8209))[4];
//not do dummy comment
void* _u45 = (decode_clo(env8209))[3];
//not do dummy comment
void* lst = (decode_clo(env8209))[2];
//not do dummy comment
void* drop = (decode_clo(env8209))[1];

//if-clause
bool if_guard9182 = is_true(a78008050);
if(if_guard9182)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7899);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7899))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9184 = alloc_clo(lam8206_fptr, 4);

//setting env list
clo9184[1] = _u45;
clo9184[2] = n;
clo9184[3] = kont7899;
clo9184[4] = drop;
void* f79018051 = encode_clo(clo9184);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f79018051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8208 = encode_clo(alloc_clo(lam8208_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8211 = arg_buffer[1];
//reading env and args
void* kont7899 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar9185 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9185, "0", 10);
void* a77998048 = encode_mpz(mpzvar9185);

//creating new closure instance
void** clo9187 = alloc_clo(lam8208_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo9187[1] = drop;
clo9187[2] = lst;
clo9187[3] = _u45;
clo9187[4] = n;
clo9187[5] = kont7899;
clo9187[6] = cdr;
void* f79028049 = encode_clo(clo9187);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f79028049;
arg_buffer[3] = n;
arg_buffer[4] = a77998048;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam8212_fptr() // lam8212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8213 = arg_buffer[1];
//reading env and args
void* a78078063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a78058059 = (decode_clo(env8213))[3];
//not do dummy comment
void* proc = (decode_clo(env8213))[2];
//not do dummy comment
void* kont7903 = (decode_clo(env8213))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont7903;
arg_buffer[3] = a78058059;
arg_buffer[4] = a78078063;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8212 = encode_clo(alloc_clo(lam8212_fptr, 0));

void* lam8214_fptr() // lam8214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8215 = arg_buffer[1];
//reading env and args
void* a78068061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env8215))[5];
//not do dummy comment
void* a78058059 = (decode_clo(env8215))[4];
//not do dummy comment
void* kont7903 = (decode_clo(env8215))[3];
//not do dummy comment
void* proc = (decode_clo(env8215))[2];
//not do dummy comment
void* acc = (decode_clo(env8215))[1];

//creating new closure instance
void** clo9189 = alloc_clo(lam8212_fptr, 3);

//setting env list
clo9189[1] = kont7903;
clo9189[2] = proc;
clo9189[3] = a78058059;
void* f79048062 = encode_clo(clo9189);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f79048062;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a78068061;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8214 = encode_clo(alloc_clo(lam8214_fptr, 0));

void* lam8216_fptr() // lam8216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8217 = arg_buffer[1];
//reading env and args
void* a78058059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8217))[6];
//not do dummy comment
void* kont7903 = (decode_clo(env8217))[5];
//not do dummy comment
void* foldr = (decode_clo(env8217))[4];
//not do dummy comment
void* lst = (decode_clo(env8217))[3];
//not do dummy comment
void* proc = (decode_clo(env8217))[2];
//not do dummy comment
void* acc = (decode_clo(env8217))[1];

//creating new closure instance
void** clo9191 = alloc_clo(lam8214_fptr, 5);

//setting env list
clo9191[1] = acc;
clo9191[2] = proc;
clo9191[3] = kont7903;
clo9191[4] = a78058059;
clo9191[5] = foldr;
void* f79058060 = encode_clo(clo9191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f79058060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8216 = encode_clo(alloc_clo(lam8216_fptr, 0));

void* lam8218_fptr() // lam8218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8219 = arg_buffer[1];
//reading env and args
void* a78048057 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8219))[7];
//not do dummy comment
void* car = (decode_clo(env8219))[6];
//not do dummy comment
void* kont7903 = (decode_clo(env8219))[5];
//not do dummy comment
void* foldr = (decode_clo(env8219))[4];
//not do dummy comment
void* lst = (decode_clo(env8219))[3];
//not do dummy comment
void* proc = (decode_clo(env8219))[2];
//not do dummy comment
void* acc = (decode_clo(env8219))[1];

//if-clause
bool if_guard9192 = is_true(a78048057);
if(if_guard9192)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7903);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7903))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9194 = alloc_clo(lam8216_fptr, 6);

//setting env list
clo9194[1] = acc;
clo9194[2] = proc;
clo9194[3] = lst;
clo9194[4] = foldr;
clo9194[5] = kont7903;
clo9194[6] = cdr;
void* f79068058 = encode_clo(clo9194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f79068058;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8218 = encode_clo(alloc_clo(lam8218_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8220 = arg_buffer[1];
//reading env and args
void* kont7903 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo9196 = alloc_clo(lam8218_fptr, 7);

//setting env list
clo9196[1] = acc;
clo9196[2] = proc;
clo9196[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo9196[4] = foldr;
clo9196[5] = kont7903;
clo9196[6] = car;
clo9196[7] = cdr;
void* f79078056 = encode_clo(clo9196);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f79078056;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam8221_fptr() // lam8221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8222 = arg_buffer[1];
//reading env and args
void* a78118071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a78098067 = (decode_clo(env8222))[3];
//not do dummy comment
void* kont7908 = (decode_clo(env8222))[2];
//not do dummy comment
void* cons = (decode_clo(env8222))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont7908;
arg_buffer[3] = a78098067;
arg_buffer[4] = a78118071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8221 = encode_clo(alloc_clo(lam8221_fptr, 0));

void* lam8223_fptr() // lam8223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8224 = arg_buffer[1];
//reading env and args
void* a78108069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a78098067 = (decode_clo(env8224))[5];
//not do dummy comment
void* kont7908 = (decode_clo(env8224))[4];
//not do dummy comment
void* append = (decode_clo(env8224))[3];
//not do dummy comment
void* lst2 = (decode_clo(env8224))[2];
//not do dummy comment
void* cons = (decode_clo(env8224))[1];

//creating new closure instance
void** clo9198 = alloc_clo(lam8221_fptr, 3);

//setting env list
clo9198[1] = cons;
clo9198[2] = kont7908;
clo9198[3] = a78098067;
void* f79098070 = encode_clo(clo9198);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f79098070;
arg_buffer[3] = a78108069;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8223 = encode_clo(alloc_clo(lam8223_fptr, 0));

void* lam8225_fptr() // lam8225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8226 = arg_buffer[1];
//reading env and args
void* a78098067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8226))[6];
//not do dummy comment
void* kont7908 = (decode_clo(env8226))[5];
//not do dummy comment
void* append = (decode_clo(env8226))[4];
//not do dummy comment
void* lst2 = (decode_clo(env8226))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8226))[2];
//not do dummy comment
void* cons = (decode_clo(env8226))[1];

//creating new closure instance
void** clo9200 = alloc_clo(lam8223_fptr, 5);

//setting env list
clo9200[1] = cons;
clo9200[2] = lst2;
clo9200[3] = append;
clo9200[4] = kont7908;
clo9200[5] = a78098067;
void* f79108068 = encode_clo(clo9200);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f79108068;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8225 = encode_clo(alloc_clo(lam8225_fptr, 0));

void* lam8227_fptr() // lam8227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8228 = arg_buffer[1];
//reading env and args
void* a78088065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env8228))[7];
//not do dummy comment
void* kont7908 = (decode_clo(env8228))[6];
//not do dummy comment
void* append = (decode_clo(env8228))[5];
//not do dummy comment
void* lst2 = (decode_clo(env8228))[4];
//not do dummy comment
void* cons = (decode_clo(env8228))[3];
//not do dummy comment
void* lst1 = (decode_clo(env8228))[2];
//not do dummy comment
void* car = (decode_clo(env8228))[1];

//if-clause
bool if_guard9201 = is_true(a78088065);
if(if_guard9201)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7908);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7908))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo9203 = alloc_clo(lam8225_fptr, 6);

//setting env list
clo9203[1] = cons;
clo9203[2] = lst1;
clo9203[3] = lst2;
clo9203[4] = append;
clo9203[5] = kont7908;
clo9203[6] = cdr;
void* f79118066 = encode_clo(clo9203);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f79118066;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam8227 = encode_clo(alloc_clo(lam8227_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8229 = arg_buffer[1];
//reading env and args
void* kont7908 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo9205 = alloc_clo(lam8227_fptr, 7);

//setting env list
clo9205[1] = car;
clo9205[2] = lst1;
clo9205[3] = cons;
clo9205[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo9205[5] = append;
clo9205[6] = kont7908;
clo9205[7] = cdr;
void* f79128064 = encode_clo(clo9205);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f79128064;
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
void* _8230 = arg_buffer[1];
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

void* kont79138072 = prim_car(lst);
void* lst8073 = prim_cdr(lst);
void* x78128074 = apply_prim_hash(lst8073);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont79138072);
arg_buffer[2] = x78128074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont79138072))[0]);
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
void* _8231 = arg_buffer[1];
//reading env and args
void* kont7915 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x78138075 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7915);
arg_buffer[2] = x78138075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7915))[0]);
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
void* _8232 = arg_buffer[1];
//reading env and args
void* kont7916 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x78148076 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7916);
arg_buffer[2] = x78148076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7916))[0]);
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
void* _8233 = arg_buffer[1];
//reading env and args
void* kont7917 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x78158077 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7917);
arg_buffer[2] = x78158077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7917))[0]);
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
void* _8234 = arg_buffer[1];
//reading env and args
void* kont7918 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x78168078 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7918);
arg_buffer[2] = x78168078;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7918))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam8235_fptr() // lam8235 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8236 = arg_buffer[1];
//reading env and args
void* a78208083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* _u43 = (decode_clo(env8236))[2];
//not do dummy comment
void* kont7919 = (decode_clo(env8236))[1];
void* cps_u45lst79208084 = prim_cons(kont7919, a78208083);

//clo-apply
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = cps_u45lst79208084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
// call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8235 = encode_clo(alloc_clo(lam8235_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8240 = arg_buffer[1];
//reading env and args
void* kont7919 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar9206 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9206, "1", 10);
void* a78178079 = encode_mpz(mpzvar9206);
mpz_t* mpzvar9207 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9207, "2", 10);
void* a78188080 = encode_mpz(mpzvar9207);
mpz_t* mpzvar9208 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar9208, "3", 10);
void* a78198081 = encode_mpz(mpzvar9208);

//creating new closure instance
void** clo9210 = alloc_clo(lam8235_fptr, 2);

//setting env list
clo9210[1] = kont7919;
clo9210[2] = _u43;
void* f79218082 = encode_clo(clo9210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f79218082;
arg_buffer[3] = a78178079;
arg_buffer[4] = a78188080;
arg_buffer[5] = a78198081;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam8241_fptr() // lam8241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env8242 = arg_buffer[1];
//reading env and args
void* x78218086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont7922 = (decode_clo(env8242))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont7922);
arg_buffer[2] = x78218086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont7922))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam8241 = encode_clo(alloc_clo(lam8241_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _8243 = arg_buffer[1];
//reading env and args
void* kont7922 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo9212 = alloc_clo(lam8241_fptr, 1);

//setting env list
clo9212[1] = kont7922;
void* f79238085 = encode_clo(clo9212);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f79238085;
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

