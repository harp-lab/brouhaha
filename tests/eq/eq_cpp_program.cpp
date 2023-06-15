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
void* _31003 = arg_buffer[1];
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

void* kont3074230842 = prim_car(lst);
void* lst30843 = prim_cdr(lst);
void* x3065430844 = apply_prim__u43(lst30843);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3074230842);
arg_buffer[2] = x3065430844;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3074230842))[0]);
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
void* _31004 = arg_buffer[1];
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

void* kont3074430845 = prim_car(lst);
void* lst30846 = prim_cdr(lst);
void* x3065530847 = apply_prim__u45(lst30846);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3074430845);
arg_buffer[2] = x3065530847;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3074430845))[0]);
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
void* _31005 = arg_buffer[1];
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

void* kont3074630848 = prim_car(lst);
void* lst30849 = prim_cdr(lst);
void* x3065630850 = apply_prim__u42(lst30849);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3074630848);
arg_buffer[2] = x3065630850;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3074630848))[0]);
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
void* _31006 = arg_buffer[1];
//reading env and args
void* kont30748 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3065730851 = prim_modulo(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30748);
arg_buffer[2] = x3065730851;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30748))[0]);
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
void* _31007 = arg_buffer[1];
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

void* kont3074930852 = prim_car(lst);
void* lst30853 = prim_cdr(lst);
void* x3065830854 = apply_prim__u47(lst30853);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3074930852);
arg_buffer[2] = x3065830854;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3074930852))[0]);
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
void* _31008 = arg_buffer[1];
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

void* kont3075130855 = prim_car(lst);
void* lst30856 = prim_cdr(lst);
void* x3065930857 = apply_prim__u61(lst30856);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3075130855);
arg_buffer[2] = x3065930857;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3075130855))[0]);
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
void* _31009 = arg_buffer[1];
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

void* kont3075330858 = prim_car(lst);
void* lst30859 = prim_cdr(lst);
void* x3066030860 = apply_prim__u62(lst30859);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3075330858);
arg_buffer[2] = x3066030860;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3075330858))[0]);
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
void* _31010 = arg_buffer[1];
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

void* kont3075530861 = prim_car(lst);
void* lst30862 = prim_cdr(lst);
void* x3066130863 = apply_prim__u60(lst30862);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3075530861);
arg_buffer[2] = x3066130863;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3075530861))[0]);
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
void* _31011 = arg_buffer[1];
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

void* kont3075730864 = prim_car(lst);
void* lst30865 = prim_cdr(lst);
void* x3066230866 = apply_prim__u60_u61(lst30865);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3075730864);
arg_buffer[2] = x3066230866;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3075730864))[0]);
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
void* _31012 = arg_buffer[1];
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

void* kont3075930867 = prim_car(lst);
void* lst30868 = prim_cdr(lst);
void* x3066330869 = apply_prim__u62_u61(lst30868);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3075930867);
arg_buffer[2] = x3066330869;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3075930867))[0]);
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
void* _31013 = arg_buffer[1];
//reading env and args
void* kont30761 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
void* x3066430870 = prim_null_u63(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30761);
arg_buffer[2] = x3066430870;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30761))[0]);
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
void* _31014 = arg_buffer[1];
//reading env and args
void* kont30762 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3066530871 = prim_equal_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30762);
arg_buffer[2] = x3066530871;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30762))[0]);
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
void* _31015 = arg_buffer[1];
//reading env and args
void* kont30763 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment
void* x3066630872 = prim_eq_u63(x, y);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30763);
arg_buffer[2] = x3066630872;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30763))[0]);
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
void* _31016 = arg_buffer[1];
//reading env and args
void* kont30764 = arg_buffer[2];
void* a = arg_buffer[3];
void* b = arg_buffer[4];
//Dummy comment
void* x3066730873 = prim_cons(a, b);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30764);
arg_buffer[2] = x3066730873;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30764))[0]);
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
void* _31017 = arg_buffer[1];
//reading env and args
void* kont30765 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3066830874 = prim_car(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30765);
arg_buffer[2] = x3066830874;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30765))[0]);
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
void* _31018 = arg_buffer[1];
//reading env and args
void* kont30766 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment
void* x3066930875 = prim_cdr(lst);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30766);
arg_buffer[2] = x3066930875;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30766))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void* lam31019_fptr() // lam31019 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31020 = arg_buffer[1];
//reading env and args
void* a3067230879 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env31020))[3];
//not do dummy comment
void* a3067030876 = (decode_clo(env31020))[2];
//not do dummy comment
void* kont30767 = (decode_clo(env31020))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30767;
arg_buffer[3] = a3067030876;
arg_buffer[4] = a3067230879;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31019 = encode_clo(alloc_clo(lam31019_fptr, 0));

void* even_u63_fptr() // even? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31023 = arg_buffer[1];
//reading env and args
void* kont30767 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar31459 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31459, "0", 10);
void* a3067030876 = encode_mpz(mpzvar31459);
mpz_t* mpzvar31460 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31460, "2", 10);
void* a3067130877 = encode_mpz(mpzvar31460);

//creating new closure instance
void** clo31462 = alloc_clo(lam31019_fptr, 3);

//setting env list
clo31462[1] = kont30767;
clo31462[2] = a3067030876;
clo31462[3] = equal_u63;
void* f3076830878 = encode_clo(clo31462);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3076830878;
arg_buffer[3] = x;
arg_buffer[4] = a3067130877;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(modulo))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void* lam31024_fptr() // lam31024 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31025 = arg_buffer[1];
//reading env and args
void* a3067530883 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* equal_u63 = (decode_clo(env31025))[3];
//not do dummy comment
void* a3067330880 = (decode_clo(env31025))[2];
//not do dummy comment
void* kont30769 = (decode_clo(env31025))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = kont30769;
arg_buffer[3] = a3067330880;
arg_buffer[4] = a3067530883;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31024 = encode_clo(alloc_clo(lam31024_fptr, 0));

void* odd_u63_fptr() // odd? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31028 = arg_buffer[1];
//reading env and args
void* kont30769 = arg_buffer[2];
void* x = arg_buffer[3];
//Dummy comment
mpz_t* mpzvar31463 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31463, "1", 10);
void* a3067330880 = encode_mpz(mpzvar31463);
mpz_t* mpzvar31464 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31464, "2", 10);
void* a3067430881 = encode_mpz(mpzvar31464);

//creating new closure instance
void** clo31466 = alloc_clo(lam31024_fptr, 3);

//setting env list
clo31466[1] = kont30769;
clo31466[2] = a3067330880;
clo31466[3] = equal_u63;
void* f3077030882 = encode_clo(clo31466);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(modulo);
arg_buffer[2] = f3077030882;
arg_buffer[3] = x;
arg_buffer[4] = a3067430881;
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
void* _31029 = arg_buffer[1];
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

void* kont3077130884 = prim_car(x);
void* x30885 = prim_cdr(x);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3077130884);
arg_buffer[2] = x30885;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3077130884))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* list = encode_clo(alloc_clo(list_fptr, 0));

void* lam31032_fptr() // lam31032 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31033 = arg_buffer[1];
//reading env and args
void* a3068130895 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30773 = (decode_clo(env31033))[3];
//not do dummy comment
void* x = (decode_clo(env31033))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31033))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(member_u63);
arg_buffer[2] = kont30773;
arg_buffer[3] = x;
arg_buffer[4] = a3068130895;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(member_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31032 = encode_clo(alloc_clo(lam31032_fptr, 0));

void* lam31034_fptr() // lam31034 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31035 = arg_buffer[1];
//reading env and args
void* a3067930892 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31035))[5];
//not do dummy comment
void* kont30773 = (decode_clo(env31035))[4];
//not do dummy comment
void* lst = (decode_clo(env31035))[3];
//not do dummy comment
void* x = (decode_clo(env31035))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31035))[1];

