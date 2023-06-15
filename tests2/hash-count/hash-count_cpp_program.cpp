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
void* _37962 = arg_buffer[1];
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

void* kont3769637797 = prim_car(lst);
void* lst37798 = prim_cdr(lst);
void* x3760537799 = apply_prim__u43(lst37798);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3769637797);
arg_buffer[2] = x3760537799;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3769637797))[0]);
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
void* _37963 = arg_buffer[1];
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

void* kont3769837800 = prim_car(lst);
void* lst37801 = prim_cdr(lst);
void* x3760637802 = apply_prim__u45(lst37801);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3769837800);
arg_buffer[2] = x3760637802;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3769837800))[0]);
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
void* _37964 = arg_buffer[1];
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

void* kont3770037803 = prim_car(lst);
void* lst37804 = prim_cdr(lst);
void* x3760737805 = apply_prim__u42(lst37804);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3770037803);
arg_buffer[2] = x3760737805;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3770037803))[0]);
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
void* _37965 = arg_buffer[1];
//reading env and args
void* kont37702 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3760837806 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37702);
arg_buffer[2] = x3760837806;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37702))[0]);
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
void* _37966 = arg_buffer[1];
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

void* kont3770337807 = prim_car(lst);
void* lst37808 = prim_cdr(lst);
void* x3760937809 = apply_prim__u47(lst37808);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3770337807);
arg_buffer[2] = x3760937809;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3770337807))[0]);
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
void* _37967 = arg_buffer[1];
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

void* kont3770537810 = prim_car(lst);
void* lst37811 = prim_cdr(lst);
void* x3761037812 = apply_prim__u61(lst37811);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3770537810);
arg_buffer[2] = x3761037812;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3770537810))[0]);
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
void* _37968 = arg_buffer[1];
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

void* kont3770737813 = prim_car(lst);
void* lst37814 = prim_cdr(lst);
void* x3761137815 = apply_prim__u62(lst37814);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3770737813);
arg_buffer[2] = x3761137815;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3770737813))[0]);
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
void* _37969 = arg_buffer[1];
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

void* kont3770937816 = prim_car(lst);
void* lst37817 = prim_cdr(lst);
void* x3761237818 = apply_prim__u60(lst37817);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3770937816);
arg_buffer[2] = x3761237818;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3770937816))[0]);
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
void* _37970 = arg_buffer[1];
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

void* kont3771137819 = prim_car(lst);
void* lst37820 = prim_cdr(lst);
void* x3761337821 = apply_prim__u60_u61(lst37820);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3771137819);
arg_buffer[2] = x3761337821;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3771137819))[0]);
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
void* _37971 = arg_buffer[1];
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

void* kont3771337822 = prim_car(lst);
void* lst37823 = prim_cdr(lst);
void* x3761437824 = apply_prim__u62_u61(lst37823);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3771337822);
arg_buffer[2] = x3761437824;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3771337822))[0]);
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
void* _37972 = arg_buffer[1];
//reading env and args
void* kont37715 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3761537825 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37715);
arg_buffer[2] = x3761537825;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37715))[0]);
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
void* _37973 = arg_buffer[1];
//reading env and args
void* kont37716 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3761637826 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37716);
arg_buffer[2] = x3761637826;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37716))[0]);
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
void* _37974 = arg_buffer[1];
//reading env and args
void* kont37717 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3761737827 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37717);
arg_buffer[2] = x3761737827;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37717))[0]);
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
void* _37975 = arg_buffer[1];
//reading env and args
void* kont37718 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3761837828 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37718);
arg_buffer[2] = x3761837828;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37718))[0]);
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
void* _37976 = arg_buffer[1];
//reading env and args
void* kont37719 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3761937829 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37719);
arg_buffer[2] = x3761937829;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37719))[0]);
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
void* _37977 = arg_buffer[1];
//reading env and args
void* kont37720 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3762037830 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37720);
arg_buffer[2] = x3762037830;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37720))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam37978_fptr() // lam37978 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env37979 = arg_buffer[1];
//reading env and args
void* a3762337834 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37721 = (decode_clo(env37979))[3];
//not do dummy comment
void* equal_u63 = (decode_clo(env37979))[2];
//not do dummy comment
void* a3762137831 = (decode_clo(env37979))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont37721;
arg_buffer[3] = a3762137831;
arg_buffer[4] = a3762337834;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam37978 = encode_clo(alloc_clo(lam37978_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _37982 = arg_buffer[1];
//reading env and args
void* kont37721 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar38906 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38906, "0", 10);
void* a3762137831 = encode_mpz(mpzvar38906);
mpz_t* mpzvar38907 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38907, "2", 10);
void* a3762237832 = encode_mpz(mpzvar38907);

//creating new closure instance
void** clo38909 = alloc_clo(lam37978_fptr, 3);

//setting env list
clo38909[1] = a3762137831;
clo38909[2] = equal_u63;
clo38909[3] = kont37721;
void* f3772237833 = encode_clo(clo38909);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3772237833;
arg_buffer[3] = x;
arg_buffer[4] = a3762237832;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam37983_fptr() // lam37983 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env37984 = arg_buffer[1];
//reading env and args
void* a3762637838 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env37984))[3];
//not do dummy comment
void* a3762437835 = (decode_clo(env37984))[2];
//not do dummy comment
void* kont37723 = (decode_clo(env37984))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont37723;
arg_buffer[3] = a3762437835;
arg_buffer[4] = a3762637838;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam37983 = encode_clo(alloc_clo(lam37983_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _37987 = arg_buffer[1];
//reading env and args
void* kont37723 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar38910 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38910, "1", 10);
void* a3762437835 = encode_mpz(mpzvar38910);
mpz_t* mpzvar38911 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38911, "2", 10);
void* a3762537836 = encode_mpz(mpzvar38911);

//creating new closure instance
void** clo38913 = alloc_clo(lam37983_fptr, 3);

//setting env list
clo38913[1] = kont37723;
clo38913[2] = a3762437835;
clo38913[3] = equal_u63;
void* f3772437837 = encode_clo(clo38913);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3772437837;
arg_buffer[3] = x;
arg_buffer[4] = a3762537836;
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
void* _37988 = arg_buffer[1];
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

void* kont3772537839 = prim_car(x);
void* x37840 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3772537839);
arg_buffer[2] = x37840;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3772537839))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam37991_fptr() // lam37991 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env37992 = arg_buffer[1];
//reading env and args
void* a3763237850 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37727 = (decode_clo(env37992))[3];
//not do dummy comment
void* x = (decode_clo(env37992))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env37992))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont37727;
arg_buffer[3] = x;
arg_buffer[4] = a3763237850;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam37991 = encode_clo(alloc_clo(lam37991_fptr, 0));

