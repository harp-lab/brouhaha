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
void* _53041 = arg_buffer[1];
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

void* kont5277952879 = prim_car(lst);
void* lst52880 = prim_cdr(lst);
void* x5269052881 = apply_prim__u43(lst52880);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5277952879);
arg_buffer[2] = x5269052881;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5277952879))[0]);
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
void* _53042 = arg_buffer[1];
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

void* kont5278152882 = prim_car(lst);
void* lst52883 = prim_cdr(lst);
void* x5269152884 = apply_prim__u45(lst52883);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5278152882);
arg_buffer[2] = x5269152884;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5278152882))[0]);
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
void* _53043 = arg_buffer[1];
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

void* kont5278352885 = prim_car(lst);
void* lst52886 = prim_cdr(lst);
void* x5269252887 = apply_prim__u42(lst52886);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5278352885);
arg_buffer[2] = x5269252887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5278352885))[0]);
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
void* _53044 = arg_buffer[1];
//reading env and args
void* kont52785 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5269352888 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52785);
arg_buffer[2] = x5269352888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52785))[0]);
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
void* _53045 = arg_buffer[1];
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

void* kont5278652889 = prim_car(lst);
void* lst52890 = prim_cdr(lst);
void* x5269452891 = apply_prim__u47(lst52890);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5278652889);
arg_buffer[2] = x5269452891;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5278652889))[0]);
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
void* _53046 = arg_buffer[1];
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

void* kont5278852892 = prim_car(lst);
void* lst52893 = prim_cdr(lst);
void* x5269552894 = apply_prim__u61(lst52893);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5278852892);
arg_buffer[2] = x5269552894;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5278852892))[0]);
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
void* _53047 = arg_buffer[1];
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

void* kont5279052895 = prim_car(lst);
void* lst52896 = prim_cdr(lst);
void* x5269652897 = apply_prim__u62(lst52896);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5279052895);
arg_buffer[2] = x5269652897;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5279052895))[0]);
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
void* _53048 = arg_buffer[1];
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

void* kont5279252898 = prim_car(lst);
void* lst52899 = prim_cdr(lst);
void* x5269752900 = apply_prim__u60(lst52899);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5279252898);
arg_buffer[2] = x5269752900;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5279252898))[0]);
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
void* _53049 = arg_buffer[1];
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

void* kont5279452901 = prim_car(lst);
void* lst52902 = prim_cdr(lst);
void* x5269852903 = apply_prim__u60_u61(lst52902);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5279452901);
arg_buffer[2] = x5269852903;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5279452901))[0]);
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
void* _53050 = arg_buffer[1];
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

void* kont5279652904 = prim_car(lst);
void* lst52905 = prim_cdr(lst);
void* x5269952906 = apply_prim__u62_u61(lst52905);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5279652904);
arg_buffer[2] = x5269952906;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5279652904))[0]);
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
void* _53051 = arg_buffer[1];
//reading env and args
void* kont52798 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x5270052907 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52798);
arg_buffer[2] = x5270052907;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52798))[0]);
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
void* _53052 = arg_buffer[1];
//reading env and args
void* kont52799 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5270152908 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52799);
arg_buffer[2] = x5270152908;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52799))[0]);
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
void* _53053 = arg_buffer[1];
//reading env and args
void* kont52800 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x5270252909 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52800);
arg_buffer[2] = x5270252909;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52800))[0]);
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
void* _53054 = arg_buffer[1];
//reading env and args
void* kont52801 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x5270352910 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52801);
arg_buffer[2] = x5270352910;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52801))[0]);
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
void* _53055 = arg_buffer[1];
//reading env and args
void* kont52802 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5270452911 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52802);
arg_buffer[2] = x5270452911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52802))[0]);
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
void* _53056 = arg_buffer[1];
//reading env and args
void* kont52803 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x5270552912 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52803);
arg_buffer[2] = x5270552912;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52803))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam53057_fptr() // lam53057 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53058 = arg_buffer[1];
//reading env and args
void* a5270852916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52804 = (decode_clo(env53058))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env53058))[2];
//not do dummy comment
void* a5270652913 = (decode_clo(env53058))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont52804;
arg_buffer[3] = a5270652913;
arg_buffer[4] = a5270852916;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53057 = encode_clo(alloc_clo(lam53057_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53061 = arg_buffer[1];
//reading env and args
void* kont52804 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53702 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53702, "0", 10);
void* a5270652913 = encode_mpz(mpzvar53702);
mpz_t* mpzvar53703 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53703, "2", 10);
void* a5270752914 = encode_mpz(mpzvar53703);

//creating new closure instance
void** clo53705 = alloc_clo(lam53057_fptr, 3);

//setting env list
clo53705[1] = a5270652913;
clo53705[2] = equal_u63;
clo53705[3] = kont52804;
void* f5280552915 = encode_clo(clo53705);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5280552915;
arg_buffer[3] = x;
arg_buffer[4] = a5270752914;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam53062_fptr() // lam53062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53063 = arg_buffer[1];
//reading env and args
void* a5271152920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5270952917 = (decode_clo(env53063))[3];
//not do dummy comment
void* kont52806 = (decode_clo(env53063))[2];
//not do dummy comment
void* equal_u63 = (decode_clo(env53063))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont52806;
arg_buffer[3] = a5270952917;
arg_buffer[4] = a5271152920;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53062 = encode_clo(alloc_clo(lam53062_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53066 = arg_buffer[1];
//reading env and args
void* kont52806 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar53706 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53706, "1", 10);
void* a5270952917 = encode_mpz(mpzvar53706);
mpz_t* mpzvar53707 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53707, "2", 10);
void* a5271052918 = encode_mpz(mpzvar53707);

//creating new closure instance
void** clo53709 = alloc_clo(lam53062_fptr, 3);

//setting env list
clo53709[1] = equal_u63;
clo53709[2] = kont52806;
clo53709[3] = a5270952917;
void* f5280752919 = encode_clo(clo53709);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f5280752919;
arg_buffer[3] = x;
arg_buffer[4] = a5271052918;
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
void* _53067 = arg_buffer[1];
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

void* kont5280852921 = prim_car(x);
void* x52922 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5280852921);
arg_buffer[2] = x52922;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5280852921))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam53070_fptr() // lam53070 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53071 = arg_buffer[1];
//reading env and args
void* a5271752932 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52810 = (decode_clo(env53071))[3];
//not do dummy comment
void* x = (decode_clo(env53071))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53071))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont52810;
arg_buffer[3] = x;
arg_buffer[4] = a5271752932;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53070 = encode_clo(alloc_clo(lam53070_fptr, 0));