//if-clause
bool if_guard31467 = is_true(a3067930892);
if(if_guard31467)
{
void* x3068030893 = encode_bool(true);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30773);
arg_buffer[2] = x3068030893;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30773))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31469 = alloc_clo(lam31032_fptr, 3);

//setting env list
clo31469[1] = member_u63;
clo31469[2] = x;
clo31469[3] = kont30773;
void* f3077430894 = encode_clo(clo31469);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3077430894;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31034 = encode_clo(alloc_clo(lam31034_fptr, 0));

void* lam31036_fptr() // lam31036 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31037 = arg_buffer[1];
//reading env and args
void* a3067830890 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31037))[6];
//not do dummy comment
void* kont30773 = (decode_clo(env31037))[5];
//not do dummy comment
void* lst = (decode_clo(env31037))[4];
//not do dummy comment
void* equal_u63 = (decode_clo(env31037))[3];
//not do dummy comment
void* x = (decode_clo(env31037))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31037))[1];

//creating new closure instance
void** clo31471 = alloc_clo(lam31034_fptr, 5);

//setting env list
clo31471[1] = member_u63;
clo31471[2] = x;
clo31471[3] = lst;
clo31471[4] = kont30773;
clo31471[5] = cdr;
void* f3077530891 = encode_clo(clo31471);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(equal_u63);
arg_buffer[2] = f3077530891;
arg_buffer[3] = a3067830890;
arg_buffer[4] = x;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(equal_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31036 = encode_clo(alloc_clo(lam31036_fptr, 0));

void* lam31038_fptr() // lam31038 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31039 = arg_buffer[1];
//reading env and args
void* a3067630887 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31039))[7];
//not do dummy comment
void* kont30773 = (decode_clo(env31039))[6];
//not do dummy comment
void* lst = (decode_clo(env31039))[5];
//not do dummy comment
void* equal_u63 = (decode_clo(env31039))[4];
//not do dummy comment
void* x = (decode_clo(env31039))[3];
//not do dummy comment
void* car = (decode_clo(env31039))[2];
//not do dummy comment
void* member_u63 = (decode_clo(env31039))[1];

//if-clause
bool if_guard31472 = is_true(a3067630887);
if(if_guard31472)
{
void* x3067730888 = encode_bool(false);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30773);
arg_buffer[2] = x3067730888;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30773))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31474 = alloc_clo(lam31036_fptr, 6);

//setting env list
clo31474[1] = member_u63;
clo31474[2] = x;
clo31474[3] = equal_u63;
clo31474[4] = lst;
clo31474[5] = kont30773;
clo31474[6] = cdr;
void* f3077630889 = encode_clo(clo31474);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3077630889;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31038 = encode_clo(alloc_clo(lam31038_fptr, 0));

void* member_u63_fptr() // member? 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31040 = arg_buffer[1];
//reading env and args
void* kont30773 = arg_buffer[2];
void* x = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31476 = alloc_clo(lam31038_fptr, 7);

//setting env list
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

clo31476[1] = member_u63;
clo31476[2] = car;
clo31476[3] = x;
clo31476[4] = equal_u63;
clo31476[5] = lst;
clo31476[6] = kont30773;
clo31476[7] = cdr;
void* f3077730886 = encode_clo(clo31476);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3077730886;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void* lam31041_fptr() // lam31041 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31042 = arg_buffer[1];
//reading env and args
void* a3068530903 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3068430901 = (decode_clo(env31042))[4];
//not do dummy comment
void* kont30778 = (decode_clo(env31042))[3];
//not do dummy comment
void* fun = (decode_clo(env31042))[2];
//not do dummy comment
void* foldl = (decode_clo(env31042))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldl);
arg_buffer[2] = kont30778;
arg_buffer[3] = fun;
arg_buffer[4] = a3068430901;
arg_buffer[5] = a3068530903;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldl))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31041 = encode_clo(alloc_clo(lam31041_fptr, 0));

void* lam31043_fptr() // lam31043 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31044 = arg_buffer[1];
//reading env and args
void* a3068430901 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31044))[5];
//not do dummy comment
void* lst = (decode_clo(env31044))[4];
//not do dummy comment
void* kont30778 = (decode_clo(env31044))[3];
//not do dummy comment
void* fun = (decode_clo(env31044))[2];
//not do dummy comment
void* foldl = (decode_clo(env31044))[1];

//creating new closure instance
void** clo31478 = alloc_clo(lam31041_fptr, 4);

//setting env list
clo31478[1] = foldl;
clo31478[2] = fun;
clo31478[3] = kont30778;
clo31478[4] = a3068430901;
void* f3077930902 = encode_clo(clo31478);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3077930902;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31043 = encode_clo(alloc_clo(lam31043_fptr, 0));

void* lam31045_fptr() // lam31045 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31046 = arg_buffer[1];
//reading env and args
void* a3068330899 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31046))[6];
//not do dummy comment
void* lst = (decode_clo(env31046))[5];
//not do dummy comment
void* kont30778 = (decode_clo(env31046))[4];
//not do dummy comment
void* fun = (decode_clo(env31046))[3];
//not do dummy comment
void* acc = (decode_clo(env31046))[2];
//not do dummy comment
void* foldl = (decode_clo(env31046))[1];

//creating new closure instance
void** clo31480 = alloc_clo(lam31043_fptr, 5);

//setting env list
clo31480[1] = foldl;
clo31480[2] = fun;
clo31480[3] = kont30778;
clo31480[4] = lst;
clo31480[5] = cdr;
void* f3078030900 = encode_clo(clo31480);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(fun);
arg_buffer[2] = f3078030900;
arg_buffer[3] = a3068330899;
arg_buffer[4] = acc;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(fun))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31045 = encode_clo(alloc_clo(lam31045_fptr, 0));

void* lam31047_fptr() // lam31047 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31048 = arg_buffer[1];
//reading env and args
void* a3068230897 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31048))[7];
//not do dummy comment
void* lst = (decode_clo(env31048))[6];
//not do dummy comment
void* kont30778 = (decode_clo(env31048))[5];
//not do dummy comment
void* fun = (decode_clo(env31048))[4];
//not do dummy comment
void* acc = (decode_clo(env31048))[3];
//not do dummy comment
void* car = (decode_clo(env31048))[2];
//not do dummy comment
void* foldl = (decode_clo(env31048))[1];

//if-clause
bool if_guard31481 = is_true(a3068230897);
if(if_guard31481)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30778);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30778))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31483 = alloc_clo(lam31045_fptr, 6);

//setting env list
clo31483[1] = foldl;
clo31483[2] = acc;
clo31483[3] = fun;
clo31483[4] = kont30778;
clo31483[5] = lst;
clo31483[6] = cdr;
void* f3078130898 = encode_clo(clo31483);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3078130898;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31047 = encode_clo(alloc_clo(lam31047_fptr, 0));

void* foldl_fptr() // foldl 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31049 = arg_buffer[1];
//reading env and args
void* kont30778 = arg_buffer[2];
void* fun = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo31485 = alloc_clo(lam31047_fptr, 7);

//setting env list
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

