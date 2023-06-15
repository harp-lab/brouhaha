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
void* _87078 = arg_buffer[1];
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

void* kont8681986919 = prim_car(lst);
void* lst86920 = prim_cdr(lst);
void* x8673386921 = apply_prim__u43(lst86920);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8681986919);
arg_buffer[2] = x8673386921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8681986919))[0]);
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
void* _87079 = arg_buffer[1];
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

void* kont8682186922 = prim_car(lst);
void* lst86923 = prim_cdr(lst);
void* x8673486924 = apply_prim__u45(lst86923);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682186922);
arg_buffer[2] = x8673486924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682186922))[0]);
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
void* _87080 = arg_buffer[1];
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

void* kont8682386925 = prim_car(lst);
void* lst86926 = prim_cdr(lst);
void* x8673586927 = apply_prim__u42(lst86926);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682386925);
arg_buffer[2] = x8673586927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682386925))[0]);
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
void* _87081 = arg_buffer[1];
//reading env and args
void* kont86825 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8673686928 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86825);
arg_buffer[2] = x8673686928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86825))[0]);
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
void* _87082 = arg_buffer[1];
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

void* kont8682686929 = prim_car(lst);
void* lst86930 = prim_cdr(lst);
void* x8673786931 = apply_prim__u47(lst86930);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682686929);
arg_buffer[2] = x8673786931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682686929))[0]);
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
void* _87083 = arg_buffer[1];
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

void* kont8682886932 = prim_car(lst);
void* lst86933 = prim_cdr(lst);
void* x8673886934 = apply_prim__u61(lst86933);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8682886932);
arg_buffer[2] = x8673886934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8682886932))[0]);
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
void* _87084 = arg_buffer[1];
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

void* kont8683086935 = prim_car(lst);
void* lst86936 = prim_cdr(lst);
void* x8673986937 = apply_prim__u62(lst86936);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683086935);
arg_buffer[2] = x8673986937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683086935))[0]);
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
void* _87085 = arg_buffer[1];
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

void* kont8683286938 = prim_car(lst);
void* lst86939 = prim_cdr(lst);
void* x8674086940 = apply_prim__u60(lst86939);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683286938);
arg_buffer[2] = x8674086940;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683286938))[0]);
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
void* _87086 = arg_buffer[1];
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

void* kont8683486941 = prim_car(lst);
void* lst86942 = prim_cdr(lst);
void* x8674186943 = apply_prim__u60_u61(lst86942);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683486941);
arg_buffer[2] = x8674186943;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683486941))[0]);
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
void* _87087 = arg_buffer[1];
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

void* kont8683686944 = prim_car(lst);
void* lst86945 = prim_cdr(lst);
void* x8674286946 = apply_prim__u62_u61(lst86945);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8683686944);
arg_buffer[2] = x8674286946;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8683686944))[0]);
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
void* _87088 = arg_buffer[1];
//reading env and args
void* kont86838 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x8674386947 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86838);
arg_buffer[2] = x8674386947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86838))[0]);
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
void* _87089 = arg_buffer[1];
//reading env and args
void* kont86839 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8674486948 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86839);
arg_buffer[2] = x8674486948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86839))[0]);
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
void* _87090 = arg_buffer[1];
//reading env and args
void* kont86840 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x8674586949 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86840);
arg_buffer[2] = x8674586949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86840))[0]);
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
void* _87091 = arg_buffer[1];
//reading env and args
void* kont86841 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x8674686950 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86841);
arg_buffer[2] = x8674686950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86841))[0]);
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
void* _87092 = arg_buffer[1];
//reading env and args
void* kont86842 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8674786951 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86842);
arg_buffer[2] = x8674786951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86842))[0]);
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
void* _87093 = arg_buffer[1];
//reading env and args
void* kont86843 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x8674886952 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86843);
arg_buffer[2] = x8674886952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86843))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam87094_fptr() // lam87094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87095 = arg_buffer[1];
//reading env and args
void* a8675186956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8674986953 = (decode_clo(env87095))[3];
//not do dummy comment
void* kont86844 = (decode_clo(env87095))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env87095))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont86844;
arg_buffer[3] = a8674986953;
arg_buffer[4] = a8675186956;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87094 = encode_clo(alloc_clo(lam87094_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87098 = arg_buffer[1];
//reading env and args
void* kont86844 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar87532 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87532, "0", 10);
void* a8674986953 = encode_mpz(mpzvar87532);
mpz_t* mpzvar87533 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87533, "2", 10);
void* a8675086954 = encode_mpz(mpzvar87533);

//creating new closure instance
void** clo87535 = alloc_clo(lam87094_fptr, 3);

//setting env list
clo87535[1] = equal_u63;
clo87535[2] = kont86844;
clo87535[3] = a8674986953;
void* f8684586955 = encode_clo(clo87535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8684586955;
arg_buffer[3] = x;
arg_buffer[4] = a8675086954;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam87099_fptr() // lam87099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87100 = arg_buffer[1];
//reading env and args
void* a8675486960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8675286957 = (decode_clo(env87100))[3];
//not do dummy comment
void* kont86846 = (decode_clo(env87100))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env87100))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont86846;
arg_buffer[3] = a8675286957;
arg_buffer[4] = a8675486960;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87099 = encode_clo(alloc_clo(lam87099_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87103 = arg_buffer[1];
//reading env and args
void* kont86846 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar87536 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87536, "1", 10);
void* a8675286957 = encode_mpz(mpzvar87536);
mpz_t* mpzvar87537 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87537, "2", 10);
void* a8675386958 = encode_mpz(mpzvar87537);

//creating new closure instance
void** clo87539 = alloc_clo(lam87099_fptr, 3);

//setting env list
clo87539[1] = equal_u63;
clo87539[2] = kont86846;
clo87539[3] = a8675286957;
void* f8684786959 = encode_clo(clo87539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f8684786959;
arg_buffer[3] = x;
arg_buffer[4] = a8675386958;
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
void* _87104 = arg_buffer[1];
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

void* kont8684886961 = prim_car(x);
void* x86962 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8684886961);
arg_buffer[2] = x86962;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8684886961))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam87107_fptr() // lam87107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87108 = arg_buffer[1];
//reading env and args
void* a8676086972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86850 = (decode_clo(env87108))[3];
//not do dummy comment
void* x = (decode_clo(env87108))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env87108))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont86850;
arg_buffer[3] = x;
arg_buffer[4] = a8676086972;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87107 = encode_clo(alloc_clo(lam87107_fptr, 0));

