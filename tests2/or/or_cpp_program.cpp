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
void* _52168 = arg_buffer[1];
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

void* kont5189852000 = prim_car(lst);
void* lst52001 = prim_cdr(lst);
void* x5180552002 = apply_prim__u43(lst52001);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5189852000);
arg_buffer[2] = x5180552002;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5189852000))[0]);
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
void* _52169 = arg_buffer[1];
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

void* kont5190052003 = prim_car(lst);
void* lst52004 = prim_cdr(lst);
void* x5180652005 = apply_prim__u45(lst52004);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5190052003);
arg_buffer[2] = x5180652005;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5190052003))[0]);
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
void* _52170 = arg_buffer[1];
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

void* kont5190252006 = prim_car(lst);
void* lst52007 = prim_cdr(lst);
void* x5180752008 = apply_prim__u42(lst52007);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5190252006);
arg_buffer[2] = x5180752008;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5190252006))[0]);
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
void* _52171 = arg_buffer[1];
//reading env and args
void* kont51904 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5180852009 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51904);
arg_buffer[2] = x5180852009;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51904))[0]);
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
void* _52172 = arg_buffer[1];
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

void* kont5190552010 = prim_car(lst);
void* lst52011 = prim_cdr(lst);
void* x5180952012 = apply_prim__u47(lst52011);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5190552010);
arg_buffer[2] = x5180952012;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5190552010))[0]);
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
void* _52173 = arg_buffer[1];
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

void* kont5190752013 = prim_car(lst);
void* lst52014 = prim_cdr(lst);
void* x5181052015 = apply_prim__u61(lst52014);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5190752013);
arg_buffer[2] = x5181052015;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5190752013))[0]);
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
void* _52174 = arg_buffer[1];
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

void* kont5190952016 = prim_car(lst);
void* lst52017 = prim_cdr(lst);
void* x5181152018 = apply_prim__u62(lst52017);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5190952016);
arg_buffer[2] = x5181152018;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5190952016))[0]);
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
void* _52175 = arg_buffer[1];
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

void* kont5191152019 = prim_car(lst);
void* lst52020 = prim_cdr(lst);
void* x5181252021 = apply_prim__u60(lst52020);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5191152019);
arg_buffer[2] = x5181252021;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5191152019))[0]);
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
void* _52176 = arg_buffer[1];
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

void* kont5191352022 = prim_car(lst);
void* lst52023 = prim_cdr(lst);
void* x5181352024 = apply_prim__u60_u61(lst52023);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5191352022);
arg_buffer[2] = x5181352024;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5191352022))[0]);
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
void* _52177 = arg_buffer[1];
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

void* kont5191552025 = prim_car(lst);
void* lst52026 = prim_cdr(lst);
void* x5181452027 = apply_prim__u62_u61(lst52026);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5191552025);
arg_buffer[2] = x5181452027;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5191552025))[0]);
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
void* _52178 = arg_buffer[1];
//reading env and args
void* kont51917 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5181552028 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51917);
arg_buffer[2] = x5181552028;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51917))[0]);
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
void* _52179 = arg_buffer[1];
//reading env and args
void* kont51918 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5181652029 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51918);
arg_buffer[2] = x5181652029;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51918))[0]);
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
void* _52180 = arg_buffer[1];
//reading env and args
void* kont51919 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5181752030 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51919);
arg_buffer[2] = x5181752030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51919))[0]);
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
void* _52181 = arg_buffer[1];
//reading env and args
void* kont51920 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5181852031 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51920);
arg_buffer[2] = x5181852031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51920))[0]);
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
void* _52182 = arg_buffer[1];
//reading env and args
void* kont51921 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5181952032 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51921);
arg_buffer[2] = x5181952032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51921))[0]);
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
void* _52183 = arg_buffer[1];
//reading env and args
void* kont51922 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5182052033 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51922);
arg_buffer[2] = x5182052033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51922))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam52184_fptr() // lam52184 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52185 = arg_buffer[1];
//reading env and args
void* a5182352037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env52185))[3];
//not do dummy comment
void* a5182152034 = (decode_clo(env52185))[2];
//not do dummy comment
void* kont51923 = (decode_clo(env52185))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51923;
arg_buffer[3] = a5182152034;
arg_buffer[4] = a5182352037;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52184 = encode_clo(alloc_clo(lam52184_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52188 = arg_buffer[1];
//reading env and args
void* kont51923 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53831 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53831, "0", 10);
void* a5182152034 = encode_mpz(mpzvar53831);
mpz_t* mpzvar53832 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53832, "2", 10);
void* a5182252035 = encode_mpz(mpzvar53832);

//creating new closure instance
void** clo53834 = alloc_clo(lam52184_fptr, 3);

//setting env list
clo53834[1] = kont51923;
clo53834[2] = a5182152034;
clo53834[3] = equal_u63;
void* f5192452036 = encode_clo(clo53834);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5192452036;
arg_buffer[3] = x;
arg_buffer[4] = a5182252035;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam52189_fptr() // lam52189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52190 = arg_buffer[1];
//reading env and args
void* a5182652041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51925 = (decode_clo(env52190))[3];
//not do dummy comment
void* a5182452038 = (decode_clo(env52190))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env52190))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51925;
arg_buffer[3] = a5182452038;
arg_buffer[4] = a5182652041;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52189 = encode_clo(alloc_clo(lam52189_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52193 = arg_buffer[1];
//reading env and args
void* kont51925 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53835 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53835, "1", 10);
void* a5182452038 = encode_mpz(mpzvar53835);
mpz_t* mpzvar53836 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53836, "2", 10);
void* a5182552039 = encode_mpz(mpzvar53836);

//creating new closure instance
void** clo53838 = alloc_clo(lam52189_fptr, 3);

//setting env list
clo53838[1] = equal_u63;
clo53838[2] = a5182452038;
clo53838[3] = kont51925;
void* f5192652040 = encode_clo(clo53838);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5192652040;
arg_buffer[3] = x;
arg_buffer[4] = a5182552039;
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
void* _52194 = arg_buffer[1];
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

void* kont5192752042 = prim_car(x);
void* x52043 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5192752042);
arg_buffer[2] = x52043;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5192752042))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam52197_fptr() // lam52197 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52198 = arg_buffer[1];
//reading env and args
void* a5183252053 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51929 = (decode_clo(env52198))[3];
//not do dummy comment
void* x = (decode_clo(env52198))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env52198))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont51929;
arg_buffer[3] = x;
arg_buffer[4] = a5183252053;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52197 = encode_clo(alloc_clo(lam52197_fptr, 0));

void* lam52199_fptr() // lam52199 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52200 = arg_buffer[1];
//reading env and args
void* a5183052050 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52200))[5];
//not do dummy comment
void* x = (decode_clo(env52200))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env52200))[3];
//not do dummy comment
void* lst = (decode_clo(env52200))[2];
//not do dummy comment
void* kont51929 = (decode_clo(env52200))[1];

