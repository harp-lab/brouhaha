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
void* _63967 = arg_buffer[1];
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

void* kont6370663806 = prim_car(lst);
void* lst63807 = prim_cdr(lst);
void* x6361863808 = apply_prim__u43(lst63807);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6370663806);
arg_buffer[2] = x6361863808;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6370663806))[0]);
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
void* _63968 = arg_buffer[1];
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

void* kont6370863809 = prim_car(lst);
void* lst63810 = prim_cdr(lst);
void* x6361963811 = apply_prim__u45(lst63810);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6370863809);
arg_buffer[2] = x6361963811;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6370863809))[0]);
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
void* _63969 = arg_buffer[1];
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

void* kont6371063812 = prim_car(lst);
void* lst63813 = prim_cdr(lst);
void* x6362063814 = apply_prim__u42(lst63813);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6371063812);
arg_buffer[2] = x6362063814;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6371063812))[0]);
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
void* _63970 = arg_buffer[1];
//reading env and args
void* kont63712 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6362163815 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63712);
arg_buffer[2] = x6362163815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63712))[0]);
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
void* _63971 = arg_buffer[1];
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

void* kont6371363816 = prim_car(lst);
void* lst63817 = prim_cdr(lst);
void* x6362263818 = apply_prim__u47(lst63817);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6371363816);
arg_buffer[2] = x6362263818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6371363816))[0]);
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
void* _63972 = arg_buffer[1];
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

void* kont6371563819 = prim_car(lst);
void* lst63820 = prim_cdr(lst);
void* x6362363821 = apply_prim__u61(lst63820);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6371563819);
arg_buffer[2] = x6362363821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6371563819))[0]);
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
void* _63973 = arg_buffer[1];
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

void* kont6371763822 = prim_car(lst);
void* lst63823 = prim_cdr(lst);
void* x6362463824 = apply_prim__u62(lst63823);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6371763822);
arg_buffer[2] = x6362463824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6371763822))[0]);
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
void* _63974 = arg_buffer[1];
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

void* kont6371963825 = prim_car(lst);
void* lst63826 = prim_cdr(lst);
void* x6362563827 = apply_prim__u60(lst63826);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6371963825);
arg_buffer[2] = x6362563827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6371963825))[0]);
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
void* _63975 = arg_buffer[1];
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

void* kont6372163828 = prim_car(lst);
void* lst63829 = prim_cdr(lst);
void* x6362663830 = apply_prim__u60_u61(lst63829);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6372163828);
arg_buffer[2] = x6362663830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6372163828))[0]);
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
void* _63976 = arg_buffer[1];
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

void* kont6372363831 = prim_car(lst);
void* lst63832 = prim_cdr(lst);
void* x6362763833 = apply_prim__u62_u61(lst63832);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6372363831);
arg_buffer[2] = x6362763833;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6372363831))[0]);
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
void* _63977 = arg_buffer[1];
//reading env and args
void* kont63725 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x6362863834 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63725);
arg_buffer[2] = x6362863834;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63725))[0]);
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
void* _63978 = arg_buffer[1];
//reading env and args
void* kont63726 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6362963835 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63726);
arg_buffer[2] = x6362963835;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63726))[0]);
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
void* _63979 = arg_buffer[1];
//reading env and args
void* kont63727 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x6363063836 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63727);
arg_buffer[2] = x6363063836;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63727))[0]);
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
void* _63980 = arg_buffer[1];
//reading env and args
void* kont63728 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x6363163837 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63728);
arg_buffer[2] = x6363163837;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63728))[0]);
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
void* _63981 = arg_buffer[1];
//reading env and args
void* kont63729 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6363263838 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63729);
arg_buffer[2] = x6363263838;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63729))[0]);
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
void* _63982 = arg_buffer[1];
//reading env and args
void* kont63730 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x6363363839 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63730);
arg_buffer[2] = x6363363839;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63730))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam63983_fptr() // lam63983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env63984 = arg_buffer[1];
//reading env and args
void* a6363663843 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env63984))[3];
//not do dummy comment
void* a6363463840 = (decode_clo(env63984))[2];
//not do dummy comment
void* kont63731 = (decode_clo(env63984))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont63731;
arg_buffer[3] = a6363463840;
arg_buffer[4] = a6363663843;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam63983 = encode_clo(alloc_clo(lam63983_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _63987 = arg_buffer[1];
//reading env and args
void* kont63731 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar64663 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64663, "0", 10);
void* a6363463840 = encode_mpz(mpzvar64663);
mpz_t* mpzvar64664 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64664, "2", 10);
void* a6363563841 = encode_mpz(mpzvar64664);

//creating new closure instance
void** clo64666 = alloc_clo(lam63983_fptr, 3);

//setting env list
clo64666[1] = kont63731;
clo64666[2] = a6363463840;
clo64666[3] = equal_u63;
void* f6373263842 = encode_clo(clo64666);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6373263842;
arg_buffer[3] = x;
arg_buffer[4] = a6363563841;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam63988_fptr() // lam63988 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env63989 = arg_buffer[1];
//reading env and args
void* a6363963847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63733 = (decode_clo(env63989))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env63989))[2];
//not do dummy comment
void* a6363763844 = (decode_clo(env63989))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont63733;
arg_buffer[3] = a6363763844;
arg_buffer[4] = a6363963847;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam63988 = encode_clo(alloc_clo(lam63988_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _63992 = arg_buffer[1];
//reading env and args
void* kont63733 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar64667 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64667, "1", 10);
void* a6363763844 = encode_mpz(mpzvar64667);
mpz_t* mpzvar64668 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64668, "2", 10);
void* a6363863845 = encode_mpz(mpzvar64668);

//creating new closure instance
void** clo64670 = alloc_clo(lam63988_fptr, 3);

//setting env list
clo64670[1] = a6363763844;
clo64670[2] = equal_u63;
clo64670[3] = kont63733;
void* f6373463846 = encode_clo(clo64670);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f6373463846;
arg_buffer[3] = x;
arg_buffer[4] = a6363863845;
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
void* _63993 = arg_buffer[1];
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

void* kont6373563848 = prim_car(x);
void* x63849 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6373563848);
arg_buffer[2] = x63849;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6373563848))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam63996_fptr() // lam63996 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env63997 = arg_buffer[1];
//reading env and args
void* a6364563859 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63737 = (decode_clo(env63997))[3];
//not do dummy comment
void* x = (decode_clo(env63997))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env63997))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont63737;
arg_buffer[3] = x;
arg_buffer[4] = a6364563859;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam63996 = encode_clo(alloc_clo(lam63996_fptr, 0));