clo31485[1] = foldl;
clo31485[2] = car;
clo31485[3] = acc;
clo31485[4] = fun;
clo31485[5] = kont30778;
clo31485[6] = lst;
clo31485[7] = cdr;
void* f3078230896 = encode_clo(clo31485);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3078230896;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void* lam31050_fptr() // lam31050 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31051 = arg_buffer[1];
//reading env and args
void* a3068930911 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31051))[3];
//not do dummy comment
void* a3068730907 = (decode_clo(env31051))[2];
//not do dummy comment
void* kont30783 = (decode_clo(env31051))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30783;
arg_buffer[3] = a3068730907;
arg_buffer[4] = a3068930911;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31050 = encode_clo(alloc_clo(lam31050_fptr, 0));

void* lam31052_fptr() // lam31052 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31053 = arg_buffer[1];
//reading env and args
void* a3068830909 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31053))[5];
//not do dummy comment
void* a3068730907 = (decode_clo(env31053))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31053))[3];
//not do dummy comment
void* kont30783 = (decode_clo(env31053))[2];
//not do dummy comment
void* cons = (decode_clo(env31053))[1];

//creating new closure instance
void** clo31487 = alloc_clo(lam31050_fptr, 3);

//setting env list
clo31487[1] = kont30783;
clo31487[2] = a3068730907;
clo31487[3] = reverse_u45helper;
void* f3078430910 = encode_clo(clo31487);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3078430910;
arg_buffer[3] = a3068830909;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31052 = encode_clo(alloc_clo(lam31052_fptr, 0));

void* lam31054_fptr() // lam31054 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31055 = arg_buffer[1];
//reading env and args
void* a3068730907 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31055))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31055))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31055))[4];
//not do dummy comment
void* cons = (decode_clo(env31055))[3];
//not do dummy comment
void* kont30783 = (decode_clo(env31055))[2];
//not do dummy comment
void* car = (decode_clo(env31055))[1];

//creating new closure instance
void** clo31489 = alloc_clo(lam31052_fptr, 5);

//setting env list
clo31489[1] = cons;
clo31489[2] = kont30783;
clo31489[3] = lst2;
clo31489[4] = a3068730907;
clo31489[5] = reverse_u45helper;
void* f3078530908 = encode_clo(clo31489);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3078530908;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31054 = encode_clo(alloc_clo(lam31054_fptr, 0));

void* lam31056_fptr() // lam31056 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31057 = arg_buffer[1];
//reading env and args
void* a3068630905 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31057))[7];
//not do dummy comment
void* lst = (decode_clo(env31057))[6];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31057))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31057))[4];
//not do dummy comment
void* cons = (decode_clo(env31057))[3];
//not do dummy comment
void* kont30783 = (decode_clo(env31057))[2];
//not do dummy comment
void* car = (decode_clo(env31057))[1];

//if-clause
bool if_guard31490 = is_true(a3068630905);
if(if_guard31490)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30783);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30783))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31492 = alloc_clo(lam31054_fptr, 6);

//setting env list
clo31492[1] = car;
clo31492[2] = kont30783;
clo31492[3] = cons;
clo31492[4] = lst2;
clo31492[5] = reverse_u45helper;
clo31492[6] = lst;
void* f3078630906 = encode_clo(clo31492);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3078630906;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31056 = encode_clo(alloc_clo(lam31056_fptr, 0));

void* reverse_u45helper_fptr() // reverse-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31058 = arg_buffer[1];
//reading env and args
void* kont30783 = arg_buffer[2];
void* lst = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31494 = alloc_clo(lam31056_fptr, 7);

//setting env list
clo31494[1] = car;
clo31494[2] = kont30783;
clo31494[3] = cons;
clo31494[4] = lst2;
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

clo31494[5] = reverse_u45helper;
clo31494[6] = lst;
clo31494[7] = cdr;
void* f3078730904 = encode_clo(clo31494);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3078730904;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void* lam31059_fptr() // lam31059 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31060 = arg_buffer[1];
//reading env and args
void* a3069030913 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30788 = (decode_clo(env31060))[3];
//not do dummy comment
void* lst = (decode_clo(env31060))[2];
//not do dummy comment
void* reverse_u45helper = (decode_clo(env31060))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse_u45helper);
arg_buffer[2] = kont30788;
arg_buffer[3] = lst;
arg_buffer[4] = a3069030913;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(reverse_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31059 = encode_clo(alloc_clo(lam31059_fptr, 0));

void* reverse_fptr() // reverse 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31061 = arg_buffer[1];
//reading env and args
void* kont30788 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31496 = alloc_clo(lam31059_fptr, 3);

//setting env list
clo31496[1] = reverse_u45helper;
clo31496[2] = lst;
clo31496[3] = kont30788;
void* f3078930912 = encode_clo(clo31496);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3078930912;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void* lam31062_fptr() // lam31062 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31063 = arg_buffer[1];
//reading env and args
void* x3069330918 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30790 = (decode_clo(env31063))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30790);
arg_buffer[2] = x3069330918;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30790))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31062 = encode_clo(alloc_clo(lam31062_fptr, 0));

void* lam31064_fptr() // lam31064 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31065 = arg_buffer[1];
//reading env and args
void* a3069830927 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30790 = (decode_clo(env31065))[4];
//not do dummy comment
void* a3069430920 = (decode_clo(env31065))[3];
//not do dummy comment
void* a3069630923 = (decode_clo(env31065))[2];
//not do dummy comment
void* take_u45helper = (decode_clo(env31065))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30790;
arg_buffer[3] = a3069430920;
arg_buffer[4] = a3069630923;
arg_buffer[5] = a3069830927;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31064 = encode_clo(alloc_clo(lam31064_fptr, 0));

void* lam31066_fptr() // lam31066 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31067 = arg_buffer[1];
//reading env and args
void* a3069730925 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30790 = (decode_clo(env31067))[6];
//not do dummy comment
void* a3069430920 = (decode_clo(env31067))[5];
//not do dummy comment
void* a3069630923 = (decode_clo(env31067))[4];
//not do dummy comment
void* cons = (decode_clo(env31067))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31067))[2];
//not do dummy comment
void* lst2 = (decode_clo(env31067))[1];

//creating new closure instance
void** clo31498 = alloc_clo(lam31064_fptr, 4);

//setting env list
clo31498[1] = take_u45helper;
clo31498[2] = a3069630923;
clo31498[3] = a3069430920;
clo31498[4] = kont30790;
void* f3079230926 = encode_clo(clo31498);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = f3079230926;
arg_buffer[3] = a3069730925;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31066 = encode_clo(alloc_clo(lam31066_fptr, 0));

void* lam31068_fptr() // lam31068 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31069 = arg_buffer[1];
//reading env and args
void* a3069630923 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3069430920 = (decode_clo(env31069))[7];
//not do dummy comment
void* car = (decode_clo(env31069))[6];
//not do dummy comment
void* cons = (decode_clo(env31069))[5];
//not do dummy comment
void* lst = (decode_clo(env31069))[4];
//not do dummy comment
void* kont30790 = (decode_clo(env31069))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31069))[2];
//not do dummy comment
void* lst2 = (decode_clo(env31069))[1];

//creating new closure instance
void** clo31500 = alloc_clo(lam31066_fptr, 6);

//setting env list
clo31500[1] = lst2;
clo31500[2] = take_u45helper;
clo31500[3] = cons;
clo31500[4] = a3069630923;
clo31500[5] = a3069430920;
clo31500[6] = kont30790;
void* f3079330924 = encode_clo(clo31500);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3079330924;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31068 = encode_clo(alloc_clo(lam31068_fptr, 0));

