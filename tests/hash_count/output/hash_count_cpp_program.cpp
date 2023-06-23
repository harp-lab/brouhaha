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
void* _56150 = arg_buffer[1];
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

void* kont5588455985 = prim_car(lst);
void* lst55986 = prim_cdr(lst);
void* x5579355987 = apply_prim__u43(lst55986);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588455985);
arg_buffer[2] = x5579355987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588455985))[0]);
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
void* _56151 = arg_buffer[1];
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

void* kont5588655988 = prim_car(lst);
void* lst55989 = prim_cdr(lst);
void* x5579455990 = apply_prim__u45(lst55989);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588655988);
arg_buffer[2] = x5579455990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588655988))[0]);
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
void* _56152 = arg_buffer[1];
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

void* kont5588855991 = prim_car(lst);
void* lst55992 = prim_cdr(lst);
void* x5579555993 = apply_prim__u42(lst55992);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588855991);
arg_buffer[2] = x5579555993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588855991))[0]);
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
void* _56153 = arg_buffer[1];
//reading env and args
void* kont55890 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5579655994 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55890);
arg_buffer[2] = x5579655994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55890))[0]);
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
void* _56154 = arg_buffer[1];
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

void* kont5589155995 = prim_car(lst);
void* lst55996 = prim_cdr(lst);
void* x5579755997 = apply_prim__u47(lst55996);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5589155995);
arg_buffer[2] = x5579755997;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5589155995))[0]);
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
void* _56155 = arg_buffer[1];
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

void* kont5589355998 = prim_car(lst);
void* lst55999 = prim_cdr(lst);
void* x5579856000 = apply_prim__u61(lst55999);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5589355998);
arg_buffer[2] = x5579856000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5589355998))[0]);
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
void* _56156 = arg_buffer[1];
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

void* kont5589556001 = prim_car(lst);
void* lst56002 = prim_cdr(lst);
void* x5579956003 = apply_prim__u62(lst56002);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5589556001);
arg_buffer[2] = x5579956003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5589556001))[0]);
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
void* _56157 = arg_buffer[1];
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

void* kont5589756004 = prim_car(lst);
void* lst56005 = prim_cdr(lst);
void* x5580056006 = apply_prim__u60(lst56005);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5589756004);
arg_buffer[2] = x5580056006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5589756004))[0]);
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
void* _56158 = arg_buffer[1];
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

void* kont5589956007 = prim_car(lst);
void* lst56008 = prim_cdr(lst);
void* x5580156009 = apply_prim__u60_u61(lst56008);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5589956007);
arg_buffer[2] = x5580156009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5589956007))[0]);
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
void* _56159 = arg_buffer[1];
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

void* kont5590156010 = prim_car(lst);
void* lst56011 = prim_cdr(lst);
void* x5580256012 = apply_prim__u62_u61(lst56011);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5590156010);
arg_buffer[2] = x5580256012;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5590156010))[0]);
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
void* _56160 = arg_buffer[1];
//reading env and args
void* kont55903 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5580356013 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55903);
arg_buffer[2] = x5580356013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55903))[0]);
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
void* _56161 = arg_buffer[1];
//reading env and args
void* kont55904 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5580456014 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55904);
arg_buffer[2] = x5580456014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55904))[0]);
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
void* _56162 = arg_buffer[1];
//reading env and args
void* kont55905 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5580556015 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55905);
arg_buffer[2] = x5580556015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55905))[0]);
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
void* _56163 = arg_buffer[1];
//reading env and args
void* kont55906 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5580656016 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55906);
arg_buffer[2] = x5580656016;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55906))[0]);
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
void* _56164 = arg_buffer[1];
//reading env and args
void* kont55907 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5580756017 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55907);
arg_buffer[2] = x5580756017;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55907))[0]);
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
void* _56165 = arg_buffer[1];
//reading env and args
void* kont55908 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5580856018 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55908);
arg_buffer[2] = x5580856018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55908))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam56166_fptr() // lam56166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56167 = arg_buffer[1];
//reading env and args
void* a5581156022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5580956019 = (decode_clo(env56167))[3];
//not do dummy comment
void* kont55909 = (decode_clo(env56167))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env56167))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55909;
arg_buffer[3] = a5580956019;
arg_buffer[4] = a5581156022;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56166 = encode_clo(alloc_clo(lam56166_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56170 = arg_buffer[1];
//reading env and args
void* kont55909 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57094 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57094, "0", 10);
void* a5580956019 = encode_mpz(mpzvar57094);
mpz_t* mpzvar57095 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57095, "2", 10);
void* a5581056020 = encode_mpz(mpzvar57095);

//creating new closure instance
void** clo57097 = alloc_clo(lam56166_fptr, 3);

//setting env list
clo57097[1] = equal_u63;
clo57097[2] = kont55909;
clo57097[3] = a5580956019;
void* f5591056021 = encode_clo(clo57097);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5591056021;
arg_buffer[3] = x;
arg_buffer[4] = a5581056020;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam56171_fptr() // lam56171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56172 = arg_buffer[1];
//reading env and args
void* a5581456026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env56172))[3];
//not do dummy comment
void* kont55911 = (decode_clo(env56172))[2];
//not do dummy comment
void* a5581256023 = (decode_clo(env56172))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55911;
arg_buffer[3] = a5581256023;
arg_buffer[4] = a5581456026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56171 = encode_clo(alloc_clo(lam56171_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56175 = arg_buffer[1];
//reading env and args
void* kont55911 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar57098 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57098, "1", 10);
void* a5581256023 = encode_mpz(mpzvar57098);
mpz_t* mpzvar57099 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57099, "2", 10);
void* a5581356024 = encode_mpz(mpzvar57099);

//creating new closure instance
void** clo57101 = alloc_clo(lam56171_fptr, 3);

//setting env list
clo57101[1] = a5581256023;
clo57101[2] = kont55911;
clo57101[3] = equal_u63;
void* f5591256025 = encode_clo(clo57101);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5591256025;
arg_buffer[3] = x;
arg_buffer[4] = a5581356024;
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
void* _56176 = arg_buffer[1];
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

void* kont5591356027 = prim_car(x);
void* x56028 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5591356027);
arg_buffer[2] = x56028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5591356027))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam56179_fptr() // lam56179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56180 = arg_buffer[1];
//reading env and args
void* a5582056038 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* x = (decode_clo(env56180))[3];
//not do dummy comment
void* kont55915 = (decode_clo(env56180))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56180))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont55915;
arg_buffer[3] = x;
arg_buffer[4] = a5582056038;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56179 = encode_clo(alloc_clo(lam56179_fptr, 0));