//if-clause
bool if_guard53839 = is_true(a5183052050);
if(if_guard53839)
{
void* x5183152051 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51929);
arg_buffer[2] = x5183152051;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51929))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53841 = alloc_clo(lam52197_fptr, 3);

//setting env list
clo53841[1] = member_u63;
clo53841[2] = x;
clo53841[3] = kont51929;
void* f5193052052 = encode_clo(clo53841);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5193052052;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52199 = encode_clo(alloc_clo(lam52199_fptr, 0));

void* lam52201_fptr() // lam52201 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52202 = arg_buffer[1];
//reading env and args
void* a5182952048 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52202))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env52202))[5];
//not do dummy comment
void* x = (decode_clo(env52202))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env52202))[3];
//not do dummy comment
void* lst = (decode_clo(env52202))[2];
//not do dummy comment
void* kont51929 = (decode_clo(env52202))[1];

//creating new closure instance
void** clo53843 = alloc_clo(lam52199_fptr, 5);

//setting env list
clo53843[1] = kont51929;
clo53843[2] = lst;
clo53843[3] = member_u63;
clo53843[4] = x;
clo53843[5] = cdr;
void* f5193152049 = encode_clo(clo53843);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5193152049;
arg_buffer[3] = a5182952048;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52201 = encode_clo(alloc_clo(lam52201_fptr, 0));

void* lam52203_fptr() // lam52203 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52204 = arg_buffer[1];
//reading env and args
void* a5182752045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52204))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env52204))[6];
//not do dummy comment
void* x = (decode_clo(env52204))[5];
//not do dummy comment
void* car = (decode_clo(env52204))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env52204))[3];
//not do dummy comment
void* lst = (decode_clo(env52204))[2];
//not do dummy comment
void* kont51929 = (decode_clo(env52204))[1];

//if-clause
bool if_guard53844 = is_true(a5182752045);
if(if_guard53844)
{
void* x5182852046 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51929);
arg_buffer[2] = x5182852046;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51929))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53846 = alloc_clo(lam52201_fptr, 6);

//setting env list
clo53846[1] = kont51929;
clo53846[2] = lst;
clo53846[3] = member_u63;
clo53846[4] = x;
clo53846[5] = equal_u63;
clo53846[6] = cdr;
void* f5193252047 = encode_clo(clo53846);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5193252047;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52203 = encode_clo(alloc_clo(lam52203_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52205 = arg_buffer[1];
//reading env and args
void* kont51929 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53848 = alloc_clo(lam52203_fptr, 7);

//setting env list
clo53848[1] = kont51929;
clo53848[2] = lst;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo53848[3] = member_u63;
clo53848[4] = car;
clo53848[5] = x;
clo53848[6] = equal_u63;
clo53848[7] = cdr;
void* f5193352044 = encode_clo(clo53848);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5193352044;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam52206_fptr() // lam52206 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52207 = arg_buffer[1];
//reading env and args
void* a5183652061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5183552059 = (decode_clo(env52207))[4];
//not do dummy comment
void* kont51934 = (decode_clo(env52207))[3];
//not do dummy comment
void* fun = (decode_clo(env52207))[2];
//not do dummy comment
void* foldl = (decode_clo(env52207))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont51934;
arg_buffer[3] = fun;
arg_buffer[4] = a5183552059;
arg_buffer[5] = a5183652061;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52206 = encode_clo(alloc_clo(lam52206_fptr, 0));

void* lam52208_fptr() // lam52208 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52209 = arg_buffer[1];
//reading env and args
void* a5183552059 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52209))[5];
//not do dummy comment
void* lst = (decode_clo(env52209))[4];
//not do dummy comment
void* kont51934 = (decode_clo(env52209))[3];
//not do dummy comment
void* fun = (decode_clo(env52209))[2];
//not do dummy comment
void* foldl = (decode_clo(env52209))[1];

//creating new closure instance
void** clo53850 = alloc_clo(lam52206_fptr, 4);

//setting env list
clo53850[1] = foldl;
clo53850[2] = fun;
clo53850[3] = kont51934;
clo53850[4] = a5183552059;
void* f5193552060 = encode_clo(clo53850);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5193552060;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52208 = encode_clo(alloc_clo(lam52208_fptr, 0));

void* lam52210_fptr() // lam52210 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52211 = arg_buffer[1];
//reading env and args
void* a5183452057 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52211))[6];
//not do dummy comment
void* lst = (decode_clo(env52211))[5];
//not do dummy comment
void* kont51934 = (decode_clo(env52211))[4];
//not do dummy comment
void* fun = (decode_clo(env52211))[3];
//not do dummy comment
void* acc = (decode_clo(env52211))[2];
//not do dummy comment
void* foldl = (decode_clo(env52211))[1];

//creating new closure instance
void** clo53852 = alloc_clo(lam52208_fptr, 5);

//setting env list
clo53852[1] = foldl;
clo53852[2] = fun;
clo53852[3] = kont51934;
clo53852[4] = lst;
clo53852[5] = cdr;
void* f5193652058 = encode_clo(clo53852);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5193652058;
arg_buffer[3] = a5183452057;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52210 = encode_clo(alloc_clo(lam52210_fptr, 0));

void* lam52212_fptr() // lam52212 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52213 = arg_buffer[1];
//reading env and args
void* a5183352055 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52213))[7];
//not do dummy comment
void* lst = (decode_clo(env52213))[6];
//not do dummy comment
void* kont51934 = (decode_clo(env52213))[5];
//not do dummy comment
void* fun = (decode_clo(env52213))[4];
//not do dummy comment
void* acc = (decode_clo(env52213))[3];
//not do dummy comment
void* car = (decode_clo(env52213))[2];
//not do dummy comment
void* foldl = (decode_clo(env52213))[1];

//if-clause
bool if_guard53853 = is_true(a5183352055);
if(if_guard53853)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51934);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51934))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53855 = alloc_clo(lam52210_fptr, 6);

//setting env list
clo53855[1] = foldl;
clo53855[2] = acc;
clo53855[3] = fun;
clo53855[4] = kont51934;
clo53855[5] = lst;
clo53855[6] = cdr;
void* f5193752056 = encode_clo(clo53855);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5193752056;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52212 = encode_clo(alloc_clo(lam52212_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52214 = arg_buffer[1];
//reading env and args
void* kont51934 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53857 = alloc_clo(lam52212_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo53857[1] = foldl;
clo53857[2] = car;
clo53857[3] = acc;
clo53857[4] = fun;
clo53857[5] = kont51934;
clo53857[6] = lst;
clo53857[7] = cdr;
void* f5193852054 = encode_clo(clo53857);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5193852054;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam52215_fptr() // lam52215 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52216 = arg_buffer[1];
//reading env and args
void* a5184052069 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52216))[3];
//not do dummy comment
void* a5183852065 = (decode_clo(env52216))[2];
//not do dummy comment
void* kont51939 = (decode_clo(env52216))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51939;
arg_buffer[3] = a5183852065;
arg_buffer[4] = a5184052069;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52215 = encode_clo(alloc_clo(lam52215_fptr, 0));

void* lam52217_fptr() // lam52217 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52218 = arg_buffer[1];
//reading env and args
void* a5183952067 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52218))[5];
//not do dummy comment
void* a5183852065 = (decode_clo(env52218))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52218))[3];
//not do dummy comment
void* cons = (decode_clo(env52218))[2];
//not do dummy comment
void* kont51939 = (decode_clo(env52218))[1];