void* lam53072_fptr() // lam53072 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53073 = arg_buffer[1];
//reading env and args
void* a5271552929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53073))[5];
//not do dummy comment
void* lst = (decode_clo(env53073))[4];
//not do dummy comment
void* kont52810 = (decode_clo(env53073))[3];
//not do dummy comment
void* x = (decode_clo(env53073))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53073))[1];

//if-clause
bool if_guard53710 = is_true(a5271552929);
if(if_guard53710)
{
void* x5271652930 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52810);
arg_buffer[2] = x5271652930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52810))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53712 = alloc_clo(lam53070_fptr, 3);

//setting env list
clo53712[1] = member_u63;
clo53712[2] = x;
clo53712[3] = kont52810;
void* f5281152931 = encode_clo(clo53712);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5281152931;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53072 = encode_clo(alloc_clo(lam53072_fptr, 0));

void* lam53074_fptr() // lam53074 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53075 = arg_buffer[1];
//reading env and args
void* a5271452927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53075))[6];
//not do dummy comment
void* lst = (decode_clo(env53075))[5];
//not do dummy comment
void* kont52810 = (decode_clo(env53075))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env53075))[3];
//not do dummy comment
void* x = (decode_clo(env53075))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53075))[1];

//creating new closure instance
void** clo53714 = alloc_clo(lam53072_fptr, 5);

//setting env list
clo53714[1] = member_u63;
clo53714[2] = x;
clo53714[3] = kont52810;
clo53714[4] = lst;
clo53714[5] = cdr;
void* f5281252928 = encode_clo(clo53714);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f5281252928;
arg_buffer[3] = a5271452927;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53074 = encode_clo(alloc_clo(lam53074_fptr, 0));

void* lam53076_fptr() // lam53076 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53077 = arg_buffer[1];
//reading env and args
void* a5271252924 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53077))[7];
//not do dummy comment
void* lst = (decode_clo(env53077))[6];
//not do dummy comment
void* kont52810 = (decode_clo(env53077))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env53077))[4];
//not do dummy comment
void* x = (decode_clo(env53077))[3];
//not do dummy comment
void* car = (decode_clo(env53077))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env53077))[1];

//if-clause
bool if_guard53715 = is_true(a5271252924);
if(if_guard53715)
{
void* x5271352925 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52810);
arg_buffer[2] = x5271352925;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52810))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53717 = alloc_clo(lam53074_fptr, 6);

//setting env list
clo53717[1] = member_u63;
clo53717[2] = x;
clo53717[3] = equal_u63;
clo53717[4] = kont52810;
clo53717[5] = lst;
clo53717[6] = cdr;
void* f5281352926 = encode_clo(clo53717);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5281352926;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53076 = encode_clo(alloc_clo(lam53076_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53078 = arg_buffer[1];
//reading env and args
void* kont52810 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53719 = alloc_clo(lam53076_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo53719[1] = member_u63;
clo53719[2] = car;
clo53719[3] = x;
clo53719[4] = equal_u63;
clo53719[5] = kont52810;
clo53719[6] = lst;
clo53719[7] = cdr;
void* f5281452923 = encode_clo(clo53719);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5281452923;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam53079_fptr() // lam53079 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53080 = arg_buffer[1];
//reading env and args
void* a5272152940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5272052938 = (decode_clo(env53080))[4];
//not do dummy comment
void* fun = (decode_clo(env53080))[3];
//not do dummy comment
void* kont52815 = (decode_clo(env53080))[2];
//not do dummy comment
void* foldl = (decode_clo(env53080))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont52815;
arg_buffer[3] = fun;
arg_buffer[4] = a5272052938;
arg_buffer[5] = a5272152940;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53079 = encode_clo(alloc_clo(lam53079_fptr, 0));

void* lam53081_fptr() // lam53081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53082 = arg_buffer[1];
//reading env and args
void* a5272052938 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53082))[5];
//not do dummy comment
void* lst = (decode_clo(env53082))[4];
//not do dummy comment
void* fun = (decode_clo(env53082))[3];
//not do dummy comment
void* kont52815 = (decode_clo(env53082))[2];
//not do dummy comment
void* foldl = (decode_clo(env53082))[1];

//creating new closure instance
void** clo53721 = alloc_clo(lam53079_fptr, 4);

//setting env list
clo53721[1] = foldl;
clo53721[2] = kont52815;
clo53721[3] = fun;
clo53721[4] = a5272052938;
void* f5281652939 = encode_clo(clo53721);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5281652939;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53081 = encode_clo(alloc_clo(lam53081_fptr, 0));

void* lam53083_fptr() // lam53083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53084 = arg_buffer[1];
//reading env and args
void* a5271952936 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53084))[6];
//not do dummy comment
void* lst = (decode_clo(env53084))[5];
//not do dummy comment
void* fun = (decode_clo(env53084))[4];
//not do dummy comment
void* foldl = (decode_clo(env53084))[3];
//not do dummy comment
void* acc = (decode_clo(env53084))[2];
//not do dummy comment
void* kont52815 = (decode_clo(env53084))[1];

//creating new closure instance
void** clo53723 = alloc_clo(lam53081_fptr, 5);

//setting env list
clo53723[1] = foldl;
clo53723[2] = kont52815;
clo53723[3] = fun;
clo53723[4] = lst;
clo53723[5] = cdr;
void* f5281752937 = encode_clo(clo53723);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f5281752937;
arg_buffer[3] = a5271952936;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53083 = encode_clo(alloc_clo(lam53083_fptr, 0));

void* lam53085_fptr() // lam53085 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53086 = arg_buffer[1];
//reading env and args
void* a5271852934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53086))[7];
//not do dummy comment
void* lst = (decode_clo(env53086))[6];
//not do dummy comment
void* fun = (decode_clo(env53086))[5];
//not do dummy comment
void* car = (decode_clo(env53086))[4];
//not do dummy comment
void* foldl = (decode_clo(env53086))[3];
//not do dummy comment
void* acc = (decode_clo(env53086))[2];
//not do dummy comment
void* kont52815 = (decode_clo(env53086))[1];

//if-clause
bool if_guard53724 = is_true(a5271852934);
if(if_guard53724)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52815);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52815))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53726 = alloc_clo(lam53083_fptr, 6);

