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
void* _28066 = arg_buffer[1];
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

void* kont2780627906 = prim_car(lst);
void* lst27907 = prim_cdr(lst);
void* x2771927908 = apply_prim__u43(lst27907);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2780627906);
arg_buffer[2] = x2771927908;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2780627906))[0]);
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
void* _28067 = arg_buffer[1];
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

void* kont2780827909 = prim_car(lst);
void* lst27910 = prim_cdr(lst);
void* x2772027911 = apply_prim__u45(lst27910);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2780827909);
arg_buffer[2] = x2772027911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2780827909))[0]);
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
void* _28068 = arg_buffer[1];
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

void* kont2781027912 = prim_car(lst);
void* lst27913 = prim_cdr(lst);
void* x2772127914 = apply_prim__u42(lst27913);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2781027912);
arg_buffer[2] = x2772127914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2781027912))[0]);
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
void* _28069 = arg_buffer[1];
//reading env and args
void* kont27812 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2772227915 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27812);
arg_buffer[2] = x2772227915;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27812))[0]);
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
void* _28070 = arg_buffer[1];
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

void* kont2781327916 = prim_car(lst);
void* lst27917 = prim_cdr(lst);
void* x2772327918 = apply_prim__u47(lst27917);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2781327916);
arg_buffer[2] = x2772327918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2781327916))[0]);
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
void* _28071 = arg_buffer[1];
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

void* kont2781527919 = prim_car(lst);
void* lst27920 = prim_cdr(lst);
void* x2772427921 = apply_prim__u61(lst27920);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2781527919);
arg_buffer[2] = x2772427921;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2781527919))[0]);
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
void* _28072 = arg_buffer[1];
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

void* kont2781727922 = prim_car(lst);
void* lst27923 = prim_cdr(lst);
void* x2772527924 = apply_prim__u62(lst27923);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2781727922);
arg_buffer[2] = x2772527924;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2781727922))[0]);
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
void* _28073 = arg_buffer[1];
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

void* kont2781927925 = prim_car(lst);
void* lst27926 = prim_cdr(lst);
void* x2772627927 = apply_prim__u60(lst27926);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2781927925);
arg_buffer[2] = x2772627927;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2781927925))[0]);
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
void* _28074 = arg_buffer[1];
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

void* kont2782127928 = prim_car(lst);
void* lst27929 = prim_cdr(lst);
void* x2772727930 = apply_prim__u60_u61(lst27929);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2782127928);
arg_buffer[2] = x2772727930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2782127928))[0]);
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
void* _28075 = arg_buffer[1];
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

void* kont2782327931 = prim_car(lst);
void* lst27932 = prim_cdr(lst);
void* x2772827933 = apply_prim__u62_u61(lst27932);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2782327931);
arg_buffer[2] = x2772827933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2782327931))[0]);
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
void* _28076 = arg_buffer[1];
//reading env and args
void* kont27825 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x2772927934 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27825);
arg_buffer[2] = x2772927934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27825))[0]);
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
void* _28077 = arg_buffer[1];
//reading env and args
void* kont27826 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2773027935 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27826);
arg_buffer[2] = x2773027935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27826))[0]);
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
void* _28078 = arg_buffer[1];
//reading env and args
void* kont27827 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x2773127936 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27827);
arg_buffer[2] = x2773127936;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27827))[0]);
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
void* _28079 = arg_buffer[1];
//reading env and args
void* kont27828 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x2773227937 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27828);
arg_buffer[2] = x2773227937;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27828))[0]);
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
void* _28080 = arg_buffer[1];
//reading env and args
void* kont27829 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2773327938 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27829);
arg_buffer[2] = x2773327938;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27829))[0]);
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
void* _28081 = arg_buffer[1];
//reading env and args
void* kont27830 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x2773427939 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27830);
arg_buffer[2] = x2773427939;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27830))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam28082_fptr() // lam28082 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28083 = arg_buffer[1];
//reading env and args
void* a2773727943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2773527940 = (decode_clo(env28083))[3];
//not do dummy comment
void* kont27831 = (decode_clo(env28083))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env28083))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont27831;
arg_buffer[3] = a2773527940;
arg_buffer[4] = a2773727943;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28082 = encode_clo(alloc_clo(lam28082_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28086 = arg_buffer[1];
//reading env and args
void* kont27831 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28725 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28725, "0", 10);
void* a2773527940 = encode_mpz(mpzvar28725);
mpz_t* mpzvar28726 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28726, "2", 10);
void* a2773627941 = encode_mpz(mpzvar28726);

//creating new closure instance
void** clo28728 = alloc_clo(lam28082_fptr, 3);

//setting env list
clo28728[1] = equal_u63;
clo28728[2] = kont27831;
clo28728[3] = a2773527940;
void* f2783227942 = encode_clo(clo28728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2783227942;
arg_buffer[3] = x;
arg_buffer[4] = a2773627941;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam28087_fptr() // lam28087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28088 = arg_buffer[1];
//reading env and args
void* a2774027947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2773827944 = (decode_clo(env28088))[3];
//not do dummy comment
void* kont27833 = (decode_clo(env28088))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env28088))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont27833;
arg_buffer[3] = a2773827944;
arg_buffer[4] = a2774027947;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28087 = encode_clo(alloc_clo(lam28087_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28091 = arg_buffer[1];
//reading env and args
void* kont27833 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar28729 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28729, "1", 10);
void* a2773827944 = encode_mpz(mpzvar28729);
mpz_t* mpzvar28730 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28730, "2", 10);
void* a2773927945 = encode_mpz(mpzvar28730);

//creating new closure instance
void** clo28732 = alloc_clo(lam28087_fptr, 3);

//setting env list
clo28732[1] = equal_u63;
clo28732[2] = kont27833;
clo28732[3] = a2773827944;
void* f2783427946 = encode_clo(clo28732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f2783427946;
arg_buffer[3] = x;
arg_buffer[4] = a2773927945;
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
void* _28092 = arg_buffer[1];
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

void* kont2783527948 = prim_car(x);
void* x27949 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2783527948);
arg_buffer[2] = x27949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2783527948))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam28095_fptr() // lam28095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28096 = arg_buffer[1];
//reading env and args
void* a2774627959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env28096))[3];
//not do dummy comment
void* kont27837 = (decode_clo(env28096))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28096))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont27837;
arg_buffer[3] = x;
arg_buffer[4] = a2774627959;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28095 = encode_clo(alloc_clo(lam28095_fptr, 0));

