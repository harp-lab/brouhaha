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
void* _56125 = arg_buffer[1];
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

void* kont5586355963 = prim_car(lst);
void* lst55964 = prim_cdr(lst);
void* x5577455965 = apply_prim__u43(lst55964);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5586355963);
arg_buffer[2] = x5577455965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5586355963))[0]);
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
void* _56126 = arg_buffer[1];
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

void* kont5586555966 = prim_car(lst);
void* lst55967 = prim_cdr(lst);
void* x5577555968 = apply_prim__u45(lst55967);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5586555966);
arg_buffer[2] = x5577555968;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5586555966))[0]);
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
void* _56127 = arg_buffer[1];
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

void* kont5586755969 = prim_car(lst);
void* lst55970 = prim_cdr(lst);
void* x5577655971 = apply_prim__u42(lst55970);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5586755969);
arg_buffer[2] = x5577655971;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5586755969))[0]);
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
void* _56128 = arg_buffer[1];
//reading env and args
void* kont55869 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5577755972 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55869);
arg_buffer[2] = x5577755972;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55869))[0]);
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
void* _56129 = arg_buffer[1];
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

void* kont5587055973 = prim_car(lst);
void* lst55974 = prim_cdr(lst);
void* x5577855975 = apply_prim__u47(lst55974);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587055973);
arg_buffer[2] = x5577855975;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587055973))[0]);
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
void* _56130 = arg_buffer[1];
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

void* kont5587255976 = prim_car(lst);
void* lst55977 = prim_cdr(lst);
void* x5577955978 = apply_prim__u61(lst55977);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587255976);
arg_buffer[2] = x5577955978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587255976))[0]);
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
void* _56131 = arg_buffer[1];
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

void* kont5587455979 = prim_car(lst);
void* lst55980 = prim_cdr(lst);
void* x5578055981 = apply_prim__u62(lst55980);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587455979);
arg_buffer[2] = x5578055981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587455979))[0]);
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
void* _56132 = arg_buffer[1];
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

void* kont5587655982 = prim_car(lst);
void* lst55983 = prim_cdr(lst);
void* x5578155984 = apply_prim__u60(lst55983);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587655982);
arg_buffer[2] = x5578155984;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587655982))[0]);
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
void* _56133 = arg_buffer[1];
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

void* kont5587855985 = prim_car(lst);
void* lst55986 = prim_cdr(lst);
void* x5578255987 = apply_prim__u60_u61(lst55986);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587855985);
arg_buffer[2] = x5578255987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587855985))[0]);
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
void* _56134 = arg_buffer[1];
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

void* kont5588055988 = prim_car(lst);
void* lst55989 = prim_cdr(lst);
void* x5578355990 = apply_prim__u62_u61(lst55989);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588055988);
arg_buffer[2] = x5578355990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588055988))[0]);
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
void* _56135 = arg_buffer[1];
//reading env and args
void* kont55882 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5578455991 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55882);
arg_buffer[2] = x5578455991;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55882))[0]);
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
void* _56136 = arg_buffer[1];
//reading env and args
void* kont55883 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5578555992 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55883);
arg_buffer[2] = x5578555992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55883))[0]);
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
void* _56137 = arg_buffer[1];
//reading env and args
void* kont55884 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5578655993 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55884);
arg_buffer[2] = x5578655993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55884))[0]);
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
void* _56138 = arg_buffer[1];
//reading env and args
void* kont55885 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5578755994 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55885);
arg_buffer[2] = x5578755994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55885))[0]);
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
void* _56139 = arg_buffer[1];
//reading env and args
void* kont55886 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5578855995 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55886);
arg_buffer[2] = x5578855995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55886))[0]);
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
void* _56140 = arg_buffer[1];
//reading env and args
void* kont55887 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5578955996 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55887);
arg_buffer[2] = x5578955996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55887))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam56141_fptr() // lam56141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56142 = arg_buffer[1];
//reading env and args
void* a5579256000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5579055997 = (decode_clo(env56142))[3];
//not do dummy comment
void* kont55888 = (decode_clo(env56142))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env56142))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55888;
arg_buffer[3] = a5579055997;
arg_buffer[4] = a5579256000;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56141 = encode_clo(alloc_clo(lam56141_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56145 = arg_buffer[1];
//reading env and args
void* kont55888 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar56822 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56822, "0", 10);
void* a5579055997 = encode_mpz(mpzvar56822);
mpz_t* mpzvar56823 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56823, "2", 10);
void* a5579155998 = encode_mpz(mpzvar56823);

//creating new closure instance
void** clo56825 = alloc_clo(lam56141_fptr, 3);

//setting env list
clo56825[1] = equal_u63;
clo56825[2] = kont55888;
clo56825[3] = a5579055997;
void* f5588955999 = encode_clo(clo56825);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5588955999;
arg_buffer[3] = x;
arg_buffer[4] = a5579155998;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam56146_fptr() // lam56146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56147 = arg_buffer[1];
//reading env and args
void* a5579556004 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5579356001 = (decode_clo(env56147))[3];
//not do dummy comment
void* kont55890 = (decode_clo(env56147))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env56147))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55890;
arg_buffer[3] = a5579356001;
arg_buffer[4] = a5579556004;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56146 = encode_clo(alloc_clo(lam56146_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56150 = arg_buffer[1];
//reading env and args
void* kont55890 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar56826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56826, "1", 10);
void* a5579356001 = encode_mpz(mpzvar56826);
mpz_t* mpzvar56827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56827, "2", 10);
void* a5579456002 = encode_mpz(mpzvar56827);

//creating new closure instance
void** clo56829 = alloc_clo(lam56146_fptr, 3);

//setting env list
clo56829[1] = equal_u63;
clo56829[2] = kont55890;
clo56829[3] = a5579356001;
void* f5589156003 = encode_clo(clo56829);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5589156003;
arg_buffer[3] = x;
arg_buffer[4] = a5579456002;
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
void* _56151 = arg_buffer[1];
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

void* kont5589256005 = prim_car(x);
void* x56006 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5589256005);
arg_buffer[2] = x56006;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5589256005))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam56154_fptr() // lam56154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56155 = arg_buffer[1];
//reading env and args
void* a5580156016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55894 = (decode_clo(env56155))[3];
//not do dummy comment
void* x = (decode_clo(env56155))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56155))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont55894;
arg_buffer[3] = x;
arg_buffer[4] = a5580156016;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56154 = encode_clo(alloc_clo(lam56154_fptr, 0));

