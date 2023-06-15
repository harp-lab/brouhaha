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
void* _47062 = arg_buffer[1];
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

void* kont4680246902 = prim_car(lst);
void* lst46903 = prim_cdr(lst);
void* x4671546904 = apply_prim__u43(lst46903);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4680246902);
arg_buffer[2] = x4671546904;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4680246902))[0]);
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
void* _47063 = arg_buffer[1];
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

void* kont4680446905 = prim_car(lst);
void* lst46906 = prim_cdr(lst);
void* x4671646907 = apply_prim__u45(lst46906);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4680446905);
arg_buffer[2] = x4671646907;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4680446905))[0]);
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
void* _47064 = arg_buffer[1];
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

void* kont4680646908 = prim_car(lst);
void* lst46909 = prim_cdr(lst);
void* x4671746910 = apply_prim__u42(lst46909);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4680646908);
arg_buffer[2] = x4671746910;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4680646908))[0]);
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
void* _47065 = arg_buffer[1];
//reading env and args
void* kont46808 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4671846911 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46808);
arg_buffer[2] = x4671846911;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46808))[0]);
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
void* _47066 = arg_buffer[1];
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

void* kont4680946912 = prim_car(lst);
void* lst46913 = prim_cdr(lst);
void* x4671946914 = apply_prim__u47(lst46913);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4680946912);
arg_buffer[2] = x4671946914;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4680946912))[0]);
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
void* _47067 = arg_buffer[1];
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

void* kont4681146915 = prim_car(lst);
void* lst46916 = prim_cdr(lst);
void* x4672046917 = apply_prim__u61(lst46916);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4681146915);
arg_buffer[2] = x4672046917;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4681146915))[0]);
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
void* _47068 = arg_buffer[1];
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

void* kont4681346918 = prim_car(lst);
void* lst46919 = prim_cdr(lst);
void* x4672146920 = apply_prim__u62(lst46919);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4681346918);
arg_buffer[2] = x4672146920;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4681346918))[0]);
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
void* _47069 = arg_buffer[1];
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

void* kont4681546921 = prim_car(lst);
void* lst46922 = prim_cdr(lst);
void* x4672246923 = apply_prim__u60(lst46922);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4681546921);
arg_buffer[2] = x4672246923;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4681546921))[0]);
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
void* _47070 = arg_buffer[1];
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

void* kont4681746924 = prim_car(lst);
void* lst46925 = prim_cdr(lst);
void* x4672346926 = apply_prim__u60_u61(lst46925);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4681746924);
arg_buffer[2] = x4672346926;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4681746924))[0]);
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
void* _47071 = arg_buffer[1];
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

void* kont4681946927 = prim_car(lst);
void* lst46928 = prim_cdr(lst);
void* x4672446929 = apply_prim__u62_u61(lst46928);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4681946927);
arg_buffer[2] = x4672446929;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4681946927))[0]);
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
void* _47072 = arg_buffer[1];
//reading env and args
void* kont46821 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x4672546930 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46821);
arg_buffer[2] = x4672546930;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46821))[0]);
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
void* _47073 = arg_buffer[1];
//reading env and args
void* kont46822 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4672646931 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46822);
arg_buffer[2] = x4672646931;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46822))[0]);
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
void* _47074 = arg_buffer[1];
//reading env and args
void* kont46823 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x4672746932 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46823);
arg_buffer[2] = x4672746932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46823))[0]);
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
void* _47075 = arg_buffer[1];
//reading env and args
void* kont46824 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x4672846933 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46824);
arg_buffer[2] = x4672846933;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46824))[0]);
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
void* _47076 = arg_buffer[1];
//reading env and args
void* kont46825 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4672946934 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46825);
arg_buffer[2] = x4672946934;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46825))[0]);
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
void* _47077 = arg_buffer[1];
//reading env and args
void* kont46826 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x4673046935 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46826);
arg_buffer[2] = x4673046935;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46826))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam47078_fptr() // lam47078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47079 = arg_buffer[1];
//reading env and args
void* a4673346939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4673146936 = (decode_clo(env47079))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env47079))[2];
//not do dummy comment
void* kont46827 = (decode_clo(env47079))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont46827;
arg_buffer[3] = a4673146936;
arg_buffer[4] = a4673346939;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47078 = encode_clo(alloc_clo(lam47078_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47082 = arg_buffer[1];
//reading env and args
void* kont46827 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar47217 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47217, "0", 10);
void* a4673146936 = encode_mpz(mpzvar47217);
mpz_t* mpzvar47218 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47218, "2", 10);
void* a4673246937 = encode_mpz(mpzvar47218);

//creating new closure instance
void** clo47220 = alloc_clo(lam47078_fptr, 3);

//setting env list
clo47220[1] = kont46827;
clo47220[2] = equal_u63;
clo47220[3] = a4673146936;
void* f4682846938 = encode_clo(clo47220);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4682846938;
arg_buffer[3] = x;
arg_buffer[4] = a4673246937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam47083_fptr() // lam47083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47084 = arg_buffer[1];
//reading env and args
void* a4673646943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env47084))[3];
//not do dummy comment
void* a4673446940 = (decode_clo(env47084))[2];
//not do dummy comment
void* kont46829 = (decode_clo(env47084))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont46829;
arg_buffer[3] = a4673446940;
arg_buffer[4] = a4673646943;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47083 = encode_clo(alloc_clo(lam47083_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47087 = arg_buffer[1];
//reading env and args
void* kont46829 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar47221 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47221, "1", 10);
void* a4673446940 = encode_mpz(mpzvar47221);
mpz_t* mpzvar47222 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47222, "2", 10);
void* a4673546941 = encode_mpz(mpzvar47222);

//creating new closure instance
void** clo47224 = alloc_clo(lam47083_fptr, 3);

//setting env list
clo47224[1] = kont46829;
clo47224[2] = a4673446940;
clo47224[3] = equal_u63;
void* f4683046942 = encode_clo(clo47224);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f4683046942;
arg_buffer[3] = x;
arg_buffer[4] = a4673546941;
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
void* _47088 = arg_buffer[1];
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

void* kont4683146944 = prim_car(x);
void* x46945 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4683146944);
arg_buffer[2] = x46945;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4683146944))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam47091_fptr() // lam47091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47092 = arg_buffer[1];
//reading env and args
void* a4674246955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46833 = (decode_clo(env47092))[3];
//not do dummy comment
void* x = (decode_clo(env47092))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env47092))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont46833;
arg_buffer[3] = x;
arg_buffer[4] = a4674246955;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47091 = encode_clo(alloc_clo(lam47091_fptr, 0));