void* lam28097_fptr() // lam28097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28098 = arg_buffer[1];
//reading env and args
void* a2774427956 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28098))[5];
//not do dummy comment
void* lst = (decode_clo(env28098))[4];
//not do dummy comment
void* x = (decode_clo(env28098))[3];
//not do dummy comment
void* kont27837 = (decode_clo(env28098))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28098))[1];

//if-clause
bool if_guard28733 = is_true(a2774427956);
if(if_guard28733)
{
void* x2774527957 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27837);
arg_buffer[2] = x2774527957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27837))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28735 = alloc_clo(lam28095_fptr, 3);

//setting env list
clo28735[1] = member_u63;
clo28735[2] = kont27837;
clo28735[3] = x;
void* f2783827958 = encode_clo(clo28735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2783827958;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28097 = encode_clo(alloc_clo(lam28097_fptr, 0));

void* lam28099_fptr() // lam28099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28100 = arg_buffer[1];
//reading env and args
void* a2774327954 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28100))[6];
//not do dummy comment
void* lst = (decode_clo(env28100))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env28100))[4];
//not do dummy comment
void* x = (decode_clo(env28100))[3];
//not do dummy comment
void* kont27837 = (decode_clo(env28100))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28100))[1];

//creating new closure instance
void** clo28737 = alloc_clo(lam28097_fptr, 5);

//setting env list
clo28737[1] = member_u63;
clo28737[2] = kont27837;
clo28737[3] = x;
clo28737[4] = lst;
clo28737[5] = cdr;
void* f2783927955 = encode_clo(clo28737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f2783927955;
arg_buffer[3] = a2774327954;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28099 = encode_clo(alloc_clo(lam28099_fptr, 0));

void* lam28101_fptr() // lam28101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28102 = arg_buffer[1];
//reading env and args
void* a2774127951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28102))[7];
//not do dummy comment
void* lst = (decode_clo(env28102))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env28102))[5];
//not do dummy comment
void* x = (decode_clo(env28102))[4];
//not do dummy comment
void* kont27837 = (decode_clo(env28102))[3];
//not do dummy comment
void* car = (decode_clo(env28102))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env28102))[1];

//if-clause
bool if_guard28738 = is_true(a2774127951);
if(if_guard28738)
{
void* x2774227952 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27837);
arg_buffer[2] = x2774227952;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27837))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28740 = alloc_clo(lam28099_fptr, 6);

//setting env list
clo28740[1] = member_u63;
clo28740[2] = kont27837;
clo28740[3] = x;
clo28740[4] = equal_u63;
clo28740[5] = lst;
clo28740[6] = cdr;
void* f2784027953 = encode_clo(clo28740);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2784027953;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28101 = encode_clo(alloc_clo(lam28101_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28103 = arg_buffer[1];
//reading env and args
void* kont27837 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28742 = alloc_clo(lam28101_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo28742[1] = member_u63;
clo28742[2] = car;
clo28742[3] = kont27837;
clo28742[4] = x;
clo28742[5] = equal_u63;
clo28742[6] = lst;
clo28742[7] = cdr;
void* f2784127950 = encode_clo(clo28742);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2784127950;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam28104_fptr() // lam28104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28105 = arg_buffer[1];
//reading env and args
void* a2775027967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27842 = (decode_clo(env28105))[4];
//not do dummy comment
void* fun = (decode_clo(env28105))[3];
//not do dummy comment
void* a2774927965 = (decode_clo(env28105))[2];
//not do dummy comment
void* foldl = (decode_clo(env28105))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont27842;
arg_buffer[3] = fun;
arg_buffer[4] = a2774927965;
arg_buffer[5] = a2775027967;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28104 = encode_clo(alloc_clo(lam28104_fptr, 0));

void* lam28106_fptr() // lam28106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28107 = arg_buffer[1];
//reading env and args
void* a2774927965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28107))[5];
//not do dummy comment
void* kont27842 = (decode_clo(env28107))[4];
//not do dummy comment
void* lst = (decode_clo(env28107))[3];
//not do dummy comment
void* fun = (decode_clo(env28107))[2];
//not do dummy comment
void* foldl = (decode_clo(env28107))[1];

//creating new closure instance
void** clo28744 = alloc_clo(lam28104_fptr, 4);

//setting env list
clo28744[1] = foldl;
clo28744[2] = a2774927965;
clo28744[3] = fun;
clo28744[4] = kont27842;
void* f2784327966 = encode_clo(clo28744);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2784327966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28106 = encode_clo(alloc_clo(lam28106_fptr, 0));

void* lam28108_fptr() // lam28108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28109 = arg_buffer[1];
//reading env and args
void* a2774827963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28109))[6];
//not do dummy comment
void* kont27842 = (decode_clo(env28109))[5];
//not do dummy comment
void* lst = (decode_clo(env28109))[4];
//not do dummy comment
void* fun = (decode_clo(env28109))[3];
//not do dummy comment
void* acc = (decode_clo(env28109))[2];
//not do dummy comment
void* foldl = (decode_clo(env28109))[1];

//creating new closure instance
void** clo28746 = alloc_clo(lam28106_fptr, 5);

//setting env list
clo28746[1] = foldl;
clo28746[2] = fun;
clo28746[3] = lst;
clo28746[4] = kont27842;
clo28746[5] = cdr;
void* f2784427964 = encode_clo(clo28746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f2784427964;
arg_buffer[3] = a2774827963;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28108 = encode_clo(alloc_clo(lam28108_fptr, 0));

void* lam28110_fptr() // lam28110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28111 = arg_buffer[1];
//reading env and args
void* a2774727961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28111))[7];
//not do dummy comment
void* kont27842 = (decode_clo(env28111))[6];
//not do dummy comment
void* lst = (decode_clo(env28111))[5];
//not do dummy comment
void* fun = (decode_clo(env28111))[4];
//not do dummy comment
void* acc = (decode_clo(env28111))[3];
//not do dummy comment
void* car = (decode_clo(env28111))[2];
//not do dummy comment
void* foldl = (decode_clo(env28111))[1];

//if-clause
bool if_guard28747 = is_true(a2774727961);
if(if_guard28747)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27842);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27842))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28749 = alloc_clo(lam28108_fptr, 6);