//creating new closure instance
void** clo53859 = alloc_clo(lam52215_fptr, 3);

//setting env list
clo53859[1] = kont51939;
clo53859[2] = a5183852065;
clo53859[3] = reverse_u45helper;
void* f5194052068 = encode_clo(clo53859);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5194052068;
arg_buffer[3] = a5183952067;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52217 = encode_clo(alloc_clo(lam52217_fptr, 0));

void* lam52219_fptr() // lam52219 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52220 = arg_buffer[1];
//reading env and args
void* a5183852065 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52220))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52220))[5];
//not do dummy comment
void* lst2 = (decode_clo(env52220))[4];
//not do dummy comment
void* car = (decode_clo(env52220))[3];
//not do dummy comment
void* cons = (decode_clo(env52220))[2];
//not do dummy comment
void* kont51939 = (decode_clo(env52220))[1];

//creating new closure instance
void** clo53861 = alloc_clo(lam52217_fptr, 5);

//setting env list
clo53861[1] = kont51939;
clo53861[2] = cons;
clo53861[3] = lst2;
clo53861[4] = a5183852065;
clo53861[5] = reverse_u45helper;
void* f5194152066 = encode_clo(clo53861);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5194152066;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52219 = encode_clo(alloc_clo(lam52219_fptr, 0));

void* lam52221_fptr() // lam52221 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52222 = arg_buffer[1];
//reading env and args
void* a5183752063 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52222))[7];
//not do dummy comment
void* lst = (decode_clo(env52222))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52222))[5];
//not do dummy comment
void* lst2 = (decode_clo(env52222))[4];
//not do dummy comment
void* car = (decode_clo(env52222))[3];
//not do dummy comment
void* cons = (decode_clo(env52222))[2];
//not do dummy comment
void* kont51939 = (decode_clo(env52222))[1];

//if-clause
bool if_guard53862 = is_true(a5183752063);
if(if_guard53862)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51939);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51939))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53864 = alloc_clo(lam52219_fptr, 6);

//setting env list
clo53864[1] = kont51939;
clo53864[2] = cons;
clo53864[3] = car;
clo53864[4] = lst2;
clo53864[5] = reverse_u45helper;
clo53864[6] = lst;
void* f5194252064 = encode_clo(clo53864);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5194252064;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52221 = encode_clo(alloc_clo(lam52221_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52223 = arg_buffer[1];
//reading env and args
void* kont51939 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53866 = alloc_clo(lam52221_fptr, 7);

//setting env list
clo53866[1] = kont51939;
clo53866[2] = cons;
clo53866[3] = car;
clo53866[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo53866[5] = reverse_u45helper;
clo53866[6] = lst;
clo53866[7] = cdr;
void* f5194352062 = encode_clo(clo53866);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5194352062;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam52224_fptr() // lam52224 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52225 = arg_buffer[1];
//reading env and args
void* a5184152071 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51944 = (decode_clo(env52225))[3];
//not do dummy comment
void* lst = (decode_clo(env52225))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env52225))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont51944;
arg_buffer[3] = lst;
arg_buffer[4] = a5184152071;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52224 = encode_clo(alloc_clo(lam52224_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52226 = arg_buffer[1];
//reading env and args
void* kont51944 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53868 = alloc_clo(lam52224_fptr, 3);

//setting env list
clo53868[1] = reverse_u45helper;
clo53868[2] = lst;
clo53868[3] = kont51944;
void* f5194552070 = encode_clo(clo53868);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5194552070;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam52227_fptr() // lam52227 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52228 = arg_buffer[1];
//reading env and args
void* x5184452076 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51946 = (decode_clo(env52228))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51946);
arg_buffer[2] = x5184452076;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51946))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52227 = encode_clo(alloc_clo(lam52227_fptr, 0));

void* lam52229_fptr() // lam52229 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52230 = arg_buffer[1];
//reading env and args
void* a5184952085 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51946 = (decode_clo(env52230))[4];
//not do dummy comment
void* a5184552078 = (decode_clo(env52230))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52230))[2];
//not do dummy comment
void* a5184752081 = (decode_clo(env52230))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51946;
arg_buffer[3] = a5184552078;
arg_buffer[4] = a5184752081;
arg_buffer[5] = a5184952085;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52229 = encode_clo(alloc_clo(lam52229_fptr, 0));

void* lam52231_fptr() // lam52231 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52232 = arg_buffer[1];
//reading env and args
void* a5184852083 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51946 = (decode_clo(env52232))[6];
//not do dummy comment
void* a5184552078 = (decode_clo(env52232))[5];
//not do dummy comment
void* cons = (decode_clo(env52232))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env52232))[3];
//not do dummy comment
void* a5184752081 = (decode_clo(env52232))[2];
//not do dummy comment
void* lst2 = (decode_clo(env52232))[1];

//creating new closure instance
void** clo53870 = alloc_clo(lam52229_fptr, 4);

//setting env list
clo53870[1] = a5184752081;
clo53870[2] = take_u45helper;
clo53870[3] = a5184552078;
clo53870[4] = kont51946;
void* f5194852084 = encode_clo(clo53870);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5194852084;
arg_buffer[3] = a5184852083;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52231 = encode_clo(alloc_clo(lam52231_fptr, 0));

void* lam52233_fptr() // lam52233 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52234 = arg_buffer[1];
//reading env and args
void* a5184752081 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52234))[7];
//not do dummy comment
void* kont51946 = (decode_clo(env52234))[6];
//not do dummy comment
void* a5184552078 = (decode_clo(env52234))[5];
//not do dummy comment
void* car = (decode_clo(env52234))[4];
//not do dummy comment
void* cons = (decode_clo(env52234))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52234))[2];
//not do dummy comment
void* lst2 = (decode_clo(env52234))[1];

//creating new closure instance
void** clo53872 = alloc_clo(lam52231_fptr, 6);

//setting env list
clo53872[1] = lst2;
clo53872[2] = a5184752081;
clo53872[3] = take_u45helper;
clo53872[4] = cons;
clo53872[5] = a5184552078;
clo53872[6] = kont51946;
void* f5194952082 = encode_clo(clo53872);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5194952082;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52233 = encode_clo(alloc_clo(lam52233_fptr, 0));