void* lam47093_fptr() // lam47093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47094 = arg_buffer[1];
//reading env and args
void* a4674046952 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47094))[5];
//not do dummy comment
void* x = (decode_clo(env47094))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env47094))[3];
//not do dummy comment
void* kont46833 = (decode_clo(env47094))[2];
//not do dummy comment
void* cdr = (decode_clo(env47094))[1];

//if-clause
bool if_guard47225 = is_true(a4674046952);
if(if_guard47225)
{
void* x4674146953 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46833);
arg_buffer[2] = x4674146953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46833))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47227 = alloc_clo(lam47091_fptr, 3);

//setting env list
clo47227[1] = member_u63;
clo47227[2] = x;
clo47227[3] = kont46833;
void* f4683446954 = encode_clo(clo47227);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4683446954;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47093 = encode_clo(alloc_clo(lam47093_fptr, 0));

void* lam47095_fptr() // lam47095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47096 = arg_buffer[1];
//reading env and args
void* a4673946950 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47096))[6];
//not do dummy comment
void* equal_u63 = (decode_clo(env47096))[5];
//not do dummy comment
void* x = (decode_clo(env47096))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env47096))[3];
//not do dummy comment
void* kont46833 = (decode_clo(env47096))[2];
//not do dummy comment
void* cdr = (decode_clo(env47096))[1];

//creating new closure instance
void** clo47229 = alloc_clo(lam47093_fptr, 5);

//setting env list
clo47229[1] = cdr;
clo47229[2] = kont46833;
clo47229[3] = member_u63;
clo47229[4] = x;
clo47229[5] = lst;
void* f4683546951 = encode_clo(clo47229);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f4683546951;
arg_buffer[3] = a4673946950;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47095 = encode_clo(alloc_clo(lam47095_fptr, 0));

void* lam47097_fptr() // lam47097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47098 = arg_buffer[1];
//reading env and args
void* a4673746947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47098))[7];
//not do dummy comment
void* equal_u63 = (decode_clo(env47098))[6];
//not do dummy comment
void* x = (decode_clo(env47098))[5];
//not do dummy comment
void* car = (decode_clo(env47098))[4];
//not do dummy comment
void* member_u63 = (decode_clo(env47098))[3];
//not do dummy comment
void* kont46833 = (decode_clo(env47098))[2];
//not do dummy comment
void* cdr = (decode_clo(env47098))[1];

//if-clause
bool if_guard47230 = is_true(a4673746947);
if(if_guard47230)
{
void* x4673846948 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46833);
arg_buffer[2] = x4673846948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46833))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47232 = alloc_clo(lam47095_fptr, 6);

//setting env list
clo47232[1] = cdr;
clo47232[2] = kont46833;
clo47232[3] = member_u63;
clo47232[4] = x;
clo47232[5] = equal_u63;
clo47232[6] = lst;
void* f4683646949 = encode_clo(clo47232);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4683646949;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47097 = encode_clo(alloc_clo(lam47097_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47099 = arg_buffer[1];
//reading env and args
void* kont46833 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47234 = alloc_clo(lam47097_fptr, 7);

//setting env list
clo47234[1] = cdr;
clo47234[2] = kont46833;
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo47234[3] = member_u63;
clo47234[4] = car;
clo47234[5] = x;
clo47234[6] = equal_u63;
clo47234[7] = lst;
void* f4683746946 = encode_clo(clo47234);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4683746946;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam47100_fptr() // lam47100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47101 = arg_buffer[1];
//reading env and args
void* a4674646963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4674546961 = (decode_clo(env47101))[4];
//not do dummy comment
void* kont46838 = (decode_clo(env47101))[3];
//not do dummy comment
void* fun = (decode_clo(env47101))[2];
//not do dummy comment
void* foldl = (decode_clo(env47101))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont46838;
arg_buffer[3] = fun;
arg_buffer[4] = a4674546961;
arg_buffer[5] = a4674646963;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47100 = encode_clo(alloc_clo(lam47100_fptr, 0));

void* lam47102_fptr() // lam47102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47103 = arg_buffer[1];
//reading env and args
void* a4674546961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47103))[5];
//not do dummy comment
void* lst = (decode_clo(env47103))[4];
//not do dummy comment
void* kont46838 = (decode_clo(env47103))[3];
//not do dummy comment
void* fun = (decode_clo(env47103))[2];
//not do dummy comment
void* foldl = (decode_clo(env47103))[1];

//creating new closure instance
void** clo47236 = alloc_clo(lam47100_fptr, 4);

//setting env list
clo47236[1] = foldl;
clo47236[2] = fun;
clo47236[3] = kont46838;
clo47236[4] = a4674546961;
void* f4683946962 = encode_clo(clo47236);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4683946962;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47102 = encode_clo(alloc_clo(lam47102_fptr, 0));

void* lam47104_fptr() // lam47104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47105 = arg_buffer[1];
//reading env and args
void* a4674446959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47105))[6];
//not do dummy comment
void* lst = (decode_clo(env47105))[5];
//not do dummy comment
void* kont46838 = (decode_clo(env47105))[4];
//not do dummy comment
void* fun = (decode_clo(env47105))[3];
//not do dummy comment
void* acc = (decode_clo(env47105))[2];
//not do dummy comment
void* foldl = (decode_clo(env47105))[1];

//creating new closure instance
void** clo47238 = alloc_clo(lam47102_fptr, 5);

//setting env list
clo47238[1] = foldl;
clo47238[2] = fun;
clo47238[3] = kont46838;
clo47238[4] = lst;
clo47238[5] = cdr;
void* f4684046960 = encode_clo(clo47238);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f4684046960;
arg_buffer[3] = a4674446959;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47104 = encode_clo(alloc_clo(lam47104_fptr, 0));

void* lam47106_fptr() // lam47106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47107 = arg_buffer[1];
//reading env and args
void* a4674346957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47107))[7];
//not do dummy comment
void* lst = (decode_clo(env47107))[6];
//not do dummy comment
void* kont46838 = (decode_clo(env47107))[5];
//not do dummy comment
void* fun = (decode_clo(env47107))[4];
//not do dummy comment
void* acc = (decode_clo(env47107))[3];
//not do dummy comment
void* car = (decode_clo(env47107))[2];
//not do dummy comment
void* foldl = (decode_clo(env47107))[1];

//if-clause
bool if_guard47239 = is_true(a4674346957);
if(if_guard47239)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46838);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46838))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47241 = alloc_clo(lam47104_fptr, 6);