void* lam87109_fptr() // lam87109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87110 = arg_buffer[1];
//reading env and args
void* a8675886969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87110))[5];
//not do dummy comment
void* lst = (decode_clo(env87110))[4];
//not do dummy comment
void* kont86850 = (decode_clo(env87110))[3];
//not do dummy comment
void* x = (decode_clo(env87110))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env87110))[1];

//if-clause
bool if_guard87540 = is_true(a8675886969);
if(if_guard87540)
{
void* x8675986970 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86850);
arg_buffer[2] = x8675986970;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86850))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo87542 = alloc_clo(lam87107_fptr, 3);

//setting env list
clo87542[1] = member_u63;
clo87542[2] = x;
clo87542[3] = kont86850;
void* f8685186971 = encode_clo(clo87542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8685186971;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87109 = encode_clo(alloc_clo(lam87109_fptr, 0));

void* lam87111_fptr() // lam87111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87112 = arg_buffer[1];
//reading env and args
void* a8675786967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87112))[6];
//not do dummy comment
void* lst = (decode_clo(env87112))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env87112))[4];
//not do dummy comment
void* kont86850 = (decode_clo(env87112))[3];
//not do dummy comment
void* x = (decode_clo(env87112))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env87112))[1];

//creating new closure instance
void** clo87544 = alloc_clo(lam87109_fptr, 5);

//setting env list
clo87544[1] = member_u63;
clo87544[2] = x;
clo87544[3] = kont86850;
clo87544[4] = lst;
clo87544[5] = cdr;
void* f8685286968 = encode_clo(clo87544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f8685286968;
arg_buffer[3] = a8675786967;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87111 = encode_clo(alloc_clo(lam87111_fptr, 0));

void* lam87113_fptr() // lam87113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87114 = arg_buffer[1];
//reading env and args
void* a8675586964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87114))[7];
//not do dummy comment
void* lst = (decode_clo(env87114))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env87114))[5];
//not do dummy comment
void* kont86850 = (decode_clo(env87114))[4];
//not do dummy comment
void* x = (decode_clo(env87114))[3];
//not do dummy comment
void* car = (decode_clo(env87114))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env87114))[1];

//if-clause
bool if_guard87545 = is_true(a8675586964);
if(if_guard87545)
{
void* x8675686965 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86850);
arg_buffer[2] = x8675686965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86850))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo87547 = alloc_clo(lam87111_fptr, 6);

//setting env list
clo87547[1] = member_u63;
clo87547[2] = x;
clo87547[3] = kont86850;
clo87547[4] = equal_u63;
clo87547[5] = lst;
clo87547[6] = cdr;
void* f8685386966 = encode_clo(clo87547);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8685386966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87113 = encode_clo(alloc_clo(lam87113_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87115 = arg_buffer[1];
//reading env and args
void* kont86850 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo87549 = alloc_clo(lam87113_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo87549[1] = member_u63;
clo87549[2] = car;
clo87549[3] = x;
clo87549[4] = kont86850;
clo87549[5] = equal_u63;
clo87549[6] = lst;
clo87549[7] = cdr;
void* f8685486963 = encode_clo(clo87549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8685486963;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam87116_fptr() // lam87116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87117 = arg_buffer[1];
//reading env and args
void* a8676486980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8676386978 = (decode_clo(env87117))[4];
//not do dummy comment
void* fun = (decode_clo(env87117))[3];
//not do dummy comment
void* foldl = (decode_clo(env87117))[2];
//not do dummy comment
void* kont86855 = (decode_clo(env87117))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont86855;
arg_buffer[3] = fun;
arg_buffer[4] = a8676386978;
arg_buffer[5] = a8676486980;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87116 = encode_clo(alloc_clo(lam87116_fptr, 0));

void* lam87118_fptr() // lam87118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87119 = arg_buffer[1];
//reading env and args
void* a8676386978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87119))[5];
//not do dummy comment
void* lst = (decode_clo(env87119))[4];
//not do dummy comment
void* fun = (decode_clo(env87119))[3];
//not do dummy comment
void* foldl = (decode_clo(env87119))[2];
//not do dummy comment
void* kont86855 = (decode_clo(env87119))[1];

//creating new closure instance
void** clo87551 = alloc_clo(lam87116_fptr, 4);

//setting env list
clo87551[1] = kont86855;
clo87551[2] = foldl;
clo87551[3] = fun;
clo87551[4] = a8676386978;
void* f8685686979 = encode_clo(clo87551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8685686979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87118 = encode_clo(alloc_clo(lam87118_fptr, 0));

void* lam87120_fptr() // lam87120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87121 = arg_buffer[1];
//reading env and args
void* a8676286976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87121))[6];
//not do dummy comment
void* lst = (decode_clo(env87121))[5];
//not do dummy comment
void* fun = (decode_clo(env87121))[4];
//not do dummy comment
void* acc = (decode_clo(env87121))[3];
//not do dummy comment
void* foldl = (decode_clo(env87121))[2];
//not do dummy comment
void* kont86855 = (decode_clo(env87121))[1];

//creating new closure instance
void** clo87553 = alloc_clo(lam87118_fptr, 5);

//setting env list
clo87553[1] = kont86855;
clo87553[2] = foldl;
clo87553[3] = fun;
clo87553[4] = lst;
clo87553[5] = cdr;
void* f8685786977 = encode_clo(clo87553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f8685786977;
arg_buffer[3] = a8676286976;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87120 = encode_clo(alloc_clo(lam87120_fptr, 0));

void* lam87122_fptr() // lam87122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87123 = arg_buffer[1];
//reading env and args
void* a8676186974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87123))[7];
//not do dummy comment
void* lst = (decode_clo(env87123))[6];
//not do dummy comment
void* fun = (decode_clo(env87123))[5];
//not do dummy comment
void* acc = (decode_clo(env87123))[4];
//not do dummy comment
void* car = (decode_clo(env87123))[3];
//not do dummy comment
void* foldl = (decode_clo(env87123))[2];
//not do dummy comment
void* kont86855 = (decode_clo(env87123))[1];

//if-clause
bool if_guard87554 = is_true(a8676186974);
if(if_guard87554)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86855);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86855))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo87556 = alloc_clo(lam87120_fptr, 6);