//setting env list
clo53726[1] = kont52815;
clo53726[2] = acc;
clo53726[3] = foldl;
clo53726[4] = fun;
clo53726[5] = lst;
clo53726[6] = cdr;
void* f5281852935 = encode_clo(clo53726);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5281852935;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53085 = encode_clo(alloc_clo(lam53085_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53087 = arg_buffer[1];
//reading env and args
void* kont52815 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53728 = alloc_clo(lam53085_fptr, 7);

//setting env list
clo53728[1] = kont52815;
clo53728[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo53728[3] = foldl;
clo53728[4] = car;
clo53728[5] = fun;
clo53728[6] = lst;
clo53728[7] = cdr;
void* f5281952933 = encode_clo(clo53728);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5281952933;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam53088_fptr() // lam53088 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53089 = arg_buffer[1];
//reading env and args
void* a5272552948 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52820 = (decode_clo(env53089))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53089))[2];
//not do dummy comment
void* a5272352944 = (decode_clo(env53089))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont52820;
arg_buffer[3] = a5272352944;
arg_buffer[4] = a5272552948;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53088 = encode_clo(alloc_clo(lam53088_fptr, 0));

void* lam53090_fptr() // lam53090 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53091 = arg_buffer[1];
//reading env and args
void* a5272452946 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52820 = (decode_clo(env53091))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53091))[4];
//not do dummy comment
void* cons = (decode_clo(env53091))[3];
//not do dummy comment
void* a5272352944 = (decode_clo(env53091))[2];
//not do dummy comment
void* lst2 = (decode_clo(env53091))[1];

//creating new closure instance
void** clo53730 = alloc_clo(lam53088_fptr, 3);

//setting env list
clo53730[1] = a5272352944;
clo53730[2] = reverse_u45helper;
clo53730[3] = kont52820;
void* f5282152947 = encode_clo(clo53730);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5282152947;
arg_buffer[3] = a5272452946;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53090 = encode_clo(alloc_clo(lam53090_fptr, 0));

void* lam53092_fptr() // lam53092 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53093 = arg_buffer[1];
//reading env and args
void* a5272352944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52820 = (decode_clo(env53093))[6];
//not do dummy comment
void* lst = (decode_clo(env53093))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53093))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53093))[3];
//not do dummy comment
void* car = (decode_clo(env53093))[2];
//not do dummy comment
void* cons = (decode_clo(env53093))[1];

//creating new closure instance
void** clo53732 = alloc_clo(lam53090_fptr, 5);

//setting env list
clo53732[1] = lst2;
clo53732[2] = a5272352944;
clo53732[3] = cons;
clo53732[4] = reverse_u45helper;
clo53732[5] = kont52820;
void* f5282252945 = encode_clo(clo53732);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5282252945;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53092 = encode_clo(alloc_clo(lam53092_fptr, 0));

void* lam53094_fptr() // lam53094 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53095 = arg_buffer[1];
//reading env and args
void* a5272252942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53095))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53095))[6];
//not do dummy comment
void* lst2 = (decode_clo(env53095))[5];
//not do dummy comment
void* car = (decode_clo(env53095))[4];
//not do dummy comment
void* cons = (decode_clo(env53095))[3];
//not do dummy comment
void* cdr = (decode_clo(env53095))[2];
//not do dummy comment
void* kont52820 = (decode_clo(env53095))[1];

//if-clause
bool if_guard53733 = is_true(a5272252942);
if(if_guard53733)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52820);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52820))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53735 = alloc_clo(lam53092_fptr, 6);

//setting env list
clo53735[1] = cons;
clo53735[2] = car;
clo53735[3] = lst2;
clo53735[4] = reverse_u45helper;
clo53735[5] = lst;
clo53735[6] = kont52820;
void* f5282352943 = encode_clo(clo53735);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5282352943;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53094 = encode_clo(alloc_clo(lam53094_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53096 = arg_buffer[1];
//reading env and args
void* kont52820 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53737 = alloc_clo(lam53094_fptr, 7);

//setting env list
clo53737[1] = kont52820;
clo53737[2] = cdr;
clo53737[3] = cons;
clo53737[4] = car;
clo53737[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo53737[6] = reverse_u45helper;
clo53737[7] = lst;
void* f5282452941 = encode_clo(clo53737);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5282452941;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam53097_fptr() // lam53097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53098 = arg_buffer[1];
//reading env and args
void* a5272652950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53098))[3];
//not do dummy comment
void* kont52825 = (decode_clo(env53098))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env53098))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont52825;
arg_buffer[3] = lst;
arg_buffer[4] = a5272652950;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53097 = encode_clo(alloc_clo(lam53097_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53099 = arg_buffer[1];
//reading env and args
void* kont52825 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53739 = alloc_clo(lam53097_fptr, 3);

//setting env list
clo53739[1] = reverse_u45helper;
clo53739[2] = kont52825;
clo53739[3] = lst;
void* f5282652949 = encode_clo(clo53739);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5282652949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam53100_fptr() // lam53100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53101 = arg_buffer[1];
//reading env and args
void* x5272952955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52827 = (decode_clo(env53101))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52827);
arg_buffer[2] = x5272952955;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52827))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53100 = encode_clo(alloc_clo(lam53100_fptr, 0));

void* lam53102_fptr() // lam53102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53103 = arg_buffer[1];
//reading env and args
void* a5273452964 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52827 = (decode_clo(env53103))[4];
//not do dummy comment
void* a5273052957 = (decode_clo(env53103))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53103))[2];
//not do dummy comment
void* a5273252960 = (decode_clo(env53103))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont52827;
arg_buffer[3] = a5273052957;
arg_buffer[4] = a5273252960;
arg_buffer[5] = a5273452964;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53102 = encode_clo(alloc_clo(lam53102_fptr, 0));

void* lam53104_fptr() // lam53104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53105 = arg_buffer[1];
//reading env and args
void* a5273352962 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52827 = (decode_clo(env53105))[6];
//not do dummy comment
void* a5273052957 = (decode_clo(env53105))[5];
//not do dummy comment
void* cons = (decode_clo(env53105))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env53105))[3];
//not do dummy comment
void* a5273252960 = (decode_clo(env53105))[2];
//not do dummy comment
void* lst2 = (decode_clo(env53105))[1];

//creating new closure instance
void** clo53741 = alloc_clo(lam53102_fptr, 4);

//setting env list
clo53741[1] = a5273252960;
clo53741[2] = take_u45helper;
clo53741[3] = a5273052957;
clo53741[4] = kont52827;
void* f5282952963 = encode_clo(clo53741);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f5282952963;
arg_buffer[3] = a5273352962;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53104 = encode_clo(alloc_clo(lam53104_fptr, 0));

void* lam53106_fptr() // lam53106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53107 = arg_buffer[1];
//reading env and args
void* a5273252960 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53107))[7];
//not do dummy comment
void* kont52827 = (decode_clo(env53107))[6];
//not do dummy comment
void* a5273052957 = (decode_clo(env53107))[5];
//not do dummy comment
void* car = (decode_clo(env53107))[4];
//not do dummy comment
void* cons = (decode_clo(env53107))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env53107))[2];
//not do dummy comment
void* lst2 = (decode_clo(env53107))[1];