//setting env list
clo28749[1] = foldl;
clo28749[2] = acc;
clo28749[3] = fun;
clo28749[4] = lst;
clo28749[5] = kont27842;
clo28749[6] = cdr;
void* f2784527962 = encode_clo(clo28749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2784527962;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28110 = encode_clo(alloc_clo(lam28110_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28112 = arg_buffer[1];
//reading env and args
void* kont27842 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28751 = alloc_clo(lam28110_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo28751[1] = foldl;
clo28751[2] = car;
clo28751[3] = acc;
clo28751[4] = fun;
clo28751[5] = lst;
clo28751[6] = kont27842;
clo28751[7] = cdr;
void* f2784627960 = encode_clo(clo28751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2784627960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam28113_fptr() // lam28113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28114 = arg_buffer[1];
//reading env and args
void* a2775427975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2775227971 = (decode_clo(env28114))[3];
//not do dummy comment
void* kont27847 = (decode_clo(env28114))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28114))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont27847;
arg_buffer[3] = a2775227971;
arg_buffer[4] = a2775427975;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28113 = encode_clo(alloc_clo(lam28113_fptr, 0));

void* lam28115_fptr() // lam28115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28116 = arg_buffer[1];
//reading env and args
void* a2775327973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2775227971 = (decode_clo(env28116))[5];
//not do dummy comment
void* kont27847 = (decode_clo(env28116))[4];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28116))[3];
//not do dummy comment
void* lst2 = (decode_clo(env28116))[2];
//not do dummy comment
void* cons = (decode_clo(env28116))[1];

//creating new closure instance
void** clo28753 = alloc_clo(lam28113_fptr, 3);

//setting env list
clo28753[1] = reverse_u45helper;
clo28753[2] = kont27847;
clo28753[3] = a2775227971;
void* f2784827974 = encode_clo(clo28753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2784827974;
arg_buffer[3] = a2775327973;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28115 = encode_clo(alloc_clo(lam28115_fptr, 0));

void* lam28117_fptr() // lam28117 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28118 = arg_buffer[1];
//reading env and args
void* a2775227971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28118))[6];
//not do dummy comment
void* kont27847 = (decode_clo(env28118))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28118))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28118))[3];
//not do dummy comment
void* car = (decode_clo(env28118))[2];
//not do dummy comment
void* cons = (decode_clo(env28118))[1];

//creating new closure instance
void** clo28755 = alloc_clo(lam28115_fptr, 5);

//setting env list
clo28755[1] = cons;
clo28755[2] = lst2;
clo28755[3] = reverse_u45helper;
clo28755[4] = kont27847;
clo28755[5] = a2775227971;
void* f2784927972 = encode_clo(clo28755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2784927972;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28117 = encode_clo(alloc_clo(lam28117_fptr, 0));

void* lam28119_fptr() // lam28119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28120 = arg_buffer[1];
//reading env and args
void* a2775127969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28120))[7];
//not do dummy comment
void* lst = (decode_clo(env28120))[6];
//not do dummy comment
void* kont27847 = (decode_clo(env28120))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28120))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28120))[3];
//not do dummy comment
void* car = (decode_clo(env28120))[2];
//not do dummy comment
void* cons = (decode_clo(env28120))[1];

//if-clause
bool if_guard28756 = is_true(a2775127969);
if(if_guard28756)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27847);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28758 = alloc_clo(lam28117_fptr, 6);

//setting env list
clo28758[1] = cons;
clo28758[2] = car;
clo28758[3] = lst2;
clo28758[4] = reverse_u45helper;
clo28758[5] = kont27847;
clo28758[6] = lst;
void* f2785027970 = encode_clo(clo28758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2785027970;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28119 = encode_clo(alloc_clo(lam28119_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28121 = arg_buffer[1];
//reading env and args
void* kont27847 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28760 = alloc_clo(lam28119_fptr, 7);

//setting env list
clo28760[1] = cons;
clo28760[2] = car;
clo28760[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo28760[4] = reverse_u45helper;
clo28760[5] = kont27847;
clo28760[6] = lst;
clo28760[7] = cdr;
void* f2785127968 = encode_clo(clo28760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2785127968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam28122_fptr() // lam28122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28123 = arg_buffer[1];
//reading env and args
void* a2775527977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28123))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env28123))[2];
//not do dummy comment
void* kont27852 = (decode_clo(env28123))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont27852;
arg_buffer[3] = lst;
arg_buffer[4] = a2775527977;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28122 = encode_clo(alloc_clo(lam28122_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28124 = arg_buffer[1];
//reading env and args
void* kont27852 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28762 = alloc_clo(lam28122_fptr, 3);

//setting env list
clo28762[1] = kont27852;
clo28762[2] = reverse_u45helper;
clo28762[3] = lst;
void* f2785327976 = encode_clo(clo28762);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2785327976;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam28125_fptr() // lam28125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28126 = arg_buffer[1];
//reading env and args
void* x2775827982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27854 = (decode_clo(env28126))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27854);
arg_buffer[2] = x2775827982;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27854))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28125 = encode_clo(alloc_clo(lam28125_fptr, 0));

void* lam28127_fptr() // lam28127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28128 = arg_buffer[1];
//reading env and args
void* a2776327991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2776127987 = (decode_clo(env28128))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env28128))[3];
//not do dummy comment
void* kont27854 = (decode_clo(env28128))[2];
//not do dummy comment
void* a2775927984 = (decode_clo(env28128))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont27854;
arg_buffer[3] = a2775927984;
arg_buffer[4] = a2776127987;
arg_buffer[5] = a2776327991;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28127 = encode_clo(alloc_clo(lam28127_fptr, 0));

void* lam28129_fptr() // lam28129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28130 = arg_buffer[1];
//reading env and args
void* a2776227989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2776127987 = (decode_clo(env28130))[6];
//not do dummy comment
void* kont27854 = (decode_clo(env28130))[5];
//not do dummy comment
void* cons = (decode_clo(env28130))[4];
//not do dummy comment
void* a2775927984 = (decode_clo(env28130))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env28130))[2];
//not do dummy comment
void* lst2 = (decode_clo(env28130))[1];

//creating new closure instance
void** clo28764 = alloc_clo(lam28127_fptr, 4);

//setting env list
clo28764[1] = a2775927984;
clo28764[2] = kont27854;
clo28764[3] = take_u45helper;
clo28764[4] = a2776127987;
void* f2785627990 = encode_clo(clo28764);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f2785627990;
arg_buffer[3] = a2776227989;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28129 = encode_clo(alloc_clo(lam28129_fptr, 0));

void* lam28131_fptr() // lam28131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28132 = arg_buffer[1];
//reading env and args
void* a2776127987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28132))[7];
//not do dummy comment
void* cons = (decode_clo(env28132))[6];
//not do dummy comment
void* a2775927984 = (decode_clo(env28132))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env28132))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28132))[3];
//not do dummy comment
void* kont27854 = (decode_clo(env28132))[2];
//not do dummy comment
void* car = (decode_clo(env28132))[1];