void* lam56181_fptr() // lam56181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56182 = arg_buffer[1];
//reading env and args
void* a5581856035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56182))[5];
//not do dummy comment
void* lst = (decode_clo(env56182))[4];
//not do dummy comment
void* x = (decode_clo(env56182))[3];
//not do dummy comment
void* kont55915 = (decode_clo(env56182))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56182))[1];

//if-clause
bool if_guard57102 = is_true(a5581856035);
if(if_guard57102)
{
void* x5581956036 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55915);
arg_buffer[2] = x5581956036;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55915))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57104 = alloc_clo(lam56179_fptr, 3);

//setting env list
clo57104[1] = member_u63;
clo57104[2] = kont55915;
clo57104[3] = x;
void* f5591656037 = encode_clo(clo57104);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5591656037;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56181 = encode_clo(alloc_clo(lam56181_fptr, 0));

void* lam56183_fptr() // lam56183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56184 = arg_buffer[1];
//reading env and args
void* a5581756033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56184))[6];
//not do dummy comment
void* lst = (decode_clo(env56184))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env56184))[4];
//not do dummy comment
void* x = (decode_clo(env56184))[3];
//not do dummy comment
void* kont55915 = (decode_clo(env56184))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56184))[1];

//creating new closure instance
void** clo57106 = alloc_clo(lam56181_fptr, 5);

//setting env list
clo57106[1] = member_u63;
clo57106[2] = kont55915;
clo57106[3] = x;
clo57106[4] = lst;
clo57106[5] = cdr;
void* f5591756034 = encode_clo(clo57106);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5591756034;
arg_buffer[3] = a5581756033;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56183 = encode_clo(alloc_clo(lam56183_fptr, 0));

void* lam56185_fptr() // lam56185 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56186 = arg_buffer[1];
//reading env and args
void* a5581556030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56186))[7];
//not do dummy comment
void* lst = (decode_clo(env56186))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env56186))[5];
//not do dummy comment
void* x = (decode_clo(env56186))[4];
//not do dummy comment
void* car = (decode_clo(env56186))[3];
//not do dummy comment
void* kont55915 = (decode_clo(env56186))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56186))[1];

//if-clause
bool if_guard57107 = is_true(a5581556030);
if(if_guard57107)
{
void* x5581656031 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55915);
arg_buffer[2] = x5581656031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55915))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57109 = alloc_clo(lam56183_fptr, 6);

//setting env list
clo57109[1] = member_u63;
clo57109[2] = kont55915;
clo57109[3] = x;
clo57109[4] = equal_u63;
clo57109[5] = lst;
clo57109[6] = cdr;
void* f5591856032 = encode_clo(clo57109);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5591856032;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56185 = encode_clo(alloc_clo(lam56185_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56187 = arg_buffer[1];
//reading env and args
void* kont55915 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57111 = alloc_clo(lam56185_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo57111[1] = member_u63;
clo57111[2] = kont55915;
clo57111[3] = car;
clo57111[4] = x;
clo57111[5] = equal_u63;
clo57111[6] = lst;
clo57111[7] = cdr;
void* f5591956029 = encode_clo(clo57111);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5591956029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam56188_fptr() // lam56188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56189 = arg_buffer[1];
//reading env and args
void* a5582456046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55920 = (decode_clo(env56189))[4];
//not do dummy comment
void* fun = (decode_clo(env56189))[3];
//not do dummy comment
void* foldl = (decode_clo(env56189))[2];
//not do dummy comment
void* a5582356044 = (decode_clo(env56189))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont55920;
arg_buffer[3] = fun;
arg_buffer[4] = a5582356044;
arg_buffer[5] = a5582456046;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56188 = encode_clo(alloc_clo(lam56188_fptr, 0));

void* lam56190_fptr() // lam56190 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56191 = arg_buffer[1];
//reading env and args
void* a5582356044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56191))[5];
//not do dummy comment
void* kont55920 = (decode_clo(env56191))[4];
//not do dummy comment
void* lst = (decode_clo(env56191))[3];
//not do dummy comment
void* fun = (decode_clo(env56191))[2];
//not do dummy comment
void* foldl = (decode_clo(env56191))[1];

//creating new closure instance
void** clo57113 = alloc_clo(lam56188_fptr, 4);

//setting env list
clo57113[1] = a5582356044;
clo57113[2] = foldl;
clo57113[3] = fun;
clo57113[4] = kont55920;
void* f5592156045 = encode_clo(clo57113);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5592156045;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56190 = encode_clo(alloc_clo(lam56190_fptr, 0));

void* lam56192_fptr() // lam56192 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56193 = arg_buffer[1];
//reading env and args
void* a5582256042 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56193))[6];
//not do dummy comment
void* kont55920 = (decode_clo(env56193))[5];
//not do dummy comment
void* lst = (decode_clo(env56193))[4];
//not do dummy comment
void* fun = (decode_clo(env56193))[3];
//not do dummy comment
void* acc = (decode_clo(env56193))[2];
//not do dummy comment
void* foldl = (decode_clo(env56193))[1];

//creating new closure instance
void** clo57115 = alloc_clo(lam56190_fptr, 5);

//setting env list
clo57115[1] = foldl;
clo57115[2] = fun;
clo57115[3] = lst;
clo57115[4] = kont55920;
clo57115[5] = cdr;
void* f5592256043 = encode_clo(clo57115);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5592256043;
arg_buffer[3] = a5582256042;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56192 = encode_clo(alloc_clo(lam56192_fptr, 0));

void* lam56194_fptr() // lam56194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56195 = arg_buffer[1];
//reading env and args
void* a5582156040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56195))[7];
//not do dummy comment
void* kont55920 = (decode_clo(env56195))[6];
//not do dummy comment
void* lst = (decode_clo(env56195))[5];
//not do dummy comment
void* fun = (decode_clo(env56195))[4];
//not do dummy comment
void* acc = (decode_clo(env56195))[3];
//not do dummy comment
void* car = (decode_clo(env56195))[2];
//not do dummy comment
void* foldl = (decode_clo(env56195))[1];

//if-clause
bool if_guard57116 = is_true(a5582156040);
if(if_guard57116)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55920);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55920))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57118 = alloc_clo(lam56192_fptr, 6);