void* lam63998_fptr() // lam63998 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env63999 = arg_buffer[1];
//reading env and args
void* a6364363856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env63999))[5];
//not do dummy comment
void* x = (decode_clo(env63999))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env63999))[3];
//not do dummy comment
void* lst = (decode_clo(env63999))[2];
//not do dummy comment
void* kont63737 = (decode_clo(env63999))[1];

//if-clause
bool if_guard64671 = is_true(a6364363856);
if(if_guard64671)
{
void* x6364463857 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63737);
arg_buffer[2] = x6364463857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63737))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo64673 = alloc_clo(lam63996_fptr, 3);

//setting env list
clo64673[1] = member_u63;
clo64673[2] = x;
clo64673[3] = kont63737;
void* f6373863858 = encode_clo(clo64673);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6373863858;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam63998 = encode_clo(alloc_clo(lam63998_fptr, 0));

void* lam64000_fptr() // lam64000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64001 = arg_buffer[1];
//reading env and args
void* a6364263854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64001))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env64001))[5];
//not do dummy comment
void* x = (decode_clo(env64001))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env64001))[3];
//not do dummy comment
void* lst = (decode_clo(env64001))[2];
//not do dummy comment
void* kont63737 = (decode_clo(env64001))[1];

//creating new closure instance
void** clo64675 = alloc_clo(lam63998_fptr, 5);

//setting env list
clo64675[1] = kont63737;
clo64675[2] = lst;
clo64675[3] = member_u63;
clo64675[4] = x;
clo64675[5] = cdr;
void* f6373963855 = encode_clo(clo64675);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f6373963855;
arg_buffer[3] = a6364263854;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64000 = encode_clo(alloc_clo(lam64000_fptr, 0));

void* lam64002_fptr() // lam64002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64003 = arg_buffer[1];
//reading env and args
void* a6364063851 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64003))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env64003))[6];
//not do dummy comment
void* x = (decode_clo(env64003))[5];
//not do dummy comment
void* car = (decode_clo(env64003))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env64003))[3];
//not do dummy comment
void* lst = (decode_clo(env64003))[2];
//not do dummy comment
void* kont63737 = (decode_clo(env64003))[1];

//if-clause
bool if_guard64676 = is_true(a6364063851);
if(if_guard64676)
{
void* x6364163852 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63737);
arg_buffer[2] = x6364163852;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63737))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo64678 = alloc_clo(lam64000_fptr, 6);

//setting env list
clo64678[1] = kont63737;
clo64678[2] = lst;
clo64678[3] = member_u63;
clo64678[4] = x;
clo64678[5] = equal_u63;
clo64678[6] = cdr;
void* f6374063853 = encode_clo(clo64678);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6374063853;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64002 = encode_clo(alloc_clo(lam64002_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64004 = arg_buffer[1];
//reading env and args
void* kont63737 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo64680 = alloc_clo(lam64002_fptr, 7);

//setting env list
clo64680[1] = kont63737;
clo64680[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo64680[3] = member_u63;
clo64680[4] = car;
clo64680[5] = x;
clo64680[6] = equal_u63;
clo64680[7] = cdr;
void* f6374163850 = encode_clo(clo64680);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6374163850;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam64005_fptr() // lam64005 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64006 = arg_buffer[1];
//reading env and args
void* a6364963867 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6364863865 = (decode_clo(env64006))[4];
//not do dummy comment
void* kont63742 = (decode_clo(env64006))[3];
//not do dummy comment
void* fun = (decode_clo(env64006))[2];
//not do dummy comment
void* foldl = (decode_clo(env64006))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont63742;
arg_buffer[3] = fun;
arg_buffer[4] = a6364863865;
arg_buffer[5] = a6364963867;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64005 = encode_clo(alloc_clo(lam64005_fptr, 0));

void* lam64007_fptr() // lam64007 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64008 = arg_buffer[1];
//reading env and args
void* a6364863865 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64008))[5];
//not do dummy comment
void* lst = (decode_clo(env64008))[4];
//not do dummy comment
void* kont63742 = (decode_clo(env64008))[3];
//not do dummy comment
void* fun = (decode_clo(env64008))[2];
//not do dummy comment
void* foldl = (decode_clo(env64008))[1];

//creating new closure instance
void** clo64682 = alloc_clo(lam64005_fptr, 4);

//setting env list
clo64682[1] = foldl;
clo64682[2] = fun;
clo64682[3] = kont63742;
clo64682[4] = a6364863865;
void* f6374363866 = encode_clo(clo64682);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6374363866;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64007 = encode_clo(alloc_clo(lam64007_fptr, 0));

void* lam64009_fptr() // lam64009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64010 = arg_buffer[1];
//reading env and args
void* a6364763863 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64010))[6];
//not do dummy comment
void* lst = (decode_clo(env64010))[5];
//not do dummy comment
void* kont63742 = (decode_clo(env64010))[4];
//not do dummy comment
void* fun = (decode_clo(env64010))[3];
//not do dummy comment
void* acc = (decode_clo(env64010))[2];
//not do dummy comment
void* foldl = (decode_clo(env64010))[1];

//creating new closure instance
void** clo64684 = alloc_clo(lam64007_fptr, 5);

//setting env list
clo64684[1] = foldl;
clo64684[2] = fun;
clo64684[3] = kont63742;
clo64684[4] = lst;
clo64684[5] = cdr;
void* f6374463864 = encode_clo(clo64684);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f6374463864;
arg_buffer[3] = a6364763863;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64009 = encode_clo(alloc_clo(lam64009_fptr, 0));

void* lam64011_fptr() // lam64011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64012 = arg_buffer[1];
//reading env and args
void* a6364663861 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64012))[7];
//not do dummy comment
void* lst = (decode_clo(env64012))[6];
//not do dummy comment
void* kont63742 = (decode_clo(env64012))[5];
//not do dummy comment
void* fun = (decode_clo(env64012))[4];
//not do dummy comment
void* acc = (decode_clo(env64012))[3];
//not do dummy comment
void* car = (decode_clo(env64012))[2];
//not do dummy comment
void* foldl = (decode_clo(env64012))[1];

//if-clause
bool if_guard64685 = is_true(a6364663861);
if(if_guard64685)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63742);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63742))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo64687 = alloc_clo(lam64009_fptr, 6);