//creating new closure instance
void** clo28766 = alloc_clo(lam28129_fptr, 6);

//setting env list
clo28766[1] = lst2;
clo28766[2] = take_u45helper;
clo28766[3] = a2775927984;
clo28766[4] = cons;
clo28766[5] = kont27854;
clo28766[6] = a2776127987;
void* f2785727988 = encode_clo(clo28766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2785727988;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28131 = encode_clo(alloc_clo(lam28131_fptr, 0));

void* lam28134_fptr() // lam28134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28135 = arg_buffer[1];
//reading env and args
void* a2775927984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28135))[8];
//not do dummy comment
void* cons = (decode_clo(env28135))[7];
//not do dummy comment
void* _u45 = (decode_clo(env28135))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env28135))[5];
//not do dummy comment
void* lst2 = (decode_clo(env28135))[4];
//not do dummy comment
void* car = (decode_clo(env28135))[3];
//not do dummy comment
void* n = (decode_clo(env28135))[2];
//not do dummy comment
void* kont27854 = (decode_clo(env28135))[1];
mpz_t* mpzvar28767 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28767, "1", 10);
void* a2776027985 = encode_mpz(mpzvar28767);

//creating new closure instance
void** clo28769 = alloc_clo(lam28131_fptr, 7);

//setting env list
clo28769[1] = car;
clo28769[2] = kont27854;
clo28769[3] = lst2;
clo28769[4] = take_u45helper;
clo28769[5] = a2775927984;
clo28769[6] = cons;
clo28769[7] = lst;
void* f2785827986 = encode_clo(clo28769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2785827986;
arg_buffer[3] = n;
arg_buffer[4] = a2776027985;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28134 = encode_clo(alloc_clo(lam28134_fptr, 0));

void* lam28136_fptr() // lam28136 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28137 = arg_buffer[1];
//reading env and args
void* a2775727980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28137))[10];
//not do dummy comment
void* lst = (decode_clo(env28137))[9];
//not do dummy comment
void* reverse = (decode_clo(env28137))[8];
//not do dummy comment
void* cons = (decode_clo(env28137))[7];
//not do dummy comment
void* _u45 = (decode_clo(env28137))[6];
//not do dummy comment
void* take_u45helper = (decode_clo(env28137))[5];
//not do dummy comment
void* lst2 = (decode_clo(env28137))[4];
//not do dummy comment
void* car = (decode_clo(env28137))[3];
//not do dummy comment
void* n = (decode_clo(env28137))[2];
//not do dummy comment
void* kont27854 = (decode_clo(env28137))[1];

//if-clause
bool if_guard28770 = is_true(a2775727980);
if(if_guard28770)
{

//creating new closure instance
void** clo28772 = alloc_clo(lam28125_fptr, 1);

//setting env list
clo28772[1] = kont27854;
void* f2785527981 = encode_clo(clo28772);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f2785527981;
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
void** clo28774 = alloc_clo(lam28134_fptr, 8);

//setting env list
clo28774[1] = kont27854;
clo28774[2] = n;
clo28774[3] = car;
clo28774[4] = lst2;
clo28774[5] = take_u45helper;
clo28774[6] = _u45;
clo28774[7] = cons;
clo28774[8] = lst;
void* f2785927983 = encode_clo(clo28774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2785927983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28136 = encode_clo(alloc_clo(lam28136_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28139 = arg_buffer[1];
//reading env and args
void* kont27854 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar28775 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28775, "0", 10);
void* a2775627978 = encode_mpz(mpzvar28775);

//creating new closure instance
void** clo28777 = alloc_clo(lam28136_fptr, 10);

//setting env list
clo28777[1] = kont27854;
clo28777[2] = n;
clo28777[3] = car;
clo28777[4] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo28777[5] = take_u45helper;
clo28777[6] = _u45;
clo28777[7] = cons;
clo28777[8] = reverse;
clo28777[9] = lst;
clo28777[10] = cdr;
void* f2786027979 = encode_clo(clo28777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2786027979;
arg_buffer[3] = n;
arg_buffer[4] = a2775627978;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam28140_fptr() // lam28140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28141 = arg_buffer[1];
//reading env and args
void* a2776427993 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* take_u45helper = (decode_clo(env28141))[4];
//not do dummy comment
void* n = (decode_clo(env28141))[3];
//not do dummy comment
void* lst = (decode_clo(env28141))[2];
//not do dummy comment
void* kont27861 = (decode_clo(env28141))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont27861;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a2776427993;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28140 = encode_clo(alloc_clo(lam28140_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28142 = arg_buffer[1];
//reading env and args
void* kont27861 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28779 = alloc_clo(lam28140_fptr, 4);

//setting env list
clo28779[1] = kont27861;
clo28779[2] = lst;
clo28779[3] = n;
clo28779[4] = take_u45helper;
void* f2786227992 = encode_clo(clo28779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2786227992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam28144_fptr() // lam28144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28145 = arg_buffer[1];
//reading env and args
void* a2776928001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27863 = (decode_clo(env28145))[3];
//not do dummy comment
void* _u43 = (decode_clo(env28145))[2];
//not do dummy comment
void* a2776727997 = (decode_clo(env28145))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont27863;
arg_buffer[3] = a2776727997;
arg_buffer[4] = a2776928001;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28144 = encode_clo(alloc_clo(lam28144_fptr, 0));

void* lam28146_fptr() // lam28146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28147 = arg_buffer[1];
//reading env and args
void* a2776827999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env28147))[4];
//not do dummy comment
void* kont27863 = (decode_clo(env28147))[3];
//not do dummy comment
void* _u43 = (decode_clo(env28147))[2];
//not do dummy comment
void* a2776727997 = (decode_clo(env28147))[1];

//creating new closure instance
void** clo28781 = alloc_clo(lam28144_fptr, 3);

//setting env list
clo28781[1] = a2776727997;
clo28781[2] = _u43;
clo28781[3] = kont27863;
void* f2786428000 = encode_clo(clo28781);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f2786428000;
arg_buffer[3] = a2776827999;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28146 = encode_clo(alloc_clo(lam28146_fptr, 0));

void* lam28149_fptr() // lam28149 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28150 = arg_buffer[1];
//reading env and args
void* a2776527995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28150))[5];
//not do dummy comment
void* lst = (decode_clo(env28150))[4];
//not do dummy comment
void* length = (decode_clo(env28150))[3];
//not do dummy comment
void* kont27863 = (decode_clo(env28150))[2];
//not do dummy comment
void* _u43 = (decode_clo(env28150))[1];

//if-clause
bool if_guard28782 = is_true(a2776527995);
if(if_guard28782)
{
mpz_t* mpzvar28783 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28783, "0", 10);
void* x2776627996 = encode_mpz(mpzvar28783);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27863);
arg_buffer[2] = x2776627996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar28784 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28784, "1", 10);
void* a2776727997 = encode_mpz(mpzvar28784);

//creating new closure instance
void** clo28786 = alloc_clo(lam28146_fptr, 4);

//setting env list
clo28786[1] = a2776727997;
clo28786[2] = _u43;
clo28786[3] = kont27863;
clo28786[4] = length;
void* f2786527998 = encode_clo(clo28786);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2786527998;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28149 = encode_clo(alloc_clo(lam28149_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28151 = arg_buffer[1];
//reading env and args
void* kont27863 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo28788 = alloc_clo(lam28149_fptr, 5);

//setting env list
clo28788[1] = _u43;
clo28788[2] = kont27863;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo28788[3] = length;
clo28788[4] = lst;
clo28788[5] = cdr;
void* f2786627994 = encode_clo(clo28788);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2786627994;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam28152_fptr() // lam28152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28153 = arg_buffer[1];
//reading env and args
void* x2777128005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27867 = (decode_clo(env28153))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27867);
arg_buffer[2] = x2777128005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27867))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28152 = encode_clo(alloc_clo(lam28152_fptr, 0));