void* lam31071_fptr() // lam31071 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31072 = arg_buffer[1];
//reading env and args
void* a3069430920 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cons = (decode_clo(env31072))[8];
//not do dummy comment
void* _u45 = (decode_clo(env31072))[7];
//not do dummy comment
void* lst = (decode_clo(env31072))[6];
//not do dummy comment
void* kont30790 = (decode_clo(env31072))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env31072))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31072))[3];
//not do dummy comment
void* n = (decode_clo(env31072))[2];
//not do dummy comment
void* car = (decode_clo(env31072))[1];
mpz_t* mpzvar31501 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31501, "1", 10);
void* a3069530921 = encode_mpz(mpzvar31501);

//creating new closure instance
void** clo31503 = alloc_clo(lam31068_fptr, 7);

//setting env list
clo31503[1] = lst2;
clo31503[2] = take_u45helper;
clo31503[3] = kont30790;
clo31503[4] = lst;
clo31503[5] = cons;
clo31503[6] = car;
clo31503[7] = a3069430920;
void* f3079430922 = encode_clo(clo31503);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3079430922;
arg_buffer[3] = n;
arg_buffer[4] = a3069530921;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31071 = encode_clo(alloc_clo(lam31071_fptr, 0));

void* lam31073_fptr() // lam31073 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31074 = arg_buffer[1];
//reading env and args
void* a3069230916 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31074))[10];
//not do dummy comment
void* reverse = (decode_clo(env31074))[9];
//not do dummy comment
void* cons = (decode_clo(env31074))[8];
//not do dummy comment
void* _u45 = (decode_clo(env31074))[7];
//not do dummy comment
void* lst = (decode_clo(env31074))[6];
//not do dummy comment
void* kont30790 = (decode_clo(env31074))[5];
//not do dummy comment
void* take_u45helper = (decode_clo(env31074))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31074))[3];
//not do dummy comment
void* n = (decode_clo(env31074))[2];
//not do dummy comment
void* car = (decode_clo(env31074))[1];

//if-clause
bool if_guard31504 = is_true(a3069230916);
if(if_guard31504)
{

//creating new closure instance
void** clo31506 = alloc_clo(lam31062_fptr, 1);

//setting env list
clo31506[1] = kont30790;
void* f3079130917 = encode_clo(clo31506);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(reverse);
arg_buffer[2] = f3079130917;
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
void** clo31508 = alloc_clo(lam31071_fptr, 8);

//setting env list
clo31508[1] = car;
clo31508[2] = n;
clo31508[3] = lst2;
clo31508[4] = take_u45helper;
clo31508[5] = kont30790;
clo31508[6] = lst;
clo31508[7] = _u45;
clo31508[8] = cons;
void* f3079530919 = encode_clo(clo31508);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3079530919;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31073 = encode_clo(alloc_clo(lam31073_fptr, 0));

void* take_u45helper_fptr() // take-helper 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31076 = arg_buffer[1];
//reading env and args
void* kont30790 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
void* lst2 = arg_buffer[5];
//Dummy comment
mpz_t* mpzvar31509 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31509, "0", 10);
void* a3069130914 = encode_mpz(mpzvar31509);

//creating new closure instance
void** clo31511 = alloc_clo(lam31073_fptr, 10);

//setting env list
clo31511[1] = car;
clo31511[2] = n;
clo31511[3] = lst2;
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

clo31511[4] = take_u45helper;
clo31511[5] = kont30790;
clo31511[6] = lst;
clo31511[7] = _u45;
clo31511[8] = cons;
clo31511[9] = reverse;
clo31511[10] = cdr;
void* f3079630915 = encode_clo(clo31511);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3079630915;
arg_buffer[3] = n;
arg_buffer[4] = a3069130914;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void* lam31077_fptr() // lam31077 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31078 = arg_buffer[1];
//reading env and args
void* a3069930929 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31078))[4];
//not do dummy comment
void* kont30797 = (decode_clo(env31078))[3];
//not do dummy comment
void* take_u45helper = (decode_clo(env31078))[2];
//not do dummy comment
void* n = (decode_clo(env31078))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(take_u45helper);
arg_buffer[2] = kont30797;
arg_buffer[3] = lst;
arg_buffer[4] = n;
arg_buffer[5] = a3069930929;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(take_u45helper))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31077 = encode_clo(alloc_clo(lam31077_fptr, 0));

void* take_fptr() // take 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31079 = arg_buffer[1];
//reading env and args
void* kont30797 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31513 = alloc_clo(lam31077_fptr, 4);

//setting env list
clo31513[1] = n;
clo31513[2] = take_u45helper;
clo31513[3] = kont30797;
clo31513[4] = lst;
void* f3079830928 = encode_clo(clo31513);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3079830928;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(list))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* take = encode_clo(alloc_clo(take_fptr, 0));

void* lam31081_fptr() // lam31081 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31082 = arg_buffer[1];
//reading env and args
void* a3070430937 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3070230933 = (decode_clo(env31082))[3];
//not do dummy comment
void* _u43 = (decode_clo(env31082))[2];
//not do dummy comment
void* kont30799 = (decode_clo(env31082))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u43);
arg_buffer[2] = kont30799;
arg_buffer[3] = a3070230933;
arg_buffer[4] = a3070430937;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u43))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31081 = encode_clo(alloc_clo(lam31081_fptr, 0));

void* lam31083_fptr() // lam31083 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31084 = arg_buffer[1];
//reading env and args
void* a3070330935 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3070230933 = (decode_clo(env31084))[4];
//not do dummy comment
void* length = (decode_clo(env31084))[3];
//not do dummy comment
void* _u43 = (decode_clo(env31084))[2];
//not do dummy comment
void* kont30799 = (decode_clo(env31084))[1];

//creating new closure instance
void** clo31515 = alloc_clo(lam31081_fptr, 3);

//setting env list
clo31515[1] = kont30799;
clo31515[2] = _u43;
clo31515[3] = a3070230933;
void* f3080030936 = encode_clo(clo31515);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(length);
arg_buffer[2] = f3080030936;
arg_buffer[3] = a3070330935;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(length))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31083 = encode_clo(alloc_clo(lam31083_fptr, 0));

void* lam31086_fptr() // lam31086 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31087 = arg_buffer[1];
//reading env and args
void* a3070030931 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31087))[5];
//not do dummy comment
void* lst = (decode_clo(env31087))[4];
//not do dummy comment
void* length = (decode_clo(env31087))[3];
//not do dummy comment
void* _u43 = (decode_clo(env31087))[2];
//not do dummy comment
void* kont30799 = (decode_clo(env31087))[1];

//if-clause
bool if_guard31516 = is_true(a3070030931);
if(if_guard31516)
{
mpz_t* mpzvar31517 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31517, "0", 10);
void* x3070130932 = encode_mpz(mpzvar31517);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30799);
arg_buffer[2] = x3070130932;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30799))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar31518 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31518, "1", 10);
void* a3070230933 = encode_mpz(mpzvar31518);

//creating new closure instance
void** clo31520 = alloc_clo(lam31083_fptr, 4);

//setting env list
clo31520[1] = kont30799;
clo31520[2] = _u43;
clo31520[3] = length;
clo31520[4] = a3070230933;
void* f3080130934 = encode_clo(clo31520);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3080130934;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31086 = encode_clo(alloc_clo(lam31086_fptr, 0));

void* length_fptr() // length 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31088 = arg_buffer[1];
//reading env and args
void* kont30799 = arg_buffer[2];
void* lst = arg_buffer[3];
//Dummy comment