//setting env list
clo57118[1] = foldl;
clo57118[2] = acc;
clo57118[3] = fun;
clo57118[4] = lst;
clo57118[5] = kont55920;
clo57118[6] = cdr;
void* f5592356041 = encode_clo(clo57118);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5592356041;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56194 = encode_clo(alloc_clo(lam56194_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56196 = arg_buffer[1];
//reading env and args
void* kont55920 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57120 = alloc_clo(lam56194_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo57120[1] = foldl;
clo57120[2] = car;
clo57120[3] = acc;
clo57120[4] = fun;
clo57120[5] = lst;
clo57120[6] = kont55920;
clo57120[7] = cdr;
void* f5592456039 = encode_clo(clo57120);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5592456039;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam56197_fptr() // lam56197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56198 = arg_buffer[1];
//reading env and args
void* a5582856054 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5582656050 = (decode_clo(env56198))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56198))[2];
//not do dummy comment
void* kont55925 = (decode_clo(env56198))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55925;
arg_buffer[3] = a5582656050;
arg_buffer[4] = a5582856054;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56197 = encode_clo(alloc_clo(lam56197_fptr, 0));

void* lam56199_fptr() // lam56199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56200 = arg_buffer[1];
//reading env and args
void* a5582756052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5582656050 = (decode_clo(env56200))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56200))[4];
//not do dummy comment
void* kont55925 = (decode_clo(env56200))[3];
//not do dummy comment
void* lst2 = (decode_clo(env56200))[2];
//not do dummy comment
void* cons = (decode_clo(env56200))[1];

//creating new closure instance
void** clo57122 = alloc_clo(lam56197_fptr, 3);

//setting env list
clo57122[1] = kont55925;
clo57122[2] = reverse_u45helper;
clo57122[3] = a5582656050;
void* f5592656053 = encode_clo(clo57122);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5592656053;
arg_buffer[3] = a5582756052;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56199 = encode_clo(alloc_clo(lam56199_fptr, 0));

void* lam56201_fptr() // lam56201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56202 = arg_buffer[1];
//reading env and args
void* a5582656050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56202))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56202))[5];
//not do dummy comment
void* kont55925 = (decode_clo(env56202))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56202))[3];
//not do dummy comment
void* car = (decode_clo(env56202))[2];
//not do dummy comment
void* cons = (decode_clo(env56202))[1];

//creating new closure instance
void** clo57124 = alloc_clo(lam56199_fptr, 5);

//setting env list
clo57124[1] = cons;
clo57124[2] = lst2;
clo57124[3] = kont55925;
clo57124[4] = reverse_u45helper;
clo57124[5] = a5582656050;
void* f5592756051 = encode_clo(clo57124);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5592756051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56201 = encode_clo(alloc_clo(lam56201_fptr, 0));

void* lam56203_fptr() // lam56203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56204 = arg_buffer[1];
//reading env and args
void* a5582556048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56204))[7];
//not do dummy comment
void* lst = (decode_clo(env56204))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56204))[5];
//not do dummy comment
void* kont55925 = (decode_clo(env56204))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56204))[3];
//not do dummy comment
void* car = (decode_clo(env56204))[2];
//not do dummy comment
void* cons = (decode_clo(env56204))[1];

//if-clause
bool if_guard57125 = is_true(a5582556048);
if(if_guard57125)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55925);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55925))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57127 = alloc_clo(lam56201_fptr, 6);

//setting env list
clo57127[1] = cons;
clo57127[2] = car;
clo57127[3] = lst2;
clo57127[4] = kont55925;
clo57127[5] = reverse_u45helper;
clo57127[6] = lst;
void* f5592856049 = encode_clo(clo57127);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5592856049;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56203 = encode_clo(alloc_clo(lam56203_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56205 = arg_buffer[1];
//reading env and args
void* kont55925 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57129 = alloc_clo(lam56203_fptr, 7);

//setting env list
clo57129[1] = cons;
clo57129[2] = car;
clo57129[3] = lst2;
clo57129[4] = kont55925;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo57129[5] = reverse_u45helper;
clo57129[6] = lst;
clo57129[7] = cdr;
void* f5592956047 = encode_clo(clo57129);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5592956047;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam56206_fptr() // lam56206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56207 = arg_buffer[1];
//reading env and args
void* a5582956056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56207))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56207))[2];
//not do dummy comment
void* kont55930 = (decode_clo(env56207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55930;
arg_buffer[3] = lst;
arg_buffer[4] = a5582956056;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56206 = encode_clo(alloc_clo(lam56206_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56208 = arg_buffer[1];
//reading env and args
void* kont55930 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57131 = alloc_clo(lam56206_fptr, 3);

//setting env list
clo57131[1] = kont55930;
clo57131[2] = reverse_u45helper;
clo57131[3] = lst;
void* f5593156055 = encode_clo(clo57131);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5593156055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam56209_fptr() // lam56209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56210 = arg_buffer[1];
//reading env and args
void* x5583256061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55932 = (decode_clo(env56210))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55932);
arg_buffer[2] = x5583256061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55932))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56209 = encode_clo(alloc_clo(lam56209_fptr, 0));

void* lam56211_fptr() // lam56211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56212 = arg_buffer[1];
//reading env and args
void* a5583756070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5583356063 = (decode_clo(env56212))[4];
//not do dummy comment
void* a5583556066 = (decode_clo(env56212))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56212))[2];
//not do dummy comment
void* kont55932 = (decode_clo(env56212))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55932;
arg_buffer[3] = a5583356063;
arg_buffer[4] = a5583556066;
arg_buffer[5] = a5583756070;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56211 = encode_clo(alloc_clo(lam56211_fptr, 0));

void* lam56213_fptr() // lam56213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56214 = arg_buffer[1];
//reading env and args
void* a5583656068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5583356063 = (decode_clo(env56214))[6];
//not do dummy comment
void* a5583556066 = (decode_clo(env56214))[5];
//not do dummy comment
void* cons = (decode_clo(env56214))[4];
//not do dummy comment
void* kont55932 = (decode_clo(env56214))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56214))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56214))[1];

//creating new closure instance
void** clo57133 = alloc_clo(lam56211_fptr, 4);

//setting env list
clo57133[1] = kont55932;
clo57133[2] = take_u45helper;
clo57133[3] = a5583556066;
clo57133[4] = a5583356063;
void* f5593456069 = encode_clo(clo57133);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5593456069;
arg_buffer[3] = a5583656068;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56213 = encode_clo(alloc_clo(lam56213_fptr, 0));

void* lam56215_fptr() // lam56215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56216 = arg_buffer[1];
//reading env and args
void* a5583556066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5583356063 = (decode_clo(env56216))[7];
//not do dummy comment
void* lst = (decode_clo(env56216))[6];
//not do dummy comment
void* car = (decode_clo(env56216))[5];
//not do dummy comment
void* cons = (decode_clo(env56216))[4];
//not do dummy comment
void* kont55932 = (decode_clo(env56216))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56216))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56216))[1];

//creating new closure instance
void** clo57135 = alloc_clo(lam56213_fptr, 6);