//setting env list
clo47241[1] = foldl;
clo47241[2] = acc;
clo47241[3] = fun;
clo47241[4] = kont46838;
clo47241[5] = lst;
clo47241[6] = cdr;
void* f4684146958 = encode_clo(clo47241);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4684146958;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47106 = encode_clo(alloc_clo(lam47106_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47108 = arg_buffer[1];
//reading env and args
void* kont46838 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo47243 = alloc_clo(lam47106_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo47243[1] = foldl;
clo47243[2] = car;
clo47243[3] = acc;
clo47243[4] = fun;
clo47243[5] = kont46838;
clo47243[6] = lst;
clo47243[7] = cdr;
void* f4684246956 = encode_clo(clo47243);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4684246956;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam47109_fptr() // lam47109 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47110 = arg_buffer[1];
//reading env and args
void* a4675046971 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4674846967 = (decode_clo(env47110))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47110))[2];
//not do dummy comment
void* kont46843 = (decode_clo(env47110))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont46843;
arg_buffer[3] = a4674846967;
arg_buffer[4] = a4675046971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47109 = encode_clo(alloc_clo(lam47109_fptr, 0));

void* lam47111_fptr() // lam47111 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47112 = arg_buffer[1];
//reading env and args
void* a4674946969 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4674846967 = (decode_clo(env47112))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47112))[4];
//not do dummy comment
void* kont46843 = (decode_clo(env47112))[3];
//not do dummy comment
void* lst2 = (decode_clo(env47112))[2];
//not do dummy comment
void* cons = (decode_clo(env47112))[1];

//creating new closure instance
void** clo47245 = alloc_clo(lam47109_fptr, 3);

//setting env list
clo47245[1] = kont46843;
clo47245[2] = reverse_u45helper;
clo47245[3] = a4674846967;
void* f4684446970 = encode_clo(clo47245);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4684446970;
arg_buffer[3] = a4674946969;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47111 = encode_clo(alloc_clo(lam47111_fptr, 0));

void* lam47113_fptr() // lam47113 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47114 = arg_buffer[1];
//reading env and args
void* a4674846967 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47114))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47114))[5];
//not do dummy comment
void* kont46843 = (decode_clo(env47114))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47114))[3];
//not do dummy comment
void* car = (decode_clo(env47114))[2];
//not do dummy comment
void* cons = (decode_clo(env47114))[1];

//creating new closure instance
void** clo47247 = alloc_clo(lam47111_fptr, 5);

//setting env list
clo47247[1] = cons;
clo47247[2] = lst2;
clo47247[3] = kont46843;
clo47247[4] = reverse_u45helper;
clo47247[5] = a4674846967;
void* f4684546968 = encode_clo(clo47247);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4684546968;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47113 = encode_clo(alloc_clo(lam47113_fptr, 0));

void* lam47115_fptr() // lam47115 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47116 = arg_buffer[1];
//reading env and args
void* a4674746965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47116))[7];
//not do dummy comment
void* lst = (decode_clo(env47116))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47116))[5];
//not do dummy comment
void* kont46843 = (decode_clo(env47116))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47116))[3];
//not do dummy comment
void* car = (decode_clo(env47116))[2];
//not do dummy comment
void* cons = (decode_clo(env47116))[1];

//if-clause
bool if_guard47248 = is_true(a4674746965);
if(if_guard47248)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46843);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46843))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47250 = alloc_clo(lam47113_fptr, 6);

//setting env list
clo47250[1] = cons;
clo47250[2] = car;
clo47250[3] = lst2;
clo47250[4] = kont46843;
clo47250[5] = reverse_u45helper;
clo47250[6] = lst;
void* f4684646966 = encode_clo(clo47250);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4684646966;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47115 = encode_clo(alloc_clo(lam47115_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47117 = arg_buffer[1];
//reading env and args
void* kont46843 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47252 = alloc_clo(lam47115_fptr, 7);

//setting env list
clo47252[1] = cons;
clo47252[2] = car;
clo47252[3] = lst2;
clo47252[4] = kont46843;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo47252[5] = reverse_u45helper;
clo47252[6] = lst;
clo47252[7] = cdr;
void* f4684746964 = encode_clo(clo47252);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4684746964;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam47118_fptr() // lam47118 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47119 = arg_buffer[1];
//reading env and args
void* a4675146973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47119))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env47119))[2];
//not do dummy comment
void* kont46848 = (decode_clo(env47119))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont46848;
arg_buffer[3] = lst;
arg_buffer[4] = a4675146973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47118 = encode_clo(alloc_clo(lam47118_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47120 = arg_buffer[1];
//reading env and args
void* kont46848 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo47254 = alloc_clo(lam47118_fptr, 3);

//setting env list
clo47254[1] = kont46848;
clo47254[2] = reverse_u45helper;
clo47254[3] = lst;
void* f4684946972 = encode_clo(clo47254);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4684946972;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam47121_fptr() // lam47121 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47122 = arg_buffer[1];
//reading env and args
void* x4675446978 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46850 = (decode_clo(env47122))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46850);
arg_buffer[2] = x4675446978;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46850))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47121 = encode_clo(alloc_clo(lam47121_fptr, 0));

void* lam47123_fptr() // lam47123 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47124 = arg_buffer[1];
//reading env and args
void* a4675946987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46850 = (decode_clo(env47124))[4];
//not do dummy comment
void* a4675546980 = (decode_clo(env47124))[3];
//not do dummy comment
void* a4675746983 = (decode_clo(env47124))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env47124))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont46850;
arg_buffer[3] = a4675546980;
arg_buffer[4] = a4675746983;
arg_buffer[5] = a4675946987;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47123 = encode_clo(alloc_clo(lam47123_fptr, 0));

void* lam47125_fptr() // lam47125 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47126 = arg_buffer[1];
//reading env and args
void* a4675846985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46850 = (decode_clo(env47126))[6];
//not do dummy comment
void* a4675546980 = (decode_clo(env47126))[5];
//not do dummy comment
void* a4675746983 = (decode_clo(env47126))[4];
//not do dummy comment
void* cons = (decode_clo(env47126))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47126))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47126))[1];

//creating new closure instance
void** clo47256 = alloc_clo(lam47123_fptr, 4);

//setting env list
clo47256[1] = take_u45helper;
clo47256[2] = a4675746983;
clo47256[3] = a4675546980;
clo47256[4] = kont46850;
void* f4685246986 = encode_clo(clo47256);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f4685246986;
arg_buffer[3] = a4675846985;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47125 = encode_clo(alloc_clo(lam47125_fptr, 0));