//creating new closure instance
void** clo31522 = alloc_clo(lam31086_fptr, 5);

//setting env list
clo31522[1] = kont30799;
clo31522[2] = _u43;
void* length = encode_clo(alloc_clo(length_fptr, 0));

clo31522[3] = length;
clo31522[4] = lst;
clo31522[5] = cdr;
void* f3080230930 = encode_clo(clo31522);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3080230930;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* length = encode_clo(alloc_clo(length_fptr, 0));

void* lam31089_fptr() // lam31089 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31090 = arg_buffer[1];
//reading env and args
void* x3070630941 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30803 = (decode_clo(env31090))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30803);
arg_buffer[2] = x3070630941;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30803))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31089 = encode_clo(alloc_clo(lam31089_fptr, 0));

void* lam31091_fptr() // lam31091 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31092 = arg_buffer[1];
//reading env and args
void* a3071030949 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30803 = (decode_clo(env31092))[3];
//not do dummy comment
void* cons = (decode_clo(env31092))[2];
//not do dummy comment
void* a3070830945 = (decode_clo(env31092))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30803;
arg_buffer[3] = a3070830945;
arg_buffer[4] = a3071030949;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31091 = encode_clo(alloc_clo(lam31091_fptr, 0));

void* lam31093_fptr() // lam31093 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31094 = arg_buffer[1];
//reading env and args
void* a3070930947 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30803 = (decode_clo(env31094))[5];
//not do dummy comment
void* map = (decode_clo(env31094))[4];
//not do dummy comment
void* proc = (decode_clo(env31094))[3];
//not do dummy comment
void* cons = (decode_clo(env31094))[2];
//not do dummy comment
void* a3070830945 = (decode_clo(env31094))[1];

//creating new closure instance
void** clo31524 = alloc_clo(lam31091_fptr, 3);

//setting env list
clo31524[1] = a3070830945;
clo31524[2] = cons;
clo31524[3] = kont30803;
void* f3080530948 = encode_clo(clo31524);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(map);
arg_buffer[2] = f3080530948;
arg_buffer[3] = proc;
arg_buffer[4] = a3070930947;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(map))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31093 = encode_clo(alloc_clo(lam31093_fptr, 0));

void* lam31095_fptr() // lam31095 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31096 = arg_buffer[1];
//reading env and args
void* a3070830945 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31096))[6];
//not do dummy comment
void* kont30803 = (decode_clo(env31096))[5];
//not do dummy comment
void* lst = (decode_clo(env31096))[4];
//not do dummy comment
void* map = (decode_clo(env31096))[3];
//not do dummy comment
void* proc = (decode_clo(env31096))[2];
//not do dummy comment
void* cons = (decode_clo(env31096))[1];

//creating new closure instance
void** clo31526 = alloc_clo(lam31093_fptr, 5);

//setting env list
clo31526[1] = a3070830945;
clo31526[2] = cons;
clo31526[3] = proc;
clo31526[4] = map;
clo31526[5] = kont30803;
void* f3080630946 = encode_clo(clo31526);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3080630946;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31095 = encode_clo(alloc_clo(lam31095_fptr, 0));

void* lam31097_fptr() // lam31097 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31098 = arg_buffer[1];
//reading env and args
void* a3070730943 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31098))[6];
//not do dummy comment
void* kont30803 = (decode_clo(env31098))[5];
//not do dummy comment
void* lst = (decode_clo(env31098))[4];
//not do dummy comment
void* map = (decode_clo(env31098))[3];
//not do dummy comment
void* proc = (decode_clo(env31098))[2];
//not do dummy comment
void* cons = (decode_clo(env31098))[1];

//creating new closure instance
void** clo31528 = alloc_clo(lam31095_fptr, 6);

//setting env list
clo31528[1] = cons;
clo31528[2] = proc;
clo31528[3] = map;
clo31528[4] = lst;
clo31528[5] = kont30803;
clo31528[6] = cdr;
void* f3080730944 = encode_clo(clo31528);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = f3080730944;
arg_buffer[3] = a3070730943;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31097 = encode_clo(alloc_clo(lam31097_fptr, 0));

void* lam31099_fptr() // lam31099 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31100 = arg_buffer[1];
//reading env and args
void* a3070530939 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30803 = (decode_clo(env31100))[8];
//not do dummy comment
void* lst = (decode_clo(env31100))[7];
//not do dummy comment
void* map = (decode_clo(env31100))[6];
//not do dummy comment
void* proc = (decode_clo(env31100))[5];
//not do dummy comment
void* car = (decode_clo(env31100))[4];
//not do dummy comment
void* cons = (decode_clo(env31100))[3];
//not do dummy comment
void* list = (decode_clo(env31100))[2];
//not do dummy comment
void* cdr = (decode_clo(env31100))[1];

//if-clause
bool if_guard31529 = is_true(a3070530939);
if(if_guard31529)
{

//creating new closure instance
void** clo31531 = alloc_clo(lam31089_fptr, 1);

//setting env list
clo31531[1] = kont30803;
void* f3080430940 = encode_clo(clo31531);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3080430940;
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
void** clo31533 = alloc_clo(lam31097_fptr, 6);

//setting env list
clo31533[1] = cons;
clo31533[2] = proc;
clo31533[3] = map;
clo31533[4] = lst;
clo31533[5] = kont30803;
clo31533[6] = cdr;
void* f3080830942 = encode_clo(clo31533);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3080830942;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31099 = encode_clo(alloc_clo(lam31099_fptr, 0));

void* map_fptr() // map 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31101 = arg_buffer[1];
//reading env and args
void* kont30803 = arg_buffer[2];
void* proc = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31535 = alloc_clo(lam31099_fptr, 8);

//setting env list
clo31535[1] = cdr;
clo31535[2] = list;
clo31535[3] = cons;
clo31535[4] = car;
clo31535[5] = proc;
void* map = encode_clo(alloc_clo(map_fptr, 0));

clo31535[6] = map;
clo31535[7] = lst;
clo31535[8] = kont30803;
void* f3080930938 = encode_clo(clo31535);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3080930938;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* map = encode_clo(alloc_clo(map_fptr, 0));

void* lam31102_fptr() // lam31102 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31103 = arg_buffer[1];
//reading env and args
void* x3071230953 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30810 = (decode_clo(env31103))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30810);
arg_buffer[2] = x3071230953;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30810))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31102 = encode_clo(alloc_clo(lam31102_fptr, 0));

void* lam31104_fptr() // lam31104 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31105 = arg_buffer[1];
//reading env and args
void* a3071730963 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30810 = (decode_clo(env31105))[3];
//not do dummy comment
void* a3071530959 = (decode_clo(env31105))[2];
//not do dummy comment
void* cons = (decode_clo(env31105))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30810;
arg_buffer[3] = a3071530959;
arg_buffer[4] = a3071730963;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31104 = encode_clo(alloc_clo(lam31104_fptr, 0));

void* lam31106_fptr() // lam31106 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31107 = arg_buffer[1];
//reading env and args
void* a3071630961 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env31107))[5];
//not do dummy comment
void* kont30810 = (decode_clo(env31107))[4];
//not do dummy comment
void* cons = (decode_clo(env31107))[3];
//not do dummy comment
void* a3071530959 = (decode_clo(env31107))[2];
//not do dummy comment
void* filter = (decode_clo(env31107))[1];

//creating new closure instance
void** clo31537 = alloc_clo(lam31104_fptr, 3);