void* lam37993_fptr() // lam37993 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env37994 = arg_buffer[1];
//reading env and args
void* a3763037847 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env37994))[5];
//not do dummy comment
void* lst = (decode_clo(env37994))[4];
//not do dummy comment
void* kont37727 = (decode_clo(env37994))[3];
//not do dummy comment
void* x = (decode_clo(env37994))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env37994))[1];

//if-clause
bool if_guard38914 = is_true(a3763037847);
if(if_guard38914)
{
void* x3763137848 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37727);
arg_buffer[2] = x3763137848;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37727))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38916 = alloc_clo(lam37991_fptr, 3);

//setting env list
clo38916[1] = member_u63;
clo38916[2] = x;
clo38916[3] = kont37727;
void* f3772837849 = encode_clo(clo38916);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3772837849;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam37993 = encode_clo(alloc_clo(lam37993_fptr, 0));

void* lam37995_fptr() // lam37995 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env37996 = arg_buffer[1];
//reading env and args
void* a3762937845 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env37996))[6];
//not do dummy comment
void* lst = (decode_clo(env37996))[5];
//not do dummy comment
void* kont37727 = (decode_clo(env37996))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env37996))[3];
//not do dummy comment
void* x = (decode_clo(env37996))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env37996))[1];

//creating new closure instance
void** clo38918 = alloc_clo(lam37993_fptr, 5);

//setting env list
clo38918[1] = member_u63;
clo38918[2] = x;
clo38918[3] = kont37727;
clo38918[4] = lst;
clo38918[5] = cdr;
void* f3772937846 = encode_clo(clo38918);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3772937846;
arg_buffer[3] = a3762937845;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam37995 = encode_clo(alloc_clo(lam37995_fptr, 0));

void* lam37997_fptr() // lam37997 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env37998 = arg_buffer[1];
//reading env and args
void* a3762737842 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env37998))[7];
//not do dummy comment
void* lst = (decode_clo(env37998))[6];
//not do dummy comment
void* kont37727 = (decode_clo(env37998))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env37998))[4];
//not do dummy comment
void* x = (decode_clo(env37998))[3];
//not do dummy comment
void* car = (decode_clo(env37998))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env37998))[1];

//if-clause
bool if_guard38919 = is_true(a3762737842);
if(if_guard38919)
{
void* x3762837843 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37727);
arg_buffer[2] = x3762837843;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37727))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38921 = alloc_clo(lam37995_fptr, 6);

//setting env list
clo38921[1] = member_u63;
clo38921[2] = x;
clo38921[3] = equal_u63;
clo38921[4] = kont37727;
clo38921[5] = lst;
clo38921[6] = cdr;
void* f3773037844 = encode_clo(clo38921);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3773037844;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam37997 = encode_clo(alloc_clo(lam37997_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _37999 = arg_buffer[1];
//reading env and args
void* kont37727 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38923 = alloc_clo(lam37997_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo38923[1] = member_u63;
clo38923[2] = car;
clo38923[3] = x;
clo38923[4] = equal_u63;
clo38923[5] = kont37727;
clo38923[6] = lst;
clo38923[7] = cdr;
void* f3773137841 = encode_clo(clo38923);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3773137841;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam38000_fptr() // lam38000 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38001 = arg_buffer[1];
//reading env and args
void* a3763637858 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3763537856 = (decode_clo(env38001))[4];
//not do dummy comment
void* fun = (decode_clo(env38001))[3];
//not do dummy comment
void* kont37732 = (decode_clo(env38001))[2];
//not do dummy comment
void* foldl = (decode_clo(env38001))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont37732;
arg_buffer[3] = fun;
arg_buffer[4] = a3763537856;
arg_buffer[5] = a3763637858;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38000 = encode_clo(alloc_clo(lam38000_fptr, 0));

void* lam38002_fptr() // lam38002 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38003 = arg_buffer[1];
//reading env and args
void* a3763537856 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38003))[5];
//not do dummy comment
void* lst = (decode_clo(env38003))[4];
//not do dummy comment
void* fun = (decode_clo(env38003))[3];
//not do dummy comment
void* kont37732 = (decode_clo(env38003))[2];
//not do dummy comment
void* foldl = (decode_clo(env38003))[1];

//creating new closure instance
void** clo38925 = alloc_clo(lam38000_fptr, 4);

//setting env list
clo38925[1] = foldl;
clo38925[2] = kont37732;
clo38925[3] = fun;
clo38925[4] = a3763537856;
void* f3773337857 = encode_clo(clo38925);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3773337857;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38002 = encode_clo(alloc_clo(lam38002_fptr, 0));

void* lam38004_fptr() // lam38004 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38005 = arg_buffer[1];
//reading env and args
void* a3763437854 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38005))[6];
//not do dummy comment
void* lst = (decode_clo(env38005))[5];
//not do dummy comment
void* fun = (decode_clo(env38005))[4];
//not do dummy comment
void* foldl = (decode_clo(env38005))[3];
//not do dummy comment
void* acc = (decode_clo(env38005))[2];
//not do dummy comment
void* kont37732 = (decode_clo(env38005))[1];

//creating new closure instance
void** clo38927 = alloc_clo(lam38002_fptr, 5);

//setting env list
clo38927[1] = foldl;
clo38927[2] = kont37732;
clo38927[3] = fun;
clo38927[4] = lst;
clo38927[5] = cdr;
void* f3773437855 = encode_clo(clo38927);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3773437855;
arg_buffer[3] = a3763437854;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38004 = encode_clo(alloc_clo(lam38004_fptr, 0));

void* lam38006_fptr() // lam38006 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38007 = arg_buffer[1];
//reading env and args
void* a3763337852 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38007))[7];
//not do dummy comment
void* lst = (decode_clo(env38007))[6];
//not do dummy comment
void* fun = (decode_clo(env38007))[5];
//not do dummy comment
void* car = (decode_clo(env38007))[4];
//not do dummy comment
void* foldl = (decode_clo(env38007))[3];
//not do dummy comment
void* acc = (decode_clo(env38007))[2];
//not do dummy comment
void* kont37732 = (decode_clo(env38007))[1];

//if-clause
bool if_guard38928 = is_true(a3763337852);
if(if_guard38928)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37732);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37732))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38930 = alloc_clo(lam38004_fptr, 6);