void* lam47127_fptr() // lam47127 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47128 = arg_buffer[1];
//reading env and args
void* a4675746983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46850 = (decode_clo(env47128))[7];
//not do dummy comment
void* a4675546980 = (decode_clo(env47128))[6];
//not do dummy comment
void* lst = (decode_clo(env47128))[5];
//not do dummy comment
void* car = (decode_clo(env47128))[4];
//not do dummy comment
void* cons = (decode_clo(env47128))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47128))[2];
//not do dummy comment
void* lst2 = (decode_clo(env47128))[1];

//creating new closure instance
void** clo47258 = alloc_clo(lam47125_fptr, 6);

//setting env list
clo47258[1] = lst2;
clo47258[2] = take_u45helper;
clo47258[3] = cons;
clo47258[4] = a4675746983;
clo47258[5] = a4675546980;
clo47258[6] = kont46850;
void* f4685346984 = encode_clo(clo47258);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4685346984;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47127 = encode_clo(alloc_clo(lam47127_fptr, 0));

void* lam47130_fptr() // lam47130 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47131 = arg_buffer[1];
//reading env and args
void* a4675546980 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46850 = (decode_clo(env47131))[8];
//not do dummy comment
void* lst = (decode_clo(env47131))[7];
//not do dummy comment
void* cons = (decode_clo(env47131))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47131))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47131))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47131))[3];
//not do dummy comment
void* n = (decode_clo(env47131))[2];
//not do dummy comment
void* car = (decode_clo(env47131))[1];
mpz_t* mpzvar47259 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47259, "1", 10);
void* a4675646981 = encode_mpz(mpzvar47259);

//creating new closure instance
void** clo47261 = alloc_clo(lam47127_fptr, 7);

//setting env list
clo47261[1] = lst2;
clo47261[2] = take_u45helper;
clo47261[3] = cons;
clo47261[4] = car;
clo47261[5] = lst;
clo47261[6] = a4675546980;
clo47261[7] = kont46850;
void* f4685446982 = encode_clo(clo47261);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4685446982;
arg_buffer[3] = n;
arg_buffer[4] = a4675646981;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47130 = encode_clo(alloc_clo(lam47130_fptr, 0));

void* lam47132_fptr() // lam47132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47133 = arg_buffer[1];
//reading env and args
void* a4675346976 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47133))[10];
//not do dummy comment
void* kont46850 = (decode_clo(env47133))[9];
//not do dummy comment
void* lst = (decode_clo(env47133))[8];
//not do dummy comment
void* reverse = (decode_clo(env47133))[7];
//not do dummy comment
void* cons = (decode_clo(env47133))[6];
//not do dummy comment
void* _u45 = (decode_clo(env47133))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env47133))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47133))[3];
//not do dummy comment
void* n = (decode_clo(env47133))[2];
//not do dummy comment
void* car = (decode_clo(env47133))[1];

//if-clause
bool if_guard47262 = is_true(a4675346976);
if(if_guard47262)
{

//creating new closure instance
void** clo47264 = alloc_clo(lam47121_fptr, 1);

//setting env list
clo47264[1] = kont46850;
void* f4685146977 = encode_clo(clo47264);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f4685146977;
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
void** clo47266 = alloc_clo(lam47130_fptr, 8);

//setting env list
clo47266[1] = car;
clo47266[2] = n;
clo47266[3] = lst2;
clo47266[4] = take_u45helper;
clo47266[5] = _u45;
clo47266[6] = cons;
clo47266[7] = lst;
clo47266[8] = kont46850;
void* f4685546979 = encode_clo(clo47266);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4685546979;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47132 = encode_clo(alloc_clo(lam47132_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47135 = arg_buffer[1];
//reading env and args
void* kont46850 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar47267 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47267, "0", 10);
void* a4675246974 = encode_mpz(mpzvar47267);

//creating new closure instance
void** clo47269 = alloc_clo(lam47132_fptr, 10);

//setting env list
clo47269[1] = car;
clo47269[2] = n;
clo47269[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo47269[4] = take_u45helper;
clo47269[5] = _u45;
clo47269[6] = cons;
clo47269[7] = reverse;
clo47269[8] = lst;
clo47269[9] = kont46850;
clo47269[10] = cdr;
void* f4685646975 = encode_clo(clo47269);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4685646975;
arg_buffer[3] = n;
arg_buffer[4] = a4675246974;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam47136_fptr() // lam47136 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47137 = arg_buffer[1];
//reading env and args
void* a4676046989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47137))[4];
//not do dummy comment
void* kont46857 = (decode_clo(env47137))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env47137))[2];
//not do dummy comment
void* n = (decode_clo(env47137))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont46857;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a4676046989;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47136 = encode_clo(alloc_clo(lam47136_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47138 = arg_buffer[1];
//reading env and args
void* kont46857 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47271 = alloc_clo(lam47136_fptr, 4);

//setting env list
clo47271[1] = n;
clo47271[2] = take_u45helper;
clo47271[3] = kont46857;
clo47271[4] = lst;
void* f4685846988 = encode_clo(clo47271);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4685846988;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam47140_fptr() // lam47140 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47141 = arg_buffer[1];
//reading env and args
void* a4676546997 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4676346993 = (decode_clo(env47141))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47141))[2];
//not do dummy comment
void* kont46859 = (decode_clo(env47141))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont46859;
arg_buffer[3] = a4676346993;
arg_buffer[4] = a4676546997;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47140 = encode_clo(alloc_clo(lam47140_fptr, 0));

void* lam47142_fptr() // lam47142 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47143 = arg_buffer[1];
//reading env and args
void* a4676446995 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4676346993 = (decode_clo(env47143))[4];
//not do dummy comment
void* length = (decode_clo(env47143))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47143))[2];
//not do dummy comment
void* kont46859 = (decode_clo(env47143))[1];

//creating new closure instance
void** clo47273 = alloc_clo(lam47140_fptr, 3);

//setting env list
clo47273[1] = kont46859;
clo47273[2] = _u43;
clo47273[3] = a4676346993;
void* f4686046996 = encode_clo(clo47273);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f4686046996;
arg_buffer[3] = a4676446995;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47142 = encode_clo(alloc_clo(lam47142_fptr, 0));

void* lam47145_fptr() // lam47145 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47146 = arg_buffer[1];
//reading env and args
void* a4676146991 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47146))[5];
//not do dummy comment
void* lst = (decode_clo(env47146))[4];
//not do dummy comment
void* length = (decode_clo(env47146))[3];
//not do dummy comment
void* _u43 = (decode_clo(env47146))[2];
//not do dummy comment
void* kont46859 = (decode_clo(env47146))[1];