//setting env list
clo31537[1] = cons;
clo31537[2] = a3071530959;
clo31537[3] = kont30810;
void* f3081230962 = encode_clo(clo31537);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = f3081230962;
arg_buffer[3] = op;
arg_buffer[4] = a3071630961;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31106 = encode_clo(alloc_clo(lam31106_fptr, 0));

void* lam31108_fptr() // lam31108 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31109 = arg_buffer[1];
//reading env and args
void* a3071530959 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31109))[6];
//not do dummy comment
void* lst = (decode_clo(env31109))[5];
//not do dummy comment
void* op = (decode_clo(env31109))[4];
//not do dummy comment
void* kont30810 = (decode_clo(env31109))[3];
//not do dummy comment
void* filter = (decode_clo(env31109))[2];
//not do dummy comment
void* cons = (decode_clo(env31109))[1];

//creating new closure instance
void** clo31539 = alloc_clo(lam31106_fptr, 5);

//setting env list
clo31539[1] = filter;
clo31539[2] = a3071530959;
clo31539[3] = cons;
clo31539[4] = kont30810;
clo31539[5] = op;
void* f3081330960 = encode_clo(clo31539);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3081330960;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31108 = encode_clo(alloc_clo(lam31108_fptr, 0));

void* lam31110_fptr() // lam31110 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31111 = arg_buffer[1];
//reading env and args
void* a3071830965 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* op = (decode_clo(env31111))[3];
//not do dummy comment
void* kont30810 = (decode_clo(env31111))[2];
//not do dummy comment
void* filter = (decode_clo(env31111))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(filter);
arg_buffer[2] = kont30810;
arg_buffer[3] = op;
arg_buffer[4] = a3071830965;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(filter))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31110 = encode_clo(alloc_clo(lam31110_fptr, 0));

void* lam31112_fptr() // lam31112 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31113 = arg_buffer[1];
//reading env and args
void* a3071430957 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31113))[7];
//not do dummy comment
void* lst = (decode_clo(env31113))[6];
//not do dummy comment
void* op = (decode_clo(env31113))[5];
//not do dummy comment
void* kont30810 = (decode_clo(env31113))[4];
//not do dummy comment
void* cons = (decode_clo(env31113))[3];
//not do dummy comment
void* filter = (decode_clo(env31113))[2];
//not do dummy comment
void* car = (decode_clo(env31113))[1];

//if-clause
bool if_guard31540 = is_true(a3071430957);
if(if_guard31540)
{

//creating new closure instance
void** clo31542 = alloc_clo(lam31108_fptr, 6);

//setting env list
clo31542[1] = cons;
clo31542[2] = filter;
clo31542[3] = kont30810;
clo31542[4] = op;
clo31542[5] = lst;
clo31542[6] = cdr;
void* f3081430958 = encode_clo(clo31542);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3081430958;
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
void** clo31544 = alloc_clo(lam31110_fptr, 3);

//setting env list
clo31544[1] = filter;
clo31544[2] = kont30810;
clo31544[3] = op;
void* f3081530964 = encode_clo(clo31544);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3081530964;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31112 = encode_clo(alloc_clo(lam31112_fptr, 0));

void* lam31114_fptr() // lam31114 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31115 = arg_buffer[1];
//reading env and args
void* a3071330955 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31115))[7];
//not do dummy comment
void* lst = (decode_clo(env31115))[6];
//not do dummy comment
void* op = (decode_clo(env31115))[5];
//not do dummy comment
void* kont30810 = (decode_clo(env31115))[4];
//not do dummy comment
void* cons = (decode_clo(env31115))[3];
//not do dummy comment
void* filter = (decode_clo(env31115))[2];
//not do dummy comment
void* car = (decode_clo(env31115))[1];

//creating new closure instance
void** clo31546 = alloc_clo(lam31112_fptr, 7);

//setting env list
clo31546[1] = car;
clo31546[2] = filter;
clo31546[3] = cons;
clo31546[4] = kont30810;
clo31546[5] = op;
clo31546[6] = lst;
clo31546[7] = cdr;
void* f3081630956 = encode_clo(clo31546);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(op);
arg_buffer[2] = f3081630956;
arg_buffer[3] = a3071330955;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(op))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31114 = encode_clo(alloc_clo(lam31114_fptr, 0));

void* lam31116_fptr() // lam31116 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31117 = arg_buffer[1];
//reading env and args
void* a3071130951 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* lst = (decode_clo(env31117))[8];
//not do dummy comment
void* op = (decode_clo(env31117))[7];
//not do dummy comment
void* kont30810 = (decode_clo(env31117))[6];
//not do dummy comment
void* cons = (decode_clo(env31117))[5];
//not do dummy comment
void* list = (decode_clo(env31117))[4];
//not do dummy comment
void* cdr = (decode_clo(env31117))[3];
//not do dummy comment
void* filter = (decode_clo(env31117))[2];
//not do dummy comment
void* car = (decode_clo(env31117))[1];

//if-clause
bool if_guard31547 = is_true(a3071130951);
if(if_guard31547)
{

//creating new closure instance
void** clo31549 = alloc_clo(lam31102_fptr, 1);

//setting env list
clo31549[1] = kont30810;
void* f3081130952 = encode_clo(clo31549);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(list);
arg_buffer[2] = f3081130952;
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
void** clo31551 = alloc_clo(lam31114_fptr, 7);

//setting env list
clo31551[1] = car;
clo31551[2] = filter;
clo31551[3] = cons;
clo31551[4] = kont30810;
clo31551[5] = op;
clo31551[6] = lst;
clo31551[7] = cdr;
void* f3081730954 = encode_clo(clo31551);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3081730954;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31116 = encode_clo(alloc_clo(lam31116_fptr, 0));

void* filter_fptr() // filter 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31118 = arg_buffer[1];
//reading env and args
void* kont30810 = arg_buffer[2];
void* op = arg_buffer[3];
void* lst = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31553 = alloc_clo(lam31116_fptr, 8);

//setting env list
clo31553[1] = car;
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

clo31553[2] = filter;
clo31553[3] = cdr;
clo31553[4] = list;
clo31553[5] = cons;
clo31553[6] = kont30810;
clo31553[7] = op;
clo31553[8] = lst;
void* f3081830950 = encode_clo(clo31553);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3081830950;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void* lam31119_fptr() // lam31119 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31120 = arg_buffer[1];
//reading env and args
void* a3072330973 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30819 = (decode_clo(env31120))[3];
//not do dummy comment
void* drop = (decode_clo(env31120))[2];
//not do dummy comment
void* a3072130970 = (decode_clo(env31120))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(drop);
arg_buffer[2] = kont30819;
arg_buffer[3] = a3072130970;
arg_buffer[4] = a3072330973;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(drop))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31119 = encode_clo(alloc_clo(lam31119_fptr, 0));

void* lam31122_fptr() // lam31122 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31123 = arg_buffer[1];
//reading env and args
void* a3072130970 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30819 = (decode_clo(env31123))[4];
//not do dummy comment
void* drop = (decode_clo(env31123))[3];
//not do dummy comment
void* n = (decode_clo(env31123))[2];
//not do dummy comment
void* _u45 = (decode_clo(env31123))[1];
mpz_t* mpzvar31554 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31554, "1", 10);
void* a3072230971 = encode_mpz(mpzvar31554);

//creating new closure instance
void** clo31556 = alloc_clo(lam31119_fptr, 3);