void* lam52236_fptr() // lam52236 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52237 = arg_buffer[1];
//reading env and args
void* a5184552078 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52237))[8];
//not do dummy comment
void* kont51946 = (decode_clo(env52237))[7];
//not do dummy comment
void* cons = (decode_clo(env52237))[6];
//not do dummy comment
void* _u45 = (decode_clo(env52237))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env52237))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52237))[3];
//not do dummy comment
void* n = (decode_clo(env52237))[2];
//not do dummy comment
void* car = (decode_clo(env52237))[1];
mpz_t* mpzvar53873 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53873, "1", 10);
void* a5184652079 = encode_mpz(mpzvar53873);

//creating new closure instance
void** clo53875 = alloc_clo(lam52233_fptr, 7);

//setting env list
clo53875[1] = lst2;
clo53875[2] = take_u45helper;
clo53875[3] = cons;
clo53875[4] = car;
clo53875[5] = a5184552078;
clo53875[6] = kont51946;
clo53875[7] = lst;
void* f5195052080 = encode_clo(clo53875);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5195052080;
arg_buffer[3] = n;
arg_buffer[4] = a5184652079;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52236 = encode_clo(alloc_clo(lam52236_fptr, 0));

void* lam52238_fptr() // lam52238 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52239 = arg_buffer[1];
//reading env and args
void* a5184352074 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52239))[10];
//not do dummy comment
void* lst = (decode_clo(env52239))[9];
//not do dummy comment
void* kont51946 = (decode_clo(env52239))[8];
//not do dummy comment
void* reverse = (decode_clo(env52239))[7];
//not do dummy comment
void* cons = (decode_clo(env52239))[6];
//not do dummy comment
void* _u45 = (decode_clo(env52239))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env52239))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52239))[3];
//not do dummy comment
void* n = (decode_clo(env52239))[2];
//not do dummy comment
void* car = (decode_clo(env52239))[1];

//if-clause
bool if_guard53876 = is_true(a5184352074);
if(if_guard53876)
{

//creating new closure instance
void** clo53878 = alloc_clo(lam52227_fptr, 1);

//setting env list
clo53878[1] = kont51946;
void* f5194752075 = encode_clo(clo53878);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5194752075;
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
void** clo53880 = alloc_clo(lam52236_fptr, 8);

//setting env list
clo53880[1] = car;
clo53880[2] = n;
clo53880[3] = lst2;
clo53880[4] = take_u45helper;
clo53880[5] = _u45;
clo53880[6] = cons;
clo53880[7] = kont51946;
clo53880[8] = lst;
void* f5195152077 = encode_clo(clo53880);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5195152077;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52238 = encode_clo(alloc_clo(lam52238_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52241 = arg_buffer[1];
//reading env and args
void* kont51946 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar53881 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53881, "0", 10);
void* a5184252072 = encode_mpz(mpzvar53881);

//creating new closure instance
void** clo53883 = alloc_clo(lam52238_fptr, 10);

//setting env list
clo53883[1] = car;
clo53883[2] = n;
clo53883[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo53883[4] = take_u45helper;
clo53883[5] = _u45;
clo53883[6] = cons;
clo53883[7] = reverse;
clo53883[8] = kont51946;
clo53883[9] = lst;
clo53883[10] = cdr;
void* f5195252073 = encode_clo(clo53883);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5195252073;
arg_buffer[3] = n;
arg_buffer[4] = a5184252072;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam52242_fptr() // lam52242 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52243 = arg_buffer[1];
//reading env and args
void* a5185052087 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52243))[4];
//not do dummy comment
void* n = (decode_clo(env52243))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env52243))[2];
//not do dummy comment
void* kont51953 = (decode_clo(env52243))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont51953;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5185052087;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52242 = encode_clo(alloc_clo(lam52242_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52244 = arg_buffer[1];
//reading env and args
void* kont51953 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53885 = alloc_clo(lam52242_fptr, 4);

//setting env list
clo53885[1] = kont51953;
clo53885[2] = take_u45helper;
clo53885[3] = n;
clo53885[4] = lst;
void* f5195452086 = encode_clo(clo53885);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5195452086;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam52246_fptr() // lam52246 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52247 = arg_buffer[1];
//reading env and args
void* a5185552095 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5185352091 = (decode_clo(env52247))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52247))[2];
//not do dummy comment
void* kont51955 = (decode_clo(env52247))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont51955;
arg_buffer[3] = a5185352091;
arg_buffer[4] = a5185552095;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52246 = encode_clo(alloc_clo(lam52246_fptr, 0));

void* lam52248_fptr() // lam52248 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52249 = arg_buffer[1];
//reading env and args
void* a5185452093 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* length = (decode_clo(env52249))[4];
//not do dummy comment
void* a5185352091 = (decode_clo(env52249))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52249))[2];
//not do dummy comment
void* kont51955 = (decode_clo(env52249))[1];

//creating new closure instance
void** clo53887 = alloc_clo(lam52246_fptr, 3);

//setting env list
clo53887[1] = kont51955;
clo53887[2] = _u43;
clo53887[3] = a5185352091;
void* f5195652094 = encode_clo(clo53887);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5195652094;
arg_buffer[3] = a5185452093;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52248 = encode_clo(alloc_clo(lam52248_fptr, 0));

void* lam52251_fptr() // lam52251 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52252 = arg_buffer[1];
//reading env and args
void* a5185152089 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52252))[5];
//not do dummy comment
void* lst = (decode_clo(env52252))[4];
//not do dummy comment
void* length = (decode_clo(env52252))[3];
//not do dummy comment
void* _u43 = (decode_clo(env52252))[2];
//not do dummy comment
void* kont51955 = (decode_clo(env52252))[1];

//if-clause
bool if_guard53888 = is_true(a5185152089);
if(if_guard53888)
{
mpz_t* mpzvar53889 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53889, "0", 10);
void* x5185252090 = encode_mpz(mpzvar53889);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51955);
arg_buffer[2] = x5185252090;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51955))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53890 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53890, "1", 10);
void* a5185352091 = encode_mpz(mpzvar53890);

//creating new closure instance
void** clo53892 = alloc_clo(lam52248_fptr, 4);

//setting env list
clo53892[1] = kont51955;
clo53892[2] = _u43;
clo53892[3] = a5185352091;
clo53892[4] = length;
void* f5195752092 = encode_clo(clo53892);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5195752092;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52251 = encode_clo(alloc_clo(lam52251_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52253 = arg_buffer[1];
//reading env and args
void* kont51955 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53894 = alloc_clo(lam52251_fptr, 5);

//setting env list
clo53894[1] = kont51955;
clo53894[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo53894[3] = length;
clo53894[4] = lst;
clo53894[5] = cdr;
void* f5195852088 = encode_clo(clo53894);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5195852088;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam52254_fptr() // lam52254 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52255 = arg_buffer[1];
//reading env and args
void* x5185752099 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51959 = (decode_clo(env52255))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51959);
arg_buffer[2] = x5185752099;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51959))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52254 = encode_clo(alloc_clo(lam52254_fptr, 0));