//setting env list
clo38930[1] = kont37732;
clo38930[2] = acc;
clo38930[3] = foldl;
clo38930[4] = fun;
clo38930[5] = lst;
clo38930[6] = cdr;
void* f3773537853 = encode_clo(clo38930);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3773537853;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38006 = encode_clo(alloc_clo(lam38006_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38008 = arg_buffer[1];
//reading env and args
void* kont37732 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo38932 = alloc_clo(lam38006_fptr, 7);

//setting env list
clo38932[1] = kont37732;
clo38932[2] = acc;
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo38932[3] = foldl;
clo38932[4] = car;
clo38932[5] = fun;
clo38932[6] = lst;
clo38932[7] = cdr;
void* f3773637851 = encode_clo(clo38932);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3773637851;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam38009_fptr() // lam38009 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38010 = arg_buffer[1];
//reading env and args
void* a3764037866 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37737 = (decode_clo(env38010))[3];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38010))[2];
//not do dummy comment
void* a3763837862 = (decode_clo(env38010))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont37737;
arg_buffer[3] = a3763837862;
arg_buffer[4] = a3764037866;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38009 = encode_clo(alloc_clo(lam38009_fptr, 0));

void* lam38011_fptr() // lam38011 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38012 = arg_buffer[1];
//reading env and args
void* a3763937864 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37737 = (decode_clo(env38012))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38012))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38012))[3];
//not do dummy comment
void* a3763837862 = (decode_clo(env38012))[2];
//not do dummy comment
void* cons = (decode_clo(env38012))[1];

//creating new closure instance
void** clo38934 = alloc_clo(lam38009_fptr, 3);

//setting env list
clo38934[1] = a3763837862;
clo38934[2] = reverse_u45helper;
clo38934[3] = kont37737;
void* f3773837865 = encode_clo(clo38934);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3773837865;
arg_buffer[3] = a3763937864;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38011 = encode_clo(alloc_clo(lam38011_fptr, 0));

void* lam38013_fptr() // lam38013 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38014 = arg_buffer[1];
//reading env and args
void* a3763837862 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37737 = (decode_clo(env38014))[6];
//not do dummy comment
void* lst = (decode_clo(env38014))[5];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38014))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38014))[3];
//not do dummy comment
void* car = (decode_clo(env38014))[2];
//not do dummy comment
void* cons = (decode_clo(env38014))[1];

//creating new closure instance
void** clo38936 = alloc_clo(lam38011_fptr, 5);

//setting env list
clo38936[1] = cons;
clo38936[2] = a3763837862;
clo38936[3] = lst2;
clo38936[4] = reverse_u45helper;
clo38936[5] = kont37737;
void* f3773937863 = encode_clo(clo38936);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3773937863;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38013 = encode_clo(alloc_clo(lam38013_fptr, 0));

void* lam38015_fptr() // lam38015 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38016 = arg_buffer[1];
//reading env and args
void* a3763737860 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38016))[7];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38016))[6];
//not do dummy comment
void* lst2 = (decode_clo(env38016))[5];
//not do dummy comment
void* car = (decode_clo(env38016))[4];
//not do dummy comment
void* cons = (decode_clo(env38016))[3];
//not do dummy comment
void* kont37737 = (decode_clo(env38016))[2];
//not do dummy comment
void* cdr = (decode_clo(env38016))[1];

//if-clause
bool if_guard38937 = is_true(a3763737860);
if(if_guard38937)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37737);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37737))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo38939 = alloc_clo(lam38013_fptr, 6);

//setting env list
clo38939[1] = cons;
clo38939[2] = car;
clo38939[3] = lst2;
clo38939[4] = reverse_u45helper;
clo38939[5] = lst;
clo38939[6] = kont37737;
void* f3774037861 = encode_clo(clo38939);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3774037861;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38015 = encode_clo(alloc_clo(lam38015_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38017 = arg_buffer[1];
//reading env and args
void* kont37737 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38941 = alloc_clo(lam38015_fptr, 7);

//setting env list
clo38941[1] = cdr;
clo38941[2] = kont37737;
clo38941[3] = cons;
clo38941[4] = car;
clo38941[5] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo38941[6] = reverse_u45helper;
clo38941[7] = lst;
void* f3774137859 = encode_clo(clo38941);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3774137859;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam38018_fptr() // lam38018 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38019 = arg_buffer[1];
//reading env and args
void* a3764137868 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38019))[3];
//not do dummy comment
void* kont37742 = (decode_clo(env38019))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env38019))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont37742;
arg_buffer[3] = lst;
arg_buffer[4] = a3764137868;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38018 = encode_clo(alloc_clo(lam38018_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38020 = arg_buffer[1];
//reading env and args
void* kont37742 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo38943 = alloc_clo(lam38018_fptr, 3);

//setting env list
clo38943[1] = reverse_u45helper;
clo38943[2] = kont37742;
clo38943[3] = lst;
void* f3774337867 = encode_clo(clo38943);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3774337867;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam38021_fptr() // lam38021 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38022 = arg_buffer[1];
//reading env and args
void* x3764437873 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37744 = (decode_clo(env38022))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37744);
arg_buffer[2] = x3764437873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37744))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38021 = encode_clo(alloc_clo(lam38021_fptr, 0));

void* lam38023_fptr() // lam38023 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38024 = arg_buffer[1];
//reading env and args
void* a3764937882 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37744 = (decode_clo(env38024))[4];
//not do dummy comment
void* a3764537875 = (decode_clo(env38024))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38024))[2];
//not do dummy comment
void* a3764737878 = (decode_clo(env38024))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont37744;
arg_buffer[3] = a3764537875;
arg_buffer[4] = a3764737878;
arg_buffer[5] = a3764937882;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38023 = encode_clo(alloc_clo(lam38023_fptr, 0));

void* lam38025_fptr() // lam38025 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38026 = arg_buffer[1];
//reading env and args
void* a3764837880 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37744 = (decode_clo(env38026))[6];
//not do dummy comment
void* a3764537875 = (decode_clo(env38026))[5];
//not do dummy comment
void* a3764737878 = (decode_clo(env38026))[4];
//not do dummy comment
void* cons = (decode_clo(env38026))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38026))[2];
//not do dummy comment
void* lst2 = (decode_clo(env38026))[1];

//creating new closure instance
void** clo38945 = alloc_clo(lam38023_fptr, 4);

//setting env list
clo38945[1] = a3764737878;
clo38945[2] = take_u45helper;
clo38945[3] = a3764537875;
clo38945[4] = kont37744;
void* f3774637881 = encode_clo(clo38945);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3774637881;
arg_buffer[3] = a3764837880;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38025 = encode_clo(alloc_clo(lam38025_fptr, 0));

void* lam38027_fptr() // lam38027 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38028 = arg_buffer[1];
//reading env and args
void* a3764737878 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38028))[7];
//not do dummy comment
void* kont37744 = (decode_clo(env38028))[6];
//not do dummy comment
void* a3764537875 = (decode_clo(env38028))[5];
//not do dummy comment
void* car = (decode_clo(env38028))[4];
//not do dummy comment
void* cons = (decode_clo(env38028))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env38028))[2];
//not do dummy comment
void* lst2 = (decode_clo(env38028))[1];

//creating new closure instance
void** clo38947 = alloc_clo(lam38025_fptr, 6);

