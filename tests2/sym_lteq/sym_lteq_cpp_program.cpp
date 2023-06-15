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
void* _56135 = arg_buffer[1];
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

void* kont5587255972 = prim_car(lst);
void* lst55973 = prim_cdr(lst);
void* x5578255974 = apply_prim__u43(lst55973);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587255972);
arg_buffer[2] = x5578255974;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587255972))[0]);
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
void* _56136 = arg_buffer[1];
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

void* kont5587455975 = prim_car(lst);
void* lst55976 = prim_cdr(lst);
void* x5578355977 = apply_prim__u45(lst55976);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587455975);
arg_buffer[2] = x5578355977;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587455975))[0]);
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
void* _56137 = arg_buffer[1];
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

void* kont5587655978 = prim_car(lst);
void* lst55979 = prim_cdr(lst);
void* x5578455980 = apply_prim__u42(lst55979);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587655978);
arg_buffer[2] = x5578455980;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587655978))[0]);
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
void* _56138 = arg_buffer[1];
//reading env and args
void* kont55878 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5578555981 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55878);
arg_buffer[2] = x5578555981;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55878))[0]);
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
void* _56139 = arg_buffer[1];
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

void* kont5587955982 = prim_car(lst);
void* lst55983 = prim_cdr(lst);
void* x5578655984 = apply_prim__u47(lst55983);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5587955982);
arg_buffer[2] = x5578655984;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5587955982))[0]);
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
void* _56140 = arg_buffer[1];
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

void* kont5588155985 = prim_car(lst);
void* lst55986 = prim_cdr(lst);
void* x5578755987 = apply_prim__u61(lst55986);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588155985);
arg_buffer[2] = x5578755987;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588155985))[0]);
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
void* _56141 = arg_buffer[1];
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

void* kont5588355988 = prim_car(lst);
void* lst55989 = prim_cdr(lst);
void* x5578855990 = apply_prim__u62(lst55989);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588355988);
arg_buffer[2] = x5578855990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588355988))[0]);
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
void* _56142 = arg_buffer[1];
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

void* kont5588555991 = prim_car(lst);
void* lst55992 = prim_cdr(lst);
void* x5578955993 = apply_prim__u60(lst55992);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588555991);
arg_buffer[2] = x5578955993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588555991))[0]);
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
void* _56143 = arg_buffer[1];
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

void* kont5588755994 = prim_car(lst);
void* lst55995 = prim_cdr(lst);
void* x5579055996 = apply_prim__u60_u61(lst55995);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588755994);
arg_buffer[2] = x5579055996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588755994))[0]);
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
void* _56144 = arg_buffer[1];
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

void* kont5588955997 = prim_car(lst);
void* lst55998 = prim_cdr(lst);
void* x5579155999 = apply_prim__u62_u61(lst55998);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5588955997);
arg_buffer[2] = x5579155999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5588955997))[0]);
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
void* _56145 = arg_buffer[1];
//reading env and args
void* kont55891 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5579256000 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55891);
arg_buffer[2] = x5579256000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55891))[0]);
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
void* _56146 = arg_buffer[1];
//reading env and args
void* kont55892 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5579356001 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55892);
arg_buffer[2] = x5579356001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55892))[0]);
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
void* _56147 = arg_buffer[1];
//reading env and args
void* kont55893 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5579456002 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55893);
arg_buffer[2] = x5579456002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55893))[0]);
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
void* _56148 = arg_buffer[1];
//reading env and args
void* kont55894 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5579556003 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55894);
arg_buffer[2] = x5579556003;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55894))[0]);
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
void* _56149 = arg_buffer[1];
//reading env and args
void* kont55895 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5579656004 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55895);
arg_buffer[2] = x5579656004;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55895))[0]);
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
void* _56150 = arg_buffer[1];
//reading env and args
void* kont55896 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5579756005 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55896);
arg_buffer[2] = x5579756005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55896))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam56151_fptr() // lam56151 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56152 = arg_buffer[1];
//reading env and args
void* a5580056009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55897 = (decode_clo(env56152))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env56152))[2];
//not do dummy comment
void* a5579856006 = (decode_clo(env56152))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55897;
arg_buffer[3] = a5579856006;
arg_buffer[4] = a5580056009;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56151 = encode_clo(alloc_clo(lam56151_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56155 = arg_buffer[1];
//reading env and args
void* kont55897 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar56833 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56833, "0", 10);
void* a5579856006 = encode_mpz(mpzvar56833);
mpz_t* mpzvar56834 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56834, "2", 10);
void* a5579956007 = encode_mpz(mpzvar56834);

//creating new closure instance
void** clo56836 = alloc_clo(lam56151_fptr, 3);

//setting env list
clo56836[1] = a5579856006;
clo56836[2] = equal_u63;
clo56836[3] = kont55897;
void* f5589856008 = encode_clo(clo56836);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5589856008;
arg_buffer[3] = x;
arg_buffer[4] = a5579956007;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam56156_fptr() // lam56156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56157 = arg_buffer[1];
//reading env and args
void* a5580356013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5580156010 = (decode_clo(env56157))[3];
//not do dummy comment
void* kont55899 = (decode_clo(env56157))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env56157))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont55899;
arg_buffer[3] = a5580156010;
arg_buffer[4] = a5580356013;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56156 = encode_clo(alloc_clo(lam56156_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56160 = arg_buffer[1];
//reading env and args
void* kont55899 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar56837 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56837, "1", 10);
void* a5580156010 = encode_mpz(mpzvar56837);
mpz_t* mpzvar56838 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56838, "2", 10);
void* a5580256011 = encode_mpz(mpzvar56838);

//creating new closure instance
void** clo56840 = alloc_clo(lam56156_fptr, 3);

//setting env list
clo56840[1] = equal_u63;
clo56840[2] = kont55899;
clo56840[3] = a5580156010;
void* f5590056012 = encode_clo(clo56840);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5590056012;
arg_buffer[3] = x;
arg_buffer[4] = a5580256011;
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
void* _56161 = arg_buffer[1];
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

void* kont5590156014 = prim_car(x);
void* x56015 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5590156014);
arg_buffer[2] = x56015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5590156014))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam56164_fptr() // lam56164 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56165 = arg_buffer[1];
//reading env and args
void* a5580956025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55903 = (decode_clo(env56165))[3];
//not do dummy comment
void* x = (decode_clo(env56165))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56165))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont55903;
arg_buffer[3] = x;
arg_buffer[4] = a5580956025;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56164 = encode_clo(alloc_clo(lam56164_fptr, 0));