void* lam52256_fptr() // lam52256 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52257 = arg_buffer[1];
//reading env and args
void* a5186152107 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env52257))[3];
//not do dummy comment
void* a5185952103 = (decode_clo(env52257))[2];
//not do dummy comment
void* kont51959 = (decode_clo(env52257))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51959;
arg_buffer[3] = a5185952103;
arg_buffer[4] = a5186152107;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52256 = encode_clo(alloc_clo(lam52256_fptr, 0));

void* lam52258_fptr() // lam52258 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52259 = arg_buffer[1];
//reading env and args
void* a5186052105 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env52259))[5];
//not do dummy comment
void* proc = (decode_clo(env52259))[4];
//not do dummy comment
void* cons = (decode_clo(env52259))[3];
//not do dummy comment
void* a5185952103 = (decode_clo(env52259))[2];
//not do dummy comment
void* kont51959 = (decode_clo(env52259))[1];

//creating new closure instance
void** clo53896 = alloc_clo(lam52256_fptr, 3);

//setting env list
clo53896[1] = kont51959;
clo53896[2] = a5185952103;
clo53896[3] = cons;
void* f5196152106 = encode_clo(clo53896);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5196152106;
arg_buffer[3] = proc;
arg_buffer[4] = a5186052105;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52258 = encode_clo(alloc_clo(lam52258_fptr, 0));

void* lam52260_fptr() // lam52260 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52261 = arg_buffer[1];
//reading env and args
void* a5185952103 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52261))[6];
//not do dummy comment
void* kont51959 = (decode_clo(env52261))[5];
//not do dummy comment
void* lst = (decode_clo(env52261))[4];
//not do dummy comment
void* map = (decode_clo(env52261))[3];
//not do dummy comment
void* proc = (decode_clo(env52261))[2];
//not do dummy comment
void* cons = (decode_clo(env52261))[1];

//creating new closure instance
void** clo53898 = alloc_clo(lam52258_fptr, 5);

//setting env list
clo53898[1] = kont51959;
clo53898[2] = a5185952103;
clo53898[3] = cons;
clo53898[4] = proc;
clo53898[5] = map;
void* f5196252104 = encode_clo(clo53898);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5196252104;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52260 = encode_clo(alloc_clo(lam52260_fptr, 0));

void* lam52262_fptr() // lam52262 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52263 = arg_buffer[1];
//reading env and args
void* a5185852101 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52263))[6];
//not do dummy comment
void* kont51959 = (decode_clo(env52263))[5];
//not do dummy comment
void* lst = (decode_clo(env52263))[4];
//not do dummy comment
void* map = (decode_clo(env52263))[3];
//not do dummy comment
void* proc = (decode_clo(env52263))[2];
//not do dummy comment
void* cons = (decode_clo(env52263))[1];

//creating new closure instance
void** clo53900 = alloc_clo(lam52260_fptr, 6);

//setting env list
clo53900[1] = cons;
clo53900[2] = proc;
clo53900[3] = map;
clo53900[4] = lst;
clo53900[5] = kont51959;
clo53900[6] = cdr;
void* f5196352102 = encode_clo(clo53900);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5196352102;
arg_buffer[3] = a5185852101;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52262 = encode_clo(alloc_clo(lam52262_fptr, 0));

void* lam52264_fptr() // lam52264 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52265 = arg_buffer[1];
//reading env and args
void* a5185652097 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51959 = (decode_clo(env52265))[8];
//not do dummy comment
void* lst = (decode_clo(env52265))[7];
//not do dummy comment
void* map = (decode_clo(env52265))[6];
//not do dummy comment
void* proc = (decode_clo(env52265))[5];
//not do dummy comment
void* car = (decode_clo(env52265))[4];
//not do dummy comment
void* cons = (decode_clo(env52265))[3];
//not do dummy comment
void* list = (decode_clo(env52265))[2];
//not do dummy comment
void* cdr = (decode_clo(env52265))[1];

//if-clause
bool if_guard53901 = is_true(a5185652097);
if(if_guard53901)
{

//creating new closure instance
void** clo53903 = alloc_clo(lam52254_fptr, 1);

//setting env list
clo53903[1] = kont51959;
void* f5196052098 = encode_clo(clo53903);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5196052098;
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
void** clo53905 = alloc_clo(lam52262_fptr, 6);

//setting env list
clo53905[1] = cons;
clo53905[2] = proc;
clo53905[3] = map;
clo53905[4] = lst;
clo53905[5] = kont51959;
clo53905[6] = cdr;
void* f5196452100 = encode_clo(clo53905);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5196452100;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52264 = encode_clo(alloc_clo(lam52264_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52266 = arg_buffer[1];
//reading env and args
void* kont51959 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53907 = alloc_clo(lam52264_fptr, 8);

//setting env list
clo53907[1] = cdr;
clo53907[2] = list;
clo53907[3] = cons;
clo53907[4] = car;
clo53907[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo53907[6] = map;
clo53907[7] = lst;
clo53907[8] = kont51959;
void* f5196552096 = encode_clo(clo53907);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5196552096;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam52267_fptr() // lam52267 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52268 = arg_buffer[1];
//reading env and args
void* x5186352111 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51966 = (decode_clo(env52268))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51966);
arg_buffer[2] = x5186352111;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51966))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52267 = encode_clo(alloc_clo(lam52267_fptr, 0));

void* lam52269_fptr() // lam52269 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52270 = arg_buffer[1];
//reading env and args
void* a5186852121 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5186652117 = (decode_clo(env52270))[3];
//not do dummy comment
void* kont51966 = (decode_clo(env52270))[2];
//not do dummy comment
void* cons = (decode_clo(env52270))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51966;
arg_buffer[3] = a5186652117;
arg_buffer[4] = a5186852121;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52269 = encode_clo(alloc_clo(lam52269_fptr, 0));

void* lam52271_fptr() // lam52271 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52272 = arg_buffer[1];
//reading env and args
void* a5186752119 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5186652117 = (decode_clo(env52272))[5];
//not do dummy comment
void* op = (decode_clo(env52272))[4];
//not do dummy comment
void* kont51966 = (decode_clo(env52272))[3];
//not do dummy comment
void* filter = (decode_clo(env52272))[2];
//not do dummy comment
void* cons = (decode_clo(env52272))[1];

//creating new closure instance
void** clo53909 = alloc_clo(lam52269_fptr, 3);

//setting env list
clo53909[1] = cons;
clo53909[2] = kont51966;
clo53909[3] = a5186652117;
void* f5196852120 = encode_clo(clo53909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5196852120;
arg_buffer[3] = op;
arg_buffer[4] = a5186752119;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52271 = encode_clo(alloc_clo(lam52271_fptr, 0));

void* lam52273_fptr() // lam52273 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52274 = arg_buffer[1];
//reading env and args
void* a5186652117 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52274))[6];
//not do dummy comment
void* lst = (decode_clo(env52274))[5];
//not do dummy comment
void* op = (decode_clo(env52274))[4];
//not do dummy comment
void* kont51966 = (decode_clo(env52274))[3];
//not do dummy comment
void* filter = (decode_clo(env52274))[2];
//not do dummy comment
void* cons = (decode_clo(env52274))[1];