void* lam56156_fptr() // lam56156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56157 = arg_buffer[1];
//reading env and args
void* a5579956013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56157))[5];
//not do dummy comment
void* lst = (decode_clo(env56157))[4];
//not do dummy comment
void* kont55894 = (decode_clo(env56157))[3];
//not do dummy comment
void* x = (decode_clo(env56157))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56157))[1];

//if-clause
bool if_guard56830 = is_true(a5579956013);
if(if_guard56830)
{
void* x5580056014 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55894);
arg_buffer[2] = x5580056014;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55894))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56832 = alloc_clo(lam56154_fptr, 3);

//setting env list
clo56832[1] = member_u63;
clo56832[2] = x;
clo56832[3] = kont55894;
void* f5589556015 = encode_clo(clo56832);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5589556015;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56156 = encode_clo(alloc_clo(lam56156_fptr, 0));

void* lam56158_fptr() // lam56158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56159 = arg_buffer[1];
//reading env and args
void* a5579856011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56159))[6];
//not do dummy comment
void* lst = (decode_clo(env56159))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env56159))[4];
//not do dummy comment
void* kont55894 = (decode_clo(env56159))[3];
//not do dummy comment
void* x = (decode_clo(env56159))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56159))[1];

//creating new closure instance
void** clo56834 = alloc_clo(lam56156_fptr, 5);

//setting env list
clo56834[1] = member_u63;
clo56834[2] = x;
clo56834[3] = kont55894;
clo56834[4] = lst;
clo56834[5] = cdr;
void* f5589656012 = encode_clo(clo56834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5589656012;
arg_buffer[3] = a5579856011;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56158 = encode_clo(alloc_clo(lam56158_fptr, 0));

void* lam56160_fptr() // lam56160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56161 = arg_buffer[1];
//reading env and args
void* a5579656008 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56161))[7];
//not do dummy comment
void* lst = (decode_clo(env56161))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env56161))[5];
//not do dummy comment
void* kont55894 = (decode_clo(env56161))[4];
//not do dummy comment
void* x = (decode_clo(env56161))[3];
//not do dummy comment
void* car = (decode_clo(env56161))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56161))[1];

//if-clause
bool if_guard56835 = is_true(a5579656008);
if(if_guard56835)
{
void* x5579756009 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55894);
arg_buffer[2] = x5579756009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55894))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56837 = alloc_clo(lam56158_fptr, 6);

//setting env list
clo56837[1] = member_u63;
clo56837[2] = x;
clo56837[3] = kont55894;
clo56837[4] = equal_u63;
clo56837[5] = lst;
clo56837[6] = cdr;
void* f5589756010 = encode_clo(clo56837);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5589756010;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56160 = encode_clo(alloc_clo(lam56160_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56162 = arg_buffer[1];
//reading env and args
void* kont55894 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56839 = alloc_clo(lam56160_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo56839[1] = member_u63;
clo56839[2] = car;
clo56839[3] = x;
clo56839[4] = kont55894;
clo56839[5] = equal_u63;
clo56839[6] = lst;
clo56839[7] = cdr;
void* f5589856007 = encode_clo(clo56839);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5589856007;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam56163_fptr() // lam56163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56164 = arg_buffer[1];
//reading env and args
void* a5580556024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5580456022 = (decode_clo(env56164))[4];
//not do dummy comment
void* fun = (decode_clo(env56164))[3];
//not do dummy comment
void* kont55899 = (decode_clo(env56164))[2];
//not do dummy comment
void* foldl = (decode_clo(env56164))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont55899;
arg_buffer[3] = fun;
arg_buffer[4] = a5580456022;
arg_buffer[5] = a5580556024;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56163 = encode_clo(alloc_clo(lam56163_fptr, 0));

void* lam56165_fptr() // lam56165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56166 = arg_buffer[1];
//reading env and args
void* a5580456022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56166))[5];
//not do dummy comment
void* lst = (decode_clo(env56166))[4];
//not do dummy comment
void* fun = (decode_clo(env56166))[3];
//not do dummy comment
void* kont55899 = (decode_clo(env56166))[2];
//not do dummy comment
void* foldl = (decode_clo(env56166))[1];

//creating new closure instance
void** clo56841 = alloc_clo(lam56163_fptr, 4);

//setting env list
clo56841[1] = foldl;
clo56841[2] = kont55899;
clo56841[3] = fun;
clo56841[4] = a5580456022;
void* f5590056023 = encode_clo(clo56841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5590056023;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56165 = encode_clo(alloc_clo(lam56165_fptr, 0));

void* lam56167_fptr() // lam56167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56168 = arg_buffer[1];
//reading env and args
void* a5580356020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56168))[6];
//not do dummy comment
void* lst = (decode_clo(env56168))[5];
//not do dummy comment
void* fun = (decode_clo(env56168))[4];
//not do dummy comment
void* acc = (decode_clo(env56168))[3];
//not do dummy comment
void* kont55899 = (decode_clo(env56168))[2];
//not do dummy comment
void* foldl = (decode_clo(env56168))[1];

//creating new closure instance
void** clo56843 = alloc_clo(lam56165_fptr, 5);

//setting env list
clo56843[1] = foldl;
clo56843[2] = kont55899;
clo56843[3] = fun;
clo56843[4] = lst;
clo56843[5] = cdr;
void* f5590156021 = encode_clo(clo56843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5590156021;
arg_buffer[3] = a5580356020;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56167 = encode_clo(alloc_clo(lam56167_fptr, 0));

void* lam56169_fptr() // lam56169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56170 = arg_buffer[1];
//reading env and args
void* a5580256018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56170))[7];
//not do dummy comment
void* lst = (decode_clo(env56170))[6];
//not do dummy comment
void* fun = (decode_clo(env56170))[5];
//not do dummy comment
void* acc = (decode_clo(env56170))[4];
//not do dummy comment
void* car = (decode_clo(env56170))[3];
//not do dummy comment
void* kont55899 = (decode_clo(env56170))[2];
//not do dummy comment
void* foldl = (decode_clo(env56170))[1];

//if-clause
bool if_guard56844 = is_true(a5580256018);
if(if_guard56844)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55899);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55899))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56846 = alloc_clo(lam56167_fptr, 6);