void* lam56166_fptr() // lam56166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56167 = arg_buffer[1];
//reading env and args
void* a5580756022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56167))[5];
//not do dummy comment
void* lst = (decode_clo(env56167))[4];
//not do dummy comment
void* kont55903 = (decode_clo(env56167))[3];
//not do dummy comment
void* x = (decode_clo(env56167))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56167))[1];

//if-clause
bool if_guard56841 = is_true(a5580756022);
if(if_guard56841)
{
void* x5580856023 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55903);
arg_buffer[2] = x5580856023;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55903))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56843 = alloc_clo(lam56164_fptr, 3);

//setting env list
clo56843[1] = member_u63;
clo56843[2] = x;
clo56843[3] = kont55903;
void* f5590456024 = encode_clo(clo56843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5590456024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56166 = encode_clo(alloc_clo(lam56166_fptr, 0));

void* lam56168_fptr() // lam56168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56169 = arg_buffer[1];
//reading env and args
void* a5580656020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56169))[6];
//not do dummy comment
void* lst = (decode_clo(env56169))[5];
//not do dummy comment
void* kont55903 = (decode_clo(env56169))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env56169))[3];
//not do dummy comment
void* x = (decode_clo(env56169))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56169))[1];

//creating new closure instance
void** clo56845 = alloc_clo(lam56166_fptr, 5);

//setting env list
clo56845[1] = member_u63;
clo56845[2] = x;
clo56845[3] = kont55903;
clo56845[4] = lst;
clo56845[5] = cdr;
void* f5590556021 = encode_clo(clo56845);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5590556021;
arg_buffer[3] = a5580656020;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56168 = encode_clo(alloc_clo(lam56168_fptr, 0));

void* lam56170_fptr() // lam56170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56171 = arg_buffer[1];
//reading env and args
void* a5580456017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56171))[7];
//not do dummy comment
void* lst = (decode_clo(env56171))[6];
//not do dummy comment
void* kont55903 = (decode_clo(env56171))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env56171))[4];
//not do dummy comment
void* x = (decode_clo(env56171))[3];
//not do dummy comment
void* car = (decode_clo(env56171))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env56171))[1];

//if-clause
bool if_guard56846 = is_true(a5580456017);
if(if_guard56846)
{
void* x5580556018 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55903);
arg_buffer[2] = x5580556018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55903))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56848 = alloc_clo(lam56168_fptr, 6);

//setting env list
clo56848[1] = member_u63;
clo56848[2] = x;
clo56848[3] = equal_u63;
clo56848[4] = kont55903;
clo56848[5] = lst;
clo56848[6] = cdr;
void* f5590656019 = encode_clo(clo56848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5590656019;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56170 = encode_clo(alloc_clo(lam56170_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56172 = arg_buffer[1];
//reading env and args
void* kont55903 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56850 = alloc_clo(lam56170_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo56850[1] = member_u63;
clo56850[2] = car;
clo56850[3] = x;
clo56850[4] = equal_u63;
clo56850[5] = kont55903;
clo56850[6] = lst;
clo56850[7] = cdr;
void* f5590756016 = encode_clo(clo56850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5590756016;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam56173_fptr() // lam56173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56174 = arg_buffer[1];
//reading env and args
void* a5581356033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5581256031 = (decode_clo(env56174))[4];
//not do dummy comment
void* fun = (decode_clo(env56174))[3];
//not do dummy comment
void* kont55908 = (decode_clo(env56174))[2];
//not do dummy comment
void* foldl = (decode_clo(env56174))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont55908;
arg_buffer[3] = fun;
arg_buffer[4] = a5581256031;
arg_buffer[5] = a5581356033;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56173 = encode_clo(alloc_clo(lam56173_fptr, 0));

void* lam56175_fptr() // lam56175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56176 = arg_buffer[1];
//reading env and args
void* a5581256031 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56176))[5];
//not do dummy comment
void* lst = (decode_clo(env56176))[4];
//not do dummy comment
void* fun = (decode_clo(env56176))[3];
//not do dummy comment
void* kont55908 = (decode_clo(env56176))[2];
//not do dummy comment
void* foldl = (decode_clo(env56176))[1];

//creating new closure instance
void** clo56852 = alloc_clo(lam56173_fptr, 4);

//setting env list
clo56852[1] = foldl;
clo56852[2] = kont55908;
clo56852[3] = fun;
clo56852[4] = a5581256031;
void* f5590956032 = encode_clo(clo56852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5590956032;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56175 = encode_clo(alloc_clo(lam56175_fptr, 0));

void* lam56177_fptr() // lam56177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56178 = arg_buffer[1];
//reading env and args
void* a5581156029 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56178))[6];
//not do dummy comment
void* lst = (decode_clo(env56178))[5];
//not do dummy comment
void* fun = (decode_clo(env56178))[4];
//not do dummy comment
void* foldl = (decode_clo(env56178))[3];
//not do dummy comment
void* acc = (decode_clo(env56178))[2];
//not do dummy comment
void* kont55908 = (decode_clo(env56178))[1];

//creating new closure instance
void** clo56854 = alloc_clo(lam56175_fptr, 5);

//setting env list
clo56854[1] = foldl;
clo56854[2] = kont55908;
clo56854[3] = fun;
clo56854[4] = lst;
clo56854[5] = cdr;
void* f5591056030 = encode_clo(clo56854);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5591056030;
arg_buffer[3] = a5581156029;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56177 = encode_clo(alloc_clo(lam56177_fptr, 0));

void* lam56179_fptr() // lam56179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56180 = arg_buffer[1];
//reading env and args
void* a5581056027 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56180))[7];
//not do dummy comment
void* lst = (decode_clo(env56180))[6];
//not do dummy comment
void* fun = (decode_clo(env56180))[5];
//not do dummy comment
void* car = (decode_clo(env56180))[4];
//not do dummy comment
void* foldl = (decode_clo(env56180))[3];
//not do dummy comment
void* acc = (decode_clo(env56180))[2];
//not do dummy comment
void* kont55908 = (decode_clo(env56180))[1];

//if-clause
bool if_guard56855 = is_true(a5581056027);
if(if_guard56855)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55908);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55908))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56857 = alloc_clo(lam56177_fptr, 6);