//setting env list
clo57135[1] = lst2;
clo57135[2] = take_u45helper;
clo57135[3] = kont55932;
clo57135[4] = cons;
clo57135[5] = a5583556066;
clo57135[6] = a5583356063;
void* f5593556067 = encode_clo(clo57135);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5593556067;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56215 = encode_clo(alloc_clo(lam56215_fptr, 0));

void* lam56218_fptr() // lam56218 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56219 = arg_buffer[1];
//reading env and args
void* a5583356063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56219))[8];
//not do dummy comment
void* cons = (decode_clo(env56219))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env56219))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56219))[5];
//not do dummy comment
void* n = (decode_clo(env56219))[4];
//not do dummy comment
void* car = (decode_clo(env56219))[3];
//not do dummy comment
void* kont55932 = (decode_clo(env56219))[2];
//not do dummy comment
void* _u45 = (decode_clo(env56219))[1];
mpz_t* mpzvar57136 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57136, "1", 10);
void* a5583456064 = encode_mpz(mpzvar57136);

//creating new closure instance
void** clo57138 = alloc_clo(lam56215_fptr, 7);

//setting env list
clo57138[1] = lst2;
clo57138[2] = take_u45helper;
clo57138[3] = kont55932;
clo57138[4] = cons;
clo57138[5] = car;
clo57138[6] = lst;
clo57138[7] = a5583356063;
void* f5593656065 = encode_clo(clo57138);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5593656065;
arg_buffer[3] = n;
arg_buffer[4] = a5583456064;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56218 = encode_clo(alloc_clo(lam56218_fptr, 0));

void* lam56220_fptr() // lam56220 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56221 = arg_buffer[1];
//reading env and args
void* a5583156059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56221))[10];
//not do dummy comment
void* lst = (decode_clo(env56221))[9];
//not do dummy comment
void* reverse = (decode_clo(env56221))[8];
//not do dummy comment
void* cons = (decode_clo(env56221))[7];
//not do dummy comment
void* take_u45helper = (decode_clo(env56221))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56221))[5];
//not do dummy comment
void* n = (decode_clo(env56221))[4];
//not do dummy comment
void* car = (decode_clo(env56221))[3];
//not do dummy comment
void* kont55932 = (decode_clo(env56221))[2];
//not do dummy comment
void* _u45 = (decode_clo(env56221))[1];

//if-clause
bool if_guard57139 = is_true(a5583156059);
if(if_guard57139)
{

//creating new closure instance
void** clo57141 = alloc_clo(lam56209_fptr, 1);

//setting env list
clo57141[1] = kont55932;
void* f5593356060 = encode_clo(clo57141);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5593356060;
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
void** clo57143 = alloc_clo(lam56218_fptr, 8);

//setting env list
clo57143[1] = _u45;
clo57143[2] = kont55932;
clo57143[3] = car;
clo57143[4] = n;
clo57143[5] = lst2;
clo57143[6] = take_u45helper;
clo57143[7] = cons;
clo57143[8] = lst;
void* f5593756062 = encode_clo(clo57143);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5593756062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56220 = encode_clo(alloc_clo(lam56220_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56223 = arg_buffer[1];
//reading env and args
void* kont55932 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar57144 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57144, "0", 10);
void* a5583056057 = encode_mpz(mpzvar57144);

//creating new closure instance
void** clo57146 = alloc_clo(lam56220_fptr, 10);

//setting env list
clo57146[1] = _u45;
clo57146[2] = kont55932;
clo57146[3] = car;
clo57146[4] = n;
clo57146[5] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo57146[6] = take_u45helper;
clo57146[7] = cons;
clo57146[8] = reverse;
clo57146[9] = lst;
clo57146[10] = cdr;
void* f5593856058 = encode_clo(clo57146);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5593856058;
arg_buffer[3] = n;
arg_buffer[4] = a5583056057;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam56224_fptr() // lam56224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56225 = arg_buffer[1];
//reading env and args
void* a5583856072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56225))[4];
//not do dummy comment
void* kont55939 = (decode_clo(env56225))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56225))[2];
//not do dummy comment
void* n = (decode_clo(env56225))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55939;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5583856072;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56224 = encode_clo(alloc_clo(lam56224_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56226 = arg_buffer[1];
//reading env and args
void* kont55939 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57148 = alloc_clo(lam56224_fptr, 4);

//setting env list
clo57148[1] = n;
clo57148[2] = take_u45helper;
clo57148[3] = kont55939;
clo57148[4] = lst;
void* f5594056071 = encode_clo(clo57148);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5594056071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam56228_fptr() // lam56228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56229 = arg_buffer[1];
//reading env and args
void* a5584356080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55941 = (decode_clo(env56229))[3];
//not do dummy comment
void* _u43 = (decode_clo(env56229))[2];
//not do dummy comment
void* a5584156076 = (decode_clo(env56229))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont55941;
arg_buffer[3] = a5584156076;
arg_buffer[4] = a5584356080;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56228 = encode_clo(alloc_clo(lam56228_fptr, 0));

void* lam56230_fptr() // lam56230 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56231 = arg_buffer[1];
//reading env and args
void* a5584256078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env56231))[4];
//not do dummy comment
void* kont55941 = (decode_clo(env56231))[3];
//not do dummy comment
void* _u43 = (decode_clo(env56231))[2];
//not do dummy comment
void* a5584156076 = (decode_clo(env56231))[1];

//creating new closure instance
void** clo57150 = alloc_clo(lam56228_fptr, 3);

//setting env list
clo57150[1] = a5584156076;
clo57150[2] = _u43;
clo57150[3] = kont55941;
void* f5594256079 = encode_clo(clo57150);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5594256079;
arg_buffer[3] = a5584256078;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56230 = encode_clo(alloc_clo(lam56230_fptr, 0));

void* lam56233_fptr() // lam56233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56234 = arg_buffer[1];
//reading env and args
void* a5583956074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56234))[5];
//not do dummy comment
void* lst = (decode_clo(env56234))[4];
//not do dummy comment
void* length = (decode_clo(env56234))[3];
//not do dummy comment
void* kont55941 = (decode_clo(env56234))[2];
//not do dummy comment
void* _u43 = (decode_clo(env56234))[1];

//if-clause
bool if_guard57151 = is_true(a5583956074);
if(if_guard57151)
{
mpz_t* mpzvar57152 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57152, "0", 10);
void* x5584056075 = encode_mpz(mpzvar57152);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55941);
arg_buffer[2] = x5584056075;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55941))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar57153 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57153, "1", 10);
void* a5584156076 = encode_mpz(mpzvar57153);

//creating new closure instance
void** clo57155 = alloc_clo(lam56230_fptr, 4);