//setting env list
clo87556[1] = kont86855;
clo87556[2] = foldl;
clo87556[3] = acc;
clo87556[4] = fun;
clo87556[5] = lst;
clo87556[6] = cdr;
void* f8685886975 = encode_clo(clo87556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8685886975;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87122 = encode_clo(alloc_clo(lam87122_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87124 = arg_buffer[1];
//reading env and args
void* kont86855 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo87558 = alloc_clo(lam87122_fptr, 7);

//setting env list
clo87558[1] = kont86855;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo87558[2] = foldl;
clo87558[3] = car;
clo87558[4] = acc;
clo87558[5] = fun;
clo87558[6] = lst;
clo87558[7] = cdr;
void* f8685986973 = encode_clo(clo87558);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8685986973;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam87125_fptr() // lam87125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87126 = arg_buffer[1];
//reading env and args
void* a8676886988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86860 = (decode_clo(env87126))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env87126))[2];
//not do dummy comment
void* a8676686984 = (decode_clo(env87126))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont86860;
arg_buffer[3] = a8676686984;
arg_buffer[4] = a8676886988;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87125 = encode_clo(alloc_clo(lam87125_fptr, 0));

void* lam87127_fptr() // lam87127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87128 = arg_buffer[1];
//reading env and args
void* a8676786986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86860 = (decode_clo(env87128))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env87128))[4];
//not do dummy comment
void* lst2 = (decode_clo(env87128))[3];
//not do dummy comment
void* cons = (decode_clo(env87128))[2];
//not do dummy comment
void* a8676686984 = (decode_clo(env87128))[1];

//creating new closure instance
void** clo87560 = alloc_clo(lam87125_fptr, 3);

//setting env list
clo87560[1] = a8676686984;
clo87560[2] = reverse_u45helper;
clo87560[3] = kont86860;
void* f8686186987 = encode_clo(clo87560);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8686186987;
arg_buffer[3] = a8676786986;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87127 = encode_clo(alloc_clo(lam87127_fptr, 0));

void* lam87129_fptr() // lam87129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87130 = arg_buffer[1];
//reading env and args
void* a8676686984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86860 = (decode_clo(env87130))[6];
//not do dummy comment
void* lst = (decode_clo(env87130))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env87130))[4];
//not do dummy comment
void* lst2 = (decode_clo(env87130))[3];
//not do dummy comment
void* car = (decode_clo(env87130))[2];
//not do dummy comment
void* cons = (decode_clo(env87130))[1];

//creating new closure instance
void** clo87562 = alloc_clo(lam87127_fptr, 5);

//setting env list
clo87562[1] = a8676686984;
clo87562[2] = cons;
clo87562[3] = lst2;
clo87562[4] = reverse_u45helper;
clo87562[5] = kont86860;
void* f8686286985 = encode_clo(clo87562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8686286985;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87129 = encode_clo(alloc_clo(lam87129_fptr, 0));

void* lam87131_fptr() // lam87131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87132 = arg_buffer[1];
//reading env and args
void* a8676586982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87132))[7];
//not do dummy comment
void* kont86860 = (decode_clo(env87132))[6];
//not do dummy comment
void* lst = (decode_clo(env87132))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env87132))[4];
//not do dummy comment
void* lst2 = (decode_clo(env87132))[3];
//not do dummy comment
void* car = (decode_clo(env87132))[2];
//not do dummy comment
void* cons = (decode_clo(env87132))[1];

//if-clause
bool if_guard87563 = is_true(a8676586982);
if(if_guard87563)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86860);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86860))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo87565 = alloc_clo(lam87129_fptr, 6);

//setting env list
clo87565[1] = cons;
clo87565[2] = car;
clo87565[3] = lst2;
clo87565[4] = reverse_u45helper;
clo87565[5] = lst;
clo87565[6] = kont86860;
void* f8686386983 = encode_clo(clo87565);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8686386983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87131 = encode_clo(alloc_clo(lam87131_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87133 = arg_buffer[1];
//reading env and args
void* kont86860 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo87567 = alloc_clo(lam87131_fptr, 7);

//setting env list
clo87567[1] = cons;
clo87567[2] = car;
clo87567[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo87567[4] = reverse_u45helper;
clo87567[5] = lst;
clo87567[6] = kont86860;
clo87567[7] = cdr;
void* f8686486981 = encode_clo(clo87567);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8686486981;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam87134_fptr() // lam87134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87135 = arg_buffer[1];
//reading env and args
void* a8676986990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env87135))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env87135))[2];
//not do dummy comment
void* kont86865 = (decode_clo(env87135))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont86865;
arg_buffer[3] = lst;
arg_buffer[4] = a8676986990;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87134 = encode_clo(alloc_clo(lam87134_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87136 = arg_buffer[1];
//reading env and args
void* kont86865 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo87569 = alloc_clo(lam87134_fptr, 3);

//setting env list
clo87569[1] = kont86865;
clo87569[2] = reverse_u45helper;
clo87569[3] = lst;
void* f8686686989 = encode_clo(clo87569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8686686989;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam87137_fptr() // lam87137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87138 = arg_buffer[1];
//reading env and args
void* x8677286995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86867 = (decode_clo(env87138))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86867);
arg_buffer[2] = x8677286995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86867))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87137 = encode_clo(alloc_clo(lam87137_fptr, 0));

void* lam87139_fptr() // lam87139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87140 = arg_buffer[1];
//reading env and args
void* a8677787004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86867 = (decode_clo(env87140))[4];
//not do dummy comment
void* a8677587000 = (decode_clo(env87140))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env87140))[2];
//not do dummy comment
void* a8677386997 = (decode_clo(env87140))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont86867;
arg_buffer[3] = a8677386997;
arg_buffer[4] = a8677587000;
arg_buffer[5] = a8677787004;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87139 = encode_clo(alloc_clo(lam87139_fptr, 0));

void* lam87141_fptr() // lam87141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87142 = arg_buffer[1];
//reading env and args
void* a8677687002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86867 = (decode_clo(env87142))[6];
//not do dummy comment
void* cons = (decode_clo(env87142))[5];
//not do dummy comment
void* a8677587000 = (decode_clo(env87142))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env87142))[3];
//not do dummy comment
void* a8677386997 = (decode_clo(env87142))[2];
//not do dummy comment
void* lst2 = (decode_clo(env87142))[1];

//creating new closure instance
void** clo87571 = alloc_clo(lam87139_fptr, 4);

//setting env list
clo87571[1] = a8677386997;
clo87571[2] = take_u45helper;
clo87571[3] = a8677587000;
clo87571[4] = kont86867;
void* f8686987003 = encode_clo(clo87571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f8686987003;
arg_buffer[3] = a8677687002;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87141 = encode_clo(alloc_clo(lam87141_fptr, 0));

void* lam87143_fptr() // lam87143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87144 = arg_buffer[1];
//reading env and args
void* a8677587000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env87144))[7];
//not do dummy comment
void* kont86867 = (decode_clo(env87144))[6];
//not do dummy comment
void* car = (decode_clo(env87144))[5];
//not do dummy comment
void* cons = (decode_clo(env87144))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env87144))[3];
//not do dummy comment
void* a8677386997 = (decode_clo(env87144))[2];
//not do dummy comment
void* lst2 = (decode_clo(env87144))[1];