//setting env list
clo64687[1] = foldl;
clo64687[2] = acc;
clo64687[3] = fun;
clo64687[4] = kont63742;
clo64687[5] = lst;
clo64687[6] = cdr;
void* f6374563862 = encode_clo(clo64687);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6374563862;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64011 = encode_clo(alloc_clo(lam64011_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64013 = arg_buffer[1];
//reading env and args
void* kont63742 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo64689 = alloc_clo(lam64011_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo64689[1] = foldl;
clo64689[2] = car;
clo64689[3] = acc;
clo64689[4] = fun;
clo64689[5] = kont63742;
clo64689[6] = lst;
clo64689[7] = cdr;
void* f6374663860 = encode_clo(clo64689);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6374663860;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam64014_fptr() // lam64014 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64015 = arg_buffer[1];
//reading env and args
void* a6365363875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env64015))[3];
//not do dummy comment
void* a6365163871 = (decode_clo(env64015))[2];
//not do dummy comment
void* kont63747 = (decode_clo(env64015))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont63747;
arg_buffer[3] = a6365163871;
arg_buffer[4] = a6365363875;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64014 = encode_clo(alloc_clo(lam64014_fptr, 0));

void* lam64016_fptr() // lam64016 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64017 = arg_buffer[1];
//reading env and args
void* a6365263873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env64017))[5];
//not do dummy comment
void* a6365163871 = (decode_clo(env64017))[4];
//not do dummy comment
void* lst2 = (decode_clo(env64017))[3];
//not do dummy comment
void* kont63747 = (decode_clo(env64017))[2];
//not do dummy comment
void* cons = (decode_clo(env64017))[1];

//creating new closure instance
void** clo64691 = alloc_clo(lam64014_fptr, 3);

//setting env list
clo64691[1] = kont63747;
clo64691[2] = a6365163871;
clo64691[3] = reverse_u45helper;
void* f6374863874 = encode_clo(clo64691);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6374863874;
arg_buffer[3] = a6365263873;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64016 = encode_clo(alloc_clo(lam64016_fptr, 0));

void* lam64018_fptr() // lam64018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64019 = arg_buffer[1];
//reading env and args
void* a6365163871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env64019))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env64019))[5];
//not do dummy comment
void* lst2 = (decode_clo(env64019))[4];
//not do dummy comment
void* car = (decode_clo(env64019))[3];
//not do dummy comment
void* kont63747 = (decode_clo(env64019))[2];
//not do dummy comment
void* cons = (decode_clo(env64019))[1];

//creating new closure instance
void** clo64693 = alloc_clo(lam64016_fptr, 5);

//setting env list
clo64693[1] = cons;
clo64693[2] = kont63747;
clo64693[3] = lst2;
clo64693[4] = a6365163871;
clo64693[5] = reverse_u45helper;
void* f6374963872 = encode_clo(clo64693);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6374963872;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64018 = encode_clo(alloc_clo(lam64018_fptr, 0));

void* lam64020_fptr() // lam64020 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64021 = arg_buffer[1];
//reading env and args
void* a6365063869 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64021))[7];
//not do dummy comment
void* lst = (decode_clo(env64021))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env64021))[5];
//not do dummy comment
void* lst2 = (decode_clo(env64021))[4];
//not do dummy comment
void* car = (decode_clo(env64021))[3];
//not do dummy comment
void* kont63747 = (decode_clo(env64021))[2];
//not do dummy comment
void* cons = (decode_clo(env64021))[1];

//if-clause
bool if_guard64694 = is_true(a6365063869);
if(if_guard64694)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63747);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63747))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo64696 = alloc_clo(lam64018_fptr, 6);

//setting env list
clo64696[1] = cons;
clo64696[2] = kont63747;
clo64696[3] = car;
clo64696[4] = lst2;
clo64696[5] = reverse_u45helper;
clo64696[6] = lst;
void* f6375063870 = encode_clo(clo64696);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6375063870;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64020 = encode_clo(alloc_clo(lam64020_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64022 = arg_buffer[1];
//reading env and args
void* kont63747 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo64698 = alloc_clo(lam64020_fptr, 7);

//setting env list
clo64698[1] = cons;
clo64698[2] = kont63747;
clo64698[3] = car;
clo64698[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo64698[5] = reverse_u45helper;
clo64698[6] = lst;
clo64698[7] = cdr;
void* f6375163868 = encode_clo(clo64698);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6375163868;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam64023_fptr() // lam64023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64024 = arg_buffer[1];
//reading env and args
void* a6365463877 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63752 = (decode_clo(env64024))[3];
//not do dummy comment
void* lst = (decode_clo(env64024))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env64024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont63752;
arg_buffer[3] = lst;
arg_buffer[4] = a6365463877;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64023 = encode_clo(alloc_clo(lam64023_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64025 = arg_buffer[1];
//reading env and args
void* kont63752 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo64700 = alloc_clo(lam64023_fptr, 3);

//setting env list
clo64700[1] = reverse_u45helper;
clo64700[2] = lst;
clo64700[3] = kont63752;
void* f6375363876 = encode_clo(clo64700);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6375363876;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam64026_fptr() // lam64026 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64027 = arg_buffer[1];
//reading env and args
void* x6365763882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63754 = (decode_clo(env64027))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63754);
arg_buffer[2] = x6365763882;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63754))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64026 = encode_clo(alloc_clo(lam64026_fptr, 0));

void* lam64028_fptr() // lam64028 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64029 = arg_buffer[1];
//reading env and args
void* a6366263891 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63754 = (decode_clo(env64029))[4];
//not do dummy comment
void* a6365863884 = (decode_clo(env64029))[3];
//not do dummy comment
void* a6366063887 = (decode_clo(env64029))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env64029))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont63754;
arg_buffer[3] = a6365863884;
arg_buffer[4] = a6366063887;
arg_buffer[5] = a6366263891;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64028 = encode_clo(alloc_clo(lam64028_fptr, 0));

void* lam64030_fptr() // lam64030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64031 = arg_buffer[1];
//reading env and args
void* a6366163889 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63754 = (decode_clo(env64031))[6];
//not do dummy comment
void* a6365863884 = (decode_clo(env64031))[5];
//not do dummy comment
void* a6366063887 = (decode_clo(env64031))[4];
//not do dummy comment
void* cons = (decode_clo(env64031))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env64031))[2];
//not do dummy comment
void* lst2 = (decode_clo(env64031))[1];

//creating new closure instance
void** clo64702 = alloc_clo(lam64028_fptr, 4);

//setting env list
clo64702[1] = take_u45helper;
clo64702[2] = a6366063887;
clo64702[3] = a6365863884;
clo64702[4] = kont63754;
void* f6375663890 = encode_clo(clo64702);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f6375663890;
arg_buffer[3] = a6366163889;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64030 = encode_clo(alloc_clo(lam64030_fptr, 0));