//setting env list
clo57155[1] = a5584156076;
clo57155[2] = _u43;
clo57155[3] = kont55941;
clo57155[4] = length;
void* f5594356077 = encode_clo(clo57155);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5594356077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56233 = encode_clo(alloc_clo(lam56233_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56235 = arg_buffer[1];
//reading env and args
void* kont55941 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo57157 = alloc_clo(lam56233_fptr, 5);

//setting env list
clo57157[1] = _u43;
clo57157[2] = kont55941;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo57157[3] = length;
clo57157[4] = lst;
clo57157[5] = cdr;
void* f5594456073 = encode_clo(clo57157);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5594456073;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam56236_fptr() // lam56236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56237 = arg_buffer[1];
//reading env and args
void* x5584556084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55945 = (decode_clo(env56237))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55945);
arg_buffer[2] = x5584556084;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55945))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56236 = encode_clo(alloc_clo(lam56236_fptr, 0));

void* lam56238_fptr() // lam56238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56239 = arg_buffer[1];
//reading env and args
void* a5584956092 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5584756088 = (decode_clo(env56239))[3];
//not do dummy comment
void* kont55945 = (decode_clo(env56239))[2];
//not do dummy comment
void* cons = (decode_clo(env56239))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55945;
arg_buffer[3] = a5584756088;
arg_buffer[4] = a5584956092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56238 = encode_clo(alloc_clo(lam56238_fptr, 0));

void* lam56240_fptr() // lam56240 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56241 = arg_buffer[1];
//reading env and args
void* a5584856090 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env56241))[5];
//not do dummy comment
void* kont55945 = (decode_clo(env56241))[4];
//not do dummy comment
void* cons = (decode_clo(env56241))[3];
//not do dummy comment
void* proc = (decode_clo(env56241))[2];
//not do dummy comment
void* a5584756088 = (decode_clo(env56241))[1];

//creating new closure instance
void** clo57159 = alloc_clo(lam56238_fptr, 3);

//setting env list
clo57159[1] = cons;
clo57159[2] = kont55945;
clo57159[3] = a5584756088;
void* f5594756091 = encode_clo(clo57159);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5594756091;
arg_buffer[3] = proc;
arg_buffer[4] = a5584856090;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56240 = encode_clo(alloc_clo(lam56240_fptr, 0));

void* lam56242_fptr() // lam56242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56243 = arg_buffer[1];
//reading env and args
void* a5584756088 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56243))[6];
//not do dummy comment
void* lst = (decode_clo(env56243))[5];
//not do dummy comment
void* map = (decode_clo(env56243))[4];
//not do dummy comment
void* proc = (decode_clo(env56243))[3];
//not do dummy comment
void* kont55945 = (decode_clo(env56243))[2];
//not do dummy comment
void* cons = (decode_clo(env56243))[1];

//creating new closure instance
void** clo57161 = alloc_clo(lam56240_fptr, 5);

//setting env list
clo57161[1] = a5584756088;
clo57161[2] = proc;
clo57161[3] = cons;
clo57161[4] = kont55945;
clo57161[5] = map;
void* f5594856089 = encode_clo(clo57161);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5594856089;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56242 = encode_clo(alloc_clo(lam56242_fptr, 0));

void* lam56244_fptr() // lam56244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56245 = arg_buffer[1];
//reading env and args
void* a5584656086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56245))[6];
//not do dummy comment
void* lst = (decode_clo(env56245))[5];
//not do dummy comment
void* map = (decode_clo(env56245))[4];
//not do dummy comment
void* proc = (decode_clo(env56245))[3];
//not do dummy comment
void* kont55945 = (decode_clo(env56245))[2];
//not do dummy comment
void* cons = (decode_clo(env56245))[1];

//creating new closure instance
void** clo57163 = alloc_clo(lam56242_fptr, 6);

//setting env list
clo57163[1] = cons;
clo57163[2] = kont55945;
clo57163[3] = proc;
clo57163[4] = map;
clo57163[5] = lst;
clo57163[6] = cdr;
void* f5594956087 = encode_clo(clo57163);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5594956087;
arg_buffer[3] = a5584656086;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56244 = encode_clo(alloc_clo(lam56244_fptr, 0));

void* lam56246_fptr() // lam56246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56247 = arg_buffer[1];
//reading env and args
void* a5584456082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56247))[8];
//not do dummy comment
void* map = (decode_clo(env56247))[7];
//not do dummy comment
void* proc = (decode_clo(env56247))[6];
//not do dummy comment
void* kont55945 = (decode_clo(env56247))[5];
//not do dummy comment
void* car = (decode_clo(env56247))[4];
//not do dummy comment
void* cons = (decode_clo(env56247))[3];
//not do dummy comment
void* list = (decode_clo(env56247))[2];
//not do dummy comment
void* cdr = (decode_clo(env56247))[1];

//if-clause
bool if_guard57164 = is_true(a5584456082);
if(if_guard57164)
{

//creating new closure instance
void** clo57166 = alloc_clo(lam56236_fptr, 1);

//setting env list
clo57166[1] = kont55945;
void* f5594656083 = encode_clo(clo57166);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5594656083;
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
void** clo57168 = alloc_clo(lam56244_fptr, 6);

//setting env list
clo57168[1] = cons;
clo57168[2] = kont55945;
clo57168[3] = proc;
clo57168[4] = map;
clo57168[5] = lst;
clo57168[6] = cdr;
void* f5595056085 = encode_clo(clo57168);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5595056085;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56246 = encode_clo(alloc_clo(lam56246_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56248 = arg_buffer[1];
//reading env and args
void* kont55945 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57170 = alloc_clo(lam56246_fptr, 8);

//setting env list
clo57170[1] = cdr;
clo57170[2] = list;
clo57170[3] = cons;
clo57170[4] = car;
clo57170[5] = kont55945;
clo57170[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo57170[7] = map;
clo57170[8] = lst;
void* f5595156081 = encode_clo(clo57170);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5595156081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam56249_fptr() // lam56249 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56250 = arg_buffer[1];
//reading env and args
void* x5585156096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55952 = (decode_clo(env56250))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55952);
arg_buffer[2] = x5585156096;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55952))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56249 = encode_clo(alloc_clo(lam56249_fptr, 0));

void* lam56251_fptr() // lam56251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56252 = arg_buffer[1];
//reading env and args
void* a5585656106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55952 = (decode_clo(env56252))[3];
//not do dummy comment
void* a5585456102 = (decode_clo(env56252))[2];
//not do dummy comment
void* cons = (decode_clo(env56252))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55952;
arg_buffer[3] = a5585456102;
arg_buffer[4] = a5585656106;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56251 = encode_clo(alloc_clo(lam56251_fptr, 0));

void* lam56253_fptr() // lam56253 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56254 = arg_buffer[1];
//reading env and args
void* a5585556104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55952 = (decode_clo(env56254))[5];
//not do dummy comment
void* op = (decode_clo(env56254))[4];
//not do dummy comment
void* a5585456102 = (decode_clo(env56254))[3];
//not do dummy comment
void* filter = (decode_clo(env56254))[2];
//not do dummy comment
void* cons = (decode_clo(env56254))[1];

//creating new closure instance
void** clo57172 = alloc_clo(lam56251_fptr, 3);

//setting env list
clo57172[1] = cons;
clo57172[2] = a5585456102;
clo57172[3] = kont55952;
void* f5595456105 = encode_clo(clo57172);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5595456105;
arg_buffer[3] = op;
arg_buffer[4] = a5585556104;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56253 = encode_clo(alloc_clo(lam56253_fptr, 0));

void* lam56255_fptr() // lam56255 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56256 = arg_buffer[1];
//reading env and args
void* a5585456102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56256))[6];
//not do dummy comment
void* kont55952 = (decode_clo(env56256))[5];
//not do dummy comment
void* lst = (decode_clo(env56256))[4];
//not do dummy comment
void* op = (decode_clo(env56256))[3];
//not do dummy comment
void* filter = (decode_clo(env56256))[2];
//not do dummy comment
void* cons = (decode_clo(env56256))[1];