//setting env list
clo31556[1] = a3072130970;
clo31556[2] = drop;
clo31556[3] = kont30819;
void* f3082030972 = encode_clo(clo31556);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u45);
arg_buffer[2] = f3082030972;
arg_buffer[3] = n;
arg_buffer[4] = a3072230971;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u45))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31122 = encode_clo(alloc_clo(lam31122_fptr, 0));

void* lam31124_fptr() // lam31124 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31125 = arg_buffer[1];
//reading env and args
void* a3072030968 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31125))[6];
//not do dummy comment
void* kont30819 = (decode_clo(env31125))[5];
//not do dummy comment
void* n = (decode_clo(env31125))[4];
//not do dummy comment
void* _u45 = (decode_clo(env31125))[3];
//not do dummy comment
void* lst = (decode_clo(env31125))[2];
//not do dummy comment
void* drop = (decode_clo(env31125))[1];

//if-clause
bool if_guard31557 = is_true(a3072030968);
if(if_guard31557)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30819);
arg_buffer[2] = lst;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30819))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31559 = alloc_clo(lam31122_fptr, 4);

//setting env list
clo31559[1] = _u45;
clo31559[2] = n;
clo31559[3] = drop;
clo31559[4] = kont30819;
void* f3082130969 = encode_clo(clo31559);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3082130969;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31124 = encode_clo(alloc_clo(lam31124_fptr, 0));

void* drop_fptr() // drop 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31127 = arg_buffer[1];
//reading env and args
void* kont30819 = arg_buffer[2];
void* lst = arg_buffer[3];
void* n = arg_buffer[4];
//Dummy comment
mpz_t* mpzvar31560 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31560, "0", 10);
void* a3071930966 = encode_mpz(mpzvar31560);

//creating new closure instance
void** clo31562 = alloc_clo(lam31124_fptr, 6);

//setting env list
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

clo31562[1] = drop;
clo31562[2] = lst;
clo31562[3] = _u45;
clo31562[4] = n;
clo31562[5] = kont30819;
clo31562[6] = cdr;
void* f3082230967 = encode_clo(clo31562);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(_u61);
arg_buffer[2] = f3082230967;
arg_buffer[3] = n;
arg_buffer[4] = a3071930966;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(_u61))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void* lam31128_fptr() // lam31128 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31129 = arg_buffer[1];
//reading env and args
void* a3072730981 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30823 = (decode_clo(env31129))[3];
//not do dummy comment
void* proc = (decode_clo(env31129))[2];
//not do dummy comment
void* a3072530977 = (decode_clo(env31129))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(proc);
arg_buffer[2] = kont30823;
arg_buffer[3] = a3072530977;
arg_buffer[4] = a3072730981;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(proc))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31128 = encode_clo(alloc_clo(lam31128_fptr, 0));

void* lam31130_fptr() // lam31130 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31131 = arg_buffer[1];
//reading env and args
void* a3072630979 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* foldr = (decode_clo(env31131))[5];
//not do dummy comment
void* kont30823 = (decode_clo(env31131))[4];
//not do dummy comment
void* a3072530977 = (decode_clo(env31131))[3];
//not do dummy comment
void* proc = (decode_clo(env31131))[2];
//not do dummy comment
void* acc = (decode_clo(env31131))[1];

//creating new closure instance
void** clo31564 = alloc_clo(lam31128_fptr, 3);

//setting env list
clo31564[1] = a3072530977;
clo31564[2] = proc;
clo31564[3] = kont30823;
void* f3082430980 = encode_clo(clo31564);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(foldr);
arg_buffer[2] = f3082430980;
arg_buffer[3] = proc;
arg_buffer[4] = acc;
arg_buffer[5] = a3072630979;
arg_buffer[0] = reinterpret_cast<void*>(5);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(foldr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31130 = encode_clo(alloc_clo(lam31130_fptr, 0));

void* lam31132_fptr() // lam31132 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31133 = arg_buffer[1];
//reading env and args
void* a3072530977 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31133))[6];
//not do dummy comment
void* kont30823 = (decode_clo(env31133))[5];
//not do dummy comment
void* foldr = (decode_clo(env31133))[4];
//not do dummy comment
void* lst = (decode_clo(env31133))[3];
//not do dummy comment
void* proc = (decode_clo(env31133))[2];
//not do dummy comment
void* acc = (decode_clo(env31133))[1];

//creating new closure instance
void** clo31566 = alloc_clo(lam31130_fptr, 5);

//setting env list
clo31566[1] = acc;
clo31566[2] = proc;
clo31566[3] = a3072530977;
clo31566[4] = kont30823;
clo31566[5] = foldr;
void* f3082530978 = encode_clo(clo31566);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3082530978;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31132 = encode_clo(alloc_clo(lam31132_fptr, 0));

void* lam31134_fptr() // lam31134 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31135 = arg_buffer[1];
//reading env and args
void* a3072430975 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31135))[7];
//not do dummy comment
void* kont30823 = (decode_clo(env31135))[6];
//not do dummy comment
void* car = (decode_clo(env31135))[5];
//not do dummy comment
void* foldr = (decode_clo(env31135))[4];
//not do dummy comment
void* lst = (decode_clo(env31135))[3];
//not do dummy comment
void* proc = (decode_clo(env31135))[2];
//not do dummy comment
void* acc = (decode_clo(env31135))[1];

//if-clause
bool if_guard31567 = is_true(a3072430975);
if(if_guard31567)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30823);
arg_buffer[2] = acc;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30823))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31569 = alloc_clo(lam31132_fptr, 6);

//setting env list
clo31569[1] = acc;
clo31569[2] = proc;
clo31569[3] = lst;
clo31569[4] = foldr;
clo31569[5] = kont30823;
clo31569[6] = cdr;
void* f3082630976 = encode_clo(clo31569);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3082630976;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31134 = encode_clo(alloc_clo(lam31134_fptr, 0));

void* foldr_fptr() // foldr 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31136 = arg_buffer[1];
//reading env and args
void* kont30823 = arg_buffer[2];
void* proc = arg_buffer[3];
void* acc = arg_buffer[4];
void* lst = arg_buffer[5];
//Dummy comment

//creating new closure instance
void** clo31571 = alloc_clo(lam31134_fptr, 7);

//setting env list
clo31571[1] = acc;
clo31571[2] = proc;
clo31571[3] = lst;
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

clo31571[4] = foldr;
clo31571[5] = car;
clo31571[6] = kont30823;
clo31571[7] = cdr;
void* f3082730974 = encode_clo(clo31571);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3082730974;
arg_buffer[3] = lst;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(null_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void* lam31137_fptr() // lam31137 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31138 = arg_buffer[1];
//reading env and args
void* a3073130989 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3072930985 = (decode_clo(env31138))[3];
//not do dummy comment
void* kont30828 = (decode_clo(env31138))[2];
//not do dummy comment
void* cons = (decode_clo(env31138))[1];

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cons);
arg_buffer[2] = kont30828;
arg_buffer[3] = a3072930985;
arg_buffer[4] = a3073130989;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cons))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31137 = encode_clo(alloc_clo(lam31137_fptr, 0));

void* lam31139_fptr() // lam31139 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31140 = arg_buffer[1];
//reading env and args
void* a3073030987 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* a3072930985 = (decode_clo(env31140))[5];
//not do dummy comment
void* append = (decode_clo(env31140))[4];
//not do dummy comment
void* kont30828 = (decode_clo(env31140))[3];
//not do dummy comment
void* lst2 = (decode_clo(env31140))[2];
//not do dummy comment
void* cons = (decode_clo(env31140))[1];

//creating new closure instance
void** clo31573 = alloc_clo(lam31137_fptr, 3);