void* lam64032_fptr() // lam64032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64033 = arg_buffer[1];
//reading env and args
void* a6366063887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env64033))[7];
//not do dummy comment
void* kont63754 = (decode_clo(env64033))[6];
//not do dummy comment
void* a6365863884 = (decode_clo(env64033))[5];
//not do dummy comment
void* car = (decode_clo(env64033))[4];
//not do dummy comment
void* cons = (decode_clo(env64033))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env64033))[2];
//not do dummy comment
void* lst2 = (decode_clo(env64033))[1];

//creating new closure instance
void** clo64704 = alloc_clo(lam64030_fptr, 6);

//setting env list
clo64704[1] = lst2;
clo64704[2] = take_u45helper;
clo64704[3] = cons;
clo64704[4] = a6366063887;
clo64704[5] = a6365863884;
clo64704[6] = kont63754;
void* f6375763888 = encode_clo(clo64704);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6375763888;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64032 = encode_clo(alloc_clo(lam64032_fptr, 0));

void* lam64035_fptr() // lam64035 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64036 = arg_buffer[1];
//reading env and args
void* a6365863884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env64036))[8];
//not do dummy comment
void* kont63754 = (decode_clo(env64036))[7];
//not do dummy comment
void* cons = (decode_clo(env64036))[6];
//not do dummy comment
void* _u45 = (decode_clo(env64036))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env64036))[4];
//not do dummy comment
void* lst2 = (decode_clo(env64036))[3];
//not do dummy comment
void* n = (decode_clo(env64036))[2];
//not do dummy comment
void* car = (decode_clo(env64036))[1];
mpz_t* mpzvar64705 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64705, "1", 10);
void* a6365963885 = encode_mpz(mpzvar64705);

//creating new closure instance
void** clo64707 = alloc_clo(lam64032_fptr, 7);

//setting env list
clo64707[1] = lst2;
clo64707[2] = take_u45helper;
clo64707[3] = cons;
clo64707[4] = car;
clo64707[5] = a6365863884;
clo64707[6] = kont63754;
clo64707[7] = lst;
void* f6375863886 = encode_clo(clo64707);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6375863886;
arg_buffer[3] = n;
arg_buffer[4] = a6365963885;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64035 = encode_clo(alloc_clo(lam64035_fptr, 0));

void* lam64037_fptr() // lam64037 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64038 = arg_buffer[1];
//reading env and args
void* a6365663880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64038))[10];
//not do dummy comment
void* lst = (decode_clo(env64038))[9];
//not do dummy comment
void* kont63754 = (decode_clo(env64038))[8];
//not do dummy comment
void* reverse = (decode_clo(env64038))[7];
//not do dummy comment
void* cons = (decode_clo(env64038))[6];
//not do dummy comment
void* _u45 = (decode_clo(env64038))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env64038))[4];
//not do dummy comment
void* lst2 = (decode_clo(env64038))[3];
//not do dummy comment
void* n = (decode_clo(env64038))[2];
//not do dummy comment
void* car = (decode_clo(env64038))[1];

//if-clause
bool if_guard64708 = is_true(a6365663880);
if(if_guard64708)
{

//creating new closure instance
void** clo64710 = alloc_clo(lam64026_fptr, 1);

//setting env list
clo64710[1] = kont63754;
void* f6375563881 = encode_clo(clo64710);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f6375563881;
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
void** clo64712 = alloc_clo(lam64035_fptr, 8);

//setting env list
clo64712[1] = car;
clo64712[2] = n;
clo64712[3] = lst2;
clo64712[4] = take_u45helper;
clo64712[5] = _u45;
clo64712[6] = cons;
clo64712[7] = kont63754;
clo64712[8] = lst;
void* f6375963883 = encode_clo(clo64712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6375963883;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64037 = encode_clo(alloc_clo(lam64037_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64040 = arg_buffer[1];
//reading env and args
void* kont63754 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar64713 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64713, "0", 10);
void* a6365563878 = encode_mpz(mpzvar64713);

//creating new closure instance
void** clo64715 = alloc_clo(lam64037_fptr, 10);

//setting env list
clo64715[1] = car;
clo64715[2] = n;
clo64715[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo64715[4] = take_u45helper;
clo64715[5] = _u45;
clo64715[6] = cons;
clo64715[7] = reverse;
clo64715[8] = kont63754;
clo64715[9] = lst;
clo64715[10] = cdr;
void* f6376063879 = encode_clo(clo64715);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6376063879;
arg_buffer[3] = n;
arg_buffer[4] = a6365563878;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam64041_fptr() // lam64041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64042 = arg_buffer[1];
//reading env and args
void* a6366363893 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env64042))[4];
//not do dummy comment
void* n = (decode_clo(env64042))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env64042))[2];
//not do dummy comment
void* kont63761 = (decode_clo(env64042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont63761;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a6366363893;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64041 = encode_clo(alloc_clo(lam64041_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64043 = arg_buffer[1];
//reading env and args
void* kont63761 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo64717 = alloc_clo(lam64041_fptr, 4);

//setting env list
clo64717[1] = kont63761;
clo64717[2] = take_u45helper;
clo64717[3] = n;
clo64717[4] = lst;
void* f6376263892 = encode_clo(clo64717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6376263892;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam64045_fptr() // lam64045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64046 = arg_buffer[1];
//reading env and args
void* a6366863901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6366663897 = (decode_clo(env64046))[3];
//not do dummy comment
void* _u43 = (decode_clo(env64046))[2];
//not do dummy comment
void* kont63763 = (decode_clo(env64046))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont63763;
arg_buffer[3] = a6366663897;
arg_buffer[4] = a6366863901;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64045 = encode_clo(alloc_clo(lam64045_fptr, 0));

void* lam64047_fptr() // lam64047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64048 = arg_buffer[1];
//reading env and args
void* a6366763899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6366663897 = (decode_clo(env64048))[4];
//not do dummy comment
void* length = (decode_clo(env64048))[3];
//not do dummy comment
void* _u43 = (decode_clo(env64048))[2];
//not do dummy comment
void* kont63763 = (decode_clo(env64048))[1];

//creating new closure instance
void** clo64719 = alloc_clo(lam64045_fptr, 3);

//setting env list
clo64719[1] = kont63763;
clo64719[2] = _u43;
clo64719[3] = a6366663897;
void* f6376463900 = encode_clo(clo64719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f6376463900;
arg_buffer[3] = a6366763899;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64047 = encode_clo(alloc_clo(lam64047_fptr, 0));

void* lam64050_fptr() // lam64050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64051 = arg_buffer[1];
//reading env and args
void* a6366463895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64051))[5];
//not do dummy comment
void* lst = (decode_clo(env64051))[4];
//not do dummy comment
void* length = (decode_clo(env64051))[3];
//not do dummy comment
void* _u43 = (decode_clo(env64051))[2];
//not do dummy comment
void* kont63763 = (decode_clo(env64051))[1];

//if-clause
bool if_guard64720 = is_true(a6366463895);
if(if_guard64720)
{
mpz_t* mpzvar64721 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64721, "0", 10);
void* x6366563896 = encode_mpz(mpzvar64721);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63763);
arg_buffer[2] = x6366563896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63763))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar64722 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64722, "1", 10);
void* a6366663897 = encode_mpz(mpzvar64722);