//creating new closure instance
void** clo87573 = alloc_clo(lam87141_fptr, 6);

//setting env list
clo87573[1] = lst2;
clo87573[2] = a8677386997;
clo87573[3] = take_u45helper;
clo87573[4] = a8677587000;
clo87573[5] = cons;
clo87573[6] = kont86867;
void* f8687087001 = encode_clo(clo87573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8687087001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87143 = encode_clo(alloc_clo(lam87143_fptr, 0));

void* lam87146_fptr() // lam87146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87147 = arg_buffer[1];
//reading env and args
void* a8677386997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env87147))[8];
//not do dummy comment
void* kont86867 = (decode_clo(env87147))[7];
//not do dummy comment
void* cons = (decode_clo(env87147))[6];
//not do dummy comment
void* _u45 = (decode_clo(env87147))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env87147))[4];
//not do dummy comment
void* lst2 = (decode_clo(env87147))[3];
//not do dummy comment
void* n = (decode_clo(env87147))[2];
//not do dummy comment
void* car = (decode_clo(env87147))[1];
mpz_t* mpzvar87574 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87574, "1", 10);
void* a8677486998 = encode_mpz(mpzvar87574);

//creating new closure instance
void** clo87576 = alloc_clo(lam87143_fptr, 7);

//setting env list
clo87576[1] = lst2;
clo87576[2] = a8677386997;
clo87576[3] = take_u45helper;
clo87576[4] = cons;
clo87576[5] = car;
clo87576[6] = kont86867;
clo87576[7] = lst;
void* f8687186999 = encode_clo(clo87576);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8687186999;
arg_buffer[3] = n;
arg_buffer[4] = a8677486998;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87146 = encode_clo(alloc_clo(lam87146_fptr, 0));

void* lam87148_fptr() // lam87148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87149 = arg_buffer[1];
//reading env and args
void* a8677186993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87149))[10];
//not do dummy comment
void* lst = (decode_clo(env87149))[9];
//not do dummy comment
void* reverse = (decode_clo(env87149))[8];
//not do dummy comment
void* kont86867 = (decode_clo(env87149))[7];
//not do dummy comment
void* cons = (decode_clo(env87149))[6];
//not do dummy comment
void* _u45 = (decode_clo(env87149))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env87149))[4];
//not do dummy comment
void* lst2 = (decode_clo(env87149))[3];
//not do dummy comment
void* n = (decode_clo(env87149))[2];
//not do dummy comment
void* car = (decode_clo(env87149))[1];

//if-clause
bool if_guard87577 = is_true(a8677186993);
if(if_guard87577)
{

//creating new closure instance
void** clo87579 = alloc_clo(lam87137_fptr, 1);

//setting env list
clo87579[1] = kont86867;
void* f8686886994 = encode_clo(clo87579);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f8686886994;
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
void** clo87581 = alloc_clo(lam87146_fptr, 8);

//setting env list
clo87581[1] = car;
clo87581[2] = n;
clo87581[3] = lst2;
clo87581[4] = take_u45helper;
clo87581[5] = _u45;
clo87581[6] = cons;
clo87581[7] = kont86867;
clo87581[8] = lst;
void* f8687286996 = encode_clo(clo87581);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8687286996;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87148 = encode_clo(alloc_clo(lam87148_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87151 = arg_buffer[1];
//reading env and args
void* kont86867 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar87582 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87582, "0", 10);
void* a8677086991 = encode_mpz(mpzvar87582);

//creating new closure instance
void** clo87584 = alloc_clo(lam87148_fptr, 10);

//setting env list
clo87584[1] = car;
clo87584[2] = n;
clo87584[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo87584[4] = take_u45helper;
clo87584[5] = _u45;
clo87584[6] = cons;
clo87584[7] = kont86867;
clo87584[8] = reverse;
clo87584[9] = lst;
clo87584[10] = cdr;
void* f8687386992 = encode_clo(clo87584);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8687386992;
arg_buffer[3] = n;
arg_buffer[4] = a8677086991;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam87152_fptr() // lam87152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87153 = arg_buffer[1];
//reading env and args
void* a8677887006 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86874 = (decode_clo(env87153))[4];
//not do dummy comment
void* lst = (decode_clo(env87153))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env87153))[2];
//not do dummy comment
void* n = (decode_clo(env87153))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont86874;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a8677887006;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87152 = encode_clo(alloc_clo(lam87152_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87154 = arg_buffer[1];
//reading env and args
void* kont86874 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo87586 = alloc_clo(lam87152_fptr, 4);

//setting env list
clo87586[1] = n;
clo87586[2] = take_u45helper;
clo87586[3] = lst;
clo87586[4] = kont86874;
void* f8687587005 = encode_clo(clo87586);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8687587005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam87156_fptr() // lam87156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87157 = arg_buffer[1];
//reading env and args
void* a8678387014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86876 = (decode_clo(env87157))[3];
//not do dummy comment
void* _u43 = (decode_clo(env87157))[2];
//not do dummy comment
void* a8678187010 = (decode_clo(env87157))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont86876;
arg_buffer[3] = a8678187010;
arg_buffer[4] = a8678387014;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87156 = encode_clo(alloc_clo(lam87156_fptr, 0));

void* lam87158_fptr() // lam87158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87159 = arg_buffer[1];
//reading env and args
void* a8678287012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86876 = (decode_clo(env87159))[4];
//not do dummy comment
void* length = (decode_clo(env87159))[3];
//not do dummy comment
void* _u43 = (decode_clo(env87159))[2];
//not do dummy comment
void* a8678187010 = (decode_clo(env87159))[1];

//creating new closure instance
void** clo87588 = alloc_clo(lam87156_fptr, 3);

//setting env list
clo87588[1] = a8678187010;
clo87588[2] = _u43;
clo87588[3] = kont86876;
void* f8687787013 = encode_clo(clo87588);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f8687787013;
arg_buffer[3] = a8678287012;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87158 = encode_clo(alloc_clo(lam87158_fptr, 0));

void* lam87161_fptr() // lam87161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87162 = arg_buffer[1];
//reading env and args
void* a8677987008 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87162))[5];
//not do dummy comment
void* kont86876 = (decode_clo(env87162))[4];
//not do dummy comment
void* lst = (decode_clo(env87162))[3];
//not do dummy comment
void* length = (decode_clo(env87162))[2];
//not do dummy comment
void* _u43 = (decode_clo(env87162))[1];

//if-clause
bool if_guard87589 = is_true(a8677987008);
if(if_guard87589)
{
mpz_t* mpzvar87590 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87590, "0", 10);
void* x8678087009 = encode_mpz(mpzvar87590);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86876);
arg_buffer[2] = x8678087009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86876))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar87591 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87591, "1", 10);
void* a8678187010 = encode_mpz(mpzvar87591);