//setting env list
clo56846[1] = foldl;
clo56846[2] = kont55899;
clo56846[3] = acc;
clo56846[4] = fun;
clo56846[5] = lst;
clo56846[6] = cdr;
void* f5590256019 = encode_clo(clo56846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5590256019;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56169 = encode_clo(alloc_clo(lam56169_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56171 = arg_buffer[1];
//reading env and args
void* kont55899 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo56848 = alloc_clo(lam56169_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo56848[1] = foldl;
clo56848[2] = kont55899;
clo56848[3] = car;
clo56848[4] = acc;
clo56848[5] = fun;
clo56848[6] = lst;
clo56848[7] = cdr;
void* f5590356017 = encode_clo(clo56848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5590356017;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam56172_fptr() // lam56172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56173 = arg_buffer[1];
//reading env and args
void* a5580956032 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55904 = (decode_clo(env56173))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56173))[2];
//not do dummy comment
void* a5580756028 = (decode_clo(env56173))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55904;
arg_buffer[3] = a5580756028;
arg_buffer[4] = a5580956032;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56172 = encode_clo(alloc_clo(lam56172_fptr, 0));

void* lam56174_fptr() // lam56174 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56175 = arg_buffer[1];
//reading env and args
void* a5580856030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55904 = (decode_clo(env56175))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56175))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56175))[3];
//not do dummy comment
void* cons = (decode_clo(env56175))[2];
//not do dummy comment
void* a5580756028 = (decode_clo(env56175))[1];

//creating new closure instance
void** clo56850 = alloc_clo(lam56172_fptr, 3);

//setting env list
clo56850[1] = a5580756028;
clo56850[2] = reverse_u45helper;
clo56850[3] = kont55904;
void* f5590556031 = encode_clo(clo56850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5590556031;
arg_buffer[3] = a5580856030;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56174 = encode_clo(alloc_clo(lam56174_fptr, 0));

void* lam56176_fptr() // lam56176 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56177 = arg_buffer[1];
//reading env and args
void* a5580756028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55904 = (decode_clo(env56177))[6];
//not do dummy comment
void* lst = (decode_clo(env56177))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56177))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56177))[3];
//not do dummy comment
void* car = (decode_clo(env56177))[2];
//not do dummy comment
void* cons = (decode_clo(env56177))[1];

//creating new closure instance
void** clo56852 = alloc_clo(lam56174_fptr, 5);

//setting env list
clo56852[1] = a5580756028;
clo56852[2] = cons;
clo56852[3] = lst2;
clo56852[4] = reverse_u45helper;
clo56852[5] = kont55904;
void* f5590656029 = encode_clo(clo56852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5590656029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56176 = encode_clo(alloc_clo(lam56176_fptr, 0));

void* lam56178_fptr() // lam56178 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56179 = arg_buffer[1];
//reading env and args
void* a5580656026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56179))[7];
//not do dummy comment
void* kont55904 = (decode_clo(env56179))[6];
//not do dummy comment
void* lst = (decode_clo(env56179))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56179))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56179))[3];
//not do dummy comment
void* car = (decode_clo(env56179))[2];
//not do dummy comment
void* cons = (decode_clo(env56179))[1];

//if-clause
bool if_guard56853 = is_true(a5580656026);
if(if_guard56853)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55904);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55904))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56855 = alloc_clo(lam56176_fptr, 6);

//setting env list
clo56855[1] = cons;
clo56855[2] = car;
clo56855[3] = lst2;
clo56855[4] = reverse_u45helper;
clo56855[5] = lst;
clo56855[6] = kont55904;
void* f5590756027 = encode_clo(clo56855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5590756027;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56178 = encode_clo(alloc_clo(lam56178_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56180 = arg_buffer[1];
//reading env and args
void* kont55904 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56857 = alloc_clo(lam56178_fptr, 7);

//setting env list
clo56857[1] = cons;
clo56857[2] = car;
clo56857[3] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo56857[4] = reverse_u45helper;
clo56857[5] = lst;
clo56857[6] = kont55904;
clo56857[7] = cdr;
void* f5590856025 = encode_clo(clo56857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5590856025;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam56181_fptr() // lam56181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56182 = arg_buffer[1];
//reading env and args
void* a5581056034 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56182))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56182))[2];
//not do dummy comment
void* kont55909 = (decode_clo(env56182))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55909;
arg_buffer[3] = lst;
arg_buffer[4] = a5581056034;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56181 = encode_clo(alloc_clo(lam56181_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56183 = arg_buffer[1];
//reading env and args
void* kont55909 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo56859 = alloc_clo(lam56181_fptr, 3);

//setting env list
clo56859[1] = kont55909;
clo56859[2] = reverse_u45helper;
clo56859[3] = lst;
void* f5591056033 = encode_clo(clo56859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5591056033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam56184_fptr() // lam56184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56185 = arg_buffer[1];
//reading env and args
void* x5581356039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55911 = (decode_clo(env56185))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55911);
arg_buffer[2] = x5581356039;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55911))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56184 = encode_clo(alloc_clo(lam56184_fptr, 0));

void* lam56186_fptr() // lam56186 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56187 = arg_buffer[1];
//reading env and args
void* a5581856048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55911 = (decode_clo(env56187))[4];
//not do dummy comment
void* a5581656044 = (decode_clo(env56187))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56187))[2];
//not do dummy comment
void* a5581456041 = (decode_clo(env56187))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55911;
arg_buffer[3] = a5581456041;
arg_buffer[4] = a5581656044;
arg_buffer[5] = a5581856048;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56186 = encode_clo(alloc_clo(lam56186_fptr, 0));

void* lam56188_fptr() // lam56188 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56189 = arg_buffer[1];
//reading env and args
void* a5581756046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55911 = (decode_clo(env56189))[6];
//not do dummy comment
void* cons = (decode_clo(env56189))[5];
//not do dummy comment
void* a5581656044 = (decode_clo(env56189))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env56189))[3];
//not do dummy comment
void* a5581456041 = (decode_clo(env56189))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56189))[1];

//creating new closure instance
void** clo56861 = alloc_clo(lam56186_fptr, 4);

//setting env list
clo56861[1] = a5581456041;
clo56861[2] = take_u45helper;
clo56861[3] = a5581656044;
clo56861[4] = kont55911;
void* f5591356047 = encode_clo(clo56861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5591356047;
arg_buffer[3] = a5581756046;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a5581656044 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56191))[7];
//not do dummy comment
void* kont55911 = (decode_clo(env56191))[6];
//not do dummy comment
void* car = (decode_clo(env56191))[5];
//not do dummy comment
void* cons = (decode_clo(env56191))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env56191))[3];
//not do dummy comment
void* a5581456041 = (decode_clo(env56191))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56191))[1];