//if-clause
bool if_guard47274 = is_true(a4676146991);
if(if_guard47274)
{
mpz_t* mpzvar47275 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47275, "0", 10);
void* x4676246992 = encode_mpz(mpzvar47275);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46859);
arg_buffer[2] = x4676246992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46859))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar47276 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47276, "1", 10);
void* a4676346993 = encode_mpz(mpzvar47276);

//creating new closure instance
void** clo47278 = alloc_clo(lam47142_fptr, 4);

//setting env list
clo47278[1] = kont46859;
clo47278[2] = _u43;
clo47278[3] = length;
clo47278[4] = a4676346993;
void* f4686146994 = encode_clo(clo47278);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4686146994;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47145 = encode_clo(alloc_clo(lam47145_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47147 = arg_buffer[1];
//reading env and args
void* kont46859 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo47280 = alloc_clo(lam47145_fptr, 5);

//setting env list
clo47280[1] = kont46859;
clo47280[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo47280[3] = length;
clo47280[4] = lst;
clo47280[5] = cdr;
void* f4686246990 = encode_clo(clo47280);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4686246990;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam47148_fptr() // lam47148 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47149 = arg_buffer[1];
//reading env and args
void* x4676747001 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46863 = (decode_clo(env47149))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46863);
arg_buffer[2] = x4676747001;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46863))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47148 = encode_clo(alloc_clo(lam47148_fptr, 0));

void* lam47150_fptr() // lam47150 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47151 = arg_buffer[1];
//reading env and args
void* a4677147009 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4676947005 = (decode_clo(env47151))[3];
//not do dummy comment
void* cons = (decode_clo(env47151))[2];
//not do dummy comment
void* kont46863 = (decode_clo(env47151))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46863;
arg_buffer[3] = a4676947005;
arg_buffer[4] = a4677147009;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47150 = encode_clo(alloc_clo(lam47150_fptr, 0));

void* lam47152_fptr() // lam47152 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47153 = arg_buffer[1];
//reading env and args
void* a4677047007 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env47153))[5];
//not do dummy comment
void* proc = (decode_clo(env47153))[4];
//not do dummy comment
void* a4676947005 = (decode_clo(env47153))[3];
//not do dummy comment
void* cons = (decode_clo(env47153))[2];
//not do dummy comment
void* kont46863 = (decode_clo(env47153))[1];

//creating new closure instance
void** clo47282 = alloc_clo(lam47150_fptr, 3);

//setting env list
clo47282[1] = kont46863;
clo47282[2] = cons;
clo47282[3] = a4676947005;
void* f4686547008 = encode_clo(clo47282);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f4686547008;
arg_buffer[3] = proc;
arg_buffer[4] = a4677047007;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47152 = encode_clo(alloc_clo(lam47152_fptr, 0));

void* lam47154_fptr() // lam47154 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47155 = arg_buffer[1];
//reading env and args
void* a4676947005 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47155))[6];
//not do dummy comment
void* lst = (decode_clo(env47155))[5];
//not do dummy comment
void* map = (decode_clo(env47155))[4];
//not do dummy comment
void* proc = (decode_clo(env47155))[3];
//not do dummy comment
void* cons = (decode_clo(env47155))[2];
//not do dummy comment
void* kont46863 = (decode_clo(env47155))[1];

//creating new closure instance
void** clo47284 = alloc_clo(lam47152_fptr, 5);

//setting env list
clo47284[1] = kont46863;
clo47284[2] = cons;
clo47284[3] = a4676947005;
clo47284[4] = proc;
clo47284[5] = map;
void* f4686647006 = encode_clo(clo47284);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4686647006;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47154 = encode_clo(alloc_clo(lam47154_fptr, 0));

void* lam47156_fptr() // lam47156 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47157 = arg_buffer[1];
//reading env and args
void* a4676847003 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47157))[6];
//not do dummy comment
void* lst = (decode_clo(env47157))[5];
//not do dummy comment
void* map = (decode_clo(env47157))[4];
//not do dummy comment
void* proc = (decode_clo(env47157))[3];
//not do dummy comment
void* cons = (decode_clo(env47157))[2];
//not do dummy comment
void* kont46863 = (decode_clo(env47157))[1];

//creating new closure instance
void** clo47286 = alloc_clo(lam47154_fptr, 6);

//setting env list
clo47286[1] = kont46863;
clo47286[2] = cons;
clo47286[3] = proc;
clo47286[4] = map;
clo47286[5] = lst;
clo47286[6] = cdr;
void* f4686747004 = encode_clo(clo47286);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f4686747004;
arg_buffer[3] = a4676847003;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47156 = encode_clo(alloc_clo(lam47156_fptr, 0));

void* lam47158_fptr() // lam47158 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47159 = arg_buffer[1];
//reading env and args
void* a4676646999 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47159))[8];
//not do dummy comment
void* map = (decode_clo(env47159))[7];
//not do dummy comment
void* proc = (decode_clo(env47159))[6];
//not do dummy comment
void* car = (decode_clo(env47159))[5];
//not do dummy comment
void* list = (decode_clo(env47159))[4];
//not do dummy comment
void* cdr = (decode_clo(env47159))[3];
//not do dummy comment
void* cons = (decode_clo(env47159))[2];
//not do dummy comment
void* kont46863 = (decode_clo(env47159))[1];

//if-clause
bool if_guard47287 = is_true(a4676646999);
if(if_guard47287)
{

//creating new closure instance
void** clo47289 = alloc_clo(lam47148_fptr, 1);

//setting env list
clo47289[1] = kont46863;
void* f4686447000 = encode_clo(clo47289);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4686447000;
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
void** clo47291 = alloc_clo(lam47156_fptr, 6);

//setting env list
clo47291[1] = kont46863;
clo47291[2] = cons;
clo47291[3] = proc;
clo47291[4] = map;
clo47291[5] = lst;
clo47291[6] = cdr;
void* f4686847002 = encode_clo(clo47291);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4686847002;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47158 = encode_clo(alloc_clo(lam47158_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47160 = arg_buffer[1];
//reading env and args
void* kont46863 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47293 = alloc_clo(lam47158_fptr, 8);

//setting env list
clo47293[1] = kont46863;
clo47293[2] = cons;
clo47293[3] = cdr;
clo47293[4] = list;
clo47293[5] = car;
clo47293[6] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo47293[7] = map;
clo47293[8] = lst;
void* f4686946998 = encode_clo(clo47293);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4686946998;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam47161_fptr() // lam47161 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47162 = arg_buffer[1];
//reading env and args
void* x4677347013 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46870 = (decode_clo(env47162))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46870);
arg_buffer[2] = x4677347013;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46870))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47161 = encode_clo(alloc_clo(lam47161_fptr, 0));