//setting env list
clo56857[1] = kont55908;
clo56857[2] = acc;
clo56857[3] = foldl;
clo56857[4] = fun;
clo56857[5] = lst;
clo56857[6] = cdr;
void* f5591156028 = encode_clo(clo56857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5591156028;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56179 = encode_clo(alloc_clo(lam56179_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56181 = arg_buffer[1];
//reading env and args
void* kont55908 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo56859 = alloc_clo(lam56179_fptr, 7);

//setting env list
clo56859[1] = kont55908;
clo56859[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo56859[3] = foldl;
clo56859[4] = car;
clo56859[5] = fun;
clo56859[6] = lst;
clo56859[7] = cdr;
void* f5591256026 = encode_clo(clo56859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5591256026;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam56182_fptr() // lam56182 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56183 = arg_buffer[1];
//reading env and args
void* a5581756041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55913 = (decode_clo(env56183))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56183))[2];
//not do dummy comment
void* a5581556037 = (decode_clo(env56183))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55913;
arg_buffer[3] = a5581556037;
arg_buffer[4] = a5581756041;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56182 = encode_clo(alloc_clo(lam56182_fptr, 0));

void* lam56184_fptr() // lam56184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56185 = arg_buffer[1];
//reading env and args
void* a5581656039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55913 = (decode_clo(env56185))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56185))[4];
//not do dummy comment
void* cons = (decode_clo(env56185))[3];
//not do dummy comment
void* a5581556037 = (decode_clo(env56185))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56185))[1];

//creating new closure instance
void** clo56861 = alloc_clo(lam56182_fptr, 3);

//setting env list
clo56861[1] = a5581556037;
clo56861[2] = reverse_u45helper;
clo56861[3] = kont55913;
void* f5591456040 = encode_clo(clo56861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5591456040;
arg_buffer[3] = a5581656039;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a5581556037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55913 = (decode_clo(env56187))[6];
//not do dummy comment
void* lst = (decode_clo(env56187))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56187))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56187))[3];
//not do dummy comment
void* car = (decode_clo(env56187))[2];
//not do dummy comment
void* cons = (decode_clo(env56187))[1];

//creating new closure instance
void** clo56863 = alloc_clo(lam56184_fptr, 5);

//setting env list
clo56863[1] = lst2;
clo56863[2] = a5581556037;
clo56863[3] = cons;
clo56863[4] = reverse_u45helper;
clo56863[5] = kont55913;
void* f5591556038 = encode_clo(clo56863);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5591556038;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
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
void* a5581456035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56189))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56189))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56189))[5];
//not do dummy comment
void* car = (decode_clo(env56189))[4];
//not do dummy comment
void* cons = (decode_clo(env56189))[3];
//not do dummy comment
void* cdr = (decode_clo(env56189))[2];
//not do dummy comment
void* kont55913 = (decode_clo(env56189))[1];

//if-clause
bool if_guard56864 = is_true(a5581456035);
if(if_guard56864)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55913);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55913))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56866 = alloc_clo(lam56186_fptr, 6);

//setting env list
clo56866[1] = cons;
clo56866[2] = car;
clo56866[3] = lst2;
clo56866[4] = reverse_u45helper;
clo56866[5] = lst;
clo56866[6] = kont55913;
void* f5591656036 = encode_clo(clo56866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5591656036;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56188 = encode_clo(alloc_clo(lam56188_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56190 = arg_buffer[1];
//reading env and args
void* kont55913 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56868 = alloc_clo(lam56188_fptr, 7);

//setting env list
clo56868[1] = kont55913;
clo56868[2] = cdr;
clo56868[3] = cons;
clo56868[4] = car;
clo56868[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo56868[6] = reverse_u45helper;
clo56868[7] = lst;
void* f5591756034 = encode_clo(clo56868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5591756034;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam56191_fptr() // lam56191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56192 = arg_buffer[1];
//reading env and args
void* a5581856043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56192))[3];
//not do dummy comment
void* kont55918 = (decode_clo(env56192))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env56192))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont55918;
arg_buffer[3] = lst;
arg_buffer[4] = a5581856043;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56191 = encode_clo(alloc_clo(lam56191_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56193 = arg_buffer[1];
//reading env and args
void* kont55918 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo56870 = alloc_clo(lam56191_fptr, 3);

//setting env list
clo56870[1] = reverse_u45helper;
clo56870[2] = kont55918;
clo56870[3] = lst;
void* f5591956042 = encode_clo(clo56870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5591956042;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam56194_fptr() // lam56194 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56195 = arg_buffer[1];
//reading env and args
void* x5582156048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55920 = (decode_clo(env56195))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55920);
arg_buffer[2] = x5582156048;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55920))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56194 = encode_clo(alloc_clo(lam56194_fptr, 0));

void* lam56196_fptr() // lam56196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56197 = arg_buffer[1];
//reading env and args
void* a5582656057 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55920 = (decode_clo(env56197))[4];
//not do dummy comment
void* a5582256050 = (decode_clo(env56197))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56197))[2];
//not do dummy comment
void* a5582456053 = (decode_clo(env56197))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55920;
arg_buffer[3] = a5582256050;
arg_buffer[4] = a5582456053;
arg_buffer[5] = a5582656057;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56196 = encode_clo(alloc_clo(lam56196_fptr, 0));

void* lam56198_fptr() // lam56198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56199 = arg_buffer[1];
//reading env and args
void* a5582556055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55920 = (decode_clo(env56199))[6];
//not do dummy comment
void* a5582256050 = (decode_clo(env56199))[5];
//not do dummy comment
void* cons = (decode_clo(env56199))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env56199))[3];
//not do dummy comment
void* a5582456053 = (decode_clo(env56199))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56199))[1];

//creating new closure instance
void** clo56872 = alloc_clo(lam56196_fptr, 4);

//setting env list
clo56872[1] = a5582456053;
clo56872[2] = take_u45helper;
clo56872[3] = a5582256050;
clo56872[4] = kont55920;
void* f5592256056 = encode_clo(clo56872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5592256056;
arg_buffer[3] = a5582556055;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56198 = encode_clo(alloc_clo(lam56198_fptr, 0));

void* lam56200_fptr() // lam56200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56201 = arg_buffer[1];
//reading env and args
void* a5582456053 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56201))[7];
//not do dummy comment
void* kont55920 = (decode_clo(env56201))[6];
//not do dummy comment
void* a5582256050 = (decode_clo(env56201))[5];
//not do dummy comment
void* car = (decode_clo(env56201))[4];
//not do dummy comment
void* cons = (decode_clo(env56201))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env56201))[2];
//not do dummy comment
void* lst2 = (decode_clo(env56201))[1];