//creating new closure instance
void** clo53743 = alloc_clo(lam53104_fptr, 6);

//setting env list
clo53743[1] = lst2;
clo53743[2] = a5273252960;
clo53743[3] = take_u45helper;
clo53743[4] = cons;
clo53743[5] = a5273052957;
clo53743[6] = kont52827;
void* f5283052961 = encode_clo(clo53743);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5283052961;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53106 = encode_clo(alloc_clo(lam53106_fptr, 0));

void* lam53109_fptr() // lam53109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53110 = arg_buffer[1];
//reading env and args
void* a5273052957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53110))[8];
//not do dummy comment
void* kont52827 = (decode_clo(env53110))[7];
//not do dummy comment
void* cons = (decode_clo(env53110))[6];
//not do dummy comment
void* _u45 = (decode_clo(env53110))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env53110))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53110))[3];
//not do dummy comment
void* n = (decode_clo(env53110))[2];
//not do dummy comment
void* car = (decode_clo(env53110))[1];
mpz_t* mpzvar53744 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53744, "1", 10);
void* a5273152958 = encode_mpz(mpzvar53744);

//creating new closure instance
void** clo53746 = alloc_clo(lam53106_fptr, 7);

//setting env list
clo53746[1] = lst2;
clo53746[2] = take_u45helper;
clo53746[3] = cons;
clo53746[4] = car;
clo53746[5] = a5273052957;
clo53746[6] = kont52827;
clo53746[7] = lst;
void* f5283152959 = encode_clo(clo53746);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5283152959;
arg_buffer[3] = n;
arg_buffer[4] = a5273152958;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53109 = encode_clo(alloc_clo(lam53109_fptr, 0));

void* lam53111_fptr() // lam53111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53112 = arg_buffer[1];
//reading env and args
void* a5272852953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53112))[10];
//not do dummy comment
void* lst = (decode_clo(env53112))[9];
//not do dummy comment
void* cons = (decode_clo(env53112))[8];
//not do dummy comment
void* _u45 = (decode_clo(env53112))[7];
//not do dummy comment
void* kont52827 = (decode_clo(env53112))[6];
//not do dummy comment
void* reverse = (decode_clo(env53112))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env53112))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53112))[3];
//not do dummy comment
void* n = (decode_clo(env53112))[2];
//not do dummy comment
void* car = (decode_clo(env53112))[1];

//if-clause
bool if_guard53747 = is_true(a5272852953);
if(if_guard53747)
{

//creating new closure instance
void** clo53749 = alloc_clo(lam53100_fptr, 1);

//setting env list
clo53749[1] = kont52827;
void* f5282852954 = encode_clo(clo53749);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f5282852954;
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
void** clo53751 = alloc_clo(lam53109_fptr, 8);

//setting env list
clo53751[1] = car;
clo53751[2] = n;
clo53751[3] = lst2;
clo53751[4] = take_u45helper;
clo53751[5] = _u45;
clo53751[6] = cons;
clo53751[7] = kont52827;
clo53751[8] = lst;
void* f5283252956 = encode_clo(clo53751);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5283252956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53111 = encode_clo(alloc_clo(lam53111_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53114 = arg_buffer[1];
//reading env and args
void* kont52827 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar53752 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53752, "0", 10);
void* a5272752951 = encode_mpz(mpzvar53752);

//creating new closure instance
void** clo53754 = alloc_clo(lam53111_fptr, 10);

//setting env list
clo53754[1] = car;
clo53754[2] = n;
clo53754[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo53754[4] = take_u45helper;
clo53754[5] = reverse;
clo53754[6] = kont52827;
clo53754[7] = _u45;
clo53754[8] = cons;
clo53754[9] = lst;
clo53754[10] = cdr;
void* f5283352952 = encode_clo(clo53754);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5283352952;
arg_buffer[3] = n;
arg_buffer[4] = a5272752951;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam53115_fptr() // lam53115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53116 = arg_buffer[1];
//reading env and args
void* a5273552966 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53116))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env53116))[3];
//not do dummy comment
void* n = (decode_clo(env53116))[2];
//not do dummy comment
void* kont52834 = (decode_clo(env53116))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont52834;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a5273552966;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53115 = encode_clo(alloc_clo(lam53115_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53117 = arg_buffer[1];
//reading env and args
void* kont52834 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53756 = alloc_clo(lam53115_fptr, 4);

//setting env list
clo53756[1] = kont52834;
clo53756[2] = n;
clo53756[3] = take_u45helper;
clo53756[4] = lst;
void* f5283552965 = encode_clo(clo53756);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5283552965;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam53119_fptr() // lam53119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53120 = arg_buffer[1];
//reading env and args
void* a5274052974 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52836 = (decode_clo(env53120))[3];
//not do dummy comment
void* a5273852970 = (decode_clo(env53120))[2];
//not do dummy comment
void* _u43 = (decode_clo(env53120))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont52836;
arg_buffer[3] = a5273852970;
arg_buffer[4] = a5274052974;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53119 = encode_clo(alloc_clo(lam53119_fptr, 0));

void* lam53121_fptr() // lam53121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53122 = arg_buffer[1];
//reading env and args
void* a5273952972 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52836 = (decode_clo(env53122))[4];
//not do dummy comment
void* length = (decode_clo(env53122))[3];
//not do dummy comment
void* a5273852970 = (decode_clo(env53122))[2];
//not do dummy comment
void* _u43 = (decode_clo(env53122))[1];

//creating new closure instance
void** clo53758 = alloc_clo(lam53119_fptr, 3);

//setting env list
clo53758[1] = _u43;
clo53758[2] = a5273852970;
clo53758[3] = kont52836;
void* f5283752973 = encode_clo(clo53758);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f5283752973;
arg_buffer[3] = a5273952972;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53121 = encode_clo(alloc_clo(lam53121_fptr, 0));

void* lam53124_fptr() // lam53124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53125 = arg_buffer[1];
//reading env and args
void* a5273652968 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53125))[5];
//not do dummy comment
void* length = (decode_clo(env53125))[4];
//not do dummy comment
void* _u43 = (decode_clo(env53125))[3];
//not do dummy comment
void* cdr = (decode_clo(env53125))[2];
//not do dummy comment
void* kont52836 = (decode_clo(env53125))[1];