void* lam47163_fptr() // lam47163 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47164 = arg_buffer[1];
//reading env and args
void* a4677847023 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46870 = (decode_clo(env47164))[3];
//not do dummy comment
void* a4677647019 = (decode_clo(env47164))[2];
//not do dummy comment
void* cons = (decode_clo(env47164))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46870;
arg_buffer[3] = a4677647019;
arg_buffer[4] = a4677847023;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47163 = encode_clo(alloc_clo(lam47163_fptr, 0));

void* lam47165_fptr() // lam47165 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47166 = arg_buffer[1];
//reading env and args
void* a4677747021 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46870 = (decode_clo(env47166))[5];
//not do dummy comment
void* op = (decode_clo(env47166))[4];
//not do dummy comment
void* a4677647019 = (decode_clo(env47166))[3];
//not do dummy comment
void* filter = (decode_clo(env47166))[2];
//not do dummy comment
void* cons = (decode_clo(env47166))[1];

//creating new closure instance
void** clo47295 = alloc_clo(lam47163_fptr, 3);

//setting env list
clo47295[1] = cons;
clo47295[2] = a4677647019;
clo47295[3] = kont46870;
void* f4687247022 = encode_clo(clo47295);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f4687247022;
arg_buffer[3] = op;
arg_buffer[4] = a4677747021;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47165 = encode_clo(alloc_clo(lam47165_fptr, 0));

void* lam47167_fptr() // lam47167 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47168 = arg_buffer[1];
//reading env and args
void* a4677647019 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47168))[6];
//not do dummy comment
void* lst = (decode_clo(env47168))[5];
//not do dummy comment
void* kont46870 = (decode_clo(env47168))[4];
//not do dummy comment
void* op = (decode_clo(env47168))[3];
//not do dummy comment
void* filter = (decode_clo(env47168))[2];
//not do dummy comment
void* cons = (decode_clo(env47168))[1];

//creating new closure instance
void** clo47297 = alloc_clo(lam47165_fptr, 5);

//setting env list
clo47297[1] = cons;
clo47297[2] = filter;
clo47297[3] = a4677647019;
clo47297[4] = op;
clo47297[5] = kont46870;
void* f4687347020 = encode_clo(clo47297);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4687347020;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47167 = encode_clo(alloc_clo(lam47167_fptr, 0));

void* lam47169_fptr() // lam47169 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47170 = arg_buffer[1];
//reading env and args
void* a4677947025 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46870 = (decode_clo(env47170))[3];
//not do dummy comment
void* op = (decode_clo(env47170))[2];
//not do dummy comment
void* filter = (decode_clo(env47170))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont46870;
arg_buffer[3] = op;
arg_buffer[4] = a4677947025;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47169 = encode_clo(alloc_clo(lam47169_fptr, 0));

void* lam47171_fptr() // lam47171 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47172 = arg_buffer[1];
//reading env and args
void* a4677547017 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47172))[7];
//not do dummy comment
void* lst = (decode_clo(env47172))[6];
//not do dummy comment
void* kont46870 = (decode_clo(env47172))[5];
//not do dummy comment
void* op = (decode_clo(env47172))[4];
//not do dummy comment
void* cons = (decode_clo(env47172))[3];
//not do dummy comment
void* filter = (decode_clo(env47172))[2];
//not do dummy comment
void* car = (decode_clo(env47172))[1];

//if-clause
bool if_guard47298 = is_true(a4677547017);
if(if_guard47298)
{

//creating new closure instance
void** clo47300 = alloc_clo(lam47167_fptr, 6);

//setting env list
clo47300[1] = cons;
clo47300[2] = filter;
clo47300[3] = op;
clo47300[4] = kont46870;
clo47300[5] = lst;
clo47300[6] = cdr;
void* f4687447018 = encode_clo(clo47300);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4687447018;
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
void** clo47302 = alloc_clo(lam47169_fptr, 3);

//setting env list
clo47302[1] = filter;
clo47302[2] = op;
clo47302[3] = kont46870;
void* f4687547024 = encode_clo(clo47302);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4687547024;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47171 = encode_clo(alloc_clo(lam47171_fptr, 0));

void* lam47173_fptr() // lam47173 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47174 = arg_buffer[1];
//reading env and args
void* a4677447015 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47174))[7];
//not do dummy comment
void* lst = (decode_clo(env47174))[6];
//not do dummy comment
void* kont46870 = (decode_clo(env47174))[5];
//not do dummy comment
void* op = (decode_clo(env47174))[4];
//not do dummy comment
void* cons = (decode_clo(env47174))[3];
//not do dummy comment
void* filter = (decode_clo(env47174))[2];
//not do dummy comment
void* car = (decode_clo(env47174))[1];

//creating new closure instance
void** clo47304 = alloc_clo(lam47171_fptr, 7);

//setting env list
clo47304[1] = car;
clo47304[2] = filter;
clo47304[3] = cons;
clo47304[4] = op;
clo47304[5] = kont46870;
clo47304[6] = lst;
clo47304[7] = cdr;
void* f4687647016 = encode_clo(clo47304);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f4687647016;
arg_buffer[3] = a4677447015;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47173 = encode_clo(alloc_clo(lam47173_fptr, 0));

void* lam47175_fptr() // lam47175 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47176 = arg_buffer[1];
//reading env and args
void* a4677247011 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env47176))[8];
//not do dummy comment
void* kont46870 = (decode_clo(env47176))[7];
//not do dummy comment
void* op = (decode_clo(env47176))[6];
//not do dummy comment
void* cons = (decode_clo(env47176))[5];
//not do dummy comment
void* list = (decode_clo(env47176))[4];
//not do dummy comment
void* cdr = (decode_clo(env47176))[3];
//not do dummy comment
void* filter = (decode_clo(env47176))[2];
//not do dummy comment
void* car = (decode_clo(env47176))[1];