//creating new closure instance
void** clo64724 = alloc_clo(lam64047_fptr, 4);

//setting env list
clo64724[1] = kont63763;
clo64724[2] = _u43;
clo64724[3] = length;
clo64724[4] = a6366663897;
void* f6376563898 = encode_clo(clo64724);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6376563898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64050 = encode_clo(alloc_clo(lam64050_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64052 = arg_buffer[1];
//reading env and args
void* kont63763 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo64726 = alloc_clo(lam64050_fptr, 5);

//setting env list
clo64726[1] = kont63763;
clo64726[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo64726[3] = length;
clo64726[4] = lst;
clo64726[5] = cdr;
void* f6376663894 = encode_clo(clo64726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6376663894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam64053_fptr() // lam64053 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64054 = arg_buffer[1];
//reading env and args
void* x6367063905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63767 = (decode_clo(env64054))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63767);
arg_buffer[2] = x6367063905;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63767))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64053 = encode_clo(alloc_clo(lam64053_fptr, 0));

void* lam64055_fptr() // lam64055 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64056 = arg_buffer[1];
//reading env and args
void* a6367463913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6367263909 = (decode_clo(env64056))[3];
//not do dummy comment
void* kont63767 = (decode_clo(env64056))[2];
//not do dummy comment
void* cons = (decode_clo(env64056))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont63767;
arg_buffer[3] = a6367263909;
arg_buffer[4] = a6367463913;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64055 = encode_clo(alloc_clo(lam64055_fptr, 0));

void* lam64057_fptr() // lam64057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64058 = arg_buffer[1];
//reading env and args
void* a6367363911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6367263909 = (decode_clo(env64058))[5];
//not do dummy comment
void* kont63767 = (decode_clo(env64058))[4];
//not do dummy comment
void* map = (decode_clo(env64058))[3];
//not do dummy comment
void* proc = (decode_clo(env64058))[2];
//not do dummy comment
void* cons = (decode_clo(env64058))[1];

//creating new closure instance
void** clo64728 = alloc_clo(lam64055_fptr, 3);

//setting env list
clo64728[1] = cons;
clo64728[2] = kont63767;
clo64728[3] = a6367263909;
void* f6376963912 = encode_clo(clo64728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f6376963912;
arg_buffer[3] = proc;
arg_buffer[4] = a6367363911;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64057 = encode_clo(alloc_clo(lam64057_fptr, 0));

void* lam64059_fptr() // lam64059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64060 = arg_buffer[1];
//reading env and args
void* a6367263909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64060))[6];
//not do dummy comment
void* kont63767 = (decode_clo(env64060))[5];
//not do dummy comment
void* lst = (decode_clo(env64060))[4];
//not do dummy comment
void* map = (decode_clo(env64060))[3];
//not do dummy comment
void* proc = (decode_clo(env64060))[2];
//not do dummy comment
void* cons = (decode_clo(env64060))[1];

//creating new closure instance
void** clo64730 = alloc_clo(lam64057_fptr, 5);

//setting env list
clo64730[1] = cons;
clo64730[2] = proc;
clo64730[3] = map;
clo64730[4] = kont63767;
clo64730[5] = a6367263909;
void* f6377063910 = encode_clo(clo64730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6377063910;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64059 = encode_clo(alloc_clo(lam64059_fptr, 0));

void* lam64061_fptr() // lam64061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64062 = arg_buffer[1];
//reading env and args
void* a6367163907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64062))[6];
//not do dummy comment
void* kont63767 = (decode_clo(env64062))[5];
//not do dummy comment
void* lst = (decode_clo(env64062))[4];
//not do dummy comment
void* map = (decode_clo(env64062))[3];
//not do dummy comment
void* proc = (decode_clo(env64062))[2];
//not do dummy comment
void* cons = (decode_clo(env64062))[1];

//creating new closure instance
void** clo64732 = alloc_clo(lam64059_fptr, 6);