//creating new closure instance
void** clo57174 = alloc_clo(lam56253_fptr, 5);

//setting env list
clo57174[1] = cons;
clo57174[2] = filter;
clo57174[3] = a5585456102;
clo57174[4] = op;
clo57174[5] = kont55952;
void* f5595556103 = encode_clo(clo57174);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5595556103;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56255 = encode_clo(alloc_clo(lam56255_fptr, 0));

void* lam56257_fptr() // lam56257 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56258 = arg_buffer[1];
//reading env and args
void* a5585756108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55952 = (decode_clo(env56258))[3];
//not do dummy comment
void* op = (decode_clo(env56258))[2];
//not do dummy comment
void* filter = (decode_clo(env56258))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont55952;
arg_buffer[3] = op;
arg_buffer[4] = a5585756108;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56257 = encode_clo(alloc_clo(lam56257_fptr, 0));

void* lam56259_fptr() // lam56259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56260 = arg_buffer[1];
//reading env and args
void* a5585356100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56260))[7];
//not do dummy comment
void* kont55952 = (decode_clo(env56260))[6];
//not do dummy comment
void* lst = (decode_clo(env56260))[5];
//not do dummy comment
void* op = (decode_clo(env56260))[4];
//not do dummy comment
void* cons = (decode_clo(env56260))[3];
//not do dummy comment
void* filter = (decode_clo(env56260))[2];
//not do dummy comment
void* car = (decode_clo(env56260))[1];

//if-clause
bool if_guard57175 = is_true(a5585356100);
if(if_guard57175)
{

//creating new closure instance
void** clo57177 = alloc_clo(lam56255_fptr, 6);

//setting env list
clo57177[1] = cons;
clo57177[2] = filter;
clo57177[3] = op;
clo57177[4] = lst;
clo57177[5] = kont55952;
clo57177[6] = cdr;
void* f5595656101 = encode_clo(clo57177);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5595656101;
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
void** clo57179 = alloc_clo(lam56257_fptr, 3);

//setting env list
clo57179[1] = filter;
clo57179[2] = op;
clo57179[3] = kont55952;
void* f5595756107 = encode_clo(clo57179);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5595756107;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56259 = encode_clo(alloc_clo(lam56259_fptr, 0));

void* lam56261_fptr() // lam56261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56262 = arg_buffer[1];
//reading env and args
void* a5585256098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56262))[7];
//not do dummy comment
void* kont55952 = (decode_clo(env56262))[6];
//not do dummy comment
void* lst = (decode_clo(env56262))[5];
//not do dummy comment
void* op = (decode_clo(env56262))[4];
//not do dummy comment
void* cons = (decode_clo(env56262))[3];
//not do dummy comment
void* filter = (decode_clo(env56262))[2];
//not do dummy comment
void* car = (decode_clo(env56262))[1];

//creating new closure instance
void** clo57181 = alloc_clo(lam56259_fptr, 7);

//setting env list
clo57181[1] = car;
clo57181[2] = filter;
clo57181[3] = cons;
clo57181[4] = op;
clo57181[5] = lst;
clo57181[6] = kont55952;
clo57181[7] = cdr;
void* f5595856099 = encode_clo(clo57181);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5595856099;
arg_buffer[3] = a5585256098;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56261 = encode_clo(alloc_clo(lam56261_fptr, 0));

void* lam56263_fptr() // lam56263 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56264 = arg_buffer[1];
//reading env and args
void* a5585056094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55952 = (decode_clo(env56264))[8];
//not do dummy comment
void* lst = (decode_clo(env56264))[7];
//not do dummy comment
void* op = (decode_clo(env56264))[6];
//not do dummy comment
void* cons = (decode_clo(env56264))[5];
//not do dummy comment
void* list = (decode_clo(env56264))[4];
//not do dummy comment
void* cdr = (decode_clo(env56264))[3];
//not do dummy comment
void* filter = (decode_clo(env56264))[2];
//not do dummy comment
void* car = (decode_clo(env56264))[1];