//setting env list
clo38947[1] = lst2;
clo38947[2] = take_u45helper;
clo38947[3] = cons;
clo38947[4] = a3764737878;
clo38947[5] = a3764537875;
clo38947[6] = kont37744;
void* f3774737879 = encode_clo(clo38947);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3774737879;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38027 = encode_clo(alloc_clo(lam38027_fptr, 0));

void* lam38030_fptr() // lam38030 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38031 = arg_buffer[1];
//reading env and args
void* a3764537875 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38031))[8];
//not do dummy comment
void* kont37744 = (decode_clo(env38031))[7];
//not do dummy comment
void* cons = (decode_clo(env38031))[6];
//not do dummy comment
void* _u45 = (decode_clo(env38031))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env38031))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38031))[3];
//not do dummy comment
void* n = (decode_clo(env38031))[2];
//not do dummy comment
void* car = (decode_clo(env38031))[1];
mpz_t* mpzvar38948 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38948, "1", 10);
void* a3764637876 = encode_mpz(mpzvar38948);

//creating new closure instance
void** clo38950 = alloc_clo(lam38027_fptr, 7);

//setting env list
clo38950[1] = lst2;
clo38950[2] = take_u45helper;
clo38950[3] = cons;
clo38950[4] = car;
clo38950[5] = a3764537875;
clo38950[6] = kont37744;
clo38950[7] = lst;
void* f3774837877 = encode_clo(clo38950);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3774837877;
arg_buffer[3] = n;
arg_buffer[4] = a3764637876;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38030 = encode_clo(alloc_clo(lam38030_fptr, 0));

void* lam38032_fptr() // lam38032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38033 = arg_buffer[1];
//reading env and args
void* a3764337871 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38033))[10];
//not do dummy comment
void* lst = (decode_clo(env38033))[9];
//not do dummy comment
void* cons = (decode_clo(env38033))[8];
//not do dummy comment
void* _u45 = (decode_clo(env38033))[7];
//not do dummy comment
void* kont37744 = (decode_clo(env38033))[6];
//not do dummy comment
void* reverse = (decode_clo(env38033))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env38033))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38033))[3];
//not do dummy comment
void* n = (decode_clo(env38033))[2];
//not do dummy comment
void* car = (decode_clo(env38033))[1];

//if-clause
bool if_guard38951 = is_true(a3764337871);
if(if_guard38951)
{

//creating new closure instance
void** clo38953 = alloc_clo(lam38021_fptr, 1);

//setting env list
clo38953[1] = kont37744;
void* f3774537872 = encode_clo(clo38953);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3774537872;
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
void** clo38955 = alloc_clo(lam38030_fptr, 8);

//setting env list
clo38955[1] = car;
clo38955[2] = n;
clo38955[3] = lst2;
clo38955[4] = take_u45helper;
clo38955[5] = _u45;
clo38955[6] = cons;
clo38955[7] = kont37744;
clo38955[8] = lst;
void* f3774937874 = encode_clo(clo38955);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3774937874;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38032 = encode_clo(alloc_clo(lam38032_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38035 = arg_buffer[1];
//reading env and args
void* kont37744 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar38956 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38956, "0", 10);
void* a3764237869 = encode_mpz(mpzvar38956);

//creating new closure instance
void** clo38958 = alloc_clo(lam38032_fptr, 10);

//setting env list
clo38958[1] = car;
clo38958[2] = n;
clo38958[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo38958[4] = take_u45helper;
clo38958[5] = reverse;
clo38958[6] = kont37744;
clo38958[7] = _u45;
clo38958[8] = cons;
clo38958[9] = lst;
clo38958[10] = cdr;
void* f3775037870 = encode_clo(clo38958);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3775037870;
arg_buffer[3] = n;
arg_buffer[4] = a3764237869;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam38036_fptr() // lam38036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38037 = arg_buffer[1];
//reading env and args
void* a3765037884 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38037))[4];
//not do dummy comment
void* take_u45helper = (decode_clo(env38037))[3];
//not do dummy comment
void* n = (decode_clo(env38037))[2];
//not do dummy comment
void* kont37751 = (decode_clo(env38037))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont37751;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3765037884;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38036 = encode_clo(alloc_clo(lam38036_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38038 = arg_buffer[1];
//reading env and args
void* kont37751 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38960 = alloc_clo(lam38036_fptr, 4);

//setting env list
clo38960[1] = kont37751;
clo38960[2] = n;
clo38960[3] = take_u45helper;
clo38960[4] = lst;
void* f3775237883 = encode_clo(clo38960);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3775237883;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam38040_fptr() // lam38040 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38041 = arg_buffer[1];
//reading env and args
void* a3765537892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37753 = (decode_clo(env38041))[3];
//not do dummy comment
void* a3765337888 = (decode_clo(env38041))[2];
//not do dummy comment
void* _u43 = (decode_clo(env38041))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont37753;
arg_buffer[3] = a3765337888;
arg_buffer[4] = a3765537892;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38040 = encode_clo(alloc_clo(lam38040_fptr, 0));

void* lam38042_fptr() // lam38042 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38043 = arg_buffer[1];
//reading env and args
void* a3765437890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37753 = (decode_clo(env38043))[4];
//not do dummy comment
void* length = (decode_clo(env38043))[3];
//not do dummy comment
void* a3765337888 = (decode_clo(env38043))[2];
//not do dummy comment
void* _u43 = (decode_clo(env38043))[1];

//creating new closure instance
void** clo38962 = alloc_clo(lam38040_fptr, 3);

//setting env list
clo38962[1] = _u43;
clo38962[2] = a3765337888;
clo38962[3] = kont37753;
void* f3775437891 = encode_clo(clo38962);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3775437891;
arg_buffer[3] = a3765437890;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38042 = encode_clo(alloc_clo(lam38042_fptr, 0));

void* lam38045_fptr() // lam38045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38046 = arg_buffer[1];
//reading env and args
void* a3765137886 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38046))[5];
//not do dummy comment
void* length = (decode_clo(env38046))[4];
//not do dummy comment
void* _u43 = (decode_clo(env38046))[3];
//not do dummy comment
void* cdr = (decode_clo(env38046))[2];
//not do dummy comment
void* kont37753 = (decode_clo(env38046))[1];

//if-clause
bool if_guard38963 = is_true(a3765137886);
if(if_guard38963)
{
mpz_t* mpzvar38964 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38964, "0", 10);
void* x3765237887 = encode_mpz(mpzvar38964);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37753);
arg_buffer[2] = x3765237887;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37753))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar38965 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar38965, "1", 10);
void* a3765337888 = encode_mpz(mpzvar38965);

//creating new closure instance
void** clo38967 = alloc_clo(lam38042_fptr, 4);