//setting env list
clo64732[1] = cons;
clo64732[2] = proc;
clo64732[3] = map;
clo64732[4] = lst;
clo64732[5] = kont63767;
clo64732[6] = cdr;
void* f6377163908 = encode_clo(clo64732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f6377163908;
arg_buffer[3] = a6367163907;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64061 = encode_clo(alloc_clo(lam64061_fptr, 0));

void* lam64063_fptr() // lam64063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64064 = arg_buffer[1];
//reading env and args
void* a6366963903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63767 = (decode_clo(env64064))[8];
//not do dummy comment
void* lst = (decode_clo(env64064))[7];
//not do dummy comment
void* map = (decode_clo(env64064))[6];
//not do dummy comment
void* proc = (decode_clo(env64064))[5];
//not do dummy comment
void* car = (decode_clo(env64064))[4];
//not do dummy comment
void* cons = (decode_clo(env64064))[3];
//not do dummy comment
void* list = (decode_clo(env64064))[2];
//not do dummy comment
void* cdr = (decode_clo(env64064))[1];

//if-clause
bool if_guard64733 = is_true(a6366963903);
if(if_guard64733)
{

//creating new closure instance
void** clo64735 = alloc_clo(lam64053_fptr, 1);

//setting env list
clo64735[1] = kont63767;
void* f6376863904 = encode_clo(clo64735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6376863904;
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
void** clo64737 = alloc_clo(lam64061_fptr, 6);

//setting env list
clo64737[1] = cons;
clo64737[2] = proc;
clo64737[3] = map;
clo64737[4] = lst;
clo64737[5] = kont63767;
clo64737[6] = cdr;
void* f6377263906 = encode_clo(clo64737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6377263906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64063 = encode_clo(alloc_clo(lam64063_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64065 = arg_buffer[1];
//reading env and args
void* kont63767 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo64739 = alloc_clo(lam64063_fptr, 8);

//setting env list
clo64739[1] = cdr;
clo64739[2] = list;
clo64739[3] = cons;
clo64739[4] = car;
clo64739[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo64739[6] = map;
clo64739[7] = lst;
clo64739[8] = kont63767;
void* f6377363902 = encode_clo(clo64739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6377363902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam64066_fptr() // lam64066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64067 = arg_buffer[1];
//reading env and args
void* x6367663917 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63774 = (decode_clo(env64067))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63774);
arg_buffer[2] = x6367663917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63774))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64066 = encode_clo(alloc_clo(lam64066_fptr, 0));

void* lam64068_fptr() // lam64068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64069 = arg_buffer[1];
//reading env and args
void* a6368163927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63774 = (decode_clo(env64069))[3];
//not do dummy comment
void* cons = (decode_clo(env64069))[2];
//not do dummy comment
void* a6367963923 = (decode_clo(env64069))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont63774;
arg_buffer[3] = a6367963923;
arg_buffer[4] = a6368163927;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64068 = encode_clo(alloc_clo(lam64068_fptr, 0));

void* lam64070_fptr() // lam64070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64071 = arg_buffer[1];
//reading env and args
void* a6368063925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env64071))[5];
//not do dummy comment
void* kont63774 = (decode_clo(env64071))[4];
//not do dummy comment
void* filter = (decode_clo(env64071))[3];
//not do dummy comment
void* cons = (decode_clo(env64071))[2];
//not do dummy comment
void* a6367963923 = (decode_clo(env64071))[1];

//creating new closure instance
void** clo64741 = alloc_clo(lam64068_fptr, 3);

//setting env list
clo64741[1] = a6367963923;
clo64741[2] = cons;
clo64741[3] = kont63774;
void* f6377663926 = encode_clo(clo64741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f6377663926;
arg_buffer[3] = op;
arg_buffer[4] = a6368063925;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64070 = encode_clo(alloc_clo(lam64070_fptr, 0));

void* lam64072_fptr() // lam64072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64073 = arg_buffer[1];
//reading env and args
void* a6367963923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64073))[6];
//not do dummy comment
void* lst = (decode_clo(env64073))[5];
//not do dummy comment
void* op = (decode_clo(env64073))[4];
//not do dummy comment
void* kont63774 = (decode_clo(env64073))[3];
//not do dummy comment
void* filter = (decode_clo(env64073))[2];
//not do dummy comment
void* cons = (decode_clo(env64073))[1];

//creating new closure instance
void** clo64743 = alloc_clo(lam64070_fptr, 5);

//setting env list
clo64743[1] = a6367963923;
clo64743[2] = cons;
clo64743[3] = filter;
clo64743[4] = kont63774;
clo64743[5] = op;
void* f6377763924 = encode_clo(clo64743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6377763924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64072 = encode_clo(alloc_clo(lam64072_fptr, 0));

void* lam64074_fptr() // lam64074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64075 = arg_buffer[1];
//reading env and args
void* a6368263929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env64075))[3];
//not do dummy comment
void* kont63774 = (decode_clo(env64075))[2];
//not do dummy comment
void* filter = (decode_clo(env64075))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont63774;
arg_buffer[3] = op;
arg_buffer[4] = a6368263929;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64074 = encode_clo(alloc_clo(lam64074_fptr, 0));

void* lam64076_fptr() // lam64076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64077 = arg_buffer[1];
//reading env and args
void* a6367863921 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64077))[7];
//not do dummy comment
void* lst = (decode_clo(env64077))[6];
//not do dummy comment
void* op = (decode_clo(env64077))[5];
//not do dummy comment
void* kont63774 = (decode_clo(env64077))[4];
//not do dummy comment
void* cons = (decode_clo(env64077))[3];
//not do dummy comment
void* filter = (decode_clo(env64077))[2];
//not do dummy comment
void* car = (decode_clo(env64077))[1];

//if-clause
bool if_guard64744 = is_true(a6367863921);
if(if_guard64744)
{

//creating new closure instance
void** clo64746 = alloc_clo(lam64072_fptr, 6);

//setting env list
clo64746[1] = cons;
clo64746[2] = filter;
clo64746[3] = kont63774;
clo64746[4] = op;
clo64746[5] = lst;
clo64746[6] = cdr;
void* f6377863922 = encode_clo(clo64746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6377863922;
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
void** clo64748 = alloc_clo(lam64074_fptr, 3);

//setting env list
clo64748[1] = filter;
clo64748[2] = kont63774;
clo64748[3] = op;
void* f6377963928 = encode_clo(clo64748);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6377963928;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64076 = encode_clo(alloc_clo(lam64076_fptr, 0));

void* lam64078_fptr() // lam64078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64079 = arg_buffer[1];
//reading env and args
void* a6367763919 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64079))[7];
//not do dummy comment
void* lst = (decode_clo(env64079))[6];
//not do dummy comment
void* op = (decode_clo(env64079))[5];
//not do dummy comment
void* kont63774 = (decode_clo(env64079))[4];
//not do dummy comment
void* cons = (decode_clo(env64079))[3];
//not do dummy comment
void* filter = (decode_clo(env64079))[2];
//not do dummy comment
void* car = (decode_clo(env64079))[1];

//creating new closure instance
void** clo64750 = alloc_clo(lam64076_fptr, 7);

//setting env list
clo64750[1] = car;
clo64750[2] = filter;
clo64750[3] = cons;
clo64750[4] = kont63774;
clo64750[5] = op;
clo64750[6] = lst;
clo64750[7] = cdr;
void* f6378063920 = encode_clo(clo64750);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f6378063920;
arg_buffer[3] = a6367763919;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64078 = encode_clo(alloc_clo(lam64078_fptr, 0));

void* lam64080_fptr() // lam64080 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64081 = arg_buffer[1];
//reading env and args
void* a6367563915 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env64081))[8];
//not do dummy comment
void* op = (decode_clo(env64081))[7];
//not do dummy comment
void* kont63774 = (decode_clo(env64081))[6];
//not do dummy comment
void* cons = (decode_clo(env64081))[5];
//not do dummy comment
void* list = (decode_clo(env64081))[4];
//not do dummy comment
void* cdr = (decode_clo(env64081))[3];
//not do dummy comment
void* filter = (decode_clo(env64081))[2];
//not do dummy comment
void* car = (decode_clo(env64081))[1];