//if-clause
bool if_guard57182 = is_true(a5585056094);
if(if_guard57182)
{

//creating new closure instance
void** clo57184 = alloc_clo(lam56249_fptr, 1);

//setting env list
clo57184[1] = kont55952;
void* f5595356095 = encode_clo(clo57184);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5595356095;
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
void** clo57186 = alloc_clo(lam56261_fptr, 7);

//setting env list
clo57186[1] = car;
clo57186[2] = filter;
clo57186[3] = cons;
clo57186[4] = op;
clo57186[5] = lst;
clo57186[6] = kont55952;
clo57186[7] = cdr;
void* f5595956097 = encode_clo(clo57186);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5595956097;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56263 = encode_clo(alloc_clo(lam56263_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56265 = arg_buffer[1];
//reading env and args
void* kont55952 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57188 = alloc_clo(lam56263_fptr, 8);

//setting env list
clo57188[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo57188[2] = filter;
clo57188[3] = cdr;
clo57188[4] = list;
clo57188[5] = cons;
clo57188[6] = op;
clo57188[7] = lst;
clo57188[8] = kont55952;
void* f5596056093 = encode_clo(clo57188);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5596056093;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam56266_fptr() // lam56266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56267 = arg_buffer[1];
//reading env and args
void* a5586256116 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55961 = (decode_clo(env56267))[3];
//not do dummy comment
void* a5586056113 = (decode_clo(env56267))[2];
//not do dummy comment
void* drop = (decode_clo(env56267))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont55961;
arg_buffer[3] = a5586056113;
arg_buffer[4] = a5586256116;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56266 = encode_clo(alloc_clo(lam56266_fptr, 0));

void* lam56269_fptr() // lam56269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56270 = arg_buffer[1];
//reading env and args
void* a5586056113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env56270))[4];
//not do dummy comment
void* kont55961 = (decode_clo(env56270))[3];
//not do dummy comment
void* n = (decode_clo(env56270))[2];
//not do dummy comment
void* _u45 = (decode_clo(env56270))[1];
mpz_t* mpzvar57189 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57189, "1", 10);
void* a5586156114 = encode_mpz(mpzvar57189);

//creating new closure instance
void** clo57191 = alloc_clo(lam56266_fptr, 3);

//setting env list
clo57191[1] = drop;
clo57191[2] = a5586056113;
clo57191[3] = kont55961;
void* f5596256115 = encode_clo(clo57191);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5596256115;
arg_buffer[3] = n;
arg_buffer[4] = a5586156114;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56269 = encode_clo(alloc_clo(lam56269_fptr, 0));

void* lam56271_fptr() // lam56271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56272 = arg_buffer[1];
//reading env and args
void* a5585956111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56272))[6];
//not do dummy comment
void* kont55961 = (decode_clo(env56272))[5];
//not do dummy comment
void* n = (decode_clo(env56272))[4];
//not do dummy comment
void* _u45 = (decode_clo(env56272))[3];
//not do dummy comment
void* lst = (decode_clo(env56272))[2];
//not do dummy comment
void* drop = (decode_clo(env56272))[1];

//if-clause
bool if_guard57192 = is_true(a5585956111);
if(if_guard57192)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55961);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55961))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57194 = alloc_clo(lam56269_fptr, 4);

//setting env list
clo57194[1] = _u45;
clo57194[2] = n;
clo57194[3] = kont55961;
clo57194[4] = drop;
void* f5596356112 = encode_clo(clo57194);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5596356112;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56271 = encode_clo(alloc_clo(lam56271_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56274 = arg_buffer[1];
//reading env and args
void* kont55961 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar57195 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57195, "0", 10);
void* a5585856109 = encode_mpz(mpzvar57195);

//creating new closure instance
void** clo57197 = alloc_clo(lam56271_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo57197[1] = drop;
clo57197[2] = lst;
clo57197[3] = _u45;
clo57197[4] = n;
clo57197[5] = kont55961;
clo57197[6] = cdr;
void* f5596456110 = encode_clo(clo57197);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5596456110;
arg_buffer[3] = n;
arg_buffer[4] = a5585856109;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam56275_fptr() // lam56275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56276 = arg_buffer[1];
//reading env and args
void* a5586656124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55965 = (decode_clo(env56276))[3];
//not do dummy comment
void* proc = (decode_clo(env56276))[2];
//not do dummy comment
void* a5586456120 = (decode_clo(env56276))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont55965;
arg_buffer[3] = a5586456120;
arg_buffer[4] = a5586656124;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56275 = encode_clo(alloc_clo(lam56275_fptr, 0));

void* lam56277_fptr() // lam56277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56278 = arg_buffer[1];
//reading env and args
void* a5586556122 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55965 = (decode_clo(env56278))[5];
//not do dummy comment
void* foldr = (decode_clo(env56278))[4];
//not do dummy comment
void* proc = (decode_clo(env56278))[3];
//not do dummy comment
void* acc = (decode_clo(env56278))[2];
//not do dummy comment
void* a5586456120 = (decode_clo(env56278))[1];

//creating new closure instance
void** clo57199 = alloc_clo(lam56275_fptr, 3);

//setting env list
clo57199[1] = a5586456120;
clo57199[2] = proc;
clo57199[3] = kont55965;
void* f5596656123 = encode_clo(clo57199);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5596656123;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5586556122;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56277 = encode_clo(alloc_clo(lam56277_fptr, 0));

void* lam56279_fptr() // lam56279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56280 = arg_buffer[1];
//reading env and args
void* a5586456120 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55965 = (decode_clo(env56280))[6];
//not do dummy comment
void* cdr = (decode_clo(env56280))[5];
//not do dummy comment
void* foldr = (decode_clo(env56280))[4];
//not do dummy comment
void* lst = (decode_clo(env56280))[3];
//not do dummy comment
void* proc = (decode_clo(env56280))[2];
//not do dummy comment
void* acc = (decode_clo(env56280))[1];

//creating new closure instance
void** clo57201 = alloc_clo(lam56277_fptr, 5);

//setting env list
clo57201[1] = a5586456120;
clo57201[2] = acc;
clo57201[3] = proc;
clo57201[4] = foldr;
clo57201[5] = kont55965;
void* f5596756121 = encode_clo(clo57201);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5596756121;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56279 = encode_clo(alloc_clo(lam56279_fptr, 0));

void* lam56281_fptr() // lam56281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56282 = arg_buffer[1];
//reading env and args
void* a5586356118 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* car = (decode_clo(env56282))[7];
//not do dummy comment
void* kont55965 = (decode_clo(env56282))[6];
//not do dummy comment
void* cdr = (decode_clo(env56282))[5];
//not do dummy comment
void* foldr = (decode_clo(env56282))[4];
//not do dummy comment
void* lst = (decode_clo(env56282))[3];
//not do dummy comment
void* proc = (decode_clo(env56282))[2];
//not do dummy comment
void* acc = (decode_clo(env56282))[1];

//if-clause
bool if_guard57202 = is_true(a5586356118);
if(if_guard57202)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55965);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55965))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57204 = alloc_clo(lam56279_fptr, 6);