//if-clause
bool if_guard47305 = is_true(a4677247011);
if(if_guard47305)
{

//creating new closure instance
void** clo47307 = alloc_clo(lam47161_fptr, 1);

//setting env list
clo47307[1] = kont46870;
void* f4687147012 = encode_clo(clo47307);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f4687147012;
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
void** clo47309 = alloc_clo(lam47173_fptr, 7);

//setting env list
clo47309[1] = car;
clo47309[2] = filter;
clo47309[3] = cons;
clo47309[4] = op;
clo47309[5] = kont46870;
clo47309[6] = lst;
clo47309[7] = cdr;
void* f4687747014 = encode_clo(clo47309);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4687747014;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47175 = encode_clo(alloc_clo(lam47175_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47177 = arg_buffer[1];
//reading env and args
void* kont46870 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47311 = alloc_clo(lam47175_fptr, 8);

//setting env list
clo47311[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo47311[2] = filter;
clo47311[3] = cdr;
clo47311[4] = list;
clo47311[5] = cons;
clo47311[6] = op;
clo47311[7] = kont46870;
clo47311[8] = lst;
void* f4687847010 = encode_clo(clo47311);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4687847010;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam47178_fptr() // lam47178 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47179 = arg_buffer[1];
//reading env and args
void* a4678447033 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env47179))[3];
//not do dummy comment
void* a4678247030 = (decode_clo(env47179))[2];
//not do dummy comment
void* kont46879 = (decode_clo(env47179))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont46879;
arg_buffer[3] = a4678247030;
arg_buffer[4] = a4678447033;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47178 = encode_clo(alloc_clo(lam47178_fptr, 0));

void* lam47181_fptr() // lam47181 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47182 = arg_buffer[1];
//reading env and args
void* a4678247030 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* drop = (decode_clo(env47182))[4];
//not do dummy comment
void* n = (decode_clo(env47182))[3];
//not do dummy comment
void* kont46879 = (decode_clo(env47182))[2];
//not do dummy comment
void* _u45 = (decode_clo(env47182))[1];
mpz_t* mpzvar47312 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47312, "1", 10);
void* a4678347031 = encode_mpz(mpzvar47312);

//creating new closure instance
void** clo47314 = alloc_clo(lam47178_fptr, 3);

//setting env list
clo47314[1] = kont46879;
clo47314[2] = a4678247030;
clo47314[3] = drop;
void* f4688047032 = encode_clo(clo47314);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f4688047032;
arg_buffer[3] = n;
arg_buffer[4] = a4678347031;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47181 = encode_clo(alloc_clo(lam47181_fptr, 0));

void* lam47183_fptr() // lam47183 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47184 = arg_buffer[1];
//reading env and args
void* a4678147028 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47184))[6];
//not do dummy comment
void* n = (decode_clo(env47184))[5];
//not do dummy comment
void* kont46879 = (decode_clo(env47184))[4];
//not do dummy comment
void* _u45 = (decode_clo(env47184))[3];
//not do dummy comment
void* lst = (decode_clo(env47184))[2];
//not do dummy comment
void* drop = (decode_clo(env47184))[1];

//if-clause
bool if_guard47315 = is_true(a4678147028);
if(if_guard47315)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46879);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46879))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47317 = alloc_clo(lam47181_fptr, 4);

//setting env list
clo47317[1] = _u45;
clo47317[2] = kont46879;
clo47317[3] = n;
clo47317[4] = drop;
void* f4688147029 = encode_clo(clo47317);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4688147029;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47183 = encode_clo(alloc_clo(lam47183_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47186 = arg_buffer[1];
//reading env and args
void* kont46879 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar47318 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar47318, "0", 10);
void* a4678047026 = encode_mpz(mpzvar47318);

//creating new closure instance
void** clo47320 = alloc_clo(lam47183_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo47320[1] = drop;
clo47320[2] = lst;
clo47320[3] = _u45;
clo47320[4] = kont46879;
clo47320[5] = n;
clo47320[6] = cdr;
void* f4688247027 = encode_clo(clo47320);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f4688247027;
arg_buffer[3] = n;
arg_buffer[4] = a4678047026;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam47187_fptr() // lam47187 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47188 = arg_buffer[1];
//reading env and args
void* a4678847041 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46883 = (decode_clo(env47188))[3];
//not do dummy comment
void* proc = (decode_clo(env47188))[2];
//not do dummy comment
void* a4678647037 = (decode_clo(env47188))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont46883;
arg_buffer[3] = a4678647037;
arg_buffer[4] = a4678847041;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47187 = encode_clo(alloc_clo(lam47187_fptr, 0));

void* lam47189_fptr() // lam47189 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47190 = arg_buffer[1];
//reading env and args
void* a4678747039 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46883 = (decode_clo(env47190))[5];
//not do dummy comment
void* foldr = (decode_clo(env47190))[4];
//not do dummy comment
void* a4678647037 = (decode_clo(env47190))[3];
//not do dummy comment
void* proc = (decode_clo(env47190))[2];
//not do dummy comment
void* acc = (decode_clo(env47190))[1];

//creating new closure instance
void** clo47322 = alloc_clo(lam47187_fptr, 3);

//setting env list
clo47322[1] = a4678647037;
clo47322[2] = proc;
clo47322[3] = kont46883;
void* f4688447040 = encode_clo(clo47322);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f4688447040;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a4678747039;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47189 = encode_clo(alloc_clo(lam47189_fptr, 0));

void* lam47191_fptr() // lam47191 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47192 = arg_buffer[1];
//reading env and args
void* a4678647037 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47192))[6];
//not do dummy comment
void* kont46883 = (decode_clo(env47192))[5];
//not do dummy comment
void* foldr = (decode_clo(env47192))[4];
//not do dummy comment
void* lst = (decode_clo(env47192))[3];
//not do dummy comment
void* proc = (decode_clo(env47192))[2];
//not do dummy comment
void* acc = (decode_clo(env47192))[1];

//creating new closure instance
void** clo47324 = alloc_clo(lam47189_fptr, 5);

//setting env list
clo47324[1] = acc;
clo47324[2] = proc;
clo47324[3] = a4678647037;
clo47324[4] = foldr;
clo47324[5] = kont46883;
void* f4688547038 = encode_clo(clo47324);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4688547038;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47191 = encode_clo(alloc_clo(lam47191_fptr, 0));

void* lam47193_fptr() // lam47193 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47194 = arg_buffer[1];
//reading env and args
void* a4678547035 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47194))[7];
//not do dummy comment
void* kont46883 = (decode_clo(env47194))[6];
//not do dummy comment
void* car = (decode_clo(env47194))[5];
//not do dummy comment
void* foldr = (decode_clo(env47194))[4];
//not do dummy comment
void* lst = (decode_clo(env47194))[3];
//not do dummy comment
void* proc = (decode_clo(env47194))[2];
//not do dummy comment
void* acc = (decode_clo(env47194))[1];

//if-clause
bool if_guard47325 = is_true(a4678547035);
if(if_guard47325)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46883);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46883))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47327 = alloc_clo(lam47191_fptr, 6);