//if-clause
bool if_guard64751 = is_true(a6367563915);
if(if_guard64751)
{

//creating new closure instance
void** clo64753 = alloc_clo(lam64066_fptr, 1);

//setting env list
clo64753[1] = kont63774;
void* f6377563916 = encode_clo(clo64753);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f6377563916;
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
void** clo64755 = alloc_clo(lam64078_fptr, 7);

//setting env list
clo64755[1] = car;
clo64755[2] = filter;
clo64755[3] = cons;
clo64755[4] = kont63774;
clo64755[5] = op;
clo64755[6] = lst;
clo64755[7] = cdr;
void* f6378163918 = encode_clo(clo64755);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6378163918;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64080 = encode_clo(alloc_clo(lam64080_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64082 = arg_buffer[1];
//reading env and args
void* kont63774 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo64757 = alloc_clo(lam64080_fptr, 8);

//setting env list
clo64757[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo64757[2] = filter;
clo64757[3] = cdr;
clo64757[4] = list;
clo64757[5] = cons;
clo64757[6] = kont63774;
clo64757[7] = op;
clo64757[8] = lst;
void* f6378263914 = encode_clo(clo64757);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6378263914;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam64083_fptr() // lam64083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64084 = arg_buffer[1];
//reading env and args
void* a6368763937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63783 = (decode_clo(env64084))[3];
//not do dummy comment
void* drop = (decode_clo(env64084))[2];
//not do dummy comment
void* a6368563934 = (decode_clo(env64084))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont63783;
arg_buffer[3] = a6368563934;
arg_buffer[4] = a6368763937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64083 = encode_clo(alloc_clo(lam64083_fptr, 0));

void* lam64086_fptr() // lam64086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64087 = arg_buffer[1];
//reading env and args
void* a6368563934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63783 = (decode_clo(env64087))[4];
//not do dummy comment
void* drop = (decode_clo(env64087))[3];
//not do dummy comment
void* n = (decode_clo(env64087))[2];
//not do dummy comment
void* _u45 = (decode_clo(env64087))[1];
mpz_t* mpzvar64758 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64758, "1", 10);
void* a6368663935 = encode_mpz(mpzvar64758);

//creating new closure instance
void** clo64760 = alloc_clo(lam64083_fptr, 3);

//setting env list
clo64760[1] = a6368563934;
clo64760[2] = drop;
clo64760[3] = kont63783;
void* f6378463936 = encode_clo(clo64760);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f6378463936;
arg_buffer[3] = n;
arg_buffer[4] = a6368663935;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64086 = encode_clo(alloc_clo(lam64086_fptr, 0));

void* lam64088_fptr() // lam64088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64089 = arg_buffer[1];
//reading env and args
void* a6368463932 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64089))[6];
//not do dummy comment
void* kont63783 = (decode_clo(env64089))[5];
//not do dummy comment
void* n = (decode_clo(env64089))[4];
//not do dummy comment
void* _u45 = (decode_clo(env64089))[3];
//not do dummy comment
void* lst = (decode_clo(env64089))[2];
//not do dummy comment
void* drop = (decode_clo(env64089))[1];

//if-clause
bool if_guard64761 = is_true(a6368463932);
if(if_guard64761)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63783);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63783))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo64763 = alloc_clo(lam64086_fptr, 4);

//setting env list
clo64763[1] = _u45;
clo64763[2] = n;
clo64763[3] = drop;
clo64763[4] = kont63783;
void* f6378563933 = encode_clo(clo64763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6378563933;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64088 = encode_clo(alloc_clo(lam64088_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64091 = arg_buffer[1];
//reading env and args
void* kont63783 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar64764 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64764, "0", 10);
void* a6368363930 = encode_mpz(mpzvar64764);

//creating new closure instance
void** clo64766 = alloc_clo(lam64088_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo64766[1] = drop;
clo64766[2] = lst;
clo64766[3] = _u45;
clo64766[4] = n;
clo64766[5] = kont63783;
clo64766[6] = cdr;
void* f6378663931 = encode_clo(clo64766);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f6378663931;
arg_buffer[3] = n;
arg_buffer[4] = a6368363930;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam64092_fptr() // lam64092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64093 = arg_buffer[1];
//reading env and args
void* a6369163945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6368963941 = (decode_clo(env64093))[3];
//not do dummy comment
void* kont63787 = (decode_clo(env64093))[2];
//not do dummy comment
void* proc = (decode_clo(env64093))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont63787;
arg_buffer[3] = a6368963941;
arg_buffer[4] = a6369163945;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64092 = encode_clo(alloc_clo(lam64092_fptr, 0));

void* lam64094_fptr() // lam64094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64095 = arg_buffer[1];
//reading env and args
void* a6369063943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6368963941 = (decode_clo(env64095))[5];
//not do dummy comment
void* foldr = (decode_clo(env64095))[4];
//not do dummy comment
void* kont63787 = (decode_clo(env64095))[3];
//not do dummy comment
void* proc = (decode_clo(env64095))[2];
//not do dummy comment
void* acc = (decode_clo(env64095))[1];

//creating new closure instance
void** clo64768 = alloc_clo(lam64092_fptr, 3);

//setting env list
clo64768[1] = proc;
clo64768[2] = kont63787;
clo64768[3] = a6368963941;
void* f6378863944 = encode_clo(clo64768);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f6378863944;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a6369063943;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64094 = encode_clo(alloc_clo(lam64094_fptr, 0));

void* lam64096_fptr() // lam64096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64097 = arg_buffer[1];
//reading env and args
void* a6368963941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64097))[6];
//not do dummy comment
void* kont63787 = (decode_clo(env64097))[5];
//not do dummy comment
void* foldr = (decode_clo(env64097))[4];
//not do dummy comment
void* lst = (decode_clo(env64097))[3];
//not do dummy comment
void* proc = (decode_clo(env64097))[2];
//not do dummy comment
void* acc = (decode_clo(env64097))[1];

//creating new closure instance
void** clo64770 = alloc_clo(lam64094_fptr, 5);

//setting env list
clo64770[1] = acc;
clo64770[2] = proc;
clo64770[3] = kont63787;
clo64770[4] = foldr;
clo64770[5] = a6368963941;
void* f6378963942 = encode_clo(clo64770);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6378963942;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64096 = encode_clo(alloc_clo(lam64096_fptr, 0));

void* lam64098_fptr() // lam64098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64099 = arg_buffer[1];
//reading env and args
void* a6368863939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64099))[7];
//not do dummy comment
void* kont63787 = (decode_clo(env64099))[6];
//not do dummy comment
void* car = (decode_clo(env64099))[5];
//not do dummy comment
void* foldr = (decode_clo(env64099))[4];
//not do dummy comment
void* lst = (decode_clo(env64099))[3];
//not do dummy comment
void* proc = (decode_clo(env64099))[2];
//not do dummy comment
void* acc = (decode_clo(env64099))[1];

//if-clause
bool if_guard64771 = is_true(a6368863939);
if(if_guard64771)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63787);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63787))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo64773 = alloc_clo(lam64096_fptr, 6);