//creating new closure instance
void** clo53911 = alloc_clo(lam52271_fptr, 5);

//setting env list
clo53911[1] = cons;
clo53911[2] = filter;
clo53911[3] = kont51966;
clo53911[4] = op;
clo53911[5] = a5186652117;
void* f5196952118 = encode_clo(clo53911);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5196952118;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52273 = encode_clo(alloc_clo(lam52273_fptr, 0));

void* lam52275_fptr() // lam52275 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52276 = arg_buffer[1];
//reading env and args
void* a5186952123 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env52276))[3];
//not do dummy comment
void* kont51966 = (decode_clo(env52276))[2];
//not do dummy comment
void* filter = (decode_clo(env52276))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont51966;
arg_buffer[3] = op;
arg_buffer[4] = a5186952123;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52275 = encode_clo(alloc_clo(lam52275_fptr, 0));

void* lam52277_fptr() // lam52277 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52278 = arg_buffer[1];
//reading env and args
void* a5186552115 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52278))[7];
//not do dummy comment
void* lst = (decode_clo(env52278))[6];
//not do dummy comment
void* op = (decode_clo(env52278))[5];
//not do dummy comment
void* kont51966 = (decode_clo(env52278))[4];
//not do dummy comment
void* cons = (decode_clo(env52278))[3];
//not do dummy comment
void* filter = (decode_clo(env52278))[2];
//not do dummy comment
void* car = (decode_clo(env52278))[1];

//if-clause
bool if_guard53912 = is_true(a5186552115);
if(if_guard53912)
{

//creating new closure instance
void** clo53914 = alloc_clo(lam52273_fptr, 6);

//setting env list
clo53914[1] = cons;
clo53914[2] = filter;
clo53914[3] = kont51966;
clo53914[4] = op;
clo53914[5] = lst;
clo53914[6] = cdr;
void* f5197052116 = encode_clo(clo53914);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5197052116;
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
void** clo53916 = alloc_clo(lam52275_fptr, 3);

//setting env list
clo53916[1] = filter;
clo53916[2] = kont51966;
clo53916[3] = op;
void* f5197152122 = encode_clo(clo53916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5197152122;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52277 = encode_clo(alloc_clo(lam52277_fptr, 0));

void* lam52279_fptr() // lam52279 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52280 = arg_buffer[1];
//reading env and args
void* a5186452113 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52280))[7];
//not do dummy comment
void* lst = (decode_clo(env52280))[6];
//not do dummy comment
void* op = (decode_clo(env52280))[5];
//not do dummy comment
void* kont51966 = (decode_clo(env52280))[4];
//not do dummy comment
void* cons = (decode_clo(env52280))[3];
//not do dummy comment
void* filter = (decode_clo(env52280))[2];
//not do dummy comment
void* car = (decode_clo(env52280))[1];

//creating new closure instance
void** clo53918 = alloc_clo(lam52277_fptr, 7);

//setting env list
clo53918[1] = car;
clo53918[2] = filter;
clo53918[3] = cons;
clo53918[4] = kont51966;
clo53918[5] = op;
clo53918[6] = lst;
clo53918[7] = cdr;
void* f5197252114 = encode_clo(clo53918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5197252114;
arg_buffer[3] = a5186452113;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52279 = encode_clo(alloc_clo(lam52279_fptr, 0));

void* lam52281_fptr() // lam52281 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52282 = arg_buffer[1];
//reading env and args
void* a5186252109 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env52282))[8];
//not do dummy comment
void* op = (decode_clo(env52282))[7];
//not do dummy comment
void* kont51966 = (decode_clo(env52282))[6];
//not do dummy comment
void* cons = (decode_clo(env52282))[5];
//not do dummy comment
void* list = (decode_clo(env52282))[4];
//not do dummy comment
void* cdr = (decode_clo(env52282))[3];
//not do dummy comment
void* filter = (decode_clo(env52282))[2];
//not do dummy comment
void* car = (decode_clo(env52282))[1];