//creating new closure instance
void** clo87593 = alloc_clo(lam87158_fptr, 4);

//setting env list
clo87593[1] = a8678187010;
clo87593[2] = _u43;
clo87593[3] = length;
clo87593[4] = kont86876;
void* f8687887011 = encode_clo(clo87593);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8687887011;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87161 = encode_clo(alloc_clo(lam87161_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87163 = arg_buffer[1];
//reading env and args
void* kont86876 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo87595 = alloc_clo(lam87161_fptr, 5);

//setting env list
clo87595[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo87595[2] = length;
clo87595[3] = lst;
clo87595[4] = kont86876;
clo87595[5] = cdr;
void* f8687987007 = encode_clo(clo87595);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8687987007;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam87164_fptr() // lam87164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87165 = arg_buffer[1];
//reading env and args
void* x8678587018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86880 = (decode_clo(env87165))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86880);
arg_buffer[2] = x8678587018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86880))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87164 = encode_clo(alloc_clo(lam87164_fptr, 0));

void* lam87166_fptr() // lam87166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87167 = arg_buffer[1];
//reading env and args
void* a8678987026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8678787022 = (decode_clo(env87167))[3];
//not do dummy comment
void* kont86880 = (decode_clo(env87167))[2];
//not do dummy comment
void* cons = (decode_clo(env87167))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont86880;
arg_buffer[3] = a8678787022;
arg_buffer[4] = a8678987026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87166 = encode_clo(alloc_clo(lam87166_fptr, 0));

void* lam87168_fptr() // lam87168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87169 = arg_buffer[1];
//reading env and args
void* a8678887024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86880 = (decode_clo(env87169))[5];
//not do dummy comment
void* proc = (decode_clo(env87169))[4];
//not do dummy comment
void* cons = (decode_clo(env87169))[3];
//not do dummy comment
void* map = (decode_clo(env87169))[2];
//not do dummy comment
void* a8678787022 = (decode_clo(env87169))[1];

//creating new closure instance
void** clo87597 = alloc_clo(lam87166_fptr, 3);

//setting env list
clo87597[1] = cons;
clo87597[2] = kont86880;
clo87597[3] = a8678787022;
void* f8688287025 = encode_clo(clo87597);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f8688287025;
arg_buffer[3] = proc;
arg_buffer[4] = a8678887024;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87168 = encode_clo(alloc_clo(lam87168_fptr, 0));

void* lam87170_fptr() // lam87170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87171 = arg_buffer[1];
//reading env and args
void* a8678787022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87171))[6];
//not do dummy comment
void* lst = (decode_clo(env87171))[5];
//not do dummy comment
void* map = (decode_clo(env87171))[4];
//not do dummy comment
void* kont86880 = (decode_clo(env87171))[3];
//not do dummy comment
void* proc = (decode_clo(env87171))[2];
//not do dummy comment
void* cons = (decode_clo(env87171))[1];

//creating new closure instance
void** clo87599 = alloc_clo(lam87168_fptr, 5);

//setting env list
clo87599[1] = a8678787022;
clo87599[2] = map;
clo87599[3] = cons;
clo87599[4] = proc;
clo87599[5] = kont86880;
void* f8688387023 = encode_clo(clo87599);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8688387023;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87170 = encode_clo(alloc_clo(lam87170_fptr, 0));

void* lam87172_fptr() // lam87172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87173 = arg_buffer[1];
//reading env and args
void* a8678687020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87173))[6];
//not do dummy comment
void* lst = (decode_clo(env87173))[5];
//not do dummy comment
void* map = (decode_clo(env87173))[4];
//not do dummy comment
void* kont86880 = (decode_clo(env87173))[3];
//not do dummy comment
void* proc = (decode_clo(env87173))[2];
//not do dummy comment
void* cons = (decode_clo(env87173))[1];

//creating new closure instance
void** clo87601 = alloc_clo(lam87170_fptr, 6);

//setting env list
clo87601[1] = cons;
clo87601[2] = proc;
clo87601[3] = kont86880;
clo87601[4] = map;
clo87601[5] = lst;
clo87601[6] = cdr;
void* f8688487021 = encode_clo(clo87601);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f8688487021;
arg_buffer[3] = a8678687020;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87172 = encode_clo(alloc_clo(lam87172_fptr, 0));

void* lam87174_fptr() // lam87174 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87175 = arg_buffer[1];
//reading env and args
void* a8678487016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env87175))[8];
//not do dummy comment
void* map = (decode_clo(env87175))[7];
//not do dummy comment
void* kont86880 = (decode_clo(env87175))[6];
//not do dummy comment
void* proc = (decode_clo(env87175))[5];
//not do dummy comment
void* car = (decode_clo(env87175))[4];
//not do dummy comment
void* cons = (decode_clo(env87175))[3];
//not do dummy comment
void* list = (decode_clo(env87175))[2];
//not do dummy comment
void* cdr = (decode_clo(env87175))[1];

//if-clause
bool if_guard87602 = is_true(a8678487016);
if(if_guard87602)
{

//creating new closure instance
void** clo87604 = alloc_clo(lam87164_fptr, 1);

//setting env list
clo87604[1] = kont86880;
void* f8688187017 = encode_clo(clo87604);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8688187017;
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
void** clo87606 = alloc_clo(lam87172_fptr, 6);

//setting env list
clo87606[1] = cons;
clo87606[2] = proc;
clo87606[3] = kont86880;
clo87606[4] = map;
clo87606[5] = lst;
clo87606[6] = cdr;
void* f8688587019 = encode_clo(clo87606);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8688587019;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87174 = encode_clo(alloc_clo(lam87174_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87176 = arg_buffer[1];
//reading env and args
void* kont86880 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo87608 = alloc_clo(lam87174_fptr, 8);

//setting env list
clo87608[1] = cdr;
clo87608[2] = list;
clo87608[3] = cons;
clo87608[4] = car;
clo87608[5] = proc;
clo87608[6] = kont86880;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo87608[7] = map;
clo87608[8] = lst;
void* f8688687015 = encode_clo(clo87608);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8688687015;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam87177_fptr() // lam87177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87178 = arg_buffer[1];
//reading env and args
void* x8679187030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86887 = (decode_clo(env87178))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86887);
arg_buffer[2] = x8679187030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86887))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87177 = encode_clo(alloc_clo(lam87177_fptr, 0));