//creating new closure instance
void** clo56874 = alloc_clo(lam56198_fptr, 6);

//setting env list
clo56874[1] = lst2;
clo56874[2] = a5582456053;
clo56874[3] = take_u45helper;
clo56874[4] = cons;
clo56874[5] = a5582256050;
clo56874[6] = kont55920;
void* f5592356054 = encode_clo(clo56874);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5592356054;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56200 = encode_clo(alloc_clo(lam56200_fptr, 0));

void* lam56203_fptr() // lam56203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56204 = arg_buffer[1];
//reading env and args
void* a5582256050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56204))[8];
//not do dummy comment
void* kont55920 = (decode_clo(env56204))[7];
//not do dummy comment
void* cons = (decode_clo(env56204))[6];
//not do dummy comment
void* _u45 = (decode_clo(env56204))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56204))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56204))[3];
//not do dummy comment
void* n = (decode_clo(env56204))[2];
//not do dummy comment
void* car = (decode_clo(env56204))[1];
mpz_t* mpzvar56875 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56875, "1", 10);
void* a5582356051 = encode_mpz(mpzvar56875);

//creating new closure instance
void** clo56877 = alloc_clo(lam56200_fptr, 7);

//setting env list
clo56877[1] = lst2;
clo56877[2] = take_u45helper;
clo56877[3] = cons;
clo56877[4] = car;
clo56877[5] = a5582256050;
clo56877[6] = kont55920;
clo56877[7] = lst;
void* f5592456052 = encode_clo(clo56877);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5592456052;
arg_buffer[3] = n;
arg_buffer[4] = a5582356051;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a5582056046 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56206))[10];
//not do dummy comment
void* lst = (decode_clo(env56206))[9];
//not do dummy comment
void* cons = (decode_clo(env56206))[8];
//not do dummy comment
void* _u45 = (decode_clo(env56206))[7];
//not do dummy comment
void* kont55920 = (decode_clo(env56206))[6];
//not do dummy comment
void* reverse = (decode_clo(env56206))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env56206))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56206))[3];
//not do dummy comment
void* n = (decode_clo(env56206))[2];
//not do dummy comment
void* car = (decode_clo(env56206))[1];

//if-clause
bool if_guard56878 = is_true(a5582056046);
if(if_guard56878)
{

//creating new closure instance
void** clo56880 = alloc_clo(lam56194_fptr, 1);

//setting env list
clo56880[1] = kont55920;
void* f5592156047 = encode_clo(clo56880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5592156047;
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
void** clo56882 = alloc_clo(lam56203_fptr, 8);

//setting env list
clo56882[1] = car;
clo56882[2] = n;
clo56882[3] = lst2;
clo56882[4] = take_u45helper;
clo56882[5] = _u45;
clo56882[6] = cons;
clo56882[7] = kont55920;
clo56882[8] = lst;
void* f5592556049 = encode_clo(clo56882);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5592556049;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56205 = encode_clo(alloc_clo(lam56205_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56208 = arg_buffer[1];
//reading env and args
void* kont55920 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar56883 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56883, "0", 10);
void* a5581956044 = encode_mpz(mpzvar56883);

//creating new closure instance
void** clo56885 = alloc_clo(lam56205_fptr, 10);

//setting env list
clo56885[1] = car;
clo56885[2] = n;
clo56885[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo56885[4] = take_u45helper;
clo56885[5] = reverse;
clo56885[6] = kont55920;
clo56885[7] = _u45;
clo56885[8] = cons;
clo56885[9] = lst;
clo56885[10] = cdr;
void* f5592656045 = encode_clo(clo56885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5592656045;
arg_buffer[3] = n;
arg_buffer[4] = a5581956044;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam56209_fptr() // lam56209 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56210 = arg_buffer[1];
//reading env and args
void* a5582756059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56210))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env56210))[3];
//not do dummy comment
void* n = (decode_clo(env56210))[2];
//not do dummy comment
void* kont55927 = (decode_clo(env56210))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont55927;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5582756059;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56209 = encode_clo(alloc_clo(lam56209_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56211 = arg_buffer[1];
//reading env and args
void* kont55927 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56887 = alloc_clo(lam56209_fptr, 4);

//setting env list
clo56887[1] = kont55927;
clo56887[2] = n;
clo56887[3] = take_u45helper;
clo56887[4] = lst;
void* f5592856058 = encode_clo(clo56887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5592856058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam56213_fptr() // lam56213 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56214 = arg_buffer[1];
//reading env and args
void* a5583256067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55929 = (decode_clo(env56214))[3];
//not do dummy comment
void* a5583056063 = (decode_clo(env56214))[2];
//not do dummy comment
void* _u43 = (decode_clo(env56214))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont55929;
arg_buffer[3] = a5583056063;
arg_buffer[4] = a5583256067;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
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
void* a5583156065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55929 = (decode_clo(env56216))[4];
//not do dummy comment
void* length = (decode_clo(env56216))[3];
//not do dummy comment
void* a5583056063 = (decode_clo(env56216))[2];
//not do dummy comment
void* _u43 = (decode_clo(env56216))[1];

//creating new closure instance
void** clo56889 = alloc_clo(lam56213_fptr, 3);

//setting env list
clo56889[1] = _u43;
clo56889[2] = a5583056063;
clo56889[3] = kont55929;
void* f5593056066 = encode_clo(clo56889);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5593056066;
arg_buffer[3] = a5583156065;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
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
void* a5582856061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56219))[5];
//not do dummy comment
void* length = (decode_clo(env56219))[4];
//not do dummy comment
void* _u43 = (decode_clo(env56219))[3];
//not do dummy comment
void* kont55929 = (decode_clo(env56219))[2];
//not do dummy comment
void* cdr = (decode_clo(env56219))[1];

//if-clause
bool if_guard56890 = is_true(a5582856061);
if(if_guard56890)
{
mpz_t* mpzvar56891 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56891, "0", 10);
void* x5582956062 = encode_mpz(mpzvar56891);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55929);
arg_buffer[2] = x5582956062;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55929))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar56892 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56892, "1", 10);
void* a5583056063 = encode_mpz(mpzvar56892);