//setting env list
clo38967[1] = _u43;
clo38967[2] = a3765337888;
clo38967[3] = length;
clo38967[4] = kont37753;
void* f3775537889 = encode_clo(clo38967);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3775537889;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38045 = encode_clo(alloc_clo(lam38045_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38047 = arg_buffer[1];
//reading env and args
void* kont37753 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo38969 = alloc_clo(lam38045_fptr, 5);

//setting env list
clo38969[1] = kont37753;
clo38969[2] = cdr;
clo38969[3] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo38969[4] = length;
clo38969[5] = lst;
void* f3775637885 = encode_clo(clo38969);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3775637885;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam38048_fptr() // lam38048 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38049 = arg_buffer[1];
//reading env and args
void* x3765737896 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37757 = (decode_clo(env38049))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37757);
arg_buffer[2] = x3765737896;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37757))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38048 = encode_clo(alloc_clo(lam38048_fptr, 0));

void* lam38050_fptr() // lam38050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38051 = arg_buffer[1];
//reading env and args
void* a3766137904 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3765937900 = (decode_clo(env38051))[3];
//not do dummy comment
void* kont37757 = (decode_clo(env38051))[2];
//not do dummy comment
void* cons = (decode_clo(env38051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont37757;
arg_buffer[3] = a3765937900;
arg_buffer[4] = a3766137904;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38050 = encode_clo(alloc_clo(lam38050_fptr, 0));

void* lam38052_fptr() // lam38052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38053 = arg_buffer[1];
//reading env and args
void* a3766037902 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3765937900 = (decode_clo(env38053))[5];
//not do dummy comment
void* kont37757 = (decode_clo(env38053))[4];
//not do dummy comment
void* map = (decode_clo(env38053))[3];
//not do dummy comment
void* proc = (decode_clo(env38053))[2];
//not do dummy comment
void* cons = (decode_clo(env38053))[1];

//creating new closure instance
void** clo38971 = alloc_clo(lam38050_fptr, 3);

//setting env list
clo38971[1] = cons;
clo38971[2] = kont37757;
clo38971[3] = a3765937900;
void* f3775937903 = encode_clo(clo38971);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3775937903;
arg_buffer[3] = proc;
arg_buffer[4] = a3766037902;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38052 = encode_clo(alloc_clo(lam38052_fptr, 0));

void* lam38054_fptr() // lam38054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38055 = arg_buffer[1];
//reading env and args
void* a3765937900 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38055))[6];
//not do dummy comment
void* map = (decode_clo(env38055))[5];
//not do dummy comment
void* proc = (decode_clo(env38055))[4];
//not do dummy comment
void* cons = (decode_clo(env38055))[3];
//not do dummy comment
void* lst = (decode_clo(env38055))[2];
//not do dummy comment
void* kont37757 = (decode_clo(env38055))[1];

//creating new closure instance
void** clo38973 = alloc_clo(lam38052_fptr, 5);

//setting env list
clo38973[1] = cons;
clo38973[2] = proc;
clo38973[3] = map;
clo38973[4] = kont37757;
clo38973[5] = a3765937900;
void* f3776037901 = encode_clo(clo38973);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3776037901;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38054 = encode_clo(alloc_clo(lam38054_fptr, 0));

void* lam38056_fptr() // lam38056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38057 = arg_buffer[1];
//reading env and args
void* a3765837898 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38057))[6];
//not do dummy comment
void* map = (decode_clo(env38057))[5];
//not do dummy comment
void* proc = (decode_clo(env38057))[4];
//not do dummy comment
void* cons = (decode_clo(env38057))[3];
//not do dummy comment
void* lst = (decode_clo(env38057))[2];
//not do dummy comment
void* kont37757 = (decode_clo(env38057))[1];

//creating new closure instance
void** clo38975 = alloc_clo(lam38054_fptr, 6);

//setting env list
clo38975[1] = kont37757;
clo38975[2] = lst;
clo38975[3] = cons;
clo38975[4] = proc;
clo38975[5] = map;
clo38975[6] = cdr;
void* f3776137899 = encode_clo(clo38975);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3776137899;
arg_buffer[3] = a3765837898;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38056 = encode_clo(alloc_clo(lam38056_fptr, 0));

void* lam38058_fptr() // lam38058 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38059 = arg_buffer[1];
//reading env and args
void* a3765637894 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* map = (decode_clo(env38059))[8];
//not do dummy comment
void* proc = (decode_clo(env38059))[7];
//not do dummy comment
void* car = (decode_clo(env38059))[6];
//not do dummy comment
void* cons = (decode_clo(env38059))[5];
//not do dummy comment
void* list = (decode_clo(env38059))[4];
//not do dummy comment
void* cdr = (decode_clo(env38059))[3];
//not do dummy comment
void* lst = (decode_clo(env38059))[2];
//not do dummy comment
void* kont37757 = (decode_clo(env38059))[1];

//if-clause
bool if_guard38976 = is_true(a3765637894);
if(if_guard38976)
{

//creating new closure instance
void** clo38978 = alloc_clo(lam38048_fptr, 1);

//setting env list
clo38978[1] = kont37757;
void* f3775837895 = encode_clo(clo38978);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3775837895;
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
void** clo38980 = alloc_clo(lam38056_fptr, 6);

//setting env list
clo38980[1] = kont37757;
clo38980[2] = lst;
clo38980[3] = cons;
clo38980[4] = proc;
clo38980[5] = map;
clo38980[6] = cdr;
void* f3776237897 = encode_clo(clo38980);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3776237897;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38058 = encode_clo(alloc_clo(lam38058_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38060 = arg_buffer[1];
//reading env and args
void* kont37757 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo38982 = alloc_clo(lam38058_fptr, 8);

//setting env list
clo38982[1] = kont37757;
clo38982[2] = lst;
clo38982[3] = cdr;
clo38982[4] = list;
clo38982[5] = cons;
clo38982[6] = car;
clo38982[7] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo38982[8] = map;
void* f3776337893 = encode_clo(clo38982);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3776337893;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam38061_fptr() // lam38061 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38062 = arg_buffer[1];
//reading env and args
void* x3766337908 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37764 = (decode_clo(env38062))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37764);
arg_buffer[2] = x3766337908;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37764))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38061 = encode_clo(alloc_clo(lam38061_fptr, 0));

void* lam38063_fptr() // lam38063 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38064 = arg_buffer[1];
//reading env and args
void* a3766837918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3766637914 = (decode_clo(env38064))[3];
//not do dummy comment
void* kont37764 = (decode_clo(env38064))[2];
//not do dummy comment
void* cons = (decode_clo(env38064))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont37764;
arg_buffer[3] = a3766637914;
arg_buffer[4] = a3766837918;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38063 = encode_clo(alloc_clo(lam38063_fptr, 0));