void* lam28154_fptr() // lam28154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28155 = arg_buffer[1];
//reading env and args
void* a2777528013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2777328009 = (decode_clo(env28155))[3];
//not do dummy comment
void* kont27867 = (decode_clo(env28155))[2];
//not do dummy comment
void* cons = (decode_clo(env28155))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont27867;
arg_buffer[3] = a2777328009;
arg_buffer[4] = a2777528013;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28154 = encode_clo(alloc_clo(lam28154_fptr, 0));

void* lam28156_fptr() // lam28156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28157 = arg_buffer[1];
//reading env and args
void* a2777428011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env28157))[5];
//not do dummy comment
void* a2777328009 = (decode_clo(env28157))[4];
//not do dummy comment
void* kont27867 = (decode_clo(env28157))[3];
//not do dummy comment
void* proc = (decode_clo(env28157))[2];
//not do dummy comment
void* cons = (decode_clo(env28157))[1];

//creating new closure instance
void** clo28790 = alloc_clo(lam28154_fptr, 3);

//setting env list
clo28790[1] = cons;
clo28790[2] = kont27867;
clo28790[3] = a2777328009;
void* f2786928012 = encode_clo(clo28790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f2786928012;
arg_buffer[3] = proc;
arg_buffer[4] = a2777428011;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28156 = encode_clo(alloc_clo(lam28156_fptr, 0));

void* lam28158_fptr() // lam28158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28159 = arg_buffer[1];
//reading env and args
void* a2777328009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28159))[6];
//not do dummy comment
void* lst = (decode_clo(env28159))[5];
//not do dummy comment
void* map = (decode_clo(env28159))[4];
//not do dummy comment
void* kont27867 = (decode_clo(env28159))[3];
//not do dummy comment
void* proc = (decode_clo(env28159))[2];
//not do dummy comment
void* cons = (decode_clo(env28159))[1];

//creating new closure instance
void** clo28792 = alloc_clo(lam28156_fptr, 5);

//setting env list
clo28792[1] = cons;
clo28792[2] = proc;
clo28792[3] = kont27867;
clo28792[4] = a2777328009;
clo28792[5] = map;
void* f2787028010 = encode_clo(clo28792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2787028010;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28158 = encode_clo(alloc_clo(lam28158_fptr, 0));

void* lam28160_fptr() // lam28160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28161 = arg_buffer[1];
//reading env and args
void* a2777228007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28161))[6];
//not do dummy comment
void* lst = (decode_clo(env28161))[5];
//not do dummy comment
void* map = (decode_clo(env28161))[4];
//not do dummy comment
void* kont27867 = (decode_clo(env28161))[3];
//not do dummy comment
void* proc = (decode_clo(env28161))[2];
//not do dummy comment
void* cons = (decode_clo(env28161))[1];

//creating new closure instance
void** clo28794 = alloc_clo(lam28158_fptr, 6);

//setting env list
clo28794[1] = cons;
clo28794[2] = proc;
clo28794[3] = kont27867;
clo28794[4] = map;
clo28794[5] = lst;
clo28794[6] = cdr;
void* f2787128008 = encode_clo(clo28794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f2787128008;
arg_buffer[3] = a2777228007;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28160 = encode_clo(alloc_clo(lam28160_fptr, 0));

void* lam28162_fptr() // lam28162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28163 = arg_buffer[1];
//reading env and args
void* a2777028003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env28163))[8];
//not do dummy comment
void* map = (decode_clo(env28163))[7];
//not do dummy comment
void* kont27867 = (decode_clo(env28163))[6];
//not do dummy comment
void* proc = (decode_clo(env28163))[5];
//not do dummy comment
void* car = (decode_clo(env28163))[4];
//not do dummy comment
void* cons = (decode_clo(env28163))[3];
//not do dummy comment
void* list = (decode_clo(env28163))[2];
//not do dummy comment
void* cdr = (decode_clo(env28163))[1];