//creating new closure instance
void** clo56894 = alloc_clo(lam56215_fptr, 4);

//setting env list
clo56894[1] = _u43;
clo56894[2] = a5583056063;
clo56894[3] = length;
clo56894[4] = kont55929;
void* f5593156064 = encode_clo(clo56894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5593156064;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56218 = encode_clo(alloc_clo(lam56218_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56220 = arg_buffer[1];
//reading env and args
void* kont55929 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo56896 = alloc_clo(lam56218_fptr, 5);

//setting env list
clo56896[1] = cdr;
clo56896[2] = kont55929;
clo56896[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo56896[4] = length;
clo56896[5] = lst;
void* f5593256060 = encode_clo(clo56896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5593256060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam56221_fptr() // lam56221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56222 = arg_buffer[1];
//reading env and args
void* x5583456071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55933 = (decode_clo(env56222))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55933);
arg_buffer[2] = x5583456071;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55933))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56221 = encode_clo(alloc_clo(lam56221_fptr, 0));

void* lam56223_fptr() // lam56223 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56224 = arg_buffer[1];
//reading env and args
void* a5583856079 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5583656075 = (decode_clo(env56224))[3];
//not do dummy comment
void* kont55933 = (decode_clo(env56224))[2];
//not do dummy comment
void* cons = (decode_clo(env56224))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55933;
arg_buffer[3] = a5583656075;
arg_buffer[4] = a5583856079;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56223 = encode_clo(alloc_clo(lam56223_fptr, 0));

void* lam56225_fptr() // lam56225 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56226 = arg_buffer[1];
//reading env and args
void* a5583756077 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5583656075 = (decode_clo(env56226))[5];
//not do dummy comment
void* kont55933 = (decode_clo(env56226))[4];
//not do dummy comment
void* map = (decode_clo(env56226))[3];
//not do dummy comment
void* proc = (decode_clo(env56226))[2];
//not do dummy comment
void* cons = (decode_clo(env56226))[1];

//creating new closure instance
void** clo56898 = alloc_clo(lam56223_fptr, 3);

//setting env list
clo56898[1] = cons;
clo56898[2] = kont55933;
clo56898[3] = a5583656075;
void* f5593556078 = encode_clo(clo56898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5593556078;
arg_buffer[3] = proc;
arg_buffer[4] = a5583756077;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56225 = encode_clo(alloc_clo(lam56225_fptr, 0));

void* lam56227_fptr() // lam56227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56228 = arg_buffer[1];
//reading env and args
void* a5583656075 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56228))[6];
//not do dummy comment
void* map = (decode_clo(env56228))[5];
//not do dummy comment
void* proc = (decode_clo(env56228))[4];
//not do dummy comment
void* cons = (decode_clo(env56228))[3];
//not do dummy comment
void* kont55933 = (decode_clo(env56228))[2];
//not do dummy comment
void* lst = (decode_clo(env56228))[1];

//creating new closure instance
void** clo56900 = alloc_clo(lam56225_fptr, 5);

//setting env list
clo56900[1] = cons;
clo56900[2] = proc;
clo56900[3] = map;
clo56900[4] = kont55933;
clo56900[5] = a5583656075;
void* f5593656076 = encode_clo(clo56900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5593656076;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56227 = encode_clo(alloc_clo(lam56227_fptr, 0));

void* lam56229_fptr() // lam56229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56230 = arg_buffer[1];
//reading env and args
void* a5583556073 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56230))[6];
//not do dummy comment
void* map = (decode_clo(env56230))[5];
//not do dummy comment
void* proc = (decode_clo(env56230))[4];
//not do dummy comment
void* cons = (decode_clo(env56230))[3];
//not do dummy comment
void* kont55933 = (decode_clo(env56230))[2];
//not do dummy comment
void* lst = (decode_clo(env56230))[1];

//creating new closure instance
void** clo56902 = alloc_clo(lam56227_fptr, 6);

//setting env list
clo56902[1] = lst;
clo56902[2] = kont55933;
clo56902[3] = cons;
clo56902[4] = proc;
clo56902[5] = map;
clo56902[6] = cdr;
void* f5593756074 = encode_clo(clo56902);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5593756074;
arg_buffer[3] = a5583556073;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56229 = encode_clo(alloc_clo(lam56229_fptr, 0));

void* lam56231_fptr() // lam56231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56232 = arg_buffer[1];
//reading env and args
void* a5583356069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env56232))[8];
//not do dummy comment
void* proc = (decode_clo(env56232))[7];
//not do dummy comment
void* car = (decode_clo(env56232))[6];
//not do dummy comment
void* cons = (decode_clo(env56232))[5];
//not do dummy comment
void* list = (decode_clo(env56232))[4];
//not do dummy comment
void* cdr = (decode_clo(env56232))[3];
//not do dummy comment
void* kont55933 = (decode_clo(env56232))[2];
//not do dummy comment
void* lst = (decode_clo(env56232))[1];