void* lam38065_fptr() // lam38065 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38066 = arg_buffer[1];
//reading env and args
void* a3766737916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3766637914 = (decode_clo(env38066))[5];
//not do dummy comment
void* op = (decode_clo(env38066))[4];
//not do dummy comment
void* kont37764 = (decode_clo(env38066))[3];
//not do dummy comment
void* filter = (decode_clo(env38066))[2];
//not do dummy comment
void* cons = (decode_clo(env38066))[1];

//creating new closure instance
void** clo38984 = alloc_clo(lam38063_fptr, 3);

//setting env list
clo38984[1] = cons;
clo38984[2] = kont37764;
clo38984[3] = a3766637914;
void* f3776637917 = encode_clo(clo38984);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3776637917;
arg_buffer[3] = op;
arg_buffer[4] = a3766737916;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38065 = encode_clo(alloc_clo(lam38065_fptr, 0));

void* lam38067_fptr() // lam38067 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38068 = arg_buffer[1];
//reading env and args
void* a3766637914 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38068))[6];
//not do dummy comment
void* lst = (decode_clo(env38068))[5];
//not do dummy comment
void* op = (decode_clo(env38068))[4];
//not do dummy comment
void* kont37764 = (decode_clo(env38068))[3];
//not do dummy comment
void* filter = (decode_clo(env38068))[2];
//not do dummy comment
void* cons = (decode_clo(env38068))[1];

//creating new closure instance
void** clo38986 = alloc_clo(lam38065_fptr, 5);

//setting env list
clo38986[1] = cons;
clo38986[2] = filter;
clo38986[3] = kont37764;
clo38986[4] = op;
clo38986[5] = a3766637914;
void* f3776737915 = encode_clo(clo38986);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3776737915;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38067 = encode_clo(alloc_clo(lam38067_fptr, 0));

void* lam38069_fptr() // lam38069 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38070 = arg_buffer[1];
//reading env and args
void* a3766937920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env38070))[3];
//not do dummy comment
void* kont37764 = (decode_clo(env38070))[2];
//not do dummy comment
void* filter = (decode_clo(env38070))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont37764;
arg_buffer[3] = op;
arg_buffer[4] = a3766937920;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38069 = encode_clo(alloc_clo(lam38069_fptr, 0));

void* lam38071_fptr() // lam38071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38072 = arg_buffer[1];
//reading env and args
void* a3766537912 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38072))[7];
//not do dummy comment
void* lst = (decode_clo(env38072))[6];
//not do dummy comment
void* op = (decode_clo(env38072))[5];
//not do dummy comment
void* kont37764 = (decode_clo(env38072))[4];
//not do dummy comment
void* cons = (decode_clo(env38072))[3];
//not do dummy comment
void* filter = (decode_clo(env38072))[2];
//not do dummy comment
void* car = (decode_clo(env38072))[1];

//if-clause
bool if_guard38987 = is_true(a3766537912);
if(if_guard38987)
{

//creating new closure instance
void** clo38989 = alloc_clo(lam38067_fptr, 6);

//setting env list
clo38989[1] = cons;
clo38989[2] = filter;
clo38989[3] = kont37764;
clo38989[4] = op;
clo38989[5] = lst;
clo38989[6] = cdr;
void* f3776837913 = encode_clo(clo38989);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3776837913;
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
void** clo38991 = alloc_clo(lam38069_fptr, 3);

//setting env list
clo38991[1] = filter;
clo38991[2] = kont37764;
clo38991[3] = op;
void* f3776937919 = encode_clo(clo38991);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3776937919;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38071 = encode_clo(alloc_clo(lam38071_fptr, 0));

void* lam38073_fptr() // lam38073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38074 = arg_buffer[1];
//reading env and args
void* a3766437910 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38074))[7];
//not do dummy comment
void* lst = (decode_clo(env38074))[6];
//not do dummy comment
void* op = (decode_clo(env38074))[5];
//not do dummy comment
void* kont37764 = (decode_clo(env38074))[4];
//not do dummy comment
void* cons = (decode_clo(env38074))[3];
//not do dummy comment
void* filter = (decode_clo(env38074))[2];
//not do dummy comment
void* car = (decode_clo(env38074))[1];

//creating new closure instance
void** clo38993 = alloc_clo(lam38071_fptr, 7);

//setting env list
clo38993[1] = car;
clo38993[2] = filter;
clo38993[3] = cons;
clo38993[4] = kont37764;
clo38993[5] = op;
clo38993[6] = lst;
clo38993[7] = cdr;
void* f3777037911 = encode_clo(clo38993);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3777037911;
arg_buffer[3] = a3766437910;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38073 = encode_clo(alloc_clo(lam38073_fptr, 0));

void* lam38075_fptr() // lam38075 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38076 = arg_buffer[1];
//reading env and args
void* a3766237906 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env38076))[8];
//not do dummy comment
void* op = (decode_clo(env38076))[7];
//not do dummy comment
void* kont37764 = (decode_clo(env38076))[6];
//not do dummy comment
void* cons = (decode_clo(env38076))[5];
//not do dummy comment
void* list = (decode_clo(env38076))[4];
//not do dummy comment
void* cdr = (decode_clo(env38076))[3];
//not do dummy comment
void* filter = (decode_clo(env38076))[2];
//not do dummy comment
void* car = (decode_clo(env38076))[1];