//if-clause
bool if_guard53759 = is_true(a5273652968);
if(if_guard53759)
{
mpz_t* mpzvar53760 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53760, "0", 10);
void* x5273752969 = encode_mpz(mpzvar53760);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52836);
arg_buffer[2] = x5273752969;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52836))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar53761 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53761, "1", 10);
void* a5273852970 = encode_mpz(mpzvar53761);

//creating new closure instance
void** clo53763 = alloc_clo(lam53121_fptr, 4);

//setting env list
clo53763[1] = _u43;
clo53763[2] = a5273852970;
clo53763[3] = length;
clo53763[4] = kont52836;
void* f5283852971 = encode_clo(clo53763);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5283852971;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53124 = encode_clo(alloc_clo(lam53124_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53126 = arg_buffer[1];
//reading env and args
void* kont52836 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo53765 = alloc_clo(lam53124_fptr, 5);

//setting env list
clo53765[1] = kont52836;
clo53765[2] = cdr;
clo53765[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo53765[4] = length;
clo53765[5] = lst;
void* f5283952967 = encode_clo(clo53765);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5283952967;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam53127_fptr() // lam53127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53128 = arg_buffer[1];
//reading env and args
void* x5274252978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52840 = (decode_clo(env53128))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52840);
arg_buffer[2] = x5274252978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52840))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53127 = encode_clo(alloc_clo(lam53127_fptr, 0));

void* lam53129_fptr() // lam53129 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53130 = arg_buffer[1];
//reading env and args
void* a5274652986 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5274452982 = (decode_clo(env53130))[3];
//not do dummy comment
void* kont52840 = (decode_clo(env53130))[2];
//not do dummy comment
void* cons = (decode_clo(env53130))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52840;
arg_buffer[3] = a5274452982;
arg_buffer[4] = a5274652986;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53129 = encode_clo(alloc_clo(lam53129_fptr, 0));

void* lam53131_fptr() // lam53131 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53132 = arg_buffer[1];
//reading env and args
void* a5274552984 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5274452982 = (decode_clo(env53132))[5];
//not do dummy comment
void* kont52840 = (decode_clo(env53132))[4];
//not do dummy comment
void* map = (decode_clo(env53132))[3];
//not do dummy comment
void* proc = (decode_clo(env53132))[2];
//not do dummy comment
void* cons = (decode_clo(env53132))[1];

//creating new closure instance
void** clo53767 = alloc_clo(lam53129_fptr, 3);

//setting env list
clo53767[1] = cons;
clo53767[2] = kont52840;
clo53767[3] = a5274452982;
void* f5284252985 = encode_clo(clo53767);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f5284252985;
arg_buffer[3] = proc;
arg_buffer[4] = a5274552984;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53131 = encode_clo(alloc_clo(lam53131_fptr, 0));

void* lam53133_fptr() // lam53133 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53134 = arg_buffer[1];
//reading env and args
void* a5274452982 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53134))[6];
//not do dummy comment
void* map = (decode_clo(env53134))[5];
//not do dummy comment
void* proc = (decode_clo(env53134))[4];
//not do dummy comment
void* cons = (decode_clo(env53134))[3];
//not do dummy comment
void* lst = (decode_clo(env53134))[2];
//not do dummy comment
void* kont52840 = (decode_clo(env53134))[1];

//creating new closure instance
void** clo53769 = alloc_clo(lam53131_fptr, 5);

//setting env list
clo53769[1] = cons;
clo53769[2] = proc;
clo53769[3] = map;
clo53769[4] = kont52840;
clo53769[5] = a5274452982;
void* f5284352983 = encode_clo(clo53769);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5284352983;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53133 = encode_clo(alloc_clo(lam53133_fptr, 0));

void* lam53135_fptr() // lam53135 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53136 = arg_buffer[1];
//reading env and args
void* a5274352980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53136))[6];
//not do dummy comment
void* map = (decode_clo(env53136))[5];
//not do dummy comment
void* proc = (decode_clo(env53136))[4];
//not do dummy comment
void* cons = (decode_clo(env53136))[3];
//not do dummy comment
void* lst = (decode_clo(env53136))[2];
//not do dummy comment
void* kont52840 = (decode_clo(env53136))[1];

//creating new closure instance
void** clo53771 = alloc_clo(lam53133_fptr, 6);

//setting env list
clo53771[1] = kont52840;
clo53771[2] = lst;
clo53771[3] = cons;
clo53771[4] = proc;
clo53771[5] = map;
clo53771[6] = cdr;
void* f5284452981 = encode_clo(clo53771);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f5284452981;
arg_buffer[3] = a5274352980;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53135 = encode_clo(alloc_clo(lam53135_fptr, 0));

void* lam53137_fptr() // lam53137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53138 = arg_buffer[1];
//reading env and args
void* a5274152976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env53138))[8];
//not do dummy comment
void* proc = (decode_clo(env53138))[7];
//not do dummy comment
void* car = (decode_clo(env53138))[6];
//not do dummy comment
void* cons = (decode_clo(env53138))[5];
//not do dummy comment
void* list = (decode_clo(env53138))[4];
//not do dummy comment
void* cdr = (decode_clo(env53138))[3];
//not do dummy comment
void* lst = (decode_clo(env53138))[2];
//not do dummy comment
void* kont52840 = (decode_clo(env53138))[1];