//setting env list
clo64773[1] = acc;
clo64773[2] = proc;
clo64773[3] = lst;
clo64773[4] = foldr;
clo64773[5] = kont63787;
clo64773[6] = cdr;
void* f6379063940 = encode_clo(clo64773);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6379063940;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64098 = encode_clo(alloc_clo(lam64098_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64100 = arg_buffer[1];
//reading env and args
void* kont63787 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo64775 = alloc_clo(lam64098_fptr, 7);

//setting env list
clo64775[1] = acc;
clo64775[2] = proc;
clo64775[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo64775[4] = foldr;
clo64775[5] = car;
clo64775[6] = kont63787;
clo64775[7] = cdr;
void* f6379163938 = encode_clo(clo64775);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6379163938;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam64101_fptr() // lam64101 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64102 = arg_buffer[1];
//reading env and args
void* a6369563953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a6369363949 = (decode_clo(env64102))[3];
//not do dummy comment
void* kont63792 = (decode_clo(env64102))[2];
//not do dummy comment
void* cons = (decode_clo(env64102))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont63792;
arg_buffer[3] = a6369363949;
arg_buffer[4] = a6369563953;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64101 = encode_clo(alloc_clo(lam64101_fptr, 0));

void* lam64103_fptr() // lam64103 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64104 = arg_buffer[1];
//reading env and args
void* a6369463951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63792 = (decode_clo(env64104))[5];
//not do dummy comment
void* lst2 = (decode_clo(env64104))[4];
//not do dummy comment
void* cons = (decode_clo(env64104))[3];
//not do dummy comment
void* append = (decode_clo(env64104))[2];
//not do dummy comment
void* a6369363949 = (decode_clo(env64104))[1];

//creating new closure instance
void** clo64777 = alloc_clo(lam64101_fptr, 3);

//setting env list
clo64777[1] = cons;
clo64777[2] = kont63792;
clo64777[3] = a6369363949;
void* f6379363952 = encode_clo(clo64777);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f6379363952;
arg_buffer[3] = a6369463951;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64103 = encode_clo(alloc_clo(lam64103_fptr, 0));

void* lam64105_fptr() // lam64105 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64106 = arg_buffer[1];
//reading env and args
void* a6369363949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64106))[6];
//not do dummy comment
void* append = (decode_clo(env64106))[5];
//not do dummy comment
void* kont63792 = (decode_clo(env64106))[4];
//not do dummy comment
void* lst2 = (decode_clo(env64106))[3];
//not do dummy comment
void* lst1 = (decode_clo(env64106))[2];
//not do dummy comment
void* cons = (decode_clo(env64106))[1];

//creating new closure instance
void** clo64779 = alloc_clo(lam64103_fptr, 5);

//setting env list
clo64779[1] = a6369363949;
clo64779[2] = append;
clo64779[3] = cons;
clo64779[4] = lst2;
clo64779[5] = kont63792;
void* f6379463950 = encode_clo(clo64779);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f6379463950;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64105 = encode_clo(alloc_clo(lam64105_fptr, 0));

void* lam64107_fptr() // lam64107 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64108 = arg_buffer[1];
//reading env and args
void* a6369263947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env64108))[7];
//not do dummy comment
void* append = (decode_clo(env64108))[6];
//not do dummy comment
void* kont63792 = (decode_clo(env64108))[5];
//not do dummy comment
void* lst2 = (decode_clo(env64108))[4];
//not do dummy comment
void* cons = (decode_clo(env64108))[3];
//not do dummy comment
void* lst1 = (decode_clo(env64108))[2];
//not do dummy comment
void* car = (decode_clo(env64108))[1];

//if-clause
bool if_guard64780 = is_true(a6369263947);
if(if_guard64780)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63792);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63792))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo64782 = alloc_clo(lam64105_fptr, 6);

//setting env list
clo64782[1] = cons;
clo64782[2] = lst1;
clo64782[3] = lst2;
clo64782[4] = kont63792;
clo64782[5] = append;
clo64782[6] = cdr;
void* f6379563948 = encode_clo(clo64782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f6379563948;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam64107 = encode_clo(alloc_clo(lam64107_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64109 = arg_buffer[1];
//reading env and args
void* kont63792 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo64784 = alloc_clo(lam64107_fptr, 7);

//setting env list
clo64784[1] = car;
clo64784[2] = lst1;
clo64784[3] = cons;
clo64784[4] = lst2;
clo64784[5] = kont63792;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo64784[6] = append;
clo64784[7] = cdr;
void* f6379663946 = encode_clo(clo64784);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f6379663946;
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
void* _64110 = arg_buffer[1];
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

void* kont6379763954 = prim_car(lst);
void* lst63955 = prim_cdr(lst);
void* x6369663956 = apply_prim_hash(lst63955);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont6379763954);
arg_buffer[2] = x6369663956;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont6379763954))[0]);
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
void* _64111 = arg_buffer[1];
//reading env and args
void* kont63799 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6369763957 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63799);
arg_buffer[2] = x6369763957;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63799))[0]);
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
void* _64112 = arg_buffer[1];
//reading env and args
void* kont63800 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x6369863958 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63800);
arg_buffer[2] = x6369863958;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63800))[0]);
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
void* _64113 = arg_buffer[1];
//reading env and args
void* kont63801 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x6369963959 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63801);
arg_buffer[2] = x6369963959;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63801))[0]);
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
void* _64114 = arg_buffer[1];
//reading env and args
void* kont63802 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x6370063960 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63802);
arg_buffer[2] = x6370063960;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63802))[0]);
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
void* _64119 = arg_buffer[1];
//reading env and args
void* kont63803 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar64785 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64785, "100", 10);
void* a6370163961 = encode_mpz(mpzvar64785);
mpz_t* mpzvar64786 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64786, "80", 10);
void* a6370263962 = encode_mpz(mpzvar64786);
mpz_t* mpzvar64787 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64787, "10", 10);
void* a6370363963 = encode_mpz(mpzvar64787);
mpz_t* mpzvar64788 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar64788, "2", 10);
void* a6370463964 = encode_mpz(mpzvar64788);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = kont63803;
arg_buffer[3] = a6370163961;
arg_buffer[4] = a6370263962;
arg_buffer[5] = a6370363963;
arg_buffer[6] = a6370463964;
arg_buffer[0] = reinterpret_cast<void*>(6);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam64120_fptr() // lam64120 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env64121 = arg_buffer[1];
//reading env and args
void* x6370563966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont63804 = (decode_clo(env64121))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont63804);
arg_buffer[2] = x6370563966;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont63804))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam64120 = encode_clo(alloc_clo(lam64120_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _64122 = arg_buffer[1];
//reading env and args
void* kont63804 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo64790 = alloc_clo(lam64120_fptr, 1);

//setting env list
clo64790[1] = kont63804;
void* f6380563965 = encode_clo(clo64790);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f6380563965;
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