//setting env list
clo57204[1] = acc;
clo57204[2] = proc;
clo57204[3] = lst;
clo57204[4] = foldr;
clo57204[5] = cdr;
clo57204[6] = kont55965;
void* f5596856119 = encode_clo(clo57204);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5596856119;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56281 = encode_clo(alloc_clo(lam56281_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56283 = arg_buffer[1];
//reading env and args
void* kont55965 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo57206 = alloc_clo(lam56281_fptr, 7);

//setting env list
clo57206[1] = acc;
clo57206[2] = proc;
clo57206[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo57206[4] = foldr;
clo57206[5] = cdr;
clo57206[6] = kont55965;
clo57206[7] = car;
void* f5596956117 = encode_clo(clo57206);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5596956117;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam56284_fptr() // lam56284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56285 = arg_buffer[1];
//reading env and args
void* a5587056132 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5586856128 = (decode_clo(env56285))[3];
//not do dummy comment
void* kont55970 = (decode_clo(env56285))[2];
//not do dummy comment
void* cons = (decode_clo(env56285))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55970;
arg_buffer[3] = a5586856128;
arg_buffer[4] = a5587056132;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56284 = encode_clo(alloc_clo(lam56284_fptr, 0));

void* lam56286_fptr() // lam56286 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56287 = arg_buffer[1];
//reading env and args
void* a5586956130 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5586856128 = (decode_clo(env56287))[5];
//not do dummy comment
void* kont55970 = (decode_clo(env56287))[4];
//not do dummy comment
void* append = (decode_clo(env56287))[3];
//not do dummy comment
void* lst2 = (decode_clo(env56287))[2];
//not do dummy comment
void* cons = (decode_clo(env56287))[1];

//creating new closure instance
void** clo57208 = alloc_clo(lam56284_fptr, 3);

//setting env list
clo57208[1] = cons;
clo57208[2] = kont55970;
clo57208[3] = a5586856128;
void* f5597156131 = encode_clo(clo57208);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5597156131;
arg_buffer[3] = a5586956130;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56286 = encode_clo(alloc_clo(lam56286_fptr, 0));

void* lam56288_fptr() // lam56288 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56289 = arg_buffer[1];
//reading env and args
void* a5586856128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56289))[6];
//not do dummy comment
void* kont55970 = (decode_clo(env56289))[5];
//not do dummy comment
void* append = (decode_clo(env56289))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56289))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56289))[2];
//not do dummy comment
void* cons = (decode_clo(env56289))[1];

//creating new closure instance
void** clo57210 = alloc_clo(lam56286_fptr, 5);

//setting env list
clo57210[1] = cons;
clo57210[2] = lst2;
clo57210[3] = append;
clo57210[4] = kont55970;
clo57210[5] = a5586856128;
void* f5597256129 = encode_clo(clo57210);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5597256129;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56288 = encode_clo(alloc_clo(lam56288_fptr, 0));

void* lam56290_fptr() // lam56290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56291 = arg_buffer[1];
//reading env and args
void* a5586756126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56291))[7];
//not do dummy comment
void* kont55970 = (decode_clo(env56291))[6];
//not do dummy comment
void* append = (decode_clo(env56291))[5];
//not do dummy comment
void* lst2 = (decode_clo(env56291))[4];
//not do dummy comment
void* cons = (decode_clo(env56291))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56291))[2];
//not do dummy comment
void* car = (decode_clo(env56291))[1];

//if-clause
bool if_guard57211 = is_true(a5586756126);
if(if_guard57211)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55970);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55970))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo57213 = alloc_clo(lam56288_fptr, 6);

//setting env list
clo57213[1] = cons;
clo57213[2] = lst1;
clo57213[3] = lst2;
clo57213[4] = append;
clo57213[5] = kont55970;
clo57213[6] = cdr;
void* f5597356127 = encode_clo(clo57213);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5597356127;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56290 = encode_clo(alloc_clo(lam56290_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56292 = arg_buffer[1];
//reading env and args
void* kont55970 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo57215 = alloc_clo(lam56290_fptr, 7);

//setting env list
clo57215[1] = car;
clo57215[2] = lst1;
clo57215[3] = cons;
clo57215[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo57215[5] = append;
clo57215[6] = kont55970;
clo57215[7] = cdr;
void* f5597456125 = encode_clo(clo57215);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5597456125;
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
void* _56293 = arg_buffer[1];
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

void* kont5597556133 = prim_car(lst);
void* lst56134 = prim_cdr(lst);
void* x5587156135 = apply_prim_hash(lst56134);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5597556133);
arg_buffer[2] = x5587156135;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5597556133))[0]);
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
void* _56294 = arg_buffer[1];
//reading env and args
void* kont55977 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5587256136 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55977);
arg_buffer[2] = x5587256136;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55977))[0]);
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
void* _56295 = arg_buffer[1];
//reading env and args
void* kont55978 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5587356137 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55978);
arg_buffer[2] = x5587356137;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55978))[0]);
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
void* _56296 = arg_buffer[1];
//reading env and args
void* kont55979 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5587456138 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55979);
arg_buffer[2] = x5587456138;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55979))[0]);
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
void* _56297 = arg_buffer[1];
//reading env and args
void* kont55980 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5587556139 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55980);
arg_buffer[2] = x5587556139;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55980))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam56298_fptr() // lam56298 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56299 = arg_buffer[1];
//reading env and args
void* a5588256147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55981 = (decode_clo(env56299))[2];
//not do dummy comment
void* hash_u45count = (decode_clo(env56299))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45count);
arg_buffer[2] = kont55981;
arg_buffer[3] = a5588256147;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56298 = encode_clo(alloc_clo(lam56298_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56306 = arg_buffer[1];
//reading env and args
void* kont55981 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar57216 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57216, "100", 10);
void* a5587656140 = encode_mpz(mpzvar57216);
mpz_t* mpzvar57217 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57217, "80", 10);
void* a5587756141 = encode_mpz(mpzvar57217);
mpz_t* mpzvar57218 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57218, "10", 10);
void* a5587856142 = encode_mpz(mpzvar57218);
mpz_t* mpzvar57219 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57219, "2", 10);
void* a5587956143 = encode_mpz(mpzvar57219);
mpz_t* mpzvar57220 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57220, "25", 10);
void* a5588056144 = encode_mpz(mpzvar57220);
mpz_t* mpzvar57221 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar57221, "30", 10);
void* a5588156145 = encode_mpz(mpzvar57221);

//creating new closure instance
void** clo57223 = alloc_clo(lam56298_fptr, 2);

//setting env list
clo57223[1] = hash_u45count;
clo57223[2] = kont55981;
void* f5598256146 = encode_clo(clo57223);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f5598256146;
arg_buffer[3] = a5587656140;
arg_buffer[4] = a5587756141;
arg_buffer[5] = a5587856142;
arg_buffer[6] = a5587956143;
arg_buffer[7] = a5588056144;
arg_buffer[8] = a5588156145;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam56307_fptr() // lam56307 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56308 = arg_buffer[1];
//reading env and args
void* x5588356149 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55983 = (decode_clo(env56308))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55983);
arg_buffer[2] = x5588356149;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55983))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56307 = encode_clo(alloc_clo(lam56307_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56309 = arg_buffer[1];
//reading env and args
void* kont55983 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo57225 = alloc_clo(lam56307_fptr, 1);

//setting env list
clo57225[1] = kont55983;
void* f5598456148 = encode_clo(clo57225);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5598456148;
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