//if-clause
bool if_guard53772 = is_true(a5274152976);
if(if_guard53772)
{

//creating new closure instance
void** clo53774 = alloc_clo(lam53127_fptr, 1);

//setting env list
clo53774[1] = kont52840;
void* f5284152977 = encode_clo(clo53774);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5284152977;
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
void** clo53776 = alloc_clo(lam53135_fptr, 6);

//setting env list
clo53776[1] = kont52840;
clo53776[2] = lst;
clo53776[3] = cons;
clo53776[4] = proc;
clo53776[5] = map;
clo53776[6] = cdr;
void* f5284552979 = encode_clo(clo53776);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5284552979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53137 = encode_clo(alloc_clo(lam53137_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53139 = arg_buffer[1];
//reading env and args
void* kont52840 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53778 = alloc_clo(lam53137_fptr, 8);

//setting env list
clo53778[1] = kont52840;
clo53778[2] = lst;
clo53778[3] = cdr;
clo53778[4] = list;
clo53778[5] = cons;
clo53778[6] = car;
clo53778[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo53778[8] = map;
void* f5284652975 = encode_clo(clo53778);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5284652975;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam53140_fptr() // lam53140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53141 = arg_buffer[1];
//reading env and args
void* x5274852990 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52847 = (decode_clo(env53141))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52847);
arg_buffer[2] = x5274852990;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52847))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53140 = encode_clo(alloc_clo(lam53140_fptr, 0));

void* lam53142_fptr() // lam53142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53143 = arg_buffer[1];
//reading env and args
void* a5275353000 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5275152996 = (decode_clo(env53143))[3];
//not do dummy comment
void* kont52847 = (decode_clo(env53143))[2];
//not do dummy comment
void* cons = (decode_clo(env53143))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52847;
arg_buffer[3] = a5275152996;
arg_buffer[4] = a5275353000;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53142 = encode_clo(alloc_clo(lam53142_fptr, 0));

void* lam53144_fptr() // lam53144 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53145 = arg_buffer[1];
//reading env and args
void* a5275252998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5275152996 = (decode_clo(env53145))[5];
//not do dummy comment
void* op = (decode_clo(env53145))[4];
//not do dummy comment
void* kont52847 = (decode_clo(env53145))[3];
//not do dummy comment
void* filter = (decode_clo(env53145))[2];
//not do dummy comment
void* cons = (decode_clo(env53145))[1];

//creating new closure instance
void** clo53780 = alloc_clo(lam53142_fptr, 3);

//setting env list
clo53780[1] = cons;
clo53780[2] = kont52847;
clo53780[3] = a5275152996;
void* f5284952999 = encode_clo(clo53780);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f5284952999;
arg_buffer[3] = op;
arg_buffer[4] = a5275252998;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53144 = encode_clo(alloc_clo(lam53144_fptr, 0));

void* lam53146_fptr() // lam53146 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53147 = arg_buffer[1];
//reading env and args
void* a5275152996 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53147))[6];
//not do dummy comment
void* lst = (decode_clo(env53147))[5];
//not do dummy comment
void* op = (decode_clo(env53147))[4];
//not do dummy comment
void* kont52847 = (decode_clo(env53147))[3];
//not do dummy comment
void* filter = (decode_clo(env53147))[2];
//not do dummy comment
void* cons = (decode_clo(env53147))[1];

//creating new closure instance
void** clo53782 = alloc_clo(lam53144_fptr, 5);

//setting env list
clo53782[1] = cons;
clo53782[2] = filter;
clo53782[3] = kont52847;
clo53782[4] = op;
clo53782[5] = a5275152996;
void* f5285052997 = encode_clo(clo53782);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5285052997;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53146 = encode_clo(alloc_clo(lam53146_fptr, 0));

void* lam53148_fptr() // lam53148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53149 = arg_buffer[1];
//reading env and args
void* a5275453002 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env53149))[3];
//not do dummy comment
void* kont52847 = (decode_clo(env53149))[2];
//not do dummy comment
void* filter = (decode_clo(env53149))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont52847;
arg_buffer[3] = op;
arg_buffer[4] = a5275453002;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53148 = encode_clo(alloc_clo(lam53148_fptr, 0));

void* lam53150_fptr() // lam53150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53151 = arg_buffer[1];
//reading env and args
void* a5275052994 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53151))[7];
//not do dummy comment
void* lst = (decode_clo(env53151))[6];
//not do dummy comment
void* op = (decode_clo(env53151))[5];
//not do dummy comment
void* kont52847 = (decode_clo(env53151))[4];
//not do dummy comment
void* cons = (decode_clo(env53151))[3];
//not do dummy comment
void* filter = (decode_clo(env53151))[2];
//not do dummy comment
void* car = (decode_clo(env53151))[1];

//if-clause
bool if_guard53783 = is_true(a5275052994);
if(if_guard53783)
{

//creating new closure instance
void** clo53785 = alloc_clo(lam53146_fptr, 6);

//setting env list
clo53785[1] = cons;
clo53785[2] = filter;
clo53785[3] = kont52847;
clo53785[4] = op;
clo53785[5] = lst;
clo53785[6] = cdr;
void* f5285152995 = encode_clo(clo53785);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5285152995;
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
void** clo53787 = alloc_clo(lam53148_fptr, 3);

//setting env list
clo53787[1] = filter;
clo53787[2] = kont52847;
clo53787[3] = op;
void* f5285253001 = encode_clo(clo53787);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5285253001;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53150 = encode_clo(alloc_clo(lam53150_fptr, 0));

void* lam53152_fptr() // lam53152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53153 = arg_buffer[1];
//reading env and args
void* a5274952992 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53153))[7];
//not do dummy comment
void* lst = (decode_clo(env53153))[6];
//not do dummy comment
void* op = (decode_clo(env53153))[5];
//not do dummy comment
void* kont52847 = (decode_clo(env53153))[4];
//not do dummy comment
void* cons = (decode_clo(env53153))[3];
//not do dummy comment
void* filter = (decode_clo(env53153))[2];
//not do dummy comment
void* car = (decode_clo(env53153))[1];

//creating new closure instance
void** clo53789 = alloc_clo(lam53150_fptr, 7);

//setting env list
clo53789[1] = car;
clo53789[2] = filter;
clo53789[3] = cons;
clo53789[4] = kont52847;
clo53789[5] = op;
clo53789[6] = lst;
clo53789[7] = cdr;
void* f5285352993 = encode_clo(clo53789);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f5285352993;
arg_buffer[3] = a5274952992;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53152 = encode_clo(alloc_clo(lam53152_fptr, 0));

void* lam53154_fptr() // lam53154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53155 = arg_buffer[1];
//reading env and args
void* a5274752988 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env53155))[8];
//not do dummy comment
void* op = (decode_clo(env53155))[7];
//not do dummy comment
void* kont52847 = (decode_clo(env53155))[6];
//not do dummy comment
void* cons = (decode_clo(env53155))[5];
//not do dummy comment
void* list = (decode_clo(env53155))[4];
//not do dummy comment
void* cdr = (decode_clo(env53155))[3];
//not do dummy comment
void* filter = (decode_clo(env53155))[2];
//not do dummy comment
void* car = (decode_clo(env53155))[1];