//if-clause
bool if_guard56903 = is_true(a5583356069);
if(if_guard56903)
{

//creating new closure instance
void** clo56905 = alloc_clo(lam56221_fptr, 1);

//setting env list
clo56905[1] = kont55933;
void* f5593456070 = encode_clo(clo56905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5593456070;
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
void** clo56907 = alloc_clo(lam56229_fptr, 6);

//setting env list
clo56907[1] = lst;
clo56907[2] = kont55933;
clo56907[3] = cons;
clo56907[4] = proc;
clo56907[5] = map;
clo56907[6] = cdr;
void* f5593856072 = encode_clo(clo56907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5593856072;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56231 = encode_clo(alloc_clo(lam56231_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56233 = arg_buffer[1];
//reading env and args
void* kont55933 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56909 = alloc_clo(lam56231_fptr, 8);

//setting env list
clo56909[1] = lst;
clo56909[2] = kont55933;
clo56909[3] = cdr;
clo56909[4] = list;
clo56909[5] = cons;
clo56909[6] = car;
clo56909[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo56909[8] = map;
void* f5593956068 = encode_clo(clo56909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5593956068;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam56234_fptr() // lam56234 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56235 = arg_buffer[1];
//reading env and args
void* x5584056083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55940 = (decode_clo(env56235))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55940);
arg_buffer[2] = x5584056083;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55940))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56234 = encode_clo(alloc_clo(lam56234_fptr, 0));

void* lam56236_fptr() // lam56236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56237 = arg_buffer[1];
//reading env and args
void* a5584556093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5584356089 = (decode_clo(env56237))[3];
//not do dummy comment
void* kont55940 = (decode_clo(env56237))[2];
//not do dummy comment
void* cons = (decode_clo(env56237))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55940;
arg_buffer[3] = a5584356089;
arg_buffer[4] = a5584556093;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a5584456091 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5584356089 = (decode_clo(env56239))[5];
//not do dummy comment
void* op = (decode_clo(env56239))[4];
//not do dummy comment
void* kont55940 = (decode_clo(env56239))[3];
//not do dummy comment
void* filter = (decode_clo(env56239))[2];
//not do dummy comment
void* cons = (decode_clo(env56239))[1];

//creating new closure instance
void** clo56911 = alloc_clo(lam56236_fptr, 3);

//setting env list
clo56911[1] = cons;
clo56911[2] = kont55940;
clo56911[3] = a5584356089;
void* f5594256092 = encode_clo(clo56911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5594256092;
arg_buffer[3] = op;
arg_buffer[4] = a5584456091;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a5584356089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56241))[6];
//not do dummy comment
void* lst = (decode_clo(env56241))[5];
//not do dummy comment
void* op = (decode_clo(env56241))[4];
//not do dummy comment
void* kont55940 = (decode_clo(env56241))[3];
//not do dummy comment
void* filter = (decode_clo(env56241))[2];
//not do dummy comment
void* cons = (decode_clo(env56241))[1];

//creating new closure instance
void** clo56913 = alloc_clo(lam56238_fptr, 5);

//setting env list
clo56913[1] = cons;
clo56913[2] = filter;
clo56913[3] = kont55940;
clo56913[4] = op;
clo56913[5] = a5584356089;
void* f5594356090 = encode_clo(clo56913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5594356090;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
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
void* a5584656095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env56243))[3];
//not do dummy comment
void* kont55940 = (decode_clo(env56243))[2];
//not do dummy comment
void* filter = (decode_clo(env56243))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont55940;
arg_buffer[3] = op;
arg_buffer[4] = a5584656095;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
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
void* a5584256087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56245))[7];
//not do dummy comment
void* lst = (decode_clo(env56245))[6];
//not do dummy comment
void* op = (decode_clo(env56245))[5];
//not do dummy comment
void* kont55940 = (decode_clo(env56245))[4];
//not do dummy comment
void* cons = (decode_clo(env56245))[3];
//not do dummy comment
void* filter = (decode_clo(env56245))[2];
//not do dummy comment
void* car = (decode_clo(env56245))[1];

//if-clause
bool if_guard56914 = is_true(a5584256087);
if(if_guard56914)
{

//creating new closure instance
void** clo56916 = alloc_clo(lam56240_fptr, 6);

//setting env list
clo56916[1] = cons;
clo56916[2] = filter;
clo56916[3] = kont55940;
clo56916[4] = op;
clo56916[5] = lst;
clo56916[6] = cdr;
void* f5594456088 = encode_clo(clo56916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5594456088;
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
void** clo56918 = alloc_clo(lam56242_fptr, 3);

//setting env list
clo56918[1] = filter;
clo56918[2] = kont55940;
clo56918[3] = op;
void* f5594556094 = encode_clo(clo56918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5594556094;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56244 = encode_clo(alloc_clo(lam56244_fptr, 0));

void* lam56246_fptr() // lam56246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56247 = arg_buffer[1];
//reading env and args
void* a5584156085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56247))[7];
//not do dummy comment
void* lst = (decode_clo(env56247))[6];
//not do dummy comment
void* op = (decode_clo(env56247))[5];
//not do dummy comment
void* kont55940 = (decode_clo(env56247))[4];
//not do dummy comment
void* cons = (decode_clo(env56247))[3];
//not do dummy comment
void* filter = (decode_clo(env56247))[2];
//not do dummy comment
void* car = (decode_clo(env56247))[1];

//creating new closure instance
void** clo56920 = alloc_clo(lam56244_fptr, 7);

//setting env list
clo56920[1] = car;
clo56920[2] = filter;
clo56920[3] = cons;
clo56920[4] = kont55940;
clo56920[5] = op;
clo56920[6] = lst;
clo56920[7] = cdr;
void* f5594656086 = encode_clo(clo56920);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5594656086;
arg_buffer[3] = a5584156085;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56246 = encode_clo(alloc_clo(lam56246_fptr, 0));

void* lam56248_fptr() // lam56248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56249 = arg_buffer[1];
//reading env and args
void* a5583956081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env56249))[8];
//not do dummy comment
void* op = (decode_clo(env56249))[7];
//not do dummy comment
void* kont55940 = (decode_clo(env56249))[6];
//not do dummy comment
void* cons = (decode_clo(env56249))[5];
//not do dummy comment
void* list = (decode_clo(env56249))[4];
//not do dummy comment
void* cdr = (decode_clo(env56249))[3];
//not do dummy comment
void* filter = (decode_clo(env56249))[2];
//not do dummy comment
void* car = (decode_clo(env56249))[1];