//creating new closure instance
void** clo56863 = alloc_clo(lam56188_fptr, 6);

//setting env list
clo56863[1] = lst2;
clo56863[2] = a5581456041;
clo56863[3] = take_u45helper;
clo56863[4] = a5581656044;
clo56863[5] = cons;
clo56863[6] = kont55911;
void* f5591456045 = encode_clo(clo56863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5591456045;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56190 = encode_clo(alloc_clo(lam56190_fptr, 0));

void* lam56193_fptr() // lam56193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56194 = arg_buffer[1];
//reading env and args
void* a5581456041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56194))[8];
//not do dummy comment
void* kont55911 = (decode_clo(env56194))[7];
//not do dummy comment
void* cons = (decode_clo(env56194))[6];
//not do dummy comment
void* _u45 = (decode_clo(env56194))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56194))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56194))[3];
//not do dummy comment
void* n = (decode_clo(env56194))[2];
//not do dummy comment
void* car = (decode_clo(env56194))[1];
mpz_t* mpzvar56864 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56864, "1", 10);
void* a5581556042 = encode_mpz(mpzvar56864);

//creating new closure instance
void** clo56866 = alloc_clo(lam56190_fptr, 7);

//setting env list
clo56866[1] = lst2;
clo56866[2] = a5581456041;
clo56866[3] = take_u45helper;
clo56866[4] = cons;
clo56866[5] = car;
clo56866[6] = kont55911;
clo56866[7] = lst;
void* f5591556043 = encode_clo(clo56866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5591556043;
arg_buffer[3] = n;
arg_buffer[4] = a5581556042;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56193 = encode_clo(alloc_clo(lam56193_fptr, 0));

void* lam56195_fptr() // lam56195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56196 = arg_buffer[1];
//reading env and args
void* a5581256037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56196))[10];
//not do dummy comment
void* lst = (decode_clo(env56196))[9];
//not do dummy comment
void* reverse = (decode_clo(env56196))[8];
//not do dummy comment
void* kont55911 = (decode_clo(env56196))[7];
//not do dummy comment
void* cons = (decode_clo(env56196))[6];
//not do dummy comment
void* _u45 = (decode_clo(env56196))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56196))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56196))[3];
//not do dummy comment
void* n = (decode_clo(env56196))[2];
//not do dummy comment
void* car = (decode_clo(env56196))[1];

//if-clause
bool if_guard56867 = is_true(a5581256037);
if(if_guard56867)
{

//creating new closure instance
void** clo56869 = alloc_clo(lam56184_fptr, 1);

//setting env list
clo56869[1] = kont55911;
void* f5591256038 = encode_clo(clo56869);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5591256038;
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
void** clo56871 = alloc_clo(lam56193_fptr, 8);

//setting env list
clo56871[1] = car;
clo56871[2] = n;
clo56871[3] = lst2;
clo56871[4] = take_u45helper;
clo56871[5] = _u45;
clo56871[6] = cons;
clo56871[7] = kont55911;
clo56871[8] = lst;
void* f5591656040 = encode_clo(clo56871);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5591656040;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56195 = encode_clo(alloc_clo(lam56195_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56198 = arg_buffer[1];
//reading env and args
void* kont55911 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar56872 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56872, "0", 10);
void* a5581156035 = encode_mpz(mpzvar56872);

//creating new closure instance
void** clo56874 = alloc_clo(lam56195_fptr, 10);

//setting env list
clo56874[1] = car;
clo56874[2] = n;
clo56874[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo56874[4] = take_u45helper;
clo56874[5] = _u45;
clo56874[6] = cons;
clo56874[7] = kont55911;
clo56874[8] = reverse;
clo56874[9] = lst;
clo56874[10] = cdr;
void* f5591756036 = encode_clo(clo56874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5591756036;
arg_buffer[3] = n;
arg_buffer[4] = a5581156035;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam56199_fptr() // lam56199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56200 = arg_buffer[1];
//reading env and args
void* a5581956050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55918 = (decode_clo(env56200))[4];
//not do dummy comment
void* lst = (decode_clo(env56200))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56200))[2];
//not do dummy comment
void* n = (decode_clo(env56200))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55918;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5581956050;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56199 = encode_clo(alloc_clo(lam56199_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56201 = arg_buffer[1];
//reading env and args
void* kont55918 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56876 = alloc_clo(lam56199_fptr, 4);

//setting env list
clo56876[1] = n;
clo56876[2] = take_u45helper;
clo56876[3] = lst;
clo56876[4] = kont55918;
void* f5591956049 = encode_clo(clo56876);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5591956049;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam56203_fptr() // lam56203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56204 = arg_buffer[1];
//reading env and args
void* a5582456058 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55920 = (decode_clo(env56204))[3];
//not do dummy comment
void* _u43 = (decode_clo(env56204))[2];
//not do dummy comment
void* a5582256054 = (decode_clo(env56204))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont55920;
arg_buffer[3] = a5582256054;
arg_buffer[4] = a5582456058;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56203 = encode_clo(alloc_clo(lam56203_fptr, 0));

void* lam56205_fptr() // lam56205 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56206 = arg_buffer[1];
//reading env and args
void* a5582356056 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55920 = (decode_clo(env56206))[4];
//not do dummy comment
void* length = (decode_clo(env56206))[3];
//not do dummy comment
void* _u43 = (decode_clo(env56206))[2];
//not do dummy comment
void* a5582256054 = (decode_clo(env56206))[1];

//creating new closure instance
void** clo56878 = alloc_clo(lam56203_fptr, 3);

//setting env list
clo56878[1] = a5582256054;
clo56878[2] = _u43;
clo56878[3] = kont55920;
void* f5592156057 = encode_clo(clo56878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5592156057;
arg_buffer[3] = a5582356056;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56205 = encode_clo(alloc_clo(lam56205_fptr, 0));

void* lam56208_fptr() // lam56208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56209 = arg_buffer[1];
//reading env and args
void* a5582056052 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56209))[5];
//not do dummy comment
void* kont55920 = (decode_clo(env56209))[4];
//not do dummy comment
void* lst = (decode_clo(env56209))[3];
//not do dummy comment
void* length = (decode_clo(env56209))[2];
//not do dummy comment
void* _u43 = (decode_clo(env56209))[1];

//if-clause
bool if_guard56879 = is_true(a5582056052);
if(if_guard56879)
{
mpz_t* mpzvar56880 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56880, "0", 10);
void* x5582156053 = encode_mpz(mpzvar56880);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55920);
arg_buffer[2] = x5582156053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55920))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar56881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56881, "1", 10);
void* a5582256054 = encode_mpz(mpzvar56881);