//if-clause
bool if_guard53790 = is_true(a5274752988);
if(if_guard53790)
{

//creating new closure instance
void** clo53792 = alloc_clo(lam53140_fptr, 1);

//setting env list
clo53792[1] = kont52847;
void* f5284852989 = encode_clo(clo53792);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f5284852989;
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
void** clo53794 = alloc_clo(lam53152_fptr, 7);

//setting env list
clo53794[1] = car;
clo53794[2] = filter;
clo53794[3] = cons;
clo53794[4] = kont52847;
clo53794[5] = op;
clo53794[6] = lst;
clo53794[7] = cdr;
void* f5285452991 = encode_clo(clo53794);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5285452991;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53154 = encode_clo(alloc_clo(lam53154_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53156 = arg_buffer[1];
//reading env and args
void* kont52847 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53796 = alloc_clo(lam53154_fptr, 8);

//setting env list
clo53796[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo53796[2] = filter;
clo53796[3] = cdr;
clo53796[4] = list;
clo53796[5] = cons;
clo53796[6] = kont52847;
clo53796[7] = op;
clo53796[8] = lst;
void* f5285552987 = encode_clo(clo53796);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5285552987;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam53157_fptr() // lam53157 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53158 = arg_buffer[1];
//reading env and args
void* a5275953010 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5275753007 = (decode_clo(env53158))[3];
//not do dummy comment
void* kont52856 = (decode_clo(env53158))[2];
//not do dummy comment
void* drop = (decode_clo(env53158))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont52856;
arg_buffer[3] = a5275753007;
arg_buffer[4] = a5275953010;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53157 = encode_clo(alloc_clo(lam53157_fptr, 0));

void* lam53160_fptr() // lam53160 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53161 = arg_buffer[1];
//reading env and args
void* a5275753007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env53161))[4];
//not do dummy comment
void* _u45 = (decode_clo(env53161))[3];
//not do dummy comment
void* kont52856 = (decode_clo(env53161))[2];
//not do dummy comment
void* drop = (decode_clo(env53161))[1];
mpz_t* mpzvar53797 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53797, "1", 10);
void* a5275853008 = encode_mpz(mpzvar53797);

//creating new closure instance
void** clo53799 = alloc_clo(lam53157_fptr, 3);

//setting env list
clo53799[1] = drop;
clo53799[2] = kont52856;
clo53799[3] = a5275753007;
void* f5285753009 = encode_clo(clo53799);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f5285753009;
arg_buffer[3] = n;
arg_buffer[4] = a5275853008;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53160 = encode_clo(alloc_clo(lam53160_fptr, 0));

void* lam53162_fptr() // lam53162 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53163 = arg_buffer[1];
//reading env and args
void* a5275653005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53163))[6];
//not do dummy comment
void* n = (decode_clo(env53163))[5];
//not do dummy comment
void* _u45 = (decode_clo(env53163))[4];
//not do dummy comment
void* kont52856 = (decode_clo(env53163))[3];
//not do dummy comment
void* lst = (decode_clo(env53163))[2];
//not do dummy comment
void* drop = (decode_clo(env53163))[1];

//if-clause
bool if_guard53800 = is_true(a5275653005);
if(if_guard53800)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52856);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52856))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53802 = alloc_clo(lam53160_fptr, 4);

//setting env list
clo53802[1] = drop;
clo53802[2] = kont52856;
clo53802[3] = _u45;
clo53802[4] = n;
void* f5285853006 = encode_clo(clo53802);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5285853006;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53162 = encode_clo(alloc_clo(lam53162_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53165 = arg_buffer[1];
//reading env and args
void* kont52856 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar53803 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53803, "0", 10);
void* a5275553003 = encode_mpz(mpzvar53803);

//creating new closure instance
void** clo53805 = alloc_clo(lam53162_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo53805[1] = drop;
clo53805[2] = lst;
clo53805[3] = kont52856;
clo53805[4] = _u45;
clo53805[5] = n;
clo53805[6] = cdr;
void* f5285953004 = encode_clo(clo53805);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f5285953004;
arg_buffer[3] = n;
arg_buffer[4] = a5275553003;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam53166_fptr() // lam53166 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53167 = arg_buffer[1];
//reading env and args
void* a5276353018 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5276153014 = (decode_clo(env53167))[3];
//not do dummy comment
void* kont52860 = (decode_clo(env53167))[2];
//not do dummy comment
void* proc = (decode_clo(env53167))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont52860;
arg_buffer[3] = a5276153014;
arg_buffer[4] = a5276353018;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53166 = encode_clo(alloc_clo(lam53166_fptr, 0));

void* lam53168_fptr() // lam53168 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53169 = arg_buffer[1];
//reading env and args
void* a5276253016 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5276153014 = (decode_clo(env53169))[5];
//not do dummy comment
void* foldr = (decode_clo(env53169))[4];
//not do dummy comment
void* kont52860 = (decode_clo(env53169))[3];
//not do dummy comment
void* proc = (decode_clo(env53169))[2];
//not do dummy comment
void* acc = (decode_clo(env53169))[1];

//creating new closure instance
void** clo53807 = alloc_clo(lam53166_fptr, 3);

//setting env list
clo53807[1] = proc;
clo53807[2] = kont52860;
clo53807[3] = a5276153014;
void* f5286153017 = encode_clo(clo53807);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f5286153017;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a5276253016;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53168 = encode_clo(alloc_clo(lam53168_fptr, 0));

void* lam53170_fptr() // lam53170 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53171 = arg_buffer[1];
//reading env and args
void* a5276153014 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53171))[6];
//not do dummy comment
void* kont52860 = (decode_clo(env53171))[5];
//not do dummy comment
void* foldr = (decode_clo(env53171))[4];
//not do dummy comment
void* lst = (decode_clo(env53171))[3];
//not do dummy comment
void* proc = (decode_clo(env53171))[2];
//not do dummy comment
void* acc = (decode_clo(env53171))[1];

//creating new closure instance
void** clo53809 = alloc_clo(lam53168_fptr, 5);

//setting env list
clo53809[1] = acc;
clo53809[2] = proc;
clo53809[3] = kont52860;
clo53809[4] = foldr;
clo53809[5] = a5276153014;
void* f5286253015 = encode_clo(clo53809);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5286253015;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53170 = encode_clo(alloc_clo(lam53170_fptr, 0));

void* lam53172_fptr() // lam53172 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53173 = arg_buffer[1];
//reading env and args
void* a5276053012 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53173))[7];
//not do dummy comment
void* kont52860 = (decode_clo(env53173))[6];
//not do dummy comment
void* car = (decode_clo(env53173))[5];
//not do dummy comment
void* foldr = (decode_clo(env53173))[4];
//not do dummy comment
void* lst = (decode_clo(env53173))[3];
//not do dummy comment
void* proc = (decode_clo(env53173))[2];
//not do dummy comment
void* acc = (decode_clo(env53173))[1];

//if-clause
bool if_guard53810 = is_true(a5276053012);
if(if_guard53810)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52860);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52860))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53812 = alloc_clo(lam53170_fptr, 6);