//if-clause
bool if_guard56921 = is_true(a5583956081);
if(if_guard56921)
{

//creating new closure instance
void** clo56923 = alloc_clo(lam56234_fptr, 1);

//setting env list
clo56923[1] = kont55940;
void* f5594156082 = encode_clo(clo56923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5594156082;
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
void** clo56925 = alloc_clo(lam56246_fptr, 7);

//setting env list
clo56925[1] = car;
clo56925[2] = filter;
clo56925[3] = cons;
clo56925[4] = kont55940;
clo56925[5] = op;
clo56925[6] = lst;
clo56925[7] = cdr;
void* f5594756084 = encode_clo(clo56925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5594756084;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56248 = encode_clo(alloc_clo(lam56248_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56250 = arg_buffer[1];
//reading env and args
void* kont55940 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56927 = alloc_clo(lam56248_fptr, 8);

//setting env list
clo56927[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo56927[2] = filter;
clo56927[3] = cdr;
clo56927[4] = list;
clo56927[5] = cons;
clo56927[6] = kont55940;
clo56927[7] = op;
clo56927[8] = lst;
void* f5594856080 = encode_clo(clo56927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5594856080;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam56251_fptr() // lam56251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56252 = arg_buffer[1];
//reading env and args
void* a5585156103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5584956100 = (decode_clo(env56252))[3];
//not do dummy comment
void* kont55949 = (decode_clo(env56252))[2];
//not do dummy comment
void* drop = (decode_clo(env56252))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont55949;
arg_buffer[3] = a5584956100;
arg_buffer[4] = a5585156103;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56251 = encode_clo(alloc_clo(lam56251_fptr, 0));

void* lam56254_fptr() // lam56254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56255 = arg_buffer[1];
//reading env and args
void* a5584956100 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env56255))[4];
//not do dummy comment
void* _u45 = (decode_clo(env56255))[3];
//not do dummy comment
void* kont55949 = (decode_clo(env56255))[2];
//not do dummy comment
void* drop = (decode_clo(env56255))[1];
mpz_t* mpzvar56928 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56928, "1", 10);
void* a5585056101 = encode_mpz(mpzvar56928);

//creating new closure instance
void** clo56930 = alloc_clo(lam56251_fptr, 3);

//setting env list
clo56930[1] = drop;
clo56930[2] = kont55949;
clo56930[3] = a5584956100;
void* f5595056102 = encode_clo(clo56930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5595056102;
arg_buffer[3] = n;
arg_buffer[4] = a5585056101;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
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
void* a5584856098 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56257))[6];
//not do dummy comment
void* n = (decode_clo(env56257))[5];
//not do dummy comment
void* _u45 = (decode_clo(env56257))[4];
//not do dummy comment
void* drop = (decode_clo(env56257))[3];
//not do dummy comment
void* kont55949 = (decode_clo(env56257))[2];
//not do dummy comment
void* lst = (decode_clo(env56257))[1];

//if-clause
bool if_guard56931 = is_true(a5584856098);
if(if_guard56931)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55949);
arg_buffer[2] = lst;
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
void** clo56933 = alloc_clo(lam56254_fptr, 4);

//setting env list
clo56933[1] = drop;
clo56933[2] = kont55949;
clo56933[3] = _u45;
clo56933[4] = n;
void* f5595156099 = encode_clo(clo56933);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5595156099;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56256 = encode_clo(alloc_clo(lam56256_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56259 = arg_buffer[1];
//reading env and args
void* kont55949 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar56934 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56934, "0", 10);
void* a5584756096 = encode_mpz(mpzvar56934);

//creating new closure instance
void** clo56936 = alloc_clo(lam56256_fptr, 6);

//setting env list
clo56936[1] = lst;
clo56936[2] = kont55949;
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo56936[3] = drop;
clo56936[4] = _u45;
clo56936[5] = n;
clo56936[6] = cdr;
void* f5595256097 = encode_clo(clo56936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5595256097;
arg_buffer[3] = n;
arg_buffer[4] = a5584756096;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam56260_fptr() // lam56260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56261 = arg_buffer[1];
//reading env and args
void* a5585556111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5585356107 = (decode_clo(env56261))[3];
//not do dummy comment
void* kont55953 = (decode_clo(env56261))[2];
//not do dummy comment
void* proc = (decode_clo(env56261))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont55953;
arg_buffer[3] = a5585356107;
arg_buffer[4] = a5585556111;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56260 = encode_clo(alloc_clo(lam56260_fptr, 0));

void* lam56262_fptr() // lam56262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56263 = arg_buffer[1];
//reading env and args
void* a5585456109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5585356107 = (decode_clo(env56263))[5];
//not do dummy comment
void* foldr = (decode_clo(env56263))[4];
//not do dummy comment
void* kont55953 = (decode_clo(env56263))[3];
//not do dummy comment
void* proc = (decode_clo(env56263))[2];
//not do dummy comment
void* acc = (decode_clo(env56263))[1];

//creating new closure instance
void** clo56938 = alloc_clo(lam56260_fptr, 3);

//setting env list
clo56938[1] = proc;
clo56938[2] = kont55953;
clo56938[3] = a5585356107;
void* f5595456110 = encode_clo(clo56938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5595456110;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5585456109;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56262 = encode_clo(alloc_clo(lam56262_fptr, 0));

void* lam56264_fptr() // lam56264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56265 = arg_buffer[1];
//reading env and args
void* a5585356107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56265))[6];
//not do dummy comment
void* kont55953 = (decode_clo(env56265))[5];
//not do dummy comment
void* foldr = (decode_clo(env56265))[4];
//not do dummy comment
void* lst = (decode_clo(env56265))[3];
//not do dummy comment
void* proc = (decode_clo(env56265))[2];
//not do dummy comment
void* acc = (decode_clo(env56265))[1];

//creating new closure instance
void** clo56940 = alloc_clo(lam56262_fptr, 5);

//setting env list
clo56940[1] = acc;
clo56940[2] = proc;
clo56940[3] = kont55953;
clo56940[4] = foldr;
clo56940[5] = a5585356107;
void* f5595556108 = encode_clo(clo56940);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5595556108;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56264 = encode_clo(alloc_clo(lam56264_fptr, 0));

void* lam56266_fptr() // lam56266 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56267 = arg_buffer[1];
//reading env and args
void* a5585256105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56267))[7];
//not do dummy comment
void* kont55953 = (decode_clo(env56267))[6];
//not do dummy comment
void* car = (decode_clo(env56267))[5];
//not do dummy comment
void* foldr = (decode_clo(env56267))[4];
//not do dummy comment
void* lst = (decode_clo(env56267))[3];
//not do dummy comment
void* proc = (decode_clo(env56267))[2];
//not do dummy comment
void* acc = (decode_clo(env56267))[1];

//if-clause
bool if_guard56941 = is_true(a5585256105);
if(if_guard56941)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55953);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55953))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56943 = alloc_clo(lam56264_fptr, 6);