//if-clause
bool if_guard38994 = is_true(a3766237906);
if(if_guard38994)
{

//creating new closure instance
void** clo38996 = alloc_clo(lam38061_fptr, 1);

//setting env list
clo38996[1] = kont37764;
void* f3776537907 = encode_clo(clo38996);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3776537907;
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
void** clo38998 = alloc_clo(lam38073_fptr, 7);

//setting env list
clo38998[1] = car;
clo38998[2] = filter;
clo38998[3] = cons;
clo38998[4] = kont37764;
clo38998[5] = op;
clo38998[6] = lst;
clo38998[7] = cdr;
void* f3777137909 = encode_clo(clo38998);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3777137909;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38075 = encode_clo(alloc_clo(lam38075_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38077 = arg_buffer[1];
//reading env and args
void* kont37764 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39000 = alloc_clo(lam38075_fptr, 8);

//setting env list
clo39000[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo39000[2] = filter;
clo39000[3] = cdr;
clo39000[4] = list;
clo39000[5] = cons;
clo39000[6] = kont37764;
clo39000[7] = op;
clo39000[8] = lst;
void* f3777237905 = encode_clo(clo39000);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3777237905;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam38078_fptr() // lam38078 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38079 = arg_buffer[1];
//reading env and args
void* a3767437928 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3767237925 = (decode_clo(env38079))[3];
//not do dummy comment
void* kont37773 = (decode_clo(env38079))[2];
//not do dummy comment
void* drop = (decode_clo(env38079))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont37773;
arg_buffer[3] = a3767237925;
arg_buffer[4] = a3767437928;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38078 = encode_clo(alloc_clo(lam38078_fptr, 0));

void* lam38081_fptr() // lam38081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38082 = arg_buffer[1];
//reading env and args
void* a3767237925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* n = (decode_clo(env38082))[4];
//not do dummy comment
void* _u45 = (decode_clo(env38082))[3];
//not do dummy comment
void* kont37773 = (decode_clo(env38082))[2];
//not do dummy comment
void* drop = (decode_clo(env38082))[1];
mpz_t* mpzvar39001 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39001, "1", 10);
void* a3767337926 = encode_mpz(mpzvar39001);

//creating new closure instance
void** clo39003 = alloc_clo(lam38078_fptr, 3);

//setting env list
clo39003[1] = drop;
clo39003[2] = kont37773;
clo39003[3] = a3767237925;
void* f3777437927 = encode_clo(clo39003);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3777437927;
arg_buffer[3] = n;
arg_buffer[4] = a3767337926;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38081 = encode_clo(alloc_clo(lam38081_fptr, 0));

void* lam38083_fptr() // lam38083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38084 = arg_buffer[1];
//reading env and args
void* a3767137923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38084))[6];
//not do dummy comment
void* n = (decode_clo(env38084))[5];
//not do dummy comment
void* _u45 = (decode_clo(env38084))[4];
//not do dummy comment
void* lst = (decode_clo(env38084))[3];
//not do dummy comment
void* kont37773 = (decode_clo(env38084))[2];
//not do dummy comment
void* drop = (decode_clo(env38084))[1];

//if-clause
bool if_guard39004 = is_true(a3767137923);
if(if_guard39004)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37773);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37773))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39006 = alloc_clo(lam38081_fptr, 4);

//setting env list
clo39006[1] = drop;
clo39006[2] = kont37773;
clo39006[3] = _u45;
clo39006[4] = n;
void* f3777537924 = encode_clo(clo39006);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3777537924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38083 = encode_clo(alloc_clo(lam38083_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38086 = arg_buffer[1];
//reading env and args
void* kont37773 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar39007 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39007, "0", 10);
void* a3767037921 = encode_mpz(mpzvar39007);

//creating new closure instance
void** clo39009 = alloc_clo(lam38083_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo39009[1] = drop;
clo39009[2] = kont37773;
clo39009[3] = lst;
clo39009[4] = _u45;
clo39009[5] = n;
clo39009[6] = cdr;
void* f3777637922 = encode_clo(clo39009);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3777637922;
arg_buffer[3] = n;
arg_buffer[4] = a3767037921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam38087_fptr() // lam38087 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38088 = arg_buffer[1];
//reading env and args
void* a3767837936 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3767637932 = (decode_clo(env38088))[3];
//not do dummy comment
void* kont37777 = (decode_clo(env38088))[2];
//not do dummy comment
void* proc = (decode_clo(env38088))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont37777;
arg_buffer[3] = a3767637932;
arg_buffer[4] = a3767837936;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38087 = encode_clo(alloc_clo(lam38087_fptr, 0));

void* lam38089_fptr() // lam38089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38090 = arg_buffer[1];
//reading env and args
void* a3767737934 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3767637932 = (decode_clo(env38090))[5];
//not do dummy comment
void* foldr = (decode_clo(env38090))[4];
//not do dummy comment
void* kont37777 = (decode_clo(env38090))[3];
//not do dummy comment
void* proc = (decode_clo(env38090))[2];
//not do dummy comment
void* acc = (decode_clo(env38090))[1];

//creating new closure instance
void** clo39011 = alloc_clo(lam38087_fptr, 3);

//setting env list
clo39011[1] = proc;
clo39011[2] = kont37777;
clo39011[3] = a3767637932;
void* f3777837935 = encode_clo(clo39011);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3777837935;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3767737934;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38089 = encode_clo(alloc_clo(lam38089_fptr, 0));

void* lam38091_fptr() // lam38091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38092 = arg_buffer[1];
//reading env and args
void* a3767637932 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38092))[6];
//not do dummy comment
void* kont37777 = (decode_clo(env38092))[5];
//not do dummy comment
void* foldr = (decode_clo(env38092))[4];
//not do dummy comment
void* lst = (decode_clo(env38092))[3];
//not do dummy comment
void* proc = (decode_clo(env38092))[2];
//not do dummy comment
void* acc = (decode_clo(env38092))[1];

//creating new closure instance
void** clo39013 = alloc_clo(lam38089_fptr, 5);

//setting env list
clo39013[1] = acc;
clo39013[2] = proc;
clo39013[3] = kont37777;
clo39013[4] = foldr;
clo39013[5] = a3767637932;
void* f3777937933 = encode_clo(clo39013);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3777937933;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38091 = encode_clo(alloc_clo(lam38091_fptr, 0));

void* lam38093_fptr() // lam38093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38094 = arg_buffer[1];
//reading env and args
void* a3767537930 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38094))[7];
//not do dummy comment
void* kont37777 = (decode_clo(env38094))[6];
//not do dummy comment
void* car = (decode_clo(env38094))[5];
//not do dummy comment
void* foldr = (decode_clo(env38094))[4];
//not do dummy comment
void* lst = (decode_clo(env38094))[3];
//not do dummy comment
void* proc = (decode_clo(env38094))[2];
//not do dummy comment
void* acc = (decode_clo(env38094))[1];

//if-clause
bool if_guard39014 = is_true(a3767537930);
if(if_guard39014)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37777);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37777))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39016 = alloc_clo(lam38091_fptr, 6);