//setting env list
clo53812[1] = acc;
clo53812[2] = proc;
clo53812[3] = lst;
clo53812[4] = foldr;
clo53812[5] = kont52860;
clo53812[6] = cdr;
void* f5286353013 = encode_clo(clo53812);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5286353013;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53172 = encode_clo(alloc_clo(lam53172_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53174 = arg_buffer[1];
//reading env and args
void* kont52860 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo53814 = alloc_clo(lam53172_fptr, 7);

//setting env list
clo53814[1] = acc;
clo53814[2] = proc;
clo53814[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo53814[4] = foldr;
clo53814[5] = car;
clo53814[6] = kont52860;
clo53814[7] = cdr;
void* f5286453011 = encode_clo(clo53814);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5286453011;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam53175_fptr() // lam53175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53176 = arg_buffer[1];
//reading env and args
void* a5276753026 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a5276553022 = (decode_clo(env53176))[3];
//not do dummy comment
void* kont52865 = (decode_clo(env53176))[2];
//not do dummy comment
void* cons = (decode_clo(env53176))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont52865;
arg_buffer[3] = a5276553022;
arg_buffer[4] = a5276753026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53175 = encode_clo(alloc_clo(lam53175_fptr, 0));

void* lam53177_fptr() // lam53177 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53178 = arg_buffer[1];
//reading env and args
void* a5276653024 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env53178))[5];
//not do dummy comment
void* a5276553022 = (decode_clo(env53178))[4];
//not do dummy comment
void* lst2 = (decode_clo(env53178))[3];
//not do dummy comment
void* kont52865 = (decode_clo(env53178))[2];
//not do dummy comment
void* cons = (decode_clo(env53178))[1];

//creating new closure instance
void** clo53816 = alloc_clo(lam53175_fptr, 3);

//setting env list
clo53816[1] = cons;
clo53816[2] = kont52865;
clo53816[3] = a5276553022;
void* f5286653025 = encode_clo(clo53816);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f5286653025;
arg_buffer[3] = a5276653024;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53177 = encode_clo(alloc_clo(lam53177_fptr, 0));

void* lam53179_fptr() // lam53179 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53180 = arg_buffer[1];
//reading env and args
void* a5276553022 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53180))[6];
//not do dummy comment
void* append = (decode_clo(env53180))[5];
//not do dummy comment
void* lst2 = (decode_clo(env53180))[4];
//not do dummy comment
void* cons = (decode_clo(env53180))[3];
//not do dummy comment
void* kont52865 = (decode_clo(env53180))[2];
//not do dummy comment
void* lst1 = (decode_clo(env53180))[1];

//creating new closure instance
void** clo53818 = alloc_clo(lam53177_fptr, 5);

//setting env list
clo53818[1] = cons;
clo53818[2] = kont52865;
clo53818[3] = lst2;
clo53818[4] = a5276553022;
clo53818[5] = append;
void* f5286753023 = encode_clo(clo53818);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f5286753023;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53179 = encode_clo(alloc_clo(lam53179_fptr, 0));

void* lam53181_fptr() // lam53181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53182 = arg_buffer[1];
//reading env and args
void* a5276453020 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env53182))[7];
//not do dummy comment
void* append = (decode_clo(env53182))[6];
//not do dummy comment
void* lst2 = (decode_clo(env53182))[5];
//not do dummy comment
void* cons = (decode_clo(env53182))[4];
//not do dummy comment
void* kont52865 = (decode_clo(env53182))[3];
//not do dummy comment
void* lst1 = (decode_clo(env53182))[2];
//not do dummy comment
void* car = (decode_clo(env53182))[1];

//if-clause
bool if_guard53819 = is_true(a5276453020);
if(if_guard53819)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52865);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52865))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo53821 = alloc_clo(lam53179_fptr, 6);

//setting env list
clo53821[1] = lst1;
clo53821[2] = kont52865;
clo53821[3] = cons;
clo53821[4] = lst2;
clo53821[5] = append;
clo53821[6] = cdr;
void* f5286853021 = encode_clo(clo53821);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f5286853021;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam53181 = encode_clo(alloc_clo(lam53181_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53183 = arg_buffer[1];
//reading env and args
void* kont52865 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo53823 = alloc_clo(lam53181_fptr, 7);

//setting env list
clo53823[1] = car;
clo53823[2] = lst1;
clo53823[3] = kont52865;
clo53823[4] = cons;
clo53823[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo53823[6] = append;
clo53823[7] = cdr;
void* f5286953019 = encode_clo(clo53823);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f5286953019;
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
void* _53184 = arg_buffer[1];
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

void* kont5287053027 = prim_car(lst);
void* lst53028 = prim_cdr(lst);
void* x5276853029 = apply_prim_hash(lst53028);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont5287053027);
arg_buffer[2] = x5276853029;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont5287053027))[0]);
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
void* _53185 = arg_buffer[1];
//reading env and args
void* kont52872 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5276953030 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52872);
arg_buffer[2] = x5276953030;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52872))[0]);
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
void* _53186 = arg_buffer[1];
//reading env and args
void* kont52873 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x5277053031 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52873);
arg_buffer[2] = x5277053031;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52873))[0]);
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
void* _53187 = arg_buffer[1];
//reading env and args
void* kont52874 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x5277153032 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52874);
arg_buffer[2] = x5277153032;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52874))[0]);
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
void* _53188 = arg_buffer[1];
//reading env and args
void* kont52875 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x5277253033 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52875);
arg_buffer[2] = x5277253033;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52875))[0]);
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
void* _53194 = arg_buffer[1];
//reading env and args
void* kont52876 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar53824 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53824, "100", 10);
void* a5277353034 = encode_mpz(mpzvar53824);
mpz_t* mpzvar53825 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53825, "100", 10);
void* a5277453035 = encode_mpz(mpzvar53825);
mpz_t* mpzvar53826 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53826, "100", 10);
void* a5277553036 = encode_mpz(mpzvar53826);
mpz_t* mpzvar53827 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53827, "100", 10);
void* a5277653037 = encode_mpz(mpzvar53827);
mpz_t* mpzvar53828 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar53828, "100", 10);
void* a5277753038 = encode_mpz(mpzvar53828);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = kont52876;
arg_buffer[3] = a5277353034;
arg_buffer[4] = a5277453035;
arg_buffer[5] = a5277553036;
arg_buffer[6] = a5277653037;
arg_buffer[7] = a5277753038;
arg_buffer[0] = reinterpret_cast<void*>(7);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam53195_fptr() // lam53195 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env53196 = arg_buffer[1];
//reading env and args
void* x5277853040 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont52877 = (decode_clo(env53196))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont52877);
arg_buffer[2] = x5277853040;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont52877))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam53195 = encode_clo(alloc_clo(lam53195_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _53197 = arg_buffer[1];
//reading env and args
void* kont52877 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo53830 = alloc_clo(lam53195_fptr, 1);

//setting env list
clo53830[1] = kont52877;
void* f5287853039 = encode_clo(clo53830);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f5287853039;
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