//creating new closure instance
void** clo56883 = alloc_clo(lam56205_fptr, 4);

//setting env list
clo56883[1] = a5582256054;
clo56883[2] = _u43;
clo56883[3] = length;
clo56883[4] = kont55920;
void* f5592256055 = encode_clo(clo56883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5592256055;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56208 = encode_clo(alloc_clo(lam56208_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56210 = arg_buffer[1];
//reading env and args
void* kont55920 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo56885 = alloc_clo(lam56208_fptr, 5);

//setting env list
clo56885[1] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo56885[2] = length;
clo56885[3] = lst;
clo56885[4] = kont55920;
clo56885[5] = cdr;
void* f5592356051 = encode_clo(clo56885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5592356051;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam56211_fptr() // lam56211 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56212 = arg_buffer[1];
//reading env and args
void* x5582656062 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55924 = (decode_clo(env56212))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55924);
arg_buffer[2] = x5582656062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55924))[0]);
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
void* a5583056070 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5582856066 = (decode_clo(env56214))[3];
//not do dummy comment
void* kont55924 = (decode_clo(env56214))[2];
//not do dummy comment
void* cons = (decode_clo(env56214))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55924;
arg_buffer[3] = a5582856066;
arg_buffer[4] = a5583056070;
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
void* a5582956068 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55924 = (decode_clo(env56216))[5];
//not do dummy comment
void* proc = (decode_clo(env56216))[4];
//not do dummy comment
void* cons = (decode_clo(env56216))[3];
//not do dummy comment
void* map = (decode_clo(env56216))[2];
//not do dummy comment
void* a5582856066 = (decode_clo(env56216))[1];

//creating new closure instance
void** clo56887 = alloc_clo(lam56213_fptr, 3);

//setting env list
clo56887[1] = cons;
clo56887[2] = kont55924;
clo56887[3] = a5582856066;
void* f5592656069 = encode_clo(clo56887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5592656069;
arg_buffer[3] = proc;
arg_buffer[4] = a5582956068;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56215 = encode_clo(alloc_clo(lam56215_fptr, 0));

void* lam56217_fptr() // lam56217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56218 = arg_buffer[1];
//reading env and args
void* a5582856066 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56218))[6];
//not do dummy comment
void* lst = (decode_clo(env56218))[5];
//not do dummy comment
void* map = (decode_clo(env56218))[4];
//not do dummy comment
void* kont55924 = (decode_clo(env56218))[3];
//not do dummy comment
void* proc = (decode_clo(env56218))[2];
//not do dummy comment
void* cons = (decode_clo(env56218))[1];

//creating new closure instance
void** clo56889 = alloc_clo(lam56215_fptr, 5);

//setting env list
clo56889[1] = a5582856066;
clo56889[2] = map;
clo56889[3] = cons;
clo56889[4] = proc;
clo56889[5] = kont55924;
void* f5592756067 = encode_clo(clo56889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5592756067;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56217 = encode_clo(alloc_clo(lam56217_fptr, 0));

void* lam56219_fptr() // lam56219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56220 = arg_buffer[1];
//reading env and args
void* a5582756064 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56220))[6];
//not do dummy comment
void* lst = (decode_clo(env56220))[5];
//not do dummy comment
void* map = (decode_clo(env56220))[4];
//not do dummy comment
void* kont55924 = (decode_clo(env56220))[3];
//not do dummy comment
void* proc = (decode_clo(env56220))[2];
//not do dummy comment
void* cons = (decode_clo(env56220))[1];

//creating new closure instance
void** clo56891 = alloc_clo(lam56217_fptr, 6);

//setting env list
clo56891[1] = cons;
clo56891[2] = proc;
clo56891[3] = kont55924;
clo56891[4] = map;
clo56891[5] = lst;
clo56891[6] = cdr;
void* f5592856065 = encode_clo(clo56891);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5592856065;
arg_buffer[3] = a5582756064;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56219 = encode_clo(alloc_clo(lam56219_fptr, 0));

void* lam56221_fptr() // lam56221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56222 = arg_buffer[1];
//reading env and args
void* a5582556060 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56222))[8];
//not do dummy comment
void* map = (decode_clo(env56222))[7];
//not do dummy comment
void* kont55924 = (decode_clo(env56222))[6];
//not do dummy comment
void* proc = (decode_clo(env56222))[5];
//not do dummy comment
void* car = (decode_clo(env56222))[4];
//not do dummy comment
void* cons = (decode_clo(env56222))[3];
//not do dummy comment
void* list = (decode_clo(env56222))[2];
//not do dummy comment
void* cdr = (decode_clo(env56222))[1];