//setting env list
clo39016[1] = acc;
clo39016[2] = proc;
clo39016[3] = lst;
clo39016[4] = foldr;
clo39016[5] = kont37777;
clo39016[6] = cdr;
void* f3778037931 = encode_clo(clo39016);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3778037931;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38093 = encode_clo(alloc_clo(lam38093_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38095 = arg_buffer[1];
//reading env and args
void* kont37777 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo39018 = alloc_clo(lam38093_fptr, 7);

//setting env list
clo39018[1] = acc;
clo39018[2] = proc;
clo39018[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo39018[4] = foldr;
clo39018[5] = car;
clo39018[6] = kont37777;
clo39018[7] = cdr;
void* f3778137929 = encode_clo(clo39018);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3778137929;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam38096_fptr() // lam38096 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38097 = arg_buffer[1];
//reading env and args
void* a3768237944 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3768037940 = (decode_clo(env38097))[3];
//not do dummy comment
void* kont37782 = (decode_clo(env38097))[2];
//not do dummy comment
void* cons = (decode_clo(env38097))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont37782;
arg_buffer[3] = a3768037940;
arg_buffer[4] = a3768237944;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38096 = encode_clo(alloc_clo(lam38096_fptr, 0));

void* lam38098_fptr() // lam38098 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38099 = arg_buffer[1];
//reading env and args
void* a3768137942 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* append = (decode_clo(env38099))[5];
//not do dummy comment
void* a3768037940 = (decode_clo(env38099))[4];
//not do dummy comment
void* lst2 = (decode_clo(env38099))[3];
//not do dummy comment
void* kont37782 = (decode_clo(env38099))[2];
//not do dummy comment
void* cons = (decode_clo(env38099))[1];

//creating new closure instance
void** clo39020 = alloc_clo(lam38096_fptr, 3);

//setting env list
clo39020[1] = cons;
clo39020[2] = kont37782;
clo39020[3] = a3768037940;
void* f3778337943 = encode_clo(clo39020);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3778337943;
arg_buffer[3] = a3768137942;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38098 = encode_clo(alloc_clo(lam38098_fptr, 0));

void* lam38100_fptr() // lam38100 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38101 = arg_buffer[1];
//reading env and args
void* a3768037940 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38101))[6];
//not do dummy comment
void* append = (decode_clo(env38101))[5];
//not do dummy comment
void* lst2 = (decode_clo(env38101))[4];
//not do dummy comment
void* cons = (decode_clo(env38101))[3];
//not do dummy comment
void* lst1 = (decode_clo(env38101))[2];
//not do dummy comment
void* kont37782 = (decode_clo(env38101))[1];

//creating new closure instance
void** clo39022 = alloc_clo(lam38098_fptr, 5);

//setting env list
clo39022[1] = cons;
clo39022[2] = kont37782;
clo39022[3] = lst2;
clo39022[4] = a3768037940;
clo39022[5] = append;
void* f3778437941 = encode_clo(clo39022);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3778437941;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38100 = encode_clo(alloc_clo(lam38100_fptr, 0));

void* lam38102_fptr() // lam38102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38103 = arg_buffer[1];
//reading env and args
void* a3767937938 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env38103))[7];
//not do dummy comment
void* append = (decode_clo(env38103))[6];
//not do dummy comment
void* lst2 = (decode_clo(env38103))[5];
//not do dummy comment
void* cons = (decode_clo(env38103))[4];
//not do dummy comment
void* lst1 = (decode_clo(env38103))[3];
//not do dummy comment
void* car = (decode_clo(env38103))[2];
//not do dummy comment
void* kont37782 = (decode_clo(env38103))[1];

//if-clause
bool if_guard39023 = is_true(a3767937938);
if(if_guard39023)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37782);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37782))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo39025 = alloc_clo(lam38100_fptr, 6);

//setting env list
clo39025[1] = kont37782;
clo39025[2] = lst1;
clo39025[3] = cons;
clo39025[4] = lst2;
clo39025[5] = append;
clo39025[6] = cdr;
void* f3778537939 = encode_clo(clo39025);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3778537939;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam38102 = encode_clo(alloc_clo(lam38102_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38104 = arg_buffer[1];
//reading env and args
void* kont37782 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo39027 = alloc_clo(lam38102_fptr, 7);

//setting env list
clo39027[1] = kont37782;
clo39027[2] = car;
clo39027[3] = lst1;
clo39027[4] = cons;
clo39027[5] = lst2;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo39027[6] = append;
clo39027[7] = cdr;
void* f3778637937 = encode_clo(clo39027);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3778637937;
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
void* _38105 = arg_buffer[1];
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

void* kont3778737945 = prim_car(lst);
void* lst37946 = prim_cdr(lst);
void* x3768337947 = apply_prim_hash(lst37946);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3778737945);
arg_buffer[2] = x3768337947;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3778737945))[0]);
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
void* _38106 = arg_buffer[1];
//reading env and args
void* kont37789 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3768437948 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37789);
arg_buffer[2] = x3768437948;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37789))[0]);
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
void* _38107 = arg_buffer[1];
//reading env and args
void* kont37790 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3768537949 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37790);
arg_buffer[2] = x3768537949;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37790))[0]);
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
void* _38108 = arg_buffer[1];
//reading env and args
void* kont37791 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3768637950 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37791);
arg_buffer[2] = x3768637950;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37791))[0]);
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
void* _38109 = arg_buffer[1];
//reading env and args
void* kont37792 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3768737951 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37792);
arg_buffer[2] = x3768737951;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37792))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam38110_fptr() // lam38110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38111 = arg_buffer[1];
//reading env and args
void* a3769437959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37793 = (decode_clo(env38111))[2];
//not do dummy comment
void* hash_u45count = (decode_clo(env38111))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash_u45count);
arg_buffer[2] = kont37793;
arg_buffer[3] = a3769437959;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash_u45count))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38110 = encode_clo(alloc_clo(lam38110_fptr, 0));

void* call_fptr() // call 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38118 = arg_buffer[1];
//reading env and args
void* kont37793 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar39028 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39028, "100", 10);
void* a3768837952 = encode_mpz(mpzvar39028);
mpz_t* mpzvar39029 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39029, "80", 10);
void* a3768937953 = encode_mpz(mpzvar39029);
mpz_t* mpzvar39030 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39030, "10", 10);
void* a3769037954 = encode_mpz(mpzvar39030);
mpz_t* mpzvar39031 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39031, "2", 10);
void* a3769137955 = encode_mpz(mpzvar39031);
mpz_t* mpzvar39032 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39032, "25", 10);
void* a3769237956 = encode_mpz(mpzvar39032);
mpz_t* mpzvar39033 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar39033, "30", 10);
void* a3769337957 = encode_mpz(mpzvar39033);

//creating new closure instance
void** clo39035 = alloc_clo(lam38110_fptr, 2);

//setting env list
clo39035[1] = hash_u45count;
clo39035[2] = kont37793;
void* f3779437958 = encode_clo(clo39035);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(hash);
arg_buffer[2] = f3779437958;
arg_buffer[3] = a3768837952;
arg_buffer[4] = a3768937953;
arg_buffer[5] = a3769037954;
arg_buffer[6] = a3769137955;
arg_buffer[7] = a3769237956;
arg_buffer[8] = a3769337957;
arg_buffer[0] = reinterpret_cast<void*>(8);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(hash))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* call = encode_clo(alloc_clo(call_fptr, 0));

void* lam38119_fptr() // lam38119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env38120 = arg_buffer[1];
//reading env and args
void* x3769537961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont37795 = (decode_clo(env38120))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont37795);
arg_buffer[2] = x3769537961;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont37795))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam38119 = encode_clo(alloc_clo(lam38119_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _38121 = arg_buffer[1];
//reading env and args
void* kont37795 = arg_buffer[2];
//Dummy comment

//creating new closure instance
void** clo39037 = alloc_clo(lam38119_fptr, 1);

//setting env list
clo39037[1] = kont37795;
void* f3779637960 = encode_clo(clo39037);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(call);
arg_buffer[2] = f3779637960;
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