//if-clause
bool if_guard53919 = is_true(a5186252109);
if(if_guard53919)
{

//creating new closure instance
void** clo53921 = alloc_clo(lam52267_fptr, 1);

//setting env list
clo53921[1] = kont51966;
void* f5196752110 = encode_clo(clo53921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5196752110;
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
void** clo53923 = alloc_clo(lam52279_fptr, 7);

//setting env list
clo53923[1] = car;
clo53923[2] = filter;
clo53923[3] = cons;
clo53923[4] = kont51966;
clo53923[5] = op;
clo53923[6] = lst;
clo53923[7] = cdr;
void* f5197352112 = encode_clo(clo53923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5197352112;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52281 = encode_clo(alloc_clo(lam52281_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52283 = arg_buffer[1];
//reading env and args
void* kont51966 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53925 = alloc_clo(lam52281_fptr, 8);

//setting env list
clo53925[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo53925[2] = filter;
clo53925[3] = cdr;
clo53925[4] = list;
clo53925[5] = cons;
clo53925[6] = kont51966;
clo53925[7] = op;
clo53925[8] = lst;
void* f5197452108 = encode_clo(clo53925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5197452108;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam52284_fptr() // lam52284 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52285 = arg_buffer[1];
//reading env and args
void* a5187452131 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51975 = (decode_clo(env52285))[3];
//not do dummy comment
void* drop = (decode_clo(env52285))[2];
//not do dummy comment
void* a5187252128 = (decode_clo(env52285))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont51975;
arg_buffer[3] = a5187252128;
arg_buffer[4] = a5187452131;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52284 = encode_clo(alloc_clo(lam52284_fptr, 0));

void* lam52287_fptr() // lam52287 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52288 = arg_buffer[1];
//reading env and args
void* a5187252128 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51975 = (decode_clo(env52288))[4];
//not do dummy comment
void* drop = (decode_clo(env52288))[3];
//not do dummy comment
void* n = (decode_clo(env52288))[2];
//not do dummy comment
void* _u45 = (decode_clo(env52288))[1];
mpz_t* mpzvar53926 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53926, "1", 10);
void* a5187352129 = encode_mpz(mpzvar53926);

//creating new closure instance
void** clo53928 = alloc_clo(lam52284_fptr, 3);

//setting env list
clo53928[1] = a5187252128;
clo53928[2] = drop;
clo53928[3] = kont51975;
void* f5197652130 = encode_clo(clo53928);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5197652130;
arg_buffer[3] = n;
arg_buffer[4] = a5187352129;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52287 = encode_clo(alloc_clo(lam52287_fptr, 0));

void* lam52289_fptr() // lam52289 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52290 = arg_buffer[1];
//reading env and args
void* a5187152126 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52290))[6];
//not do dummy comment
void* kont51975 = (decode_clo(env52290))[5];
//not do dummy comment
void* n = (decode_clo(env52290))[4];
//not do dummy comment
void* _u45 = (decode_clo(env52290))[3];
//not do dummy comment
void* lst = (decode_clo(env52290))[2];
//not do dummy comment
void* drop = (decode_clo(env52290))[1];

//if-clause
bool if_guard53929 = is_true(a5187152126);
if(if_guard53929)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51975);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51975))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53931 = alloc_clo(lam52287_fptr, 4);

//setting env list
clo53931[1] = _u45;
clo53931[2] = n;
clo53931[3] = drop;
clo53931[4] = kont51975;
void* f5197752127 = encode_clo(clo53931);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5197752127;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52289 = encode_clo(alloc_clo(lam52289_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52292 = arg_buffer[1];
//reading env and args
void* kont51975 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar53932 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53932, "0", 10);
void* a5187052124 = encode_mpz(mpzvar53932);

//creating new closure instance
void** clo53934 = alloc_clo(lam52289_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo53934[1] = drop;
clo53934[2] = lst;
clo53934[3] = _u45;
clo53934[4] = n;
clo53934[5] = kont51975;
clo53934[6] = cdr;
void* f5197852125 = encode_clo(clo53934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5197852125;
arg_buffer[3] = n;
arg_buffer[4] = a5187052124;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam52293_fptr() // lam52293 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52294 = arg_buffer[1];
//reading env and args
void* a5187852139 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5187652135 = (decode_clo(env52294))[3];
//not do dummy comment
void* kont51979 = (decode_clo(env52294))[2];
//not do dummy comment
void* proc = (decode_clo(env52294))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont51979;
arg_buffer[3] = a5187652135;
arg_buffer[4] = a5187852139;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52293 = encode_clo(alloc_clo(lam52293_fptr, 0));

void* lam52295_fptr() // lam52295 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52296 = arg_buffer[1];
//reading env and args
void* a5187752137 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5187652135 = (decode_clo(env52296))[5];
//not do dummy comment
void* foldr = (decode_clo(env52296))[4];
//not do dummy comment
void* kont51979 = (decode_clo(env52296))[3];
//not do dummy comment
void* proc = (decode_clo(env52296))[2];
//not do dummy comment
void* acc = (decode_clo(env52296))[1];

//creating new closure instance
void** clo53936 = alloc_clo(lam52293_fptr, 3);

//setting env list
clo53936[1] = proc;
clo53936[2] = kont51979;
clo53936[3] = a5187652135;
void* f5198052138 = encode_clo(clo53936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5198052138;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5187752137;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52295 = encode_clo(alloc_clo(lam52295_fptr, 0));

void* lam52297_fptr() // lam52297 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52298 = arg_buffer[1];
//reading env and args
void* a5187652135 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52298))[6];
//not do dummy comment
void* kont51979 = (decode_clo(env52298))[5];
//not do dummy comment
void* foldr = (decode_clo(env52298))[4];
//not do dummy comment
void* lst = (decode_clo(env52298))[3];
//not do dummy comment
void* proc = (decode_clo(env52298))[2];
//not do dummy comment
void* acc = (decode_clo(env52298))[1];

//creating new closure instance
void** clo53938 = alloc_clo(lam52295_fptr, 5);

//setting env list
clo53938[1] = acc;
clo53938[2] = proc;
clo53938[3] = kont51979;
clo53938[4] = foldr;
clo53938[5] = a5187652135;
void* f5198152136 = encode_clo(clo53938);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5198152136;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52297 = encode_clo(alloc_clo(lam52297_fptr, 0));

void* lam52299_fptr() // lam52299 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52300 = arg_buffer[1];
//reading env and args
void* a5187552133 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52300))[7];
//not do dummy comment
void* kont51979 = (decode_clo(env52300))[6];
//not do dummy comment
void* car = (decode_clo(env52300))[5];
//not do dummy comment
void* foldr = (decode_clo(env52300))[4];
//not do dummy comment
void* lst = (decode_clo(env52300))[3];
//not do dummy comment
void* proc = (decode_clo(env52300))[2];
//not do dummy comment
void* acc = (decode_clo(env52300))[1];

//if-clause
bool if_guard53939 = is_true(a5187552133);
if(if_guard53939)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51979);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51979))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53941 = alloc_clo(lam52297_fptr, 6);

//setting env list
clo53941[1] = acc;
clo53941[2] = proc;
clo53941[3] = lst;
clo53941[4] = foldr;
clo53941[5] = kont51979;
clo53941[6] = cdr;
void* f5198252134 = encode_clo(clo53941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5198252134;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52299 = encode_clo(alloc_clo(lam52299_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52301 = arg_buffer[1];
//reading env and args
void* kont51979 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53943 = alloc_clo(lam52299_fptr, 7);

//setting env list
clo53943[1] = acc;
clo53943[2] = proc;
clo53943[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo53943[4] = foldr;
clo53943[5] = car;
clo53943[6] = kont51979;
clo53943[7] = cdr;
void* f5198352132 = encode_clo(clo53943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5198352132;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam52302_fptr() // lam52302 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52303 = arg_buffer[1];
//reading env and args
void* a5188252147 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5188052143 = (decode_clo(env52303))[3];
//not do dummy comment
void* kont51984 = (decode_clo(env52303))[2];
//not do dummy comment
void* cons = (decode_clo(env52303))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont51984;
arg_buffer[3] = a5188052143;
arg_buffer[4] = a5188252147;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52302 = encode_clo(alloc_clo(lam52302_fptr, 0));

void* lam52304_fptr() // lam52304 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52305 = arg_buffer[1];
//reading env and args
void* a5188152145 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env52305))[5];
//not do dummy comment
void* a5188052143 = (decode_clo(env52305))[4];
//not do dummy comment
void* kont51984 = (decode_clo(env52305))[3];
//not do dummy comment
void* lst2 = (decode_clo(env52305))[2];
//not do dummy comment
void* cons = (decode_clo(env52305))[1];

//creating new closure instance
void** clo53945 = alloc_clo(lam52302_fptr, 3);

//setting env list
clo53945[1] = cons;
clo53945[2] = kont51984;
clo53945[3] = a5188052143;
void* f5198552146 = encode_clo(clo53945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5198552146;
arg_buffer[3] = a5188152145;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52304 = encode_clo(alloc_clo(lam52304_fptr, 0));

void* lam52306_fptr() // lam52306 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52307 = arg_buffer[1];
//reading env and args
void* a5188052143 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52307))[6];
//not do dummy comment
void* append = (decode_clo(env52307))[5];
//not do dummy comment
void* kont51984 = (decode_clo(env52307))[4];
//not do dummy comment
void* lst2 = (decode_clo(env52307))[3];
//not do dummy comment
void* lst1 = (decode_clo(env52307))[2];
//not do dummy comment
void* cons = (decode_clo(env52307))[1];

//creating new closure instance
void** clo53947 = alloc_clo(lam52304_fptr, 5);

//setting env list
clo53947[1] = cons;
clo53947[2] = lst2;
clo53947[3] = kont51984;
clo53947[4] = a5188052143;
clo53947[5] = append;
void* f5198652144 = encode_clo(clo53947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5198652144;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52306 = encode_clo(alloc_clo(lam52306_fptr, 0));

void* lam52308_fptr() // lam52308 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52309 = arg_buffer[1];
//reading env and args
void* a5187952141 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env52309))[7];
//not do dummy comment
void* append = (decode_clo(env52309))[6];
//not do dummy comment
void* kont51984 = (decode_clo(env52309))[5];
//not do dummy comment
void* lst2 = (decode_clo(env52309))[4];
//not do dummy comment
void* cons = (decode_clo(env52309))[3];
//not do dummy comment
void* lst1 = (decode_clo(env52309))[2];
//not do dummy comment
void* car = (decode_clo(env52309))[1];

//if-clause
bool if_guard53948 = is_true(a5187952141);
if(if_guard53948)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51984);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51984))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53950 = alloc_clo(lam52306_fptr, 6);