//setting env list
clo47327[1] = acc;
clo47327[2] = proc;
clo47327[3] = lst;
clo47327[4] = foldr;
clo47327[5] = kont46883;
clo47327[6] = cdr;
void* f4688647036 = encode_clo(clo47327);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4688647036;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47193 = encode_clo(alloc_clo(lam47193_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47195 = arg_buffer[1];
//reading env and args
void* kont46883 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo47329 = alloc_clo(lam47193_fptr, 7);

//setting env list
clo47329[1] = acc;
clo47329[2] = proc;
clo47329[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo47329[4] = foldr;
clo47329[5] = car;
clo47329[6] = kont46883;
clo47329[7] = cdr;
void* f4688747034 = encode_clo(clo47329);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4688747034;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam47196_fptr() // lam47196 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47197 = arg_buffer[1];
//reading env and args
void* a4679247049 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4679047045 = (decode_clo(env47197))[3];
//not do dummy comment
void* kont46888 = (decode_clo(env47197))[2];
//not do dummy comment
void* cons = (decode_clo(env47197))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont46888;
arg_buffer[3] = a4679047045;
arg_buffer[4] = a4679247049;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47196 = encode_clo(alloc_clo(lam47196_fptr, 0));

void* lam47198_fptr() // lam47198 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47199 = arg_buffer[1];
//reading env and args
void* a4679147047 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a4679047045 = (decode_clo(env47199))[5];
//not do dummy comment
void* kont46888 = (decode_clo(env47199))[4];
//not do dummy comment
void* append = (decode_clo(env47199))[3];
//not do dummy comment
void* lst2 = (decode_clo(env47199))[2];
//not do dummy comment
void* cons = (decode_clo(env47199))[1];

//creating new closure instance
void** clo47331 = alloc_clo(lam47196_fptr, 3);

//setting env list
clo47331[1] = cons;
clo47331[2] = kont46888;
clo47331[3] = a4679047045;
void* f4688947048 = encode_clo(clo47331);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f4688947048;
arg_buffer[3] = a4679147047;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47198 = encode_clo(alloc_clo(lam47198_fptr, 0));

void* lam47200_fptr() // lam47200 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47201 = arg_buffer[1];
//reading env and args
void* a4679047045 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47201))[6];
//not do dummy comment
void* kont46888 = (decode_clo(env47201))[5];
//not do dummy comment
void* append = (decode_clo(env47201))[4];
//not do dummy comment
void* lst2 = (decode_clo(env47201))[3];
//not do dummy comment
void* lst1 = (decode_clo(env47201))[2];
//not do dummy comment
void* cons = (decode_clo(env47201))[1];

//creating new closure instance
void** clo47333 = alloc_clo(lam47198_fptr, 5);

//setting env list
clo47333[1] = cons;
clo47333[2] = lst2;
clo47333[3] = append;
clo47333[4] = kont46888;
clo47333[5] = a4679047045;
void* f4689047046 = encode_clo(clo47333);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f4689047046;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47200 = encode_clo(alloc_clo(lam47200_fptr, 0));

void* lam47202_fptr() // lam47202 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47203 = arg_buffer[1];
//reading env and args
void* a4678947043 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env47203))[7];
//not do dummy comment
void* kont46888 = (decode_clo(env47203))[6];
//not do dummy comment
void* append = (decode_clo(env47203))[5];
//not do dummy comment
void* lst2 = (decode_clo(env47203))[4];
//not do dummy comment
void* cons = (decode_clo(env47203))[3];
//not do dummy comment
void* lst1 = (decode_clo(env47203))[2];
//not do dummy comment
void* car = (decode_clo(env47203))[1];

//if-clause
bool if_guard47334 = is_true(a4678947043);
if(if_guard47334)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46888);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46888))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo47336 = alloc_clo(lam47200_fptr, 6);

//setting env list
clo47336[1] = cons;
clo47336[2] = lst1;
clo47336[3] = lst2;
clo47336[4] = append;
clo47336[5] = kont46888;
clo47336[6] = cdr;
void* f4689147044 = encode_clo(clo47336);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f4689147044;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam47202 = encode_clo(alloc_clo(lam47202_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47204 = arg_buffer[1];
//reading env and args
void* kont46888 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo47338 = alloc_clo(lam47202_fptr, 7);

//setting env list
clo47338[1] = car;
clo47338[2] = lst1;
clo47338[3] = cons;
clo47338[4] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo47338[5] = append;
clo47338[6] = kont46888;
clo47338[7] = cdr;
void* f4689247042 = encode_clo(clo47338);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f4689247042;
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
void* _47205 = arg_buffer[1];
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

void* kont4689347050 = prim_car(lst);
void* lst47051 = prim_cdr(lst);
void* x4679347052 = apply_prim_hash(lst47051);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont4689347050);
arg_buffer[2] = x4679347052;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont4689347050))[0]);
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
void* _47206 = arg_buffer[1];
//reading env and args
void* kont46895 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4679447053 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46895);
arg_buffer[2] = x4679447053;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46895))[0]);
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
void* _47207 = arg_buffer[1];
//reading env and args
void* kont46896 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x4679547054 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46896);
arg_buffer[2] = x4679547054;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46896))[0]);
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
void* _47208 = arg_buffer[1];
//reading env and args
void* kont46897 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x4679647055 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46897);
arg_buffer[2] = x4679647055;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46897))[0]);
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
void* _47209 = arg_buffer[1];
//reading env and args
void* kont46898 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x4679747056 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46898);
arg_buffer[2] = x4679747056;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46898))[0]);
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
void* _47213 = arg_buffer[1];
//reading env and args
void* kont46899 = arg_buffer[2];
//Dummy comment
void* a4679847057 = encode_bool(false);

//if-clause
bool if_guard47339 = is_true(a4679847057);
if(if_guard47339)
{
void* x4679947058 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46899);
arg_buffer[2] = x4679947058;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46899))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
void* x4680047059 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46899);
arg_buffer[2] = x4680047059;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46899))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam47214_fptr() // lam47214 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env47215 = arg_buffer[1];
//reading env and args
void* x4680147061 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont46900 = (decode_clo(env47215))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont46900);
arg_buffer[2] = x4680147061;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont46900))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam47214 = encode_clo(alloc_clo(lam47214_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _47216 = arg_buffer[1];
//reading env and args
void* kont46900 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo47341 = alloc_clo(lam47214_fptr, 1);

//setting env list
clo47341[1] = kont46900;
void* f4690147060 = encode_clo(clo47341);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f4690147060;
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