void* lam87179_fptr() // lam87179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87180 = arg_buffer[1];
//reading env and args
void* a8679687040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8679487036 = (decode_clo(env87180))[3];
//not do dummy comment
void* kont86887 = (decode_clo(env87180))[2];
//not do dummy comment
void* cons = (decode_clo(env87180))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont86887;
arg_buffer[3] = a8679487036;
arg_buffer[4] = a8679687040;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87179 = encode_clo(alloc_clo(lam87179_fptr, 0));

void* lam87181_fptr() // lam87181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87182 = arg_buffer[1];
//reading env and args
void* a8679587038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8679487036 = (decode_clo(env87182))[5];
//not do dummy comment
void* op = (decode_clo(env87182))[4];
//not do dummy comment
void* filter = (decode_clo(env87182))[3];
//not do dummy comment
void* kont86887 = (decode_clo(env87182))[2];
//not do dummy comment
void* cons = (decode_clo(env87182))[1];

//creating new closure instance
void** clo87610 = alloc_clo(lam87179_fptr, 3);

//setting env list
clo87610[1] = cons;
clo87610[2] = kont86887;
clo87610[3] = a8679487036;
void* f8688987039 = encode_clo(clo87610);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f8688987039;
arg_buffer[3] = op;
arg_buffer[4] = a8679587038;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87181 = encode_clo(alloc_clo(lam87181_fptr, 0));

void* lam87183_fptr() // lam87183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87184 = arg_buffer[1];
//reading env and args
void* a8679487036 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87184))[6];
//not do dummy comment
void* lst = (decode_clo(env87184))[5];
//not do dummy comment
void* op = (decode_clo(env87184))[4];
//not do dummy comment
void* filter = (decode_clo(env87184))[3];
//not do dummy comment
void* kont86887 = (decode_clo(env87184))[2];
//not do dummy comment
void* cons = (decode_clo(env87184))[1];

//creating new closure instance
void** clo87612 = alloc_clo(lam87181_fptr, 5);

//setting env list
clo87612[1] = cons;
clo87612[2] = kont86887;
clo87612[3] = filter;
clo87612[4] = op;
clo87612[5] = a8679487036;
void* f8689087037 = encode_clo(clo87612);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8689087037;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87183 = encode_clo(alloc_clo(lam87183_fptr, 0));

void* lam87185_fptr() // lam87185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87186 = arg_buffer[1];
//reading env and args
void* a8679787042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env87186))[3];
//not do dummy comment
void* filter = (decode_clo(env87186))[2];
//not do dummy comment
void* kont86887 = (decode_clo(env87186))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont86887;
arg_buffer[3] = op;
arg_buffer[4] = a8679787042;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87185 = encode_clo(alloc_clo(lam87185_fptr, 0));

void* lam87187_fptr() // lam87187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87188 = arg_buffer[1];
//reading env and args
void* a8679387034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87188))[7];
//not do dummy comment
void* lst = (decode_clo(env87188))[6];
//not do dummy comment
void* op = (decode_clo(env87188))[5];
//not do dummy comment
void* filter = (decode_clo(env87188))[4];
//not do dummy comment
void* car = (decode_clo(env87188))[3];
//not do dummy comment
void* kont86887 = (decode_clo(env87188))[2];
//not do dummy comment
void* cons = (decode_clo(env87188))[1];

//if-clause
bool if_guard87613 = is_true(a8679387034);
if(if_guard87613)
{

//creating new closure instance
void** clo87615 = alloc_clo(lam87183_fptr, 6);

//setting env list
clo87615[1] = cons;
clo87615[2] = kont86887;
clo87615[3] = filter;
clo87615[4] = op;
clo87615[5] = lst;
clo87615[6] = cdr;
void* f8689187035 = encode_clo(clo87615);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8689187035;
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
void** clo87617 = alloc_clo(lam87185_fptr, 3);

//setting env list
clo87617[1] = kont86887;
clo87617[2] = filter;
clo87617[3] = op;
void* f8689287041 = encode_clo(clo87617);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8689287041;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87187 = encode_clo(alloc_clo(lam87187_fptr, 0));

void* lam87189_fptr() // lam87189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87190 = arg_buffer[1];
//reading env and args
void* a8679287032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87190))[7];
//not do dummy comment
void* lst = (decode_clo(env87190))[6];
//not do dummy comment
void* op = (decode_clo(env87190))[5];
//not do dummy comment
void* filter = (decode_clo(env87190))[4];
//not do dummy comment
void* car = (decode_clo(env87190))[3];
//not do dummy comment
void* kont86887 = (decode_clo(env87190))[2];
//not do dummy comment
void* cons = (decode_clo(env87190))[1];

//creating new closure instance
void** clo87619 = alloc_clo(lam87187_fptr, 7);

//setting env list
clo87619[1] = cons;
clo87619[2] = kont86887;
clo87619[3] = car;
clo87619[4] = filter;
clo87619[5] = op;
clo87619[6] = lst;
clo87619[7] = cdr;
void* f8689387033 = encode_clo(clo87619);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f8689387033;
arg_buffer[3] = a8679287032;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87189 = encode_clo(alloc_clo(lam87189_fptr, 0));

void* lam87191_fptr() // lam87191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87192 = arg_buffer[1];
//reading env and args
void* a8679087028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env87192))[8];
//not do dummy comment
void* op = (decode_clo(env87192))[7];
//not do dummy comment
void* list = (decode_clo(env87192))[6];
//not do dummy comment
void* cdr = (decode_clo(env87192))[5];
//not do dummy comment
void* filter = (decode_clo(env87192))[4];
//not do dummy comment
void* car = (decode_clo(env87192))[3];
//not do dummy comment
void* kont86887 = (decode_clo(env87192))[2];
//not do dummy comment
void* cons = (decode_clo(env87192))[1];