//setting env list
clo56943[1] = acc;
clo56943[2] = proc;
clo56943[3] = lst;
clo56943[4] = foldr;
clo56943[5] = kont55953;
clo56943[6] = cdr;
void* f5595656106 = encode_clo(clo56943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5595656106;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56266 = encode_clo(alloc_clo(lam56266_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56268 = arg_buffer[1];
//reading env and args
void* kont55953 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo56945 = alloc_clo(lam56266_fptr, 7);

//setting env list
clo56945[1] = acc;
clo56945[2] = proc;
clo56945[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo56945[4] = foldr;
clo56945[5] = car;
clo56945[6] = kont55953;
clo56945[7] = cdr;
void* f5595756104 = encode_clo(clo56945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5595756104;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam56269_fptr() // lam56269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56270 = arg_buffer[1];
//reading env and args
void* a5585956119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5585756115 = (decode_clo(env56270))[3];
//not do dummy comment
void* kont55958 = (decode_clo(env56270))[2];
//not do dummy comment
void* cons = (decode_clo(env56270))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont55958;
arg_buffer[3] = a5585756115;
arg_buffer[4] = a5585956119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
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
void* a5585856117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env56272))[5];
//not do dummy comment
void* a5585756115 = (decode_clo(env56272))[4];
//not do dummy comment
void* lst2 = (decode_clo(env56272))[3];
//not do dummy comment
void* kont55958 = (decode_clo(env56272))[2];
//not do dummy comment
void* cons = (decode_clo(env56272))[1];

//creating new closure instance
void** clo56947 = alloc_clo(lam56269_fptr, 3);

//setting env list
clo56947[1] = cons;
clo56947[2] = kont55958;
clo56947[3] = a5585756115;
void* f5595956118 = encode_clo(clo56947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5595956118;
arg_buffer[3] = a5585856117;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56271 = encode_clo(alloc_clo(lam56271_fptr, 0));

void* lam56273_fptr() // lam56273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56274 = arg_buffer[1];
//reading env and args
void* a5585756115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56274))[6];
//not do dummy comment
void* append = (decode_clo(env56274))[5];
//not do dummy comment
void* lst2 = (decode_clo(env56274))[4];
//not do dummy comment
void* cons = (decode_clo(env56274))[3];
//not do dummy comment
void* kont55958 = (decode_clo(env56274))[2];
//not do dummy comment
void* lst1 = (decode_clo(env56274))[1];

//creating new closure instance
void** clo56949 = alloc_clo(lam56271_fptr, 5);

//setting env list
clo56949[1] = cons;
clo56949[2] = kont55958;
clo56949[3] = lst2;
clo56949[4] = a5585756115;
clo56949[5] = append;
void* f5596056116 = encode_clo(clo56949);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5596056116;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56273 = encode_clo(alloc_clo(lam56273_fptr, 0));

void* lam56275_fptr() // lam56275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56276 = arg_buffer[1];
//reading env and args
void* a5585656113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env56276))[7];
//not do dummy comment
void* append = (decode_clo(env56276))[6];
//not do dummy comment
void* lst2 = (decode_clo(env56276))[5];
//not do dummy comment
void* cons = (decode_clo(env56276))[4];
//not do dummy comment
void* kont55958 = (decode_clo(env56276))[3];
//not do dummy comment
void* lst1 = (decode_clo(env56276))[2];
//not do dummy comment
void* car = (decode_clo(env56276))[1];

//if-clause
bool if_guard56950 = is_true(a5585656113);
if(if_guard56950)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55958);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55958))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo56952 = alloc_clo(lam56273_fptr, 6);

//setting env list
clo56952[1] = lst1;
clo56952[2] = kont55958;
clo56952[3] = cons;
clo56952[4] = lst2;
clo56952[5] = append;
clo56952[6] = cdr;
void* f5596156114 = encode_clo(clo56952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5596156114;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam56275 = encode_clo(alloc_clo(lam56275_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56277 = arg_buffer[1];
//reading env and args
void* kont55958 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo56954 = alloc_clo(lam56275_fptr, 7);

//setting env list
clo56954[1] = car;
clo56954[2] = lst1;
clo56954[3] = kont55958;
clo56954[4] = cons;
clo56954[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo56954[6] = append;
clo56954[7] = cdr;
void* f5596256112 = encode_clo(clo56954);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5596256112;
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
void* _56278 = arg_buffer[1];
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

void* kont5596356120 = prim_car(lst);
void* lst56121 = prim_cdr(lst);
void* x5586056122 = apply_prim_hash(lst56121);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5596356120);
arg_buffer[2] = x5586056122;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5596356120))[0]);
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
void* _56279 = arg_buffer[1];
//reading env and args
void* kont55965 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5586156123 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55965);
arg_buffer[2] = x5586156123;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55965))[0]);
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
void* _56280 = arg_buffer[1];
//reading env and args
void* kont55966 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5586256124 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55966);
arg_buffer[2] = x5586256124;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55966))[0]);
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
void* _56281 = arg_buffer[1];
//reading env and args
void* kont55967 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5586356125 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55967);
arg_buffer[2] = x5586356125;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55967))[0]);
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
void* _56282 = arg_buffer[1];
//reading env and args
void* kont55968 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5586456126 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55968);
arg_buffer[2] = x5586456126;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55968))[0]);
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
void* _56289 = arg_buffer[1];
//reading env and args
void* kont55969 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar56955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56955, "1", 10);
void* a5586556127 = encode_mpz(mpzvar56955);
mpz_t* mpzvar56956 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56956, "2", 10);
void* a5586656128 = encode_mpz(mpzvar56956);
mpz_t* mpzvar56957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56957, "3", 10);
void* a5586756129 = encode_mpz(mpzvar56957);
mpz_t* mpzvar56958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56958, "4", 10);
void* a5586856130 = encode_mpz(mpzvar56958);
mpz_t* mpzvar56959 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56959, "5", 10);
void* a5586956131 = encode_mpz(mpzvar56959);
mpz_t* mpzvar56960 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar56960, "100", 10);
void* a5587056132 = encode_mpz(mpzvar56960);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u60_u61);
arg_buffer[2] = kont55969;
arg_buffer[3] = a5586556127;
arg_buffer[4] = a5586656128;
arg_buffer[5] = a5586756129;
arg_buffer[6] = a5586856130;
arg_buffer[7] = a5586956131;
arg_buffer[8] = a5587056132;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u60_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam56290_fptr() // lam56290 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env56291 = arg_buffer[1];
//reading env and args
void* x5587156134 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont55970 = (decode_clo(env56291))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont55970);
arg_buffer[2] = x5587156134;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont55970))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam56290 = encode_clo(alloc_clo(lam56290_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _56292 = arg_buffer[1];
//reading env and args
void* kont55970 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo56962 = alloc_clo(lam56290_fptr, 1);

//setting env list
clo56962[1] = kont55970;
void* f5597156133 = encode_clo(clo56962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5597156133;
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