//if-clause
bool if_guard28795 = is_true(a2777028003);
if(if_guard28795)
{

//creating new closure instance
void** clo28797 = alloc_clo(lam28152_fptr, 1);

//setting env list
clo28797[1] = kont27867;
void* f2786828004 = encode_clo(clo28797);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2786828004;
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
void** clo28799 = alloc_clo(lam28160_fptr, 6);

//setting env list
clo28799[1] = cons;
clo28799[2] = proc;
clo28799[3] = kont27867;
clo28799[4] = map;
clo28799[5] = lst;
clo28799[6] = cdr;
void* f2787228006 = encode_clo(clo28799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2787228006;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28162 = encode_clo(alloc_clo(lam28162_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28164 = arg_buffer[1];
//reading env and args
void* kont27867 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28801 = alloc_clo(lam28162_fptr, 8);

//setting env list
clo28801[1] = cdr;
clo28801[2] = list;
clo28801[3] = cons;
clo28801[4] = car;
clo28801[5] = proc;
clo28801[6] = kont27867;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo28801[7] = map;
clo28801[8] = lst;
void* f2787328002 = encode_clo(clo28801);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2787328002;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam28165_fptr() // lam28165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28166 = arg_buffer[1];
//reading env and args
void* x2777728017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27874 = (decode_clo(env28166))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27874);
arg_buffer[2] = x2777728017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27874))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28165 = encode_clo(alloc_clo(lam28165_fptr, 0));

void* lam28167_fptr() // lam28167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28168 = arg_buffer[1];
//reading env and args
void* a2778228027 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27874 = (decode_clo(env28168))[3];
//not do dummy comment
void* a2778028023 = (decode_clo(env28168))[2];
//not do dummy comment
void* cons = (decode_clo(env28168))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont27874;
arg_buffer[3] = a2778028023;
arg_buffer[4] = a2778228027;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28167 = encode_clo(alloc_clo(lam28167_fptr, 0));

void* lam28169_fptr() // lam28169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28170 = arg_buffer[1];
//reading env and args
void* a2778128025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27874 = (decode_clo(env28170))[5];
//not do dummy comment
void* a2778028023 = (decode_clo(env28170))[4];
//not do dummy comment
void* op = (decode_clo(env28170))[3];
//not do dummy comment
void* filter = (decode_clo(env28170))[2];
//not do dummy comment
void* cons = (decode_clo(env28170))[1];

//creating new closure instance
void** clo28803 = alloc_clo(lam28167_fptr, 3);

//setting env list
clo28803[1] = cons;
clo28803[2] = a2778028023;
clo28803[3] = kont27874;
void* f2787628026 = encode_clo(clo28803);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f2787628026;
arg_buffer[3] = op;
arg_buffer[4] = a2778128025;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28169 = encode_clo(alloc_clo(lam28169_fptr, 0));

void* lam28171_fptr() // lam28171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28172 = arg_buffer[1];
//reading env and args
void* a2778028023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28172))[6];
//not do dummy comment
void* kont27874 = (decode_clo(env28172))[5];
//not do dummy comment
void* lst = (decode_clo(env28172))[4];
//not do dummy comment
void* op = (decode_clo(env28172))[3];
//not do dummy comment
void* filter = (decode_clo(env28172))[2];
//not do dummy comment
void* cons = (decode_clo(env28172))[1];

//creating new closure instance
void** clo28805 = alloc_clo(lam28169_fptr, 5);

//setting env list
clo28805[1] = cons;
clo28805[2] = filter;
clo28805[3] = op;
clo28805[4] = a2778028023;
clo28805[5] = kont27874;
void* f2787728024 = encode_clo(clo28805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2787728024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28171 = encode_clo(alloc_clo(lam28171_fptr, 0));

void* lam28173_fptr() // lam28173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28174 = arg_buffer[1];
//reading env and args
void* a2778328029 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27874 = (decode_clo(env28174))[3];
//not do dummy comment
void* op = (decode_clo(env28174))[2];
//not do dummy comment
void* filter = (decode_clo(env28174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont27874;
arg_buffer[3] = op;
arg_buffer[4] = a2778328029;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28173 = encode_clo(alloc_clo(lam28173_fptr, 0));

void* lam28175_fptr() // lam28175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28176 = arg_buffer[1];
//reading env and args
void* a2777928021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28176))[7];
//not do dummy comment
void* kont27874 = (decode_clo(env28176))[6];
//not do dummy comment
void* lst = (decode_clo(env28176))[5];
//not do dummy comment
void* op = (decode_clo(env28176))[4];
//not do dummy comment
void* cons = (decode_clo(env28176))[3];
//not do dummy comment
void* filter = (decode_clo(env28176))[2];
//not do dummy comment
void* car = (decode_clo(env28176))[1];

//if-clause
bool if_guard28806 = is_true(a2777928021);
if(if_guard28806)
{

//creating new closure instance
void** clo28808 = alloc_clo(lam28171_fptr, 6);

//setting env list
clo28808[1] = cons;
clo28808[2] = filter;
clo28808[3] = op;
clo28808[4] = lst;
clo28808[5] = kont27874;
clo28808[6] = cdr;
void* f2787828022 = encode_clo(clo28808);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2787828022;
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
void** clo28810 = alloc_clo(lam28173_fptr, 3);

//setting env list
clo28810[1] = filter;
clo28810[2] = op;
clo28810[3] = kont27874;
void* f2787928028 = encode_clo(clo28810);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2787928028;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28175 = encode_clo(alloc_clo(lam28175_fptr, 0));

void* lam28177_fptr() // lam28177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28178 = arg_buffer[1];
//reading env and args
void* a2777828019 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28178))[7];
//not do dummy comment
void* kont27874 = (decode_clo(env28178))[6];
//not do dummy comment
void* lst = (decode_clo(env28178))[5];
//not do dummy comment
void* op = (decode_clo(env28178))[4];
//not do dummy comment
void* cons = (decode_clo(env28178))[3];
//not do dummy comment
void* filter = (decode_clo(env28178))[2];
//not do dummy comment
void* car = (decode_clo(env28178))[1];

//creating new closure instance
void** clo28812 = alloc_clo(lam28175_fptr, 7);