//if-clause
bool if_guard87620 = is_true(a8679087028);
if(if_guard87620)
{

//creating new closure instance
void** clo87622 = alloc_clo(lam87177_fptr, 1);

//setting env list
clo87622[1] = kont86887;
void* f8688887029 = encode_clo(clo87622);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f8688887029;
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
void** clo87624 = alloc_clo(lam87189_fptr, 7);

//setting env list
clo87624[1] = cons;
clo87624[2] = kont86887;
clo87624[3] = car;
clo87624[4] = filter;
clo87624[5] = op;
clo87624[6] = lst;
clo87624[7] = cdr;
void* f8689487031 = encode_clo(clo87624);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8689487031;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87191 = encode_clo(alloc_clo(lam87191_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87193 = arg_buffer[1];
//reading env and args
void* kont86887 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo87626 = alloc_clo(lam87191_fptr, 8);

//setting env list
clo87626[1] = cons;
clo87626[2] = kont86887;
clo87626[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo87626[4] = filter;
clo87626[5] = cdr;
clo87626[6] = list;
clo87626[7] = op;
clo87626[8] = lst;
void* f8689587027 = encode_clo(clo87626);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8689587027;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam87194_fptr() // lam87194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87195 = arg_buffer[1];
//reading env and args
void* a8680287050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env87195))[3];
//not do dummy comment
void* kont86896 = (decode_clo(env87195))[2];
//not do dummy comment
void* a8680087047 = (decode_clo(env87195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont86896;
arg_buffer[3] = a8680087047;
arg_buffer[4] = a8680287050;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87194 = encode_clo(alloc_clo(lam87194_fptr, 0));

void* lam87197_fptr() // lam87197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87198 = arg_buffer[1];
//reading env and args
void* a8680087047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env87198))[4];
//not do dummy comment
void* kont86896 = (decode_clo(env87198))[3];
//not do dummy comment
void* n = (decode_clo(env87198))[2];
//not do dummy comment
void* _u45 = (decode_clo(env87198))[1];
mpz_t* mpzvar87627 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87627, "1", 10);
void* a8680187048 = encode_mpz(mpzvar87627);

//creating new closure instance
void** clo87629 = alloc_clo(lam87194_fptr, 3);

//setting env list
clo87629[1] = a8680087047;
clo87629[2] = kont86896;
clo87629[3] = drop;
void* f8689787049 = encode_clo(clo87629);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f8689787049;
arg_buffer[3] = n;
arg_buffer[4] = a8680187048;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87197 = encode_clo(alloc_clo(lam87197_fptr, 0));

void* lam87199_fptr() // lam87199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87200 = arg_buffer[1];
//reading env and args
void* a8679987045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87200))[6];
//not do dummy comment
void* kont86896 = (decode_clo(env87200))[5];
//not do dummy comment
void* n = (decode_clo(env87200))[4];
//not do dummy comment
void* _u45 = (decode_clo(env87200))[3];
//not do dummy comment
void* lst = (decode_clo(env87200))[2];
//not do dummy comment
void* drop = (decode_clo(env87200))[1];

//if-clause
bool if_guard87630 = is_true(a8679987045);
if(if_guard87630)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86896);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86896))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo87632 = alloc_clo(lam87197_fptr, 4);

//setting env list
clo87632[1] = _u45;
clo87632[2] = n;
clo87632[3] = kont86896;
clo87632[4] = drop;
void* f8689887046 = encode_clo(clo87632);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8689887046;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87199 = encode_clo(alloc_clo(lam87199_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87202 = arg_buffer[1];
//reading env and args
void* kont86896 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar87633 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87633, "0", 10);
void* a8679887043 = encode_mpz(mpzvar87633);

//creating new closure instance
void** clo87635 = alloc_clo(lam87199_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo87635[1] = drop;
clo87635[2] = lst;
clo87635[3] = _u45;
clo87635[4] = n;
clo87635[5] = kont86896;
clo87635[6] = cdr;
void* f8689987044 = encode_clo(clo87635);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f8689987044;
arg_buffer[3] = n;
arg_buffer[4] = a8679887043;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam87203_fptr() // lam87203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87204 = arg_buffer[1];
//reading env and args
void* a8680687058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a8680487054 = (decode_clo(env87204))[3];
//not do dummy comment
void* proc = (decode_clo(env87204))[2];
//not do dummy comment
void* kont86900 = (decode_clo(env87204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont86900;
arg_buffer[3] = a8680487054;
arg_buffer[4] = a8680687058;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87203 = encode_clo(alloc_clo(lam87203_fptr, 0));

void* lam87205_fptr() // lam87205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87206 = arg_buffer[1];
//reading env and args
void* a8680587056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env87206))[5];
//not do dummy comment
void* a8680487054 = (decode_clo(env87206))[4];
//not do dummy comment
void* proc = (decode_clo(env87206))[3];
//not do dummy comment
void* kont86900 = (decode_clo(env87206))[2];
//not do dummy comment
void* acc = (decode_clo(env87206))[1];

//creating new closure instance
void** clo87637 = alloc_clo(lam87203_fptr, 3);

//setting env list
clo87637[1] = kont86900;
clo87637[2] = proc;
clo87637[3] = a8680487054;
void* f8690187057 = encode_clo(clo87637);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f8690187057;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a8680587056;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87205 = encode_clo(alloc_clo(lam87205_fptr, 0));

void* lam87207_fptr() // lam87207 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87208 = arg_buffer[1];
//reading env and args
void* a8680487054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87208))[6];
//not do dummy comment
void* foldr = (decode_clo(env87208))[5];
//not do dummy comment
void* lst = (decode_clo(env87208))[4];
//not do dummy comment
void* proc = (decode_clo(env87208))[3];
//not do dummy comment
void* kont86900 = (decode_clo(env87208))[2];
//not do dummy comment
void* acc = (decode_clo(env87208))[1];

//creating new closure instance
void** clo87639 = alloc_clo(lam87205_fptr, 5);

//setting env list
clo87639[1] = acc;
clo87639[2] = kont86900;
clo87639[3] = proc;
clo87639[4] = a8680487054;
clo87639[5] = foldr;
void* f8690287055 = encode_clo(clo87639);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8690287055;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87207 = encode_clo(alloc_clo(lam87207_fptr, 0));

void* lam87209_fptr() // lam87209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87210 = arg_buffer[1];
//reading env and args
void* a8680387052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env87210))[7];
//not do dummy comment
void* car = (decode_clo(env87210))[6];
//not do dummy comment
void* foldr = (decode_clo(env87210))[5];
//not do dummy comment
void* lst = (decode_clo(env87210))[4];
//not do dummy comment
void* proc = (decode_clo(env87210))[3];
//not do dummy comment
void* kont86900 = (decode_clo(env87210))[2];
//not do dummy comment
void* acc = (decode_clo(env87210))[1];

//if-clause
bool if_guard87640 = is_true(a8680387052);
if(if_guard87640)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86900);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86900))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo87642 = alloc_clo(lam87207_fptr, 6);