//if-clause
bool if_guard56892 = is_true(a5582556060);
if(if_guard56892)
{

//creating new closure instance
void** clo56894 = alloc_clo(lam56211_fptr, 1);

//setting env list
clo56894[1] = kont55924;
void* f5592556061 = encode_clo(clo56894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5592556061;
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
void** clo56896 = alloc_clo(lam56219_fptr, 6);

//setting env list
clo56896[1] = cons;
clo56896[2] = proc;
clo56896[3] = kont55924;
clo56896[4] = map;
clo56896[5] = lst;
clo56896[6] = cdr;
void* f5592956063 = encode_clo(clo56896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5592956063;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56221 = encode_clo(alloc_clo(lam56221_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56223 = arg_buffer[1];
//reading env and args
void* kont55924 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56898 = alloc_clo(lam56221_fptr, 8);

//setting env list
clo56898[1] = cdr;
clo56898[2] = list;
clo56898[3] = cons;
clo56898[4] = car;
clo56898[5] = proc;
clo56898[6] = kont55924;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo56898[7] = map;
clo56898[8] = lst;
void* f5593056059 = encode_clo(clo56898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5593056059;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam56224_fptr() // lam56224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56225 = arg_buffer[1];
//reading env and args
void* x5583256074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55931 = (decode_clo(env56225))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55931);
arg_buffer[2] = x5583256074;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55931))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56224 = encode_clo(alloc_clo(lam56224_fptr, 0));

void* lam56226_fptr() // lam56226 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56227 = arg_buffer[1];
//reading env and args
void* a5583756084 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5583556080 = (decode_clo(env56227))[3];
//not do dummy comment
void* kont55931 = (decode_clo(env56227))[2];
//not do dummy comment
void* cons = (decode_clo(env56227))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55931;
arg_buffer[3] = a5583556080;
arg_buffer[4] = a5583756084;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56226 = encode_clo(alloc_clo(lam56226_fptr, 0));

void* lam56228_fptr() // lam56228 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56229 = arg_buffer[1];
//reading env and args
void* a5583656082 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5583556080 = (decode_clo(env56229))[5];
//not do dummy comment
void* op = (decode_clo(env56229))[4];
//not do dummy comment
void* filter = (decode_clo(env56229))[3];
//not do dummy comment
void* kont55931 = (decode_clo(env56229))[2];
//not do dummy comment
void* cons = (decode_clo(env56229))[1];

//creating new closure instance
void** clo56900 = alloc_clo(lam56226_fptr, 3);

//setting env list
clo56900[1] = cons;
clo56900[2] = kont55931;
clo56900[3] = a5583556080;
void* f5593356083 = encode_clo(clo56900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5593356083;
arg_buffer[3] = op;
arg_buffer[4] = a5583656082;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a5583556080 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56231))[6];
//not do dummy comment
void* lst = (decode_clo(env56231))[5];
//not do dummy comment
void* op = (decode_clo(env56231))[4];
//not do dummy comment
void* filter = (decode_clo(env56231))[3];
//not do dummy comment
void* kont55931 = (decode_clo(env56231))[2];
//not do dummy comment
void* cons = (decode_clo(env56231))[1];

//creating new closure instance
void** clo56902 = alloc_clo(lam56228_fptr, 5);

//setting env list
clo56902[1] = cons;
clo56902[2] = kont55931;
clo56902[3] = filter;
clo56902[4] = op;
clo56902[5] = a5583556080;
void* f5593456081 = encode_clo(clo56902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5593456081;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56230 = encode_clo(alloc_clo(lam56230_fptr, 0));

void* lam56232_fptr() // lam56232 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56233 = arg_buffer[1];
//reading env and args
void* a5583856086 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env56233))[3];
//not do dummy comment
void* filter = (decode_clo(env56233))[2];
//not do dummy comment
void* kont55931 = (decode_clo(env56233))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont55931;
arg_buffer[3] = op;
arg_buffer[4] = a5583856086;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56232 = encode_clo(alloc_clo(lam56232_fptr, 0));

void* lam56234_fptr() // lam56234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56235 = arg_buffer[1];
//reading env and args
void* a5583456078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56235))[7];
//not do dummy comment
void* lst = (decode_clo(env56235))[6];
//not do dummy comment
void* op = (decode_clo(env56235))[5];
//not do dummy comment
void* filter = (decode_clo(env56235))[4];
//not do dummy comment
void* car = (decode_clo(env56235))[3];
//not do dummy comment
void* kont55931 = (decode_clo(env56235))[2];
//not do dummy comment
void* cons = (decode_clo(env56235))[1];

//if-clause
bool if_guard56903 = is_true(a5583456078);
if(if_guard56903)
{

//creating new closure instance
void** clo56905 = alloc_clo(lam56230_fptr, 6);

//setting env list
clo56905[1] = cons;
clo56905[2] = kont55931;
clo56905[3] = filter;
clo56905[4] = op;
clo56905[5] = lst;
clo56905[6] = cdr;
void* f5593556079 = encode_clo(clo56905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5593556079;
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
void** clo56907 = alloc_clo(lam56232_fptr, 3);

//setting env list
clo56907[1] = kont55931;
clo56907[2] = filter;
clo56907[3] = op;
void* f5593656085 = encode_clo(clo56907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5593656085;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56234 = encode_clo(alloc_clo(lam56234_fptr, 0));

void* lam56236_fptr() // lam56236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56237 = arg_buffer[1];
//reading env and args
void* a5583356076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56237))[7];
//not do dummy comment
void* lst = (decode_clo(env56237))[6];
//not do dummy comment
void* op = (decode_clo(env56237))[5];
//not do dummy comment
void* filter = (decode_clo(env56237))[4];
//not do dummy comment
void* car = (decode_clo(env56237))[3];
//not do dummy comment
void* kont55931 = (decode_clo(env56237))[2];
//not do dummy comment
void* cons = (decode_clo(env56237))[1];

//creating new closure instance
void** clo56909 = alloc_clo(lam56234_fptr, 7);

//setting env list
clo56909[1] = cons;
clo56909[2] = kont55931;
clo56909[3] = car;
clo56909[4] = filter;
clo56909[5] = op;
clo56909[6] = lst;
clo56909[7] = cdr;
void* f5593756077 = encode_clo(clo56909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5593756077;
arg_buffer[3] = a5583356076;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
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
void* a5583156072 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56239))[8];
//not do dummy comment
void* op = (decode_clo(env56239))[7];
//not do dummy comment
void* list = (decode_clo(env56239))[6];
//not do dummy comment
void* cdr = (decode_clo(env56239))[5];
//not do dummy comment
void* filter = (decode_clo(env56239))[4];
//not do dummy comment
void* car = (decode_clo(env56239))[3];
//not do dummy comment
void* kont55931 = (decode_clo(env56239))[2];
//not do dummy comment
void* cons = (decode_clo(env56239))[1];