//setting env list
clo28812[1] = car;
clo28812[2] = filter;
clo28812[3] = cons;
clo28812[4] = op;
clo28812[5] = lst;
clo28812[6] = kont27874;
clo28812[7] = cdr;
void* f2788028020 = encode_clo(clo28812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f2788028020;
arg_buffer[3] = a2777828019;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28177 = encode_clo(alloc_clo(lam28177_fptr, 0));

void* lam28179_fptr() // lam28179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28180 = arg_buffer[1];
//reading env and args
void* a2777628015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27874 = (decode_clo(env28180))[8];
//not do dummy comment
void* lst = (decode_clo(env28180))[7];
//not do dummy comment
void* op = (decode_clo(env28180))[6];
//not do dummy comment
void* cons = (decode_clo(env28180))[5];
//not do dummy comment
void* list = (decode_clo(env28180))[4];
//not do dummy comment
void* cdr = (decode_clo(env28180))[3];
//not do dummy comment
void* filter = (decode_clo(env28180))[2];
//not do dummy comment
void* car = (decode_clo(env28180))[1];

//if-clause
bool if_guard28813 = is_true(a2777628015);
if(if_guard28813)
{

//creating new closure instance
void** clo28815 = alloc_clo(lam28165_fptr, 1);

//setting env list
clo28815[1] = kont27874;
void* f2787528016 = encode_clo(clo28815);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f2787528016;
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
void** clo28817 = alloc_clo(lam28177_fptr, 7);

//setting env list
clo28817[1] = car;
clo28817[2] = filter;
clo28817[3] = cons;
clo28817[4] = op;
clo28817[5] = lst;
clo28817[6] = kont27874;
clo28817[7] = cdr;
void* f2788128018 = encode_clo(clo28817);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2788128018;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28179 = encode_clo(alloc_clo(lam28179_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28181 = arg_buffer[1];
//reading env and args
void* kont27874 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28819 = alloc_clo(lam28179_fptr, 8);

//setting env list
clo28819[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo28819[2] = filter;
clo28819[3] = cdr;
clo28819[4] = list;
clo28819[5] = cons;
clo28819[6] = op;
clo28819[7] = lst;
clo28819[8] = kont27874;
void* f2788228014 = encode_clo(clo28819);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2788228014;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam28182_fptr() // lam28182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28183 = arg_buffer[1];
//reading env and args
void* a2778828037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2778628034 = (decode_clo(env28183))[3];
//not do dummy comment
void* drop = (decode_clo(env28183))[2];
//not do dummy comment
void* kont27883 = (decode_clo(env28183))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont27883;
arg_buffer[3] = a2778628034;
arg_buffer[4] = a2778828037;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28182 = encode_clo(alloc_clo(lam28182_fptr, 0));

void* lam28185_fptr() // lam28185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28186 = arg_buffer[1];
//reading env and args
void* a2778628034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env28186))[4];
//not do dummy comment
void* kont27883 = (decode_clo(env28186))[3];
//not do dummy comment
void* n = (decode_clo(env28186))[2];
//not do dummy comment
void* _u45 = (decode_clo(env28186))[1];
mpz_t* mpzvar28820 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28820, "1", 10);
void* a2778728035 = encode_mpz(mpzvar28820);

//creating new closure instance
void** clo28822 = alloc_clo(lam28182_fptr, 3);

//setting env list
clo28822[1] = kont27883;
clo28822[2] = drop;
clo28822[3] = a2778628034;
void* f2788428036 = encode_clo(clo28822);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f2788428036;
arg_buffer[3] = n;
arg_buffer[4] = a2778728035;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28185 = encode_clo(alloc_clo(lam28185_fptr, 0));

void* lam28187_fptr() // lam28187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28188 = arg_buffer[1];
//reading env and args
void* a2778528032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28188))[6];
//not do dummy comment
void* kont27883 = (decode_clo(env28188))[5];
//not do dummy comment
void* n = (decode_clo(env28188))[4];
//not do dummy comment
void* _u45 = (decode_clo(env28188))[3];
//not do dummy comment
void* lst = (decode_clo(env28188))[2];
//not do dummy comment
void* drop = (decode_clo(env28188))[1];

//if-clause
bool if_guard28823 = is_true(a2778528032);
if(if_guard28823)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27883);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28825 = alloc_clo(lam28185_fptr, 4);

//setting env list
clo28825[1] = _u45;
clo28825[2] = n;
clo28825[3] = kont27883;
clo28825[4] = drop;
void* f2788528033 = encode_clo(clo28825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2788528033;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28187 = encode_clo(alloc_clo(lam28187_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28190 = arg_buffer[1];
//reading env and args
void* kont27883 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar28826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28826, "0", 10);
void* a2778428030 = encode_mpz(mpzvar28826);

//creating new closure instance
void** clo28828 = alloc_clo(lam28187_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo28828[1] = drop;
clo28828[2] = lst;
clo28828[3] = _u45;
clo28828[4] = n;
clo28828[5] = kont27883;
clo28828[6] = cdr;
void* f2788628031 = encode_clo(clo28828);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f2788628031;
arg_buffer[3] = n;
arg_buffer[4] = a2778428030;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam28191_fptr() // lam28191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28192 = arg_buffer[1];
//reading env and args
void* a2779228045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2779028041 = (decode_clo(env28192))[3];
//not do dummy comment
void* proc = (decode_clo(env28192))[2];
//not do dummy comment
void* kont27887 = (decode_clo(env28192))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont27887;
arg_buffer[3] = a2779028041;
arg_buffer[4] = a2779228045;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28191 = encode_clo(alloc_clo(lam28191_fptr, 0));

void* lam28193_fptr() // lam28193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28194 = arg_buffer[1];
//reading env and args
void* a2779128043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env28194))[5];
//not do dummy comment
void* a2779028041 = (decode_clo(env28194))[4];
//not do dummy comment
void* kont27887 = (decode_clo(env28194))[3];
//not do dummy comment
void* proc = (decode_clo(env28194))[2];
//not do dummy comment
void* acc = (decode_clo(env28194))[1];

//creating new closure instance
void** clo28830 = alloc_clo(lam28191_fptr, 3);

//setting env list
clo28830[1] = kont27887;
clo28830[2] = proc;
clo28830[3] = a2779028041;
void* f2788828044 = encode_clo(clo28830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f2788828044;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a2779128043;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28193 = encode_clo(alloc_clo(lam28193_fptr, 0));

void* lam28195_fptr() // lam28195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28196 = arg_buffer[1];
//reading env and args
void* a2779028041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28196))[6];
//not do dummy comment
void* kont27887 = (decode_clo(env28196))[5];
//not do dummy comment
void* foldr = (decode_clo(env28196))[4];
//not do dummy comment
void* lst = (decode_clo(env28196))[3];
//not do dummy comment
void* proc = (decode_clo(env28196))[2];
//not do dummy comment
void* acc = (decode_clo(env28196))[1];

//creating new closure instance
void** clo28832 = alloc_clo(lam28193_fptr, 5);

//setting env list
clo28832[1] = acc;
clo28832[2] = proc;
clo28832[3] = kont27887;
clo28832[4] = a2779028041;
clo28832[5] = foldr;
void* f2788928042 = encode_clo(clo28832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2788928042;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28195 = encode_clo(alloc_clo(lam28195_fptr, 0));

void* lam28197_fptr() // lam28197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28198 = arg_buffer[1];
//reading env and args
void* a2778928039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28198))[7];
//not do dummy comment
void* car = (decode_clo(env28198))[6];
//not do dummy comment
void* kont27887 = (decode_clo(env28198))[5];
//not do dummy comment
void* foldr = (decode_clo(env28198))[4];
//not do dummy comment
void* lst = (decode_clo(env28198))[3];
//not do dummy comment
void* proc = (decode_clo(env28198))[2];
//not do dummy comment
void* acc = (decode_clo(env28198))[1];

//if-clause
bool if_guard28833 = is_true(a2778928039);
if(if_guard28833)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27887);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27887))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28835 = alloc_clo(lam28195_fptr, 6);