//setting env list
clo31573[1] = cons;
clo31573[2] = kont30828;
clo31573[3] = a3072930985;
void* f3082930988 = encode_clo(clo31573);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(append);
arg_buffer[2] = f3082930988;
arg_buffer[3] = a3073030987;
arg_buffer[4] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(append))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31139 = encode_clo(alloc_clo(lam31139_fptr, 0));

void* lam31141_fptr() // lam31141 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31142 = arg_buffer[1];
//reading env and args
void* a3072930985 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31142))[6];
//not do dummy comment
void* append = (decode_clo(env31142))[5];
//not do dummy comment
void* kont30828 = (decode_clo(env31142))[4];
//not do dummy comment
void* lst2 = (decode_clo(env31142))[3];
//not do dummy comment
void* lst1 = (decode_clo(env31142))[2];
//not do dummy comment
void* cons = (decode_clo(env31142))[1];

//creating new closure instance
void** clo31575 = alloc_clo(lam31139_fptr, 5);

//setting env list
clo31575[1] = cons;
clo31575[2] = lst2;
clo31575[3] = kont30828;
clo31575[4] = append;
clo31575[5] = a3072930985;
void* f3083030986 = encode_clo(clo31575);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(cdr);
arg_buffer[2] = f3083030986;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(cdr))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* lam31141 = encode_clo(alloc_clo(lam31141_fptr, 0));

void* lam31143_fptr() // lam31143 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31144 = arg_buffer[1];
//reading env and args
void* a3072830983 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* cdr = (decode_clo(env31144))[7];
//not do dummy comment
void* append = (decode_clo(env31144))[6];
//not do dummy comment
void* kont30828 = (decode_clo(env31144))[5];
//not do dummy comment
void* lst2 = (decode_clo(env31144))[4];
//not do dummy comment
void* cons = (decode_clo(env31144))[3];
//not do dummy comment
void* lst1 = (decode_clo(env31144))[2];
//not do dummy comment
void* car = (decode_clo(env31144))[1];

//if-clause
bool if_guard31576 = is_true(a3072830983);
if(if_guard31576)
{

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30828);
arg_buffer[2] = lst2;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30828))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{

//creating new closure instance
void** clo31578 = alloc_clo(lam31141_fptr, 6);

//setting env list
clo31578[1] = cons;
clo31578[2] = lst1;
clo31578[3] = lst2;
clo31578[4] = kont30828;
clo31578[5] = append;
clo31578[6] = cdr;
void* f3083130984 = encode_clo(clo31578);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(car);
arg_buffer[2] = f3083130984;
arg_buffer[3] = lst1;
arg_buffer[0] = reinterpret_cast<void*>(3);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(car))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31143 = encode_clo(alloc_clo(lam31143_fptr, 0));

void* append_fptr() // append 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31145 = arg_buffer[1];
//reading env and args
void* kont30828 = arg_buffer[2];
void* lst1 = arg_buffer[3];
void* lst2 = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31580 = alloc_clo(lam31143_fptr, 7);

//setting env list
clo31580[1] = car;
clo31580[2] = lst1;
clo31580[3] = cons;
clo31580[4] = lst2;
clo31580[5] = kont30828;
void* append = encode_clo(alloc_clo(append_fptr, 0));

clo31580[6] = append;
clo31580[7] = cdr;
void* f3083230982 = encode_clo(clo31580);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(null_u63);
arg_buffer[2] = f3083230982;
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
void* _31146 = arg_buffer[1];
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

void* kont3083330990 = prim_car(lst);
void* lst30991 = prim_cdr(lst);
void* x3073230992 = apply_prim_hash(lst30991);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont3083330990);
arg_buffer[2] = x3073230992;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont3083330990))[0]);
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
void* _31147 = arg_buffer[1];
//reading env and args
void* kont30835 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3073330993 = prim_hash_u45ref(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30835);
arg_buffer[2] = x3073330993;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30835))[0]);
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
void* _31148 = arg_buffer[1];
//reading env and args
void* kont30836 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
void* v = arg_buffer[5];
//Dummy comment
void* x3073430994 = prim_hash_u45set(h, k, v);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30836);
arg_buffer[2] = x3073430994;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30836))[0]);
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
void* _31149 = arg_buffer[1];
//reading env and args
void* kont30837 = arg_buffer[2];
void* h = arg_buffer[3];
void* k = arg_buffer[4];
//Dummy comment
void* x3073530995 = prim_hash_u45has_u45key_u63(h, k);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30837);
arg_buffer[2] = x3073530995;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30837))[0]);
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
void* _31150 = arg_buffer[1];
//reading env and args
void* kont30838 = arg_buffer[2];
void* h = arg_buffer[3];
//Dummy comment
void* x3073630996 = prim_hash_u45count(h);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30838);
arg_buffer[2] = x3073630996;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30838))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void* lam31153_fptr() // lam31153 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* env31154 = arg_buffer[1];
//reading env and args
void* a3073730998 = arg_buffer[2];
//Dummy comment
//not do dummy comment
void* kont30839 = (decode_clo(env31154))[1];

//if-clause
bool if_guard31581 = is_true(a3073730998);
if(if_guard31581)
{
mpz_t* mpzvar31582 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31582, "1", 10);
void* x3073830999 = encode_mpz(mpzvar31582);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30839);
arg_buffer[2] = x3073830999;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30839))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}
else
{
mpz_t* mpzvar31583 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31583, "2", 10);
void* x3073931000 = encode_mpz(mpzvar31583);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(kont30839);
arg_buffer[2] = x3073931000;
arg_buffer[0] = reinterpret_cast<void*>(2);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(kont30839))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

}

void* lam31153 = encode_clo(alloc_clo(lam31153_fptr, 0));

void* eq_u45test_fptr() // eq-test 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31155 = arg_buffer[1];
//reading env and args
void* kont30839 = arg_buffer[2];
void* x = arg_buffer[3];
void* y = arg_buffer[4];
//Dummy comment

//creating new closure instance
void** clo31585 = alloc_clo(lam31153_fptr, 1);

//setting env list
clo31585[1] = kont30839;
void* f3084030997 = encode_clo(clo31585);



//clo-app
arg_buffer[1]=reinterpret_cast<void*>(eq_u63);
arg_buffer[2] = f3084030997;
arg_buffer[3] = x;
arg_buffer[4] = y;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(eq_u63))[0]);
//assign buffer size to numArgs
//call next proc using a function pointer
function_ptr();
return nullptr;
}

void* eq_u45test = encode_clo(alloc_clo(eq_u45test_fptr, 0));

void* brouhaha_main_fptr() // brouhaha_main 
{
//reading number of args
numArgs = reinterpret_cast<long>(arg_buffer[0]);
//reading env
void* _31158 = arg_buffer[1];
//reading env and args
void* kont30841 = arg_buffer[2];
//Dummy comment
mpz_t* mpzvar31586 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31586, "1", 10);
void* a3074031001 = encode_mpz(mpzvar31586);
mpz_t* mpzvar31587 = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
mpz_init_set_str(*mpzvar31587, "1", 10);
void* a3074131002 = encode_mpz(mpzvar31587);

//clo-app
arg_buffer[1]=reinterpret_cast<void*>(eq_u45test);
arg_buffer[2] = kont30841;
arg_buffer[3] = a3074031001;
arg_buffer[4] = a3074131002;
arg_buffer[0] = reinterpret_cast<void*>(4);
auto function_ptr = reinterpret_cast<void (*)()>((decode_clo(eq_u45test))[0]);
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