//if-clause
bool if_guard56910 = is_true(a5583156072);
if(if_guard56910)
{

//creating new closure instance
void** clo56912 = alloc_clo(lam56224_fptr, 1);

//setting env list
clo56912[1] = kont55931;
void* f5593256073 = encode_clo(clo56912);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5593256073;
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
void** clo56914 = alloc_clo(lam56236_fptr, 7);

//setting env list
clo56914[1] = cons;
clo56914[2] = kont55931;
clo56914[3] = car;
clo56914[4] = filter;
clo56914[5] = op;
clo56914[6] = lst;
clo56914[7] = cdr;
void* f5593856075 = encode_clo(clo56914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5593856075;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56238 = encode_clo(alloc_clo(lam56238_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56240 = arg_buffer[1];
//reading env and args
void* kont55931 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56916 = alloc_clo(lam56238_fptr, 8);

//setting env list
clo56916[1] = cons;
clo56916[2] = kont55931;
clo56916[3] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo56916[4] = filter;
clo56916[5] = cdr;
clo56916[6] = list;
clo56916[7] = op;
clo56916[8] = lst;
void* f5593956071 = encode_clo(clo56916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5593956071;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam56241_fptr() // lam56241 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56242 = arg_buffer[1];
//reading env and args
void* a5584356094 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env56242))[3];
//not do dummy comment
void* kont55940 = (decode_clo(env56242))[2];
//not do dummy comment
void* a5584156091 = (decode_clo(env56242))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont55940;
arg_buffer[3] = a5584156091;
arg_buffer[4] = a5584356094;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56241 = encode_clo(alloc_clo(lam56241_fptr, 0));

void* lam56244_fptr() // lam56244 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56245 = arg_buffer[1];
//reading env and args
void* a5584156091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env56245))[4];
//not do dummy comment
void* kont55940 = (decode_clo(env56245))[3];
//not do dummy comment
void* n = (decode_clo(env56245))[2];
//not do dummy comment
void* _u45 = (decode_clo(env56245))[1];
mpz_t* mpzvar56917 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56917, "1", 10);
void* a5584256092 = encode_mpz(mpzvar56917);

//creating new closure instance
void** clo56919 = alloc_clo(lam56241_fptr, 3);

//setting env list
clo56919[1] = a5584156091;
clo56919[2] = kont55940;
clo56919[3] = drop;
void* f5594156093 = encode_clo(clo56919);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5594156093;
arg_buffer[3] = n;
arg_buffer[4] = a5584256092;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a5584056089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56247))[6];
//not do dummy comment
void* kont55940 = (decode_clo(env56247))[5];
//not do dummy comment
void* n = (decode_clo(env56247))[4];
//not do dummy comment
void* _u45 = (decode_clo(env56247))[3];
//not do dummy comment
void* lst = (decode_clo(env56247))[2];
//not do dummy comment
void* drop = (decode_clo(env56247))[1];

//if-clause
bool if_guard56920 = is_true(a5584056089);
if(if_guard56920)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55940);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55940))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56922 = alloc_clo(lam56244_fptr, 4);

//setting env list
clo56922[1] = _u45;
clo56922[2] = n;
clo56922[3] = kont55940;
clo56922[4] = drop;
void* f5594256090 = encode_clo(clo56922);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5594256090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56246 = encode_clo(alloc_clo(lam56246_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56249 = arg_buffer[1];
//reading env and args
void* kont55940 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar56923 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56923, "0", 10);
void* a5583956087 = encode_mpz(mpzvar56923);

//creating new closure instance
void** clo56925 = alloc_clo(lam56246_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo56925[1] = drop;
clo56925[2] = lst;
clo56925[3] = _u45;
clo56925[4] = n;
clo56925[5] = kont55940;
clo56925[6] = cdr;
void* f5594356088 = encode_clo(clo56925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5594356088;
arg_buffer[3] = n;
arg_buffer[4] = a5583956087;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam56250_fptr() // lam56250 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56251 = arg_buffer[1];
//reading env and args
void* a5584756102 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5584556098 = (decode_clo(env56251))[3];
//not do dummy comment
void* proc = (decode_clo(env56251))[2];
//not do dummy comment
void* kont55944 = (decode_clo(env56251))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont55944;
arg_buffer[3] = a5584556098;
arg_buffer[4] = a5584756102;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56250 = encode_clo(alloc_clo(lam56250_fptr, 0));

void* lam56252_fptr() // lam56252 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56253 = arg_buffer[1];
//reading env and args
void* a5584656100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env56253))[5];
//not do dummy comment
void* a5584556098 = (decode_clo(env56253))[4];
//not do dummy comment
void* proc = (decode_clo(env56253))[3];
//not do dummy comment
void* kont55944 = (decode_clo(env56253))[2];
//not do dummy comment
void* acc = (decode_clo(env56253))[1];

//creating new closure instance
void** clo56927 = alloc_clo(lam56250_fptr, 3);

//setting env list
clo56927[1] = kont55944;
clo56927[2] = proc;
clo56927[3] = a5584556098;
void* f5594556101 = encode_clo(clo56927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5594556101;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5584656100;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56252 = encode_clo(alloc_clo(lam56252_fptr, 0));

void* lam56254_fptr() // lam56254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56255 = arg_buffer[1];
//reading env and args
void* a5584556098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56255))[6];
//not do dummy comment
void* foldr = (decode_clo(env56255))[5];
//not do dummy comment
void* lst = (decode_clo(env56255))[4];
//not do dummy comment
void* proc = (decode_clo(env56255))[3];
//not do dummy comment
void* kont55944 = (decode_clo(env56255))[2];
//not do dummy comment
void* acc = (decode_clo(env56255))[1];

//creating new closure instance
void** clo56929 = alloc_clo(lam56252_fptr, 5);

//setting env list
clo56929[1] = acc;
clo56929[2] = kont55944;
clo56929[3] = proc;
clo56929[4] = a5584556098;
clo56929[5] = foldr;
void* f5594656099 = encode_clo(clo56929);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5594656099;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56254 = encode_clo(alloc_clo(lam56254_fptr, 0));

void* lam56256_fptr() // lam56256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56257 = arg_buffer[1];
//reading env and args
void* a5584456096 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56257))[7];
//not do dummy comment
void* car = (decode_clo(env56257))[6];
//not do dummy comment
void* foldr = (decode_clo(env56257))[5];
//not do dummy comment
void* lst = (decode_clo(env56257))[4];
//not do dummy comment
void* proc = (decode_clo(env56257))[3];
//not do dummy comment
void* kont55944 = (decode_clo(env56257))[2];
//not do dummy comment
void* acc = (decode_clo(env56257))[1];

//if-clause
bool if_guard56930 = is_true(a5584456096);
if(if_guard56930)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55944);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55944))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56932 = alloc_clo(lam56254_fptr, 6);