//setting env list
clo28835[1] = acc;
clo28835[2] = proc;
clo28835[3] = lst;
clo28835[4] = foldr;
clo28835[5] = kont27887;
clo28835[6] = cdr;
void* f2789028040 = encode_clo(clo28835);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2789028040;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28197 = encode_clo(alloc_clo(lam28197_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28199 = arg_buffer[1];
//reading env and args
void* kont27887 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo28837 = alloc_clo(lam28197_fptr, 7);

//setting env list
clo28837[1] = acc;
clo28837[2] = proc;
clo28837[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo28837[4] = foldr;
clo28837[5] = kont27887;
clo28837[6] = car;
clo28837[7] = cdr;
void* f2789128038 = encode_clo(clo28837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2789128038;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam28200_fptr() // lam28200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28201 = arg_buffer[1];
//reading env and args
void* a2779628053 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2779428049 = (decode_clo(env28201))[3];
//not do dummy comment
void* kont27892 = (decode_clo(env28201))[2];
//not do dummy comment
void* cons = (decode_clo(env28201))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont27892;
arg_buffer[3] = a2779428049;
arg_buffer[4] = a2779628053;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28200 = encode_clo(alloc_clo(lam28200_fptr, 0));

void* lam28202_fptr() // lam28202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28203 = arg_buffer[1];
//reading env and args
void* a2779528051 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a2779428049 = (decode_clo(env28203))[5];
//not do dummy comment
void* kont27892 = (decode_clo(env28203))[4];
//not do dummy comment
void* append = (decode_clo(env28203))[3];
//not do dummy comment
void* lst2 = (decode_clo(env28203))[2];
//not do dummy comment
void* cons = (decode_clo(env28203))[1];

//creating new closure instance
void** clo28839 = alloc_clo(lam28200_fptr, 3);

//setting env list
clo28839[1] = cons;
clo28839[2] = kont27892;
clo28839[3] = a2779428049;
void* f2789328052 = encode_clo(clo28839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f2789328052;
arg_buffer[3] = a2779528051;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28202 = encode_clo(alloc_clo(lam28202_fptr, 0));

void* lam28204_fptr() // lam28204 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28205 = arg_buffer[1];
//reading env and args
void* a2779428049 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28205))[6];
//not do dummy comment
void* kont27892 = (decode_clo(env28205))[5];
//not do dummy comment
void* append = (decode_clo(env28205))[4];
//not do dummy comment
void* lst2 = (decode_clo(env28205))[3];
//not do dummy comment
void* lst1 = (decode_clo(env28205))[2];
//not do dummy comment
void* cons = (decode_clo(env28205))[1];

//creating new closure instance
void** clo28841 = alloc_clo(lam28202_fptr, 5);

//setting env list
clo28841[1] = cons;
clo28841[2] = lst2;
clo28841[3] = append;
clo28841[4] = kont27892;
clo28841[5] = a2779428049;
void* f2789428050 = encode_clo(clo28841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f2789428050;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28204 = encode_clo(alloc_clo(lam28204_fptr, 0));

void* lam28206_fptr() // lam28206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28207 = arg_buffer[1];
//reading env and args
void* a2779328047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env28207))[7];
//not do dummy comment
void* kont27892 = (decode_clo(env28207))[6];
//not do dummy comment
void* append = (decode_clo(env28207))[5];
//not do dummy comment
void* lst2 = (decode_clo(env28207))[4];
//not do dummy comment
void* cons = (decode_clo(env28207))[3];
//not do dummy comment
void* lst1 = (decode_clo(env28207))[2];
//not do dummy comment
void* car = (decode_clo(env28207))[1];

//if-clause
bool if_guard28842 = is_true(a2779328047);
if(if_guard28842)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27892);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27892))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo28844 = alloc_clo(lam28204_fptr, 6);

//setting env list
clo28844[1] = cons;
clo28844[2] = lst1;
clo28844[3] = lst2;
clo28844[4] = append;
clo28844[5] = kont27892;
clo28844[6] = cdr;
void* f2789528048 = encode_clo(clo28844);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f2789528048;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam28206 = encode_clo(alloc_clo(lam28206_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28208 = arg_buffer[1];
//reading env and args
void* kont27892 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo28846 = alloc_clo(lam28206_fptr, 7);

//setting env list
clo28846[1] = car;
clo28846[2] = lst1;
clo28846[3] = cons;
clo28846[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo28846[5] = append;
clo28846[6] = kont27892;
clo28846[7] = cdr;
void* f2789628046 = encode_clo(clo28846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f2789628046;
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
void* _28209 = arg_buffer[1];
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

void* kont2789728054 = prim_car(lst);
void* lst28055 = prim_cdr(lst);
void* x2779728056 = apply_prim_hash(lst28055);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont2789728054);
arg_buffer[2] = x2779728056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont2789728054))[0]);
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
void* _28210 = arg_buffer[1];
//reading env and args
void* kont27899 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2779828057 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27899);
arg_buffer[2] = x2779828057;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27899))[0]);
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
void* _28211 = arg_buffer[1];
//reading env and args
void* kont27900 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x2779928058 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27900);
arg_buffer[2] = x2779928058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27900))[0]);
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
void* _28212 = arg_buffer[1];
//reading env and args
void* kont27901 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x2780028059 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27901);
arg_buffer[2] = x2780028059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27901))[0]);
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
void* _28213 = arg_buffer[1];
//reading env and args
void* kont27902 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x2780128060 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27902);
arg_buffer[2] = x2780128060;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27902))[0]);
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
void* _28217 = arg_buffer[1];
//reading env and args
void* kont27903 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar28847 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28847, "100", 10);
void* a2780228061 = encode_mpz(mpzvar28847);
mpz_t* mpzvar28848 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28848, "2", 10);
void* a2780328062 = encode_mpz(mpzvar28848);
mpz_t* mpzvar28849 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar28849, "12", 10);
void* a2780428063 = encode_mpz(mpzvar28849);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u47);
arg_buffer[2] = kont27903;
arg_buffer[3] = a2780228061;
arg_buffer[4] = a2780328062;
arg_buffer[5] = a2780428063;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u47))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam28218_fptr() // lam28218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env28219 = arg_buffer[1];
//reading env and args
void* x2780528065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont27904 = (decode_clo(env28219))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont27904);
arg_buffer[2] = x2780528065;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont27904))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam28218 = encode_clo(alloc_clo(lam28218_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _28220 = arg_buffer[1];
//reading env and args
void* kont27904 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo28851 = alloc_clo(lam28218_fptr, 1);

//setting env list
clo28851[1] = kont27904;
void* f2790528064 = encode_clo(clo28851);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f2790528064;
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