//setting env list
clo53950[1] = cons;
clo53950[2] = lst1;
clo53950[3] = lst2;
clo53950[4] = kont51984;
clo53950[5] = append;
clo53950[6] = cdr;
void* f5198752142 = encode_clo(clo53950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5198752142;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52308 = encode_clo(alloc_clo(lam52308_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52310 = arg_buffer[1];
//reading env and args
void* kont51984 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53952 = alloc_clo(lam52308_fptr, 7);

//setting env list
clo53952[1] = car;
clo53952[2] = lst1;
clo53952[3] = cons;
clo53952[4] = lst2;
clo53952[5] = kont51984;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo53952[6] = append;
clo53952[7] = cdr;
void* f5198852140 = encode_clo(clo53952);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5198852140;
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
void* _52311 = arg_buffer[1];
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

void* kont5198952148 = prim_car(lst);
void* lst52149 = prim_cdr(lst);
void* x5188352150 = apply_prim_hash(lst52149);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5198952148);
arg_buffer[2] = x5188352150;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5198952148))[0]);
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
void* _52312 = arg_buffer[1];
//reading env and args
void* kont51991 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5188452151 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51991);
arg_buffer[2] = x5188452151;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51991))[0]);
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
void* _52313 = arg_buffer[1];
//reading env and args
void* kont51992 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5188552152 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51992);
arg_buffer[2] = x5188552152;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51992))[0]);
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
void* _52314 = arg_buffer[1];
//reading env and args
void* kont51993 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5188652153 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51993);
arg_buffer[2] = x5188652153;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51993))[0]);
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
void* _52315 = arg_buffer[1];
//reading env and args
void* kont51994 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5188752154 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51994);
arg_buffer[2] = x5188752154;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51994))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam52320_fptr() // lam52320 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52321 = arg_buffer[1];
//reading env and args
void* a5189452163 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env52321))[3];
//not do dummy comment
void* even_u63 = (decode_clo(env52321))[2];
//not do dummy comment
void* kont51995 = (decode_clo(env52321))[1];

//if-clause
bool if_guard53953 = is_true(a5189452163);
if(if_guard53953)
{
mpz_t* mpzvar53954 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53954, "3", 10);
void* a5189552164 = encode_mpz(mpzvar53954);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = kont51995;
arg_buffer[3] = a5189552164;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53955 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53955, "2", 10);
void* a5189652165 = encode_mpz(mpzvar53955);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(odd_u63);
arg_buffer[2] = kont51995;
arg_buffer[3] = a5189652165;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(odd_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52320 = encode_clo(alloc_clo(lam52320_fptr, 0));

void* lam52323_fptr() // lam52323 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52324 = arg_buffer[1];
//reading env and args
void* a5189052158 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* odd_u63 = (decode_clo(env52324))[4];
//not do dummy comment
void* even_u63 = (decode_clo(env52324))[3];
//not do dummy comment
void* kont51995 = (decode_clo(env52324))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env52324))[1];

//if-clause
bool if_guard53956 = is_true(a5189052158);
if(if_guard53956)
{
mpz_t* mpzvar53957 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53957, "1", 10);
void* a5189152159 = encode_mpz(mpzvar53957);
mpz_t* mpzvar53958 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53958, "2", 10);
void* a5189252160 = encode_mpz(mpzvar53958);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont51995;
arg_buffer[3] = a5189152159;
arg_buffer[4] = a5189252160;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53959 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53959, "3", 10);
void* a5189352161 = encode_mpz(mpzvar53959);

//creating new closure instance
void** clo53961 = alloc_clo(lam52320_fptr, 3);

//setting env list
clo53961[1] = kont51995;
clo53961[2] = even_u63;
clo53961[3] = odd_u63;
void* f5199652162 = encode_clo(clo53961);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(even_u63);
arg_buffer[2] = f5199652162;
arg_buffer[3] = a5189352161;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(even_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam52323 = encode_clo(alloc_clo(lam52323_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52327 = arg_buffer[1];
//reading env and args
void* kont51995 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar53962 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53962, "1", 10);
void* a5188852155 = encode_mpz(mpzvar53962);
mpz_t* mpzvar53963 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53963, "2", 10);
void* a5188952156 = encode_mpz(mpzvar53963);

//creating new closure instance
void** clo53965 = alloc_clo(lam52323_fptr, 4);

//setting env list
clo53965[1] = equal_u63;
clo53965[2] = kont51995;
clo53965[3] = even_u63;
clo53965[4] = odd_u63;
void* f5199752157 = encode_clo(clo53965);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5199752157;
arg_buffer[3] = a5188852155;
arg_buffer[4] = a5188952156;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam52328_fptr() // lam52328 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env52329 = arg_buffer[1];
//reading env and args
void* x5189752167 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont51998 = (decode_clo(env52329))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont51998);
arg_buffer[2] = x5189752167;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont51998))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam52328 = encode_clo(alloc_clo(lam52328_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _52330 = arg_buffer[1];
//reading env and args
void* kont51998 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo53967 = alloc_clo(lam52328_fptr, 1);

//setting env list
clo53967[1] = kont51998;
void* f5199952166 = encode_clo(clo53967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5199952166;
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