//setting env list
clo56932[1] = acc;
clo56932[2] = kont55944;
clo56932[3] = proc;
clo56932[4] = lst;
clo56932[5] = foldr;
clo56932[6] = cdr;
void* f5594756097 = encode_clo(clo56932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5594756097;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56256 = encode_clo(alloc_clo(lam56256_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56258 = arg_buffer[1];
//reading env and args
void* kont55944 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo56934 = alloc_clo(lam56256_fptr, 7);

//setting env list
clo56934[1] = acc;
clo56934[2] = kont55944;
clo56934[3] = proc;
clo56934[4] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo56934[5] = foldr;
clo56934[6] = car;
clo56934[7] = cdr;
void* f5594856095 = encode_clo(clo56934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5594856095;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam56259_fptr() // lam56259 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56260 = arg_buffer[1];
//reading env and args
void* a5585156110 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55949 = (decode_clo(env56260))[3];
//not do dummy comment
void* a5584956106 = (decode_clo(env56260))[2];
//not do dummy comment
void* cons = (decode_clo(env56260))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55949;
arg_buffer[3] = a5584956106;
arg_buffer[4] = a5585156110;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56259 = encode_clo(alloc_clo(lam56259_fptr, 0));

void* lam56261_fptr() // lam56261 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56262 = arg_buffer[1];
//reading env and args
void* a5585056108 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55949 = (decode_clo(env56262))[5];
//not do dummy comment
void* append = (decode_clo(env56262))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56262))[3];
//not do dummy comment
void* a5584956106 = (decode_clo(env56262))[2];
//not do dummy comment
void* cons = (decode_clo(env56262))[1];

//creating new closure instance
void** clo56936 = alloc_clo(lam56259_fptr, 3);

//setting env list
clo56936[1] = cons;
clo56936[2] = a5584956106;
clo56936[3] = kont55949;
void* f5595056109 = encode_clo(clo56936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5595056109;
arg_buffer[3] = a5585056108;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
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
void* a5584956106 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env56264))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56264))[5];
//not do dummy comment
void* lst1 = (decode_clo(env56264))[4];
//not do dummy comment
void* cons = (decode_clo(env56264))[3];
//not do dummy comment
void* kont55949 = (decode_clo(env56264))[2];
//not do dummy comment
void* cdr = (decode_clo(env56264))[1];

//creating new closure instance
void** clo56938 = alloc_clo(lam56261_fptr, 5);

//setting env list
clo56938[1] = cons;
clo56938[2] = a5584956106;
clo56938[3] = lst2;
clo56938[4] = append;
clo56938[5] = kont55949;
void* f5595156107 = encode_clo(clo56938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5595156107;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56263 = encode_clo(alloc_clo(lam56263_fptr, 0));

void* lam56265_fptr() // lam56265 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56266 = arg_buffer[1];
//reading env and args
void* a5584856104 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env56266))[7];
//not do dummy comment
void* lst2 = (decode_clo(env56266))[6];
//not do dummy comment
void* cons = (decode_clo(env56266))[5];
//not do dummy comment
void* kont55949 = (decode_clo(env56266))[4];
//not do dummy comment
void* cdr = (decode_clo(env56266))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56266))[2];
//not do dummy comment
void* car = (decode_clo(env56266))[1];

//if-clause
bool if_guard56939 = is_true(a5584856104);
if(if_guard56939)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55949);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55949))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56941 = alloc_clo(lam56263_fptr, 6);

//setting env list
clo56941[1] = cdr;
clo56941[2] = kont55949;
clo56941[3] = cons;
clo56941[4] = lst1;
clo56941[5] = lst2;
clo56941[6] = append;
void* f5595256105 = encode_clo(clo56941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5595256105;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56265 = encode_clo(alloc_clo(lam56265_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56267 = arg_buffer[1];
//reading env and args
void* kont55949 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56943 = alloc_clo(lam56265_fptr, 7);

//setting env list
clo56943[1] = car;
clo56943[2] = lst1;
clo56943[3] = cdr;
clo56943[4] = kont55949;
clo56943[5] = cons;
clo56943[6] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo56943[7] = append;
void* f5595356103 = encode_clo(clo56943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5595356103;
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
void* _56268 = arg_buffer[1];
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

void* kont5595456111 = prim_car(lst);
void* lst56112 = prim_cdr(lst);
void* x5585256113 = apply_prim_hash(lst56112);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5595456111);
arg_buffer[2] = x5585256113;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5595456111))[0]);
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
void* _56269 = arg_buffer[1];
//reading env and args
void* kont55956 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5585356114 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55956);
arg_buffer[2] = x5585356114;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55956))[0]);
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
void* _56270 = arg_buffer[1];
//reading env and args
void* kont55957 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5585456115 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55957);
arg_buffer[2] = x5585456115;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55957))[0]);
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
void* _56271 = arg_buffer[1];
//reading env and args
void* kont55958 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5585556116 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55958);
arg_buffer[2] = x5585556116;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55958))[0]);
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
void* _56272 = arg_buffer[1];
//reading env and args
void* kont55959 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5585656117 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55959);
arg_buffer[2] = x5585656117;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55959))[0]);
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
void* _56278 = arg_buffer[1];
//reading env and args
void* kont55960 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar56944 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56944, "100", 10);
void* a5585756118 = encode_mpz(mpzvar56944);
mpz_t* mpzvar56945 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56945, "20", 10);
void* a5585856119 = encode_mpz(mpzvar56945);
mpz_t* mpzvar56946 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56946, "10", 10);
void* a5585956120 = encode_mpz(mpzvar56946);
mpz_t* mpzvar56947 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56947, "5", 10);
void* a5586056121 = encode_mpz(mpzvar56947);
mpz_t* mpzvar56948 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56948, "1", 10);
void* a5586156122 = encode_mpz(mpzvar56948);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u62);
arg_buffer[2] = kont55960;
arg_buffer[3] = a5585756118;
arg_buffer[4] = a5585856119;
arg_buffer[5] = a5585956120;
arg_buffer[6] = a5586056121;
arg_buffer[7] = a5586156122;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u62))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam56279_fptr() // lam56279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56280 = arg_buffer[1];
//reading env and args
void* x5586256124 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55961 = (decode_clo(env56280))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55961);
arg_buffer[2] = x5586256124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55961))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56279 = encode_clo(alloc_clo(lam56279_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56281 = arg_buffer[1];
//reading env and args
void* kont55961 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo56950 = alloc_clo(lam56279_fptr, 1);

//setting env list
clo56950[1] = kont55961;
void* f5596256123 = encode_clo(clo56950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5596256123;
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