//setting env list
clo87642[1] = acc;
clo87642[2] = kont86900;
clo87642[3] = proc;
clo87642[4] = lst;
clo87642[5] = foldr;
clo87642[6] = cdr;
void* f8690387053 = encode_clo(clo87642);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8690387053;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87209 = encode_clo(alloc_clo(lam87209_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87211 = arg_buffer[1];
//reading env and args
void* kont86900 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo87644 = alloc_clo(lam87209_fptr, 7);

//setting env list
clo87644[1] = acc;
clo87644[2] = kont86900;
clo87644[3] = proc;
clo87644[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo87644[5] = foldr;
clo87644[6] = car;
clo87644[7] = cdr;
void* f8690487051 = encode_clo(clo87644);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8690487051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam87212_fptr() // lam87212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87213 = arg_buffer[1];
//reading env and args
void* a8681087066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86905 = (decode_clo(env87213))[3];
//not do dummy comment
void* a8680887062 = (decode_clo(env87213))[2];
//not do dummy comment
void* cons = (decode_clo(env87213))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont86905;
arg_buffer[3] = a8680887062;
arg_buffer[4] = a8681087066;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87212 = encode_clo(alloc_clo(lam87212_fptr, 0));

void* lam87214_fptr() // lam87214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87215 = arg_buffer[1];
//reading env and args
void* a8680987064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86905 = (decode_clo(env87215))[5];
//not do dummy comment
void* append = (decode_clo(env87215))[4];
//not do dummy comment
void* lst2 = (decode_clo(env87215))[3];
//not do dummy comment
void* a8680887062 = (decode_clo(env87215))[2];
//not do dummy comment
void* cons = (decode_clo(env87215))[1];

//creating new closure instance
void** clo87646 = alloc_clo(lam87212_fptr, 3);

//setting env list
clo87646[1] = cons;
clo87646[2] = a8680887062;
clo87646[3] = kont86905;
void* f8690687065 = encode_clo(clo87646);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f8690687065;
arg_buffer[3] = a8680987064;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87214 = encode_clo(alloc_clo(lam87214_fptr, 0));

void* lam87216_fptr() // lam87216 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87217 = arg_buffer[1];
//reading env and args
void* a8680887062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env87217))[6];
//not do dummy comment
void* lst2 = (decode_clo(env87217))[5];
//not do dummy comment
void* lst1 = (decode_clo(env87217))[4];
//not do dummy comment
void* cons = (decode_clo(env87217))[3];
//not do dummy comment
void* kont86905 = (decode_clo(env87217))[2];
//not do dummy comment
void* cdr = (decode_clo(env87217))[1];

//creating new closure instance
void** clo87648 = alloc_clo(lam87214_fptr, 5);

//setting env list
clo87648[1] = cons;
clo87648[2] = a8680887062;
clo87648[3] = lst2;
clo87648[4] = append;
clo87648[5] = kont86905;
void* f8690787063 = encode_clo(clo87648);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f8690787063;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87216 = encode_clo(alloc_clo(lam87216_fptr, 0));

void* lam87218_fptr() // lam87218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87219 = arg_buffer[1];
//reading env and args
void* a8680787060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env87219))[7];
//not do dummy comment
void* lst2 = (decode_clo(env87219))[6];
//not do dummy comment
void* cons = (decode_clo(env87219))[5];
//not do dummy comment
void* kont86905 = (decode_clo(env87219))[4];
//not do dummy comment
void* cdr = (decode_clo(env87219))[3];
//not do dummy comment
void* lst1 = (decode_clo(env87219))[2];
//not do dummy comment
void* car = (decode_clo(env87219))[1];

//if-clause
bool if_guard87649 = is_true(a8680787060);
if(if_guard87649)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86905);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86905))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo87651 = alloc_clo(lam87216_fptr, 6);

//setting env list
clo87651[1] = cdr;
clo87651[2] = kont86905;
clo87651[3] = cons;
clo87651[4] = lst1;
clo87651[5] = lst2;
clo87651[6] = append;
void* f8690887061 = encode_clo(clo87651);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f8690887061;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam87218 = encode_clo(alloc_clo(lam87218_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87220 = arg_buffer[1];
//reading env and args
void* kont86905 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo87653 = alloc_clo(lam87218_fptr, 7);

//setting env list
clo87653[1] = car;
clo87653[2] = lst1;
clo87653[3] = cdr;
clo87653[4] = kont86905;
clo87653[5] = cons;
clo87653[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo87653[7] = append;
void* f8690987059 = encode_clo(clo87653);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f8690987059;
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
void* _87221 = arg_buffer[1];
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

void* kont8691087067 = prim_car(lst);
void* lst87068 = prim_cdr(lst);
void* x8681187069 = apply_prim_hash(lst87068);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont8691087067);
arg_buffer[2] = x8681187069;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont8691087067))[0]);
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
void* _87222 = arg_buffer[1];
//reading env and args
void* kont86912 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8681287070 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86912);
arg_buffer[2] = x8681287070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86912))[0]);
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
void* _87223 = arg_buffer[1];
//reading env and args
void* kont86913 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x8681387071 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86913);
arg_buffer[2] = x8681387071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86913))[0]);
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
void* _87224 = arg_buffer[1];
//reading env and args
void* kont86914 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x8681487072 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86914);
arg_buffer[2] = x8681487072;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86914))[0]);
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
void* _87225 = arg_buffer[1];
//reading env and args
void* kont86915 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x8681587073 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86915);
arg_buffer[2] = x8681587073;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86915))[0]);
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
void* _87228 = arg_buffer[1];
//reading env and args
void* kont86916 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar87654 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87654, "28", 10);
void* a8681687074 = encode_mpz(mpzvar87654);
mpz_t* mpzvar87655 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar87655, "8", 10);
void* a8681787075 = encode_mpz(mpzvar87655);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = kont86916;
arg_buffer[3] = a8681687074;
arg_buffer[4] = a8681787075;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam87229_fptr() // lam87229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env87230 = arg_buffer[1];
//reading env and args
void* x8681887077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont86917 = (decode_clo(env87230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont86917);
arg_buffer[2] = x8681887077;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont86917))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam87229 = encode_clo(alloc_clo(lam87229_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _87231 = arg_buffer[1];
//reading env and args
void* kont86917 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo87657 = alloc_clo(lam87229_fptr, 1);

//setting env list
clo87657[1] = kont86917;
void* f8691887076 = encode_clo(clo87657);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f8691887076;
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

